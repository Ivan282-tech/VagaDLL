// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxPC.pas' rev: 35.00 (Windows)

#ifndef CxpcHPP
#define CxpcHPP

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
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.ImgList.hpp>
#include <System.SysUtils.hpp>
#include <System.Contnrs.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Themes.hpp>
#include <dxCore.hpp>
#include <dxCoreGraphics.hpp>
#include <dxCoreClasses.hpp>
#include <cxClasses.hpp>
#include <cxControls.hpp>
#include <cxContainer.hpp>
#include <cxGraphics.hpp>
#include <cxLookAndFeels.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <dxCustomHint.hpp>
#include <cxGeometry.hpp>
#include <dxGDIPlusClasses.hpp>
#include <cxCustomCanvas.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxpc
{
//-- forward type declarations -----------------------------------------------
struct TcxPCOutTabImageAndTextData;
struct TcxPCTabsPosition;
struct TcxPCWOffset;
struct TcxPCDistance;
struct TcxPCIndexInterval;
struct TcxPCImageListRotatedImagesElement;
__interface DELPHIINTERFACE IcxTabControl;
typedef System::DelphiInterface<IcxTabControl> _di_IcxTabControl;
class DELPHICLASS TcxPCCustomElementViewInfo;
class DELPHICLASS TcxPCCustomButtonViewInfo;
class DELPHICLASS TcxPCCustomTabButtonViewInfo;
class DELPHICLASS TcxPCTabButtonViewInfo;
class DELPHICLASS TcxPCTabCloseButtonViewInfo;
class DELPHICLASS TcxPCCustomHeaderButtonViewInfo;
class DELPHICLASS TcxPCHeaderButtonViewInfo;
class DELPHICLASS TcxPCNavigatorButtonViewInfo;
class DELPHICLASS TcxPCButtonViewInfos;
class DELPHICLASS TcxTabViewInfo;
class DELPHICLASS TcxPCNewButtonViewInfo;
class DELPHICLASS TcxTabsViewInfo;
class DELPHICLASS TcxCustomTabControlViewInfo;
class DELPHICLASS TcxTab;
class DELPHICLASS TcxPCNewButton;
class DELPHICLASS TcxTabs;
class DELPHICLASS TcxPCCustomPainter;
class DELPHICLASS TcxPCImageList;
class DELPHICLASS TcxTabSlants;
class DELPHICLASS TcxPCCustomGoDialog;
class DELPHICLASS TcxTabControlDragAndDropObject;
class DELPHICLASS TcxCustomTabControlHitTest;
class DELPHICLASS TcxCustomTabControlHintHelper;
class DELPHICLASS TcxCustomTabControlController;
class DELPHICLASS TcxPCButton;
class DELPHICLASS TcxPCButtons;
class DELPHICLASS TcxPCCustomButtons;
class DELPHICLASS TcxCustomTabControlProperties;
class DELPHICLASS TcxTabControlProperties;
class DELPHICLASS TcxCustomTabControl;
class DELPHICLASS TcxPageControlProperties;
class DELPHICLASS TcxPageControlViewInfo;
class DELPHICLASS TcxPageControl;
class DELPHICLASS TcxTabSheet;
class DELPHICLASS TcxTabControl;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TcxPCOption : unsigned char { pcoAlwaysShowGoDialogButton, pcoCloseButton, pcoFixedTabWidthWhenRotated, pcoGoDialog, pcoGradient, pcoGradientClientArea, pcoNoArrows, pcoRedrawOnResize, pcoSort, pcoTopToBottomText, pcoUsePageColorForTab };

typedef System::Set<TcxPCOption, TcxPCOption::pcoAlwaysShowGoDialogButton, TcxPCOption::pcoUsePageColorForTab> TcxPCOptions;

enum DECLSPEC_DENUM TcxPCButtonMode : unsigned char { cbmNone, cbmActiveTab, cbmEveryTab, cbmActiveAndHoverTabs };

enum DECLSPEC_DENUM TcxPCButtonPosition : unsigned char { pcbpTabs, pcbpHeader, pcbpTabsAndHeader };

enum DECLSPEC_DENUM TcxPCNewButtonMode : unsigned char { nbmNone, nbmTab };

enum DECLSPEC_DENUM TcxTabSlantKind : unsigned char { skCutCorner, skSlant };

enum DECLSPEC_DENUM TcxTabSlantPosition : unsigned char { spLeft, spRight };

typedef System::Set<TcxTabSlantPosition, TcxTabSlantPosition::spLeft, TcxTabSlantPosition::spRight> TcxTabSlantPositions;

typedef int TcxPCStyleID;

enum DECLSPEC_DENUM TcxPCStandardStyle : unsigned char { tsTabs, tsButtons, tsFlatButtons };

enum DECLSPEC_DENUM TcxTabPosition : unsigned char { tpTop, tpBottom, tpLeft, tpRight };

typedef System::TMetaClass* TcxTabSheetClass;

typedef System::TMetaClass* TcxTabViewInfoClass;

typedef System::TMetaClass* TcxTabsViewInfoClass;

typedef System::TMetaClass* TcxCustomTabControlViewInfoClass;

typedef System::TMetaClass* TcxPCPainterClass;

struct DECLSPEC_DRECORD TcxPCOutTabImageAndTextData
{
public:
	System::Types::TRect TabImageRect;
	System::Types::TRect TabTextRect;
	int TabVisibleIndex;
};


typedef void __fastcall (__closure *TcxPCPropertiesDrawTabEvent)(TcxCustomTabControlProperties* AProperties, TcxTab* ATab, bool &DefaultDraw);

typedef void __fastcall (__closure *TcxPCPropertiesDrawTabExEvent)(TcxCustomTabControlProperties* AProperties, TcxTab* ATab, Vcl::Graphics::TFont* Font);

typedef void __fastcall (__closure *TcxGetTabImageEvent)(System::TObject* Sender, int TabIndex, int &ImageIndex);

typedef void __fastcall (__closure *TcxGetTabHintEvent)(System::TObject* Sender, int ATabIndex, System::UnicodeString &AHint, bool &ACanShow);

typedef void __fastcall (__closure *TcxPageChangingEvent)(System::TObject* Sender, TcxTabSheet* NewPage, bool &AllowChange);

typedef void __fastcall (__closure *TcxPCCanCloseEventEx)(System::TObject* Sender, int ATabIndex, bool &ACanClose);

typedef void __fastcall (__closure *TcxPCCloseEvent)(System::TObject* Sender, int ATabIndex);

typedef void __fastcall (__closure *TcxPCTabClickEvent)(System::TObject* Sender, int ATabVisibleIndex, System::Classes::TShiftState AShift);

typedef void __fastcall (__closure *TcxTabChangedEvent)(System::TObject* Sender, int TabID);

typedef void __fastcall (__closure *TcxTabChangingEvent)(System::TObject* Sender, bool &AllowChange);

typedef void __fastcall (__closure *TcxTabAfterPaintEvent)(Cxgraphics::TcxCanvas* ACanvas, TcxTab* ATab, const TcxPCOutTabImageAndTextData &AImageAndTextData);

enum DECLSPEC_DENUM TcxPCNavigatorButton : unsigned char { nbTopLeft, nbBottomRight, nbGoDialog, nbClose };

typedef System::Set<TcxPCNavigatorButton, TcxPCNavigatorButton::nbTopLeft, TcxPCNavigatorButton::nbClose> TcxPCNavigatorButtons;

typedef TcxPCNavigatorButtons TcxPCNavigatorButtonIndex;

enum DECLSPEC_DENUM TcxPCNavigatorButtonState : unsigned char { nbsNormal, nbsPressed, nbsHotTrack, nbsDisabled };

enum DECLSPEC_DENUM TcxPCNavigatorPosition : unsigned char { npLeftTop, npLeftBottom, npRightTop, npRightBottom };

struct DECLSPEC_DRECORD TcxPCTabsPosition
{
public:
	System::Types::TRect ExtendedTabsRect;
	int ExtendedTopOrLeftTabsRectBottomOrRightBorderOffset;
	int ExtendedBottomOrRightTabsRectTopOrLeftBorderOffset;
	int MinDistanceBetweenTopOrLeftAndBottomOrRightExtendedTabsRects;
	int NormalRowWidth;
	System::Types::TRect NormalTabsRect;
};


struct DECLSPEC_DRECORD TcxPCWOffset
{
public:
	int Left;
	int Right;
};


struct DECLSPEC_DRECORD TcxPCDistance
{
public:
	int dw;
	int dh;
};


struct DECLSPEC_DRECORD TcxPCIndexInterval
{
public:
	int Left;
	int Right;
};


typedef System::DynamicArray<TcxPCIndexInterval> TcxPCLineIndexBoundsArray;

typedef int TcxPCTabIndex;

enum DECLSPEC_DENUM TcxPCTabPropertyChanged : unsigned char { tpcNotSpecified, tpcColor, tpcEnabled, tpcFocused, tpcHighlighted, tpcHotTrack, tpcIsMainTab, tpcLayout, tpcPressed, tpcSelected, tpcTracking, tpcVisible };

enum DECLSPEC_DENUM TcxPCTabNotification : unsigned char { tnDeleting };

struct DECLSPEC_DRECORD TcxPCImageListRotatedImagesElement
{
public:
	System::Uitypes::TColor BackgroundColor;
	Cxgraphics::TcxBitmap* Bitmap;
	bool IsBackgroundColorSpecified;
};


typedef System::DynamicArray<TcxPCImageListRotatedImagesElement> TcxPCImageListRotatedImagesElementArray;

__interface  INTERFACE_UUID("{8C8C2262-5419-46E1-BCE0-5A5311C330A0}") IcxTabControl  : public Cxcontrols::IcxControlComponentState 
{
	virtual TcxCustomTabControlController* __fastcall GetController() = 0 ;
	virtual TcxPCCustomPainter* __fastcall GetPainter() = 0 ;
	virtual TcxCustomTabControlProperties* __fastcall GetProperties() = 0 ;
	virtual TcxCustomTabControlViewInfo* __fastcall GetViewInfo() = 0 ;
	virtual bool __fastcall CanDrawParentBackground() = 0 ;
	virtual System::Types::TRect __fastcall GetBoundsRect() = 0 ;
	virtual Cxgraphics::TcxCanvas* __fastcall GetCanvas() = 0 ;
	virtual Vcl::Controls::TWinControl* __fastcall GetControl() = 0 ;
	virtual System::Uitypes::TColor __fastcall GetColor() = 0 ;
	virtual Cxcontrols::TcxDragAndDropObject* __fastcall GetDragAndDropObject() = 0 ;
	virtual Cxcontrols::TcxDragAndDropState __fastcall GetDragAndDropState() = 0 ;
	virtual Vcl::Graphics::TFont* __fastcall GetFont() = 0 ;
	virtual Cxlookandfeels::TcxLookAndFeel* __fastcall GetLookAndFeel() = 0 ;
	virtual void __fastcall InvalidateRect(const System::Types::TRect &R, bool AEraseBackground) = 0 ;
	virtual void __fastcall SetModified() = 0 ;
	virtual bool __fastcall IsEnabled() = 0 ;
	virtual bool __fastcall IsFocused() = 0 ;
	virtual bool __fastcall IsParentBackground() = 0 ;
	virtual void __fastcall RequestLayout() = 0 ;
	__property TcxCustomTabControlController* Controller = {read=GetController};
	__property TcxPCCustomPainter* Painter = {read=GetPainter};
	__property TcxCustomTabControlProperties* Properties = {read=GetProperties};
	__property TcxCustomTabControlViewInfo* ViewInfo = {read=GetViewInfo};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxPCCustomElementViewInfo : public Dxcoreclasses::TcxIUnknownObject
{
	typedef Dxcoreclasses::TcxIUnknownObject inherited;
	
private:
	System::Types::TRect FBounds;
	Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	
protected:
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &AClientBounds);
	virtual System::Types::TRect __fastcall GetAbsoluteBounds();
	virtual TcxCustomTabControlViewInfo* __fastcall GetControlViewInfo() = 0 ;
	virtual System::UnicodeString __fastcall GetHint();
	virtual bool __fastcall GetHitTest(TcxCustomTabControlHitTest* AHitTest);
	virtual int __fastcall GetHitTestIndex() = 0 ;
	virtual bool __fastcall PtInElement(const System::Types::TPoint &APoint);
	virtual void __fastcall SetHitTest(TcxCustomTabControlHitTest* AHitTest);
	
public:
	virtual bool __fastcall HasHintPoint(const System::Types::TPoint &P);
	virtual bool __fastcall IsHintAtMousePos();
	virtual bool __fastcall UseHintHidePause();
	__property System::Types::TRect AbsoluteBounds = {read=GetAbsoluteBounds};
	__property System::Types::TRect Bounds = {read=FBounds, write=FBounds};
	__property TcxCustomTabControlViewInfo* ControlViewInfo = {read=GetControlViewInfo};
	__property System::UnicodeString Hint = {read=GetHint};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=GetScaleFactor};
public:
	/* TObject.Create */ inline __fastcall TcxPCCustomElementViewInfo() : Dxcoreclasses::TcxIUnknownObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxPCCustomElementViewInfo() { }
	
private:
	void *__IcxHintableObject;	// Dxcustomhint::IcxHintableObject 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {228FF1F5-6D0C-40F0-9F7B-8C71CE12CEC8}
	operator Dxcustomhint::_di_IcxHintableObject()
	{
		Dxcustomhint::_di_IcxHintableObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxcustomhint::IcxHintableObject*(void) { return (Dxcustomhint::IcxHintableObject*)&__IcxHintableObject; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxPCCustomButtonViewInfo : public TcxPCCustomElementViewInfo
{
	typedef TcxPCCustomElementViewInfo inherited;
	
private:
	TcxPCNavigatorButtonState FState;
	
protected:
	virtual bool __fastcall CanClick();
	void __fastcall Click();
	virtual void __fastcall DoClick();
	virtual void __fastcall Invalidate();
	virtual System::UnicodeString __fastcall GetHint();
	virtual System::Uitypes::TImageIndex __fastcall GetImageIndex();
	virtual bool __fastcall PtInElement(const System::Types::TPoint &APoint);
	virtual TcxPCNavigatorButtonState __fastcall GetState();
	virtual void __fastcall SetState(TcxPCNavigatorButtonState AValue);
	
public:
	__fastcall virtual ~TcxPCCustomButtonViewInfo();
	virtual int __fastcall GetWidth() = 0 ;
	virtual bool __fastcall HasImage();
	__property System::Uitypes::TImageIndex ImageIndex = {read=GetImageIndex, nodefault};
	__property TcxPCNavigatorButtonState State = {read=GetState, write=SetState, nodefault};
public:
	/* TObject.Create */ inline __fastcall TcxPCCustomButtonViewInfo() : TcxPCCustomElementViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxPCCustomTabButtonViewInfo : public TcxPCCustomButtonViewInfo
{
	typedef TcxPCCustomButtonViewInfo inherited;
	
private:
	TcxTabViewInfo* FTabViewInfo;
	
protected:
	virtual System::Types::TRect __fastcall GetAbsoluteBounds();
	virtual TcxCustomTabControlViewInfo* __fastcall GetControlViewInfo();
	virtual TcxPCNavigatorButtonState __fastcall GetState();
	
public:
	__fastcall TcxPCCustomTabButtonViewInfo(TcxTabViewInfo* ATabViewInfo);
	__property TcxTabViewInfo* TabViewInfo = {read=FTabViewInfo};
public:
	/* TcxPCCustomButtonViewInfo.Destroy */ inline __fastcall virtual ~TcxPCCustomTabButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxPCTabButtonViewInfo : public TcxPCCustomTabButtonViewInfo
{
	typedef TcxPCCustomTabButtonViewInfo inherited;
	
private:
	TcxPCButton* FButton;
	
protected:
	virtual void __fastcall DoClick();
	virtual int __fastcall GetHitTestIndex();
	virtual System::Uitypes::TImageIndex __fastcall GetImageIndex();
	virtual TcxPCNavigatorButtonState __fastcall GetState();
	
public:
	__fastcall TcxPCTabButtonViewInfo(TcxTabViewInfo* ATabViewInfo, TcxPCButton* AButton);
	virtual int __fastcall GetWidth();
	__property TcxPCButton* Button = {read=FButton};
public:
	/* TcxPCCustomButtonViewInfo.Destroy */ inline __fastcall virtual ~TcxPCTabButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxPCTabCloseButtonViewInfo : public TcxPCCustomTabButtonViewInfo
{
	typedef TcxPCCustomTabButtonViewInfo inherited;
	
protected:
	virtual void __fastcall DoClick();
	virtual int __fastcall GetHitTestIndex();
	
public:
	virtual int __fastcall GetWidth();
public:
	/* TcxPCCustomTabButtonViewInfo.Create */ inline __fastcall TcxPCTabCloseButtonViewInfo(TcxTabViewInfo* ATabViewInfo) : TcxPCCustomTabButtonViewInfo(ATabViewInfo) { }
	
public:
	/* TcxPCCustomButtonViewInfo.Destroy */ inline __fastcall virtual ~TcxPCTabCloseButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxPCCustomHeaderButtonViewInfo : public TcxPCCustomButtonViewInfo
{
	typedef TcxPCCustomButtonViewInfo inherited;
	
private:
	TcxCustomTabControlViewInfo* FTabControlViewInfo;
	
protected:
	virtual bool __fastcall AllowHotTrack();
	virtual int __fastcall GetHitTestIndex();
	virtual TcxCustomTabControlViewInfo* __fastcall GetControlViewInfo();
	
public:
	__fastcall TcxPCCustomHeaderButtonViewInfo(TcxCustomTabControlViewInfo* ATabControlViewInfo);
	virtual bool __fastcall IsNavigatorButton()/* overload */;
	virtual bool __fastcall IsNavigatorButton(TcxPCNavigatorButtons AButtonTypes)/* overload */;
public:
	/* TcxPCCustomButtonViewInfo.Destroy */ inline __fastcall virtual ~TcxPCCustomHeaderButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxPCHeaderButtonViewInfo : public TcxPCCustomHeaderButtonViewInfo
{
	typedef TcxPCCustomHeaderButtonViewInfo inherited;
	
private:
	TcxPCButton* FButton;
	
protected:
	virtual void __fastcall DoClick();
	virtual System::Uitypes::TImageIndex __fastcall GetImageIndex();
	virtual TcxPCNavigatorButtonState __fastcall GetState();
	
public:
	__fastcall TcxPCHeaderButtonViewInfo(TcxCustomTabControlViewInfo* ATabControlViewInfo, TcxPCButton* AButton);
	virtual int __fastcall GetWidth();
	__property TcxPCButton* Button = {read=FButton};
public:
	/* TcxPCCustomButtonViewInfo.Destroy */ inline __fastcall virtual ~TcxPCHeaderButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxPCNavigatorButtonViewInfo : public TcxPCCustomHeaderButtonViewInfo
{
	typedef TcxPCCustomHeaderButtonViewInfo inherited;
	
private:
	TcxPCNavigatorButton FButtonType;
	
protected:
	virtual bool __fastcall AllowHotTrack();
	virtual void __fastcall DoClick();
	virtual int __fastcall GetHitTestIndex();
	
public:
	__fastcall TcxPCNavigatorButtonViewInfo(TcxCustomTabControlViewInfo* ATabControlViewInfo, TcxPCNavigatorButton AButtonType);
	virtual int __fastcall GetWidth();
	virtual bool __fastcall IsNavigatorButton(TcxPCNavigatorButtons AButtonTypes)/* overload */;
	__property TcxPCNavigatorButton ButtonType = {read=FButtonType, nodefault};
public:
	/* TcxPCCustomButtonViewInfo.Destroy */ inline __fastcall virtual ~TcxPCNavigatorButtonViewInfo() { }
	
	/* Hoisted overloads: */
	
public:
	inline bool __fastcall  IsNavigatorButton(){ return TcxPCCustomHeaderButtonViewInfo::IsNavigatorButton(); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxPCButtonViewInfos : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TcxPCCustomTabButtonViewInfo* operator[](int Index) { return this->Items[Index]; }
	
private:
	Cxclasses::TcxObjectList* FItems;
	TcxTabViewInfo* FTabViewInfo;
	int __fastcall GetCount();
	TcxPCCustomTabButtonViewInfo* __fastcall GetItems(int Index);
	
protected:
	TcxPCTabCloseButtonViewInfo* __fastcall GetCloseButtonInfo();
	
public:
	__fastcall TcxPCButtonViewInfos(TcxTabViewInfo* ATabViewInfo);
	__fastcall virtual ~TcxPCButtonViewInfos();
	void __fastcall Add(TcxPCCustomTabButtonViewInfo* AButtonViewInfo);
	bool __fastcall GetHitTest(TcxCustomTabControlHitTest* AHitTest);
	__property int Count = {read=GetCount, nodefault};
	__property TcxPCCustomTabButtonViewInfo* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxTabViewInfo : public TcxPCCustomElementViewInfo
{
	typedef TcxPCCustomElementViewInfo inherited;
	
private:
	TcxPCButtonViewInfos* FButtonInfos;
	TcxTab* FTab;
	TcxTabsViewInfo* FTabsViewInfo;
	System::Types::TPoint FNormalPosition;
	int FNormalWidth;
	int FRow;
	int FVisibleRow;
	System::Types::TRect FContentRect;
	System::Types::TRect FImageRect;
	bool FIsMultiline;
	bool FIsTextTooLong;
	System::Types::TRect FTextRect;
	System::Types::TSize FTextSize;
	void __fastcall TabDestroyHandler(System::TObject* Sender, const void *AEventArgs);
	bool __fastcall CheckHasButton(TcxPCButtonMode AShowMode);
	System::Types::TRect __fastcall GetAbsolutePartRect(const System::Types::TRect &APartRect);
	int __fastcall GetButtonsCount();
	Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	System::UnicodeString __fastcall GetCaption();
	TcxPCTabCloseButtonViewInfo* __fastcall GetCloseButtonInfo();
	System::Uitypes::TColor __fastcall GetColor();
	TcxPCWOffset __fastcall GetContentOffset();
	System::Types::TRect __fastcall GetFullRect();
	bool __fastcall GetEnabled();
	int __fastcall GetImageAreaWidth();
	int __fastcall GetIndex();
	int __fastcall GetImageIndex();
	int __fastcall GetNormalLongitudinalSize();
	System::Types::TRect __fastcall GetNormalRect();
	TcxPCCustomPainter* __fastcall GetPainter();
	TcxTabPosition __fastcall GetPaintingPosition();
	int __fastcall GetPaintingPositionIndex();
	TcxCustomTabControlProperties* __fastcall GetProperties();
	bool __fastcall GetShowAccelChar();
	System::Types::TRect __fastcall GetTabRect();
	System::Types::TRect __fastcall GetTabImageAndTextRect();
	System::Types::TSize __fastcall GetTextSize();
	int __fastcall GetTextHeight();
	int __fastcall GetTextWidth();
	int __fastcall GetVisibleIndex();
	System::Types::TRect __fastcall GetVisibleRect();
	bool __fastcall IsImagesAssigned();
	
protected:
	void __fastcall PrepareCanvasFont(Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall RecreateButtonViewInfos();
	void __fastcall CalculateAngleDependentPartBounds(System::Types::TRect &ACalcRect, const int APartHeight, const System::Types::TRect &ADrawOffset);
	void __fastcall CalculateButtonHorizontalPositions();
	void __fastcall CalculateButtonVerticalPositions();
	void __fastcall CalculateContentRect();
	void __fastcall CalculateImageAndTextHorizontalPositions();
	void __fastcall CalculateImageHorizontalPosition();
	void __fastcall CalculateImageVerticalPosition();
	void __fastcall CalculateIsTextTooLong();
	void __fastcall CalculateHorizontalPositions();
	void __fastcall CalculateTextVerticalPosition();
	int __fastcall GetContentHorizontalOffset(int ATabWidth, int AContentWidth);
	virtual TcxCustomTabControlViewInfo* __fastcall GetControlViewInfo();
	System::Types::TRect __fastcall GetScrollingArea();
	virtual System::UnicodeString __fastcall GetHint();
	virtual int __fastcall GetHitTestIndex();
	virtual bool __fastcall PtInElement(const System::Types::TPoint &APoint);
	virtual void __fastcall SetHitTest(TcxCustomTabControlHitTest* AHitTest);
	virtual bool __fastcall CanClick();
	virtual bool __fastcall CanDrag();
	virtual bool __fastcall CanFocus();
	virtual bool __fastcall CanMultiSelect();
	virtual bool __fastcall CanSelect();
	void __fastcall Click(System::Classes::TShiftState AShift);
	virtual void __fastcall DoHandleDialogChar(int Key);
	virtual void __fastcall DoSelect(bool AAddToSelected);
	virtual void __fastcall DoSetFocus();
	virtual void __fastcall DoClick(System::Classes::TShiftState AShift);
	void __fastcall DoRightToLeftContentConversion(const System::Types::TRect &R);
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &AClientBounds);
	bool __fastcall HandleDialogChar(int Key);
	void __fastcall Select(bool AAddToSelected);
	void __fastcall SetFocus();
	bool __fastcall IsCompactMode();
	bool __fastcall IsNewButton();
	virtual bool __fastcall HasPressedState();
	__property Cxgraphics::TcxCanvas* Canvas = {read=GetCanvas};
	__property int NormalLongitudinalSize = {read=GetNormalLongitudinalSize, nodefault};
	__property System::Types::TPoint NormalPosition = {read=FNormalPosition, write=FNormalPosition};
	__property int NormalWidth = {read=FNormalWidth, write=FNormalWidth, nodefault};
	__property int TextHeight = {read=GetTextHeight, nodefault};
	__property int TextWidth = {read=GetTextWidth, nodefault};
	
public:
	__fastcall virtual TcxTabViewInfo(TcxTab* ATab, TcxTabsViewInfo* ATabsViewInfo);
	__fastcall virtual ~TcxTabViewInfo();
	bool __fastcall ActuallyEnabled();
	bool __fastcall ActuallyVisible();
	bool __fastcall AllowMultilineCaption();
	virtual bool __fastcall HasButton(TcxPCButton* AButton);
	bool __fastcall HasButtons();
	bool __fastcall HasCaption();
	virtual bool __fastcall HasCloseButton();
	bool __fastcall HasImage();
	bool __fastcall IsActive();
	bool __fastcall IsFocused();
	bool __fastcall IsHighlighted();
	bool __fastcall IsHotTrack();
	bool __fastcall IsMainTab();
	bool __fastcall IsPressed();
	bool __fastcall IsSelected();
	bool __fastcall IsTracking();
	virtual bool __fastcall IsVisibleForGoDialog();
	bool __fastcall IsButtonsPlacedFirst();
	virtual int __fastcall GetDefinedWidth();
	int __fastcall GetLimitedWidth();
	Cxcustomcanvas::TcxRotationAngle __fastcall GetRelativeTextRotationAngle();
	void __fastcall CalculateNormalWidth();
	void __fastcall CalculateParts();
	virtual void __fastcall CorrectTabNormalWidth(int &AValue);
	__property TcxPCButtonViewInfos* ButtonInfos = {read=FButtonInfos};
	__property int ButtonsCount = {read=GetButtonsCount, nodefault};
	__property System::UnicodeString Caption = {read=GetCaption};
	__property TcxPCTabCloseButtonViewInfo* CloseButtonInfo = {read=GetCloseButtonInfo};
	__property System::Uitypes::TColor Color = {read=GetColor, nodefault};
	__property bool Enabled = {read=GetEnabled, nodefault};
	__property System::Types::TRect FullRect = {read=GetFullRect};
	__property int ImageIndex = {read=GetImageIndex, nodefault};
	__property System::Types::TRect ImageRect = {read=FImageRect};
	__property int Index = {read=GetIndex, nodefault};
	__property System::Types::TRect NormalRect = {read=GetNormalRect};
	__property TcxPCCustomPainter* Painter = {read=GetPainter};
	__property TcxTabPosition PaintingPosition = {read=GetPaintingPosition, nodefault};
	__property int PaintingPositionIndex = {read=GetPaintingPositionIndex, nodefault};
	__property TcxCustomTabControlProperties* Properties = {read=GetProperties};
	__property bool ShowAccelChar = {read=GetShowAccelChar, nodefault};
	__property TcxTab* Tab = {read=FTab};
	__property TcxTabsViewInfo* TabsViewInfo = {read=FTabsViewInfo};
	__property System::Types::TRect TextRect = {read=FTextRect};
	__property int VisibleIndex = {read=GetVisibleIndex, nodefault};
	__property System::Types::TRect VisibleRect = {read=GetVisibleRect};
	__property int VisibleRow = {read=FVisibleRow, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxPCNewButtonViewInfo : public TcxTabViewInfo
{
	typedef TcxTabViewInfo inherited;
	
private:
	TcxPCNewButton* __fastcall GetButton();
	
protected:
	virtual bool __fastcall CanClick();
	virtual bool __fastcall CanDrag();
	virtual bool __fastcall CanFocus();
	virtual bool __fastcall CanMultiSelect();
	virtual bool __fastcall CanSelect();
	virtual void __fastcall DoClick(System::Classes::TShiftState AShift);
	__property TcxPCNewButton* Button = {read=GetButton};
	
public:
	virtual void __fastcall CorrectTabNormalWidth(int &AValue);
	virtual int __fastcall GetDefinedWidth();
	virtual bool __fastcall HasButton(TcxPCButton* AButton);
	virtual bool __fastcall HasCloseButton();
	virtual bool __fastcall IsVisibleForGoDialog();
public:
	/* TcxTabViewInfo.Create */ inline __fastcall virtual TcxPCNewButtonViewInfo(TcxTab* ATab, TcxTabsViewInfo* ATabsViewInfo) : TcxTabViewInfo(ATab, ATabsViewInfo) { }
	/* TcxTabViewInfo.Destroy */ inline __fastcall virtual ~TcxPCNewButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxTabsViewInfo : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TcxTabViewInfo* operator[](int Index) { return this->ViewInfos[Index]; }
	
private:
	TcxCustomTabControlViewInfo* FControlViewInfo;
	TcxTabs* FTabs;
	System::Contnrs::TObjectList* FViewInfos;
	bool FNeedCheckTabIndex;
	bool FNeedRecreateViewInfos;
	int FTabNormalHeight;
	void __fastcall TabsChangedHandler(System::TObject* Sender, const void *AEventArgs);
	void __fastcall TabsDestroyHandler(System::TObject* Sender, const void *AEventArgs);
	int __fastcall GetViewInfoCount();
	TcxTabViewInfo* __fastcall GetViewInfo(int Index);
	
protected:
	void __fastcall AddViewInfo(TcxTabViewInfo* AViewInfo);
	int __fastcall GetMaxMainTabIndex();
	int __fastcall IndexOf(TcxTabViewInfo* AViewInfo);
	virtual void __fastcall CreateViewInfos();
	virtual void __fastcall DestroyViewInfos();
	void __fastcall RecreateButtonViewInfos();
	void __fastcall RecreateViewInfos();
	void __fastcall ResetCachedValues();
	void __fastcall CheckTabIndex();
	bool __fastcall CalculateHitTest(TcxCustomTabControlHitTest* AHitTest);
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &AClientBounds);
	void __fastcall RepaintTab(int ATabVisibleIndex, TcxPCTabPropertyChanged ATabPropertyChanged);
	bool __fastcall HandleDialogChar(int Key);
	__property int TabNormalHeight = {read=FTabNormalHeight, nodefault};
	
public:
	__fastcall virtual TcxTabsViewInfo(TcxTabs* ATabs, TcxCustomTabControlViewInfo* AControlViewInfo);
	__fastcall virtual ~TcxTabsViewInfo();
	void __fastcall CalculateNormalSizes();
	void __fastcall CalculateTabParts();
	virtual int __fastcall GetTabDefaultHeight();
	__property TcxCustomTabControlViewInfo* ControlViewInfo = {read=FControlViewInfo};
	__property TcxTabs* Tabs = {read=FTabs};
	__property int ViewInfoCount = {read=GetViewInfoCount, nodefault};
	__property TcxTabViewInfo* ViewInfos[int Index] = {read=GetViewInfo/*, default*/};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxCustomTabControlViewInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Types::TRect FExtendedBottomOrRightTabsRect;
	System::Types::TRect FExtendedTopOrLeftTabsRect;
	int FFirstTabVisibleIndex;
	int FFocusedTabVisibleIndex;
	TcxPCCustomHeaderButtonViewInfo* FHotTrackNavigatorButton;
	TcxPCCustomTabButtonViewInfo* FHotTrackTabButton;
	int FHotTrackTabVisibleIndex;
	_di_IcxTabControl FIControl;
	bool FIsCustomTextColorAssigned;
	bool FIsLastTabFullyVisible;
	int FLastTabVisibleIndex;
	int FMainTabVisibleIndex;
	int FMaxTabCaptionWidth;
	System::TObject* FOwner;
	TcxPCCustomHeaderButtonViewInfo* FPressedNavigatorButton;
	TcxPCCustomTabButtonViewInfo* FPressedTabButton;
	int FPressedTabVisibleIndex;
	int FRowCount;
	int FRowHeight;
	Cxgeometry::TdxScaleFactor* FScaleFactor;
	int FTabButtonHeight;
	int FTabCalculatingIndex;
	TcxPCTabsPosition FTabsPosition;
	TcxTabsViewInfo* FTabsViewInfo;
	int FTopOrLeftPartRowCount;
	int FTrackingTabVisibleIndex;
	bool FUpdating;
	TcxTabAfterPaintEvent FOnAfterPaintTab;
	int FHeaderButtonHeight;
	TcxPCNavigatorButtons FNavigatorButtons;
	System::Contnrs::TObjectList* FNavigatorButtonInfos;
	bool __fastcall CanPressButton(TcxPCNavigatorButton AButton);
	System::Types::TRect __fastcall GetBoundsRect();
	Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	System::Types::TRect __fastcall GetClientRect();
	System::Uitypes::TColor __fastcall GetColor();
	System::Types::TRect __fastcall GetControlBounds();
	TcxCustomTabControlController* __fastcall GetController();
	int __fastcall GetFocusedTabVisibleIndex();
	Vcl::Graphics::TFont* __fastcall GetFont();
	int __fastcall GetHeight();
	bool __fastcall GetHideTabs();
	int __fastcall GetImageBorder();
	int __fastcall GetLineWidth(const TcxPCLineIndexBoundsArray ALineIndexBoundsA, int ALineNumber, int ATabsDistance);
	int __fastcall GetMainTabIndex();
	bool __fastcall GetMultiLine();
	bool __fastcall GetMultiLineTabCaptions();
	int __fastcall GetNavigatorButtonCount();
	TcxPCCustomHeaderButtonViewInfo* __fastcall GetNavigatorButtonInfos(int Index);
	TcxPCNavigatorButtons __fastcall GetNavigatorButtons();
	TcxPCNavigatorPosition __fastcall GetNavigatorPosition();
	TcxPCOptions __fastcall GetOptions();
	System::Types::TRect __fastcall GetPageClientRect();
	System::Types::TRect __fastcall GetPageClientRectOffset();
	System::Types::TRect __fastcall GetPageFrameRect();
	System::Types::TRect __fastcall GetPageFrameRectOffset();
	TcxPCCustomPainter* __fastcall GetPainter();
	TcxCustomTabControlProperties* __fastcall GetProperties();
	bool __fastcall GetRaggedRight();
	bool __fastcall GetShowFrame();
	short __fastcall GetTabHeight();
	TcxTabPosition __fastcall GetTabPosition();
	System::Types::TRect __fastcall GetTabsAreaRect();
	TcxTabSlantPositions __fastcall GetTabSlantPositions();
	TcxTabSlants* __fastcall GetTabSlants();
	bool __fastcall GetTabsScroll();
	short __fastcall GetTabWidth();
	int __fastcall GetWidth();
	bool __fastcall IsInverseNavigatorButtonsOrder();
	void __fastcall RearrangeRows();
	void __fastcall ResetHotTrack();
	void __fastcall SetFocusedTabVisibleIndex(int Value);
	void __fastcall SetHotTrackTabButton(TcxPCCustomTabButtonViewInfo* const Value);
	void __fastcall SetHotTrackNavigatorButton(TcxPCCustomHeaderButtonViewInfo* const Value);
	void __fastcall SetHotTrackTabVisibleIndex(int Value);
	void __fastcall SetMainTabVisibleIndex(int Value);
	void __fastcall CreateHeaderButtons();
	void __fastcall SetPressedNavigatorButton(TcxPCCustomHeaderButtonViewInfo* const Value);
	void __fastcall SetPressedTabButton(TcxPCCustomTabButtonViewInfo* const Value);
	void __fastcall SetPressedTabVisibleIndex(int Value);
	void __fastcall SetTrackingTabVisibleIndex(int Value);
	void __fastcall SynchronizeHotTrackStates(System::Classes::TShiftState Shift);
	void __fastcall UpdateButtonsState();
	void __fastcall UpdateNavigatorButtons(bool AOnlyObligatoryButtons);
	void __fastcall UpdateTabPosition(bool AShowButtons);
	
protected:
	void __fastcall BeginCalculate();
	void __fastcall EndCalculate();
	bool __fastcall IsUpdating();
	TcxTabViewInfo* __fastcall GetTabViewInfo(TcxTab* ATab);
	int __fastcall GetTabVisibleIndex(TcxTab* ATab);
	virtual bool __fastcall CanFocusOnClick(int X, int Y);
	virtual TcxPCPainterClass __fastcall GetPainterClass();
	void __fastcall CalculateHitTest(TcxCustomTabControlHitTest* AHitTest);
	void __fastcall CalculateLongitudinalTabPositions();
	void __fastcall CalculateRowHeight();
	void __fastcall CalculateRowPositions();
	void __fastcall CalculateTabsPositions();
	virtual void __fastcall DoCalculate();
	virtual int __fastcall DoGetTabIndex();
	virtual void __fastcall DoSetTabIndex(int Value);
	int __fastcall GetTabIndex();
	void __fastcall SetTabIndex(int Value);
	virtual void __fastcall AfterPaintTab(Cxgraphics::TcxCanvas* ACanvas, TcxTab* ATab, const TcxPCOutTabImageAndTextData &AImageAndTextData);
	virtual bool __fastcall ArrowButtonClick(TcxPCNavigatorButton ANavigatorButton);
	void __fastcall ButtonDestroying(TcxPCCustomElementViewInfo* AElementInfo);
	void __fastcall ElementDestroying(TcxPCCustomElementViewInfo* AElementInfo);
	void __fastcall CorrectFirstTabVisibleIndex(int ATabVisibleIndex);
	virtual System::Uitypes::TColor __fastcall GetActivePageColor();
	TcxPCNavigatorButtonViewInfo* __fastcall GetNavigatorButtonInfoByType(TcxPCNavigatorButton AType);
	int __fastcall GetNextFocusedTabVisibleIndex(int ACurrentTabVisibleIndex, int ADelta, bool ACycle, bool AOnlyAllowSelectedTabs);
	virtual System::Uitypes::TColor __fastcall GetTabColor(int ATabVisibleIndex);
	System::Types::TRect __fastcall GetTabExtendedTabsRect(TcxTabViewInfo* ATabViewInfo)/* overload */;
	System::Types::TRect __fastcall GetTabExtendedTabsRect(int ATabVisibleIndex)/* overload */;
	int __fastcall GetTabImageAreaWidth();
	int __fastcall GetTabImageAreaHeight();
	void __fastcall InitializeLineBoundsA(TcxPCLineIndexBoundsArray &ALineIndexBoundsA, int AFirstIndex, int ALastIndex);
	virtual bool __fastcall HasActivePage();
	virtual bool __fastcall HasBorders();
	void __fastcall MakeTabVisible(int ATabVisibleIndex);
	void __fastcall PlaceVisibleTabsOnRows(int ATabsWidth, int ATabsDistance);
	void __fastcall RepaintTab(int ATabVisibleIndex, TcxPCTabPropertyChanged ATabPropertyChanged);
	void __fastcall SetMainTab();
	void __fastcall TabDestroying(TcxTabViewInfo* ATabViewInfo);
	void __fastcall TabDown(int ATabVisibleIndex, System::Classes::TShiftState AShift);
	void __fastcall TabUp(int ATabVisibleIndex, System::Classes::TShiftState AShift);
	virtual bool __fastcall UseActivePageColor();
	void __fastcall DestroyTabs();
	int __fastcall ActuallyRotatedTabsMaxWidth();
	bool __fastcall AllowHotTrack();
	bool __fastcall AllowMultiSelect();
	bool __fastcall AllowDisabledTabAccess();
	bool __fastcall CanMouseWheel(const System::Types::TPoint &AMousePos);
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &AClientBounds);
	bool __fastcall HasNavigatorButton(TcxPCNavigatorButton AType);
	bool __fastcall PtInTab(int ATabVisibleIndex, int X, int Y);
	bool __fastcall IsCustomTextColorAssigned();
	bool __fastcall IsHeaderButtonImagesAssigned();
	bool __fastcall IsTabFullVisible(int ATabVisibleIndex);
	bool __fastcall IsSpecialAlignment();
	bool __fastcall IsTooSmallControlSize();
	bool __fastcall IsTabActuallyVisible(TcxTabViewInfo* ATabViewInfo);
	bool __fastcall IsTabAccessible(int AIndex);
	bool __fastcall IsTabButtonImagesAssigned();
	bool __fastcall IsTabImagesAssigned();
	bool __fastcall IsTabVisibleIndexValid(int AIndex);
	bool __fastcall PtInScrollingArea(const System::Types::TPoint &P, int &ADirection);
	__property TcxCustomTabControlController* Controller = {read=GetController};
	__property TcxPCCustomHeaderButtonViewInfo* HotTrackNavigatorButton = {read=FHotTrackNavigatorButton, write=SetHotTrackNavigatorButton};
	__property TcxPCCustomTabButtonViewInfo* HotTrackTabButton = {read=FHotTrackTabButton, write=SetHotTrackTabButton};
	__property int HotTrackTabVisibleIndex = {read=FHotTrackTabVisibleIndex, write=SetHotTrackTabVisibleIndex, nodefault};
	__property int LastTabVisibleIndex = {read=FLastTabVisibleIndex, write=FLastTabVisibleIndex, nodefault};
	__property int MainTabIndex = {read=GetMainTabIndex, nodefault};
	__property System::TObject* Owner = {read=FOwner};
	__property System::Types::TRect PageFrameRect = {read=GetPageFrameRect};
	__property System::Types::TRect PageFrameRectOffset = {read=GetPageFrameRectOffset};
	__property TcxPCCustomPainter* Painter = {read=GetPainter};
	__property TcxPCCustomHeaderButtonViewInfo* PressedNavigatorButton = {read=FPressedNavigatorButton, write=SetPressedNavigatorButton};
	__property TcxPCCustomTabButtonViewInfo* PressedTabButton = {read=FPressedTabButton, write=SetPressedTabButton};
	__property int PressedTabVisibleIndex = {read=FPressedTabVisibleIndex, write=SetPressedTabVisibleIndex, nodefault};
	__property int RowHeight = {read=FRowHeight, nodefault};
	__property int TrackingTabVisibleIndex = {read=FTrackingTabVisibleIndex, write=SetTrackingTabVisibleIndex, nodefault};
	__property TcxTabAfterPaintEvent OnAfterPaintTab = {read=FOnAfterPaintTab, write=FOnAfterPaintTab};
	
public:
	__fastcall virtual TcxCustomTabControlViewInfo(System::TObject* AOwner);
	__fastcall virtual ~TcxCustomTabControlViewInfo();
	void __fastcall Calculate();
	bool __fastcall ActuallyRotate();
	bool __fastcall CanDrawParentBackground();
	int __fastcall GetHeaderButtonsDistance(TcxPCCustomHeaderButtonViewInfo* AButtonInfo1, TcxPCCustomHeaderButtonViewInfo* AButtonInfo2);
	Cxlookandfeels::TcxLookAndFeel* __fastcall GetLookAndFeel();
	int __fastcall GetOptimalSize();
	virtual System::Classes::TComponent* __fastcall GetPopupOwner();
	System::Types::TSize __fastcall GetTabImageSize();
	Cxcustomcanvas::TcxRotationAngle __fastcall GetTextRotationAngle();
	int __fastcall GetSizeDeficit();
	bool __fastcall HasTabCloseButtons();
	bool __fastcall HasTabButtons();
	int __fastcall IndexOfTabAt(int X, int Y);
	void __fastcall InitializeLineBoundsArray(TcxPCLineIndexBoundsArray &ALineIndexBoundsA);
	void __fastcall InitializeVisibleTabRange(int &AFirstIndex, int &ALastIndex);
	void __fastcall InvalidateRect(const System::Types::TRect &R, bool EraseBackground);
	bool __fastcall IsBottomToTopAlignment();
	bool __fastcall IsEnabled();
	bool __fastcall IsFocused();
	bool __fastcall IsNativePainting();
	bool __fastcall IsRightToLeftAlignment();
	bool __fastcall IsTabsContainer();
	bool __fastcall IsTabsOnBothSides();
	bool __fastcall IsTabsVisible();
	virtual bool __fastcall IsTransparent();
	bool __fastcall IsVerticalText();
	bool __fastcall ParentBackground();
	virtual void __fastcall PrepareTabCanvasFont(TcxTabViewInfo* ATabViewInfo, Cxgraphics::TcxCanvas* ACanvas);
	int __fastcall VisibleIndexOfTabAt(int X, int Y);
	virtual bool __fastcall UseRightToLeftAlignment();
	virtual bool __fastcall UseRightToLeftReading();
	__property System::Types::TRect BoundsRect = {read=GetBoundsRect};
	__property Cxgraphics::TcxCanvas* Canvas = {read=GetCanvas};
	__property System::Types::TRect ClientRect = {read=GetClientRect};
	__property System::Uitypes::TColor Color = {read=GetColor, nodefault};
	__property System::Types::TRect ControlBounds = {read=GetControlBounds};
	__property int FirstTabVisibleIndex = {read=FFirstTabVisibleIndex, write=FFirstTabVisibleIndex, nodefault};
	__property int FocusedTabVisibleIndex = {read=GetFocusedTabVisibleIndex, write=SetFocusedTabVisibleIndex, nodefault};
	__property Vcl::Graphics::TFont* Font = {read=GetFont};
	__property int HeaderButtonHeight = {read=FHeaderButtonHeight, nodefault};
	__property int Height = {read=GetHeight, nodefault};
	__property bool HideTabs = {read=GetHideTabs, nodefault};
	__property _di_IcxTabControl IControl = {read=FIControl};
	__property int ImageBorder = {read=GetImageBorder, nodefault};
	__property int MainTabVisibleIndex = {read=FMainTabVisibleIndex, write=SetMainTabVisibleIndex, nodefault};
	__property bool MultiLine = {read=GetMultiLine, nodefault};
	__property bool MultiLineTabCaptions = {read=GetMultiLineTabCaptions, nodefault};
	__property int NavigatorButtonCount = {read=GetNavigatorButtonCount, nodefault};
	__property TcxPCNavigatorButtonViewInfo* NavigatorButtonInfoByType[TcxPCNavigatorButton AType] = {read=GetNavigatorButtonInfoByType};
	__property TcxPCCustomHeaderButtonViewInfo* NavigatorButtonInfos[int Index] = {read=GetNavigatorButtonInfos};
	__property TcxPCNavigatorButtons NavigatorButtons = {read=GetNavigatorButtons, nodefault};
	__property TcxPCNavigatorPosition NavigatorPosition = {read=GetNavigatorPosition, nodefault};
	__property TcxPCOptions Options = {read=GetOptions, nodefault};
	__property System::Types::TRect PageClientRect = {read=GetPageClientRect};
	__property System::Types::TRect PageClientRectOffset = {read=GetPageClientRectOffset};
	__property TcxCustomTabControlProperties* Properties = {read=GetProperties};
	__property bool RaggedRight = {read=GetRaggedRight, nodefault};
	__property int RowCount = {read=FRowCount, nodefault};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=FScaleFactor};
	__property bool ShowFrame = {read=GetShowFrame, nodefault};
	__property int TabButtonHeight = {read=FTabButtonHeight, nodefault};
	__property System::Uitypes::TColor TabColors[int ATabVisibleIndex] = {read=GetTabColor};
	__property short TabHeight = {read=GetTabHeight, nodefault};
	__property int TabIndex = {read=GetTabIndex, write=SetTabIndex, nodefault};
	__property TcxTabPosition TabPosition = {read=GetTabPosition, nodefault};
	__property System::Types::TRect TabsAreaRect = {read=GetTabsAreaRect};
	__property TcxTabSlants* TabSlants = {read=GetTabSlants};
	__property TcxTabSlantPositions TabSlantPositions = {read=GetTabSlantPositions, nodefault};
	__property bool TabsScroll = {read=GetTabsScroll, nodefault};
	__property TcxTabsViewInfo* TabsViewInfo = {read=FTabsViewInfo};
	__property short TabWidth = {read=GetTabWidth, nodefault};
	__property int TopOrLeftPartRowCount = {read=FTopOrLeftPartRowCount, nodefault};
	__property int Width = {read=GetWidth, nodefault};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxTab : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FAllowCloseButton;
	System::UnicodeString FCaption;
	System::Uitypes::TColor FColor;
	Cxclasses::TcxEventHandlerCollection* FDestroyHandlers;
	bool FEnabled;
	System::Uitypes::TImageIndex FImageIndex;
	System::TObject* FObject;
	bool FShowAccelChar;
	bool FSelected;
	bool FHighlighted;
	TcxTabs* FTabs;
	bool FVisible;
	System::Types::TRect __fastcall GetFullRect();
	bool __fastcall GetHotTrack();
	System::Uitypes::TImageIndex __fastcall GetImageIndex();
	bool __fastcall GetIsMainTab();
	bool __fastcall GetPressed();
	TcxCustomTabControlProperties* __fastcall GetProperties();
	bool __fastcall GetRealVisible();
	bool __fastcall GetTracking();
	TcxCustomTabControlViewInfo* __fastcall GetControlViewInfo();
	TcxTabViewInfo* __fastcall GetViewInfo();
	int __fastcall GetVisibleIndex();
	System::Types::TRect __fastcall GetVisibleRect();
	int __fastcall GetVisibleRow();
	void __fastcall InternalSetCaption(const System::UnicodeString Value);
	void __fastcall SetAllowCloseButton(const bool Value);
	void __fastcall SetCaption(const System::UnicodeString Value);
	void __fastcall SetColor(System::Uitypes::TColor Value);
	void __fastcall SetEnabled(const bool Value);
	void __fastcall SetHighlighted(const bool Value);
	void __fastcall SetImageIndex(System::Uitypes::TImageIndex Value);
	void __fastcall SetSelected(const bool Value);
	void __fastcall SetVisible(const bool Value);
	
protected:
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	void __fastcall Changed(TcxPCTabPropertyChanged ATabPropertyChanged);
	virtual void __fastcall DoDestroy();
	virtual TcxTabViewInfoClass __fastcall GetViewInfoClass();
	virtual int __fastcall GetIndex();
	virtual bool __fastcall IsNewButton();
	int __stdcall _AddRef();
	int __stdcall _Release();
	HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	virtual Vcl::Controls::TWinControl* __fastcall GetAdornerTargetElementControl();
	virtual System::Types::TRect __fastcall GetAdornerTargetElementBounds();
	virtual bool __fastcall GetAdornerTargetElementVisible();
	__property Cxclasses::TcxEventHandlerCollection* DestroyHandlers = {read=FDestroyHandlers};
	__property TcxCustomTabControlProperties* Properties = {read=GetProperties};
	__property TcxTabs* Tabs = {read=FTabs};
	__property bool ShowAccelChar = {read=FShowAccelChar, write=FShowAccelChar, nodefault};
	
public:
	__fastcall virtual TcxTab(TcxTabs* ATabs);
	__fastcall virtual ~TcxTab();
	__property bool AllowCloseButton = {read=FAllowCloseButton, write=SetAllowCloseButton, nodefault};
	__property System::UnicodeString Caption = {read=FCaption, write=SetCaption};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, nodefault};
	__property System::TObject* Data = {read=FObject};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, nodefault};
	__property System::Types::TRect FullRect = {read=GetFullRect};
	__property bool Highlighted = {read=FHighlighted, write=SetHighlighted, nodefault};
	__property bool HotTrack = {read=GetHotTrack, nodefault};
	__property System::Uitypes::TImageIndex ImageIndex = {read=GetImageIndex, write=SetImageIndex, nodefault};
	__property int Index = {read=GetIndex, nodefault};
	__property bool IsMainTab = {read=GetIsMainTab, nodefault};
	__property bool Pressed = {read=GetPressed, nodefault};
	__property bool RealVisible = {read=GetRealVisible, nodefault};
	__property bool Selected = {read=FSelected, write=SetSelected, nodefault};
	__property bool Tracking = {read=GetTracking, nodefault};
	__property bool Visible = {read=FVisible, write=SetVisible, nodefault};
	__property int VisibleIndex = {read=GetVisibleIndex, nodefault};
	__property System::Types::TRect VisibleRect = {read=GetVisibleRect};
	__property int VisibleRow = {read=GetVisibleRow, nodefault};
private:
	void *__IdxAdornerTargetElement;	// Cxclasses::IdxAdornerTargetElement 
	void *__IInterface;	// System::IInterface 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {FF5950DC-2CE8-4206-BB6A-13635D78F551}
	operator Cxclasses::_di_IdxAdornerTargetElement()
	{
		Cxclasses::_di_IdxAdornerTargetElement intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxclasses::IdxAdornerTargetElement*(void) { return (Cxclasses::IdxAdornerTargetElement*)&__IdxAdornerTargetElement; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000000-0000-0000-C000-000000000046}
	operator System::_di_IInterface()
	{
		System::_di_IInterface intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator System::IInterface*(void) { return (System::IInterface*)&__IInterface; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxPCNewButton : public TcxTab
{
	typedef TcxTab inherited;
	
private:
	int FWidth;
	void __fastcall SetWidth(int Value);
	
protected:
	virtual TcxTabViewInfoClass __fastcall GetViewInfoClass();
	virtual int __fastcall GetIndex();
	virtual void __fastcall DoDestroy();
	virtual bool __fastcall IsNewButton();
	
public:
	__fastcall virtual TcxPCNewButton(TcxTabs* ATabs);
	__property int Width = {read=FWidth, write=SetWidth, nodefault};
public:
	/* TcxTab.Destroy */ inline __fastcall virtual ~TcxPCNewButton() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxPCNewButtonClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxTabs : public System::Classes::TStrings
{
	typedef System::Classes::TStrings inherited;
	
public:
	TcxTab* operator[](int TabIndex) { return this->Tabs[TabIndex]; }
	
private:
	Cxclasses::TcxEventHandlerCollection* FChangedHandlers;
	Cxclasses::TcxEventHandlerCollection* FDestroyHandlers;
	bool FIsTabsCleaning;
	TcxPCNewButton* FNewButton;
	TcxCustomTabControlProperties* FProperties;
	System::Contnrs::TObjectList* FTabItems;
	TcxTab* __fastcall GetTab(int TabIndex);
	TcxTab* __fastcall GetVisibleTab(int ATabVisibleIndex);
	void __fastcall SetTab(int Index, TcxTab* const Value);
	int __fastcall GetVisibleTabsCount();
	TcxCustomTabControlViewInfo* __fastcall GetControlViewInfo();
	TcxTabsViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual System::UnicodeString __fastcall Get(int Index);
	virtual int __fastcall GetCount();
	virtual System::TObject* __fastcall GetObject(int Index);
	virtual void __fastcall Put(int Index, const System::UnicodeString S);
	virtual void __fastcall PutObject(int Index, System::TObject* AObject);
	virtual void __fastcall SetUpdateState(bool Updating);
	void __fastcall Changed(TcxTab* ATab = (TcxTab*)(0x0), TcxPCTabPropertyChanged ATabPropertyChanged = (TcxPCTabPropertyChanged)(0x7));
	virtual TcxTabsViewInfoClass __fastcall GetViewInfoClass();
	virtual TcxPCNewButtonClass __fastcall GetNewButtonClass();
	virtual void __fastcall CreateNewButton();
	virtual void __fastcall DestroyNewButton();
	void __fastcall RemoveTab(TcxTab* ATab);
	__property Cxclasses::TcxEventHandlerCollection* ChangedHandlers = {read=FChangedHandlers};
	__property Cxclasses::TcxEventHandlerCollection* DestroyHandlers = {read=FDestroyHandlers};
	__property TcxPCNewButton* NewButton = {read=FNewButton};
	__property TcxCustomTabControlProperties* Properties = {read=FProperties};
	__property System::Contnrs::TObjectList* TabItems = {read=FTabItems};
	
public:
	__fastcall TcxTabs(TcxCustomTabControlProperties* AProperties);
	__fastcall virtual ~TcxTabs();
	virtual void __fastcall Clear();
	virtual void __fastcall Delete(int Index);
	virtual void __fastcall Insert(int Index, const System::UnicodeString S);
	virtual void __fastcall Move(int CurIndex, int NewIndex);
	__property TcxTab* Tabs[int TabIndex] = {read=GetTab, write=SetTab/*, default*/};
	__property int VisibleTabsCount = {read=GetVisibleTabsCount, nodefault};
	__property TcxTab* VisibleTabs[int TabVisibleIndex] = {read=GetVisibleTab};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxPCCustomPainter : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool FIsDragImagePainted;
	TcxCustomTabControlViewInfo* FViewInfo;
	System::Uitypes::TColor __fastcall GetDisabledTextFaceColor();
	System::Uitypes::TColor __fastcall GetDisabledTextShadowColor();
	TcxPCImageList* __fastcall GetHeaderButtonImagePainter();
	System::Uitypes::TColor __fastcall GetHighlightedTabBodyColor();
	TcxPCImageList* __fastcall GetImagePainter();
	Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	TcxPCImageList* __fastcall GetTabButtonImagePainter();
	TcxTabViewInfo* __fastcall GetTabViewInfo(int Index);
	int __fastcall GetTabsContainerOffset();
	
protected:
	__classmethod virtual bool __fastcall AllowRotate();
	__classmethod virtual bool __fastcall AllowMultiLineTabCaptions();
	virtual int __fastcall CalculateTabNormalWidth(TcxTabViewInfo* ATabViewInfo) = 0 ;
	virtual bool __fastcall CanDrawParentBackground();
	virtual void __fastcall CorrectTabContentVerticalOffset(int ATabVisibleIndex, System::Types::TRect &ADrawOffset);
	virtual void __fastcall CorrectTabNormalWidth(int &AValue);
	virtual System::Types::TRect __fastcall GetButtonDrawOffsets();
	Dxcore::TRects __fastcall GetDropArrowRects(int ADragTabVisibleIndex, int AHitTabVisibleIndex, int ADestinationTabVisibleIndex);
	virtual System::Types::TRect __fastcall GetTabCorrection(int ATabVisibleIndex);
	void __fastcall DirectionalPolyline(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, System::Types::TPoint *APoints, const int APoints_High, TcxTabPosition ATabPosition, System::Uitypes::TColor AColor);
	bool __fastcall DoCustomDraw(int TabVisibleIndex);
	virtual void __fastcall DoDrawBackground(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DoDrawTabButton(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, TcxPCNavigatorButtonState AState) = 0 ;
	virtual void __fastcall DoDrawTabCloseButton(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, TcxPCNavigatorButtonState AState) = 0 ;
	virtual int __fastcall DoGetButtonHeight() = 0 ;
	virtual int __fastcall DoGetButtonWidth(TcxPCNavigatorButton Button) = 0 ;
	virtual System::Types::TSize __fastcall DoGetCloseButtonSize();
	void __fastcall DrawBackground(Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall DrawHeaderButtonGlyph(Cxgraphics::TcxCanvas* ACanvas, TcxPCHeaderButtonViewInfo* AHeaderButtonInfo);
	virtual void __fastcall DrawFocusRect(Cxgraphics::TcxCanvas* ACanvas, int ATabVisibleIndex);
	virtual void __fastcall DrawNativeTabBackground(HDC DC, TcxTabSheet* ATab);
	void __fastcall DrawTabButtons(Cxgraphics::TcxCanvas* ACanvas, int TabVisibleIndex);
	virtual void __fastcall DrawTabImage(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, int AImageIndex, bool AEnabled, System::Uitypes::TColor AColor, int ATabVisibleIndex);
	virtual void __fastcall DrawTabImageAndText(Cxgraphics::TcxCanvas* ACanvas, int ATabVisibleIndex);
	virtual void __fastcall DrawTabText(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, const System::UnicodeString AText, bool AEnabled, System::Uitypes::TColor AColor, int ATabVisibleIndex);
	void __fastcall ExcludeTabContentClipRegion(Cxgraphics::TcxCanvas* ACanvas, int ATabVisibleIndex);
	virtual void __fastcall FillFreeSpaceArea(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect);
	virtual void __fastcall FillPageClientRect(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall FillTabPaneContent(Cxgraphics::TcxCanvas* ACanvas);
	virtual int __fastcall GetButtonHeight();
	virtual int __fastcall GetButtonsDistance(TcxPCNavigatorButton AButton1, TcxPCNavigatorButton AButton2);
	virtual int __fastcall GetButtonsRegionFromTabsOffset();
	virtual int __fastcall GetButtonsRegionHOffset();
	virtual int __fastcall GetButtonsRegionWOffset();
	virtual int __fastcall GetButtonWidth(TcxPCNavigatorButton Button);
	virtual System::Uitypes::TColor __fastcall GetClientColor();
	virtual int __fastcall GetCloseButtonAreaHeight(int ATabVisibleIndex);
	virtual int __fastcall GetCloseButtonAreaWidth(int ATabVisibleIndex);
	virtual System::Types::TSize __fastcall GetCloseButtonSize();
	virtual System::Types::TRect __fastcall GetCloseButtonOffset(int ATabVisibleIndex);
	virtual System::Types::TRect __fastcall GetFillClientRect();
	virtual System::Uitypes::TColor __fastcall GetFreeSpaceColor();
	virtual System::Types::TRect __fastcall GetHeaderButtonGlyphOffset();
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall GetHeaderButtonGlyphPalette(TcxPCNavigatorButtonState AState);
	Cxgeometry::TcxBorders __fastcall GetPageBorders();
	System::Types::TRect __fastcall GetPageClientRect();
	virtual System::Types::TRect __fastcall GetPageClientRectOffset();
	virtual System::Uitypes::TColor __fastcall GetDefaultClientColor();
	virtual System::Types::TRect __fastcall GetPageFrameRect();
	virtual System::Types::TRect __fastcall GetPageFrameRectOffset();
	virtual System::Types::TRect __fastcall GetDrawImageOffset(int TabVisibleIndex) = 0 ;
	System::Types::TRect __fastcall GetScaledDrawImageOffset(int ATabVisibleIndex);
	virtual TcxPCWOffset __fastcall GetDrawImageWithoutTextWOffset(int TabVisibleIndex) = 0 ;
	virtual System::Types::TRect __fastcall GetDrawTextHOffset(int TabVisibleIndex) = 0 ;
	System::Types::TRect __fastcall GetScaledDrawTextHOffset(int ATabVisibleIndex);
	int __fastcall GetDTFlags(int ATabVisibleIndex);
	int __fastcall GetCTFlags(int ATabVisibleIndex);
	virtual Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetLookAndFeelPainter();
	virtual System::Types::TRect __fastcall GetBorderWidths();
	System::Types::TRect __fastcall GetExtendedRect(const System::Types::TRect &ARect, const System::Types::TRect &AExtension, TcxTabPosition ATabPosition);
	virtual int __fastcall GetFrameWidth();
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall GetTabButtonColorPalette(TcxPCNavigatorButtonState AState);
	virtual int __fastcall GetTabButtonDistance();
	virtual System::Types::TRect __fastcall GetTabButtonGlyphOffset();
	virtual int __fastcall GetTabButtonsAreaWidth(int ATabVisibleIndex);
	virtual void __fastcall AfterPaintTab(Cxgraphics::TcxCanvas* ACanvas, int ATabVisibleIndex);
	virtual bool __fastcall AlwaysColoredTabs();
	virtual System::Types::TPoint __fastcall GetGoDialogPosition(const System::Types::TSize &GoDialogSize) = 0 ;
	System::Uitypes::TColor __fastcall GetHighlightedTextColor(int ATabVisibleIndex, System::Uitypes::TColor ATextColor);
	System::Uitypes::TColor __fastcall GetHotTrackColor();
	virtual int __fastcall GetImageTextDistance(int ATabVisibleIndex) = 0 ;
	int __fastcall GetMaxTabCaptionHeight();
	virtual int __fastcall GetMinTabNormalWidth(int ATabVisibleIndex) = 0 ;
	virtual TcxPCDistance __fastcall GetMinTabSelectionDistance() = 0 ;
	virtual System::Types::TRect __fastcall GetNativeContentOffset();
	System::Types::TSize __fastcall GetTabBaseImageSize();
	virtual System::Uitypes::TColor __fastcall GetTabBodyColor(int TabVisibleIndex) = 0 ;
	virtual System::Uitypes::TColor __fastcall GetTabColor(int ATabVisibleIndex);
	virtual Cxgraphics::TcxRegion* __fastcall GetTabClipRgn(Cxgraphics::TcxCanvas* ACanvas, int ATabVisibleIndex);
	virtual Cxgraphics::TcxRegionOperation __fastcall GetTabClipRgnOperation(int ATabVisibleIndex);
	virtual TcxPCWOffset __fastcall GetTabContentWOffset(int ATabVisibleIndex) = 0 ;
	int __fastcall GetTabImageAreaHeight();
	int __fastcall GetTabImageAreaWidth();
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall GetTabImageColorPalette();
	virtual void __fastcall GetTabNativePartAndState(int ATabVisibleIndex, /* out */ int &PartId, /* out */ int &StateId);
	int __fastcall GetTabNativeState(int ATabVisibleIndex);
	System::Types::TSize __fastcall GetTabRotatedImageSize();
	virtual System::Types::TRect __fastcall GetTabsContainerOffsets();
	virtual TcxPCDistance __fastcall GetTabsNormalDistance();
	virtual TcxPCTabsPosition __fastcall GetTabsPosition() = 0 ;
	virtual System::Uitypes::TColor __fastcall GetTextColor(int ATabVisibleIndex);
	virtual TcxPCWOffset __fastcall GetTooNarrowTabContentWOffset(int ATabVisibleIndex) = 0 ;
	bool __fastcall HasActivePage();
	virtual void __fastcall Init();
	virtual void __fastcall InternalDrawText(Cxgraphics::TcxCanvas* ACanvas, const System::UnicodeString ACaption, const System::Types::TRect &ARect, int ATabVisibleIndex);
	virtual System::Types::TRect __fastcall InternalGetPageFrameRectOffset();
	virtual void __fastcall InternalPaint(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall InternalPaintDragImage(Cxgraphics::TcxCanvas* ACanvas, int ATabVisibleIndex) = 0 ;
	void __fastcall InternalPolyLine(const System::Types::TPoint *APoints, const int APoints_High, System::Uitypes::TColor AColor, Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall InternalResetClipRegion(Cxgraphics::TcxCanvas* ACanvas);
	bool __fastcall InternalSetClipRect(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ClipR, bool IntersectWithCurrentClipRegion = true);
	void __fastcall InvalidateTabExtendedTabsRect(int TabVisibleIndex);
	virtual void __fastcall InvalidateTabRect(int ATabVisibleIndex);
	bool __fastcall IsAssignedImages();
	virtual bool __fastcall IsEnableHotTrack();
	bool __fastcall IsEnoughSpaceForClientPage();
	virtual bool __fastcall IsNativePainting();
	virtual bool __fastcall PtInTab(int TabVisibleIndex, int X, int Y);
	virtual bool __fastcall IsPaintHeadersAreaFirst();
	bool __fastcall IsTabHasImage(int ATabVisibleIndex);
	virtual bool __fastcall IsTabBorderThick(int ATabVisibleIndex) = 0 ;
	virtual bool __fastcall IsTabTransparent(int ATabVisibleIndex);
	virtual bool __fastcall IsTabsRectVisible(Cxgraphics::TcxCanvas* ACanvas);
	virtual bool __fastcall NeedDisabledTextShadow();
	virtual bool __fastcall NeedDoubleBuffer();
	virtual bool __fastcall NeedRedrawOnResize();
	virtual bool __fastcall NeedShowFrame();
	virtual void __fastcall PaintButton(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, TcxPCNavigatorButtonState AState, TcxPCNavigatorButton AType) = 0 ;
	virtual void __fastcall PaintButtonsRegion(Cxgraphics::TcxCanvas* ACanvas) = 0 ;
	void __fastcall PaintDragImage(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, int ATabVisibleIndex);
	virtual void __fastcall DoPaintPageFrame(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall PaintHeadersArea(Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall PaintPageFrame(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall PaintTab(Cxgraphics::TcxCanvas* ACanvas, int TabVisibleIndex);
	virtual void __fastcall PaintTabsRegion(Cxgraphics::TcxCanvas* ACanvas) = 0 ;
	virtual void __fastcall PrepareDrawTabContentBitmapBackground(Cxgraphics::TcxBitmap* ABitmap, const System::Types::TPoint &ABitmapPos, int ATabVisibleIndex);
	virtual void __fastcall DrawTabContentBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, System::Uitypes::TColor ABackgroundColor, int ATabVisibleIndex);
	virtual void __fastcall RepaintButtonsRegion();
	virtual void __fastcall RepaintTab(int TabVisibleIndex, TcxPCTabPropertyChanged TabPropertyChanged);
	void __fastcall RotatePoint(const System::Types::TRect &R, System::Types::TPoint &P, TcxTabPosition ATabPosition);
	void __fastcall RotatePolyline(const System::Types::TRect &R, System::Types::TPoint *APoints, const int APoints_High, TcxTabPosition ATabPosition);
	bool __fastcall UseActivePageColor();
	virtual bool __fastcall UseLookAndFeelTabButton();
	bool __fastcall IsDragImagePainted();
	void __fastcall StartDragImagePainted();
	void __fastcall StopDragImagePainted();
	__property int TabsContainerOffset = {read=GetTabsContainerOffset, nodefault};
	__property System::Uitypes::TColor DisabledTextFaceColor = {read=GetDisabledTextFaceColor, nodefault};
	__property System::Uitypes::TColor DisabledTextShadowColor = {read=GetDisabledTextShadowColor, nodefault};
	__property System::Uitypes::TColor HighlightedTabBodyColor = {read=GetHighlightedTabBodyColor, nodefault};
	
public:
	__fastcall virtual TcxPCCustomPainter(TcxCustomTabControlViewInfo* AViewInfo);
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall PaintPageClientArea(Cxgraphics::TcxCanvas* ACanvas);
	virtual int __fastcall CalculateTabNormalHeight() = 0 ;
	__classmethod virtual TcxPCStandardStyle __fastcall GetStandardStyle();
	__classmethod virtual TcxPCStyleID __fastcall GetStyleID();
	__classmethod virtual Vcl::Controls::TCaption __fastcall GetStyleName();
	__classmethod virtual bool __fastcall HasLookAndFeel(Cxlookandfeels::TcxLookAndFeel* ALookAndFeel);
	__classmethod virtual bool __fastcall IsDefault(Cxlookandfeels::TcxLookAndFeel* ALookAndFeel);
	__classmethod virtual bool __fastcall IsMainTabBoundWithClient();
	__classmethod virtual bool __fastcall IsMultiSelectionAccepted();
	__classmethod virtual bool __fastcall IsStandardStyle();
	__classmethod virtual bool __fastcall HasTabPressedState();
	__property TcxPCImageList* HeaderButtonImagePainter = {read=GetHeaderButtonImagePainter};
	__property TcxPCImageList* ImagePainter = {read=GetImagePainter};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=GetScaleFactor};
	__property TcxPCImageList* TabButtonImagePainter = {read=GetTabButtonImagePainter};
	__property TcxTabViewInfo* TabViewInfo[int Index] = {read=GetTabViewInfo};
	__property TcxCustomTabControlViewInfo* ViewInfo = {read=FViewInfo};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxPCCustomPainter() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxPCImageList : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Vcl::Imglist::TChangeLink* FBaseHotImageChangeLink;
	Vcl::Imglist::TCustomImageList* FBaseHotImages;
	Vcl::Imglist::TChangeLink* FBaseImageChangeLink;
	Vcl::Imglist::TCustomImageList* FBaseImages;
	Dxcoreclasses::TcxFreeNotificator* FFreeNotificator;
	Cxcustomcanvas::TcxRotationAngle FImageRotationAngle;
	TcxCustomTabControlProperties* FProperties;
	System::Classes::TNotifyEvent FOnChange;
	void __fastcall BaseImageListChange(System::TObject* Sender);
	void __fastcall Change();
	void __fastcall FreeNotification(System::Classes::TComponent* AComponent);
	__classmethod void __fastcall OutError(Vcl::Controls::TCaption SourceMethodName, Vcl::Controls::TCaption Msg);
	void __fastcall SetBaseHotImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall SetBaseImages(Vcl::Imglist::TCustomImageList* const Value);
	System::Types::TSize __fastcall GetBaseImageSize();
	Vcl::Imglist::TCustomImageList* __fastcall GetImages(bool AHot);
	System::Types::TSize __fastcall GetRotatedImageSize();
	
public:
	__fastcall TcxPCImageList(TcxCustomTabControlProperties* AProperties);
	__fastcall virtual ~TcxPCImageList();
	void __fastcall Draw(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, int AIndex, System::Uitypes::TColor ABackgroundColor, bool AIsNativePainting, bool AEnabled, bool AHot, Dxcoregraphics::_di_IdxColorPalette APalette);
	bool __fastcall IsImagesAssigned();
	__property Vcl::Imglist::TCustomImageList* BaseHotImages = {read=FBaseHotImages, write=SetBaseHotImages};
	__property Vcl::Imglist::TCustomImageList* BaseImages = {read=FBaseImages, write=SetBaseImages};
	__property System::Types::TSize BaseImageSize = {read=GetBaseImageSize};
	__property Cxcustomcanvas::TcxRotationAngle ImageRotationAngle = {read=FImageRotationAngle, write=FImageRotationAngle, default=0};
	__property System::Types::TSize RotatedImageSize = {read=GetRotatedImageSize};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
};


class PASCALIMPLEMENTATION TcxTabSlants : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TcxTabSlantKind FKind;
	System::Classes::TPersistent* FOwner;
	TcxTabSlantPositions FPositions;
	System::Classes::TNotifyEvent FOnChange;
	void __fastcall Changed();
	void __fastcall SetKind(TcxTabSlantKind Value);
	void __fastcall SetPositions(TcxTabSlantPositions Value);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall TcxTabSlants(System::Classes::TPersistent* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	
__published:
	__property TcxTabSlantKind Kind = {read=FKind, write=SetKind, default=1};
	__property TcxTabSlantPositions Positions = {read=FPositions, write=SetPositions, default=1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxTabSlants() { }
	
};


typedef void __fastcall (__closure *TcxPCGoDialogClickEvent)(int ATabVisibleIndex);

class PASCALIMPLEMENTATION TcxPCCustomGoDialog : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	_di_IcxTabControl FTabControl;
	TcxPCGoDialogClickEvent FOnClick;
	TcxCustomTabControlViewInfo* __fastcall GetViewInfo();
	
public:
	__fastcall virtual TcxPCCustomGoDialog(_di_IcxTabControl ATabControl);
	virtual bool __fastcall Popup(int X, int Y) = 0 ;
	__property _di_IcxTabControl TabControl = {read=FTabControl};
	__property TcxCustomTabControlViewInfo* ViewInfo = {read=GetViewInfo};
	__property TcxPCGoDialogClickEvent OnClick = {read=FOnClick, write=FOnClick};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxPCCustomGoDialog() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxTabControlDragAndDropObject : public Cxcontrols::TcxDragAndDropObject
{
	typedef Cxcontrols::TcxDragAndDropObject inherited;
	
private:
	int FHitTabVisibleIndex;
	Cxcontrols::TcxDragImage* FDragImage;
	Cxcontrols::TcxDragAndDropArrow* FDestinationArrowFirst;
	Cxcontrols::TcxDragAndDropArrow* FDestinationArrowSecond;
	int FDestinationTabVisibleIndex;
	_di_IcxTabControl FIControl;
	int FScrollingDirection;
	Cxclasses::TcxTimer* FScrollingTimer;
	System::Types::TPoint FDragPointOffset;
	int FTabVisibleIndex;
	TcxCustomTabControlProperties* __fastcall GetProperties();
	TcxCustomTabControlViewInfo* __fastcall GetViewInfo();
	void __fastcall ScrollingTimerHandler(System::TObject* Sender);
	void __fastcall SetDestinationTabVisibleIndex(int Value);
	
protected:
	virtual System::Uitypes::TCursor __fastcall GetDragAndDropCursor(bool Accepted);
	void __fastcall CheckScrolling(const System::Types::TPoint &P);
	void __fastcall CreateDestinationImage();
	void __fastcall CreateDragImage();
	void __fastcall CreateScrollingTimer();
	void __fastcall DestroyDestinationImage();
	void __fastcall DestroyDragImage();
	void __fastcall DestroyScrollingTimer();
	virtual void __fastcall DoPaintDragImage();
	virtual void __fastcall Drop(bool Accepted);
	virtual System::Types::TPoint __fastcall GetClientCursorPos();
	int __fastcall GetDragDestinationTabIndex();
	int __fastcall GetDragTabIndex();
	void __fastcall PaintDragImage();
	void __fastcall ShowDragImage();
	__property int DestinationTabVisibleIndex = {read=FDestinationTabVisibleIndex, write=SetDestinationTabVisibleIndex, nodefault};
	__property TcxCustomTabControlProperties* Properties = {read=GetProperties};
	__property int TabVisibleIndex = {read=FTabVisibleIndex, nodefault};
	__property TcxCustomTabControlViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	__fastcall virtual TcxTabControlDragAndDropObject(_di_IcxTabControl AIControl);
	virtual void __fastcall BeginDragAndDrop();
	virtual void __fastcall DragAndDrop(const System::Types::TPoint &P, bool &Accepted);
	virtual void __fastcall EndDragAndDrop(bool Accepted);
	virtual void __fastcall Init(int ATabVisibleIndex, const System::Types::TPoint &P);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxTabControlDragAndDropObject() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxTabControlDragAndDropObjectClass;

class PASCALIMPLEMENTATION TcxCustomTabControlHitTest : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TcxCustomTabControlController* FController;
	System::TObject* FHitObject;
	__int64 FFlags;
	System::Types::TPoint FHitPoint;
	TcxTabViewInfo* FHitTab;
	System::Classes::TShiftState FShift;
	bool __fastcall GetBitState(int AIndex);
	bool __fastcall GetHitAtHeaderButton();
	bool __fastcall GetHitAtTabButton();
	void __fastcall SetBitState(int AIndex, bool AValue);
	
protected:
	void __fastcall Clear();
	void __fastcall Recalculate();
	void __fastcall Update(System::Classes::TShiftState AShift, const System::Types::TPoint &APoint);
	
public:
	__fastcall TcxCustomTabControlHitTest(TcxCustomTabControlController* AOwner);
	__property bool HitAtHeaderButton = {read=GetHitAtHeaderButton, nodefault};
	__property bool HitAtNavigatorButton = {read=GetBitState, index=1, nodefault};
	__property bool HitAtTab = {read=GetBitState, index=2, nodefault};
	__property bool HitAtTabCloseButton = {read=GetBitState, index=3, nodefault};
	__property bool HitAtTabButton = {read=GetHitAtTabButton, nodefault};
	__property System::TObject* HitObject = {read=FHitObject};
	__property System::Types::TPoint HitPoint = {read=FHitPoint};
	__property TcxTabViewInfo* HitTab = {read=FHitTab};
	__property System::Classes::TShiftState Shift = {read=FShift, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomTabControlHitTest() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomTabControlHintHelper : public Dxcustomhint::TcxCustomHintHelper
{
	typedef Dxcustomhint::TcxCustomHintHelper inherited;
	
private:
	TcxCustomTabControlController* FController;
	
protected:
	virtual void __fastcall CorrectHintWindowRect(System::Types::TRect &ARect);
	virtual Vcl::Controls::TWinControl* __fastcall GetOwnerWinControl();
	__property TcxCustomTabControlController* Controller = {read=FController};
	
public:
	__fastcall TcxCustomTabControlHintHelper(TcxCustomTabControlController* AController);
public:
	/* TcxCustomHintHelper.Destroy */ inline __fastcall virtual ~TcxCustomTabControlHintHelper() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomTabControlHintHelperClass;

typedef System::TMetaClass* TcxCustomTabControlControllerClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomTabControlController : public Dxcoreclasses::TcxIUnknownObject
{
	typedef Dxcoreclasses::TcxIUnknownObject inherited;
	
private:
	TcxCustomTabControlHintHelper* FHintHelper;
	TcxPCCustomElementViewInfo* FHintObject;
	TcxCustomTabControlHitTest* FHitTest;
	_di_IcxTabControl FIControl;
	System::TObject* FOwner;
	Cxclasses::TcxTimer* FTimer;
	int FMouseDownTabVisibleIndex;
	TcxPCCustomGoDialog* FGoDialog;
	bool FIsGoDialogShowing;
	bool FGoDialogJustClosed;
	void __fastcall ArrowButtonMouseDown(TcxPCNavigatorButton ANavigatorButton);
	void __fastcall ArrowButtonClick(TcxPCNavigatorButton ANavigatorButton);
	void __fastcall CloseButtonClick();
	void __fastcall CreateScrollingTimer();
	TcxCustomTabControlProperties* __fastcall GetProperties();
	TcxCustomTabControlViewInfo* __fastcall GetViewInfo();
	bool __fastcall IsScrollTimerStarted();
	bool __fastcall HasTabPressedState();
	void __fastcall StartScrollTimer();
	void __fastcall StopScrollTimer();
	void __fastcall TimerEventHandler(System::TObject* Sender);
	
protected:
	virtual void __fastcall CheckHint();
	virtual bool __fastcall DoMouseWheelDown(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	virtual bool __fastcall DoMouseWheelUp(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseLeave();
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall FocusChanged();
	virtual bool __fastcall HandleDialogChar(int Key);
	virtual bool __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall DoTabClick(int ATabVisibleIndex, System::Classes::TShiftState AShift);
	virtual void __fastcall TabClick(int ATabVisibleIndex, System::Classes::TShiftState AShift, bool AMouseEvent);
	virtual void __fastcall TabDown(int ATabVisibleIndex, System::Classes::TShiftState AShift);
	virtual void __fastcall TabUp(int ATabVisibleIndex, System::Classes::TShiftState AShift);
	virtual void __fastcall TabButtonDown(TcxPCCustomTabButtonViewInfo* ATabButtonInfo);
	virtual void __fastcall EndDragAndDrop(bool Accepted);
	virtual TcxTabControlDragAndDropObjectClass __fastcall GetDragAndDropObjectClass();
	virtual bool __fastcall StartDragAndDrop(const System::Types::TPoint &P);
	void __fastcall CreateGoDialog();
	virtual void __fastcall DoShowGoDialog();
	virtual System::Types::TPoint __fastcall GetClientToScreen(const System::Types::TPoint &APoint);
	virtual System::Types::TPoint __fastcall GetMouseCursorPos();
	virtual System::Types::TPoint __fastcall GetScreenToClient(const System::Types::TPoint &APoint);
	virtual void __fastcall GoDialogClickEventHandler(int ATabVisibleIndex);
	void __fastcall HideGoDialog(int ATabVisibleIndex);
	void __fastcall ShowGoDialog();
	virtual NativeUInt __fastcall GetControlHandle();
	virtual TcxCustomTabControlHintHelperClass __fastcall GetHintHelperClass();
	__property TcxCustomTabControlHintHelper* HintHelper = {read=FHintHelper};
	__property _di_IcxTabControl IControl = {read=FIControl};
	__property int MouseDownTabVisibleIndex = {read=FMouseDownTabVisibleIndex, write=FMouseDownTabVisibleIndex, nodefault};
	__property System::TObject* Owner = {read=FOwner};
	__property TcxCustomTabControlProperties* Properties = {read=GetProperties};
	__property TcxCustomTabControlViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	__fastcall virtual TcxCustomTabControlController(System::TObject* AOwner);
	__fastcall virtual ~TcxCustomTabControlController();
	void __fastcall ScrollTabs(int ADelta);
	__property TcxCustomTabControlHitTest* HitTest = {read=FHitTest};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TcxCustomTabControlPropertiesChangedType : unsigned char { pctHard, pctMedium, pctSimple, pctLight };

typedef void __fastcall (__closure *TcxCustomTabControlPropertiesChangedEvent)(System::TObject* Sender, TcxCustomTabControlPropertiesChangedType AType);

typedef void __fastcall (__closure *TcxPCPrepareTabCanvasFontEvent)(TcxTab* ATab, Cxgraphics::TcxCanvas* ACanvas);

typedef void __fastcall (__closure *TcxPCNewTabButtonClickEvent)(System::TObject* Sender, bool &AHandled);

typedef void __fastcall (__closure *TcxPCNewTabCreateEvent)(System::TObject* Sender, int AIndex);

typedef void __fastcall (__closure *TcxPCPaintDragImageEvent)(System::TObject* Sender, Vcl::Graphics::TBitmap* ABitmap, bool &ADone);

typedef void __fastcall (__closure *TcxPCNewEvent)(System::TObject* Sender, int AIndex);

typedef void __fastcall (__closure *TcxPCButtonCanShowEvent)(TcxPCButton* AButton, int ATabIndex, bool &ACanShow);

class PASCALIMPLEMENTATION TcxPCButton : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	bool FEnabled;
	System::Uitypes::TImageIndex FHeaderImageIndex;
	System::UnicodeString FHint;
	TcxPCButtonPosition FPosition;
	System::Uitypes::TImageIndex FTabImageIndex;
	bool FVisible;
	TcxPCButtonCanShowEvent FOnCanShow;
	System::Classes::TNotifyEvent FOnClick;
	void __fastcall SetEnabled(bool AValue);
	void __fastcall SetHeaderImageIndex(System::Uitypes::TImageIndex AValue);
	void __fastcall SetHint(const System::UnicodeString AValue);
	void __fastcall SetPosition(TcxPCButtonPosition AValue);
	void __fastcall SetTabImageIndex(System::Uitypes::TImageIndex AValue);
	void __fastcall SetVisible(bool AValue);
	
protected:
	bool __fastcall DoCanShow(int ATabIndex);
	void __fastcall DoClick();
	
public:
	__fastcall virtual TcxPCButton(System::Classes::TCollection* Collection);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=1};
	__property System::Uitypes::TImageIndex HeaderImageIndex = {read=FHeaderImageIndex, write=SetHeaderImageIndex, default=-1};
	__property System::UnicodeString Hint = {read=FHint, write=SetHint};
	__property TcxPCButtonPosition Position = {read=FPosition, write=SetPosition, default=1};
	__property System::Uitypes::TImageIndex TabImageIndex = {read=FTabImageIndex, write=SetTabImageIndex, default=-1};
	__property bool Visible = {read=FVisible, write=SetVisible, default=1};
	__property TcxPCButtonCanShowEvent OnCanShow = {read=FOnCanShow, write=FOnCanShow};
	__property System::Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick};
public:
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TcxPCButton() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxPCButtons : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
public:
	TcxPCButton* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TcxPCButton* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TcxPCButton* Value);
	
protected:
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	HIDESBASE TcxPCButton* __fastcall Add();
	__property TcxPCButton* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TOwnedCollection.Create */ inline __fastcall TcxPCButtons(System::Classes::TPersistent* AOwner, System::Classes::TCollectionItemClass ItemClass) : System::Classes::TOwnedCollection(AOwner, ItemClass) { }
	
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TcxPCButtons() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxPCCustomButtons : public Dxcoreclasses::TcxOwnedPersistent
{
	typedef Dxcoreclasses::TcxOwnedPersistent inherited;
	
private:
	TcxPCButtons* FButtons;
	TcxPCImageList* FHeaderImages;
	TcxPCButtonMode FMode;
	TcxCustomTabControlProperties* FProperties;
	TcxPCImageList* FTabImages;
	int __fastcall GetCount();
	Vcl::Imglist::TCustomImageList* __fastcall GetHeaderImages();
	Vcl::Imglist::TCustomImageList* __fastcall GetTabImages();
	void __fastcall SetButtons(TcxPCButtons* AValue);
	void __fastcall SetHeaderImages(Vcl::Imglist::TCustomImageList* AValue);
	void __fastcall SetMode(TcxPCButtonMode AValue);
	void __fastcall SetTabImages(Vcl::Imglist::TCustomImageList* AValue);
	
protected:
	void __fastcall Changed();
	virtual TcxPCButtons* __fastcall CreateButtons();
	virtual void __fastcall DoAssign(System::Classes::TPersistent* Source);
	
public:
	__fastcall virtual TcxPCCustomButtons(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TcxPCCustomButtons();
	__property int Count = {read=GetCount, nodefault};
	
__published:
	__property TcxPCButtons* Buttons = {read=FButtons, write=SetButtons};
	__property Vcl::Imglist::TCustomImageList* HeaderImages = {read=GetHeaderImages, write=SetHeaderImages};
	__property TcxPCButtonMode Mode = {read=FMode, write=SetMode, default=0};
	__property Vcl::Imglist::TCustomImageList* TabImages = {read=GetTabImages, write=SetTabImages};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxCustomTabControlProperties : public Dxcoreclasses::TcxOwnedPersistent
{
	typedef Dxcoreclasses::TcxOwnedPersistent inherited;
	
private:
	bool FActivateFocusedTab;
	bool FAllowDisabledTabAccess;
	bool FAllowTabDragDrop;
	TcxPCButtonMode FCloseButtonMode;
	bool FCloseTabWithMiddleClick;
	TcxPCCustomButtons* FCustomButtons;
	Dxgdiplusclasses::TdxSmartGlyph* FDragImage;
	bool FHideTabs;
	bool FHotTrack;
	bool FIsTabsContainer;
	TcxPCImageList* FImages;
	int FImageBorder;
	bool FMultiLine;
	bool FMultiLineTabCaptions;
	bool FMultiSelect;
	TcxPCNavigatorPosition FNavigatorPosition;
	int FNewTabIndex;
	TcxPCOptions FOptions;
	bool FOwnerDraw;
	bool FRaggedRight;
	bool FRotate;
	int FRotatedTabsMaxWidth;
	bool FScrollOpposite;
	bool FShowFrame;
	bool FShowButtonHints;
	bool FShowTabHints;
	TcxPCStyleID FStyle;
	System::Classes::TAlignment FTabCaptionAlignment;
	bool FTabChanging;
	int FTabIndex;
	TcxTabPosition FTabPosition;
	TcxTabs* FTabs;
	bool FTabsScroll;
	System::Types::TSmallPoint FTabSize;
	TcxTabSlants* FTabSlants;
	System::Classes::TList* FLockedEvents;
	int FNotifyEventLockCount;
	int FChangingEventLockCount;
	int FChangeEventLockCount;
	int FUpdateLockCount;
	System::Classes::TNotifyEvent FOnChange;
	TcxCustomTabControlPropertiesChangedEvent FOnChanged;
	TcxTabChangingEvent FOnChanging;
	System::Classes::TNotifyEvent FOnStyleChanged;
	TcxPCCanCloseEventEx FOnCanClose;
	TcxPCCloseEvent FOnClose;
	TcxPCPropertiesDrawTabEvent FOnDrawTab;
	TcxPCPropertiesDrawTabExEvent FOnDrawTabEx;
	TcxGetTabImageEvent FOnGetImageIndex;
	TcxGetTabHintEvent FOnGetTabHint;
	TcxPCNewTabButtonClickEvent FOnNewTabButtonClick;
	TcxPCNewTabCreateEvent FOnNewTabCreate;
	TcxPCPaintDragImageEvent FOnPaintDragImage;
	TcxPCPrepareTabCanvasFontEvent FOnPrepareTabCanvasFont;
	TcxPCTabClickEvent FOnTabClick;
	void __fastcall TabSlantsChangedHandler(System::TObject* Sender);
	Vcl::Imglist::TCustomImageList* __fastcall GetHeaderButtonImages();
	Vcl::Imglist::TCustomImageList* __fastcall GetHotImages();
	Vcl::Imglist::TCustomImageList* __fastcall GetImages();
	TcxPCNewButton* __fastcall GetNewButton();
	TcxPCNewButtonMode __fastcall GetNewButtonMode();
	TcxPCOptions __fastcall GetOptions();
	Vcl::Imglist::TCustomImageList* __fastcall GetTabButtonImages();
	void __fastcall SetActivateFocusedTab(bool Value);
	void __fastcall SetAllowDisabledTabAccess(const bool Value);
	void __fastcall SetCloseButtonMode(const TcxPCButtonMode Value);
	void __fastcall SetCustomButtons(TcxPCCustomButtons* AValue);
	void __fastcall SetDragImage(Dxgdiplusclasses::TdxSmartGlyph* const Value);
	void __fastcall SetHideTabs(bool Value);
	void __fastcall SetHotImages(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetHotTrack(bool Value);
	void __fastcall SetImageBorder(int Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall SetIsTabsContainer(bool Value);
	void __fastcall SetRotatedTabsMaxWidth(int Value);
	void __fastcall SetMultiLine(bool Value);
	void __fastcall SetMultiLineTabCaptions(bool Value);
	void __fastcall SetNavigatorPosition(const TcxPCNavigatorPosition Value);
	void __fastcall SetNewButtonMode(TcxPCNewButtonMode Value);
	void __fastcall SetOptions(TcxPCOptions Value);
	void __fastcall SetOwnerDraw(bool Value);
	void __fastcall SetRaggedRight(bool Value);
	void __fastcall SetRotate(bool Value);
	void __fastcall SetScrollOpposite(bool Value);
	void __fastcall SetShowFrame(bool Value);
	void __fastcall SetStyle(const TcxPCStyleID Value);
	void __fastcall SetTabCaptionAlignment(System::Classes::TAlignment Value);
	void __fastcall SetTabHeight(short Value);
	void __fastcall SetTabIndex(int Value);
	void __fastcall SetTabPosition(TcxTabPosition Value);
	void __fastcall SetTabs(TcxTabs* const Value);
	void __fastcall SetTabsScroll(bool Value);
	void __fastcall SetTabSlants(TcxTabSlants* Value);
	void __fastcall SetTabWidth(const short Value);
	
protected:
	virtual void __fastcall DoAssign(System::Classes::TPersistent* Source);
	void __fastcall AddDeferredEvent(System::Classes::TNotifyEvent AEvent, System::TObject* ASender);
	void __fastcall CallLockedEvents();
	bool __fastcall IsChangeEventLocked();
	bool __fastcall IsChangingEventLocked();
	bool __fastcall IsNotifyEventLocked();
	bool __fastcall IsUpdateLocked();
	void __fastcall LockChangeEvent();
	void __fastcall UnlockChangeEvent();
	void __fastcall LockChangingEvent();
	void __fastcall UnlockChangingEvent();
	void __fastcall LockNotifyEvents();
	void __fastcall UnLockNotifyEvents();
	bool __fastcall CanChange(int NewTabIndex);
	virtual bool __fastcall CanCloseButtonShow(TcxTab* ATab);
	void __fastcall Changed(TcxCustomTabControlPropertiesChangedType AType = (TcxCustomTabControlPropertiesChangedType)(0x0));
	virtual void __fastcall ChangeScale(int M, int D);
	virtual bool __fastcall DoCanChange(int ANewTabIndex);
	DYNAMIC void __fastcall DoChange();
	virtual void __fastcall DoChanging(int ANewTabIndex, bool &AAllowChange);
	virtual void __fastcall DoChanged(TcxCustomTabControlPropertiesChangedType AType = (TcxCustomTabControlPropertiesChangedType)(0x0));
	virtual bool __fastcall DoPaintDragImage(Cxcontrols::TcxDragImage* AImage);
	virtual void __fastcall DoPrepareTabCanvasFont(TcxTab* ATab, Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall DoStyleChanged();
	virtual void __fastcall DoSetTabIndex(int Value);
	virtual int __fastcall GetTabIndex();
	virtual void __fastcall TabIndexChanged();
	virtual bool __fastcall CanProcessChanged();
	virtual void __fastcall CloseActiveTab();
	virtual void __fastcall CloseTab(int AIndex);
	virtual TcxPCCustomButtons* __fastcall CreateCustomButtons();
	virtual int __fastcall CreateNewTab();
	virtual bool __fastcall DoCanClose(int AIndex);
	virtual void __fastcall DoClose(int ATabIndex);
	virtual void __fastcall DoCloseTab(int AIndex);
	virtual void __fastcall DoCloseButtonClick(int ATabIndex);
	virtual void __fastcall DoGetTabHint(TcxTab* ATab, System::UnicodeString &AHint, bool &ACanShow);
	virtual bool __fastcall DoNewTabButtonClick();
	virtual void __fastcall DoNewTabCreate(int AIndex);
	virtual void __fastcall DoTabClick(int ATabVisibleIndex, System::Classes::TShiftState AShift);
	void __fastcall NewButtonClick();
	virtual void __fastcall MoveTab(int ACurrentIndex, int ANewIndex);
	void __fastcall SetModified();
	DYNAMIC bool __fastcall DoCustomDraw(int TabVisibleIndex);
	virtual void __fastcall DoDrawTabEx(int ATabVisibleIndex, Vcl::Graphics::TFont* AFont);
	bool __fastcall IsDesigning();
	bool __fastcall IsDestroying();
	bool __fastcall IsLoading();
	virtual _di_IcxTabControl __fastcall GetTabControl();
	TcxCustomTabControlViewInfo* __fastcall GetViewInfo();
	virtual void __fastcall ImageListChange(System::TObject* Sender);
	virtual System::UnicodeString __fastcall InternalGetTabHint(TcxTab* ATab, bool &ACanShow);
	virtual System::UnicodeString __fastcall GetButtonHint(TcxPCCustomButtonViewInfo* AButtonViewInfo);
	virtual int __fastcall GetImageIndex(TcxTab* ATab);
	TcxPCNavigatorButtons __fastcall GetNavigatorButtons(bool AOnlyObligatoryButtons);
	virtual System::UnicodeString __fastcall GetTabHint(TcxTab* ATab);
	virtual bool __fastcall TabIndexTabMustBeVisible();
	__property bool ActivateFocusedTab = {read=FActivateFocusedTab, write=SetActivateFocusedTab, default=1};
	__property TcxPCNewButtonMode NewButtonMode = {read=GetNewButtonMode, write=SetNewButtonMode, default=0};
	__property bool AllowDisabledTabAccess = {read=FAllowDisabledTabAccess, write=SetAllowDisabledTabAccess, default=0};
	__property bool AllowTabDragDrop = {read=FAllowTabDragDrop, write=FAllowTabDragDrop, default=0};
	__property TcxPCButtonMode CloseButtonMode = {read=FCloseButtonMode, write=SetCloseButtonMode, default=0};
	__property bool CloseTabWithMiddleClick = {read=FCloseTabWithMiddleClick, write=FCloseTabWithMiddleClick, default=0};
	__property TcxPCCustomButtons* CustomButtons = {read=FCustomButtons, write=SetCustomButtons};
	__property Dxgdiplusclasses::TdxSmartGlyph* DragImage = {read=FDragImage, write=SetDragImage};
	__property Vcl::Imglist::TCustomImageList* HeaderButtonImages = {read=GetHeaderButtonImages};
	__property bool HideTabs = {read=FHideTabs, write=SetHideTabs, default=0};
	__property Vcl::Imglist::TCustomImageList* HotImages = {read=GetHotImages, write=SetHotImages};
	__property bool HotTrack = {read=FHotTrack, write=SetHotTrack, default=0};
	__property int ImageBorder = {read=FImageBorder, write=SetImageBorder, default=0};
	__property Vcl::Imglist::TCustomImageList* Images = {read=GetImages, write=SetImages};
	__property bool IsTabsContainer = {read=FIsTabsContainer, write=SetIsTabsContainer, default=0};
	__property bool MultiLine = {read=FMultiLine, write=SetMultiLine, default=0};
	__property bool MultiLineTabCaptions = {read=FMultiLineTabCaptions, write=SetMultiLineTabCaptions, default=0};
	__property bool MultiSelect = {read=FMultiSelect, write=FMultiSelect, default=0};
	__property TcxPCNavigatorPosition NavigatorPosition = {read=FNavigatorPosition, write=SetNavigatorPosition, default=2};
	__property int NewTabIndex = {read=FNewTabIndex, nodefault};
	__property TcxPCOptions Options = {read=GetOptions, write=SetOptions, default=177};
	__property bool OwnerDraw = {read=FOwnerDraw, write=SetOwnerDraw, default=0};
	__property bool RaggedRight = {read=FRaggedRight, write=SetRaggedRight, default=0};
	__property bool Rotate = {read=FRotate, write=SetRotate, default=0};
	__property int RotatedTabsMaxWidth = {read=FRotatedTabsMaxWidth, write=SetRotatedTabsMaxWidth, default=0};
	__property bool ScrollOpposite = {read=FScrollOpposite, write=SetScrollOpposite, default=0};
	__property bool ShowButtonHints = {read=FShowButtonHints, write=FShowButtonHints, default=0};
	__property bool ShowFrame = {read=FShowFrame, write=SetShowFrame, default=0};
	__property bool ShowTabHints = {read=FShowTabHints, write=FShowTabHints, default=0};
	__property TcxPCStyleID Style = {read=FStyle, write=SetStyle, default=0};
	__property Vcl::Imglist::TCustomImageList* TabButtonImages = {read=GetTabButtonImages};
	__property System::Classes::TAlignment TabCaptionAlignment = {read=FTabCaptionAlignment, write=SetTabCaptionAlignment, default=2};
	__property short TabHeight = {read=FTabSize.y, write=SetTabHeight, default=0};
	__property int TabIndex = {read=GetTabIndex, write=SetTabIndex, default=-1};
	__property TcxTabPosition TabPosition = {read=FTabPosition, write=SetTabPosition, default=0};
	__property TcxTabs* Tabs = {read=FTabs, write=SetTabs};
	__property bool TabsScroll = {read=FTabsScroll, write=SetTabsScroll, default=1};
	__property TcxTabSlants* TabSlants = {read=FTabSlants, write=SetTabSlants};
	__property short TabWidth = {read=FTabSize.x, write=SetTabWidth, default=0};
	__property TcxPCCanCloseEventEx OnCanClose = {read=FOnCanClose, write=FOnCanClose};
	__property TcxPCCloseEvent OnClose = {read=FOnClose, write=FOnClose};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property TcxCustomTabControlPropertiesChangedEvent OnChanged = {read=FOnChanged, write=FOnChanged};
	__property TcxTabChangingEvent OnChanging = {read=FOnChanging, write=FOnChanging};
	__property TcxPCPropertiesDrawTabEvent OnDrawTab = {read=FOnDrawTab, write=FOnDrawTab};
	__property TcxPCPropertiesDrawTabExEvent OnDrawTabEx = {read=FOnDrawTabEx, write=FOnDrawTabEx};
	__property TcxGetTabImageEvent OnGetImageIndex = {read=FOnGetImageIndex, write=FOnGetImageIndex};
	__property TcxGetTabHintEvent OnGetTabHint = {read=FOnGetTabHint, write=FOnGetTabHint};
	__property TcxPCNewTabButtonClickEvent OnNewTabButtonClick = {read=FOnNewTabButtonClick, write=FOnNewTabButtonClick};
	__property TcxPCNewTabCreateEvent OnNewTabCreate = {read=FOnNewTabCreate, write=FOnNewTabCreate};
	__property System::Classes::TNotifyEvent OnStyleChanged = {read=FOnStyleChanged, write=FOnStyleChanged};
	__property TcxPCPaintDragImageEvent OnPaintDragImage = {read=FOnPaintDragImage, write=FOnPaintDragImage};
	__property TcxPCPrepareTabCanvasFontEvent OnPrepareTabCanvasFont = {read=FOnPrepareTabCanvasFont, write=FOnPrepareTabCanvasFont};
	__property TcxPCTabClickEvent OnTabClick = {read=FOnTabClick, write=FOnTabClick};
	
public:
	__fastcall virtual TcxCustomTabControlProperties(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TcxCustomTabControlProperties();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall BeginUpdate();
	void __fastcall CancelUpdate();
	void __fastcall EndUpdate();
	__property TcxPCNewButton* NewButton = {read=GetNewButton};
};


typedef System::TMetaClass* TcxCustomTabControlPropertiesClass;

class PASCALIMPLEMENTATION TcxTabControlProperties : public TcxCustomTabControlProperties
{
	typedef TcxCustomTabControlProperties inherited;
	
__published:
	__property ActivateFocusedTab = {default=1};
	__property AllowTabDragDrop = {default=0};
	__property CloseButtonMode = {default=0};
	__property CloseTabWithMiddleClick = {default=0};
	__property CustomButtons;
	__property DragImage;
	__property HideTabs = {default=0};
	__property HotImages;
	__property HotTrack = {default=0};
	__property ImageBorder = {default=0};
	__property Images;
	__property MultiLine = {default=0};
	__property MultiLineTabCaptions = {default=0};
	__property MultiSelect = {default=0};
	__property NavigatorPosition = {default=2};
	__property NewButtonMode = {default=0};
	__property Options = {default=177};
	__property OwnerDraw = {default=0};
	__property RaggedRight = {default=0};
	__property Rotate = {default=0};
	__property RotatedTabsMaxWidth = {default=0};
	__property ScrollOpposite = {default=0};
	__property ShowButtonHints = {default=0};
	__property ShowFrame = {default=0};
	__property ShowTabHints = {default=0};
	__property Style = {default=0};
	__property TabCaptionAlignment = {default=2};
	__property TabHeight = {default=0};
	__property TabIndex = {default=-1};
	__property TabPosition = {default=0};
	__property Tabs;
	__property TabsScroll = {default=1};
	__property TabSlants;
	__property TabWidth = {default=0};
public:
	/* TcxCustomTabControlProperties.Create */ inline __fastcall virtual TcxTabControlProperties(System::Classes::TPersistent* AOwner) : TcxCustomTabControlProperties(AOwner) { }
	/* TcxCustomTabControlProperties.Destroy */ inline __fastcall virtual ~TcxTabControlProperties() { }
	
};


typedef void __fastcall (__closure *TcxDrawTabEvent)(TcxCustomTabControl* AControl, TcxTab* ATab, bool &DefaultDraw);

typedef void __fastcall (__closure *TcxDrawTabExEvent)(TcxCustomTabControl* AControl, TcxTab* ATab, Vcl::Graphics::TFont* Font);

typedef void __fastcall (__closure *TcxPCCanCloseEvent)(System::TObject* Sender, bool &ACanClose);

typedef void __fastcall (__closure *TcxTabControlTabDragAndDropEvent)(TcxCustomTabControl* AControl, int AIndex, int ADestinationIndex, bool &AAccept);

typedef void __fastcall (__closure *TcxTabControlTabStartDragEvent)(TcxCustomTabControl* AControl, int AIndex);

typedef void __fastcall (__closure *TcxTabControlTabEndDragEvent)(TcxCustomTabControl* AControl, int ANewIndex);

class PASCALIMPLEMENTATION TcxCustomTabControl : public Cxcontrols::TcxControl
{
	typedef Cxcontrols::TcxControl inherited;
	
private:
	TcxCustomTabControlController* FController;
	bool FFocusable;
	TcxPCCustomPainter* FPainter;
	TcxCustomTabControlProperties* FProperties;
	TcxCustomTabControlViewInfo* FViewInfo;
	System::Types::TRect FClientRect;
	bool FIsClientRectLoaded;
	Vcl::Controls::TScalingFlags FScalingFlags;
	TcxPCCanCloseEvent FOnCanClose;
	TcxPCCanCloseEventEx FOnCanCloseEx;
	System::Classes::TNotifyEvent FOnChange;
	TcxTabChangingEvent FOnChanging;
	TcxDrawTabEvent FOnDrawTab;
	TcxDrawTabExEvent FOnDrawTabEx;
	TcxGetTabImageEvent FOnGetImageIndex;
	TcxGetTabHintEvent FOnGetTabHint;
	TcxPCNewTabButtonClickEvent FOnNewTabButtonClick;
	TcxPCNewTabCreateEvent FOnNewTabCreate;
	TcxPCPaintDragImageEvent FOnPaintDragImage;
	TcxTabControlTabDragAndDropEvent FOnTabDragAndDrop;
	TcxTabControlTabEndDragEvent FOnTabEndDrag;
	TcxTabControlTabStartDragEvent FOnTabStartDrag;
	int __fastcall GetFirstVisibleTab();
	bool __fastcall GetHideTabs();
	bool __fastcall GetHotTrack();
	int __fastcall GetImageBorder();
	Vcl::Imglist::TCustomImageList* __fastcall GetImages();
	bool __fastcall GetIsTabsContainer();
	bool __fastcall GetMultiLine();
	bool __fastcall GetMultiSelect();
	TcxPCNavigatorPosition __fastcall GetNavigatorPosition();
	TcxPCOptions __fastcall GetOptions();
	bool __fastcall GetOwnerDraw();
	bool __fastcall GetRaggedRight();
	bool __fastcall GetRotate();
	int __fastcall GetMaxRotatedTabWidth();
	bool __fastcall GetScrollOpposite();
	bool __fastcall GetShowFrame();
	System::Classes::TAlignment __fastcall GetTabCaptionAlignment();
	short __fastcall GetTabHeight();
	int __fastcall GetTabIndex();
	TcxTabPosition __fastcall GetTabPosition();
	TcxTabSlants* __fastcall GetTabSlants();
	short __fastcall GetTabWidth();
	TcxPCNewEvent __fastcall GetOnNew();
	void __fastcall SetFirstVisibleTab(int Value);
	void __fastcall SetHideTabs(const bool Value);
	void __fastcall SetHotTrack(bool Value);
	void __fastcall SetIsTabsContainer(bool Value);
	void __fastcall SetImageBorder(const int Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall SetMultiLine(const bool Value);
	void __fastcall SetMultiSelect(const bool Value);
	void __fastcall SetNavigatorPosition(const TcxPCNavigatorPosition Value);
	void __fastcall SetOptions(TcxPCOptions Value);
	void __fastcall SetOwnerDraw(const bool Value);
	void __fastcall SetRaggedRight(const bool Value);
	void __fastcall SetRotate(const bool Value);
	void __fastcall SetMaxRotatedTabWidth(int Value);
	void __fastcall SetScrollOpposite(const bool Value);
	void __fastcall SetShowFrame(const bool Value);
	void __fastcall SetTabCaptionAlignment(System::Classes::TAlignment Value);
	void __fastcall SetTabHeight(const short Value);
	void __fastcall SetTabIndex(int Value);
	void __fastcall SetTabPosition(const TcxTabPosition Value);
	void __fastcall SetTabSlants(TcxTabSlants* Value);
	void __fastcall SetTabWidth(const short Value);
	void __fastcall SetOnNew(const TcxPCNewEvent Value);
	System::Types::TRect __fastcall GetPageClientRect();
	System::Types::TRect __fastcall GetPageClientRectOffset();
	int __fastcall GetMainTabIndex();
	TcxPCStyleID __fastcall GetStyle();
	TcxTabs* __fastcall GetTabs();
	System::Types::TRect __fastcall InternalGetClientRect();
	void __fastcall ReadClientRectBottom(System::Classes::TReader* Reader);
	void __fastcall ReadClientRectLeft(System::Classes::TReader* Reader);
	void __fastcall ReadClientRectRight(System::Classes::TReader* Reader);
	void __fastcall ReadClientRectTop(System::Classes::TReader* Reader);
	void __fastcall SetProperties(TcxCustomTabControlProperties* const Value);
	void __fastcall SetStyle(const TcxPCStyleID Value);
	void __fastcall SetTabs(TcxTabs* const Value);
	void __fastcall WriteClientRectBottom(System::Classes::TWriter* Writer);
	void __fastcall WriteClientRectLeft(System::Classes::TWriter* Writer);
	void __fastcall WriteClientRectRight(System::Classes::TWriter* Writer);
	void __fastcall WriteClientRectTop(System::Classes::TWriter* Writer);
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMDialogKey(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMParentColorChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMPrintClient(Winapi::Messages::TWMPrint &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	
protected:
	virtual void __fastcall AdjustClientRect(System::Types::TRect &Rect);
	virtual void __fastcall ChangeScaleEx(int M, int D, bool isDpiChange);
	virtual void __fastcall CreateHandle();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall Loaded();
	virtual void __fastcall Paint();
	virtual Cxcontrols::TcxDragAndDropObject* __fastcall CreateDragAndDropObject();
	virtual bool __fastcall CanFocusOnClick(int X, int Y)/* overload */;
	DYNAMIC bool __fastcall GetDesignHitTest(int X, int Y, System::Classes::TShiftState Shift);
	virtual void __fastcall EraseBackground(HDC DC)/* overload */;
	virtual bool __fastcall HasBackground();
	DYNAMIC void __fastcall FocusChanged();
	DYNAMIC void __fastcall FontChanged();
	virtual void __fastcall LookAndFeelChanged(Cxlookandfeels::TcxLookAndFeel* Sender, Cxlookandfeels::TcxLookAndFeelValues AChangedValues);
	virtual bool __fastcall NeedsScrollBars();
	virtual bool __fastcall NeedRedrawOnResize();
	DYNAMIC bool __fastcall DoMouseWheelDown(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	DYNAMIC bool __fastcall DoMouseWheelUp(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseEnter(Vcl::Controls::TControl* AControl);
	DYNAMIC void __fastcall MouseLeave(Vcl::Controls::TControl* AControl);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall PropertiesCanCloseHandler(System::TObject* Sender, int AIndex, bool &ACanClose);
	void __fastcall PropertiesChangeHandler(System::TObject* Sender);
	void __fastcall PropertiesChangedHandler(System::TObject* Sender, TcxCustomTabControlPropertiesChangedType AType);
	void __fastcall PropertiesChangingHandler(System::TObject* Sender, bool &AllowChange);
	void __fastcall PropertiesDrawTabExHandler(TcxCustomTabControlProperties* AControl, TcxTab* ATab, Vcl::Graphics::TFont* Font);
	void __fastcall PropertiesDrawTabHandler(TcxCustomTabControlProperties* AControl, TcxTab* ATab, bool &DefaultDraw);
	void __fastcall PropertiesGetImageIndexHandler(System::TObject* Sender, int TabIndex, int &ImageIndex);
	void __fastcall PropertiesGetTabHintHandler(System::TObject* Sender, int ATabIndex, System::UnicodeString &AHint, bool &ACanShow);
	void __fastcall PropertiesNewTabButtonClickHandler(System::TObject* Sender, bool &AHandled);
	void __fastcall PropertiesNewTabCreateHandler(System::TObject* Sender, int AIndex);
	void __fastcall PropertiesPaintDragImageHandler(System::TObject* Sender, Vcl::Graphics::TBitmap* ABitmap, bool &ADone);
	virtual void __fastcall PropertiesPrepareTabCanvasFontHandler(TcxTab* ATab, Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall PropertiesTabClickHandler(System::TObject* Sender, int ATabVisibleIndex, System::Classes::TShiftState AShift);
	bool __fastcall PropertiesTabDragAndDrop(int AIndex, int ADestinationIndex);
	void __fastcall PropertiesTabEndDrag(int ANewIndex);
	void __fastcall PropertiesTabStartDrag(int AIndex);
	virtual void __fastcall AfterLoaded();
	virtual void __fastcall AfterPaintTab(Cxgraphics::TcxCanvas* ACanvas, TcxTab* ATab, const TcxPCOutTabImageAndTextData &AImageAndTextData);
	virtual void __fastcall Change();
	virtual bool __fastcall HandleDialogChar(int Key);
	bool __fastcall InternalKeyDown(System::Word Key, System::Classes::TShiftState Shift);
	virtual void __fastcall DrawTab(int TabIndex, const System::Types::TRect &Rect, bool Active);
	__classmethod void __fastcall OutError(Vcl::Controls::TCaption SourceMethodName, Vcl::Controls::TCaption Msg);
	virtual void __fastcall LayoutChanged(bool ANeedRealign);
	void __fastcall RecreatePainter();
	DYNAMIC void __fastcall RequestLayout();
	void __fastcall SetModified();
	void __fastcall StyleChanged(System::TObject* Sender);
	void __fastcall UpdateTabImages();
	virtual TcxCustomTabControlControllerClass __fastcall GetControllerClass();
	TcxPCPainterClass __fastcall GetPainterClass();
	virtual TcxCustomTabControlPropertiesClass __fastcall GetPropertiesClass();
	virtual TcxCustomTabControlViewInfoClass __fastcall GetViewInfoClass();
	virtual bool __fastcall AllowAutoDragAndDropAtDesignTime(int X, int Y, System::Classes::TShiftState Shift);
	DYNAMIC bool __fastcall AllowDragAndDropWithoutFocus();
	DYNAMIC void __fastcall DragAndDrop(const System::Types::TPoint &P, bool &Accepted);
	DYNAMIC void __fastcall EndDragAndDrop(bool Accepted);
	DYNAMIC bool __fastcall StartDragAndDrop(const System::Types::TPoint &P);
	bool __fastcall CanDrawParentBackground();
	HIDESBASE System::Types::TRect __fastcall GetBoundsRect();
	Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	HIDESBASE Vcl::Controls::TWinControl* __fastcall GetControl();
	TcxCustomTabControlController* __fastcall GetController();
	HIDESBASE Cxcontrols::TcxDragAndDropObject* __fastcall GetDragAndDropObject();
	Cxcontrols::TcxDragAndDropState __fastcall GetDragAndDropState();
	System::Uitypes::TColor __fastcall GetColor();
	Vcl::Graphics::TFont* __fastcall GetFont();
	Cxlookandfeels::TcxLookAndFeel* __fastcall GetLookAndFeel();
	TcxPCCustomPainter* __fastcall GetPainter();
	TcxCustomTabControlProperties* __fastcall GetProperties();
	TcxCustomTabControlViewInfo* __fastcall GetViewInfo();
	bool __fastcall IsEnabled();
	HIDESBASE bool __fastcall IsDesigning();
	HIDESBASE bool __fastcall IsDestroying();
	HIDESBASE bool __fastcall IsFocused();
	HIDESBASE bool __fastcall IsLoading();
	bool __fastcall IsParentBackground();
	bool __fastcall PtInCaller(const System::Types::TPoint &P);
	void __fastcall MouseTrackingCallerMouseLeave();
	virtual void __fastcall GetAdornerTargetElements(System::Classes::TStrings* AList);
	__property int FirstVisibleTab = {read=GetFirstVisibleTab, write=SetFirstVisibleTab, nodefault};
	__property bool Focusable = {read=FFocusable, write=FFocusable, default=1};
	__property bool HideTabs = {read=GetHideTabs, write=SetHideTabs, stored=false, nodefault};
	__property bool HotTrack = {read=GetHotTrack, write=SetHotTrack, stored=false, nodefault};
	__property bool IsTabsContainer = {read=GetIsTabsContainer, write=SetIsTabsContainer, stored=false, nodefault};
	__property int ImageBorder = {read=GetImageBorder, write=SetImageBorder, stored=false, nodefault};
	__property Vcl::Imglist::TCustomImageList* Images = {read=GetImages, write=SetImages, stored=false};
	__property int MainTabIndex = {read=GetMainTabIndex, nodefault};
	__property bool MultiLine = {read=GetMultiLine, write=SetMultiLine, stored=false, nodefault};
	__property bool MultiSelect = {read=GetMultiSelect, write=SetMultiSelect, stored=false, nodefault};
	__property TcxPCNavigatorPosition NavigatorPosition = {read=GetNavigatorPosition, write=SetNavigatorPosition, stored=false, nodefault};
	__property TcxPCOptions Options = {read=GetOptions, write=SetOptions, stored=false, nodefault};
	__property bool OwnerDraw = {read=GetOwnerDraw, write=SetOwnerDraw, stored=false, nodefault};
	__property System::Types::TRect PageClientRect = {read=GetPageClientRect};
	__property System::Types::TRect PageClientRectOffset = {read=GetPageClientRectOffset};
	__property bool RaggedRight = {read=GetRaggedRight, write=SetRaggedRight, stored=false, nodefault};
	__property bool Rotate = {read=GetRotate, write=SetRotate, stored=false, nodefault};
	__property int MaxRotatedTabWidth = {read=GetMaxRotatedTabWidth, write=SetMaxRotatedTabWidth, stored=false, nodefault};
	__property bool ScrollOpposite = {read=GetScrollOpposite, write=SetScrollOpposite, stored=false, nodefault};
	__property bool ShowFrame = {read=GetShowFrame, write=SetShowFrame, stored=false, nodefault};
	__property TcxPCStyleID Style = {read=GetStyle, write=SetStyle, stored=false, nodefault};
	__property System::Classes::TAlignment TabCaptionAlignment = {read=GetTabCaptionAlignment, write=SetTabCaptionAlignment, stored=false, nodefault};
	__property short TabHeight = {read=GetTabHeight, write=SetTabHeight, stored=false, nodefault};
	__property int TabIndex = {read=GetTabIndex, write=SetTabIndex, stored=false, nodefault};
	__property TcxTabPosition TabPosition = {read=GetTabPosition, write=SetTabPosition, stored=false, nodefault};
	__property TcxTabSlants* TabSlants = {read=GetTabSlants, write=SetTabSlants};
	__property short TabWidth = {read=GetTabWidth, write=SetTabWidth, stored=false, nodefault};
	__property TcxTabs* Tabs = {read=GetTabs, write=SetTabs, stored=false};
	__property TcxPCCanCloseEvent OnCanClose = {read=FOnCanClose, write=FOnCanClose};
	__property TcxPCCanCloseEventEx OnCanCloseEx = {read=FOnCanCloseEx, write=FOnCanCloseEx};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property TcxTabChangingEvent OnChanging = {read=FOnChanging, write=FOnChanging};
	__property TcxDrawTabEvent OnDrawTab = {read=FOnDrawTab, write=FOnDrawTab};
	__property TcxDrawTabExEvent OnDrawTabEx = {read=FOnDrawTabEx, write=FOnDrawTabEx};
	__property TcxGetTabImageEvent OnGetImageIndex = {read=FOnGetImageIndex, write=FOnGetImageIndex};
	__property TcxGetTabHintEvent OnGetTabHint = {read=FOnGetTabHint, write=FOnGetTabHint};
	__property TcxPCPaintDragImageEvent OnPaintDragImage = {read=FOnPaintDragImage, write=FOnPaintDragImage};
	__property TcxPCNewTabButtonClickEvent OnNewTabButtonClick = {read=FOnNewTabButtonClick, write=FOnNewTabButtonClick};
	__property TcxPCNewTabCreateEvent OnNewTabCreate = {read=FOnNewTabCreate, write=FOnNewTabCreate};
	__property TcxPCNewEvent OnNew = {read=GetOnNew, write=SetOnNew, stored=false};
	__property TcxTabControlTabDragAndDropEvent OnTabDragAndDrop = {read=FOnTabDragAndDrop, write=FOnTabDragAndDrop};
	__property TcxTabControlTabEndDragEvent OnTabEndDrag = {read=FOnTabEndDrag, write=FOnTabEndDrag};
	__property TcxTabControlTabStartDragEvent OnTabStartDrag = {read=FOnTabStartDrag, write=FOnTabStartDrag};
	
public:
	__fastcall virtual TcxCustomTabControl(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TcxCustomTabControl();
	DYNAMIC bool __fastcall CanFocus();
	void __fastcall CloseTab(int AIndex);
	int __fastcall GetOptimalSize();
	DYNAMIC void __fastcall GetTabOrderList(System::Classes::TList* List);
	int __fastcall IndexOfTabAt(int X, int Y);
	int __fastcall VisibleIndexOfTabAt(int X, int Y);
	void __fastcall ScrollTabs(int ADelta);
	void __fastcall SetStandardStyle(TcxPCStandardStyle StandardStyle);
	void __fastcall SetStyleByStyleName(Vcl::Controls::TCaption StyleName);
	__property TcxCustomTabControlController* Controller = {read=FController};
	__property LookAndFeel;
	__property TcxPCCustomPainter* Painter = {read=FPainter};
	__property ParentBackground = {default=1};
	__property TcxCustomTabControlProperties* Properties = {read=FProperties, write=SetProperties};
	__property TabStop = {default=1};
	__property TcxCustomTabControlViewInfo* ViewInfo = {read=FViewInfo};
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomTabControl(HWND ParentWindow) : Cxcontrols::TcxControl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	inline bool __fastcall  CanFocusOnClick(){ return Cxcontrols::TcxControl::CanFocusOnClick(); }
	inline void __fastcall  EraseBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect){ Cxcontrols::TcxControl::EraseBackground(ACanvas, ARect); }
	
private:
	void *__IdxSkinSupport;	// Cxlookandfeels::IdxSkinSupport 
	void *__IcxMouseTrackingCaller2;	// Dxcoreclasses::IcxMouseTrackingCaller2 
	void *__IcxMouseTrackingCaller;	// Dxcoreclasses::IcxMouseTrackingCaller 
	void *__IcxTabControl;	// IcxTabControl 
	
public:
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
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E29BF582-E8C0-4868-A799-DB4C41AC3BC8}
	operator Cxcontrols::_di_IcxControlComponentState()
	{
		Cxcontrols::_di_IcxControlComponentState intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxcontrols::IcxControlComponentState*(void) { return (Cxcontrols::IcxControlComponentState*)&__IcxTabControl; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {8C8C2262-5419-46E1-BCE0-5A5311C330A0}
	operator _di_IcxTabControl()
	{
		_di_IcxTabControl intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IcxTabControl*(void) { return (IcxTabControl*)&__IcxTabControl; }
	#endif
	
};


class PASCALIMPLEMENTATION TcxPageControlProperties : public TcxCustomTabControlProperties
{
	typedef TcxCustomTabControlProperties inherited;
	
private:
	TcxTabSheet* FActivePage;
	bool FActivePageSetting;
	bool FPageInserting;
	System::Classes::TList* FPages;
	TcxTabSheetClass FTabSheetClass;
	TcxPageChangingEvent FOnPageChanging;
	void __fastcall ChangeActivePage(TcxTabSheet* APage);
	void __fastcall UpdateTabOrders();
	TcxPageControl* __fastcall GetControl();
	int __fastcall GetPageCount();
	void __fastcall SetActivePage(TcxTabSheet* APage);
	
protected:
	virtual bool __fastcall CanCloseButtonShow(TcxTab* ATab);
	virtual int __fastcall CreateNewTab();
	virtual void __fastcall DoAssign(System::Classes::TPersistent* Source);
	virtual void __fastcall DoChanging(int ANewTabIndex, bool &AAllowChange);
	virtual void __fastcall TabIndexChanged();
	virtual void __fastcall ImageListChange(System::TObject* Sender);
	virtual void __fastcall DoCloseTab(int AIndex);
	virtual System::UnicodeString __fastcall InternalGetTabHint(TcxTab* ATab, bool &ACanShow);
	virtual bool __fastcall TabIndexTabMustBeVisible();
	virtual void __fastcall MoveTab(int ACurrentIndex, int ANewIndex);
	DYNAMIC bool __fastcall CanChangeActivePage(TcxTabSheet* ANewPage);
	virtual TcxTabSheet* __fastcall GetActivePage();
	virtual TcxTabSheet* __fastcall GetPage(int ATabIndex);
	DYNAMIC void __fastcall DoPageChange();
	DYNAMIC void __fastcall DoPageChanging(TcxTabSheet* NewPage, bool &AllowChange);
	void __fastcall InsertPage(TcxTabSheet* APage);
	void __fastcall RemovePage(TcxTabSheet* APage);
	virtual void __fastcall UpdateActivePage();
	void __fastcall UpdateTab(TcxTabSheet* APage);
	void __fastcall UpdateTabs();
	__property TcxPageControl* Control = {read=GetControl};
	__property TcxPageChangingEvent OnPageChanging = {read=FOnPageChanging, write=FOnPageChanging};
	
public:
	__fastcall virtual TcxPageControlProperties(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TcxPageControlProperties();
	TcxTabSheet* __fastcall FindNextPage(TcxTabSheet* ACurrentPage, bool AGoForward, bool ACheckTabAccessibility, bool ACircular);
	__property int PageCount = {read=GetPageCount, nodefault};
	__property TcxTabSheet* Pages[int Index] = {read=GetPage};
	__property TabIndex = {default=-1};
	__property TcxTabSheetClass TabSheetClass = {read=FTabSheetClass, write=FTabSheetClass};
	
__published:
	__property TcxTabSheet* ActivePage = {read=GetActivePage, write=SetActivePage};
	__property ActivateFocusedTab = {default=1};
	__property AllowDisabledTabAccess = {default=0};
	__property AllowTabDragDrop = {default=0};
	__property CloseButtonMode = {default=0};
	__property CloseTabWithMiddleClick = {default=0};
	__property CustomButtons;
	__property DragImage;
	__property HideTabs = {default=0};
	__property HotImages;
	__property HotTrack = {default=0};
	__property ImageBorder = {default=0};
	__property Images;
	__property MultiLine = {default=0};
	__property MultiLineTabCaptions = {default=0};
	__property NavigatorPosition = {default=2};
	__property NewButtonMode = {default=0};
	__property Options = {default=177};
	__property OwnerDraw = {default=0};
	__property RaggedRight = {default=0};
	__property Rotate = {default=0};
	__property RotatedTabsMaxWidth = {default=0};
	__property ScrollOpposite = {default=0};
	__property ShowButtonHints = {default=0};
	__property ShowFrame = {default=0};
	__property ShowTabHints = {default=0};
	__property Style = {default=0};
	__property TabCaptionAlignment = {default=2};
	__property TabHeight = {default=0};
	__property TabPosition = {default=0};
	__property TabsScroll = {default=1};
	__property TabSlants;
	__property TabWidth = {default=0};
};


class PASCALIMPLEMENTATION TcxPageControlViewInfo : public TcxCustomTabControlViewInfo
{
	typedef TcxCustomTabControlViewInfo inherited;
	
private:
	TcxTabSheet* __fastcall GetActivePage();
	HIDESBASE TcxPageControlProperties* __fastcall GetProperties();
	
protected:
	virtual System::Uitypes::TColor __fastcall GetActivePageColor();
	virtual System::Uitypes::TColor __fastcall GetTabColor(int ATabVisibleIndex);
	virtual bool __fastcall HasActivePage();
	virtual bool __fastcall UseActivePageColor();
	
public:
	__property TcxTabSheet* ActivePage = {read=GetActivePage};
	__property TcxPageControlProperties* Properties = {read=GetProperties};
public:
	/* TcxCustomTabControlViewInfo.Create */ inline __fastcall virtual TcxPageControlViewInfo(System::TObject* AOwner) : TcxCustomTabControlViewInfo(AOwner) { }
	/* TcxCustomTabControlViewInfo.Destroy */ inline __fastcall virtual ~TcxPageControlViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxPageControl : public TcxCustomTabControl
{
	typedef TcxCustomTabControl inherited;
	
private:
	TcxTabSheet* FNewDockSheet;
	TcxTabSheet* FUndockingPage;
	TcxPageChangingEvent FOnPageChanging;
	void __fastcall PropertiesPageChangingHandler(System::TObject* Sender, TcxTabSheet* NewPage, bool &AllowChange);
	TcxTabSheet* __fastcall GetActivePage();
	void __fastcall SetActivePage(TcxTabSheet* APage);
	int __fastcall GetActivePageIndex();
	Vcl::Controls::TControl* __fastcall GetDockClientFromPoint(const System::Types::TPoint &P);
	TcxTabSheet* __fastcall GetPage(int Index);
	int __fastcall GetPageCount();
	HIDESBASE TcxPageControlProperties* __fastcall GetProperties();
	int __fastcall GetTabCount();
	void __fastcall SetActivePageIndex(int Value);
	HIDESBASE void __fastcall SetProperties(TcxPageControlProperties* Value);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall CMDockNotification(Vcl::Controls::TCMDockNotification &Message);
	MESSAGE void __fastcall CMControlChange(Vcl::Controls::TCMControlChange &Message);
	HIDESBASE MESSAGE void __fastcall CMUnDockClient(Vcl::Controls::TCMUnDockClient &Message);
	
protected:
	virtual void __fastcall AlignControls(Vcl::Controls::TControl* AControl, System::Types::TRect &Rect);
	virtual void __fastcall AfterLoaded();
	virtual TcxCustomTabControlPropertiesClass __fastcall GetPropertiesClass();
	virtual TcxCustomTabControlViewInfoClass __fastcall GetViewInfoClass();
	DYNAMIC void __fastcall SetChildOrder(System::Classes::TComponent* Child, int Order);
	virtual void __fastcall ShowControl(Vcl::Controls::TControl* AControl);
	DYNAMIC void __fastcall DoAddDockClient(Vcl::Controls::TControl* Client, const System::Types::TRect &ARect);
	DYNAMIC void __fastcall DockOver(Vcl::Controls::TDragDockObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	DYNAMIC void __fastcall DoRemoveDockClient(Vcl::Controls::TControl* Client);
	DYNAMIC bool __fastcall DoUnDock(Vcl::Controls::TWinControl* NewTarget, Vcl::Controls::TControl* Client);
	virtual int __fastcall DockClient(Vcl::Controls::TDragDockObject* DockSource, const System::Types::TPoint &MousePos);
	DYNAMIC void __fastcall GetSiteInfo(Vcl::Controls::TControl* Client, System::Types::TRect &InfluenceRect, const System::Types::TPoint &MousePos, bool &CanDock);
	TcxTabSheet* __fastcall GetPageFromDockClient(Vcl::Controls::TControl* Client);
	virtual bool __fastcall UndockClient(Vcl::Controls::TControl* NewTarget, Vcl::Controls::TControl* Client);
	virtual void __fastcall ControlChange(bool Inserting, Vcl::Controls::TControl* Child);
	
public:
	__fastcall virtual TcxPageControl(System::Classes::TComponent* AOwner);
	TcxTabSheet* __fastcall FindNextPage(TcxTabSheet* ACurrentPage, bool AGoForward, bool ACheckTabAccessibility);
	TcxTabSheet* __fastcall FindNextPageEx(TcxTabSheet* ACurrentPage, bool AGoForward, bool ACheckTabAccessibility, bool ACircular);
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	DYNAMIC void __fastcall DockDrop(Vcl::Controls::TDragDockObject* Source, int X, int Y);
	void __fastcall SelectNextPage(bool GoForward, bool CheckTabVisible = true);
	__property int ActivePageIndex = {read=GetActivePageIndex, write=SetActivePageIndex, nodefault};
	__property int PageCount = {read=GetPageCount, nodefault};
	__property TcxTabSheet* Pages[int Index] = {read=GetPage};
	__property int TabCount = {read=GetTabCount, nodefault};
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Color = {default=-16777211};
	__property Constraints;
	__property DockSite = {default=0};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Focusable = {default=1};
	__property Font;
	__property ParentBackground = {default=1};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Visible = {default=1};
	__property TcxPageControlProperties* Properties = {read=GetProperties, write=SetProperties};
	__property TcxTabSheet* ActivePage = {read=GetActivePage, write=SetActivePage, stored=false};
	__property HideTabs;
	__property HotTrack;
	__property ImageBorder;
	__property Images;
	__property LookAndFeel;
	__property MultiLine;
	__property NavigatorPosition;
	__property Options;
	__property OwnerDraw;
	__property RaggedRight;
	__property Rotate;
	__property MaxRotatedTabWidth;
	__property ScrollOpposite;
	__property ShowFrame;
	__property Style;
	__property TabHeight;
	__property TabPosition;
	__property TabSlants = {stored=false};
	__property TabWidth;
	__property OnCanClose;
	__property OnCanCloseEx;
	__property OnChange;
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDockDrop;
	__property OnDockOver;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnDrawTab;
	__property OnDrawTabEx;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGetImageIndex;
	__property OnGetTabHint;
	__property OnGetSiteInfo;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnNew;
	__property OnNewTabButtonClick;
	__property OnNewTabCreate;
	__property TcxPageChangingEvent OnPageChanging = {read=FOnPageChanging, write=FOnPageChanging};
	__property OnPaintDragImage;
	__property OnResize;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnTabDragAndDrop;
	__property OnTabEndDrag;
	__property OnTabStartDrag;
	__property OnUnDock;
public:
	/* TcxCustomTabControl.Destroy */ inline __fastcall virtual ~TcxPageControl() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxPageControl(HWND ParentWindow) : TcxCustomTabControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxTabSheet : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	bool FAllowCloseButton;
	bool FHighlighted;
	System::Uitypes::TImageIndex FImageIndex;
	TcxPageControl* FPageControl;
	TcxTab* FTab;
	System::UnicodeString FTabHint;
	bool FTabVisible;
	System::Classes::TNotifyEvent FOnHide;
	System::Classes::TNotifyEvent FOnShow;
	int __fastcall GetPageIndex();
	TcxPCCustomPainter* __fastcall GetPainter();
	int __fastcall GetTabIndex();
	void __fastcall InternalColorChanged();
	void __fastcall SetAllowCloseButton(const bool Value);
	void __fastcall SetHighlighted(const bool Value);
	void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value);
	void __fastcall SetPageControl(TcxPageControl* const Value);
	void __fastcall SetPageIndex(const int Value);
	void __fastcall SetTabVisible(const bool Value);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TWMNCPaint &Message);
	HIDESBASE MESSAGE void __fastcall CMColorChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMInvalidate(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMParentColorChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMShowingChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMTextChanged(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	DYNAMIC void __fastcall DoHide();
	DYNAMIC void __fastcall DoShow();
	DYNAMIC void __fastcall EnabledChanged();
	void __fastcall PagePropertyChanged();
	virtual void __fastcall SetParent(Vcl::Controls::TWinControl* AParent);
	virtual void __fastcall SetParentPageControl(TcxPageControl* AParentPageControl);
	DYNAMIC void __fastcall ShowingChanged();
	DYNAMIC void __fastcall TextChanged();
	__property TcxPCCustomPainter* Painter = {read=GetPainter};
	
public:
	__fastcall virtual TcxTabSheet(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TcxTabSheet();
	__property TcxPageControl* PageControl = {read=FPageControl, write=SetPageControl};
	__property int TabIndex = {read=GetTabIndex, nodefault};
	
__published:
	__property bool AllowCloseButton = {read=FAllowCloseButton, write=SetAllowCloseButton, default=1};
	__property BorderWidth = {default=0};
	__property Caption = {default=0};
	__property Color = {default=-16777211};
	__property Constraints;
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property Height = {stored=false};
	__property bool Highlighted = {read=FHighlighted, write=SetHighlighted, default=0};
	__property System::Uitypes::TImageIndex ImageIndex = {read=FImageIndex, write=SetImageIndex, default=-1};
	__property Left = {stored=false};
	__property int PageIndex = {read=GetPageIndex, write=SetPageIndex, stored=false, nodefault};
	__property ParentColor = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property System::UnicodeString TabHint = {read=FTabHint, write=FTabHint};
	__property bool TabVisible = {read=FTabVisible, write=SetTabVisible, default=1};
	__property Top = {stored=false};
	__property Visible = {stored=false, default=1};
	__property Width = {stored=false};
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property System::Classes::TNotifyEvent OnHide = {read=FOnHide, write=FOnHide};
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnResize;
	__property System::Classes::TNotifyEvent OnShow = {read=FOnShow, write=FOnShow};
	__property OnStartDrag;
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxTabSheet(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxTabControl : public TcxCustomTabControl
{
	typedef TcxCustomTabControl inherited;
	
private:
	HIDESBASE TcxTabControlProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(TcxTabControlProperties* Value);
	
protected:
	virtual TcxCustomTabControlPropertiesClass __fastcall GetPropertiesClass();
	
public:
	__property PageClientRect;
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Color = {default=-16777211};
	__property Constraints;
	__property DockSite = {default=0};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Focusable = {default=1};
	__property Font;
	__property ParentBackground = {default=1};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Visible = {default=1};
	__property TcxTabControlProperties* Properties = {read=GetProperties, write=SetProperties};
	__property HideTabs;
	__property HotTrack;
	__property ImageBorder;
	__property Images;
	__property LookAndFeel;
	__property MultiLine;
	__property MultiSelect;
	__property NavigatorPosition;
	__property Options;
	__property OwnerDraw;
	__property RaggedRight;
	__property Rotate;
	__property MaxRotatedTabWidth;
	__property ScrollOpposite;
	__property ShowFrame;
	__property Style;
	__property TabHeight;
	__property TabIndex;
	__property TabPosition;
	__property Tabs;
	__property TabSlants;
	__property TabWidth;
	__property OnCanClose;
	__property OnCanCloseEx;
	__property OnChange;
	__property OnChanging;
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDockDrop;
	__property OnDockOver;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnDrawTab;
	__property OnDrawTabEx;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGetImageIndex;
	__property OnGetSiteInfo;
	__property OnGetTabHint;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnNew;
	__property OnNewTabButtonClick;
	__property OnNewTabCreate;
	__property OnPaintDragImage;
	__property OnResize;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnTabDragAndDrop;
	__property OnTabEndDrag;
	__property OnTabStartDrag;
	__property OnUnDock;
public:
	/* TcxCustomTabControl.Create */ inline __fastcall virtual TcxTabControl(System::Classes::TComponent* AOwner) : TcxCustomTabControl(AOwner) { }
	/* TcxCustomTabControl.Destroy */ inline __fastcall virtual ~TcxTabControl() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxTabControl(HWND ParentWindow) : TcxCustomTabControl(ParentWindow) { }
	
};


typedef System::StaticArray<System::UnicodeString, 11> Cxpc__63;

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 TabsContainerOffset = System::Int8(0x2);
static const System::Int8 TabsContainerBaseWidth = System::Int8(0x3);
static const System::Int8 cxPCNoStyle = System::Int8(-1);
static const System::Int8 cxPCDefaultStyle = System::Int8(0x0);
#define cxPCDefaultStyleName L"Default"
static const System::Int8 cxPCNewButtonIndex = System::Int8(-2);
#define cxPCDefaultOptions (System::Set<TcxPCOption, TcxPCOption::pcoAlwaysShowGoDialogButton, TcxPCOption::pcoUsePageColorForTab>() << TcxPCOption::pcoAlwaysShowGoDialogButton << TcxPCOption::pcoGradient << TcxPCOption::pcoGradientClientArea << TcxPCOption::pcoRedrawOnResize )
#define cxTabSlantDefaultPositions (System::Set<TcxTabSlantPosition, TcxTabSlantPosition::spLeft, TcxTabSlantPosition::spRight>() << TcxTabSlantPosition::spLeft )
static const System::Int8 pchtNavigatorButton = System::Int8(0x1);
static const System::Int8 pchtTab = System::Int8(0x2);
static const System::Int8 pchtTabCloseButton = System::Int8(0x3);
static const System::Int8 pchtTabButton = System::Int8(0x4);
static const System::Int8 pchtHeaderButton = System::Int8(0x5);
extern DELPHI_PACKAGE System::StaticArray<Cxlookandfeelpainters::TcxButtonState, 4> NavigatorBtnStateToLookAndFeelBtnState;
extern DELPHI_PACKAGE Cxpc__63 dxPCOptionsNames;
extern DELPHI_PACKAGE int TabScrollingDelay;
extern DELPHI_PACKAGE int TabScrollingStartDelay;
extern DELPHI_PACKAGE int __fastcall DistanceGetter(const TcxPCDistance &Distance, const bool LongitudinalDistance);
extern DELPHI_PACKAGE Cxcustomcanvas::TcxRotationAngle __fastcall InternalGetTextRotationAngle(TcxCustomTabControlViewInfo* AViewInfo);
extern DELPHI_PACKAGE bool __fastcall InternalIsVerticalText(TcxCustomTabControlViewInfo* AViewInfo);
extern DELPHI_PACKAGE bool __fastcall IsBottomToTopAlignment(TcxCustomTabControl* TabControl);
extern DELPHI_PACKAGE bool __fastcall IsOneOfButtons(TcxPCNavigatorButton AButton1, TcxPCNavigatorButton AButton2, TcxPCNavigatorButton AButton);
extern DELPHI_PACKAGE bool __fastcall IsRightToLeftAlignment(TcxCustomTabControl* TabControl);
extern DELPHI_PACKAGE bool __fastcall IsVerticalText(TcxCustomTabControl* TabControl);
extern DELPHI_PACKAGE int __fastcall PointGetter(const System::Types::TPoint &APoint, bool AIsY);
extern DELPHI_PACKAGE void __fastcall PointSetter(System::Types::TPoint &APoint, bool AIsY, int AValue);
extern DELPHI_PACKAGE void __fastcall RectSetter(System::Types::TRect &ARect, bool AIsLeftTop, bool AIsY, int AValue);
extern DELPHI_PACKAGE System::Types::TRect __fastcall RotateRect(const System::Types::TRect &ARect, TcxTabPosition ATabPosition);
extern DELPHI_PACKAGE System::Types::TRect __fastcall RotateRectBack(const System::Types::TRect &ARect, TcxTabPosition ATabPosition);
extern DELPHI_PACKAGE void __fastcall ValidateRect(System::Types::TRect &R);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetPCStyleName(TcxPCStyleID AStyleID);
extern DELPHI_PACKAGE TcxTabPosition __fastcall cxPCGetRightToLeftTabPosition(TcxTabPosition ATabPosition);
}	/* namespace Cxpc */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXPC)
using namespace Cxpc;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxpcHPP
