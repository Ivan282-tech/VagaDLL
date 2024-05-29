//---------------------------------------------------------------------------

#pragma hdrstop

#include "Vaga.h"

//---------------------------------------------------------------------------
/*
	Primer koriscenja:

	TVaga *vaga;

	TVagaController *vk = new TVagaFactory();
	vaga = vk->napraviVagu(idvage, -1);
	vaga->ubaciSveArtikle();

	TStringList *sl = new TStringList();
	sl->Add("    Test1.") ;
	sl->Add(" OvO jE tEsT .");
	fisk->stampajNefiskalniText(sl);
	delete sl;
*/

TVaga::TVaga ()
{
//
//	fkasa = new TdmFiskalnaKasaDM(NULL);
}
TVaga::TVaga (int idVage, int sifraMagacina)
{
//
//	fkasa = new TdmFiskalnaKasaDM(NULL, idKase, sifraMagacina);
	dmV = new TdmVaga(idVage,sifraMagacina, NULL) ;

}

#pragma package(smart_init)
