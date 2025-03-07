﻿//---------------------------------------------------------------------------

#ifndef vaga_formaH
#define vaga_formaH
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
#include "cxGroupBox.hpp"

//---------------------------------------------------------------------------
class PACKAGE TVagaForm : public TForm
{
__published:	// IDE-managed Components
	TcxGridDBTableView *cxGrid1DBTableView1;
	TcxGridLevel *cxGrid1Level1;
	TcxGrid *cxGrid1;
	TEdit *Pretraga;
	TcxCheckBox *cxSveVage;
	TcxDBLookupComboBox *dbTip_vage;
	TcxDBTextEdit *dteNaziv_vage;
	TcxDBTextEdit *cxKomanda;
	TcxDBTextEdit *dteAdresa;
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
	TcxLabel *cxLabel1;
	TcxLabel *cxLabel2;
	TcxLabel *cxLabel6;
	TcxLabel *cxLabel7;
	TcxLabel *cxLabel8;
	TcxCheckBox *cxPrekoFajla;
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
	TSQLQuery *qID_vage;
	TLargeintField *qID_vageID;
	TfrxReport *frxReport1;
	TSQLStoredProc *sp_idvage;
	TfrxDBDataset *frxVaga;
	TcxDBTextEdit *tip_nalepnice;
	TcxDBLookupComboBox *cbMagacin;
	TIntegerField *dsetMGSetupSIFRA_MAGACINA;
	TStringField *dsetMGSetupMAGACIN;
	TIntegerField *cdsMGSetupSIFRA_MAGACINA;
	TStringField *cdsMGSetupMAGACIN;
	TIntegerField *sdsTip_VageID;
	TIntegerField *sdsTip_VageTIP;
	TStringField *sdsTip_VageNAZIV;
	TcxGridDBColumn *cxGrid1DBTableView1ID;
	TcxDBCheckBox *cxDBCheckBox1;
	TDataSource *ds_fis;
	TClientDataSet *cdsfis;
	TIntegerField *cdsfisID;
	TIntegerField *cdsfisFISKAL;
	TIntegerField *cdsfisSIFRA_DEFAULT_KUPCA;
	TIntegerField *cdsfisSPECIJALNI_SLUCAJ;
	TStringField *cdsfisAUTO_DATUM;
	TStringField *cdsfisROBNO;
	TIntegerField *cdsfisSIRINA_DUGMETA;
	TIntegerField *cdsfisVISINA_DUGMETA;
	TIntegerField *cdsfisDEF_MP_MG;
	TStringField *cdsfisKOMITENT;
	TStringField *cdsfisMAGACIN;
	TIntegerField *cdsfisPERIOD_SLANJA_PODATAKA;
	TIntegerField *cdsfisSIFRA_ROBE_VIP;
	TIntegerField *cdsfisSIFRA_ROBE_TELENOR;
	TIntegerField *cdsfisSIFRA_ROBE_TELEKOM;
	TStringField *cdsfisSMS_SERVIS_ADRESA;
	TSmallintField *cdsfisSMS_SERVIS_PORT;
	TSmallintField *cdsfisSMS_SERVIS_TERMINAL_FIRMWARE;
	TSmallintField *cdsfisSMS_OPERATER_VIP;
	TSmallintField *cdsfisSMS_OPERATER_TELENOR;
	TSmallintField *cdsfisSMS_OPERATER_TELEKOM;
	TStringField *cdsfisSMS_SERVIS_TERMINAL;
	TStringField *cdsfisSMS_SERVIS_TERMINAL_PASSWORD;
	TIntegerField *cdsfisVREME_KRETANJA;
	TIntegerField *cdsfisSIRINA_FORME_PROD;
	TIntegerField *cdsfisFONT_FORME_PROD;
	TIntegerField *cdsfisFISKAL_AKTIVAN;
	TSQLTimeStampField *cdsfisSTART_PREBACIVANJA_PODATAKA;
	TFMTBCDField *cdsfisMINIZNOS_VIP;
	TFMTBCDField *cdsfisMINIZNOS_TELENOR;
	TFMTBCDField *cdsfisMINIZNOS_TELEKOM;
	TIntegerField *cdsfisSIRINA_DUGMETA_STO;
	TIntegerField *cdsfisVISINA_DUGMETA_STO;
	TIntegerField *cdsfisBOJA_REZERVISANO;
	TIntegerField *cdsfisBOJA_BORAVKA;
	TIntegerField *cdsfisBOJA_OTKAZA;
	TIntegerField *cdsfisSIFRA_DOK_PRIJEM_PR;
	TIntegerField *cdsfisSIFRA_DOK_PRIJEM_MP;
	TIntegerField *cdsfisSIFRA_DOK_PRIJEM_SIR;
	TIntegerField *cdsfisBROJ_PREBACIVANJA_PODATAKA;
	TIntegerField *cdsfisAUTO_LOGOFF_OPERATER;
	TIntegerField *cdsfisBORAVISNA_TAKSA;
	TIntegerField *cdsfisBOJA_ZAUZETO;
	TIntegerField *cdsfisSIFRA_ROBE_USLUGA_HOTEL;
	TIntegerField *cdsfisVISINA_KATEGORIJA_PANEL;
	TIntegerField *cdsfisOSIGURANJE;
	TIntegerField *cdsfisSINHRO_PROMET_MAGACINA;
	TIntegerField *cdsfisBOJA_DUGMETA_K;
	TIntegerField *cdsfisBOJA_DUGMETA_A;
	TIntegerField *cdsfisBOJA_A;
	TIntegerField *cdsfisBOJA_K;
	TIntegerField *cdsfisBOJA_TEXT_DUGME_A;
	TIntegerField *cdsfisBOJA_TEXT_DUGME_K;
	TIntegerField *cdsfisSIFRA_ROBE_GLOBAL;
	TIntegerField *cdsfisSIFRA_ROBE_VECTON;
	TIntegerField *cdsfisSMS_OPERATER_GLOBA;
	TIntegerField *cdsfisSMS_OPERATER_VECTON;
	TFMTBCDField *cdsfisMINIZNOS_VECTON;
	TFMTBCDField *cdsfisMINIZNOS_GLOBAL;
	TSmallintField *cdsfisOBRISI_STAVKE;
	TIntegerField *cdsfisSIFRA_ROBE_MTELA;
	TIntegerField *cdsfisSMS_OPERATER_MTELA;
	TFMTBCDField *cdsfisMINIZNOS_MTELA;
	TSmallintField *cdsfisPROVERAVAJ_CEK_KOMITENTA;
	TSmallintField *cdsfisGRUPISI_ARTIKLE_NA_FISK;
	TSmallintField *cdsfisMNOZI_ODNOS_PJM;
	TIntegerField *cdsfisSIFRA_PROIZV_UF_PRODAJA;
	TSmallintField *cdsfisTRAZI_BENEFIT_KOMITENTA;
	TStringField *cdsfisWEB_UPUTSTVO;
	TSmallintField *cdsfisSTAMPAJ_ULAZNICE;
	TFMTBCDField *cdsfisMINIZNOS_MERIDIAN;
	TIntegerField *cdsfisSTAMPAJ_POS_VISE_PUTA;
	TIntegerField *cdsfisAC_CREDIT_DALJINSKI;
	TSmallintField *cdsfisHP_SLANJE_DEL_GRESKA;
	TDataSetProvider *dsp_fis;
	TSQLDataSet *sql_fis;
	TIntegerField *sql_fisID;
	TIntegerField *sql_fisFISKAL;
	TIntegerField *sql_fisSIFRA_DEFAULT_KUPCA;
	TSmallintField *sql_fisSPECIJALNI_SLUCAJ;
	TIntegerField *sql_fisSIRINA_DUGMETA;
	TIntegerField *sql_fisVISINA_DUGMETA;
	TStringField *sql_fisAUTO_DATUM;
	TStringField *sql_fisROBNO;
	TIntegerField *sql_fisDEF_MP_MG;
	TStringField *sql_fisKOMITENT;
	TStringField *sql_fisMAGACIN;
	TIntegerField *sql_fisPERIOD_SLANJA_PODATAKA;
	TIntegerField *sql_fisSIFRA_ROBE_VIP;
	TIntegerField *sql_fisSIFRA_ROBE_TELENOR;
	TIntegerField *sql_fisSIFRA_ROBE_TELEKOM;
	TStringField *sql_fisSMS_SERVIS_ADRESA;
	TSmallintField *sql_fisSMS_SERVIS_PORT;
	TSmallintField *sql_fisSMS_SERVIS_TERMINAL_FIRMWARE;
	TSmallintField *sql_fisSMS_OPERATER_VIP;
	TSmallintField *sql_fisSMS_OPERATER_TELENOR;
	TSmallintField *sql_fisSMS_OPERATER_TELEKOM;
	TStringField *sql_fisSMS_SERVIS_TERMINAL;
	TStringField *sql_fisSMS_SERVIS_TERMINAL_PASSWORD;
	TIntegerField *sql_fisVREME_KRETANJA;
	TIntegerField *sql_fisSIRINA_FORME_PROD;
	TIntegerField *sql_fisFONT_FORME_PROD;
	TIntegerField *sql_fisFISKAL_AKTIVAN;
	TSQLTimeStampField *sql_fisSTART_PREBACIVANJA_PODATAKA;
	TFMTBCDField *sql_fisMINIZNOS_VIP;
	TFMTBCDField *sql_fisMINIZNOS_TELENOR;
	TFMTBCDField *sql_fisMINIZNOS_TELEKOM;
	TIntegerField *sql_fisSIRINA_DUGMETA_STO;
	TIntegerField *sql_fisVISINA_DUGMETA_STO;
	TIntegerField *sql_fisBOJA_REZERVISANO;
	TIntegerField *sql_fisBOJA_BORAVKA;
	TIntegerField *sql_fisBOJA_OTKAZA;
	TIntegerField *sql_fisSIFRA_DOK_PRIJEM_PR;
	TIntegerField *sql_fisSIFRA_DOK_PRIJEM_MP;
	TIntegerField *sql_fisSIFRA_DOK_PRIJEM_SIR;
	TIntegerField *sql_fisBROJ_PREBACIVANJA_PODATAKA;
	TIntegerField *sql_fisAUTO_LOGOFF_OPERATER;
	TIntegerField *sql_fisBORAVISNA_TAKSA;
	TIntegerField *sql_fisBOJA_ZAUZETO;
	TIntegerField *sql_fisSIFRA_ROBE_USLUGA_HOTEL;
	TIntegerField *sql_fisVISINA_KATEGORIJA_PANEL;
	TIntegerField *sql_fisOSIGURANJE;
	TIntegerField *sql_fisSINHRO_PROMET_MAGACINA;
	TIntegerField *sql_fisBOJA_DUGMETA_K;
	TIntegerField *sql_fisBOJA_DUGMETA_A;
	TIntegerField *sql_fisBOJA_A;
	TIntegerField *sql_fisBOJA_K;
	TIntegerField *sql_fisBOJA_TEXT_DUGME_A;
	TIntegerField *sql_fisBOJA_TEXT_DUGME_K;
	TIntegerField *sql_fisSIFRA_ROBE_GLOBAL;
	TIntegerField *sql_fisSIFRA_ROBE_VECTON;
	TIntegerField *sql_fisSMS_OPERATER_GLOBA;
	TIntegerField *sql_fisSMS_OPERATER_VECTON;
	TFMTBCDField *sql_fisMINIZNOS_VECTON;
	TFMTBCDField *sql_fisMINIZNOS_GLOBAL;
	TSmallintField *sql_fisOBRISI_STAVKE;
	TIntegerField *sql_fisSIFRA_ROBE_MTELA;
	TIntegerField *sql_fisSMS_OPERATER_MTELA;
	TFMTBCDField *sql_fisMINIZNOS_MTELA;
	TSmallintField *sql_fisPROVERAVAJ_CEK_KOMITENTA;
	TSmallintField *sql_fisGRUPISI_ARTIKLE_NA_FISK;
	TSmallintField *sql_fisMNOZI_ODNOS_PJM;
	TIntegerField *sql_fisSIFRA_PROIZV_UF_PRODAJA;
	TSmallintField *sql_fisTRAZI_BENEFIT_KOMITENTA;
	TStringField *sql_fisWEB_UPUTSTVO;
	TSmallintField *sql_fisSTAMPAJ_ULAZNICE;
	TFMTBCDField *sql_fisMINIZNOS_MERIDIAN;
	TIntegerField *sql_fisSTAMPAJ_POS_VISE_PUTA;
	TIntegerField *sql_fisAC_CREDIT_DALJINSKI;
	TSmallintField *sql_fisHP_SLANJE_DEL_GRESKA;
	TSQLConnection *Konekcija_lokal;
	TDataSource *dsHost;
	TClientDataSet *cdsHost;
	TIntegerField *cdsHostIDHOST;
	TStringField *cdsHostNAZIV_FIRME;
	TStringField *cdsHostDELATNOST;
	TStringField *cdsHostADRESA;
	TStringField *cdsHostMESTO;
	TStringField *cdsHostTEL1;
	TStringField *cdsHostTEL2;
	TStringField *cdsHostFAX;
	TStringField *cdsHostPIB;
	TStringField *cdsHostE_MAIL;
	TStringField *cdsHostWEB;
	TStringField *cdsHostSIFRA_DELATNOSTI;
	TStringField *cdsHostREGISTARSKI_BROJ;
	TStringField *cdsHostMATICNI_BROJ;
	TStringField *cdsHostCARINSKI_BROJ;
	TStringField *cdsHostZIRO_RACUN;
	TStringField *cdsHostDIREKTOR;
	TStringField *cdsHostPDV_BROJ;
	TIntegerField *cdsHostTIP_KASE;
	TStringField *cdsHostPUTANJA;
	TStringField *cdsHostFOOTER;
	TStringField *cdsHostTEKUCI;
	TSmallintField *cdsHostID_BANKE;
	TStringField *cdsHostVERZIJA;
	TStringField *cdsHostRACUN_KOD;
	TStringField *cdsHostSWIFT;
	TStringField *cdsHostTK_RACUN;
	TStringField *cdsHostBAN_POSRED;
	TSmallintField *cdsHostGODINA_RADA;
	TSmallintField *cdsHostKASA_KOD;
	TStringField *cdsHostGODISNJI;
	TStringField *cdsHostKASA_KOMANDA;
	TStringField *cdsHostZIRO_RACUN_BANKE;
	TStringField *cdsHostNAZIV_BANKE;
	TSmallintField *cdsHostRS_KORISNIK;
	TIntegerField *cdsHostMP_PROIZVODNJA_NORMATIV;
	TIntegerField *cdsHostHP_TABELE;
	TIntegerField *cdsHostDEF_MP_MAGACIN;
	TIntegerField *cdsHostPROVERAVAJ_NOVU_VERZIJU;
	TStringField *cdsHostVALUTA;
	TStringField *cdsHostGODISNJI2;
	TSmallintField *cdsHostID_NACIN_PLACANJA;
	TStringField *cdsHostSMTPHOST;
	TSmallintField *cdsHostSMTPPORT;
	TStringField *cdsHostUSTANOVA;
	TStringField *cdsHostNAZIV_NOVE_VERZIJE;
	TStringField *cdsHostRZZOHOST;
	TSmallintField *cdsHostRZZOPORT;
	TStringField *cdsHostWEB_KLIJENT;
	TStringField *cdsHostWEB_SERVER;
	TStringField *cdsHostRZZOUSER;
	TStringField *cdsHostRZZOPASS;
	TSmallintField *cdsHostZABRANA_SNIMANJA_RECEPTA;
	TIntegerField *cdsHostID_BANKE_VOJNI_OSIG;
	TIntegerField *cdsHostID_BANKE_CIVIL_OSIG;
	TIntegerField *cdsHostPRAVA_ZA_STORNO;
	TSmallintField *cdsHostPROIZVOD_NORMATIV_TIP_CENE;
	TIntegerField *cdsHostPRAVA_PUSTI_PONOVO_FISKALNI;
	TDataSetProvider *dspHost;
	TSQLDataSet *dsetHost;
	TIntegerField *dsetHostIDHOST;
	TStringField *dsetHostNAZIV_FIRME;
	TStringField *dsetHostDELATNOST;
	TStringField *dsetHostADRESA;
	TStringField *dsetHostMESTO;
	TStringField *dsetHostTEL1;
	TStringField *dsetHostTEL2;
	TStringField *dsetHostFAX;
	TStringField *dsetHostPIB;
	TStringField *dsetHostE_MAIL;
	TStringField *dsetHostWEB;
	TStringField *dsetHostSIFRA_DELATNOSTI;
	TStringField *dsetHostREGISTARSKI_BROJ;
	TStringField *dsetHostMATICNI_BROJ;
	TStringField *dsetHostCARINSKI_BROJ;
	TStringField *dsetHostZIRO_RACUN;
	TStringField *dsetHostDIREKTOR;
	TStringField *dsetHostPDV_BROJ;
	TIntegerField *dsetHostTIP_KASE;
	TStringField *dsetHostPUTANJA;
	TStringField *dsetHostFOOTER;
	TStringField *dsetHostTEKUCI;
	TSmallintField *dsetHostID_BANKE;
	TStringField *dsetHostVERZIJA;
	TStringField *dsetHostRACUN_KOD;
	TStringField *dsetHostSWIFT;
	TStringField *dsetHostTK_RACUN;
	TStringField *dsetHostBAN_POSRED;
	TSmallintField *dsetHostGODINA_RADA;
	TStringField *dsetHostGODISNJI;
	TSmallintField *dsetHostKASA_KOD;
	TStringField *dsetHostKASA_KOMANDA;
	TStringField *dsetHostVALUTA;
	TStringField *dsetHostGODISNJI2;
	TSmallintField *dsetHostID_NACIN_PLACANJA;
	TStringField *dsetHostZIRO_RACUN_BANKE;
	TStringField *dsetHostNAZIV_BANKE;
	TSmallintField *dsetHostRS_KORISNIK;
	TIntegerField *dsetHostMP_PROIZVODNJA_NORMATIV;
	TIntegerField *dsetHostHP_TABELE;
	TIntegerField *dsetHostDEF_MP_MAGACIN;
	TIntegerField *dsetHostPROVERAVAJ_NOVU_VERZIJU;
	TStringField *dsetHostSMTPHOST;
	TSmallintField *dsetHostSMTPPORT;
	TStringField *dsetHostUSTANOVA;
	TStringField *dsetHostNAZIV_NOVE_VERZIJE;
	TStringField *dsetHostRZZOHOST;
	TSmallintField *dsetHostRZZOPORT;
	TStringField *dsetHostWEB_KLIJENT;
	TStringField *dsetHostWEB_SERVER;
	TStringField *dsetHostRZZOUSER;
	TStringField *dsetHostRZZOPASS;
	TSmallintField *dsetHostZABRANA_SNIMANJA_RECEPTA;
	TIntegerField *dsetHostID_BANKE_VOJNI_OSIG;
	TIntegerField *dsetHostID_BANKE_CIVIL_OSIG;
	TIntegerField *dsetHostPRAVA_ZA_STORNO;
	TSmallintField *dsetHostPROIZVOD_NORMATIV_TIP_CENE;
	TIntegerField *dsetHostPRAVA_PUSTI_PONOVO_FISKALNI;
	TDataSource *dsR;
	TClientDataSet *cdsR;
	TIntegerField *cdsRSIFRA_RADNIKA;
	TSmallintField *cdsRGRUPA;
	TStringField *cdsRRADNIK;
	TIntegerField *cdsRPRAVA;
	TStringField *cdsRKORISNICKO_IME;
	TStringField *cdsRLOZINKA;
	TSmallintField *cdsRULOGOVAN;
	TStringField *cdsRADRESA;
	TStringField *cdsRTELEFON;
	TStringField *cdsRMOBILNI;
	TStringField *cdsRMESTO;
	TStringField *cdsRBRLK;
	TIntegerField *cdsRIDOPSTINE;
	TStringField *cdsRPOSTBROJ;
	TStringField *cdsRJMBG;
	TIntegerField *cdsRID_DEF_KAT;
	TIntegerField *cdsRID_DEF_MG;
	TSmallintField *cdsRAKTIVAN;
	TStringField *cdsRUSERNAME;
	TStringField *cdsRPASSWD;
	TStringField *cdsRROLENAME;
	TIntegerField *cdsRID_DEF_MG_MP;
	TIntegerField *cdsRDEF_KUPAC_MP;
	TSmallintField *cdsRPRAVO_PLACANJA;
	TStringField *cdsRMAIL;
	TStringField *cdsRSMPTHOST;
	TIntegerField *cdsRSMPTPORT;
	TStringField *cdsRLBO;
	TStringField *cdsRIME;
	TStringField *cdsRPREZIME;
	TStringField *cdsRPRAVA_MG;
	TSmallintField *cdsRIDSEDISTE;
	TSmallintField *cdsRID_DEF_ULAZ_DOK;
	TSmallintField *cdsRCONTROL_PANEL;
	TStringField *cdsRBRZDRAVSTVENE_KNJIZICE;
	TIntegerField *cdsRPRAVA_OTKUP;
	TSmallintField *cdsRDEF_FONT_MP;
	TSmallintField *cdsRSORTIRANJE_MP;
	TStringField *cdsRRFID;
	TIntegerField *cdsRID_PROFILA;
	TLargeintField *cdsRSIFRA;
	TIntegerField *cdsRIDPROFIL;
	TSmallintField *cdsRPRG_VP;
	TIntegerField *cdsRDEF_MG_SERVIS;
	TIntegerField *cdsRAP_ID_MG_P;
	TIntegerField *cdsRAP_ID_PODA;
	TStringField *cdsRAP_KOD_ART_P;
	TIntegerField *cdsRID_DEF_MG_USLUGE;
	TSQLTimeStampField *cdsRPASSWORD_CHANGE_DATE;
	TIntegerField *cdsRZAKLJUCANO;
	TIntegerField *cdsRDEF_BROJ_STOLA;
	TIntegerField *cdsRRADNIK_CHANGE;
	TSQLTimeStampField *cdsRDATE_CHANGE;
	TIntegerField *cdsRDEF_KUPAC;
	TSmallintField *cdsRCENOVNIK_IZMENA;
	TIntegerField *cdsRAP_SIFRA_ROBE_UCESCE;
	TStringField *cdsRLBOFARMACEUTA;
	TIntegerField *cdsRIDSTOLA;
	TStringField *cdsRNAZIV;
	TIntegerField *cdsRVP_MP;
	TIntegerField *cdsROTPREMNICA_VP_MP;
	TIntegerField *cdsRPRIJEMNICA_VP_MP;
	TIntegerField *cdsRID_DEF_MG_MP_1;
	TIntegerField *cdsRDEF_KUPAC_MP_1;
	TIntegerField *cdsRSIFRA_ROBE;
	TFMTBCDField *cdsRCENAMP;
	TIntegerField *cdsRID_DEF_POVRAT_DOB;
	TStringField *cdsRSKIN_MP;
	TIntegerField *cdsRREZ_VP;
	TIntegerField *cdsRREZ_MP;
	TStringField *cdsRIZIS_USERNAME;
	TStringField *cdsRIZIS_PASSWORD;
	TIntegerField *cdsRID_ROLE;
	TIntegerField *cdsRID_ROLE_PRIMAR;
	TDataSetProvider *dspR;
	TSQLDataSet *sdsR;
	TIntegerField *sdsRSIFRA_RADNIKA;
	TSmallintField *sdsRGRUPA;
	TStringField *sdsRRADNIK;
	TIntegerField *sdsRPRAVA;
	TStringField *sdsRKORISNICKO_IME;
	TStringField *sdsRLOZINKA;
	TSmallintField *sdsRULOGOVAN;
	TStringField *sdsRADRESA;
	TStringField *sdsRTELEFON;
	TStringField *sdsRMOBILNI;
	TStringField *sdsRMESTO;
	TStringField *sdsRBRLK;
	TIntegerField *sdsRIDOPSTINE;
	TStringField *sdsRPOSTBROJ;
	TStringField *sdsRJMBG;
	TIntegerField *sdsRID_DEF_KAT;
	TIntegerField *sdsRID_DEF_MG;
	TSmallintField *sdsRAKTIVAN;
	TStringField *sdsRUSERNAME;
	TStringField *sdsRPASSWD;
	TStringField *sdsRROLENAME;
	TIntegerField *sdsRID_DEF_MG_MP;
	TIntegerField *sdsRDEF_KUPAC_MP;
	TSmallintField *sdsRPRAVO_PLACANJA;
	TStringField *sdsRMAIL;
	TStringField *sdsRSMPTHOST;
	TIntegerField *sdsRSMPTPORT;
	TStringField *sdsRLBO;
	TStringField *sdsRIME;
	TStringField *sdsRPREZIME;
	TStringField *sdsRPRAVA_MG;
	TSmallintField *sdsRIDSEDISTE;
	TSmallintField *sdsRID_DEF_ULAZ_DOK;
	TSmallintField *sdsRCONTROL_PANEL;
	TStringField *sdsRBRZDRAVSTVENE_KNJIZICE;
	TIntegerField *sdsRPRAVA_OTKUP;
	TSmallintField *sdsRDEF_FONT_MP;
	TSmallintField *sdsRSORTIRANJE_MP;
	TStringField *sdsRRFID;
	TIntegerField *sdsRID_PROFILA;
	TLargeintField *sdsRSIFRA;
	TIntegerField *sdsRIDPROFIL;
	TSmallintField *sdsRPRG_VP;
	TIntegerField *sdsRDEF_MG_SERVIS;
	TIntegerField *sdsRAP_ID_MG_P;
	TIntegerField *sdsRAP_ID_PODA;
	TStringField *sdsRAP_KOD_ART_P;
	TIntegerField *sdsRID_DEF_MG_USLUGE;
	TSQLTimeStampField *sdsRPASSWORD_CHANGE_DATE;
	TIntegerField *sdsRZAKLJUCANO;
	TIntegerField *sdsRDEF_BROJ_STOLA;
	TIntegerField *sdsRRADNIK_CHANGE;
	TSQLTimeStampField *sdsRDATE_CHANGE;
	TIntegerField *sdsRDEF_KUPAC;
	TSmallintField *sdsRCENOVNIK_IZMENA;
	TIntegerField *sdsRAP_SIFRA_ROBE_UCESCE;
	TStringField *sdsRLBOFARMACEUTA;
	TIntegerField *sdsRIDSTOLA;
	TStringField *sdsRNAZIV;
	TIntegerField *sdsRVP_MP;
	TIntegerField *sdsROTPREMNICA_VP_MP;
	TIntegerField *sdsRPRIJEMNICA_VP_MP;
	TIntegerField *sdsRID_DEF_MG_MP_1;
	TIntegerField *sdsRDEF_KUPAC_MP_1;
	TIntegerField *sdsRSIFRA_ROBE;
	TFMTBCDField *sdsRCENAMP;
	TIntegerField *sdsRID_DEF_POVRAT_DOB;
	TStringField *sdsRSKIN_MP;
	TIntegerField *sdsRREZ_VP;
	TIntegerField *sdsRREZ_MP;
	TStringField *sdsRIZIS_USERNAME;
	TStringField *sdsRIZIS_PASSWORD;
	TIntegerField *sdsRID_ROLE;
	TIntegerField *sdsRID_ROLE_PRIMAR;
	TDataSource *dsSystemMP;
	TClientDataSet *cdsSystemMP;
	TIntegerField *cdsSystemMPID;
	TSmallintField *cdsSystemMPAUTO_OTVORI_NOVI_DAN;
	TSmallintField *cdsSystemMPDATUM_ZA_SLANJE_PREDRACUNA;
	TSmallintField *cdsSystemMPZABRANA_IZMENE_ULAZNE_CENE_OTP;
	TIntegerField *cdsSystemMPDEF_DOK_REFAKCIJE;
	TSmallintField *cdsSystemMPRACUN_POVRAT_UDALJENI_SERVER;
	TSmallintField *cdsSystemMPRACUN_POVRAT_MPF1;
	TSmallintField *cdsSystemMPPOVRAT_CELO_PAKOVANJE_DOB;
	TSmallintField *cdsSystemMPPREDRACUN_CENA_BEZ_PDV_A;
	TSmallintField *cdsSystemMPDOZVOLI_ROBU_IZ_USLUGA;
	TSmallintField *cdsSystemMPNEFISKLANI_SINDIKAT;
	TSmallintField *cdsSystemMPRABAT_PO_KATEGORIJI;
	TSmallintField *cdsSystemMPRABAT_PO_PROIZVODJACU;
	TIntegerField *cdsSystemMPBR_RACUNA_U_PREGLEDU;
	TIntegerField *cdsSystemMPPRVI_PUT_POKRENUT_PROGRAM;
	TSmallintField *cdsSystemMPUSE_SAVED_DISCOUNT;
	TSmallintField *cdsSystemMPSEARCH_ONLY_BARCODE;
	TSmallintField *cdsSystemMPSOPSTVENA_POTROSNJA;
	TSmallintField *cdsSystemMPAUTO_UBACI_ART_CENOVNI;
	TSmallintField *cdsSystemMPUSE_SAVED_ACCOUNTING_DISCOUNT;
	TSmallintField *cdsSystemMPREQUESTING_SEARCH_CUSTOMER;
	TSmallintField *cdsSystemMPRETURN_RECIPIENT_NO_NEED_NUMBER;
	TIntegerField *cdsSystemMPSPOSTVENA_DEF_DOC;
	TSmallintField *cdsSystemMPPRODAJA_CELO_PAKOVANJE;
	TSmallintField *cdsSystemMPACCEPTS_BARCODE_PART;
	TSmallintField *cdsSystemMPZABRANA_PRODAJE_PO_KAT;
	TSmallintField *cdsSystemMPVISE_INTERNIH_U_TOKU_DANA;
	TSmallintField *cdsSystemMPMANDATORY_ENTRY_PAYMENT;
	TSmallintField *cdsSystemMPENABLE_PACKING_AUTO_INT;
	TStringField *cdsSystemMPSTAMPA_GRATIS_ARTIKALA;
	TStringField *cdsSystemMPSTAMPAJ_ELEKTRONSKI_VAUCER;
	TSmallintField *cdsSystemMPAUTO_OTVORI_NOVI_DNEVNI;
	TSmallintField *cdsSystemMPBENEFIT_VOUCHER;
	TSmallintField *cdsSystemMPENTER_QUANTITY_AUTOMATICALY;
	TSmallintField *cdsSystemMPAUTOMATSKO_SNIMANJE_XML_MP;
	TSmallintField *cdsSystemMPDELETE_RESERVATION_RULS;
	TSmallintField *cdsSystemMPZABRANJENO_VISE_RACUNA;
	TSmallintField *cdsSystemMPMIN_BR_KARAKTERA_PRETRAGA;
	TIntegerField *cdsSystemMPDEF_DOK_AMBASADA;
	TSmallintField *cdsSystemMPHOTEL_BUTTON_VISIBLE;
	TSmallintField *cdsSystemMPKORISTI_CENU_U_PRODAJI_REZ;
	TSmallintField *cdsSystemMPKESIRICI_API;
	TSmallintField *cdsSystemMPATRIBUTI_ZA_PRODAJU;
	TStringField *cdsSystemMPKESIRICI_API_KEY;
	TSmallintField *cdsSystemMPNACIN_RADA;
	TIntegerField *cdsSystemMPDEF_POREZ_AMBASADA;
	TSmallintField *cdsSystemMPAUTO_PRINT_80MM;
	TSmallintField *cdsSystemMPKUPAC_NA_KRAJU_FISK;
	TSmallintField *cdsSystemMPOTVORI_RAMPU;
	TSmallintField *cdsSystemMPKORISTI_INTERNE_PRIJEMNICE;
	TIntegerField *cdsSystemMPSIFRA_MATICNOG_KOMITENTA;
	TIntegerField *cdsSystemMPDEF_TREBOVANJE_MAGACIN_IZ;
	TIntegerField *cdsSystemMPSIFRA_MAGACINA_AVANS;
	TIntegerField *cdsSystemMPSIFRA_DOK_AVANS;
	TSmallintField *cdsSystemMPPRIKAZI_DUGME_POSEBNI;
	TIntegerField *cdsSystemMPSIFRA_ROBE_VAUCER_OS;
	TIntegerField *cdsSystemMPSIFRA_DOKUMENTA_VAUCER;
	TIntegerField *cdsSystemMPSIFRA_ROBE_VAUCER_VN;
	TSmallintField *cdsSystemMPDUGME_HRANA_PICE;
	TSmallintField *cdsSystemMPKORISTI_RABAT_U_REZERVACIJI;
	TIntegerField *cdsSystemMPSPOSTVENA_DEF_DOC2;
	TIntegerField *cdsSystemMPSPOSTVENA_DEF_DOC3;
	TSmallintField *cdsSystemMPPRIKAZI_RABAT_MP;
	TSmallintField *cdsSystemMPPRIKAZI_DUGME_SOPSTVENA;
	TSmallintField *cdsSystemMPPROIZVODNJA_NA_SERVERU;
	TSmallintField *cdsSystemMPPREBACI_KONTROLNI_PAZAR;
	TIntegerField *cdsSystemMPPROVERI_NEFISK_RACUNE;
	TIntegerField *cdsSystemMPPRAVA_ZA_PODESAVANJE;
	TSmallintField *cdsSystemMPPLUS_MINUS_KOLICINE;
	TSmallintField *cdsSystemMPZABRANA_IZMENE_STOPE_OTP;
	TSmallintField *cdsSystemMPBAZEN_CREDIT_MINUS;
	TSmallintField *cdsSystemMPVIDLJIV_JEDAN_MAGACIN;
	TFMTBCDField *cdsSystemMPMAX_POPUST_RACUNA_SA_KESIRICIMA;
	TSmallintField *cdsSystemMPOBRACUN_KESIRICI;
	TSmallintField *cdsSystemMPSTAMPAJ_NEFISKALNI_POSLE_POSA;
	TIntegerField *cdsSystemMPDOK_RACUN_POKLON;
	TSmallintField *cdsSystemMPZABRANA_LAGERA_NA_POPISU;
	TSmallintField *cdsSystemMPKOD_PA_KOLICINA;
	TSmallintField *cdsSystemMPPOPIS_FUNKCIJE;
	TDataSetProvider *dspSystemMP;
	TSQLDataSet *sdsSystemMP;
	TIntegerField *sdsSystemMPID;
	TSmallintField *sdsSystemMPAUTO_OTVORI_NOVI_DAN;
	TSmallintField *sdsSystemMPDATUM_ZA_SLANJE_PREDRACUNA;
	TSmallintField *sdsSystemMPZABRANA_IZMENE_ULAZNE_CENE_OTP;
	TIntegerField *sdsSystemMPDEF_DOK_REFAKCIJE;
	TSmallintField *sdsSystemMPRACUN_POVRAT_UDALJENI_SERVER;
	TSmallintField *sdsSystemMPRACUN_POVRAT_MPF1;
	TSmallintField *sdsSystemMPPOVRAT_CELO_PAKOVANJE_DOB;
	TSmallintField *sdsSystemMPPREDRACUN_CENA_BEZ_PDV_A;
	TSmallintField *sdsSystemMPDOZVOLI_ROBU_IZ_USLUGA;
	TSmallintField *sdsSystemMPRABAT_PO_KATEGORIJI;
	TSmallintField *sdsSystemMPRABAT_PO_PROIZVODJACU;
	TSmallintField *sdsSystemMPNEFISKLANI_SINDIKAT;
	TIntegerField *sdsSystemMPBR_RACUNA_U_PREGLEDU;
	TIntegerField *sdsSystemMPPRVI_PUT_POKRENUT_PROGRAM;
	TSmallintField *sdsSystemMPUSE_SAVED_DISCOUNT;
	TSmallintField *sdsSystemMPSEARCH_ONLY_BARCODE;
	TSmallintField *sdsSystemMPSOPSTVENA_POTROSNJA;
	TSmallintField *sdsSystemMPAUTO_UBACI_ART_CENOVNI;
	TSmallintField *sdsSystemMPUSE_SAVED_ACCOUNTING_DISCOUNT;
	TSmallintField *sdsSystemMPREQUESTING_SEARCH_CUSTOMER;
	TSmallintField *sdsSystemMPRETURN_RECIPIENT_NO_NEED_NUMBER;
	TIntegerField *sdsSystemMPSPOSTVENA_DEF_DOC;
	TSmallintField *sdsSystemMPPRODAJA_CELO_PAKOVANJE;
	TSmallintField *sdsSystemMPACCEPTS_BARCODE_PART;
	TIntegerField *sdsSystemMPZABRANA_PRODAJE_PO_KAT;
	TSmallintField *sdsSystemMPVISE_INTERNIH_U_TOKU_DANA;
	TSmallintField *sdsSystemMPMANDATORY_ENTRY_PAYMENT;
	TSmallintField *sdsSystemMPENABLE_PACKING_AUTO_INT;
	TStringField *sdsSystemMPSTAMPA_GRATIS_ARTIKALA;
	TStringField *sdsSystemMPSTAMPAJ_ELEKTRONSKI_VAUCER;
	TSmallintField *sdsSystemMPAUTO_OTVORI_NOVI_DNEVNI;
	TSmallintField *sdsSystemMPBENEFIT_VOUCHER;
	TSmallintField *sdsSystemMPENTER_QUANTITY_AUTOMATICALY;
	TSmallintField *sdsSystemMPAUTOMATSKO_SNIMANJE_XML_MP;
	TSmallintField *sdsSystemMPDELETE_RESERVATION_RULS;
	TSmallintField *sdsSystemMPZABRANJENO_VISE_RACUNA;
	TSmallintField *sdsSystemMPMIN_BR_KARAKTERA_PRETRAGA;
	TIntegerField *sdsSystemMPDEF_DOK_AMBASADA;
	TSmallintField *sdsSystemMPHOTEL_BUTTON_VISIBLE;
	TSmallintField *sdsSystemMPKORISTI_CENU_U_PRODAJI_REZ;
	TSmallintField *sdsSystemMPKESIRICI_API;
	TSmallintField *sdsSystemMPATRIBUTI_ZA_PRODAJU;
	TStringField *sdsSystemMPKESIRICI_API_KEY;
	TSmallintField *sdsSystemMPNACIN_RADA;
	TIntegerField *sdsSystemMPDEF_POREZ_AMBASADA;
	TSmallintField *sdsSystemMPAUTO_PRINT_80MM;
	TSmallintField *sdsSystemMPKUPAC_NA_KRAJU_FISK;
	TSmallintField *sdsSystemMPOTVORI_RAMPU;
	TSmallintField *sdsSystemMPKORISTI_INTERNE_PRIJEMNICE;
	TIntegerField *sdsSystemMPSIFRA_MATICNOG_KOMITENTA;
	TIntegerField *sdsSystemMPDEF_TREBOVANJE_MAGACIN_IZ;
	TIntegerField *sdsSystemMPSIFRA_MAGACINA_AVANS;
	TIntegerField *sdsSystemMPSIFRA_DOK_AVANS;
	TSmallintField *sdsSystemMPPRIKAZI_DUGME_POSEBNI;
	TIntegerField *sdsSystemMPSIFRA_ROBE_VAUCER_OS;
	TIntegerField *sdsSystemMPSIFRA_DOKUMENTA_VAUCER;
	TIntegerField *sdsSystemMPSIFRA_ROBE_VAUCER_VN;
	TSmallintField *sdsSystemMPDUGME_HRANA_PICE;
	TSmallintField *sdsSystemMPKORISTI_RABAT_U_REZERVACIJI;
	TIntegerField *sdsSystemMPSPOSTVENA_DEF_DOC2;
	TIntegerField *sdsSystemMPSPOSTVENA_DEF_DOC3;
	TSmallintField *sdsSystemMPPRIKAZI_RABAT_MP;
	TSmallintField *sdsSystemMPPRIKAZI_DUGME_SOPSTVENA;
	TSmallintField *sdsSystemMPPROIZVODNJA_NA_SERVERU;
	TSmallintField *sdsSystemMPPREBACI_KONTROLNI_PAZAR;
	TIntegerField *sdsSystemMPPROVERI_NEFISK_RACUNE;
	TIntegerField *sdsSystemMPPRAVA_ZA_PODESAVANJE;
	TSmallintField *sdsSystemMPPLUS_MINUS_KOLICINE;
	TSmallintField *sdsSystemMPZABRANA_IZMENE_STOPE_OTP;
	TSmallintField *sdsSystemMPBAZEN_CREDIT_MINUS;
	TSmallintField *sdsSystemMPVIDLJIV_JEDAN_MAGACIN;
	TFMTBCDField *sdsSystemMPMAX_POPUST_RACUNA_SA_KESIRICIMA;
	TSmallintField *sdsSystemMPOBRACUN_KESIRICI;
	TSmallintField *sdsSystemMPSTAMPAJ_NEFISKALNI_POSLE_POSA;
	TIntegerField *sdsSystemMPDOK_RACUN_POKLON;
	TSmallintField *sdsSystemMPZABRANA_LAGERA_NA_POPISU;
	TSmallintField *sdsSystemMPKOD_PA_KOLICINA;
	TSmallintField *sdsSystemMPPOPIS_FUNKCIJE;
	TfrxDBDataset *frxArtVaga;
	TcxGrid *cxGrid2;
	TcxGridDBTableView *cxGrid2DBTableView1;
	TcxGridDBColumn *cxGrid2DBTableView1PLU;
	TcxGridDBColumn *cxGrid2DBTableView1KOD;
	TcxGridDBColumn *cxGrid2DBTableView1ARTIKAL;
	TcxGridDBColumn *cxGrid2DBTableView1CENA;
	TcxGridDBColumn *cxGrid2DBTableView1KOD_1;
	TcxGridDBColumn *cxGrid2DBTableView1ID_VAGE;
	TcxGridLevel *cxGrid2Level1;
	TcxGroupBox *FormaBox;
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
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall dsVagaDataChange(TObject *Sender, TField *Field);
	void __fastcall cdsVagaNewRecord(TDataSet *DataSet);
	void __fastcall cxGrid1DBTableView1KeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall dspVagaGetTableName(TObject *Sender, TDataSet *DataSet, UnicodeString &TableName);
	void __fastcall cxSveVagePropertiesChange(TObject *Sender);
	void __fastcall cdsVagaReconcileError(TCustomClientDataSet *DataSet, EReconcileError *E,
          TUpdateKind UpdateKind, TReconcileAction &Action);
	void __fastcall cxDBCheckBox1PropertiesChange(TObject *Sender);






private:	// User declarations

	void __fastcall InputController(bool value);
	AnsiString 	APP_DIR      	= GetCurrentDir();
	AnsiString 	LOG_FAJL 		= APP_DIR + "\\Log\\CashIT\\" + Sysutils::ExtractFileName(Sysutils::ChangeFileExt(Application->ExeName, ""))  + ".log"  ;


public:		// User declarations
	__fastcall TVagaForm(TComponent* Owner);
	int  PodrazumevaniMagacin();
};
void PosaljiPorukuDLL(AnsiString poruka, TColor boja = clYellow, int vremePrikazivanja = 10000);
extern "C" __declspec(dllexport) void __stdcall ShowVagaForm(int sifra_radnika);
extern "C" __declspec(dllexport) const char* __stdcall procitajTezinuIzDLL(int idVage, int sifra_magacina);
//---------------------------------------------------------------------------
extern PACKAGE TVagaForm *VagaForm;
//---------------------------------------------------------------------------
#endif
