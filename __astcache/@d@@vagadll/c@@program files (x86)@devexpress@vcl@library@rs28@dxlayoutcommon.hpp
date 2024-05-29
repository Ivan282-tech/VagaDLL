// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxLayoutCommon.pas' rev: 35.00 (Windows)

#ifndef DxlayoutcommonHPP
#define DxlayoutcommonHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.TypInfo.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>
#include <cxClasses.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxlayoutcommon
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IdxLayoutComponent;
typedef System::DelphiInterface<IdxLayoutComponent> _di_IdxLayoutComponent;
__interface DELPHIINTERFACE IdxLayoutDesignTimeHelper;
typedef System::DelphiInterface<IdxLayoutDesignTimeHelper> _di_IdxLayoutDesignTimeHelper;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TdxLayoutSide : unsigned char { sdLeft, sdRight, sdTop, sdBottom };

enum DECLSPEC_DENUM TdxAlignmentVert : unsigned char { tavTop, tavCenter, tavBottom };

__interface  INTERFACE_UUID("{F31C9078-5732-44D8-9347-3EA7B93837E3}") IdxLayoutComponent  : public System::IInterface 
{
	virtual void __stdcall SelectionChanged() = 0 ;
};

__interface  INTERFACE_UUID("{9A1C2CD3-7CD9-4A7D-8E51-9305994B2F2E}") IdxLayoutDesignTimeHelper  : public System::IInterface 
{
	virtual bool __fastcall IsToolSelected() = 0 ;
	virtual System::UnicodeString __fastcall GetFieldDisplayName(System::TObject* AField) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 ickUnknown = System::Int8(-1);
static const System::Int8 ickControlItem = System::Int8(0x0);
static const System::Int8 ickGroup = System::Int8(0x1);
static const System::Int8 ickEmptySpace = System::Int8(0x2);
static const System::Int8 ickSeparator = System::Int8(0x3);
static const System::Int8 ickSplitter = System::Int8(0x4);
static const System::Int8 ickLabeled = System::Int8(0x5);
static const System::Int8 ickImage = System::Int8(0x6);
static const System::Int8 ickAutoCreatedGroup = System::Int8(0x7);
static const System::Int8 ickCheckBox = System::Int8(0x8);
static const System::Int8 ickRadioButton = System::Int8(0x9);
static const System::Int8 ickItemClassCount = System::Int8(0xa);
extern DELPHI_PACKAGE _di_IdxLayoutDesignTimeHelper dxLayoutDesignTimeHelper;
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall GetHotTrackColor(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetPlainString(const System::UnicodeString S);
extern DELPHI_PACKAGE void __fastcall SetComponentName(System::Classes::TComponent* AComponent, const System::UnicodeString ABaseName, bool AIsDesigning, bool AIsLoading);
}	/* namespace Dxlayoutcommon */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXLAYOUTCOMMON)
using namespace Dxlayoutcommon;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxlayoutcommonHPP
