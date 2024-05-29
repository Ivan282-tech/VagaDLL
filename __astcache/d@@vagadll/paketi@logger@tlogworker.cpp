//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "TLogWorker.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)


using namespace std;

TLogWorker* TLogWorker::_instance{nullptr};
mutex TLogWorker::_mutexSI;

TLogWorker::TLogWorker()
{
	_levels[llDebug] = "Debug";
	_levels[llInfo] = "Info";
	_levels[llCritical] = "Critical";

	map<UnicodeString, LoggingLevel> stringToLevel;
	stringToLevel["Debug"] = llDebug;
	stringToLevel["Info"] = llInfo;
	stringToLevel["Critical"] = llCritical;

	auto logConfOp = _helper->ProcitajJSON("konfiguracija", "logNivo");
	auto logDirOp = _helper->ProcitajJSON("lokalno", "logDirektorijum");

	if (logConfOp->OperacijaUspela() && logDirOp->OperacijaUspela())
	{
		_logDirectory = logDirOp->DohvatiRezultat();

		auto severity = logConfOp->DohvatiRezultat();
		_loggingLevel = stringToLevel[severity];
	}
	delete logConfOp;
	delete logDirOp;
}

TLogWorker *TLogWorker::GetInstance()
{
	lock_guard<mutex> lock(_mutexSI);
	if (_instance == nullptr)
	{
		_instance = new TLogWorker();
	}
	return _instance;
}

void TLogWorker::Log(UnicodeString message, const LoggingLevel level, AnsiString fajl)
{
	if (level < _loggingLevel)
	{
		return;
	}

    auto date = Now();
	UnicodeString filename = "";
	if (fajl.IsEmpty() && _logDirectory == "")
	{
		filename =  "log " + _helper->TrenutniDatumCist() + ".txt";
	}else if (fajl.IsEmpty())
	{
		filename = TPath::Combine(_logDirectory, "log " + _helper->TrenutniDatumCist() + ".txt");
	}else
	{
        filename = fajl;
	}



	message = date.DateString() + " - " + date.TimeString() + " - " + _levels[level] + " - " + message + "\n";

	lock_guard<mutex> lock(_mutexFS);

	TFileStream *fs = nullptr;
	try
	{
		if (FileExists(filename, false))
		{
			fs = new TFileStream(filename, fmOpenReadWrite | fmShareDenyWrite);
		}else
		{
			BackupLogs();
			fs = new TFileStream(filename, fmCreate | fmShareDenyWrite);
		}
		SE_OBJECT_TYPE objectType = SE_FILE_OBJECT;
		SECURITY_INFORMATION securityInfo = DACL_SECURITY_INFORMATION;
		SECURITY_DESCRIPTOR securityDescriptor;
		InitializeSecurityDescriptor(&securityDescriptor, SECURITY_DESCRIPTOR_REVISION);
		PSID everyoneSid = NULL;
		SID_IDENTIFIER_AUTHORITY sidAuthority = SECURITY_WORLD_SID_AUTHORITY;
		AllocateAndInitializeSid(&sidAuthority, 1, SECURITY_WORLD_RID, 0, 0, 0, 0, 0, 0, 0, &everyoneSid);
		EXPLICIT_ACCESS explicitAccess;
		ZeroMemory(&explicitAccess, sizeof(EXPLICIT_ACCESS));
		explicitAccess.grfAccessPermissions = GENERIC_ALL;
		explicitAccess.grfAccessMode = SET_ACCESS;
		explicitAccess.grfInheritance= NO_INHERITANCE;
		explicitAccess.Trustee.TrusteeForm = TRUSTEE_IS_SID;
		explicitAccess.Trustee.TrusteeType = TRUSTEE_IS_WELL_KNOWN_GROUP;
		explicitAccess.Trustee.ptstrName  = (LPTSTR) everyoneSid;
		PACL acl = NULL;
		SetEntriesInAcl(1, &explicitAccess, NULL, &acl);
		SetSecurityDescriptorDacl(&securityDescriptor, TRUE, acl, FALSE);

		SetNamedSecurityInfo(filename.t_str(), objectType, securityInfo, NULL, NULL, acl, NULL);

		FreeSid(everyoneSid);
		LocalFree(acl);

		fs->Seek(0, soFromEnd);

		auto byteArr = message.BytesOf();
		fs->Write(byteArr, byteArr.size());
		delete fs;
	}catch (...)
	{
        delete fs;
	}
}

void TLogWorker::BackupLogs()
{
	AnsiString path = TPath::Combine(_logDirectory, "stariLogovi.7z");

	AnsiString exeFile = Application->ExeName;
	AnsiString cashITdir = ExtractFilePath(exeFile);
	AnsiString zip = TPath::Combine(cashITdir, "7za.exe");

	AnsiString comm = "cmd.exe /c " + zip + " a -xr!*.7z -bb0 -r -y \""
		+ path + "\" \"" + TPath::Combine(_logDirectory, "log*.txt") + "\" >> archLog.txt";

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
		Log("Neuspeh kod arhiviranja log fajlova.", llCritical);
		return;
	}

	memset(&procInfo, 0, sizeof(procInfo));
	memset(&startInfo, 0, sizeof(startInfo));
	startInfo.cb = sizeof(startInfo);

	UnicodeString del = "cmd.exe /C del " +
		TPath::Combine(_logDirectory, "log*.txt");

	CreateProcess(nullptr, del.t_str(), nullptr, nullptr, false,
		NORMAL_PRIORITY_CLASS | CREATE_NEW_PROCESS_GROUP | CREATE_NO_WINDOW,
		nullptr, nullptr, &startInfo, &procInfo);

	WaitForSingleObject(procInfo.hProcess, 2000);
	DWORD exit_code;
	GetExitCodeProcess(procInfo.hProcess, &exit_code);
	if (exit_code != 0)
	{
		Log("Neuspeh kod brisanja log fajlova.", llCritical);
	}
}
