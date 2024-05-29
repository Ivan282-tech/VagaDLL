//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "fromUnos_tip_vage.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "cxClasses"
#pragma link "cxControls"
#pragma link "cxCustomData"
#pragma link "cxData"
#pragma link "cxDataStorage"
#pragma link "cxDBData"
#pragma link "cxEdit"
#pragma link "cxFilter"
#pragma link "cxGraphics"
#pragma link "cxGrid"
#pragma link "cxGridCustomTableView"
#pragma link "cxGridCustomView"
#pragma link "cxGridDBTableView"
#pragma link "cxGridLevel"
#pragma link "cxGridTableView"
#pragma link "cxLookAndFeelPainters"
#pragma link "cxLookAndFeels"
#pragma link "cxNavigator"
#pragma link "cxStyles"
#pragma link "dxDateRanges"
#pragma link "dxScrollbarAnnotations"
#pragma link "cxButtons"
#pragma link "cxContainer"
#pragma link "cxDBEdit"
#pragma link "cxLabel"
#pragma link "cxPC"
#pragma link "cxTextEdit"
#pragma link "dxBarBuiltInMenu"
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
__fastcall TForm2::TForm2(TClientDataSet* cds) : TForm(Owner) {
    cdsV = cds;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::izlazClick(TObject *Sender)
{
		Close();
}
void __fastcall TForm2::FormCreate(TObject *Sender)
{
		cdsTip_vage->Active = false;
		cdsTip_vage->Active = true;

		cdsRola->Active = false;
		cdsRola->Active = true;
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void __fastcall TForm2::odustaniClick(TObject *Sender)
{
		odustani->Enabled = false;
		snimi->Enabled = false;

		dteID_vage->Enabled = false;
		dteNaziv_vage->Enabled = false;
		dteTip_vage->Enabled = false;

		cdsTip_vage->Cancel();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::osveziClick(TObject *Sender)
{
		 if ( cdsTip_vage->Active == true )
			{
				if ( cdsTip_vage->ChangeCount == 0 )
				{
					cdsTip_vage->Close();
                    cdsTip_vage->Open();
				}
			}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::dodajClick(TObject *Sender)
{
		if(!ProveraPrava(cdsRola,2,this->ClassName())) Abort();

		dteID_vage->Enabled = true;
		dteNaziv_vage->Enabled = true;
		dteTip_vage->Enabled = true;

		snimi->Enabled = true;
		odustani->Enabled = true;

		qIDtip_vage->Active = false;
		qIDtip_vage->ExecSQL();
		qIDtip_vage->Active = true;

		cdsTip_vage->Append();
		cdsTip_vage->FieldByName( "id")->AsInteger = qIDtip_vage->FieldByName( "id")->AsInteger;
		cdsTip_vage->Post();
}

bool ProveraPrava(TClientDataSet* cdsRola, int sifra_akcije, WideString id_forme){
        TLocateOptions Opts;
		Opts.Clear();
		Variant locvalues[2];
		locvalues[0] = Variant(sifra_akcije);
		locvalues[1] = Variant(id_forme);
		if (cdsRola->Locate("SIFRA_AKCIJE;ID_FORME", VarArrayOf(locvalues, 1), Opts)){
				return true;
		}else{
			if (cdsRola->FieldByName("zabrana")->AsInteger != 1)
				return true;
			 else{
				ShowMessage("Nemate prava pristupa zeljenoj akciji!!");
				return false;
             }


		}

}
//---------------------------------------------------------------------------

void __fastcall TForm2::obisiClick(TObject *Sender)
{
           if(!ProveraPrava(cdsRola, 3,this->ClassName())) Abort();

			qIDtip_vage->SQL->Clear();
			qIDtip_vage->SQL->Text = "DELETE FROM VAGA_TIP WHERE ID = " + IntToStr( cdsTip_vage->FieldByName( "id" )->AsInteger );
			qIDtip_vage->ExecSQL();


			cdsTip_vage->Close();
			cdsTip_vage->Open();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::snimiClick(TObject *Sender)
{
		cdsTip_vage->Open();
		cdsTip_vage->Edit();
		cdsTip_vage->Post();
		cdsTip_vage->ApplyUpdates( 0 );
		cdsTip_vage->Close();
		cdsTip_vage->Open();

		dteID_vage->Enabled = false;
		dteNaziv_vage->Enabled = false;
		dteTip_vage->Enabled = false;

		snimi->Enabled = false;
		odustani->Enabled = false;

}
//---------------------------------------------------------------------------

void __fastcall TForm2::izmeniClick(TObject *Sender)
{
		if(!ProveraPrava(cdsRola,4,this->ClassName())) Abort();

		dteID_vage->Enabled = true;
		dteNaziv_vage->Enabled = true;
		dteTip_vage->Enabled = true;

		snimi->Enabled = true;
		odustani->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormClose(TObject *Sender, TCloseAction &Action)
{
       Action = caFree;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::cdsTip_vageAfterApplyUpdates(TObject *Sender, OleVariant &OwnerData)

{
      cdsV->Refresh();
}
//---------------------------------------------------------------------------

