//---------------------------------------------------------------------------

#ifndef TPingerH
#define TPingerH
//---------------------------------------------------------------------------
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <IdIcmpClient.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
#include <System.Threading.hpp>
#include <condition_variable>
#include <chrono>
#include "Paketi\Logger\TLogger.h"
#include "TPingLog.h"
//---------------------------------------------------------------------------
class TPinger : public TComponent
{
private:
	TLogger *_logger = new TLogger(nullptr);
	_di_ITask _backPing = nullptr;
	TPingLog *_pingLog = new TPingLog();
	std::condition_variable _awaiter;
	std::mutex _awaiterMutex;
	bool _stopPing = false;
	bool _pingRunning = false;
protected:
public:
	__fastcall TPinger(TComponent* Owner);
	bool TestPing(AnsiString meta);
	bool TestPort(AnsiString meta, unsigned int port);
	void StartTrajniTest(AnsiString meta, int razmakSekunde, bool logujSve = false);
	TPingLog *ZaustaviTrajniTest(bool logujRezultate = false);
	void StartTrajniPortTest(AnsiString meta, unsigned int port, int razmakSekunde, bool logujSve = false);
__published:
};
//---------------------------------------------------------------------------
#endif
