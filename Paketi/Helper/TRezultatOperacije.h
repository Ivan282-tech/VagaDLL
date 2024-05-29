//---------------------------------------------------------------------------

#ifndef TRezultatOperacijeH
#define TRezultatOperacijeH
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Data.SqlExpr.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Phys.FB.hpp>
#include <FireDAC.Phys.FBDef.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <FireDAC.VCLUI.Wait.hpp>
//---------------------------------------------------------------------------

template <typename T>
class TRezultatOperacije
{
	private:
		bool _uspeh;
		AnsiString _greska;
		T _rezultat;
	public:
		TRezultatOperacije(bool uspeh, T rezultat, AnsiString greska = "")
		{
			_uspeh = uspeh;
			_greska = greska;
			_rezultat = rezultat;
		}
		TRezultatOperacije(bool uspeh, std::unique_ptr<T> rezultat, AnsiString greska = "")
		{
			_uspeh = uspeh;
			_greska = greska;
			_rezultat = {*rezultat};
		}



		bool OperacijaUspela()
		{
			return _uspeh;
		}

		AnsiString DohvatiGresku()
		{
			return _greska;
		}

		T DohvatiRezultat()
		{
			if (!_uspeh)
			{
				throw std::runtime_error(_greska.c_str());
			}
			return _rezultat;
		}
};

#endif
