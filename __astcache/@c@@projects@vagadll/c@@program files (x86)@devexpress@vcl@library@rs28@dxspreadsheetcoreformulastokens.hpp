// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxSpreadSheetCoreFormulasTokens.pas' rev: 35.00 (Windows)

#ifndef DxspreadsheetcoreformulastokensHPP
#define DxspreadsheetcoreformulastokensHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Types.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Variants.hpp>
#include <System.Math.hpp>
#include <cxClasses.hpp>
#include <cxGeometry.hpp>
#include <cxVariants.hpp>
#include <dxCoreClasses.hpp>
#include <dxSpreadSheetClasses.hpp>
#include <dxSpreadSheetCoreFormulas.hpp>
#include <dxSpreadSheetCoreReferences.hpp>
#include <dxSpreadSheetFunctions.hpp>
#include <dxSpreadSheetTypes.hpp>
#include <dxSpreadSheetUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxspreadsheetcoreformulastokens
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TdxSpreadSheetFormulaNullToken;
class DELPHICLASS TdxSpreadSheetFormulaStringValueToken;
class DELPHICLASS TdxSpreadSheetFormulaTextValueToken;
class DELPHICLASS TdxSpreadSheetFormulaVariantToken;
class DELPHICLASS TdxSpreadSheetFormulaBooleanValueToken;
class DELPHICLASS TdxSpreadSheetFormulaNumericValueToken;
class DELPHICLASS TdxSpreadSheetFormulaIntegerValueToken;
class DELPHICLASS TdxSpreadSheetFormulaFloatValueToken;
class DELPHICLASS TdxSpreadSheetFormulaCurrencyValueToken;
class DELPHICLASS TdxSpreadSheetFormulaDateTimeValueToken;
class DELPHICLASS TdxSpreadSheetFormulaOperationToken;
class DELPHICLASS TdxSpreadSheetFormulaErrorValueToken;
class DELPHICLASS TdxSpreadSheetFormulaCustomDefinedNameToken;
class DELPHICLASS TdxSpreadSheetListToken;
class DELPHICLASS TdxSpreadSheetFormulaArrayToken;
class DELPHICLASS TdxSpreadSheetFormulaArrayRowSeparator;
class DELPHICLASS TdxSpreadSheetFormulaReferenceToken;
class DELPHICLASS TdxSpreadSheetFormulaAreaReferenceToken;
class DELPHICLASS TdxSpreadSheetFormula3DReferenceToken;
class DELPHICLASS TdxSpreadSheet3DReferenceLink;
class DELPHICLASS TdxSpreadSheet3DReferenceAutoLink;
class DELPHICLASS TdxSpreadSheetFormula3DAreaReferenceToken;
class DELPHICLASS TdxSpreadSheetFormulaFunctionToken;
class DELPHICLASS TdxSpreadSheetFormulaParenthesesToken;
class DELPHICLASS TdxSpreadSheetFormulaUnknownToken;
class DELPHICLASS TdxSpreadSheetFormulaUnknownFunctionToken;
class DELPHICLASS TdxSpreadSheetFormulaUnknownNameToken;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetFormulaNullToken : public Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken
{
	typedef Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken inherited;
	
protected:
	virtual void __fastcall Calculate(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaResult* AResult);
	virtual void __fastcall ToString(System::Classes::TStringList* AStack);
	
public:
	virtual void __fastcall GetValue(System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
public:
	/* TdxSpreadSheetFormulaToken.Destroy */ inline __fastcall virtual ~TdxSpreadSheetFormulaNullToken() { }
	
public:
	/* TObject.Create */ inline __fastcall TdxSpreadSheetFormulaNullToken() : Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetFormulaStringValueToken : public Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken
{
	typedef Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken inherited;
	
private:
	System::UnicodeString FValue;
	
protected:
	virtual void __fastcall ToString(System::Classes::TStringList* AStack);
	
public:
	__fastcall virtual TdxSpreadSheetFormulaStringValueToken(const System::UnicodeString AValue);
	virtual void __fastcall GetValue(System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	__property System::UnicodeString Value = {read=FValue, write=FValue};
public:
	/* TdxSpreadSheetFormulaToken.Destroy */ inline __fastcall virtual ~TdxSpreadSheetFormulaStringValueToken() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetFormulaTextValueToken : public TdxSpreadSheetFormulaStringValueToken
{
	typedef TdxSpreadSheetFormulaStringValueToken inherited;
	
protected:
	virtual void __fastcall ToString(System::Classes::TStringList* AStack);
public:
	/* TdxSpreadSheetFormulaStringValueToken.Create */ inline __fastcall virtual TdxSpreadSheetFormulaTextValueToken(const System::UnicodeString AValue) : TdxSpreadSheetFormulaStringValueToken(AValue) { }
	
public:
	/* TdxSpreadSheetFormulaToken.Destroy */ inline __fastcall virtual ~TdxSpreadSheetFormulaTextValueToken() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxSpreadSheetFormulaVariantToken : public Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken
{
	typedef Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken inherited;
	
private:
	System::Variant FValue;
	
public:
	__fastcall virtual TdxSpreadSheetFormulaVariantToken(const System::Variant &AValue);
	void __fastcall ConvertNullValueToZero();
	virtual void __fastcall GetValue(System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	__property System::Variant Value = {read=FValue, write=FValue};
public:
	/* TdxSpreadSheetFormulaToken.Destroy */ inline __fastcall virtual ~TdxSpreadSheetFormulaVariantToken() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetFormulaBooleanValueToken : public Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken
{
	typedef Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken inherited;
	
private:
	bool FValue;
	
protected:
	virtual void __fastcall ToString(System::Classes::TStringList* AStack);
	
public:
	__fastcall virtual TdxSpreadSheetFormulaBooleanValueToken(bool AValue);
	virtual void __fastcall GetValue(System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	__property bool Value = {read=FValue, write=FValue, nodefault};
public:
	/* TdxSpreadSheetFormulaToken.Destroy */ inline __fastcall virtual ~TdxSpreadSheetFormulaBooleanValueToken() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetFormulaNumericValueToken : public Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken
{
	typedef Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken inherited;
	
protected:
	virtual bool __fastcall CombineWithSign(System::Math::TValueSign ASign) = 0 ;
	
public:
	bool __fastcall CombineWithUnaryOperation(Dxspreadsheettypes::TdxSpreadSheetFormulaOperation AOperation);
public:
	/* TdxSpreadSheetFormulaToken.Destroy */ inline __fastcall virtual ~TdxSpreadSheetFormulaNumericValueToken() { }
	
public:
	/* TObject.Create */ inline __fastcall TdxSpreadSheetFormulaNumericValueToken() : Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetFormulaIntegerValueToken : public TdxSpreadSheetFormulaNumericValueToken
{
	typedef TdxSpreadSheetFormulaNumericValueToken inherited;
	
private:
	int FValue;
	
protected:
	virtual bool __fastcall CombineWithSign(System::Math::TValueSign ASign);
	virtual void __fastcall ToString(System::Classes::TStringList* AStack);
	
public:
	__fastcall virtual TdxSpreadSheetFormulaIntegerValueToken(int AValue);
	virtual void __fastcall GetValue(System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	__property int Value = {read=FValue, write=FValue, nodefault};
public:
	/* TdxSpreadSheetFormulaToken.Destroy */ inline __fastcall virtual ~TdxSpreadSheetFormulaIntegerValueToken() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxSpreadSheetFormulaFloatValueToken : public TdxSpreadSheetFormulaNumericValueToken
{
	typedef TdxSpreadSheetFormulaNumericValueToken inherited;
	
private:
	double FValue;
	
protected:
	virtual bool __fastcall CombineWithSign(System::Math::TValueSign ASign);
	virtual void __fastcall ToString(System::Classes::TStringList* AStack);
	
public:
	__fastcall virtual TdxSpreadSheetFormulaFloatValueToken(const double AValue);
	virtual void __fastcall GetValue(System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	__property double Value = {read=FValue, write=FValue};
public:
	/* TdxSpreadSheetFormulaToken.Destroy */ inline __fastcall virtual ~TdxSpreadSheetFormulaFloatValueToken() { }
	
};


class PASCALIMPLEMENTATION TdxSpreadSheetFormulaCurrencyValueToken : public TdxSpreadSheetFormulaNumericValueToken
{
	typedef TdxSpreadSheetFormulaNumericValueToken inherited;
	
private:
	System::Currency FValue;
	
protected:
	virtual bool __fastcall CombineWithSign(System::Math::TValueSign ASign);
	virtual void __fastcall ToString(System::Classes::TStringList* AStack);
	
public:
	__fastcall virtual TdxSpreadSheetFormulaCurrencyValueToken(System::Currency AValue);
	virtual void __fastcall GetValue(System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	__property System::Currency Value = {read=FValue, write=FValue};
public:
	/* TdxSpreadSheetFormulaToken.Destroy */ inline __fastcall virtual ~TdxSpreadSheetFormulaCurrencyValueToken() { }
	
};


class PASCALIMPLEMENTATION TdxSpreadSheetFormulaDateTimeValueToken : public TdxSpreadSheetFormulaFloatValueToken
{
	typedef TdxSpreadSheetFormulaFloatValueToken inherited;
	
protected:
	virtual void __fastcall Calculate(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaResult* AResult);
	virtual void __fastcall ToString(System::Classes::TStringList* AStack);
	
public:
	virtual void __fastcall GetValue(System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
public:
	/* TdxSpreadSheetFormulaFloatValueToken.Create */ inline __fastcall virtual TdxSpreadSheetFormulaDateTimeValueToken(const double AValue) : TdxSpreadSheetFormulaFloatValueToken(AValue) { }
	
public:
	/* TdxSpreadSheetFormulaToken.Destroy */ inline __fastcall virtual ~TdxSpreadSheetFormulaDateTimeValueToken() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetFormulaOperationToken : public Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken
{
	typedef Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken inherited;
	
private:
	Dxspreadsheettypes::TdxSpreadSheetFormulaOperation FOperation;
	TdxSpreadSheetFormulaArrayToken* __fastcall CalculateAsArray(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaResult* &AResult, Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* ALeftToken, Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* ARightToken, const Dxspreadsheettypes::TdxSpreadSheetFormulaTokenDimension &ADimension);
	void __fastcall ExcludeResultValue(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaResult* AResult, int ANumAtLast);
	void __fastcall ExtractIterationOperands(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaResult* &AResult, const bool ACalculateAsArray, Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* ALeftToken, Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* ARightToken, const int ARowIndex, const int AColumnIndex, System::Variant &ALeft, System::Variant &ARight, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	System::Variant __fastcall GetElementaryResult(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaResult* AResult, const System::Variant &ALeftValue, const System::Variant &ARightValue, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	bool __fastcall IsMustBeLeftValue();
	void __fastcall ResetResultErrorCode(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaResult* &AResult, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	
protected:
	virtual void __fastcall Calculate(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaResult* AResult);
	void __fastcall CalculateReferences(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaResult* AResult);
	bool __fastcall ExtractReference(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaResult* AResult, System::TObject* &AView, System::Types::TRect &AArea);
	virtual int __fastcall GetTokenPriority();
	virtual void __fastcall ToString(System::Classes::TStringList* AStack);
	
public:
	__fastcall virtual TdxSpreadSheetFormulaOperationToken(Dxspreadsheettypes::TdxSpreadSheetFormulaOperation AOperation);
	bool __fastcall CheckNeighbors();
	__property Dxspreadsheettypes::TdxSpreadSheetFormulaOperation Operation = {read=FOperation, nodefault};
public:
	/* TdxSpreadSheetFormulaToken.Destroy */ inline __fastcall virtual ~TdxSpreadSheetFormulaOperationToken() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetFormulaErrorValueToken : public Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken
{
	typedef Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken inherited;
	
private:
	Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode FErrorCode;
	
protected:
	virtual void __fastcall Calculate(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaResult* AResult);
	virtual void __fastcall ToString(System::Classes::TStringList* AStack);
	
public:
	__fastcall virtual TdxSpreadSheetFormulaErrorValueToken(Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode AErrorCode);
	virtual void __fastcall GetValue(System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	__property Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode ErrorCode = {read=FErrorCode, nodefault};
public:
	/* TdxSpreadSheetFormulaToken.Destroy */ inline __fastcall virtual ~TdxSpreadSheetFormulaErrorValueToken() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetFormulaCustomDefinedNameToken : public TdxSpreadSheetFormulaStringValueToken
{
	typedef TdxSpreadSheetFormulaStringValueToken inherited;
	
protected:
	virtual bool __fastcall Cacheable();
	
public:
	virtual bool __fastcall CanConvertStrToNumber();
	virtual bool __fastcall SupportsIsect();
public:
	/* TdxSpreadSheetFormulaStringValueToken.Create */ inline __fastcall virtual TdxSpreadSheetFormulaCustomDefinedNameToken(const System::UnicodeString AValue) : TdxSpreadSheetFormulaStringValueToken(AValue) { }
	
public:
	/* TdxSpreadSheetFormulaToken.Destroy */ inline __fastcall virtual ~TdxSpreadSheetFormulaCustomDefinedNameToken() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetListToken : public Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken
{
	typedef Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken inherited;
	
protected:
	virtual void __fastcall ParametersToString(System::Sysutils::TStringBuilder* ABuffer);
	virtual void __fastcall ToString(System::Classes::TStringList* AStack);
	
public:
	virtual bool __fastcall IsEnumeration();
public:
	/* TdxSpreadSheetFormulaToken.Destroy */ inline __fastcall virtual ~TdxSpreadSheetListToken() { }
	
public:
	/* TObject.Create */ inline __fastcall TdxSpreadSheetListToken() : Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetFormulaArrayToken : public TdxSpreadSheetListToken
{
	typedef TdxSpreadSheetListToken inherited;
	
	
private:
	typedef System::DynamicArray<Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken*> _TdxSpreadSheetFormulaArrayToken__1;
	
	
private:
	_TdxSpreadSheetFormulaArrayToken__1 FIndex;
	System::Types::TSize FSize;
	
protected:
	virtual void __fastcall CalculateDimension(Dxspreadsheettypes::TdxSpreadSheetFormulaTokenDimension &ADimension, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	void __fastcall CalculateIndex();
	virtual bool __fastcall ForEach(Dxspreadsheetcoreformulas::TdxSpreadSheetForEachCallBack AProc, const void * AData, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	int __fastcall MakeIndex(int ARowIndex, int AColumnIndex);
	virtual void __fastcall ToString(System::Classes::TStringList* AStack);
	
public:
	virtual bool __fastcall CanConvertStrToNumber();
	virtual TdxSpreadSheetFormulaArrayToken* __fastcall ExtractColumnAsArray(const int AIndex, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	virtual Dxspreadsheettypes::TdxSpreadSheetVector* __fastcall ExtractColumn(const int AIndex, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	virtual Dxspreadsheettypes::TdxSpreadSheetVector* __fastcall ExtractRow(const int AIndex, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	virtual TdxSpreadSheetFormulaArrayToken* __fastcall ExtractRowAsArray(const int AIndex, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	System::Variant __fastcall GetArray(Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	virtual void __fastcall GetValue(System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	virtual void __fastcall GetValueAsArrayItem(const int ARow, const int AColumn, System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	__property System::Types::TSize Size = {read=FSize};
public:
	/* TdxSpreadSheetFormulaToken.Destroy */ inline __fastcall virtual ~TdxSpreadSheetFormulaArrayToken() { }
	
public:
	/* TObject.Create */ inline __fastcall TdxSpreadSheetFormulaArrayToken() : TdxSpreadSheetListToken() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetFormulaArrayRowSeparator : public Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken
{
	typedef Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken inherited;
	
public:
	/* TdxSpreadSheetFormulaToken.Destroy */ inline __fastcall virtual ~TdxSpreadSheetFormulaArrayRowSeparator() { }
	
public:
	/* TObject.Create */ inline __fastcall TdxSpreadSheetFormulaArrayRowSeparator() : Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxSpreadSheetFormulaReferenceToken : public Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken
{
	typedef Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken inherited;
	
private:
	bool __fastcall GetAbsoluteColumn();
	bool __fastcall GetAbsoluteRow();
	int __fastcall GetActualColumn();
	int __fastcall GetActualRow();
	int __fastcall GetAnchorColumn();
	int __fastcall GetAnchorRow();
	bool __fastcall GetIsError();
	bool __fastcall GetR1C1Reference();
	void __fastcall SetIsError(bool AValue);
	
protected:
	Dxspreadsheetcorereferences::TdxSpreadSheetReference FColumn;
	Dxspreadsheetcorereferences::TdxSpreadSheetReference FRow;
	virtual bool __fastcall ExtractReference(System::TObject* &AView, System::Types::TRect &AArea);
	virtual bool __fastcall ForEach(Dxspreadsheetcoreformulas::TdxSpreadSheetForEachCallBack AProc, const void * AData, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	bool __fastcall IsReferenceValid(const Dxspreadsheetcorereferences::TdxSpreadSheetReference &ARow, const Dxspreadsheetcorereferences::TdxSpreadSheetReference &AColumn);
	virtual bool __fastcall IsValid();
	virtual void __fastcall Offset(int DY, int DX);
	virtual System::UnicodeString __fastcall ReferenceToString();
	virtual void __fastcall ToString(System::Classes::TStringList* AStack);
	virtual bool __fastcall SupportsIsect();
	virtual void __fastcall UpdateReferences(System::TObject* AView, const System::Types::TRect &AArea, const System::Types::TPoint &ATargetOrigin, Dxspreadsheettypes::TdxSpreadSheetFormulaUpdateReferencesMode AMode, bool &AModified);
	virtual void __fastcall UpdateReferencesCore(System::TObject* AView, const System::Types::TRect &AArea, const System::Types::TPoint &ATargetOrigin, Dxspreadsheettypes::TdxSpreadSheetFormulaUpdateReferencesMode AMode, bool &AModified);
	__property bool R1C1Reference = {read=GetR1C1Reference, nodefault};
	
public:
	__fastcall TdxSpreadSheetFormulaReferenceToken(const Dxspreadsheetcorereferences::TdxSpreadSheetReference &ARow, const Dxspreadsheetcorereferences::TdxSpreadSheetReference &AColumn);
	virtual bool __fastcall CanConvertStrToNumber();
	virtual void __fastcall EnumReferences(Dxspreadsheetcoreformulas::_di_TdxSpreadSheetFormulaEnumReferenceTokensProc AProc, bool AProcessDefinedNames = false);
	Dxspreadsheettypes::TdxSpreadSheetVector* __fastcall ExtractVector(int ALength, bool AIsVertical);
	virtual void __fastcall GetValue(System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	__property bool AbsoluteColumn = {read=GetAbsoluteColumn, nodefault};
	__property bool AbsoluteRow = {read=GetAbsoluteRow, nodefault};
	__property int ActualColumn = {read=GetActualColumn, nodefault};
	__property int ActualRow = {read=GetActualRow, nodefault};
	__property int AnchorColumn = {read=GetAnchorColumn, nodefault};
	__property int AnchorRow = {read=GetAnchorRow, nodefault};
	__property bool IsError = {read=GetIsError, write=SetIsError, nodefault};
	__property Dxspreadsheetcorereferences::TdxSpreadSheetReference Column = {read=FColumn};
	__property Dxspreadsheetcorereferences::TdxSpreadSheetReference Row = {read=FRow};
public:
	/* TdxSpreadSheetFormulaToken.Destroy */ inline __fastcall virtual ~TdxSpreadSheetFormulaReferenceToken() { }
	
};


class PASCALIMPLEMENTATION TdxSpreadSheetFormulaAreaReferenceToken : public TdxSpreadSheetFormulaReferenceToken
{
	typedef TdxSpreadSheetFormulaReferenceToken inherited;
	
private:
	void __fastcall CalculateActualRowAndColumnIndexes(int &AActualRow, int &AActualRow2, int &AActualColumn, int &AActualColumn2);
	void __fastcall ExchangeReferences(Dxspreadsheetcorereferences::TdxSpreadSheetReference &ARef, Dxspreadsheetcorereferences::TdxSpreadSheetReference &ARef2);
	bool __fastcall GetAbsoluteColumn2();
	bool __fastcall GetAbsoluteRow2();
	int __fastcall GetActualColumn2();
	int __fastcall GetActualRow2();
	
protected:
	Dxspreadsheetcorereferences::TdxSpreadSheetReference FColumn2;
	Dxspreadsheetcorereferences::TdxSpreadSheetReference FRow2;
	virtual void __fastcall CalculateDimension(Dxspreadsheettypes::TdxSpreadSheetFormulaTokenDimension &ADimension, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	virtual bool __fastcall ExtractReference(System::TObject* &AView, System::Types::TRect &AArea);
	virtual bool __fastcall ForEach(Dxspreadsheetcoreformulas::TdxSpreadSheetForEachCallBack AProc, const void * AData, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	virtual bool __fastcall IsValid();
	virtual void __fastcall Offset(int DY, int DX);
	virtual System::UnicodeString __fastcall ReferenceToString();
	virtual void __fastcall UpdateReferencesCore(System::TObject* AView, const System::Types::TRect &AArea, const System::Types::TPoint &ATargetOrigin, Dxspreadsheettypes::TdxSpreadSheetFormulaUpdateReferencesMode AMode, bool &AModified);
	
public:
	__fastcall TdxSpreadSheetFormulaAreaReferenceToken(const Dxspreadsheetcorereferences::TdxSpreadSheetReference &ARow, const Dxspreadsheetcorereferences::TdxSpreadSheetReference &AColumn, const Dxspreadsheetcorereferences::TdxSpreadSheetReference &ARow2, const Dxspreadsheetcorereferences::TdxSpreadSheetReference &AColumn2);
	void __fastcall Check();
	virtual Dxspreadsheettypes::TdxSpreadSheetVector* __fastcall ExtractColumn(const int AIndex, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	virtual Dxspreadsheettypes::TdxSpreadSheetVector* __fastcall ExtractRow(const int AIndex, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	virtual bool __fastcall GetValueAsText(/* out */ System::UnicodeString &AText);
	virtual void __fastcall GetValueAsArrayItem(const int ARow, const int AColumn, System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	virtual void __fastcall GetValueRelatedWithCell(const System::Types::TPoint &ACell, System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	virtual bool __fastcall IsEnumeration();
	__property bool AbsoluteColumn2 = {read=GetAbsoluteColumn2, nodefault};
	__property bool AbsoluteRow2 = {read=GetAbsoluteRow2, nodefault};
	__property int ActualColumn2 = {read=GetActualColumn2, nodefault};
	__property int ActualRow2 = {read=GetActualRow2, nodefault};
public:
	/* TdxSpreadSheetFormulaToken.Destroy */ inline __fastcall virtual ~TdxSpreadSheetFormulaAreaReferenceToken() { }
	
};


class PASCALIMPLEMENTATION TdxSpreadSheetFormula3DReferenceToken : public TdxSpreadSheetFormulaReferenceToken
{
	typedef TdxSpreadSheetFormulaReferenceToken inherited;
	
private:
	Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink* FLink;
	
protected:
	virtual bool __fastcall ExtractReference(System::TObject* &AView, System::Types::TRect &AArea);
	virtual System::TObject* __fastcall GetView();
	virtual bool __fastcall IsValid();
	virtual System::UnicodeString __fastcall ReferenceToString();
	
public:
	__fastcall TdxSpreadSheetFormula3DReferenceToken(Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink* ALink, const Dxspreadsheetcorereferences::TdxSpreadSheetReference &ARow, const Dxspreadsheetcorereferences::TdxSpreadSheetReference &AColumn);
	__fastcall virtual ~TdxSpreadSheetFormula3DReferenceToken();
	virtual void __fastcall GetValue(System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	__property Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink* Link = {read=FLink};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheet3DReferenceLink : public Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink
{
	typedef Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink inherited;
	
public:
	virtual System::UnicodeString __fastcall ToString();
public:
	/* TdxSpreadSheet3DReferenceCustomLink.Create */ inline __fastcall TdxSpreadSheet3DReferenceLink(System::TObject* AData) : Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink(AData) { }
	/* TdxSpreadSheet3DReferenceCustomLink.Destroy */ inline __fastcall virtual ~TdxSpreadSheet3DReferenceLink() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheet3DReferenceAutoLink : public TdxSpreadSheet3DReferenceLink
{
	typedef TdxSpreadSheet3DReferenceLink inherited;
	
public:
	/* TdxSpreadSheet3DReferenceCustomLink.Create */ inline __fastcall TdxSpreadSheet3DReferenceAutoLink(System::TObject* AData) : TdxSpreadSheet3DReferenceLink(AData) { }
	/* TdxSpreadSheet3DReferenceCustomLink.Destroy */ inline __fastcall virtual ~TdxSpreadSheet3DReferenceAutoLink() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxSpreadSheetFormula3DAreaReferenceToken : public TdxSpreadSheetFormulaAreaReferenceToken
{
	typedef TdxSpreadSheetFormulaAreaReferenceToken inherited;
	
protected:
	Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink* FLink;
	Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink* FLink2;
	virtual bool __fastcall ExtractReference(System::TObject* &AView, System::Types::TRect &AArea);
	virtual System::TObject* __fastcall GetView();
	virtual bool __fastcall IsValid();
	virtual System::UnicodeString __fastcall ReferenceToString();
	
public:
	__fastcall TdxSpreadSheetFormula3DAreaReferenceToken(Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink* ALink, Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink* ALink2, const Dxspreadsheetcorereferences::TdxSpreadSheetReference &ARow, const Dxspreadsheetcorereferences::TdxSpreadSheetReference &AColumn, const Dxspreadsheetcorereferences::TdxSpreadSheetReference &ARow2, const Dxspreadsheetcorereferences::TdxSpreadSheetReference &AColumn2);
	__fastcall virtual ~TdxSpreadSheetFormula3DAreaReferenceToken();
	__property Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink* Link = {read=FLink};
	__property Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink* Link2 = {read=FLink2};
	__property AbsoluteColumn;
	__property AbsoluteColumn2;
	__property AbsoluteRow;
	__property AbsoluteRow2;
	__property ActualColumn;
	__property ActualColumn2;
	__property ActualRow;
	__property ActualRow2;
};


typedef System::DynamicArray<Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken*> TdxSpreadSheetFunctionFakeParams;

class PASCALIMPLEMENTATION TdxSpreadSheetFormulaFunctionToken : public TdxSpreadSheetListToken
{
	typedef TdxSpreadSheetListToken inherited;
	
private:
	Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode FCachedResultErrorCode;
	System::Variant FCachedResultValue;
	Cxclasses::TcxObjectList* FCalculatedDataList;
	System::Classes::TList* FChildrenOrder;
	TdxSpreadSheetFunctionFakeParams FFakeParams;
	Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* FFirstChildParent;
	Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* FFirstFakeToken;
	Dxspreadsheetfunctions::TdxSpreadSheetFunctionInfo* FInformation;
	bool FIsCachedResultPresent;
	bool FIsDirtyParamInfo;
	int FMaxParamCount;
	Dxspreadsheetcoreformulas::TdxSpreadSheetFunctionParamKindInfo FParamKind;
	void __fastcall CalculateAsArray(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaResult* AResult);
	void __fastcall ClearTemporaryData();
	Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* __fastcall CreateArrayCopy(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* const AArray);
	Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* __fastcall CreateErrorToken(const Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode AErrorCode);
	Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* __fastcall CreateFakeToken(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* AParam, const int AIndex, Dxspreadsheettypes::TdxSpreadSheetFormulaTokenDimension &ADimension, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	void __fastcall DestroyFakeTokensChildren(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaResult* &AResult);
	bool __fastcall HasArrayArgument();
	void __fastcall InitializeFakeParams();
	bool __fastcall IsArrayInsteadValue(const int AIndex, Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* AParam, System::TClass ACheckedClass);
	bool __fastcall IsExpectedValueParam(int AIndex);
	Cxclasses::TcxObjectList* __fastcall GetCalculatedDataList();
	Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* __fastcall GetFakeToken(int AIndex, Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* AParam, Dxspreadsheettypes::TdxSpreadSheetFormulaTokenDimension &ADimension, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	int __fastcall GetMaxParamCount();
	Dxspreadsheetcoreformulas::TdxSpreadSheetFunctionParamKindInfo __fastcall GetParamKind();
	void __fastcall PopulateFakeTokensByChildren(const int ARow, const int AColumn);
	void __fastcall RestoreChildrenOrder();
	void __fastcall SpecifyMaxParamCount();
	void __fastcall StoreChildrenOrder();
	
protected:
	virtual void __fastcall Calculate(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaResult* AResult);
	virtual void __fastcall CalculateDimension(Dxspreadsheettypes::TdxSpreadSheetFormulaTokenDimension &ADimension, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	virtual void __fastcall CleanFunctionTokenCachedResult();
	void __fastcall DoCacheResult(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaResult* AResult);
	void __fastcall DoInformationProc(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaResult* &AResult);
	virtual bool __fastcall ForEach(Dxspreadsheetcoreformulas::TdxSpreadSheetForEachCallBack AProc, const void * AData, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	bool __fastcall GetCachedValue(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaResult* &AResult);
	bool __fastcall NeedAddFeatureFunctionPrefixToFunctionName();
	virtual bool __fastcall NeedForceDimensionCalculating();
	virtual void __fastcall ToString(System::Classes::TStringList* AStack);
	__property Cxclasses::TcxObjectList* CalculatedDataList = {read=GetCalculatedDataList};
	
public:
	__fastcall virtual TdxSpreadSheetFormulaFunctionToken(Dxspreadsheetfunctions::TdxSpreadSheetFunctionInfo* AInformation);
	__fastcall virtual ~TdxSpreadSheetFormulaFunctionToken();
	void __fastcall InitializeParamInfo();
	virtual bool __fastcall IsEnumeration();
	__property Dxspreadsheetfunctions::TdxSpreadSheetFunctionInfo* Information = {read=FInformation};
	__property int MaxParamCount = {read=GetMaxParamCount, nodefault};
	__property Dxspreadsheetcoreformulas::TdxSpreadSheetFunctionParamKindInfo ParamKind = {read=GetParamKind};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetFormulaParenthesesToken : public Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken
{
	typedef Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken inherited;
	
protected:
	virtual void __fastcall Calculate(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaResult* AResult);
	virtual void __fastcall ToString(System::Classes::TStringList* AStack);
public:
	/* TdxSpreadSheetFormulaToken.Destroy */ inline __fastcall virtual ~TdxSpreadSheetFormulaParenthesesToken() { }
	
public:
	/* TObject.Create */ inline __fastcall TdxSpreadSheetFormulaParenthesesToken() : Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetFormulaUnknownToken : public TdxSpreadSheetListToken
{
	typedef TdxSpreadSheetListToken inherited;
	
private:
	Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink* FLink;
	System::UnicodeString FName;
	HIDESBASE void __fastcall SetLink(Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink* const Value);
	
protected:
	virtual void __fastcall Calculate(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaResult* AResult);
	System::UnicodeString __fastcall LinkAsString();
	virtual void __fastcall ToString(System::Classes::TStringList* AStack);
	
public:
	__fastcall virtual TdxSpreadSheetFormulaUnknownToken(const System::UnicodeString AName, Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink* ALink);
	__fastcall virtual ~TdxSpreadSheetFormulaUnknownToken();
	virtual bool __fastcall IsEnumeration();
	__property Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink* Link = {read=FLink, write=SetLink};
	__property System::UnicodeString Name = {read=FName};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetFormulaUnknownFunctionToken : public TdxSpreadSheetFormulaUnknownToken
{
	typedef TdxSpreadSheetFormulaUnknownToken inherited;
	
protected:
	virtual void __fastcall ToString(System::Classes::TStringList* AStack);
public:
	/* TdxSpreadSheetFormulaUnknownToken.Create */ inline __fastcall virtual TdxSpreadSheetFormulaUnknownFunctionToken(const System::UnicodeString AName, Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink* ALink) : TdxSpreadSheetFormulaUnknownToken(AName, ALink) { }
	/* TdxSpreadSheetFormulaUnknownToken.Destroy */ inline __fastcall virtual ~TdxSpreadSheetFormulaUnknownFunctionToken() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetFormulaUnknownNameToken : public TdxSpreadSheetFormulaUnknownToken
{
	typedef TdxSpreadSheetFormulaUnknownToken inherited;
	
public:
	/* TdxSpreadSheetFormulaUnknownToken.Create */ inline __fastcall virtual TdxSpreadSheetFormulaUnknownNameToken(const System::UnicodeString AName, Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink* ALink) : TdxSpreadSheetFormulaUnknownToken(AName, ALink) { }
	/* TdxSpreadSheetFormulaUnknownToken.Destroy */ inline __fastcall virtual ~TdxSpreadSheetFormulaUnknownNameToken() { }
	
};

#pragma pack(pop)

typedef TdxSpreadSheetFormula3DAreaReferenceToken TdxSpreadSheetFormula3DAreaReference;

typedef TdxSpreadSheetFormula3DReferenceToken TdxSpreadSheetFormula3DReference;

typedef TdxSpreadSheetFormulaAreaReferenceToken TdxSpreadSheetFormulaAreaReference;

typedef TdxSpreadSheetFormulaReferenceToken TdxSpreadSheetFormulaReference;

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall dxSpreadSheetAddReferenceToken(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaResult* AResult, System::TObject* AView, const System::Types::TRect &R);
extern DELPHI_PACKAGE Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* __fastcall dxSpreadSheetCreateResultToken(const System::Variant &AResultValue, const Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode AErrorCode);
}	/* namespace Dxspreadsheetcoreformulastokens */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXSPREADSHEETCOREFORMULASTOKENS)
using namespace Dxspreadsheetcoreformulastokens;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxspreadsheetcoreformulastokensHPP
