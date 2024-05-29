// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxLabel.pas' rev: 35.00 (Windows)

#ifndef CxlabelHPP
#define CxlabelHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>
#include <System.Variants.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <cxClasses.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Generics.Collections.hpp>
#include <dxCore.hpp>
#include <cxContainer.hpp>
#include <cxControls.hpp>
#include <cxGraphics.hpp>
#include <cxDataUtils.hpp>
#include <dxGDIPlusClasses.hpp>
#include <cxEdit.hpp>
#include <cxExtEditConsts.hpp>
#include <cxTextEdit.hpp>
#include <cxVariants.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxAccessibility.hpp>
#include <dxCoreClasses.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxlabel
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxLabelEditStyle;
class DELPHICLASS TcxLabelLineOptions;
class DELPHICLASS TcxCustomLabelViewInfo;
class DELPHICLASS TcxCustomLabelViewData;
class DELPHICLASS TcxCustomLabelProperties;
class DELPHICLASS TcxLabelHelper;
class DELPHICLASS TcxLabelProperties;
class DELPHICLASS TdxLabelAccessibilityHelper;
class DELPHICLASS TcxCustomLabel;
class DELPHICLASS TcxLabel;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TcxLabelEffect : unsigned char { cxleNormal, cxleFun, cxleExtrude, cxleCool };

enum DECLSPEC_DENUM TcxLabelLineAlignment : unsigned char { cxllaTop, cxllaCenter, cxllaBottom };

enum DECLSPEC_DENUM TcxLabelStyle : unsigned char { cxlsNormal, cxlsRaised, cxlsLowered, cxlsOutLine };

enum DECLSPEC_DENUM TcxLabelOrientation : unsigned char { cxoLeft, cxoRight, cxoTop, cxoBottom, cxoLeftTop, cxoLeftBottom, cxoRightTop, cxoRightBottom };

class PASCALIMPLEMENTATION TcxLabelEditStyle : public Cxedit::TcxEditStyle
{
	typedef Cxedit::TcxEditStyle inherited;
	
protected:
	virtual Cxlookandfeelpainters::TcxContainerBorderStyle __fastcall DefaultBorderStyle();
	virtual bool __fastcall DefaultHotTrack();
public:
	/* TcxCustomEditStyle.Create */ inline __fastcall virtual TcxLabelEditStyle(System::Classes::TPersistent* AOwner, bool ADirectAccessMode, Cxcontainer::TcxContainerStyle* AParentStyle, Cxcontainer::TcxContainerStateItem AState) : Cxedit::TcxEditStyle(AOwner, ADirectAccessMode, AParentStyle, AState) { }
	
public:
	/* TcxContainerStyle.Destroy */ inline __fastcall virtual ~TcxLabelEditStyle() { }
	
};


class PASCALIMPLEMENTATION TcxLabelLineOptions : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TcxLabelLineAlignment FAlignment;
	System::Uitypes::TColor FInnerColor;
	System::Classes::TNotifyEvent FOnChanged;
	System::Uitypes::TColor FOuterColor;
	bool FVisible;
	bool __fastcall GetIsCustomColorsAssigned();
	void __fastcall SetAlignment(TcxLabelLineAlignment AValue);
	void __fastcall SetInnerColor(System::Uitypes::TColor AValue);
	void __fastcall SetOuterColor(System::Uitypes::TColor AValue);
	void __fastcall SetVisible(bool AValue);
	
protected:
	virtual void __fastcall Changed();
	__property bool IsCustomColorsAssigned = {read=GetIsCustomColorsAssigned, nodefault};
	__property System::Classes::TNotifyEvent OnChanged = {read=FOnChanged, write=FOnChanged};
	
public:
	__fastcall virtual TcxLabelLineOptions();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property TcxLabelLineAlignment Alignment = {read=FAlignment, write=SetAlignment, default=1};
	__property System::Uitypes::TColor InnerColor = {read=FInnerColor, write=SetInnerColor, default=536870912};
	__property System::Uitypes::TColor OuterColor = {read=FOuterColor, write=SetOuterColor, default=536870912};
	__property bool Visible = {read=FVisible, write=SetVisible, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxLabelLineOptions() { }
	
};


class PASCALIMPLEMENTATION TcxCustomLabelViewInfo : public Cxtextedit::TcxCustomTextEditViewInfo
{
	typedef Cxtextedit::TcxCustomTextEditViewInfo inherited;
	
private:
	Cxedit::TcxEditAlignment* FAlignment;
	int FAngle;
	System::Word FDepth;
	System::Types::TSize FDepthDeltaSize;
	Vcl::Graphics::TBitmap* FGlyph;
	TcxLabelEffect FLabelEffect;
	TcxLabelStyle FLabelStyle;
	int FLabelStyleOffset;
	System::Uitypes::TColor FLineInnerColor;
	Dxcore::TdxOrientation FLineOrientation;
	System::Uitypes::TColor FLineOuterColor;
	System::Types::TRect FLineRect;
	TcxLabelOrientation FOrientation;
	int FPenWidth;
	System::Uitypes::TColor FShadowedColor;
	bool FWordWrap;
	bool __fastcall HasEffects();
	
protected:
	System::StaticArray<Cxedit::TdxCachedSize, 2> FTextSizes;
	virtual System::Uitypes::TColor __fastcall GetSkinnedTextColor(Cxlookandfeelpainters::TcxEditStateColorKind AKind);
	virtual void __fastcall InternalDrawBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R);
	bool __fastcall IsPaintOnGlass();
	void __fastcall SetGlyph(Vcl::Graphics::TGraphic* AGlyph);
	__property Cxedit::TcxEditAlignment* Alignment = {read=FAlignment, write=FAlignment};
	__property int Angle = {read=FAngle, write=FAngle, nodefault};
	__property System::Word Depth = {read=FDepth, write=FDepth, nodefault};
	__property System::Types::TSize DepthDeltaSize = {read=FDepthDeltaSize, write=FDepthDeltaSize};
	__property TcxLabelEffect LabelEffect = {read=FLabelEffect, write=FLabelEffect, nodefault};
	__property TcxLabelStyle LabelStyle = {read=FLabelStyle, write=FLabelStyle, nodefault};
	__property int LabelStyleOffset = {read=FLabelStyleOffset, write=FLabelStyleOffset, nodefault};
	__property System::Uitypes::TColor LineInnerColor = {read=FLineInnerColor, write=FLineInnerColor, nodefault};
	__property Dxcore::TdxOrientation LineOrientation = {read=FLineOrientation, write=FLineOrientation, nodefault};
	__property System::Uitypes::TColor LineOuterColor = {read=FLineOuterColor, write=FLineOuterColor, nodefault};
	__property System::Types::TRect LineRect = {read=FLineRect, write=FLineRect};
	__property TcxLabelOrientation Orientation = {read=FOrientation, write=FOrientation, nodefault};
	__property int PenWidth = {read=FPenWidth, write=FPenWidth, nodefault};
	__property System::Uitypes::TColor ShadowedColor = {read=FShadowedColor, write=FShadowedColor, nodefault};
	__property bool WordWrap = {read=FWordWrap, write=FWordWrap, nodefault};
	
public:
	System::Types::TRect FocusRect;
	bool HasGlyph;
	System::Types::TPoint LeftTop;
	bool ShowAccelChar;
	__fastcall virtual TcxCustomLabelViewInfo();
	__fastcall virtual ~TcxCustomLabelViewInfo();
	virtual void __fastcall Offset(int DX, int DY);
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawLabel(Cxgraphics::TcxCanvas* ACanvas);
};


class PASCALIMPLEMENTATION TcxCustomLabelViewData : public Cxedit::TcxCustomEditViewData
{
	typedef Cxedit::TcxCustomEditViewData inherited;
	
private:
	TcxLabelLineOptions* __fastcall GetLineOptions();
	TcxCustomLabelProperties* __fastcall GetProperties();
	bool __fastcall GetShowEndEllipsis();
	void __fastcall CalculateLabelViewInfoProps(Cxedit::TcxCustomEditViewInfo* AViewInfo);
	
protected:
	virtual int __fastcall CalculateLabelStyleOffset(Cxgraphics::TcxCanvas* ACanvas);
	virtual System::Types::TRect __fastcall CalculateLineRect(System::Types::TRect &ATextRect, const System::Types::TRect &ABounds, TcxLabelLineAlignment AAlignment, bool AVisible, int ALineHeight, Dxcore::TdxOrientation AOrientation);
	virtual System::Types::TRect __fastcall CalculateTextRect(Cxgraphics::TcxCanvas* ACanvas, TcxCustomLabelViewInfo* AViewInfo, int ARealAngle);
	virtual System::Types::TSize __fastcall CalculateTextSize(Cxgraphics::TcxCanvas* ACanvas, TcxCustomLabelViewInfo* AViewInfo, const System::Types::TRect &R, const System::UnicodeString AText, bool AFixedWidth);
	void __fastcall CalculateViewParams(Cxgraphics::TcxCanvas* ACanvas, TcxCustomLabelViewInfo* AViewInfo);
	virtual int __fastcall GetDrawTextFlags();
	bool __fastcall GetIsEditClass();
	virtual int __fastcall GetLineHeight();
	virtual Cxedit::TcxEditPaintOptions __fastcall CalculatePaintOptions();
	virtual System::UnicodeString __fastcall InternalEditValueToDisplayText(const System::Variant &AEditValue);
	virtual bool __fastcall IsLineVisible(int ARealAngle);
	
public:
	virtual void __fastcall Calculate(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TPoint &P, Cxcontainer::TcxMouseButton Button, System::Classes::TShiftState Shift, Cxedit::TcxCustomEditViewInfo* AViewInfo, bool AIsMouseEvent);
	virtual void __fastcall EditValueToDrawValue(const System::Variant &AEditValue, Cxedit::TcxCustomEditViewInfo* AViewInfo);
	virtual System::Types::TSize __fastcall GetEditContentSize(Cxgraphics::TcxCanvas* ACanvas, const System::Variant &AEditValue, const Cxedit::TcxEditSizeProperties &AEditSizeProperties, Cxedit::TcxEditValidateInfo* AErrorData = (Cxedit::TcxEditValidateInfo*)(0x0));
	__property TcxLabelLineOptions* LineOptions = {read=GetLineOptions};
	__property TcxCustomLabelProperties* Properties = {read=GetProperties};
	__property bool ShowEndEllipsis = {read=GetShowEndEllipsis, nodefault};
public:
	/* TcxCustomEditViewData.Create */ inline __fastcall virtual TcxCustomLabelViewData(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditStyle* AStyle, bool AIsInplace) : Cxedit::TcxCustomEditViewData(AProperties, AStyle, AIsInplace) { }
	/* TcxCustomEditViewData.Destroy */ inline __fastcall virtual ~TcxCustomLabelViewData() { }
	
};


class PASCALIMPLEMENTATION TcxCustomLabelProperties : public Cxedit::TcxCustomEditProperties
{
	typedef Cxedit::TcxCustomEditProperties inherited;
	
private:
	int FAngle;
	System::Word FDepth;
	Dxgdiplusclasses::TdxSmartGlyph* FGlyph;
	TcxLabelEffect FLabelEffect;
	TcxLabelStyle FLabelStyle;
	TcxLabelLineOptions* FLineOptions;
	TcxLabelOrientation FOrientation;
	int FPenWidth;
	System::Uitypes::TColor FShadowedColor;
	bool FShowAccelChar;
	bool FShowEndEllipsis;
	bool FWordWrap;
	void __fastcall SetAngle(int Value);
	void __fastcall SetDepth(System::Word Value);
	void __fastcall SetLabelEffect(TcxLabelEffect Value);
	void __fastcall SetLabelStyle(TcxLabelStyle Value);
	void __fastcall SetLineOptions(TcxLabelLineOptions* AValue);
	void __fastcall SetOrientation(TcxLabelOrientation Value);
	void __fastcall SetPenWidth(int Value);
	void __fastcall SetShadowedColor(System::Uitypes::TColor Value);
	void __fastcall SetGlyph(Dxgdiplusclasses::TdxSmartGlyph* Value);
	void __fastcall SetShowAccelChar(bool Value);
	void __fastcall SetShowEndEllipsis(bool Value);
	void __fastcall SetWordWrap(bool Value);
	bool __fastcall HasEffects();
	
protected:
	virtual void __fastcall ChangeScale(int M, int D);
	virtual void __fastcall DoAssign(Cxedit::TcxCustomEditProperties* AProperties);
	__classmethod virtual Cxedit::TcxCustomEditViewDataClass __fastcall GetViewDataClass();
	virtual bool __fastcall HasDisplayValue();
	virtual Cxedit::TcxEditDisplayFormatOptions __fastcall GetDisplayFormatOptions();
	virtual System::Types::TSize __fastcall CalculateDepthDelta();
	
public:
	__fastcall virtual TcxCustomLabelProperties(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TcxCustomLabelProperties();
	virtual bool __fastcall CanCompareEditValue();
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	__classmethod virtual Cxedit::TcxCustomEditStyleClass __fastcall GetStyleClass();
	virtual System::UnicodeString __fastcall GetDisplayText(const System::Variant &AEditValue, bool AFullText = false, bool AIsInplace = true);
	virtual Cxedit::TcxEditSupportedOperations __fastcall GetSupportedOperations();
	__classmethod virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
	virtual bool __fastcall IsEditValueValid(System::Variant &EditValue, bool AEditFocused);
	virtual void __fastcall PrepareDisplayValue(const System::Variant &AEditValue, System::Variant &DisplayValue, bool AEditFocused);
	virtual Cxdatautils::TcxDataEditValueSource __fastcall GetEditValueSource(bool AEditFocused);
	__property int Angle = {read=FAngle, write=SetAngle, default=0};
	__property System::Word Depth = {read=FDepth, write=SetDepth, default=0};
	__property Dxgdiplusclasses::TdxSmartGlyph* Glyph = {read=FGlyph, write=SetGlyph};
	__property TcxLabelEffect LabelEffect = {read=FLabelEffect, write=SetLabelEffect, default=0};
	__property TcxLabelStyle LabelStyle = {read=FLabelStyle, write=SetLabelStyle, default=0};
	__property TcxLabelLineOptions* LineOptions = {read=FLineOptions, write=SetLineOptions};
	__property TcxLabelOrientation Orientation = {read=FOrientation, write=SetOrientation, default=7};
	__property int PenWidth = {read=FPenWidth, write=SetPenWidth, default=1};
	__property System::Uitypes::TColor ShadowedColor = {read=FShadowedColor, write=SetShadowedColor, default=-16777199};
	__property bool ShowAccelChar = {read=FShowAccelChar, write=SetShowAccelChar, default=1};
	__property bool ShowEndEllipsis = {read=FShowEndEllipsis, write=SetShowEndEllipsis, default=0};
	__property Transparent;
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, default=0};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxLabelHelper : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod System::Types::TPoint __fastcall CalculatePositionOfRotatedText(Vcl::Graphics::TCanvas* ACanvas, System::UnicodeString AText, bool AShowAccelChar, const System::Types::TRect &ADrawingRect, const System::Types::TSize &ADepthDeltaSize, int AAngle, System::Classes::TAlignment AAlignHorz, Cxedit::TcxEditVertAlignment AAlignVert)/* overload */;
	__classmethod System::Types::TPoint __fastcall CalculatePositionOfRotatedText(Vcl::Graphics::TCanvas* ACanvas, const System::UnicodeString AText, const System::Types::TRect &ADrawingRect, TcxCustomLabelProperties* AProperties)/* overload */;
public:
	/* TObject.Create */ inline __fastcall TcxLabelHelper() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxLabelHelper() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxLabelProperties : public TcxCustomLabelProperties
{
	typedef TcxCustomLabelProperties inherited;
	
__published:
	__property Alignment;
	__property Angle = {default=0};
	__property Depth = {default=0};
	__property Glyph;
	__property LabelEffect = {default=0};
	__property LabelStyle = {default=0};
	__property LineOptions;
	__property Orientation = {default=7};
	__property PenWidth = {default=1};
	__property ShadowedColor = {default=-16777199};
	__property ShowAccelChar = {default=1};
	__property ShowEndEllipsis = {default=0};
	__property Transparent;
	__property WordWrap = {default=0};
public:
	/* TcxCustomLabelProperties.Create */ inline __fastcall virtual TcxLabelProperties(System::Classes::TPersistent* AOwner) : TcxCustomLabelProperties(AOwner) { }
	/* TcxCustomLabelProperties.Destroy */ inline __fastcall virtual ~TcxLabelProperties() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLabelAccessibilityHelper : public Cxedit::TdxEditAccessibilityHelper
{
	typedef Cxedit::TdxEditAccessibilityHelper inherited;
	
protected:
	virtual int __fastcall GetRole(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual Cxaccessibility::TcxAccessibleObjectProperties __fastcall GetSupportedProperties(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
public:
	/* TdxEditAccessibilityHelper.Create */ inline __fastcall virtual TdxLabelAccessibilityHelper(System::TObject* AOwnerObject) : Cxedit::TdxEditAccessibilityHelper(AOwnerObject) { }
	/* TdxEditAccessibilityHelper.Destroy */ inline __fastcall virtual ~TdxLabelAccessibilityHelper() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxCustomLabel : public Cxedit::TcxCustomEdit
{
	typedef Cxedit::TcxCustomEdit inherited;
	
private:
	Vcl::Controls::TWinControl* FFocusControl;
	bool FLockCaption;
	TcxCustomLabelProperties* __fastcall GetProperties();
	HIDESBASE TcxCustomLabelProperties* __fastcall GetActiveProperties();
	HIDESBASE TcxLabelEditStyle* __fastcall GetStyle();
	HIDESBASE TcxCustomLabelViewInfo* __fastcall GetViewInfo();
	void __fastcall SetFocusControl(Vcl::Controls::TWinControl* Value);
	HIDESBASE void __fastcall SetProperties(TcxCustomLabelProperties* Value);
	HIDESBASE void __fastcall SetStyle(TcxLabelEditStyle* Value);
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Message);
	void __fastcall ResetCache();
	
protected:
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual bool __fastcall FadingCanFadeBackground();
	virtual Cxedit::TdxEditAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	virtual System::Uitypes::TColor __fastcall GetDefaultSkinnedTextColor(bool AEnabled);
	virtual Cxlookandfeelpainters::TcxEditStateColorKind __fastcall GetEditStateColorKind();
	virtual void __fastcall Initialize();
	virtual void __fastcall InternalSetEditValue(const System::Variant &Value, bool AValidateEditValue);
	virtual void __fastcall SetInternalDisplayValue(const System::Variant &Value);
	virtual void __fastcall DoAutoSizeChanged();
	DYNAMIC void __fastcall TextChanged();
	virtual bool __fastcall CanAutoHeight();
	virtual bool __fastcall CanAutoWidth();
	virtual bool __fastcall IsHeightDependOnWidth();
	virtual bool __fastcall CanFocusOnClick()/* overload */;
	virtual bool __fastcall DefaultParentColor();
	virtual void __fastcall PropertiesChanged(System::TObject* Sender);
	virtual bool __fastcall UseAnchorX();
	virtual bool __fastcall UseAnchorY();
	__property Vcl::Controls::TWinControl* FocusControl = {read=FFocusControl, write=SetFocusControl};
	__property TcxCustomLabelViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	__fastcall virtual ~TcxCustomLabel();
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	DYNAMIC bool __fastcall CanFocus();
	virtual int __fastcall GetTextBaseLine();
	virtual bool __fastcall HasTextBaseLine();
	__property TcxCustomLabelProperties* ActiveProperties = {read=GetActiveProperties};
	__property Caption = {default=0};
	__property TcxCustomLabelProperties* Properties = {read=GetProperties, write=SetProperties};
	__property TcxLabelEditStyle* Style = {read=GetStyle, write=SetStyle};
	__property TabOrder = {stored=false, default=-1};
	__property Transparent = {default=0};
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxCustomLabel(System::Classes::TComponent* AOwner)/* overload */ : Cxedit::TcxCustomEdit(AOwner) { }
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxCustomLabel(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Cxedit::TcxCustomEdit(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomLabel(HWND ParentWindow) : Cxedit::TcxCustomEdit(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	inline bool __fastcall  CanFocusOnClick(int X, int Y){ return Cxcontrols::TcxControl::CanFocusOnClick(X, Y); }
	
};


class PASCALIMPLEMENTATION TcxLabel : public TcxCustomLabel
{
	typedef TcxCustomLabel inherited;
	
private:
	HIDESBASE TcxLabelProperties* __fastcall GetActiveProperties();
	HIDESBASE TcxLabelProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(TcxLabelProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TcxLabelProperties* ActiveProperties = {read=GetActiveProperties};
	
__published:
	__property Anchors = {default=3};
	__property AutoSize = {default=1};
	__property BiDiMode;
	__property Caption = {default=0};
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property FocusControl;
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
	__property TcxLabelProperties* Properties = {read=GetProperties, write=SetProperties};
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
	/* TcxCustomLabel.Destroy */ inline __fastcall virtual ~TcxLabel() { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxLabel(System::Classes::TComponent* AOwner)/* overload */ : TcxCustomLabel(AOwner) { }
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxLabel(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : TcxCustomLabel(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxLabel(HWND ParentWindow) : TcxCustomLabel(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Cxlabel */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXLABEL)
using namespace Cxlabel;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxlabelHPP
