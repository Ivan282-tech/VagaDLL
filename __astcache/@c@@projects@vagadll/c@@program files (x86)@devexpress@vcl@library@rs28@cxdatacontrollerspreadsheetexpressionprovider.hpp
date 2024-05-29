// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxDataControllerSpreadSheetExpressionProvider.pas' rev: 35.00 (Windows)

#ifndef CxdatacontrollerspreadsheetexpressionproviderHPP
#define CxdatacontrollerspreadsheetexpressionproviderHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <dxCoreClasses.hpp>
#include <cxCustomData.hpp>
#include <dxSpreadSheetCoreFormulas.hpp>
#include <dxSpreadSheetClasses.hpp>
#include <dxSpreadSheetCoreFormulasParser.hpp>
#include <dxSpreadSheetCoreFormulasTokens.hpp>
#include <dxSpreadSheetTypes.hpp>
#include <cxDataControllerSpreadSheetDataProvider.hpp>
#include <cxClasses.hpp>
#include <System.Classes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxdatacontrollerspreadsheetexpressionprovider
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IcxDataControllerSpreadSheetExpressionItem;
typedef System::DelphiInterface<IcxDataControllerSpreadSheetExpressionItem> _di_IcxDataControllerSpreadSheetExpressionItem;
class DELPHICLASS TcxDataControllerSpreadSheetExpressionFormulaParser;
class DELPHICLASS TcxDataControllerSpreadSheetExpressionFormulaController;
class DELPHICLASS TcxDataControllerSpreadSheetExpressionFormula;
class DELPHICLASS TcxDataControllerSpreadSheetExpressionDataProvider;
class DELPHICLASS TcxDataControllerSpreadSheetExpressionParser;
class DELPHICLASS TcxDataControllerSpreadSheetExpressionCalculator;
class DELPHICLASS TcxDataControllerSpreadSheetExpressionProvider;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{58B7DD4A-B654-44FE-B91C-5BDAEB28F6F6}") IcxDataControllerSpreadSheetExpressionItem  : public System::IInterface 
{
	virtual bool __fastcall CanUseInExpression() = 0 ;
	virtual System::UnicodeString __fastcall GetReferenceName() = 0 ;
};

class PASCALIMPLEMENTATION TcxDataControllerSpreadSheetExpressionFormulaParser : public Cxdatacontrollerspreadsheetdataprovider::TcxDataControllerSpreadSheetFormulaParser
{
	typedef Cxdatacontrollerspreadsheetdataprovider::TcxDataControllerSpreadSheetFormulaParser inherited;
	
protected:
	virtual void __fastcall PopulateKnownOperations();
	virtual void __fastcall PopulateStateMachine();
public:
	/* TcxDataControllerSpreadSheetFormulaParser.Create */ inline __fastcall TcxDataControllerSpreadSheetExpressionFormulaParser(Cxdatacontrollerspreadsheetdataprovider::TcxDataControllerSpreadSheetDataProvider* ADataProvider) : Cxdatacontrollerspreadsheetdataprovider::TcxDataControllerSpreadSheetFormulaParser(ADataProvider) { }
	
public:
	/* TdxSpreadSheetCustomFormulaParser.Destroy */ inline __fastcall virtual ~TcxDataControllerSpreadSheetExpressionFormulaParser() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDataControllerSpreadSheetExpressionFormulaController : public Cxdatacontrollerspreadsheetdataprovider::TcxDataControllerSpreadSheetFormulaController
{
	typedef Cxdatacontrollerspreadsheetdataprovider::TcxDataControllerSpreadSheetFormulaController inherited;
	
protected:
	virtual System::TObject* __fastcall CreateParser();
public:
	/* TcxDataControllerSpreadSheetFormulaController.Create */ inline __fastcall TcxDataControllerSpreadSheetExpressionFormulaController(Cxdatacontrollerspreadsheetdataprovider::TcxDataControllerSpreadSheetDataProvider* ADataProvider) : Cxdatacontrollerspreadsheetdataprovider::TcxDataControllerSpreadSheetFormulaController(ADataProvider) { }
	
public:
	/* TdxSpreadSheetCustomFormulaController.Destroy */ inline __fastcall virtual ~TcxDataControllerSpreadSheetExpressionFormulaController() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxDataControllerSpreadSheetExpressionFormula : public Dxspreadsheetcoreformulas::TdxSpreadSheetCustomFormula
{
	typedef Dxspreadsheetcoreformulas::TdxSpreadSheetCustomFormula inherited;
	
private:
	Cxdatacontrollerspreadsheetdataprovider::TcxDataControllerSpreadSheetFormulaController* FController;
	TcxDataControllerSpreadSheetExpressionDataProvider* FDataProvider;
	
protected:
	virtual System::Variant __fastcall CalculateByRecord(int ARecordIndex, /* out */ Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	virtual Cxdatacontrollerspreadsheetdataprovider::TcxDataControllerSpreadSheetFormulaController* __fastcall CreateController();
	virtual Dxspreadsheetcoreformulas::TdxSpreadSheetCustomFormulaController* __fastcall GetController();
	virtual System::TObject* __fastcall GetView();
	__property TcxDataControllerSpreadSheetExpressionDataProvider* DataProvider = {read=FDataProvider};
	
public:
	__fastcall virtual TcxDataControllerSpreadSheetExpressionFormula(TcxDataControllerSpreadSheetExpressionDataProvider* ADataProvider);
	__fastcall virtual ~TcxDataControllerSpreadSheetExpressionFormula();
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDataControllerSpreadSheetExpressionDataProvider : public Cxdatacontrollerspreadsheetdataprovider::TcxDataControllerSpreadSheetDataProvider
{
	typedef Cxdatacontrollerspreadsheetdataprovider::TcxDataControllerSpreadSheetDataProvider inherited;
	
private:
	int FActiveRow;
	
protected:
	virtual bool __fastcall CanUseItemInExpression(int AItemIndex);
	virtual Dxspreadsheettypes::_di_IdxSpreadSheetCellData __fastcall GetCellData(const int ARow, const int AColumn);
	_di_IcxDataControllerSpreadSheetExpressionItem __fastcall GetAsExpressionItem(System::TObject* AItem);
	virtual System::UnicodeString __fastcall GetItemDisplayName(System::TObject* AItem)/* overload */;
	__property int ActiveRow = {read=FActiveRow, write=FActiveRow, nodefault};
public:
	/* TcxDataControllerSpreadSheetDataProvider.Create */ inline __fastcall virtual TcxDataControllerSpreadSheetExpressionDataProvider(Cxcustomdata::TcxCustomDataController* ADataController) : Cxdatacontrollerspreadsheetdataprovider::TcxDataControllerSpreadSheetDataProvider(ADataController) { }
	/* TcxDataControllerSpreadSheetDataProvider.Destroy */ inline __fastcall virtual ~TcxDataControllerSpreadSheetExpressionDataProvider() { }
	
	/* Hoisted overloads: */
	
protected:
	inline System::UnicodeString __fastcall  GetItemDisplayName(int AItemIndex){ return Cxdatacontrollerspreadsheetdataprovider::TcxDataControllerSpreadSheetDataProvider::GetItemDisplayName(AItemIndex); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDataControllerSpreadSheetExpressionParser : public Cxcustomdata::TcxDataCustomExpressionParser
{
	typedef Cxcustomdata::TcxDataCustomExpressionParser inherited;
	
public:
	virtual void __fastcall Parse(const System::UnicodeString AExpression, System::TObject* AFormula);
public:
	/* TObject.Create */ inline __fastcall TcxDataControllerSpreadSheetExpressionParser() : Cxcustomdata::TcxDataCustomExpressionParser() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxDataControllerSpreadSheetExpressionParser() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDataControllerSpreadSheetExpressionCalculator : public Cxcustomdata::TcxDataCustomExpressionCalculator
{
	typedef Cxcustomdata::TcxDataCustomExpressionCalculator inherited;
	
protected:
	virtual System::Variant __fastcall Calculate(System::TObject* AFormula, int ARecordIndex, /* out */ int &AErrorCode);
public:
	/* TObject.Create */ inline __fastcall TcxDataControllerSpreadSheetExpressionCalculator() : Cxcustomdata::TcxDataCustomExpressionCalculator() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxDataControllerSpreadSheetExpressionCalculator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDataControllerSpreadSheetExpressionProvider : public Cxcustomdata::TcxDataCustomExpressionProvider
{
	typedef Cxcustomdata::TcxDataCustomExpressionProvider inherited;
	
private:
	TcxDataControllerSpreadSheetExpressionDataProvider* FDataProvider;
	HIDESBASE TcxDataControllerSpreadSheetExpressionParser* __fastcall GetParser();
	
protected:
	System::UnicodeString __fastcall ConvertExpression(const System::UnicodeString AExpression, Cxdatacontrollerspreadsheetdataprovider::TcxDataControllerSpreadSheetFormatSettings* AFrom, Cxdatacontrollerspreadsheetdataprovider::TcxDataControllerSpreadSheetFormatSettings* ATo);
	virtual Cxcustomdata::TcxDataCustomExpressionCalculator* __fastcall CreateCalculator();
	virtual TcxDataControllerSpreadSheetExpressionDataProvider* __fastcall CreateDataProvider();
	virtual Cxcustomdata::TcxDataCustomExpressionParser* __fastcall CreateParser();
	virtual System::TObject* __fastcall CreateFormula();
	virtual System::UnicodeString __fastcall ErrorCodeToString(int ACode);
	virtual int __fastcall GetVarCastErrorCode();
	__property TcxDataControllerSpreadSheetExpressionDataProvider* DataProvider = {read=FDataProvider};
	
public:
	__fastcall virtual TcxDataControllerSpreadSheetExpressionProvider(Cxcustomdata::TcxCustomDataController* ADataController);
	__fastcall virtual ~TcxDataControllerSpreadSheetExpressionProvider();
	virtual bool __fastcall CanUseItemInExpression(int AItemIndex);
	virtual void __fastcall EditExpression(int AItemIndex)/* overload */;
	virtual void __fastcall EditExpression(System::UnicodeString &AExpression)/* overload */;
	virtual System::UnicodeString __fastcall ExpressionToInvariantExpression(const System::UnicodeString AExpression);
	virtual System::UnicodeString __fastcall GetItemReferenceName(int AItemIndex);
	virtual System::UnicodeString __fastcall InvariantExpressionToExpression(const System::UnicodeString AExpression);
	__property TcxDataControllerSpreadSheetExpressionParser* Parser = {read=GetParser};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Cxdatacontrollerspreadsheetexpressionprovider */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXDATACONTROLLERSPREADSHEETEXPRESSIONPROVIDER)
using namespace Cxdatacontrollerspreadsheetexpressionprovider;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxdatacontrollerspreadsheetexpressionproviderHPP
