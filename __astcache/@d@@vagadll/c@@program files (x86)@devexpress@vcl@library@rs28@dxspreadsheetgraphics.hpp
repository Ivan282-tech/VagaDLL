// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxSpreadSheetGraphics.pas' rev: 35.00 (Windows)

#ifndef DxspreadsheetgraphicsHPP
#define DxspreadsheetgraphicsHPP

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
#include <Vcl.Graphics.hpp>
#include <cxGraphics.hpp>
#include <cxGeometry.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <dxCore.hpp>
#include <dxGDIPlusClasses.hpp>
#include <dxCoreGraphics.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxspreadsheetgraphics
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TdxSpreadSheetSelectionHelper;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TdxSpreadSheetDrawingStage : unsigned char { dsFirst, dsSecond };

typedef System::Set<TdxSpreadSheetDrawingStage, TdxSpreadSheetDrawingStage::dsFirst, TdxSpreadSheetDrawingStage::dsSecond> TdxSpreadSheetDrawingStages;

enum DECLSPEC_DENUM TdxSpreadSheetCellBorderStyle : unsigned char { sscbsDefault, sscbsHair, sscbsDotted, sscbsDashDotDot, sscbsDashDot, sscbsDashed, sscbsThin, sscbsMediumDashDotDot, sscbsSlantedDashDot, sscbsMediumDashDot, sscbsMediumDashed, sscbsMedium, sscbsThick, sscbsDouble, sscbsNone };

typedef System::StaticArray<TdxSpreadSheetCellBorderStyle, 4> TdxSpreadSheetCellBordersStyles;

enum DECLSPEC_DENUM TdxSpreadSheetCellFillStyle : unsigned char { sscfsSolid, sscfsGray75, sscfsGray50, sscfsGray25, sscfsGray12, sscfsGray6, sscfsHorzStrip, sscfsVertStrip, sscfsRevDiagonalStrip, sscfsDiagonalStrip, sscfsDiagCrossHatch, sscfsThickCrossHatch, sscfsThinHorzStrip, sscfsThinVertStrip, sscfsThinRevDiagonalStrip, sscfsThinDiagonalStrip, sscfsThinDiagCrossHatch, sscfsThinThickCrossHatch };

enum DECLSPEC_DENUM TdxSpreadSheetDataAlignHorz : unsigned char { ssahGeneral, ssahLeft, ssahCenter, ssahRight, ssahFill, ssahJustify, ssahDistributed };

enum DECLSPEC_DENUM TdxSpreadSheetDataAlignVert : unsigned char { ssavTop, ssavCenter, ssavBottom, ssavJustify, ssavDistributed };

enum DECLSPEC_DENUM TdxSpreadSheetSelectionElement : unsigned char { ssseFrame, ssseCorners, ssseBackground };

typedef System::Set<TdxSpreadSheetSelectionElement, TdxSpreadSheetSelectionElement::ssseFrame, TdxSpreadSheetSelectionElement::ssseBackground> TdxSpreadSheetSelectionElements;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetSelectionHelper : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod void __fastcall Draw(Cxgraphics::TcxCanvas* const ACanvas, const System::Types::TRect &ABounds, const System::Uitypes::TColor AColor, const System::Uitypes::TColor ABackgroundColor, const TdxSpreadSheetSelectionElements AElements, const Dxcore::TdxCorners ACorners);
	__classmethod System::Types::TRect __fastcall GetCornerBounds(const System::Types::TRect &R, Dxcore::TdxCorner ACorner);
	__classmethod bool __fastcall IsInFrame(const System::Types::TRect &R, const System::Types::TPoint &P);
public:
	/* TObject.Create */ inline __fastcall TdxSpreadSheetSelectionHelper() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSpreadSheetSelectionHelper() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 dxSpreadSheetMaxBorderSize = System::Int8(0x3);
static const System::Int8 dxSpreadSheetSelectionThickness = System::Int8(0x3);
extern DELPHI_PACKAGE System::StaticArray<System::Byte, 15> dxSpreadSheetBorderStyleWeights;
extern DELPHI_PACKAGE System::StaticArray<System::Byte, 15> dxSpreadSheetBorderStyleThickness;
extern DELPHI_PACKAGE System::StaticArray<System::Uitypes::TColor, 7> dxSpreadSheetSelectionColors;
extern DELPHI_PACKAGE System::StaticArray<System::StaticArray<HBRUSH, 2>, 15> dxSpreadSheetBordersBrushes;
extern DELPHI_PACKAGE System::StaticArray<HBRUSH, 18> dxSpreadSheetFillBrushes;
extern DELPHI_PACKAGE bool __fastcall dxSpreadSheetIsColorDefault(System::Uitypes::TColor AColor);
extern DELPHI_PACKAGE int __fastcall dxSpreadSheetPrepareCanvas(Cxgraphics::TcxCanvas* ACanvas, Vcl::Graphics::TFont* AFont, int AFontDPI = 0x0);
extern DELPHI_PACKAGE void __fastcall dxSpreadSheetUnprepareCanvas(Cxgraphics::TcxCanvas* ACanvas, int APrevFontDPI);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall dxSpreadSheetGetColorDefault(System::Uitypes::TColor AColor, System::Uitypes::TColor ADefaultColor);
extern DELPHI_PACKAGE void __fastcall dxSpreadSheetResetZoomFactor(Cxgraphics::TcxCanvas* ACanvas, System::Types::TRect &ARect, tagXFORM &APrevTransform);
extern DELPHI_PACKAGE void __fastcall dxSpreadSheetRestoreZoomFactor(Cxgraphics::TcxCanvas* ACanvas, const tagXFORM &APrevTransform);
extern DELPHI_PACKAGE void __fastcall dxSpreadSheetDrawBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, System::Uitypes::TColor ABackgroundColor, System::Uitypes::TColor AForegroundColor, TdxSpreadSheetCellFillStyle AFillStyle);
extern DELPHI_PACKAGE void __fastcall dxSpreadSheetDrawBorder(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, System::Uitypes::TColor AColor, System::Uitypes::TColor ABackgroundColor, TdxSpreadSheetCellBorderStyle AStyle, bool AIsHorizontalBorder)/* overload */;
extern DELPHI_PACKAGE void __fastcall dxSpreadSheetDrawBorder(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, System::Uitypes::TColor AColor, System::Uitypes::TColor ABackgroundColor, Cxgeometry::TcxBorder ASide, TdxSpreadSheetCellBordersStyles ABordersStyles)/* overload */;
extern DELPHI_PACKAGE void __fastcall dxSpreadSheetDrawBorders(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, System::Uitypes::TColor AColor, System::Uitypes::TColor ABackgroundColor, TdxSpreadSheetCellBorderStyle AStyle);
extern DELPHI_PACKAGE System::Types::TRect __fastcall dxSpreadSheetGetBorderBounds(const System::Types::TRect &ABounds, Cxgeometry::TcxBorder ASide, TdxSpreadSheetCellBordersStyles ABordersStyles, bool AIsRightToLeftLayout = false);
extern DELPHI_PACKAGE void __fastcall dxSpreadSheetSetupGpCanvas(Dxgdiplusclasses::TdxGPCanvas* ACanvas, bool AUseAntialiasing);
}	/* namespace Dxspreadsheetgraphics */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXSPREADSHEETGRAPHICS)
using namespace Dxspreadsheetgraphics;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxspreadsheetgraphicsHPP
