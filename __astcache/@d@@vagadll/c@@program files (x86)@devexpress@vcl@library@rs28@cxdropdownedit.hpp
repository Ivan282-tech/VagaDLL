// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxDropDownEdit.pas' rev: 35.00 (Windows)

#ifndef CxdropdowneditHPP
#define CxdropdowneditHPP

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
#include <System.Variants.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Winapi.MultiMon.hpp>
#include <dxCore.hpp>
#include <dxCoreClasses.hpp>
#include <dxMessages.hpp>
#include <cxClasses.hpp>
#include <cxContainer.hpp>
#include <cxControls.hpp>
#include <dxGDIPlusClasses.hpp>
#include <cxEdit.hpp>
#include <cxGraphics.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxLookAndFeels.hpp>
#include <cxMaskEdit.hpp>
#include <cxDataStorage.hpp>
#include <cxTextEdit.hpp>
#include <cxVariants.hpp>
#include <cxFilterControlUtils.hpp>
#include <dxIncrementalFiltering.hpp>
#include <cxGeometry.hpp>
#include <cxAccessibility.hpp>
#include <System.Types.hpp>
#include <dxForms.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxdropdownedit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxCustomEditPopupWindowViewInfo;
class DELPHICLASS TcxCustomEditPopupWindow;
class DELPHICLASS TcxCustomDropDownEditProperties;
class DELPHICLASS TcxCustomDropDownEditViewData;
class DELPHICLASS TcxCustomDropDownEditData;
class DELPHICLASS TcxEditPopupControlLookAndFeel;
class DELPHICLASS TdxCustomDropDownInnerInnerEditAccessibilityHelper;
class DELPHICLASS TcxCustomDropDownInnerEdit;
class DELPHICLASS TdxCustomDropDownExpandCollapseProvider;
class DELPHICLASS TdxCustomDropDownEditAccessibilityHelper;
class DELPHICLASS TcxCustomDropDownEdit;
class DELPHICLASS TcxFilterDropDownEditHelper;
class DELPHICLASS TcxComboBoxPopupWindow;
class DELPHICLASS TdxCustomComboBoxListBoxAccessibilityHelper;
class DELPHICLASS TcxCustomComboBoxListBox;
class DELPHICLASS TcxComboBoxListBox;
class DELPHICLASS TcxComboBoxIncrementalFilteringHelper;
class DELPHICLASS TcxComboBoxLookupData;
class DELPHICLASS TcxCustomComboBoxViewData;
class DELPHICLASS TcxCustomComboBoxViewInfo;
class DELPHICLASS TcxCustomComboBoxProperties;
class DELPHICLASS TcxComboBoxProperties;
class DELPHICLASS TdxCustomComboBoxInnerEditAccessibilityHelper;
class DELPHICLASS TcxCustomComboBoxInnerEdit;
class DELPHICLASS TcxCustomComboBox;
class DELPHICLASS TcxComboBox;
class DELPHICLASS TcxFilterComboBoxHelper;
class DELPHICLASS TcxPopupEditPopupWindowViewInfo;
class DELPHICLASS TcxPopupEditPopupWindow;
class DELPHICLASS TcxCustomPopupEditProperties;
class DELPHICLASS TcxPopupEditProperties;
class DELPHICLASS TcxCustomPopupEdit;
class DELPHICLASS TcxPopupEdit;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TcxEditDropDownListStyle : unsigned char { lsEditFixedList, lsEditList, lsFixedList };

typedef void __fastcall (__closure *TcxCustomDrawBorderEvent)(Cxcontainer::TcxContainerViewInfo* AViewInfo, Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, bool &AHandled, /* out */ int &ABorderWidth);

typedef void __fastcall (__closure *TcxEditDrawItemEvent)(TcxCustomComboBox* AControl, Cxgraphics::TcxCanvas* ACanvas, int AIndex, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState AState);

typedef void __fastcall (__closure *TMeasureItemEvent)(TcxCustomComboBox* AControl, int AIndex, Cxgraphics::TcxCanvas* ACanvas, int &AHeight);

class PASCALIMPLEMENTATION TcxCustomEditPopupWindowViewInfo : public Dxincrementalfiltering::TdxCustomIncrementalFilteringContainerViewInfo
{
	typedef Dxincrementalfiltering::TdxCustomIncrementalFilteringContainerViewInfo inherited;
	
private:
	TcxCustomDrawBorderEvent FOnCustomDrawBorder;
	
protected:
	bool __fastcall DrawCustomBorder(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, /* out */ int &ABorderWidth);
	System::Types::TRect __fastcall GetBorders();
	int __fastcall GetBorderWidth();
	System::Types::TRect __fastcall GetClientEdges();
	System::Types::TRect __fastcall GetShadowOffsets();
	System::Types::TRect __fastcall GetSysPanelBorders();
	int __fastcall GetSysPanelDefaultHeight();
	virtual void __fastcall InternalPaint(Cxgraphics::TcxCanvas* ACanvas);
	virtual bool __fastcall IsSearchInfoPanelInClientRect();
	
public:
	Cxlookandfeelpainters::TcxEditPopupBorderStyle BorderStyle;
	bool ClientEdge;
	int MinSysPanelHeight;
	bool NativeStyle;
	bool Shadow;
	bool ShowCloseButton;
	System::Types::TRect CloseButtonRect;
	Cxlookandfeelpainters::TcxButtonState CloseButtonState;
	bool Sizeable;
	Dxcore::TdxCorner SizeGripCorner;
	System::Types::TRect SizeGripRect;
	System::Types::TRect SizeGripSizingRect;
	int SysPanelHeight;
	System::Types::TRect SysPanelBounds;
	bool SysPanelStyle;
	HIDESBASE virtual void __fastcall DrawBorder(Cxgraphics::TcxCanvas* ACanvas, System::Types::TRect &R);
	virtual System::Types::TRect __fastcall GetBorderExtent();
	virtual System::Types::TRect __fastcall GetClientExtent();
	virtual int __fastcall GetSysPanelHeight();
	__property TcxCustomDrawBorderEvent OnCustomDrawBorder = {read=FOnCustomDrawBorder, write=FOnCustomDrawBorder};
public:
	/* TdxCustomIncrementalFilteringContainerViewInfo.Create */ inline __fastcall virtual TcxCustomEditPopupWindowViewInfo() : Dxincrementalfiltering::TdxCustomIncrementalFilteringContainerViewInfo() { }
	/* TdxCustomIncrementalFilteringContainerViewInfo.Destroy */ inline __fastcall virtual ~TcxCustomEditPopupWindowViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCustomEditPopupWindow : public Dxincrementalfiltering::TdxCustomIncrementalFilteringPopupWindow
{
	typedef Dxincrementalfiltering::TdxCustomIncrementalFilteringPopupWindow inherited;
	
private:
	bool FPopupAutoSize;
	Cxlookandfeelpainters::TcxEditPopupBorderStyle FBorderStyle;
	bool FClientEdge;
	bool FCloseButton;
	int FMinHeight;
	int FMinWidth;
	bool FNativeStyle;
	int FPopupHeight;
	int FPopupWidth;
	bool FShadow;
	bool FShowContentWhileResize;
	bool FSizeable;
	Cxcontrols::TcxSizeFrame* FSizeFrame;
	bool FSysPanelStyle;
	System::Types::TPoint FCapturePoint;
	bool FSizingCapture;
	int FSizingHitTest;
	int FLockCheckSizeCount;
	TcxCustomDropDownEdit* __fastcall GetEdit();
	int __fastcall GetMinSysPanelHeight();
	HIDESBASE TcxCustomEditPopupWindowViewInfo* __fastcall GetViewInfo();
	void __fastcall SetPopupAutoSize(bool Value);
	HIDESBASE void __fastcall SetBorderStyle(Cxlookandfeelpainters::TcxEditPopupBorderStyle Value);
	void __fastcall SetClientEdge(bool Value);
	void __fastcall SetCloseButton(bool Value);
	void __fastcall SetMinSysPanelHeight(int Value);
	void __fastcall SetNativeStyle(bool Value);
	void __fastcall SetShadow(bool Value);
	void __fastcall SetSizeable(bool Value);
	void __fastcall SetSysPanelStyle(bool Value);
	int __fastcall GetHitTest(const System::Types::TPoint &P);
	void __fastcall SetCloseButtonState(Cxlookandfeelpainters::TcxButtonState AState);
	void __fastcall UpdateSysPanelState()/* overload */;
	void __fastcall UpdateSysPanelState(const System::Types::TPoint &P, System::Classes::TShiftState AShift)/* overload */;
	void __fastcall StartResize(const System::Types::TPoint &P, int AHitTest);
	void __fastcall DoResize(const System::Types::TPoint &P);
	void __fastcall EndResize(bool AApply);
	MESSAGE void __fastcall CMPopupControlKey(Winapi::Messages::TMessage &Message);
	
protected:
	virtual bool __fastcall AcceptsAnySize();
	virtual void __fastcall AdjustClientRect(System::Types::TRect &Rect);
	virtual System::Types::TPoint __fastcall CalculatePosition(const System::Types::TSize &ASize);
	virtual System::Types::TSize __fastcall CalculateSize();
	virtual bool __fastcall CanResize(int &NewWidth, int &NewHeight);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall DoClosing();
	DYNAMIC bool __fastcall DoMouseWheel(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	virtual void __fastcall ModalCloseUp();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseLeave(Vcl::Controls::TControl* AControl);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall PopupWindowStyleChanged(System::TObject* Sender);
	DYNAMIC void __fastcall Resize();
	virtual void __fastcall CalculateViewInfo();
	virtual void __fastcall DoPopupControlKey(System::WideChar Key);
	void __fastcall DrawSizeFrame(const System::Types::TRect &R);
	System::Types::TSize __fastcall GetMaxVisualAreaSize();
	virtual System::Types::TSize __fastcall GetMinSize();
	void __fastcall RefreshPopupWindow();
	void __fastcall ResizePopupWindow(int ALeft, int ATop, int AWidth, int AHeight);
	void __fastcall LockCheckSize();
	void __fastcall UnLockCheckSize();
	bool __fastcall CheckSizeLocked();
	
public:
	__fastcall virtual TcxCustomEditPopupWindow(Vcl::Controls::TWinControl* AOwnerControl);
	__fastcall virtual ~TcxCustomEditPopupWindow();
	virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
	virtual void __fastcall Popup(Vcl::Controls::TWinControl* AFocusedControl);
	__property Cxlookandfeelpainters::TcxEditPopupBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, nodefault};
	__property bool ClientEdge = {read=FClientEdge, write=SetClientEdge, nodefault};
	__property bool CloseButton = {read=FCloseButton, write=SetCloseButton, nodefault};
	__property TcxCustomDropDownEdit* Edit = {read=GetEdit};
	__property int MinHeight = {read=FMinHeight, write=FMinHeight, nodefault};
	__property System::Types::TSize MinSize = {read=GetMinSize};
	__property int MinSysPanelHeight = {read=GetMinSysPanelHeight, write=SetMinSysPanelHeight, nodefault};
	__property int MinWidth = {read=FMinWidth, write=FMinWidth, nodefault};
	__property bool NativeStyle = {read=FNativeStyle, write=SetNativeStyle, nodefault};
	__property bool PopupAutoSize = {read=FPopupAutoSize, write=SetPopupAutoSize, nodefault};
	__property int PopupHeight = {read=FPopupHeight, write=FPopupHeight, nodefault};
	__property int PopupWidth = {read=FPopupWidth, write=FPopupWidth, nodefault};
	__property bool Shadow = {read=FShadow, write=SetShadow, nodefault};
	__property bool ShowContentWhileResize = {read=FShowContentWhileResize, write=FShowContentWhileResize, default=0};
	__property bool Sizeable = {read=FSizeable, write=SetSizeable, nodefault};
	__property bool SysPanelStyle = {read=FSysPanelStyle, write=SetSysPanelStyle, nodefault};
	__property TcxCustomEditPopupWindowViewInfo* ViewInfo = {read=GetViewInfo};
	__property OnClosed;
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TcxCustomEditPopupWindow(System::Classes::TComponent* AOwner, int Dummy) : Dxincrementalfiltering::TdxCustomIncrementalFilteringPopupWindow(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomEditPopupWindow(HWND ParentWindow) : Dxincrementalfiltering::TdxCustomIncrementalFilteringPopupWindow(ParentWindow) { }
	
};


typedef System::TMetaClass* TcxCustomEditPopupWindowClass;

class PASCALIMPLEMENTATION TcxCustomDropDownEditProperties : public Cxmaskedit::TcxCustomMaskEditProperties
{
	typedef Cxmaskedit::TcxCustomMaskEditProperties inherited;
	
private:
	Dxgdiplusclasses::TdxSmartGlyph* FButtonGlyph;
	int FGlyphButtonIndex;
	bool FImmediateDropDownWhenActivated;
	bool FImmediateDropDownWhenKeyPressed;
	bool FKeepArrowButtonPressedWhenDroppedDown;
	bool FPopupAutoSize;
	bool FPopupClientEdge;
	Cxcontrols::TcxPopupDirection FPopupDirection;
	int FPopupHeight;
	Cxcontrols::TcxPopupAlignHorz FPopupHorzAlignment;
	int FPopupMinHeight;
	int FPopupMinWidth;
	bool FPopupSizeable;
	bool FPopupSysPanelStyle;
	Cxcontrols::TcxPopupAlignVert FPopupVertAlignment;
	int FPopupWidth;
	bool FPostPopupValueOnTab;
	Vcl::Forms::TCloseQueryEvent FOnCloseQuery;
	System::Classes::TNotifyEvent FOnCloseUp;
	System::Classes::TNotifyEvent FOnFinalizePopup;
	System::Classes::TNotifyEvent FOnInitPopup;
	System::Classes::TNotifyEvent FOnPopup;
	void __fastcall ButtonGlyphChanged(System::TObject* Sender);
	System::Classes::TAlignment __fastcall GetPopupAlignment();
	void __fastcall SetButtonGlyph(Dxgdiplusclasses::TdxSmartGlyph* Value);
	void __fastcall SetGlyphButtonIndex(int Value);
	void __fastcall SetKeepArrowButtonPressedWhenDroppedDown(bool Value);
	void __fastcall SetPopupAlignment(System::Classes::TAlignment Value);
	void __fastcall SetPopupClientEdge(bool Value);
	void __fastcall SetPopupHeight(int Value);
	void __fastcall SetPopupMinHeight(int Value);
	void __fastcall SetPopupMinWidth(int Value);
	void __fastcall SetPopupSizeable(bool Value);
	void __fastcall SetPopupSysPanelStyle(bool Value);
	void __fastcall SetPopupWidth(int Value);
	
protected:
	virtual void __fastcall ChangeScale(int M, int D);
	__classmethod virtual Cxedit::TcxCustomEditViewDataClass __fastcall GetViewDataClass();
	virtual bool __fastcall IsLookupDataVisual();
	virtual void __fastcall DoAssign(Cxedit::TcxCustomEditProperties* AProperties);
	virtual void __fastcall DoChanged();
	virtual int __fastcall DropDownButtonVisibleIndex();
	virtual Cxedit::TcxEditButtonKind __fastcall DefaultButtonKind();
	virtual bool __fastcall DropDownOnClick();
	virtual bool __fastcall GetAlwaysPostEditValue();
	__classmethod virtual TcxCustomEditPopupWindowClass __fastcall GetPopupWindowClass();
	virtual bool __fastcall PopupWindowAcceptsAnySize();
	virtual bool __fastcall PopupWindowCapturesFocus();
	void __fastcall UpdateButtons();
	__property bool AlwaysPostEditValue = {read=GetAlwaysPostEditValue, nodefault};
	__property int GlyphButtonIndex = {read=FGlyphButtonIndex, write=SetGlyphButtonIndex, nodefault};
	
public:
	__fastcall virtual TcxCustomDropDownEditProperties(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TcxCustomDropDownEditProperties();
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	virtual Cxedit::TcxEditSupportedOperations __fastcall GetSupportedOperations();
	__property Dxgdiplusclasses::TdxSmartGlyph* ButtonGlyph = {read=FButtonGlyph, write=SetButtonGlyph};
	__property bool ImmediateDropDownWhenActivated = {read=FImmediateDropDownWhenActivated, write=FImmediateDropDownWhenActivated, default=0};
	__property bool ImmediateDropDownWhenKeyPressed = {read=FImmediateDropDownWhenKeyPressed, write=FImmediateDropDownWhenKeyPressed, default=1};
	__property bool KeepArrowButtonPressedWhenDroppedDown = {read=FKeepArrowButtonPressedWhenDroppedDown, write=SetKeepArrowButtonPressedWhenDroppedDown, default=0};
	__property System::Classes::TAlignment PopupAlignment = {read=GetPopupAlignment, write=SetPopupAlignment, default=0};
	__property bool PopupAutoSize = {read=FPopupAutoSize, write=FPopupAutoSize, default=1};
	__property bool PopupClientEdge = {read=FPopupClientEdge, write=SetPopupClientEdge, default=0};
	__property Cxcontrols::TcxPopupDirection PopupDirection = {read=FPopupDirection, write=FPopupDirection, nodefault};
	__property int PopupHeight = {read=FPopupHeight, write=SetPopupHeight, default=200};
	__property Cxcontrols::TcxPopupAlignHorz PopupHorzAlignment = {read=FPopupHorzAlignment, write=FPopupHorzAlignment, nodefault};
	__property int PopupMinHeight = {read=FPopupMinHeight, write=SetPopupMinHeight, default=100};
	__property int PopupMinWidth = {read=FPopupMinWidth, write=SetPopupMinWidth, default=100};
	__property bool PopupSizeable = {read=FPopupSizeable, write=SetPopupSizeable, default=0};
	__property bool PopupSysPanelStyle = {read=FPopupSysPanelStyle, write=SetPopupSysPanelStyle, default=0};
	__property Cxcontrols::TcxPopupAlignVert PopupVertAlignment = {read=FPopupVertAlignment, write=FPopupVertAlignment, nodefault};
	__property int PopupWidth = {read=FPopupWidth, write=SetPopupWidth, default=250};
	__property bool PostPopupValueOnTab = {read=FPostPopupValueOnTab, write=FPostPopupValueOnTab, default=0};
	__property Vcl::Forms::TCloseQueryEvent OnCloseQuery = {read=FOnCloseQuery, write=FOnCloseQuery};
	__property System::Classes::TNotifyEvent OnCloseUp = {read=FOnCloseUp, write=FOnCloseUp};
	__property System::Classes::TNotifyEvent OnFinalizePopup = {read=FOnFinalizePopup, write=FOnFinalizePopup};
	__property System::Classes::TNotifyEvent OnInitPopup = {read=FOnInitPopup, write=FOnInitPopup};
	__property System::Classes::TNotifyEvent OnPopup = {read=FOnPopup, write=FOnPopup};
	
__published:
	__property bool ImmediateDropDown = {read=FImmediateDropDownWhenKeyPressed, write=FImmediateDropDownWhenKeyPressed, stored=false, nodefault};
	__property bool ImmediatePopup = {read=FImmediateDropDownWhenActivated, write=FImmediateDropDownWhenActivated, stored=false, nodefault};
};


typedef System::TMetaClass* TcxCustomDropDownEditPropertiesClass;

class PASCALIMPLEMENTATION TcxCustomDropDownEditViewData : public Cxtextedit::TcxCustomTextEditViewData
{
	typedef Cxtextedit::TcxCustomTextEditViewData inherited;
	
private:
	HIDESBASE TcxCustomDropDownEditProperties* __fastcall GetProperties();
	
protected:
	virtual bool __fastcall CanPressButton(Cxedit::TcxCustomEditViewInfo* AViewInfo, int AButtonVisibleIndex);
	virtual int __fastcall GetEditNativeState(Cxedit::TcxCustomEditViewInfo* AViewInfo);
	virtual bool __fastcall IsButtonPressed(Cxedit::TcxCustomEditViewInfo* AViewInfo, int AButtonVisibleIndex);
	
public:
	bool HasPopupWindow;
	bool IsHotAndPopup;
	bool KeepArrowButtonPressedWhenDroppedDown;
	virtual void __fastcall Calculate(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TPoint &P, Cxcontainer::TcxMouseButton Button, System::Classes::TShiftState Shift, Cxedit::TcxCustomEditViewInfo* AViewInfo, bool AIsMouseEvent);
	__property TcxCustomDropDownEditProperties* Properties = {read=GetProperties};
public:
	/* TcxCustomEditViewData.Create */ inline __fastcall virtual TcxCustomDropDownEditViewData(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditStyle* AStyle, bool AIsInplace) : Cxtextedit::TcxCustomTextEditViewData(AProperties, AStyle, AIsInplace) { }
	/* TcxCustomEditViewData.Destroy */ inline __fastcall virtual ~TcxCustomDropDownEditViewData() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomDropDownEditData : public Cxedit::TcxCustomEditData
{
	typedef Cxedit::TcxCustomEditData inherited;
	
protected:
	bool Initialized;
	int Width;
	int Height;
public:
	/* TcxCustomEditData.Create */ inline __fastcall virtual TcxCustomDropDownEditData(Cxedit::TcxCustomEdit* AEdit) : Cxedit::TcxCustomEditData(AEdit) { }
	/* TcxCustomEditData.Destroy */ inline __fastcall virtual ~TcxCustomDropDownEditData() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomDropDownEditDataClass;

class PASCALIMPLEMENTATION TcxEditPopupControlLookAndFeel : public Cxlookandfeels::TcxLookAndFeel
{
	typedef Cxlookandfeels::TcxLookAndFeel inherited;
	
private:
	TcxCustomDropDownEdit* __fastcall GetEdit();
	
protected:
	void __fastcall EditStyleChanged();
	virtual Cxlookandfeels::TcxLookAndFeelKind __fastcall InternalGetKind();
	virtual bool __fastcall InternalGetNativeStyle();
	virtual System::UnicodeString __fastcall InternalGetSkinName();
	virtual Cxlookandfeels::TdxScrollbarMode __fastcall InternalGetScrollbarMode();
	__property TcxCustomDropDownEdit* Edit = {read=GetEdit};
public:
	/* TcxLookAndFeel.Create */ inline __fastcall virtual TcxEditPopupControlLookAndFeel(System::Classes::TPersistent* AOwner) : Cxlookandfeels::TcxLookAndFeel(AOwner) { }
	/* TcxLookAndFeel.Destroy */ inline __fastcall virtual ~TcxEditPopupControlLookAndFeel() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomDropDownInnerInnerEditAccessibilityHelper : public Cxtextedit::TdxCustomInnerTextEditAccessibilityHelper
{
	typedef Cxtextedit::TdxCustomInnerTextEditAccessibilityHelper inherited;
	
protected:
	virtual int __fastcall GetRole(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetState(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
public:
	/* TcxAccessibilityHelper.Create */ inline __fastcall virtual TdxCustomDropDownInnerInnerEditAccessibilityHelper(System::TObject* AOwnerObject) : Cxtextedit::TdxCustomInnerTextEditAccessibilityHelper(AOwnerObject) { }
	/* TcxAccessibilityHelper.Destroy */ inline __fastcall virtual ~TdxCustomDropDownInnerInnerEditAccessibilityHelper() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxCustomDropDownInnerEdit : public Cxtextedit::TcxCustomInnerTextEdit
{
	typedef Cxtextedit::TcxCustomInnerTextEdit inherited;
	
private:
	HIDESBASE TcxCustomDropDownEdit* __fastcall GetContainer();
	HIDESBASE MESSAGE void __fastcall CMHintShow(Vcl::Controls::TCMHintShow &Message);
	HIDESBASE MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	
protected:
	virtual Cxtextedit::TdxCustomInnerTextEditAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	__property TcxCustomDropDownEdit* Container = {read=GetContainer};
public:
	/* TcxCustomInnerTextEdit.Create */ inline __fastcall virtual TcxCustomDropDownInnerEdit(System::Classes::TComponent* AOwner) : Cxtextedit::TcxCustomInnerTextEdit(AOwner) { }
	/* TcxCustomInnerTextEdit.Destroy */ inline __fastcall virtual ~TcxCustomDropDownInnerEdit() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomDropDownInnerEdit(HWND ParentWindow) : Cxtextedit::TcxCustomInnerTextEdit(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomDropDownExpandCollapseProvider : public Cxaccessibility::TdxExpandCollapseProvider
{
	typedef Cxaccessibility::TdxExpandCollapseProvider inherited;
	
private:
	TcxCustomDropDownEdit* FDropDownEdit;
	
protected:
	virtual void __fastcall Collapse();
	virtual void __fastcall Expand();
	virtual int __fastcall GetExpandCollapseState();
	
public:
	__fastcall TdxCustomDropDownExpandCollapseProvider(TcxCustomDropDownEdit* ADropDownEdit);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxCustomDropDownExpandCollapseProvider() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomDropDownEditAccessibilityHelper : public Cxtextedit::TdxCustomTextEditAccessibilityHelper
{
	typedef Cxtextedit::TdxCustomTextEditAccessibilityHelper inherited;
	
private:
	TdxCustomDropDownExpandCollapseProvider* FExpandCollapseProvider;
	TcxCustomDropDownEdit* __fastcall GetDropDownEdit();
	
protected:
	virtual void __fastcall DoButtonClick(int AVisibleIndex);
	virtual System::UnicodeString __fastcall GetButtonName(int AIndex);
	virtual int __fastcall GetRole(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetState(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual System::UnicodeString __fastcall GetValue(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual bool __fastcall IsSupportedPattern(int APatternID, /* out */ System::_di_IInterface &AProvider, Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID = (Cxaccessibility::TcxAccessibleSimpleChildElementID)(0x0));
	__property TcxCustomDropDownEdit* DropDownEdit = {read=GetDropDownEdit};
	
public:
	__fastcall virtual TdxCustomDropDownEditAccessibilityHelper(System::TObject* AOwnerObject);
	__fastcall virtual ~TdxCustomDropDownEditAccessibilityHelper();
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxCustomDropDownEdit : public Cxmaskedit::TcxCustomMaskEdit
{
	typedef Cxmaskedit::TcxCustomMaskEdit inherited;
	
private:
	System::Types::TPoint FCachedPosition;
	bool FIsActivatingByMouse;
	bool FIsHotAndPopup;
	TcxEditPopupControlLookAndFeel* FPopupControlsLookAndFeel;
	bool FPopupInitialized;
	bool FPopupMouseMoveLocked;
	bool FPopupSizeChanged;
	bool FSendChildrenStyle;
	Cxclasses::TcxTimer* FInitializeLookupDataTimer;
	void __fastcall DropDownByPasteHandler();
	bool __fastcall GetDroppedDown();
	HIDESBASE TcxCustomDropDownEditProperties* __fastcall GetProperties();
	HIDESBASE TcxCustomDropDownEditProperties* __fastcall GetActiveProperties();
	bool __fastcall IsVisible();
	void __fastcall SetDroppedDown(bool Value);
	HIDESBASE void __fastcall SetProperties(TcxCustomDropDownEditProperties* Value);
	void __fastcall StorePosition();
	MESSAGE void __fastcall CMDropDownByPaste(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMHintShow(Vcl::Controls::TCMHintShow &Message);
	HIDESBASE MESSAGE void __fastcall WMDestroy(Winapi::Messages::TWMNoParams &Message);
	void __fastcall OnInitializeLookupDataTimer(System::TObject* Sender);
	
protected:
	Cxedit::TcxEditCloseUpReason FCloseUpReason;
	TcxCustomEditPopupWindow* FPopupWindow;
	virtual void __fastcall BiDiModeChanged();
	virtual void __fastcall ContainerStyleChanged(System::TObject* Sender);
	virtual void __fastcall CreateHandle();
	virtual Cxedit::TcxCustomEditViewData* __fastcall CreateViewData();
	virtual void __fastcall DestroyWnd();
	virtual void __fastcall DoButtonDown(int AButtonVisibleIndex);
	DYNAMIC void __fastcall DoExit();
	virtual void __fastcall DoEditKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall DoEditKeyPress(System::WideChar &Key);
	virtual void __fastcall DoEditProcessTab(System::Classes::TShiftState Shift);
	DYNAMIC bool __fastcall DoMouseWheel(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	virtual bool __fastcall DoRefreshContainer(const System::Types::TPoint &P, Cxcontainer::TcxMouseButton Button, System::Classes::TShiftState Shift, bool AIsMouseEvent);
	DYNAMIC void __fastcall DoStartDock(Vcl::Controls::TDragObject* &DragObject);
	DYNAMIC void __fastcall FocusChanged();
	virtual Cxedit::TdxEditAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	virtual Cxedit::TcxCustomEditDataClass __fastcall GetEditDataClass();
	virtual Vcl::Controls::TControlClass __fastcall GetInnerEditClass();
	virtual Cxtextedit::_di_IcxTextEditLookupData __fastcall GetILookupData();
	virtual bool __fastcall GetScrollLookupDataList(Cxtextedit::TcxEditScrollCause AScrollCause);
	virtual void __fastcall HidePopupWindowOnScroll();
	virtual void __fastcall Initialize();
	virtual void __fastcall InitializeEditData();
	virtual Cxcontainer::TcxContainerStyleValues __fastcall InternalGetNotPublishedStyleValues();
	virtual bool __fastcall IsEditorKey(System::Word Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual bool __fastcall PopulateFromList(System::UnicodeString &AFindText);
	virtual void __fastcall PropertiesChanged(System::TObject* Sender);
	virtual bool __fastcall SendActivationKey(System::WideChar Key);
	virtual bool __fastcall TabsNeeded();
	virtual bool __fastcall CanDropDown();
	bool __fastcall CanInitializeLookupData();
	virtual void __fastcall CloseUp(Cxedit::TcxEditCloseUpReason AReason);
	virtual void __fastcall CreatePopupWindow();
	virtual void __fastcall DestroyPopupWindow();
	void __fastcall DeleteShowPopupWindowMessages();
	void __fastcall DoCloseQuery(bool &CanClose);
	virtual void __fastcall DoCloseUp();
	virtual void __fastcall DoFinalizePopup();
	virtual void __fastcall DoInitPopup();
	virtual void __fastcall DoPopup();
	virtual void __fastcall DropDown();
	virtual void __fastcall EditButtonClick();
	virtual int __fastcall GetPopupHeight();
	virtual Vcl::Controls::TWinControl* __fastcall GetPopupFocusedControl();
	virtual int __fastcall GetPopupWidth();
	virtual System::Types::TSize __fastcall GetPopupWindowClientPreferredSize() = 0 ;
	System::Types::TRect __fastcall GetPopupWindowOwnerControlBounds();
	virtual Vcl::Controls::TWinControl* __fastcall GetVisualControlsParent();
	virtual void __fastcall InitializeLookupData();
	virtual void __fastcall InitializePopupWindow();
	virtual bool __fastcall IsPopupWindowCaptureFocus();
	bool __fastcall IsPopupWindowShowing();
	virtual bool __fastcall NeedSearchInfoPanelShow();
	virtual void __fastcall PopupControlsLookAndFeelChanged(Cxlookandfeels::TcxLookAndFeel* Sender, Cxlookandfeels::TcxLookAndFeelValues AChangedValues);
	DYNAMIC void __fastcall PopupWindowBeforeClosing(System::TObject* Sender);
	DYNAMIC void __fastcall PopupWindowClosed(System::TObject* Sender);
	DYNAMIC void __fastcall PopupWindowCloseQuery(System::TObject* Sender, bool &CanClose);
	DYNAMIC void __fastcall PopupWindowClosing(System::TObject* Sender);
	DYNAMIC void __fastcall PopupWindowShowing(System::TObject* Sender);
	DYNAMIC void __fastcall PopupWindowShowed(System::TObject* Sender);
	virtual void __fastcall PositionPopupWindowChildren(const System::Types::TRect &AClientRect);
	void __fastcall SetIsHotAndPopup();
	virtual void __fastcall SetupPopupWindow();
	virtual void __fastcall StorePopupSize();
	void __fastcall UpdatePopupWindow();
	void __fastcall UpdatePopupWindowScaleFactor();
	__property bool IsHotAndPopup = {read=FIsHotAndPopup, nodefault};
	__property TcxEditPopupControlLookAndFeel* PopupControlsLookAndFeel = {read=FPopupControlsLookAndFeel};
	__property bool PopupMouseMoveLocked = {read=FPopupMouseMoveLocked, write=FPopupMouseMoveLocked, nodefault};
	__property bool PopupSizeChanged = {read=FPopupSizeChanged, nodefault};
	__property bool SendChildrenStyle = {read=FSendChildrenStyle, write=FSendChildrenStyle, nodefault};
	__property TcxCustomEditPopupWindow* PopupWindow = {read=FPopupWindow};
	
public:
	__fastcall virtual ~TcxCustomDropDownEdit();
	virtual void __fastcall Activate(Cxedit::TcxCustomEditData* &AEditData, bool ANeedSetFocus = true);
	virtual void __fastcall ActivateByKey(System::WideChar Key, Cxedit::TcxCustomEditData* &AEditData);
	virtual void __fastcall ActivateByMouse(System::Classes::TShiftState Shift, int X, int Y, Cxedit::TcxCustomEditData* &AEditData);
	virtual void __fastcall BeforeDestruction();
	virtual bool __fastcall Deactivate();
	DYNAMIC bool __fastcall Focused();
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	virtual bool __fastcall HasPopupWindow();
	virtual void __fastcall PasteFromClipboard();
	virtual bool __fastcall CanHide();
	__property TcxCustomDropDownEditProperties* ActiveProperties = {read=GetActiveProperties};
	__property bool DroppedDown = {read=GetDroppedDown, write=SetDroppedDown, nodefault};
	__property TcxCustomDropDownEditProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxCustomMaskEdit.Create */ inline __fastcall virtual TcxCustomDropDownEdit(System::Classes::TComponent* AOwner)/* overload */ : Cxmaskedit::TcxCustomMaskEdit(AOwner) { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxCustomDropDownEdit(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Cxmaskedit::TcxCustomMaskEdit(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomDropDownEdit(HWND ParentWindow) : Cxmaskedit::TcxCustomMaskEdit(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxFilterDropDownEditHelper : public Cxmaskedit::TcxFilterMaskEditHelper
{
	typedef Cxmaskedit::TcxFilterMaskEditHelper inherited;
	
public:
	__classmethod virtual bool __fastcall EditPropertiesHasButtons();
public:
	/* TObject.Create */ inline __fastcall TcxFilterDropDownEditHelper() : Cxmaskedit::TcxFilterMaskEditHelper() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxFilterDropDownEditHelper() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxComboBoxPopupWindow : public TcxCustomEditPopupWindow
{
	typedef TcxCustomEditPopupWindow inherited;
	
protected:
	virtual System::Types::TSize __fastcall CalculateSize();
public:
	/* TcxCustomEditPopupWindow.Create */ inline __fastcall virtual TcxComboBoxPopupWindow(Vcl::Controls::TWinControl* AOwnerControl) : TcxCustomEditPopupWindow(AOwnerControl) { }
	/* TcxCustomEditPopupWindow.Destroy */ inline __fastcall virtual ~TcxComboBoxPopupWindow() { }
	
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TcxComboBoxPopupWindow(System::Classes::TComponent* AOwner, int Dummy) : TcxCustomEditPopupWindow(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxComboBoxPopupWindow(HWND ParentWindow) : TcxCustomEditPopupWindow(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomComboBoxListBoxAccessibilityHelper : public Cxtextedit::TdxCustomEditListBoxAccessibilityHelper
{
	typedef Cxtextedit::TdxCustomEditListBoxAccessibilityHelper inherited;
	
protected:
	virtual void __fastcall DoDefaultAction(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual void __fastcall DoSelect(int AFlags, Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
public:
	/* TdxCustomInnerListBoxAccessibilityHelper.Create */ inline __fastcall virtual TdxCustomComboBoxListBoxAccessibilityHelper(System::TObject* AOwnerObject) : Cxtextedit::TdxCustomEditListBoxAccessibilityHelper(AOwnerObject) { }
	/* TdxCustomInnerListBoxAccessibilityHelper.Destroy */ inline __fastcall virtual ~TdxCustomComboBoxListBoxAccessibilityHelper() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxCustomComboBoxListBox : public Cxtextedit::TcxCustomEditListBox
{
	typedef Cxtextedit::TcxCustomEditListBox inherited;
	
private:
	HIDESBASE TcxCustomComboBox* __fastcall GetEdit();
	void __fastcall FocusSearchEdit();
	
protected:
	DYNAMIC void __fastcall Click();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual bool __fastcall DoDrawItem(int AIndex, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState AState);
	DYNAMIC void __fastcall DblClick();
	virtual Cxcontainer::TdxCustomInnerListBoxAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	virtual System::UnicodeString __fastcall GetItem(int Index);
	virtual void __fastcall MeasureItem(int Index, int &Height);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall RecreateWindow();
	__property TcxCustomComboBox* Edit = {read=GetEdit};
	
public:
	__fastcall virtual TcxCustomComboBoxListBox(System::Classes::TComponent* AOwner);
	virtual int __fastcall GetHeight(int ARowCount, int AMaxHeight);
public:
	/* TcxCustomEditListBox.Destroy */ inline __fastcall virtual ~TcxCustomComboBoxListBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomComboBoxListBox(HWND ParentWindow) : Cxtextedit::TcxCustomEditListBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxComboBoxListBox : public TcxCustomComboBoxListBox
{
	typedef TcxCustomComboBoxListBox inherited;
	
private:
	bool FMousePressed;
	
protected:
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall RecreateWindow();
	virtual void __fastcall SetItemIndex(const int Value)/* overload */;
	
public:
	virtual int __fastcall GetItemHeight(int AIndex = 0xffffffff);
public:
	/* TcxCustomComboBoxListBox.Create */ inline __fastcall virtual TcxComboBoxListBox(System::Classes::TComponent* AOwner) : TcxCustomComboBoxListBox(AOwner) { }
	
public:
	/* TcxCustomEditListBox.Destroy */ inline __fastcall virtual ~TcxComboBoxListBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxComboBoxListBox(HWND ParentWindow) : TcxCustomComboBoxListBox(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxComboBoxIncrementalFilteringHelper : public Dxincrementalfiltering::TdxCustomIncrementalFilteringHelper
{
	typedef Dxincrementalfiltering::TdxCustomIncrementalFilteringHelper inherited;
	
private:
	TcxComboBoxLookupData* FLookupData;
	
protected:
	void __fastcall CheckSearchControl(Vcl::Controls::TWinControl* AParent);
	virtual Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetLookAndFeelPainter();
	virtual void __fastcall SearchEditKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall SearchEditKeyPress(System::TObject* Sender, System::WideChar &Key);
	virtual void __fastcall SearchEditMouseWheel(System::TObject* Sender, System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos, bool &Handled);
	virtual void __fastcall SearchEditValueChanged(System::TObject* Sender);
	__property TcxComboBoxLookupData* LookupData = {read=FLookupData};
	
public:
	__fastcall TcxComboBoxIncrementalFilteringHelper(TcxComboBoxLookupData* AOwner);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxComboBoxIncrementalFilteringHelper() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxComboBoxLookupData : public Cxtextedit::TcxCustomTextEditLookupData
{
	typedef Cxtextedit::TcxCustomTextEditLookupData inherited;
	
private:
	TcxComboBoxIncrementalFilteringHelper* FIncrementalFilteringHelper;
	HIDESBASE TcxCustomComboBoxProperties* __fastcall GetActiveProperties();
	HIDESBASE TcxCustomComboBox* __fastcall GetEdit();
	
protected:
	virtual TcxComboBoxIncrementalFilteringHelper* __fastcall CreateIncrementalFilteringHelper();
	virtual void __fastcall DoInitialize(Vcl::Controls::TWinControl* AVisualControlsParent);
	virtual Cxtextedit::TcxCustomEditListBoxClass __fastcall GetListBoxClass();
	int __fastcall GetSearchEditHeight();
	virtual bool __fastcall IsFilterActive();
	bool __fastcall IsTouchScrollUIMode();
	__property TcxCustomComboBox* Edit = {read=GetEdit};
	__property TcxCustomComboBoxProperties* ActiveProperties = {read=GetActiveProperties};
	
public:
	__fastcall virtual TcxComboBoxLookupData(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TcxComboBoxLookupData();
	virtual bool __fastcall CanResizeVisualArea(System::Types::TSize &NewSize, int AMaxHeight = 0x0, int AMaxWidth = 0x0);
	virtual void __fastcall CloseUp();
	virtual Vcl::Controls::TControl* __fastcall GetActiveControl();
	virtual System::Types::TSize __fastcall GetVisualAreaPreferredSize(int AMaxHeight, int AWidth = 0x0);
	virtual void __fastcall PositionVisualArea(const System::Types::TRect &AClientRect);
	virtual void __fastcall TextChanged();
};


class PASCALIMPLEMENTATION TcxCustomComboBoxViewData : public TcxCustomDropDownEditViewData
{
	typedef TcxCustomDropDownEditViewData inherited;
	
private:
	HIDESBASE TcxCustomComboBoxProperties* __fastcall GetProperties();
	
protected:
	virtual bool __fastcall IsComboBoxStyle();
	bool __fastcall IsOwnerDrawing();
	
public:
	int OwnerDrawItemIndex;
	__fastcall virtual TcxCustomComboBoxViewData(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditStyle* AStyle, bool AIsInplace);
	virtual void __fastcall Calculate(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TPoint &P, Cxcontainer::TcxMouseButton Button, System::Classes::TShiftState Shift, Cxedit::TcxCustomEditViewInfo* AViewInfo, bool AIsMouseEvent);
	virtual void __fastcall EditValueToDrawValue(const System::Variant &AEditValue, Cxedit::TcxCustomEditViewInfo* AViewInfo);
	virtual System::Types::TRect __fastcall GetDrawTextOffset();
	__property TcxCustomComboBoxProperties* Properties = {read=GetProperties};
public:
	/* TcxCustomEditViewData.Destroy */ inline __fastcall virtual ~TcxCustomComboBoxViewData() { }
	
};


class PASCALIMPLEMENTATION TcxCustomComboBoxViewInfo : public Cxtextedit::TcxCustomTextEditViewInfo
{
	typedef Cxtextedit::TcxCustomTextEditViewInfo inherited;
	
private:
	TcxCustomComboBox* __fastcall GetEdit();
	
protected:
	virtual void __fastcall DoCustomDraw(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect);
	
public:
	int ItemIndex;
	__fastcall virtual TcxCustomComboBoxViewInfo();
	__property TcxCustomComboBox* Edit = {read=GetEdit};
public:
	/* TcxCustomTextEditViewInfo.Destroy */ inline __fastcall virtual ~TcxCustomComboBoxViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCustomComboBoxProperties : public TcxCustomDropDownEditProperties
{
	typedef TcxCustomDropDownEditProperties inherited;
	
private:
	TcxEditDropDownListStyle FDropDownListStyle;
	int FDropDownRows;
	int FItemHeight;
	bool FRevertable;
	TcxEditDrawItemEvent FOnDrawItem;
	TMeasureItemEvent FOnMeasureItem;
	bool __fastcall GetDropDownAutoWidth();
	bool __fastcall GetDropDownSizeable();
	int __fastcall GetDropDownWidth();
	System::Classes::TStrings* __fastcall GetItems();
	bool __fastcall GetSorted();
	void __fastcall SetDropDownAutoWidth(bool Value);
	void __fastcall SetDropDownListStyle(TcxEditDropDownListStyle Value);
	void __fastcall SetDropDownRows(int Value);
	void __fastcall SetDropDownSizeable(bool Value);
	void __fastcall SetDropDownWidth(int Value);
	void __fastcall SetItemHeight(int Value);
	void __fastcall SetItems(System::Classes::TStrings* Value);
	void __fastcall SetSorted(bool Value);
	
protected:
	virtual void __fastcall ChangeScale(int M, int D);
	virtual void __fastcall DoAssign(Cxedit::TcxCustomEditProperties* AProperties);
	virtual bool __fastcall DropDownOnClick();
	virtual int __fastcall GetDropDownPageRowCount();
	virtual Cxedit::TcxEditEditingStyle __fastcall GetEditingStyle();
	__classmethod virtual Dxcoreclasses::TcxInterfacedPersistentClass __fastcall GetLookupDataClass();
	__classmethod virtual TcxCustomEditPopupWindowClass __fastcall GetPopupWindowClass();
	__classmethod virtual Cxedit::TcxCustomEditViewDataClass __fastcall GetViewDataClass();
	virtual bool __fastcall UseLookupData();
	
public:
	__fastcall virtual TcxCustomComboBoxProperties(System::Classes::TPersistent* AOwner);
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	__classmethod virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
	__property bool DropDownAutoWidth = {read=GetDropDownAutoWidth, write=SetDropDownAutoWidth, default=1};
	__property TcxEditDropDownListStyle DropDownListStyle = {read=FDropDownListStyle, write=SetDropDownListStyle, default=1};
	__property int DropDownRows = {read=FDropDownRows, write=SetDropDownRows, default=8};
	__property bool DropDownSizeable = {read=GetDropDownSizeable, write=SetDropDownSizeable, default=0};
	__property int DropDownWidth = {read=GetDropDownWidth, write=SetDropDownWidth, default=0};
	__property int ItemHeight = {read=FItemHeight, write=SetItemHeight, default=0};
	__property System::Classes::TStrings* Items = {read=GetItems, write=SetItems};
	__property bool Revertable = {read=FRevertable, write=FRevertable, default=0};
	__property bool Sorted = {read=GetSorted, write=SetSorted, default=0};
	__property TcxEditDrawItemEvent OnDrawItem = {read=FOnDrawItem, write=FOnDrawItem};
	__property TMeasureItemEvent OnMeasureItem = {read=FOnMeasureItem, write=FOnMeasureItem};
public:
	/* TcxCustomDropDownEditProperties.Destroy */ inline __fastcall virtual ~TcxCustomComboBoxProperties() { }
	
};


typedef System::TMetaClass* TcxCustomComboBoxPropertiesClass;

class PASCALIMPLEMENTATION TcxComboBoxProperties : public TcxCustomComboBoxProperties
{
	typedef TcxCustomComboBoxProperties inherited;
	
__published:
	__property Alignment;
	__property AssignedValues;
	__property AutoSelect = {default=1};
	__property BeepOnError = {default=0};
	__property ButtonGlyph;
	__property CaseInsensitive = {default=1};
	__property CharCase = {default=0};
	__property ClearKey = {default=0};
	__property DropDownAutoWidth = {default=1};
	__property DropDownListStyle = {default=1};
	__property DropDownRows = {default=8};
	__property DropDownSizeable = {default=0};
	__property DropDownWidth = {default=0};
	__property HideSelection = {default=1};
	__property IgnoreMaskBlank = {default=0};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property ImmediateDropDownWhenActivated = {default=0};
	__property ImmediateDropDownWhenKeyPressed = {default=1};
	__property ImmediatePost = {default=0};
	__property ImmediateUpdateText = {default=0};
	__property IncrementalFiltering = {default=0};
	__property IncrementalFilteringOptions = {default=3};
	__property IncrementalSearch = {default=1};
	__property ItemHeight = {default=0};
	__property Items;
	__property MaskKind = {default=0};
	__property EditMask = {default=0};
	__property MaxLength;
	__property Nullstring = {default=0};
	__property OEMConvert = {default=0};
	__property PopupAlignment = {default=0};
	__property PostPopupValueOnTab = {default=0};
	__property ReadOnly;
	__property Revertable = {default=0};
	__property Sorted = {default=0};
	__property UseLeftAlignmentOnEditing;
	__property UseNullString = {default=0};
	__property ValidateOnEnter = {default=1};
	__property ValidationErrorIconAlignment = {default=0};
	__property ValidationOptions = {default=1};
	__property OnChange;
	__property OnCloseUp;
	__property OnDrawItem;
	__property OnEditValueChanged;
	__property OnInitPopup;
	__property OnMeasureItem;
	__property OnNewLookupDisplayText;
	__property OnPopup;
	__property OnValidate;
public:
	/* TcxCustomComboBoxProperties.Create */ inline __fastcall virtual TcxComboBoxProperties(System::Classes::TPersistent* AOwner) : TcxCustomComboBoxProperties(AOwner) { }
	
public:
	/* TcxCustomDropDownEditProperties.Destroy */ inline __fastcall virtual ~TcxComboBoxProperties() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomComboBoxInnerEditAccessibilityHelper : public TdxCustomDropDownInnerInnerEditAccessibilityHelper
{
	typedef TdxCustomDropDownInnerInnerEditAccessibilityHelper inherited;
	
protected:
	virtual int __fastcall GetRole(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
public:
	/* TcxAccessibilityHelper.Create */ inline __fastcall virtual TdxCustomComboBoxInnerEditAccessibilityHelper(System::TObject* AOwnerObject) : TdxCustomDropDownInnerInnerEditAccessibilityHelper(AOwnerObject) { }
	/* TcxAccessibilityHelper.Destroy */ inline __fastcall virtual ~TdxCustomComboBoxInnerEditAccessibilityHelper() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxCustomComboBoxInnerEdit : public TcxCustomDropDownInnerEdit
{
	typedef TcxCustomDropDownInnerEdit inherited;
	
private:
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Message);
	
protected:
	virtual Cxtextedit::TdxCustomInnerTextEditAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
public:
	/* TcxCustomInnerTextEdit.Create */ inline __fastcall virtual TcxCustomComboBoxInnerEdit(System::Classes::TComponent* AOwner) : TcxCustomDropDownInnerEdit(AOwner) { }
	/* TcxCustomInnerTextEdit.Destroy */ inline __fastcall virtual ~TcxCustomComboBoxInnerEdit() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomComboBoxInnerEdit(HWND ParentWindow) : TcxCustomDropDownInnerEdit(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxCustomComboBox : public TcxCustomDropDownEdit
{
	typedef TcxCustomDropDownEdit inherited;
	
private:
	HIDESBASE TcxCustomComboBoxProperties* __fastcall GetActiveProperties();
	HIDESBASE TcxComboBoxLookupData* __fastcall GetLookupData();
	HIDESBASE TcxCustomComboBoxProperties* __fastcall GetProperties();
	int __fastcall GetSelectedItem();
	HIDESBASE void __fastcall SetProperties(TcxCustomComboBoxProperties* Value);
	void __fastcall SetSelectedItem(int Value);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Message);
	
protected:
	virtual bool __fastcall CanDropDown();
	virtual void __fastcall ChangeHandler(System::TObject* Sender);
	DYNAMIC void __fastcall DblClick();
	virtual Vcl::Controls::TControlClass __fastcall GetInnerEditClass();
	virtual System::Types::TSize __fastcall GetPopupWindowClientPreferredSize();
	virtual void __fastcall Initialize();
	virtual void __fastcall InitializePopupWindow();
	virtual bool __fastcall IsTextInputMode();
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall PopupWindowShowed(System::TObject* Sender);
	virtual void __fastcall SetupPopupWindow();
	bool __fastcall CanSynchronizeLookupData();
	void __fastcall ResetPopupHeight();
	void __fastcall SynchronizeItemIndex();
	void __fastcall DoOnDrawItem(Cxgraphics::TcxCanvas* ACanvas, int AIndex, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState AState);
	void __fastcall DoOnMeasureItem(int AIndex, Cxgraphics::TcxCanvas* ACanvas, int &AHeight);
	bool __fastcall IsOnDrawItemEventAssigned();
	bool __fastcall IsOnMeasureItemEventAssigned();
	__property TcxComboBoxLookupData* LookupData = {read=GetLookupData};
	
public:
	virtual void __fastcall Activate(Cxedit::TcxCustomEditData* &AEditData, bool ANeedSetFocus);
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TcxCustomComboBoxProperties* ActiveProperties = {read=GetActiveProperties};
	__property ItemIndex;
	__property ItemObject;
	__property TcxCustomComboBoxProperties* Properties = {read=GetProperties, write=SetProperties};
	__property int SelectedItem = {read=GetSelectedItem, write=SetSelectedItem, nodefault};
public:
	/* TcxCustomDropDownEdit.Destroy */ inline __fastcall virtual ~TcxCustomComboBox() { }
	
public:
	/* TcxCustomMaskEdit.Create */ inline __fastcall virtual TcxCustomComboBox(System::Classes::TComponent* AOwner)/* overload */ : TcxCustomDropDownEdit(AOwner) { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxCustomComboBox(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : TcxCustomDropDownEdit(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomComboBox(HWND ParentWindow) : TcxCustomDropDownEdit(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxComboBox : public TcxCustomComboBox
{
	typedef TcxCustomComboBox inherited;
	
private:
	HIDESBASE TcxComboBoxProperties* __fastcall GetActiveProperties();
	HIDESBASE TcxComboBoxProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(TcxComboBoxProperties* Value);
	
protected:
	virtual bool __fastcall SupportsSpelling();
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TcxComboBoxProperties* ActiveProperties = {read=GetActiveProperties};
	
__published:
	__property Anchors = {default=3};
	__property AutoSize = {default=1};
	__property BeepOnEnter = {default=1};
	__property BiDiMode;
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property ItemIndex;
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property TcxComboBoxProperties* Properties = {read=GetProperties, write=SetProperties};
	__property ShowHint;
	__property Style;
	__property StyleDisabled;
	__property StyleFocused;
	__property StyleHot;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Text = {default=0};
	__property TextHint = {default=0};
	__property Visible = {default=1};
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEditing;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TcxCustomDropDownEdit.Destroy */ inline __fastcall virtual ~TcxComboBox() { }
	
public:
	/* TcxCustomMaskEdit.Create */ inline __fastcall virtual TcxComboBox(System::Classes::TComponent* AOwner)/* overload */ : TcxCustomComboBox(AOwner) { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxComboBox(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : TcxCustomComboBox(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxComboBox(HWND ParentWindow) : TcxCustomComboBox(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxFilterComboBoxHelper : public TcxFilterDropDownEditHelper
{
	typedef TcxFilterDropDownEditHelper inherited;
	
public:
	__classmethod virtual Cxfiltercontrolutils::TcxFilterDataType __fastcall GetFilterDataType(Cxdatastorage::TcxValueTypeClass AValueTypeClass);
	__classmethod virtual Cxedit::TcxCustomEditClass __fastcall GetFilterEditClass();
	__classmethod virtual void __fastcall InitializeProperties(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditProperties* AEditProperties, bool AHasButtons);
public:
	/* TObject.Create */ inline __fastcall TcxFilterComboBoxHelper() : TcxFilterDropDownEditHelper() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxFilterComboBoxHelper() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxPopupEditPopupWindowViewInfo : public TcxCustomEditPopupWindowViewInfo
{
	typedef TcxCustomEditPopupWindowViewInfo inherited;
	
public:
	virtual void __fastcall DrawBorder(Cxgraphics::TcxCanvas* ACanvas, System::Types::TRect &R);
public:
	/* TdxCustomIncrementalFilteringContainerViewInfo.Create */ inline __fastcall virtual TcxPopupEditPopupWindowViewInfo() : TcxCustomEditPopupWindowViewInfo() { }
	/* TdxCustomIncrementalFilteringContainerViewInfo.Destroy */ inline __fastcall virtual ~TcxPopupEditPopupWindowViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxPopupEditPopupWindow : public TcxCustomEditPopupWindow
{
	typedef TcxCustomEditPopupWindow inherited;
	
public:
	virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
public:
	/* TcxCustomEditPopupWindow.Create */ inline __fastcall virtual TcxPopupEditPopupWindow(Vcl::Controls::TWinControl* AOwnerControl) : TcxCustomEditPopupWindow(AOwnerControl) { }
	/* TcxCustomEditPopupWindow.Destroy */ inline __fastcall virtual ~TcxPopupEditPopupWindow() { }
	
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TcxPopupEditPopupWindow(System::Classes::TComponent* AOwner, int Dummy) : TcxCustomEditPopupWindow(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxPopupEditPopupWindow(HWND ParentWindow) : TcxCustomEditPopupWindow(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxCustomPopupEditProperties : public TcxCustomDropDownEditProperties
{
	typedef TcxCustomDropDownEditProperties inherited;
	
private:
	Vcl::Controls::TControl* FPopupControl;
	void __fastcall SetPopupControl(Vcl::Controls::TControl* AValue);
	
protected:
	virtual void __fastcall DoAssign(Cxedit::TcxCustomEditProperties* AProperties);
	virtual void __fastcall FreeNotification(System::Classes::TComponent* Sender);
	__classmethod virtual TcxCustomEditPopupWindowClass __fastcall GetPopupWindowClass();
	virtual bool __fastcall IsLookupDataVisual();
	virtual bool __fastcall PopupWindowCapturesFocus();
	
public:
	__fastcall virtual TcxCustomPopupEditProperties(System::Classes::TPersistent* AOwner);
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	__property Vcl::Controls::TControl* PopupControl = {read=FPopupControl, write=SetPopupControl};
	__property PopupSizeable = {default=1};
public:
	/* TcxCustomDropDownEditProperties.Destroy */ inline __fastcall virtual ~TcxCustomPopupEditProperties() { }
	
};


class PASCALIMPLEMENTATION TcxPopupEditProperties : public TcxCustomPopupEditProperties
{
	typedef TcxCustomPopupEditProperties inherited;
	
public:
	__fastcall virtual TcxPopupEditProperties(System::Classes::TPersistent* AOwner);
	
__published:
	__property Alignment;
	__property AssignedValues;
	__property AutoSelect = {default=1};
	__property BeepOnError = {default=0};
	__property ButtonGlyph;
	__property CaseInsensitive = {default=1};
	__property CharCase = {default=0};
	__property ClearKey = {default=0};
	__property EchoMode = {default=0};
	__property HideSelection = {default=1};
	__property IgnoreMaskBlank = {default=0};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property ImmediateDropDownWhenActivated = {default=1};
	__property ImmediateDropDownWhenKeyPressed = {default=1};
	__property IncrementalSearch = {default=1};
	__property LookupItems;
	__property LookupItemsSorted = {default=0};
	__property MaxLength;
	__property MaskKind = {default=0};
	__property Nullstring = {default=0};
	__property EditMask = {default=0};
	__property OEMConvert = {default=0};
	__property PasswordChar = {default=0};
	__property PopupAlignment = {default=0};
	__property PopupAutoSize = {default=1};
	__property PopupClientEdge = {default=0};
	__property PopupControl;
	__property PopupHeight = {default=200};
	__property PopupMinHeight = {default=100};
	__property PopupMinWidth = {default=100};
	__property PopupSizeable = {default=1};
	__property PopupSysPanelStyle = {default=0};
	__property PopupWidth = {default=250};
	__property ReadOnly;
	__property UseLeftAlignmentOnEditing;
	__property UseNullString = {default=0};
	__property ValidateOnEnter = {default=1};
	__property ValidationErrorIconAlignment = {default=0};
	__property ValidationOptions = {default=1};
	__property OnChange;
	__property OnCloseQuery;
	__property OnCloseUp;
	__property OnEditValueChanged;
	__property OnInitPopup;
	__property OnPopup;
	__property OnValidate;
public:
	/* TcxCustomDropDownEditProperties.Destroy */ inline __fastcall virtual ~TcxPopupEditProperties() { }
	
};


typedef Cxcontainer::TcxPrevPopupControlData TcxPrevPopupControlData;

class PASCALIMPLEMENTATION TcxCustomPopupEdit : public TcxCustomDropDownEdit
{
	typedef TcxCustomDropDownEdit inherited;
	
private:
	Cxcontainer::TcxPrevPopupControlData FPrevPopupControlData;
	Vcl::Controls::TControl* __fastcall GetPopupControl();
	HIDESBASE TcxCustomPopupEditProperties* __fastcall GetProperties();
	HIDESBASE TcxCustomPopupEditProperties* __fastcall GetActiveProperties();
	HIDESBASE void __fastcall SetProperties(TcxCustomPopupEditProperties* Value);
	
protected:
	virtual bool __fastcall CanDropDown();
	virtual void __fastcall DoInitPopup();
	virtual Vcl::Controls::TWinControl* __fastcall GetPopupFocusedControl();
	virtual System::Types::TSize __fastcall GetPopupWindowClientPreferredSize();
	DYNAMIC void __fastcall PopupWindowClosing(System::TObject* Sender);
	DYNAMIC void __fastcall PopupWindowClosed(System::TObject* Sender);
	virtual void __fastcall PositionPopupWindowChildren(const System::Types::TRect &AClientRect);
	virtual void __fastcall SetupPopupWindow();
	virtual void __fastcall HidePopup(Cxcontrols::TcxControl* Sender, Cxedit::TcxEditCloseUpReason AReason);
	virtual void __fastcall RestorePopupControlData();
	virtual void __fastcall SavePopupControlData();
	__property Vcl::Controls::TControl* PopupControl = {read=GetPopupControl};
	
public:
	__fastcall virtual ~TcxCustomPopupEdit();
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TcxCustomPopupEditProperties* ActiveProperties = {read=GetActiveProperties};
	__property TcxCustomPopupEditProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxCustomMaskEdit.Create */ inline __fastcall virtual TcxCustomPopupEdit(System::Classes::TComponent* AOwner)/* overload */ : TcxCustomDropDownEdit(AOwner) { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxCustomPopupEdit(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : TcxCustomDropDownEdit(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomPopupEdit(HWND ParentWindow) : TcxCustomDropDownEdit(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxPopupEdit : public TcxCustomPopupEdit
{
	typedef TcxCustomPopupEdit inherited;
	
private:
	HIDESBASE TcxPopupEditProperties* __fastcall GetActiveProperties();
	HIDESBASE TcxPopupEditProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(TcxPopupEditProperties* Value);
	
protected:
	virtual bool __fastcall SupportsSpelling();
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TcxPopupEditProperties* ActiveProperties = {read=GetActiveProperties};
	
__published:
	__property Anchors = {default=3};
	__property AutoSize = {default=1};
	__property BeepOnEnter = {default=1};
	__property BiDiMode;
	__property Constraints;
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property TcxPopupEditProperties* Properties = {read=GetProperties, write=SetProperties};
	__property ShowHint;
	__property Style;
	__property StyleDisabled;
	__property StyleFocused;
	__property StyleHot;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Text = {default=0};
	__property TextHint = {default=0};
	__property Visible = {default=1};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEditing;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDrag;
	__property OnEndDock;
	__property OnStartDock;
public:
	/* TcxCustomPopupEdit.Destroy */ inline __fastcall virtual ~TcxPopupEdit() { }
	
public:
	/* TcxCustomMaskEdit.Create */ inline __fastcall virtual TcxPopupEdit(System::Classes::TComponent* AOwner)/* overload */ : TcxCustomPopupEdit(AOwner) { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxPopupEdit(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : TcxCustomPopupEdit(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxPopupEdit(HWND ParentWindow) : TcxCustomPopupEdit(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool dxApplyFormTransparencyToPopupWindows;
}	/* namespace Cxdropdownedit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXDROPDOWNEDIT)
using namespace Cxdropdownedit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxdropdowneditHPP
