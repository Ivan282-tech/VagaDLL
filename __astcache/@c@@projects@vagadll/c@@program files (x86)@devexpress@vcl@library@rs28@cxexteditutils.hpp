// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxExtEditUtils.pas' rev: 35.00 (Windows)

#ifndef CxexteditutilsHPP
#define CxexteditutilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Variants.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Forms.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.ImgList.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.StdCtrls.hpp>
#include <System.SysUtils.hpp>
#include <cxCheckBox.hpp>
#include <cxClasses.hpp>
#include <cxContainer.hpp>
#include <cxControls.hpp>
#include <cxEdit.hpp>
#include <cxEditPaintUtils.hpp>
#include <cxEditUtils.hpp>
#include <cxGraphics.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxLookAndFeels.hpp>
#include <cxTextEdit.hpp>
#include <cxVariants.hpp>
#include <dxThemeManager.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxexteditutils
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
static const System::Int8 MRUDelimiterWidth = System::Int8(0x3);
extern DELPHI_PACKAGE System::Types::TRect __fastcall DrawBounds(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &Bounds, const System::Uitypes::TColor AUpperLeftColor, const System::Uitypes::TColor ALowerRightColor);
extern DELPHI_PACKAGE void __fastcall DrawCanvasLine(Vcl::Graphics::TCanvas* ACanvas, const System::Uitypes::TColor AColor, const System::Types::TPoint &AFromPoint, const System::Types::TPoint &AToPoint);
extern DELPHI_PACKAGE void __fastcall DrawMRUDelimiter(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &AItemRect, bool AIsItemSelected);
extern DELPHI_PACKAGE int __fastcall CalcMaxWidth(Vcl::Graphics::TCanvas* ACanvas, const System::UnicodeString AText);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall IncColor(const System::Uitypes::TColor AColor, const int X)/* overload */;
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall IncColor(const System::Uitypes::TColor AColor, const int AR, const int AG, const int AB)/* overload */;
extern DELPHI_PACKAGE int __fastcall CalcCenterPosHeight(const System::Types::TRect &ARect, const int ADrawHeight);
extern DELPHI_PACKAGE int __fastcall CalcDrawWidth(const System::Types::TRect &ARect, const int ADrawHeight);
extern DELPHI_PACKAGE bool __fastcall IsVarEmpty(const System::Variant &AValue);
extern DELPHI_PACKAGE bool __fastcall IsValidStringForInt(System::UnicodeString S);
extern DELPHI_PACKAGE bool __fastcall IsValidStringForDouble(const System::UnicodeString AValue);
extern DELPHI_PACKAGE int __fastcall cxStrToInt(const System::UnicodeString AValue, bool AToFirstNonNum = false);
extern DELPHI_PACKAGE System::Extended __fastcall cxStrToFloat(const System::UnicodeString AValue, bool AToFirstNonNum = false);
extern DELPHI_PACKAGE bool __fastcall cxStrToColor(System::UnicodeString S, /* out */ System::Uitypes::TColor &AColor);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall cxRGBStringColorToColor(const System::UnicodeString AString);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall cxHexRGBStringColorToColor(const System::UnicodeString AString);
extern DELPHI_PACKAGE System::UnicodeString __fastcall CheckStateToString(const Cxlookandfeelpainters::TcxCheckBoxState Value);
extern DELPHI_PACKAGE Cxlookandfeelpainters::TcxCheckBoxState __fastcall StringToCheckState(const System::UnicodeString Value, const bool AllowGrayed);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetWord(const int APosition, const System::UnicodeString S, const System::WideChar Delimiter);
extern DELPHI_PACKAGE bool __fastcall AdjustCanvasFont(Vcl::Graphics::TCanvas* ACanvas, Vcl::Graphics::TFont* AFont, int AAngle);
}	/* namespace Cxexteditutils */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXEXTEDITUTILS)
using namespace Cxexteditutils;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxexteditutilsHPP
