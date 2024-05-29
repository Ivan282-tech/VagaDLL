//---------------------------------------------------------------------------

#ifndef TDllWrapH
#define TDllWrapH
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.IOUtils.hpp>
#include <exception>
#include "Paketi\Logger\TLogger.h"
#include "TDataClasses.h"
#include "Paketi\Helper\THelper.h"
//---------------------------------------------------------------------------

//Int koji ovi callbackovi vracaju se koristi kao indikator uspesnosti, 0 je da nema greske
// te ako negde vratimo nesto <> 0
//dolazi do zaustavljanja izvrsavanja sql skripte.
//Success kod AfterExec radi kontra, on je kao bool
//te je 1 korektno, 0 je lose
typedef int (__stdcall *TConnErrorCallback)(char * errorMessage);
typedef int (__stdcall *TErrorCallback)(char * text, char * errorMessage);
typedef int (__stdcall *TBeforeExecCallback)(char * statement, char * text);
typedef int (__stdcall *TAfterExecCallback)(char * statement, int success);
typedef int (__stdcall *TBlockProgressCallback)(char * message);

typedef int __stdcall (*TConnectDB)(char *ConnectionString, TConnErrorCallback connectErrorCallback);
typedef int __stdcall (*TDisconnectDB)();

typedef void __stdcall (*TExecute)(char * text, TErrorCallback errorCallbackFunc,
	TBeforeExecCallback beforeCallbackFunc, TAfterExecCallback afterCallbackFunc);

typedef void __stdcall (*TExecuteWithProgress)(char * text, TErrorCallback errorCallbackFunc,
	TBeforeExecCallback beforeCallbackFunc, TAfterExecCallback afterCallbackFunc, TBlockProgressCallback blockProgressFunc);

enum Commands
{
	ecOnline,
	ecOnlineSingle,
	ecShutdown,
    ecShutdownFull,
	ecRestore,
	ecScript,
	ecRecompileProcs,
	ecGetServerLog
};

class TDllWrap
{
	private:
		TFileData *_fileData = new TFileData();
		TFtpData *_ftpData = new TFtpData();
		TDbData *_dbData = new TDbData();
        THelper *_helper = new THelper(nullptr);
		HMODULE _ibeDll;
		TConnectDB _connectDB;
		TDisconnectDB _disconnectDB;
		TExecute _executeFile;
		TExecute _executeText;
		void ConnectToDb();
        bool _setupFTP = false;
	public:
		static bool _lastCommandSuccess;
        static bool _stopOnError;
		static TLogger *_logger;

		TDllWrap(TFileData &fileData, TFtpData &ftpData,
			TDbData &dbData, bool stopOnError);
		bool ExecuteCommand(Commands command);
		void CleanWorkFolder();
};
#endif
