// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxSpreadSheetCoreStyles.pas' rev: 35.00 (Windows)

#ifndef DxspreadsheetcorestylesHPP
#define DxspreadsheetcorestylesHPP

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
#include <System.Types.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Generics.Collections.hpp>
#include <Vcl.Graphics.hpp>
#include <dxCore.hpp>
#include <dxCoreClasses.hpp>
#include <cxGeometry.hpp>
#include <cxGraphics.hpp>
#include <dxGDIPlusAPI.hpp>
#include <dxGDIPlusClasses.hpp>
#include <dxHash.hpp>
#include <dxHashUtils.hpp>
#include <cxClasses.hpp>
#include <cxFormats.hpp>
#include <cxVariants.hpp>
#include <dxSpreadSheetTypes.hpp>
#include <dxSpreadSheetGraphics.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxspreadsheetcorestyles
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TdxSpreadSheetBordersHandle;
class DELPHICLASS TdxSpreadSheetBorders;
class DELPHICLASS TdxSpreadSheetBrushHandle;
class DELPHICLASS TdxSpreadSheetCustomBrush;
class DELPHICLASS TdxSpreadSheetBrushes;
class DELPHICLASS TdxSpreadSheetFontHandle;
class DELPHICLASS TdxSpreadSheetCustomFont;
class DELPHICLASS TdxSpreadSheetFont;
class DELPHICLASS TdxSpreadSheetFonts;
class DELPHICLASS TdxSpreadSheetFormatHandle;
class DELPHICLASS TdxSpreadSheetPredefinedFormats;
class DELPHICLASS TdxSpreadSheetCustomDataFormat;
class DELPHICLASS TdxSpreadSheetFormats;
class DELPHICLASS TdxSpreadSheetSharedImageHandle;
class DELPHICLASS TdxSpreadSheetSharedImages;
class DELPHICLASS TdxSpreadSheetSharedString;
class DELPHICLASS TdxSpreadSheetSharedStringTable;
class DELPHICLASS TdxSpreadSheetFormattedSharedStringRun;
class DELPHICLASS TdxSpreadSheetFormattedSharedStringRuns;
class DELPHICLASS TdxSpreadSheetFormattedSharedString;
class DELPHICLASS TdxSpreadSheetCellStyleHandle;
class DELPHICLASS TdxSpreadSheetCellStyleHandleList;
class DELPHICLASS TdxSpreadSheetCellStyles;
class DELPHICLASS TdxSpreadSheetFormattedSharedStringCache;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetBordersHandle : public Dxhashutils::TdxHashTableItem
{
	typedef Dxhashutils::TdxHashTableItem inherited;
	
protected:
	virtual void __fastcall CalculateHash(int &AHash)/* overload */;
	virtual bool __fastcall DoIsEqual(Dxhashutils::TdxHashTableItem* const AItem);
	
public:
	System::StaticArray<System::Uitypes::TColor, 4> BorderColor;
	System::StaticArray<bool, 4> BorderIsAuto;
	System::StaticArray<Dxspreadsheetgraphics::TdxSpreadSheetCellBorderStyle, 4> BorderStyle;
	__fastcall virtual TdxSpreadSheetBordersHandle(Dxhashutils::TdxDynamicItemList* AOwner, int AIndex);
	HIDESBASE void __fastcall Assign(TdxSpreadSheetBordersHandle* ASource)/* overload */;
	HIDESBASE void __fastcall Assign(TdxSpreadSheetBordersHandle* ASource, Cxgeometry::TcxBorder ABorder)/* overload */;
	TdxSpreadSheetBordersHandle* __fastcall Clone();
	HIDESBASE bool __fastcall IsEqual(TdxSpreadSheetBordersHandle* ASource, Cxgeometry::TcxBorder ABorder)/* overload */;
	HIDESBASE bool __fastcall IsEqual(TdxSpreadSheetBordersHandle* ASource, Cxgeometry::TcxBorder ABorder, Cxgeometry::TcxBorder ASourceBorder)/* overload */;
	void __fastcall LoadFromStream(Cxvariants::TcxReader* AReader);
	void __fastcall SaveToStream(Cxvariants::TcxWriter* AWriter);
public:
	/* TdxHashTableItem.Destroy */ inline __fastcall virtual ~TdxSpreadSheetBordersHandle() { }
	
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  CalculateHash(){ Dxhashutils::TdxHashTableItem::CalculateHash(); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetBorders : public Dxhashutils::TdxHashTable
{
	typedef Dxhashutils::TdxHashTable inherited;
	
private:
	TdxSpreadSheetBordersHandle* FDefaultBorders;
	TdxSpreadSheetCellStyles* FStyles;
	
public:
	__fastcall TdxSpreadSheetBorders(TdxSpreadSheetCellStyles* AStyles)/* overload */;
	__fastcall virtual ~TdxSpreadSheetBorders();
	TdxSpreadSheetBordersHandle* __fastcall AddBorders(TdxSpreadSheetBordersHandle* const ABorders);
	TdxSpreadSheetBordersHandle* __fastcall AddClone(TdxSpreadSheetBordersHandle* const ABorders);
	TdxSpreadSheetBordersHandle* __fastcall CreateBorders();
	TdxSpreadSheetBordersHandle* __fastcall CreateFromStream(Cxvariants::TcxReader* AReader);
	__property TdxSpreadSheetBordersHandle* DefaultBorders = {read=FDefaultBorders};
	__property TdxSpreadSheetCellStyles* Styles = {read=FStyles};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetBrushHandle : public Dxhashutils::TdxHashTableItem
{
	typedef Dxhashutils::TdxHashTableItem inherited;
	
protected:
	virtual void __fastcall CalculateHash(int &AHash)/* overload */;
	virtual bool __fastcall DoIsEqual(Dxhashutils::TdxHashTableItem* const AItem);
	
public:
	System::Uitypes::TColor BackgroundColor;
	System::Uitypes::TColor ForegroundColor;
	Dxspreadsheetgraphics::TdxSpreadSheetCellFillStyle Style;
	__fastcall virtual TdxSpreadSheetBrushHandle(Dxhashutils::TdxDynamicItemList* AOwner, int AIndex);
	HIDESBASE void __fastcall Assign(TdxSpreadSheetBrushHandle* ASource)/* overload */;
	TdxSpreadSheetBrushHandle* __fastcall Clone();
	void __fastcall LoadFromStream(Cxvariants::TcxReader* AReader);
	void __fastcall SaveToStream(Cxvariants::TcxWriter* AWriter);
public:
	/* TdxHashTableItem.Destroy */ inline __fastcall virtual ~TdxSpreadSheetBrushHandle() { }
	
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  CalculateHash(){ Dxhashutils::TdxHashTableItem::CalculateHash(); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetCustomBrush : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TdxSpreadSheetBrushes* FBrushes;
	System::Uitypes::TColor __fastcall GetBackgroundColor();
	System::Uitypes::TColor __fastcall GetForegroundColor();
	bool __fastcall GetIsDefault();
	Dxspreadsheetgraphics::TdxSpreadSheetCellFillStyle __fastcall GetStyle();
	void __fastcall SetBackgroundColor(const System::Uitypes::TColor Value);
	void __fastcall SetForegroundColor(const System::Uitypes::TColor Value);
	void __fastcall SetStyle(const Dxspreadsheetgraphics::TdxSpreadSheetCellFillStyle Value);
	
protected:
	void __fastcall ChangeBrush(Dxspreadsheetgraphics::TdxSpreadSheetCellFillStyle AStyle, System::Uitypes::TColor ABackgroundColor, System::Uitypes::TColor AForegroundColor);
	virtual TdxSpreadSheetBrushHandle* __fastcall GetHandle() = 0 ;
	virtual void __fastcall SetHandle(TdxSpreadSheetBrushHandle* const AValue) = 0 ;
	__property TdxSpreadSheetBrushes* Brushes = {read=FBrushes};
	__property TdxSpreadSheetBrushHandle* Handle = {read=GetHandle, write=SetHandle};
	
public:
	__fastcall TdxSpreadSheetCustomBrush(TdxSpreadSheetBrushes* ABrushes);
	virtual void __fastcall Assign(TdxSpreadSheetCustomBrush* ABrush);
	__property System::Uitypes::TColor BackgroundColor = {read=GetBackgroundColor, write=SetBackgroundColor, nodefault};
	__property System::Uitypes::TColor ForegroundColor = {read=GetForegroundColor, write=SetForegroundColor, nodefault};
	__property Dxspreadsheetgraphics::TdxSpreadSheetCellFillStyle Style = {read=GetStyle, write=SetStyle, nodefault};
	__property bool IsDefault = {read=GetIsDefault, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSpreadSheetCustomBrush() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetBrushes : public Dxhashutils::TdxHashTable
{
	typedef Dxhashutils::TdxHashTable inherited;
	
private:
	TdxSpreadSheetBrushHandle* FDefaultBrush;
	TdxSpreadSheetCellStyles* FStyles;
	
public:
	__fastcall TdxSpreadSheetBrushes(TdxSpreadSheetCellStyles* AStyles)/* overload */;
	__fastcall virtual ~TdxSpreadSheetBrushes();
	TdxSpreadSheetBrushHandle* __fastcall AddBrush(TdxSpreadSheetBrushHandle* const ABrush);
	TdxSpreadSheetBrushHandle* __fastcall AddClone(TdxSpreadSheetBrushHandle* const ABrush);
	TdxSpreadSheetBrushHandle* __fastcall CreateBrush();
	TdxSpreadSheetBrushHandle* __fastcall CreateFromStream(Cxvariants::TcxReader* AReader);
	__property TdxSpreadSheetBrushHandle* DefaultBrush = {read=FDefaultBrush};
	__property TdxSpreadSheetCellStyles* Styles = {read=FStyles};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetFontHandle : public Dxhashutils::TdxHashTableItem
{
	typedef Dxhashutils::TdxHashTableItem inherited;
	
private:
	Vcl::Graphics::TFont* FGraphicObject;
	Vcl::Graphics::TFont* __fastcall GetGraphicObject();
	
protected:
	virtual void __fastcall CalculateHash(int &AHash)/* overload */;
	virtual bool __fastcall DoIsEqual(Dxhashutils::TdxHashTableItem* const AItem);
	
public:
	System::Uitypes::TFontCharset Charset;
	System::Uitypes::TColor Color;
	System::Uitypes::TFontName Name;
	System::Uitypes::TFontPitch Pitch;
	Dxspreadsheettypes::TdxSpreadSheetFontScript Script;
	int Size;
	System::Uitypes::TFontStyles Style;
	__fastcall virtual ~TdxSpreadSheetFontHandle();
	HIDESBASE void __fastcall Assign(TdxSpreadSheetFontHandle* ASource)/* overload */;
	virtual void __fastcall AssignToFont(Vcl::Graphics::TFont* ATargetFont);
	TdxSpreadSheetFontHandle* __fastcall Clone();
	void __fastcall FlushCache();
	void __fastcall Initialize(const System::Uitypes::TFontName AName, System::Uitypes::TFontCharset ACharset, System::Uitypes::TColor AColor, int ASize, System::Uitypes::TFontPitch APitch, System::Uitypes::TFontStyles AStyle);
	void __fastcall LoadFromStream(Cxvariants::TcxReader* AReader);
	void __fastcall SaveToStream(Cxvariants::TcxWriter* AWriter);
	__property Vcl::Graphics::TFont* GraphicObject = {read=GetGraphicObject};
public:
	/* TdxDynamicListItem.Create */ inline __fastcall virtual TdxSpreadSheetFontHandle(Dxhashutils::TdxDynamicItemList* AOwner, int AIndex) : Dxhashutils::TdxHashTableItem(AOwner, AIndex) { }
	
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  CalculateHash(){ Dxhashutils::TdxHashTableItem::CalculateHash(); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetCustomFont : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TdxSpreadSheetFonts* FFonts;
	System::Uitypes::TFontCharset __fastcall GetCharset();
	System::Uitypes::TColor __fastcall GetColor();
	int __fastcall GetHeight();
	bool __fastcall GetIsDefault();
	System::Uitypes::TFontName __fastcall GetName();
	System::Uitypes::TFontPitch __fastcall GetPitch();
	int __fastcall GetSize();
	System::Uitypes::TFontStyles __fastcall GetStyle();
	void __fastcall SetCharset(const System::Uitypes::TFontCharset AValue);
	void __fastcall SetColor(const System::Uitypes::TColor AValue);
	void __fastcall SetHeight(const int AValue);
	void __fastcall SetName(const System::Uitypes::TFontName AValue);
	void __fastcall SetPitch(const System::Uitypes::TFontPitch AValue);
	void __fastcall SetSize(const int AValue);
	void __fastcall SetStyle(const System::Uitypes::TFontStyles AValue);
	
protected:
	void __fastcall ChangeFont(const System::Uitypes::TFontName AName, System::Uitypes::TFontCharset ACharset, System::Uitypes::TColor AColor, int ASize, System::Uitypes::TFontPitch APitch, System::Uitypes::TFontStyles AStyle);
	virtual TdxSpreadSheetFontHandle* __fastcall GetHandle() = 0 ;
	virtual void __fastcall SetHandle(TdxSpreadSheetFontHandle* const AValue) = 0 ;
	__property TdxSpreadSheetFonts* Fonts = {read=FFonts};
	__property TdxSpreadSheetFontHandle* Handle = {read=GetHandle, write=SetHandle};
	
public:
	__fastcall virtual TdxSpreadSheetCustomFont(TdxSpreadSheetFonts* AFonts);
	void __fastcall Assign(TdxSpreadSheetCustomFont* AFont)/* overload */;
	void __fastcall Assign(TdxSpreadSheetFontHandle* AFont)/* overload */;
	void __fastcall Assign(Vcl::Graphics::TFont* AFont)/* overload */;
	void __fastcall AssignToFont(Vcl::Graphics::TFont* ATargetFont);
	__property System::Uitypes::TFontCharset Charset = {read=GetCharset, write=SetCharset, nodefault};
	__property System::Uitypes::TColor Color = {read=GetColor, write=SetColor, nodefault};
	__property int Height = {read=GetHeight, write=SetHeight, nodefault};
	__property System::Uitypes::TFontName Name = {read=GetName, write=SetName};
	__property System::Uitypes::TFontPitch Pitch = {read=GetPitch, write=SetPitch, default=0};
	__property int Size = {read=GetSize, write=SetSize, stored=false, nodefault};
	__property System::Uitypes::TFontStyles Style = {read=GetStyle, write=SetStyle, nodefault};
	__property bool IsDefault = {read=GetIsDefault, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSpreadSheetCustomFont() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetFont : public TdxSpreadSheetCustomFont
{
	typedef TdxSpreadSheetCustomFont inherited;
	
private:
	TdxSpreadSheetFontHandle* FHandle;
	
protected:
	virtual void __fastcall Changed();
	virtual TdxSpreadSheetFontHandle* __fastcall GetHandle();
	virtual void __fastcall SetHandle(TdxSpreadSheetFontHandle* const AValue);
	
public:
	__fastcall virtual TdxSpreadSheetFont(TdxSpreadSheetFonts* AFonts);
	__fastcall virtual ~TdxSpreadSheetFont();
	__property Handle;
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetFonts : public Dxhashutils::TdxHashTable
{
	typedef Dxhashutils::TdxHashTable inherited;
	
private:
	TdxSpreadSheetFontHandle* FDefaultFont;
	TdxSpreadSheetCellStyles* FStyles;
	TdxSpreadSheetFontHandle* __fastcall InternalAddFont(const System::Uitypes::TFontName AName, int ASize);
	
public:
	__fastcall TdxSpreadSheetFonts(TdxSpreadSheetCellStyles* AStyles)/* overload */;
	__fastcall virtual ~TdxSpreadSheetFonts();
	TdxSpreadSheetFontHandle* __fastcall AddClone(TdxSpreadSheetFontHandle* const AFont);
	TdxSpreadSheetFontHandle* __fastcall AddFont(TdxSpreadSheetFontHandle* const AFont);
	TdxSpreadSheetFontHandle* __fastcall CreateFont();
	TdxSpreadSheetFontHandle* __fastcall CreateFromStream(Cxvariants::TcxReader* AReader);
	__property TdxSpreadSheetFontHandle* DefaultFont = {read=FDefaultFont};
	__property TdxSpreadSheetCellStyles* Styles = {read=FStyles};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetFormatHandle : public Dxhashutils::TdxHashTableItem
{
	typedef Dxhashutils::TdxHashTableItem inherited;
	
private:
	void __fastcall SetFormatCode(const System::UnicodeString AValue);
	
protected:
	System::UnicodeString FFormatCode;
	int FFormatCodeID;
	System::TObject* FFormatter;
	virtual void __fastcall CalculateHash(int &AHash)/* overload */;
	void __fastcall FormatterNeeded();
	virtual bool __fastcall DoIsEqual(Dxhashutils::TdxHashTableItem* const AItem);
	bool __fastcall GetIsDateTime();
	bool __fastcall GetIsText();
	bool __fastcall GetIsTime();
	
public:
	__fastcall TdxSpreadSheetFormatHandle(const System::UnicodeString AFormatCode, const int AFormatCodeID)/* overload */;
	__fastcall virtual ~TdxSpreadSheetFormatHandle();
	void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, System::TObject* const AFormatSettings, void *AResult);
	bool __fastcall IsDependedFromRegionalSettings();
	bool __fastcall IsLocalized();
	void __fastcall LoadFromStream(Cxvariants::TcxReader* AReader);
	void __fastcall SaveToStream(Cxvariants::TcxWriter* AWriter);
	__property System::UnicodeString FormatCode = {read=FFormatCode, write=SetFormatCode};
	__property int FormatCodeID = {read=FFormatCodeID, write=FFormatCodeID, nodefault};
	__property bool IsDateTime = {read=GetIsDateTime, nodefault};
	__property bool IsText = {read=GetIsText, nodefault};
	__property bool IsTime = {read=GetIsTime, nodefault};
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  CalculateHash(){ Dxhashutils::TdxHashTableItem::CalculateHash(); }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxSpreadSheetPredefinedFormats : public System::Generics::Collections::TList__1<TdxSpreadSheetFormatHandle*>
{
	typedef System::Generics::Collections::TList__1<TdxSpreadSheetFormatHandle*> inherited;
	
private:
	TdxSpreadSheetFormats* FOwner;
	System::UnicodeString __fastcall GenerateCurrencyFormat(const System::UnicodeString AFormatString, const System::UnicodeString APattern, const System::UnicodeString APatternZero, bool ABlindCurrencySymbol = false);
	void __fastcall InternalAdd(int ID, const System::UnicodeString AFormatCode);
	
protected:
	virtual void __fastcall Notify(TdxSpreadSheetFormatHandle* const Item, System::Generics::Collections::TCollectionNotification Action);
	
public:
	__fastcall TdxSpreadSheetPredefinedFormats(TdxSpreadSheetFormats* AOwner);
	TdxSpreadSheetFormatHandle* __fastcall GetFormatHandleByID(int ID);
	int __fastcall GetIDByFormatCode(const System::UnicodeString AFormatCode);
	void __fastcall Refresh();
public:
	/* {System_Generics_Collections}TList<dxSpreadSheetCoreStyles_TdxSpreadSheetFormatHandle>.Destroy */ inline __fastcall virtual ~TdxSpreadSheetPredefinedFormats() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetCustomDataFormat : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TdxSpreadSheetFormats* FFormats;
	System::UnicodeString __fastcall GetFormatCode();
	int __fastcall GetFormatCodeID();
	void __fastcall SetFormatCode(const System::UnicodeString AValue);
	void __fastcall SetFormatCodeID(int AValue);
	
protected:
	virtual TdxSpreadSheetFormatHandle* __fastcall GetHandle() = 0 ;
	virtual void __fastcall SetHandle(TdxSpreadSheetFormatHandle* AValue) = 0 ;
	__property TdxSpreadSheetFormats* Formats = {read=FFormats};
	__property TdxSpreadSheetFormatHandle* Handle = {read=GetHandle, write=SetHandle};
	
public:
	__fastcall TdxSpreadSheetCustomDataFormat(TdxSpreadSheetFormats* AFormats);
	virtual void __fastcall Assign(TdxSpreadSheetCustomDataFormat* ADataFormat);
	__property System::UnicodeString FormatCode = {read=GetFormatCode, write=SetFormatCode};
	__property int FormatCodeID = {read=GetFormatCodeID, write=SetFormatCodeID, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSpreadSheetCustomDataFormat() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetFormats : public Dxhashutils::TdxHashTable
{
	typedef Dxhashutils::TdxHashTable inherited;
	
private:
	TdxSpreadSheetFormatHandle* FDefaultFormat;
	TdxSpreadSheetPredefinedFormats* FPredefinedFormats;
	TdxSpreadSheetCellStyles* FStyles;
	
protected:
	virtual TdxSpreadSheetPredefinedFormats* __fastcall CreatePredefinedFormats();
	
public:
	__fastcall TdxSpreadSheetFormats(TdxSpreadSheetCellStyles* AStyles)/* overload */;
	__fastcall virtual ~TdxSpreadSheetFormats();
	TdxSpreadSheetFormatHandle* __fastcall AddClone(TdxSpreadSheetFormatHandle* const AFormat);
	TdxSpreadSheetFormatHandle* __fastcall AddFormat(const System::UnicodeString AFormatCode, int AFormatCodeID = 0xffffffff);
	TdxSpreadSheetFormatHandle* __fastcall CreateFromStream(Cxvariants::TcxReader* AReader);
	bool __fastcall IsCustom(TdxSpreadSheetFormatHandle* AFormat);
	__property TdxSpreadSheetFormatHandle* DefaultFormat = {read=FDefaultFormat};
	__property TdxSpreadSheetPredefinedFormats* PredefinedFormats = {read=FPredefinedFormats};
	__property TdxSpreadSheetCellStyles* Styles = {read=FStyles};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetSharedImageHandle : public Dxhashutils::TdxHashTableItem
{
	typedef Dxhashutils::TdxHashTableItem inherited;
	
private:
	Dxgdiplusclasses::TdxSmartImage* FImage;
	
protected:
	virtual void __fastcall CalculateHash(int &AHash)/* overload */;
	virtual bool __fastcall DoIsEqual(Dxhashutils::TdxHashTableItem* const AItem);
	
public:
	__fastcall virtual TdxSpreadSheetSharedImageHandle()/* overload */;
	__fastcall TdxSpreadSheetSharedImageHandle(Dxgdiplusclasses::TdxSmartImage* AImage)/* overload */;
	__fastcall TdxSpreadSheetSharedImageHandle(System::Classes::TStream* AStream)/* overload */;
	__fastcall virtual ~TdxSpreadSheetSharedImageHandle();
	__property Dxgdiplusclasses::TdxSmartImage* Image = {read=FImage};
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  CalculateHash(){ Dxhashutils::TdxHashTableItem::CalculateHash(); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetSharedImages : public Dxhashutils::TdxHashTable
{
	typedef Dxhashutils::TdxHashTable inherited;
	
public:
	TdxSpreadSheetSharedImageHandle* __fastcall Add(Dxgdiplusclasses::TdxSmartImage* AImage)/* overload */;
	TdxSpreadSheetSharedImageHandle* __fastcall Add(System::Classes::TStream* AStream)/* overload */;
	TdxSpreadSheetSharedImageHandle* __fastcall Add(const System::UnicodeString AFileName)/* overload */;
public:
	/* TdxHashTable.Create */ inline __fastcall virtual TdxSpreadSheetSharedImages() : Dxhashutils::TdxHashTable() { }
	/* TdxHashTable.Destroy */ inline __fastcall virtual ~TdxSpreadSheetSharedImages() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetSharedString : public Dxhashutils::TdxHashTableItem
{
	typedef Dxhashutils::TdxHashTableItem inherited;
	
private:
	System::UnicodeString FValue;
	
protected:
	virtual void __fastcall CalculateHash(int &AHash)/* overload */;
	virtual bool __fastcall DoIsEqual(Dxhashutils::TdxHashTableItem* const AItem);
	__classmethod virtual int __fastcall ObjectID();
	
public:
	__fastcall virtual TdxSpreadSheetSharedString(const System::UnicodeString AValue);
	virtual void __fastcall LoadFromStream(Cxvariants::TcxReader* AReader);
	virtual void __fastcall SaveToStream(Cxvariants::TcxWriter* AWriter);
	__property System::UnicodeString Value = {read=FValue};
public:
	/* TdxHashTableItem.Destroy */ inline __fastcall virtual ~TdxSpreadSheetSharedString() { }
	
public:
	/* TdxDynamicListItem.Create */ inline __fastcall virtual TdxSpreadSheetSharedString(Dxhashutils::TdxDynamicItemList* AOwner, int AIndex) : Dxhashutils::TdxHashTableItem(AOwner, AIndex) { }
	
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  CalculateHash(){ Dxhashutils::TdxHashTableItem::CalculateHash(); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetSharedStringTable : public Dxhashutils::TdxHashTable
{
	typedef Dxhashutils::TdxHashTable inherited;
	
private:
	TdxSpreadSheetFonts* FFontTable;
	int __fastcall GetUniqueCount();
	
protected:
	virtual TdxSpreadSheetSharedString* __fastcall CreateStringClassByID(const int ID);
	
public:
	__fastcall virtual TdxSpreadSheetSharedStringTable(TdxSpreadSheetFonts* AFontTable);
	TdxSpreadSheetSharedString* __fastcall Add(TdxSpreadSheetSharedString* AString)/* overload */;
	TdxSpreadSheetSharedString* __fastcall Add(const System::UnicodeString AValue)/* overload */;
	TdxSpreadSheetSharedString* __fastcall LoadItemFromStream(Cxvariants::TcxReader* AReader);
	__property TdxSpreadSheetFonts* FontTable = {read=FFontTable};
	__property int UniqueCount = {read=GetUniqueCount, nodefault};
public:
	/* TdxHashTable.Destroy */ inline __fastcall virtual ~TdxSpreadSheetSharedStringTable() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetFormattedSharedStringRun : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TdxSpreadSheetFontHandle* FFontHandle;
	int FStartIndex;
	NativeUInt FTag;
	void __fastcall SetFontHandle(TdxSpreadSheetFontHandle* AValue);
	
public:
	__fastcall virtual ~TdxSpreadSheetFormattedSharedStringRun();
	void __fastcall Assign(TdxSpreadSheetFormattedSharedStringRun* ASource);
	void __fastcall Offset(int ADelta);
	__property TdxSpreadSheetFontHandle* FontHandle = {read=FFontHandle, write=SetFontHandle};
	__property int StartIndex = {read=FStartIndex, write=FStartIndex, nodefault};
	__property NativeUInt Tag = {read=FTag, write=FTag, nodefault};
public:
	/* TObject.Create */ inline __fastcall TdxSpreadSheetFormattedSharedStringRun() : System::TObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetFormattedSharedStringRuns : public Cxclasses::TcxObjectList
{
	typedef Cxclasses::TcxObjectList inherited;
	
public:
	TdxSpreadSheetFormattedSharedStringRun* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TdxSpreadSheetFormattedSharedStringRun* __fastcall GetItem(int Index);
	
public:
	HIDESBASE TdxSpreadSheetFormattedSharedStringRun* __fastcall Add()/* overload */;
	HIDESBASE TdxSpreadSheetFormattedSharedStringRun* __fastcall Add(int AStartIndex, TdxSpreadSheetFontHandle* AFontHandle, NativeUInt ATag = (NativeUInt)(0x0))/* overload */;
	void __fastcall Append(TdxSpreadSheetFormattedSharedStringRuns* ASource);
	HIDESBASE void __fastcall Assign(TdxSpreadSheetFormattedSharedStringRuns* ASource);
	void __fastcall Offset(int ADelta);
	__property TdxSpreadSheetFormattedSharedStringRun* Items[int Index] = {read=GetItem/*, default*/};
public:
	/* TcxObjectList.Create */ inline __fastcall TdxSpreadSheetFormattedSharedStringRuns(bool AOwnObjects) : Cxclasses::TcxObjectList(AOwnObjects) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TdxSpreadSheetFormattedSharedStringRuns() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetFormattedSharedString : public TdxSpreadSheetSharedString
{
	typedef TdxSpreadSheetSharedString inherited;
	
private:
	TdxSpreadSheetFormattedSharedStringRuns* FRuns;
	
protected:
	virtual void __fastcall CalculateHash(int &AHash)/* overload */;
	virtual bool __fastcall DoIsEqual(Dxhashutils::TdxHashTableItem* const AItem);
	void __fastcall FontChanged(TdxSpreadSheetFontHandle* APrevFont, TdxSpreadSheetFontHandle* ANewFont);
	__classmethod virtual int __fastcall ObjectID();
	
public:
	__fastcall virtual TdxSpreadSheetFormattedSharedString(const System::UnicodeString AValue);
	__fastcall virtual ~TdxSpreadSheetFormattedSharedString();
	virtual void __fastcall LoadFromStream(Cxvariants::TcxReader* AReader);
	virtual void __fastcall SaveToStream(Cxvariants::TcxWriter* AWriter);
	__property TdxSpreadSheetFormattedSharedStringRuns* Runs = {read=FRuns};
public:
	/* TdxDynamicListItem.Create */ inline __fastcall virtual TdxSpreadSheetFormattedSharedString(Dxhashutils::TdxDynamicItemList* AOwner, int AIndex) : TdxSpreadSheetSharedString(AOwner, AIndex) { }
	
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  CalculateHash(){ Dxhashutils::TdxHashTableItem::CalculateHash(); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetCellStyleHandle : public Dxhashutils::TdxHashTableItem
{
	typedef Dxhashutils::TdxHashTableItem inherited;
	
private:
	Dxspreadsheetgraphics::TdxSpreadSheetDataAlignHorz FAlignHorz;
	int FAlignHorzIndent;
	Dxspreadsheetgraphics::TdxSpreadSheetDataAlignVert FAlignVert;
	TdxSpreadSheetBordersHandle* FBorders;
	TdxSpreadSheetBrushHandle* FBrush;
	TdxSpreadSheetFormatHandle* FDataFormat;
	TdxSpreadSheetFontHandle* FFont;
	int FRotation;
	Dxspreadsheettypes::TdxSpreadSheetCellStates FStates;
	void __fastcall SetAlignHorzIndent(int AValue);
	void __fastcall SetBorders(TdxSpreadSheetBordersHandle* AValue);
	void __fastcall SetBrush(TdxSpreadSheetBrushHandle* AValue);
	void __fastcall SetDataFormat(TdxSpreadSheetFormatHandle* AValue);
	void __fastcall SetFont(TdxSpreadSheetFontHandle* AValue);
	
protected:
	bool FIsDefault;
	void __fastcall AssignFields(TdxSpreadSheetCellStyleHandle* ASource);
	virtual void __fastcall CalculateHash(int &AHash)/* overload */;
	virtual bool __fastcall DoIsEqual(Dxhashutils::TdxHashTableItem* const AItem);
	
public:
	__fastcall virtual TdxSpreadSheetCellStyleHandle(Dxhashutils::TdxDynamicItemList* AOwner, int AIndex);
	__fastcall virtual ~TdxSpreadSheetCellStyleHandle();
	HIDESBASE void __fastcall Assign(TdxSpreadSheetCellStyleHandle* ASource)/* overload */;
	TdxSpreadSheetCellStyleHandle* __fastcall Clone();
	void __fastcall LoadFromStream(Cxvariants::TcxReader* AReader);
	void __fastcall SaveToStream(Cxvariants::TcxWriter* AWriter);
	__property Dxspreadsheetgraphics::TdxSpreadSheetDataAlignHorz AlignHorz = {read=FAlignHorz, write=FAlignHorz, nodefault};
	__property int AlignHorzIndent = {read=FAlignHorzIndent, write=SetAlignHorzIndent, nodefault};
	__property Dxspreadsheetgraphics::TdxSpreadSheetDataAlignVert AlignVert = {read=FAlignVert, write=FAlignVert, nodefault};
	__property TdxSpreadSheetBordersHandle* Borders = {read=FBorders, write=SetBorders};
	__property TdxSpreadSheetBrushHandle* Brush = {read=FBrush, write=SetBrush};
	__property TdxSpreadSheetFormatHandle* DataFormat = {read=FDataFormat, write=SetDataFormat};
	__property TdxSpreadSheetFontHandle* Font = {read=FFont, write=SetFont};
	__property bool IsDefault = {read=FIsDefault, nodefault};
	__property int Rotation = {read=FRotation, write=FRotation, nodefault};
	__property Dxspreadsheettypes::TdxSpreadSheetCellStates States = {read=FStates, write=FStates, nodefault};
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  CalculateHash(){ Dxhashutils::TdxHashTableItem::CalculateHash(); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetCellStyleHandleList : public Dxhashutils::TdxHashTableItemList
{
	typedef Dxhashutils::TdxHashTableItemList inherited;
	
public:
	TdxSpreadSheetCellStyleHandle* operator[](int Index) { return this->Items[Index]; }
	
private:
	TdxSpreadSheetCellStyleHandle* __fastcall GetItem(int Index);
	
public:
	__property TdxSpreadSheetCellStyleHandle* Items[int Index] = {read=GetItem/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TdxSpreadSheetCellStyleHandleList() { }
	
public:
	/* TObject.Create */ inline __fastcall TdxSpreadSheetCellStyleHandleList() : Dxhashutils::TdxHashTableItemList() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxSpreadSheetCellStyles : public Dxhashutils::TdxHashTable
{
	typedef Dxhashutils::TdxHashTable inherited;
	
private:
	TdxSpreadSheetBorders* FBorders;
	TdxSpreadSheetBrushes* FBrushes;
	TdxSpreadSheetCellStyleHandle* FDefaultStyle;
	TdxSpreadSheetFonts* FFonts;
	TdxSpreadSheetFormats* FFormats;
	System::Classes::TNotifyEvent FOnChange;
	
protected:
	Dxcore::TColors Palette;
	virtual TdxSpreadSheetBorders* __fastcall CreateBorders();
	virtual TdxSpreadSheetBrushes* __fastcall CreateBrushes();
	virtual TdxSpreadSheetCellStyleHandle* __fastcall CreateDefaultStyle();
	virtual TdxSpreadSheetFonts* __fastcall CreateFonts();
	virtual TdxSpreadSheetFormats* __fastcall CreateFormats();
	virtual void __fastcall DeleteItem(Dxhashutils::TdxHashTableItem* AItem);
	int __stdcall _AddRef();
	int __stdcall _Release();
	virtual HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	void __fastcall FormatChanged();
	
public:
	__fastcall virtual TdxSpreadSheetCellStyles();
	__fastcall virtual ~TdxSpreadSheetCellStyles();
	TdxSpreadSheetCellStyleHandle* __fastcall AddClone(TdxSpreadSheetCellStyleHandle* AStyle);
	TdxSpreadSheetCellStyleHandle* __fastcall AddStyle(TdxSpreadSheetCellStyleHandle* AStyle);
	TdxSpreadSheetCellStyleHandle* __fastcall CreateStyle(TdxSpreadSheetFontHandle* AFont = (TdxSpreadSheetFontHandle*)(0x0), TdxSpreadSheetFormatHandle* AFormat = (TdxSpreadSheetFormatHandle*)(0x0), TdxSpreadSheetBrushHandle* ABrush = (TdxSpreadSheetBrushHandle*)(0x0), TdxSpreadSheetBordersHandle* ABorders = (TdxSpreadSheetBordersHandle*)(0x0));
	TdxSpreadSheetCellStyleHandle* __fastcall CreateStyleFromStream(Cxvariants::TcxReader* AReader);
	__property TdxSpreadSheetBorders* Borders = {read=FBorders};
	__property TdxSpreadSheetBrushes* Brushes = {read=FBrushes};
	__property TdxSpreadSheetFonts* Fonts = {read=FFonts};
	__property TdxSpreadSheetFormats* Formats = {read=FFormats};
	__property TdxSpreadSheetCellStyleHandle* DefaultStyle = {read=FDefaultStyle};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
private:
	void *__IcxFormatControllerListener;	// Cxformats::IcxFormatControllerListener 
	
public:
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
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000000-0000-0000-C000-000000000046}
	operator System::_di_IInterface()
	{
		System::_di_IInterface intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator System::IInterface*(void) { return (System::IInterface*)&__IcxFormatControllerListener; }
	#endif
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetFormattedSharedStringCache : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	class DELPHICLASS TKey;
	class PASCALIMPLEMENTATION TKey : public System::TObject
	{
		typedef System::TObject inherited;
		
	protected:
		TdxSpreadSheetSharedString* FString;
		TdxSpreadSheetFontHandle* FDefaultFontHandle;
		
	public:
		__fastcall TKey(TdxSpreadSheetSharedString* AString, TdxSpreadSheetFontHandle* ADefaultFontHandle);
		__fastcall virtual ~TKey();
		virtual bool __fastcall Equals(System::TObject* Obj);
		virtual int __fastcall GetHashCode();
	};
	
	
	
public:
	static int MaxCount;
	
private:
	System::Generics::Collections::TObjectDictionary__2<TKey*,System::TObject*>* FItems;
	System::Classes::TList* FList;
	
public:
	__fastcall TdxSpreadSheetFormattedSharedStringCache();
	__fastcall virtual ~TdxSpreadSheetFormattedSharedStringCache();
	void __fastcall AddRender(TdxSpreadSheetSharedString* AString, TdxSpreadSheetFontHandle* ADefaultFontHandle, System::TObject* const ARender);
	bool __fastcall TryGetRender(TdxSpreadSheetSharedString* AString, TdxSpreadSheetFontHandle* ADefaultFontHandle, /* out */ System::TObject* &ARender);
	void __fastcall Clear();
	void __fastcall RemoveItems(TdxSpreadSheetFontHandle* ADefaultFontHandle)/* overload */;
	void __fastcall RemoveItems(TdxSpreadSheetSharedString* AString)/* overload */;
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dxspreadsheetcorestyles */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXSPREADSHEETCORESTYLES)
using namespace Dxspreadsheetcorestyles;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxspreadsheetcorestylesHPP
