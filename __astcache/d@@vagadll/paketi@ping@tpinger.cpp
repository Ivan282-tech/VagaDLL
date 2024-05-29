//---------------------------------------------------------------------------

#include <vcl.h>

#pragma hdrstop

#include "TPinger.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------
// ValidCtrCheck is used to assure that the components created do not have
// any pure virtual functions.
//
using namespace std;
using namespace std::chrono_literals;
static inline void ValidCtrCheck(TPinger *)
{
	new TPinger(NULL);
}
//---------------------------------------------------------------------------
__fastcall TPinger::TPinger(TComponent* Owner)
	: TComponent(Owner)
{
}

bool TPinger::TestPing(AnsiString meta)
{
	bool result = false;
	auto icmpClient = new TIdIcmpClient(nullptr);
	icmpClient->ReceiveTimeout = 1000;
	try
	{
		icmpClient->Host = meta;
		icmpClient->Ping();
		bool success = icmpClient->ReplyStatus->ReplyStatusType == rsEcho;
		if (success)
		{
			_logger->Log("Ping ok ka: " + meta, llInfo);
			result = true;
		}else
		{
			_logger->Log("Ping ne prolazi ka: " + meta, llCritical);
		}
	}catch (Exception &ex)
	{
		_logger->Log("Ping ne prolazi ka: " + meta, llCritical);
	}catch (std::exception &stdex)
	{
		_logger->Log("Ping ne prolazi ka: " + meta, llCritical);
	}
	delete icmpClient;
	return result;

}
bool TPinger::TestPort(AnsiString meta, unsigned int port)
{
	auto tcpClient = new TIdTCPClient(nullptr);
	tcpClient->ConnectTimeout = 5000;
	tcpClient->Host = meta;
	tcpClient->Port = port;
	bool result = true;

    try
	{
		tcpClient->Connect();
		tcpClient->Disconnect();
	}catch (Exception &e)
	{
		_logger->Log( "Nema konekcije ka serveru: " + meta + ":" + UIntToStr(port), llCritical);
		result = false;
	}catch (std::exception &stdex)
	{
        _logger->Log( "Nema konekcije ka serveru: " + meta + ":" + UIntToStr(port), llCritical);
		result = false;
    }
	_logger->Log( "Ok konekcija ka: " + meta + ":" + UIntToStr(port), llInfo);
	delete tcpClient;
	return result;
}

void TPinger::StartTrajniTest(AnsiString meta, int razmakSekunde, bool logujSve)
{
	if (_pingRunning)
	{
		_logger->Log("Ping vec pokrenut!", llCritical);
		return;
	}
	_pingRunning = true;
	_stopPing = false;
	_pingLog = new TPingLog();
	_backPing = TTask::Create ([&, razmakSekunde, logujSve, meta]()
		{
			std::chrono::duration<int, std::ratio<1, 1>> razmak = razmakSekunde * 1s;
			TIdIcmpClient *client = new TIdIcmpClient(nullptr);
			client->Host = meta;
			client->ReceiveTimeout = 1000;
			do
			{
				if (_stopPing)
				{
					break;
				}
				try
				{
					client->Ping("BUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERS"
								 "BUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERSBUSCOPMUTERS");
					if (client->ReplyStatus->ReplyStatusType == rsEcho)
					{
						unsigned int rtt = client->ReplyStatus->MsRoundTripTime;
						_pingLog->DodajPing(rtt);
						if (logujSve)
						{
							_logger->Log("Ping: " + meta + " -- " + UIntToStr(rtt) + "ms", llInfo);
						}
					}else
					{
						_pingLog->DodajNeuspeli();
						_logger->Log("Ping: " + meta + " -- nije uspeo", llCritical);
					}
				} catch(Exception &ex)
				{
					_logger->Log("Ping: " + meta + " -- nije uspeo", llCritical);
					_logger->Log("Greska: " + ex.Message, llCritical);
					_pingLog->DodajNeuspeli();
				}
				unique_lock<mutex> lock(_awaiterMutex);
				_awaiter.wait_for(lock, razmak);
			}while(true);
			delete client;
		});
	_backPing->Start();
}

void TPinger::StartTrajniPortTest(AnsiString meta, unsigned int port,
	int razmakSekunde, bool logujSve)
{
	if (_pingRunning)
	{
		_logger->Log("Ping vec pokrenut!", llCritical);
		return;
	}
	_pingRunning = true;
	_stopPing = false;
	_pingLog = new TPingLog();
	_backPing = TTask::Create ([&, razmakSekunde, logujSve, meta, port]()
		{
			std::chrono::duration<int, std::ratio<1, 1>> razmak = razmakSekunde * 1s;
			TIdTCPClient *tcpClient = new TIdTCPClient(nullptr);
			tcpClient->Host = meta;
			tcpClient->Port = port;
			tcpClient->ConnectTimeout = 1000;
			do
			{
                if (_stopPing)
				{
					break;
				}
				try
				{
					auto start = std::chrono::high_resolution_clock::now();
					tcpClient->Connect();
					tcpClient->Disconnect();
					auto end = std::chrono::high_resolution_clock::now();
					std::chrono::duration<double> duration = end - start;
					int durationMs = int(duration.count()*1000);
					_pingLog->DodajPing(durationMs);
					if (logujSve)
					{
						_logger->Log("FB konekt/diskonekt: " + meta + " -- " + IntToStr(durationMs) + "ms", llInfo);
					}
				}catch (Exception &e)
				{
					_logger->Log( "Nema konekcije ka serveru: " + meta + ":" + UIntToStr(port), llCritical);
					_pingLog->DodajNeuspeli();
				}catch (std::exception &stdex)
				{
                    _logger->Log( "Nema konekcije ka serveru: " + meta + ":" + UIntToStr(port), llCritical);
					_pingLog->DodajNeuspeli();
                }
				unique_lock<mutex> lock(_awaiterMutex);
				_awaiter.wait_for(lock, razmak);
			}
			while(true);
			delete tcpClient;
		});
    _backPing->Start();
}

TPingLog *TPinger::ZaustaviTrajniTest(bool logujRezultate)
{
	_stopPing = true;
	_awaiter.notify_all();
	_backPing->Wait();
	_pingRunning = false;
    delete _backPing;
	if (logujRezultate)
	{
		_logger->Log("Broj izvrsenih: " + IntToStr(_pingLog->BrojPingova()), llCritical);
		_logger->Log("Procenat izgubljenih: " + IntToStr(_pingLog->ProcenatIzgubljenih()) + "%", llCritical);
		if (!_pingLog->KatastrofalnaGreska())
		{
			_logger->Log("Prosecno: " + IntToStr(_pingLog->SrednjiRoundTrip()) + "ms", llCritical);
			_logger->Log("Minimum: " + IntToStr(_pingLog->MinRoundTrip()) + "ms", llCritical);
			_logger->Log("Maksimum: " + IntToStr(_pingLog->MaxRoundTrip()) + "ms", llCritical);
		}
	}
	return _pingLog;
}


//---------------------------------------------------------------------------
namespace Tpinger
{
	void __fastcall PACKAGE Register()
	{
		TComponentClass classes[1] = {__classid(TPinger)};
		RegisterComponents(L"BusComputers", classes, 0);
	}
}
//---------------------------------------------------------------------------
