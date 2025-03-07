//---------------------------------------------------------------------------

#ifndef dm_vagaH
#define dm_vagaH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Data.FMTBcd.hpp>
#include <Data.SqlExpr.hpp>
#include <Datasnap.DBClient.hpp>
#include <Datasnap.Provider.hpp>
#include <Data.DBXFirebird.hpp>
#include <Data.Bind.Components.hpp>
#include <Data.Bind.DBScope.hpp>
#include <Data.Bind.DBXScope.hpp>

//#include <Data.DBXFirebird.hpp>

//---------------------------------------------------------------------------
class TdmVaga : public TDataModule
{
__published:	// IDE-managed Components
	TDataSource *dsVaga;
	TClientDataSet *cdsVaga;
	TDataSetProvider *dspVaga;
	TSQLDataSet *sdsVaga;
	TDataSource *dsPodaci;
	TClientDataSet *cdsPodaci;
	TDataSetProvider *dspPodaci;
	TSQLDataSet *sdsPodaci;
	TDataSource *dsBXVaga;
	TClientDataSet *cdsBXVaga;
	TDataSetProvider *dspBXVaga;
	TSQLDataSet *sdsBXVaga;
	TWideStringField *sdsBXVagaGRUPA;
	TWideStringField *sdsBXVagaSIFRAARTIKLA;
	TWideStringField *sdsBXVagaNAZIVARTIKLA;
	TWideStringField *sdsBXVagaPREFIKSBK;
	TWideStringField *sdsBXVagaBARKOD;
	TFMTBCDField *sdsBXVagaJEDCENA;
	TWideStringField *sdsBXVagaJEDMERE;
	TWideStringField *sdsBXVagaROKTRAJANJA;
	TIntegerField *sdsBXVagaBRZITASTER;
	TIntegerField *sdsBXVagaSB1;
	TWideStringField *sdsBXVagaBARCODEEAN13;
	TWideStringField *cdsBXVagaGRUPA;
	TWideStringField *cdsBXVagaSIFRAARTIKLA;
	TWideStringField *cdsBXVagaNAZIVARTIKLA;
	TWideStringField *cdsBXVagaPREFIKSBK;
	TWideStringField *cdsBXVagaBARKOD;
	TFMTBCDField *cdsBXVagaJEDCENA;
	TWideStringField *cdsBXVagaJEDMERE;
	TWideStringField *cdsBXVagaROKTRAJANJA;
	TIntegerField *cdsBXVagaBRZITASTER;
	TIntegerField *cdsBXVagaSB1;
	TWideStringField *cdsBXVagaBARCODEEAN13;
	TDataSource *dsVagaPegaz;
	TClientDataSet *cdsVagaPegaz;
	TDataSetProvider *dspVagaPegaz;
	TSQLDataSet *sdsVagaPegaz;
	TSQLConnection *SC1;
private:	// User declarations
	int IDVAGE ;

public:		// User declarations
	__fastcall TdmVaga(TComponent* Owner);
	__fastcall TdmVaga( int idVage, int Sifra_mag, TComponent* Owner) ;
	void __fastcall AktivirajVagu(int idVage, int Sifra_mag );

	void  getTipVage(int idVage);
	void  getSifruMagacina(int idVage);
	int  getAktivan();

};
//---------------------------------------------------------------------------
extern PACKAGE TdmVaga *dmVaga;

extern PACKAGE AnsiString APP_DIR;
//---------------------------------------------------------------------------
#endif
