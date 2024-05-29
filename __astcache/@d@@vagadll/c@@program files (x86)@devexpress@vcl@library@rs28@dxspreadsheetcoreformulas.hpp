// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxSpreadSheetCoreFormulas.pas' rev: 35.00 (Windows)

#ifndef DxspreadsheetcoreformulasHPP
#define DxspreadsheetcoreformulasHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <System.Math.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Variants.hpp>
#include <System.StrUtils.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Generics.Defaults.hpp>
#include <cxClasses.hpp>
#include <cxDateUtils.hpp>
#include <cxFormats.hpp>
#include <cxGeometry.hpp>
#include <cxVariants.hpp>
#include <dxCore.hpp>
#include <dxCoreClasses.hpp>
#include <dxSpreadSheetTypes.hpp>
#include <dxSpreadSheetClasses.hpp>
#include <dxSpreadSheetCoreReferences.hpp>
#include <dxSpreadSheetCoreStyles.hpp>
#include <dxSpreadSheetUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxspreadsheetcoreformulas
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE TdxSpreadSheetFormulaEnumReferencesProc;
typedef System::DelphiInterface<TdxSpreadSheetFormulaEnumReferencesProc> _di_TdxSpreadSheetFormulaEnumReferencesProc;
__interface DELPHIINTERFACE TdxSpreadSheetFormulaEnumReferenceTokensProc;
typedef System::DelphiInterface<TdxSpreadSheetFormulaEnumReferenceTokensProc> _di_TdxSpreadSheetFormulaEnumReferenceTokensProc;
class DELPHICLASS EdxSpreadSheetCircularReferencesError;
class DELPHICLASS EdxSpreadSheetFormulaIsTooLongError;
class DELPHICLASS TdxSpreadSheetCustomFormulaList;
__interface DELPHIINTERFACE TdxSpreadSheetEnumFormulasFunc;
typedef System::DelphiInterface<TdxSpreadSheetEnumFormulasFunc> _di_TdxSpreadSheetEnumFormulasFunc;
class DELPHICLASS TdxSpreadSheetCustomFormulaController;
class DELPHICLASS TdxSpreadSheetCustomFormula;
class DELPHICLASS TdxSpreadSheetFormulaToken;
class DELPHICLASS TdxSpreadSheetReferenceVector;
class DELPHICLASS TdxSpreadSheet3DReferenceCustomLink;
class DELPHICLASS TdxSpreadSheet3DReferenceCustomExternalLink;
class DELPHICLASS TdxSpreadSheetFormulaResult;
//-- type declarations -------------------------------------------------------
typedef TdxSpreadSheetCustomFormula* *PdxSpreadSheetCustomFormula;

typedef System::TMetaClass* TdxSpreadSheetFormulaTokenClass;

enum DECLSPEC_DENUM TdxSpreadSheetFunctionResultKind : unsigned char { frkValue, frkArray, frkNonArrayValue, frkParamValue };

enum DECLSPEC_DENUM TdxSpreadSheetFunctionParamKind : unsigned char { fpkValue, fpkArray, fpkUnlimited, fpkNonRequiredValue, fpkNonRequiredArray, fpkNonRequiredUnlimited };

typedef System::DynamicArray<TdxSpreadSheetFunctionParamKind> TdxSpreadSheetFunctionParamKindInfo;

typedef bool __fastcall (*TdxSpreadSheetForEachCallBack)(const System::Variant &AValue, bool ACanConvertStrToNumber, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode, void * AData, void * AInfo);

__interface TdxSpreadSheetFormulaEnumReferencesProc  : public System::IInterface 
{
	virtual void __fastcall Invoke(const System::Types::TRect &AArea, System::TObject* AView) = 0 ;
};

__interface TdxSpreadSheetFormulaEnumReferenceTokensProc  : public System::IInterface 
{
	virtual void __fastcall Invoke(const System::Types::TRect &AArea, System::TObject* AView, TdxSpreadSheetFormulaToken* AToken) = 0 ;
};

enum DECLSPEC_DENUM TdxSpreadSheetArrayFormulaPart : unsigned char { afpNone, afpMasterCell, afpSlaveCell };

#pragma pack(push,4)
class PASCALIMPLEMENTATION EdxSpreadSheetCircularReferencesError : public Dxspreadsheetclasses::EdxSpreadSheetError
{
	typedef Dxspreadsheetclasses::EdxSpreadSheetError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EdxSpreadSheetCircularReferencesError(const System::UnicodeString Msg) : Dxspreadsheetclasses::EdxSpreadSheetError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EdxSpreadSheetCircularReferencesError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Dxspreadsheetclasses::EdxSpreadSheetError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EdxSpreadSheetCircularReferencesError(NativeUInt Ident)/* overload */ : Dxspreadsheetclasses::EdxSpreadSheetError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EdxSpreadSheetCircularReferencesError(System::PResStringRec ResStringRec)/* overload */ : Dxspreadsheetclasses::EdxSpreadSheetError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EdxSpreadSheetCircularReferencesError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Dxspreadsheetclasses::EdxSpreadSheetError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EdxSpreadSheetCircularReferencesError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Dxspreadsheetclasses::EdxSpreadSheetError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EdxSpreadSheetCircularReferencesError(const System::UnicodeString Msg, int AHelpContext) : Dxspreadsheetclasses::EdxSpreadSheetError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EdxSpreadSheetCircularReferencesError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Dxspreadsheetclasses::EdxSpreadSheetError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EdxSpreadSheetCircularReferencesError(NativeUInt Ident, int AHelpContext)/* overload */ : Dxspreadsheetclasses::EdxSpreadSheetError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EdxSpreadSheetCircularReferencesError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Dxspreadsheetclasses::EdxSpreadSheetError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EdxSpreadSheetCircularReferencesError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Dxspreadsheetclasses::EdxSpreadSheetError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EdxSpreadSheetCircularReferencesError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Dxspreadsheetclasses::EdxSpreadSheetError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EdxSpreadSheetCircularReferencesError() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EdxSpreadSheetFormulaIsTooLongError : public Dxspreadsheetclasses::EdxSpreadSheetError
{
	typedef Dxspreadsheetclasses::EdxSpreadSheetError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EdxSpreadSheetFormulaIsTooLongError(const System::UnicodeString Msg) : Dxspreadsheetclasses::EdxSpreadSheetError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EdxSpreadSheetFormulaIsTooLongError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Dxspreadsheetclasses::EdxSpreadSheetError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EdxSpreadSheetFormulaIsTooLongError(NativeUInt Ident)/* overload */ : Dxspreadsheetclasses::EdxSpreadSheetError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EdxSpreadSheetFormulaIsTooLongError(System::PResStringRec ResStringRec)/* overload */ : Dxspreadsheetclasses::EdxSpreadSheetError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EdxSpreadSheetFormulaIsTooLongError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Dxspreadsheetclasses::EdxSpreadSheetError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EdxSpreadSheetFormulaIsTooLongError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Dxspreadsheetclasses::EdxSpreadSheetError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EdxSpreadSheetFormulaIsTooLongError(const System::UnicodeString Msg, int AHelpContext) : Dxspreadsheetclasses::EdxSpreadSheetError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EdxSpreadSheetFormulaIsTooLongError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Dxspreadsheetclasses::EdxSpreadSheetError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EdxSpreadSheetFormulaIsTooLongError(NativeUInt Ident, int AHelpContext)/* overload */ : Dxspreadsheetclasses::EdxSpreadSheetError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EdxSpreadSheetFormulaIsTooLongError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Dxspreadsheetclasses::EdxSpreadSheetError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EdxSpreadSheetFormulaIsTooLongError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Dxspreadsheetclasses::EdxSpreadSheetError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EdxSpreadSheetFormulaIsTooLongError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Dxspreadsheetclasses::EdxSpreadSheetError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EdxSpreadSheetFormulaIsTooLongError() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetCustomFormulaList : public Dxcoreclasses::TdxFastList
{
	typedef Dxcoreclasses::TdxFastList inherited;
	
public:
	TdxSpreadSheetCustomFormula* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TdxSpreadSheetCustomFormula* __fastcall GetItem(int Index);
	
public:
	__property TdxSpreadSheetCustomFormula* Items[int Index] = {read=GetItem/*, default*/};
public:
	/* TdxFastList.Create */ inline __fastcall TdxSpreadSheetCustomFormulaList(int ACapacity) : Dxcoreclasses::TdxFastList(ACapacity) { }
	/* TdxFastList.Destroy */ inline __fastcall virtual ~TdxSpreadSheetCustomFormulaList() { }
	
};

#pragma pack(pop)

__interface TdxSpreadSheetEnumFormulasFunc  : public System::IInterface 
{
	virtual bool __fastcall Invoke(TdxSpreadSheetCustomFormula* AFormula) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetCustomFormulaController : public Cxclasses::TcxObjectList
{
	typedef Cxclasses::TcxObjectList inherited;
	
public:
	TdxSpreadSheetCustomFormula* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Generics::Collections::TDictionary__2<System::TObject*,TdxSpreadSheetCustomFormulaList*>* FArrayFormulas;
	bool FCalculationInProcess;
	Dxspreadsheetcorereferences::TdxSpreadSheetReferencePath* FCircularPath;
	bool FCircularReference;
	Cxclasses::TcxObjectList* FCircularReferencePaths;
	bool FHasCircularReferences;
	bool FUpdatingSlaveCells;
	System::UnicodeString __fastcall GetCircularReferencePathsAsString();
	HIDESBASE TdxSpreadSheetCustomFormula* __fastcall GetItem(int AIndex);
	
protected:
	int FMaxIterationCount;
	void __fastcall AddPath(int ARow, int AColumn, System::TObject* AView);
	void __fastcall RemovePath(int ARow, int AColumn, System::TObject* AView);
	void __fastcall CheckCircularReferences();
	System::UnicodeString __fastcall CircularPathToString(Dxspreadsheetcorereferences::TdxSpreadSheetReferencePath* APath);
	void __fastcall CleanFunctionTokenCachedResults();
	virtual void __fastcall ClearFormulasResults();
	virtual System::TObject* __fastcall CreateParser() = 0 ;
	virtual Dxspreadsheetclasses::TdxSpreadSheetFormatSettings* __fastcall GetFormatSettings() = 0 ;
	virtual bool __fastcall NeedAddFeatureFunctionPrefixToFunctionName();
	virtual void __fastcall InitializeStrings();
	Dxspreadsheettypes::TdxSpreadSheetVector* __fastcall ExtractVector(System::TObject* AView, int ARow, int AColumn, int ALength, bool AIsVertical, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	void __fastcall GetCellValue(const Dxspreadsheettypes::_di_IdxSpreadSheetViewData AViewData, int ARow, int AColumn, /* out */ System::Variant &AValue, /* out */ Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	void __fastcall GetCellValueCore(const Dxspreadsheettypes::_di_IdxSpreadSheetViewData AViewData, int ARow, int AColumn, /* out */ System::Variant &AValue, /* out */ Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	System::Variant __fastcall GetArrayFormulaSlaveCellValue(Dxspreadsheettypes::_di_IdxSpreadSheetViewData AViewData, TdxSpreadSheetCustomFormula* AArrayFormula, const int ARow, const int AColumn, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	TdxSpreadSheetArrayFormulaPart __fastcall IsPartOfArrayFormula(System::TObject* AView, const int ARow, const int AColumn, System::Types::TRect &AFormulaArea, PdxSpreadSheetCustomFormula AFormula = (PdxSpreadSheetCustomFormula)(0x0));
	void __fastcall UpdateSlaveCells(System::TObject* AView, TdxSpreadSheetCustomFormula* AFormula);
	void __fastcall TranslationChanged();
	void __fastcall FormatChanged();
	int __stdcall _AddRef();
	int __stdcall _Release();
	virtual HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	__property Dxspreadsheetcorereferences::TdxSpreadSheetReferencePath* CircularPath = {read=FCircularPath};
	__property bool CircularReference = {read=FCircularReference, write=FCircularReference, nodefault};
	__property bool HasCircularReferences = {read=FHasCircularReferences, write=FHasCircularReferences, nodefault};
	__property int MaxIterationCount = {read=FMaxIterationCount, nodefault};
	__property bool UpdatingSlaveCells = {read=FUpdatingSlaveCells, nodefault};
	__property System::Generics::Collections::TDictionary__2<System::TObject*,TdxSpreadSheetCustomFormulaList*>* ArrayFormulas = {read=FArrayFormulas};
	
public:
	__fastcall TdxSpreadSheetCustomFormulaController();
	__fastcall virtual ~TdxSpreadSheetCustomFormulaController();
	void __fastcall AddArrayFormula(TdxSpreadSheetCustomFormula* AFormula);
	virtual void __fastcall AfterConstruction();
	virtual void __fastcall BeforeDestruction();
	virtual void __fastcall Calculate();
	void __fastcall EnumArrayFormulas(System::TObject* AView, _di_TdxSpreadSheetEnumFormulasFunc AProc);
	HIDESBASE void __fastcall Remove(TdxSpreadSheetCustomFormula* AFormula);
	void __fastcall UpdateAnchorsAndBounds();
	__property bool CalculationInProcess = {read=FCalculationInProcess, nodefault};
	__property Cxclasses::TcxObjectList* CircularReferencePaths = {read=FCircularReferencePaths};
	__property System::UnicodeString CircularReferencePathsAsString = {read=GetCircularReferencePathsAsString};
	__property Dxspreadsheetclasses::TdxSpreadSheetFormatSettings* FormatSettings = {read=GetFormatSettings};
	__property TdxSpreadSheetCustomFormula* Items[int Index] = {read=GetItem/*, default*/};
private:
	void *__IdxLocalizerListener;	// Dxcore::IdxLocalizerListener 
	void *__IcxFormatControllerListener;	// Cxformats::IcxFormatControllerListener 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000000-0000-0000-C000-000000000046}
	operator System::_di_IInterface()
	{
		System::_di_IInterface intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator System::IInterface*(void) { return (System::IInterface*)&__IdxLocalizerListener; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {84134885-1A56-4599-9DC2-BFC70E182032}
	operator Dxcore::_di_IdxLocalizerListener()
	{
		Dxcore::_di_IdxLocalizerListener intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxcore::IdxLocalizerListener*(void) { return (Dxcore::IdxLocalizerListener*)&__IdxLocalizerListener; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {A7F2F6D3-1A7D-4295-A6E6-9297BD83D0DE}
	operator Cxformats::_di_IcxFormatControllerListener()
	{
		Cxformats::_di_IcxFormatControllerListener intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxformats::IcxFormatControllerListener*(void) { return (Cxformats::IcxFormatControllerListener*)&__IcxFormatControllerListener; }
	#endif
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxSpreadSheetCustomFormula : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Variant FCachedResultValue;
	bool FCachedResultValueIsValid;
	TdxSpreadSheetFormulaResult* FCalculatingSubResult;
	Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode FErrorCode;
	int FErrorIndex;
	bool FIsArrayFormula;
	int FIteration;
	bool FNeedCalculateParamsAsArray;
	System::UnicodeString FSourceText;
	bool __fastcall BeginIteration(/* out */ int &AState);
	bool __fastcall EndIteration(const int AState);
	Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode __fastcall GetActualErrorCode();
	TdxSpreadSheetFormulaResult* __fastcall GetActualResult();
	System::Variant __fastcall GetActualValue();
	System::Types::TPoint __fastcall GetAnchor();
	System::UnicodeString __fastcall GetAsText();
	Dxspreadsheetclasses::TdxSpreadSheetFormatSettings* __fastcall GetFormatSettings();
	void __fastcall SetIsArrayFormula(bool AValue);
	
protected:
	int FAnchorColumn;
	int FAnchorRow;
	System::Types::TRect FArrayFormulaArea;
	System::Types::TSize FArrayFormulaSize;
	TdxSpreadSheetFormulaResult* FResultValue;
	TdxSpreadSheetFormulaToken* FTokens;
	void __fastcall CacheResultValue(TdxSpreadSheetFormulaResult* const AValue)/* overload */;
	void __fastcall CacheResultValue(const System::Variant &AValue)/* overload */;
	void __fastcall CleanFunctionTokenCachedResults()/* overload */;
	void __fastcall CleanFunctionTokenCachedResults(TdxSpreadSheetFormulaToken* AExpression)/* overload */;
	virtual void __fastcall ClearResult();
	void __fastcall DestroyTokens();
	void __fastcall ForceRefresh();
	TdxSpreadSheetFormulaResult* __fastcall Calculate(TdxSpreadSheetFormulaToken* AExpression);
	TdxSpreadSheetFormulaResult* __fastcall CalculateAsArrayParam(TdxSpreadSheetFormulaToken* AExpression);
	virtual void __fastcall CalculateResultValue();
	virtual TdxSpreadSheetFormulaResult* __fastcall GetResultValue();
	virtual System::Variant __fastcall GetValue();
	bool __fastcall IsCalculationInProcess();
	virtual bool __fastcall IsLinkedToCell();
	void __fastcall Offset(int DY, int DX);
	virtual void __fastcall CalculateAnchors();
	virtual TdxSpreadSheetCustomFormulaController* __fastcall GetController();
	virtual System::UnicodeString __fastcall GetValueAsText();
	virtual System::TObject* __fastcall GetView();
	void __fastcall SetArrayFormulaSize(const System::Types::TSize &ASize);
	void __fastcall SetError(Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode AErrorCode, int AErrorIndex);
	virtual bool __fastcall UpdateReferences(System::TObject* AView, const System::Types::TRect &AArea, const System::Types::TPoint &ATargetOrigin, Dxspreadsheettypes::TdxSpreadSheetFormulaUpdateReferencesMode AMode);
	void __fastcall UpdateSlaveCells();
	__property TdxSpreadSheetFormulaResult* ActualResult = {read=GetActualResult};
	__property System::Variant CachedResultValue = {read=FCachedResultValue};
	__property bool CachedResultValueIsValid = {read=FCachedResultValueIsValid, nodefault};
	__property bool NeedCalculateParamsAsArray = {read=FNeedCalculateParamsAsArray, nodefault};
	__property System::UnicodeString ValueAsText = {read=GetValueAsText};
	
public:
	__fastcall virtual ~TdxSpreadSheetCustomFormula();
	virtual void __fastcall AfterConstruction();
	virtual void __fastcall BeforeDestruction();
	void __fastcall EnumReferences(_di_TdxSpreadSheetFormulaEnumReferencesProc AProc, bool AProcessDefinedNames = false)/* overload */;
	void __fastcall EnumReferences(_di_TdxSpreadSheetFormulaEnumReferenceTokensProc AProc, bool AProcessDefinedNames = false)/* overload */;
	void __fastcall Validate();
	__property Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode ActualErrorCode = {read=GetActualErrorCode, nodefault};
	__property System::Variant ActualValue = {read=GetActualValue};
	__property System::Types::TPoint Anchor = {read=GetAnchor};
	__property int AnchorColumn = {read=FAnchorColumn, nodefault};
	__property int AnchorRow = {read=FAnchorRow, nodefault};
	__property System::UnicodeString AsText = {read=GetAsText};
	__property Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode ErrorCode = {read=FErrorCode, nodefault};
	__property int ErrorIndex = {read=FErrorIndex, nodefault};
	__property int Iteration = {read=FIteration, nodefault};
	__property TdxSpreadSheetFormulaResult* ResultValue = {read=GetResultValue};
	__property System::UnicodeString SourceText = {read=FSourceText, write=FSourceText};
	__property TdxSpreadSheetFormulaToken* Tokens = {read=FTokens};
	__property System::Variant Value = {read=GetValue};
	__property System::Types::TRect ArrayFormulaArea = {read=FArrayFormulaArea};
	__property System::Types::TSize ArrayFormulaSize = {read=FArrayFormulaSize};
	__property bool IsArrayFormula = {read=FIsArrayFormula, write=SetIsArrayFormula, nodefault};
	__property TdxSpreadSheetCustomFormulaController* Controller = {read=GetController};
	__property Dxspreadsheetclasses::TdxSpreadSheetFormatSettings* FormatSettings = {read=GetFormatSettings};
	__property System::TObject* View = {read=GetView};
public:
	/* TObject.Create */ inline __fastcall TdxSpreadSheetCustomFormula() : System::TObject() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetFormulaToken : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TdxSpreadSheetFormulaToken* operator[](int Index) { return this->Items[Index]; }
	
private:
	TdxSpreadSheetFormulaToken* FChildFirst;
	TdxSpreadSheetFormulaToken* FChildLast;
	TdxSpreadSheetFormulaToken* FNext;
	TdxSpreadSheetFormulaToken* FParent;
	TdxSpreadSheetFormulaToken* FPrev;
	System::Word FSourceFinish;
	System::Word FSourceStart;
	bool FIsDestroyingByParent;
	bool FIsDimensionCalculated;
	bool FIsDirty;
	bool __fastcall CheckCircularReference();
	int __fastcall GetChildCount();
	TdxSpreadSheetCustomFormulaController* __fastcall GetController();
	int __fastcall GetCount(TdxSpreadSheetFormulaToken* AToken);
	TdxSpreadSheetFormulaToken* __fastcall GetFirstSibling();
	Dxspreadsheetclasses::TdxSpreadSheetFormatSettings* __fastcall GetFormatSettings();
	bool __fastcall GetHasChildren();
	TdxSpreadSheetFormulaToken* __fastcall GetItem(int AIndex);
	TdxSpreadSheetFormulaToken* __fastcall GetLastSibling();
	int __fastcall GetSiblingCount();
	void __fastcall SetOwner(TdxSpreadSheetCustomFormula* const Value);
	
protected:
	Dxspreadsheettypes::TdxSpreadSheetFormulaTokenDimension FDimension;
	TdxSpreadSheetCustomFormula* FOwner;
	void __fastcall AddResult(TdxSpreadSheetFormulaToken* AToken);
	HIDESBASE virtual void __fastcall ToString(System::Classes::TStringList* AStack);
	virtual void __fastcall Calculate(TdxSpreadSheetFormulaResult* AResult);
	virtual void __fastcall CalculateDimension(Dxspreadsheettypes::TdxSpreadSheetFormulaTokenDimension &ADimension, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	virtual bool __fastcall Cacheable();
	virtual void __fastcall CleanFunctionTokenCachedResult();
	void __fastcall ClearIsDimensionCalculated();
	virtual Dxspreadsheettypes::TdxSpreadSheetVector* __fastcall ExtractColumn(const int AIndex, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	virtual Dxspreadsheettypes::TdxSpreadSheetVector* __fastcall ExtractRow(const int AIndex, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	virtual Dxspreadsheettypes::TdxSpreadSheetVector* __fastcall ExtractValueAsVector(Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	virtual bool __fastcall ForEach(TdxSpreadSheetForEachCallBack AProc, const void * AData, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	bool __fastcall ForEachCell(System::TObject* AView, int AStartColumn, int AStartRow, int AFinishColumn, int AFinishRow, TdxSpreadSheetForEachCallBack AProc, const void * AData, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	virtual int __fastcall GetTokenPriority();
	virtual System::TObject* __fastcall GetView();
	virtual bool __fastcall NeedForceDimensionCalculating();
	virtual void __fastcall Offset(int DY, int DX);
	void __fastcall SetNext(TdxSpreadSheetFormulaToken* ANextToken);
	virtual bool __fastcall SupportsIsect();
	virtual void __fastcall UpdateReferences(System::TObject* AView, const System::Types::TRect &AArea, const System::Types::TPoint &ATargetOrigin, Dxspreadsheettypes::TdxSpreadSheetFormulaUpdateReferencesMode AMode, bool &AModified);
	void __fastcall SetLink(void *AField, TdxSpreadSheet3DReferenceCustomLink* ALink);
	__property TdxSpreadSheetCustomFormulaController* Controller = {read=GetController};
	__property bool IsDirty = {read=FIsDirty, write=FIsDirty, nodefault};
	
public:
	__fastcall virtual ~TdxSpreadSheetFormulaToken();
	virtual bool __fastcall CanConvertStrToNumber();
	virtual void __fastcall EnumReferences(_di_TdxSpreadSheetFormulaEnumReferenceTokensProc AProc, bool AProcessDefinedNames = false);
	TdxSpreadSheetFormulaToken* __fastcall ExtractFromList();
	Dxspreadsheettypes::TdxSpreadSheetFormulaTokenDimension __fastcall GetDimension(Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	virtual bool __fastcall IsEnumeration();
	virtual void __fastcall GetCellValue(System::TObject* AView, const int ARow, const int AColumn, System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	void __fastcall GetCellValueAsOrdinal(System::TObject* AView, const int ARow, const int AColumn, System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	virtual void __fastcall GetValueAsArrayItem(const int ARow, const int AColumn, System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	virtual void __fastcall GetValue(System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	virtual bool __fastcall GetValueAsText(/* out */ System::UnicodeString &AText);
	System::Variant __fastcall GetValueFromArray(int ARowIndex, int AColumnIndex, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	virtual void __fastcall GetValueRelatedWithCell(const System::Types::TPoint &ACell, System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	__classmethod TdxSpreadSheetFormulaToken* __fastcall Add(TdxSpreadSheetFormulaToken* APrev, TdxSpreadSheetFormulaToken* AToken);
	__classmethod void __fastcall AddChild(TdxSpreadSheetFormulaToken* AParent, TdxSpreadSheetFormulaToken* AToken);
	__classmethod TdxSpreadSheetFormulaToken* __fastcall Append(TdxSpreadSheetFormulaToken* APrev, TdxSpreadSheetFormulaToken* AToken);
	__classmethod void __fastcall DestroyTokens(TdxSpreadSheetFormulaToken* &ATokens);
	__classmethod TdxSpreadSheetFormulaToken* __fastcall FindToken(int ASourcePosition, TdxSpreadSheetFormulaToken* ATokens);
	__classmethod void __fastcall Remove(TdxSpreadSheetFormulaToken* &AList, TdxSpreadSheetFormulaToken* AToken);
	__classmethod void __fastcall Replace(TdxSpreadSheetFormulaToken* &ASource, TdxSpreadSheetFormulaToken* const ADest)/* overload */;
	__classmethod void __fastcall Replace(TdxSpreadSheetFormulaToken* &AList, TdxSpreadSheetFormulaToken* &ASource, TdxSpreadSheetFormulaToken* const ADest)/* overload */;
	__property TdxSpreadSheetFormulaToken* Child = {read=FChildFirst};
	__property int ChildCount = {read=GetChildCount, nodefault};
	__property Dxspreadsheettypes::TdxSpreadSheetFormulaTokenDimension Dimension = {read=FDimension};
	__property TdxSpreadSheetFormulaToken* FirstChild = {read=FChildFirst};
	__property TdxSpreadSheetFormulaToken* FirstSibling = {read=GetFirstSibling};
	__property Dxspreadsheetclasses::TdxSpreadSheetFormatSettings* FormatSettings = {read=GetFormatSettings};
	__property bool HasChildren = {read=GetHasChildren, nodefault};
	__property TdxSpreadSheetFormulaToken* Items[int Index] = {read=GetItem/*, default*/};
	__property TdxSpreadSheetFormulaToken* LastChild = {read=FChildLast};
	__property TdxSpreadSheetFormulaToken* LastSibling = {read=GetLastSibling};
	__property TdxSpreadSheetFormulaToken* Next = {read=FNext};
	__property TdxSpreadSheetCustomFormula* Owner = {read=FOwner, write=SetOwner};
	__property TdxSpreadSheetFormulaToken* Parent = {read=FParent};
	__property TdxSpreadSheetFormulaToken* Prev = {read=FPrev};
	__property int Priority = {read=GetTokenPriority, nodefault};
	__property int SiblingCount = {read=GetSiblingCount, nodefault};
	__property System::TObject* View = {read=GetView};
	__property System::Word SourceFinish = {read=FSourceFinish, write=FSourceFinish, nodefault};
	__property System::Word SourceStart = {read=FSourceStart, write=FSourceStart, nodefault};
public:
	/* TObject.Create */ inline __fastcall TdxSpreadSheetFormulaToken() : System::TObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetReferenceVector : public Dxspreadsheettypes::TdxSpreadSheetVector
{
	typedef Dxspreadsheettypes::TdxSpreadSheetVector inherited;
	
private:
	TdxSpreadSheetCustomFormulaController* FFormulaController;
	bool FIsRow;
	int FLength;
	int FTableItemIndex;
	Dxspreadsheettypes::_di_IdxSpreadSheetViewData FViewData;
	
protected:
	virtual Dxspreadsheettypes::TdxSpreadSheetVectorValue __fastcall GetItem(int Index);
	virtual int __fastcall GetLength();
	
public:
	__fastcall virtual TdxSpreadSheetReferenceVector(System::TObject* AView, TdxSpreadSheetCustomFormulaController* AFormulaController, bool AIsRow, int ATableItemIndex, int AAnchorItemsIndex, int ALength);
	virtual int __fastcall GetNextItemIndex(int AIndex, bool AForward);
	__property bool IsRow = {read=FIsRow, nodefault};
	__property TdxSpreadSheetCustomFormulaController* FormulaController = {read=FFormulaController};
	__property int TableItemIndex = {read=FTableItemIndex, nodefault};
	__property Dxspreadsheettypes::_di_IdxSpreadSheetViewData ViewData = {read=FViewData};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSpreadSheetReferenceVector() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TdxSpreadSheet3DReferenceCustomLinkClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheet3DReferenceCustomLink : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Dxspreadsheetclasses::_di_IdxSpreadSheetObjectLink FLink;
	System::TObject* __fastcall GetActualData();
	System::TObject* __fastcall GetData();
	void __fastcall SetData(System::TObject* AValue);
	
protected:
	TdxSpreadSheetFormulaToken* FOwner;
	
public:
	__fastcall TdxSpreadSheet3DReferenceCustomLink(System::TObject* AData);
	__fastcall virtual ~TdxSpreadSheet3DReferenceCustomLink();
	virtual TdxSpreadSheet3DReferenceCustomLink* __fastcall Clone();
	__property System::TObject* ActualData = {read=GetActualData};
	__property System::TObject* Data = {read=GetData, write=SetData};
	__property TdxSpreadSheetFormulaToken* Owner = {read=FOwner};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheet3DReferenceCustomExternalLink : public TdxSpreadSheet3DReferenceCustomLink
{
	typedef TdxSpreadSheet3DReferenceCustomLink inherited;
	
private:
	System::UnicodeString FName;
	
public:
	__fastcall TdxSpreadSheet3DReferenceCustomExternalLink(System::TObject* AData, const System::UnicodeString AName)/* overload */;
	virtual TdxSpreadSheet3DReferenceCustomLink* __fastcall Clone();
	__property System::UnicodeString Name = {read=FName, write=FName};
public:
	/* TdxSpreadSheet3DReferenceCustomLink.Destroy */ inline __fastcall virtual ~TdxSpreadSheet3DReferenceCustomExternalLink() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetFormulaResult : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TdxSpreadSheetFormulaToken* operator[](int Index) { return this->Items[Index]; }
	
private:
	Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode FErrorCode;
	bool FHasCircularReferences;
	TdxSpreadSheetCustomFormula* FOwner;
	System::Classes::TList* FTemporaryTokens;
	System::Classes::TList* FValues;
	int __fastcall GetCount();
	Dxspreadsheetclasses::TdxSpreadSheetFormatSettings* __fastcall GetFormatSettings();
	TdxSpreadSheetFormulaToken* __fastcall GetItem(int AIndex);
	System::Variant __fastcall GetValue();
	System::UnicodeString __fastcall GetValueAsText();
	__property System::Classes::TList* TemporaryTokens = {read=FTemporaryTokens};
	__property System::Classes::TList* Values = {read=FValues};
	
protected:
	void __fastcall ConvertNullValueToZero();
	bool __fastcall DoExtractDateTimeParameter(System::Variant &AParameter, TdxSpreadSheetFormulaToken* const AParams, int AIndex, bool AWithoutBoolean);
	bool __fastcall HasSimpleValue();
	
public:
	__fastcall TdxSpreadSheetFormulaResult(TdxSpreadSheetCustomFormula* AOwner);
	__fastcall virtual ~TdxSpreadSheetFormulaResult();
	virtual void __fastcall BeforeDestruction();
	void __fastcall Add(TdxSpreadSheetFormulaToken* AValue);
	void __fastcall AddTemporary(TdxSpreadSheetFormulaToken* AValue);
	void __fastcall AddValue(const double AValue)/* overload */;
	void __fastcall AddValue(const System::Extended AValue)/* overload */;
	void __fastcall AddValue(const int AValue)/* overload */;
	void __fastcall AddValue(const System::UnicodeString AValue)/* overload */;
	void __fastcall AddValue(const System::TDateTime AValue)/* overload */;
	void __fastcall AddValue(const System::Variant &AValue)/* overload */;
	void __fastcall AddResultValue(TdxSpreadSheetFormulaResult* const AValue);
	void __fastcall CheckValue();
	void __fastcall Clear();
	void __fastcall ClearValues();
	bool __fastcall ConvertToNumeric(System::Variant &AValue, bool ACanConvertStr, bool AWithoutBoolean);
	void __fastcall Delete(int Index);
	TdxSpreadSheetFormulaToken* __fastcall FirstItem();
	TdxSpreadSheetFormulaToken* __fastcall LastItem();
	void __fastcall ExtractCondition(TdxSpreadSheetFormulaToken* AParams, int AMaxCount, int AIndex, System::Variant &AConditionValue, Dxspreadsheettypes::TdxSpreadSheetFormulaOperation &AOperation);
	Dxspreadsheettypes::TdxSpreadSheetVector* __fastcall ExtractColumnFromRange(TdxSpreadSheetFormulaToken* const ARange, int AColumnIndex, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	bool __fastcall ExtractDateTimeOnlyParameter(System::Variant &AParameter, TdxSpreadSheetFormulaToken* const AParams, int AIndex = 0x0);
	bool __fastcall ExtractDateTimeParameter(System::Variant &AParameter, TdxSpreadSheetFormulaToken* const AParams, int AIndex = 0x0);
	bool __fastcall ExtractDateTimeParameterWithoutBoolean(System::Variant &AParameter, TdxSpreadSheetFormulaToken* const AParams, int AIndex = 0x0);
	Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode __fastcall ExtractErrorCode(TdxSpreadSheetFormulaToken* const AParams)/* overload */;
	bool __fastcall ExtractNumericParameter(System::Variant &AParameter, TdxSpreadSheetFormulaToken* const AParams, int AIndex = 0x0)/* overload */;
	bool __fastcall ExtractNumericParameterDef(System::Variant &AParameter, const System::Variant &ADefaultIfNoExist, const System::Variant &ADefaultIfNull, TdxSpreadSheetFormulaToken* const AParams, int AIndex = 0x0)/* overload */;
	bool __fastcall ExtractNumericParameterDef(System::Variant &AParameter, const System::Variant &ADefaultIfNull, TdxSpreadSheetFormulaToken* const AParams, int AIndex = 0x0)/* overload */;
	bool __fastcall ExtractNumericParameterDefWithoutBoolean(System::Variant &AParameter, const System::Variant &ADefault, TdxSpreadSheetFormulaToken* const AParams, int AIndex = 0x0);
	bool __fastcall ExtractNumericParameterWithoutBoolean(System::Variant &AParameter, TdxSpreadSheetFormulaToken* const AParams, int AIndex = 0x0);
	bool __fastcall ExtractNumericValue(System::Variant &AValue);
	bool __fastcall ExtractParameter(System::Variant &AParameter, TdxSpreadSheetFormulaToken* const AParams, int AIndex = 0x0)/* overload */;
	bool __fastcall ExtractParameter(System::Variant &AParameter, /* out */ bool &ACanConvertStrToNumber, TdxSpreadSheetFormulaToken* const AParams, int AIndex = 0x0)/* overload */;
	bool __fastcall ExtractParameterDef(System::Variant &AParameter, const System::Variant &ADefaultIfNoExist, const System::Variant &ADefaultIfNull, TdxSpreadSheetFormulaToken* const AParams, int AIndex = 0x0)/* overload */;
	bool __fastcall ExtractParameterDef(System::Variant &AParameter, const System::Variant &ADefaultIfNull, TdxSpreadSheetFormulaToken* const AParams, int AIndex = 0x0)/* overload */;
	Dxspreadsheettypes::TdxSpreadSheetVector* __fastcall ExtractRowFromRange(TdxSpreadSheetFormulaToken* const ARange, int ARowIndex, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &AErrorCode);
	System::UnicodeString __fastcall ExtractStringParameter(TdxSpreadSheetFormulaToken* const AParams, int AIndex = 0x0);
	System::Variant __fastcall ExtractStringValue();
	void __fastcall ExtractToken(TdxSpreadSheetFormulaToken* AToken, /* out */ System::Classes::TStreamOwnership &AOwnership);
	System::Variant __fastcall ExtractValue(/* out */ bool &ACanConvertStrToNumber);
	TdxSpreadSheetFormulaToken* __fastcall ExtractValueToken(/* out */ System::Classes::TStreamOwnership &AOwnership);
	void __fastcall ForEach(TdxSpreadSheetFormulaToken* AParams, TdxSpreadSheetForEachCallBack AProc, const void * AData)/* overload */;
	int __fastcall GetParamsCount(TdxSpreadSheetFormulaToken* const AParams);
	bool __fastcall ParameterExists(TdxSpreadSheetFormulaToken* const AParams, int AIndex);
	bool __fastcall ParameterIsNull(System::Variant &AParameter, TdxSpreadSheetFormulaToken* const AParams, int AIndex = 0x0)/* overload */;
	bool __fastcall ParameterIsNull(System::Variant &AParameter, /* out */ bool &ACanConvertStrToNumber, TdxSpreadSheetFormulaToken* const AParams, int AIndex = 0x0)/* overload */;
	void __fastcall SetError(Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode ACode);
	bool __fastcall Validate();
	__property int Count = {read=GetCount, nodefault};
	__property Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode ErrorCode = {read=FErrorCode, nodefault};
	__property Dxspreadsheetclasses::TdxSpreadSheetFormatSettings* FormatSettings = {read=GetFormatSettings};
	__property bool HasCircularReferences = {read=FHasCircularReferences, write=FHasCircularReferences, nodefault};
	__property TdxSpreadSheetFormulaToken* Items[int Index] = {read=GetItem/*, default*/};
	__property TdxSpreadSheetCustomFormula* Owner = {read=FOwner};
	__property System::Variant Value = {read=GetValue};
	__property System::UnicodeString ValueAsText = {read=GetValueAsText};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall dxSpreadSheetCalculateExpression(TdxSpreadSheetFormulaToken* AExpression, TdxSpreadSheetFormulaResult* &AResult, const bool AForceConvertNullValueToZero = false);
extern DELPHI_PACKAGE System::UnicodeString __fastcall dxSpreadSheetExpressionToText(TdxSpreadSheetFormulaToken* AExpression)/* overload */;
extern DELPHI_PACKAGE void __fastcall dxSpreadSheetExpressionToText(System::Sysutils::TStringBuilder* ABuffer, TdxSpreadSheetFormulaToken* AExpression)/* overload */;
extern DELPHI_PACKAGE void __fastcall dxSpreadSheetInitializeParamInfo(const int ACount, int &AParamCount, TdxSpreadSheetFunctionParamKindInfo &AParamKind);
extern DELPHI_PACKAGE bool __fastcall dxSpreadSheetIsReferenceToken(TdxSpreadSheetFormulaToken* &AToken, TdxSpreadSheetFormulaResult* &AResult);
extern DELPHI_PACKAGE bool __fastcall dxSpreadSheetParseCellReference(System::UnicodeString AReference, TdxSpreadSheetCustomFormulaController* AController, /* out */ System::TObject* &AScope, /* out */ System::Types::TRect &AArea);
extern DELPHI_PACKAGE void __fastcall dxSpreadSheetParseReference(System::UnicodeString Reference, void *Formula);
}	/* namespace Dxspreadsheetcoreformulas */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXSPREADSHEETCOREFORMULAS)
using namespace Dxspreadsheetcoreformulas;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxspreadsheetcoreformulasHPP
