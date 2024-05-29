//---------------------------------------------------------------------------


#ifndef c_bizerbaH
#define c_bizerbaH

#include "Vaga.h"
#include "Paketi\Helper\THelper.h"
#include "Paketi\Logger\TLogger.h"
#include "DataPack\DataPackInstance.h"
//---------------------------------------------------------------------------
class  TBizerba : public TVaga
{

private:

public:
//   virtual void stampajNefiskalniText(TStringList *lista);
//   virtual int fajlIspravan(String fajl);
//   virtual int fiskalGreskaFajla(String putanja);
   TBizerba (int idVage, int sifraMagacina);
   TBizerba ();
   ~TBizerba (){}
   void ubaciSveArtikle(int sve);

   Currency procitajTezinu(callbackTezinaIzmerena OnTezinaIzmerena, Currency *tezina);
   AnsiString procitajTezinu();
};
void Upis(String putanja, String naredba);
#endif
