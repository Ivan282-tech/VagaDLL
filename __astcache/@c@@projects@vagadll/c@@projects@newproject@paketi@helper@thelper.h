//---------------------------------------------------------------------------

#ifndef THelperH
#define THelperH
//---------------------------------------------------------------------------
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.JSON.hpp>
#include <StrUtils.hpp>
#include <System.IOUtils.hpp>
#include <System.IniFiles.hpp>
#include <Data.DB.hpp>
#include <Data.SqlExpr.hpp>
#include <Data.FMTBcd.hpp>
#include <Data.SqlExpr.hpp>
#include <Datasnap.DBClient.hpp>
#include <Datasnap.Provider.hpp>
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
#include <vector>
#include <windows.h>
#include <process.h>
#include <Tlhelp32.h>
#include <winbase.h>
#include <shellapi.h>
#include "TRezultatOperacije.h"
#include "TFBBaza.h"
#include "Enumeratori.h"
#include "TCompInfo.h"
#include <fstream>
#include <string>
#include <sys/stat.h>
#include <iomanip>
#include <IdHTTP.hpp>
#include <IdMultipartFormData.hpp>
//---------------------------------------------------------------------------
class THelper : public TComponent
{
private:
	TCompInfo _compInfo;
    bool _infoDohvatio = false;
protected:
public:
	__fastcall THelper(TComponent* Owner);

	//Parsiranje fajlova
	TRezultatOperacije<AnsiString> *ProcitajJSON(AnsiString sekcija, AnsiString kljuc,
		AnsiString fajl = "confIT.json");
	TRezultatOperacije<std::vector<AnsiString>> *ProcitajJSONNiz(AnsiString sekcija, AnsiString kljuc,
		AnsiString fajl = "confIT.json");
	std::unique_ptr<TRezultatOperacije<TFBBaza>> ProcitajIniFB(bool udaljena = false);
	std::unique_ptr<TRezultatOperacije<TFBBaza>> ProcitajIniFB(AnsiString konekcija);

	//Rad sa fajlovima
	TRezultatOperacije<double> *PrazanProstor();
	TRezultatOperacije<double> *VelicinaFajla(AnsiString fajl);

	//Info o racunaru
	TRezultatOperacije<TCompInfo> *DohvatiHostInformacije();

    //Rad sa procesima
	TRezultatOperacije<int> *DohvatiProces(AnsiString naziv, ProcessHandle radnja);
	TRezultatOperacije<bool> *PokreniProces(AnsiString putanja, AnsiString fajl);
	TRezultatOperacije<bool> *UgasiProces(AnsiString naziv_programa);

	//Baza
	TRezultatOperacije<TFDConnection*> *NapraviKonekciju(bool udaljeni = false);
	TRezultatOperacije<TSQLConnection*> *NapraviKonekcijuSQLConnection(bool udaljeni = false);
	TRezultatOperacije<AnsiString> *DeparametrizujUpit(TSQLDataSet *dataset);
	TRezultatOperacije<TJSONArray*> *RezultatJSON(TClientDataSet *upit);

	//API
	TRezultatOperacije<TJSONObject*> *PostAPI(AnsiString api, UnicodeString sadrzaj);
    TRezultatOperacije<bool> *ProveraAPI();


	//Male pomocne
	UnicodeString TrenutniDatumCist();
__published:
};
//---------------------------------------------------------------------------
#endif
