//---------------------------------------------------------------------------

#ifndef c_bxvagaH
#define c_bxvagaH

#include "Vaga.h"
 #include "Paketi\Helper\THelper.h"
 #include "Paketi\Logger\TLogger.h"
 #include "DataPack\DataPackInstance.h"
//---------------------------------------------------------------------------
class  TBXVaga : public TVaga
{

private:

public:
//   virtual void stampajNefiskalniText(TStringList *lista);
//   virtual int fajlIspravan(String fajl);
//   virtual int fiskalGreskaFajla(String putanja);
   TBXVaga (int idVage, int sifraMagacina);
   TBXVaga ();
   ~TBXVaga (){}
   void ubaciSveArtikle(int sve);
   Currency procitajTezinu(callbackTezinaIzmerena OnTezinaIzmerena, Currency *tezina);
     AnsiString procitajTezinu();
};
void Upis(String putanja, String naredba);
#endif
