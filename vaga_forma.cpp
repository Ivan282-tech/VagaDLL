//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "vaga_forma.h"
#include "fromUnos_tip_vage.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "cxButtons"
#pragma link "cxCheckBox"
#pragma link "cxClasses"
#pragma link "cxContainer"
#pragma link "cxControls"
#pragma link "cxCustomData"
#pragma link "cxData"
#pragma link "cxDataStorage"
#pragma link "cxDBData"
#pragma link "cxDBEdit"
#pragma link "cxDBLookupComboBox"
#pragma link "cxDBLookupEdit"
#pragma link "cxDropDownEdit"
#pragma link "cxEdit"
#pragma link "cxFilter"
#pragma link "cxGraphics"
#pragma link "cxGrid"
#pragma link "cxGridCustomTableView"
#pragma link "cxGridCustomView"
#pragma link "cxGridDBTableView"
#pragma link "cxGridLevel"
#pragma link "cxGridTableView"
#pragma link "cxLabel"
#pragma link "cxLookAndFeelPainters"
#pragma link "cxLookAndFeels"
#pragma link "cxLookupEdit"
#pragma link "cxMaskEdit"
#pragma link "cxNavigator"
#pragma link "cxPC"
#pragma link "cxStyles"
#pragma link "cxTextEdit"
#pragma link "dxBarBuiltInMenu"
#pragma link "dxDateRanges"
#pragma link "dxScrollbarAnnotations"
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma link "cxGroupBox"
#pragma resource "*.dfm"
TVagaForm *VagaForm;



 static int SIFRA;
//---------------------------------------------------------------------------
__fastcall TVagaForm::TVagaForm(TComponent* Owner)
	: TForm(Owner)
{
}
void  ShowVagaForm(int sifra){
		auto test = new TVagaForm(nullptr);
		SIFRA = sifra;
		test->ShowModal();
		delete test;

}
const char* procitajTezinuIzDLL(int idVage, int sifra_magacina){
		TVaga* vaga;

		TVagaController *vk = new TVagaController();
		vaga = vk->napraviVagu( idVage, sifra_magacina );

		AnsiString t = vaga->procitajTezinu();
	
        delete vaga;
		delete vk;
        return t.c_str();
}

void __fastcall TVagaForm::dspVagaGetTableName(TObject *Sender, TDataSet *DataSet, UnicodeString &TableName)

{
	TableName = "VAGA";
}
//---------------------------------------------------------------------------


void __fastcall TVagaForm::FormCreate(TObject *Sender)
{
		cdsSystemMP->Active = false;
		cdsSystemMP->Active = true;

		int sm = PodrazumevaniMagacin();
		if (cdsSystemMP->FieldByName("VIDLJIV_JEDAN_MAGACIN")->AsInteger == 0) {
		   sm = -1;
		}

		sdsR->ParamByName("sr")->AsInteger = SIFRA;

		dsetMGSetup->ParamByName("sm")->AsInteger = sm;




		cdsR->Active = false;
        cdsR->Active = true;

		cdsfis->Active = false;
		cdsfis->Active = true;

		cdsHost->Active = false;
		cdsHost->Active = true;

        cdsVaga->Active = false;
		cdsVaga->Active = true;

		cdsTip_Vage->Active = false;
		cdsTip_Vage->Active = true;

		cdsMGSetup->Active = false;
		cdsMGSetup->Active = true;




		if (cdsVaga->RecordCount <= 1) {
			cxSveVage->Checked = true;
		}
		edPodrazumevanaVaga->Caption = "Podrazumevana vaga: " + cdsVagaID->AsString + ",  Vaga = " + cdsVagaNAZIV->AsString + ",   Magacin = " + cdsVagaMAGACIN->AsString + ",  Adresa = " +cdsVagaADRESA->AsString + ",   Tip vage = " + cdsVagaTIP_VAGE->AsString;
		InputController(false);





}
void __fastcall TVagaForm::PretragaChange(TObject *Sender)
{
	int id = 0;
	if(Pretraga->Text.Length() >= 2)
	{
		id = StrToIntDef(Pretraga->Text, -2);
		if(id != -2)
		{

			cdsVaga->Filtered 	= false;
			cdsVaga->Filter   	= "id = " + Pretraga->Text;
			cdsVaga->Filtered 	= true;

			if(cdsVaga->RecordCount <= 0)
			{
				cdsVaga->Filtered = false;
				cdsVaga->Filter   = "id like '%" + Pretraga->Text +"%'";
				cdsVaga->Filtered = true;

			}
		}
		else
		{
			cdsVaga->Filtered = false;
			cdsVaga->Filter   = "upper(NAZIV_VAGE) like '%"+UpperCase(Pretraga->Text)+"%'";
			cdsVaga->Filtered = true;
		}

	}
	else
		cdsVaga->Filtered = false;

}
void __fastcall TVagaForm::PretragaKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
			if (Key == VK_ESCAPE){

				cdsVaga->Filtered = false;

				if(Pretraga->Text.IsEmpty())
					cxGrid2->SetFocus();

				Pretraga->Text = "";
			}
}
void __fastcall TVagaForm::dsVagaDataChange(TObject *Sender, TField *Field)
{
         	if (Field == NULL) {

			if (sdsArtikli->ParamByName("id")->AsInteger != cdsVaga->FieldByName("id")->AsInteger) {

				if(cxSveVage->Checked == true) {
					sdsArtikli->ParamByName("id")->AsInteger = -1;
				}
				else {
					sdsArtikli->ParamByName("id")->AsInteger = cdsVaga->FieldByName("id")->AsInteger;
				}
				cdsArtikli->Active = false;
		//		sdsArtikli->ParamByName("godina")->AsInteger = GODINA;
				sdsArtikli->ParamByName("datum")->AsDateTime =  Date();
				sdsArtikli->ParamByName("sm")->AsInteger = cdsVaga->FieldByName("SIFRA_MAGACINA")->AsInteger;
				cdsArtikli->Active = true;
			}
		}
}
void __fastcall TVagaForm::posaljiClick(TObject *Sender){
		TLogger* log = new TLogger(nullptr);

		  try {
			PosaljiPorukuDLL("Saljem podatke na vagu: " + cdsVaga->FieldByName("naziv_vage")->AsString);

			TVaga *vaga;


			TVagaController *vk = new TVagaController();

			vaga = vk->napraviVagu(cdsVaga->FieldByName("id")->AsInteger, -1 );

			if (cxSveVage->Checked == true) {
				vaga->ubaciSveArtikle(1);
			}
			else
				vaga->ubaciSveArtikle(0);

			delete vaga;
			delete vk;
			Application->ProcessMessages();

		} catch (Exception &e) {
			log->Log("void __fastcall TForm1::posaljiClick(TObject *Sender) " + e.Message,llInfo);

		}
		String komanda = cdsVaga->FieldByName("komanda")->AsString;

		try {
			if (!cdsVaga->FieldByName("komanda")->IsNull) {
				ShellExecute(this->Handle, 0, komanda.c_str() , 0, 0, SW_NORMAL);
			}

		} catch (...) {
		}
		delete log;
}
void __fastcall TVagaForm::FormClose(TObject *Sender, TCloseAction &Action)
{
         Action = caFree;
}
void __fastcall TVagaForm::IzlazClick(TObject *Sender)
{
	  Close();
}
 void __fastcall TVagaForm::snimiClick(TObject *Sender)
{
	cdsMGSetup->Open();
	cdsMGSetup->Edit();
	cdsTip_Vage->Open();
	cdsTip_Vage->Edit();
    if (cdsVaga->State != dsEdit || cdsVaga->State != dsInsert) {
		cdsVaga->Edit();
	}

	cdsVaga->FieldByName("SIFRA_MAGACINA")->AsInteger = cdsMGSetup->FieldByName("SIFRA_MAGACINA")->AsInteger;
	cdsVaga->FieldByName("TIP_VAGE")->AsInteger = cdsTip_Vage->FieldByName("TIP")->AsInteger;
	cdsVaga->FieldByName("MAGACIN")->AsString = cdsMGSetup->FieldByName("MAGACIN")->AsString;

	if (cdsVaga->State == dsEdit || cdsVaga->State == dsInsert){
		cdsVaga->ApplyUpdates(0);
	 }
     	cdsVaga->Close();
		cdsVaga->Open();

		


	TIniFile *ini;
	AnsiString podesavanje_vage = APP_DIR + "\\podesavanje\\podesavanje_vage.ini";
	ini = new TIniFile( podesavanje_vage );
	if (cxPrekoFajla->Checked == true) {
		ini->WriteInteger ( "Vaga", "id", cdsVaga->FieldByName("ID")->AsInteger );
		ini->WriteInteger ( "Vaga", "tip_vage", cdsVaga->FieldByName("TIP_VAGE")->AsInteger );
		ini->WriteString ( "Vaga", "naziv_vage", cdsVaga->FieldByName("NAZIV_VAGE")->AsString );
		ini->WriteString ( "Vaga", "adresa", cdsVaga->FieldByName("ADRESA")->AsString );
		ini->WriteInteger ( "Vaga", "sifra_magacina", cdsVaga->FieldByName("SIFRA_MAGACINA")->AsInteger );
		ini->WriteInteger ( "Vaga", "aktivan", cdsVaga->FieldByName("AKTIVAN")->AsInteger );
		ini->WriteInteger ( "Vaga", "broj_karaktera", cdsVaga->FieldByName("BROJ_KARAKTERA")->AsInteger );
		ini->WriteInteger ( "Vaga", "comport", cdsVaga->FieldByName("COMPORT")->AsInteger );
		ini->WriteInteger ( "Vaga", "baud", cdsVaga->FieldByName("BAUD")->AsInteger );
		ini->WriteInteger ( "Vaga", "parity", cdsVaga->FieldByName("PARITY")->AsInteger );
		ini->WriteInteger ( "Vaga", "stoppits", cdsVaga->FieldByName("STOPBITS")->AsInteger );
		ini->WriteInteger ( "Vaga", "databits", cdsVaga->FieldByName("DATABITS")->AsInteger );
		ini->WriteInteger ( "Vaga", "automatska_vaga", cdsVaga->FieldByName("AUTOMATSKA_VAGA")->AsInteger );
	}

	delete ini;

   InputController(false);
}
void __fastcall TVagaForm::DodajClick(TObject *Sender)
{
	InputController(true);
	cdsVaga->Append();
}
void __fastcall TVagaForm::odustaniClick(TObject *Sender)
{
	InputController(false);
	cdsVaga->Cancel();
}
void __fastcall TVagaForm::btnTipVageClick(TObject *Sender)
{
	Screen->Cursor = crHourGlass;
	TForm2 *frmUnos_tip_vage = new TForm2(cdsTip_Vage);
     frmUnos_tip_vage->ShowModal();
//	frmUnos_tip_vage->FormStyle = fsMDIChild;
	Screen->Cursor = crDefault;
    delete frmUnos_tip_vage;

}
void __fastcall TVagaForm::IzmeniClick(TObject *Sender)
{
		AnsiString podesavanje_vage = APP_DIR + "\\podesavanje\\podesavanje_vage.txt";

		if (FileExists(podesavanje_vage))  {
			TFile::Copy(podesavanje_vage, podesavanje_vage + "1");
			DeleteFile(podesavanje_vage);
			edPodrazumevanaVaga->Caption = "Podrazumevana vaga: " + cdsVagaID->AsString + ",  Vaga = " + cdsVagaNAZIV->AsString + ",   Magacin = " + cdsVagaMAGACIN->AsString + ",  adresa = " +cdsVagaADRESA->AsString + ",   tip_vage = " + cdsVagaTIP_VAGE->AsString;
	 }
	InputController(true);
}
void __fastcall TVagaForm::obrisiClick(TObject *Sender)
{

	if (MessageDlg("Da li ste sigurni?", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes){

			  try{

					qID_vage->SQL->Clear();

					qID_vage->SQL->Text = "delete from vaga v where v.id = " + IntToStr( cdsVaga->FieldByName( "ID" )->AsInteger );
					cdsVaga->Close();
					qID_vage->ExecSQL();
					cdsVaga->Open();



			  }
			  catch (Exception &ex)	{
					ShowMessage(ex.Message);
			  }
				catch (std::exception &ex)	{
					ShowMessage(ex.what());
				}
				catch(...){

				}
	}
}void __fastcall TVagaForm::cdsVagaNewRecord(TDataSet *DataSet)
{
	sp_idvage->Prepared = true;
	sp_idvage->ExecProc();
	cdsVaga->FieldByName( "id" )->AsInteger = sp_idvage->ParamByName("ID")->Value;
}
void __fastcall TVagaForm::InputController(bool value){

			cbMagacin->Enabled = value;
			dbTip_vage->Enabled = value;
			dteNaziv_vage->Enabled = value;
			dteAdresa->Enabled = value;
			cxKomanda->Enabled = value;
			tip_nalepnice->Enabled = value;
			dtbaud->Enabled = value;
			dteParity->Enabled = value;
			dteStopbits->Enabled = value;
			dteComport->Enabled = value;
			dteDatabits->Enabled = value;
			cxPrekoFajla->Enabled = value;
			cxDBCheckBox1->Enabled = value;



			odustani->Enabled = value;
			snimi->Enabled = value;

}
void __fastcall TVagaForm::cxGrid1DBTableView1KeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
      if (Key == VK_ESCAPE)
		Pretraga->SetFocus();
}
void __fastcall TVagaForm::stampaClick(TObject *Sender)
{
		if ( frxReport1->LoadFromFile( APP_DIR + "\\stampa\\fr_stampa_artikala_za_vagu.fr3" ) )
		{
			frxReport1->ShowReport( );
		}
		else
			ShowMessage( "Ne postoji fajl: " + APP_DIR + "\\stampa\\fr_stampa_artikala_za_vagu.fr3" );
}
void  PosaljiPorukuDLL(AnsiString poruka, TColor boja, int vremePrikazivanja)
{
	TThread::Synchronize(nullptr, [poruka, boja, vremePrikazivanja]()
	{
		Tfrm_poruka* frm_poruka = new Tfrm_poruka(poruka, boja, vremePrikazivanja);
		frm_poruka->Show();
	});
}
void __fastcall TVagaForm::cxSveVagePropertiesChange(TObject *Sender)
{
	 dsVagaDataChange(this, NULL);
}


void __fastcall TVagaForm::cdsVagaReconcileError(TCustomClientDataSet *DataSet, EReconcileError *E,
          TUpdateKind UpdateKind, TReconcileAction &Action)
{
	ShowMessage("Gre�ka: " + E->Message);
}
//---------------------------------------------------------------------------



void __fastcall TVagaForm::cxDBCheckBox1PropertiesChange(TObject *Sender)
{
		if (cxDBCheckBox1->Checked==true && cdsVaga->State == dsEdit && cdsVaga->State == dsInsert) {
			cdsVaga->FieldByName("AKTIVAN")->AsInteger = 1;}
			else if (cxDBCheckBox1->Checked==false && cdsVaga->State == dsEdit && cdsVaga->State == dsInsert){
				cdsVaga->FieldByName("AKTIVAN")->AsInteger = 0;
			}
}
int  TVagaForm::PodrazumevaniMagacin(){
      	int  SIFRA_MAGACINA;
		if (cdsfis->Active == false) {
			cdsfis->Active = true;
		}
		if (cdsHost->Active == false) {
			cdsHost->Active = true;
		}

		if ( !cdsfis->FieldByName( "def_mp_mg" )->IsNull && ( cdsHost->FieldByName( "rs_korisnik" )->AsInteger == 1 || cdsHost->FieldByName( "hp_tabele" )->AsInteger == 1 ) )
		{
			SIFRA_MAGACINA = cdsfis->FieldByName( "def_mp_mg" )->AsInteger;
		}
		else
		{
			SIFRA_MAGACINA = cdsR->FieldByName( "id_def_mg_mp" )->AsInteger;
		}

	return  SIFRA_MAGACINA;
}








