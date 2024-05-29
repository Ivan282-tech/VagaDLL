//---------------------------------------------------------------------------

#ifndef TLoggerH
#define TLoggerH
//---------------------------------------------------------------------------
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
//---------------------------------------------------------------------------
#include "TLogWorker.h"

class TLogger : public TComponent
{
	private:
		TLogWorker* _logger = TLogWorker::GetInstance();
	protected:
	public:
		__fastcall TLogger(TComponent* Owner);
		void Log(UnicodeString message, const LoggingLevel level, AnsiString fajl = "");
	__published:
};
//---------------------------------------------------------------------------
#endif
