// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxBuiltInPopupMenu.pas' rev: 35.00 (Windows)

#ifndef DxbuiltinpopupmenuHPP
#define DxbuiltinpopupmenuHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>
#include <Vcl.Menus.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <cxControls.hpp>
#include <cxClasses.hpp>
#include <dxCore.hpp>
#include <Vcl.ImgList.hpp>
#include <cxGraphics.hpp>
#include <cxLookAndFeels.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.Forms.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxbuiltinpopupmenu
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TdxCustomBuiltInPopupMenuAdapter;
class DELPHICLASS TdxBuiltInPopupMenuAdapterHelper;
class DELPHICLASS TdxStandardBuiltInPopupMenuAdapter;
class DELPHICLASS TdxBuiltInPopupMenuAdapterManager;
//-- type declarations -------------------------------------------------------
typedef System::TMetaClass* TdxCustomBuiltInPopupMenuAdapterClass;

class PASCALIMPLEMENTATION TdxCustomBuiltInPopupMenuAdapter : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	System::Classes::TBiDiMode FBiDiMode;
	bool FIsBiDiModeAssigned;
	System::Classes::TBiDiMode __fastcall GetBiDiMode();
	void __fastcall SetBiDiMode(System::Classes::TBiDiMode AValue);
	
protected:
	virtual int __fastcall GetCount() = 0 ;
	virtual System::Classes::TComponent* __fastcall GetItem(int Index) = 0 ;
	virtual System::Classes::TComponent* __fastcall GetPopupMenu() = 0 ;
	
public:
	virtual System::Classes::TComponent* __fastcall Add(const System::UnicodeString ACaption, System::Classes::TNotifyEvent AClickEvent, NativeInt ATag = (NativeInt)(0x0), System::Uitypes::TImageIndex AImageIndex = (System::Uitypes::TImageIndex)(0xffffffff), bool AEnabled = true, System::Classes::TShortCut AShortCut = (System::Classes::TShortCut)(0x0), System::Classes::TComponent* AParentItem = (System::Classes::TComponent*)(0x0)) = 0 ;
	virtual System::Classes::TComponent* __fastcall AddSubMenu(const System::UnicodeString ACaption, System::Classes::TNotifyEvent AClickEvent, NativeInt ATag = (NativeInt)(0x0), System::Uitypes::TImageIndex AImageIndex = (System::Uitypes::TImageIndex)(0xffffffff), bool AEnabled = true, System::Classes::TShortCut AShortCut = (System::Classes::TShortCut)(0x0), System::Classes::TComponent* AParentItem = (System::Classes::TComponent*)(0x0)) = 0 ;
	virtual void __fastcall AddSeparator() = 0 ;
	virtual void __fastcall Clear() = 0 ;
	void __fastcall Delete(int Index);
	HIDESBASE virtual void __fastcall Remove(System::Classes::TComponent* AItem);
	virtual void __fastcall SetAction(System::Classes::TComponent* AItem, System::Classes::TBasicAction* AValue) = 0 ;
	virtual void __fastcall SetChecked(System::Classes::TComponent* AItem, bool AValue) = 0 ;
	virtual void __fastcall SetDefault(System::Classes::TComponent* AItem, bool AValue) = 0 ;
	virtual void __fastcall SetGlyph(System::Classes::TComponent* AItem, Vcl::Graphics::TGraphic* AGlyph) = 0 ;
	virtual void __fastcall SetImages(Vcl::Imglist::TCustomImageList* AImages) = 0 /* overload */;
	virtual void __fastcall SetImages(System::Classes::TComponent* AItem, Vcl::Imglist::TCustomImageList* AImages) = 0 /* overload */;
	virtual void __fastcall SetLookAndFeel(Cxlookandfeels::TcxLookAndFeel* AValue);
	virtual bool __fastcall Popup(const System::Types::TPoint &P);
	__property System::Classes::TBiDiMode BiDiMode = {read=GetBiDiMode, write=SetBiDiMode, nodefault};
	__property int Count = {read=GetCount, nodefault};
	__property System::Classes::TComponent* Items[int Index] = {read=GetItem};
	__property System::Classes::TComponent* PopupMenu = {read=GetPopupMenu};
public:
	/* TComponent.Create */ inline __fastcall virtual TdxCustomBuiltInPopupMenuAdapter(System::Classes::TComponent* AOwner) : System::Classes::TComponent(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TdxCustomBuiltInPopupMenuAdapter() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBuiltInPopupMenuAdapterHelper : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod void __fastcall AddMenu(TdxCustomBuiltInPopupMenuAdapter* AAdapter, Vcl::Menus::TPopupMenu* AMenu, System::Classes::TNotifyEvent AClickEvent);
	__classmethod System::Classes::TComponent* __fastcall AddMenuItem(TdxCustomBuiltInPopupMenuAdapter* AAdapter, Vcl::Menus::TMenuItem* AMenuItem, System::Classes::TNotifyEvent AClickEvent, NativeInt ATag = (NativeInt)(0x0), System::Classes::TComponent* AParentItem = (System::Classes::TComponent*)(0x0));
public:
	/* TObject.Create */ inline __fastcall TdxBuiltInPopupMenuAdapterHelper() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBuiltInPopupMenuAdapterHelper() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxStandardBuiltInPopupMenuAdapter : public TdxCustomBuiltInPopupMenuAdapter
{
	typedef TdxCustomBuiltInPopupMenuAdapter inherited;
	
private:
	System::Classes::TComponent* FPopupMenu;
	bool FSeparatorRequired;
	
protected:
	virtual int __fastcall GetCount();
	virtual System::Classes::TComponent* __fastcall GetItem(int Index);
	virtual System::Classes::TComponent* __fastcall GetPopupMenu();
	
public:
	__fastcall virtual TdxStandardBuiltInPopupMenuAdapter(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxStandardBuiltInPopupMenuAdapter();
	virtual System::Classes::TComponent* __fastcall Add(const System::UnicodeString ACaption, System::Classes::TNotifyEvent AClickEvent, NativeInt ATag = (NativeInt)(0x0), System::Uitypes::TImageIndex AImageIndex = (System::Uitypes::TImageIndex)(0xffffffff), bool AEnabled = true, System::Classes::TShortCut AShortCut = (System::Classes::TShortCut)(0x0), System::Classes::TComponent* AParentItem = (System::Classes::TComponent*)(0x0));
	virtual System::Classes::TComponent* __fastcall AddSubMenu(const System::UnicodeString ACaption, System::Classes::TNotifyEvent AClickEvent, NativeInt ATag = (NativeInt)(0x0), System::Uitypes::TImageIndex AImageIndex = (System::Uitypes::TImageIndex)(0xffffffff), bool AEnabled = true, System::Classes::TShortCut AShortCut = (System::Classes::TShortCut)(0x0), System::Classes::TComponent* AParentItem = (System::Classes::TComponent*)(0x0));
	virtual void __fastcall AddSeparator();
	virtual void __fastcall Clear();
	virtual void __fastcall SetAction(System::Classes::TComponent* AItem, System::Classes::TBasicAction* AValue);
	virtual void __fastcall SetChecked(System::Classes::TComponent* AItem, bool AValue);
	virtual void __fastcall SetDefault(System::Classes::TComponent* AItem, bool AValue);
	virtual void __fastcall SetGlyph(System::Classes::TComponent* AItem, Vcl::Graphics::TGraphic* AGlyph);
	virtual void __fastcall SetImages(Vcl::Imglist::TCustomImageList* AImages)/* overload */;
	virtual void __fastcall SetImages(System::Classes::TComponent* AItem, Vcl::Imglist::TCustomImageList* AImages)/* overload */;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBuiltInPopupMenuAdapterManager : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod TdxCustomBuiltInPopupMenuAdapterClass __fastcall GetActualAdapterClass();
	__classmethod bool __fastcall IsActualAdapterStandard();
	__classmethod void __fastcall Register(TdxCustomBuiltInPopupMenuAdapterClass AClass);
	__classmethod void __fastcall Unregister(TdxCustomBuiltInPopupMenuAdapterClass AClass);
public:
	/* TObject.Create */ inline __fastcall TdxBuiltInPopupMenuAdapterManager() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBuiltInPopupMenuAdapterManager() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dxbuiltinpopupmenu */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXBUILTINPOPUPMENU)
using namespace Dxbuiltinpopupmenu;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxbuiltinpopupmenuHPP
