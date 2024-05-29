//---------------------------------------------------------------------------

#pragma hdrstop

#include "TipoviPoruka.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

AnsiString TipPorukeUStringInternal(TipPoruke tip)
{
	switch(tip)
	{
		case tpPrijava:
			return "prijava";
		case tpPoruka:
			return "poruka";
		case tpUpdate:
			return "update";
		case tpUploadFiles:
			return "uploadFiles";
		case tpUploadDb:
			return "uploadDb";
		case tpDownload:
			return "download";
		case tpSqlExec:
			return "sqlExec";
		case tpSqlReport:
			return "sqlReport";
		case tpKrajOperacije:
			return "krajOperacije";
		default:
            throw Exception("Los tip poruke");
	}

}

TipPoruke StringUTipPorukeInternal(AnsiString tip)
{
	if (CompareText(tip, "prijava") == 0)
	{
		return tpPrijava;
	}else if (CompareText(tip, "poruka") == 0)
	{
		return tpPoruka;
	}else if (CompareText(tip, "update") == 0)
	{
		return tpUpdate;
	}else if (CompareText(tip, "uploadFiles") == 0)
	{
		return tpUploadFiles;
	}else if (CompareText(tip, "uploadDb") == 0)
	{
		return tpUploadDb;
	}else if (CompareText(tip, "download") == 0)
	{
		return tpDownload;
	}else if (CompareText(tip, "sqlExec") == 0)
	{
		return tpSqlExec;
	}else if (CompareText(tip, "sqlReport") == 0)
	{
		return tpSqlReport;
	}else if (CompareText(tip, "krajOperacije") == 0)
	{
		return tpKrajOperacije;
	}
	throw Exception("Los tip poruke");
}