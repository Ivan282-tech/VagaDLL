//---------------------------------------------------------------------------

#pragma hdrstop

#include "VagaController.h"
//---------------------------------------------------------------------------
TVaga* TVagaController::napraviVagu(int idVage, int sifra_magacina) {

	  TdmVaga *dv = new TdmVaga(idVage,sifra_magacina, NULL) ;

	  int tipVage = dv->cdsVaga->FieldByName("tip_vage")->AsInteger;
	  int sifraMagacina = dv->cdsVaga->FieldByName("sifra_magacina")->AsInteger;

	  return TVagaFactory::Create( idVage, tipVage, sifraMagacina);

}
#pragma package(smart_init)
