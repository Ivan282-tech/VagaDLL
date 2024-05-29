//---------------------------------------------------------------------------


#ifndef c_bizerbaCS300H
#define c_bizerbaCS300H

#include "Vaga.h"

//---------------------------------------------------------------------------

class  TBizerbaCS300 : public TVaga
{

private:
//	TApdComPort *cPort;
//	TApdDataPacket *adp;
//	void __fastcall (__closure  *callbackTezinaIzmerena)(TObject *Sender) ;
	int idVage;
	int sifra_magacina;
	String naziv;

	int baud;
	int comport;
	int databits;
	int stopbits;
    int parity;
	void __fastcall CallBack(AnsiString rezultat);
	void __fastcall adpTimeout(TObject *Sender);
	callbackTezinaIzmerena callbackVratiRezultat;
public:
//   virtual void stampajNefiskalniText(TStringList *lista);
//   virtual int fajlIspravan(String fajl);
//   virtual int fiskalGreskaFajla(String putanja);
   TBizerbaCS300 (int idVage, int sifraMagacina);
   TBizerbaCS300 ();
   ~TBizerbaCS300 (){}
   void ubaciSveArtikle(int sve);
   AnsiString procitajTezinu();
   Currency procitajTezinu(callbackTezinaIzmerena OnTezinaIzmerena, Currency *tezina);
   void __fastcall portPodaciDostupni(TObject *CP, WORD Count);
   Currency __fastcall IzracunajTezinu( AnsiString Data );
   void __fastcall PosaljiPodatke(String data, int duzina_rezultata);
   void __fastcall adpStringPacket(TObject *Sender, AnsiString Data);
//   void __fastcall CallBack(AnsiString rezultat);
   void __fastcall ErrorHand(AnsiString rezultat);

   Currency kol;
};
#endif
