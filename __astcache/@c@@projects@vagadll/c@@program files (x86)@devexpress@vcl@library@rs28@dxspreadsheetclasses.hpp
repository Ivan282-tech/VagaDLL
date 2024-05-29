// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxSpreadSheetClasses.pas' rev: 35.00 (Windows)

#ifndef DxspreadsheetclassesHPP
#define DxspreadsheetclassesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Hash.hpp>
#include <System.UITypes.hpp>
#include <System.AnsiStrings.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Generics.Collections.hpp>
#include <Vcl.Graphics.hpp>
#include <dxCore.hpp>
#include <dxCoreClasses.hpp>
#include <cxGraphics.hpp>
#include <dxGDIPlusAPI.hpp>
#include <dxGDIPlusClasses.hpp>
#include <dxHash.hpp>
#include <dxHashUtils.hpp>
#include <cxDateUtils.hpp>
#include <dxSpreadSheetTypes.hpp>
#include <cxClasses.hpp>
#include <cxFormats.hpp>
#include <dxSpreadSheetCoreStrs.hpp>
#include <dxSpreadSheetGraphics.hpp>
#include <cxVariants.hpp>
#include <dxSpreadSheetCoreStyles.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxspreadsheetclasses
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EdxSpreadSheetError;
class DELPHICLASS TdxSpreadSheetCustomFormatSettings;
class DELPHICLASS TdxSpreadSheetFormatSettings;
__interface DELPHIINTERFACE IdxSpreadSheetObjectLink;
typedef System::DelphiInterface<IdxSpreadSheetObjectLink> _di_IdxSpreadSheetObjectLink;
class DELPHICLASS TdxSpreadSheetObjectLink;
class DELPHICLASS TdxSpreadSheetInvalidObject;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION EdxSpreadSheetError : public Dxcore::EdxException
{
	typedef Dxcore::EdxException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EdxSpreadSheetError(const System::UnicodeString Msg) : Dxcore::EdxException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EdxSpreadSheetError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Dxcore::EdxException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EdxSpreadSheetError(NativeUInt Ident)/* overload */ : Dxcore::EdxException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EdxSpreadSheetError(System::PResStringRec ResStringRec)/* overload */ : Dxcore::EdxException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EdxSpreadSheetError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Dxcore::EdxException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EdxSpreadSheetError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Dxcore::EdxException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EdxSpreadSheetError(const System::UnicodeString Msg, int AHelpContext) : Dxcore::EdxException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EdxSpreadSheetError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Dxcore::EdxException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EdxSpreadSheetError(NativeUInt Ident, int AHelpContext)/* overload */ : Dxcore::EdxException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EdxSpreadSheetError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Dxcore::EdxException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EdxSpreadSheetError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Dxcore::EdxException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EdxSpreadSheetError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Dxcore::EdxException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EdxSpreadSheetError() { }
	
};

#pragma pack(pop)

;

;

;

;

;

;

;

;

;

;

;

;

;

;

;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetCustomFormatSettings : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	virtual int __fastcall GetLocaleID();
	
public:
	Cxdateutils::TcxCustomCalendarTable* Calendar;
	System::Sysutils::TFormatSettings Data;
	Dxspreadsheettypes::TdxSpreadSheetDateTimeSystem DateTimeSystem;
	__fastcall TdxSpreadSheetCustomFormatSettings();
	virtual void __fastcall Assign(TdxSpreadSheetCustomFormatSettings* ASource);
	virtual void __fastcall UpdateSettings();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSpreadSheetCustomFormatSettings() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetFormatSettings : public TdxSpreadSheetCustomFormatSettings
{
	typedef TdxSpreadSheetCustomFormatSettings inherited;
	
private:
	System::WideChar __fastcall GetDecimalSeparator();
	System::WideChar __fastcall GetListSeparator();
	void __fastcall SetDecimalSeparator(const System::WideChar AValue);
	void __fastcall SetListSeparator(const System::WideChar AValue);
	
protected:
	void __fastcall UpdateBreakChars();
	void __fastcall UpdateOperations();
	
public:
	System::WideChar ArraySeparator;
	System::UnicodeString BreakChars;
	System::UnicodeString CurrencyFormat;
	Dxspreadsheettypes::TdxSpreadSheetOperationStrings Operations;
	bool R1C1Reference;
	virtual void __fastcall Assign(TdxSpreadSheetCustomFormatSettings* ASource);
	virtual bool __fastcall ExpandExternalLinks();
	virtual System::UnicodeString __fastcall GetFunctionName(const void * AName);
	virtual void __fastcall UpdateSettings();
	__property System::WideChar DecimalSeparator = {read=GetDecimalSeparator, write=SetDecimalSeparator, nodefault};
	__property System::WideChar ListSeparator = {read=GetListSeparator, write=SetListSeparator, nodefault};
public:
	/* TdxSpreadSheetCustomFormatSettings.Create */ inline __fastcall TdxSpreadSheetFormatSettings() : TdxSpreadSheetCustomFormatSettings() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSpreadSheetFormatSettings() { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{9C19004A-C805-4E44-9991-77FE1C44C0A4}") IdxSpreadSheetObjectLink  : public System::IInterface 
{
	virtual System::TObject* __fastcall GetObject() = 0 ;
	virtual void __fastcall ReleaseObject() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetObjectLink : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::TObject* FObject;
	
public:
	__fastcall TdxSpreadSheetObjectLink(System::TObject* AObject);
	System::TObject* __fastcall GetObject();
	void __fastcall ReleaseObject();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSpreadSheetObjectLink() { }
	
private:
	void *__IdxSpreadSheetObjectLink;	// IdxSpreadSheetObjectLink 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {9C19004A-C805-4E44-9991-77FE1C44C0A4}
	operator _di_IdxSpreadSheetObjectLink()
	{
		_di_IdxSpreadSheetObjectLink intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxSpreadSheetObjectLink*(void) { return (IdxSpreadSheetObjectLink*)&__IdxSpreadSheetObjectLink; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetInvalidObject : public Dxcoreclasses::TcxIUnknownObject
{
	typedef Dxcoreclasses::TcxIUnknownObject inherited;
	
private:
	System::TObject* __fastcall GetObject();
	void __fastcall ReleaseObject();
	
public:
	__classmethod void __fastcall AssignTo(void *AObject);
	__classmethod System::TObject* __fastcall Instance();
	__classmethod bool __fastcall IsInvalid(System::TObject* const AObject);
	__classmethod bool __fastcall IsLive(System::TObject* const AObject);
public:
	/* TObject.Create */ inline __fastcall TdxSpreadSheetInvalidObject() : Dxcoreclasses::TcxIUnknownObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSpreadSheetInvalidObject() { }
	
private:
	void *__IdxSpreadSheetObjectLink;	// IdxSpreadSheetObjectLink 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {9C19004A-C805-4E44-9991-77FE1C44C0A4}
	operator _di_IdxSpreadSheetObjectLink()
	{
		_di_IdxSpreadSheetObjectLink intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxSpreadSheetObjectLink*(void) { return (IdxSpreadSheetObjectLink*)&__IdxSpreadSheetObjectLink; }
	#endif
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::UnicodeString __fastcall dxFloatToStr(const double AValue, const System::Sysutils::TFormatSettings &AFormatSettings);
extern DELPHI_PACKAGE bool __fastcall dxTryStrToFloat(const System::UnicodeString AValue, double &AFloatValue, const System::Sysutils::TFormatSettings &AFormatSettings);
extern DELPHI_PACKAGE bool __fastcall dxTryStrToNumeric(const System::UnicodeString AStr, /* out */ double &ANumeric);
}	/* namespace Dxspreadsheetclasses */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXSPREADSHEETCLASSES)
using namespace Dxspreadsheetclasses;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxspreadsheetclassesHPP
