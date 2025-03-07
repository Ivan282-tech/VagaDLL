
#pragma hdrstop

#include "c_univerzalna_vaga.h"


extern int GODINA;
//---------------------------------------------------------------------------
TUniverzalnaVaga::TUniverzalnaVaga () : TVaga ()
{
//
}
TUniverzalnaVaga::TUniverzalnaVaga (int idVage, int sifraMagacina) : TVaga (idVage, sifraMagacina)
{
//
}
Currency TUniverzalnaVaga::procitajTezinu(callbackTezinaIzmerena OnTezinaIzmerena, Currency *tezina)
{
	//
	return 0;
}
AnsiString TUniverzalnaVaga::procitajTezinu(){
    return 0;
}
void TUniverzalnaVaga::ubaciSveArtikle(int sve)
{
	char cr = 13;
	char lf = 10;
	UnicodeString sql =  "select   b.plu, b.s1u, b.bcf, b.up as cena, b.flag, b.com from PROC_MP_VAGA_UNI(:ID, :DATUM, :GODINA) b";
	UnicodeString name = "dspVaga" ;

	THelper* helper = new THelper(nullptr);

	TFDConnection* konekcija = new TFDConnection(nullptr);

	TRezultatOperacije<TFDConnection*>* rezultat = helper->NapraviKonekciju(false);

	if(rezultat->OperacijaUspela()){
			konekcija = rezultat->DohvatiRezultat();
	}
    TFDQuery *query = new TFDQuery(nullptr);


	query->Connection = konekcija;

	query->SQL->Text = "select   b.plu, b.s1u, b.bcf, b.up as cena, b.flag, b.com from PROC_MP_VAGA_UNI(:ID, :DATUM, :GODINA) b";
     if (sve == 0) {
			query->ParamByName("ID")->AsInteger = dmV->cdsVaga->FieldByName("ID")->AsInteger;
	}
	else {
			query->ParamByName("ID")->AsInteger = -1;
	}
	query->Params->ParamByName("DATUM")->AsDateTime = Date();
	query->Params->ParamByName("GODINA")->AsInteger = GODINA;

	query->Open();
//
//	DataPackInstance *dbVaga = new DataPackInstance(konekcija,  sql,  name);
//
//	dbVaga->sds->ParamCheck = true;
//	if (sve == 0) {
//		dbVaga->sds->ParamByName("ID")->AsInteger = dmV->cdsVaga->FieldByName("ID")->AsInteger;
//	}
//	else {
//		dbVaga->sds->ParamByName("ID")->AsInteger = -1;
//	}
//
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
		naredba = query->FieldByName("com")->AsString;
		if (query->FieldByName("cena")->AsCurrency > 0) {
//		   UpisiUFile(putanja, naredba, 2);
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
#pragma package(smart_init)
