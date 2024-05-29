//---------------------------------------------------------------------------

#ifndef c_univerzalna_vagaH
#define c_univerzalna_vagaH
#include "Paketi\Helper\THelper.h"
#include "Paketi\Logger\TLogger.h"
#include "DataPack\DataPackInstance.h"
#include "Vaga.h"

//---------------------------------------------------------------------------
class  TUniverzalnaVaga : public TVaga
{

private:

public:
//   virtual void stampajNefiskalniText(TStringList *lista);
//   virtual int fajlIspravan(String fajl);
//   virtual int fiskalGreskaFajla(String putanja);
   TUniverzalnaVaga (int idVage, int sifraMagacina);
   TUniverzalnaVaga ();
   ~TUniverzalnaVaga() {}
   void ubaciSveArtikle(int sve);
     AnsiString procitajTezinu();
   Currency procitajTezinu(callbackTezinaIzmerena OnTezinaIzmerena, Currency *tezina);
};
void Upis(String putanja, String naredba);
//---------------------------------------------------------------------------
#endif
