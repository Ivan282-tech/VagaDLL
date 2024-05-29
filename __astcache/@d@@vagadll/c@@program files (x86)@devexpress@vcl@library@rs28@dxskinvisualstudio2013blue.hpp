// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxSkinVisualStudio2013Blue.pas' rev: 35.00 (Windows)

#ifndef Dxskinvisualstudio2013blueHPP
#define Dxskinvisualstudio2013blueHPP

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
#pragma link "dxSkinVisualStudio2013BlueRS28.bpi"
#else
#pragma link "dxSkinVisualStudio2013BlueRS28.lib"
#endif

namespace Dxskinvisualstudio2013blue
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TdxSkinVisualStudio2013BluePainter;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSkinVisualStudio2013BluePainter : public Dxskinslookandfeelpainter::TdxSkinLookAndFeelPainter
{
	typedef Dxskinslookandfeelpainter::TdxSkinLookAndFeelPainter inherited;
	
public:
	virtual System::UnicodeString __fastcall LookAndFeelName();
public:
	/* TdxSkinLookAndFeelPainter.Create */ inline __fastcall virtual TdxSkinVisualStudio2013BluePainter(const System::UnicodeString ASkinResName, NativeUInt ASkinResInstance) : Dxskinslookandfeelpainter::TdxSkinLookAndFeelPainter(ASkinResName, ASkinResInstance) { }
	/* TdxSkinLookAndFeelPainter.Destroy */ inline __fastcall virtual ~TdxSkinVisualStudio2013BluePainter() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dxskinvisualstudio2013blue */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXSKINVISUALSTUDIO2013BLUE)
using namespace Dxskinvisualstudio2013blue;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Dxskinvisualstudio2013blueHPP
