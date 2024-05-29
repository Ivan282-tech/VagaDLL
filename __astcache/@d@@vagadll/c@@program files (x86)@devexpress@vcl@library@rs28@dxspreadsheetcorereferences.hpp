// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxSpreadSheetCoreReferences.pas' rev: 35.00 (Windows)

#ifndef DxspreadsheetcorereferencesHPP
#define DxspreadsheetcorereferencesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <System.Math.hpp>
#include <System.SysUtils.hpp>
#include <dxCore.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxspreadsheetcorereferences
{
//-- forward type declarations -----------------------------------------------
struct TdxSpreadSheetReference;
class DELPHICLASS TdxSpreadSheetReferenceParser;
class DELPHICLASS TdxSpreadSheetReferencePath;
class DELPHICLASS TdxSpreadSheetColumnReferences;
class DELPHICLASS TdxSpreadSheetReferenceAsString;
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TdxSpreadSheetReference
{
public:
	__int64 Value;
	int __fastcall GetFlags();
	bool __fastcall GetIsAbsolute();
	bool __fastcall GetIsAllItems();
	bool __fastcall GetIsError();
	int __fastcall GetOffset();
	void __fastcall SetFlags(int AValue);
	void __fastcall SetIsAbsolute(bool AValue);
	void __fastcall SetIsAllItems(bool AValue);
	void __fastcall SetIsError(bool AValue);
	void __fastcall SetOffset(int AValue);
	__fastcall TdxSpreadSheetReference(const __int64 AValue)/* overload */;
	__fastcall TdxSpreadSheetReference(int AIndex, bool AIsAbsolute)/* overload */;
	__fastcall TdxSpreadSheetReference(int AIndex, int AOrigin, int AMaxIndex)/* overload */;
	int __fastcall ActualValue(const int AOrigin);
	void __fastcall SetActualValue(const int AOrigin, const int AValue);
	static TdxSpreadSheetReference __fastcall AllItems();
	static TdxSpreadSheetReference __fastcall Invalid();
	static bool __fastcall _op_Equality(const TdxSpreadSheetReference &V1, const TdxSpreadSheetReference &V2);
	static bool __fastcall _op_Inequality(const TdxSpreadSheetReference &V1, const TdxSpreadSheetReference &V2);
	void __fastcall Move(int ADelta);
	void __fastcall Reset();
	bool __fastcall UpdateAreaReference(const int AOrigin, const int AIndex1, const int AIndex2, const int ANewIndex1, TdxSpreadSheetReference &APoint2, bool AMoveReference, bool AMoveOrigin);
	bool __fastcall UpdateReference(const int AOrigin, const int AIndex1, const int AIndex2, const int ANewIndex1, bool AMoveReference, bool AMoveOrigin);
	__property int Flags = {read=GetFlags, write=SetFlags};
	__property bool IsAbsolute = {read=GetIsAbsolute, write=SetIsAbsolute};
	__property bool IsAllItems = {read=GetIsAllItems, write=SetIsAllItems};
	__property bool IsError = {read=GetIsError, write=SetIsError};
	__property int Offset = {read=GetOffset, write=SetOffset};
	TdxSpreadSheetReference() {}
	
	friend bool operator ==(const TdxSpreadSheetReference &V1, const TdxSpreadSheetReference &V2) { return TdxSpreadSheetReference::_op_Equality(V1, V2); }
	friend bool operator !=(const TdxSpreadSheetReference &V1, const TdxSpreadSheetReference &V2) { return TdxSpreadSheetReference::_op_Inequality(V1, V2); }
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetReferenceParser : public System::TObject
{
	typedef System::TObject inherited;
	
	
protected:
	typedef int __fastcall (*TGetCharIndexFunc)(const System::WideChar C);
	
	
private:
	static const System::Int8 ciNumber = System::Int8(0x0);
	
	static const System::Int8 ciAlpha = System::Int8(0x1);
	
	static const System::Int8 ciRowRef = System::Int8(0x2);
	
	static const System::Int8 ciColumnRef = System::Int8(0x3);
	
	static const System::Int8 ciPlus = System::Int8(0x4);
	
	static const System::Int8 ciMinus = System::Int8(0x5);
	
	static const System::Int8 ciDollar = System::Int8(0x6);
	
	static const System::Int8 ciLeftParenthesis = System::Int8(0x7);
	
	static const System::Int8 ciRightParenthesis = System::Int8(0x8);
	
	static const System::Int8 ciBreakChar = System::Int8(0x9);
	
	static const System::Int8 StateError = System::Int8(-1);
	
	static const System::Int8 StateFinish = System::Int8(0x1);
	
	static const System::Int8 StateR1C1Initial = System::Int8(0x0);
	
	static const System::Int8 StateR1C1Row = System::Int8(0x2);
	
	static const System::Int8 StateR1C1RowAbsoluteIndex = System::Int8(0x3);
	
	static const System::Int8 StateR1C1RowRelative = System::Int8(0x4);
	
	static const System::Int8 StateR1C1RowRelativeIndex = System::Int8(0x5);
	
	static const System::Int8 StateR1C1RowRelativeNegative = System::Int8(0x6);
	
	static const System::Int8 StateR1C1Column = System::Int8(0x8);
	
	static const System::Int8 StateR1C1ColumnAbsoluteIndex = System::Int8(0x9);
	
	static const System::Int8 StateR1C1ColumnRelative = System::Int8(0xa);
	
	static const System::Int8 StateR1C1ColumnRelativeIndex = System::Int8(0xb);
	
	static const System::Int8 StateR1C1ColumnRelativeNegative = System::Int8(0xc);
	
	static const System::Int8 StateA1Initial = System::Int8(0xe);
	
	static const System::Int8 StateA1ColumnAbsoluteIndex = System::Int8(0x10);
	
	static const System::Int8 StateA1ColumnRelativeIndex = System::Int8(0x11);
	
	static const System::Int8 StateA1ColumnIndex2 = System::Int8(0x12);
	
	static const System::Int8 StateA1ColumnIndex3 = System::Int8(0x13);
	
	static const System::Int8 StateA1RowAbsoluteIndex = System::Int8(0x15);
	
	static const System::Int8 StateA1RowRelativeIndex = System::Int8(0x16);
	
	static System::StaticArray<System::StaticArray<System::Int8, 10>, 23> StateMachine;
	static int __fastcall GetA1CharIndex(const System::WideChar C);
	static int __fastcall GetR1C1CharIndex(const System::WideChar C);
	
protected:
	__classmethod bool __fastcall ParseCore(const System::UnicodeString S, int AInitialState, TGetCharIndexFunc AGetCharIndexFunc, int &AStartPos, int AFinishPos, /* out */ TdxSpreadSheetReference &ARow, /* out */ TdxSpreadSheetReference &AColumn);
	
public:
	__classmethod bool __fastcall Parse(const System::UnicodeString AUpCaseString, bool AR1C1ReferenceStyle, int &AStartPos, int AFinishPos, /* out */ TdxSpreadSheetReference &ARow, /* out */ TdxSpreadSheetReference &AColumn);
	__classmethod bool __fastcall ParseA1(const System::UnicodeString AUpCaseString, int &AStartPos, int AFinishPos, /* out */ TdxSpreadSheetReference &ARow, /* out */ TdxSpreadSheetReference &AColumn);
	__classmethod bool __fastcall ParseR1C1(const System::UnicodeString AUpCaseString, int &AStartPos, int AFinishPos, /* out */ TdxSpreadSheetReference &ARow, /* out */ TdxSpreadSheetReference &AColumn);
public:
	/* TObject.Create */ inline __fastcall TdxSpreadSheetReferenceParser() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSpreadSheetReferenceParser() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetReferencePath : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FColumn;
	TdxSpreadSheetReferencePath* FNext;
	int FRow;
	System::TObject* FSheet;
	
public:
	__fastcall TdxSpreadSheetReferencePath(int ARow, int AColumn, System::TObject* ASheet);
	__fastcall virtual ~TdxSpreadSheetReferencePath();
	void __fastcall Add(int ARow, int AColumn, System::TObject* ASheet);
	void __fastcall Remove(int ARow, int AColumn, System::TObject* ASheet);
	virtual System::UnicodeString __fastcall ToString();
	__property int Column = {read=FColumn, nodefault};
	__property TdxSpreadSheetReferencePath* Next = {read=FNext};
	__property int Row = {read=FRow, nodefault};
	__property System::TObject* Sheet = {read=FSheet};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetColumnReferences : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	__classmethod void __fastcall NameByIndex(System::Sysutils::TStringBuilder* const ABuffer, int AIndex)/* overload */;
	
public:
	__classmethod int __fastcall IndexByName(const System::UnicodeString AName, bool R1C1ReferenceStyle = false);
	__classmethod System::UnicodeString __fastcall NameByIndex(const int AIndex, bool R1C1ReferenceStyle = false)/* overload */;
	__classmethod bool __fastcall TryIndexByName(const System::UnicodeString AName, /* out */ int &AIndex, bool R1C1ReferenceStyle = false);
public:
	/* TObject.Create */ inline __fastcall TdxSpreadSheetColumnReferences() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSpreadSheetColumnReferences() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetReferenceAsString : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod System::UnicodeString __fastcall Build(System::TObject* const ALink, const TdxSpreadSheetReference &ARow, const TdxSpreadSheetReference &AColumn, const int ARowOrigin, const int AColumnOrigin, bool R1C1ReferenceStyle)/* overload */;
	__classmethod System::UnicodeString __fastcall Build(const System::UnicodeString AReference, const TdxSpreadSheetReference &ARow, const TdxSpreadSheetReference &AColumn, const int ARowOrigin, const int AColumnOrigin, bool R1C1ReferenceStyle)/* overload */;
	__classmethod System::UnicodeString __fastcall Build(System::Sysutils::TStringBuilder* ABuffer, const System::UnicodeString AReference, const TdxSpreadSheetReference &ARow, const TdxSpreadSheetReference &AColumn, const int ARowOrigin, const int AColumnOrigin, bool R1C1ReferenceStyle)/* overload */;
	__classmethod System::UnicodeString __fastcall Build(System::Sysutils::TStringBuilder* ABuffer, const System::UnicodeString AReference, const System::Types::TRect &AArea, const int ARowOrigin, const int AColumnOrigin, bool R1C1ReferenceStyle)/* overload */;
	__classmethod System::UnicodeString __fastcall BuildArea(System::TObject* const ALink1, const TdxSpreadSheetReference &ARow1, const TdxSpreadSheetReference &AColumn1, System::TObject* const ALink2, const TdxSpreadSheetReference &ARow2, const TdxSpreadSheetReference &AColumn2, const int ARowOrigin, const int AColumnOrigin, bool R1C1ReferenceStyle)/* overload */;
	__classmethod void __fastcall BuildArea(System::Sysutils::TStringBuilder* ABuffer, System::TObject* const ALink1, const TdxSpreadSheetReference &ARow1, const TdxSpreadSheetReference &AColumn1, System::TObject* const ALink2, const TdxSpreadSheetReference &ARow2, const TdxSpreadSheetReference &AColumn2, const int ARowOrigin, const int AColumnOrigin, bool R1C1ReferenceStyle)/* overload */;
	__classmethod void __fastcall BuildArea(System::Sysutils::TStringBuilder* ABuffer, const System::UnicodeString AReference1, const TdxSpreadSheetReference &ARow1, const TdxSpreadSheetReference &AColumn1, const System::UnicodeString AReference2, const TdxSpreadSheetReference &ARow2, const TdxSpreadSheetReference &AColumn2, const int ARowOrigin, const int AColumnOrigin, bool R1C1ReferenceStyle)/* overload */;
	__classmethod System::UnicodeString __fastcall BuildLinkReference(System::TObject* const ALink);
	__classmethod System::UnicodeString __fastcall BuildViewReference(System::TObject* const AView)/* overload */;
	__classmethod System::UnicodeString __fastcall BuildViewReference(const System::UnicodeString AViewName, Dxcore::TdxDefaultBoolean AEscape = (Dxcore::TdxDefaultBoolean)(0x2))/* overload */;
	__classmethod bool __fastcall CheckIfViewNameMustBeEscaped(const System::UnicodeString AName, const System::UnicodeString ABreakChars);
public:
	/* TObject.Create */ inline __fastcall TdxSpreadSheetReferenceAsString() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSpreadSheetReferenceAsString() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 dxMaxColumnNameLength = System::Int8(0x3);
static const System::Int8 dxMaxReferenceLength = System::Int8(0x20);
extern DELPHI_PACKAGE System::UnicodeString __fastcall dxSpreadSheetEscapeString(const System::UnicodeString S, const System::WideChar AMarkChar);
extern DELPHI_PACKAGE System::UnicodeString __fastcall dxSpreadSheetTextValueAsString(const System::UnicodeString S, const System::WideChar AMarkChar);
extern DELPHI_PACKAGE System::UnicodeString __fastcall dxSpreadSheetUnescapeString(const System::UnicodeString S, const System::WideChar AMarkChar);
extern DELPHI_PACKAGE bool __fastcall dxTryStringToReference(const System::UnicodeString S, bool R1C1ReferenceStyle, /* out */ TdxSpreadSheetReference &ARow, /* out */ TdxSpreadSheetReference &AColumn)/* overload */;
extern DELPHI_PACKAGE bool __fastcall dxTryStringToReference(const System::UnicodeString S, bool R1C1ReferenceStyle, /* out */ int &ARow, /* out */ int &AColumn)/* overload */;
extern DELPHI_PACKAGE bool __fastcall dxTryStringToReferenceArea(const System::UnicodeString S, bool R1C1ReferenceStyle, /* out */ System::Types::TRect &AArea)/* overload */;
extern DELPHI_PACKAGE bool __fastcall dxTryStringToReferenceArea(const System::UnicodeString S, /* out */ System::Types::TRect &AArea)/* overload */;
}	/* namespace Dxspreadsheetcorereferences */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXSPREADSHEETCOREREFERENCES)
using namespace Dxspreadsheetcorereferences;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxspreadsheetcorereferencesHPP
