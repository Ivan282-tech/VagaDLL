// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxTrackBar.pas' rev: 35.00 (Windows)

#ifndef CxtrackbarHPP
#define CxtrackbarHPP

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
#include <System.Generics.Defaults.hpp>
#include <System.Generics.Collections.hpp>
#include <dxCore.hpp>
#include <dxCoreClasses.hpp>
#include <cxClasses.hpp>
#include <cxContainer.hpp>
#include <cxControls.hpp>
#include <cxEdit.hpp>
#include <cxExtEditConsts.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxFilterControlUtils.hpp>
#include <cxGraphics.hpp>
#include <cxLookAndFeels.hpp>
#include <cxTextEdit.hpp>
#include <cxVariants.hpp>
#include <System.Math.hpp>
#include <dxCustomHint.hpp>
#include <cxAccessibility.hpp>
#include <dxFading.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxtrackbar
{
//-- forward type declarations -----------------------------------------------
struct TdxDouble;
__interface DELPHIINTERFACE IcxTrackBar;
typedef System::DelphiInterface<IcxTrackBar> _di_IcxTrackBar;
__interface DELPHIINTERFACE IcxTrackBarPostProvider;
typedef System::DelphiInterface<IcxTrackBarPostProvider> _di_IcxTrackBarPostProvider;
class DELPHICLASS TcxTrackBarStyle;
class DELPHICLASS TcxCustomTrackBarFadingHelper;
class DELPHICLASS TcxTrackBarCustomButtonFadingHelper;
class DELPHICLASS TcxTrackBarLeftButtonFadingHelper;
class DELPHICLASS TcxTrackBarRightButtonFadingHelper;
class DELPHICLASS TcxTrackBarThumbFadingHelper;
class DELPHICLASS TcxHorizontalTrackBarViewInfoHelper;
class DELPHICLASS TcxVerticalTrackBarViewInfoHelper;
class DELPHICLASS TcxTrackBarThumbViewInfo;
class DELPHICLASS TcxCustomTrackBarViewInfo;
class DELPHICLASS TcxCustomTrackBarViewData;
class DELPHICLASS TcxCustomTrackBarProperties;
class DELPHICLASS TcxTrackBarProperties;
class DELPHICLASS TcxTrackBarPositionHintHelper;
class DELPHICLASS TcxTrackBarController;
class DELPHICLASS TdxTrackBarRangeValueProvider;
class DELPHICLASS TdxTrackBarAccessibilityHelper;
class DELPHICLASS TcxCustomTrackBar;
class DELPHICLASS TcxTrackBar;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TcxTrackBarOrientation : unsigned char { tboHorizontal, tboVertical };

enum DECLSPEC_DENUM TcxTrackBarTextOrientation : unsigned char { tbtoHorizontal, tbtoVertical };

enum DECLSPEC_DENUM TcxTrackBarTickMarks : unsigned char { cxtmBoth, cxtmTopLeft, cxtmBottomRight };

enum DECLSPEC_DENUM TcxTrackBarTickType : unsigned char { tbttTicks, tbttNumbers, tbttValueNumber, tbttTicksAndNumbers };

enum DECLSPEC_DENUM TcxTrackBarMouseState : unsigned char { tbmpInControl, tbmpUnderThumb, tbmpSliding };

typedef System::Set<TcxTrackBarMouseState, TcxTrackBarMouseState::tbmpInControl, TcxTrackBarMouseState::tbmpSliding> TcxTrackBarMouseStates;

enum DECLSPEC_DENUM TcxTrackBarSlideState : unsigned char { tbksNormal, tbksIncludeSelection };

enum DECLSPEC_DENUM TcxTrackBarThumbType : unsigned char { cxttNone, cxttRegular, cxttCustom };

enum DECLSPEC_DENUM TcxTrackBarThumbStep : unsigned char { cxtsNormal, cxtsJump };

typedef void __fastcall (__closure *TcxTrackBarGetCustomTextEvent)(System::TObject* Sender, const int APosition, System::UnicodeString &AText);

typedef void __fastcall (__closure *TcxTrackBarGetCustomHintEvent)(System::TObject* Sender, const int APosition, System::UnicodeString &AHintText, bool &ACanShow, bool &AIsHintMultiLine);

typedef void __fastcall (__closure *TcxGetThumbRectEvent)(System::TObject* Sender, System::Types::TRect &ARect);

typedef void __fastcall (__closure *TcxDrawThumbEvent)(System::TObject* Sender, Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect);

struct DECLSPEC_DRECORD TdxDouble
{
public:
	int Numerator;
	int Denominator;
};


__interface  INTERFACE_UUID("{288974F4-38F0-4BED-AB6A-BB9A5476D8D0}") IcxTrackBar  : public System::IInterface 
{
	virtual TcxCustomTrackBarProperties* __fastcall GetActiveProperties() = 0 ;
	virtual bool __fastcall IsInplace() = 0 ;
	virtual System::Types::TPoint __fastcall GetMouseDownPos() = 0 ;
	virtual int __fastcall GetPosition() = 0 ;
	virtual TcxCustomTrackBarProperties* __fastcall GetProperties() = 0 ;
	virtual TcxCustomTrackBarViewInfo* __fastcall GetViewInfo() = 0 ;
	virtual void __fastcall SetPosition(int AValue) = 0 ;
};

__interface  INTERFACE_UUID("{F61E036A-10F7-486E-9A28-9B22084626AA}") IcxTrackBarPostProvider  : public System::IInterface 
{
	virtual void __fastcall PostPosition() = 0 ;
};

class PASCALIMPLEMENTATION TcxTrackBarStyle : public Cxedit::TcxEditStyle
{
	typedef Cxedit::TcxEditStyle inherited;
	
protected:
	virtual Cxlookandfeelpainters::TcxContainerBorderStyle __fastcall DefaultBorderStyle();
	virtual bool __fastcall DefaultHotTrack();
public:
	/* TcxCustomEditStyle.Create */ inline __fastcall virtual TcxTrackBarStyle(System::Classes::TPersistent* AOwner, bool ADirectAccessMode, Cxcontainer::TcxContainerStyle* AParentStyle, Cxcontainer::TcxContainerStateItem AState) : Cxedit::TcxEditStyle(AOwner, ADirectAccessMode, AParentStyle, AState) { }
	
public:
	/* TcxContainerStyle.Destroy */ inline __fastcall virtual ~TcxTrackBarStyle() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomTrackBarFadingHelper : public Cxedit::TcxCustomEditFadingHelper
{
	typedef Cxedit::TcxCustomEditFadingHelper inherited;
	
private:
	TcxCustomTrackBarViewInfo* FViewInfo;
	
protected:
	virtual Cxedit::TcxCustomEditViewInfo* __fastcall GetEditViewInfo();
	
public:
	__fastcall virtual TcxCustomTrackBarFadingHelper(TcxCustomTrackBarViewInfo* AViewInfo);
	__property TcxCustomTrackBarViewInfo* ViewInfo = {read=FViewInfo};
public:
	/* TdxFadingObjectHelper.Destroy */ inline __fastcall virtual ~TcxCustomTrackBarFadingHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxTrackBarCustomButtonFadingHelper : public TcxCustomTrackBarFadingHelper
{
	typedef TcxCustomTrackBarFadingHelper inherited;
	
protected:
	virtual bool __fastcall CanFade();
	virtual void __fastcall DrawButton(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState) = 0 ;
	virtual System::Types::TRect __fastcall GetButtonBounds() = 0 ;
	virtual void __fastcall GetFadingImages(/* out */ Cxgraphics::TcxBitmap* &AFadeOutImage, /* out */ Cxgraphics::TcxBitmap* &AFadeInImage);
	
public:
	virtual void __fastcall Invalidate()/* overload */;
	__property System::Types::TRect ButtonBounds = {read=GetButtonBounds};
public:
	/* TcxCustomTrackBarFadingHelper.Create */ inline __fastcall virtual TcxTrackBarCustomButtonFadingHelper(TcxCustomTrackBarViewInfo* AViewInfo) : TcxCustomTrackBarFadingHelper(AViewInfo) { }
	
public:
	/* TdxFadingObjectHelper.Destroy */ inline __fastcall virtual ~TcxTrackBarCustomButtonFadingHelper() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Invalidate(const System::Types::TRect &R, bool AEraseBackground){ Cxedit::TcxCustomEditFadingHelper::Invalidate(R, AEraseBackground); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxTrackBarLeftButtonFadingHelper : public TcxTrackBarCustomButtonFadingHelper
{
	typedef TcxTrackBarCustomButtonFadingHelper inherited;
	
protected:
	virtual void __fastcall DrawButton(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState);
	virtual System::Types::TRect __fastcall GetButtonBounds();
public:
	/* TcxCustomTrackBarFadingHelper.Create */ inline __fastcall virtual TcxTrackBarLeftButtonFadingHelper(TcxCustomTrackBarViewInfo* AViewInfo) : TcxTrackBarCustomButtonFadingHelper(AViewInfo) { }
	
public:
	/* TdxFadingObjectHelper.Destroy */ inline __fastcall virtual ~TcxTrackBarLeftButtonFadingHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxTrackBarRightButtonFadingHelper : public TcxTrackBarCustomButtonFadingHelper
{
	typedef TcxTrackBarCustomButtonFadingHelper inherited;
	
protected:
	virtual void __fastcall DrawButton(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState);
	virtual System::Types::TRect __fastcall GetButtonBounds();
public:
	/* TcxCustomTrackBarFadingHelper.Create */ inline __fastcall virtual TcxTrackBarRightButtonFadingHelper(TcxCustomTrackBarViewInfo* AViewInfo) : TcxTrackBarCustomButtonFadingHelper(AViewInfo) { }
	
public:
	/* TdxFadingObjectHelper.Destroy */ inline __fastcall virtual ~TcxTrackBarRightButtonFadingHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxTrackBarThumbFadingHelper : public TcxCustomTrackBarFadingHelper
{
	typedef TcxCustomTrackBarFadingHelper inherited;
	
protected:
	virtual void __fastcall DrawThumb(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, int AState);
	virtual void __fastcall GetFadingImages(/* out */ Cxgraphics::TcxBitmap* &AFadeOutImage, /* out */ Cxgraphics::TcxBitmap* &AFadeInImage);
	virtual System::Types::TRect __fastcall GetThumbRect();
	
public:
	virtual void __fastcall Invalidate()/* overload */;
public:
	/* TcxCustomTrackBarFadingHelper.Create */ inline __fastcall virtual TcxTrackBarThumbFadingHelper(TcxCustomTrackBarViewInfo* AViewInfo) : TcxCustomTrackBarFadingHelper(AViewInfo) { }
	
public:
	/* TdxFadingObjectHelper.Destroy */ inline __fastcall virtual ~TcxTrackBarThumbFadingHelper() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Invalidate(const System::Types::TRect &R, bool AEraseBackground){ Cxedit::TcxCustomEditFadingHelper::Invalidate(R, AEraseBackground); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxHorizontalTrackBarViewInfoHelper : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TcxCustomTrackBarViewInfo* FViewInfo;
	
protected:
	virtual int __fastcall GetCurrentMousePos(int X, int Y);
	virtual int __fastcall GetMouseDownPos(const System::Types::TPoint &AMouseDownCoordinate);
	virtual void __fastcall CalculateCustomThumbSize(const System::Types::TRect &ACustomRect, /* out */ int &AThumbSize, /* out */ int &AThumbLargeSize);
	virtual void __fastcall DrawTickAsLineBottomRight(Cxgraphics::TcxCanvas* ACanvas, int ATickPosition, int ATickSize);
	virtual void __fastcall DrawTickAsLineTopLeft(Cxgraphics::TcxCanvas* ACanvas, int ATickPosition, int ATickSize);
	virtual System::Types::TRect __fastcall GetClientRect();
	virtual System::Types::TRect __fastcall GetLeftButtonRect();
	virtual System::Types::TRect __fastcall GetPositionHintTextRect(Cxgraphics::TcxCanvas* ACanvas, const System::UnicodeString AHintText, bool AIsHintMultiLine);
	virtual int __fastcall GetPositionHintSize(Cxgraphics::TcxCanvas* ACanvas, const System::UnicodeString AHintText);
	virtual System::Types::TRect __fastcall GetRightButtonRect();
	virtual System::Types::TRect __fastcall GetSelectionRect();
	virtual System::Types::TRect __fastcall GetTextTopRect(int ATickPosition, int ATextWidth, int ATextHeight, int ADelta);
	virtual System::Types::TRect __fastcall GetTextBottomRect(int ATickPosition, int ATextWidth, int ATextHeight, int ADelta);
	virtual System::Types::TRect __fastcall GetRealRect(const System::Types::TRect &R);
	virtual System::Types::TRect __fastcall GetThumbRect();
	virtual System::Types::TRect __fastcall GetTrackBarRect();
	virtual System::Types::TRect __fastcall GetTrackBounds();
	virtual System::Types::TRect __fastcall GetTrackZoneRect();
	virtual System::Types::TRect __fastcall GetTrackRect();
	virtual System::Types::TRect __fastcall GetVisibleThumbRect();
	virtual void __fastcall InflateTrackRect(System::Types::TRect &ARect);
	__property TcxCustomTrackBarViewInfo* ViewInfo = {read=FViewInfo, write=FViewInfo};
	
public:
	__fastcall TcxHorizontalTrackBarViewInfoHelper(TcxCustomTrackBarViewInfo* AViewInfo);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxHorizontalTrackBarViewInfoHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxVerticalTrackBarViewInfoHelper : public TcxHorizontalTrackBarViewInfoHelper
{
	typedef TcxHorizontalTrackBarViewInfoHelper inherited;
	
protected:
	virtual int __fastcall GetCurrentMousePos(int X, int Y);
	virtual int __fastcall GetMouseDownPos(const System::Types::TPoint &AMouseDownPos);
	virtual void __fastcall CalculateCustomThumbSize(const System::Types::TRect &ACustomRect, /* out */ int &AThumbSize, /* out */ int &AThumbLargeSize);
	virtual void __fastcall DrawTickAsLineBottomRight(Cxgraphics::TcxCanvas* ACanvas, int ATickPosition, int ATickSize);
	virtual void __fastcall DrawTickAsLineTopLeft(Cxgraphics::TcxCanvas* ACanvas, int ATickPosition, int ATickSize);
	virtual int __fastcall GetPositionHintSize(Cxgraphics::TcxCanvas* ACanvas, const System::UnicodeString AHintText);
	virtual System::Types::TRect __fastcall GetRealRect(const System::Types::TRect &R);
	virtual System::Types::TRect __fastcall GetTextTopRect(int ATickPosition, int ATextWidth, int ATextHeight, int ADelta);
	virtual System::Types::TRect __fastcall GetTextBottomRect(int ATickPosition, int ATextWidth, int ATextHeight, int ADelta);
	virtual System::Types::TRect __fastcall GetTrackBounds();
	virtual void __fastcall InflateTrackRect(System::Types::TRect &ARect);
	System::Types::TRect __fastcall GetRotatedRect(const System::Types::TRect &ARect);
public:
	/* TcxHorizontalTrackBarViewInfoHelper.Create */ inline __fastcall TcxVerticalTrackBarViewInfoHelper(TcxCustomTrackBarViewInfo* AViewInfo) : TcxHorizontalTrackBarViewInfoHelper(AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxVerticalTrackBarViewInfoHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxTrackBarThumbViewInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Types::TRect FBounds;
	TcxTrackBarThumbFadingHelper* FFadingHelper;
	System::Types::TRect FFullRect;
	int FPosition;
	int FState;
	TcxCustomTrackBarViewInfo* FViewInfo;
	void __fastcall SetState(int AValue);
	
protected:
	virtual TcxTrackBarThumbFadingHelper* __fastcall CreateFadingHelper();
	__property TcxCustomTrackBarViewInfo* ViewInfo = {read=FViewInfo};
	
public:
	__fastcall TcxTrackBarThumbViewInfo(TcxCustomTrackBarViewInfo* AViewInfo);
	__fastcall virtual ~TcxTrackBarThumbViewInfo();
	__property System::Types::TRect Bounds = {read=FBounds, write=FBounds};
	__property int Position = {read=FPosition, write=FPosition, nodefault};
	__property int State = {read=FState, write=SetState, nodefault};
	__property System::Types::TRect FullRect = {read=FFullRect, write=FFullRect};
	__property TcxTrackBarThumbFadingHelper* FadingHelper = {read=FFadingHelper};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxCustomTrackBarViewInfo : public Cxtextedit::TcxCustomTextEditViewInfo
{
	typedef Cxtextedit::TcxCustomTextEditViewInfo inherited;
	
private:
	TcxTrackBarLeftButtonFadingHelper* FButtonLeftFadingHelper;
	Cxlookandfeelpainters::TcxButtonState FButtonLeftState;
	TcxTrackBarRightButtonFadingHelper* FButtonRightFadingHelper;
	Cxlookandfeelpainters::TcxButtonState FButtonRightState;
	Cxlookandfeels::TcxLookAndFeel* FLookAndFeel;
	TcxHorizontalTrackBarViewInfoHelper* FOrientationHelper;
	TcxTrackBarPositionHintHelper* FPositionHintHelper;
	System::Classes::TList* FMajorTicks;
	System::Classes::TList* FMinorTicks;
	bool FPropTransparent;
	int FSelectionEnd;
	int FSelectionStart;
	bool FShowSelection;
	Cxgraphics::TcxBitmap* FTBBitmap;
	int FThumbHeight;
	int FThumbWidth;
	System::Generics::Collections::TList__1<TcxTrackBarThumbViewInfo*>* FThumbs;
	int FTrackSize;
	TcxTrackBarThumbViewInfo* FHotThumb;
	TcxTrackBarThumbViewInfo* FPressedThumb;
	System::Types::TSize __fastcall GetLeftButtonSize();
	int __fastcall GetPosition();
	System::Types::TSize __fastcall GetRightButtonSize();
	TcxTrackBarThumbFadingHelper* __fastcall GetThumbFadingHelper();
	TcxTrackBarThumbViewInfo* __fastcall GetThumb(int Index);
	TcxCustomTrackBarProperties* __fastcall GetTrackBarProperties();
	int __fastcall GetTrackBarState();
	bool __fastcall IsMajorTick(int AIndex);
	void __fastcall SetButtonLeftState(Cxlookandfeelpainters::TcxButtonState Value);
	void __fastcall SetButtonRightState(Cxlookandfeelpainters::TcxButtonState Value);
	void __fastcall SetChangeButtonsState(int Value);
	void __fastcall SetPosition(const int Value);
	void __fastcall SetTrackBarState(int AValue);
	
protected:
	System::Types::TRect LeftButtonRect;
	System::Types::TRect RealTrackBarRect;
	System::Types::TRect RightButtonRect;
	System::Types::TRect SelectionRect;
	System::Types::TRect ThumbRect;
	System::Types::TRect TrackBarRect;
	System::Types::TRect TrackRect;
	System::Types::TRect TrackZoneRect;
	void __fastcall AddMinorTicks(int AMin, int AMax, int AFrequency);
	virtual void __fastcall PopulateMajorTicks();
	virtual void __fastcall PopulateMinorTicks();
	virtual void __fastcall DoGetPositionHint(System::UnicodeString &AHintText, bool &ACanShow, bool &AIsHintMultiLine);
	HIDESBASE void __fastcall DrawButtons(Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall DrawButtonLeft(Cxgraphics::TcxCanvas* ACanvas)/* overload */;
	void __fastcall DrawButtonLeft(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState)/* overload */;
	void __fastcall DrawButtonRight(Cxgraphics::TcxCanvas* ACanvas)/* overload */;
	void __fastcall DrawButtonRight(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState)/* overload */;
	virtual void __fastcall DrawCustomThumb(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawTrack(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawSelection(Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall DrawTickAsLine(Cxgraphics::TcxCanvas* ACanvas, int AIndex, int ATickPosition);
	void __fastcall DrawTickAsText(Cxgraphics::TcxCanvas* ACanvas, int AIndex, int ATickPosition);
	virtual void __fastcall DrawTicks(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawThumb(Cxgraphics::TcxCanvas* ACanvas)/* overload */;
	virtual void __fastcall DrawThumb(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, int AState)/* overload */;
	virtual System::Types::TRect __fastcall DrawingThumbRectToRealThumbRect(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &AThumbRect)/* overload */;
	virtual System::Types::TRect __fastcall DrawingThumbRectToRealThumbRect(Cxgraphics::TcxCanvas* ACanvas)/* overload */;
	virtual int __fastcall GetCoordinate(int APosition);
	virtual int __fastcall GetOffset(int APosition);
	System::Uitypes::TColor __fastcall GetThumbRealColor(int AState);
	virtual bool __fastcall IsTickText(int ATickValue);
	virtual void __fastcall UpdateTrackBarState();
	virtual void __fastcall UpdateValue(const System::Variant &AValue);
	virtual bool __fastcall IsPtToTheRightFromThumb(TcxTrackBarThumbViewInfo* AThumb, int X, int Y);
	virtual bool __fastcall IsPtToTheLeftFromThumb(TcxTrackBarThumbViewInfo* AThumb, int X, int Y);
	virtual int __fastcall GetCalculatedPosition(int APosition, bool AIsInc, bool AIsLineSize, bool ANeedRound = false);
	virtual System::UnicodeString __fastcall GetDefaultPositionHintText();
	int __fastcall GetMouseDelta(int X, int Y, const System::Types::TPoint &AMouseDownPos);
	int __fastcall GetNewPosition(int X, int Y)/* overload */;
	virtual int __fastcall GetPositionAfterJump(int X, int Y);
	System::UnicodeString __fastcall GetPositionHintText(bool &ACanShow, bool &AIsHintMultiLine);
	void __fastcall HidePositionHint();
	void __fastcall MouseMove(int X, int Y);
	void __fastcall ProcessPositionHint();
	void __fastcall CreateOrientationHelper();
	int __fastcall GetCurrentMousePos(int X, int Y);
	int __fastcall GetMouseDownPos(const System::Types::TPoint &AMouseDownPos);
	void __fastcall CalculateCustomThumbSize(const System::Types::TRect &ACustomRect, /* out */ int &AThumbSize, /* out */ int &AThumbLargeSize);
	void __fastcall DrawTickAsLineBottomRight(Cxgraphics::TcxCanvas* ACanvas, int ATickPosition, int ATickSize);
	void __fastcall DrawTickAsLineTopLeft(Cxgraphics::TcxCanvas* ACanvas, int ATickPosition, int ATickSize);
	System::Types::TRect __fastcall GetClientRect();
	System::Types::TRect __fastcall GetLeftButtonRect();
	System::Types::TRect __fastcall GetPositionHintTextRect(Cxgraphics::TcxCanvas* ACanvas, const System::UnicodeString AHintText, bool AIsHintMultiLine);
	System::Types::TRect __fastcall GetRightButtonRect();
	System::Types::TRect __fastcall GetSelectionRect();
	System::Types::TRect __fastcall GetTextTopRect(int ATickPosition, int ATextWidth, int ATextHeight, int ADelta);
	System::Types::TRect __fastcall GetTextBottomRect(int ATickPosition, int ATextWidth, int ATextHeight, int ADelta);
	System::Types::TRect __fastcall GetRealRect(const System::Types::TRect &R);
	System::Types::TRect __fastcall GetThumbRect();
	System::Types::TRect __fastcall GetTrackBarRect();
	System::Types::TRect __fastcall GetTrackBounds();
	System::Types::TRect __fastcall GetTrackRect();
	System::Types::TRect __fastcall GetVisibleThumbRect();
	void __fastcall AddThumb(TcxTrackBarThumbViewInfo* AThumb);
	virtual void __fastcall AddThumbs();
	virtual void __fastcall CreateThumbs();
	virtual void __fastcall DestroyThumbs();
	virtual TcxTrackBarThumbViewInfo* __fastcall CreateThumbViewInfo();
	virtual TcxTrackBarThumbViewInfo* __fastcall GetNearestThumb(int X, int Y);
	virtual TcxTrackBarThumbViewInfo* __fastcall GetThumbFromPos(const System::Types::TPoint &APoint);
	virtual void __fastcall PaintTrackBar(Cxgraphics::TcxCanvas* ACanvas);
	__property bool ShowSelection = {read=FShowSelection, write=FShowSelection, nodefault};
	__property TcxTrackBarThumbFadingHelper* ThumbFadingHelper = {read=GetThumbFadingHelper};
	__property TcxTrackBarThumbViewInfo* Thumb[int Index] = {read=GetThumb};
	__property System::Classes::TList* MajorTicks = {read=FMajorTicks};
	__property System::Classes::TList* MinorTicks = {read=FMinorTicks};
	
public:
	System::Types::TRect FocusRect;
	bool ReverseDirection;
	bool ShowChangeButtons;
	System::Types::TRect VisibleThumbRect;
	bool HasForegroundImage;
	TcxTrackBarMouseStates MouseStates;
	int Min;
	int Max;
	int Frequency;
	int ThumbLargeSize;
	int ThumbSize;
	System::Uitypes::TColor TickColor;
	TcxTrackBarTickMarks TickMarks;
	TdxDouble PixelsPerPositionStep;
	TcxTrackBarTickType TickType;
	int TickSize;
	int TrackRectDelta;
	int TrackBarBorderWidth;
	int TrackHeight;
	int TrackWidth;
	TcxTrackBarOrientation Orientation;
	TcxTrackBarTextOrientation TextOrientation;
	__fastcall virtual TcxCustomTrackBarViewInfo();
	__fastcall virtual ~TcxCustomTrackBarViewInfo();
	virtual void __fastcall Assign(System::TObject* Source);
	virtual void __fastcall DrawText(Cxgraphics::TcxCanvas* ACanvas);
	virtual bool __fastcall IsHotTrack()/* overload */;
	virtual bool __fastcall IsHotTrack(const System::Types::TPoint &P)/* overload */;
	virtual bool __fastcall NeedShowHint(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TPoint &P, const System::Types::TRect &AVisibleBounds, /* out */ Vcl::Controls::TCaption &AText, /* out */ bool &AIsMultiLine, /* out */ System::Types::TRect &ATextRect, int AMaxLineCount = 0x0);
	virtual void __fastcall Offset(int DX, int DY);
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
	__property Cxlookandfeels::TcxLookAndFeel* LookAndFeel = {read=FLookAndFeel, write=FLookAndFeel};
	__property TcxTrackBarLeftButtonFadingHelper* ButtonLeftFadingHelper = {read=FButtonLeftFadingHelper};
	__property Cxlookandfeelpainters::TcxButtonState ButtonLeftState = {read=FButtonLeftState, write=SetButtonLeftState, nodefault};
	__property TcxTrackBarRightButtonFadingHelper* ButtonRightFadingHelper = {read=FButtonRightFadingHelper};
	__property Cxlookandfeelpainters::TcxButtonState ButtonRightState = {read=FButtonRightState, write=SetButtonRightState, nodefault};
	__property System::Types::TSize LeftButtonSize = {read=GetLeftButtonSize};
	__property TcxHorizontalTrackBarViewInfoHelper* OrientationHelper = {read=FOrientationHelper};
	__property int Position = {read=GetPosition, write=SetPosition, nodefault};
	__property TcxTrackBarPositionHintHelper* PositionHintHelper = {read=FPositionHintHelper};
	__property System::Types::TSize RightButtonSize = {read=GetRightButtonSize};
	__property int SelectionEnd = {read=FSelectionEnd, write=FSelectionEnd, nodefault};
	__property int SelectionStart = {read=FSelectionStart, write=FSelectionStart, nodefault};
	__property int ThumbHeight = {read=FThumbHeight, write=FThumbHeight, nodefault};
	__property int ThumbWidth = {read=FThumbWidth, write=FThumbWidth, nodefault};
	__property TcxCustomTrackBarProperties* TrackBarProperties = {read=GetTrackBarProperties};
	__property int TrackBarState = {read=GetTrackBarState, write=SetTrackBarState, nodefault};
	__property int TrackSize = {read=FTrackSize, write=FTrackSize, nodefault};
	__property TcxTrackBarThumbViewInfo* HotThumb = {read=FHotThumb, write=FHotThumb};
	__property TcxTrackBarThumbViewInfo* PressedThumb = {read=FPressedThumb, write=FPressedThumb};
};


class PASCALIMPLEMENTATION TcxCustomTrackBarViewData : public Cxedit::TcxCustomEditViewData
{
	typedef Cxedit::TcxCustomEditViewData inherited;
	
private:
	void __fastcall GetCustomRealTrackZoneSize(TcxCustomTrackBarViewInfo* AViewInfo, int &ARealTrackZoneSize);
	void __fastcall GetOnGetThumbRect(/* out */ TcxGetThumbRectEvent &AValue);
	TcxCustomTrackBarProperties* __fastcall GetProperties();
	
protected:
	virtual void __fastcall CalculateCustomTrackBarRects(Cxgraphics::TcxCanvas* ACanvas, TcxCustomTrackBarViewInfo* AViewInfo);
	virtual System::Types::TSize __fastcall InternalGetEditConstantPartSize(Cxgraphics::TcxCanvas* ACanvas, bool AIsInplace, const Cxedit::TcxEditSizeProperties &AEditSizeProperties, System::Types::TSize &MinContentSize, Cxedit::TcxCustomEditViewInfo* AViewInfo);
	virtual int __fastcall CalculateTickSize(Cxgraphics::TcxCanvas* ACanvas, TcxCustomTrackBarViewInfo* AViewInfo, bool ALeftTop);
	virtual void __fastcall CalculateTrackBarViewInfoProperties(Cxedit::TcxCustomEditViewInfo* AViewInfo);
	int __fastcall ThumbHalfSize(TcxCustomTrackBarViewInfo* AViewInfo);
	virtual void __fastcall CalculateButtonLeftRect(TcxCustomTrackBarViewInfo* AViewInfo);
	virtual void __fastcall CalculateButtonRightRect(TcxCustomTrackBarViewInfo* AViewInfo);
	virtual void __fastcall CalculatePixelsPerPositionStep(TcxCustomTrackBarViewInfo* AViewInfo);
	virtual void __fastcall CalculateSelectionRect(TcxCustomTrackBarViewInfo* AViewInfo);
	virtual void __fastcall CalculateThumbSize(TcxCustomTrackBarViewInfo* AViewInfo);
	virtual void __fastcall CalculateThumbRect(Cxgraphics::TcxCanvas* ACanvas, TcxCustomTrackBarViewInfo* AViewInfo);
	virtual void __fastcall CalculateTrackBarRect(TcxCustomTrackBarViewInfo* AViewInfo);
	virtual void __fastcall CalculateTrackRect(TcxCustomTrackBarViewInfo* AViewInfo);
	virtual void __fastcall CalculateTrackSize(TcxCustomTrackBarViewInfo* AViewInfo, int ARealTrackZoneSize);
	virtual void __fastcall CalculateTrackZoneRect(Cxgraphics::TcxCanvas* ACanvas, TcxCustomTrackBarViewInfo* AViewInfo, /* out */ int &ARealTrackZoneSize);
	void __fastcall DoOnGetThumbRect(System::Types::TRect &ARect);
	bool __fastcall IsOnGetThumbRectEventAssigned();
	bool __fastcall IsReverseDirection();
	virtual void __fastcall UpdateSelection(TcxCustomTrackBarViewInfo* AViewInfo);
	virtual void __fastcall UpdateValue(TcxCustomTrackBarViewInfo* AViewInfo, const System::Variant &AValue);
	
public:
	virtual void __fastcall Calculate(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TPoint &P, Cxcontainer::TcxMouseButton Button, System::Classes::TShiftState Shift, Cxedit::TcxCustomEditViewInfo* AViewInfo, bool AIsMouseEvent);
	virtual void __fastcall EditValueToDrawValue(const System::Variant &AEditValue, Cxedit::TcxCustomEditViewInfo* AViewInfo);
	__property TcxCustomTrackBarProperties* Properties = {read=GetProperties};
public:
	/* TcxCustomEditViewData.Create */ inline __fastcall virtual TcxCustomTrackBarViewData(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditStyle* AStyle, bool AIsInplace) : Cxedit::TcxCustomEditViewData(AProperties, AStyle, AIsInplace) { }
	/* TcxCustomEditViewData.Destroy */ inline __fastcall virtual ~TcxCustomTrackBarViewData() { }
	
};


class PASCALIMPLEMENTATION TcxCustomTrackBarProperties : public Cxedit::TcxCustomEditProperties
{
	typedef Cxedit::TcxCustomEditProperties inherited;
	
private:
	bool FAutoSize;
	int FBorderWidth;
	bool FReverseDirection;
	int FFrequency;
	Cxexteditconsts::TcxNaturalNumber FLineSize;
	TcxTrackBarOrientation FOrientation;
	TcxTrackBarTextOrientation FTextOrientation;
	Cxexteditconsts::TcxNaturalNumber FPageSize;
	int FSelectionStart;
	int FSelectionEnd;
	System::Uitypes::TColor FSelectionColor;
	bool FShowPositionHint;
	bool FShowTrack;
	TcxTrackBarThumbType FThumbType;
	System::Uitypes::TColor FTickColor;
	TcxTrackBarTickType FTickType;
	TcxTrackBarTickMarks FTickMarks;
	Cxexteditconsts::TcxNaturalNumber FTickSize;
	System::Uitypes::TColor FTrackColor;
	System::Uitypes::TColor FThumbColor;
	System::Uitypes::TColor FThumbHighlightColor;
	TcxTrackBarThumbStep FThumbStep;
	TcxTrackBarGetCustomHintEvent FOnGetPositionHint;
	TcxTrackBarGetCustomTextEvent FOnGetTickLabel;
	TcxGetThumbRectEvent FOnGetThumbRect;
	TcxDrawThumbEvent FOnDrawThumb;
	void __fastcall SetAutoSize(bool Value);
	void __fastcall SetBorderWidth(int Value);
	void __fastcall SetReverseDirection(bool Value);
	void __fastcall SetFrequency(int Value);
	void __fastcall SetLineSize(Cxexteditconsts::TcxNaturalNumber Value);
	void __fastcall SetOrientation(TcxTrackBarOrientation Value);
	void __fastcall SetTextOrientation(TcxTrackBarTextOrientation Value);
	void __fastcall SetPageSize(Cxexteditconsts::TcxNaturalNumber Value);
	void __fastcall SetSelectionStart(int Value);
	void __fastcall SetSelectionEnd(int Value);
	void __fastcall SetSelectionColor(System::Uitypes::TColor Value);
	void __fastcall SetShowTicks(bool Value);
	void __fastcall SetThumbType(TcxTrackBarThumbType Value);
	void __fastcall SetShowChangeButtons(bool Value);
	void __fastcall SetShowPositionHint(bool Value);
	void __fastcall SetShowTrack(bool Value);
	void __fastcall SetTickColor(System::Uitypes::TColor Value);
	void __fastcall SetTickType(TcxTrackBarTickType Value);
	void __fastcall SetTickMarks(TcxTrackBarTickMarks Value);
	void __fastcall SetTickSize(Cxexteditconsts::TcxNaturalNumber Value);
	void __fastcall SetTrackColor(System::Uitypes::TColor Value);
	void __fastcall SetTrackSize(int Value);
	void __fastcall SetThumbHeight(int Value);
	void __fastcall SetThumbWidth(int Value);
	void __fastcall SetThumbColor(System::Uitypes::TColor Value);
	void __fastcall SetThumbHighlightColor(System::Uitypes::TColor Value);
	void __fastcall DoDrawThumb(System::TObject* Sender, Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect);
	
protected:
	int FMin;
	int FMax;
	bool FShowChangeButtons;
	bool FShowTicks;
	int FThumbHeight;
	int FThumbWidth;
	int FTrackSize;
	virtual bool __fastcall CanValidate();
	virtual System::UnicodeString __fastcall GetValidateErrorText(int AErrorKind);
	virtual void __fastcall ChangeScale(int M, int D);
	virtual void __fastcall DoAssign(Cxedit::TcxCustomEditProperties* AProperties);
	__classmethod virtual Cxedit::TcxCustomEditViewDataClass __fastcall GetViewDataClass();
	virtual bool __fastcall HasDisplayValue();
	virtual int __fastcall FixPosition(const int APosition);
	int __fastcall EditValueToPosition(const System::Variant &AEditValue);
	virtual void __fastcall SetMax(int Value);
	virtual void __fastcall SetMin(int Value);
	
public:
	__fastcall virtual TcxCustomTrackBarProperties(System::Classes::TPersistent* AOwner);
	virtual bool __fastcall CanCompareEditValue();
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	virtual System::UnicodeString __fastcall GetDisplayText(const System::Variant &AEditValue, bool AFullText = false, bool AIsInplace = true);
	__classmethod virtual Cxedit::TcxCustomEditStyleClass __fastcall GetStyleClass();
	virtual Cxedit::TcxEditSupportedOperations __fastcall GetSupportedOperations();
	__classmethod virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
	virtual bool __fastcall IsEditValueValid(System::Variant &EditValue, bool AEditFocused);
	virtual void __fastcall PrepareDisplayValue(const System::Variant &AEditValue, System::Variant &DisplayValue, bool AEditFocused);
	__property bool AutoSize = {read=FAutoSize, write=SetAutoSize, default=1};
	__property int BorderWidth = {read=FBorderWidth, write=SetBorderWidth, default=0};
	__property bool ReverseDirection = {read=FReverseDirection, write=SetReverseDirection, default=0};
	__property int Frequency = {read=FFrequency, write=SetFrequency, default=1};
	__property Cxexteditconsts::TcxNaturalNumber LineSize = {read=FLineSize, write=SetLineSize, default=1};
	__property int Max = {read=FMax, write=SetMax, default=10};
	__property int Min = {read=FMin, write=SetMin, default=0};
	__property TcxTrackBarOrientation Orientation = {read=FOrientation, write=SetOrientation, default=0};
	__property Cxexteditconsts::TcxNaturalNumber PageSize = {read=FPageSize, write=SetPageSize, default=2};
	__property System::Uitypes::TColor SelectionColor = {read=FSelectionColor, write=SetSelectionColor, default=-16777203};
	__property int SelectionEnd = {read=FSelectionEnd, write=SetSelectionEnd, default=0};
	__property int SelectionStart = {read=FSelectionStart, write=SetSelectionStart, default=0};
	__property bool ShowChangeButtons = {read=FShowChangeButtons, write=SetShowChangeButtons, default=0};
	__property bool ShowPositionHint = {read=FShowPositionHint, write=SetShowPositionHint, default=0};
	__property bool ShowTicks = {read=FShowTicks, write=SetShowTicks, default=1};
	__property bool ShowTrack = {read=FShowTrack, write=SetShowTrack, default=1};
	__property TcxTrackBarTextOrientation TextOrientation = {read=FTextOrientation, write=SetTextOrientation, default=0};
	__property System::Uitypes::TColor ThumbColor = {read=FThumbColor, write=SetThumbColor, default=-16777201};
	__property int ThumbHeight = {read=FThumbHeight, write=SetThumbHeight, default=12};
	__property System::Uitypes::TColor ThumbHighlightColor = {read=FThumbHighlightColor, write=SetThumbHighlightColor, default=12632256};
	__property TcxTrackBarThumbStep ThumbStep = {read=FThumbStep, write=FThumbStep, default=0};
	__property TcxTrackBarThumbType ThumbType = {read=FThumbType, write=SetThumbType, default=1};
	__property int ThumbWidth = {read=FThumbWidth, write=SetThumbWidth, default=7};
	__property System::Uitypes::TColor TickColor = {read=FTickColor, write=SetTickColor, default=-16777208};
	__property TcxTrackBarTickMarks TickMarks = {read=FTickMarks, write=SetTickMarks, default=2};
	__property Cxexteditconsts::TcxNaturalNumber TickSize = {read=FTickSize, write=SetTickSize, default=3};
	__property TcxTrackBarTickType TickType = {read=FTickType, write=SetTickType, default=0};
	__property System::Uitypes::TColor TrackColor = {read=FTrackColor, write=SetTrackColor, default=-16777211};
	__property int TrackSize = {read=FTrackSize, write=SetTrackSize, default=5};
	__property TcxTrackBarGetCustomHintEvent OnGetPositionHint = {read=FOnGetPositionHint, write=FOnGetPositionHint};
	__property TcxTrackBarGetCustomTextEvent OnGetTickLabel = {read=FOnGetTickLabel, write=FOnGetTickLabel};
	__property TcxDrawThumbEvent OnDrawThumb = {read=FOnDrawThumb, write=FOnDrawThumb};
	__property TcxGetThumbRectEvent OnGetThumbRect = {read=FOnGetThumbRect, write=FOnGetThumbRect};
public:
	/* TcxCustomEditProperties.Destroy */ inline __fastcall virtual ~TcxCustomTrackBarProperties() { }
	
};


class PASCALIMPLEMENTATION TcxTrackBarProperties : public TcxCustomTrackBarProperties
{
	typedef TcxCustomTrackBarProperties inherited;
	
__published:
	__property AutoSize = {default=1};
	__property BorderWidth = {default=0};
	__property ClearKey = {default=0};
	__property Frequency = {default=1};
	__property LineSize = {default=1};
	__property Max = {default=10};
	__property Min = {default=0};
	__property Orientation = {default=0};
	__property PageSize = {default=2};
	__property ReverseDirection = {default=0};
	__property SelectionColor = {default=-16777203};
	__property SelectionEnd = {default=0};
	__property SelectionStart = {default=0};
	__property ShowChangeButtons = {default=0};
	__property ShowPositionHint = {default=0};
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
	__property OnDrawThumb;
	__property OnGetTickLabel;
	__property OnGetThumbRect;
	__property OnValidate;
public:
	/* TcxCustomTrackBarProperties.Create */ inline __fastcall virtual TcxTrackBarProperties(System::Classes::TPersistent* AOwner) : TcxCustomTrackBarProperties(AOwner) { }
	
public:
	/* TcxCustomEditProperties.Destroy */ inline __fastcall virtual ~TcxTrackBarProperties() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxTrackBarPositionHintHelper : public Cxcontrols::TcxControlHintHelper
{
	typedef Cxcontrols::TcxControlHintHelper inherited;
	
private:
	Cxclasses::TcxTimer* FPositionHintHidingTimer;
	TcxCustomTrackBarViewInfo* FTrackBarViewInfo;
	void __fastcall PositionHintHidingTimerHandler(System::TObject* Sender);
	
protected:
	virtual bool __fastcall CanShowHint();
	virtual void __fastcall CorrectHintWindowRect(System::Types::TRect &ARect);
	virtual Cxcontrols::TcxControl* __fastcall GetOwnerControl();
	virtual void __fastcall MouseLeave();
	
public:
	__fastcall TcxTrackBarPositionHintHelper(TcxCustomTrackBarViewInfo* AViewInfo);
	__fastcall virtual ~TcxTrackBarPositionHintHelper();
	void __fastcall DisableTimer();
	void __fastcall HidePositionHint();
	void __fastcall SetDelay(int AValue);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxTrackBarController : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool FIsMouseDownOnLeftButton;
	bool FIsMouseDownOnRightButton;
	TcxTrackBarSlideState FSlideState;
	int FStartSelectionPosition;
	int FStartSlidingPosition;
	int FStoredPosition;
	_di_IcxTrackBar FTrackBar;
	Cxclasses::TcxTimer* FTimer;
	void __fastcall CreateTimer();
	void __fastcall DestroyTimer();
	TcxCustomTrackBarProperties* __fastcall GetActiveProperties();
	int __fastcall GetPosition();
	TcxCustomTrackBarProperties* __fastcall GetProperties();
	TcxCustomTrackBarViewInfo* __fastcall GetViewInfo();
	void __fastcall HandleTimer(System::TObject* Sender);
	bool __fastcall IsInplace();
	int __fastcall PressButton(bool AIsInc);
	void __fastcall ProcessButtons(int &ANewPosition, int X, int Y);
	void __fastcall SetNewSelectionPosition(const int ANewPosition);
	void __fastcall SetPosition(int AValue);
	
protected:
	System::Types::TPoint __fastcall GetMouseDownPos();
	virtual int __fastcall GetPositionAfterKeyDown(TcxTrackBarThumbViewInfo* AThumb, System::Word &Key, System::Classes::TShiftState Shift);
	virtual int __fastcall GetPositionAfterSliding(int X, int Y);
	virtual void __fastcall UpdatePos(int AValue, TcxTrackBarThumbViewInfo* AThumb);
	bool __fastcall IsSliding();
	void __fastcall StartSliding(int APosition);
	void __fastcall StopSliding();
	__property int StartSlidingPosition = {read=FStartSlidingPosition, nodefault};
	__property _di_IcxTrackBar TrackBar = {read=FTrackBar};
	
public:
	__fastcall virtual TcxTrackBarController(_di_IcxTrackBar ATrackBar);
	__fastcall virtual ~TcxTrackBarController();
	virtual void __fastcall FocusChanged();
	virtual void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseEnter();
	virtual void __fastcall MouseLeave();
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	__property TcxCustomTrackBarProperties* ActiveProperties = {read=GetActiveProperties};
	__property int Position = {read=GetPosition, write=SetPosition, nodefault};
	__property TcxCustomTrackBarProperties* Properties = {read=GetProperties};
	__property int StoredPosition = {read=FStoredPosition, write=FStoredPosition, nodefault};
	__property TcxCustomTrackBarViewInfo* ViewInfo = {read=GetViewInfo};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTrackBarRangeValueProvider : public Cxaccessibility::TdxRangeValueProvider
{
	typedef Cxaccessibility::TdxRangeValueProvider inherited;
	
private:
	TcxCustomTrackBar* FTrackBar;
	
protected:
	virtual bool __fastcall GetIsReadOnly();
	virtual double __fastcall GetMaximum();
	virtual double __fastcall GetMinimum();
	virtual double __fastcall GetSmallChange();
	virtual double __fastcall GetValue();
	virtual void __fastcall SetValue(double AValue);
	
public:
	__fastcall TdxTrackBarRangeValueProvider(TcxCustomTrackBar* ATrackBar);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxTrackBarRangeValueProvider() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTrackBarAccessibilityHelper : public Cxedit::TdxEditAccessibilityHelper
{
	typedef Cxedit::TdxEditAccessibilityHelper inherited;
	
private:
	TdxTrackBarRangeValueProvider* FRangeValueProvider;
	int __fastcall GetFirstSimpleChildIndex();
	TcxCustomTrackBar* __fastcall GetTrackBar();
	HIDESBASE TcxCustomTrackBarViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual bool __fastcall ChildIsSimpleElement(int AIndex);
	virtual int __fastcall GetChildCount();
	virtual int __fastcall GetRole(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetState(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual Cxaccessibility::TcxAccessibleObjectProperties __fastcall GetSupportedProperties(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual bool __fastcall IsSupportedPattern(int APatternID, /* out */ System::_di_IInterface &AProvider, Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID = (Cxaccessibility::TcxAccessibleSimpleChildElementID)(0x0));
	__property int FirstSimpleChildIndex = {read=GetFirstSimpleChildIndex, nodefault};
	__property TcxCustomTrackBar* TrackBar = {read=GetTrackBar};
	__property TcxCustomTrackBarViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	__fastcall virtual TdxTrackBarAccessibilityHelper(System::TObject* AOwnerObject);
	__fastcall virtual ~TdxTrackBarAccessibilityHelper();
	virtual System::Types::TRect __fastcall GetScreenBounds(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxCustomTrackBar : public Cxedit::TcxCustomEdit
{
	typedef Cxedit::TcxCustomEdit inherited;
	
private:
	TcxTrackBarController* FController;
	HIDESBASE TcxTrackBarStyle* __fastcall GetStyle();
	HIDESBASE void __fastcall SetStyle(TcxTrackBarStyle* Value);
	TcxCustomTrackBarProperties* __fastcall GetProperties();
	HIDESBASE TcxCustomTrackBarProperties* __fastcall GetActiveProperties();
	void __fastcall GetOnGetThumbRect(/* out */ TcxGetThumbRectEvent &AValue);
	HIDESBASE TcxCustomTrackBarViewInfo* __fastcall GetViewInfo();
	HIDESBASE void __fastcall SetProperties(TcxCustomTrackBarProperties* Value);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	
protected:
	virtual TcxTrackBarController* __fastcall CreateController();
	virtual bool __fastcall DefaultParentColor();
	virtual void __fastcall DoValidateDisplayValue(System::Variant &ADisplayValue, Vcl::Controls::TCaption &AErrorText, bool &AError);
	virtual Cxedit::TdxEditAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	virtual System::UnicodeString __fastcall GetDisplayText();
	virtual int __fastcall GetPosition();
	DYNAMIC void __fastcall FocusChanged();
	virtual void __fastcall Initialize();
	virtual void __fastcall InternalSetDisplayValue(const System::Variant &Value);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseEnter(Vcl::Controls::TControl* AControl);
	DYNAMIC void __fastcall MouseLeave(Vcl::Controls::TControl* AControl);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall PopulateSizeProperties(Cxedit::TcxEditSizeProperties &AEditSizeProperties);
	virtual void __fastcall SetInternalDisplayValue(const System::Variant &Value);
	virtual void __fastcall SetPosition(int Value);
	virtual void __fastcall SynchronizeDisplayValue();
	virtual bool __fastcall WantNavigationKeys();
	virtual void __fastcall InternalSetPosition(int Value);
	void __fastcall PostPosition();
	System::Types::TPoint __fastcall GetMouseDownPos();
	__property TcxCustomTrackBarViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	__fastcall virtual TcxCustomTrackBar(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TcxCustomTrackBar();
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TcxCustomTrackBarProperties* ActiveProperties = {read=GetActiveProperties};
	__property int Position = {read=GetPosition, write=SetPosition, default=0};
	__property TcxCustomTrackBarProperties* Properties = {read=GetProperties, write=SetProperties};
	__property TcxTrackBarStyle* Style = {read=GetStyle, write=SetStyle};
	__property Transparent = {default=0};
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxCustomTrackBar(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Cxedit::TcxCustomEdit(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomTrackBar(HWND ParentWindow) : Cxedit::TcxCustomEdit(ParentWindow) { }
	
private:
	void *__IcxTrackBarPostProvider;	// IcxTrackBarPostProvider 
	void *__IcxTrackBar;	// IcxTrackBar 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F61E036A-10F7-486E-9A28-9B22084626AA}
	operator _di_IcxTrackBarPostProvider()
	{
		_di_IcxTrackBarPostProvider intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IcxTrackBarPostProvider*(void) { return (IcxTrackBarPostProvider*)&__IcxTrackBarPostProvider; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {288974F4-38F0-4BED-AB6A-BB9A5476D8D0}
	operator _di_IcxTrackBar()
	{
		_di_IcxTrackBar intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IcxTrackBar*(void) { return (IcxTrackBar*)&__IcxTrackBar; }
	#endif
	
};


class PASCALIMPLEMENTATION TcxTrackBar : public TcxCustomTrackBar
{
	typedef TcxCustomTrackBar inherited;
	
private:
	HIDESBASE TcxTrackBarProperties* __fastcall GetActiveProperties();
	HIDESBASE TcxTrackBarProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(TcxTrackBarProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TcxTrackBarProperties* ActiveProperties = {read=GetActiveProperties};
	
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
	__property Position = {default=0};
	__property TcxTrackBarProperties* Properties = {read=GetProperties, write=SetProperties};
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
	/* TcxCustomTrackBar.Create */ inline __fastcall virtual TcxTrackBar(System::Classes::TComponent* AOwner)/* overload */ : TcxCustomTrackBar(AOwner) { }
	/* TcxCustomTrackBar.Destroy */ inline __fastcall virtual ~TcxTrackBar() { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxTrackBar(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : TcxCustomTrackBar(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxTrackBar(HWND ParentWindow) : TcxCustomTrackBar(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::StaticArray<Cxlookandfeelpainters::TcxTrackBarTicksAlign, 3> TrackBarTicksToTicksAlign;
extern DELPHI_PACKAGE System::StaticArray<Cxlookandfeelpainters::TcxButtonState, 5> TrackBarStateToButtonStates;
}	/* namespace Cxtrackbar */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXTRACKBAR)
using namespace Cxtrackbar;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxtrackbarHPP
