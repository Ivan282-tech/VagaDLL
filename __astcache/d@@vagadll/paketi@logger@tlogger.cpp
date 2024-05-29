//---------------------------------------------------------------------------

#include <vcl.h>

#pragma hdrstop

#include "TLogger.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------
// ValidCtrCheck is used to assure that the components created do not have
// any pure virtual functions.
//

static inline void ValidCtrCheck(TLogger *)
{
	new TLogger(NULL);
}
//---------------------------------------------------------------------------
__fastcall TLogger::TLogger(TComponent* Owner)
	: TComponent(Owner)
{
}
//---------------------------------------------------------------------------
namespace Tlogger
{
	void __fastcall PACKAGE Register()
	{
		TComponentClass classes[1] = {__classid(TLogger)};
		RegisterComponents(L"BusComputers", classes, 0);
	}
}
//---------------------------------------------------------------------------

void TLogger::Log(UnicodeString message, const LoggingLevel level, AnsiString fajl)
{
	_logger->Log(message, level, fajl);
}
