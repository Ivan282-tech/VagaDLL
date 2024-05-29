// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxIncrementalSearch.pas' rev: 35.00 (Windows)

#ifndef DxincrementalsearchHPP
#define DxincrementalsearchHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <dxCore.hpp>
#include <System.Math.hpp>
#include <System.Types.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.StdCtrls.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.ImgList.hpp>
#include <System.RTLConsts.hpp>
#include <cxClasses.hpp>
#include <dxTypeHelpers.hpp>
#include <dxCoreClasses.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxincrementalsearch
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TdxIncrementalSearchController;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxIncrementalSearchController : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	unsigned FAutoCompleteDelay;
	bool FIsRepeat;
	System::UnicodeString FSearchText;
	
protected:
	unsigned FStartIncrementalSearch;
	virtual bool __fastcall CanProcessIncSearch(System::WideChar Key);
	virtual bool __fastcall DoIncrementalSearch(System::WideChar &Key);
	virtual bool __fastcall FocusNextItemWithText(const System::UnicodeString AText) = 0 ;
	virtual bool __fastcall IsIncSearchChar(System::WideChar AChar);
	void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall KeyPress(System::WideChar &Key);
	void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual bool __fastcall ProcessKeyPress(System::WideChar &Key);
	
public:
	__fastcall TdxIncrementalSearchController();
	virtual void __fastcall ClearIncrementalSearch();
	__property unsigned AutoCompleteDelay = {read=FAutoCompleteDelay, write=FAutoCompleteDelay, nodefault};
	__property bool IsRepeat = {read=FIsRepeat, nodefault};
	__property System::UnicodeString SearchText = {read=FSearchText, write=FSearchText};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxIncrementalSearchController() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dxincrementalsearch */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXINCREMENTALSEARCH)
using namespace Dxincrementalsearch;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxincrementalsearchHPP
