//---------------------------------------------------------------------------

#ifndef TLogWorkerH
#define TLogWorkerH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <StrUtils.hpp>
#include <System.SysUtils.hpp>
#include <System.IOUtils.hpp>
#include <map>
#include <mutex>
#include <thread>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Phys.FB.hpp>
#include <FireDAC.Phys.FBDef.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <FireDAC.VCLUI.Wait.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdExplicitTLSClientServerBase.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
#include "Paketi\Helper\THelper.h"
#include <Aclapi.h>
#include <Windows.h>
#include <map>

class TLogWorker
{
	private:
		static TLogWorker* _instance;
		static std::mutex _mutexSI;
		std::mutex _mutexFS;
		THelper *_helper = new THelper(nullptr);
        void BackupLogs();

		std::map<int, UnicodeString> _levels;
	protected:
		TLogWorker();
		~TLogWorker() {};

	public:
		static TLogWorker *GetInstance();

		TLogWorker(TLogWorker &other) = delete;
		void operator=(const TLogWorker &) = delete;
		LoggingLevel _loggingLevel = llCritical;
		UnicodeString _logDirectory = "";
		void Log(UnicodeString message, const LoggingLevel level, AnsiString fajl = "");
};


#endif
