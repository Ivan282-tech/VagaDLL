// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxCheckListBox.pas' rev: 35.00 (Windows)

#ifndef CxchecklistboxHPP
#define CxchecklistboxHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Types.hpp>
#include <System.Variants.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <System.Math.hpp>
#include <Vcl.ImgList.hpp>
#include <dxCore.hpp>
#include <dxMessages.hpp>
#include <cxClasses.hpp>
#include <cxGeometry.hpp>
#include <cxControls.hpp>
#include <cxContainer.hpp>
#include <cxGraphics.hpp>
#include <cxVariants.hpp>
#include <dxGDIPlusClasses.hpp>
#include <cxDataUtils.hpp>
#include <cxEdit.hpp>
#include <cxListBox.hpp>
#include <cxCheckBox.hpp>
#include <cxExtEditConsts.hpp>
#include <cxExtEditUtils.hpp>
#include <cxScrollBar.hpp>
#include <cxLookAndFeels.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxCustomListBox.hpp>
#include <dxCoreClasses.hpp>
#include <cxAccessibility.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxchecklistbox
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxCheckListBoxItem;
class DELPHICLASS TcxCheckListBoxItems;
struct TcxCheckListBoxMetrics;
class DELPHICLASS TdxInnerCheckListBoxToggleProvider;
class DELPHICLASS TdxInnerCheckListBoxAccessibilityHelper;
class DELPHICLASS TcxCustomInnerCheckListBox;
class DELPHICLASS TcxCustomCheckListBox;
class DELPHICLASS TcxCheckListBox;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TcxCheckListBoxImageLayout : unsigned char { ilBeforeChecks, ilAfterChecks };

typedef void __fastcall (__closure *TcxClickCheckEvent)(System::TObject* Sender, int AIndex, Cxlookandfeelpainters::TcxCheckBoxState APrevState, Cxlookandfeelpainters::TcxCheckBoxState ANewState);

typedef void __fastcall (__closure *TcxCheckStatesToEditValueEvent)(System::TObject* Sender, const Cxcheckbox::TcxCheckStates ACheckStates, /* out */ System::Variant &AEditValue);

typedef void __fastcall (__closure *TcxEditValueToCheckStatesEvent)(System::TObject* Sender, const System::Variant &AEditValue, Cxcheckbox::TcxCheckStates &ACheckStates);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCheckListBoxItem : public Cxcheckbox::TcxCaptionItem
{
	typedef Cxcheckbox::TcxCaptionItem inherited;
	
private:
	bool FEnabled;
	System::Uitypes::TImageIndex FImageIndex;
	System::TObject* FItemObject;
	Cxlookandfeelpainters::TcxCheckBoxState FState;
	bool __fastcall GetChecked();
	TcxCustomInnerCheckListBox* __fastcall GetCheckListBox();
	TcxCheckListBoxItems* __fastcall GetCollection();
	Vcl::Controls::TCaption __fastcall GetText();
	void __fastcall SetText(const Vcl::Controls::TCaption Value);
	void __fastcall SetEnabled(bool Value);
	void __fastcall SetImageIndex(System::Uitypes::TImageIndex Value);
	void __fastcall SetState(Cxlookandfeelpainters::TcxCheckBoxState Value);
	void __fastcall SetChecked(bool Value);
	
protected:
	virtual System::UnicodeString __fastcall GetDisplayName();
	__property TcxCustomInnerCheckListBox* CheckListBox = {read=GetCheckListBox};
	__property TcxCheckListBoxItems* Collection = {read=GetCollection};
	
public:
	__fastcall virtual TcxCheckListBoxItem(System::Classes::TCollection* Collection);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property bool Checked = {read=GetChecked, write=SetChecked, nodefault};
	__property System::TObject* ItemObject = {read=FItemObject, write=FItemObject};
	
__published:
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=1};
	__property System::Uitypes::TImageIndex ImageIndex = {read=FImageIndex, write=SetImageIndex, default=-1};
	__property Cxlookandfeelpainters::TcxCheckBoxState State = {read=FState, write=SetState, default=0};
	__property Tag;
	__property Vcl::Controls::TCaption Text = {read=GetText, write=SetText};
public:
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TcxCheckListBoxItem() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxCheckListBoxItems : public Cxcheckbox::TcxCaptionItems
{
	typedef Cxcheckbox::TcxCaptionItems inherited;
	
public:
	TcxCheckListBoxItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	int FChangedLockCount;
	TcxCustomInnerCheckListBox* FCheckListBox;
	TcxCheckListBoxItem* __fastcall GetItems(int Index);
	System::TObject* __fastcall GetObjects(int Index);
	void __fastcall SetItems(int Index, TcxCheckListBoxItem* const Value);
	void __fastcall SetObjects(int Index, System::TObject* Value);
	
protected:
	void __fastcall SynchronizeInnerListBoxItems();
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	bool __fastcall IsChangedLocked();
	void __fastcall LockChanged(bool ALock, bool AInvokeChangedOnUnlock = true);
	
public:
	__fastcall TcxCheckListBoxItems(TcxCustomInnerCheckListBox* AOwner, System::Classes::TCollectionItemClass AItemClass);
	__fastcall virtual ~TcxCheckListBoxItems();
	__property TcxCustomInnerCheckListBox* CheckListBox = {read=FCheckListBox};
	__property TcxCheckListBoxItem* Items[int Index] = {read=GetItems, write=SetItems/*, default*/};
	HIDESBASE TcxCheckListBoxItem* __fastcall Add();
	HIDESBASE void __fastcall Delete(int Index);
	int __fastcall IndexOf(const Vcl::Controls::TCaption S);
	int __fastcall IndexOfObject(System::TObject* AObject);
	void __fastcall LoadStrings(System::Classes::TStrings* AStrings);
	__property System::TObject* Objects[int Index] = {read=GetObjects, write=SetObjects};
};


struct DECLSPEC_DRECORD TcxCheckListBoxMetrics
{
public:
	int CheckFrameWidth;
	int ContentOffset;
	int ImageFrameWidth;
	int TextAreaOffset;
	int TextOffset;
	int TextWidthCorrection;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxInnerCheckListBoxToggleProvider : public Cxaccessibility::TdxToggleProvider
{
	typedef Cxaccessibility::TdxToggleProvider inherited;
	
protected:
	TcxCheckListBoxItem* FCheckListBoxItem;
	virtual void __fastcall DoToggle();
	virtual int __fastcall GetToggleState();
public:
	/* TObject.Create */ inline __fastcall TdxInnerCheckListBoxToggleProvider() : Cxaccessibility::TdxToggleProvider() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxInnerCheckListBoxToggleProvider() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxInnerCheckListBoxAccessibilityHelper : public Cxcontainer::TdxCustomInnerListBoxAccessibilityHelper
{
	typedef Cxcontainer::TdxCustomInnerListBoxAccessibilityHelper inherited;
	
private:
	TdxInnerCheckListBoxToggleProvider* FToggleProvider;
	TcxCustomCheckListBox* __fastcall GetCheckListBox();
	
protected:
	virtual int __fastcall GetState(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual bool __fastcall IsSupportedPattern(int APatternID, /* out */ System::_di_IInterface &AProvider, Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID = (Cxaccessibility::TcxAccessibleSimpleChildElementID)(0x0));
	__property TcxCustomCheckListBox* CheckListBox = {read=GetCheckListBox};
	
public:
	__fastcall virtual TdxInnerCheckListBoxAccessibilityHelper(System::TObject* AOwnerObject);
	__fastcall virtual ~TdxInnerCheckListBoxAccessibilityHelper();
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxCustomInnerCheckListBox : public Cxcontainer::TcxCustomInnerListBox
{
	typedef Cxcontainer::TcxCustomInnerListBox inherited;
	
private:
	bool FAllowDblClickToggle;
	bool FAllowGrayed;
	int FCapturedCheckIndex;
	TcxCheckListBoxItems* FCheckItems;
	Dxgdiplusclasses::TdxSmartGlyph* FGlyph;
	int FGlyphCount;
	int FHotCheckIndex;
	Cxaccessibility::_di_IcxAccessibilityHelper FIAccessibilityHelper;
	TcxCheckListBoxMetrics FMetrics;
	int FNewPressedCheckIndex;
	bool FNewPressedCheckItemFullyVisible;
	int FPressedCheckIndex;
	TcxClickCheckEvent FOnClickCheck;
	TcxCustomCheckListBox* __fastcall GetContainer();
	Cxaccessibility::_di_IcxAccessibilityHelper __fastcall GetIAccessibilityHelper();
	void __fastcall DrawCheck(const System::Types::TRect &R, Cxlookandfeelpainters::TcxCheckBoxState AState, Cxlookandfeelpainters::TcxEditCheckState ACheckState);
	void __fastcall GlyphChanged(System::TObject* Sender);
	void __fastcall SetGlyph(Dxgdiplusclasses::TdxSmartGlyph* Value);
	void __fastcall SetGlyphCount(int Value);
	void __fastcall ToggleClickCheck(int Index);
	void __fastcall InvalidateCheck(int Index);
	MESSAGE void __fastcall WMGetObject(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall CNDrawItem(Winapi::Messages::TWMDrawItem &Message);
	HIDESBASE MESSAGE void __fastcall CNMeasureItem(Winapi::Messages::TWMMeasureItem &Message);
	HIDESBASE MESSAGE void __fastcall CMColorChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	
protected:
	void __fastcall MouseTrackingMouseLeave();
	void __fastcall AdjustItemHeight();
	void __fastcall CheckHotTrack();
	DYNAMIC void __fastcall Click();
	int __fastcall GetCheckAt(int X, int Y);
	System::Types::TSize __fastcall GetCheckAreaSize();
	System::Types::TRect __fastcall GetCheckAreaRect(const System::Types::TRect &R);
	void __fastcall GetCheckMetrics(/* out */ System::Types::TSize &ACheckSize, /* out */ int &ACheckBorderOffset);
	System::Types::TRect __fastcall GetCheckRect(const System::Types::TRect &R, bool AReturnFullRect);
	virtual int __fastcall GetCheckRegionWidth();
	virtual TcxCheckListBoxMetrics __fastcall GetMetrics();
	virtual int __fastcall GetStandardItemHeight();
	int __fastcall GetVisibleItemCount();
	void __fastcall InternalMouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall FullRepaint();
	virtual void __fastcall InvalidateItem(int Index);
	void __fastcall SynchronizeCheckStates(int ANewHotCheckIndex, int ANewPressedCheckIndex);
	void __fastcall UpdateCheckStates();
	void __fastcall UpdateEditValue();
	void __fastcall UpdateMetrics();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC bool __fastcall DoMouseWheel(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	virtual void __fastcall DoClickCheck(const int AIndex, const Cxlookandfeelpainters::TcxCheckBoxState OldState, const Cxlookandfeelpainters::TcxCheckBoxState NewState);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	DYNAMIC void __fastcall DblClick();
	__property bool AllowDblClickToggle = {read=FAllowDblClickToggle, write=FAllowDblClickToggle, default=1};
	__property bool AllowGrayed = {read=FAllowGrayed, write=FAllowGrayed, default=0};
	__property TcxCheckListBoxItems* CheckItems = {read=FCheckItems, write=FCheckItems};
	__property Dxgdiplusclasses::TdxSmartGlyph* Glyph = {read=FGlyph, write=SetGlyph};
	__property int GlyphCount = {read=FGlyphCount, write=SetGlyphCount, default=6};
	__property Cxaccessibility::_di_IcxAccessibilityHelper IAccessibilityHelper = {read=GetIAccessibilityHelper};
	__property TcxCheckListBoxMetrics Metrics = {read=FMetrics};
	__property TcxClickCheckEvent OnClickCheck = {read=FOnClickCheck, write=FOnClickCheck};
	
public:
	__fastcall virtual TcxCustomInnerCheckListBox(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TcxCustomInnerCheckListBox();
	DYNAMIC bool __fastcall ExecuteAction(System::Classes::TBasicAction* Action);
	virtual bool __fastcall UpdateAction(System::Classes::TBasicAction* Action);
	__property TcxCustomCheckListBox* Container = {read=GetContainer};
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomInnerCheckListBox(HWND ParentWindow) : Cxcontainer::TcxCustomInnerListBox(ParentWindow) { }
	
private:
	void *__IcxMouseTrackingCaller;	// Dxcoreclasses::IcxMouseTrackingCaller 
	
public:
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


typedef System::TMetaClass* TcxCustomInnerCheckListBoxClass;

class PASCALIMPLEMENTATION TcxCustomCheckListBox : public Cxcustomlistbox::TcxCustomListBox
{
	typedef Cxcustomlistbox::TcxCustomListBox inherited;
	
private:
	Cxedit::TcxEditBorderStyle FCheckBorderStyle;
	System::Variant FEditValue;
	Cxcheckbox::TcxCheckStatesValueFormatEx FEditValueFormat;
	Vcl::Imglist::TCustomImageList* FImages;
	Vcl::Imglist::TChangeLink* FImagesChangeLink;
	TcxCheckListBoxImageLayout FImageLayout;
	bool FIsModified;
	Vcl::Stdctrls::TListBoxStyle FListStyle;
	bool FLoadedSortedValue;
	bool FNativeStyle;
	bool FShowChecks;
	TcxCheckStatesToEditValueEvent FOnCheckStatesToEditValue;
	Vcl::Stdctrls::TDrawItemEvent FOnDrawItem;
	System::Classes::TNotifyEvent FOnEditValueChanged;
	TcxEditValueToCheckStatesEvent FOnEditValueToCheckStates;
	Vcl::Stdctrls::TMeasureItemEvent FOnMeasureItem;
	TcxClickCheckEvent __fastcall GetOnClickCheck();
	Cxclasses::TcxCollectionCompareEvent __fastcall GetOnCompare();
	bool __fastcall GetAllowGrayed();
	bool __fastcall GetAllowDblClickToggle();
	Dxgdiplusclasses::TdxSmartGlyph* __fastcall GetGlyph();
	TcxCheckListBoxItems* __fastcall GetItems();
	int __fastcall GetColumns();
	bool __fastcall GetSorted();
	void __fastcall ImagesChanged(System::TObject* Sender);
	bool __fastcall IsItemHeightStored();
	void __fastcall SetOnClickCheck(TcxClickCheckEvent Value);
	void __fastcall SetOnCompare(Cxclasses::TcxCollectionCompareEvent Value);
	void __fastcall SetAllowGrayed(bool Value);
	void __fastcall SetAllowDblClickToggle(bool Value);
	void __fastcall SetEditValueFormat(Cxcheckbox::TcxCheckStatesValueFormat Value);
	void __fastcall SetGlyph(Dxgdiplusclasses::TdxSmartGlyph* Value);
	void __fastcall SetGlyphCount(int Value);
	void __fastcall SetItems(TcxCheckListBoxItems* Value);
	void __fastcall SetColumns(int Value);
	void __fastcall SetImageLayout(TcxCheckListBoxImageLayout Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetShowChecks(bool Value);
	void __fastcall SetSorted(bool Value);
	void __fastcall CheckEditValueFormat();
	Cxcheckbox::TcxCheckStatesValueFormatEx __fastcall GetRealEditValueFormat();
	void __fastcall ItemsChanged(System::TObject* Sender, System::Classes::TCollectionItem* AItem);
	TcxCustomInnerCheckListBox* __fastcall GetInnerCheckListBox();
	
protected:
	virtual bool __fastcall AllowTouchScrollUIMode();
	void __fastcall CalculateDrawCheckParams();
	virtual void __fastcall CreateHandle();
	virtual void __fastcall Loaded();
	virtual void __fastcall LookAndFeelChanged(Cxlookandfeels::TcxLookAndFeel* Sender, Cxlookandfeels::TcxLookAndFeelValues AChangedValues);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall CorrectAlignControlRect(System::Types::TRect &R);
	DYNAMIC void __fastcall FontChanged();
	virtual void __fastcall DoSetSize();
	virtual void __fastcall DataChange();
	virtual Cxcontainer::TcxCustomInnerListBox* __fastcall DoCreateInnerListBox();
	virtual void __fastcall UpdateData();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	void __fastcall DrawItem(Vcl::Controls::TWinControl* Control, int Index, const System::Types::TRect &Rect, Winapi::Windows::TOwnerDrawState State);
	virtual void __fastcall DrawItemText(const System::UnicodeString AText, const System::Types::TRect &ARect);
	virtual void __fastcall DoEditValueChanged();
	virtual void __fastcall DoScrollUIModeChanged();
	virtual TcxCustomInnerCheckListBoxClass __fastcall GetInnerCheckListBoxClass();
	virtual System::UnicodeString __fastcall GetItemText(int AItemIndex);
	virtual int __fastcall GetListItemHeight(int AIndex);
	virtual Vcl::Stdctrls::TListBoxStyle __fastcall GetListStyle();
	virtual int __fastcall IndexOf(const System::UnicodeString S);
	virtual void __fastcall InitializeInnerListBox();
	virtual void __fastcall InternalKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual bool __fastcall IsMouseWheelHandleNeeded(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	virtual void __fastcall SetEditValue(const System::Variant &Value);
	virtual bool __fastcall IsValueValid(const System::Variant &AValue, bool AAllowEmpty);
	virtual bool __fastcall NeedIgnorePressedKey(System::WideChar &Key);
	virtual bool __fastcall NeedsScrollBars();
	virtual void __fastcall SetItemHeight(int Value);
	virtual void __fastcall SetListStyle(Vcl::Stdctrls::TListBoxStyle Value);
	int __fastcall GetGlyphCount();
	System::UnicodeString __fastcall GetStateCaption(int AIndex);
	__property bool AllowDblClickToggle = {read=GetAllowDblClickToggle, write=SetAllowDblClickToggle, default=1};
	__property bool AllowGrayed = {read=GetAllowGrayed, write=SetAllowGrayed, default=0};
	__property AutoComplete = {default=1};
	__property AutoCompleteDelay = {default=500};
	__property int Columns = {read=GetColumns, write=SetColumns, default=0};
	__property System::Variant EditValue = {read=FEditValue, write=SetEditValue, stored=false};
	__property Cxcheckbox::TcxCheckStatesValueFormat EditValueFormat = {read=FEditValueFormat, write=SetEditValueFormat, default=2};
	__property Dxgdiplusclasses::TdxSmartGlyph* Glyph = {read=GetGlyph, write=SetGlyph};
	__property int GlyphCount = {read=GetGlyphCount, write=SetGlyphCount, default=6};
	__property TcxCheckListBoxImageLayout ImageLayout = {read=FImageLayout, write=SetImageLayout, default=0};
	__property ItemHeight = {stored=IsItemHeightStored};
	__property bool ShowChecks = {read=FShowChecks, write=SetShowChecks, default=1};
	__property bool Sorted = {read=GetSorted, write=SetSorted, default=0};
	__property TabWidth = {default=0};
	__property TcxCheckStatesToEditValueEvent OnCheckStatesToEditValue = {read=FOnCheckStatesToEditValue, write=FOnCheckStatesToEditValue};
	__property TcxClickCheckEvent OnClickCheck = {read=GetOnClickCheck, write=SetOnClickCheck};
	__property Cxclasses::TcxCollectionCompareEvent OnCompare = {read=GetOnCompare, write=SetOnCompare};
	__property Vcl::Stdctrls::TDrawItemEvent OnDrawItem = {read=FOnDrawItem, write=FOnDrawItem};
	__property System::Classes::TNotifyEvent OnEditValueChanged = {read=FOnEditValueChanged, write=FOnEditValueChanged};
	__property TcxEditValueToCheckStatesEvent OnEditValueToCheckStates = {read=FOnEditValueToCheckStates, write=FOnEditValueToCheckStates};
	__property Vcl::Stdctrls::TMeasureItemEvent OnMeasureItem = {read=FOnMeasureItem, write=FOnMeasureItem};
	
public:
	__fastcall virtual TcxCustomCheckListBox(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TcxCustomCheckListBox();
	int __fastcall CheckAtPos(const System::Types::TPoint &APos);
	void __fastcall Clear();
	int __fastcall GetBestFitWidth();
	virtual int __fastcall GetHeight(int ARowCount);
	virtual int __fastcall GetItemWidth(int AIndex);
	int __fastcall GetVisibleItemCount();
	int __fastcall ItemAtPos(const System::Types::TPoint &APos, bool AExisting);
	System::Types::TRect __fastcall ItemRect(int Index);
	void __fastcall Sort();
	void __fastcall AddItem(const System::UnicodeString AItem);
	void __fastcall CopySelection(TcxCustomCheckListBox* ADestination);
	void __fastcall DeleteSelected();
	void __fastcall MoveSelection(TcxCustomCheckListBox* ADestination);
	__property Count;
	__property TcxCustomInnerCheckListBox* InnerCheckListBox = {read=GetInnerCheckListBox};
	__property bool IsModified = {read=FIsModified, write=FIsModified, nodefault};
	__property ItemIndex;
	__property Selected;
	__property TopIndex;
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property TcxCheckListBoxItems* Items = {read=GetItems, write=SetItems};
	__property LookAndFeel;
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomCheckListBox(HWND ParentWindow) : Cxcustomlistbox::TcxCustomListBox(ParentWindow) { }
	
private:
	void *__IdxMultiPartGlyphSupport;	// Cxgraphics::IdxMultiPartGlyphSupport 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {9F33E339-DEDD-422A-9908-5B44FDADEBD9}
	operator Cxgraphics::_di_IdxMultiPartGlyphSupport()
	{
		Cxgraphics::_di_IdxMultiPartGlyphSupport intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxgraphics::IdxMultiPartGlyphSupport*(void) { return (Cxgraphics::IdxMultiPartGlyphSupport*)&__IdxMultiPartGlyphSupport; }
	#endif
	
};


class PASCALIMPLEMENTATION TcxCheckListBox : public TcxCustomCheckListBox
{
	typedef TcxCustomCheckListBox inherited;
	
__published:
	__property AllowDblClickToggle = {default=1};
	__property AllowGrayed = {default=0};
	__property Anchors = {default=3};
	__property AutoComplete = {default=1};
	__property AutoCompleteDelay = {default=500};
	__property BiDiMode;
	__property Columns = {default=0};
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property EditValue = {default=0};
	__property EditValueFormat = {default=2};
	__property Enabled = {default=1};
	__property Glyph;
	__property GlyphCount = {default=6};
	__property Images;
	__property ImageLayout = {default=0};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property IntegralHeight = {default=0};
	__property Items;
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ReadOnly = {default=0};
	__property ScrollWidth = {default=0};
	__property ShowChecks = {default=1};
	__property ShowHint;
	__property Sorted = {default=0};
	__property Style;
	__property StyleDisabled;
	__property StyleFocused;
	__property StyleHot;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TabWidth = {default=0};
	__property Visible = {default=1};
	__property OnCheckStatesToEditValue;
	__property OnClick;
	__property OnClickCheck;
	__property OnCompare;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnDrawItem;
	__property OnEditValueChanged;
	__property OnEditValueToCheckStates;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMeasureItem;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TcxCustomCheckListBox.Create */ inline __fastcall virtual TcxCheckListBox(System::Classes::TComponent* AOwner) : TcxCustomCheckListBox(AOwner) { }
	/* TcxCustomCheckListBox.Destroy */ inline __fastcall virtual ~TcxCheckListBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCheckListBox(HWND ParentWindow) : TcxCustomCheckListBox(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Cxchecklistbox */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXCHECKLISTBOX)
using namespace Cxchecklistbox;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxchecklistboxHPP
