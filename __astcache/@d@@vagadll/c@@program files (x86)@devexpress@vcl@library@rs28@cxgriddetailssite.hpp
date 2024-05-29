// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxGridDetailsSite.pas' rev: 35.00 (Windows)

#ifndef CxgriddetailssiteHPP
#define CxgriddetailssiteHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <dxCoreClasses.hpp>
#include <cxClasses.hpp>
#include <cxGraphics.hpp>
#include <cxControls.hpp>
#include <cxLookAndFeels.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxPC.hpp>
#include <cxGridCommon.hpp>
#include <cxGridLevel.hpp>
#include <cxGridCustomView.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxgriddetailssite
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxGridDetailsSiteTabHitTest;
class DELPHICLASS TcxGridDetailsSiteTabsPainter;
class DELPHICLASS TcxGridDetailsSitePainter;
class DELPHICLASS TcxGridLevelTabsProperties;
class DELPHICLASS TcxGridLevelTabsController;
class DELPHICLASS TcxGridLevelTabsViewInfo;
class DELPHICLASS TcxCustomGridDetailsSiteTabsViewInfo;
class DELPHICLASS TcxGridDetailsSiteLeftTabsViewInfo;
class DELPHICLASS TcxGridDetailsSiteTopTabsViewInfo;
class DELPHICLASS TcxCustomGridDetailsSiteViewInfoCachedInfo;
class DELPHICLASS TcxCustomGridDetailsSiteViewInfo;
//-- type declarations -------------------------------------------------------
typedef System::TMetaClass* TcxGridDetailsSiteTabHitTestClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridDetailsSiteTabHitTest : public Cxgridcustomview::TcxCustomGridHitTest
{
	typedef Cxgridcustomview::TcxCustomGridHitTest inherited;
	
private:
	Cxgridlevel::TcxGridLevel* FLevel;
	System::TObject* FOwner;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
	
public:
	__property Cxgridlevel::TcxGridLevel* Level = {read=FLevel, write=FLevel};
	__property System::TObject* Owner = {read=FOwner, write=FOwner};
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridDetailsSiteTabHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridDetailsSiteTabHitTest() : Cxgridcustomview::TcxCustomGridHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridDetailsSiteTabsPainter : public Cxgridcustomview::TcxCustomGridCellPainter
{
	typedef Cxgridcustomview::TcxCustomGridCellPainter inherited;
	
private:
	TcxCustomGridDetailsSiteTabsViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall Paint();
	__property TcxCustomGridDetailsSiteTabsViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridDetailsSiteTabsPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : Cxgridcustomview::TcxCustomGridCellPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridDetailsSiteTabsPainter() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridDetailsSitePainterClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridDetailsSitePainter : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Cxgraphics::TcxCanvas* FCanvas;
	TcxCustomGridDetailsSiteViewInfo* FViewInfo;
	
protected:
	virtual void __fastcall DrawBackground();
	virtual void __fastcall DrawFrame();
	virtual void __fastcall DrawTabs();
	__property Cxgraphics::TcxCanvas* Canvas = {read=FCanvas};
	__property TcxCustomGridDetailsSiteViewInfo* ViewInfo = {read=FViewInfo};
	
public:
	__fastcall virtual TcxGridDetailsSitePainter(Cxgraphics::TcxCanvas* ACanvas, TcxCustomGridDetailsSiteViewInfo* AViewInfo);
	virtual void __fastcall Paint();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridDetailsSitePainter() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxGridLevelTabsProperties : public Cxpc::TcxCustomTabControlProperties
{
	typedef Cxpc::TcxCustomTabControlProperties inherited;
	
private:
	bool FFocusActiveViewOnChange;
	Dxcoreclasses::TcxFreeNotificator* FFreeNotificator;
	bool FUnderlineHotKeys;
	Cxgridlevel::TcxGridLevel* __fastcall GetActiveLevel();
	int __fastcall GetLevelCount();
	Cxgridlevel::TcxGridLevel* __fastcall GetLevel(int Index);
	TcxCustomGridDetailsSiteViewInfo* __fastcall GetSiteViewInfo();
	void __fastcall SetActiveLevel(Cxgridlevel::TcxGridLevel* Value);
	void __fastcall SetUnderlineHotKeys(bool Value);
	
protected:
	virtual bool __fastcall CanProcessChanged();
	void __fastcall FreeNotification(System::Classes::TComponent* AComponent);
	System::UnicodeString __fastcall GetLevelDisplayText(Cxgridlevel::TcxGridLevel* ALevel);
	__property bool FocusActiveViewOnChange = {read=FFocusActiveViewOnChange, write=FFocusActiveViewOnChange, nodefault};
	
public:
	__fastcall virtual TcxGridLevelTabsProperties(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TcxGridLevelTabsProperties();
	void __fastcall AddLevel(Cxgridlevel::TcxGridLevel* ALevel);
	__property Cxgridlevel::TcxGridLevel* ActiveLevel = {read=GetActiveLevel, write=SetActiveLevel};
	__property int LevelCount = {read=GetLevelCount, nodefault};
	__property Cxgridlevel::TcxGridLevel* Levels[int Index] = {read=GetLevel};
	__property TcxCustomGridDetailsSiteViewInfo* SiteViewInfo = {read=GetSiteViewInfo};
	__property bool UnderlineHotKeys = {read=FUnderlineHotKeys, write=SetUnderlineHotKeys, nodefault};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridLevelTabsController : public Cxpc::TcxCustomTabControlController
{
	typedef Cxpc::TcxCustomTabControlController inherited;
	
private:
	HIDESBASE TcxGridLevelTabsProperties* __fastcall GetProperties();
	
protected:
	virtual bool __fastcall HandleDialogChar(int Key);
	virtual System::Types::TPoint __fastcall GetClientToScreen(const System::Types::TPoint &APoint);
	virtual System::Types::TPoint __fastcall GetScreenToClient(const System::Types::TPoint &APoint);
	__property TcxGridLevelTabsProperties* Properties = {read=GetProperties};
public:
	/* TcxCustomTabControlController.Create */ inline __fastcall virtual TcxGridLevelTabsController(System::TObject* AOwner) : Cxpc::TcxCustomTabControlController(AOwner) { }
	/* TcxCustomTabControlController.Destroy */ inline __fastcall virtual ~TcxGridLevelTabsController() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxGridLevelTabsViewInfo : public Cxpc::TcxCustomTabControlViewInfo
{
	typedef Cxpc::TcxCustomTabControlViewInfo inherited;
	
private:
	HIDESBASE TcxGridLevelTabsController* __fastcall GetController();
	HIDESBASE TcxGridLevelTabsProperties* __fastcall GetProperties();
	TcxCustomGridDetailsSiteViewInfo* __fastcall GetSiteViewInfo();
	
protected:
	virtual void __fastcall AfterPaintTab(Cxgraphics::TcxCanvas* ACanvas, Cxpc::TcxTab* ATab, const Cxpc::TcxPCOutTabImageAndTextData &AImageAndTextData);
	virtual bool __fastcall HasBorders();
	__property TcxGridLevelTabsController* Controller = {read=GetController};
	
public:
	virtual void __fastcall PrepareTabCanvasFont(Cxpc::TcxTabViewInfo* ATabViewInfo, Cxgraphics::TcxCanvas* ACanvas);
	__property TcxGridLevelTabsProperties* Properties = {read=GetProperties};
	__property TcxCustomGridDetailsSiteViewInfo* SiteViewInfo = {read=GetSiteViewInfo};
public:
	/* TcxCustomTabControlViewInfo.Create */ inline __fastcall virtual TcxGridLevelTabsViewInfo(System::TObject* AOwner) : Cxpc::TcxCustomTabControlViewInfo(AOwner) { }
	/* TcxCustomTabControlViewInfo.Destroy */ inline __fastcall virtual ~TcxGridLevelTabsViewInfo() { }
	
};


typedef System::TMetaClass* TcxCustomGridDetailsSiteTabsViewInfoClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridDetailsSiteTabsViewInfo : public Cxgridcustomview::TcxCustomGridCellViewInfo
{
	typedef Cxgridcustomview::TcxCustomGridCellViewInfo inherited;
	
private:
	System::Types::TRect FIcxTabControlBounds;
	TcxCustomGridDetailsSiteViewInfo* FSiteViewInfo;
	TcxGridLevelTabsController* FTabsController;
	Cxpc::TcxPCCustomPainter* FTabsPainter;
	TcxGridLevelTabsProperties* FTabsProperties;
	TcxGridLevelTabsViewInfo* FTabsViewInfo;
	bool FNeedActiveLevelChanged;
	Cxgridlevel::TcxGridLevel* __fastcall GetActiveLevel();
	int __fastcall GetFirstTabVisibleIndex();
	Cxgridlevel::TcxGridLevel* __fastcall GetLevel();
	void __fastcall SetFirstTabVisibleIndex(int Value);
	void __fastcall TabsPropertiesChangeHandler(System::TObject* Sender);
	
protected:
	virtual void __fastcall DoInvalidate();
	virtual Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	virtual Cxcontrols::TcxControl* __fastcall GetControl();
	virtual Cxgridcustomview::TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual void __fastcall InitHitTest(Cxgridcustomview::TcxCustomGridHitTest* AHitTest);
	virtual int __fastcall GetHeight();
	virtual int __fastcall GetWidth();
	virtual bool __fastcall GetHotTrack();
	virtual void __fastcall MouseLeave();
	virtual bool __fastcall PtInCaller(const System::Types::TPoint &P);
	virtual int __fastcall CalculateHeight();
	virtual int __fastcall CalculateWidth();
	void __fastcall CheckActiveLevel();
	virtual void __fastcall AdjustBounds();
	virtual bool __fastcall AreTabsRotated();
	virtual System::Uitypes::TColor __fastcall GetBkColor();
	System::Types::TPoint __fastcall GetTabsPointFromHitTest(Cxgridcustomview::TcxCustomGridHitTest* AHitTest);
	bool __fastcall GetIsVertical();
	Cxpc::TcxTabPosition __fastcall GetTabPosition();
	virtual void __fastcall InitTabs();
	virtual void __fastcall InitTabsData();
	virtual void __fastcall InitTabsHotKeyParams();
	virtual void __fastcall InitTabsLayout();
	virtual void __fastcall InitTabsStyle();
	virtual void __fastcall InitTabsViewParams();
	void __fastcall SynchronizeActiveLevel();
	bool __fastcall IsDesigning();
	HIDESBASE bool __fastcall IsDestroying();
	bool __fastcall IsLoading();
	Cxpc::TcxCustomTabControlController* __fastcall GetController();
	Cxpc::TcxPCCustomPainter* __fastcall GetPainter();
	Cxpc::TcxCustomTabControlProperties* __fastcall GetProperties();
	Cxpc::TcxCustomTabControlViewInfo* __fastcall GetViewInfo();
	bool __fastcall CanDrawParentBackground();
	virtual System::Types::TRect __fastcall GetBoundsRect();
	Cxgraphics::TcxCanvas* __fastcall GetTabCanvas();
	Vcl::Controls::TWinControl* __fastcall GetTabControl();
	System::Uitypes::TColor __fastcall GetColor();
	Cxcontrols::TcxDragAndDropObject* __fastcall GetDragAndDropObject();
	Cxcontrols::TcxDragAndDropState __fastcall GetDragAndDropState();
	Vcl::Graphics::TFont* __fastcall GetFont();
	Cxlookandfeels::TcxLookAndFeel* __fastcall GetLookAndFeel();
	void __fastcall InvalidateRect(const System::Types::TRect &R, bool AEraseBackground);
	void __fastcall SetModified();
	bool __fastcall IsEnabled();
	bool __fastcall IsFocused();
	bool __fastcall IsParentBackground();
	void __fastcall RequestLayout();
	__property int FirstTabVisibleIndex = {read=GetFirstTabVisibleIndex, write=SetFirstTabVisibleIndex, nodefault};
	__property bool IsVertical = {read=GetIsVertical, nodefault};
	__property Cxgridlevel::TcxGridLevel* Level = {read=GetLevel};
	__property TcxGridLevelTabsController* TabsController = {read=FTabsController};
	__property Cxpc::TcxPCCustomPainter* TabsPainter = {read=FTabsPainter};
	__property TcxGridLevelTabsProperties* TabsProperties = {read=FTabsProperties};
	__property TcxGridLevelTabsViewInfo* TabsViewInfo = {read=FTabsViewInfo};
	
public:
	__fastcall virtual TcxCustomGridDetailsSiteTabsViewInfo(TcxCustomGridDetailsSiteViewInfo* ASiteViewInfo);
	__fastcall virtual ~TcxCustomGridDetailsSiteTabsViewInfo();
	virtual void __fastcall BeforeRecalculation();
	virtual void __fastcall Calculate(const System::Types::TRect &ABounds)/* overload */;
	HIDESBASE virtual void __fastcall GetClientBounds(System::Types::TRect &AClientBounds);
	virtual bool __fastcall ProcessDialogChar(System::Word ACharCode);
	virtual bool __fastcall MouseDown(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, System::Uitypes::TMouseButton AButton, System::Classes::TShiftState AShift);
	virtual bool __fastcall MouseMove(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, System::Classes::TShiftState AShift);
	virtual bool __fastcall MouseUp(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, System::Uitypes::TMouseButton AButton, System::Classes::TShiftState AShift);
	__property Cxgridlevel::TcxGridLevel* ActiveLevel = {read=GetActiveLevel};
	__property System::Uitypes::TColor BkColor = {read=GetBkColor, nodefault};
	__property TcxCustomGridDetailsSiteViewInfo* SiteViewInfo = {read=FSiteViewInfo};
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Calculate(int ALeftBound, int ATopBound, int AWidth = 0xffffffff, int AHeight = 0xffffffff){ Cxgridcustomview::TcxCustomGridCellViewInfo::Calculate(ALeftBound, ATopBound, AWidth, AHeight); }
	
private:
	void *__IcxControlComponentState;	// Cxcontrols::IcxControlComponentState 
	void *__IcxTabControl;	// Cxpc::IcxTabControl 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E29BF582-E8C0-4868-A799-DB4C41AC3BC8}
	operator Cxcontrols::_di_IcxControlComponentState()
	{
		Cxcontrols::_di_IcxControlComponentState intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxcontrols::IcxControlComponentState*(void) { return (Cxcontrols::IcxControlComponentState*)&__IcxControlComponentState; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {8C8C2262-5419-46E1-BCE0-5A5311C330A0}
	operator Cxpc::_di_IcxTabControl()
	{
		Cxpc::_di_IcxTabControl intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxpc::IcxTabControl*(void) { return (Cxpc::IcxTabControl*)&__IcxTabControl; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridDetailsSiteLeftTabsViewInfo : public TcxCustomGridDetailsSiteTabsViewInfo
{
	typedef TcxCustomGridDetailsSiteTabsViewInfo inherited;
	
protected:
	virtual void __fastcall AdjustBounds();
public:
	/* TcxCustomGridDetailsSiteTabsViewInfo.Create */ inline __fastcall virtual TcxGridDetailsSiteLeftTabsViewInfo(TcxCustomGridDetailsSiteViewInfo* ASiteViewInfo) : TcxCustomGridDetailsSiteTabsViewInfo(ASiteViewInfo) { }
	/* TcxCustomGridDetailsSiteTabsViewInfo.Destroy */ inline __fastcall virtual ~TcxGridDetailsSiteLeftTabsViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridDetailsSiteTopTabsViewInfo : public TcxCustomGridDetailsSiteTabsViewInfo
{
	typedef TcxCustomGridDetailsSiteTabsViewInfo inherited;
	
protected:
	virtual void __fastcall AdjustBounds();
public:
	/* TcxCustomGridDetailsSiteTabsViewInfo.Create */ inline __fastcall virtual TcxGridDetailsSiteTopTabsViewInfo(TcxCustomGridDetailsSiteViewInfo* ASiteViewInfo) : TcxCustomGridDetailsSiteTabsViewInfo(ASiteViewInfo) { }
	/* TcxCustomGridDetailsSiteTabsViewInfo.Destroy */ inline __fastcall virtual ~TcxGridDetailsSiteTopTabsViewInfo() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomGridDetailsSiteViewInfoCachedInfoClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridDetailsSiteViewInfoCachedInfo : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	bool IsAssigned;
	bool IsTopBottomBoundsAssigned;
	int FirstTabVisibleIndex;
	System::Types::TRect Bounds;
public:
	/* TObject.Create */ inline __fastcall TcxCustomGridDetailsSiteViewInfoCachedInfo() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomGridDetailsSiteViewInfoCachedInfo() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxCustomGridDetailsSiteViewInfo : public Cxclasses::TcxComponent
{
	typedef Cxclasses::TcxComponent inherited;
	
private:
	Cxgridcustomview::TcxCustomGridView* FActiveGridView;
	bool FFullyVisible;
	bool FIsRightToLeftConverted;
	Cxgridlevel::TcxGridLevel* FLevel;
	int FNormalHeight;
	TcxCustomGridDetailsSiteTabsViewInfo* FTabsViewInfo;
	int __fastcall GetClientHeight();
	int __fastcall GetClientWidth();
	Cxcontrols::TcxControl* __fastcall GetControl();
	System::Types::TRect __fastcall GetFrameBounds();
	int __fastcall GetInternalHeight();
	int __fastcall GetInternalWidth();
	bool __fastcall GetIsActiveGridViewDestroying();
	Cxlookandfeels::TcxLookAndFeel* __fastcall GetLookAndFeel();
	Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetLookAndFeelPainter();
	int __fastcall GetMaxDetailHeight();
	System::Types::TPoint __fastcall GetMaxDetailSize();
	int __fastcall GetMaxDetailWidth();
	int __fastcall GetNonClientHeight();
	int __fastcall GetNonClientWidth();
	Cxgridlevel::TcxGridDetailTabsPosition __fastcall GetTabsPosition();
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	virtual int __fastcall CalculateHeight();
	virtual int __fastcall CalculateWidth();
	virtual System::Uitypes::TColor __fastcall GetBkColor();
	virtual Cxgraphics::TcxCanvas* __fastcall GetCanvas() = 0 ;
	virtual System::Types::TRect __fastcall GetClientBounds();
	virtual Cxcontrols::TcxControl* __fastcall GetContainer() = 0 ;
	virtual Cxgridcustomview::TcxCustomGridDesignController* __fastcall GetDesignController() = 0 ;
	virtual int __fastcall GetEmptyClientHeight();
	virtual int __fastcall GetEmptyClientWidth();
	virtual System::Uitypes::TColor __fastcall GetFrameColor();
	virtual int __fastcall GetFrameWidth();
	virtual bool __fastcall GetFullyVisible();
	virtual int __fastcall GetHeight();
	virtual System::TObject* __fastcall GetMasterRecord() = 0 ;
	virtual int __fastcall GetMaxHeight() = 0 ;
	virtual int __fastcall GetMaxNormalHeight();
	virtual int __fastcall GetMaxWidth() = 0 ;
	virtual int __fastcall GetMinWidth();
	virtual int __fastcall GetNormalHeight();
	virtual int __fastcall GetWidth();
	virtual TcxGridDetailsSitePainterClass __fastcall GetPainterClass();
	virtual TcxCustomGridDetailsSiteTabsViewInfoClass __fastcall GetTabsViewInfoClass();
	virtual Cxgridcustomview::TcxCustomGridView* __fastcall GetActiveGridView() = 0 ;
	virtual bool __fastcall GetActiveGridViewExists();
	virtual Cxgridcustomview::TcxCustomGridView* __fastcall GetActiveGridViewValue();
	virtual Cxgridlevel::TcxGridLevel* __fastcall GetActiveLevel() = 0 ;
	virtual bool __fastcall GetVisible();
	virtual void __fastcall GetLevelTabDefaultParams(Cxgraphics::TcxViewParams &AParams);
	virtual void __fastcall GetLevelTabParams(Cxgridlevel::TcxGridLevel* ALevel, Cxgraphics::TcxViewParams &AParams);
	virtual void __fastcall InitTabHitTest(TcxGridDetailsSiteTabHitTest* AHitTest) = 0 ;
	virtual void __fastcall GetCachedInfo(TcxCustomGridDetailsSiteViewInfoCachedInfo* &AInfo);
	virtual TcxCustomGridDetailsSiteViewInfoCachedInfoClass __fastcall GetCachedInfoClass();
	virtual void __fastcall SetCachedInfo(TcxCustomGridDetailsSiteViewInfoCachedInfo* &AInfo);
	void __fastcall CreateTabsViewInfo();
	__property Cxgridcustomview::TcxCustomGridView* ActiveGridView = {read=GetActiveGridViewValue};
	__property bool ActiveGridViewExists = {read=GetActiveGridViewExists, nodefault};
	__property Cxgraphics::TcxCanvas* Canvas = {read=GetCanvas};
	__property int ClientHeight = {read=GetClientHeight, nodefault};
	__property int ClientWidth = {read=GetClientWidth, nodefault};
	__property Cxcontrols::TcxControl* Container = {read=GetContainer};
	__property Cxcontrols::TcxControl* Control = {read=GetControl};
	__property Cxgridcustomview::TcxCustomGridDesignController* DesignController = {read=GetDesignController};
	__property int EmptyClientHeight = {read=GetEmptyClientHeight, nodefault};
	__property int EmptyClientWidth = {read=GetEmptyClientWidth, nodefault};
	__property int InternalHeight = {read=GetInternalHeight, nodefault};
	__property int InternalWidth = {read=GetInternalWidth, nodefault};
	__property bool IsActiveGridViewDestroying = {read=GetIsActiveGridViewDestroying, nodefault};
	__property Cxlookandfeels::TcxLookAndFeel* LookAndFeel = {read=GetLookAndFeel};
	__property Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* LookAndFeelPainter = {read=GetLookAndFeelPainter};
	__property int MaxDetailHeight = {read=GetMaxDetailHeight, nodefault};
	__property System::Types::TPoint MaxDetailSize = {read=GetMaxDetailSize};
	__property int MaxDetailWidth = {read=GetMaxDetailWidth, nodefault};
	__property int MaxHeight = {read=GetMaxHeight, nodefault};
	__property int MaxNormalHeight = {read=GetMaxNormalHeight, nodefault};
	__property int MaxWidth = {read=GetMaxWidth, nodefault};
	__property int MinWidth = {read=GetMinWidth, nodefault};
	__property int NonClientHeight = {read=GetNonClientHeight, nodefault};
	__property int NonClientWidth = {read=GetNonClientWidth, nodefault};
	__property Cxgridlevel::TcxGridDetailTabsPosition TabsPosition = {read=GetTabsPosition, nodefault};
	
public:
	System::Types::TRect Bounds;
	__fastcall virtual TcxCustomGridDetailsSiteViewInfo(Cxgridlevel::TcxGridLevel* ALevel);
	__fastcall virtual ~TcxCustomGridDetailsSiteViewInfo();
	virtual void __fastcall BeforeRecalculation();
	virtual void __fastcall Calculate(int ALeftBound, int ATopBound);
	virtual void __fastcall ChangeActiveTab(Cxgridlevel::TcxGridLevel* ALevel, bool AFocusView = false) = 0 ;
	virtual bool __fastcall DetailHasData(Cxgridlevel::TcxGridLevel* ALevel) = 0 ;
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	virtual Cxgridcustomview::TcxCustomGridHitTest* __fastcall GetHitTest(const System::Types::TPoint &P);
	virtual bool __fastcall IsTabVisible(Cxgridlevel::TcxGridLevel* ALevel);
	void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
	bool __fastcall ProcessDialogChar(System::Word ACharCode);
	void __fastcall RightToLeftConversion(const System::Types::TRect &ABounds);
	virtual bool __fastcall SupportsTabAccelerators();
	virtual void __fastcall VisibilityChanged(bool AVisible);
	__property Cxgridlevel::TcxGridLevel* ActiveLevel = {read=GetActiveLevel};
	__property System::Uitypes::TColor BkColor = {read=GetBkColor, nodefault};
	__property System::Types::TRect ClientBounds = {read=GetClientBounds};
	__property System::Types::TRect FrameBounds = {read=GetFrameBounds};
	__property System::Uitypes::TColor FrameColor = {read=GetFrameColor, nodefault};
	__property int FrameWidth = {read=GetFrameWidth, nodefault};
	__property bool FullyVisible = {read=GetFullyVisible, nodefault};
	__property int Height = {read=GetHeight, nodefault};
	__property bool IsRightToLeftConverted = {read=FIsRightToLeftConverted, write=FIsRightToLeftConverted, nodefault};
	__property Cxgridlevel::TcxGridLevel* Level = {read=FLevel};
	__property System::TObject* MasterRecord = {read=GetMasterRecord};
	__property int NormalHeight = {read=GetNormalHeight, nodefault};
	__property TcxCustomGridDetailsSiteTabsViewInfo* TabsViewInfo = {read=FTabsViewInfo};
	__property bool Visible = {read=GetVisible, nodefault};
	__property int Width = {read=GetWidth, nodefault};
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 htTab = System::Int8(0x32);
extern DELPHI_PACKAGE int cxGridTabsRootSize;
}	/* namespace Cxgriddetailssite */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXGRIDDETAILSSITE)
using namespace Cxgriddetailssite;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxgriddetailssiteHPP
