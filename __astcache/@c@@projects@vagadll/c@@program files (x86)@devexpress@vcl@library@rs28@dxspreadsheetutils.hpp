// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxSpreadSheetUtils.pas' rev: 35.00 (Windows)

#ifndef DxspreadsheetutilsHPP
#define DxspreadsheetutilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Variants.hpp>
#include <System.Math.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Generics.Collections.hpp>
#include <cxGraphics.hpp>
#include <dxCore.hpp>
#include <cxGeometry.hpp>
#include <cxDateUtils.hpp>
#include <cxClasses.hpp>
#include <cxVariants.hpp>
#include <dxSpreadSheetTypes.hpp>
#include <dxSpreadSheetCoreStrs.hpp>
#include <dxTypeHelpers.hpp>
#include <dxSpreadSheetClasses.hpp>
#include <dxSpreadSheetCoreReferences.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxspreadsheetutils
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TdxSpreadSheetColumnHelper;
class DELPHICLASS TdxSpreadSheetExcelColumnWidthHelper;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TdxSpreadSheetCellReferenceOption : unsigned char { croAbsoluteColumn, croAbsoluteRow, croSheetName };

typedef System::Set<TdxSpreadSheetCellReferenceOption, TdxSpreadSheetCellReferenceOption::croAbsoluteColumn, TdxSpreadSheetCellReferenceOption::croSheetName> TdxSpreadSheetCellReferenceOptions;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetColumnHelper : public Dxspreadsheetcorereferences::TdxSpreadSheetColumnReferences
{
	typedef Dxspreadsheetcorereferences::TdxSpreadSheetColumnReferences inherited;
	
public:
	/* TObject.Create */ inline __fastcall TdxSpreadSheetColumnHelper() : Dxspreadsheetcorereferences::TdxSpreadSheetColumnReferences() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSpreadSheetColumnHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetExcelColumnWidthHelper : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Vcl::Graphics::TFont* FFont;
	int FMaxDigitWidth;
	int FTwoSpaceWidth;
	void __fastcall FontChangeHandler(System::TObject* Sender);
	int __fastcall GetMaxDigitWidth();
	int __fastcall GetTwoSpaceWidth();
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	
protected:
	void __fastcall CalculateMaxDigitWidth();
	void __fastcall CalculateTwoSpaceWidth();
	
public:
	__fastcall TdxSpreadSheetExcelColumnWidthHelper();
	__fastcall virtual ~TdxSpreadSheetExcelColumnWidthHelper();
	int __fastcall CharsNumberToPixels(const double ACharsNumber);
	double __fastcall CharsNumberToWidth(const double ACharsNumber);
	int __fastcall PixelsToCharsNumber(const int APixels);
	int __fastcall PixelsToSpacesNumber(const int APixels);
	double __fastcall PixelsToWidth(const int APixels);
	int __fastcall SpacesNumberToPixels(const int ASpaceNumber);
	double __fastcall WidthToCharsNumber(const double AWidth);
	int __fastcall WidthToPixels(const double AWidth);
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property int MaxDigitWidth = {read=GetMaxDigitWidth, nodefault};
	__property int TwoSpaceWidth = {read=GetTwoSpaceWidth, nodefault};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::StaticArray<int, 2> ValueIncr;
extern DELPHI_PACKAGE System::UnicodeString dxSpreadSheetIdentFalse;
extern DELPHI_PACKAGE System::UnicodeString dxSpreadSheetIdentTrue;
extern DELPHI_PACKAGE bool __fastcall dxIsCurrency(const double AValue);
extern DELPHI_PACKAGE bool __fastcall dxIsDateTime(const System::Variant &AValue);
extern DELPHI_PACKAGE bool __fastcall dxIsLogical(const System::Variant &AValue);
extern DELPHI_PACKAGE bool __fastcall dxIsNumberOrDateTime(const System::Variant &AValue);
extern DELPHI_PACKAGE bool __fastcall dxIsNumericOrDateTime(const System::Variant &AValue);
extern DELPHI_PACKAGE bool __fastcall dxIsText(const System::Variant &AValue);
extern DELPHI_PACKAGE bool __fastcall dxTryStrToBool(const System::UnicodeString AText, bool &AValue);
extern DELPHI_PACKAGE bool __fastcall dxTryStrToDateTime(const System::UnicodeString AText, System::TDateTime &AValue, Dxspreadsheetclasses::TdxSpreadSheetFormatSettings* AFormatSettings);
extern DELPHI_PACKAGE bool __fastcall dxTryStrToOrdinal(const System::UnicodeString AText, System::Variant &AValue, Dxspreadsheetclasses::TdxSpreadSheetFormatSettings* AFormatSettings);
extern DELPHI_PACKAGE bool __fastcall dxConvertToXLSDate(const System::Variant &AValue, /* out */ System::TDateTime &ADate);
extern DELPHI_PACKAGE bool __fastcall dxConvertXLSDateToNumeric(const System::Variant &AValue, /* out */ double &AResult);
extern DELPHI_PACKAGE int __fastcall dxEMUToPixels(const __int64 Value)/* overload */;
extern DELPHI_PACKAGE System::Types::TRect __fastcall dxEMUToPixels(const System::Types::TRect &Value)/* overload */;
extern DELPHI_PACKAGE float __fastcall dxEMUToPixelsF(const __int64 Value);
extern DELPHI_PACKAGE __int64 __fastcall dxPixelsToEMU(const int Value);
extern DELPHI_PACKAGE __int64 __fastcall dxPixelsToEMUF(const float Value);
extern DELPHI_PACKAGE System::TDateTime __fastcall dxDateTimeToRealDateTime(const System::TDateTime AValue, Dxspreadsheettypes::TdxSpreadSheetDateTimeSystem ADataTimeSystem);
extern DELPHI_PACKAGE bool __fastcall dxIsValidDateTime(const double AValue);
extern DELPHI_PACKAGE System::TDateTime __fastcall dxRealDateTimeToDateTime(const System::TDateTime AValue, Dxspreadsheettypes::TdxSpreadSheetDateTimeSystem ADataTimeSystem);
extern DELPHI_PACKAGE int __fastcall dxIntPower(const int Base, const int Exp);
extern DELPHI_PACKAGE void __fastcall dxStringToReference(const System::UnicodeString S, /* out */ int &AColumnIndex, /* out */ int &ARowIndex)/* overload */;
extern DELPHI_PACKAGE System::Types::TRect __fastcall dxStringToReferenceArea(const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall dxReferenceToString(const System::Types::TRect &AArea, bool R1C1Reference = false, TdxSpreadSheetCellReferenceOptions AOptions = TdxSpreadSheetCellReferenceOptions() , const System::UnicodeString ASheetName = System::UnicodeString())/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall dxReferenceToString(const int ARow, const int AColumn, bool R1C1Reference = false, TdxSpreadSheetCellReferenceOptions AOptions = TdxSpreadSheetCellReferenceOptions() , const System::UnicodeString ASheetName = System::UnicodeString())/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall dxReferenceToString(const System::Types::TRect &AArea, bool R1C1Reference, const int ARowOrigin, const int AColumnOrigin)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall dxReferenceToString(const int ARowOrigin, const int AColumnOrigin, const Dxspreadsheetcorereferences::TdxSpreadSheetReference &ARow, const Dxspreadsheetcorereferences::TdxSpreadSheetReference &AColumn)/* overload */;
extern DELPHI_PACKAGE void __fastcall dxReferenceToString(System::Sysutils::TStringBuilder* ABuffer, const int ARowOrigin, const int AColumnOrigin, const Dxspreadsheetcorereferences::TdxSpreadSheetReference &ARow, const Dxspreadsheetcorereferences::TdxSpreadSheetReference &AColumn)/* overload */;
extern DELPHI_PACKAGE void __fastcall dxReferenceToString(System::Sysutils::TStringBuilder* ABuffer, const System::Types::TRect &AArea, bool R1C1Reference, const int ARowOrigin, const int AColumnOrigin)/* overload */;
extern DELPHI_PACKAGE int __fastcall dxSpreadSheetCompareText(const void * S1, const void * S2, int L1, int L2)/* overload */;
extern DELPHI_PACKAGE int __fastcall dxSpreadSheetCompareText(const System::UnicodeString S1, const void * S2, int L2 = 0xffffffff)/* overload */;
extern DELPHI_PACKAGE int __fastcall dxSpreadSheetCompareText(const System::UnicodeString S1, const System::UnicodeString S2)/* overload */;
extern DELPHI_PACKAGE bool __fastcall dxSpreadSheetIsFormula(const System::UnicodeString S);
extern DELPHI_PACKAGE System::UnicodeString __fastcall dxSpreadSheetLowerCase(const System::UnicodeString S);
extern DELPHI_PACKAGE System::UnicodeString __fastcall dxSpreadSheetUpperCase(const System::UnicodeString S);
extern DELPHI_PACKAGE int __fastcall dxSpreadSheetVarCompare(const System::Variant &V1, const System::Variant &V2, bool ACaseSensitive = true);
extern DELPHI_PACKAGE int __fastcall dxSpreadSheetVarCompareCore(const System::Variant &V1, const System::Variant &V2);
extern DELPHI_PACKAGE bool __fastcall dxSpreadSheetTextIsEqual(const System::UnicodeString AText1, const System::UnicodeString AText2);
extern DELPHI_PACKAGE System::Types::TRect __fastcall dxSpreadSheetArea(const System::Types::TPoint &ATopLeft, const System::Types::TSize &ASize);
extern DELPHI_PACKAGE int __fastcall dxSpreadSheetAreaHeight(const System::Types::TRect &AArea);
extern DELPHI_PACKAGE int __fastcall dxSpreadSheetAreaWidth(const System::Types::TRect &AArea);
extern DELPHI_PACKAGE System::Types::TSize __fastcall dxSpreadSheetAreaSize(const System::Types::TRect &AArea);
extern DELPHI_PACKAGE System::Types::TRect __fastcall dxSpreadSheetCellsUnion(const System::Types::TRect &AArea1, const System::Types::TRect &AArea2);
extern DELPHI_PACKAGE bool __fastcall dxSpreadSheetContains(const System::Types::TRect &AArea, const System::Types::TRect &ATestArea)/* overload */;
extern DELPHI_PACKAGE bool __fastcall dxSpreadSheetContains(const System::Types::TRect &AArea, int ARow, int AColumn)/* overload */;
extern DELPHI_PACKAGE bool __fastcall dxSpreadSheetContainsColumn(const System::Types::TRect &AArea, int AColumn);
extern DELPHI_PACKAGE bool __fastcall dxSpreadSheetContainsRow(const System::Types::TRect &AArea, int ARow);
extern DELPHI_PACKAGE System::Types::TRect __fastcall dxSpreadSheetEntireSheetArea(void);
extern DELPHI_PACKAGE System::Types::TRect __fastcall dxSpreadSheetGetRealArea(const System::Types::TRect &AArea);
extern DELPHI_PACKAGE bool __fastcall dxSpreadSheetIntersects(const System::Types::TRect &AArea1, const System::Types::TRect &AArea2)/* overload */;
extern DELPHI_PACKAGE bool __fastcall dxSpreadSheetIntersects(const System::Types::TRect &AArea1, const System::Types::TRect &AArea2, System::Types::TRect &AArea3)/* overload */;
extern DELPHI_PACKAGE bool __fastcall dxSpreadSheetIsNullValue(const System::Variant &AValue);
extern DELPHI_PACKAGE bool __fastcall dxSpreadSheetIsSingleCellArea(const System::Types::TRect &R);
extern DELPHI_PACKAGE bool __fastcall dxSpreadSheetIsValidArea(const System::Types::TRect &AArea);
extern DELPHI_PACKAGE bool __fastcall dxSpreadSheetIsValidCellReference(const int ARowIndex, const int AColumnIndex);
extern DELPHI_PACKAGE bool __fastcall dxSpreadSheetIsValidColumnReference(const int AColumnIndex);
extern DELPHI_PACKAGE bool __fastcall dxSpreadSheetIsValidRowReference(const int ARowIndex);
extern DELPHI_PACKAGE bool __fastcall dxSpreadSheetIsEntireArea(const System::Types::TRect &AArea);
extern DELPHI_PACKAGE bool __fastcall dxSpreadSheetIsEntireColumn(const System::Types::TRect &AArea);
extern DELPHI_PACKAGE bool __fastcall dxSpreadSheetIsEntireRow(const System::Types::TRect &AArea);
extern DELPHI_PACKAGE bool __fastcall dxSpreadSheetIsEntireRowOrColumn(const System::Types::TRect &AArea);
extern DELPHI_PACKAGE bool __fastcall dxSpreadSheetIsErrorString(const System::UnicodeString S, Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode &ACode);
extern DELPHI_PACKAGE System::Types::TRect __fastcall dxSpreadSheetOffsetArea(const System::Types::TRect &AArea, int X, int Y);
extern DELPHI_PACKAGE void __fastcall dxSpreadSheetValidateCaption(System::UnicodeString &ACaption);
extern DELPHI_PACKAGE System::UnicodeString __fastcall dxSpreadSheetErrorCodeToString(Dxspreadsheettypes::TdxSpreadSheetFormulaErrorCode ACode);
extern DELPHI_PACKAGE void __fastcall dxSpreadSheetExtractConditionParams(const System::UnicodeString S, Dxspreadsheetclasses::TdxSpreadSheetFormatSettings* const AFormatSettings, System::Variant &AConditionValue, Dxspreadsheettypes::TdxSpreadSheetFormulaOperation &AOperation);
}	/* namespace Dxspreadsheetutils */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXSPREADSHEETUTILS)
using namespace Dxspreadsheetutils;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxspreadsheetutilsHPP
