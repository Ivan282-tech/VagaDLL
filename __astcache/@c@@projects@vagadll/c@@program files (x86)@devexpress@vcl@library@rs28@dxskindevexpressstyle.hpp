// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxSkinDevExpressStyle.pas' rev: 35.00 (Windows)

#ifndef DxskindevexpressstyleHPP
#define DxskindevexpressstyleHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <dxCore.hpp>
#include <dxCoreGraphics.hpp>
#include <dxGDIPlusAPI.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <dxSkinsCore.hpp>
#include <dxSkinsLookAndFeelPainter.hpp>

//-- user supplied -----------------------------------------------------------
#ifdef USEPACKAGES
#pragma link "dxSkinDevExpressStyleRS28.bpi"
#else
#pragma link "dxSkinDevExpressStyleRS28.lib"
#endif

namespace Dxskindevexpressstyle
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TdxSkinDevExpressStylePainter;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSkinDevExpressStylePainter : public Dxskinslookandfeelpainter::TdxSkinLookAndFeelPainter
{
	typedef Dxskinslookandfeelpainter::TdxSkinLookAndFeelPainter inherited;
	
public:
	virtual System::UnicodeString __fastcall LookAndFeelName();
public:
	/* TdxSkinLookAndFeelPainter.Create */ inline __fastcall virtual TdxSkinDevExpressStylePainter(const System::UnicodeString ASkinResName, NativeUInt ASkinResInstance) : Dxskinslookandfeelpainter::TdxSkinLookAndFeelPainter(ASkinResName, ASkinResInstance) { }
	/* TdxSkinLookAndFeelPainter.Destroy */ inline __fastcall virtual ~TdxSkinDevExpressStylePainter() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dxskindevexpressstyle */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXSKINDEVEXPRESSSTYLE)
using namespace Dxskindevexpressstyle;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxskindevexpressstyleHPP
