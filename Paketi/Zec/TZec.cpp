//---------------------------------------------------------------------------

#include <vcl.h>

#pragma hdrstop

#include "TZec.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------
// ValidCtrCheck is used to assure that the components created do not have
// any pure virtual functions.
//
DllWrapper* _dllWrapper = new DllWrapper();
THelper* _helper = new THelper(nullptr);
TLogger* _logger = new TLogger(nullptr);
TZec* _zec = new TZec(nullptr);
TPinger* _pinger = new TPinger(nullptr);
TCompInfo _info;
bool _connUtoku = false;
bool _inError = false;
bool _prijavljen = false;
bool _gotInfo = false;

AnsiString _dan = "86400000";
AnsiString _8sati = "28800000";
AnsiString _sat = "3600000";

AnsiString _server;
int _port;

static inline void ValidCtrCheck(TZec *)
{
	new TZec(NULL);
}
//---------------------------------------------------------------------------
__fastcall TZec::TZec(TComponent* Owner)
	: TComponent(Owner)
{
}


void Gotov()
{
	_logger->Log("Konektovan na RabbitMQ", llInfo);
	_inError = false;
	_connUtoku = false;
	_dllWrapper->_rekonekcija();
}


void GotovKlijent()
{
	_logger->Log("Konektovan na RabbitMQ", llInfo);
	_inError = false;
	_connUtoku = false;
    _dllWrapper->_rekonekcija();
	Prijava();
}

void GotovPrijava(bool ok, const char* poruka)
{
	if (!_dllWrapper->_stop && ok)
	{
		auto periodOp = _helper->ProcitajJSON("zec", "keepAlive");
		if (periodOp->OperacijaUspela())
		{
			int period = StrToIntDef(periodOp->DohvatiRezultat(), 0);
			if (period == 0)
			{
				return;
			}
			Randomize();
			Sleep(period + RandomRange(-2000, 2000));
			Prijava();
		}
        delete periodOp;
	}else
	{
		_logger->Log("Greska pri prijavi: " + AnsiString(poruka), llCritical);
    }
}

void Prijava()
{
	try
	{
		Bloker();
		std::map<AnsiString, AnsiString> hederi;
		TDateTime timestamp = Now();
		AnsiString ts = FormatDateTime("dd/mm/yyyy hh:nn:ss", timestamp);
		hederi["vreme"]=ts;
		hederi["tip"] = TipPorukeUStringInternal(tpPrijava);
		hederi["pib"] = _info._pib;
		hederi["hostname"] = _info._hostname;
		hederi["uid"] = _info._uid;
		hederi["ver"] = _info._verzijaMP;
		_zec->PosaljiPoruku(hederi, "", "bus.fan", GotovPrijava, true, "6000");
	}catch(...)
	{
		_logger->Log("Neuspelo slanje zahteva", llCritical);
	}
}

void Konektovan()
{
	DecExch razmene = (DecExch)_dllWrapper->NapraviPrijemneRazmene;
	razmene(GotovKlijent, _info._pib.c_str(), _dllWrapper->_uid.c_str());
}

void TZec::PosaljiPoruku(const std::map<AnsiString, AnsiString>& hederiMapa, AnsiString poruka, AnsiString uid, CallbackStatus statusCallback,
	bool naSve, AnsiString trajanje)
{

	Bloker();
	const char* rou = uid.c_str();
	const char* msg = poruka.c_str();
	auto hederi = Hederi(hederiMapa, false);
	auto vrednosti = Hederi(hederiMapa, true);
	SendMsg salji = (SendMsg)_dllWrapper->PosaljiPoruku;
	const char* ttl = trajanje.c_str();
	salji(rou, msg, hederi, vrednosti, statusCallback, naSve, ttl);

	int size = hederiMapa.size();
	for (int dex = 0; dex < size; dex++)
	{
		delete[] hederi[dex];
		delete[] vrednosti[dex];
	}
	delete[] hederi;
	delete[] vrednosti;
}

void TZec::PoslajiLog(const std::map<AnsiString, AnsiString>& hederiMapa, AnsiString logPoruka)
{
	Bloker();
	const char* rou = _dllWrapper->_logRed.c_str();
	const char* msg = logPoruka.c_str();
	auto hederi = Hederi(hederiMapa, false);
	auto vrednosti = Hederi(hederiMapa, true);

	_dllWrapper->PosaljiPorukuBrzo(rou, msg, hederi, vrednosti);
}

void KonekcijaZatvorena()
{
	_connUtoku = false;
	_dllWrapper->_rdy = false;
}
TZec::~TZec()
{
	delete _dllWrapper;
}

void TZec::KonektujSe(NoParamsFunc rekonekcija, bool server, int paralelnoPoruka)
{
	_server = _helper->ProcitajJSON("zec", "server")->DohvatiRezultat();
	_port = StrToIntDef(_helper->ProcitajJSON("zec", "port")->DohvatiRezultat(), 3050);
	_connUtoku = true;
	_dllWrapper->_server = server;
	_dllWrapper->_paralelnoPoruka = paralelnoPoruka;
	_dllWrapper->_rekonekcija = rekonekcija;
	AnsiString uid = "???";
	if (!_gotInfo)
	{
		auto uidOp = _helper->DohvatiHostInformacije();
		
		if (uidOp->OperacijaUspela())
		{
			_info = uidOp->DohvatiRezultat();
			uid = _info._uid;
		}
		_gotInfo = true;
		delete uidOp;
	}

	_dllWrapper->_uid = uid;

	AnsiString serverAddress = _dllWrapper->_helper->ProcitajJSON("zec", "server")->DohvatiRezultat();
	int port = StrToIntDef(_dllWrapper->_helper->ProcitajJSON("zec", "port")->DohvatiRezultat(), 3050);
	AnsiString user = _dllWrapper->_helper->ProcitajJSON("zec", "user")->DohvatiRezultat();
	AnsiString pass = _dllWrapper->_helper->ProcitajJSON("zec", "pass")->DohvatiRezultat();
	_dllWrapper->_logRed = _dllWrapper->_helper->ProcitajJSON("zec", "busLogRed")->DohvatiRezultat();
	_dllWrapper->_busRed = _dllWrapper->_helper->ProcitajJSON("zec", "busRed")->DohvatiRezultat();
	ConnectFunc conn = (ConnectFunc)_dllWrapper->Konekcija;
	AnsiString err = "";
	try
	{
		if (server)
		{
			err = conn(Gotov, KonekcijaZatvorena, user.c_str(), pass.c_str(), serverAddress.c_str(), port, paralelnoPoruka);
		}else
		{
			err = conn(Konektovan, KonekcijaZatvorena, user.c_str(), pass.c_str(), serverAddress.c_str(), port, paralelnoPoruka);
		}
		if (!err.IsEmpty())
		{
			_connUtoku = false;
			_inError = true;
			_logger->Log("Greska pri konekciji", llCritical);
		}
	}catch(...){_connUtoku = false;}
	TTask::Create([](){Provera();})->Start();
}

void Provera()
{
	do
	{
		try
		{
			try
			{
				if (_dllWrapper->_stop)
				{
					break;
				}
			}catch(...){break;}

			if (_pinger->TestPort(_server, _port) &&
				_dllWrapper->StatusSoketa() && !_inError)
			{
				_dllWrapper->_rdy = true;
			}else
			{
				_dllWrapper->_rdy = false;
				bool disConn = false;
				_logger->Log("Konekcija ka RabbitMQu nije ok server:" + _server + " port:" + IntToStr(_port), llCritical);
				do
				{
					Sleep(60000);
					if (_dllWrapper->_stop)
					{
						break;
					}
					if (_pinger->TestPort(_server, _port))
					{
						if (!_connUtoku)
						{
							try
							{
								if (!disConn)
								{
									TTask::Create([](){_dllWrapper->Diskonekcija();})->Start();
									Sleep(1000);
                                    disConn = true;
								}
							}catch(Exception &ex)
							{
								_logger->Log("Greska pri diskonekciji: " + ex.Message, llCritical);
							}catch (std::exception &stex)
							{
								_logger->Log(AnsiString("Greska pri diskonekciji: ") + stex.what(), llCritical);
							}catch(...)
							{
								_logger->Log("Greska pri diskonekciji.", llCritical);
							}
							try
							{
								TTask::Create([](){_zec->KonektujSe(_dllWrapper->_rekonekcija,
									_dllWrapper->_server, _dllWrapper->_paralelnoPoruka);})->Start();
								_logger->Log("Konekcija pokrenuta", llCritical);
								return;
							}catch(Exception &ex)
							{
								_logger->Log("Greska pri konekciji: " + ex.Message, llCritical);
								_connUtoku=false;
							}catch (std::exception &stex)
							{
								_logger->Log(AnsiString("Greska pri konekciji: ") + stex.what(), llCritical);
								_connUtoku=false;
							}catch(...)
							{
								_logger->Log("Greska pri konekciji.", llCritical);
								_connUtoku=false;
							}
						}
					}
				}while(true);

			}
		}catch(Exception &ex)
		{
			_logger->Log("Greska pri proveri stanja: " + ex.Message, llCritical);
		}catch (std::exception &stex)
		{
			_logger->Log(AnsiString("Greska pri proveri stanja: ") + stex.what(), llCritical);
		}catch(...)
		{
			_logger->Log("Greska pri proveri stanja.", llCritical);
		}
		Sleep(10000);
	}while(true);
}


void Bloker()
{
	int slept = 0;
	int quartSec = 0;
	int minuteSec = 0;
	while(!_dllWrapper->_rdy)
	{
		try
		{
			if (_dllWrapper->_stop)
			{
				break;
			}
		}catch(...){break;}
		Sleep(250);
		if (++quartSec == 4)
		{
			quartSec = 0;
			if (++minuteSec == 60)
			{
				minuteSec = 0;
				_logger->Log("Nema konekcije ka rabbitu " + IntToStr(++slept) + " minuta.", llCritical);
			}
		}

	}
}

void PrijemPorukeInterno(const char** zaglavljeNazivi, const char** zaglavljeVrednosti, const char* poruka, int brPoruke)
{
	std::map<AnsiString, AnsiString> zaglavlja;
	int indeks = 0;
	while (zaglavljeNazivi[indeks] != nullptr)
	{
		zaglavlja[zaglavljeNazivi[indeks]] = zaglavljeVrednosti[indeks];
		indeks++;
	}
	_dllWrapper->PoPrijemu(zaglavlja, poruka, brPoruke);
}

void TZec::Prijem(AnsiString kanal, RcvMsgExternal prijem)
{
	Bloker();
	const char* channel = kanal.c_str();
	SubscribeChn sub = (SubscribeChn)_dllWrapper->EventPoruka;
	_dllWrapper->PoPrijemu = prijem;
	sub(PrijemPorukeInterno, channel);
}

void TZec::AdminBus(RcvMsgExternal prijem)
{
	Bloker();
	const char* red = "???"; 
	if (!_gotInfo)
	{
		auto infoOp = _helper->DohvatiHostInformacije();
		if (!infoOp->OperacijaUspela())
		{
			AnsiString greska = "Greska pri hvatanju informacija!\n" +
				infoOp->DohvatiGresku();
			throw Exception(greska.c_str());
		}
		_info = infoOp->DohvatiRezultat();
		
		_gotInfo = true;
	}
	red = _info._uid.c_str();
	AdminConnect adminConn = (AdminConnect)_dllWrapper->AdminKonekcija;
	_dllWrapper->PoPrijemu = prijem;
	adminConn(red, PrijemPorukeInterno);

}
void TZec::PotvrdiPrijem(int tag)
{
	Bloker();
	_dllWrapper->PotvrdiPrijem(tag);
}

const char* const* TZec::Hederi(const std::map<AnsiString, AnsiString>& hederiMapa, bool vrednosti)
{
	int size = hederiMapa.size();
	int indeks = 0;
	char** hederi = new char*[size+1];
	for (const auto& kv : hederiMapa)
	{
		AnsiString vrednost = vrednosti ? kv.second : kv.first;
		hederi[indeks] = new char[vrednost.Length()+1];
		memcpy(hederi[indeks], vrednost.c_str(), vrednost.Length());
		hederi[indeks][vrednost.Length()] = '\0';
		indeks++;
	}
	hederi[indeks] = nullptr;
	return const_cast<const char* const*>(hederi);
}

AnsiString TZec::TipPorukeUString(TipPoruke tip)
{
	return TipPorukeUStringInternal(tip);
}
TipPoruke TZec::StringUTipPoruke(AnsiString tip)
{
	return StringUTipPorukeInternal(tip);
}


void TZec::IzvrsiSql(AnsiString uid, UnicodeString sql, CallbackStatus statusCallback)
{
	Bloker();
	std::map<AnsiString, AnsiString> hederi;
	TDateTime timestamp = Now();
	AnsiString ts = FormatDateTime("dd/mm/yyyy hh:nn:ss", timestamp);
	hederi["vreme"]=ts;
	hederi["tip"] = TipPorukeUStringInternal(tpSqlExec);
	hederi["zahtev"] = _dllWrapper->_server ? _dllWrapper->_uid + "BusAdmin" :
		_dllWrapper->_uid;
	PosaljiPoruku(hederi, sql.t_str(), uid, statusCallback, false);
}
void TZec::PrijaviIzvrsenjeSql(AnsiString uid, UnicodeString sta, bool greska,
	bool rezultat, CallbackStatus statusCallback)
{
	Bloker();
	std::map<AnsiString, AnsiString> hederi;
	hederi["tip"] = TipPorukeUStringInternal(tpSqlReport);
	hederi["izvrsio"] = _dllWrapper->_uid;
	TDateTime timestamp = Now();
	AnsiString ts = FormatDateTime("dd/mm/yyyy hh:nn:ss", timestamp);
	hederi["vreme"]=ts;
	hederi["greska"] = greska ? "da" : "ne";
	hederi["rezultat"] = rezultat ? "da" : "ne";
	PosaljiPoruku(hederi, sta.t_str(), uid, statusCallback, false);
}

void TZec::PosaljiTekst(AnsiString uid, AnsiString tekst, bool kratkotrajno,
	CallbackStatus statusCallback)
{
	Bloker();
	std::map<AnsiString, AnsiString> hederi;
	TDateTime timestamp = Now();
	AnsiString ts = FormatDateTime("dd/mm/yyyy hh:nn:ss", timestamp);
	hederi["vreme"]=ts;
	hederi["tip"] = TipPorukeUStringInternal(tpPoruka);
	PosaljiPoruku(hederi, tekst.c_str(), uid, statusCallback, false, "10000");
}
void TZec::PokreniUpdate(AnsiString uid, TPodesavanja* updejtPodesavanja,
	 CallbackStatus statusCallback)
{
	Bloker();
	std::map<AnsiString, AnsiString> hederi;
	hederi["tip"] = TipPorukeUStringInternal(tpUpdate);

	hederi["hitno"] = "ne";
	hederi["nag"] = "ne";
	hederi["poruka"] = updejtPodesavanja->_poruka;
	hederi["zakazano"] = "";
	hederi["backupbaze"] = updejtPodesavanja->_backupBaze ? "da" : "ne";
	hederi["backupapp"] = updejtPodesavanja->_backupApp ? "da" : "ne";
	switch(updejtPodesavanja->_tipUpdejta)
	{
		case tuPokretanje:
			hederi["nag"] = updejtPodesavanja->_porukaPonavljanje ?
				"da" : "ne";
		break;
		case tuOdmah:
			hederi["hitno"] = "da";
		break;
		case tuZakazan:
			hederi["zakazano"] = FormatDateTime("dd/mm/yyyy hh:nn:ss",
				updejtPodesavanja->_vreme);
		break;
	}
	PosaljiPoruku(hederi, "", uid, statusCallback, false, _8sati);
}
void TZec::Diskonektuj()
{
	_dllWrapper->_stop = true;
	_dllWrapper->Diskonekcija();
}

void TZec::PosaljiFajlove(AnsiString uid,
	 CallbackStatus statusCallback)
{
	Bloker();
	std::map<AnsiString, AnsiString> hederi;
	hederi["tip"] = TipPorukeUStringInternal(tpUploadFiles);
	hederi["primaoc"] = _dllWrapper->_server ? _dllWrapper->_uid + "BusAdmin" :
		_dllWrapper->_uid;
	PosaljiPoruku(hederi, "", uid, statusCallback, false, "5000");
}
void TZec::PosaljiBazu(AnsiString uid,
	 CallbackStatus statusCallback)
{
	Bloker();
	std::map<AnsiString, AnsiString> hederi;
	hederi["tip"] = TipPorukeUStringInternal(tpUploadDb);
	hederi["primaoc"] = _dllWrapper->_server ? _dllWrapper->_uid + "BusAdmin" :
		_dllWrapper->_uid;
	PosaljiPoruku(hederi, "", uid, statusCallback, false, "5000");
}
void TZec::PreuzmiFajl(AnsiString uid, AnsiString naziv, AnsiString fajl,
	 CallbackStatus statusCallback)
{
	Bloker();
	std::map<AnsiString, AnsiString> hederi;
    hederi["tip"] = TipPorukeUStringInternal(tpDownload);
	hederi["naziv"] = naziv.c_str();
	hederi["fajl"] = fajl.c_str();
	hederi["uid"] = _info._uid;
	PosaljiPoruku(hederi, "", uid, statusCallback, false, _sat);
}
void TZec::PrijaviOperaciju(AnsiString uid, TipPoruke operacija, bool uspeh,
	 AnsiString poruka, CallbackStatus statusCallback)
{
	Bloker();
	std::map<AnsiString, AnsiString> hederi;
	hederi["tip"] = TipPorukeUStringInternal(tpKrajOperacije);
	hederi["uid"] = _info._uid;
	hederi["operacija"] = TipPorukeUStringInternal(operacija);
	hederi["uspeh"] = uspeh ? "da" : "ne";
	hederi["poruka"] = poruka;
	PosaljiPoruku(hederi, "", uid, statusCallback, false, _sat);
}

//---------------------------------------------------------------------------
namespace Tzec
{
	void __fastcall PACKAGE Register()
	{
		TComponentClass classes[1] = {__classid(TZec)};
		RegisterComponents(L"BusComputers", classes, 0);
	}
}
//---------------------------------------------------------------------------
