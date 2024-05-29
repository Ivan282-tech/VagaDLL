// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxSkinCaramel.pas' rev: 35.00 (Windows)

#ifndef DxskincaramelHPP
#define DxskincaramelHPP

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
#pragma link "dxSkinCaramelRS28.bpi"
#else
#pragma link "dxSkinCaramelRS28.lib"
#endif

namespace Dxskincaramel
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TdxSkinCaramelPainter;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSkinCaramelPainter : public Dxskinslookandfeelpainter::TdxSkinLookAndFeelPainter
{
	typedef Dxskinslookandfeelpainter::TdxSkinLookAndFeelPainter inherited;
	
public:
	virtual System::UnicodeString __fastcall LookAndFeelName();
public:
	/* TdxSkinLookAndFeelPainter.Create */ inline __fastcall virtual TdxSkinCaramelPainter(const System::UnicodeString ASkinResName, NativeUInt ASkinResInstance) : Dxskinslookandfeelpainter::TdxSkinLookAndFeelPainter(ASkinResName, ASkinResInstance) { }
	/* TdxSkinLookAndFeelPainter.Destroy */ inline __fastcall virtual ~TdxSkinCaramelPainter() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dxskincaramel */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXSKINCARAMEL)
using namespace Dxskincaramel;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxskincaramelHPP
