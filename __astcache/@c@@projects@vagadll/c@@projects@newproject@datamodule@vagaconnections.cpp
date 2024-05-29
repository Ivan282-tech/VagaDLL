//---------------------------------------------------------------------------

#pragma hdrstop

#include "VagaConnections.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

AnsiString 	APP_DIR      	= GetCurrentDir();
AnsiString 	LOG_FAJL 		= APP_DIR + "\\Log\\CashIT\\" + Sysutils::ExtractFileName(Sysutils::ChangeFileExt(Application->ExeName, ""))  + ".log"  ;
int 	  	GODINA 			= -1;
