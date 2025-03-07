﻿//---------------------------------------------------------------------------

#pragma hdrstop

#include "Pegaz.h"
#include "Paketi\Helper\THelper.h"

extern int GODINA;
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
TPegaz::TPegaz () : TVaga ()
{
//
}
TPegaz::TPegaz (int idVage, int sifraMagacina) : TVaga (idVage, sifraMagacina)
{
//
}
Currency TPegaz::procitajTezinu(callbackTezinaIzmerena OnTezinaIzmerena, Currency *tezina)
{
	//
	return 0;
}

void TPegaz::ubaciSveArtikle(int sve)
{
	char cr = 13;
	char lf = 10;
	UnicodeString sql =  "select v.plu, v.cena, v.barkod, v.artikal from proc_mp_vaga_pegaz(:ID, :DATUM, :GODINA) V";
	UnicodeString name = "dspVaga" ;

	THelper* helper = new THelper(nullptr);

	TFDConnection* konekcija = new TFDConnection(nullptr);

	TRezultatOperacije<TFDConnection*>* rezultat = helper->NapraviKonekciju(false);

	if(rezultat->OperacijaUspela()){
			konekcija = rezultat->DohvatiRezultat();
	}   else{
		  AnsiString greska = rezultat->DohvatiGresku();
	}
	TFDQuery *query = new TFDQuery(nullptr);


	query->Connection = konekcija;

	query->SQL->Text = "select v.plu, v.cena, v.barkod, v.artikal from proc_mp_vaga_pegaz(:ID, :DATUM, :GODINA) V";

	query->Params->ParamByName("ID")->AsInteger = dmV->cdsVaga->FieldByName("ID")->AsInteger;
	query->Params->ParamByName("DATUM")->AsDateTime = Date();
	query->Params->ParamByName("GODINA")->AsInteger = GODINA;

	query->Open();

//	DataPackInstance *dbVaga = new DataPackInstance(konekcija,  sql,  name);
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
	while (!query->Eof) {
		naredba = query->FieldByName("plu")->AsString + " ";
		naredba = naredba + FormatCurr("######0.00",query->FieldByName("cena")->AsCurrency)  + " ";
		naredba = naredba +  query->FieldByName("barkod")->AsString + " ";
		naziv = query->FieldByName("artikal")->AsString;
		naredba = naredba + naziv;// + Strutils::DupeString(' ', 250 - naziv.Length());// + cr + lf;
		if (query->FieldByName("cena")->AsCurrency > 0) {
            Upis(putanja, naredba);
		}

		query->Next();
	}

//	ShowMessage("Zavrseno pravljenje fajla za vagu. " + dmV->cdsVaga->FieldByName("adresa")->AsString );
//	MessageDlg( "Zavrseno pravljenje fajla za vagu. " + dmV->cdsVaga->FieldByName("adresa")->AsString, mtInformation, TMsgDlgButtons() << mbOK ,0) ;
      	delete rezultat;
		delete konekcija;
		delete helper;
        delete query;

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
/*
00001 479.99 2809001000000 CIJA SEME 1KG
00002 494.80 2809002000000 KIKI ZACIN OZZY 1KG RIO
00003 499.99 2809003000000 KINOA BELA 1KG
*/
#pragma package(smart_init)
