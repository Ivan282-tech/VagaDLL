//---------------------------------------------------------------------------

#ifndef VagaFactoryH
#define VagaFactoryH

#include "Vaga.h"
#include "c_digi.h"
#include "c_bizerba.h"
#include "c_bizerbaCS300.h"
#include "c_bxvaga.h"
#include "c_bizerba_plst.h"
#include "Pegaz.h"
#include "ELabel.h"
#include "c_elsi.h"
#include "dm_vaga.h"
#include "c_univerzalna_vaga.h"
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
class TVagaFactory
{

private:

public:

	static TVaga* Create(int idVage, int tipVage, int sifraMagacina) {

		switch ( tipVage )
		{
			case 1:
			    return new TDigi(idVage, sifraMagacina);

			case 2:
				return new TBizerba(idVage, sifraMagacina);

            case 3:
				return new TBXVaga(idVage, sifraMagacina);

			case 4:
				return new TBizerbaPLST(idVage, sifraMagacina);

			case 5:
				return new TBizerbaCS300(idVage, sifraMagacina);

			case 6:
				return new TELabel(idVage, sifraMagacina); //mesara strand

			case 7:
				return new TPegaz(idVage, sifraMagacina);

			case 8:
				return new TElsi(idVage, sifraMagacina);

			case 9:
				return new TUniverzalnaVaga(idVage, sifraMagacina);

			default:
			  return new TBizerba(idVage, sifraMagacina);

		}
	}

};
#endif
