//---------------------------------------------------------------------------

#ifndef TDataClassesH
#define TDataClassesH
#include <System.Classes.hpp>
#include "TFBBaza.h"
//---------------------------------------------------------------------------
class TFileData
{
	public:
		AnsiString _targetFolder = "";
		AnsiString _archiveName = "";
        AnsiString _targetArch = "";
		AnsiString _cashITDir = "";
		AnsiString _tempDirPath = "";
};
class TFtpData
{
	public:
		AnsiString _server = "";
        AnsiString _rootDir = "";
		AnsiString _port = "";
		AnsiString _username = "";
		AnsiString _password = "";
};
class TDbData
{
	public:
        AnsiString _pib = "";
		AnsiString _scriptFile = "";
        AnsiString _logServer = "";
		AnsiString _FBdll = "";
		AnsiString _ibeScriptdll = "";
        TFBBaza _fbBaza;
};
#endif
