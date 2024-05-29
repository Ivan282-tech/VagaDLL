// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxSpreadSheetNumberFormatCore.pas' rev: 35.00 (Windows)

#ifndef DxspreadsheetnumberformatcoreHPP
#define DxspreadsheetnumberformatcoreHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <Winapi.Windows.hpp>
#include <System.Types.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Math.hpp>
#include <System.StrUtils.hpp>
#include <System.Variants.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Generics.Defaults.hpp>
#include <dxCore.hpp>
#include <cxGraphics.hpp>
#include <dxSpreadSheetCoreStrs.hpp>
#include <dxSpreadSheetUtils.hpp>
#include <dxSpreadSheetTypes.hpp>
#include <dxSpreadSheetClasses.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxspreadsheetnumberformatcore
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TdxNumberFormatCodeAbstractBuilder;
class DELPHICLASS TdxNumberFormatResult;
struct TdxNumberFormatFloatRec;
class DELPHICLASS TdxNumberFormat;
class DELPHICLASS TdxNumberFormatDesignator;
class DELPHICLASS TdxNumberFormatElement;
class DELPHICLASS TdxNumberFormatElementList;
class DELPHICLASS TdxSimpleNumberFormat;
class DELPHICLASS TdxSimpleNumberFormatList;
class DELPHICLASS TdxNumberFormatElementGeneral;
class DELPHICLASS TdxNumberFormatElementCondition;
class DELPHICLASS TdxNumberFormatElementColor;
class DELPHICLASS TdxNumberFormatElementDigitZero;
class DELPHICLASS TdxNumberFormatElementDigitEmpty;
class DELPHICLASS TdxNumberFormatElementDigitSpace;
class DELPHICLASS TdxNumberFormatElementTextContent;
class DELPHICLASS TdxNumberFormatElementTextBase;
class DELPHICLASS TdxNumberFormatElementBackslashedText;
class DELPHICLASS TdxNumberFormatElementDisplayLocale;
class DELPHICLASS TdxNumberFormatElementDateBase;
class DELPHICLASS TdxNumberFormatElementTimeBase;
class DELPHICLASS TdxNumberFormatElementAmPm;
class DELPHICLASS TdxNumberFormatElementHours;
class DELPHICLASS TdxNumberFormatElementMinutes;
class DELPHICLASS TdxNumberFormatElementSeconds;
class DELPHICLASS TdxNumberFormatElementMilliseconds;
class DELPHICLASS TdxNumberFormatElementExprCondition;
class DELPHICLASS TdxNumberFormatElementAsterisk;
class DELPHICLASS TdxNumberFormatElementUnderline;
class DELPHICLASS TdxNumberFormatElementDecimalSeparator;
class DELPHICLASS TdxNumberFormatElementDefaultDateSeparator;
class DELPHICLASS TdxNumberFormatElementDateSeparator;
class DELPHICLASS TdxNumberFormatElementTimeSeparator;
class DELPHICLASS TdxNumberFormatElementQuotedText;
class DELPHICLASS TdxNumberFormatElementDay;
class DELPHICLASS TdxNumberFormatElementDayOfWeek;
class DELPHICLASS TdxNumberFormatElementMonth;
class DELPHICLASS TdxNumberFormatElementYear;
class DELPHICLASS TdxNumberFormatElementThaiYear;
class DELPHICLASS TdxNumberFormatElementInvariantYear;
class DELPHICLASS TdxNumberFormatElementJapaneseEra;
class DELPHICLASS TdxNumberFormatElementPercent;
class DELPHICLASS TdxDateTimeNumberFormatBase;
class DELPHICLASS TdxDateTimeSystemDateTimeNumberFormat;
class DELPHICLASS TdxDateTimeSystemLongDateNumberFormat;
class DELPHICLASS TdxDateTimeSystemLongTimeNumberFormat;
class DELPHICLASS TdxDateTimeSystemShortDateNumberFormat;
class DELPHICLASS TdxDateTimeSystemFullDateTimeNumberFormat;
class DELPHICLASS TdxDateTimeNumberFormat;
class DELPHICLASS TdxGeneralNumberFormat;
class DELPHICLASS TdxTextNumberFormat;
class DELPHICLASS TdxConditionalNumberFormat;
class DELPHICLASS TdxSimpleNumericNumberFormat;
class DELPHICLASS TdxNumericNumberFormatExponent;
class DELPHICLASS TdxNumericFractionNumberFormat;
class DELPHICLASS TdxExplicitNumericFractionNumberFormat;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatCodeAbstractBuilder : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	virtual System::Sysutils::TFormatSettings __fastcall GetFormatSettings() = 0 ;
	
public:
	void __fastcall Append(const int V)/* overload */;
	virtual void __fastcall Append(const System::UnicodeString V) = 0 /* overload */;
	virtual void __fastcall AppendDesignator(int ID) = 0 ;
	virtual bool __fastcall MustBeEscaped(System::WideChar AChar) = 0 ;
	__property System::Sysutils::TFormatSettings FormatSettings = {read=GetFormatSettings};
public:
	/* TObject.Create */ inline __fastcall TdxNumberFormatCodeAbstractBuilder() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatCodeAbstractBuilder() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TdxNumberFormatType : unsigned char { nftDateTime, nftGeneral, nftNumeric, nftText };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatResult : public System::Sysutils::TStringBuilder
{
	typedef System::Sysutils::TStringBuilder inherited;
	
public:
	System::Uitypes::TColor Color;
	bool IsError;
	Dxcore::TdxDefaultBoolean IsText;
	virtual void __fastcall AfterConstruction();
	void __fastcall FillBySpaces(int AStartIndex);
public:
	/* TStringBuilder.Create */ inline __fastcall TdxNumberFormatResult()/* overload */ : System::Sysutils::TStringBuilder() { }
	/* TStringBuilder.Create */ inline __fastcall TdxNumberFormatResult(int aCapacity)/* overload */ : System::Sysutils::TStringBuilder(aCapacity) { }
	/* TStringBuilder.Create */ inline __fastcall TdxNumberFormatResult(const System::UnicodeString Value)/* overload */ : System::Sysutils::TStringBuilder(Value) { }
	/* TStringBuilder.Create */ inline __fastcall TdxNumberFormatResult(int aCapacity, int aMaxCapacity)/* overload */ : System::Sysutils::TStringBuilder(aCapacity, aMaxCapacity) { }
	/* TStringBuilder.Create */ inline __fastcall TdxNumberFormatResult(const System::UnicodeString Value, int aCapacity)/* overload */ : System::Sysutils::TStringBuilder(Value, aCapacity) { }
	/* TStringBuilder.Create */ inline __fastcall TdxNumberFormatResult(const System::UnicodeString Value, int StartIndex, int Length, int aCapacity)/* overload */ : System::Sysutils::TStringBuilder(Value, StartIndex, Length, aCapacity) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatResult() { }
	
};

#pragma pack(pop)

struct DECLSPEC_DRECORD TdxNumberFormatFloatRec
{
public:
	static const System::Int8 MaxDigits = System::Int8(0x13);
	
	
private:
	void __fastcall CalculateDigitCount(int ADecimals);
	void __fastcall Initialize(const System::Extended AValue, int ADecimals);
	void __fastcall MoveDigits(int ADelta);
	
public:
	System::Sysutils::TFloatRec Data;
	int DigitCount;
	int FirstDecimal;
	static TdxNumberFormatFloatRec __fastcall Create(const System::Extended AValue, int ADecimals);
	System::Byte __fastcall GetDigit(int AIndex);
	bool __fastcall SetDigit(int AIndex, System::Byte AValue);
	void __fastcall RoundTo(int ADecimals);
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormat : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	virtual TdxNumberFormatType __fastcall GetValueType() = 0 ;
	
public:
	virtual void __fastcall BuildCode(TdxNumberFormatCodeAbstractBuilder* const ABuilder) = 0 ;
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult);
	virtual bool __fastcall IsTimeFormat() = 0 ;
	__property TdxNumberFormatType ValueType = {read=GetValueType, nodefault};
public:
	/* TObject.Create */ inline __fastcall TdxNumberFormat() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormat() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatDesignator : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::Int8 Default = System::Int8(0x0);
	
	static const System::Int8 AmPm = System::Int8(0x1);
	
	static const System::Int8 Asterisk = System::Int8(0x2);
	
	static const System::Int8 At = System::Int8(0x4);
	
	static const System::Int8 Backslash = System::Int8(0x8);
	
	static const System::Int8 Bracket = System::Int8(0x10);
	
	static const System::Int8 DateSeparator = System::Int8(0x20);
	
	static const System::Int8 Day = System::Int8(0x40);
	
	static const System::Byte DayOfWeek = System::Byte(0x80);
	
	static const System::Word DigitEmpty = System::Word(0x100);
	
	static const System::Word DigitSpace = System::Word(0x200);
	
	static const System::Word DigitZero = System::Word(0x400);
	
	static const System::Word DecimalSeparator = System::Word(0x800);
	
	static const System::Word EndOfPart = System::Word(0x1000);
	
	static const System::Word Exponent = System::Word(0x2000);
	
	static const System::Word FractionOrDateSeparator = System::Word(0x4000);
	
	static const System::Word General = System::Word(0x8000);
	
	static const int GroupSeparator = int(0x10000);
	
	static const int Hour = int(0x20000);
	
	static const int InvariantYear = int(0x40000);
	
	static const int JapaneseEra = int(0x80000);
	
	static const int Minute = int(0x100000);
	
	static const int Month = int(0x200000);
	
	static const int Percent = int(0x400000);
	
	static const int Quote = int(0x800000);
	
	static const int Second = int(0x1000000);
	
	static const int ThaiYear = int(0x2000000);
	
	static const int TimeSeparator = int(0x4000000);
	
	static const int Underline = int(0x8000000);
	
	static const int Year = int(0x10000000);
	
public:
	/* TObject.Create */ inline __fastcall TdxNumberFormatDesignator() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatDesignator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElement : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual void __fastcall BuildCode(TdxNumberFormatCodeAbstractBuilder* const ABuilder);
	System::UnicodeString __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, System::Uitypes::TColor &AColor)/* overload */;
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult) = 0 /* overload */;
	System::UnicodeString __fastcall FormatEmpty(Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, System::Uitypes::TColor &AColor)/* overload */;
	virtual void __fastcall FormatEmpty(Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult)/* overload */;
	virtual int __fastcall Designator() = 0 ;
	virtual bool __fastcall IsDigit();
public:
	/* TObject.Create */ inline __fastcall TdxNumberFormatElement() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElement() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxNumberFormatElementList : public System::Generics::Collections::TObjectList__1<TdxNumberFormatElement*>
{
	typedef System::Generics::Collections::TObjectList__1<TdxNumberFormatElement*> inherited;
	
public:
	void __fastcall BuildCode(TdxNumberFormatCodeAbstractBuilder* const ABuilder);
	void __fastcall ExtractFrom(TdxNumberFormatElementList* Source);
public:
	/* {System_Generics_Collections}TObjectList<dxSpreadSheetNumberFormatCore_TdxNumberFormatElement>.Create */ inline __fastcall TdxNumberFormatElementList()/* overload */ : System::Generics::Collections::TObjectList__1<TdxNumberFormatElement*>() { }
	/* {System_Generics_Collections}TObjectList<dxSpreadSheetNumberFormatCore_TdxNumberFormatElement>.Create */ inline __fastcall TdxNumberFormatElementList(bool AOwnsObjects)/* overload */ : System::Generics::Collections::TObjectList__1<TdxNumberFormatElement*>(AOwnsObjects) { }
	/* {System_Generics_Collections}TObjectList<dxSpreadSheetNumberFormatCore_TdxNumberFormatElement>.Create */ inline __fastcall TdxNumberFormatElementList(const System::DelphiInterface<System::Generics::Defaults::IComparer__1<TdxNumberFormatElement*> > AComparer, bool AOwnsObjects)/* overload */ : System::Generics::Collections::TObjectList__1<TdxNumberFormatElement*>(AComparer, AOwnsObjects) { }
	/* {System_Generics_Collections}TObjectList<dxSpreadSheetNumberFormatCore_TdxNumberFormatElement>.Create */ inline __fastcall TdxNumberFormatElementList(System::Generics::Collections::TEnumerable__1<TdxNumberFormatElement*>* const Collection, bool AOwnsObjects)/* overload */ : System::Generics::Collections::TObjectList__1<TdxNumberFormatElement*>(Collection, AOwnsObjects) { }
	/* {System_Generics_Collections}TObjectList<dxSpreadSheetNumberFormatCore_TdxNumberFormatElement>.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementList() { }
	
public:
	/* {System_Generics_Collections}TList<dxSpreadSheetNumberFormatCore_TdxNumberFormatElement>.Create */ inline __fastcall TdxNumberFormatElementList(const System::DelphiInterface<System::Generics::Defaults::IComparer__1<TdxNumberFormatElement*> > AComparer)/* overload */ : System::Generics::Collections::TObjectList__1<TdxNumberFormatElement*>(AComparer) { }
	/* {System_Generics_Collections}TList<dxSpreadSheetNumberFormatCore_TdxNumberFormatElement>.Create */ inline __fastcall TdxNumberFormatElementList(System::Generics::Collections::TEnumerable__1<TdxNumberFormatElement*>* const Collection)/* overload */ : System::Generics::Collections::TObjectList__1<TdxNumberFormatElement*>(Collection) { }
	/* {System_Generics_Collections}TList<dxSpreadSheetNumberFormatCore_TdxNumberFormatElement>.Create */ inline __fastcall TdxNumberFormatElementList(TdxNumberFormatElement* const *Values, const int Values_High)/* overload */ : System::Generics::Collections::TObjectList__1<TdxNumberFormatElement*>(Values, Values_High) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSimpleNumberFormat : public TdxNumberFormat
{
	typedef TdxNumberFormat inherited;
	
protected:
	TdxNumberFormatElementList* FList;
	
public:
	__fastcall TdxSimpleNumberFormat(TdxNumberFormatElementList* AElements);
	__fastcall virtual ~TdxSimpleNumberFormat();
	virtual void __fastcall BuildCode(TdxNumberFormatCodeAbstractBuilder* const ABuilder);
	virtual bool __fastcall IsTimeFormat();
	__property TdxNumberFormatElementList* List = {read=FList};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxSimpleNumberFormatList : public System::Generics::Collections::TObjectList__1<TdxSimpleNumberFormat*>
{
	typedef System::Generics::Collections::TObjectList__1<TdxSimpleNumberFormat*> inherited;
	
public:
	void __fastcall BuildCode(TdxNumberFormatCodeAbstractBuilder* const ABuilder);
	void __fastcall ExtractFrom(TdxSimpleNumberFormatList* Source);
public:
	/* {System_Generics_Collections}TObjectList<dxSpreadSheetNumberFormatCore_TdxSimpleNumberFormat>.Create */ inline __fastcall TdxSimpleNumberFormatList()/* overload */ : System::Generics::Collections::TObjectList__1<TdxSimpleNumberFormat*>() { }
	/* {System_Generics_Collections}TObjectList<dxSpreadSheetNumberFormatCore_TdxSimpleNumberFormat>.Create */ inline __fastcall TdxSimpleNumberFormatList(bool AOwnsObjects)/* overload */ : System::Generics::Collections::TObjectList__1<TdxSimpleNumberFormat*>(AOwnsObjects) { }
	/* {System_Generics_Collections}TObjectList<dxSpreadSheetNumberFormatCore_TdxSimpleNumberFormat>.Create */ inline __fastcall TdxSimpleNumberFormatList(const System::DelphiInterface<System::Generics::Defaults::IComparer__1<TdxSimpleNumberFormat*> > AComparer, bool AOwnsObjects)/* overload */ : System::Generics::Collections::TObjectList__1<TdxSimpleNumberFormat*>(AComparer, AOwnsObjects) { }
	/* {System_Generics_Collections}TObjectList<dxSpreadSheetNumberFormatCore_TdxSimpleNumberFormat>.Create */ inline __fastcall TdxSimpleNumberFormatList(System::Generics::Collections::TEnumerable__1<TdxSimpleNumberFormat*>* const Collection, bool AOwnsObjects)/* overload */ : System::Generics::Collections::TObjectList__1<TdxSimpleNumberFormat*>(Collection, AOwnsObjects) { }
	/* {System_Generics_Collections}TObjectList<dxSpreadSheetNumberFormatCore_TdxSimpleNumberFormat>.Destroy */ inline __fastcall virtual ~TdxSimpleNumberFormatList() { }
	
public:
	/* {System_Generics_Collections}TList<dxSpreadSheetNumberFormatCore_TdxSimpleNumberFormat>.Create */ inline __fastcall TdxSimpleNumberFormatList(const System::DelphiInterface<System::Generics::Defaults::IComparer__1<TdxSimpleNumberFormat*> > AComparer)/* overload */ : System::Generics::Collections::TObjectList__1<TdxSimpleNumberFormat*>(AComparer) { }
	/* {System_Generics_Collections}TList<dxSpreadSheetNumberFormatCore_TdxSimpleNumberFormat>.Create */ inline __fastcall TdxSimpleNumberFormatList(System::Generics::Collections::TEnumerable__1<TdxSimpleNumberFormat*>* const Collection)/* overload */ : System::Generics::Collections::TObjectList__1<TdxSimpleNumberFormat*>(Collection) { }
	/* {System_Generics_Collections}TList<dxSpreadSheetNumberFormatCore_TdxSimpleNumberFormat>.Create */ inline __fastcall TdxSimpleNumberFormatList(TdxSimpleNumberFormat* const *Values, const int Values_High)/* overload */ : System::Generics::Collections::TObjectList__1<TdxSimpleNumberFormat*>(Values, Values_High) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementGeneral : public TdxNumberFormatElement
{
	typedef TdxNumberFormatElement inherited;
	
public:
	virtual int __fastcall Designator();
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult)/* overload */;
public:
	/* TObject.Create */ inline __fastcall TdxNumberFormatElementGeneral() : TdxNumberFormatElement() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementGeneral() { }
	
	/* Hoisted overloads: */
	
public:
	inline System::UnicodeString __fastcall  Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, System::Uitypes::TColor &AColor){ return TdxNumberFormatElement::Format(AValue, AValueType, AFormatSettings, AColor); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementCondition : public TdxNumberFormatElement
{
	typedef TdxNumberFormatElement inherited;
	
protected:
	virtual void __fastcall BuildCodeCore(TdxNumberFormatCodeAbstractBuilder* const ABuilder) = 0 ;
	
public:
	virtual void __fastcall BuildCode(TdxNumberFormatCodeAbstractBuilder* const ABuilder) _FINAL_ATTRIBUTE;
	virtual int __fastcall Designator();
public:
	/* TObject.Create */ inline __fastcall TdxNumberFormatElementCondition() : TdxNumberFormatElement() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementCondition() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementColor : public TdxNumberFormatElementCondition
{
	typedef TdxNumberFormatElementCondition inherited;
	
public:
	#define TdxNumberFormatElementColor_Prefix L"Color"
	
	
private:
	System::Uitypes::TColor FColor;
	int FColorIndex;
	
protected:
	virtual void __fastcall BuildCodeCore(TdxNumberFormatCodeAbstractBuilder* const ABuilder);
	
public:
	__fastcall TdxNumberFormatElementColor(System::Uitypes::TColor AColor, int AIndex);
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult)/* overload */;
	__property System::Uitypes::TColor Color = {read=FColor, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementColor() { }
	
	/* Hoisted overloads: */
	
public:
	inline System::UnicodeString __fastcall  Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, System::Uitypes::TColor &AColor){ return TdxNumberFormatElement::Format(AValue, AValueType, AFormatSettings, AColor); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementDigitZero : public TdxNumberFormatElement
{
	typedef TdxNumberFormatElement inherited;
	
public:
	virtual int __fastcall Designator();
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult)/* overload */;
	virtual void __fastcall FormatEmpty(Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult)/* overload */;
	virtual bool __fastcall IsDigit();
public:
	/* TObject.Create */ inline __fastcall TdxNumberFormatElementDigitZero() : TdxNumberFormatElement() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementDigitZero() { }
	
	/* Hoisted overloads: */
	
public:
	inline System::UnicodeString __fastcall  Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, System::Uitypes::TColor &AColor){ return TdxNumberFormatElement::Format(AValue, AValueType, AFormatSettings, AColor); }
	inline System::UnicodeString __fastcall  FormatEmpty(Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, System::Uitypes::TColor &AColor){ return TdxNumberFormatElement::FormatEmpty(AFormatSettings, AColor); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementDigitEmpty : public TdxNumberFormatElementDigitZero
{
	typedef TdxNumberFormatElementDigitZero inherited;
	
public:
	virtual int __fastcall Designator();
	virtual void __fastcall FormatEmpty(Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult)/* overload */;
public:
	/* TObject.Create */ inline __fastcall TdxNumberFormatElementDigitEmpty() : TdxNumberFormatElementDigitZero() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementDigitEmpty() { }
	
	/* Hoisted overloads: */
	
public:
	inline System::UnicodeString __fastcall  FormatEmpty(Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, System::Uitypes::TColor &AColor){ return TdxNumberFormatElement::FormatEmpty(AFormatSettings, AColor); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementDigitSpace : public TdxNumberFormatElementDigitZero
{
	typedef TdxNumberFormatElementDigitZero inherited;
	
public:
	virtual int __fastcall Designator();
	virtual void __fastcall FormatEmpty(Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult)/* overload */;
public:
	/* TObject.Create */ inline __fastcall TdxNumberFormatElementDigitSpace() : TdxNumberFormatElementDigitZero() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementDigitSpace() { }
	
	/* Hoisted overloads: */
	
public:
	inline System::UnicodeString __fastcall  FormatEmpty(Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, System::Uitypes::TColor &AColor){ return TdxNumberFormatElement::FormatEmpty(AFormatSettings, AColor); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementTextContent : public TdxNumberFormatElement
{
	typedef TdxNumberFormatElement inherited;
	
public:
	virtual int __fastcall Designator();
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult)/* overload */;
public:
	/* TObject.Create */ inline __fastcall TdxNumberFormatElementTextContent() : TdxNumberFormatElement() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementTextContent() { }
	
	/* Hoisted overloads: */
	
public:
	inline System::UnicodeString __fastcall  Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, System::Uitypes::TColor &AColor){ return TdxNumberFormatElement::Format(AValue, AValueType, AFormatSettings, AColor); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementTextBase : public TdxNumberFormatElement
{
	typedef TdxNumberFormatElement inherited;
	
private:
	System::UnicodeString FText;
	
public:
	__fastcall TdxNumberFormatElementTextBase(const System::UnicodeString AText);
	virtual void __fastcall BuildCode(TdxNumberFormatCodeAbstractBuilder* const ABuilder);
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult)/* overload */;
	__property System::UnicodeString Text = {read=FText};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementTextBase() { }
	
	/* Hoisted overloads: */
	
public:
	inline System::UnicodeString __fastcall  Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, System::Uitypes::TColor &AColor){ return TdxNumberFormatElement::Format(AValue, AValueType, AFormatSettings, AColor); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementBackslashedText : public TdxNumberFormatElementTextBase
{
	typedef TdxNumberFormatElementTextBase inherited;
	
public:
	virtual void __fastcall BuildCode(TdxNumberFormatCodeAbstractBuilder* const ABuilder);
	virtual int __fastcall Designator();
public:
	/* TdxNumberFormatElementTextBase.Create */ inline __fastcall TdxNumberFormatElementBackslashedText(const System::UnicodeString AText) : TdxNumberFormatElementTextBase(AText) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementBackslashedText() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementDisplayLocale : public TdxNumberFormatElementCondition
{
	typedef TdxNumberFormatElementCondition inherited;
	
private:
	System::UnicodeString FCurrency;
	int FLocaleId;
	
protected:
	virtual void __fastcall BuildCodeCore(TdxNumberFormatCodeAbstractBuilder* const ABuilder);
	
public:
	__fastcall TdxNumberFormatElementDisplayLocale(int ALocaleId, const System::UnicodeString ACurrency);
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult)/* overload */;
	__property System::UnicodeString Currency = {read=FCurrency};
	__property int LocaleId = {read=FLocaleId, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementDisplayLocale() { }
	
	/* Hoisted overloads: */
	
public:
	inline System::UnicodeString __fastcall  Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, System::Uitypes::TColor &AColor){ return TdxNumberFormatElement::Format(AValue, AValueType, AFormatSettings, AColor); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementDateBase : public TdxNumberFormatElement
{
	typedef TdxNumberFormatElement inherited;
	
private:
	int FCount;
	
protected:
	virtual void __fastcall AdjustDateTime(System::TDateTime &AValue, Dxspreadsheettypes::TdxSpreadSheetDateTimeSystem ADateSystem);
	void __fastcall FormatDateTime(const System::UnicodeString AMacro, System::TDateTime AValue, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult);
	
public:
	__fastcall TdxNumberFormatElementDateBase(int ACount);
	virtual void __fastcall BuildCode(TdxNumberFormatCodeAbstractBuilder* const ABuilder);
	__property int Count = {read=FCount, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementDateBase() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementTimeBase : public TdxNumberFormatElementDateBase
{
	typedef TdxNumberFormatElementDateBase inherited;
	
private:
	bool FElapsed;
	
protected:
	virtual __int64 __fastcall ExtractTimeValue(const System::TDateTime ADateTime) = 0 ;
	
public:
	__fastcall TdxNumberFormatElementTimeBase(int ACount, bool AElapsed);
	virtual void __fastcall BuildCode(TdxNumberFormatCodeAbstractBuilder* const ABuilder);
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult)/* overload */;
	__property bool Elapsed = {read=FElapsed, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementTimeBase() { }
	
	/* Hoisted overloads: */
	
public:
	inline System::UnicodeString __fastcall  Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, System::Uitypes::TColor &AColor){ return TdxNumberFormatElement::Format(AValue, AValueType, AFormatSettings, AColor); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementAmPm : public TdxNumberFormatElementDateBase
{
	typedef TdxNumberFormatElementDateBase inherited;
	
private:
	bool FIsAMLower;
	bool FIsPMLower;
	System::UnicodeString __fastcall GetSuffix(bool AIsAM);
	
public:
	__fastcall TdxNumberFormatElementAmPm();
	__fastcall TdxNumberFormatElementAmPm(bool AIsAMLower, bool AIsPMLower);
	virtual void __fastcall BuildCode(TdxNumberFormatCodeAbstractBuilder* const ABuilder);
	virtual int __fastcall Designator();
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementAmPm() { }
	
	/* Hoisted overloads: */
	
public:
	inline System::UnicodeString __fastcall  Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, System::Uitypes::TColor &AColor){ return TdxNumberFormatElement::Format(AValue, AValueType, AFormatSettings, AColor); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementHours : public TdxNumberFormatElementTimeBase
{
	typedef TdxNumberFormatElementTimeBase inherited;
	
private:
	bool FIs12HourTime;
	
protected:
	virtual __int64 __fastcall ExtractTimeValue(const System::TDateTime ADateTime);
	
public:
	__fastcall TdxNumberFormatElementHours(int ACount, bool AElapsed, bool AIs12HourTime);
	virtual int __fastcall Designator();
	__property bool Is12HourTime = {read=FIs12HourTime, write=FIs12HourTime, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementHours() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementMinutes : public TdxNumberFormatElementTimeBase
{
	typedef TdxNumberFormatElementTimeBase inherited;
	
protected:
	virtual __int64 __fastcall ExtractTimeValue(const System::TDateTime ADateTime);
	
public:
	virtual int __fastcall Designator();
public:
	/* TdxNumberFormatElementTimeBase.Create */ inline __fastcall TdxNumberFormatElementMinutes(int ACount, bool AElapsed) : TdxNumberFormatElementTimeBase(ACount, AElapsed) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementMinutes() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementSeconds : public TdxNumberFormatElementTimeBase
{
	typedef TdxNumberFormatElementTimeBase inherited;
	
protected:
	virtual __int64 __fastcall ExtractTimeValue(const System::TDateTime ADateTime);
	
public:
	virtual int __fastcall Designator();
public:
	/* TdxNumberFormatElementTimeBase.Create */ inline __fastcall TdxNumberFormatElementSeconds(int ACount, bool AElapsed) : TdxNumberFormatElementTimeBase(ACount, AElapsed) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementSeconds() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementMilliseconds : public TdxNumberFormatElementTimeBase
{
	typedef TdxNumberFormatElementTimeBase inherited;
	
protected:
	virtual __int64 __fastcall ExtractTimeValue(const System::TDateTime ADateTime);
	
public:
	virtual void __fastcall BuildCode(TdxNumberFormatCodeAbstractBuilder* const ABuilder);
	virtual int __fastcall Designator();
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult)/* overload */;
public:
	/* TdxNumberFormatElementTimeBase.Create */ inline __fastcall TdxNumberFormatElementMilliseconds(int ACount, bool AElapsed) : TdxNumberFormatElementTimeBase(ACount, AElapsed) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementMilliseconds() { }
	
	/* Hoisted overloads: */
	
public:
	inline System::UnicodeString __fastcall  Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, System::Uitypes::TColor &AColor){ return TdxNumberFormatElement::Format(AValue, AValueType, AFormatSettings, AColor); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementExprCondition : public TdxNumberFormatElementCondition
{
	typedef TdxNumberFormatElementCondition inherited;
	
private:
	System::UnicodeString FExpression;
	
protected:
	virtual void __fastcall BuildCodeCore(TdxNumberFormatCodeAbstractBuilder* const ABuilder);
	
public:
	__fastcall TdxNumberFormatElementExprCondition(const System::UnicodeString AExpression);
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult)/* overload */;
	__property System::UnicodeString Expression = {read=FExpression};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementExprCondition() { }
	
	/* Hoisted overloads: */
	
public:
	inline System::UnicodeString __fastcall  Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, System::Uitypes::TColor &AColor){ return TdxNumberFormatElement::Format(AValue, AValueType, AFormatSettings, AColor); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementAsterisk : public TdxNumberFormatElementTextBase
{
	typedef TdxNumberFormatElementTextBase inherited;
	
public:
	virtual int __fastcall Designator();
public:
	/* TdxNumberFormatElementTextBase.Create */ inline __fastcall TdxNumberFormatElementAsterisk(const System::UnicodeString AText) : TdxNumberFormatElementTextBase(AText) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementAsterisk() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementUnderline : public TdxNumberFormatElementBackslashedText
{
	typedef TdxNumberFormatElementBackslashedText inherited;
	
public:
	virtual void __fastcall BuildCode(TdxNumberFormatCodeAbstractBuilder* const ABuilder);
	virtual int __fastcall Designator();
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult)/* overload */;
public:
	/* TdxNumberFormatElementTextBase.Create */ inline __fastcall TdxNumberFormatElementUnderline(const System::UnicodeString AText) : TdxNumberFormatElementBackslashedText(AText) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementUnderline() { }
	
	/* Hoisted overloads: */
	
public:
	inline System::UnicodeString __fastcall  Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, System::Uitypes::TColor &AColor){ return TdxNumberFormatElement::Format(AValue, AValueType, AFormatSettings, AColor); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementDecimalSeparator : public TdxNumberFormatElement
{
	typedef TdxNumberFormatElement inherited;
	
public:
	virtual int __fastcall Designator();
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult)/* overload */;
public:
	/* TObject.Create */ inline __fastcall TdxNumberFormatElementDecimalSeparator() : TdxNumberFormatElement() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementDecimalSeparator() { }
	
	/* Hoisted overloads: */
	
public:
	inline System::UnicodeString __fastcall  Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, System::Uitypes::TColor &AColor){ return TdxNumberFormatElement::Format(AValue, AValueType, AFormatSettings, AColor); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementDefaultDateSeparator : public TdxNumberFormatElement
{
	typedef TdxNumberFormatElement inherited;
	
public:
	virtual int __fastcall Designator();
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult)/* overload */;
public:
	/* TObject.Create */ inline __fastcall TdxNumberFormatElementDefaultDateSeparator() : TdxNumberFormatElement() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementDefaultDateSeparator() { }
	
	/* Hoisted overloads: */
	
public:
	inline System::UnicodeString __fastcall  Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, System::Uitypes::TColor &AColor){ return TdxNumberFormatElement::Format(AValue, AValueType, AFormatSettings, AColor); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementDateSeparator : public TdxNumberFormatElement
{
	typedef TdxNumberFormatElement inherited;
	
public:
	virtual int __fastcall Designator();
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult)/* overload */;
public:
	/* TObject.Create */ inline __fastcall TdxNumberFormatElementDateSeparator() : TdxNumberFormatElement() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementDateSeparator() { }
	
	/* Hoisted overloads: */
	
public:
	inline System::UnicodeString __fastcall  Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, System::Uitypes::TColor &AColor){ return TdxNumberFormatElement::Format(AValue, AValueType, AFormatSettings, AColor); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementTimeSeparator : public TdxNumberFormatElement
{
	typedef TdxNumberFormatElement inherited;
	
public:
	virtual int __fastcall Designator();
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult)/* overload */;
public:
	/* TObject.Create */ inline __fastcall TdxNumberFormatElementTimeSeparator() : TdxNumberFormatElement() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementTimeSeparator() { }
	
	/* Hoisted overloads: */
	
public:
	inline System::UnicodeString __fastcall  Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, System::Uitypes::TColor &AColor){ return TdxNumberFormatElement::Format(AValue, AValueType, AFormatSettings, AColor); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementQuotedText : public TdxNumberFormatElementTextBase
{
	typedef TdxNumberFormatElementTextBase inherited;
	
public:
	virtual void __fastcall BuildCode(TdxNumberFormatCodeAbstractBuilder* const ABuilder);
	virtual int __fastcall Designator();
public:
	/* TdxNumberFormatElementTextBase.Create */ inline __fastcall TdxNumberFormatElementQuotedText(const System::UnicodeString AText) : TdxNumberFormatElementTextBase(AText) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementQuotedText() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementDay : public TdxNumberFormatElementDateBase
{
	typedef TdxNumberFormatElementDateBase inherited;
	
public:
	virtual int __fastcall Designator();
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult)/* overload */;
public:
	/* TdxNumberFormatElementDateBase.Create */ inline __fastcall TdxNumberFormatElementDay(int ACount) : TdxNumberFormatElementDateBase(ACount) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementDay() { }
	
	/* Hoisted overloads: */
	
public:
	inline System::UnicodeString __fastcall  Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, System::Uitypes::TColor &AColor){ return TdxNumberFormatElement::Format(AValue, AValueType, AFormatSettings, AColor); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementDayOfWeek : public TdxNumberFormatElementDateBase
{
	typedef TdxNumberFormatElementDateBase inherited;
	
public:
	virtual int __fastcall Designator();
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult)/* overload */;
public:
	/* TdxNumberFormatElementDateBase.Create */ inline __fastcall TdxNumberFormatElementDayOfWeek(int ACount) : TdxNumberFormatElementDateBase(ACount) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementDayOfWeek() { }
	
	/* Hoisted overloads: */
	
public:
	inline System::UnicodeString __fastcall  Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, System::Uitypes::TColor &AColor){ return TdxNumberFormatElement::Format(AValue, AValueType, AFormatSettings, AColor); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementMonth : public TdxNumberFormatElementDateBase
{
	typedef TdxNumberFormatElementDateBase inherited;
	
protected:
	virtual void __fastcall AdjustDateTime(System::TDateTime &AValue, Dxspreadsheettypes::TdxSpreadSheetDateTimeSystem ADateSystem);
	
public:
	virtual int __fastcall Designator();
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult)/* overload */;
public:
	/* TdxNumberFormatElementDateBase.Create */ inline __fastcall TdxNumberFormatElementMonth(int ACount) : TdxNumberFormatElementDateBase(ACount) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementMonth() { }
	
	/* Hoisted overloads: */
	
public:
	inline System::UnicodeString __fastcall  Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, System::Uitypes::TColor &AColor){ return TdxNumberFormatElement::Format(AValue, AValueType, AFormatSettings, AColor); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementYear : public TdxNumberFormatElementDateBase
{
	typedef TdxNumberFormatElementDateBase inherited;
	
protected:
	virtual void __fastcall AdjustDateTime(System::TDateTime &AValue, Dxspreadsheettypes::TdxSpreadSheetDateTimeSystem ADateSystem);
	
public:
	virtual int __fastcall Designator();
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult)/* overload */;
public:
	/* TdxNumberFormatElementDateBase.Create */ inline __fastcall TdxNumberFormatElementYear(int ACount) : TdxNumberFormatElementDateBase(ACount) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementYear() { }
	
	/* Hoisted overloads: */
	
public:
	inline System::UnicodeString __fastcall  Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, System::Uitypes::TColor &AColor){ return TdxNumberFormatElement::Format(AValue, AValueType, AFormatSettings, AColor); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementThaiYear : public TdxNumberFormatElementYear
{
	typedef TdxNumberFormatElementYear inherited;
	
protected:
	virtual void __fastcall AdjustDateTime(System::TDateTime &AValue, Dxspreadsheettypes::TdxSpreadSheetDateTimeSystem ADateSystem);
	
public:
	virtual int __fastcall Designator();
public:
	/* TdxNumberFormatElementDateBase.Create */ inline __fastcall TdxNumberFormatElementThaiYear(int ACount) : TdxNumberFormatElementYear(ACount) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementThaiYear() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementInvariantYear : public TdxNumberFormatElementYear
{
	typedef TdxNumberFormatElementYear inherited;
	
public:
	virtual int __fastcall Designator();
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult)/* overload */;
public:
	/* TdxNumberFormatElementDateBase.Create */ inline __fastcall TdxNumberFormatElementInvariantYear(int ACount) : TdxNumberFormatElementYear(ACount) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementInvariantYear() { }
	
	/* Hoisted overloads: */
	
public:
	inline System::UnicodeString __fastcall  Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, System::Uitypes::TColor &AColor){ return TdxNumberFormatElement::Format(AValue, AValueType, AFormatSettings, AColor); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementJapaneseEra : public TdxNumberFormatElementDateBase
{
	typedef TdxNumberFormatElementDateBase inherited;
	
public:
	virtual int __fastcall Designator();
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult)/* overload */;
public:
	/* TdxNumberFormatElementDateBase.Create */ inline __fastcall TdxNumberFormatElementJapaneseEra(int ACount) : TdxNumberFormatElementDateBase(ACount) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementJapaneseEra() { }
	
	/* Hoisted overloads: */
	
public:
	inline System::UnicodeString __fastcall  Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, System::Uitypes::TColor &AColor){ return TdxNumberFormatElement::Format(AValue, AValueType, AFormatSettings, AColor); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumberFormatElementPercent : public TdxNumberFormatElement
{
	typedef TdxNumberFormatElement inherited;
	
public:
	virtual int __fastcall Designator();
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult)/* overload */;
public:
	/* TObject.Create */ inline __fastcall TdxNumberFormatElementPercent() : TdxNumberFormatElement() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxNumberFormatElementPercent() { }
	
	/* Hoisted overloads: */
	
public:
	inline System::UnicodeString __fastcall  Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, System::Uitypes::TColor &AColor){ return TdxNumberFormatElement::Format(AValue, AValueType, AFormatSettings, AColor); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxDateTimeNumberFormatBase : public TdxSimpleNumberFormat
{
	typedef TdxSimpleNumberFormat inherited;
	
public:
	static const System::Word SystemLongDate = System::Word(0xf800);
	
	static const System::Word SystemLongTime = System::Word(0xf400);
	
	
protected:
	virtual void __fastcall FormatDateTime(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult);
	virtual TdxNumberFormatType __fastcall GetValueType();
	
public:
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult);
	virtual bool __fastcall HasMilliseconds();
public:
	/* TdxSimpleNumberFormat.Create */ inline __fastcall TdxDateTimeNumberFormatBase(TdxNumberFormatElementList* AElements) : TdxSimpleNumberFormat(AElements) { }
	/* TdxSimpleNumberFormat.Destroy */ inline __fastcall virtual ~TdxDateTimeNumberFormatBase() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxDateTimeSystemDateTimeNumberFormat : public TdxDateTimeNumberFormatBase
{
	typedef TdxDateTimeNumberFormatBase inherited;
	
private:
	System::UnicodeString FFormatTemplate;
	TdxNumberFormat* FFormatter;
	void __fastcall SetFormatTemplate(const System::UnicodeString Value);
	
protected:
	virtual void __fastcall FormatDateTime(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult);
	virtual System::UnicodeString __fastcall GetFormatString(const System::Sysutils::TFormatSettings &AData) = 0 ;
	__property System::UnicodeString FormatTemplate = {read=FFormatTemplate, write=SetFormatTemplate};
	__property TdxNumberFormat* Formatter = {read=FFormatter};
	
public:
	__fastcall virtual ~TdxDateTimeSystemDateTimeNumberFormat();
	virtual void __fastcall AfterConstruction();
	virtual void __fastcall BuildCode(TdxNumberFormatCodeAbstractBuilder* const ABuilder);
	virtual bool __fastcall IsTimeFormat();
public:
	/* TdxSimpleNumberFormat.Create */ inline __fastcall TdxDateTimeSystemDateTimeNumberFormat(TdxNumberFormatElementList* AElements) : TdxDateTimeNumberFormatBase(AElements) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxDateTimeSystemLongDateNumberFormat : public TdxDateTimeSystemDateTimeNumberFormat
{
	typedef TdxDateTimeSystemDateTimeNumberFormat inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetFormatString(const System::Sysutils::TFormatSettings &AData);
public:
	/* TdxDateTimeSystemDateTimeNumberFormat.Destroy */ inline __fastcall virtual ~TdxDateTimeSystemLongDateNumberFormat() { }
	
public:
	/* TdxSimpleNumberFormat.Create */ inline __fastcall TdxDateTimeSystemLongDateNumberFormat(TdxNumberFormatElementList* AElements) : TdxDateTimeSystemDateTimeNumberFormat(AElements) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxDateTimeSystemLongTimeNumberFormat : public TdxDateTimeSystemDateTimeNumberFormat
{
	typedef TdxDateTimeSystemDateTimeNumberFormat inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetFormatString(const System::Sysutils::TFormatSettings &AData);
public:
	/* TdxDateTimeSystemDateTimeNumberFormat.Destroy */ inline __fastcall virtual ~TdxDateTimeSystemLongTimeNumberFormat() { }
	
public:
	/* TdxSimpleNumberFormat.Create */ inline __fastcall TdxDateTimeSystemLongTimeNumberFormat(TdxNumberFormatElementList* AElements) : TdxDateTimeSystemDateTimeNumberFormat(AElements) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxDateTimeSystemShortDateNumberFormat : public TdxDateTimeSystemDateTimeNumberFormat
{
	typedef TdxDateTimeSystemDateTimeNumberFormat inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetFormatString(const System::Sysutils::TFormatSettings &AData);
public:
	/* TdxDateTimeSystemDateTimeNumberFormat.Destroy */ inline __fastcall virtual ~TdxDateTimeSystemShortDateNumberFormat() { }
	
public:
	/* TdxSimpleNumberFormat.Create */ inline __fastcall TdxDateTimeSystemShortDateNumberFormat(TdxNumberFormatElementList* AElements) : TdxDateTimeSystemDateTimeNumberFormat(AElements) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxDateTimeSystemFullDateTimeNumberFormat : public TdxDateTimeSystemDateTimeNumberFormat
{
	typedef TdxDateTimeSystemDateTimeNumberFormat inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetFormatString(const System::Sysutils::TFormatSettings &AData);
public:
	/* TdxDateTimeSystemDateTimeNumberFormat.Destroy */ inline __fastcall virtual ~TdxDateTimeSystemFullDateTimeNumberFormat() { }
	
public:
	/* TdxSimpleNumberFormat.Create */ inline __fastcall TdxDateTimeSystemFullDateTimeNumberFormat(TdxNumberFormatElementList* AElements) : TdxDateTimeSystemDateTimeNumberFormat(AElements) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxDateTimeNumberFormat : public TdxDateTimeNumberFormatBase
{
	typedef TdxDateTimeNumberFormatBase inherited;
	
private:
	bool FHasMilliseconds;
	TdxNumberFormatElementDisplayLocale* FLocale;
	
public:
	__fastcall TdxDateTimeNumberFormat(TdxNumberFormatElementList* AElements, TdxNumberFormatElementDisplayLocale* ALocale, bool AHasMilliseconds);
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult);
	virtual bool __fastcall HasMilliseconds();
public:
	/* TdxSimpleNumberFormat.Destroy */ inline __fastcall virtual ~TdxDateTimeNumberFormat() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxGeneralNumberFormat : public TdxSimpleNumberFormat
{
	typedef TdxSimpleNumberFormat inherited;
	
private:
	static TdxGeneralNumberFormat* FDefault;
	static TdxGeneralNumberFormat* __fastcall GetDefault();
	
protected:
	virtual TdxNumberFormatType __fastcall GetValueType();
	__classmethod void __fastcall Finalize();
	
public:
	__fastcall TdxGeneralNumberFormat()/* overload */;
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult);
	virtual bool __fastcall IsTimeFormat();
	/* static */ __property TdxGeneralNumberFormat* Default = {read=GetDefault};
public:
	/* TdxSimpleNumberFormat.Destroy */ inline __fastcall virtual ~TdxGeneralNumberFormat() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTextNumberFormat : public TdxSimpleNumberFormat
{
	typedef TdxSimpleNumberFormat inherited;
	
protected:
	virtual TdxNumberFormatType __fastcall GetValueType();
	
public:
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult);
public:
	/* TdxSimpleNumberFormat.Create */ inline __fastcall TdxTextNumberFormat(TdxNumberFormatElementList* AElements) : TdxSimpleNumberFormat(AElements) { }
	/* TdxSimpleNumberFormat.Destroy */ inline __fastcall virtual ~TdxTextNumberFormat() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxConditionalNumberFormat : public TdxGeneralNumberFormat
{
	typedef TdxGeneralNumberFormat inherited;
	
private:
	TdxSimpleNumberFormatList* FParts;
	TdxNumberFormat* __fastcall CalculateActualPart(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType);
	
protected:
	virtual TdxNumberFormatType __fastcall GetValueType();
	__property TdxSimpleNumberFormatList* Parts = {read=FParts};
	
public:
	__fastcall TdxConditionalNumberFormat(TdxSimpleNumberFormatList* AFormats);
	__fastcall virtual ~TdxConditionalNumberFormat();
	virtual void __fastcall BuildCode(TdxNumberFormatCodeAbstractBuilder* const ABuilder);
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult);
	virtual bool __fastcall IsTimeFormat();
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxSimpleNumericNumberFormat : public TdxSimpleNumberFormat
{
	typedef TdxSimpleNumberFormat inherited;
	
protected:
	int FDecimalCount;
	int FDecimalSeparatorIndex;
	int FDisplayFactor;
	double FDisplayFactorPower;
	bool FGrouping;
	int FIntegerCount;
	bool FIsNegativePart;
	int FPercentCount;
	void __fastcall BuildCodeCore(TdxNumberFormatCodeAbstractBuilder* const ABuilder, int AEndIndex);
	void __fastcall InsertSign(System::Sysutils::TStringBuilder* ABuffer, bool AIsNegative, int AIndex = 0x0);
	void __fastcall FormatDecimalPart(TdxNumberFormatResult* ABuffer, const TdxNumberFormatFloatRec &AValue, int AStartIndex, int AEndIndex, int ADigits, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings);
	void __fastcall FormatIntegerPart(TdxNumberFormatResult* ABuffer, const TdxNumberFormatFloatRec &AValue, int AStartIndex, int AEndIndex, int ADigitCount, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings)/* overload */;
	System::UnicodeString __fastcall FormatIntegerPart(const TdxNumberFormatFloatRec &AValue, int AStartIndex, int AEndIndex, int ADigitCount, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings)/* overload */;
	void __fastcall FormatSimple(const TdxNumberFormatFloatRec &AValue, int AEndIndex, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult);
	virtual TdxNumberFormatType __fastcall GetValueType();
	
public:
	__fastcall TdxSimpleNumericNumberFormat(TdxNumberFormatElementList* AElements, int APercentCount, int AIntegerCount, int ADecimalCount, int ADisplayFactor, int ADecimalSeparatorIndex, bool AGrouping, bool AIsNegativePart);
	virtual void __fastcall BuildCode(TdxNumberFormatCodeAbstractBuilder* const ABuilder);
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult);
public:
	/* TdxSimpleNumberFormat.Destroy */ inline __fastcall virtual ~TdxSimpleNumericNumberFormat() { }
	
};


class PASCALIMPLEMENTATION TdxNumericNumberFormatExponent : public TdxSimpleNumericNumberFormat
{
	typedef TdxSimpleNumericNumberFormat inherited;
	
private:
	int FExpCount;
	int FExpIndex;
	bool FExplicitSign;
	int __fastcall CalculateExponent(const TdxNumberFormatFloatRec &AValue);
	
public:
	__fastcall TdxNumericNumberFormatExponent(TdxNumberFormatElementList* AElements, int AIntegerCount, int ADecimalCount, int ADecimalSeparatorIndex, int AExpIndex, int AExpCount, bool AExplicitSign, bool AGrouping, bool AIsNegativePart);
	virtual void __fastcall BuildCode(TdxNumberFormatCodeAbstractBuilder* const ABuilder);
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult);
public:
	/* TdxSimpleNumberFormat.Destroy */ inline __fastcall virtual ~TdxNumericNumberFormatExponent() { }
	
};


class PASCALIMPLEMENTATION TdxNumericFractionNumberFormat : public TdxSimpleNumericNumberFormat
{
	typedef TdxSimpleNumericNumberFormat inherited;
	
protected:
	int FDividendCount;
	int FDivisorCount;
	int FDivisorIndex;
	virtual System::Generics::Collections::TPair__2<double,int> __fastcall CalculateRationalApproximation(double AValue);
	virtual void __fastcall FormatDivisor(int ADivisor, int AEndIndex, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult);
	void __fastcall FormatZeroIntegerPart(int AStartIndex, int AEndIndex, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult);
	
public:
	__fastcall TdxNumericFractionNumberFormat(TdxNumberFormatElementList* AElements, int APercentCount, int AIntegerCount, int APreFractionIndex, int AFractionSeparatorIndex, int ADivisorIndex, int ADividendCount, int ADivisorCount, bool AGrouping, bool AIsNegativePart);
	virtual void __fastcall BuildCode(TdxNumberFormatCodeAbstractBuilder* const ABuilder);
	virtual void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult);
	__property int FractionSeparatorIndex = {read=FDecimalCount, nodefault};
public:
	/* TdxSimpleNumberFormat.Destroy */ inline __fastcall virtual ~TdxNumericFractionNumberFormat() { }
	
};


class PASCALIMPLEMENTATION TdxExplicitNumericFractionNumberFormat : public TdxNumericFractionNumberFormat
{
	typedef TdxNumericFractionNumberFormat inherited;
	
protected:
	virtual System::Generics::Collections::TPair__2<double,int> __fastcall CalculateRationalApproximation(double AValue);
	virtual void __fastcall FormatDivisor(int ADivisor, int AEndIndex, Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* const AFormatSettings, TdxNumberFormatResult* AResult);
	
public:
	virtual void __fastcall BuildCode(TdxNumberFormatCodeAbstractBuilder* const ABuilder);
	__property int ExplicitDivisor = {read=FDivisorCount, nodefault};
public:
	/* TdxNumericFractionNumberFormat.Create */ inline __fastcall TdxExplicitNumericFractionNumberFormat(TdxNumberFormatElementList* AElements, int APercentCount, int AIntegerCount, int APreFractionIndex, int AFractionSeparatorIndex, int ADivisorIndex, int ADividendCount, int ADivisorCount, bool AGrouping, bool AIsNegativePart) : TdxNumericFractionNumberFormat(AElements, APercentCount, AIntegerCount, APreFractionIndex, AFractionSeparatorIndex, ADivisorIndex, ADividendCount, ADivisorCount, AGrouping, AIsNegativePart) { }
	
public:
	/* TdxSimpleNumberFormat.Destroy */ inline __fastcall virtual ~TdxExplicitNumericFractionNumberFormat() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dxspreadsheetnumberformatcore */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXSPREADSHEETNUMBERFORMATCORE)
using namespace Dxspreadsheetnumberformatcore;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxspreadsheetnumberformatcoreHPP
