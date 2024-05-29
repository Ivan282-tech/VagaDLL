// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxFormattedLabel.pas' rev: 35.00 (Windows)

#ifndef DxformattedlabelHPP
#define DxformattedlabelHPP

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
#include <System.Variants.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <cxGraphics.hpp>
#include <cxControls.hpp>
#include <cxLookAndFeels.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxContainer.hpp>
#include <cxEdit.hpp>
#include <cxTextEdit.hpp>
#include <cxEditUtils.hpp>
#include <cxClasses.hpp>
#include <cxGeometry.hpp>
#include <dxThemeManager.hpp>
#include <cxEditConsts.hpp>
#include <cxDataUtils.hpp>
#include <dxFormattedText.hpp>
#include <cxDrawTextUtils.hpp>
#include <cxAccessibility.hpp>
#include <dxCoreClasses.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxformattedlabel
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TdxFormattedLabelEditStyle;
class DELPHICLASS TdxCustomFormattedLabelViewInfo;
class DELPHICLASS TdxCustomFormattedLabelViewData;
class DELPHICLASS TdxCustomFormattedLabelProperties;
class DELPHICLASS TdxFormattedLabelAccessibilityHelper;
class DELPHICLASS TdxCustomFormattedLabel;
class DELPHICLASS TdxFormattedLabelProperties;
class DELPHICLASS TdxFormattedLabel;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TdxFormattedLabelEditStyle : public Cxedit::TcxEditStyle
{
	typedef Cxedit::TcxEditStyle inherited;
	
protected:
	virtual Cxlookandfeelpainters::TcxContainerBorderStyle __fastcall DefaultBorderStyle();
	virtual bool __fastcall DefaultHotTrack();
public:
	/* TcxCustomEditStyle.Create */ inline __fastcall virtual TdxFormattedLabelEditStyle(System::Classes::TPersistent* AOwner, bool ADirectAccessMode, Cxcontainer::TcxContainerStyle* AParentStyle, Cxcontainer::TcxContainerStateItem AState) : Cxedit::TcxEditStyle(AOwner, ADirectAccessMode, AParentStyle, AState) { }
	
public:
	/* TcxContainerStyle.Destroy */ inline __fastcall virtual ~TdxFormattedLabelEditStyle() { }
	
};


class PASCALIMPLEMENTATION TdxCustomFormattedLabelViewInfo : public Cxtextedit::TcxCustomTextEditViewInfo
{
	typedef Cxtextedit::TcxCustomTextEditViewInfo inherited;
	
private:
	Cxedit::TcxEditAlignment* FAlignment;
	Dxformattedtext::TdxFormattedText* FFormattedText;
	System::Uitypes::TColor FHyperlinkColor;
	System::Types::TPoint FInplaceOffset;
	bool FWordWrap;
	
protected:
	virtual System::Uitypes::TCursor __fastcall GetCurrentCursor(const System::Types::TPoint &AMousePos);
	virtual System::Uitypes::TColor __fastcall GetSkinnedTextColor(Cxlookandfeelpainters::TcxEditStateColorKind AKind);
	System::UnicodeString __fastcall GetURI(int X, int Y);
	bool __fastcall IsMouseOverHyperlink(int X, int Y);
	__property Cxedit::TcxEditAlignment* Alignment = {read=FAlignment, write=FAlignment};
	__property Dxformattedtext::TdxFormattedText* FormattedText = {read=FFormattedText};
	__property System::Uitypes::TColor HyperlinkColor = {read=FHyperlinkColor, write=FHyperlinkColor, nodefault};
	__property bool WordWrap = {read=FWordWrap, write=FWordWrap, nodefault};
	
public:
	System::Types::TRect FocusRect;
	System::Types::TPoint LeftTop;
	__fastcall virtual TdxCustomFormattedLabelViewInfo();
	__fastcall virtual ~TdxCustomFormattedLabelViewInfo();
	void __fastcall DrawLabel(Cxgraphics::TcxCanvas* ACanvas);
	virtual int __fastcall GetTextBaseLine();
	virtual void __fastcall Offset(int DX, int DY);
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
};


class PASCALIMPLEMENTATION TdxCustomFormattedLabelViewData : public Cxedit::TcxCustomEditViewData
{
	typedef Cxedit::TcxCustomEditViewData inherited;
	
private:
	void __fastcall CalculateLabelViewInfoProps(TdxCustomFormattedLabelViewInfo* AViewInfo);
	TdxCustomFormattedLabelProperties* __fastcall GetProperties();
	bool __fastcall GetShowEndEllipsis();
	
protected:
	virtual Cxedit::TcxEditPaintOptions __fastcall CalculatePaintOptions();
	System::Types::TSize __fastcall CalculateTextSize(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Dxformattedtext::TdxFormattedText* AFormattedText);
	void __fastcall CalculateViewParams(Cxgraphics::TcxCanvas* ACanvas, TdxCustomFormattedLabelViewInfo* AViewInfo);
	int __fastcall GetDrawTextFlags();
	bool __fastcall GetIsEditClass();
	virtual System::UnicodeString __fastcall InternalEditValueToDisplayText(const System::Variant &AEditValue);
	
public:
	virtual void __fastcall Calculate(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TPoint &P, Cxcontainer::TcxMouseButton Button, System::Classes::TShiftState Shift, Cxedit::TcxCustomEditViewInfo* AViewInfo, bool AIsMouseEvent);
	virtual void __fastcall EditValueToDrawValue(const System::Variant &AEditValue, Cxedit::TcxCustomEditViewInfo* AViewInfo);
	virtual System::Types::TSize __fastcall GetEditContentSize(Cxgraphics::TcxCanvas* ACanvas, const System::Variant &AEditValue, const Cxedit::TcxEditSizeProperties &AEditSizeProperties, Cxedit::TcxEditValidateInfo* AErrorData = (Cxedit::TcxEditValidateInfo*)(0x0));
	__property TdxCustomFormattedLabelProperties* Properties = {read=GetProperties};
	__property bool ShowEndEllipsis = {read=GetShowEndEllipsis, nodefault};
public:
	/* TcxCustomEditViewData.Create */ inline __fastcall virtual TdxCustomFormattedLabelViewData(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditStyle* AStyle, bool AIsInplace) : Cxedit::TcxCustomEditViewData(AProperties, AStyle, AIsInplace) { }
	/* TcxCustomEditViewData.Destroy */ inline __fastcall virtual ~TdxCustomFormattedLabelViewData() { }
	
};


typedef void __fastcall (__closure *TdxFormattedLabelHyperlinkClickEvent)(System::TObject* Sender, const System::UnicodeString AURI, bool &AHandled);

typedef void __fastcall (__closure *TdxFormattedLabelHotTrackHyperlinkEvent)(System::TObject* Sender, const System::UnicodeString AURI);

class PASCALIMPLEMENTATION TdxCustomFormattedLabelProperties : public Cxedit::TcxCustomEditProperties
{
	typedef Cxedit::TcxCustomEditProperties inherited;
	
private:
	System::Uitypes::TColor FHyperlinkColor;
	bool FShowEndEllipsis;
	bool FWordWrap;
	TdxFormattedLabelHyperlinkClickEvent FOnHyperlinkClick;
	TdxFormattedLabelHotTrackHyperlinkEvent FOnHotTrackHyperlink;
	void __fastcall SetHyperlinkColor(System::Uitypes::TColor AValue);
	void __fastcall SetShowEndEllipsis(bool AValue);
	void __fastcall SetWordWrap(bool AValue);
	
protected:
	virtual void __fastcall DoAssign(Cxedit::TcxCustomEditProperties* AProperties);
	bool __fastcall DoHyperlinkClick(System::TObject* ASender, const System::UnicodeString AURI);
	void __fastcall DoHotTrackHyperlink(System::TObject* ASender, const System::UnicodeString AURI);
	virtual Cxedit::TcxEditDisplayFormatOptions __fastcall GetDisplayFormatOptions();
	__classmethod virtual Cxedit::TcxCustomEditViewDataClass __fastcall GetViewDataClass();
	virtual bool __fastcall HasDisplayValue();
	__property TdxFormattedLabelHotTrackHyperlinkEvent OnHotTrackHyperlink = {read=FOnHotTrackHyperlink, write=FOnHotTrackHyperlink};
	
public:
	__fastcall virtual TdxCustomFormattedLabelProperties(System::Classes::TPersistent* AOwner);
	virtual bool __fastcall CanCompareEditValue();
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	virtual System::UnicodeString __fastcall GetDisplayText(const System::Variant &AEditValue, bool AFullText = false, bool AIsInplace = true);
	virtual Cxdatautils::TcxDataEditValueSource __fastcall GetEditValueSource(bool AEditFocused);
	__classmethod virtual Cxedit::TcxCustomEditStyleClass __fastcall GetStyleClass();
	virtual Cxedit::TcxEditSupportedOperations __fastcall GetSupportedOperations();
	__classmethod virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
	virtual bool __fastcall IsEditValueValid(System::Variant &EditValue, bool AEditFocused);
	virtual void __fastcall PrepareDisplayValue(const System::Variant &AEditValue, System::Variant &DisplayValue, bool AEditFocused);
	__property System::Uitypes::TColor HyperlinkColor = {read=FHyperlinkColor, write=SetHyperlinkColor, default=536870912};
	__property bool ShowEndEllipsis = {read=FShowEndEllipsis, write=SetShowEndEllipsis, default=0};
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, default=0};
	__property TdxFormattedLabelHyperlinkClickEvent OnHyperlinkClick = {read=FOnHyperlinkClick, write=FOnHyperlinkClick};
public:
	/* TcxCustomEditProperties.Destroy */ inline __fastcall virtual ~TdxCustomFormattedLabelProperties() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFormattedLabelAccessibilityHelper : public Cxedit::TdxEditAccessibilityHelper
{
	typedef Cxedit::TdxEditAccessibilityHelper inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetName(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetRole(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual Cxaccessibility::TcxAccessibleObjectProperties __fastcall GetSupportedProperties(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
public:
	/* TdxEditAccessibilityHelper.Create */ inline __fastcall virtual TdxFormattedLabelAccessibilityHelper(System::TObject* AOwnerObject) : Cxedit::TdxEditAccessibilityHelper(AOwnerObject) { }
	/* TdxEditAccessibilityHelper.Destroy */ inline __fastcall virtual ~TdxFormattedLabelAccessibilityHelper() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxCustomFormattedLabel : public Cxedit::TcxCustomEdit
{
	typedef Cxedit::TcxCustomEdit inherited;
	
private:
	bool FLockCaption;
	HIDESBASE TdxCustomFormattedLabelProperties* __fastcall GetActiveProperties();
	TdxCustomFormattedLabelProperties* __fastcall GetProperties();
	HIDESBASE TdxFormattedLabelEditStyle* __fastcall GetStyle();
	HIDESBASE TdxCustomFormattedLabelViewInfo* __fastcall GetViewInfo();
	HIDESBASE void __fastcall SetProperties(TdxCustomFormattedLabelProperties* Value);
	HIDESBASE void __fastcall SetStyle(TdxFormattedLabelEditStyle* Value);
	
protected:
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Loaded();
	virtual bool __fastcall CanFocusOnClick()/* overload */;
	virtual bool __fastcall DefaultParentColor();
	virtual System::Uitypes::TColor __fastcall GetDefaultSkinnedTextColor(bool AEnabled);
	virtual Cxlookandfeelpainters::TcxEditStateColorKind __fastcall GetEditStateColorKind();
	virtual Cxcontrols::TcxControlBackgroundStyle __fastcall GetBackgroundStyle();
	virtual System::Uitypes::TCursor __fastcall GetCurrentCursor(int X, int Y);
	virtual bool __fastcall CanAutoSize();
	virtual bool __fastcall CanAutoHeight();
	virtual bool __fastcall CanAutoWidth();
	virtual bool __fastcall FadingCanFadeBackground();
	virtual Cxedit::TdxEditAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	virtual void __fastcall Initialize();
	virtual void __fastcall InternalSetEditValue(const System::Variant &Value, bool AValidateEditValue);
	virtual bool __fastcall IsHeightDependOnWidth();
	virtual void __fastcall SetInternalDisplayValue(const System::Variant &Value);
	DYNAMIC void __fastcall TextChanged();
	virtual bool __fastcall UseAnchorX();
	virtual bool __fastcall UseAnchorY();
	__property TdxCustomFormattedLabelViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	DYNAMIC bool __fastcall CanFocus();
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	virtual int __fastcall GetTextBaseLine();
	virtual bool __fastcall HasTextBaseLine();
	__property TdxCustomFormattedLabelProperties* ActiveProperties = {read=GetActiveProperties};
	__property TdxCustomFormattedLabelProperties* Properties = {read=GetProperties, write=SetProperties};
	__property TdxFormattedLabelEditStyle* Style = {read=GetStyle, write=SetStyle};
	__property TabOrder = {stored=false, default=-1};
	__property Transparent = {default=0};
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TdxCustomFormattedLabel(System::Classes::TComponent* AOwner)/* overload */ : Cxedit::TcxCustomEdit(AOwner) { }
	/* TcxCustomEdit.Create */ inline __fastcall virtual TdxCustomFormattedLabel(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Cxedit::TcxCustomEdit(AOwner, AIsInplace) { }
	/* TcxCustomEdit.Destroy */ inline __fastcall virtual ~TdxCustomFormattedLabel() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxCustomFormattedLabel(HWND ParentWindow) : Cxedit::TcxCustomEdit(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	inline bool __fastcall  CanFocusOnClick(int X, int Y){ return Cxcontrols::TcxControl::CanFocusOnClick(X, Y); }
	
};


class PASCALIMPLEMENTATION TdxFormattedLabelProperties : public TdxCustomFormattedLabelProperties
{
	typedef TdxCustomFormattedLabelProperties inherited;
	
__published:
	__property Alignment;
	__property HyperlinkColor = {default=536870912};
	__property ShowEndEllipsis = {default=0};
	__property WordWrap = {default=0};
	__property OnHyperlinkClick;
public:
	/* TdxCustomFormattedLabelProperties.Create */ inline __fastcall virtual TdxFormattedLabelProperties(System::Classes::TPersistent* AOwner) : TdxCustomFormattedLabelProperties(AOwner) { }
	
public:
	/* TcxCustomEditProperties.Destroy */ inline __fastcall virtual ~TdxFormattedLabelProperties() { }
	
};


class PASCALIMPLEMENTATION TdxFormattedLabel : public TdxCustomFormattedLabel
{
	typedef TdxCustomFormattedLabel inherited;
	
private:
	HIDESBASE TdxFormattedLabelProperties* __fastcall GetActiveProperties();
	HIDESBASE TdxFormattedLabelProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(TdxFormattedLabelProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TdxFormattedLabelProperties* ActiveProperties = {read=GetActiveProperties};
	
__published:
	__property Anchors = {default=3};
	__property AutoSize = {default=1};
	__property Caption = {default=0};
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property Style;
	__property StyleDisabled;
	__property StyleFocused;
	__property StyleHot;
	__property TdxFormattedLabelProperties* Properties = {read=GetProperties, write=SetProperties};
	__property TabOrder = {default=-1};
	__property Transparent = {default=0};
	__property Visible = {default=1};
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
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
	/* TcxCustomEdit.Create */ inline __fastcall virtual TdxFormattedLabel(System::Classes::TComponent* AOwner)/* overload */ : TdxCustomFormattedLabel(AOwner) { }
	/* TcxCustomEdit.Create */ inline __fastcall virtual TdxFormattedLabel(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : TdxCustomFormattedLabel(AOwner, AIsInplace) { }
	/* TcxCustomEdit.Destroy */ inline __fastcall virtual ~TdxFormattedLabel() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxFormattedLabel(HWND ParentWindow) : TdxCustomFormattedLabel(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dxformattedlabel */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXFORMATTEDLABEL)
using namespace Dxformattedlabel;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxformattedlabelHPP
