//---------------------------------------------------------------------------

#ifndef VagaControllerH
#define VagaControllerH
#include <windows.h>
#include "VagaFactory.h"
#include "Vaga.h"
#include "dm_vaga.h"
//---------------------------------------------------------------------------
class TVagaController
{
	public:
		TVaga* napraviVagu(int idVage, int sifra_magacina);
};
extern "C" __declspec(dllexport) int __stdcall  automatskaVaga(int idVage, int sifra_magacina){
		TVagaController* vk = new TVagaController();
		TVaga *vaga;
		vaga = vk->napraviVagu(idVage, sifra_magacina);
		int rez = vaga->dmV->cdsVaga->FieldByName("AUTOMATSKA_VAGA")->AsInteger;

		delete vaga;
        delete vk;
		return  rez;
	}
//	void procitajTezinu(callbackTezinaIzmerena OnTezinaIzmerena){
//
//		 TVaga* vaga;
//		 TVagaController* vk = new TVagaController();
//		 vaga = vk->napraviVagu(-1, -1);
//		 vaga->ubaciSveArtikle(0);
//
//		 vaga->procitajTezinu(OnTezinaIzmerena, NULL);
//
////		 delete vaga;
////		 delete vk;
//
//	}
#endif
