//---------------------------------------------------------------------------

#pragma hdrstop

#include "DataPackInstance.h"


//#include "BUS_tools.h"
//#include "service_tools.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

__fastcall DataPackInstance::DataPackInstance(TSQLConnection *connection, UnicodeString sql, UnicodeString name)
{

	try {

		// system table data
		this->sds = new TSQLDataSet(NULL);
		this->dsp = new TDataSetProvider(NULL);
		this->cds = new TClientDataSet(NULL);
//		this->ds = new TDataSource(NULL);
		this->sp = new TSQLStoredProc(NULL);
		this->sp->SQLConnection = connection;
		this->createDataPack(this->sds, this->dsp, this->cds, connection, sql, name);

	}  catch (...) {

	}

}

//------------------------------------------------------------------------------
__fastcall DataPackInstance::DataPackInstance(TSQLConnection *connection, UnicodeString sql)
{

	try {

		// system table data
		this->sds = new TSQLDataSet(NULL);
		this->dsp = new TDataSetProvider(NULL);
		this->cds = new TClientDataSet(NULL);
//		this->ds = new TDataSource(NULL);
		this->sp = new TSQLStoredProc(NULL);
		this->sp->SQLConnection = connection;
		this->createDataPack(this->sds, this->dsp, this->cds, connection, sql, "dsp");

	}  catch (...) {

	}

}
//------------------------------------------------------------------------------
int DataPackInstance::GetID(UnicodeString procedura, UnicodeString parametar)
{
	int result;
	this->sp->StoredProcName = procedura;
	this->sp->ExecProc( );
	result = this->sp->ParamByName( parametar )->AsInteger;
	this->sp->Close();
	return result;
}
//------------------------------------------------------------------------------
/******************************************************************************
 *
 *  CREATE METHODS
 *
 ******************************************************************************/

/**
 * Create database connections
 *
 * @param: {
 *  TSQLDataSet* sds,
 *  TDataSetProvider dsp,
 *  TClientDataSet cds,
 *  TSQLConnection dbConnection,
 *  UnicodeString sql,
 *  UnicodeString dspName
 * }
 *
 * @return: void
 *
 */
void DataPackInstance::createDataPack(TSQLDataSet *sds, TDataSetProvider *dsp, TClientDataSet *cds, TSQLConnection* dbConnection, UnicodeString sql, UnicodeString dspName) {

	// create sql data set
	this->createSDS(sds, dbConnection, sql);

	// create data set provider
	this->createDSP(dsp, sds, dspName);

	// create client data set
	this->createCDS(cds, dsp);

}

/**
 * Create SQL data set
 *
 * @param: {
 *  TSQLDataSet* sds,
 *  TSQLConnection dbConnection,
 *  UnicodeString sql
 * }
 *
 * @return: void
 *
 */
void DataPackInstance::createSDS(TSQLDataSet *sds, TSQLConnection *dbConnection, UnicodeString sql) {

	sds->SQLConnection = dbConnection;
	sds->CommandText = sql;
}

/**
 * Create Data set provider
 *
 * @param: {
 *  TDataSetProvider* dsp,
 *  TSQLDataSet sds,
 *  UnicodeString dspName
 * }
 *
 * @return: void
 *
 */
void DataPackInstance::createDSP(TDataSetProvider *dsp, TSQLDataSet *sds, UnicodeString dspName) {

	dsp->DataSet = sds;
	dsp->Name = dspName;
	dsp->ResolveToDataSet = false;
	dsp->UpdateMode = upWhereKeyOnly;

}

/**
 * Create Client Data Set
 *
 * @param: {
 *  TClientDataSet* cds,
 *  TDataSetProvider dsp
 * }
 *
 * @return: void
 *
 */
void DataPackInstance::createCDS(TClientDataSet *cds, TDataSetProvider *dsp) {

	cds->SetProvider(dsp);
	cds->OnPostError = cdsPostError;

}
//------------------------------------------------------------------------------
void __fastcall DataPackInstance::AddPrimKey(UnicodeString key)
{
	//dodaje primarni key
	sds->Active = true;
	if (cds->FindField( key )) {
		int index1 = cds->FindField( key )->Index;
		if ( sds->Fields->Fields[index1]->FieldName == key ) {
			sds->Fields->Fields[index1]->ProviderFlags << pfInKey;
		}
		cds->FieldByName(key)->ProviderFlags << pfInKey;
	}
//	primKey.push_back(key);
}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
void __fastcall DataPackInstance::cdsPostError(TDataSet* DataSet, EDatabaseError* E, TDataAction& Action)
{
//	LogPostError(DataSet, E, Action, "busTools post error");
	 TLogger* _log = new TLogger(nullptr);
	 _log->Log("busTools post error", llInfo, DataSet->Fields->Fields[1]->AsString);
	 delete _log;

}
