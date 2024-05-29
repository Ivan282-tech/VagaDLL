// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxRadioGroup.pas' rev: 35.00 (Windows)

#ifndef CxradiogroupHPP
#define CxradiogroupHPP

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
#include <Winapi.Messages.hpp>
#include <System.Variants.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.StdCtrls.hpp>
#include <System.SysUtils.hpp>
#include <dxCore.hpp>
#include <dxUxTheme.hpp>
#include <cxClasses.hpp>
#include <cxContainer.hpp>
#include <cxControls.hpp>
#include <cxDataStorage.hpp>
#include <cxGraphics.hpp>
#include <cxLookAndFeels.hpp>
#include <cxEdit.hpp>
#include <cxTextEdit.hpp>
#include <cxGroupBox.hpp>
#include <cxDropDownEdit.hpp>
#include <cxFilterControlUtils.hpp>
#include <dxFading.hpp>
#include <cxGeometry.hpp>
#include <dxCoreClasses.hpp>
#include <cxAccessibility.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <Vcl.ActnList.hpp>
#include <System.Actions.hpp>
#include <cxCheckBox.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxradiogroup
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxRadioButtonActionLink;
class DELPHICLASS TdxRadioButtonAccessibilityHelper;
class DELPHICLASS TcxRadioButton;
class DELPHICLASS TcxRadioGroupButtonViewInfo;
class DELPHICLASS TcxCustomRadioGroupViewInfo;
class DELPHICLASS TcxCustomRadioGroupViewData;
class DELPHICLASS TcxRadioGroupItem;
class DELPHICLASS TcxRadioGroupItems;
class DELPHICLASS TcxCustomRadioGroupProperties;
class DELPHICLASS TcxRadioGroupProperties;
class DELPHICLASS TcxCustomRadioGroupButton;
class DELPHICLASS TcxCustomRadioGroup;
class DELPHICLASS TcxRadioGroup;
class DELPHICLASS TcxFilterRadioGroupHelper;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TcxRadioButtonState : unsigned char { rbsDisabled, rbsHot, rbsNormal, rbsPressed };

enum DECLSPEC_DENUM TcxRadioGroupState : unsigned char { rgsActive, rgsDisabled, rgsHot, rgsNormal };

class PASCALIMPLEMENTATION TcxRadioButtonActionLink : public Vcl::Stdctrls::TButtonActionLink
{
	typedef Vcl::Stdctrls::TButtonActionLink inherited;
	
protected:
	TcxRadioButton* FClient;
	virtual void __fastcall AssignClient(System::TObject* AClient);
	virtual bool __fastcall IsGroupIndexLinked();
	virtual void __fastcall SetGroupIndex(int Value);
public:
	/* TBasicActionLink.Create */ inline __fastcall virtual TcxRadioButtonActionLink(System::TObject* AClient) : Vcl::Stdctrls::TButtonActionLink(AClient) { }
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TcxRadioButtonActionLink() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxRadioButtonAccessibilityHelper : public Cxaccessibility::TcxAccessibilityHelper
{
	typedef Cxaccessibility::TcxAccessibilityHelper inherited;
	
private:
	TcxRadioButton* __fastcall GetRadioButton();
	
protected:
	virtual System::UnicodeString __fastcall GetName(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual HWND __fastcall GetOwnerObjectWindow();
	virtual int __fastcall GetRole(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetState(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual Cxaccessibility::TcxAccessibleObjectProperties __fastcall GetSupportedProperties(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual bool __fastcall IsExtended();
	__property TcxRadioButton* RadioButton = {read=GetRadioButton};
	
public:
	virtual System::Types::TRect __fastcall GetScreenBounds(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
public:
	/* TcxAccessibilityHelper.Create */ inline __fastcall virtual TdxRadioButtonAccessibilityHelper(System::TObject* AOwnerObject) : Cxaccessibility::TcxAccessibilityHelper(AOwnerObject) { }
	/* TcxAccessibilityHelper.Destroy */ inline __fastcall virtual ~TdxRadioButtonAccessibilityHelper() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxRadioButton : public Vcl::Stdctrls::TRadioButton
{
	typedef Vcl::Stdctrls::TRadioButton inherited;
	
private:
	bool FAutoSize;
	Cxgraphics::TcxCanvas* FCanvas;
	bool FChecked;
	int FColumn;
	Vcl::Controls::TControlCanvas* FControlCanvas;
	int FGroupIndex;
	Cxaccessibility::_di_IcxAccessibilityHelper FIAccessibilityHelper;
	Cxlookandfeels::TcxLookAndFeel* FLookAndFeel;
	System::Classes::TComponent* FPopupMenu;
	int FRow;
	Cxgeometry::TdxScaleFactor* FScaleFactor;
	bool FShowEndEllipsis;
	TcxRadioButtonState FState;
	bool FTransparent;
	void __fastcall AdjustCanvasFontSettings(Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall CalculateNewSize(int &AWidth, int &AHeight);
	void __fastcall DrawItem(const tagDRAWITEMSTRUCT &DrawItemStruct);
	System::Classes::TLeftRight __fastcall GetBiDiModeDependentAlignment();
	System::Types::TRect __fastcall GetButtonRect();
	Cxaccessibility::_di_IcxAccessibilityHelper __fastcall GetIAccessibilityHelper();
	System::Types::TRect __fastcall GetRadioButtonRect(const System::Types::TSize &ARadioButtonSize, bool ANativeStyle);
	Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	System::Uitypes::TColor __fastcall GetTextColor();
	System::Types::TRect __fastcall GetTextRect();
	bool __fastcall IsDisabledTextColorAssigned();
	bool __fastcall IsWidthStored();
	bool __fastcall IsHeightStored();
	void __fastcall SetRadioButtonAutoSize(bool AValue);
	void __fastcall SetLookAndFeel(Cxlookandfeels::TcxLookAndFeel* Value);
	HIDESBASE void __fastcall SetPopupMenu(System::Classes::TComponent* Value);
	void __fastcall SetShowEndEllipsis(bool Value);
	void __fastcall SetState(TcxRadioButtonState Value);
	void __fastcall SetTransparent(bool Value);
	MESSAGE void __fastcall BMSetCheck(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMHintShow(Vcl::Controls::TCMHintShow &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMSysColorChange(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMTextChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CNDrawItem(Winapi::Messages::TWMDrawItem &Message);
	HIDESBASE MESSAGE void __fastcall CNKeyDown(Winapi::Messages::TWMKey &Message);
	MESSAGE void __fastcall CNMeasureItem(Winapi::Messages::TWMMeasureItem &Message);
	HIDESBASE MESSAGE void __fastcall CNSysKeyDown(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall WMContextMenu(Winapi::Messages::TWMContextMenu &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	MESSAGE void __fastcall WMGetObject(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMWindowPosChanged(Winapi::Messages::TWMWindowPosMsg &Message);
	HIDESBASE MESSAGE void __fastcall WMWindowPosChanging(Winapi::Messages::TWMWindowPosMsg &Message);
	
protected:
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	virtual bool __fastcall CanResize(int &NewWidth, int &NewHeight);
	virtual void __fastcall CheckStartFading(TcxRadioButtonState APrevState, TcxRadioButtonState AState);
	virtual void __fastcall CreateHandle();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	DYNAMIC void __fastcall DoContextPopup(const System::Types::TPoint &MousePos, bool &Handled);
	DYNAMIC void __fastcall DoEnter();
	DYNAMIC Vcl::Controls::TControlActionLinkClass __fastcall GetActionLinkClass();
	virtual bool __fastcall GetChecked();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall SetChecked(bool Value);
	virtual void __fastcall SetParent(Vcl::Controls::TWinControl* AValue);
	virtual void __fastcall CorrectTextRect(System::Types::TRect &R, bool ANativeStyle);
	virtual bool __fastcall DoShowPopupMenu(System::Classes::TComponent* APopupMenu, int X, int Y);
	DYNAMIC void __fastcall EnabledChanged();
	void __fastcall InternalPolyLine(const System::Types::TPoint *APoints, const int APoints_High);
	void __fastcall InvalidateRadioButton();
	virtual bool __fastcall IsInplace();
	virtual bool __fastcall IsNativeBackground();
	virtual bool __fastcall IsNativeStyle();
	virtual bool __fastcall IsTransparent();
	virtual bool __fastcall IsTransparentBackground();
	virtual void __fastcall LookAndFeelChanged(Cxlookandfeels::TcxLookAndFeel* Sender, Cxlookandfeels::TcxLookAndFeelValues AChangedValues);
	DYNAMIC void __fastcall MouseEnter(Vcl::Controls::TControl* AControl);
	DYNAMIC void __fastcall MouseLeave(Vcl::Controls::TControl* AControl);
	void __fastcall ShortUpdateState();
	virtual void __fastcall UpdateState(Cxcontainer::TcxMouseButton Button, System::Classes::TShiftState Shift, const System::Types::TPoint &P);
	virtual bool __fastcall NeedDoubleBuffered();
	virtual void __fastcall Draw(Cxgraphics::TcxCanvas* ACanvas, bool ADrawOnlyFocusedState);
	virtual void __fastcall DrawBackground(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawCaption(Cxgraphics::TcxCanvas* ACanvas, bool ANativeStyle);
	virtual void __fastcall DrawRadioButton(Cxgraphics::TcxCanvas* ACanvas, TcxRadioButtonState AState);
	virtual void __fastcall Paint(bool ADrawOnlyFocusedState);
	virtual void __fastcall PrepareBackground(Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall MouseTrackingCallerMouseLeave();
	Cxlookandfeels::TcxLookAndFeel* __fastcall GetLookAndFeel();
	bool __fastcall CanFade();
	void __fastcall GetFadingImages(/* out */ Cxgraphics::TcxBitmap* &AFadeOutImage, /* out */ Cxgraphics::TcxBitmap* &AFadeInImage);
	__property System::Types::TRect ButtonRect = {read=GetButtonRect};
	__property Cxgraphics::TcxCanvas* Canvas = {read=FCanvas};
	__property int Column = {read=FColumn, nodefault};
	__property Cxaccessibility::_di_IcxAccessibilityHelper IAccessibilityHelper = {read=GetIAccessibilityHelper};
	__property int Row = {read=FRow, nodefault};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=GetScaleFactor};
	__property TcxRadioButtonState State = {read=FState, write=SetState, nodefault};
	__property System::Types::TRect TextRect = {read=GetTextRect};
	
public:
	__fastcall virtual TcxRadioButton(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TcxRadioButton();
	DYNAMIC bool __fastcall Focused();
	virtual void __fastcall Invalidate();
	
__published:
	__property Height = {stored=IsHeightStored};
	__property Width = {stored=IsWidthStored};
	__property bool AutoSize = {read=FAutoSize, write=SetRadioButtonAutoSize, default=0};
	__property int GroupIndex = {read=FGroupIndex, write=FGroupIndex, default=0};
	__property Cxlookandfeels::TcxLookAndFeel* LookAndFeel = {read=FLookAndFeel, write=SetLookAndFeel};
	__property System::Classes::TComponent* PopupMenu = {read=FPopupMenu, write=SetPopupMenu};
	__property ParentBackground = {default=1};
	__property bool ShowEndEllipsis = {read=FShowEndEllipsis, write=SetShowEndEllipsis, default=0};
	__property bool Transparent = {read=FTransparent, write=SetTransparent, default=0};
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxRadioButton(HWND ParentWindow) : Vcl::Stdctrls::TRadioButton(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
private:
	void *__IdxScaleFactor;	// Cxgeometry::IdxScaleFactor 
	void *__IdxSkinSupport;	// Cxlookandfeels::IdxSkinSupport 
	void *__IcxLookAndFeelContainer;	// Cxlookandfeels::IcxLookAndFeelContainer 
	void *__IcxMouseTrackingCaller;	// Dxcoreclasses::IcxMouseTrackingCaller 
	void *__IdxFadingObject;	// Dxfading::IdxFadingObject 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {367A805A-A84B-441A-83A3-6A7E489D3B6C}
	operator Cxgeometry::_di_IdxScaleFactor()
	{
		Cxgeometry::_di_IdxScaleFactor intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxgeometry::IdxScaleFactor*(void) { return (Cxgeometry::IdxScaleFactor*)&__IdxScaleFactor; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {EF3FF483-9B69-46DF-95A4-D3A3810F63A5}
	operator Cxlookandfeels::_di_IdxSkinSupport()
	{
		Cxlookandfeels::_di_IdxSkinSupport intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxlookandfeels::IdxSkinSupport*(void) { return (Cxlookandfeels::IdxSkinSupport*)&__IdxSkinSupport; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6065B58B-C557-4464-A67D-64183FD13F25}
	operator Cxlookandfeels::_di_IcxLookAndFeelContainer()
	{
		Cxlookandfeels::_di_IcxLookAndFeelContainer intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxlookandfeels::IcxLookAndFeelContainer*(void) { return (Cxlookandfeels::IcxLookAndFeelContainer*)&__IcxLookAndFeelContainer; }
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
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {73AB2A92-CDD9-4F13-965A-DC799DE837F9}
	operator Dxfading::_di_IdxFadingObject()
	{
		Dxfading::_di_IdxFadingObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxfading::IdxFadingObject*(void) { return (Dxfading::IdxFadingObject*)&__IdxFadingObject; }
	#endif
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxRadioGroupButtonViewInfo : public Cxgroupbox::TcxButtonGroupButtonViewInfo
{
	typedef Cxgroupbox::TcxButtonGroupButtonViewInfo inherited;
	
public:
	virtual System::Types::TRect __fastcall GetGlyphRect(const System::Types::TSize &AGlyphSize, System::Classes::TLeftRight AAlignment, bool AIsPaintCopy);
public:
	/* TcxEditButtonViewInfo.Destroy */ inline __fastcall virtual ~TcxRadioGroupButtonViewInfo() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxRadioGroupButtonViewInfo() : Cxgroupbox::TcxButtonGroupButtonViewInfo() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxCustomRadioGroupViewInfo : public Cxgroupbox::TcxButtonGroupViewInfo
{
	typedef Cxgroupbox::TcxButtonGroupViewInfo inherited;
	
private:
	HIDESBASE TcxCustomRadioGroup* __fastcall GetEdit();
	NativeUInt __fastcall ThemeHandle();
	
protected:
	virtual void __fastcall DrawButtonCaption(Cxgraphics::TcxCanvas* ACanvas, Cxgroupbox::TcxGroupBoxButtonViewInfo* AButtonViewInfo, const System::Types::TRect &AGlyphRect);
	virtual void __fastcall DrawButtonGlyph(Cxgraphics::TcxCanvas* ACanvas, Cxgroupbox::TcxGroupBoxButtonViewInfo* AButtonViewInfo, const System::Types::TRect &AGlyphRect);
	virtual Cxedit::TcxEditButtonViewInfoClass __fastcall GetButtonViewInfoClass();
	virtual System::Uitypes::TColor __fastcall GetSkinnedTextColor(Cxlookandfeelpainters::TcxEditStateColorKind AKind);
	virtual bool __fastcall IsButtonGlyphTransparent(Cxgroupbox::TcxGroupBoxButtonViewInfo* AButtonViewInfo);
	
public:
	int ItemIndex;
	__fastcall virtual TcxCustomRadioGroupViewInfo();
	__property TcxCustomRadioGroup* Edit = {read=GetEdit};
public:
	/* TcxGroupBoxViewInfo.Destroy */ inline __fastcall virtual ~TcxCustomRadioGroupViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCustomRadioGroupViewData : public Cxgroupbox::TcxButtonGroupViewData
{
	typedef Cxgroupbox::TcxButtonGroupViewData inherited;
	
private:
	HIDESBASE TcxCustomRadioGroupProperties* __fastcall GetProperties();
	
protected:
	virtual void __fastcall CalculateButtonNativePartInfo(NativeUInt ATheme, Cxedit::TcxEditButtonViewInfo* AButtonViewInfo);
	virtual NativeUInt __fastcall GetButtonNativeTheme(Cxedit::TcxEditButtonViewInfo* AButtonViewInfo);
	virtual void __fastcall GetEditMetrics(bool AAutoHeight, Cxgraphics::TcxCanvas* ACanvas, /* out */ Cxgroupbox::TcxEditMetrics &AMetrics);
	virtual System::Types::TSize __fastcall GetButtonSize();
	
public:
	virtual void __fastcall Calculate(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TPoint &P, Cxcontainer::TcxMouseButton Button, System::Classes::TShiftState Shift, Cxedit::TcxCustomEditViewInfo* AViewInfo, bool AIsMouseEvent);
	virtual void __fastcall EditValueToDrawValue(const System::Variant &AEditValue, Cxedit::TcxCustomEditViewInfo* AViewInfo);
	__property TcxCustomRadioGroupProperties* Properties = {read=GetProperties};
public:
	/* TcxCustomEditViewData.Create */ inline __fastcall virtual TcxCustomRadioGroupViewData(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditStyle* AStyle, bool AIsInplace) : Cxgroupbox::TcxButtonGroupViewData(AProperties, AStyle, AIsInplace) { }
	/* TcxCustomEditViewData.Destroy */ inline __fastcall virtual ~TcxCustomRadioGroupViewData() { }
	
};


class PASCALIMPLEMENTATION TcxRadioGroupItem : public Cxgroupbox::TcxButtonGroupItem
{
	typedef Cxgroupbox::TcxButtonGroupItem inherited;
	
private:
	System::Variant FValue;
	bool __fastcall IsValueStored();
	void __fastcall SetValue(const System::Variant &Value);
	
public:
	__fastcall virtual TcxRadioGroupItem(System::Classes::TCollection* Collection);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property Caption = {default=0};
	__property System::Variant Value = {read=FValue, write=SetValue, stored=IsValueStored};
	__property Tag;
public:
	/* TcxButtonGroupItem.Destroy */ inline __fastcall virtual ~TcxRadioGroupItem() { }
	
};


class PASCALIMPLEMENTATION TcxRadioGroupItems : public Cxgroupbox::TcxButtonGroupItems
{
	typedef Cxgroupbox::TcxButtonGroupItems inherited;
	
public:
	TcxRadioGroupItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TcxRadioGroupItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TcxRadioGroupItem* Value);
	
public:
	HIDESBASE TcxRadioGroupItem* __fastcall Add();
	__property TcxRadioGroupItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TcxOwnedInterfacedCollection.Destroy */ inline __fastcall virtual ~TcxRadioGroupItems() { }
	
public:
	/* TOwnedCollection.Create */ inline __fastcall TcxRadioGroupItems(System::Classes::TPersistent* AOwner, System::Classes::TCollectionItemClass ItemClass) : Cxgroupbox::TcxButtonGroupItems(AOwner, ItemClass) { }
	
};


class PASCALIMPLEMENTATION TcxCustomRadioGroupProperties : public Cxgroupbox::TcxCustomButtonGroupProperties
{
	typedef Cxgroupbox::TcxCustomButtonGroupProperties inherited;
	
private:
	System::WideString FDefaultCaption;
	System::Variant FDefaultValue;
	System::Variant __fastcall GetButtonValue(int AIndex);
	TcxRadioGroupItems* __fastcall GetItems();
	bool __fastcall IsDefaultCaptionStored();
	bool __fastcall IsDefaultValueStored();
	void __fastcall SetDefaultValue(const System::Variant &Value);
	HIDESBASE void __fastcall SetItems(TcxRadioGroupItems* Value);
	
protected:
	virtual Cxgroupbox::TcxButtonGroupItems* __fastcall CreateItems();
	virtual void __fastcall DoAssign(Cxedit::TcxCustomEditProperties* AProperties);
	virtual int __fastcall GetColumnCount();
	__classmethod virtual Cxedit::TcxCustomEditViewDataClass __fastcall GetViewDataClass();
	virtual bool __fastcall HasDisplayValue();
	
public:
	__fastcall virtual TcxCustomRadioGroupProperties(System::Classes::TPersistent* AOwner);
	virtual bool __fastcall CanCompareEditValue();
	virtual bool __fastcall CompareDisplayValues(const System::Variant &AEditValue1, const System::Variant &AEditValue2);
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	virtual System::UnicodeString __fastcall GetDisplayText(const System::Variant &AEditValue, bool AFullText = false, bool AIsInplace = true);
	int __fastcall GetRadioGroupItemIndex(const System::Variant &AEditValue);
	virtual Cxedit::TcxEditSpecialFeatures __fastcall GetSpecialFeatures();
	virtual Cxedit::TcxEditSupportedOperations __fastcall GetSupportedOperations();
	__classmethod virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
	virtual bool __fastcall IsResetEditClass();
	virtual void __fastcall PrepareDisplayValue(const System::Variant &AEditValue, System::Variant &DisplayValue, bool AEditFocused);
	__property System::WideString DefaultCaption = {read=FDefaultCaption, write=FDefaultCaption, stored=IsDefaultCaptionStored};
	__property System::Variant DefaultValue = {read=FDefaultValue, write=SetDefaultValue, stored=IsDefaultValueStored};
	__property TcxRadioGroupItems* Items = {read=GetItems, write=SetItems};
public:
	/* TcxCustomButtonGroupProperties.Destroy */ inline __fastcall virtual ~TcxCustomRadioGroupProperties() { }
	
};


class PASCALIMPLEMENTATION TcxRadioGroupProperties : public TcxCustomRadioGroupProperties
{
	typedef TcxCustomRadioGroupProperties inherited;
	
__published:
	__property AssignedValues;
	__property ClearKey = {default=0};
	__property Columns = {default=1};
	__property DefaultCaption = {default=0};
	__property DefaultValue = {default=0};
	__property ImmediatePost = {default=0};
	__property Items;
	__property ReadOnly;
	__property ShowEndEllipsis = {default=0};
	__property WordWrap = {default=0};
	__property OnChange;
	__property OnEditValueChanged;
public:
	/* TcxCustomRadioGroupProperties.Create */ inline __fastcall virtual TcxRadioGroupProperties(System::Classes::TPersistent* AOwner) : TcxCustomRadioGroupProperties(AOwner) { }
	
public:
	/* TcxCustomButtonGroupProperties.Destroy */ inline __fastcall virtual ~TcxRadioGroupProperties() { }
	
};


class PASCALIMPLEMENTATION TcxCustomRadioGroupButton : public TcxRadioButton
{
	typedef TcxRadioButton inherited;
	
private:
	bool FFocusingByMouse;
	bool FInternalSettingChecked;
	bool FIsClickLocked;
	TcxCustomRadioGroup* __fastcall GetRadioGroup();
	HIDESBASE MESSAGE void __fastcall CNCommand(Winapi::Messages::TWMCommand &Message);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Message);
	
protected:
	virtual void __fastcall CorrectTextRect(System::Types::TRect &R, bool ANativeStyle);
	DYNAMIC void __fastcall DoEnter();
	DYNAMIC void __fastcall DoExit();
	virtual void __fastcall DrawBackground(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall PrepareBackground(Cxgraphics::TcxCanvas* ACanvas);
	virtual bool __fastcall IsInplace();
	virtual bool __fastcall IsNativeBackground();
	virtual bool __fastcall IsNativeStyle();
	virtual bool __fastcall IsTransparent();
	virtual bool __fastcall IsTransparentBackground();
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall SetChecked(bool Value);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	HIDESBASE Vcl::Controls::TWinControl* __fastcall GetControl();
	Cxcontainer::TcxContainer* __fastcall GetControlContainer();
	void __fastcall InternalSetChecked(bool AValue);
	__property TcxCustomRadioGroup* RadioGroup = {read=GetRadioGroup};
	
public:
	__fastcall virtual TcxCustomRadioGroupButton(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TcxCustomRadioGroupButton();
	DYNAMIC bool __fastcall ExecuteAction(System::Classes::TBasicAction* Action);
	virtual bool __fastcall UpdateAction(System::Classes::TBasicAction* Action);
	DYNAMIC bool __fastcall CanFocus();
	virtual void __fastcall DefaultHandler(void *Message);
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomRadioGroupButton(HWND ParentWindow) : TcxRadioButton(ParentWindow) { }
	
private:
	void *__IcxContainerInnerControl;	// Cxcontainer::IcxContainerInnerControl 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {1B111318-D9C9-4C35-9EFF-5D95793C0106}
	operator Cxcontainer::_di_IcxContainerInnerControl()
	{
		Cxcontainer::_di_IcxContainerInnerControl intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxcontainer::IcxContainerInnerControl*(void) { return (Cxcontainer::IcxContainerInnerControl*)&__IcxContainerInnerControl; }
	#endif
	
};


typedef System::TMetaClass* TcxCustomRadioGroupButtonClass;

class PASCALIMPLEMENTATION TcxCustomRadioGroup : public Cxgroupbox::TcxCustomButtonGroup
{
	typedef Cxgroupbox::TcxCustomButtonGroup inherited;
	
private:
	int FLoadedItemIndex;
	int __fastcall GetCheckedIndex();
	TcxCustomRadioGroupButton* __fastcall GetButton(int Index);
	HIDESBASE TcxCustomRadioGroupProperties* __fastcall GetProperties();
	HIDESBASE TcxCustomRadioGroupProperties* __fastcall GetActiveProperties();
	int __fastcall GetItemIndex();
	HIDESBASE TcxCustomRadioGroupViewInfo* __fastcall GetViewInfo();
	void __fastcall SetItemIndex(int Value);
	HIDESBASE void __fastcall SetProperties(TcxCustomRadioGroupProperties* Value);
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Winapi::Messages::TMessage &Message);
	void __fastcall ButtonClickHandler(System::TObject* Sender);
	
protected:
	DYNAMIC void __fastcall CursorChanged();
	virtual void __fastcall DoSetFocusWhenActivate();
	virtual NativeUInt __fastcall GetButtonDC(int AButtonIndex);
	virtual void __fastcall Initialize();
	virtual void __fastcall InternalSetEditValue(const System::Variant &Value, bool AValidateEditValue);
	virtual bool __fastcall IsContainerFocused();
	virtual bool __fastcall IsInternalControl(Vcl::Controls::TControl* AControl);
	virtual void __fastcall SetDragMode(System::Uitypes::TDragMode Value);
	virtual void __fastcall SynchronizeButtonsStyle();
	virtual void __fastcall ParentBackgroundChanged();
	DYNAMIC void __fastcall Resize();
	virtual void __fastcall SetDragKind(System::Uitypes::TDragKind Value);
	virtual void __fastcall ArrangeButtons();
	virtual Vcl::Controls::TWinControl* __fastcall GetButtonInstance();
	virtual void __fastcall InternalUpdateButtons();
	void __fastcall SetInternalValues(const System::Variant &AEditValue, bool AValidateEditValue, bool AFromButtonChecked);
	void __fastcall UpdateValues();
	HIDESBASE bool __fastcall IsLoading();
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall Updated();
	void __fastcall ButtonChecked(TcxCustomRadioGroupButton* AButton);
	__property TcxCustomRadioGroupViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	virtual void __fastcall Clear();
	DYNAMIC void __fastcall FlipChildren(bool AllLevels);
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	DYNAMIC void __fastcall GetTabOrderList(System::Classes::TList* List);
	virtual void __fastcall PrepareEditValue(const System::Variant &ADisplayValue, /* out */ System::Variant &EditValue, bool AEditFocused);
	virtual void __fastcall SetFocus();
	__property TcxCustomRadioGroupProperties* ActiveProperties = {read=GetActiveProperties};
	__property TcxCustomRadioGroupButton* Buttons[int Index] = {read=GetButton};
	__property int ItemIndex = {read=GetItemIndex, write=SetItemIndex, default=-1};
	__property TcxCustomRadioGroupProperties* Properties = {read=GetProperties, write=SetProperties};
	__property Transparent = {default=0};
public:
	/* TcxCustomButtonGroup.Destroy */ inline __fastcall virtual ~TcxCustomRadioGroup() { }
	
public:
	/* TcxCustomGroupBox.Create */ inline __fastcall virtual TcxCustomRadioGroup(System::Classes::TComponent* AOwner)/* overload */ : Cxgroupbox::TcxCustomButtonGroup(AOwner) { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxCustomRadioGroup(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Cxgroupbox::TcxCustomButtonGroup(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomRadioGroup(HWND ParentWindow) : Cxgroupbox::TcxCustomButtonGroup(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxRadioGroup : public TcxCustomRadioGroup
{
	typedef TcxCustomRadioGroup inherited;
	
private:
	HIDESBASE TcxRadioGroupProperties* __fastcall GetActiveProperties();
	HIDESBASE TcxRadioGroupProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(TcxRadioGroupProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TcxRadioGroupProperties* ActiveProperties = {read=GetActiveProperties};
	
__published:
	__property Alignment = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Caption = {default=0};
	__property Constraints;
	__property Ctl3D;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property ParentBackground = {default=1};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property TcxRadioGroupProperties* Properties = {read=GetProperties, write=SetProperties};
	__property ItemIndex = {default=-1};
	__property ShowHint;
	__property Style;
	__property StyleDisabled;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Transparent = {default=0};
	__property Visible = {default=1};
	__property OnClick;
	__property OnContextPopup;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEditing;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TcxCustomButtonGroup.Destroy */ inline __fastcall virtual ~TcxRadioGroup() { }
	
public:
	/* TcxCustomGroupBox.Create */ inline __fastcall virtual TcxRadioGroup(System::Classes::TComponent* AOwner)/* overload */ : TcxCustomRadioGroup(AOwner) { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxRadioGroup(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : TcxCustomRadioGroup(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxRadioGroup(HWND ParentWindow) : TcxCustomRadioGroup(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxFilterRadioGroupHelper : public Cxdropdownedit::TcxFilterComboBoxHelper
{
	typedef Cxdropdownedit::TcxFilterComboBoxHelper inherited;
	
public:
	__classmethod virtual void __fastcall GetFilterValue(Cxedit::TcxCustomEdit* AEdit, Cxedit::TcxCustomEditProperties* AEditProperties, System::Variant &V, Vcl::Controls::TCaption &S);
	__classmethod virtual Cxfiltercontrolutils::TcxFilterControlOperators __fastcall GetSupportedFilterOperators(Cxedit::TcxCustomEditProperties* AProperties, Cxdatastorage::TcxValueTypeClass AValueTypeClass, bool AExtendedSet = false);
	__classmethod virtual void __fastcall InitializeProperties(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditProperties* AEditProperties, bool AHasButtons);
	__classmethod virtual void __fastcall SetFilterValue(Cxedit::TcxCustomEdit* AEdit, Cxedit::TcxCustomEditProperties* AEditProperties, const System::Variant &AValue);
	__classmethod virtual bool __fastcall UseDisplayValue();
public:
	/* TObject.Create */ inline __fastcall TcxFilterRadioGroupHelper() : Cxdropdownedit::TcxFilterComboBoxHelper() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxFilterRadioGroupHelper() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Cxradiogroup */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXRADIOGROUP)
using namespace Cxradiogroup;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxradiogroupHPP
