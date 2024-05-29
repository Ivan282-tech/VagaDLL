// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxSkinTheBezier.pas' rev: 35.00 (Windows)

#ifndef DxskinthebezierHPP
#define DxskinthebezierHPP

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
#pragma link "dxSkinTheBezierRS28.bpi"
#else
#pragma link "dxSkinTheBezierRS28.lib"
#endif

namespace Dxskinthebezier
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TdxSkinTheBezierPainter;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSkinTheBezierPainter : public Dxskinslookandfeelpainter::TdxSkinLookAndFeelPainter
{
	typedef Dxskinslookandfeelpainter::TdxSkinLookAndFeelPainter inherited;
	
public:
	virtual System::UnicodeString __fastcall LookAndFeelName();
public:
	/* TdxSkinLookAndFeelPainter.Create */ inline __fastcall virtual TdxSkinTheBezierPainter(const System::UnicodeString ASkinResName, NativeUInt ASkinResInstance) : Dxskinslookandfeelpainter::TdxSkinLookAndFeelPainter(ASkinResName, ASkinResInstance) { }
	/* TdxSkinLookAndFeelPainter.Destroy */ inline __fastcall virtual ~TdxSkinTheBezierPainter() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dxskinthebezier */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXSKINTHEBEZIER)
using namespace Dxskinthebezier;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxskinthebezierHPP
