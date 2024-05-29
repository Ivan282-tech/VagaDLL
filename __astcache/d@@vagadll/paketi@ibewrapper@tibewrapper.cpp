//---------------------------------------------------------------------------

#include <vcl.h>

#pragma hdrstop

#include "TIbeWrapper.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------
// ValidCtrCheck is used to assure that the components created do not have
// any pure virtual functions.
//

static inline void ValidCtrCheck(TIbeWrapper *)
{
	new TIbeWrapper(NULL);
}
//---------------------------------------------------------------------------
__fastcall TIbeWrapper::TIbeWrapper(TComponent* Owner)
	: TComponent(Owner)
{
}

void TIbeWrapper::InitWrapper()
{
	if (!_initDone)
	{
		//Exception treba da ide dalje ako nema ovo, kriticno
		_fileData->_cashITDir = ParamStr(1);
		if (_fileData->_cashITDir.IsEmpty())
		{
			AnsiString exeFile=Application->ExeName;
			_fileData->_cashITDir = ExtractFilePath(exeFile);
		}else
		{
			_fileData->_cashITDir.Delete(1, 2);
		}

		try
		{
			_ftpData->_server = _helper->ProcitajJSON("udaljeno", "FTPserver")->DohvatiRezultat();
			_ftpData->_rootDir = _helper->ProcitajJSON("udaljeno", "FTPRoot")->DohvatiRezultat();
			_ftpData->_port = _helper->ProcitajJSON("udaljeno", "port")->DohvatiRezultat();
			_ftpData->_username = _helper->ProcitajJSON("udaljeno", "username")->DohvatiRezultat();
			_ftpData->_password  = _helper->ProcitajJSON("udaljeno", "password")->DohvatiRezultat();
		}catch(Exception &ex)
		{
			_ftpOK = false;
			_logger->Log("Nema konfiguracije za ftp, funkcionalnost onemogucena!", llCritical);
			_logger->Log(ex.Message, llCritical);
		}catch(std::exception &ex)
		{
			_ftpOK = false;
			_logger->Log("Nema konfiguracije za ftp, funkcionalnost onemogucena!", llCritical);
			_logger->Log(ex.what(), llCritical);
		}

		try
		{
			_dbData->_FBdll = TPath::Combine(_fileData->_cashITDir, _helper->ProcitajJSON("lokalno", "FBdll")->DohvatiRezultat());
			_dbData->_ibeScriptdll = TPath::Combine(_fileData->_cashITDir, "ibescript.dll");
			AnsiString baza = _helper->ProcitajJSON("FB", "dbKonekcija")->DohvatiRezultat();
			_dbData->_fbBaza = _helper->ProcitajIniFB(baza)->DohvatiRezultat();
		}catch(Exception &ex)
		{
			_dbOK = false;
			_logger->Log("Nema konfiguracije za bazu, funkcionalnost onemogucena!", llCritical);
			_logger->Log(ex.Message, llCritical);
		}catch(std::exception &ex)
		{
			_dbOK = false;
			_logger->Log("Nema konfiguracije za bazu, funkcionalnost onemogucena!", llCritical);
			_logger->Log(ex.what(), llCritical);
		}

		try
		{
			_dbData->_pib = _helper->DohvatiHostInformacije()
				->DohvatiRezultat()._pib;
		}catch(Exception &ex)
		{
			_logger->Log("Pib nije procitan!", llCritical);
			_logger->Log(ex.Message, llCritical);
			_dbData->_pib = "???";
		}catch(std::exception &ex)
		{
			_logger->Log("Pib nije procitan!", llCritical);
			_logger->Log(ex.what(), llCritical);
			_dbData->_pib = "???";
        }

		_fileData->_targetFolder = _fileData->_tempDirPath = TPath::Combine(TPath::GetTempPath(), "BusTemp");

		_zip7 = TPath::Combine(_fileData->_cashITDir, "7za.exe");
		if (!FileExists(_dbData->_FBdll))
		{
			AnsiString error = "Ne postoji " + _dbData->_FBdll;
			_logger->Log(error, llCritical);
			throw std::runtime_error(error.c_str());
		}else if (!FileExists(_dbData->_ibeScriptdll))
		{
			AnsiString error = "Ne postoji " + _dbData->_ibeScriptdll;
			_logger->Log(error, llCritical);
			throw std::runtime_error(error.c_str());
		}else if (!FileExists(_zip7))
		{
			AnsiString error = "Ne postoji " + _zip7;
			_logger->Log(error, llCritical);
			throw std::runtime_error(error.c_str());
		}
		_wrapper = new TDllWrap(*_fileData, *_ftpData, *_dbData, _stopOnError);
		_initDone = true;
	}
}

TRezultatOperacije<bool> *TIbeWrapper::IzvrsiSkripte()
{
	try
	{
		InitWrapper();
	}catch(Exception &ex)
	{
		return new TRezultatOperacije<bool>(false, false, "Greska pri inicijalizaciji: " + ex.Message);
	}
	catch(std::exception &ex)
	{
		return new TRezultatOperacije<bool>(false, false, "Greska pri inicijalizaciji: " + AnsiString(ex.what()));
	}
	if (!_dbOK)
	{
		return new TRezultatOperacije<bool>(false, false, "Konfig za bazu nije ok, proveri confIT.json");
	}

	auto skripteOp = _helper->ProcitajJSONNiz("konfiguracija", "skripte");
	if (!skripteOp->OperacijaUspela())
	{
		return new TRezultatOperacije<bool>(false, false, "Greska pri citanju skripti"
			+ skripteOp->DohvatiGresku());
	}

	auto skripte = skripteOp->DohvatiRezultat();

	for(AnsiString skripta : skripte)
	{
		AnsiString fqScript = TPath::Combine(_fileData->_tempDirPath, skripta);
		if (!FileExists(fqScript))
		{
			return new TRezultatOperacije<bool>(false, false, "Skripta "  + skripta + " ne postoji!");
		}
		_logger->Log("Izvrsavam skriptu " + skripta, llInfo);
		_dbData->_scriptFile = fqScript;
		_wrapper->ExecuteCommand(ecScript);
	}
	return new TRezultatOperacije<bool>(true, true);
}

TRezultatOperacije<bool> *TIbeWrapper::BekapujBazu(AnsiString nazivBackupa, bool sacuvajBackup)
{
	try
	{
		InitWrapper();
	}catch(Exception &ex)
	{
		return new TRezultatOperacije<bool>(false, false, "Greska pri inicijalizaciji: " + ex.Message);
	}catch(std::exception &ex)
	{
		return new TRezultatOperacije<bool>(false, false, "Greska pri inicijalizaciji: " + AnsiString(ex.what()));
	}
	if (!_dbOK)
	{
		return new TRezultatOperacije<bool>(false, false, "Konfig za bazu nije ok, proveri confIT.json");
	}
	_fileData->_archiveName = nazivBackupa;


	if (!_dbData->_fbBaza._lokacijaBaze.IsEmpty() && !FileExists(_dbData->_fbBaza.BazaPunNaziv()))
	{
		return new TRezultatOperacije<bool>(false, false, "Neuspeo pristup bazi: " + _dbData->_fbBaza.BazaPunNaziv());
	}
	double velicinaBaze = 0;
	try
	{
		if (!_dbData->_fbBaza._lokacijaBaze.IsEmpty())
		{
			auto prazno = _helper->PrazanProstor()->DohvatiRezultat();
			velicinaBaze = _helper->VelicinaFajla(_dbData->_fbBaza.BazaPunNaziv())->DohvatiRezultat();
			if (velicinaBaze*2 >= prazno )
			{
				return new TRezultatOperacije<bool>(false, false, "Kriticno malo praznog prostora na disku");
			}
		}
	}catch(...)
	{
		return new TRezultatOperacije<bool>(false, false, "Problem pri proveri velicina fajla i slobodnog prostora");
	}

	if (!_dbData->_fbBaza.Linux() && !_dbData->_fbBaza._lokacijaBaze.IsEmpty() &&
		((!_dbData->_fbBaza.Linux() && velicinaBaze < 3.9) || velicinaBaze < 1.9))  //Baze manje od 4GB
	{                                                                           //ili 2GB za linux, moze nbackup
                                                                                //Trenutno nista nbackup za linux
		UnicodeString lock = "nbackup -u SYSDBA -P masterkey -L \""
					+ _dbData->_fbBaza.BazaPunNaziv() + "\"";
		UnicodeString unlock = "nbackup -u SYSDBA -P masterkey -UN \""
			+ _dbData->_fbBaza.BazaPunNaziv() + "\"";

		PROCESS_INFORMATION procInfo;
		STARTUPINFO startInfo;

		memset(&procInfo, 0, sizeof(procInfo));
		memset(&startInfo, 0, sizeof(startInfo));
		startInfo.cb = sizeof(startInfo);

		CreateProcess(nullptr, lock.t_str(), nullptr, nullptr, false,
			NORMAL_PRIORITY_CLASS | CREATE_NEW_PROCESS_GROUP | CREATE_NO_WINDOW,
			nullptr, nullptr, &startInfo, &procInfo);



		WaitForSingleObject(procInfo.hProcess, 2000);
		DWORD exit_code;
		GetExitCodeProcess(procInfo.hProcess, &exit_code);
		if (exit_code != 0)
		{
			_logger->Log("Neuspeh kod zakljucavanja baze", llCritical);
			return new TRezultatOperacije<bool>(false, false, "Neuspeh kod zakljucavanja baze");
		}

		_fileData->_archiveName =  nazivBackupa + ".fdb";

		TFile::Copy(_dbData->_fbBaza.BazaPunNaziv(), TPath::Combine(_fileData->_tempDirPath,
			_fileData->_archiveName), true);

		memset(&procInfo, 0, sizeof(procInfo));
		memset(&startInfo, 0, sizeof(startInfo));
		startInfo.cb = sizeof(startInfo);

		CreateProcess(nullptr, unlock.t_str(), nullptr, nullptr, false,
			NORMAL_PRIORITY_CLASS | CREATE_NEW_PROCESS_GROUP | CREATE_NO_WINDOW,
			nullptr, nullptr, &startInfo, &procInfo);



		WaitForSingleObject(procInfo.hProcess, 2000);
		GetExitCodeProcess(procInfo.hProcess, &exit_code);
		if (exit_code != 0)
		{
			_logger->Log("Neuspeh kod otkljucavanja baze", llCritical);
			return new TRezultatOperacije<bool>(false, false, "Neuspeh kod otkljucavanja baze");
		}
	}else
	{
		_fileData->_archiveName = nazivBackupa + ".fbk";
		UnicodeString gbak = "gbak -b " + _dbData->_fbBaza.BazaPunNaziv() + " "
			+ TPath::Combine(_fileData->_tempDirPath, _fileData->_archiveName) + " -user SYSDBA -password masterkey";

		PROCESS_INFORMATION procInfo;
		STARTUPINFO startInfo;

		memset(&procInfo, 0, sizeof(procInfo));
		memset(&startInfo, 0, sizeof(startInfo));
		startInfo.cb = sizeof(startInfo);

		CreateProcess(nullptr, gbak.t_str(), nullptr, nullptr, false,
			NORMAL_PRIORITY_CLASS | CREATE_NEW_PROCESS_GROUP | CREATE_NO_WINDOW,
			nullptr, nullptr, &startInfo, &procInfo);



		WaitForSingleObject(procInfo.hProcess, 600000); //10 minuta max za gbak
		DWORD exit_code;
		GetExitCodeProcess(procInfo.hProcess, &exit_code);
		if (exit_code != 0)
		{
			_logger->Log("Neuspeh kod bekapovanja baze", llCritical);
			return new TRezultatOperacije<bool>(false, false, "Neuspeh kod bekapovanja baze");
		}
	}

	if (sacuvajBackup)
	{
		try
		{
			TFile::Copy(TPath::Combine(_fileData->_tempDirPath, _fileData->_archiveName),
				_dbData->_fbBaza.BazaPunNaziv(), true);
		}catch (Exception &ex)
		{
			return new TRezultatOperacije<bool>(false, false, "Greska pri kopiranju baze: " + Trim(ex.Message));
		}catch (std::exception &ex)
		{
			return new TRezultatOperacije<bool>(false, false, "Greska pri kopiranju baze: " + Trim(AnsiString(ex.what())));
		}
	}
	return new TRezultatOperacije<bool>(true, true);
}
TRezultatOperacije<bool> *TIbeWrapper::RestorujBazu(AnsiString nazivBackupa, bool trajniDir)
{
	try
	{
		InitWrapper();
	}catch(Exception &ex)
	{
		return new TRezultatOperacije<bool>(false, false, "Greska pri inicijalizaciji: " + ex.Message);
	}catch(std::exception &ex)
	{
		return new TRezultatOperacije<bool>(false, false, "Greska pri inicijalizaciji: " + AnsiString(ex.what()));
	}
	if (!_dbOK)
	{
		return new TRezultatOperacije<bool>(false, false, "Konfig za bazu nije ok, proveri confIT.json");
	}
	_fileData->_archiveName = nazivBackupa;
	_fileData->_targetFolder = trajniDir ? _dbData->_fbBaza._lokacijaBaze : _fileData->_tempDirPath;
	bool success = _wrapper->ExecuteCommand(ecRestore);
	if (!success)
	{
		return new TRezultatOperacije<bool>(false, false, "Greska pri restore operaciji.");
	}
	return new TRezultatOperacije<bool>(true, true);
}
TRezultatOperacije<bool> *TIbeWrapper::RekompajlirajProcedure()
{
	try
	{
		InitWrapper();
	}catch(Exception &ex)
	{
		return new TRezultatOperacije<bool>(false, false, "Greska pri inicijalizaciji: " + ex.Message);
	}catch(std::exception &ex)
	{
		return new TRezultatOperacije<bool>(false, false, "Greska pri inicijalizaciji: " + AnsiString(ex.what()));
	}
	if (!_dbOK)
	{
		return new TRezultatOperacije<bool>(false, false, "Konfig za bazu nije ok, proveri confIT.json");
	}
	bool success = _wrapper->ExecuteCommand(ecRecompileProcs);
	if (!success)
	{
		return new TRezultatOperacije<bool>(false, false, "Neuspesno rekompajliranje procedura.");
	}
	return new TRezultatOperacije<bool>(true, true);
}
TIdFTP * TIbeWrapper::CreateFTP()
{
    TIdFTP *ftp = new TIdFTP(nullptr);
	ftp->Username = _ftpData->_username;
	ftp->Password = _ftpData->_password;
	ftp->Host = _ftpData->_server;
	ftp->Port = StrToIntDef(_ftpData->_port, 21);
	ftp->Passive = true;
    ftp->TransferType = ftBinary;
	return ftp;
}
TRezultatOperacije<bool> *TIbeWrapper::PreuzmiFajl(AnsiString filename, AnsiString destFilename, bool fqPutanja)
{
	try
	{
		InitWrapper();
	}catch(Exception &ex)
	{
		return new TRezultatOperacije<bool>(false, false, "Greska pri inicijalizaciji: " + ex.Message);
	}catch(std::exception &ex)
	{
		return new TRezultatOperacije<bool>(false, false, "Greska pri inicijalizaciji: " + AnsiString(ex.what()));
	}
	if (!_ftpOK)
	{
		return new TRezultatOperacije<bool>(false, false, "Konfig za ftp nije ok, proveri confIT.json");
	}
	_fileData->_archiveName = filename;
	_fileData->_targetArch = destFilename.IsEmpty() ? filename : destFilename;
	InitWrapper();
	_logger->Log("Krece preuzimanje sa ftp-a.", llInfo);

	TIdFTP *ftp = CreateFTP();

	try
	{
		ftp->Connect();
		ftp->ChangeDir(_ftpData->_rootDir);
	}catch(Exception &ex)
	{
		return new TRezultatOperacije<bool>(false, false, "Greska pri pokretanju ftp-a: " + Trim(ex.Message));
	}catch(std::exception &ex)
	{
		return new TRezultatOperacije<bool>(false, false, "Greska pri pokretanju ftp-a: " + Trim(AnsiString(ex.what())));
	}

	if (!fqPutanja)
	{
		bool found = false;
		bool error = false;
		try
		{
			ftp->ChangeDir(_dbData->_pib);
			ftp->List();

			int size = ftp->DirectoryListing->Count;
			for (int i = 2; i < size; i++) //od 2 zato sto su 0 i 1 ".." i "."
			{
				if (ftp->DirectoryListing->Items[i]->FileName.CompareIC(filename) == 0)
				{
					found = true;
					_logger->Log("Nasao poseban fajl.", llInfo);
					break;
				}
			}
		} catch(Exception &ex)
		{
			_logger->Log("Greska pri pristupu direktorijumu po pibu: " + _dbData->_pib, llCritical);
			_logger->Log("Greska: " + Trim(ex.Message), llCritical);
			_logger->Log("Pokusavam da nadjem fajl na root folderu.", llCritical);
			error = true;
		} catch(std::exception &ex)
		{
			_logger->Log("Greska pri pristupu direktorijumu po pibu: " + _dbData->_pib, llCritical);
			_logger->Log("Greska: " + Trim(ex.what()), llCritical);
			_logger->Log("Pokusavam da nadjem fajl na root folderu.", llCritical);
			error = true;
		}

		if (!found && !error)
		{
			ftp->ChangeDirUp();
		}
	}else
	{
		auto split = SplitString(filename, "\\");
		ftp->ChangeDir(split[1]);
		_fileData->_archiveName = split[2];
    }

	try
	{
		ftp->Get(_fileData->_archiveName, TPath::Combine(_fileData->_tempDirPath, _fileData->_targetArch), true);
	} catch (Exception &ex)
	{
		return new TRezultatOperacije<bool>(false, false, "Greska pri preuzimanju fajla: " + Trim(ex.Message));
	} catch (std::exception &ex)
	{
		return new TRezultatOperacije<bool>(false, false, "Greska pri preuzimanju fajla: " + Trim(AnsiString(ex.what())));
	}

	ftp->DisconnectNotifyPeer();
    delete ftp;
	_logger->Log("Preuzimanje zavrseno.", llInfo);
	return new TRezultatOperacije<bool>(true, true);
}

TRezultatOperacije<AnsiString> *TIbeWrapper::PosaljiArhivu(AnsiString filename)
{
	try
	{
		InitWrapper();
	}catch(Exception &ex)
	{
		return new TRezultatOperacije<AnsiString>(false, "", "Greska pri inicijalizaciji: " + ex.Message);
	} catch (std::exception &ex)
	{
		return new TRezultatOperacije<AnsiString>(false, "", "Greska pri inicijalizaciji: " + AnsiString(ex.what()));
	}
	if (!_ftpOK)
	{
		return new TRezultatOperacije<AnsiString>(false, "", "Konfig za ftp nije ok, proveri confIT.json");
	}
	_logger->Log("Krece slanje na ftp.", llInfo);

	TIdFTP *ftp = CreateFTP();

	try
	{
		ftp->Connect();
		ftp->ChangeDir(_ftpData->_rootDir);
	}catch(Exception &ex)
	{
		return new TRezultatOperacije<AnsiString>(false, "", "Greska pri startu ftpa: " + Trim(ex.Message));
	}catch(std::exception &ex)
	{
		return new TRezultatOperacije<AnsiString>(false, "", "Greska pri startu ftpa: " + Trim(AnsiString(ex.what())));
	}

	try
	{
		ftp->ChangeDir(_dbData->_pib);
	}catch (Exception &ex)
	{
		_logger->Log("Greska pri prelaska u dir po pibu: " + _dbData->_pib, llCritical);
		_logger->Log("Pokusavam da ga napravim.", llCritical);
		try
		{
			ftp->MakeDir(_dbData->_pib);
			ftp->ChangeDir(_dbData->_pib);
		} catch (Exception &ex2)
		{
			_logger->Log("Neuspelo, zaustavljam proces", llCritical);
			_logger->Log("Greska pri ulasku: " + Trim(ex.Message), llCritical);
			_logger->Log("Greska pri kreiranju: " + ex2.Message, llCritical);
			ftp->DisconnectNotifyPeer();
			delete ftp;
			return new TRezultatOperacije<AnsiString>(false, "", "Greska pri navigaciji kroz ftp server");
		}catch (std::exception &ex2)
		{
			_logger->Log("Neuspelo, zaustavljam proces", llCritical);
			_logger->Log("Greska pri ulasku: " + Trim(ex.Message), llCritical);
			_logger->Log("Greska pri kreiranju: " + AnsiString(ex2.what()), llCritical);
			ftp->DisconnectNotifyPeer();
			delete ftp;
			return new TRezultatOperacije<AnsiString>(false, "", "Greska pri navigaciji kroz ftp server");
		}
	}

	AnsiString fqFajl = TPath::Combine(_ftpData->_rootDir, _dbData->_pib);
	try
	{
		AnsiString hostname = GetEnvironmentVariable("COMPUTERNAME");
		AnsiString fullName = TPath::GetFileNameWithoutExtension(filename) + "-" + _helper->TrenutniDatumCist() + "-" + hostname +
			TPath::GetExtension(filename);
		fqFajl = TPath::Combine(fqFajl, fullName);
		ftp->Put(TPath::Combine(_fileData->_tempDirPath, filename), fullName);
	} catch (Exception &ex)
	{
		ftp->DisconnectNotifyPeer();
		delete ftp;
		return new TRezultatOperacije<AnsiString>(false, "", "Greska pri preuzimanju fajla");
	} catch (std::exception &ex)
	{
		ftp->DisconnectNotifyPeer();
		delete ftp;
		return new TRezultatOperacije<AnsiString>(false, "", "Greska pri preuzimanju fajla");
	}

	ftp->DisconnectNotifyPeer();
	delete ftp;
	_logger->Log("Slanje zavrseno.", llInfo);
	return new TRezultatOperacije<AnsiString>(true, fqFajl);
}

TRezultatOperacije<bool> *TIbeWrapper::OtpakujFajl(AnsiString filename, bool cashIT)
{
	try
	{
		InitWrapper();
	}catch(Exception &ex)
	{
		return new TRezultatOperacije<bool>(false, false, "Greska pri inicijalizaciji: " + ex.Message);
	}catch(std::exception &ex)
	{
		return new TRezultatOperacije<bool>(false, false, "Greska pri inicijalizaciji: " + AnsiString(ex.what()));
	}
	CashITDir(cashIT);
	_fileData->_archiveName = filename;

	_logger->Log("Otpakivanje u toku...", llInfo);
	AnsiString comm = "cmd.exe /c " + _zip7 + " x -aoa -bb0 -y -o\""
		+ _fileData->_targetFolder + "\" \""
		+ TPath::Combine(_fileData->_tempDirPath, _fileData->_archiveName) + "\" >> archLog.txt";
	PROCESS_INFORMATION procInfo;
	STARTUPINFO startInfo;

	memset(&procInfo, 0, sizeof(procInfo));
	memset(&startInfo, 0, sizeof(startInfo));
	startInfo.cb = sizeof(startInfo);
	CreateProcess(nullptr, UnicodeString(comm).t_str(), nullptr, nullptr, false,
		NORMAL_PRIORITY_CLASS | CREATE_NEW_PROCESS_GROUP | CREATE_NO_WINDOW,
		nullptr, nullptr, &startInfo, &procInfo);
	WaitForSingleObject(procInfo.hProcess, 300000);
	DWORD exit_code;
	GetExitCodeProcess(procInfo.hProcess, &exit_code);
	if (exit_code != 0)
	{
		return new TRezultatOperacije<bool>(false, false, "Otpakivanje arhive nije uspelo, exit code " +
			UnicodeString(exit_code));
	}
	CloseHandle(procInfo.hProcess);
	return new TRezultatOperacije<bool>(true, true);
}
using namespace std;
TRezultatOperacije<bool> *TIbeWrapper::PokreniUpdejt(AnsiString zakazano)
{
	try
	{
		InitWrapper();
	}catch(Exception &ex)
	{
		return new TRezultatOperacije<bool>(false, false, "Greska pri inicijalizaciji: " + ex.Message);
	}catch(std::exception &ex)
	{
		return new TRezultatOperacije<bool>(false, false, "Greska pri inicijalizaciji: " + AnsiString(ex.what()));
	}
	try
	{
		_wrapper->CleanWorkFolder();
		AnsiString swapperTemp = TPath::Combine(_fileData->_cashITDir, "swapper");
		TFile::Copy("confIT.json",
			TPath::Combine(swapperTemp, "confIT.json"), true);
		TDirectory::Copy(swapperTemp, _fileData->_tempDirPath, true);

		PROCESS_INFORMATION procInfo;
		STARTUPINFO startInfo;

		memset(&procInfo, 0, sizeof(procInfo));
		memset(&startInfo, 0, sizeof(startInfo));
		startInfo.cb = sizeof(startInfo);

		if (zakazano.IsEmpty())
		{
			UnicodeString path =TPath::Combine(_fileData->_tempDirPath,
				"swapper.exe --" + _fileData->_cashITDir);
			CreateProcess(nullptr, path.t_str(), nullptr, nullptr, false,
				NORMAL_PRIORITY_CLASS | CREATE_NEW_PROCESS_GROUP,
				nullptr, UnicodeString(_fileData->_tempDirPath).t_str(), &startInfo, &procInfo);
		}else
		{
            TFormatSettings fmt;
			fmt.DateSeparator = '/';
			fmt.ShortDateFormat = "dd/mm/yyyy";
			fmt.TimeSeparator = ':';
			fmt.ShortTimeFormat = "hh:nn:ss";
			TDateTime dt = StrToDateTime(zakazano, fmt);
			AnsiString vreme = dt.FormatString("yyyy-mm-dd\"T\"hh:nn:ss");

			UnicodeString comm = "\"" + TPath::Combine(_fileData->_tempDirPath,
				"swapper.exe") + "\"";

			UnicodeString taskFull = "schtasks /create /F /SC ONCE /SD 12/12/2020"
				 " /ST 12:12 /TN CashITUpdate /TR "+ comm;

			CreateProcess(nullptr, taskFull.t_str(), nullptr, nullptr, false,
				NORMAL_PRIORITY_CLASS | CREATE_NEW_PROCESS_GROUP | CREATE_NO_WINDOW,
				nullptr, nullptr, &startInfo, &procInfo);
			WaitForSingleObject(procInfo.hProcess, 2000);
			DWORD exit_code;
			GetExitCodeProcess(procInfo.hProcess, &exit_code);
            if (exit_code != 0)
			{
				_logger->Log("Neuspeh kod zakazivanja updejta, komanda:", llCritical);
				_logger->Log(taskFull, llCritical);
				return new TRezultatOperacije<bool>(false, false, "Greska pri zakazivanju updejta: " +
					UnicodeString(exit_code));
			}


			memset(&procInfo, 0, sizeof(procInfo));
			memset(&startInfo, 0, sizeof(startInfo));
			startInfo.cb = sizeof(startInfo);

			comm = "cmd.exe /c schtasks /Query /XML /TN CashITUpdate > \"" +
				TPath::Combine(_fileData->_tempDirPath, "task.xml") + "\"";

			CreateProcess(nullptr, comm.t_str(), nullptr, nullptr, false,
				NORMAL_PRIORITY_CLASS | CREATE_NEW_PROCESS_GROUP | CREATE_NO_WINDOW,
				nullptr, nullptr, &startInfo, &procInfo);
			WaitForSingleObject(procInfo.hProcess, 2000);
			GetExitCodeProcess(procInfo.hProcess, &exit_code);
            if (exit_code != 0)
			{
				_logger->Log("Neuspeh kod zakazivanja updejta, komanda:", llCritical);
				_logger->Log(comm, llCritical);
				return new TRezultatOperacije<bool>(false, false, "Greska pri zakazivanju updejta: " +
					UnicodeString(exit_code));
			}

			try
			{
				UnicodeString pathOriginal = TPath::Combine(_fileData->_tempDirPath, "task.xml");
				ifstream input(pathOriginal.c_str());
				UnicodeString pathNew = TPath::Combine(_fileData->_tempDirPath, "taskMod.xml");
				ofstream output(pathNew.c_str());
				string line;
				if (output.is_open())
				{
					while (getline(input, line))
					{
						if (line.find("<StartBoundary>") != string::npos)
						{
							line = "<StartBoundary>" + vreme + "</StartBoundary>";
						}
						output << line << endl;
						if (line.find("<Command>") != string::npos)
						{
							output << "<Arguments>--" + _fileData->_cashITDir  + "</Arguments>" << endl;
							output << "<WorkingDirectory>" + _fileData->_tempDirPath + "</WorkingDirectory>" << endl;
						}
					}
					output.close();
				}
			}catch (Exception &ex)
			{
				_logger->Log("Neuspeh kod promene xmla za update, greska:", llCritical);
				_logger->Log(ex.Message, llCritical);
				return new TRezultatOperacije<bool>(false, false, "Greska pri zakazivanju updejta: " +
					UnicodeString(ex.Message));
			}catch (exception &stdex)
			{
                _logger->Log("Neuspeh kod promene xmla za update, greska:", llCritical);
				_logger->Log(stdex.what(), llCritical);
				return new TRezultatOperacije<bool>(false, false, "Greska pri zakazivanju updejta: " +
					UnicodeString(stdex.what()));
            }

			memset(&procInfo, 0, sizeof(procInfo));
			memset(&startInfo, 0, sizeof(startInfo));
			startInfo.cb = sizeof(startInfo);

			comm = "schtasks /Create /F /XML \"" +
				TPath::Combine(_fileData->_tempDirPath, "taskMod.xml") + "\" /TN CashITUpdate";
			CreateProcess(nullptr, comm.t_str(), nullptr, nullptr, false,
				NORMAL_PRIORITY_CLASS | CREATE_NEW_PROCESS_GROUP | CREATE_NO_WINDOW,
				nullptr, nullptr, &startInfo, &procInfo);
			WaitForSingleObject(procInfo.hProcess, 2000);
			GetExitCodeProcess(procInfo.hProcess, &exit_code);

			if (exit_code != 0)
			{
				_logger->Log("Neuspeh kod zakazivanja updejta, komanda:", llCritical);
				_logger->Log(comm, llCritical);
				return new TRezultatOperacije<bool>(false, false, "Greska pri zakazivanju updejta: " +
					UnicodeString(exit_code));
			}
			CloseHandle(procInfo.hProcess);


        }
	} catch (Exception &ex)
	{
		return new TRezultatOperacije<bool>(false, false, "Greska pri pokretanju updejta: " +
			Trim(ex.Message));
	} catch (std::exception &ex)
	{
		return new TRezultatOperacije<bool>(false, false, "Greska pri pokretanju updejta: " +
			Trim(AnsiString(ex.what())));
	}
	return new TRezultatOperacije<bool>(true, true);
}

TRezultatOperacije<bool> *TIbeWrapper::DohvatiServerLog()
{
	try
	{
		InitWrapper();
	}catch(Exception &ex)
	{
		return new TRezultatOperacije<bool>(false, false, "Greska pri inicijalizaciji: " + ex.Message);
	}catch(std::exception &ex)
	{
		return new TRezultatOperacije<bool>(false, false, "Greska pri inicijalizaciji: " + AnsiString(ex.what()));
	}
	if (!_dbOK)
	{
		return new TRezultatOperacije<bool>(false, false, "Konfig za bazu nije ok, proveri confIT.json");
	}
	bool success =_wrapper->ExecuteCommand(ecGetServerLog);
	return success ? new TRezultatOperacije<bool>(true, true):
		new TRezultatOperacije<bool>(false, false, "Greska pri uzimanju FB server logova.");
}
TRezultatOperacije<bool> *TIbeWrapper::DohvatiPodesavanja()
{
	TDirectory::CreateDirectory(TPath::Combine(_fileData->_tempDirPath, "podesavanje"));
	TDirectory::Copy(TPath::Combine(_fileData->_cashITDir, "podesavanje"), TPath::Combine(_fileData->_tempDirPath, "podesavanje"));
	TFile::Copy(TPath::Combine(_fileData->_cashITDir, "confIT.json"),
		TPath::Combine(_fileData->_tempDirPath, "confIT.json"), true);
	return new TRezultatOperacije<bool>(true, true);
}

TRezultatOperacije<bool> *TIbeWrapper::DohvatiLogove()
{
	auto fajlovi = TDirectory::GetFiles(_fileData->_cashITDir, "*.log*");
	for (auto fajl : fajlovi)
	{
		try
		{
			TFile::Copy(fajl, TPath::Combine(_fileData->_tempDirPath, TPath::GetFileName(fajl)), true);
		}catch(...){}
	}
	fajlovi = TDirectory::GetFiles(_fileData->_cashITDir, "*.txt*");
	for (auto fajl : fajlovi)
	{
		try
		{
			TFile::Copy(fajl, TPath::Combine(_fileData->_tempDirPath, TPath::GetFileName(fajl)), true);
		}catch(...){}
	}
	TDirectory::CreateDirectory(TPath::Combine(_fileData->_tempDirPath, "log"));
	TDirectory::Copy(TPath::Combine(_fileData->_cashITDir, "log"), TPath::Combine(_fileData->_tempDirPath, "log"));

	auto lokOp = _helper->ProcitajJSON("lokalno", "logDirektorijum");
	if (lokOp->OperacijaUspela())
	{
		AnsiString logDir = lokOp->DohvatiRezultat();
		if (CompareText(logDir, TPath::Combine(_fileData->_cashITDir, "log")) != 0)
		{
			TDirectory::Copy(logDir, TPath::Combine(_fileData->_tempDirPath, "log"));
		}
	}


	return new TRezultatOperacije<bool>(true, true);
}

void TIbeWrapper::CashITDir(bool cashIT)
{
	try
	{
		InitWrapper();
	}catch(Exception &ex)
	{
		_logger->Log("Greska pri inicijalizaciji: " + ex.Message, llCritical);
	}catch(std::exception &ex)
	{
		_logger->Log("Greska pri inicijalizaciji: " + AnsiString(ex.what()), llCritical);
	}
	_fileData->_targetFolder = cashIT ? _fileData->_cashITDir : _fileData->_tempDirPath;
}

TRezultatOperacije<bool> *TIbeWrapper::ArhivirajDirektorijum(AnsiString filename, bool cashIT)
{
	try
	{
		InitWrapper();
	}catch(Exception &ex)
	{
		return new TRezultatOperacije<bool>(false, false, "Greska pri inicijalizaciji: " + ex.Message);
	}
	catch(std::exception &ex)
	{
		return new TRezultatOperacije<bool>(false, false, "Greska pri inicijalizaciji: " + AnsiString(ex.what()));
	}
	_fileData->_archiveName = filename;
	CashITDir(cashIT);
	_logger->Log("Arhiviranje u toku...", llInfo);
	AnsiString path = cashIT ? TPath::Combine(_fileData->_targetFolder, "backup\\" + _fileData->_archiveName)
		: TPath::Combine(_fileData->_targetFolder, _fileData->_archiveName);

	AnsiString comm;
	if (!cashIT)
	{
        comm = "cmd.exe /c " + _zip7 + " a -bb0 -r -y \""
			+ path + "\" \"" + TPath::Combine(_fileData->_targetFolder, "*.*") + "\" >> archLog.txt";
	}else
	{
        comm = "cmd.exe /c " + _zip7 + " a -xr!*.7z -bb0 -r -y \""
			+ path + "\" \"" + TPath::Combine(_fileData->_targetFolder, "*.*") + "\" >> archLog.txt";
    }

	PROCESS_INFORMATION procInfo;
	STARTUPINFO startInfo;

	memset(&procInfo, 0, sizeof(procInfo));
	memset(&startInfo, 0, sizeof(startInfo));
	startInfo.cb = sizeof(startInfo);

	CreateProcess(nullptr, UnicodeString(comm).t_str(), nullptr, nullptr, false,
		NORMAL_PRIORITY_CLASS | CREATE_NEW_PROCESS_GROUP | CREATE_NO_WINDOW,
		nullptr, nullptr, &startInfo, &procInfo);
	WaitForSingleObject(procInfo.hProcess, 300000);
	CloseHandle(procInfo.hProcess);
	bool success = FileExists(path);
	if (!success)
	{
		return new TRezultatOperacije<bool>(false, false, "Greska pri arhiviranju direktorijuma: " +
			_fileData->_targetFolder);
	}
	return new TRezultatOperacije<bool>(true, true);
}

TRezultatOperacije<bool> * TIbeWrapper::OcistiRadni()
{
	try
	{
		InitWrapper();
		_wrapper->CleanWorkFolder();
	}catch(Exception &ex)
	{
		return new TRezultatOperacije<bool>(false, false, "Greska pri ciscenju temp foldera: " + ex.Message);
	}catch(std::exception &ex)
	{
		return new TRezultatOperacije<bool>(false, false, "Greska pri ciscenju temp foldera: " + AnsiString(ex.what()));
	}
	return new TRezultatOperacije<bool>(true, true);
}

//---------------------------------------------------------------------------
namespace Tibewrapper
{
	void __fastcall PACKAGE Register()
	{
		TComponentClass classes[1] = {__classid(TIbeWrapper)};
		RegisterComponents(L"BusComputers", classes, 0);
	}
}
//---------------------------------------------------------------------------
