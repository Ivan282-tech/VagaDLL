// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxCommon.pas' rev: 35.00 (Windows)

#ifndef DxcommonHPP
#define DxcommonHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <dxCore.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxcommon
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE int __fastcall dxDropDownNCHeight(void);
extern DELPHI_PACKAGE Dxcore::TdxCorner __fastcall GetCornerForRects(const System::Types::TRect &EditRect, const System::Types::TRect &DropDownRect);
extern DELPHI_PACKAGE int __fastcall GetHitTestByCorner(Dxcore::TdxCorner ACorner);
extern DELPHI_PACKAGE void __fastcall DrawCloseButton(HDC DC, System::Types::TRect &ARect, bool Selected, bool Pressed, Dxcore::TdxCorner ACorner);
extern DELPHI_PACKAGE void __fastcall DrawSizeGrip(HDC ADC, System::Types::TRect &ARect, Dxcore::TdxCorner ACorner);
}	/* namespace Dxcommon */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXCOMMON)
using namespace Dxcommon;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxcommonHPP
