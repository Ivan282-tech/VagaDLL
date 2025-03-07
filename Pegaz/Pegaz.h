//---------------------------------------------------------------------------

#ifndef PegazH
#define PegazH
#include "Vaga.h"
#include "DataPack\DataPackInstance.h"
#include "Paketi\Logger\TLogger.h"
//---------------------------------------------------------------------------
class   TPegaz : public TVaga
{

private:

public:
//   virtual void stampajNefiskalniText(TStringList *lista);
//   virtual int fajlIspravan(String fajl);
//   virtual int fiskalGreskaFajla(String putanja);
   TPegaz (int idVage, int sifraMagacina);
   TPegaz ();
   ~TPegaz (){}
   void ubaciSveArtikle(int sve=0);
     AnsiString procitajTezinu();
   Currency procitajTezinu(callbackTezinaIzmerena OnTezinaIzmerena, Currency *tezina);
};
void Upis(String putanja, String naredba);
#endif
