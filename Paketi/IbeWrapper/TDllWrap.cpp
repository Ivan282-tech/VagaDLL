//---------------------------------------------------------------------------

#pragma hdrstop

#include "TDllWrap.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

TLogger *TDllWrap::_logger = new TLogger(nullptr);
bool TDllWrap::_lastCommandSuccess = true;
bool TDllWrap::_stopOnError = true;
int __stdcall OnConnectionError(char* error)
{
	TDllWrap::_logger->Log("ibescript.dll prijavljuje gresku pri konekciji: " + AnsiString(error), llCritical);
	return 1;
}
int __stdcall OnError(char * text, char * errorMessage)
{
	TDllWrap::_logger->Log("ibescript.dll prijavljuje gresku: " + AnsiString(errorMessage), llCritical);
	TDllWrap::_logger->Log("ibescript.dll tekst: " + AnsiString(text), llCritical);
	TDllWrap::_lastCommandSuccess = false;
	return 0;
}
int __stdcall OnBefore(char * statement, char * text)
{
	TDllWrap::_logger->Log("ibescript.dll radi: " + AnsiString(statement), llDebug);
	if (CompareStr(AnsiString(text), "Executing IBEBlock...") != 0)
	{
		TDllWrap::_logger->Log(AnsiString(text), llInfo);
	}
	//if ((!TDllWrap::_lastCommandSuccess)&&TDllWrap::_stopOnError)
	//{
   //		TDllWrap::_logger->Log("Aktivno zaustavljanje zbog greske, staje proces.", llCritical);
   //     return 1;
   //	}
	return 0;
}
int __stdcall OnAfter(char * statement, int success)
{
	if (success != 1)
	{
		TDllWrap::_logger->Log("ibescript.dll nije uspeo da izvrsi: " + AnsiString(statement), llCritical);
		TDllWrap::_lastCommandSuccess = false;
	}
	return 0;
}

TDllWrap::TDllWrap(TFileData &fileData, TFtpData &ftpData,
			TDbData &dbData, bool stopOnError)
{
	_ibeDll = LoadLibraryA(dbData._ibeScriptdll.c_str());
	_connectDB = (TConnectDB)GetProcAddress(_ibeDll, "Connect");
	_disconnectDB = (TDisconnectDB)GetProcAddress(_ibeDll, "Disconnect");
	_executeFile = (TExecute)GetProcAddress(_ibeDll, "ExecScriptFile");
	_executeText = (TExecute)GetProcAddress(_ibeDll, "ExecScriptText");
	_dbData = &dbData;
	_ftpData = &ftpData;
	_fileData = &fileData;
	_stopOnError = stopOnError;
}
void TDllWrap::CleanWorkFolder()
{
	_logger->Log("Brisanje fajlova.", llInfo);
	if (TDirectory::Exists(_fileData->_tempDirPath))
	{
		TDirectory::Delete(_fileData->_tempDirPath, true);
	}
	ForceDirectories(_fileData->_tempDirPath);
}

bool TDllWrap::ExecuteCommand(Commands command)
{
    _lastCommandSuccess = true;
	AnsiString commandText = "";
	switch (command)
	{
		case ecOnline:
		case ecOnlineSingle:
		{
			AnsiString single = command == ecOnlineSingle ? "Mode=Single" : "";
			_logger->Log("Izvrsavam online baze.", llInfo);
			commandText = "execute ibeblock as begin "
				"err = ibec_OnlineDatabase("
				"'" + _dbData->_fbBaza.ConnectionString() + "',"
				"'ClientLib="
				+ _dbData->_FBdll + ";"
				"User=" + _dbData->_fbBaza._user + "; Password=" + _dbData->_fbBaza._password +";"
				+ single + "'); "
                "if (err is not null) then "
				"exception ERR_EXP err;"
				" end";
			break;
		}
		case ecShutdown:
		case ecShutdownFull:
		{
			AnsiString full = command == ecShutdownFull ? "Mode=Full" : "Mode=Single";
			_logger->Log("Izvrsavam shutdown baze.", llInfo);
			commandText = "execute ibeblock as begin "
					"err = ibec_ShutdownDatabase("
					"'" + _dbData->_fbBaza.ConnectionString() + "',"
					"'ClientLib="
					+ _dbData->_FBdll + ";"
					"User=" + _dbData->_fbBaza._user + "; Password=" + _dbData->_fbBaza._password +";"
					+ full + "'); "
					"if (err is not null) then "
					"exception ERR_EXP err;"
					" end";
			break;
		}
		case ecRestore:
			_logger->Log("Izvrsavam restore baze.", llInfo);
			commandText = "execute ibeblock as begin "
					"err = ibec_RestoreDatabase("
					"'" + TPath::Combine(_fileData->_targetFolder, _fileData->_archiveName) + "',"
					"'" + _dbData->_fbBaza.BazaPunNaziv() + ".temp" + "',"
					"'ClientLib="
					+ _dbData->_FBdll + ";"
					"User=" + _dbData->_fbBaza._user + "; Password=" + _dbData->_fbBaza._password +";"
					"OneAtATime;INACTIVE;CREATE_DATABASE',null);"
					"if (err is not null) then "
					"exception ERR_EXP err;"
					" end";
			break;
		case ecScript:
			if (ExecuteCommand(ecShutdown) && ExecuteCommand(ecOnlineSingle))
			{
				_logger->Log("Konektujem se na bazu.", llInfo);
			   	ConnectToDb();
		   	}
			break;
		case ecRecompileProcs:
			if (ExecuteCommand(ecShutdown) && ExecuteCommand(ecOnlineSingle))
			{
				ConnectToDb();
				_logger->Log("Izvrsavam rekompajliranje svih procedura u bazi.", llInfo);
				commandText = "execute ibeblock as begin "
					"err = ibec_RecompileProcedure(0, '');"
					"if (err <> '') then "
					"exception ERR_EXP err; "
				" end";
			}
			break;
		case ecGetServerLog:
			_logger->Log("Uzimam fb serverski log.", llInfo);
			commandText  = "execute ibeblock as begin "
					"ibec_GetServerLog("
					"'ServerName=" + _dbData->_fbBaza.ServerPun() + ";"
					"User=" + _dbData->_fbBaza._user + "; Password=" + _dbData->_fbBaza._password +";"
					"ClientLib=" + _dbData->_FBdll +"','"
					+ TPath::Combine(_fileData->_tempDirPath, "serverLog-" + _helper->TrenutniDatumCist() + ".txt") + "');"
					"if (not ibec_FileExists('"
					+ TPath::Combine(_fileData->_tempDirPath, "serverLog-" + _helper->TrenutniDatumCist() + ".txt") + "')) then "
					"exception ERR_EXP 'Greska prilikom uzimanja serverskog loga.';"
					"end";
			break;

	}
	if (command == ecScript && _lastCommandSuccess)
	{
		_logger->Log("Izvrsavam skriptu na bazi.", llInfo);
		_executeFile(_dbData->_scriptFile.c_str(), OnError, OnBefore, OnAfter);
	}else if (_lastCommandSuccess)
	{
		_executeText(commandText.c_str(), OnError, OnBefore, OnAfter);
	}
	if (!_lastCommandSuccess && (command == ecShutdownFull || command == ecShutdown))
	{
		_logger->Log("Shutdown nije uspeo, pokusavam Online pa Shutdown.", llCritical);
		if (ExecuteCommand(ecOnlineSingle)&&ExecuteCommand(command))
		{
			_logger->Log("Shutdown je sada uspeo", llInfo);
		} else
		{
			_logger->Log("Shutdown jos uvek neuspesan, zaustavljam izvrsavanje.", llCritical);
			return false;
        }
	} else if (!_lastCommandSuccess && _stopOnError)
	{
		_logger->Log("Proces staje zbog prethodnih gresaka.", llCritical);
		return false;
	}
	if (command == ecRestore)
	{
        _stopOnError = false;
		ExecuteCommand(ecShutdownFull);
		AnsiString fqDbName = _dbData->_fbBaza.BazaPunNaziv();
		DeleteFile(fqDbName);
		RenameFile(fqDbName + ".temp", fqDbName);
	}
	if (command == ecRestore || command == ecScript || command == ecRecompileProcs)
	{
		ExecuteCommand(ecOnline);
	}
	_disconnectDB();
	return _lastCommandSuccess;
}

void TDllWrap::ConnectToDb()
{
	AnsiString connString = "db_name="
		"'" + _dbData->_fbBaza.ConnectionString() + "';"
		"user_name=SYSDBA; password=masterkey;"
		"clientlib='" + _dbData->_FBdll + "'; sql_role_name=ADMIN; sql_dialect=3;";
	_logger->Log(connString, llCritical);
	_connectDB(connString.c_str(), OnConnectionError);
}
