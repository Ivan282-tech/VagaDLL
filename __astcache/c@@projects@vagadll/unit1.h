//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "cxButtons.hpp"
#include "cxCheckBox.hpp"
#include "cxClasses.hpp"
#include "cxContainer.hpp"
#include "cxControls.hpp"
#include "cxCustomData.hpp"
#include "cxData.hpp"
#include "cxDataStorage.hpp"
#include "cxDBData.hpp"
#include "cxDBEdit.hpp"
#include "cxDBLookupComboBox.hpp"
#include "cxDBLookupEdit.hpp"
#include "cxDropDownEdit.hpp"
#include "cxEdit.hpp"
#include "cxFilter.hpp"
#include "cxGraphics.hpp"
#include "cxGrid.hpp"
#include "cxGridCustomTableView.hpp"
#include "cxGridCustomView.hpp"
#include "cxGridDBTableView.hpp"
#include "cxGridLevel.hpp"
#include "cxGridTableView.hpp"
#include "cxLabel.hpp"
#include "cxLookAndFeelPainters.hpp"
#include "cxLookAndFeels.hpp"
#include "cxLookupEdit.hpp"
#include "cxMaskEdit.hpp"
#include "cxNavigator.hpp"
#include "cxPC.hpp"
#include "cxStyles.hpp"
#include "cxTextEdit.hpp"
#include "dxBarBuiltInMenu.hpp"
#include "dxDateRanges.hpp"
#include "dxScrollbarAnnotations.hpp"
#include <Data.DB.hpp>
#include <Vcl.Menus.hpp>
#include <Data.DBXFirebird.hpp>
#include <Data.FMTBcd.hpp>
#include <Data.SqlExpr.hpp>
#include <Datasnap.DBClient.hpp>
#include <Datasnap.Provider.hpp>

#include <System.SysUtils.hpp>
#include <System.IOUtils.hpp>
#include <REST.Backend.EMSFireDAC.hpp>
#include <REST.Backend.EMSServices.hpp>
#include "frxClass.hpp"
#include "Vaga.h"
#include "VagaFactory.h"
#include "VagaController.h"
#include "c_poruka.h"
#include "frxDBSet.hpp"

//---------------------------------------------------------------------------
class PACKAGE TForm1 : public TForm
{
__published:	// IDE-managed Components
	TcxGridDBTableView *cxGrid1DBTableView1;
	TcxGridLevel *cxGrid1Level1;
	TcxGrid *cxGrid1;
	TcxGridDBTableView *cxGrid2DBTableView1;
	TcxGridLevel *cxGrid2Level1;
	TcxGrid *cxGrid2;
	TEdit *Pretraga;
	TcxCheckBox *cxSveVage;
	TcxPageControl *cxPageControl1;
	TcxDBLookupComboBox *cbMagacin;
	TcxDBLookupComboBox *dbTip_vage;
	TcxDBTextEdit *dteNaziv_vage;
	TcxDBTextEdit *cxKomanda;
	TcxDBTextEdit *dteAdresa;
	TcxTextEdit *tip_nalepnice;
	TcxLabel *Magacin;
	TcxLabel *tip_vage;
	TcxLabel *naziv_vage;
	TcxLabel *cxLabel3;
	TcxLabel *cxLabel4;
	TcxLabel *cxLabel5;
	TcxButton *btnTipVage;
	TcxButton *Izlaz;
	TcxButton *Dodaj;
	TcxButton *snimi;
	TcxButton *odustani;
	TcxButton *stampa;
	TcxButton *obrisi;
	TcxButton *posalji;
	TcxButton *Izmeni;
	TSQLDataSet *sdsVaga;
	TDataSetProvider *dspVaga;
	TClientDataSet *cdsVaga;
	TDataSource *dsVaga;
	TSQLConnection *Konekcija;
	TSQLDataSet *sdsTip_Vage;
	TDataSetProvider *dspTip_Vage;
	TClientDataSet *cdsTip_Vage;
	TDataSource *dsTip_Vage;
	TIntegerField *sdsTip_VageID;
	TIntegerField *sdsTip_VageTIP;
	TStringField *sdsTip_VageNAZIV;
	TIntegerField *cdsTip_VageID;
	TIntegerField *cdsTip_VageTIP;
	TStringField *cdsTip_VageNAZIV;
	TIntegerField *sdsVagaTIP_VAGE;
	TStringField *sdsVagaNAZIV_VAGE;
	TStringField *sdsVagaADRESA;
	TSmallintField *sdsVagaAKTIVAN;
	TStringField *sdsVagaMAGACIN;
	TStringField *cdsVagaNAZIV_VAGE;
	TStringField *cdsVagaADRESA;
	TSmallintField *cdsVagaAKTIVAN;
	TIntegerField *cdsVagaTIP_VAGE;
	TStringField *cdsVagaMAGACIN;
	TcxGridDBColumn *cxGrid1DBTableView1NAZIV_VAGE;
	TcxGridDBColumn *cxGrid1DBTableView1ADRESA;
	TcxGridDBColumn *cxGrid1DBTableView1AKTIVAN;
	TcxGridDBColumn *cxGrid1DBTableView1TIP_VAGE;
	TcxGridDBColumn *cxGrid1DBTableView1MAGACIN;
	TIntegerField *sdsVagaID;
	TIntegerField *sdsVagaSIFRA_MAGACINA;
	TIntegerField *sdsVagaRADNIK_CHANGE;
	TSQLTimeStampField *sdsVagaDATE_CHANGE;
	TSmallintField *sdsVagaBROJ_KARAKTERA;
	TSmallintField *sdsVagaCOMPORT;
	TSmallintField *sdsVagaPARITY;
	TSmallintField *sdsVagaSTOPBITS;
	TSmallintField *sdsVagaDATABITS;
	TIntegerField *sdsVagaBAUD;
	TSmallintField *sdsVagaAUTOMATSKA_VAGA;
	TStringField *sdsVagaTIP_NALEPNICE;
	TStringField *sdsVagaKOMANDA;
	TStringField *sdsVagaNAZIV;
	TIntegerField *cdsVagaID;
	TIntegerField *cdsVagaSIFRA_MAGACINA;
	TIntegerField *cdsVagaRADNIK_CHANGE;
	TSQLTimeStampField *cdsVagaDATE_CHANGE;
	TSmallintField *cdsVagaBROJ_KARAKTERA;
	TSmallintField *cdsVagaCOMPORT;
	TSmallintField *cdsVagaPARITY;
	TSmallintField *cdsVagaSTOPBITS;
	TSmallintField *cdsVagaDATABITS;
	TIntegerField *cdsVagaBAUD;
	TSmallintField *cdsVagaAUTOMATSKA_VAGA;
	TStringField *cdsVagaTIP_NALEPNICE;
	TStringField *cdsVagaKOMANDA;
	TStringField *cdsVagaNAZIV;
	TClientDataSet *cdsArtikli;
	TDataSetProvider *dspArtikli;
	TSQLDataSet *sdsArtikli;
	TDataSource *dsArtikli;
	TStringField *sdsArtikliKOD;
	TStringField *sdsArtikliARTIKAL;
	TIntegerField *sdsArtikliID_VAGE;
	TStringField *sdsArtikliKOD_1;
	TStringField *sdsArtikliPLU;
	TFMTBCDField *sdsArtikliCENA;
	TStringField *cdsArtikliKOD;
	TStringField *cdsArtikliARTIKAL;
	TIntegerField *cdsArtikliID_VAGE;
	TStringField *cdsArtikliKOD_1;
	TStringField *cdsArtikliPLU;
	TFMTBCDField *cdsArtikliCENA;
	TcxGridDBColumn *cxGrid2DBTableView1KOD;
	TcxGridDBColumn *cxGrid2DBTableView1ARTIKAL;
	TcxGridDBColumn *cxGrid2DBTableView1KOD_1;
	TcxGridDBColumn *cxGrid2DBTableView1PLU;
	TcxGridDBColumn *cxGrid2DBTableView1CENA;
	TcxGridDBColumn *cxGrid2DBTableView1ID_VAGE;
	TcxLabel *cxLabel1;
	TcxLabel *cxLabel2;
	TcxLabel *cxLabel6;
	TcxLabel *cxLabel7;
	TcxLabel *cxLabel8;
	TcxCheckBox *cxPrekoFajla;
	TcxCheckBox *cxAktivan;
	TcxDBTextEdit *dtbaud;
	TcxDBTextEdit *dteParity;
	TcxDBTextEdit *dteStopbits;
	TcxDBTextEdit *dteComport;
	TcxDBTextEdit *dteDatabits;
	TcxLabel *edPodrazumevanaVaga;
	TDataSource *dsMGSetup;
	TClientDataSet *cdsMGSetup;
	TDataSetProvider *dspMGSetup;
	TSQLDataSet *dsetMGSetup;
	TIntegerField *cdsMGSetupSIFRA_MAGACINA;
	TStringField *cdsMGSetupMAGACIN;
	TIntegerField *cdsMGSetupSIFRA_DELATNOSTI;
	TIntegerField *cdsMGSetupSEDISTE;
	TStringField *cdsMGSetupSKRACENICA;
	TStringField *cdsMGSetupTIP_PROIZVODA;
	TSmallintField *cdsMGSetupROBNO;
	TIntegerField *cdsMGSetupTIP;
	TSmallintField *cdsMGSetupVIDLJIV;
	TStringField *cdsMGSetupMESTO;
	TStringField *cdsMGSetupADRESA;
	TSmallintField *cdsMGSetupVIDLJIV_MP;
	TSmallintField *cdsMGSetupTIP_CENA;
	TSmallintField *cdsMGSetupPDV_KNJIGA;
	TIntegerField *cdsMGSetupDEF_DOKUMENT;
	TSmallintField *cdsMGSetupCENA_MAGACIN;
	TStringField *cdsMGSetupKONTO;
	TSmallintField *cdsMGSetupROBNO_WAREHOUSE;
	TSmallintField *cdsMGSetupSNIMI_ODMAH;
	TIntegerField *cdsMGSetupZAKLJUCANO;
	TSmallintField *cdsMGSetupPUNI_KASU_POSLE_KALK;
	TIntegerField *cdsMGSetupTK_RAZDUZENJE_PAZAROM;
	TSmallintField *cdsMGSetupPRENETO_PS;
	TSmallintField *cdsMGSetupLAGER_JM;
	TIntegerField *cdsMGSetupVEZANI_MG;
	TIntegerField *cdsMGSetupID_CENOVNIK;
	TIntegerField *cdsMGSetupID_CENOVNIK_ULAZ;
	TSQLTimeStampField *cdsMGSetupDATE_CHANGE;
	TIntegerField *cdsMGSetupRADNIK_CHANGE;
	TStringField *cdsMGSetupSIFRA_MG_DOBAV;
	TIntegerField *cdsMGSetupIMA_VAGU;
	TStringField *cdsMGSetupVAGA_PREFIX;
	TFMTBCDField *cdsMGSetupVAGA_KOEF_TEZINA;
	TFMTBCDField *cdsMGSetupAKCIJSKI_RABAT;
	TIntegerField *cdsMGSetupROBNO_DALJINSKI;
	TFMTBCDField *cdsMGSetupMAX_KOL;
	TIntegerField *cdsMGSetupKES;
	TIntegerField *cdsMGSetupKARTICA;
	TIntegerField *cdsMGSetupCEK;
	TIntegerField *cdsMGSetupVIRMAN;
	TStringField *cdsMGSetupIP_ADRESA;
	TStringField *cdsMGSetupKOMANDA;
	TStringField *cdsMGSetupSMS_SERVIS_TERMINAL;
	TStringField *cdsMGSetupSMS_SERVIS_TERMINAL_PASSWORD;
	TIntegerField *cdsMGSetupDEF_ULAZ_DOK;
	TSmallintField *cdsMGSetupID_KAT_MG;
	TSmallintField *cdsMGSetupPERIOD_PROMETA;
	TIntegerField *cdsMGSetupSIFRAPRM;
	TSmallintField *cdsMGSetupSIFRA_SEKTORA;
	TIntegerField *cdsMGSetupPREBACI_PRODAJU;
	TSmallintField *cdsMGSetupPOPIS;
	TSmallintField *cdsMGSetupIZV_ML;
	TStringField *cdsMGSetupTELEFON;
	TStringField *cdsMGSetupPRIJEM_ATLANTIC;
	TIntegerField *cdsMGSetupKARTICA_DALJINSKA;
	TSmallintField *cdsMGSetupPRAVA_MG;
	TIntegerField *cdsMGSetupID_LINIJA;
	TIntegerField *cdsMGSetupSIFRA_ODELJENJA;
	TStringField *cdsMGSetupTEL1;
	TStringField *cdsMGSetupEMAIL;
	TIntegerField *cdsMGSetupTK_UPLATA_IZ_DOKUMENATA;
	TStringField *cdsMGSetupKONTO_KUPCA;
	TIntegerField *cdsMGSetupDEF_NALOG_ISPRAVKE;
	TIntegerField *cdsMGSetupRACUN_IZ_VISE_MAGACINA;
	TStringField *cdsMGSetupFTPUSER;
	TStringField *cdsMGSetupFTPPASSWD;
	TStringField *cdsMGSetupFTPHOST;
	TStringField *cdsMGSetupXMLDIR;
	TIntegerField *cdsMGSetupID_CENOVNIK_DOBAVLJACA;
	TSmallintField *cdsMGSetupKONTROLISI_ULAZNE_CENE;
	TStringField *cdsMGSetupBAZA;
	TIntegerField *cdsMGSetupKONTROL_PROD_CENA_UF;
	TIntegerField *cdsMGSetupSIFRA_MG_PR_IN;
	TIntegerField *cdsMGSetupSIFRA_MG_PR_OUT;
	TIntegerField *cdsMGSetupKEPU_DALJINSKA;
	TStringField *cdsMGSetupNAZIV_BAZE;
	TSmallintField *cdsMGSetupPROVERA_USLOVA_DOB;
	TStringField *cdsMGSetupNAZIV_BAZE_VOJNI;
	TStringField *cdsMGSetupNAZIV_BAZE_CIVILNI;
	TIntegerField *cdsMGSetupID_TROSKA;
	TSmallintField *cdsMGSetupMSG_TRACE_ITEMS;
	TStringField *cdsMGSetupSIFRA_RFZO_FILIJALE;
	TStringField *cdsMGSetupNAZIV_BAZE_SERVER;
	TStringField *cdsMGSetupSIFRAFILIJALE;
	TSmallintField *cdsMGSetupPROVERA_UF;
	TIntegerField *cdsMGSetupKARTICA_TERMINAL;
	TIntegerField *cdsMGSetupAUTO_TREBOVANJA;
	TIntegerField *cdsMGSetupRUCNA_TREBOVANJA;
	TIntegerField *cdsMGSetupIDODELJENJA;
	TSmallintField *cdsMGSetupSALJI_KESIRICE;
	TSmallintField *cdsMGSetupDEBUG_MODE;
	TIntegerField *cdsMGSetupKESIRICI;
	TSmallintField *cdsMGSetupNALOG_PRIJEMA_DOKUMENT;
	TSmallintField *cdsMGSetupAPI_ID_KESIRICI;
	TFMTBCDField *cdsMGSetupMARZA;
	TIntegerField *cdsMGSetupGRUPA_MG;
	TSmallintField *cdsMGSetupPRIORITET_ZA_TREBOVANJA;
	TSmallintField *cdsMGSetupRAD_SA_PDA;
	TSmallintField *cdsMGSetupCENA_POVRATNICE_NOCF;
	TIntegerField *cdsMGSetupID_GRUPA;
	TIntegerField *cdsMGSetupID_SEDISTE;
	TSmallintField *cdsMGSetupPDA_KOLICINA;
	TSmallintField *cdsMGSetupPROVERA_CASSA;
	TSmallintField *cdsMGSetupSERVER;
	TStringField *cdsMGSetupSIFRA_ZA_FOND;
	TSmallintField *cdsMGSetupOBRISI_PREFIKS_VAGE;
	TIntegerField *cdsMGSetupDEF_DOKUMENT_CC;
	TSmallintField *cdsMGSetupBENEFIT;
	TSmallintField *cdsMGSetupBROJ_DECIMALA_IZLAZ;
	TSmallintField *cdsMGSetupUK_IZVESTAJ;
	TSmallintField *cdsMGSetupMINUS_LAGER;
	TSmallintField *cdsMGSetupWEB_LAGER;
	TStringField *cdsMGSetupKESIRICI_API;
	TIntegerField *cdsMGSetupIDVERZIJE_KP;
	TIntegerField *cdsMGSetupID_LINIJE;
	TIntegerField *cdsMGSetupDEF_NALOG_ISPRAVKE_JP;
	TIntegerField *cdsMGSetupSIFRA_MESTA;
	TSmallintField *cdsMGSetupVAUCER;
	TStringField *cdsMGSetupGLN;
	TSmallintField *cdsMGSetupAKTIVAN;
	TIntegerField *cdsMGSetupIDREONA;
	TSmallintField *cdsMGSetupKORIGUJ_PROKNJIZ_DOK;
	TSmallintField *cdsMGSetupTENDER_IZVESTAJ;
	TSmallintField *cdsMGSetupTIP_PROSECNE_CENE;
	TSmallintField *cdsMGSetupBEZGOTOVINSKO;
	TSQLQuery *qID_vage;
	TLargeintField *qID_vageID;
	TfrxReport *frxReport1;
	TSQLStoredProc *sp_idvage;
	TfrxDBDataset *frxVaga;
	void __fastcall IzlazClick(TObject *Sender);
	void __fastcall DodajClick(TObject *Sender);
	void __fastcall IzmeniClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall snimiClick(TObject *Sender);
	void __fastcall odustaniClick(TObject *Sender);
	void __fastcall obrisiClick(TObject *Sender);
	void __fastcall stampaClick(TObject *Sender);
	void __fastcall posaljiClick(TObject *Sender);
	void __fastcall PretragaChange(TObject *Sender);
	void __fastcall PretragaKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall btnTipVageClick(TObject *Sender);
	void __fastcall cxAktivanPropertiesChange(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall dsVagaDataChange(TObject *Sender, TField *Field);
	void __fastcall cdsVagaNewRecord(TDataSet *DataSet);
	void __fastcall cxGrid1DBTableView1KeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall dspVagaGetTableName(TObject *Sender, TDataSet *DataSet, UnicodeString &TableName);
	void __fastcall cxSveVagePropertiesChange(TObject *Sender);




private:	// User declarations

	void __fastcall InputController();
	AnsiString 	APP_DIR      	= GetCurrentDir();


public:		// User declarations
	__fastcall TForm1(TComponent* Owner);

};
void PosaljiPoruku(AnsiString poruka, TColor boja = clYellow, int vremePrikazivanja = 10000);
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
