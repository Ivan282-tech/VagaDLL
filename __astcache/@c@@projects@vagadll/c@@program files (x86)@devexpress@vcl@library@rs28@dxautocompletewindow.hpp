// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxAutoCompleteWindow.pas' rev: 35.00 (Windows)

#ifndef DxautocompletewindowHPP
#define DxautocompletewindowHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Menus.hpp>
#include <dxCore.hpp>
#include <dxCoreClasses.hpp>
#include <dxMessages.hpp>
#include <cxClasses.hpp>
#include <cxGraphics.hpp>
#include <cxLookAndFeels.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxControls.hpp>
#include <cxContainer.hpp>
#include <cxListBox.hpp>
#include <dxForms.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxautocompletewindow
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TdxAutoCompleteInnerListBoxSizeGrip;
class DELPHICLASS TdxCustomAutoCompleteInnerListBox;
class DELPHICLASS TdxCustomAutoCompleteWindow;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TdxAutoCompleteInnerListBoxSizeGrip : public Cxcontrols::TcxSizeGrip
{
	typedef Cxcontrols::TcxSizeGrip inherited;
	
protected:
	virtual void __fastcall Paint();
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
public:
	/* TcxSizeGrip.Create */ inline __fastcall virtual TdxAutoCompleteInnerListBoxSizeGrip(System::Classes::TComponent* AOwner) : Cxcontrols::TcxSizeGrip(AOwner) { }
	/* TcxSizeGrip.CreateEx */ inline __fastcall virtual TdxAutoCompleteInnerListBoxSizeGrip(System::TObject* AOwner) : Cxcontrols::TcxSizeGrip(AOwner) { }
	/* TcxSizeGrip.Destroy */ inline __fastcall virtual ~TdxAutoCompleteInnerListBoxSizeGrip() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxAutoCompleteInnerListBoxSizeGrip(HWND ParentWindow) : Cxcontrols::TcxSizeGrip(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TdxCustomAutoCompleteInnerListBox : public Cxlistbox::TdxCustomListBox
{
	typedef Cxlistbox::TdxCustomListBox inherited;
	
private:
	bool FCircularKeyboardNavigation;
	bool FHighlightSearchText;
	System::Types::TPoint FPrevMouseCursor;
	System::Classes::TNotifyEvent FOnSelectItem;
	void __fastcall DoSelectItem();
	System::Types::TSize __fastcall GetSizeGripSize();
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	
protected:
	virtual void __fastcall DoLayoutChanged();
	virtual void __fastcall DrawItemText(const System::Types::TRect &R, Cxlistbox::TdxCustomListBoxItem* AItem, Cxlookandfeelpainters::TcxButtonState AState);
	virtual int __fastcall GetTextFlags();
	virtual void __fastcall DoMouseMove(System::Classes::TShiftState Shift, int X, int Y);
	HIDESBASE virtual void __fastcall DoMouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual bool __fastcall ProcessNavigationKey(System::Word &Key, System::Classes::TShiftState Shift);
	virtual bool __fastcall AllowTouchScrollUIMode();
	virtual System::Types::TRect __fastcall GetSizeGripBounds();
	virtual Cxcontrols::TcxSizeGripClass __fastcall GetSizeGripClass();
	virtual System::Types::TRect __fastcall GetVScrollBarBounds();
	virtual void __fastcall HideTouchScrollUIDirectly();
	virtual bool __fastcall IsSizeGripVisible();
	virtual void __fastcall InitScrollBarsParameters();
	
public:
	virtual void __fastcall AfterConstruction();
	bool __fastcall PointInSizeGrip(const System::Types::TPoint &P);
	__property bool CircularKeyboardNavigation = {read=FCircularKeyboardNavigation, write=FCircularKeyboardNavigation, nodefault};
	__property bool HighlightSearchText = {read=FHighlightSearchText, write=FHighlightSearchText, nodefault};
	__property System::Classes::TNotifyEvent OnSelectItem = {read=FOnSelectItem, write=FOnSelectItem};
public:
	/* TdxCustomListBox.Create */ inline __fastcall virtual TdxCustomAutoCompleteInnerListBox(System::Classes::TComponent* AOwner) : Cxlistbox::TdxCustomListBox(AOwner) { }
	/* TdxCustomListBox.Destroy */ inline __fastcall virtual ~TdxCustomAutoCompleteInnerListBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxCustomAutoCompleteInnerListBox(HWND ParentWindow) : Cxlistbox::TdxCustomListBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TdxCustomAutoCompleteWindow : public Cxcontainer::TcxCustomPopupWindow
{
	typedef Cxcontainer::TcxCustomPopupWindow inherited;
	
private:
	int FDisplayRowsCount;
	TdxCustomAutoCompleteInnerListBox* FInnerListBox;
	Cxlookandfeels::TcxLookAndFeel* FLookAndFeel;
	System::UnicodeString FPreviouslyEnteredText;
	System::Classes::TNotifyEvent FOnSelectItem;
	System::Classes::TNotifyEvent FOnStoreSize;
	bool __fastcall GetHighlightSearchText();
	Vcl::Graphics::TFont* __fastcall GetItemsFont();
	System::UnicodeString __fastcall GetSearchText();
	System::TObject* __fastcall GetSelectedObject();
	System::UnicodeString __fastcall GetSelectedText();
	void __fastcall SelectItemHandler(System::TObject* Sender);
	void __fastcall SetHighlightSearchText(const bool Value);
	void __fastcall SetItemsFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetSearchText(const System::UnicodeString Value);
	void __fastcall SetSelectedObject(System::TObject* const Value);
	void __fastcall SetSelectedText(const System::UnicodeString AValue);
	MESSAGE void __fastcall WMExitSizeMove(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	
protected:
	virtual void __fastcall AdjustClientRect(System::Types::TRect &Rect);
	virtual void __fastcall CalculateConstraints();
	virtual System::Types::TSize __fastcall CalculateSize();
	virtual TdxCustomAutoCompleteInnerListBox* __fastcall CreateInnerListBox();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall DoSelectItem();
	virtual void __fastcall DoStoreAutoCompleteWindowCustomizedSize();
	void __fastcall LookAndFeelChanged(Cxlookandfeels::TcxLookAndFeel* Sender, Cxlookandfeels::TcxLookAndFeelValues AChangedValues);
	DYNAMIC void __fastcall Paint();
	__property TdxCustomAutoCompleteInnerListBox* InnerListBox = {read=FInnerListBox};
	__property System::UnicodeString PreviouslyEnteredText = {read=FPreviouslyEnteredText};
	
public:
	__fastcall virtual TdxCustomAutoCompleteWindow(Vcl::Controls::TWinControl* AOwnerControl);
	__fastcall virtual ~TdxCustomAutoCompleteWindow();
	bool __fastcall HasSelectedItem();
	virtual void __fastcall Populate(System::Classes::TStrings* AList);
	virtual void __fastcall Popup(Vcl::Controls::TWinControl* AFocusedControl);
	void __fastcall ProcessNavigationKey(System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall SetSize(int AWidth, int AHeight)/* overload */;
	void __fastcall SetSize(const System::Types::TSize &ASize)/* overload */;
	__property int DisplayRowsCount = {read=FDisplayRowsCount, write=FDisplayRowsCount, nodefault};
	__property bool HighlightSearchText = {read=GetHighlightSearchText, write=SetHighlightSearchText, nodefault};
	__property Vcl::Graphics::TFont* ItemsFont = {read=GetItemsFont, write=SetItemsFont};
	__property Cxlookandfeels::TcxLookAndFeel* LookAndFeel = {read=FLookAndFeel};
	__property System::UnicodeString SearchText = {read=GetSearchText, write=SetSearchText};
	__property System::TObject* SelectedObject = {read=GetSelectedObject, write=SetSelectedObject};
	__property System::UnicodeString SelectedText = {read=GetSelectedText, write=SetSelectedText};
	__property System::Classes::TNotifyEvent OnSelectItem = {read=FOnSelectItem, write=FOnSelectItem};
	__property System::Classes::TNotifyEvent OnStoreSize = {read=FOnStoreSize, write=FOnStoreSize};
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TdxCustomAutoCompleteWindow(System::Classes::TComponent* AOwner, int Dummy) : Cxcontainer::TcxCustomPopupWindow(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxCustomAutoCompleteWindow(HWND ParentWindow) : Cxcontainer::TcxCustomPopupWindow(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 dxAutoCompleteWindowBorderSize = System::Int8(0x1);
static const System::Int8 dxAutoCompleteWindowDefaultDropDownRows = System::Int8(0x10);
}	/* namespace Dxautocompletewindow */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXAUTOCOMPLETEWINDOW)
using namespace Dxautocompletewindow;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxautocompletewindowHPP
