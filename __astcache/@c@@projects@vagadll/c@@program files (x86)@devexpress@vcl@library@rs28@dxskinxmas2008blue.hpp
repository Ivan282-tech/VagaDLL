// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxSkinXmas2008Blue.pas' rev: 35.00 (Windows)

#ifndef Dxskinxmas2008blueHPP
#define Dxskinxmas2008blueHPP

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
#pragma link "dxSkinXmas2008BlueRS28.bpi"
#else
#pragma link "dxSkinXmas2008BlueRS28.lib"
#endif

namespace Dxskinxmas2008blue
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TdxSkinXmas2008BluePainter;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSkinXmas2008BluePainter : public Dxskinslookandfeelpainter::TdxSkinLookAndFeelPainter
{
	typedef Dxskinslookandfeelpainter::TdxSkinLookAndFeelPainter inherited;
	
public:
	virtual System::UnicodeString __fastcall LookAndFeelName();
public:
	/* TdxSkinLookAndFeelPainter.Create */ inline __fastcall virtual TdxSkinXmas2008BluePainter(const System::UnicodeString ASkinResName, NativeUInt ASkinResInstance) : Dxskinslookandfeelpainter::TdxSkinLookAndFeelPainter(ASkinResName, ASkinResInstance) { }
	/* TdxSkinLookAndFeelPainter.Destroy */ inline __fastcall virtual ~TdxSkinXmas2008BluePainter() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dxskinxmas2008blue */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXSKINXMAS2008BLUE)
using namespace Dxskinxmas2008blue;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Dxskinxmas2008blueHPP
