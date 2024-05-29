// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxToggleSwitch.pas' rev: 35.00 (Windows)

#ifndef DxtoggleswitchHPP
#define DxtoggleswitchHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.ImgList.hpp>
#include <cxGraphics.hpp>
#include <dxGDIPlusClasses.hpp>
#include <cxGeometry.hpp>
#include <cxControls.hpp>
#include <cxLookAndFeels.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxClasses.hpp>
#include <cxContainer.hpp>
#include <cxEditConsts.hpp>
#include <cxEdit.hpp>
#include <cxCheckBox.hpp>
#include <dxFading.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxtoggleswitch
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TdxToggleSwitchThumbFadingHelper;
class DELPHICLASS TdxToggleSwitchStateIndicator;
class DELPHICLASS TdxCustomToggleSwitchProperties;
class DELPHICLASS TdxCustomToggleSwitchViewData;
class DELPHICLASS TdxCustomToggleSwitchViewInfo;
class DELPHICLASS TdxCustomToggleSwitch;
class DELPHICLASS TdxToggleSwitchProperties;
class DELPHICLASS TdxToggleSwitch;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxToggleSwitchThumbFadingHelper : public Cxcheckbox::TcxCustomCheckControlFadingHelper
{
	typedef Cxcheckbox::TcxCustomCheckControlFadingHelper inherited;
	
private:
	TdxCustomToggleSwitchViewInfo* __fastcall GetToggleSwitchViewInfo();
	
protected:
	virtual void __fastcall GetFadingImages(/* out */ Cxgraphics::TcxBitmap* &AFadeOutImage, /* out */ Cxgraphics::TcxBitmap* &AFadeInImage);
	
public:
	virtual void __fastcall Invalidate()/* overload */;
public:
	/* TcxCustomCheckControlFadingHelper.Create */ inline __fastcall virtual TdxToggleSwitchThumbFadingHelper(Cxcheckbox::TcxCustomCheckBoxViewInfo* AViewInfo) : Cxcheckbox::TcxCustomCheckControlFadingHelper(AViewInfo) { }
	
public:
	/* TdxFadingObjectHelper.Destroy */ inline __fastcall virtual ~TdxToggleSwitchThumbFadingHelper() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Invalidate(const System::Types::TRect &R, bool AEraseBackground){ Cxedit::TcxCustomEditFadingHelper::Invalidate(R, AEraseBackground); }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TdxToggleSwitchStateIndicatorPosition : unsigned char { sipOutside, sipInside };

enum DECLSPEC_DENUM TdxToggleSwitchStateIndicatorKind : unsigned char { sikNone, sikText, sikGlyph };

class PASCALIMPLEMENTATION TdxToggleSwitchStateIndicator : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Classes::TNotifyEvent FOnChanged;
	Dxgdiplusclasses::TdxSmartGlyph* FOffGlyph;
	System::UnicodeString FOffText;
	Dxgdiplusclasses::TdxSmartGlyph* FOnGlyph;
	System::UnicodeString FOnText;
	TdxToggleSwitchStateIndicatorPosition FPosition;
	TdxToggleSwitchStateIndicatorKind FKind;
	void __fastcall GlyphChangeHandler(System::TObject* Sender);
	bool __fastcall IsOffTextStored();
	bool __fastcall IsOnTextStored();
	void __fastcall SetKind(TdxToggleSwitchStateIndicatorKind AValue);
	void __fastcall SetOffGlyph(Dxgdiplusclasses::TdxSmartGlyph* AValue);
	void __fastcall SetOffText(const System::UnicodeString AValue);
	void __fastcall SetOnGlyph(Dxgdiplusclasses::TdxSmartGlyph* AValue);
	void __fastcall SetOnText(const System::UnicodeString AValue);
	void __fastcall SetPosition(TdxToggleSwitchStateIndicatorPosition AValue);
	void __fastcall Changed();
	
protected:
	__property System::Classes::TNotifyEvent OnChanged = {read=FOnChanged, write=FOnChanged};
	
public:
	__fastcall virtual TdxToggleSwitchStateIndicator();
	__fastcall virtual ~TdxToggleSwitchStateIndicator();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property TdxToggleSwitchStateIndicatorKind Kind = {read=FKind, write=SetKind, default=0};
	__property Dxgdiplusclasses::TdxSmartGlyph* OffGlyph = {read=FOffGlyph, write=SetOffGlyph};
	__property System::UnicodeString OffText = {read=FOffText, write=SetOffText, stored=IsOffTextStored};
	__property Dxgdiplusclasses::TdxSmartGlyph* OnGlyph = {read=FOnGlyph, write=SetOnGlyph};
	__property System::UnicodeString OnText = {read=FOnText, write=SetOnText, stored=IsOnTextStored};
	__property TdxToggleSwitchStateIndicatorPosition Position = {read=FPosition, write=SetPosition, default=0};
};


class PASCALIMPLEMENTATION TdxCustomToggleSwitchProperties : public Cxcheckbox::TcxCustomCheckBoxProperties
{
	typedef Cxcheckbox::TcxCustomCheckBoxProperties inherited;
	
private:
	bool FSmoothToggle;
	TdxToggleSwitchStateIndicator* FStateText;
	void __fastcall SetSmoothToggle(bool AValue);
	void __fastcall SetStateText(TdxToggleSwitchStateIndicator* AValue);
	
protected:
	__classmethod virtual Cxedit::TcxCustomEditViewDataClass __fastcall GetViewDataClass();
	void __fastcall StateTextChangedHandler(System::TObject* Sender);
	virtual void __fastcall DoAssign(Cxedit::TcxCustomEditProperties* AProperties);
	__property bool SmoothToggle = {read=FSmoothToggle, write=SetSmoothToggle, default=1};
	__property TdxToggleSwitchStateIndicator* StateIndicator = {read=FStateText, write=SetStateText};
	
public:
	__fastcall virtual TdxCustomToggleSwitchProperties(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TdxCustomToggleSwitchProperties();
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	__classmethod virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
	__property Alignment = {default=1};
};


class PASCALIMPLEMENTATION TdxCustomToggleSwitchViewData : public Cxcheckbox::TcxCustomCheckBoxViewData
{
	typedef Cxcheckbox::TcxCustomCheckBoxViewData inherited;
	
private:
	int __fastcall GetDefaultHeight();
	int __fastcall GetDefaultWidth();
	HIDESBASE TdxCustomToggleSwitchProperties* __fastcall GetProperties();
	System::Types::TRect __fastcall CalculateIndicatorRect(TdxCustomToggleSwitchViewInfo* AViewInfo, const System::Types::TSize &AIndicatorSize, System::Classes::TLeftRight AAlign);
	
protected:
	virtual System::Types::TRect __fastcall CalculateCheckBoxRect(Cxcheckbox::TcxCustomCheckBoxViewInfo* AViewInfo);
	virtual Cxlookandfeelpainters::TcxEditCheckState __fastcall CalculateCheckBoxState(Cxcheckbox::TcxCustomCheckBoxViewInfo* AViewInfo, const System::Types::TPoint &P, Cxcontainer::TcxMouseButton AButton, System::Classes::TShiftState AShift);
	virtual System::Types::TRect __fastcall CalculateTextRect(Cxcheckbox::TcxCustomCheckBoxViewInfo* AViewInfo);
	virtual System::Types::TSize __fastcall InternalGetEditConstantPartSize(Cxgraphics::TcxCanvas* ACanvas, bool AIsInplace, const Cxedit::TcxEditSizeProperties &AEditSizeProperties, System::Types::TSize &MinContentSize, Cxedit::TcxCustomEditViewInfo* AViewInfo);
	virtual System::Types::TRect __fastcall CalculateOffIndicatorRect(TdxCustomToggleSwitchViewInfo* AViewInfo);
	virtual System::Types::TRect __fastcall CalculateOnIndicatorRect(TdxCustomToggleSwitchViewInfo* AViewInfo);
	virtual void __fastcall CalculateStateIndicatorRectSizes(TdxCustomToggleSwitchViewInfo* AViewInfo);
	virtual void __fastcall CalculateStateIndicatorSizes(TdxCustomToggleSwitchViewInfo* AViewInfo);
	virtual System::Types::TRect __fastcall CalculateThumbBounds(TdxCustomToggleSwitchViewInfo* AViewInfo);
	virtual System::Types::TSize __fastcall CalculateToggleSwitchSize(TdxCustomToggleSwitchViewInfo* AViewInfo);
	virtual int __fastcall GetStateIndicatorGap(TdxCustomToggleSwitchViewInfo* AViewInfo);
	
public:
	virtual void __fastcall Calculate(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TPoint &P, Cxcontainer::TcxMouseButton Button, System::Classes::TShiftState Shift, Cxedit::TcxCustomEditViewInfo* AViewInfo, bool AIsMouseEvent);
	virtual System::Types::TRect __fastcall GetBorderExtent();
	virtual int __fastcall GetTextGap(bool AIsInplace, bool ANativeStyle, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Types::TRect __fastcall GetContentOffset(bool AIsCaptionVisible);
	__property TdxCustomToggleSwitchProperties* Properties = {read=GetProperties};
public:
	/* TcxCustomEditViewData.Create */ inline __fastcall virtual TdxCustomToggleSwitchViewData(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditStyle* AStyle, bool AIsInplace) : Cxcheckbox::TcxCustomCheckBoxViewData(AProperties, AStyle, AIsInplace) { }
	/* TcxCustomEditViewData.Destroy */ inline __fastcall virtual ~TdxCustomToggleSwitchViewData() { }
	
};


class PASCALIMPLEMENTATION TdxCustomToggleSwitchViewInfo : public Cxcheckbox::TcxCustomCheckBoxViewInfo
{
	typedef Cxcheckbox::TcxCustomCheckBoxViewInfo inherited;
	
private:
	System::Types::TRect FThumbBounds;
	bool FThumbCapture;
	int FThumbDelta;
	System::Types::TRect FToggleSwitchBounds;
	Dxgdiplusclasses::TdxSmartGlyph* FOffGlyph;
	System::UnicodeString FOffText;
	System::Types::TRect FOffIndicatorRect;
	Dxgdiplusclasses::TdxSmartGlyph* FOnGlyph;
	System::UnicodeString FOnText;
	System::Types::TRect FOnIndicatorRect;
	TdxToggleSwitchStateIndicatorPosition FStateIndicatorPosition;
	TdxToggleSwitchStateIndicatorKind FStateIndicatorKind;
	int __fastcall GetThumbDelta();
	int __fastcall GetThumbMaxDelta();
	Cxlookandfeelpainters::TcxButtonState __fastcall GetThumbState();
	int __fastcall GetThumbStepAnimation();
	
protected:
	System::Types::TSize OffIndicatorRectSize;
	System::Types::TSize OffIndicatorSize;
	System::Types::TSize OnIndicatorRectSize;
	System::Types::TSize OnIndicatorSize;
	int __fastcall GetLeftIndicatorWidth();
	int __fastcall GetRightIndicatorWidth();
	__classmethod virtual bool __fastcall IsOldStyleSupported();
	__classmethod virtual System::Types::TRect __fastcall GetContentOffset(bool AIsInplace, bool AIsCaptionVisible, System::Classes::TLeftRight AItemAlignment, Cxgeometry::TdxScaleFactor* AScaleFactor);
	__classmethod virtual int __fastcall GetTextGap(bool AIsInplace, bool ANativeStyle, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall InternalPaint(Cxgraphics::TcxCanvas* ACanvas);
	virtual Cxcheckbox::TcxCheckControlFadingHelperClass __fastcall GetCheckControlFadingHelperClass();
	virtual void __fastcall DrawStateGlyph(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawStateText(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawThumb(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &AClientRect, Cxlookandfeelpainters::TcxButtonState AState);
	virtual bool __fastcall NeedShowOffIndicator();
	virtual bool __fastcall NeedShowOnIndicator();
	__property System::UnicodeString OffText = {read=FOffText, write=FOffText};
	__property System::Types::TRect OffIndicatorRect = {read=FOffIndicatorRect, write=FOffIndicatorRect};
	__property System::UnicodeString OnText = {read=FOnText, write=FOnText};
	__property System::Types::TRect OnIndicatorRect = {read=FOnIndicatorRect, write=FOnIndicatorRect};
	__property TdxToggleSwitchStateIndicatorPosition StateIndicatorPosition = {read=FStateIndicatorPosition, write=FStateIndicatorPosition, nodefault};
	__property TdxToggleSwitchStateIndicatorKind StateIndicatorKind = {read=FStateIndicatorKind, write=FStateIndicatorKind, nodefault};
	__property Cxlookandfeelpainters::TcxButtonState ThumbState = {read=GetThumbState, nodefault};
	
public:
	virtual void __fastcall Offset(int DX, int DY);
	__property System::Types::TRect ThumbBounds = {read=FThumbBounds, write=FThumbBounds};
	__property bool ThumbCapture = {read=FThumbCapture, write=FThumbCapture, nodefault};
	__property int ThumbDelta = {read=GetThumbDelta, write=FThumbDelta, nodefault};
	__property int ThumbMaxDelta = {read=GetThumbMaxDelta, nodefault};
	__property int ThumbStepAnimation = {read=GetThumbStepAnimation, nodefault};
	__property System::Types::TRect ToggleSwitchBounds = {read=FToggleSwitchBounds, write=FToggleSwitchBounds};
public:
	/* TcxCustomCheckBoxViewInfo.Create */ inline __fastcall virtual TdxCustomToggleSwitchViewInfo() : Cxcheckbox::TcxCustomCheckBoxViewInfo() { }
	/* TcxCustomCheckBoxViewInfo.Destroy */ inline __fastcall virtual ~TdxCustomToggleSwitchViewInfo() { }
	
};


class PASCALIMPLEMENTATION TdxCustomToggleSwitch : public Cxcheckbox::TcxCustomCheckBox
{
	typedef Cxcheckbox::TcxCustomCheckBox inherited;
	
private:
	int FPrevMousePos;
	bool FThumbDragged;
	Cxclasses::TcxTimer* FTimer;
	HIDESBASE TdxCustomToggleSwitchProperties* __fastcall GetActiveProperties();
	HIDESBASE TdxCustomToggleSwitchProperties* __fastcall GetProperties();
	HIDESBASE TdxCustomToggleSwitchViewInfo* __fastcall GetViewInfo();
	HIDESBASE void __fastcall SetProperties(TdxCustomToggleSwitchProperties* Value);
	
protected:
	virtual void __fastcall DoProcessEventsOnViewInfoChanging();
	virtual void __fastcall Initialize();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall StartAnimation();
	void __fastcall StopAnimation();
	void __fastcall TimerHandler(System::TObject* Sender);
	virtual System::Types::TRect __fastcall GetShadowBounds();
	__property TdxCustomToggleSwitchProperties* ActiveProperties = {read=GetActiveProperties};
	__property TdxCustomToggleSwitchProperties* Properties = {read=GetProperties, write=SetProperties};
	__property TdxCustomToggleSwitchViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	__fastcall virtual ~TdxCustomToggleSwitch();
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TdxCustomToggleSwitch(System::Classes::TComponent* AOwner)/* overload */ : Cxcheckbox::TcxCustomCheckBox(AOwner) { }
	/* TcxCustomEdit.Create */ inline __fastcall virtual TdxCustomToggleSwitch(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Cxcheckbox::TcxCustomCheckBox(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxCustomToggleSwitch(HWND ParentWindow) : Cxcheckbox::TcxCustomCheckBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TdxToggleSwitchProperties : public TdxCustomToggleSwitchProperties
{
	typedef TdxCustomToggleSwitchProperties inherited;
	
__published:
	__property Alignment = {default=1};
	__property AssignedValues;
	__property ClearKey = {default=0};
	__property DisplayChecked = {index=1, default=0};
	__property DisplayUnchecked = {index=0, default=0};
	__property DisplayGrayed = {index=2, default=0};
	__property FullFocusRect = {default=0};
	__property ImmediatePost = {default=0};
	__property MultiLine = {default=0};
	__property ReadOnly;
	__property ShowEndEllipsis = {default=0};
	__property StateIndicator;
	__property UseAlignmentWhenInplace = {default=0};
	__property ValidationErrorIconAlignment = {default=0};
	__property ValidationOptions = {default=1};
	__property ValueChecked = {default=0};
	__property ValueGrayed = {default=0};
	__property ValueUnchecked = {default=0};
	__property OnChange;
	__property OnEditValueChanged;
	__property OnValidate;
public:
	/* TdxCustomToggleSwitchProperties.Create */ inline __fastcall virtual TdxToggleSwitchProperties(System::Classes::TPersistent* AOwner) : TdxCustomToggleSwitchProperties(AOwner) { }
	/* TdxCustomToggleSwitchProperties.Destroy */ inline __fastcall virtual ~TdxToggleSwitchProperties() { }
	
};


class PASCALIMPLEMENTATION TdxToggleSwitch : public TdxCustomToggleSwitch
{
	typedef TdxCustomToggleSwitch inherited;
	
private:
	HIDESBASE TdxToggleSwitchProperties* __fastcall GetActiveProperties();
	HIDESBASE TdxToggleSwitchProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(TdxToggleSwitchProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TdxToggleSwitchProperties* ActiveProperties = {read=GetActiveProperties};
	
__published:
	__property Action;
	__property Anchors = {default=3};
	__property AutoSize = {default=1};
	__property BiDiMode;
	__property Caption = {default=0};
	__property Checked;
	__property Constraints;
	__property Enabled = {default=1};
	__property ParentBackground = {default=1};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property TdxToggleSwitchProperties* Properties = {read=GetProperties, write=SetProperties};
	__property ShowHint;
	__property Style;
	__property StyleDisabled;
	__property StyleFocused;
	__property StyleHot;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Transparent = {default=0};
	__property Visible = {default=1};
	__property OnClick;
	__property OnContextPopup;
	__property OnEditing;
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
public:
	/* TdxCustomToggleSwitch.Destroy */ inline __fastcall virtual ~TdxToggleSwitch() { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TdxToggleSwitch(System::Classes::TComponent* AOwner)/* overload */ : TdxCustomToggleSwitch(AOwner) { }
	/* TcxCustomEdit.Create */ inline __fastcall virtual TdxToggleSwitch(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : TdxCustomToggleSwitch(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxToggleSwitch(HWND ParentWindow) : TdxCustomToggleSwitch(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dxtoggleswitch */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXTOGGLESWITCH)
using namespace Dxtoggleswitch;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxtoggleswitchHPP
