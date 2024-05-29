//---------------------------------------------------------------------------

#ifndef UpdatePodesavanjaH
#define UpdatePodesavanjaH
#include <System.Classes.hpp>
//---------------------------------------------------------------------------
enum TipUpdejta
{
	tuPokretanje,
	tuOdmah,
	tuZakazan
};
struct TPodesavanja
{
	public:
		TipUpdejta _tipUpdejta;
		AnsiString _poruka;
		bool _porukaPonavljanje;
		bool _backupBaze;
		bool _backupApp;
		TDateTime _vreme;
		int _brojRacunara;
		AnsiString _firma;
        int _vremeTrajanja;
};
#endif
