//---------------------------------------------------------------------------


#pragma hdrstop

#include "dm_vaga.h"
#include <Vcl.Dialogs.hpp>

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "Vcl.Controls.TControl"
#pragma resource "*.dfm"
TdmVaga *dmVaga;
extern AnsiString APP_DIR;
//---------------------------------------------------------------------------
__fastcall TdmVaga::TdmVaga(TComponent* Owner)
	: TDataModule(Owner)
{
}
__fastcall TdmVaga::TdmVaga(int idVage, int Sifra_mag, TComponent* Owner )
	: TDataModule(Owner)
{
	IDVAGE = idVage;
	AktivirajVagu(IDVAGE, Sifra_mag) ;
    ShowMessage(IDVAGE, Sifra_mag);
}
//---------------------------------------------------------------------------
//__fastcall TdmVaga::AktivirajVagu(int idVage, int Sifra_mag)
void __fastcall TdmVaga::AktivirajVagu(int idVage, int Sifra_mag)
{
		if (idVage != -1) {
			Sifra_mag = -1;
		}

	TIniFile *ini;
	AnsiString podesavanje_vage = APP_DIR + "\\podesavanje\\podesavanje_vage.ini";
	ini = new TIniFile( podesavanje_vage ) ;
	if (FileExists(podesavanje_vage) ) {
		cdsVaga->Active = false;
		sdsVaga->ParamByName("ID")->AsInteger = idVage;
		sdsVaga->ParamByName("sm")->AsInteger = Sifra_mag;
		cdsVaga->Active = true;
		cdsVaga->Edit();
		cdsVaga->FieldByName("AKTIVAN")->AsInteger = ini->ReadInteger ( "Vaga", "aktivan", 0 );
		cdsVaga->FieldByName("BROJ_KARAKTERA")->AsInteger = ini->ReadInteger ( "Vaga", "broj_karaktera", 0 );
		cdsVaga->FieldByName("COMPORT")->AsInteger = ini->ReadInteger ( "Vaga", "comport", 0 );
		cdsVaga->FieldByName("baud")->AsInteger = ini->ReadInteger ( "Vaga", "baud", 0 );
		cdsVaga->FieldByName("PARITY")->AsInteger = ini->ReadInteger ( "Vaga", "parity", 0 );
		cdsVaga->FieldByName("STOPBITS")->AsInteger = ini->ReadInteger ( "Vaga", "stoppits", 0 );
		cdsVaga->FieldByName("DATABITS")->AsInteger = ini->ReadInteger ( "Vaga", "databits", 0 );
		cdsVaga->FieldByName("AUTOMATSKA_VAGA")->AsInteger = ini->ReadInteger ( "Vaga", "automatska_vaga", 0 );
		if (cdsVaga->FieldByName("id")->AsInteger == idVage || cdsVaga->FieldByName("id")->AsInteger == 0) {
			cdsVaga->FieldByName("id")->AsInteger = idVage;
		}
		cdsVaga->Post();
        ShowMessage(IntToStr(idVage) + "    " + IntToStr(Sifra_mag));
	}
	else {
		cdsVaga->Active = false;
		sdsVaga->ParamByName("ID")->AsInteger = idVage;
		sdsVaga->ParamByName("sm")->AsInteger = Sifra_mag;
		cdsVaga->Active = true;
        ShowMessage(IntToStr(idVage) + "    " + IntToStr(Sifra_mag));
	}
	delete ini;

}
//---------------------------------------------------------------------------
void  TdmVaga::getTipVage(int idVage)
{
	//
	//
//	if (cdsFiskal->Active != true) {
//	   PovuciPodatkeKasa(sifraMagacina);
//	}
//
//	return cdsFiskal->FieldByName("tip_kase")->AsInteger;

}
//-----------------------------------------------------------------------------
void  TdmVaga::getSifruMagacina(int idVage)
{
	//
//	if (cdsFiskal->Active != true) {
//	   PovuciPodatkeKasa(sifraMagacina);
//	}
//
//	return cdsFiskal->FieldByName("id_broj_isecka")->AsInteger;


}