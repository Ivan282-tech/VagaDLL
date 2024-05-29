//---------------------------------------------------------------------------

#pragma hdrstop

#include "c_bxvaga.h"
//#include "Connections.h"


extern int GODINA;
extern AnsiString LOG_FAJL;
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
TBXVaga::TBXVaga () : TVaga ()
{
//
}
TBXVaga::TBXVaga (int idVage, int sifraMagacina) : TVaga (idVage, sifraMagacina)
{
//
}
Currency TBXVaga::procitajTezinu(callbackTezinaIzmerena OnTezinaIzmerena, Currency *tezina)
{
	//
	return 0;
}
AnsiString TBXVaga::procitajTezinu(){
	return 0;
}
void TBXVaga::ubaciSveArtikle(int sve)
{

	try {
		dmV->cdsPodaci->Open();

		String putanja = dmV->cdsVaga->FieldByName("adresa")->AsString;

		dmV->cdsPodaci->Close();
		dmV->sdsPodaci->ParamByName("godina")->AsInteger = GODINA;
		dmV->sdsPodaci->ParamByName("datum")->AsDateTime = Date();
		dmV->sdsPodaci->ParamByName("id")->AsInteger = dmV->cdsVaga->FieldByName("ID")->AsInteger;
		dmV->cdsPodaci->Open();
		dmV->cdsPodaci->First();

		String naredba = "";

		if (FileExists(putanja))
			DeleteFile(putanja);

		while (!dmV->cdsPodaci->Eof) {
			naredba = naredba + dmV->cdsPodaci->FieldByName("PLU")->AsString + ", ";
			naredba = naredba + dmV->cdsPodaci->FieldByName("COM")->AsString + ", ";
			naredba += "27, ";
			naredba += "00001, ";
			naredba = naredba + dmV->cdsPodaci->FieldByName("UP")->AsCurrency + ", ";
			naredba += "KG, ";
			naredba += "000";
			naredba += "01";
			Upis(putanja, naredba);
            naredba = "";
			dmV->cdsPodaci->Next();
		}
	} catch (Exception &e) {
//		UpisiULogFile(LOG_FAJL, "Greska void TBXVaga::ubaciSveArtikle()" + e.Message,2);
		TLogger* _log = new TLogger(nullptr);
		_log->Log("Greska void TBXVaga::ubaciSveArtikle() " + e.Message,llInfo);
        delete _log;
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
