//---------------------------------------------------------------------------



#ifndef DataPackInstanceH
#define DataPackInstanceH

#include <Datasnap.DBClient.hpp>
#include <Datasnap.Provider.hpp>
#include <Data.DBXFirebird.hpp>
#include <Data.DB.hpp>
#include <Data.FMTBcd.hpp>
#include <Data.SqlExpr.hpp>
#include <SqlExpr.hpp>
#include <vector>

#include "Paketi\Logger\TLogger.h"

//---------------------------------------------------------------------------
class DataPackInstance
{
	private:
	   void createCDS(TClientDataSet *cds, TDataSetProvider *dsp);
	   void createDSP(TDataSetProvider *dsp, TSQLDataSet *sds, UnicodeString dspName);
	   void createSDS(TSQLDataSet* sds, TSQLConnection *dbConnection, UnicodeString sql);
	public:

		TSQLDataSet*      sds;
		TDataSetProvider* dsp;
		TClientDataSet*   cds;
//		TDataSource*       ds;
		TSQLConnection* DBConnection;
		TSQLStoredProc* sp;
		UnicodeString     sql;
//		std::vector<UnicodeString> primKey;

		__fastcall DataPackInstance(TSQLConnection* connection, UnicodeString sql, UnicodeString name);
		__fastcall DataPackInstance(TSQLConnection *connection, UnicodeString sql);
		//dodaje primary key zbog upWhereKeyOnly
		void __fastcall AddPrimKey(UnicodeString key);
		int GetID(UnicodeString procedura, UnicodeString parametar);
	   // main
	   void createDataPack(TSQLDataSet *sds, TDataSetProvider *dsp, TClientDataSet *cds, TSQLConnection *dbConnection, UnicodeString sql, UnicodeString dspName);
       void __fastcall cdsPostError(TDataSet* DataSet, EDatabaseError* E, TDataAction& Action);
};
#endif
