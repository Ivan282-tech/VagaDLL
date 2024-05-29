// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxRangeTrackBar.pas' rev: 35.00 (Windows)

#ifndef DxrangetrackbarHPP
#define DxrangetrackbarHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <System.Variants.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.StrUtils.hpp>
#include <dxCore.hpp>
#include <dxCoreClasses.hpp>
#include <cxClasses.hpp>
#include <cxContainer.hpp>
#include <cxControls.hpp>
#include <cxEdit.hpp>
#include <cxExtEditConsts.hpp>
#include <cxExtEditUtils.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxGeometry.hpp>
#include <dxThemeConsts.hpp>
#include <cxAccessibility.hpp>
#include <cxFilterControlUtils.hpp>
#include <cxGraphics.hpp>
#include <cxLookAndFeels.hpp>
#include <cxTextEdit.hpp>
#include <cxVariants.hpp>
#include <System.Math.hpp>
#include <dxCustomHint.hpp>
#include <cxTrackBar.hpp>
#include <dxFading.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxrangetrackbar
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TdxTrackBarRange;
class DELPHICLASS TdxCustomRangeTrackBarViewInfo;
class DELPHICLASS TdxRangeTrackBarLeftThumbFadingHelper;
class DELPHICLASS TdxRangeTrackBarRightThumbFadingHelper;
class DELPHICLASS TdxRangeTrackBarLeftThumbViewInfo;
class DELPHICLASS TdxRangeTrackBarRightThumbViewInfo;
class DELPHICLASS TdxRangeTrackBarViewData;
class DELPHICLASS TdxCustomRangeTrackBarProperties;
class DELPHICLASS TdxRangeTrackBarController;
class DELPHICLASS TdxRangeTrackBarAccessibilityHelper;
class DELPHICLASS TdxCustomRangeTrackBar;
class DELPHICLASS TdxRangeTrackBarProperties;
class DELPHICLASS TdxRangeTrackBar;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TdxRangeTrackBarEditValueFormat : unsigned char { revfInt64, revfString };

typedef void __fastcall (__closure *TdxRangeTrackBarGetCustomHintEvent)(System::TObject* Sender, const int AMinPosition, const int AMaxPosition, System::UnicodeString &AHintText, bool &ACanShow, bool &AIsHintMultiLine);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTrackBarRange : public Dxcoreclasses::TcxOwnedPersistent
{
	typedef Dxcoreclasses::TcxOwnedPersistent inherited;
	
private:
	TdxCustomRangeTrackBar* __fastcall GetTrackBar();
	int __fastcall GetMax();
	int __fastcall GetMin();
	void __fastcall SetMin(int AValue);
	void __fastcall SetMax(int AValue);
	
protected:
	void __fastcall DoSetMax(int AValue, bool AIsUserAction);
	void __fastcall DoSetMin(int AValue, bool AIsUserAction);
	virtual void __fastcall DoAssign(System::Classes::TPersistent* Source);
	__property TdxCustomRangeTrackBar* TrackBar = {read=GetTrackBar};
	
__published:
	__property int Max = {read=GetMax, write=SetMax, nodefault};
	__property int Min = {read=GetMin, write=SetMin, nodefault};
public:
	/* TcxOwnedPersistent.Create */ inline __fastcall virtual TdxTrackBarRange(System::Classes::TPersistent* AOwner) : Dxcoreclasses::TcxOwnedPersistent(AOwner) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxTrackBarRange() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxCustomRangeTrackBarViewInfo : public Cxtrackbar::TcxCustomTrackBarViewInfo
{
	typedef Cxtrackbar::TcxCustomTrackBarViewInfo inherited;
	
private:
	Cxtrackbar::TcxTrackBarThumbViewInfo* FLeftThumb;
	int FLeftThumbWidth;
	int FRightThumbWidth;
	Cxtrackbar::TcxTrackBarThumbViewInfo* FRightThumb;
	TdxCustomRangeTrackBarProperties* __fastcall GetRangeTrackBarProperties();
	
protected:
	virtual void __fastcall AddThumbs();
	virtual void __fastcall DoGetPositionHint(System::UnicodeString &AHintText, bool &ACanShow, bool &AIsHintMultiLine);
	virtual void __fastcall DrawCustomThumb(Cxgraphics::TcxCanvas* ACanvas);
	virtual System::Types::TRect __fastcall DrawingThumbRectToRealThumbRect(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &AThumbRect)/* overload */;
	virtual void __fastcall DrawThumb(Cxgraphics::TcxCanvas* ACanvas)/* overload */;
	void __fastcall DrawLeftThumb(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, int AState);
	void __fastcall DrawRightThumb(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, int AState);
	virtual System::UnicodeString __fastcall GetDefaultPositionHintText();
	Cxtrackbar::TcxTrackBarThumbViewInfo* __fastcall GetMaxThumb();
	Cxtrackbar::TcxTrackBarThumbViewInfo* __fastcall GetMinThumb();
	virtual bool __fastcall IsPtToTheRightFromThumb(Cxtrackbar::TcxTrackBarThumbViewInfo* AThumb, int X, int Y);
	virtual bool __fastcall IsPtToTheLeftFromThumb(Cxtrackbar::TcxTrackBarThumbViewInfo* AThumb, int X, int Y);
	virtual bool __fastcall IsTickText(int ATickValue);
	void __fastcall UpdateSelection();
	virtual void __fastcall UpdateTrackBarState();
	virtual void __fastcall UpdateValue(const System::Variant &AValue);
	__property Cxtrackbar::TcxTrackBarThumbViewInfo* LeftThumb = {read=FLeftThumb};
	__property TdxCustomRangeTrackBarProperties* RangeTrackBarProperties = {read=GetRangeTrackBarProperties};
	__property Cxtrackbar::TcxTrackBarThumbViewInfo* RightThumb = {read=FRightThumb};
	
public:
	virtual void __fastcall Assign(System::TObject* Source);
public:
	/* TcxCustomTrackBarViewInfo.Create */ inline __fastcall virtual TdxCustomRangeTrackBarViewInfo() : Cxtrackbar::TcxCustomTrackBarViewInfo() { }
	/* TcxCustomTrackBarViewInfo.Destroy */ inline __fastcall virtual ~TdxCustomRangeTrackBarViewInfo() { }
	
	/* Hoisted overloads: */
	
protected:
	inline System::Types::TRect __fastcall  DrawingThumbRectToRealThumbRect(Cxgraphics::TcxCanvas* ACanvas){ return Cxtrackbar::TcxCustomTrackBarViewInfo::DrawingThumbRectToRealThumbRect(ACanvas); }
	inline void __fastcall  DrawThumb(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, int AState){ Cxtrackbar::TcxCustomTrackBarViewInfo::DrawThumb(ACanvas, R, AState); }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxRangeTrackBarLeftThumbFadingHelper : public Cxtrackbar::TcxTrackBarThumbFadingHelper
{
	typedef Cxtrackbar::TcxTrackBarThumbFadingHelper inherited;
	
protected:
	virtual void __fastcall DrawThumb(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, int AState);
public:
	/* TcxCustomTrackBarFadingHelper.Create */ inline __fastcall virtual TdxRangeTrackBarLeftThumbFadingHelper(Cxtrackbar::TcxCustomTrackBarViewInfo* AViewInfo) : Cxtrackbar::TcxTrackBarThumbFadingHelper(AViewInfo) { }
	
public:
	/* TdxFadingObjectHelper.Destroy */ inline __fastcall virtual ~TdxRangeTrackBarLeftThumbFadingHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxRangeTrackBarRightThumbFadingHelper : public Cxtrackbar::TcxTrackBarThumbFadingHelper
{
	typedef Cxtrackbar::TcxTrackBarThumbFadingHelper inherited;
	
private:
	TdxCustomRangeTrackBarViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DrawThumb(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, int AState);
	virtual System::Types::TRect __fastcall GetThumbRect();
	__property TdxCustomRangeTrackBarViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomTrackBarFadingHelper.Create */ inline __fastcall virtual TdxRangeTrackBarRightThumbFadingHelper(Cxtrackbar::TcxCustomTrackBarViewInfo* AViewInfo) : Cxtrackbar::TcxTrackBarThumbFadingHelper(AViewInfo) { }
	
public:
	/* TdxFadingObjectHelper.Destroy */ inline __fastcall virtual ~TdxRangeTrackBarRightThumbFadingHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxRangeTrackBarLeftThumbViewInfo : public Cxtrackbar::TcxTrackBarThumbViewInfo
{
	typedef Cxtrackbar::TcxTrackBarThumbViewInfo inherited;
	
protected:
	virtual Cxtrackbar::TcxTrackBarThumbFadingHelper* __fastcall CreateFadingHelper();
public:
	/* TcxTrackBarThumbViewInfo.Create */ inline __fastcall TdxRangeTrackBarLeftThumbViewInfo(Cxtrackbar::TcxCustomTrackBarViewInfo* AViewInfo) : Cxtrackbar::TcxTrackBarThumbViewInfo(AViewInfo) { }
	/* TcxTrackBarThumbViewInfo.Destroy */ inline __fastcall virtual ~TdxRangeTrackBarLeftThumbViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxRangeTrackBarRightThumbViewInfo : public Cxtrackbar::TcxTrackBarThumbViewInfo
{
	typedef Cxtrackbar::TcxTrackBarThumbViewInfo inherited;
	
protected:
	virtual Cxtrackbar::TcxTrackBarThumbFadingHelper* __fastcall CreateFadingHelper();
public:
	/* TcxTrackBarThumbViewInfo.Create */ inline __fastcall TdxRangeTrackBarRightThumbViewInfo(Cxtrackbar::TcxCustomTrackBarViewInfo* AViewInfo) : Cxtrackbar::TcxTrackBarThumbViewInfo(AViewInfo) { }
	/* TcxTrackBarThumbViewInfo.Destroy */ inline __fastcall virtual ~TdxRangeTrackBarRightThumbViewInfo() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxRangeTrackBarViewData : public Cxtrackbar::TcxCustomTrackBarViewData
{
	typedef Cxtrackbar::TcxCustomTrackBarViewData inherited;
	
private:
	HIDESBASE TdxCustomRangeTrackBarProperties* __fastcall GetProperties();
	
protected:
	virtual void __fastcall CalculateThumbSize(Cxtrackbar::TcxCustomTrackBarViewInfo* AViewInfo);
	virtual void __fastcall CalculateThumbRect(Cxgraphics::TcxCanvas* ACanvas, Cxtrackbar::TcxCustomTrackBarViewInfo* AViewInfo);
	virtual void __fastcall UpdateSelection(Cxtrackbar::TcxCustomTrackBarViewInfo* AViewInfo);
	virtual void __fastcall UpdateValue(Cxtrackbar::TcxCustomTrackBarViewInfo* AViewInfo, const System::Variant &AValue);
	
public:
	__property TdxCustomRangeTrackBarProperties* Properties = {read=GetProperties};
public:
	/* TcxCustomEditViewData.Create */ inline __fastcall virtual TdxRangeTrackBarViewData(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditStyle* AStyle, bool AIsInplace) : Cxtrackbar::TcxCustomTrackBarViewData(AProperties, AStyle, AIsInplace) { }
	/* TcxCustomEditViewData.Destroy */ inline __fastcall virtual ~TdxRangeTrackBarViewData() { }
	
};


class PASCALIMPLEMENTATION TdxCustomRangeTrackBarProperties : public Cxtrackbar::TcxCustomTrackBarProperties
{
	typedef Cxtrackbar::TcxCustomTrackBarProperties inherited;
	
private:
	TdxRangeTrackBarEditValueFormat FEditValueFormat;
	System::WideChar FDelimiter;
	bool FShowSelection;
	Cxtrackbar::TcxDrawThumbEvent FOnDrawMaxThumb;
	TdxRangeTrackBarGetCustomHintEvent FOnGetPositionHint;
	bool __fastcall IsDelimiterStored();
	Cxtrackbar::TcxDrawThumbEvent __fastcall GetOnDrawMinThumb();
	void __fastcall SetEditValueFormat(const TdxRangeTrackBarEditValueFormat Value);
	void __fastcall SetDelimiter(const System::WideChar Value);
	void __fastcall SetShowSelection(const bool Value);
	void __fastcall SetOnDrawMinThumb(const Cxtrackbar::TcxDrawThumbEvent Value);
	
protected:
	void __fastcall CheckRange(int &AValue);
	virtual void __fastcall DoAssign(Cxedit::TcxCustomEditProperties* AProperties);
	void __fastcall DoDrawRangeMinThumb(System::TObject* Sender, Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect);
	void __fastcall DoDrawRangeMaxThumb(System::TObject* Sender, Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect);
	__int64 __fastcall EditValueToRange(const System::Variant &AEditValue)/* overload */;
	__int64 __fastcall EditValueToRange(TdxRangeTrackBarEditValueFormat AEditValueFormat, System::WideChar ADelimiter, const System::Variant &AEditValue)/* overload */;
	__classmethod virtual Cxedit::TcxCustomEditViewDataClass __fastcall GetViewDataClass();
	__property TdxRangeTrackBarEditValueFormat EditValueFormat = {read=FEditValueFormat, write=SetEditValueFormat, default=0};
	__property System::WideChar Delimiter = {read=FDelimiter, write=SetDelimiter, stored=IsDelimiterStored, nodefault};
	__property bool ShowSelection = {read=FShowSelection, write=SetShowSelection, default=1};
	__property Cxtrackbar::TcxDrawThumbEvent OnDrawRangeMaxThumb = {read=FOnDrawMaxThumb, write=FOnDrawMaxThumb};
	__property Cxtrackbar::TcxDrawThumbEvent OnDrawRangeMinThumb = {read=GetOnDrawMinThumb, write=SetOnDrawMinThumb};
	
public:
	__fastcall virtual TdxCustomRangeTrackBarProperties(System::Classes::TPersistent* AOwner);
	void __fastcall CalculateEditValueByRange(int AMin, int AMax, /* out */ System::Variant &AValue);
	void __fastcall CalculateRangeByEditValue(const System::Variant &AValue, TdxRangeTrackBarEditValueFormat AEditValueFormat, System::WideChar ADelimiter, /* out */ int &AMin, /* out */ int &AMax)/* overload */;
	void __fastcall CalculateRangeByEditValue(const System::Variant &AValue, /* out */ int &AMin, /* out */ int &AMax)/* overload */;
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	virtual Cxedit::TcxEditSupportedOperations __fastcall GetSupportedOperations();
	__classmethod virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
	virtual void __fastcall PrepareDisplayValue(const System::Variant &AEditValue, System::Variant &DisplayValue, bool AEditFocused);
	__property TdxRangeTrackBarGetCustomHintEvent OnGetPositionHint = {read=FOnGetPositionHint, write=FOnGetPositionHint};
public:
	/* TcxCustomEditProperties.Destroy */ inline __fastcall virtual ~TdxCustomRangeTrackBarProperties() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxRangeTrackBarController : public Cxtrackbar::TcxTrackBarController
{
	typedef Cxtrackbar::TcxTrackBarController inherited;
	
private:
	HIDESBASE int __fastcall GetPosition(Cxtrackbar::TcxTrackBarThumbViewInfo* AThumb);
	HIDESBASE TdxCustomRangeTrackBarViewInfo* __fastcall GetViewInfo();
	TdxTrackBarRange* __fastcall GetRange();
	HIDESBASE void __fastcall SetPosition(int AValue, Cxtrackbar::TcxTrackBarThumbViewInfo* AThumb);
	
protected:
	virtual void __fastcall UpdatePos(int AValue, Cxtrackbar::TcxTrackBarThumbViewInfo* AThumb);
	
public:
	virtual void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	__property TdxCustomRangeTrackBarViewInfo* ViewInfo = {read=GetViewInfo};
	__property TdxTrackBarRange* Range = {read=GetRange};
public:
	/* TcxTrackBarController.Create */ inline __fastcall virtual TdxRangeTrackBarController(Cxtrackbar::_di_IcxTrackBar ATrackBar) : Cxtrackbar::TcxTrackBarController(ATrackBar) { }
	/* TcxTrackBarController.Destroy */ inline __fastcall virtual ~TdxRangeTrackBarController() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxRangeTrackBarAccessibilityHelper : public Cxtrackbar::TdxTrackBarAccessibilityHelper
{
	typedef Cxtrackbar::TdxTrackBarAccessibilityHelper inherited;
	
private:
	HIDESBASE TdxCustomRangeTrackBarViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual int __fastcall GetChildCount();
	virtual int __fastcall GetRole(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual Cxaccessibility::TcxAccessibleObjectProperties __fastcall GetSupportedProperties(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual System::UnicodeString __fastcall GetValue(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual bool __fastcall IsSupportedPattern(int APatternID, /* out */ System::_di_IInterface &AProvider, Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID = (Cxaccessibility::TcxAccessibleSimpleChildElementID)(0x0));
	__property TdxCustomRangeTrackBarViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	virtual System::Types::TRect __fastcall GetScreenBounds(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
public:
	/* TdxTrackBarAccessibilityHelper.Create */ inline __fastcall virtual TdxRangeTrackBarAccessibilityHelper(System::TObject* AOwnerObject) : Cxtrackbar::TdxTrackBarAccessibilityHelper(AOwnerObject) { }
	/* TdxTrackBarAccessibilityHelper.Destroy */ inline __fastcall virtual ~TdxRangeTrackBarAccessibilityHelper() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxCustomRangeTrackBar : public Cxtrackbar::TcxCustomTrackBar
{
	typedef Cxtrackbar::TcxCustomTrackBar inherited;
	
private:
	System::WideChar FDelimiter;
	TdxRangeTrackBarEditValueFormat FEditValueFormat;
	TdxTrackBarRange* FRange;
	HIDESBASE TdxCustomRangeTrackBarProperties* __fastcall GetActiveProperties();
	HIDESBASE TdxCustomRangeTrackBarProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(TdxCustomRangeTrackBarProperties* const Value);
	void __fastcall SetRange(TdxTrackBarRange* AValue);
	
protected:
	void __fastcall CheckRange(int &AValue);
	virtual Cxtrackbar::TcxTrackBarController* __fastcall CreateController();
	virtual void __fastcall Initialize();
	virtual Cxedit::TdxEditAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	virtual System::UnicodeString __fastcall GetDisplayText();
	virtual int __fastcall GetPosition();
	__int64 __fastcall GetRangeValue();
	virtual void __fastcall PropertiesChanged(System::TObject* Sender);
	virtual void __fastcall SetPosition(int Value);
	void __fastcall SetRangeValue(__int64 AValue, bool AIsUserAction);
	
public:
	__fastcall virtual TdxCustomRangeTrackBar(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TdxCustomRangeTrackBar();
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TdxCustomRangeTrackBarProperties* ActiveProperties = {read=GetActiveProperties};
	__property TdxCustomRangeTrackBarProperties* Properties = {read=GetProperties, write=SetProperties};
	__property TdxTrackBarRange* Range = {read=FRange, write=SetRange};
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TdxCustomRangeTrackBar(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Cxtrackbar::TcxCustomTrackBar(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxCustomRangeTrackBar(HWND ParentWindow) : Cxtrackbar::TcxCustomTrackBar(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TdxRangeTrackBarProperties : public TdxCustomRangeTrackBarProperties
{
	typedef TdxCustomRangeTrackBarProperties inherited;
	
__published:
	__property AutoSize = {default=1};
	__property BorderWidth = {default=0};
	__property ClearKey = {default=0};
	__property Delimiter;
	__property EditValueFormat = {default=0};
	__property Frequency = {default=1};
	__property LineSize = {default=1};
	__property Max = {default=10};
	__property Min = {default=0};
	__property Orientation = {default=0};
	__property PageSize = {default=2};
	__property ReverseDirection = {default=0};
	__property SelectionColor = {default=-16777203};
	__property ShowPositionHint = {default=0};
	__property ShowSelection = {default=1};
	__property ShowTicks = {default=1};
	__property ShowTrack = {default=1};
	__property TextOrientation = {default=0};
	__property ThumbColor = {default=-16777201};
	__property ThumbHeight = {default=12};
	__property ThumbHighlightColor = {default=12632256};
	__property ThumbStep = {default=0};
	__property ThumbType = {default=1};
	__property ThumbWidth = {default=7};
	__property TickColor = {default=-16777208};
	__property TickMarks = {default=2};
	__property TickSize = {default=3};
	__property TickType = {default=0};
	__property TrackColor = {default=-16777211};
	__property TrackSize = {default=5};
	__property ValidationErrorIconAlignment = {default=0};
	__property ValidationOptions = {default=1};
	__property OnChange;
	__property OnGetPositionHint;
	__property OnDrawRangeMaxThumb;
	__property OnDrawRangeMinThumb;
	__property OnGetTickLabel;
	__property OnGetThumbRect;
	__property OnValidate;
public:
	/* TdxCustomRangeTrackBarProperties.Create */ inline __fastcall virtual TdxRangeTrackBarProperties(System::Classes::TPersistent* AOwner) : TdxCustomRangeTrackBarProperties(AOwner) { }
	
public:
	/* TcxCustomEditProperties.Destroy */ inline __fastcall virtual ~TdxRangeTrackBarProperties() { }
	
};


class PASCALIMPLEMENTATION TdxRangeTrackBar : public TdxCustomRangeTrackBar
{
	typedef TdxCustomRangeTrackBar inherited;
	
private:
	HIDESBASE TdxRangeTrackBarProperties* __fastcall GetActiveProperties();
	HIDESBASE TdxRangeTrackBarProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(TdxRangeTrackBarProperties* const Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TdxRangeTrackBarProperties* ActiveProperties = {read=GetActiveProperties};
	
__published:
	__property Anchors = {default=3};
	__property BiDiMode;
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
	__property TdxRangeTrackBarProperties* Properties = {read=GetProperties, write=SetProperties};
	__property Range;
	__property ShowHint;
	__property Style;
	__property StyleDisabled;
	__property StyleFocused;
	__property StyleHot;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Transparent = {default=0};
	__property Visible = {default=1};
	__property OnContextPopup;
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
	/* TdxCustomRangeTrackBar.Create */ inline __fastcall virtual TdxRangeTrackBar(System::Classes::TComponent* AOwner)/* overload */ : TdxCustomRangeTrackBar(AOwner) { }
	/* TdxCustomRangeTrackBar.Destroy */ inline __fastcall virtual ~TdxRangeTrackBar() { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TdxRangeTrackBar(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : TdxCustomRangeTrackBar(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxRangeTrackBar(HWND ParentWindow) : TdxCustomRangeTrackBar(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dxrangetrackbar */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXRANGETRACKBAR)
using namespace Dxrangetrackbar;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxrangetrackbarHPP
