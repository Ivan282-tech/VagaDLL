//---------------------------------------------------------------------------

#ifndef c_TElsiH
#define c_TElsiH
#include "Vaga.h"
#include "System/tools_log.h"
#include "DataPackInstance.h"

////#include "AdPort.hpp"
//#include "AdPacket.hpp"
//---------------------------------------------------------------------------

class TElsi : public TVaga
{

private:
//	TApdComPort *cPort;
//	TApdDataPacket *adp;

	void __fastcall CallBack(AnsiString rezultat);
	void __fastcall adpTimeout(TObject *Sender);
	callbackTezinaIzmerena callbackVratiRezultat;
public:

   TElsi (int idVage, int sifraMagacina);
   TElsi ();
   ~TElsi (){}
   void ubaciSveArtikle(int sve);
   Currency procitajTezinu(callbackTezinaIzmerena OnTezinaIzmerena, Currency *tezina);
   AnsiString procitajTezinu();
   void __fastcall portPodaciDostupni(TObject *CP, WORD Count);
   Currency __fastcall IzracunajTezinu( AnsiString Data );
   void __fastcall PosaljiPodatke(String data, int duzina_rezultata);
   void __fastcall adpStringPacket(TObject *Sender, AnsiString Data);
//   void __fastcall CallBack(AnsiString rezultat);
   void __fastcall ErrorHand(AnsiString rezultat);

   Currency kol;
};
#endif
