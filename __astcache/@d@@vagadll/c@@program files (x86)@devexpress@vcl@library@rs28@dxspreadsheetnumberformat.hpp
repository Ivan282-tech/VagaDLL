// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxSpreadSheetNumberFormat.pas' rev: 35.00 (Windows)

#ifndef DxspreadsheetnumberformatHPP
#define DxspreadsheetnumberformatHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>
#include <System.Character.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Variants.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Generics.Defaults.hpp>
#include <dxCore.hpp>
#include <dxCoreGraphics.hpp>
#include <dxCultureInfo.hpp>
#include <cxFormats.hpp>
#include <dxSpreadSheetTypes.hpp>
#include <dxSpreadSheetClasses.hpp>
#include <dxSpreadSheetNumberFormatCore.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxspreadsheetnumberformat
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EdxSpreadSheetNumberFormatError;
struct TdxSpreadSheetNumberFormatResult;
class DELPHICLASS TdxSpreadSheetCustomNumberFormat;
class DELPHICLASS TdxSpreadSheetNumberFormat;
class DELPHICLASS TdxSpreadSheetPredefinedNumberFormat;
class DELPHICLASS TdxSpreadSheetCurrencyFormatHelper;
class DELPHICLASS TdxSpreadSheetNumberFormatSplitter;
class DELPHICLASS TdxSpreadSheetDateTimeFormatHelper;
class DELPHICLASS TdxSpreadSheetDisplayFormatConverter;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION EdxSpreadSheetNumberFormatError : public Dxcore::EdxException
{
	typedef Dxcore::EdxException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EdxSpreadSheetNumberFormatError(const System::UnicodeString Msg) : Dxcore::EdxException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EdxSpreadSheetNumberFormatError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Dxcore::EdxException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EdxSpreadSheetNumberFormatError(NativeUInt Ident)/* overload */ : Dxcore::EdxException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EdxSpreadSheetNumberFormatError(System::PResStringRec ResStringRec)/* overload */ : Dxcore::EdxException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EdxSpreadSheetNumberFormatError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Dxcore::EdxException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EdxSpreadSheetNumberFormatError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Dxcore::EdxException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EdxSpreadSheetNumberFormatError(const System::UnicodeString Msg, int AHelpContext) : Dxcore::EdxException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EdxSpreadSheetNumberFormatError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Dxcore::EdxException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EdxSpreadSheetNumberFormatError(NativeUInt Ident, int AHelpContext)/* overload */ : Dxcore::EdxException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EdxSpreadSheetNumberFormatError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Dxcore::EdxException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EdxSpreadSheetNumberFormatError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Dxcore::EdxException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EdxSpreadSheetNumberFormatError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Dxcore::EdxException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EdxSpreadSheetNumberFormatError() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TdxSpreadSheetNumberFormatCategory : unsigned char { nfcGeneral, nfcNumber, nfcCurrency, nfcAccounting, nfcDate, nfcTime, nfcPercentage, nfcFraction, nfcScientific, nfcText, nfcCustom };

struct DECLSPEC_DRECORD TdxSpreadSheetNumberFormatResult
{
public:
	System::Uitypes::TColor Color;
	bool IsError;
	Dxcore::TdxDefaultBoolean IsText;
	System::UnicodeString Text;
	void __fastcall Reset();
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetCustomNumberFormat : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	virtual Dxspreadsheetnumberformatcore::TdxNumberFormatType __fastcall GetValueType() = 0 ;
	
public:
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxSpreadSheetNumberFormatResult &AResult) = 0 /* overload */;
	void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheettypes::TdxSpreadSheetDateTimeSystem ADateTimeSystem, const System::Sysutils::TFormatSettings &AFormatSettings, TdxSpreadSheetNumberFormatResult &AResult)/* overload */;
	TdxSpreadSheetNumberFormatResult __fastcall Format(const System::Variant &AValue, const System::Sysutils::TFormatSettings &AFormatSettings)/* overload */;
	virtual System::UnicodeString __fastcall GetFormatCode(const int ALocaleID) = 0 /* overload */;
	System::UnicodeString __fastcall GetFormatCode()/* overload */;
	bool __fastcall IsDateTime();
	bool __fastcall IsNumeric();
	bool __fastcall IsText();
	virtual bool __fastcall IsTime() = 0 ;
	__property Dxspreadsheetnumberformatcore::TdxNumberFormatType ValueType = {read=GetValueType, nodefault};
public:
	/* TObject.Create */ inline __fastcall TdxSpreadSheetCustomNumberFormat() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSpreadSheetCustomNumberFormat() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetNumberFormat : public TdxSpreadSheetCustomNumberFormat
{
	typedef TdxSpreadSheetCustomNumberFormat inherited;
	
private:
	Dxspreadsheetnumberformatcore::TdxNumberFormat* FFormat;
	
protected:
	virtual Dxspreadsheetnumberformatcore::TdxNumberFormatType __fastcall GetValueType();
	
public:
	__fastcall TdxSpreadSheetNumberFormat(const System::UnicodeString AFormatCode, int AFormatCodeId)/* overload */;
	__fastcall TdxSpreadSheetNumberFormat(const System::UnicodeString AFormatCode, int AFormatCodeId, int ALocaleId)/* overload */;
	__fastcall virtual ~TdxSpreadSheetNumberFormat();
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxSpreadSheetNumberFormatResult &AResult)/* overload */;
	virtual System::UnicodeString __fastcall GetFormatCode(const int ALocaleID)/* overload */;
	virtual bool __fastcall IsTime();
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheettypes::TdxSpreadSheetDateTimeSystem ADateTimeSystem, const System::Sysutils::TFormatSettings &AFormatSettings, TdxSpreadSheetNumberFormatResult &AResult){ TdxSpreadSheetCustomNumberFormat::Format(AValue, AValueType, ADateTimeSystem, AFormatSettings, AResult); }
	inline TdxSpreadSheetNumberFormatResult __fastcall  Format(const System::Variant &AValue, const System::Sysutils::TFormatSettings &AFormatSettings){ return TdxSpreadSheetCustomNumberFormat::Format(AValue, AFormatSettings); }
	inline System::UnicodeString __fastcall  GetFormatCode(){ return TdxSpreadSheetCustomNumberFormat::GetFormatCode(); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetPredefinedNumberFormat : public TdxSpreadSheetNumberFormat
{
	typedef TdxSpreadSheetNumberFormat inherited;
	
public:
	/* TdxSpreadSheetNumberFormat.Create */ inline __fastcall TdxSpreadSheetPredefinedNumberFormat(const System::UnicodeString AFormatCode, int AFormatCodeId)/* overload */ : TdxSpreadSheetNumberFormat(AFormatCode, AFormatCodeId) { }
	/* TdxSpreadSheetNumberFormat.Create */ inline __fastcall TdxSpreadSheetPredefinedNumberFormat(const System::UnicodeString AFormatCode, int AFormatCodeId, int ALocaleId)/* overload */ : TdxSpreadSheetNumberFormat(AFormatCode, AFormatCodeId, ALocaleId) { }
	/* TdxSpreadSheetNumberFormat.Destroy */ inline __fastcall virtual ~TdxSpreadSheetPredefinedNumberFormat() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetCurrencyFormatHelper : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod System::UnicodeString __fastcall GenerateCurrencyFormat(Cxformats::TdxFormatSettings* const AFormatSettings, const System::UnicodeString AFormatString, const System::UnicodeString APattern, const System::UnicodeString APatternZero, bool ABlindCurrencySymbol = false);
	__classmethod System::UnicodeString __fastcall GetFormat(Dxspreadsheetclasses::TdxSpreadSheetFormatSettings* ASettings, const System::UnicodeString APattern);
	__classmethod System::UnicodeString __fastcall GetNegativeFormat(System::UnicodeString ACurrency, const System::UnicodeString APattern, System::Byte AFormatCode, bool AIncludeCurrencyIntoMarkChar = false);
	__classmethod System::UnicodeString __fastcall GetPositiveFormat(System::UnicodeString ACurrency, const System::UnicodeString APattern, System::Byte AFormatCode, bool AIncludeCurrencyIntoMarkChar = false);
	__classmethod bool __fastcall IsCurrencySymbolFollowsValue(int ANegFormatCode);
public:
	/* TObject.Create */ inline __fastcall TdxSpreadSheetCurrencyFormatHelper() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSpreadSheetCurrencyFormatHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetNumberFormatSplitter : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod void __fastcall Split(const System::UnicodeString AFormatCode, System::Classes::TStringList* AList);
public:
	/* TObject.Create */ inline __fastcall TdxSpreadSheetNumberFormatSplitter() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSpreadSheetNumberFormatSplitter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetDateTimeFormatHelper : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod System::UnicodeString __fastcall GetDefaultFormat(const System::TDateTime AValue);
public:
	/* TObject.Create */ inline __fastcall TdxSpreadSheetDateTimeFormatHelper() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSpreadSheetDateTimeFormatHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetDisplayFormatConverter : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	__classmethod void __fastcall CorrectDigitsPlaces(System::Sysutils::TStringBuilder* AData);
	__classmethod bool __fastcall IsDigitPlaceHolder(const System::WideChar C);
	
public:
	__classmethod System::UnicodeString __fastcall ConvertDateTimeDisplayFormat(const System::UnicodeString S, const System::TDateTime AValue);
	__classmethod System::UnicodeString __fastcall ConvertFloatValueDisplayFormat(const System::UnicodeString S);
	__classmethod System::UnicodeString __fastcall ConvertFloatValueDisplayFormatSection(const System::UnicodeString S);
public:
	/* TObject.Create */ inline __fastcall TdxSpreadSheetDisplayFormatConverter() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSpreadSheetDisplayFormatConverter() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Dxspreadsheettypes::TdxSpreadSheetCellDataType __fastcall dxGetDataTypeByVariantValue(const System::Variant &AValue);
extern DELPHI_PACKAGE TdxSpreadSheetNumberFormatResult __fastcall dxGetFormattedResult(const System::Variant &AValue, const System::UnicodeString AFormatCode)/* overload */;
extern DELPHI_PACKAGE TdxSpreadSheetNumberFormatResult __fastcall dxGetFormattedResult(const System::Variant &AValue, const System::UnicodeString AFormatCode, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* AFormatSettings)/* overload */;
extern DELPHI_PACKAGE bool __fastcall dxIsNumericType(Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType);
}	/* namespace Dxspreadsheetnumberformat */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXSPREADSHEETNUMBERFORMAT)
using namespace Dxspreadsheetnumberformat;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxspreadsheetnumberformatHPP
