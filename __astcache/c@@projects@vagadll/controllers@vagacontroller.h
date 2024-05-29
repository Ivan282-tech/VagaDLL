//---------------------------------------------------------------------------

#ifndef VagaControllerH
#define VagaControllerH

#include "VagaFactory.h"
#include "Vaga.h"
#include "dm_vaga.h"
//---------------------------------------------------------------------------
class TVagaController
{
	public:
		TVaga* napraviVagu(int idVage, int sifra_magacina);
};
#endif
