// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxListBox.pas' rev: 35.00 (Windows)

#ifndef CxlistboxHPP
#define CxlistboxHPP

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
#include <cxControls.hpp>
#include <cxContainer.hpp>
#include <cxDataUtils.hpp>
#include <cxGraphics.hpp>
#include <cxLookAndFeels.hpp>
#include <dxTypeHelpers.hpp>
#include <cxAccessibility.hpp>
#include <cxScrollBar.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <dxCustomHint.hpp>
#include <cxEdit.hpp>
#include <cxCustomListBox.hpp>
#include <dxCoreClasses.hpp>
#include <dxIncrementalSearch.hpp>
#include <dxForms.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxlistbox
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxInnerListBox;
class DELPHICLASS TcxListBox;
class DELPHICLASS TdxCustomListBoxItem;
class DELPHICLASS TdxCustomCheckListBoxItem;
class DELPHICLASS TdxCustomListBoxItems;
class DELPHICLASS TdxCustomCheckListBoxItems;
class DELPHICLASS TdxCustomListBoxHintHelper;
class DELPHICLASS TdxListBoxIncrementalSearchController;
class DELPHICLASS TdxCustomListBoxAccessibilityHelper;
class DELPHICLASS TdxCustomListBox;
class DELPHICLASS TdxCheckListBoxIncrementalSearchController;
class DELPHICLASS TdxCustomCheckListBox;
class DELPHICLASS TdxCustomDropDownInnerListBox;
class DELPHICLASS TdxCustomDropDownListBox;
class DELPHICLASS TdxQuickCustomizationCustomCommand;
class DELPHICLASS TdxQuickCustomizationCustomCheckListBoxIncrementalSearchController;
class DELPHICLASS TdxQuickCustomizationCustomCheckListBox;
class DELPHICLASS TdxQuickCustomizationCommandListBox;
class DELPHICLASS TdxQuickCustomizationCheckListBox;
class DELPHICLASS TdxQuickCustomizationController;
class DELPHICLASS TdxQuickCustomizationCustomControl;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TdxCustomListBoxActionEvent)(TdxCustomListBox* Sender, int AItemIndex);

class PASCALIMPLEMENTATION TcxInnerListBox : public Cxcontainer::TcxCustomInnerListBox
{
	typedef Cxcontainer::TcxCustomInnerListBox inherited;
	
private:
	TcxListBox* __fastcall GetContainer();
	void __fastcall SetContainer(TcxListBox* Value);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	
protected:
	DYNAMIC void __fastcall Click();
	virtual void __fastcall DrawItem(int Index, const System::Types::TRect &Rect, Winapi::Windows::TOwnerDrawState State);
	__property TcxListBox* Container = {read=GetContainer, write=SetContainer};
	
public:
	DYNAMIC bool __fastcall ExecuteAction(System::Classes::TBasicAction* Action);
	virtual bool __fastcall UpdateAction(System::Classes::TBasicAction* Action);
	DYNAMIC bool __fastcall CanFocus();
public:
	/* TcxCustomInnerListBox.Create */ inline __fastcall virtual TcxInnerListBox(System::Classes::TComponent* AOwner) : Cxcontainer::TcxCustomInnerListBox(AOwner) { }
	/* TcxCustomInnerListBox.Destroy */ inline __fastcall virtual ~TcxInnerListBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxInnerListBox(HWND ParentWindow) : Cxcontainer::TcxCustomInnerListBox(ParentWindow) { }
	
};


typedef System::TMetaClass* TcxInnerListBoxClass;

typedef void __fastcall (__closure *TcxListBoxDrawItemEvent)(TcxListBox* AControl, Cxgraphics::TcxCanvas* ACanvas, int AIndex, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState AState);

typedef void __fastcall (__closure *TcxListBoxMeasureItemEvent)(TcxListBox* AControl, int AIndex, int &Height);

class PASCALIMPLEMENTATION TcxListBox : public Cxcustomlistbox::TcxCustomListBox
{
	typedef Cxcustomlistbox::TcxCustomListBox inherited;
	
private:
	TcxListBoxDrawItemEvent FOnDrawItem;
	TcxListBoxMeasureItemEvent FOnMeasureItem;
	void __fastcall DoMeasureItem(Vcl::Controls::TWinControl* Control, int Index, int &Height);
	int __fastcall GetColumns();
	bool __fastcall GetExtendedSelect();
	TcxInnerListBox* __fastcall GetInnerListBox();
	System::TObject* __fastcall GetItemObject();
	System::Classes::TStrings* __fastcall GetItems();
	bool __fastcall GetMultiSelect();
	int __fastcall GetSelCount();
	bool __fastcall GetSorted();
	void __fastcall SetColumns(int Value);
	void __fastcall SetExtendedSelect(bool Value);
	void __fastcall SetItemObject(System::TObject* Value);
	void __fastcall SetItems(System::Classes::TStrings* Value);
	void __fastcall SetMultiSelect(bool Value);
	void __fastcall SetOnMeasureItem(TcxListBoxMeasureItemEvent Value);
	void __fastcall SetSorted(bool Value);
	Vcl::Stdctrls::TLBGetDataEvent __fastcall GetOnData();
	Vcl::Stdctrls::TLBFindDataEvent __fastcall GetOnDataFind();
	Vcl::Stdctrls::TLBGetDataObjectEvent __fastcall GetOnDataObject();
	void __fastcall SetOnData(Vcl::Stdctrls::TLBGetDataEvent Value);
	void __fastcall SetOnDataFind(Vcl::Stdctrls::TLBFindDataEvent Value);
	void __fastcall SetOnDataObject(Vcl::Stdctrls::TLBGetDataObjectEvent Value);
	
protected:
	virtual bool __fastcall AllowTouchScrollUIMode();
	DYNAMIC void __fastcall FontChanged();
	virtual System::UnicodeString __fastcall GetItemText(int AItemIndex);
	virtual void __fastcall InitializeInnerListBox();
	virtual void __fastcall Loaded();
	virtual void __fastcall CorrectAlignControlRect(System::Types::TRect &R);
	virtual Cxcontainer::TcxCustomInnerListBox* __fastcall DoCreateInnerListBox();
	virtual void __fastcall DoScrollUIModeChanged();
	virtual void __fastcall DoSetSize();
	virtual void __fastcall ScaleFactorChanged();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual bool __fastcall DrawItem(Cxgraphics::TcxCanvas* ACanvas, int AIndex, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState AState);
	virtual TcxInnerListBoxClass __fastcall GetInnerListBoxClass();
	virtual int __fastcall IndexOf(const System::UnicodeString S);
	virtual bool __fastcall IsMouseWheelHandleNeeded(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	virtual bool __fastcall NeedsScrollBars();
	
public:
	__fastcall virtual TcxListBox(System::Classes::TComponent* AOwner);
	void __fastcall AddItem(System::UnicodeString AItem, System::TObject* AObject);
	void __fastcall Clear();
	void __fastcall ClearSelection();
	void __fastcall DeleteSelected();
	int __fastcall ItemAtPos(const System::Types::TPoint &APos, bool AExisting);
	System::Types::TRect __fastcall ItemRect(int Index);
	bool __fastcall ItemVisible(int Index);
	void __fastcall SelectAll();
	void __fastcall CopySelection(Vcl::Controls::TCustomListControl* ADestination);
	void __fastcall MoveSelection(Vcl::Controls::TCustomListControl* ADestination);
	__property Count;
	__property TcxInnerListBox* InnerListBox = {read=GetInnerListBox};
	__property ItemIndex;
	__property System::TObject* ItemObject = {read=GetItemObject, write=SetItemObject};
	__property int SelCount = {read=GetSelCount, nodefault};
	__property Selected;
	__property TopIndex;
	
__published:
	__property Anchors = {default=3};
	__property AutoComplete = {default=1};
	__property AutoCompleteDelay = {default=500};
	__property BiDiMode;
	__property int Columns = {read=GetColumns, write=SetColumns, default=0};
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property bool ExtendedSelect = {read=GetExtendedSelect, write=SetExtendedSelect, default=1};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property IntegralHeight = {default=0};
	__property ItemHeight;
	__property System::Classes::TStrings* Items = {read=GetItems, write=SetItems};
	__property ListStyle = {default=0};
	__property bool MultiSelect = {read=GetMultiSelect, write=SetMultiSelect, default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ReadOnly = {default=0};
	__property ScrollWidth = {default=0};
	__property ShowHint;
	__property bool Sorted = {read=GetSorted, write=SetSorted, default=0};
	__property Style;
	__property StyleDisabled;
	__property StyleFocused;
	__property StyleHot;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TabWidth = {default=0};
	__property Visible = {default=1};
	__property OnClick;
	__property OnContextPopup;
	__property Vcl::Stdctrls::TLBGetDataEvent OnData = {read=GetOnData, write=SetOnData};
	__property Vcl::Stdctrls::TLBFindDataEvent OnDataFind = {read=GetOnDataFind, write=SetOnDataFind};
	__property Vcl::Stdctrls::TLBGetDataObjectEvent OnDataObject = {read=GetOnDataObject, write=SetOnDataObject};
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property TcxListBoxDrawItemEvent OnDrawItem = {read=FOnDrawItem, write=FOnDrawItem};
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property TcxListBoxMeasureItemEvent OnMeasureItem = {read=FOnMeasureItem, write=SetOnMeasureItem};
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TcxCustomListBox.Destroy */ inline __fastcall virtual ~TcxListBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxListBox(HWND ParentWindow) : Cxcustomlistbox::TcxCustomListBox(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomListBoxItem : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FCaption;
	System::TObject* FData;
	int FImageIndex;
	bool FHasSeparator;
	TdxCustomListBoxItems* FOwner;
	int __fastcall GetIndex();
	void __fastcall SetCaption(const System::UnicodeString ACaption);
	void __fastcall SetImageIndex(int AValue);
	void __fastcall SetHasSeparator(const bool Value);
	
protected:
	void __fastcall Changed();
	
public:
	__fastcall virtual TdxCustomListBoxItem(TdxCustomListBoxItems* AOwner);
	virtual void __fastcall Assign(System::TObject* Source);
	__property System::UnicodeString Caption = {read=FCaption, write=SetCaption};
	__property System::TObject* Data = {read=FData, write=FData};
	__property bool HasSeparator = {read=FHasSeparator, write=SetHasSeparator, nodefault};
	__property int ImageIndex = {read=FImageIndex, write=SetImageIndex, nodefault};
	__property int Index = {read=GetIndex, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxCustomListBoxItem() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TdxCustomListBoxItemClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomCheckListBoxItem : public TdxCustomListBoxItem
{
	typedef TdxCustomListBoxItem inherited;
	
private:
	Cxlookandfeelpainters::TcxCheckBoxState FState;
	bool __fastcall GetChecked();
	void __fastcall SetChecked(bool AValue);
	void __fastcall SetState(Cxlookandfeelpainters::TcxCheckBoxState AValue);
	
public:
	__property bool Checked = {read=GetChecked, write=SetChecked, nodefault};
	__property Cxlookandfeelpainters::TcxCheckBoxState State = {read=FState, write=SetState, nodefault};
public:
	/* TdxCustomListBoxItem.Create */ inline __fastcall virtual TdxCustomCheckListBoxItem(TdxCustomListBoxItems* AOwner) : TdxCustomListBoxItem(AOwner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxCustomCheckListBoxItem() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TdxCustomListBoxSortOption : unsigned char { lbsAnsiSort, lbsCaseInsensitive };

typedef System::Set<TdxCustomListBoxSortOption, TdxCustomListBoxSortOption::lbsAnsiSort, TdxCustomListBoxSortOption::lbsCaseInsensitive> TdxCustomListBoxSortOptions;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomListBoxItems : public Cxclasses::TcxObjectList
{
	typedef Cxclasses::TcxObjectList inherited;
	
public:
	TdxCustomListBoxItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	int FLockCount;
	TdxCustomListBox* FOwnerControl;
	bool FSorted;
	TdxCustomListBoxSortOptions FSortOptions;
	int __fastcall FindInSortedList(const System::UnicodeString ACaption);
	HIDESBASE TdxCustomListBoxItem* __fastcall GetItem(int Index);
	void __fastcall SetSorted(bool AValue);
	void __fastcall SetSortOptions(TdxCustomListBoxSortOptions AValue);
	
protected:
	virtual void __fastcall Changed();
	virtual void __fastcall DoSort();
	virtual TdxCustomListBoxItemClass __fastcall GetItemClass();
	virtual void __fastcall Notify(void * Ptr, System::Classes::TListNotification Action);
	__property int LockCount = {read=FLockCount, nodefault};
	__property TdxCustomListBoxSortOptions SortOptions = {read=FSortOptions, write=SetSortOptions, nodefault};
	
public:
	__fastcall virtual TdxCustomListBoxItems(TdxCustomListBox* AOwnerControl);
	HIDESBASE TdxCustomListBoxItem* __fastcall Add(const System::UnicodeString ACaption, int AImageIndex = 0xffffffff, System::TObject* AData = (System::TObject*)(0x0), bool AHasSeparator = false);
	TdxCustomListBoxItem* __fastcall AddObject(const System::UnicodeString ACaption, System::TObject* AData);
	TdxCustomListBoxItem* __fastcall AddSeparator();
	void __fastcall BeginUpdate();
	void __fastcall CancelUpdate();
	void __fastcall EndUpdate();
	int __fastcall IndexOfCaption(const System::UnicodeString ACaption, bool ACaseSensitive = true);
	int __fastcall IndexOfObject(System::TObject* AObject);
	HIDESBASE TdxCustomListBoxItem* __fastcall Insert(int AIndex, const System::UnicodeString ACaption, int AImageIndex = 0xffffffff, System::TObject* AData = (System::TObject*)(0x0), bool AHasSeparator = false);
	bool __fastcall IsValidIndex(int AIndex);
	void __fastcall LoadFromStrings(System::Classes::TStrings* AStrings);
	__property TdxCustomListBoxItem* Items[int Index] = {read=GetItem/*, default*/};
	__property bool Sorted = {read=FSorted, write=SetSorted, nodefault};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TdxCustomListBoxItems() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TdxCustomListBoxItemsClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomCheckListBoxItems : public TdxCustomListBoxItems
{
	typedef TdxCustomListBoxItems inherited;
	
public:
	TdxCustomCheckListBoxItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TdxCustomCheckListBoxItem* __fastcall GetItem(int Index);
	
protected:
	virtual TdxCustomListBoxItemClass __fastcall GetItemClass();
	
public:
	HIDESBASE TdxCustomCheckListBoxItem* __fastcall AddObject(const System::UnicodeString ACaption, System::TObject* AData);
	__property TdxCustomCheckListBoxItem* Items[int Index] = {read=GetItem/*, default*/};
public:
	/* TdxCustomListBoxItems.Create */ inline __fastcall virtual TdxCustomCheckListBoxItems(TdxCustomListBox* AOwnerControl) : TdxCustomListBoxItems(AOwnerControl) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TdxCustomCheckListBoxItems() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomListBoxHintHelper : public Cxcontrols::TcxControlHintHelper
{
	typedef Cxcontrols::TcxControlHintHelper inherited;
	
private:
	TdxCustomListBox* FOwnerControl;
	
protected:
	virtual Cxcontrols::TcxControl* __fastcall GetOwnerControl();
	virtual bool __fastcall PtInCaller(const System::Types::TPoint &P);
	
public:
	__fastcall virtual TdxCustomListBoxHintHelper(TdxCustomListBox* AOwnerControl);
public:
	/* TcxCustomHintHelper.Destroy */ inline __fastcall virtual ~TdxCustomListBoxHintHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxListBoxIncrementalSearchController : public Dxincrementalsearch::TdxIncrementalSearchController
{
	typedef Dxincrementalsearch::TdxIncrementalSearchController inherited;
	
private:
	TdxCustomListBox* FListBox;
	
protected:
	virtual bool __fastcall FocusNextItemWithText(const System::UnicodeString AText);
	__property TdxCustomListBox* ListBox = {read=FListBox};
	
public:
	__fastcall virtual TdxListBoxIncrementalSearchController(TdxCustomListBox* AListBox);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxListBoxIncrementalSearchController() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomListBoxAccessibilityHelper : public Cxaccessibility::TcxAccessibilityHelper
{
	typedef Cxaccessibility::TcxAccessibilityHelper inherited;
	
private:
	TdxCustomListBox* __fastcall GetListBox();
	
protected:
	virtual bool __fastcall ChildIsSimpleElement(int AIndex);
	virtual void __fastcall DoDefaultAction(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetChildCount();
	virtual System::UnicodeString __fastcall GetDefaultActionDescription(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual System::UnicodeString __fastcall GetName(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual HWND __fastcall GetOwnerObjectWindow();
	virtual int __fastcall GetRole(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetState(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual Cxaccessibility::TcxAccessibleObjectProperties __fastcall GetSupportedProperties(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual bool __fastcall IsExtended();
	__property TdxCustomListBox* ListBox = {read=GetListBox};
	
public:
	virtual System::Types::TRect __fastcall GetScreenBounds(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
public:
	/* TcxAccessibilityHelper.Create */ inline __fastcall virtual TdxCustomListBoxAccessibilityHelper(System::TObject* AOwnerObject) : Cxaccessibility::TcxAccessibilityHelper(AOwnerObject) { }
	/* TcxAccessibilityHelper.Destroy */ inline __fastcall virtual ~TdxCustomListBoxAccessibilityHelper() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TdxCustomListBoxAccessibilityHelperClass;

class PASCALIMPLEMENTATION TdxCustomListBox : public Cxcontrols::TcxControl
{
	typedef Cxcontrols::TcxControl inherited;
	
private:
	Vcl::Imglist::TChangeLink* FChangeLink;
	int FColumns;
	int FColumnWidth;
	TdxCustomListBoxHintHelper* FHintHelper;
	int FHotIndex;
	Cxaccessibility::_di_IcxAccessibilityHelper FIAccessibilityHelper;
	Vcl::Imglist::TCustomImageList* FImages;
	bool FIncrementalSearch;
	TdxListBoxIncrementalSearchController* FIncrementalSearchController;
	bool FItemAutoHeight;
	int FItemHeight;
	int FItemIndex;
	TdxCustomListBoxItems* FItems;
	bool FLoopedNavigation;
	int FTopIndex;
	int __fastcall GetCount();
	Cxaccessibility::_di_IcxAccessibilityHelper __fastcall GetIAccessibilityHelper();
	int __fastcall GetImagesAreaSize();
	bool __fastcall GetIsLocked();
	System::TObject* __fastcall GetItemObject();
	int __fastcall GetItemsHeight(int Index);
	int __fastcall GetMaxTopIndex();
	int __fastcall GetPageSize();
	bool __fastcall GetSorted();
	TdxCustomListBoxSortOptions __fastcall GetSortOptions();
	int __fastcall GetTopIndex();
	void __fastcall DoImageListChanged(System::TObject* Sender);
	unsigned __fastcall GetAutoCompleteDelay();
	System::UnicodeString __fastcall GetSearchText();
	void __fastcall SetColumns(int AValue);
	void __fastcall SetHotIndex(int AValue);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* AValue);
	void __fastcall SetItemObject(System::TObject* Value);
	void __fastcall SetItemHeight(int AValue);
	void __fastcall SetSorted(bool AValue);
	void __fastcall SetSortOptions(TdxCustomListBoxSortOptions AValue);
	void __fastcall SetTopIndex(int AValue);
	MESSAGE void __fastcall WMGetObject(Winapi::Messages::TMessage &Message);
	bool __fastcall PtInCaller(const System::Types::TPoint &P);
	void __fastcall SetAutoCompleteDelay(const unsigned Value);
	void __fastcall SetSearchText(const System::UnicodeString Value);
	
protected:
	virtual void __fastcall AdjustItemFont(Vcl::Graphics::TFont* AFont, TdxCustomListBoxItem* AItem, Cxlookandfeelpainters::TcxButtonState AState);
	virtual bool __fastcall AllowTouchScrollUIMode();
	DYNAMIC void __fastcall BoundsChanged();
	virtual bool __fastcall CanFocusIndex(int AItemIndex);
	virtual bool __fastcall CanShowHint(int AItemIndex, /* out */ System::Types::TRect &AItemRect, /* out */ System::Types::TRect &AItemTextRect);
	bool __fastcall CanStartIncSearch(System::WideChar Key);
	virtual bool __fastcall CanUpdateHotState();
	virtual void __fastcall ChangeScaleEx(int M, int D, bool isDpiChange);
	virtual void __fastcall CheckFocusedItemIndex();
	virtual void __fastcall CheckTopItemIndex();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	HIDESBASE virtual void __fastcall DoKeyPress(System::WideChar &Key);
	virtual void __fastcall DoLayoutChanged();
	virtual int __fastcall FindNextItemIndex(int AStartItemIndex, bool AGoForward = true, bool AGoOnCycle = false);
	virtual void __fastcall FocusNextItemIndex(int AStartItemIndex, bool AGoForward = true, bool AGoOnCycle = false);
	DYNAMIC void __fastcall FontChanged();
	virtual void __fastcall EraseBackground(HDC DC)/* overload */;
	virtual TdxCustomListBoxAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	virtual bool __fastcall GetHasSeparator(TdxCustomListBoxItem* AItem);
	virtual System::Types::TRect __fastcall GetImagesAreaRect();
	virtual System::Uitypes::TFontStyles __fastcall GetItemFontStyle(TdxCustomListBoxItem* AItem);
	virtual TdxCustomListBoxItemsClass __fastcall GetItemsClass();
	int __fastcall GetItemTextBestWidth();
	virtual Cxcontrols::TcxMouseWheelScrollingKind __fastcall GetMouseWheelScrollingKind();
	int __fastcall GetScrollStep();
	virtual bool __fastcall HasBackground();
	virtual void __fastcall InitScrollBarsParameters();
	void __fastcall InvalidateItem(int AIndex);
	void __fastcall InvalidateItems(const int AIndex1, const int AIndex2);
	virtual bool __fastcall IsStartIncSearchChar(System::WideChar AChar);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall MeasureItemHeight(int AIndex, int &AHeight);
	virtual void __fastcall ScaleFactorChanged();
	virtual void __fastcall InternalMouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall InternalMouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseEnter(Vcl::Controls::TControl* AControl);
	DYNAMIC void __fastcall MouseLeave(Vcl::Controls::TControl* AControl);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual bool __fastcall NeedDrawPartVisibleItem();
	virtual bool __fastcall NeedHotTrack();
	virtual bool __fastcall NeedPanningFeedback(Vcl::Forms::TScrollBarKind AScrollKind);
	virtual bool __fastcall NeedUseHotColor(TdxCustomListBoxItem* AItem, Cxlookandfeelpainters::TcxButtonState AState);
	virtual bool __fastcall NeedUseSelectionColor(TdxCustomListBoxItem* AItem, Cxlookandfeelpainters::TcxButtonState AState);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual bool __fastcall ProcessNavigationKey(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall SetItemIndex(int AIndex);
	virtual void __fastcall Scroll(Vcl::Forms::TScrollBarKind AScrollBarKind, System::Uitypes::TScrollCode AScrollCode, int &AScrollPos);
	void __fastcall TrackingCallerMouseLeave();
	void __fastcall UpdateHintState();
	void __fastcall UpdateHotState();
	void __fastcall UpdateColumnWidth();
	void __fastcall UpdateItemAutoHeight();
	System::Uitypes::TColor __fastcall GetBackgroundColor();
	virtual System::Types::TRect __fastcall GetImageOffsets();
	virtual System::Types::TSize __fastcall GetImageSize();
	virtual System::Uitypes::TColor __fastcall GetItemBackgroundColor(TdxCustomListBoxItem* AItem, Cxlookandfeelpainters::TcxButtonState AState);
	virtual System::Types::TRect __fastcall GetItemBackgroundRect(const System::Types::TRect &AItemRect);
	virtual System::Types::TRect __fastcall GetItemImageRect(const System::Types::TRect &AItemRect);
	virtual void __fastcall GetItemPartsRects(TdxCustomListBoxItem* AItem, const System::Types::TRect &R, /* out */ System::Types::TRect &AItemRect, /* out */ System::Types::TRect &ASeparatorRect);
	System::Types::TRect __fastcall GetItemRect(int AItemIndex, const System::Types::TRect &APrevItemRect);
	virtual Cxlookandfeelpainters::TcxButtonState __fastcall GetItemState(int AIndex);
	virtual System::Types::TRect __fastcall GetItemTextRect(const System::Types::TRect &AItemRect);
	virtual System::Types::TRect __fastcall GetItemsAreaRect();
	virtual System::Uitypes::TColor __fastcall GetTextColor(TdxCustomListBoxItem* AItem, Cxlookandfeelpainters::TcxButtonState AState);
	virtual int __fastcall GetTextFlags();
	virtual System::Types::TRect __fastcall GetTextOffsets();
	virtual System::Types::TRect __fastcall GetVScrollBarBounds();
	virtual void __fastcall DrawBackground();
	virtual void __fastcall DrawItem(const System::Types::TRect &R, TdxCustomListBoxItem* AItem, Cxlookandfeelpainters::TcxButtonState AState);
	virtual void __fastcall DrawItemBackground(const System::Types::TRect &R, TdxCustomListBoxItem* AItem, Cxlookandfeelpainters::TcxButtonState AState);
	virtual void __fastcall DrawItemImage(const System::Types::TRect &R, TdxCustomListBoxItem* AItem, Cxlookandfeelpainters::TcxButtonState AState);
	virtual void __fastcall DrawItemText(const System::Types::TRect &R, TdxCustomListBoxItem* AItem, Cxlookandfeelpainters::TcxButtonState AState);
	virtual void __fastcall DrawItems();
	virtual void __fastcall DrawItemSeparator(const System::Types::TRect &R);
	virtual void __fastcall Paint();
	virtual TdxListBoxIncrementalSearchController* __fastcall CreateIncrementalSearchController();
	bool __fastcall FocusItemWithText(const System::UnicodeString AText, int AStartIndex, int AFinishIndex);
	bool __fastcall FocusNextItemWithText(const System::UnicodeString AText);
	virtual bool __fastcall IsItemWithText(TdxCustomListBoxItem* AItem, const System::UnicodeString AText);
	__property int ColumnWidth = {read=FColumnWidth, nodefault};
	__property TdxCustomListBoxHintHelper* HintHelper = {read=FHintHelper};
	__property int HotIndex = {read=FHotIndex, write=SetHotIndex, nodefault};
	__property Cxaccessibility::_di_IcxAccessibilityHelper IAccessibilityHelper = {read=GetIAccessibilityHelper};
	__property System::Types::TRect ImageOffsets = {read=GetImageOffsets};
	__property System::Types::TRect ImagesAreaRect = {read=GetImagesAreaRect};
	__property int ImagesAreaSize = {read=GetImagesAreaSize, nodefault};
	__property System::Types::TSize ImageSize = {read=GetImageSize};
	__property TdxListBoxIncrementalSearchController* IncrementalSearchController = {read=FIncrementalSearchController};
	__property bool IsLocked = {read=GetIsLocked, nodefault};
	__property bool ItemAutoHeight = {read=FItemAutoHeight, write=FItemAutoHeight, nodefault};
	__property System::Types::TRect ItemsAreaRect = {read=GetItemsAreaRect};
	__property int ItemsHeight[int Index] = {read=GetItemsHeight};
	__property int MaxTopIndex = {read=GetMaxTopIndex, nodefault};
	__property int PageSize = {read=GetPageSize, nodefault};
	__property System::UnicodeString SearchText = {read=GetSearchText, write=SetSearchText};
	__property TdxCustomListBoxSortOptions SortOptions = {read=GetSortOptions, write=SetSortOptions, nodefault};
	__property System::Types::TRect TextOffsets = {read=GetTextOffsets};
	
public:
	__fastcall virtual TdxCustomListBox(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxCustomListBox();
	int __fastcall Add(const System::UnicodeString ACaption, int AImageIndex = 0xffffffff);
	int __fastcall AddItem(const System::UnicodeString ACaption, System::TObject* AObject, int AImageIndex = 0xffffffff);
	virtual System::Types::TSize __fastcall CalculateContentSize(int AMaxVisibleItemsCount)/* overload */;
	virtual int __fastcall CalculateItemHeight();
	void __fastcall BeginUpdate();
	void __fastcall Clear();
	void __fastcall EndUpdate();
	virtual int __fastcall ItemAtPos(const System::Types::TPoint &APoint, bool AExistOnly = false);
	System::Types::TRect __fastcall ItemRect(int AIndex);
	void __fastcall LayoutChanged();
	void __fastcall MakeVisible(int AIndex);
	HIDESBASE int __fastcall Remove(System::TObject* AObject);
	__property unsigned AutoCompleteDelay = {read=GetAutoCompleteDelay, write=SetAutoCompleteDelay, nodefault};
	__property int Columns = {read=FColumns, write=SetColumns, nodefault};
	__property int Count = {read=GetCount, nodefault};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property bool IncrementalSearch = {read=FIncrementalSearch, write=FIncrementalSearch, nodefault};
	__property int ItemHeight = {read=FItemHeight, write=SetItemHeight, nodefault};
	__property int ItemIndex = {read=FItemIndex, write=SetItemIndex, nodefault};
	__property System::TObject* ItemObject = {read=GetItemObject, write=SetItemObject};
	__property TdxCustomListBoxItems* Items = {read=FItems, write=FItems};
	__property bool LoopedNavigation = {read=FLoopedNavigation, write=FLoopedNavigation, nodefault};
	__property int TopIndex = {read=GetTopIndex, write=SetTopIndex, nodefault};
	__property bool Sorted = {read=GetSorted, write=SetSorted, nodefault};
	__property Color = {default=-16777211};
	__property Font;
	__property LookAndFeel;
	__property OnClick;
	__property OnDblClick;
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxCustomListBox(HWND ParentWindow) : Cxcontrols::TcxControl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  EraseBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect){ Cxcontrols::TcxControl::EraseBackground(ACanvas, ARect); }
	
private:
	void *__IcxMouseTrackingCaller2;	// Dxcoreclasses::IcxMouseTrackingCaller2 
	void *__IcxMouseTrackingCaller;	// Dxcoreclasses::IcxMouseTrackingCaller 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3A5D973B-F016-4F22-80B6-1D35668D7743}
	operator Dxcoreclasses::_di_IcxMouseTrackingCaller2()
	{
		Dxcoreclasses::_di_IcxMouseTrackingCaller2 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxcoreclasses::IcxMouseTrackingCaller2*(void) { return (Dxcoreclasses::IcxMouseTrackingCaller2*)&__IcxMouseTrackingCaller2; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {84A4BCBE-E001-4D60-B7A6-75E2B0DCD3E9}
	operator Dxcoreclasses::_di_IcxMouseTrackingCaller()
	{
		Dxcoreclasses::_di_IcxMouseTrackingCaller intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxcoreclasses::IcxMouseTrackingCaller*(void) { return (Dxcoreclasses::IcxMouseTrackingCaller*)&__IcxMouseTrackingCaller; }
	#endif
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCheckListBoxIncrementalSearchController : public TdxListBoxIncrementalSearchController
{
	typedef TdxListBoxIncrementalSearchController inherited;
	
private:
	TdxCustomCheckListBox* __fastcall GetListBox();
	
protected:
	virtual bool __fastcall CanProcessIncSearch(System::WideChar Key);
	virtual bool __fastcall DoIncrementalSearch(System::WideChar &Key);
	__property TdxCustomCheckListBox* ListBox = {read=GetListBox};
public:
	/* TdxListBoxIncrementalSearchController.Create */ inline __fastcall virtual TdxCheckListBoxIncrementalSearchController(TdxCustomListBox* AListBox) : TdxListBoxIncrementalSearchController(AListBox) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxCheckListBoxIncrementalSearchController() { }
	
};

#pragma pack(pop)

typedef void __fastcall (__closure *TdxCustomCheckListBoxItemDragOverEvent)(void * AItem, bool &AAccept);

class PASCALIMPLEMENTATION TdxCustomCheckListBox : public TdxCustomListBox
{
	typedef TdxCustomListBox inherited;
	
private:
	int FCachedTextMaxWidth;
	int FDragItemIndex;
	bool FIsDragCanceled;
	System::Types::TRect FDragAndDropLeftArrowRect;
	System::Types::TRect FDragAndDropRightArrowRect;
	bool FItemMoving;
	bool FMultiSelect;
	TdxCustomListBoxActionEvent FOnAction;
	TdxCustomCheckListBoxItemDragOverEvent FOnItemDragOver;
	System::Classes::TNotifyEvent FOnSelectionChanged;
	Cxclasses::TcxDirection FScrollDirection;
	Cxclasses::TcxTimer* FScrollTimer;
	Dxcoreclasses::TdxFastList* FSelection;
	bool FShowCheckBoxes;
	int FVisibleItemCount;
	int FVisibleWidth;
	void __fastcall ClearClickedState();
	Cxclasses::TcxObjectList* __fastcall CreateSelectionBlocks();
	void __fastcall DoSelect(int AIndex, bool AValue, bool &AChanged);
	int __fastcall GetAutoSizeItemWidth(const bool AUseCachedTextMaxWidth = false);
	System::Types::TSize __fastcall GetCheckBoxAreaSize();
	System::Types::TRect __fastcall GetCheckBoxMargins();
	bool __fastcall GetChecked(int AIndex);
	Cxclasses::TdxIntegerIndexes __fastcall GetCheckedIndexes();
	Cxlookandfeelpainters::TcxCheckBoxState __fastcall GetState(int AIndex);
	TdxCustomCheckListBoxItems* __fastcall GetItems();
	bool __fastcall GetSelected(int AIndex);
	void __fastcall ScrollTimerHandler(System::TObject* Sender);
	void __fastcall SetChecked(int AIndex, bool AValue);
	void __fastcall SetCheckedIndexes(const Cxclasses::TdxIntegerIndexes Value);
	void __fastcall SetState(int AIndex, Cxlookandfeelpainters::TcxCheckBoxState AValue);
	void __fastcall SetMultiSelect(bool AValue);
	void __fastcall SetScrollDirection(Cxclasses::TcxDirection AValue);
	void __fastcall SetSelected(int AIndex, bool AValue);
	void __fastcall SetShowCheckBoxes(bool AValue);
	void __fastcall SetVisibleItemCount(int AValue);
	void __fastcall SetVisibleWidth(int AValue);
	
protected:
	int FAnchorIndex;
	bool FInMouseSelectionProcess;
	int FSelectedViaMouseMovePriorIndex;
	DYNAMIC void __fastcall AdjustSize();
	virtual int __fastcall CalculateAutoHeight();
	virtual int __fastcall CalculateAutoWidth(bool AUseCachedTextMaxWidth = false);
	virtual bool __fastcall CanAutoSize(int &NewWidth, int &NewHeight);
	DYNAMIC bool __fastcall CanDrag(int X, int Y);
	virtual bool __fastcall CanUpdateHotState();
	virtual void __fastcall CheckedChanged(int AItemIndex);
	virtual void __fastcall ClearSelection();
	DYNAMIC void __fastcall Click();
	virtual TdxListBoxIncrementalSearchController* __fastcall CreateIncrementalSearchController();
	DYNAMIC void __fastcall DblClick();
	void __fastcall DoAction();
	virtual void __fastcall DoClick();
	DYNAMIC void __fastcall DoEndDrag(System::TObject* Target, int X, int Y);
	virtual void __fastcall DoItemAction(int AItemIndex);
	virtual void __fastcall DoLayoutChanged();
	virtual void __fastcall DoMultiSelectionAction();
	DYNAMIC void __fastcall DoStartDrag(Vcl::Controls::TDragObject* &DragObject);
	DYNAMIC void __fastcall DragCanceled();
	DYNAMIC void __fastcall DragOver(System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	void __fastcall DrawDragAndDropArrows();
	virtual void __fastcall DrawItem(const System::Types::TRect &R, TdxCustomListBoxItem* AItem, Cxlookandfeelpainters::TcxButtonState AState);
	virtual void __fastcall DrawItemCheckBox(const System::Types::TRect &R, TdxCustomListBoxItem* AItem, Cxlookandfeelpainters::TcxButtonState AState);
	virtual void __fastcall DrawItemFocus(const System::Types::TRect &R);
	virtual Cxlookandfeelpainters::TcxButtonState __fastcall GetCheckBoxState(int AItemIndex);
	int __fastcall GetCheckedCount();
	System::Classes::TList* __fastcall GetCheckedItems();
	int __fastcall GetDragItemInsertionIndex(int X, int Y);
	virtual System::Types::TRect __fastcall GetImagesAreaRect();
	virtual bool __fastcall GetIsCopyDragDrop();
	System::Types::TRect __fastcall GetItemCheckBoxRect(const System::Types::TRect &AItemRect);
	virtual System::Types::TRect __fastcall GetItemFocusRect(const System::Types::TRect &AItemRect, TdxCustomListBoxItem* AItem);
	virtual TdxCustomListBoxItemsClass __fastcall GetItemsClass();
	int __fastcall GetItemMaxWidth(const bool AUseCachedTextMaxWidth = false);
	System::Classes::TList* __fastcall GetSelectedItems(bool ANeedData);
	int __fastcall GetSelectionCount();
	virtual int __fastcall GetVisibleItemCount();
	virtual bool __fastcall HasCheckBox(int AItemIndex);
	bool __fastcall HitAtItemCheckBox(int AItemIndex);
	virtual void __fastcall InternalDragDrop(System::TObject* Source, int X, int Y);
	virtual void __fastcall ItemAction(int AItemIndex, Dxcore::TdxDefaultBoolean AValue = (Dxcore::TdxDefaultBoolean)(0x2));
	bool __fastcall NeedBeginDrag(System::Uitypes::TMouseButton AButton, System::Classes::TShiftState AShiftState);
	virtual bool __fastcall NeedDrawPartVisibleItem();
	virtual bool __fastcall NeedHandleClick();
	virtual bool __fastcall NeedUseSelectionColor(TdxCustomListBoxItem* AItem, Cxlookandfeelpainters::TcxButtonState AState);
	virtual void __fastcall Paint();
	virtual void __fastcall ResetCheckBoxStates();
	virtual void __fastcall InternalMouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall InternalMouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual bool __fastcall ProcessNavigationKey(System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall SelectAll();
	void __fastcall SelectFocusedItem();
	void __fastcall SelectItems(int AStartIndex, int AFinishIndex, bool AValue);
	void __fastcall SelectItemsViaMouseDown(int APrevIndex, System::Classes::TShiftState AShift);
	__property System::Types::TSize CheckBoxAreaSize = {read=GetCheckBoxAreaSize};
	__property Cxlookandfeelpainters::TcxButtonState CheckBoxState[int AItemIndex] = {read=GetCheckBoxState};
	__property System::Types::TRect CheckBoxMargins = {read=GetCheckBoxMargins};
	__property Cxclasses::TcxDirection ScrollDirection = {read=FScrollDirection, write=SetScrollDirection, nodefault};
	__property Dxcoreclasses::TdxFastList* Selection = {read=FSelection};
	
public:
	__fastcall virtual TdxCustomCheckListBox(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxCustomCheckListBox();
	DYNAMIC void __fastcall DragDrop(System::TObject* Source, int X, int Y);
	virtual int __fastcall CalculateItemHeight();
	DYNAMIC bool __fastcall StartDrag(Vcl::Controls::TDragObject* DragObject);
	__property AutoSize = {default=0};
	__property BorderStyle;
	__property bool Checked[int Index] = {read=GetChecked, write=SetChecked};
	__property Cxclasses::TdxIntegerIndexes CheckedIndexes = {read=GetCheckedIndexes, write=SetCheckedIndexes};
	__property bool ItemMoving = {read=FItemMoving, write=FItemMoving, default=1};
	__property TdxCustomCheckListBoxItems* Items = {read=GetItems};
	__property bool MultiSelect = {read=FMultiSelect, write=SetMultiSelect, default=0};
	__property bool Selected[int Index] = {read=GetSelected, write=SetSelected};
	__property bool ShowCheckBoxes = {read=FShowCheckBoxes, write=SetShowCheckBoxes, nodefault};
	__property Cxlookandfeelpainters::TcxCheckBoxState States[int Index] = {read=GetState, write=SetState};
	__property int VisibleItemCount = {read=FVisibleItemCount, write=SetVisibleItemCount, nodefault};
	__property int VisibleWidth = {read=FVisibleWidth, write=SetVisibleWidth, nodefault};
	__property TdxCustomListBoxActionEvent OnAction = {read=FOnAction, write=FOnAction};
	__property OnDragDrop;
	__property TdxCustomCheckListBoxItemDragOverEvent OnItemDragOver = {read=FOnItemDragOver, write=FOnItemDragOver};
	__property System::Classes::TNotifyEvent OnSelectionChanged = {read=FOnSelectionChanged, write=FOnSelectionChanged};
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxCustomCheckListBox(HWND ParentWindow) : TdxCustomListBox(ParentWindow) { }
	
};


typedef void __fastcall (__closure *TdxCustomDropDownListBoxCloseUpEvent)(System::TObject* Sender, bool AClosedViaKeyboard);

typedef void __fastcall (__closure *TdxCustomDropDownListBoxSelectedEvent)(System::TObject* Sender, TdxCustomListBoxItem* AItem, bool ASelectedViaKeyboard);

class PASCALIMPLEMENTATION TdxCustomDropDownInnerListBox : public TdxCustomListBox
{
	typedef TdxCustomListBox inherited;
	
private:
	int FDefaultItemIndex;
	System::Types::TPoint FPrevMousePosition;
	TdxCustomDropDownListBoxSelectedEvent FOnSelectItem;
	void __fastcall SetDefaultItemIndex(int AValue);
	
protected:
	virtual void __fastcall AdjustItemFont(Vcl::Graphics::TFont* AFont, TdxCustomListBoxItem* AItem, Cxlookandfeelpainters::TcxButtonState AState);
	virtual void __fastcall DoSelectItem(bool ASelectedViaKeyboard);
	virtual void __fastcall DrawBackground();
	virtual void __fastcall DrawItemBackground(const System::Types::TRect &R, TdxCustomListBoxItem* AItem, Cxlookandfeelpainters::TcxButtonState AState);
	virtual int __fastcall GetBorderSize();
	virtual System::Types::TRect __fastcall GetImageOffsets();
	virtual System::Types::TSize __fastcall GetImageSize();
	virtual System::Uitypes::TFontStyles __fastcall GetItemFontStyle(TdxCustomListBoxItem* AItem);
	virtual System::Uitypes::TColor __fastcall GetTextColor(TdxCustomListBoxItem* AItem, Cxlookandfeelpainters::TcxButtonState AState);
	virtual System::Types::TRect __fastcall GetTextOffsets();
	virtual bool __fastcall IsDefaultItem(TdxCustomListBoxItem* AItem);
	DYNAMIC void __fastcall MouseLeave(Vcl::Controls::TControl* AControl);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual bool __fastcall ProcessNavigationKey(System::Word &Key, System::Classes::TShiftState Shift);
	
public:
	__fastcall virtual TdxCustomDropDownInnerListBox(System::Classes::TComponent* AOwner);
	__property int DefaultItemIndex = {read=FDefaultItemIndex, write=SetDefaultItemIndex, default=-1};
	__property TdxCustomDropDownListBoxSelectedEvent OnSelectItem = {read=FOnSelectItem, write=FOnSelectItem};
public:
	/* TdxCustomListBox.Destroy */ inline __fastcall virtual ~TdxCustomDropDownInnerListBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxCustomDropDownInnerListBox(HWND ParentWindow) : TdxCustomListBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TdxCustomDropDownListBox : public Cxcontainer::TcxCustomPopupWindow
{
	typedef Cxcontainer::TcxCustomPopupWindow inherited;
	
private:
	unsigned FDisplayRowsCount;
	TdxCustomDropDownInnerListBox* FInnerListBox;
	unsigned FMaxWidth;
	unsigned FMinWidth;
	TdxCustomDropDownListBoxCloseUpEvent FOnCloseUp;
	TdxCustomDropDownListBoxSelectedEvent FOnSelect;
	int __fastcall GetCount();
	Vcl::Imglist::TCustomImageList* __fastcall GetImages();
	int __fastcall GetItemHeight();
	int __fastcall GetItemIndex();
	TdxCustomListBoxItems* __fastcall GetItems();
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall SetItemHeight(const int Value);
	void __fastcall SetItemIndex(const int Value);
	
protected:
	bool FClosedViaKeyboard;
	virtual void __fastcall AdjustClientRect(System::Types::TRect &Rect);
	virtual System::Types::TPoint __fastcall CalculatePosition(const System::Types::TSize &ASize);
	virtual System::Types::TSize __fastcall CalculateSize();
	virtual TdxCustomDropDownInnerListBox* __fastcall CreateInnerListBox();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall DoCloseUp(bool AClosedViaKeyboard);
	DYNAMIC void __fastcall DoHide();
	virtual void __fastcall DoSelectItem(TdxCustomListBoxItem* AItem, bool ASelectedViaKeyboard);
	virtual void __fastcall InitInnerListBox();
	virtual void __fastcall InitPopup();
	void __fastcall ItemSelected(System::TObject* Sender, TdxCustomListBoxItem* AItem, bool ASelectedViaKeyboard);
	
public:
	__fastcall virtual TdxCustomDropDownListBox(Vcl::Controls::TWinControl* AOwnerControl);
	__fastcall TdxCustomDropDownListBox(Vcl::Controls::TWinControl* AOwnerControl, Cxcontrols::TcxControl* AOwnerParent);
	__fastcall virtual ~TdxCustomDropDownListBox();
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	DYNAMIC bool __fastcall IsShortCut(Winapi::Messages::TWMKey &Message);
	HIDESBASE virtual void __fastcall CloseUp(bool AClosedViaKeyboard);
	HIDESBASE virtual void __fastcall Popup();
	void __fastcall PopupForBounds(const System::Types::TRect &ABounds, System::WideChar AActivateKey = (System::WideChar)(0x0));
	__property int Count = {read=GetCount, nodefault};
	__property unsigned DisplayRowsCount = {read=FDisplayRowsCount, write=FDisplayRowsCount, nodefault};
	__property Vcl::Imglist::TCustomImageList* Images = {read=GetImages, write=SetImages};
	__property int ItemHeight = {read=GetItemHeight, write=SetItemHeight, nodefault};
	__property int ItemIndex = {read=GetItemIndex, write=SetItemIndex, nodefault};
	__property TdxCustomListBoxItems* Items = {read=GetItems};
	__property TdxCustomDropDownInnerListBox* InnerListBox = {read=FInnerListBox};
	__property unsigned MaxWidth = {read=FMaxWidth, write=FMaxWidth, nodefault};
	__property unsigned MinWidth = {read=FMinWidth, write=FMinWidth, nodefault};
	__property TdxCustomDropDownListBoxCloseUpEvent OnCloseUp = {read=FOnCloseUp, write=FOnCloseUp};
	__property TdxCustomDropDownListBoxSelectedEvent OnSelect = {read=FOnSelect, write=FOnSelect};
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TdxCustomDropDownListBox(System::Classes::TComponent* AOwner, int Dummy) : Cxcontainer::TcxCustomPopupWindow(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxCustomDropDownListBox(HWND ParentWindow) : Cxcontainer::TcxCustomPopupWindow(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TdxQuickCustomizationCustomCommand : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FCaption;
	bool FHasCheckBox;
	bool FChecked;
	System::Classes::TNotifyEvent FOnAction;
	void __fastcall SetChecked(bool AValue);
	
public:
	__fastcall TdxQuickCustomizationCustomCommand(const System::UnicodeString ACaption, bool AHasCheckBox);
	void __fastcall Execute();
	__property System::UnicodeString Caption = {read=FCaption};
	__property bool Checked = {read=FChecked, write=SetChecked, nodefault};
	__property bool HasCheckBox = {read=FHasCheckBox, nodefault};
	__property System::Classes::TNotifyEvent OnAction = {read=FOnAction, write=FOnAction};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxQuickCustomizationCustomCommand() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxQuickCustomizationCustomCheckListBoxIncrementalSearchController : public TdxCheckListBoxIncrementalSearchController
{
	typedef TdxCheckListBoxIncrementalSearchController inherited;
	
private:
	HIDESBASE TdxQuickCustomizationCustomCheckListBox* __fastcall GetListBox();
	
protected:
	virtual bool __fastcall DoIncrementalSearch(System::WideChar &Key);
	__property TdxQuickCustomizationCustomCheckListBox* ListBox = {read=GetListBox};
public:
	/* TdxListBoxIncrementalSearchController.Create */ inline __fastcall virtual TdxQuickCustomizationCustomCheckListBoxIncrementalSearchController(TdxCustomListBox* AListBox) : TdxCheckListBoxIncrementalSearchController(AListBox) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxQuickCustomizationCustomCheckListBoxIncrementalSearchController() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxQuickCustomizationCustomCheckListBox : public TdxCustomCheckListBox
{
	typedef TdxCustomCheckListBox inherited;
	
protected:
	virtual TdxListBoxIncrementalSearchController* __fastcall CreateIncrementalSearchController();
	TdxQuickCustomizationCustomControl* __fastcall GetQuickCustomizationControl();
	virtual System::Types::TRect __fastcall GetTextOffsets();
	virtual bool __fastcall NeedHandleClick();
	virtual bool __fastcall ProcessNavigationKey(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall SetItemIndex(int AIndex);
	
public:
	__fastcall virtual TdxQuickCustomizationCustomCheckListBox(System::Classes::TComponent* AOwner);
	__property TdxQuickCustomizationCustomControl* QuickCustomizationControl = {read=GetQuickCustomizationControl};
	__property OnSelectionChanged;
public:
	/* TdxCustomCheckListBox.Destroy */ inline __fastcall virtual ~TdxQuickCustomizationCustomCheckListBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxQuickCustomizationCustomCheckListBox(HWND ParentWindow) : TdxCustomCheckListBox(ParentWindow) { }
	
};


typedef System::TMetaClass* TdxQuickCustomizationCustomCheckListBoxClass;

class PASCALIMPLEMENTATION TdxQuickCustomizationCommandListBox : public TdxQuickCustomizationCustomCheckListBox
{
	typedef TdxQuickCustomizationCustomCheckListBox inherited;
	
private:
	TdxQuickCustomizationCustomCommand* __fastcall GetCommand(int AItemIndex);
	
protected:
	virtual void __fastcall CheckedChanged(int AItemIndex);
	virtual void __fastcall DoItemAction(int AItemIndex);
	virtual bool __fastcall HasCheckBox(int AItemIndex);
	__property TdxQuickCustomizationCustomCommand* Command[int AItemIndex] = {read=GetCommand};
public:
	/* TdxQuickCustomizationCustomCheckListBox.Create */ inline __fastcall virtual TdxQuickCustomizationCommandListBox(System::Classes::TComponent* AOwner) : TdxQuickCustomizationCustomCheckListBox(AOwner) { }
	
public:
	/* TdxCustomCheckListBox.Destroy */ inline __fastcall virtual ~TdxQuickCustomizationCommandListBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxQuickCustomizationCommandListBox(HWND ParentWindow) : TdxQuickCustomizationCustomCheckListBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TdxQuickCustomizationCheckListBox : public TdxQuickCustomizationCustomCheckListBox
{
	typedef TdxQuickCustomizationCustomCheckListBox inherited;
	
private:
	bool FDblClickHandling;
	System::Classes::TNotifyEvent FOnSelectedItemCheckedStateChanged;
	System::Classes::TNotifyEvent FOnSelectedItemCheckedStateChanging;
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	
protected:
	virtual void __fastcall InternalMouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall DoMultiSelectionAction();
	
public:
	__fastcall virtual TdxQuickCustomizationCheckListBox(System::Classes::TComponent* AOwner);
	__property System::Classes::TNotifyEvent OnSelectedItemCheckedStateChanged = {read=FOnSelectedItemCheckedStateChanged, write=FOnSelectedItemCheckedStateChanged};
	__property System::Classes::TNotifyEvent OnSelectedItemCheckedStateChanging = {read=FOnSelectedItemCheckedStateChanging, write=FOnSelectedItemCheckedStateChanging};
public:
	/* TdxCustomCheckListBox.Destroy */ inline __fastcall virtual ~TdxQuickCustomizationCheckListBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxQuickCustomizationCheckListBox(HWND ParentWindow) : TdxQuickCustomizationCustomCheckListBox(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxQuickCustomizationController : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TdxQuickCustomizationCustomControl* FOwner;
	TdxCustomCheckListBox* __fastcall GetCheckListBox();
	TdxCustomCheckListBox* __fastcall GetCommandListBox();
	
protected:
	bool __fastcall DoIncrementalSearchOnOtherListBox(TdxCustomCheckListBox* Sender, const System::UnicodeString ASearchText);
	void __fastcall DoKeyUp(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall HandleCommandListBoxMouseWheel(System::TObject* Sender, System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos, bool &Handled);
	void __fastcall HandleItemIndexChanging(TdxCustomListBox* Sender, int AItemIndex);
	bool __fastcall ProcessCheckListBoxNavigationKey(System::Word &Key, System::Classes::TShiftState Shift);
	bool __fastcall ProcessCommandListBoxNavigationKey(System::Word &Key, System::Classes::TShiftState Shift);
	bool __fastcall ProcessNavigationKey(TdxCustomListBox* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	
public:
	__fastcall virtual TdxQuickCustomizationController(TdxQuickCustomizationCustomControl* AOwner);
	__property TdxCustomCheckListBox* CheckListBox = {read=GetCheckListBox};
	__property TdxCustomCheckListBox* CommandListBox = {read=GetCommandListBox};
	__property TdxQuickCustomizationCustomControl* Owner = {read=FOwner};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxQuickCustomizationController() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxQuickCustomizationCustomControl : public Cxcontainer::TcxContainer
{
	typedef Cxcontainer::TcxContainer inherited;
	
private:
	TdxQuickCustomizationCheckListBox* FCheckListBox;
	int FCheckListBoxVisibleRowCount;
	TdxQuickCustomizationCustomCheckListBox* FCommandListBox;
	Cxclasses::TcxObjectList* FCommandList;
	TdxQuickCustomizationController* FController;
	System::Classes::TNotifyEvent FOnInitialize;
	
protected:
	TdxQuickCustomizationCustomCommand* __fastcall AddCommand(const System::UnicodeString ACaption, bool AHasCheckBox, System::Classes::TNotifyEvent AOnAction);
	virtual void __fastcall AdjustBounds(const bool AUseCachedTextMaxWidth = false);
	virtual void __fastcall ChangeScaleEx(int M, int D, bool isDpiChange);
	virtual void __fastcall DrawSeparator();
	virtual TdxQuickCustomizationCustomCheckListBoxClass __fastcall GetCommandListBoxClass();
	virtual int __fastcall GetSeparatorHeight();
	virtual void __fastcall Paint();
	virtual void __fastcall PopulateCheckListBox() = 0 ;
	virtual void __fastcall PopulateCommandListBox() = 0 ;
	__property TdxQuickCustomizationController* Controller = {read=FController};
	__property int CheckListBoxVisibleRowCount = {read=FCheckListBoxVisibleRowCount, write=FCheckListBoxVisibleRowCount, nodefault};
	
public:
	__fastcall virtual TdxQuickCustomizationCustomControl(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxQuickCustomizationCustomControl();
	virtual void __fastcall Clear();
	bool __fastcall HasCommands();
	virtual void __fastcall Initialize(Vcl::Controls::TWinControl* AParent);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	__property TdxQuickCustomizationCheckListBox* CheckListBox = {read=FCheckListBox};
	__property TdxQuickCustomizationCustomCheckListBox* CommandListBox = {read=FCommandListBox};
	__property System::Classes::TNotifyEvent OnInitialize = {read=FOnInitialize, write=FOnInitialize};
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxQuickCustomizationCustomControl(HWND ParentWindow) : Cxcontainer::TcxContainer(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Cxlistbox */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXLISTBOX)
using namespace Cxlistbox;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxlistboxHPP
