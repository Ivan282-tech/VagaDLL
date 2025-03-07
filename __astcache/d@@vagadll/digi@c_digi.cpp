﻿//---------------------------------------------------------------------------

#pragma hdrstop

#include "c_digi.h"
#include <Vcl.Dialogs.hpp>

extern int GODINA;
//---------------------------------------------------------------------------
TDigi::TDigi () : TVaga ()
{
//
}
TDigi::TDigi (int idVage, int sifraMagacina) : TVaga (idVage, sifraMagacina)
{
//
}
Currency TDigi::procitajTezinu(callbackTezinaIzmerena OnTezinaIzmerena, Currency *tezina)
{
	//
	return 0;
}
AnsiString TDigi::procitajTezinu(){
		return 0;
}
void TDigi::ubaciSveArtikle( int sve)
{


	String putanja = dmV->cdsVaga->FieldByName("adresa")->AsString;

	dmV->cdsPodaci->Close();
	dmV->sdsPodaci->ParamByName("godina")->AsInteger = GODINA;
	dmV->sdsPodaci->ParamByName("datum")->AsDateTime = Date();
	dmV->sdsPodaci->ParamByName("id")->AsInteger = dmV->cdsVaga->FieldByName("ID")->AsInteger;
	dmV->cdsPodaci->Open();
	dmV->cdsPodaci->First();

	try {

		if (!DirectoryExists(ExtractFilePath(putanja)))
			CreateDir(ExtractFilePath(putanja));

	} catch (...) {
	}

	if (FileExists(putanja))
		DeleteFile(putanja);

	String naredba = "PLU,COM,UP,S1U,BCF,FLAG,ING";

	Upis(putanja, naredba);

	while (!dmV->cdsPodaci->Eof) {
		naredba = dmV->cdsPodaci->FieldByName("PLU")->AsString + ",";
		naredba = naredba + dmV->cdsPodaci->FieldByName("COM")->AsString + ",";
		naredba = naredba + dmV->cdsPodaci->FieldByName("UP")->AsString + ",";
		naredba = naredba + dmV->cdsPodaci->FieldByName("S1U")->AsString + ",";
		naredba = naredba + dmV->cdsPodaci->FieldByName("BCF")->AsString + ",";
		naredba = naredba + dmV->cdsPodaci->FieldByName("FLAG")->AsString + ",";
		naredba = naredba + dmV->cdsPodaci->FieldByName("ING")->AsString ;

		Upis(putanja, naredba);
		dmV->cdsPodaci->Next();
	}


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
