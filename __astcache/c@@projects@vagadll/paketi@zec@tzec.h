//---------------------------------------------------------------------------

#ifndef TZecH
#define TZecH
//---------------------------------------------------------------------------
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <map>
#include "DllWrapper.h"
#include "TipoviPoruka.h"
#include "Paketi\Helper\THelper.h"
#include "UpdatePodesavanja.h"
#include <System.Math.hpp>
#include "Paketi\Logger\TLogger.h"
#include "Paketi\Ping\TPinger.h"
//---------------------------------------------------------------------------
class TZec : public TComponent
{
	private:
		const char* const* Hederi(const std::map<AnsiString, AnsiString>& hederiMapa, bool vrednosti);
		void ProveraStatusa();
	protected:
	public:
		__fastcall TZec(TComponent* Owner);
        ~TZec();
	__published:
		void KonektujSe(NoParamsFunc rekonekcija, bool server = false, int paralelnoPoruka = 1);
		void PoslajiLog(const std::map<AnsiString, AnsiString>& hederi, AnsiString logPoruka);
		void PosaljiPoruku(const std::map<AnsiString, AnsiString>& hederi, AnsiString poruka, AnsiString uid, CallbackStatus statusCallback,
			bool naSve = false, AnsiString trajanje = "");
		void PosaljiTekst(AnsiString uid, AnsiString teskt, bool kratkotrajno, CallbackStatus statusCallback);
		void Prijem(AnsiString kanal, RcvMsgExternal prijem);
		void AdminBus(RcvMsgExternal prijem);
		void PotvrdiPrijem(int tag);
		void PokreniUpdate(AnsiString uid, TPodesavanja* updejtPodesavanja, CallbackStatus statusCallback);
		void Diskonektuj();
		void PosaljiFajlove(AnsiString uid, CallbackStatus statusCallback);
		void PosaljiBazu(AnsiString uid, CallbackStatus statusCallback);
		void PreuzmiFajl(AnsiString uid, AnsiString naziv, AnsiString fajl, CallbackStatus statusCallback);
		void IzvrsiSql(AnsiString uid, UnicodeString sql, CallbackStatus statusCallback);
		void PrijaviIzvrsenjeSql(AnsiString uid, UnicodeString sta, bool greska,
			bool rezultat, CallbackStatus statusCallback);
		void PrijaviOperaciju(AnsiString uid, TipPoruke operacija, bool uspeh,
	 		AnsiString poruka, CallbackStatus statusCallback);

		AnsiString TipPorukeUString(TipPoruke tip);
		TipPoruke StringUTipPoruke(AnsiString tip);
};

void Bloker();
void Provera();
void KonekcijaZatvorena();
void Konektovan();
void Prijava();
void GotovPrijava(bool ok, const char* poruka);
void Gotov();
void GotovKlijent();
void StatusKonekcije(bool ok, const char* poruka);
void PrijemPorukeInterno(const char** zaglavljeNazivi, const char** zaglavljeVrednosti, const char* poruka, int brPoruke);
//---------------------------------------------------------------------------
#endif
