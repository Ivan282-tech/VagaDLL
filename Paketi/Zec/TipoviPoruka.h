//---------------------------------------------------------------------------

#ifndef TipoviPorukaH
#define TipoviPorukaH
#include <System.Classes.hpp>
//---------------------------------------------------------------------------

enum TipPoruke
{
	tpPrijava,
	tpPoruka,
	tpUpdate,
	tpUploadFiles,
	tpUploadDb,
	tpDownload,
	tpSqlExec,
	tpSqlReport,
    tpKrajOperacije
};

AnsiString TipPorukeUStringInternal(TipPoruke tip);
TipPoruke StringUTipPorukeInternal(AnsiString tip);

#endif
