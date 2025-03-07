//---------------------------------------------------------------------------

#pragma hdrstop

#include "c_bizerba_plst.h"

extern int GODINA;
//---------------------------------------------------------------------------
TBizerbaPLST::TBizerbaPLST () : TVaga ()
{
//
}
TBizerbaPLST::TBizerbaPLST (int idVage, int sifraMagacina) : TVaga (idVage, sifraMagacina)
{
//
}
Currency TBizerbaPLST::procitajTezinu(callbackTezinaIzmerena OnTezinaIzmerena, Currency *tezina)
{
	//
	return 0;
}
AnsiString TBizerbaPLST::procitajTezinu()
{
	//
	return 0;
}
void TBizerbaPLST::ubaciSveArtikle(int sve)
{
	char cr = 13;
	char lf = 10;
//	UnicodeString sql =  "select  b.oznaka, b.plu, b.s1u, b.bcf, b.cena, b.flag, b.prefix, b.artikal from PROC_MP_VAGA2(:ID, :DATUM, :GODINA) b";
//	UnicodeString name = "dspVaga" ;
//
//	THelper* helper = new THelper(nullptr);
//
//	TSQLConnection* konekcija = new TSQLConnection(nullptr);
//
//	TRezultatOperacije<TSQLConnection*>* rezultat = helper->NapraviKonekcijuSQLConnection(true);
//
//	if(rezultat->OperacijaUspela()){
//			konekcija = rezultat->DohvatiRezultat();
//	}   else{
//		  AnsiString greska = rezultat->DohvatiGresku();
//	}

//
//	DataPackInstance *dbVaga = new DataPackInstance(konekcija,  sql,  name);
//
//
//	dbVaga->sds->ParamCheck = true;
//	dbVaga->sds->ParamByName("ID")->AsInteger = dmV->cdsVaga->FieldByName("ID")->AsInteger;
//	dbVaga->sds->ParamByName("DATUM")->AsDateTime = Date();
//	dbVaga->sds->ParamByName("GODINA")->AsInteger = GODINA;
//	dbVaga->cds->Active = true;
//	dbVaga->cds->First();

	dmV->cdsPodaci->Close();
	dmV->sdsPodaci->ParamByName("godina")->AsInteger = GODINA;
	dmV->sdsPodaci->ParamByName("datum")->AsDateTime = Date();
	dmV->sdsPodaci->ParamByName("id")->AsInteger = dmV->cdsVaga->FieldByName("ID")->AsInteger;
	dmV->cdsPodaci->Open();
	dmV->cdsPodaci->First();

	String putanja = dmV->cdsVaga->FieldByName("adresa")->AsString;
	String naredba = "";

	try {

		if (!DirectoryExists(ExtractFilePath(putanja)))
			CreateDir(ExtractFilePath(putanja));

	} catch (...) {
	}

	if (FileExists(putanja))
		DeleteFile(putanja);

	AnsiString naziv , cena;
	while (!dmV->cdsPodaci->Eof) {
		naredba = dmV->cdsPodaci->FieldByName("kod_vage")->AsString;
		naredba = naredba + dmV->cdsPodaci->FieldByName("plu")->AsString ;
		naredba = naredba +  "00";
		naredba = naredba + "00";
		cena = IntToStr((int)(dmV->cdsPodaci->FieldByName("up")->AsCurrency * 100)) ;
		cena = Strutils::DupeString('0', 6 - cena.Length()) + cena;
		naredba = naredba + cena ;
		naredba = naredba +  "000";
		naredba = naredba +  "0270000100000";
		naziv = dmV->cdsPodaci->FieldByName("com")->AsString;
		naredba = naredba + naziv + Strutils::DupeString(' ', 250 - naziv.Length());// + cr + lf;
		if (dmV->cdsPodaci->FieldByName("up")->AsCurrency > 0) {
//           UpisiUFile(putanja, naredba, 2);
                Upis(putanja, naredba);
//				TLogger* _log = new TLogger(nullptr);
//			   _log->Log(naredba,llInfo,putanja);
//			   delete _log;
		}


		dmV->cdsPodaci->Next();
	}

//	ShowMessage("Zavrseno pravljenje fajla za vagu. " + dmV->cdsVaga->FieldByName("adresa")->AsString );
//	MessageDlg( "Zavrseno pravljenje fajla za vagu. " + dmV->cdsVaga->FieldByName("adresa")->AsString, mtInformation, TMsgDlgButtons() << mbOK ,0) ;
//    	delete rezultat;
//		delete konekcija;
//		delete helper;

}
void Upis(String putanja, String naredba){
		 TStringList* fajl = new TStringList();


		if (FileExists(putanja)) {
			fajl->LoadFromFile(putanja);
		}

		fajl->Add(naredba);

		fajl->SaveToFile(putanja, TEncoding::Default);

		delete fajl;
}
#pragma package(smart_init)

/*
01 00980 00 00 120000 000 270000100000Voce smrznuto
1.WGNU,  2, N, 0, 1................2 cifre za grupu-odeljenje
2.PNUM,  5, N, 0, 1................5 cifara za sifru artikla (PLU)
3.KLAR,  2, N, 0, 1................2 cifre za tip proizvoda (00-mereno,01-rucni(tj. komadni),03-brojanjem
4.STPA,  2, N, 0, 1................2 cifre za broj komada u paketu ukoliko se koristi 03-brojanjem kod KLAR
5.GPR1,  6, N, 0, 1................6 cifara za cenu
6.HBA1,  3, N, 0, 1................3 cifre za rok trajanja
7.ECO1, 13, C, 0, 1...............13 cifara za barkod, {1 cifra (0 za interni, a 1 proizvodjacki kod) pa 12 cifara za barkod}
8.PLTE,250, C, 0, 1..............250 karaktera za naziv artikla
cr,    1, S, 0, 1, 13..............carrage return
eol,   1, S, 0, 1, 10.............. EndOfLine


PRIMER:

	(1)	 (2)    (3)	(4)	 (5)	(6)	     (7)             (8)
	01	00001	00	00	035900	000	0270000100000	SVINJ. BUT BK/kg


OVAKO TREBA DA IZGLEDA plst.txt FILE:

010000200000329000000270000200000SV.VRAT SK/ kg
*/