// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxEditUtils.pas' rev: 35.00 (Windows)

#ifndef CxeditutilsHPP
#define CxeditutilsHPP

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
#include <System.Variants.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.StdCtrls.hpp>
#include <System.SysUtils.hpp>
#include <dxThemeManager.hpp>
#include <cxContainer.hpp>
#include <cxControls.hpp>
#include <cxGraphics.hpp>
#include <cxLookAndFeels.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxEdit.hpp>
#include <cxEditPaintUtils.hpp>
#include <cxScrollBar.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxeditutils
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
typedef HDC TcxEditCanvasHandle;

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 cxEditButtonMaxBorderWidth = System::Int8(0x2);
static const System::Int8 cxEditMaxBorderWidth = System::Int8(0x2);
static const System::Int8 cxEditMaxCheckBoxBorderWidth = System::Int8(0x2);
static const System::Int8 cxEditShadowWidth = System::Int8(0x3);
extern DELPHI_PACKAGE void __fastcall DrawArrow(Cxgraphics::TcxCanvas* ACanvas, int AArrowSize, const System::Types::TRect &AContentRect, Cxgraphics::TcxArrowDirection AArrowDirection, bool AIsDoubleArrow, bool AOffsetContent, System::Uitypes::TColor AColor);
extern DELPHI_PACKAGE void __fastcall DrawButtonBorder(Cxgraphics::TcxCanvas* ACanvas, System::Types::TRect &ARect, Cxgeometry::TcxBorders ABorders, System::Uitypes::TColor AColor);
extern DELPHI_PACKAGE void __fastcall DrawGlyph(Vcl::Graphics::TCanvas* ACanvas, int X, int Y, Vcl::Graphics::TBitmap* AGlyph, bool AEnabled, System::Uitypes::TColor ABrushColor = (System::Uitypes::TColor)(0x1fffffff), Vcl::Graphics::TBitmap* ABackgroundBitmap = (Vcl::Graphics::TBitmap*)(0x0))/* overload */;
extern DELPHI_PACKAGE void __fastcall DrawGlyph(Cxgraphics::TcxCanvas* ACanvas, int X, int Y, Vcl::Graphics::TBitmap* AGlyph, bool AEnabled, System::Uitypes::TColor ABrushColor = (System::Uitypes::TColor)(0x1fffffff), Vcl::Graphics::TBitmap* ABackgroundBitmap = (Vcl::Graphics::TBitmap*)(0x0))/* overload */;
extern DELPHI_PACKAGE void __fastcall DrawGlyph(Cxgraphics::TcxCanvas* ACanvas, Vcl::Imglist::TCustomImageList* AImageList, System::Uitypes::TImageIndex AImageIndex, const System::Types::TRect &AGlyphRect, System::Uitypes::TColor ABrushColor, bool AEnabled, Vcl::Graphics::TBitmap* ABackgroundBitmap = (Vcl::Graphics::TBitmap*)(0x0))/* overload */;
extern DELPHI_PACKAGE Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetPainterClass(bool ANativeStyle, Cxlookandfeels::TcxLookAndFeelKind ALookAndFeel);
extern DELPHI_PACKAGE void __fastcall InternalPolyLine(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TPoint *Points, const int Points_High, System::Uitypes::TColor AColor, bool AOrtoDrawing = false);
extern DELPHI_PACKAGE int __fastcall CalculateEditDefaultButtonWidth(Cxgraphics::TcxCanvas* ACanvas, Cxedit::TcxEditButtonViewInfo* AViewInfo);
extern DELPHI_PACKAGE void __fastcall cxEditFillRect(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &R, System::Uitypes::TColor AColor)/* overload */;
extern DELPHI_PACKAGE void __fastcall cxEditFillRect(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, System::Uitypes::TColor AColor)/* overload */;
extern DELPHI_PACKAGE void __fastcall cxEditFillRect(HDC ACanvasHandle, const System::Types::TRect &R, HBRUSH ABrush)/* overload */;
extern DELPHI_PACKAGE bool __fastcall cxIsDigitChar(System::WideChar C);
extern DELPHI_PACKAGE bool __fastcall cxOffsetRect(System::Types::TRect &ARect, const System::Types::TPoint &AOffset);
extern DELPHI_PACKAGE int __fastcall cxTextOutFlagsToDrawTextFlags(unsigned AFlags);
extern DELPHI_PACKAGE int __fastcall DrawTextFlagsTocxTextOutFlags(unsigned AFlags);
extern DELPHI_PACKAGE void __fastcall InternalFillRect(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &AOuterRect, const System::Types::TRect &AInternalRect, HBRUSH ABrush);
extern DELPHI_PACKAGE void __fastcall DrawCustomEditBackground(Cxgraphics::TcxCanvas* ACanvas, Cxedit::TcxCustomEditViewInfo* AViewInfo, bool ACanDrawBackground);
extern DELPHI_PACKAGE System::Types::TSize __fastcall GetArrowSize(const System::Types::TSize &AContentSize, Cxgraphics::TcxArrowDirection AArrowDirection);
extern DELPHI_PACKAGE int __fastcall GetEditButtonsContentVerticalOffset(Cxgraphics::TcxCanvas* ACanvas, Cxedit::TcxEditButtonStyle AButtonsStyle, bool ANativeStyle);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall GetHotTrackColor(void);
extern DELPHI_PACKAGE int __fastcall GetNativeInnerTextEditContentHeightCorrection(Cxedit::TcxCustomEditProperties* AProperties, bool AIsInplace);
extern DELPHI_PACKAGE Cxgraphics::TcxRegion* __fastcall GetEditButtonRegion(Cxgraphics::TcxCanvas* ACanvas, Cxedit::TcxEditButtonViewInfo* AViewInfo);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall GetEditBorderHighlightColor(bool AIsOffice11Style);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall GetEditButtonHighlightColor(bool APressed, bool AIsOffice11Style);
extern DELPHI_PACKAGE bool __fastcall IsShadowDrawingNeeded(Cxedit::TcxCustomEditViewData* AViewData);
}	/* namespace Cxeditutils */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXEDITUTILS)
using namespace Cxeditutils;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxeditutilsHPP
