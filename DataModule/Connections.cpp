//---------------------------------------------------------------------------


#pragma hdrstop

#include "Connections.h"
#include <vcl.h>
//#include "tools_log.h"
#include "System/tools_log.h"
//#include "bus_settings.h"


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "Vcl.Controls.TControl"
#pragma resource "*.dfm"
TdbCon *dbCon;
//extern TSettings mySettings;

	int ID_SOFTVERA = 2;
	float STOPA_DJ;
	int SIFRA_STOPA_DJ;
	float STOPA_E;
	int SIFRA_STOPA_E;
	float STOPA_G;
	float STOPA_A;
	AnsiString JID ;

	TKorisnik* myTKorisnik = new TKorisnik;

	AnsiString 	APP_DIR      	= GetCurrentDir();
	AnsiString 	LOG_FAJL 		= APP_DIR + "\\Log\\CashIT\\" + Sysutils::ExtractFileName(Sysutils::ChangeFileExt(Application->ExeName, ""))  + ".log"  ;//;//        = APP_DIR + "\\Log\\CashIT\\" + Sysutils::ExtractFileName(Sysutils::ChangeFileExt(Application->ExeName, ""))  + ".log"  ;//Sysutils::ChangeFileExt(Application->ExeName, ".log");
	AnsiString 	LOG_FAJL1 		= APP_DIR + "\\Log\\CashIT\\" + Sysutils::ExtractFileName(Sysutils::ChangeFileExt(Application->ExeName, ""))  + ".log1"  ;//;//       = APP_DIR + "\\Log\\CashIT\\" + Sysutils::ExtractFileName(Sysutils::ChangeFileExt(Application->ExeName, ""))  + ".log1"  ;//Sysutils::ChangeFileExt(Application->ExeName, ".log1");
	AnsiString 	TERMAL_PRINTER1 = "";
	AnsiString  POS_PRINTER 	= "\\podesavanje\\POS_PRINTER.ini";
	AnsiString  SETTINGS		= "\\podesavanje\\SETTINGS.ini";
	AnsiString  PODESAVANJE_PROGRAMA		= "\\podesavanje\\PODESAVANJE_PROGRAMA.ini";
	int VELICINA_LOG_FAJLA		= 2000;
    AnsiString  DEFAULT_PRINTER;
	int         BROJ_OTVORENOG_PROGRAMA = 0;
	AnsiString 	IPADRESA;
	//AnsiString 	NAZIV_RACUNARA;
	AnsiString 	BAZA_PODATAKA;
	AnsiString 	DIRZASTAMPU;

	int 		SCALEX          		= 1;
	int 		SCALEY          		= 1;
	int 	  	GODINA 					= -1;
	int 		FINANSIJSKI_DOKUMENT   	= 7020;
	int 		FINANSIJSKI_MAGACIN  	= 1070;
	int 		DataThread 				= 1;
	int 		id_popis_prenos;
	//TIPOVI PLACANJA
	int         IDKESP;
	int 		IDCEKP;
	int 		IDKARTICAP;
	int 		IDVIRMANP;
	int 		IDVIRMANPP;
	int 		IDKESIRICIP;
	int 		IDBENEFITP;
	int 		IDVAUCERP;
	int         IDBEZGOTOVINSKOP;

	int 		SIFRA_DEF_MAGACINA = -1;


//---------------------------------------------------------------------------
__fastcall TdbCon::TdbCon(TComponent* Owner)
	: TDataModule(Owner)
{
	try
	{
		SC->ConnectionName = "BAT_2006";
		SC->Connected = false;
	}
	catch( ... )
	{
		//
	}
	try {
		if (!DirectoryExists(APP_DIR + "\\Log\\backup"))
		{
			CreateDir(APP_DIR + "\\Log\\backup");
		}

	} catch (...) {
	}

	try {
		if (this->cdsTipPlacanja->Active == false) {
        	this->cdsTipPlacanja->Open();
		}
		this->cdsTipPlacanja->Filter = "naziv='Cekovi'";
		this->cdsTipPlacanja->Filtered = true;
		IDCEKP = this->cdsTipPlacanja->FieldByName("idplacanja")->AsInteger;

		this->cdsTipPlacanja->Filter = "naziv='Kartica'";
		this->cdsTipPlacanja->Filtered = true;
		IDKARTICAP = this->cdsTipPlacanja->FieldByName("idplacanja")->AsInteger;

		this->cdsTipPlacanja->Filter = "naziv='Virmanski'";
		this->cdsTipPlacanja->Filtered = true;
		IDVIRMANP = this->cdsTipPlacanja->FieldByName("idplacanja")->AsInteger;

		this->cdsTipPlacanja->Filter = "naziv='Gotovina'";
		this->cdsTipPlacanja->Filtered = true;
		IDKESP = this->cdsTipPlacanja->FieldByName("idplacanja")->AsInteger;

		this->cdsTipPlacanja->Filter = "naziv='Virman participacija'";
		this->cdsTipPlacanja->Filtered = true;
		IDVIRMANPP = this->cdsTipPlacanja->FieldByName("idplacanja")->AsInteger;

		this->cdsTipPlacanja->Filter = "UPPER(naziv)='BENEFIT'";
		this->cdsTipPlacanja->Filtered = true;
		IDBENEFITP = this->cdsTipPlacanja->FieldByName("idplacanja")->AsInteger;

		this->cdsTipPlacanja->Filter = "UPPER(naziv)='VAUCER'";
		this->cdsTipPlacanja->Filtered = true;
		IDVAUCERP = this->cdsTipPlacanja->FieldByName("idplacanja")->AsInteger;

		this->cdsTipPlacanja->Filter = "UPPER(naziv)='BEZGOTOVINSKO'";
		this->cdsTipPlacanja->Filtered = true;
		IDBEZGOTOVINSKOP = this->cdsTipPlacanja->FieldByName("idplacanja")->AsInteger;
	} catch (...) {
	}
	try {
		TSettings::PodesavanjePrograma();
	} catch (...) {
	}

}
//---------------------------------------------------------------------------
void __fastcall TdbCon::DataModuleCreate(TObject *Sender)
{
	try
	{
		SC->ConnectionName = "BAT_2006";
		SC->Connected = false;
	}
	catch( ... )
	{
		//
	}
	try
	{
		LC->ConnectionName = "baza2006";
		LC->Connected = false;
		LC->Connected = true;
	}
	catch( ... )
	{
		//
	}
}
//--------------------------------------------------------------------------
bool TdbCon::isteBaze()
{
	try
	{
		SC->ConnectionName = "BAT_2006";
		SC->Connected = true;
	}
	catch( ... )
	{
		AnsiString odgovor ="Ne mogu da se konektujem na server!!!   " ;
	   UpisiUFile(LOG_FAJL, odgovor , 2);
	}

	AnsiString d1 = SC->Params->Values["database"];
	AnsiString d2 = LC->Params->Values["database"];

	if (SC->Params->Values["database"] == LC->Params->Values["database"] ) {
		AnsiString odgovor ="Isti naziv baze i lokalna i daljinska!!!   " ;
	   UpisiUFile(LOG_FAJL, odgovor , 2);
	   return true;
	}
	else {
		return false;
    }
}
bool __fastcall TdbCon::DostupnaDaljinskaBaza(TSQLConnection *konekcija)
{
	bool ima_konekciju = false;
	try {
		sdsVreme->Active = false;
		sdsVreme->SQLConnection = konekcija;
		sdsVreme->Active = true;
		cdsVreme->Close();
		cdsVreme->Open();
		ima_konekciju = true;
	} catch (Exception &e) {
		UpisiUFile(LOG_FAJL, "TdbCon::DostupnaDaljinskaBaza1 Prva provera - nema konekcije na server" + e.Message , 2);
	}
	catch (...) {
		UpisiUFile(LOG_FAJL, "TdbCon::DostupnaDaljinskaBaza2 Prva provera - nema konekcije na server"  , 2);
    }
	if (ima_konekciju == false) {
		try {
			konekcija->Close();
			konekcija->Open();

			sdsVreme->Active = false;
			sdsVreme->SQLConnection = konekcija;
			sdsVreme->Active = true;
			cdsVreme->Close();
			cdsVreme->Open();
			ima_konekciju = true;
		}
        catch (Exception &e) {
			UpisiUFile(LOG_FAJL, "TdbCon::DostupnaDaljinskaBaza3 Druga provera - nema konekcije na server" + e.Message , 2);
		}
		catch (...) {
			UpisiUFile(LOG_FAJL, "TdbCon::DostupnaDaljinskaBaza4 Druga provera - nema konekcije na server"  , 2);
		}
	}


	return ima_konekciju;
}
//---------------------------------------------------------------------------
//void __fastcall TdbCon::PodesavanjePrograma()
//{
//	TIniFile *ini;
//	ini = new TIniFile( APP_DIR + "\\podesavanje\\PODESAVANJE_PROGRAMA.INI" );
//
//	PFR_API_ADDRESS = ini->ReadString( "PFR", "api_address", "http://localhost:8989/api/v3/" );
//
//	ini->WriteString( "PFR", "api_address", PFR_API_ADDRESS );
//
//}

//---------------------------------------------------------------------------
__fastcall TKorisnik::TKorisnik()
{

}
//---------------------------------------------------------------------------
