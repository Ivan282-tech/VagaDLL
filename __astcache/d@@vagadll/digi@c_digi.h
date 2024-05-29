//---------------------------------------------------------------------------

#ifndef c_digiH
#define c_digiH

#include "Vaga.h"
 #include "Paketi\Helper\THelper.h"
 #include "Paketi\Logger\TLogger.h"
 #include "DataPack\DataPackInstance.h"
//---------------------------------------------------------------------------
class   TDigi : public TVaga
{

private:

public:
//   virtual void stampajNefiskalniText(TStringList *lista);
//   virtual int fajlIspravan(String fajl);
//   virtual int fiskalGreskaFajla(String putanja);
   TDigi (int idVage, int sifraMagacina);
   TDigi ();
   ~TDigi (){}
   void ubaciSveArtikle(int sve);
     AnsiString procitajTezinu();
   Currency procitajTezinu(callbackTezinaIzmerena OnTezinaIzmerena, Currency *tezina);
};
void Upis(String putanja, String naredba);
#endif
