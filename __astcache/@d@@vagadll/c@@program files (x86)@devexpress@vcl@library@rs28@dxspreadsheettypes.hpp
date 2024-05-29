// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxSpreadSheetTypes.pas' rev: 35.00 (Windows)

#ifndef DxspreadsheettypesHPP
#define DxspreadsheettypesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Math.hpp>
#include <System.Classes.hpp>
#include <System.Types.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Variants.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Generics.Defaults.hpp>
#include <cxClasses.hpp>
#include <dxCore.hpp>
#include <dxCoreClasses.hpp>
#include <dxSpreadSheetCoreReferences.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxspreadsheettypes
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IdxSpreadSheetCellData;
typedef System::DelphiInterface<IdxSpreadSheetCellData> _di_IdxSpreadSheetCellData;
__interface DELPHIINTERFACE IdxSpreadSheetViewCaption;
typedef System::DelphiInterface<IdxSpreadSheetViewCaption> _di_IdxSpreadSheetViewCaption;
__interface DELPHIINTERFACE TdxSpreadSheetViewForEachCellProc;
typedef System::DelphiInterface<TdxSpreadSheetViewForEachCellProc> _di_TdxSpreadSheetViewForEachCellProc;
__interface DELPHIINTERFACE IdxSpreadSheetViewData;
typedef System::DelphiInterface<IdxSpreadSheetViewData> _di_IdxSpreadSheetViewData;
class DELPHICLASS TdxSpreadSheetCellData;
struct TdxSpreadSheetCellReference;
struct TdxSpreadSheetVectorValue;
class DELPHICLASS TdxSpreadSheetVector;
class DELPHICLASS TdxSpreadSheetSimpleVector;
struct TdxSpreadSheetFormulaTokenDimension;
class DELPHICLASS TdxSpreadSheetAreaList;
//-- type declarations -------------------------------------------------------
typedef System::PDouble PFloat;

typedef System::TObject* *PObject;

enum DECLSPEC_DENUM TdxSpreadSheetMessageType : unsigned char { ssmtError, ssmtWarning, ssmtHint };

typedef System::Set<TdxSpreadSheetMessageType, TdxSpreadSheetMessageType::ssmtError, TdxSpreadSheetMessageType::ssmtHint> TdxSpreadSheetMessageTypes;

enum DECLSPEC_DENUM TdxSpreadSheetCellDataType : unsigned char { cdtBlank, cdtBoolean, cdtError, cdtCurrency, cdtFloat, cdtDateTime, cdtInteger, cdtString, cdtFormula };

enum DECLSPEC_DENUM TdxSpreadSheetClipboardCopyMode : unsigned char { ccmNone, ccmCopy, ccmCut };

enum DECLSPEC_DENUM TdxSpreadSheetClipboardPasteOption : unsigned char { cpoValues, cpoFormulas, cpoComments, cpoNumberFormatting, cpoStyles, cpoColumnWidths, cpoSkipBlanks };

typedef System::Set<TdxSpreadSheetClipboardPasteOption, TdxSpreadSheetClipboardPasteOption::cpoValues, TdxSpreadSheetClipboardPasteOption::cpoSkipBlanks> TdxSpreadSheetClipboardPasteOptions;

enum DECLSPEC_DENUM TdxSpreadSheetDateTimeSystem : unsigned char { dts1900, dts1904, dtsDefault };

enum DECLSPEC_DENUM TdxSpreadSheetCellState : unsigned char { csLocked, csHidden, csShrinkToFit, csWordWrap };

typedef System::Set<TdxSpreadSheetCellState, TdxSpreadSheetCellState::csLocked, TdxSpreadSheetCellState::csWordWrap> TdxSpreadSheetCellStates;

enum DECLSPEC_DENUM TdxSpreadSheetFontScript : unsigned char { fsNone, fsSuperscript, fsSubscript };

enum DECLSPEC_DENUM TdxSpreadSheetCellsModification : unsigned char { cmShiftCellsHorizontally, cmShiftCellsVertically, cmShiftColumns, cmShiftRows };

enum DECLSPEC_DENUM TdxSpreadSheetCellsModificationMode : unsigned char { cmmClear, cmmDelete, cmmReplace };

enum DECLSPEC_DENUM TdxSpreadSheetEnterKeyNavigation : unsigned char { eknDefault, eknSkipLockedCells };

enum DECLSPEC_DENUM TdxSpreadSheetSizingMarker : unsigned char { smLeft, smTopLeft, smTop, smTopRight, smRight, smBottomRight, smBottom, smBottomLeft };

typedef System::Set<TdxSpreadSheetSizingMarker, TdxSpreadSheetSizingMarker::smLeft, TdxSpreadSheetSizingMarker::smBottomLeft> TdxSpreadSheetSizingMarkers;

enum DECLSPEC_DENUM TdxSpreadSheetFormulaErrorCode : unsigned char { ecNone, ecNull, ecDivByZero, ecValue, ecRefErr, ecName, ecNUM, ecNA };

enum DECLSPEC_DENUM TdxSpreadSheetFormulaUpdateReferencesMode : unsigned char { urmInsert, urmDelete, urmMove };

enum DECLSPEC_DENUM TdxSpreadSheetFormulaOperation : unsigned char { opAdd, opSub, opMul, opDiv, opPower, opConcat, opLT, opLE, opEQ, opGE, opGT, opNE, opIsect, opUnion, opRange, opUplus, opUminus, opPercent, opParen };

typedef System::Set<TdxSpreadSheetFormulaOperation, TdxSpreadSheetFormulaOperation::opAdd, TdxSpreadSheetFormulaOperation::opParen> TdxSpreadSheetFormulaOperations;

typedef System::StaticArray<System::UnicodeString, 19> TdxSpreadSheetOperationStrings;

__interface  INTERFACE_UUID("{B775B17A-375A-47E0-A5BA-7F9A82CC9FB9}") IdxSpreadSheetCellData  : public System::IInterface 
{
	virtual TdxSpreadSheetFormulaErrorCode __fastcall GetAsError() = 0 ;
	virtual double __fastcall GetAsFloat() = 0 ;
	virtual System::TObject* __fastcall GetAsFormula() = 0 ;
	virtual System::Variant __fastcall GetAsVariant() = 0 ;
	virtual TdxSpreadSheetCellDataType __fastcall GetDataType() = 0 ;
	virtual bool __fastcall GetIsEmpty() = 0 ;
	virtual bool __fastcall IsNumericValue() = 0 ;
	__property TdxSpreadSheetFormulaErrorCode AsError = {read=GetAsError};
	__property double AsFloat = {read=GetAsFloat};
	__property System::TObject* AsFormula = {read=GetAsFormula};
	__property System::Variant AsVariant = {read=GetAsVariant};
	__property TdxSpreadSheetCellDataType DataType = {read=GetDataType};
	__property bool IsEmpty = {read=GetIsEmpty};
};

__interface  INTERFACE_UUID("{0F1806B1-2C58-4520-8D5E-3AD4BD2EAF94}") IdxSpreadSheetViewCaption  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetCaption() = 0 ;
	virtual bool __fastcall IsCaptionMustBeEscaped() = 0 ;
};

__interface TdxSpreadSheetViewForEachCellProc  : public System::IInterface 
{
	virtual void __fastcall Invoke(const _di_IdxSpreadSheetCellData ACell) = 0 ;
};

__interface  INTERFACE_UUID("{08C7DC62-1EEA-4FD3-9922-CFBD8911A5FB}") IdxSpreadSheetViewData  : public System::IInterface 
{
	virtual void __fastcall ForEachCell(const System::Types::TRect &AArea, _di_TdxSpreadSheetViewForEachCellProc AProc, bool AGoForward = true) = 0 ;
	virtual _di_IdxSpreadSheetCellData __fastcall GetCellData(const int ARow, const int AColumn) = 0 ;
	virtual int __fastcall GetMaxColumnIndex() = 0 ;
	virtual int __fastcall GetMaxRowIndex() = 0 ;
	virtual int __fastcall GetNextColumnWithNonEmptyCell(const int ARow, const int AColumn, const bool AGoForward = true) = 0 ;
	virtual int __fastcall GetNextRowWithNonEmptyCell(const int ARow, const int AColumn, const bool AGoForward = true) = 0 ;
	virtual bool __fastcall IsRowVisible(const int ARow) = 0 ;
	virtual void __fastcall SetCellData(const int ARow, const int AColumn, const System::Variant &AValue, const TdxSpreadSheetFormulaErrorCode AErrorCode) = 0 ;
};

class PASCALIMPLEMENTATION TdxSpreadSheetCellData : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	int Column;
	int Row;
	System::Variant Value;
	__fastcall TdxSpreadSheetCellData(int ARow, int AColumn, const System::Variant &AValue);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSpreadSheetCellData() { }
	
};


typedef TdxSpreadSheetCellReference *PdxSpreadSheetCellReference;

struct DECLSPEC_DRECORD TdxSpreadSheetCellReference
{
public:
	int ColumnIndex;
	int RowIndex;
	System::TObject* View;
};


struct DECLSPEC_DRECORD TdxSpreadSheetVectorValue
{
public:
	TdxSpreadSheetFormulaErrorCode ErrorCode;
	System::Variant Value;
	__fastcall TdxSpreadSheetVectorValue(const System::Variant &AValue, TdxSpreadSheetFormulaErrorCode AErrorCode);
	bool __fastcall IsError();
	TdxSpreadSheetVectorValue() {}
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetVector : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TdxSpreadSheetVectorValue operator[](int Index) { return this->Items[Index]; }
	
protected:
	int FAnchorItemsIndex;
	bool FIsAllItems;
	virtual TdxSpreadSheetVectorValue __fastcall GetItem(int Index) = 0 ;
	virtual int __fastcall GetLength() = 0 ;
	bool __fastcall IsEqualValues(const System::Variant &V1, const System::Variant &V2, bool ANeedMaskSearch);
	
public:
	virtual int __fastcall GetFirstZeroValueIndex();
	virtual int __fastcall GetItemIndex(const System::Variant &AValue, bool ANeedMaskSearch);
	virtual int __fastcall GetNextItemIndex(int AIndex, bool AForward);
	__property int AnchorItemsIndex = {read=FAnchorItemsIndex, nodefault};
	__property bool IsAllItems = {read=FIsAllItems, nodefault};
	__property TdxSpreadSheetVectorValue Items[int Index] = {read=GetItem/*, default*/};
	__property int Length = {read=GetLength, nodefault};
public:
	/* TObject.Create */ inline __fastcall TdxSpreadSheetVector() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSpreadSheetVector() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetSimpleVector : public TdxSpreadSheetVector
{
	typedef TdxSpreadSheetVector inherited;
	
private:
	System::Generics::Collections::TList__1<TdxSpreadSheetVectorValue>* FData;
	
protected:
	virtual TdxSpreadSheetVectorValue __fastcall GetItem(int Index);
	virtual int __fastcall GetLength();
	
public:
	__fastcall TdxSpreadSheetSimpleVector(int ACapacity);
	__fastcall virtual ~TdxSpreadSheetSimpleVector();
	void __fastcall Add(const System::Variant &AValue, TdxSpreadSheetFormulaErrorCode AErrorCode);
};

#pragma pack(pop)

struct DECLSPEC_DRECORD TdxSpreadSheetFormulaTokenDimension
{
public:
	int ColumnCount;
	int RowCount;
	static bool __fastcall _op_Equality(const TdxSpreadSheetFormulaTokenDimension &ADimension1, const TdxSpreadSheetFormulaTokenDimension &ADimension2);
	static bool __fastcall _op_Inequality(const TdxSpreadSheetFormulaTokenDimension &ADimension1, const TdxSpreadSheetFormulaTokenDimension &ADimension2);
	int __fastcall Count();
	void __fastcall SetDimension(const int ARowCount, const int AColumnCount);
	
	friend bool operator ==(const TdxSpreadSheetFormulaTokenDimension &ADimension1, const TdxSpreadSheetFormulaTokenDimension &ADimension2) { return TdxSpreadSheetFormulaTokenDimension::_op_Equality(ADimension1, ADimension2); }
	friend bool operator !=(const TdxSpreadSheetFormulaTokenDimension &ADimension1, const TdxSpreadSheetFormulaTokenDimension &ADimension2) { return TdxSpreadSheetFormulaTokenDimension::_op_Inequality(ADimension1, ADimension2); }
};


class PASCALIMPLEMENTATION TdxSpreadSheetAreaList : public Dxcoreclasses::TdxRectList
{
	typedef Dxcoreclasses::TdxRectList inherited;
	
public:
	static const System::WideChar ValueSeparator = (System::WideChar)(0x3b);
	
	
private:
	System::Classes::TNotifyEvent FOnChange;
	
protected:
	virtual void __fastcall Notify(const System::Types::TRect &Item, System::Generics::Collections::TCollectionNotification Action);
	
public:
	void __fastcall Assign(Dxcoreclasses::TdxRectList* AList);
	void __fastcall AssignFromString(const System::UnicodeString S);
	System::Types::TRect __fastcall BoundingRect();
	TdxSpreadSheetAreaList* __fastcall Clone();
	HIDESBASE bool __fastcall Contains(int ARow, int AColumn)/* overload */;
	virtual bool __fastcall Equals(System::TObject* Obj);
	bool __fastcall Intersects(const System::Types::TRect &AArea);
	virtual System::UnicodeString __fastcall ToString();
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	/* {System_Generics_Collections}TList<System_Types_TRect>.Create */ inline __fastcall TdxSpreadSheetAreaList()/* overload */ : Dxcoreclasses::TdxRectList() { }
	/* {System_Generics_Collections}TList<System_Types_TRect>.Create */ inline __fastcall TdxSpreadSheetAreaList(const System::DelphiInterface<System::Generics::Defaults::IComparer__1<System::Types::TRect> > AComparer)/* overload */ : Dxcoreclasses::TdxRectList(AComparer) { }
	/* {System_Generics_Collections}TList<System_Types_TRect>.Create */ inline __fastcall TdxSpreadSheetAreaList(System::Generics::Collections::TEnumerable__1<System::Types::TRect>* const Collection)/* overload */ : Dxcoreclasses::TdxRectList(Collection) { }
	/* {System_Generics_Collections}TList<System_Types_TRect>.Create */ inline __fastcall TdxSpreadSheetAreaList(const System::Types::TRect *Values, const int Values_High)/* overload */ : Dxcoreclasses::TdxRectList(Values, Values_High) { }
	/* {System_Generics_Collections}TList<System_Types_TRect>.Destroy */ inline __fastcall virtual ~TdxSpreadSheetAreaList() { }
	
};


;

//-- var, const, procedure ---------------------------------------------------
#define dxSpreadSheetDefaultPasteOptions (System::Set<TdxSpreadSheetClipboardPasteOption, TdxSpreadSheetClipboardPasteOption::cpoValues, TdxSpreadSheetClipboardPasteOption::cpoSkipBlanks>() << TdxSpreadSheetClipboardPasteOption::cpoValues << TdxSpreadSheetClipboardPasteOption::cpoFormulas << TdxSpreadSheetClipboardPasteOption::cpoComments << TdxSpreadSheetClipboardPasteOption::cpoNumberFormatting << TdxSpreadSheetClipboardPasteOption::cpoStyles )
#define dxSpreadSheetDefaultPassword L"VelvetSweatshop"
#define dxSpreadSheetFeatureFunctionPrefix L"_xlfn."
static const System::Int8 dxSpreadSheetDefaultZoomFactor = System::Int8(0x64);
static const System::Int8 dxSpreadSheetMinimumZoomFactor = System::Int8(0x2d);
static const System::Word dxSpreadSheetMaximumZoomFactor = System::Word(0x190);
static const System::Int8 dxSpreadSheetDefaultColumnWidth = System::Int8(0x55);
static const System::Word dxSpreadSheetMaxColumnCount = System::Word(0x4000);
static const System::Word dxSpreadSheetMaxColumnIndex = System::Word(0x3fff);
static const int dxSpreadSheetMaxRowCount = int(0x100000);
static const int dxSpreadSheetMaxRowIndex = int(0xfffff);
static const System::Int8 dxSpreadSheetDefaultRowHeight = System::Int8(0x14);
static const System::Int8 dxSpreadSheetMaxOutlineLevel = System::Int8(0x8);
static const System::Int8 dxSpreadSheetMaxCaptionLength = System::Int8(0x1f);
static const System::Int8 dxSpreadSheetMaxSeparatorWidth = System::Int8(0xa);
static const System::Int8 dxSpreadSheetResizeAreaSize = System::Int8(0x5);
extern DELPHI_PACKAGE System::StaticArray<System::Uitypes::TColor, 56> dxExcelStandardColors;
extern DELPHI_PACKAGE int __fastcall dxSpreadSheetGetStandardColorIndex(const System::Uitypes::TColor AColor);
}	/* namespace Dxspreadsheettypes */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXSPREADSHEETTYPES)
using namespace Dxspreadsheettypes;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxspreadsheettypesHPP
