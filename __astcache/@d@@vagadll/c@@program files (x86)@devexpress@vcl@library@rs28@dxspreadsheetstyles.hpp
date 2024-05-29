// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxSpreadSheetStyles.pas' rev: 35.00 (Windows)

#ifndef DxspreadsheetstylesHPP
#define DxspreadsheetstylesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Generics.Collections.hpp>
#include <Vcl.Graphics.hpp>
#include <dxCore.hpp>
#include <dxCoreClasses.hpp>
#include <cxGraphics.hpp>
#include <dxHashUtils.hpp>
#include <cxClasses.hpp>
#include <cxFormats.hpp>
#include <cxVariants.hpp>
#include <dxSpreadSheetTypes.hpp>
#include <dxSpreadSheetClasses.hpp>
#include <dxSpreadSheetCoreStyles.hpp>
#include <dxSpreadSheetGraphics.hpp>
#include <dxSpreadSheetNumberFormat.hpp>
#include <cxGeometry.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxspreadsheetstyles
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE TdxSpreadSheetCellStyleEnumProcRef;
typedef System::DelphiInterface<TdxSpreadSheetCellStyleEnumProcRef> _di_TdxSpreadSheetCellStyleEnumProcRef;
__interface DELPHIINTERFACE IdxSpreadSheetCellStyleOwner;
typedef System::DelphiInterface<IdxSpreadSheetCellStyleOwner> _di_IdxSpreadSheetCellStyleOwner;
class DELPHICLASS TdxSpreadSheetCellBorder;
class DELPHICLASS TdxSpreadSheetCellBrush;
class DELPHICLASS TdxSpreadSheetCellDataFormat;
class DELPHICLASS TdxSpreadSheetCellFont;
class DELPHICLASS TdxSpreadSheetCellStyle;
class DELPHICLASS TdxSpreadSheetCellDataBar;
class DELPHICLASS TdxSpreadSheetCellDisplayStyle;
class DELPHICLASS TdxSpreadSheetCellStyleMergeHelper;
//-- type declarations -------------------------------------------------------
__interface TdxSpreadSheetCellStyleEnumProcRef  : public System::IInterface 
{
	virtual void __fastcall Invoke(TdxSpreadSheetCellStyle* ACellStyle, int ARow, int AColumn, const System::Types::TRect &AArea) = 0 ;
};

__interface  INTERFACE_UUID("{7E2D8A63-43AE-401B-B98C-9BB737DB60CF}") IdxSpreadSheetCellStyleOwner  : public System::IInterface 
{
	virtual Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* __fastcall GetFormatSettings() = 0 ;
	virtual void __fastcall CellStyleChanged() = 0 ;
	virtual void __fastcall CellStyleChanging() = 0 ;
	virtual void __fastcall ProcessStyleChanges(Dxspreadsheetcorestyles::TdxSpreadSheetCellStyleHandle* APrevStyle, Dxspreadsheetcorestyles::TdxSpreadSheetCellStyleHandle* ANewStyle) = 0 ;
	virtual Dxspreadsheetcorestyles::TdxSpreadSheetCellStyles* __fastcall GetCellStyles() = 0 ;
	__property Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* FormatSettings = {read=GetFormatSettings};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetCellBorder : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Cxgeometry::TcxBorder FKind;
	TdxSpreadSheetCellStyle* FOwner;
	System::Uitypes::TColor __fastcall GetColor();
	Dxspreadsheetcorestyles::TdxSpreadSheetBordersHandle* __fastcall GetHandle();
	Dxspreadsheetgraphics::TdxSpreadSheetCellBorderStyle __fastcall GetStyle();
	void __fastcall SetColor(const System::Uitypes::TColor AValue);
	void __fastcall SetHandle(Dxspreadsheetcorestyles::TdxSpreadSheetBordersHandle* const AValue);
	void __fastcall SetStyle(const Dxspreadsheetgraphics::TdxSpreadSheetCellBorderStyle AValue);
	
protected:
	__property Dxspreadsheetcorestyles::TdxSpreadSheetBordersHandle* Handle = {read=GetHandle, write=SetHandle};
	__property Cxgeometry::TcxBorder Kind = {read=FKind, nodefault};
	
public:
	__fastcall TdxSpreadSheetCellBorder(TdxSpreadSheetCellStyle* AOwner, Cxgeometry::TcxBorder AKind);
	virtual void __fastcall Assign(TdxSpreadSheetCellBorder* ASource)/* overload */;
	virtual void __fastcall Assign(Dxspreadsheetcorestyles::TdxSpreadSheetBordersHandle* ASource)/* overload */;
	virtual void __fastcall Assign(Dxspreadsheetgraphics::TdxSpreadSheetCellBorderStyle AStyle, System::Uitypes::TColor AColor)/* overload */;
	void __fastcall Reset();
	__property System::Uitypes::TColor Color = {read=GetColor, write=SetColor, nodefault};
	__property TdxSpreadSheetCellStyle* Owner = {read=FOwner};
	__property Dxspreadsheetgraphics::TdxSpreadSheetCellBorderStyle Style = {read=GetStyle, write=SetStyle, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSpreadSheetCellBorder() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetCellBrush : public Dxspreadsheetcorestyles::TdxSpreadSheetCustomBrush
{
	typedef Dxspreadsheetcorestyles::TdxSpreadSheetCustomBrush inherited;
	
private:
	TdxSpreadSheetCellStyle* FOwner;
	
protected:
	virtual Dxspreadsheetcorestyles::TdxSpreadSheetBrushHandle* __fastcall GetHandle();
	virtual void __fastcall SetHandle(Dxspreadsheetcorestyles::TdxSpreadSheetBrushHandle* const AValue);
	
public:
	__fastcall TdxSpreadSheetCellBrush(TdxSpreadSheetCellStyle* AOwner);
	__property TdxSpreadSheetCellStyle* Owner = {read=FOwner};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSpreadSheetCellBrush() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetCellDataFormat : public Dxspreadsheetcorestyles::TdxSpreadSheetCustomDataFormat
{
	typedef Dxspreadsheetcorestyles::TdxSpreadSheetCustomDataFormat inherited;
	
private:
	TdxSpreadSheetCellStyle* FOwner;
	bool __fastcall GetIsDateTime();
	bool __fastcall GetIsText();
	bool __fastcall GetIsTime();
	
protected:
	virtual Dxspreadsheetcorestyles::TdxSpreadSheetFormatHandle* __fastcall GetHandle();
	virtual void __fastcall SetHandle(Dxspreadsheetcorestyles::TdxSpreadSheetFormatHandle* AValue);
	
public:
	__fastcall TdxSpreadSheetCellDataFormat(TdxSpreadSheetCellStyle* AOwner);
	void __fastcall Format(const System::Variant &AValue, Dxspreadsheettypes::TdxSpreadSheetCellDataType AValueType, Dxspreadsheetnumberformat::TdxSpreadSheetNumberFormatResult &AResult);
	__property bool IsDateTime = {read=GetIsDateTime, nodefault};
	__property bool IsText = {read=GetIsText, nodefault};
	__property bool IsTime = {read=GetIsTime, nodefault};
	__property TdxSpreadSheetCellStyle* Owner = {read=FOwner};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSpreadSheetCellDataFormat() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetCellFont : public Dxspreadsheetcorestyles::TdxSpreadSheetCustomFont
{
	typedef Dxspreadsheetcorestyles::TdxSpreadSheetCustomFont inherited;
	
private:
	TdxSpreadSheetCellStyle* FOwner;
	
protected:
	virtual Dxspreadsheetcorestyles::TdxSpreadSheetFontHandle* __fastcall GetHandle();
	virtual void __fastcall SetHandle(Dxspreadsheetcorestyles::TdxSpreadSheetFontHandle* const AValue);
	
public:
	__fastcall TdxSpreadSheetCellFont(TdxSpreadSheetCellStyle* AOwner);
	__property TdxSpreadSheetCellStyle* Owner = {read=FOwner};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSpreadSheetCellFont() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetCellStyle : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::StaticArray<TdxSpreadSheetCellBorder*, 4> FBorders;
	TdxSpreadSheetCellBrush* FBrush;
	TdxSpreadSheetCellDataFormat* FDataFormat;
	TdxSpreadSheetCellFont* FFont;
	_di_IdxSpreadSheetCellStyleOwner FOwner;
	Dxspreadsheetcorestyles::TdxSpreadSheetCellStyleHandle* FPrevHandle;
	int FUpdateLockCount;
	void __fastcall ChangeState(Dxspreadsheettypes::TdxSpreadSheetCellState AState, bool AValue);
	Dxspreadsheetgraphics::TdxSpreadSheetDataAlignHorz __fastcall GetAlignHorz();
	int __fastcall GetAlignHorzIndent();
	Dxspreadsheetgraphics::TdxSpreadSheetDataAlignVert __fastcall GetAlignVert();
	TdxSpreadSheetCellBorder* __fastcall GetBorder(Cxgeometry::TcxBorder ABorder);
	TdxSpreadSheetCellBrush* __fastcall GetBrush();
	Dxspreadsheetcorestyles::TdxSpreadSheetCellStyles* __fastcall GetCellStyles();
	TdxSpreadSheetCellDataFormat* __fastcall GetDataFormat();
	Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* __fastcall GetFormatSettings();
	bool __fastcall GetIsDefault();
	TdxSpreadSheetCellFont* __fastcall GetFont();
	bool __fastcall GetHidden();
	bool __fastcall GetLocked();
	bool __fastcall GetShrinkToFit();
	Dxspreadsheettypes::TdxSpreadSheetCellStates __fastcall GetState();
	bool __fastcall GetWordWrap();
	void __fastcall SetAlignHorz(const Dxspreadsheetgraphics::TdxSpreadSheetDataAlignHorz AValue);
	void __fastcall SetAlignHorzIndent(const int AValue);
	void __fastcall SetAlignVert(const Dxspreadsheetgraphics::TdxSpreadSheetDataAlignVert AValue);
	void __fastcall SetBorder(Cxgeometry::TcxBorder ABorder, TdxSpreadSheetCellBorder* const AValue);
	void __fastcall SetBrush(TdxSpreadSheetCellBrush* const AValue);
	void __fastcall SetDataFormat(TdxSpreadSheetCellDataFormat* const AValue);
	void __fastcall SetFont(TdxSpreadSheetCellFont* const AValue);
	void __fastcall SetHidden(const bool AValue);
	void __fastcall SetIsDefault(const bool Value);
	void __fastcall SetLocked(const bool AValue);
	void __fastcall SetShrinkToFit(const bool AValue);
	void __fastcall SetState(const Dxspreadsheettypes::TdxSpreadSheetCellStates AValue);
	void __fastcall SetWordWrap(const bool AValue);
	
protected:
	Dxspreadsheetcorestyles::TdxSpreadSheetCellStyleHandle* FHandle;
	void __fastcall Changed();
	virtual void __fastcall CloneHandle();
	virtual void __fastcall DoChanged();
	virtual void __fastcall SetHandle(Dxspreadsheetcorestyles::TdxSpreadSheetCellStyleHandle* const AHandle);
	virtual void __fastcall ProcessStyleChanges(Dxspreadsheetcorestyles::TdxSpreadSheetCellStyleHandle* APrevStyle, Dxspreadsheetcorestyles::TdxSpreadSheetCellStyleHandle* ANewStyle);
	virtual void __fastcall ReleaseHandle();
	virtual void __fastcall ReplaceHandle();
	__property Dxspreadsheetcorestyles::TdxSpreadSheetCellStyles* CellStyles = {read=GetCellStyles};
	__property Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* FormatSettings = {read=GetFormatSettings};
	__property _di_IdxSpreadSheetCellStyleOwner Owner = {read=FOwner};
	__property Dxspreadsheettypes::TdxSpreadSheetCellStates State = {read=GetState, write=SetState, nodefault};
	__property int UpdateLockCount = {read=FUpdateLockCount, nodefault};
	
public:
	__fastcall virtual TdxSpreadSheetCellStyle(const _di_IdxSpreadSheetCellStyleOwner AOwner)/* overload */;
	__fastcall virtual TdxSpreadSheetCellStyle(const _di_IdxSpreadSheetCellStyleOwner AOwner, Dxspreadsheetcorestyles::TdxSpreadSheetCellStyleHandle* AHandle)/* overload */;
	__fastcall virtual ~TdxSpreadSheetCellStyle();
	void __fastcall Assign(TdxSpreadSheetCellStyle* AStyle);
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	void __fastcall Merge(TdxSpreadSheetCellStyle* AColumnStyle, TdxSpreadSheetCellStyle* ARowStyle);
	__property Dxspreadsheetgraphics::TdxSpreadSheetDataAlignHorz AlignHorz = {read=GetAlignHorz, write=SetAlignHorz, nodefault};
	__property int AlignHorzIndent = {read=GetAlignHorzIndent, write=SetAlignHorzIndent, nodefault};
	__property Dxspreadsheetgraphics::TdxSpreadSheetDataAlignVert AlignVert = {read=GetAlignVert, write=SetAlignVert, nodefault};
	__property TdxSpreadSheetCellBorder* Borders[Cxgeometry::TcxBorder ABorder] = {read=GetBorder, write=SetBorder};
	__property TdxSpreadSheetCellBrush* Brush = {read=GetBrush, write=SetBrush};
	__property TdxSpreadSheetCellDataFormat* DataFormat = {read=GetDataFormat, write=SetDataFormat};
	__property TdxSpreadSheetCellFont* Font = {read=GetFont, write=SetFont};
	__property bool Hidden = {read=GetHidden, write=SetHidden, nodefault};
	__property bool Locked = {read=GetLocked, write=SetLocked, nodefault};
	__property bool ShrinkToFit = {read=GetShrinkToFit, write=SetShrinkToFit, nodefault};
	__property bool WordWrap = {read=GetWordWrap, write=SetWordWrap, nodefault};
	__property Dxspreadsheetcorestyles::TdxSpreadSheetCellStyleHandle* Handle = {read=FHandle, write=SetHandle};
	__property bool IsDefault = {read=GetIsDefault, write=SetIsDefault, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetCellDataBar : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Uitypes::TColor FAxisColor;
	float FAxisPosition;
	System::Uitypes::TColor FBorder;
	System::Uitypes::TColor FColor1;
	System::Uitypes::TColor FColor2;
	float FPosition;
	
protected:
	void __fastcall ReadData(System::Classes::TReader* AReader);
	void __fastcall WriteData(System::Classes::TWriter* AWriter);
	
public:
	virtual void __fastcall AfterConstruction();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	bool __fastcall IsEmpty();
	void __fastcall Reset();
	__property System::Uitypes::TColor AxisColor = {read=FAxisColor, write=FAxisColor, nodefault};
	__property float AxisPosition = {read=FAxisPosition, write=FAxisPosition};
	__property System::Uitypes::TColor Border = {read=FBorder, write=FBorder, nodefault};
	__property System::Uitypes::TColor Color1 = {read=FColor1, write=FColor1, nodefault};
	__property System::Uitypes::TColor Color2 = {read=FColor2, write=FColor2, nodefault};
	__property float Position = {read=FPosition, write=FPosition};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxSpreadSheetCellDataBar() { }
	
public:
	/* TObject.Create */ inline __fastcall TdxSpreadSheetCellDataBar() : System::Classes::TPersistent() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetCellDisplayStyle : public TdxSpreadSheetCellStyle
{
	typedef TdxSpreadSheetCellStyle inherited;
	
private:
	TdxSpreadSheetCellDataBar* FDataBar;
	int FIconIndex;
	bool FShowCellValue;
	
protected:
	virtual TdxSpreadSheetCellDataBar* __fastcall CreateDataBar();
	
public:
	__fastcall virtual TdxSpreadSheetCellDisplayStyle(const _di_IdxSpreadSheetCellStyleOwner AOwner, Dxspreadsheetcorestyles::TdxSpreadSheetCellStyleHandle* AHandle)/* overload */;
	__fastcall virtual ~TdxSpreadSheetCellDisplayStyle();
	void __fastcall Reset();
	__property TdxSpreadSheetCellDataBar* DataBar = {read=FDataBar};
	__property int IconIndex = {read=FIconIndex, write=FIconIndex, nodefault};
	__property bool ShowCellValue = {read=FShowCellValue, write=FShowCellValue, nodefault};
public:
	/* TdxSpreadSheetCellStyle.Create */ inline __fastcall virtual TdxSpreadSheetCellDisplayStyle(const _di_IdxSpreadSheetCellStyleOwner AOwner)/* overload */ : TdxSpreadSheetCellStyle(AOwner) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetCellStyleMergeHelper : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool FIsUpdateBestFitNeeded;
	Dxspreadsheetcorestyles::TdxSpreadSheetCellStyleHandle* FNewStyle;
	Dxspreadsheetcorestyles::TdxSpreadSheetCellStyleHandle* FPrevStyle;
	void __fastcall MergeAlignment(TdxSpreadSheetCellStyle* ACellStyle);
	void __fastcall MergeBorders(TdxSpreadSheetCellStyle* ACellStyle);
	void __fastcall MergeBrush(TdxSpreadSheetCellStyle* ACellStyle);
	void __fastcall MergeFont(TdxSpreadSheetCellStyle* ACellStyle);
	void __fastcall MergeStates(TdxSpreadSheetCellStyle* ACellStyle);
	
protected:
	void __fastcall CheckIsUpdateBestFitNeeded();
	__property Dxspreadsheetcorestyles::TdxSpreadSheetCellStyleHandle* NewStyle = {read=FNewStyle};
	__property Dxspreadsheetcorestyles::TdxSpreadSheetCellStyleHandle* PrevStyle = {read=FPrevStyle};
	
public:
	__fastcall TdxSpreadSheetCellStyleMergeHelper(Dxspreadsheetcorestyles::TdxSpreadSheetCellStyleHandle* APrevStyle, Dxspreadsheetcorestyles::TdxSpreadSheetCellStyleHandle* ANewStyle);
	void __fastcall ProcessCellStyle(TdxSpreadSheetCellStyle* ACellStyle);
	__property bool IsUpdateBestFitNeeded = {read=FIsUpdateBestFitNeeded, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSpreadSheetCellStyleMergeHelper() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dxspreadsheetstyles */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXSPREADSHEETSTYLES)
using namespace Dxspreadsheetstyles;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxspreadsheetstylesHPP
