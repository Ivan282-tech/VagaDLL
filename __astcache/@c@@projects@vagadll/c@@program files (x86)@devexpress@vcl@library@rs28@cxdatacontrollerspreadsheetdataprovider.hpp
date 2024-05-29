// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxDataControllerSpreadSheetDataProvider.pas' rev: 35.00 (Windows)

#ifndef CxdatacontrollerspreadsheetdataproviderHPP
#define CxdatacontrollerspreadsheetdataproviderHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Types.hpp>
#include <System.Classes.hpp>
#include <dxCoreClasses.hpp>
#include <cxCustomData.hpp>
#include <dxSpreadSheetCoreFormulas.hpp>
#include <dxSpreadSheetClasses.hpp>
#include <dxSpreadSheetCoreFormulasParser.hpp>
#include <dxSpreadSheetCoreReferences.hpp>
#include <dxSpreadSheetCoreFormulasTokens.hpp>
#include <dxSpreadSheetTypes.hpp>
#include <cxClasses.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxdatacontrollerspreadsheetdataprovider
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxDataControllerSpreadSheetCellData;
class DELPHICLASS TcxDataControllerSpreadSheetFormulaReferenceToken;
class DELPHICLASS TcxDataControllerSpreadSheetFormulaUnknownReferenceToken;
class DELPHICLASS TcxDataControllerSpreadSheetFormulaParser;
class DELPHICLASS TcxDataControllerSpreadSheetFormulaController;
class DELPHICLASS TcxDataControllerSpreadSheetFormatSettings;
class DELPHICLASS TcxDataControllerSpreadSheetInvariantFormatSettings;
class DELPHICLASS TcxDataControllerConditionalFormattingReferencesFormatter;
class DELPHICLASS TcxDataControllerSpreadSheetDataProvider;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDataControllerSpreadSheetCellData : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	TcxDataControllerSpreadSheetDataProvider* FDataProvider;
	int FItemIndex;
	int FRecordIndex;
	
protected:
	Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode __fastcall GetAsError();
	double __fastcall GetAsFloat();
	System::TObject* __fastcall GetAsFormula();
	System::Variant __fastcall GetAsVariant();
	Dxspreadsheettypes::TdxSpreadSheetCellDataType __fastcall GetDataType();
	bool __fastcall GetIsEmpty();
	bool __fastcall IsNumericValue();
	bool __fastcall GetIsError();
	__property Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode AsError = {read=GetAsError, nodefault};
	__property double AsFloat = {read=GetAsFloat};
	__property System::TObject* AsFormula = {read=GetAsFormula};
	__property System::Variant AsVariant = {read=GetAsVariant};
	__property Dxspreadsheettypes::TdxSpreadSheetCellDataType DataType = {read=GetDataType, nodefault};
	__property bool IsEmpty = {read=GetIsEmpty, nodefault};
	__property TcxDataControllerSpreadSheetDataProvider* DataProvider = {read=FDataProvider};
	__property bool IsError = {read=GetIsError, nodefault};
	__property int ItemIndex = {read=FItemIndex, nodefault};
	__property int RecordIndex = {read=FRecordIndex, nodefault};
	
public:
	__fastcall TcxDataControllerSpreadSheetCellData(TcxDataControllerSpreadSheetDataProvider* ADataProvider, int ARecordIndex, int AItemIndex);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxDataControllerSpreadSheetCellData() { }
	
private:
	void *__IdxSpreadSheetCellData;	// Dxspreadsheettypes::IdxSpreadSheetCellData 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B775B17A-375A-47E0-A5BA-7F9A82CC9FB9}
	operator Dxspreadsheettypes::_di_IdxSpreadSheetCellData()
	{
		Dxspreadsheettypes::_di_IdxSpreadSheetCellData intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxspreadsheettypes::IdxSpreadSheetCellData*(void) { return (Dxspreadsheettypes::IdxSpreadSheetCellData*)&__IdxSpreadSheetCellData; }
	#endif
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxDataControllerSpreadSheetFormulaReferenceToken : public Dxspreadsheetcoreformulastokens::TdxSpreadSheetFormulaReferenceToken
{
	typedef Dxspreadsheetcoreformulastokens::TdxSpreadSheetFormulaReferenceToken inherited;
	
private:
	TcxDataControllerSpreadSheetDataProvider* FProvider;
	
protected:
	virtual System::UnicodeString __fastcall ReferenceToString();
	
public:
	__fastcall TcxDataControllerSpreadSheetFormulaReferenceToken(TcxDataControllerSpreadSheetDataProvider* AProvider, int AItemIndex);
public:
	/* TdxSpreadSheetFormulaToken.Destroy */ inline __fastcall virtual ~TcxDataControllerSpreadSheetFormulaReferenceToken() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDataControllerSpreadSheetFormulaUnknownReferenceToken : public Dxspreadsheetcoreformulastokens::TdxSpreadSheetFormulaUnknownToken
{
	typedef Dxspreadsheetcoreformulastokens::TdxSpreadSheetFormulaUnknownToken inherited;
	
protected:
	virtual void __fastcall ToString(System::Classes::TStringList* AStack);
public:
	/* TdxSpreadSheetFormulaUnknownToken.Create */ inline __fastcall virtual TcxDataControllerSpreadSheetFormulaUnknownReferenceToken(const System::UnicodeString AName, Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink* ALink) : Dxspreadsheetcoreformulastokens::TdxSpreadSheetFormulaUnknownToken(AName, ALink) { }
	/* TdxSpreadSheetFormulaUnknownToken.Destroy */ inline __fastcall virtual ~TcxDataControllerSpreadSheetFormulaUnknownReferenceToken() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxDataControllerSpreadSheetFormulaParser : public Dxspreadsheetcoreformulasparser::TdxSpreadSheetCustomFormulaParser
{
	typedef Dxspreadsheetcoreformulasparser::TdxSpreadSheetCustomFormulaParser inherited;
	
public:
	static const System::WideChar ItemReferenceStartMark = (System::WideChar)(0x5b);
	
	static const System::WideChar ItemReferenceFinishMark = (System::WideChar)(0x5d);
	
	
private:
	static const System::Int8 StateItemReference = System::Int8(0x13);
	
	TcxDataControllerSpreadSheetDataProvider* FDataProvider;
	
protected:
	virtual bool __fastcall CreateDefinedNameToken(const Dxspreadsheetcoreformulasparser::TdxSpreadSheetFormulaParserToken &AToken, /* out */ Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* &ADefinedNameToken, Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink* ALink = (Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink*)(0x0));
	virtual Dxspreadsheetcoreformulastokens::TdxSpreadSheetFormulaReferenceToken* __fastcall CreateItemReferenceToken(int AItemIndex)/* overload */;
	Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* __fastcall CreateItemReferenceToken(Dxspreadsheetcoreformulasparser::TdxSpreadSheetFormulaParserTokenList* AStack)/* overload */;
	virtual void __fastcall PopulateStateMachine();
	__property TcxDataControllerSpreadSheetDataProvider* DataProvider = {read=FDataProvider};
	
public:
	__fastcall TcxDataControllerSpreadSheetFormulaParser(TcxDataControllerSpreadSheetDataProvider* ADataProvider);
public:
	/* TdxSpreadSheetCustomFormulaParser.Destroy */ inline __fastcall virtual ~TcxDataControllerSpreadSheetFormulaParser() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDataControllerSpreadSheetFormulaController : public Dxspreadsheetcoreformulas::TdxSpreadSheetCustomFormulaController
{
	typedef Dxspreadsheetcoreformulas::TdxSpreadSheetCustomFormulaController inherited;
	
private:
	TcxDataControllerSpreadSheetDataProvider* FDataProvider;
	
protected:
	virtual System::TObject* __fastcall CreateParser();
	virtual Dxspreadsheetclasses::TdxSpreadSheetFormatSettings* __fastcall GetFormatSettings();
	__property TcxDataControllerSpreadSheetDataProvider* DataProvider = {read=FDataProvider};
	
public:
	__fastcall TcxDataControllerSpreadSheetFormulaController(TcxDataControllerSpreadSheetDataProvider* ADataProvider);
public:
	/* TdxSpreadSheetCustomFormulaController.Destroy */ inline __fastcall virtual ~TcxDataControllerSpreadSheetFormulaController() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDataControllerSpreadSheetFormatSettings : public Dxspreadsheetclasses::TdxSpreadSheetFormatSettings
{
	typedef Dxspreadsheetclasses::TdxSpreadSheetFormatSettings inherited;
	
protected:
	virtual int __fastcall GetLocaleID();
public:
	/* TdxSpreadSheetCustomFormatSettings.Create */ inline __fastcall TcxDataControllerSpreadSheetFormatSettings() : Dxspreadsheetclasses::TdxSpreadSheetFormatSettings() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxDataControllerSpreadSheetFormatSettings() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDataControllerSpreadSheetInvariantFormatSettings : public TcxDataControllerSpreadSheetFormatSettings
{
	typedef TcxDataControllerSpreadSheetFormatSettings inherited;
	
protected:
	virtual int __fastcall GetLocaleID();
public:
	/* TdxSpreadSheetCustomFormatSettings.Create */ inline __fastcall TcxDataControllerSpreadSheetInvariantFormatSettings() : TcxDataControllerSpreadSheetFormatSettings() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxDataControllerSpreadSheetInvariantFormatSettings() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDataControllerConditionalFormattingReferencesFormatter : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TcxDataControllerSpreadSheetDataProvider* FProvider;
	
public:
	__fastcall TcxDataControllerConditionalFormattingReferencesFormatter(TcxDataControllerSpreadSheetDataProvider* AProvider);
	HIDESBASE virtual System::UnicodeString __fastcall ToString(const System::Types::TRect &AArea)/* overload */;
	HIDESBASE virtual System::UnicodeString __fastcall ToString(const int AColumn)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxDataControllerConditionalFormattingReferencesFormatter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDataControllerSpreadSheetDataProvider : public Dxcoreclasses::TcxIUnknownObject
{
	typedef Dxcoreclasses::TcxIUnknownObject inherited;
	
private:
	static TcxDataControllerSpreadSheetInvariantFormatSettings* FInvariantFormatSettings;
	Cxcustomdata::TcxCustomDataController* FDataController;
	TcxDataControllerSpreadSheetFormatSettings* FSavedFormatSettings;
	
protected:
	TcxDataControllerSpreadSheetFormatSettings* FFormatSettings;
	TcxDataControllerConditionalFormattingReferencesFormatter* FReferencesFormatter;
	System::UnicodeString __fastcall ReferenceToString(int AColumn)/* overload */;
	System::UnicodeString __fastcall ReferenceToString(const System::Types::TRect &AArea)/* overload */;
	virtual void __fastcall RollbackFormatSettings();
	virtual void __fastcall SaveFormatSettings();
	virtual void __fastcall ForEachCell(const System::Types::TRect &AArea, Dxspreadsheettypes::_di_TdxSpreadSheetViewForEachCellProc AProc, bool AGoForward = true);
	virtual Dxspreadsheettypes::_di_IdxSpreadSheetCellData __fastcall GetCellData(const int ARow, const int AColumn);
	virtual int __fastcall GetMaxColumnIndex();
	virtual int __fastcall GetMaxRowIndex();
	virtual int __fastcall GetNextColumnWithNonEmptyCell(const int ARow, const int AColumn, const bool AGoForward = true);
	virtual int __fastcall GetNextRowWithNonEmptyCell(const int ARow, const int AColumn, const bool AGoForward = true);
	virtual bool __fastcall IsRowVisible(const int ARow);
	virtual void __fastcall SetCellData(const int ARow, const int AColumn, const System::Variant &AValue, const Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode AErrorCode);
	virtual TcxDataControllerSpreadSheetFormatSettings* __fastcall CreateFormatSettings();
	virtual Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode __fastcall GetErrorCode(int ARecordIndex, int AItemIndex);
	virtual int __fastcall GetItemByDisplayName(const System::UnicodeString AValue);
	System::UnicodeString __fastcall GetItemDisplayName(int AItemIndex)/* overload */;
	virtual System::UnicodeString __fastcall GetItemDisplayName(System::TObject* AItem) = 0 /* overload */;
	virtual System::Variant __fastcall GetValue(int ARecordIndex, int AItemIndex);
	virtual bool __fastcall IsIndependent();
	static void __fastcall Initialize();
	static void __fastcall Finalize();
	/* static */ __property TcxDataControllerSpreadSheetInvariantFormatSettings* InvariantFormatSettings = {read=FInvariantFormatSettings};
	
public:
	__fastcall virtual TcxDataControllerSpreadSheetDataProvider(Cxcustomdata::TcxCustomDataController* ADataController);
	__fastcall virtual ~TcxDataControllerSpreadSheetDataProvider();
	__property Cxcustomdata::TcxCustomDataController* DataController = {read=FDataController};
	__property TcxDataControllerSpreadSheetFormatSettings* FormatSettings = {read=FFormatSettings};
private:
	void *__IdxSpreadSheetViewData;	// Dxspreadsheettypes::IdxSpreadSheetViewData 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {08C7DC62-1EEA-4FD3-9922-CFBD8911A5FB}
	operator Dxspreadsheettypes::_di_IdxSpreadSheetViewData()
	{
		Dxspreadsheettypes::_di_IdxSpreadSheetViewData intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxspreadsheettypes::IdxSpreadSheetViewData*(void) { return (Dxspreadsheettypes::IdxSpreadSheetViewData*)&__IdxSpreadSheetViewData; }
	#endif
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Cxdatacontrollerspreadsheetdataprovider */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXDATACONTROLLERSPREADSHEETDATAPROVIDER)
using namespace Cxdatacontrollerspreadsheetdataprovider;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxdatacontrollerspreadsheetdataproviderHPP
