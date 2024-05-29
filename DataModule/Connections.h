//---------------------------------------------------------------------------

#ifndef ConnectionsH
#define ConnectionsH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Data.SqlExpr.hpp>
#include <Data.DBXFirebird.hpp>
#include <Data.FMTBcd.hpp>
#include <Datasnap.DBClient.hpp>
#include <Datasnap.Provider.hpp>
//---------------------------------------------------------------------------
class TdbCon : public TDataModule
{
__published:	// IDE-managed Components
	TSQLConnection *LC;
	TSQLConnection *SC;
	TSQLConnection *Acc;
	TDataSource *dsTransaction;
	TClientDataSet *cdsTransaction;
	TDataSetProvider *dspTransaction;
	TSQLDataSet *sdsTransaction;
	TSQLDataSet *sdsTipPlacanja;
	TIntegerField *sdsTipPlacanjaIDPLACANJA;
	TStringField *sdsTipPlacanjaNAZIV;
	TSmallintField *sdsTipPlacanjaTRGOVACKA;
	TStringField *sdsTipPlacanjaKONTO;
	TIntegerField *sdsTipPlacanjaPODRAZUMEVANI_DOKUMENT;
	TIntegerField *sdsTipPlacanjaRAZDUZUJ_MP_AUTO;
	TIntegerField *sdsTipPlacanjaIDE_NA_KASU;
	TDataSetProvider *dspTipPlacanja;
	TClientDataSet *cdsTipPlacanja;
	TIntegerField *cdsTipPlacanjaIDPLACANJA;
	TStringField *cdsTipPlacanjaNAZIV;
	TSmallintField *cdsTipPlacanjaTRGOVACKA;
	TStringField *cdsTipPlacanjaKONTO;
	TIntegerField *cdsTipPlacanjaPODRAZUMEVANI_DOKUMENT;
	TIntegerField *cdsTipPlacanjaRAZDUZUJ_MP_AUTO;
	TIntegerField *cdsTipPlacanjaIDE_NA_KASU;
	TDataSource *dsTipPlacanja;
	TSQLConnection *Cyr;
	TSQLStoredProc *spIdLogovanja;
	TSQLQuery *sqlLog;
	TDataSource *dsVreme;
	TClientDataSet *cdsVreme;
	TDataSetProvider *dspVreme;
	TSQLDataSet *sdsVreme;
	void __fastcall DataModuleCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TdbCon(TComponent* Owner);
	bool isteBaze();
    bool __fastcall DostupnaDaljinskaBaza(TSQLConnection *konekcija);
//	void __fastcall PodesavanjePrograma();
};

class TKorisnik
{
private:        // User declarations
        public: // User declarations

    AnsiString user;
    int sifra_usera;
    int prava_usera;
    int default_mg;
    int def_mg_us;
    int default_kat;
    int default_ulaz_doc;
    AnsiString prava_mg;
	AnsiString myFileVersion;
	AnsiString myInvoiceNumber;
    AnsiString PcName;
	AnsiString pib;
	AnsiString uid;
	AnsiString ver;
	int LogId;
    AnsiString IpAdresa;
	AnsiString MacAdresa;
	AnsiString JavnaIP;
	int pravoSlanjaEFaktura;
    TKorisnik();
};
//---------------------------------------------------------------------------
extern PACKAGE TdbCon *dbCon;
//---------------------------------------------------------------------------
#endif
