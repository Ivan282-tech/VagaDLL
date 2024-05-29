// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxSkinsDefaultPainters.pas' rev: 35.00 (Windows)

#ifndef DxskinsdefaultpaintersHPP
#define DxskinsdefaultpaintersHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <dxGDIPlusAPI.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <dxSkinsCore.hpp>
#include <dxSkinsLookAndFeelPainter.hpp>
#include <dxSkinsStrs.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxskinsdefaultpainters
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TdxSkinsUserSkinPainter;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSkinsUserSkinPainter : public Dxskinslookandfeelpainter::TdxSkinLookAndFeelPainter
{
	typedef Dxskinslookandfeelpainter::TdxSkinLookAndFeelPainter inherited;
	
protected:
	virtual Dxskinslookandfeelpainter::TdxSkinLookAndFeelPainterInfoClass __fastcall GetSkinInfoClass();
	
public:
	virtual bool __fastcall IsInternalPainter();
	virtual System::UnicodeString __fastcall LookAndFeelName();
public:
	/* TdxSkinLookAndFeelPainter.Create */ inline __fastcall virtual TdxSkinsUserSkinPainter(const System::UnicodeString ASkinResName, NativeUInt ASkinResInstance) : Dxskinslookandfeelpainter::TdxSkinLookAndFeelPainter(ASkinResName, ASkinResInstance) { }
	/* TdxSkinLookAndFeelPainter.Destroy */ inline __fastcall virtual ~TdxSkinsUserSkinPainter() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
#define sdxDefaultUserSkinData L"DefaultUserSkinData"
#define sdxSkinsUserSkinName L"UserSkin"
extern DELPHI_PACKAGE void __fastcall dxSkinsPopulateSkinResources(NativeUInt AModule, System::Classes::TStringList* AResNames, System::Classes::TStringList* ASkinNames);
extern DELPHI_PACKAGE bool __fastcall dxSkinsLoadedUserSkinHasMissingElements(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall dxSkinsUserSkinGetLoadedSkinName(bool ADisplayName = false);
extern DELPHI_PACKAGE bool __fastcall dxSkinsUserSkinLoadFromFile(const System::UnicodeString AFileName, const System::UnicodeString ASkinName = System::UnicodeString());
extern DELPHI_PACKAGE bool __fastcall dxSkinsUserSkinLoadFromFileByIndex(const System::UnicodeString AFileName, int ASkinIndex = 0x0);
extern DELPHI_PACKAGE bool __fastcall dxSkinsUserSkinLoadFromResource(NativeUInt AInstance, const System::UnicodeString AResourceName, const System::UnicodeString ASkinName = System::UnicodeString());
extern DELPHI_PACKAGE bool __fastcall dxSkinsUserSkinLoadFromStream(System::Classes::TStream* AStream, const System::UnicodeString ASkinName = System::UnicodeString());
extern DELPHI_PACKAGE bool __fastcall dxSkinsUserSkinLoadFromStreamByIndex(System::Classes::TStream* AStream, int ASkinIndex = 0x0);
extern DELPHI_PACKAGE bool __fastcall dxSkinsUserSkinPopulateSkinNames(System::Classes::TStream* AStream, System::Classes::TStrings* AList, bool ADisplayNames = false)/* overload */;
extern DELPHI_PACKAGE bool __fastcall dxSkinsUserSkinPopulateSkinNames(const System::UnicodeString AFileName, System::Classes::TStrings* AList, bool ADisplayNames = false)/* overload */;
}	/* namespace Dxskinsdefaultpainters */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXSKINSDEFAULTPAINTERS)
using namespace Dxskinsdefaultpainters;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxskinsdefaultpaintersHPP
