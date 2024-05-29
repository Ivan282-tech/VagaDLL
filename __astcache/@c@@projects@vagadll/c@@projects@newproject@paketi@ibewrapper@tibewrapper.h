//---------------------------------------------------------------------------

#ifndef TIbeWrapperH
#define TIbeWrapperH
//---------------------------------------------------------------------------
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.JSON.hpp>
#include <winbase.h>
#include <Processthreadsapi.h>
#include <Data.DB.hpp>
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
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdExplicitTLSClientServerBase.hpp>
#include <IdFTP.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
#include "Paketi\Logger\TLogger.h"
#include "TDllWrap.h"
#include <System.IOUtils.hpp>
#include <fstream>
#include <string>
#include <windows.h>
#include <sys/stat.h>
#include <iomanip>

//---------------------------------------------------------------------------
class TIbeWrapper : public TComponent
{
	private:
		TLogger *_logger = new TLogger(nullptr);
		THelper *_helper = new THelper(nullptr);
		TDllWrap *_wrapper = nullptr;
		TIdFTP *CreateFTP();
		AnsiString _zip7 = "";
		void InitWrapper();
		bool _initDone = false;
		void CashITDir(bool cashIT = false);
		bool _ftpOK = true;
		bool _dbOK = true;
	protected:
	public:
		TFtpData *_ftpData = new TFtpData();
		TDbData *_dbData = new TDbData();
		TFileData *_fileData = new TFileData();
		bool _stopOnError = false;
		__fastcall TIbeWrapper(TComponent* Owner);
		TRezultatOperacije<bool> *BekapujBazu(AnsiString nazivBackupa, bool sacuvajBackup = false);
		TRezultatOperacije<bool> *RestorujBazu(AnsiString nazivBackupa, bool trajniDir = false);
		TRezultatOperacije<bool> *IzvrsiSkripte();
		TRezultatOperacije<bool> *RekompajlirajProcedure();
		TRezultatOperacije<bool> *PreuzmiFajl(AnsiString filename, AnsiString destFilename = "", bool fqPutanja = false);
		TRezultatOperacije<bool> *DohvatiServerLog();
		TRezultatOperacije<bool> *DohvatiPodesavanja();
		TRezultatOperacije<bool> *DohvatiLogove();
		TRezultatOperacije<AnsiString> *PosaljiArhivu(AnsiString filename);
		TRezultatOperacije<bool> *ArhivirajDirektorijum(AnsiString filename, bool cashIT);
		TRezultatOperacije<bool> *OtpakujFajl(AnsiString filename, bool cashIT = false);
        TRezultatOperacije<bool> *PokreniUpdejt(AnsiString zakazano = "");
		TRezultatOperacije<bool> *OcistiRadni();
	__published:
		__property bool StopOnScriptError = {read = _stopOnError, write = _stopOnError};
};
//---------------------------------------------------------------------------
#endif
