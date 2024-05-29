// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxBarBuiltInMenu.pas' rev: 35.00 (Windows)

#ifndef DxbarbuiltinmenuHPP
#define DxbarbuiltinmenuHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Menus.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.ImgList.hpp>
#include <System.Contnrs.hpp>
#include <dxCore.hpp>
#include <cxClasses.hpp>
#include <dxGDIPlusClasses.hpp>
#include <cxLookAndFeels.hpp>
#include <dxBar.hpp>
#include <dxBuiltInPopupMenu.hpp>
#include <cxGraphics.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxbarbuiltinmenu
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TdxBarBuiltInMenuHelper;
class DELPHICLASS TdxBarBuiltInPopupMenuAdapter;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TdxBarBuiltInMenuItemType : unsigned char { bmitDefault, bmitChecked, bmitSubItem };

class PASCALIMPLEMENTATION TdxBarBuiltInMenuHelper : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	Dxbar::TdxBarManager* FBarManager;
	System::Contnrs::TObjectList* FItems;
	Dxbar::TdxBarPopupMenu* FPopupMenu;
	System::Classes::TBiDiMode __fastcall GetBiDiMode();
	Vcl::Imglist::TCustomImageList* __fastcall GetImages();
	Cxlookandfeels::TcxLookAndFeel* __fastcall GetLookAndFeel();
	void __fastcall SetBiDiMode(const System::Classes::TBiDiMode Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall SetLookAndFeel(Cxlookandfeels::TcxLookAndFeel* const Value);
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	__fastcall TdxBarBuiltInMenuHelper();
	__fastcall virtual ~TdxBarBuiltInMenuHelper();
	System::Classes::TComponent* __fastcall CreateMenuItem(System::Classes::TComponent* AOwner, const System::UnicodeString ACaption, NativeInt ACommand, bool AEnabled = true, TdxBarBuiltInMenuItemType AItemType = (TdxBarBuiltInMenuItemType)(0x0), bool AChecked = false, int AImageIndex = 0xffffffff, bool AWithSeparator = false, Dxgdiplusclasses::TdxSmartGlyph* AGlyph = (Dxgdiplusclasses::TdxSmartGlyph*)(0x0), System::Classes::TNotifyEvent AClickEvent = 0x0, System::Classes::TShortCut AShortCut = (System::Classes::TShortCut)(0x0));
	void __fastcall CreatePopupMenu();
	void __fastcall DestroyPopupMenu();
	__property Dxbar::TdxBarManager* BarManager = {read=FBarManager};
	__property System::Classes::TBiDiMode BiDiMode = {read=GetBiDiMode, write=SetBiDiMode, nodefault};
	__property Cxlookandfeels::TcxLookAndFeel* LookAndFeel = {read=GetLookAndFeel, write=SetLookAndFeel};
	__property Dxbar::TdxBarPopupMenu* PopupMenu = {read=FPopupMenu};
	__property Vcl::Imglist::TCustomImageList* Images = {read=GetImages, write=SetImages};
};


class PASCALIMPLEMENTATION TdxBarBuiltInPopupMenuAdapter : public Dxbuiltinpopupmenu::TdxCustomBuiltInPopupMenuAdapter
{
	typedef Dxbuiltinpopupmenu::TdxCustomBuiltInPopupMenuAdapter inherited;
	
private:
	bool FSeparatorRequired;
	
protected:
	virtual int __fastcall GetCount();
	virtual System::Classes::TComponent* __fastcall GetItem(int Index);
	virtual System::Classes::TComponent* __fastcall GetPopupMenu();
	
public:
	virtual System::Classes::TComponent* __fastcall Add(const System::UnicodeString ACaption, System::Classes::TNotifyEvent AClickEvent, NativeInt ATag = (NativeInt)(0x0), System::Uitypes::TImageIndex AImageIndex = (System::Uitypes::TImageIndex)(0xffffffff), bool AEnabled = true, System::Classes::TShortCut AShortCut = (System::Classes::TShortCut)(0x0), System::Classes::TComponent* AParentItem = (System::Classes::TComponent*)(0x0));
	virtual System::Classes::TComponent* __fastcall AddSubMenu(const System::UnicodeString ACaption, System::Classes::TNotifyEvent AClickEvent, NativeInt ATag = (NativeInt)(0x0), System::Uitypes::TImageIndex AImageIndex = (System::Uitypes::TImageIndex)(0xffffffff), bool AEnabled = true, System::Classes::TShortCut AShortCut = (System::Classes::TShortCut)(0x0), System::Classes::TComponent* AParentItem = (System::Classes::TComponent*)(0x0));
	virtual void __fastcall AddSeparator();
	virtual void __fastcall AfterConstruction();
	virtual void __fastcall BeforeDestruction();
	virtual void __fastcall Clear();
	virtual bool __fastcall Popup(const System::Types::TPoint &P);
	virtual void __fastcall Remove(System::Classes::TComponent* AItem);
	virtual void __fastcall SetAction(System::Classes::TComponent* AItem, System::Classes::TBasicAction* AValue);
	virtual void __fastcall SetChecked(System::Classes::TComponent* AItem, bool AValue);
	virtual void __fastcall SetDefault(System::Classes::TComponent* AItem, bool AValue);
	virtual void __fastcall SetGlyph(System::Classes::TComponent* AItem, Vcl::Graphics::TGraphic* AGlyph);
	virtual void __fastcall SetImages(Vcl::Imglist::TCustomImageList* AImages)/* overload */;
	virtual void __fastcall SetImages(System::Classes::TComponent* AItem, Vcl::Imglist::TCustomImageList* AImages)/* overload */;
	virtual void __fastcall SetLookAndFeel(Cxlookandfeels::TcxLookAndFeel* AValue);
public:
	/* TComponent.Create */ inline __fastcall virtual TdxBarBuiltInPopupMenuAdapter(System::Classes::TComponent* AOwner) : Dxbuiltinpopupmenu::TdxCustomBuiltInPopupMenuAdapter(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TdxBarBuiltInPopupMenuAdapter() { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TdxBarBuiltInMenuHelper* __fastcall dxBarPopupHelper(void);
}	/* namespace Dxbarbuiltinmenu */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXBARBUILTINMENU)
using namespace Dxbarbuiltinmenu;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxbarbuiltinmenuHPP
