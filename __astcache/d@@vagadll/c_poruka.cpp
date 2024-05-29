// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "c_poruka.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "cxContainer"
#pragma link "cxControls"
#pragma link "cxEdit"
#pragma link "cxGraphics"
#pragma link "cxLabel"
#pragma link "cxLookAndFeelPainters"
#pragma link "cxLookAndFeels"
#pragma link "cxButtons"
#pragma link "dxSkinBlack"
#pragma link "dxSkinBlue"
#pragma link "dxSkinBlueprint"
#pragma link "dxSkinCaramel"
#pragma link "dxSkinCoffee"
#pragma link "dxSkinDarkRoom"
#pragma link "dxSkinDarkSide"
#pragma link "dxSkinDevExpressDarkStyle"
#pragma link "dxSkinDevExpressStyle"
#pragma link "dxSkinFoggy"
#pragma link "dxSkinGlassOceans"
#pragma link "dxSkinHighContrast"
#pragma link "dxSkiniMaginary"
#pragma link "dxSkinLilian"
#pragma link "dxSkinLiquidSky"
#pragma link "dxSkinLondonLiquidSky"
#pragma link "dxSkinMcSkin"
#pragma link "dxSkinMoneyTwins"
#pragma link "dxSkinOffice2007Black"
#pragma link "dxSkinOffice2007Blue"
#pragma link "dxSkinOffice2007Green"
#pragma link "dxSkinOffice2007Pink"
#pragma link "dxSkinOffice2007Silver"
#pragma link "dxSkinOffice2010Black"
#pragma link "dxSkinOffice2010Blue"
#pragma link "dxSkinOffice2010Silver"
#pragma link "dxSkinOffice2013White"
#pragma link "dxSkinPumpkin"
#pragma link "dxSkinsCore"
#pragma link "dxSkinsDefaultPainters"
#pragma link "dxSkinSeven"
#pragma link "dxSkinSevenClassic"
#pragma link "dxSkinSharp"
#pragma link "dxSkinSharpPlus"
#pragma link "dxSkinSilver"
#pragma link "dxSkinSpringTime"
#pragma link "dxSkinStardust"
#pragma link "dxSkinSummer2008"
#pragma link "dxSkinTheAsphaltWorld"
#pragma link "dxSkinValentine"
#pragma link "dxSkinVS2010"
#pragma link "dxSkinWhiteprint"
#pragma link "dxSkinXmas2008Blue"
#pragma link "dxSkinBasic"
#pragma link "dxSkinMetropolis"
#pragma link "dxSkinMetropolisDark"
#pragma link "dxSkinOffice2013DarkGray"
#pragma link "dxSkinOffice2013LightGray"
#pragma link "dxSkinOffice2016Colorful"
#pragma link "dxSkinOffice2016Dark"
#pragma link "dxSkinOffice2019Black"
#pragma link "dxSkinOffice2019Colorful"
#pragma link "dxSkinOffice2019DarkGray"
#pragma link "dxSkinOffice2019White"
#pragma link "dxSkinTheBezier"
#pragma link "dxSkinVisualStudio2013Blue"
#pragma link "dxSkinVisualStudio2013Dark"
#pragma link "dxSkinVisualStudio2013Light"
#pragma resource "*.dfm"

// ---------------------------------------------------------------------------
__fastcall Tfrm_poruka::Tfrm_poruka(AnsiString poruka, TColor boja, int vremePrikazivanja)
	:TForm(Application)
{
	_boja = boja;
	_poruka = poruka;
	_vreme = vremePrikazivanja;
}

// ---------------------------------------------------------------------------
void __fastcall Tfrm_poruka::FormClose(TObject* Sender, TCloseAction& Action)
{
	Action = caFree;
}

// ---------------------------------------------------------------------------
void __fastcall Tfrm_poruka::Timer1Timer(TObject* Sender)
{
	Close();
}

// ---------------------------------------------------------------------------
void __fastcall Tfrm_poruka::FormActivate(TObject* Sender)
{
    Color = _boja;
	lblPoruka->Caption = _poruka;
	Timer1->Interval = _vreme;
	Timer1->Enabled = true;
	Vcl::Forms::TMonitor *monitor = Screen->MonitorFromWindow(reinterpret_cast<NativeUInt>(Application->Handle));
	Left = monitor->Left + monitor->Width - 400;
	Top = monitor->Top + monitor->Height - 300;
}
// ---------------------------------------------------------------------------

void __fastcall Tfrm_poruka::btnOKClick(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------

