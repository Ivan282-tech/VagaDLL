//---------------------------------------------------------------------------

#ifndef ELabelH
#define ELabelH
//---------------------------------------------------------------------------
#include "Vaga.h"
 #include "Paketi\Helper\THelper.h"
 #include "Paketi\Logger\TLogger.h"
 #include "DataPack\DataPackInstance.h"

//
//---------------------------------------------------------------------------
class  TELabel : public TVaga
{

private:

public:
//   virtual void stampajNefiskalniText(TStringList *lista);
//   virtual int fajlIspravan(String fajl);
//   virtual int fiskalGreskaFajla(String putanja);
   TELabel (int idVage, int sifraMagacina);
   TELabel ();
   ~TELabel (){}
   void ubaciSveArtikle(int sve);
   Currency procitajTezinu(callbackTezinaIzmerena OnTezinaIzmerena, Currency *tezina);
};
void Upis(String putanja, String naredba);
#endif
