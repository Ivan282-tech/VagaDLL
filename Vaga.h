//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include "DataModule\dm_vaga.h"
#ifndef VagaH
#define VagaH
//---------------------------------------------------------------------------
typedef void __fastcall (__closure  *callbackTezinaIzmerena)(Currency mer) ;
class TVaga
{

protected:

	String nazivVage;
	String putanjaVage;
	int idVage;
	int tipVage;
public:
	Currency tezina;
	String getPutanja();
	int getIdVage();
	int getTipVage();
	String getStatus();
	TdmVaga *dmV;
    virtual AnsiString procitajTezinu() = 0;
	TVaga ();
	TVaga (int idVage,  int sifraMagacina);
	virtual ~TVaga() {}

	virtual void ubaciSveArtikle(int sve = 0)=0;
	virtual Currency procitajTezinu( callbackTezinaIzmerena, Currency *tezina)=0;
//	virtual TStringList procitajSveArtikle(void)=0;
//	virtual int ubaciJedanArtikal(String fajl)=0;
//	virtual int procitajJedanArtikal(int sifraArtikla)=0;
//	virtual int procitajJedanArtikal(String kodArtikla)=0;
//
//	struct  TVagaPodesavanje{
//		UnicodeString kodArtikla;
//		UnicodeString barKod;
//		UnicodeString nazivArtikal;
//		int prefiks;
//		Currency cena;
//		UnicodeString jedinicaMere;
//		Currency kolicina;
//		UnicodeString tip_terapije;
//		UnicodeString doziranje;
//		UnicodeString id_ileka;
//	} *vaga;
};
#endif
