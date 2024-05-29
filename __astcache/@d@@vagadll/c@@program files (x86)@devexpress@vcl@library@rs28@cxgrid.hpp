// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxGrid.pas' rev: 35.00 (Windows)

#ifndef CxgridHPP
#define CxgridHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.StdCtrls.hpp>
#include <dxCore.hpp>
#include <dxCoreClasses.hpp>
#include <dxMessages.hpp>
#include <cxClasses.hpp>
#include <cxGraphics.hpp>
#include <cxLookAndFeels.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxControls.hpp>
#include <cxPC.hpp>
#include <cxNavigator.hpp>
#include <cxCustomData.hpp>
#include <cxGridCommon.hpp>
#include <cxGridLevel.hpp>
#include <cxGridDetailsSite.hpp>
#include <cxGridCustomView.hpp>
#include <dxTouch.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxgrid
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxGridLayoutChange;
class DELPHICLASS TcxGridSizeChange;
class DELPHICLASS TcxGridViewChange;
class DELPHICLASS TcxCustomGridNotification;
class DELPHICLASS TcxCustomGridStructureNavigator;
class DELPHICLASS TcxCustomGridHandler;
class DELPHICLASS TcxGridDesignController;
class DELPHICLASS TcxGridDragOpenInfoTab;
class DELPHICLASS TcxGridController;
class DELPHICLASS TcxGridPainter;
class DELPHICLASS TcxGridTopDetailsSiteViewInfo;
class DELPHICLASS TcxGridViewInfo;
class DELPHICLASS TcxGridLevelTabs;
class DELPHICLASS TcxGridRootLevelOptions;
class DELPHICLASS TcxGridRootLevel;
class DELPHICLASS TcxGridLockedStateImageOptions;
class DELPHICLASS TcxGridLockedStatePaintHelper;
class DELPHICLASS TcxCustomGrid;
class DELPHICLASS TcxGrid;
class DELPHICLASS TcxGridViewRepository;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridLayoutChange : public Cxgridcustomview::TcxCustomGridViewChange
{
	typedef Cxgridcustomview::TcxCustomGridViewChange inherited;
	
public:
	virtual void __fastcall Execute();
	virtual bool __fastcall IsCompatibleWith(Cxgridcommon::TcxCustomGridChange* AChange);
public:
	/* TcxCustomGridViewChange.Create */ inline __fastcall virtual TcxGridLayoutChange(Cxgridcustomview::TcxCustomGridView* AGridView) : Cxgridcustomview::TcxCustomGridViewChange(AGridView) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridLayoutChange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridSizeChange : public Cxgridcustomview::TcxCustomGridViewChange
{
	typedef Cxgridcustomview::TcxCustomGridViewChange inherited;
	
private:
	bool FKeepMaster;
	bool FUpdateGridViewOnly;
	
protected:
	virtual bool __fastcall IsEqualCore(Cxgridcommon::TcxCustomGridChange* AChange);
	
public:
	__fastcall virtual TcxGridSizeChange(Cxgridcustomview::TcxCustomGridView* AGridView, bool AUpdateGridViewOnly, bool AKeepMaster);
	virtual void __fastcall Execute();
	virtual bool __fastcall IsCompatibleWith(Cxgridcommon::TcxCustomGridChange* AChange);
	__property bool KeepMaster = {read=FKeepMaster, nodefault};
	__property bool UpdateGridViewOnly = {read=FUpdateGridViewOnly, write=FUpdateGridViewOnly, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridSizeChange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridViewChange : public Cxgridcustomview::TcxCustomGridViewChange
{
	typedef Cxgridcustomview::TcxCustomGridViewChange inherited;
	
private:
	System::Types::TRect FUpdateBounds;
	Cxgraphics::TcxRegion* FUpdateRegion;
	
protected:
	virtual bool __fastcall IsEqualCore(Cxgridcommon::TcxCustomGridChange* AChange);
	
public:
	__fastcall virtual TcxGridViewChange(Cxgridcustomview::TcxCustomGridView* AGridView, const System::Types::TRect &AUpdateBounds)/* overload */;
	__fastcall virtual TcxGridViewChange(Cxgridcustomview::TcxCustomGridView* AGridView, Cxgraphics::TcxRegion* const AUpdateRegion)/* overload */;
	__fastcall TcxGridViewChange(Cxgridcustomview::TcxCustomGridView* AGridView)/* overload */;
	__fastcall virtual ~TcxGridViewChange();
	virtual void __fastcall Execute();
	virtual bool __fastcall IsCompatibleWith(Cxgridcommon::TcxCustomGridChange* AChange);
	__property System::Types::TRect UpdateBounds = {read=FUpdateBounds};
	__property Cxgraphics::TcxRegion* UpdateRegion = {read=FUpdateRegion};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TcxGridNotificationKind : unsigned char { gnkFocusedViewChanged, gnkFocusedRecordChanged, gnkRecordCountChanged, gnkContextMenu, gnkCustomization, gnkKeyDown };

typedef System::Set<TcxGridNotificationKind, TcxGridNotificationKind::gnkFocusedViewChanged, TcxGridNotificationKind::gnkKeyDown> TcxGridNotificationKinds;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridNotification : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	virtual TcxGridNotificationKinds __fastcall NotificationKinds() = 0 ;
	virtual void __fastcall Notify(TcxGridNotificationKind AKind, System::TObject* AData, bool &AHandled) = 0 ;
public:
	/* TObject.Create */ inline __fastcall TcxCustomGridNotification() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomGridNotification() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomGridStructureNavigatorClass;

class PASCALIMPLEMENTATION TcxCustomGridStructureNavigator : public Cxcontrols::TcxControl
{
	typedef Cxcontrols::TcxControl inherited;
	
private:
	TcxCustomGrid* FGrid;
	
protected:
	HIDESBASE virtual void __fastcall Changed();
	DYNAMIC void __fastcall FontChanged();
	DYNAMIC bool __fastcall MayFocus();
	virtual System::Types::TRect __fastcall CalculateBoundsRect() = 0 ;
	
public:
	__fastcall virtual TcxCustomGridStructureNavigator(TcxCustomGrid* AGrid);
	virtual void __fastcall BeforeGridLoading();
	virtual bool __fastcall CanAddComponent() = 0 ;
	virtual bool __fastcall CanDeleteComponent(System::Classes::TComponent* AComponent) = 0 ;
	virtual void __fastcall GetSelection(System::Classes::TList* AList) = 0 ;
	virtual bool __fastcall IsObjectSelected(System::Classes::TPersistent* AObject) = 0 ;
	virtual void __fastcall NotifyEditors() = 0 ;
	virtual void __fastcall SelectionChanged(System::Classes::TList* ASelection) = 0 ;
	virtual void __fastcall SelectObject(System::Classes::TPersistent* AObject, bool AClearSelection) = 0 ;
	virtual void __fastcall SelectObjects(System::Classes::TList* AObjects) = 0 ;
	virtual void __fastcall UnselectObject(System::Classes::TPersistent* AObject) = 0 ;
	__property TcxCustomGrid* Grid = {read=FGrid};
public:
	/* TcxControl.Destroy */ inline __fastcall virtual ~TcxCustomGridStructureNavigator() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomGridStructureNavigator(HWND ParentWindow) : Cxcontrols::TcxControl(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridHandler : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TcxCustomGrid* FControl;
	Cxgridcustomview::TcxCustomGridController* __fastcall GetActiveController();
	Cxgridcustomview::TcxCustomGridView* __fastcall GetActiveGridView();
	Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetLookAndFeelPainter();
	TcxGridViewInfo* __fastcall GetViewInfo();
	
protected:
	__property Cxgridcustomview::TcxCustomGridController* ActiveController = {read=GetActiveController};
	__property Cxgridcustomview::TcxCustomGridView* ActiveGridView = {read=GetActiveGridView};
	__property Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* LookAndFeelPainter = {read=GetLookAndFeelPainter};
	__property TcxGridViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	__fastcall virtual TcxCustomGridHandler(TcxCustomGrid* AControl);
	bool __fastcall UseRightToLeftAlignment();
	__property TcxCustomGrid* Control = {read=FControl};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomGridHandler() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridDesignControllerClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridDesignController : public Cxgridcustomview::TcxCustomGridDesignController
{
	typedef Cxgridcustomview::TcxCustomGridDesignController inherited;
	
private:
	TcxCustomGrid* FControl;
	
protected:
	virtual Cxcontrols::TcxControl* __fastcall GetControl();
	
public:
	__fastcall virtual TcxGridDesignController(TcxCustomGrid* AControl);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridDesignController() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridDragOpenInfoTab : public Cxgridcommon::TcxCustomGridDragOpenInfo
{
	typedef Cxgridcommon::TcxCustomGridDragOpenInfo inherited;
	
public:
	Cxgridlevel::TcxGridLevel* Level;
	__fastcall virtual TcxGridDragOpenInfoTab(Cxgridlevel::TcxGridLevel* ALevel);
	virtual bool __fastcall Equals(Cxgridcommon::TcxCustomGridDragOpenInfo* AInfo);
	virtual void __fastcall Run();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridDragOpenInfoTab() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridControllerClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridController : public TcxCustomGridHandler
{
	typedef TcxCustomGridHandler inherited;
	
private:
	TcxGridDesignController* FDesignController;
	Cxgridcommon::TcxCustomGridDragOpenInfo* FDragOpenInfo;
	Cxclasses::TcxTimer* FDragOpenTimer;
	TcxGridDesignController* __fastcall GetDesignController();
	void __fastcall DragOpenTimerHandler(System::TObject* Sender);
	
protected:
	virtual TcxGridDesignControllerClass __fastcall GetDesignControllerClass();
	
public:
	__fastcall virtual ~TcxGridController();
	virtual void __fastcall DoCancelMode();
	virtual void __fastcall FocusChanged();
	virtual System::Uitypes::TCursor __fastcall GetCursor(int X, int Y);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall DragOver(System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	virtual void __fastcall EndDrag(System::TObject* Target, int X, int Y);
	virtual void __fastcall StartDrag(Vcl::Controls::TDragObject* &DragObject);
	virtual Cxgridcommon::TcxCustomGridDragOpenInfo* __fastcall GetDragOpenInfo(Cxgridcustomview::TcxCustomGridHitTest* AHitTest);
	bool __fastcall IsDragOpenHitTest(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, /* out */ Cxgridcommon::TcxCustomGridDragOpenInfo* &ADragOpenInfo);
	void __fastcall StartDragOpen(Cxgridcommon::TcxCustomGridDragOpenInfo* ADragOpenInfo);
	void __fastcall StopDragOpen();
	__property Cxgridcommon::TcxCustomGridDragOpenInfo* DragOpenInfo = {read=FDragOpenInfo};
	__property TcxGridDesignController* DesignController = {read=GetDesignController};
public:
	/* TcxCustomGridHandler.Create */ inline __fastcall virtual TcxGridController(TcxCustomGrid* AControl) : TcxCustomGridHandler(AControl) { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridPainterClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridPainter : public TcxCustomGridHandler
{
	typedef TcxCustomGridHandler inherited;
	
private:
	Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	
protected:
	virtual void __fastcall DrawDetailsSite();
	
public:
	virtual void __fastcall Invalidate(bool AInvalidateDetails)/* overload */;
	virtual void __fastcall Invalidate(const System::Types::TRect &R)/* overload */;
	virtual void __fastcall Paint();
	__property Cxgraphics::TcxCanvas* Canvas = {read=GetCanvas};
public:
	/* TcxCustomGridHandler.Create */ inline __fastcall virtual TcxGridPainter(TcxCustomGrid* AControl) : TcxCustomGridHandler(AControl) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridPainter() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridTopDetailsSiteViewInfoClass;

class PASCALIMPLEMENTATION TcxGridTopDetailsSiteViewInfo : public Cxgriddetailssite::TcxCustomGridDetailsSiteViewInfo
{
	typedef Cxgriddetailssite::TcxCustomGridDetailsSiteViewInfo inherited;
	
private:
	HIDESBASE TcxCustomGrid* __fastcall GetControl();
	
protected:
	virtual int __fastcall CalculateHeight();
	virtual int __fastcall CalculateWidth();
	virtual Cxgridcustomview::TcxCustomGridView* __fastcall GetActiveGridView();
	virtual Cxgridlevel::TcxGridLevel* __fastcall GetActiveLevel();
	virtual Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	virtual Cxcontrols::TcxControl* __fastcall GetContainer();
	virtual Cxgridcustomview::TcxCustomGridDesignController* __fastcall GetDesignController();
	virtual System::TObject* __fastcall GetMasterRecord();
	virtual int __fastcall GetMaxHeight();
	virtual int __fastcall GetMaxWidth();
	virtual void __fastcall InitTabHitTest(Cxgriddetailssite::TcxGridDetailsSiteTabHitTest* AHitTest);
	__property TcxCustomGrid* Control = {read=GetControl};
	
public:
	virtual void __fastcall ChangeActiveTab(Cxgridlevel::TcxGridLevel* ALevel, bool AFocusView = false);
	virtual bool __fastcall DetailHasData(Cxgridlevel::TcxGridLevel* ALevel);
	virtual bool __fastcall SupportsTabAccelerators();
	virtual void __fastcall VisibilityChanged(bool AVisible);
public:
	/* TcxCustomGridDetailsSiteViewInfo.Create */ inline __fastcall virtual TcxGridTopDetailsSiteViewInfo(Cxgridlevel::TcxGridLevel* ALevel) : Cxgriddetailssite::TcxCustomGridDetailsSiteViewInfo(ALevel) { }
	/* TcxCustomGridDetailsSiteViewInfo.Destroy */ inline __fastcall virtual ~TcxGridTopDetailsSiteViewInfo() { }
	
};


typedef System::TMetaClass* TcxGridViewInfoClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridViewInfo : public TcxCustomGridHandler
{
	typedef TcxCustomGridHandler inherited;
	
private:
	TcxGridTopDetailsSiteViewInfo* FDetailsSiteViewInfo;
	Cxgriddetailssite::TcxCustomGridDetailsSiteViewInfoCachedInfo* FDetailsSiteViewInfoCachedInfo;
	bool FIsCalculating;
	System::Types::TRect __fastcall GetBounds();
	System::Types::TRect __fastcall GetClientBounds();
	System::Uitypes::TColor __fastcall GetEmptyAreaColor();
	
protected:
	virtual void __fastcall CreateViewInfos();
	virtual void __fastcall DestroyViewInfos();
	virtual TcxGridTopDetailsSiteViewInfoClass __fastcall GetDetailsSiteViewInfoClass();
	void __fastcall RecreateViewInfos();
	virtual void __fastcall Calculate();
	
public:
	__fastcall virtual TcxGridViewInfo(TcxCustomGrid* AControl);
	__fastcall virtual ~TcxGridViewInfo();
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	virtual Cxgridcustomview::TcxCustomGridHitTest* __fastcall GetHitTest(int X, int Y);
	void __fastcall MainCalculate();
	__property System::Types::TRect Bounds = {read=GetBounds};
	__property System::Types::TRect ClientBounds = {read=GetClientBounds};
	__property TcxGridTopDetailsSiteViewInfo* DetailsSiteViewInfo = {read=FDetailsSiteViewInfo};
	__property System::Uitypes::TColor EmptyAreaColor = {read=GetEmptyAreaColor, nodefault};
	__property bool IsCalculating = {read=FIsCalculating, nodefault};
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridLevelTabsClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridLevelTabs : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Classes::TAlignment FCaptionAlignment;
	Dxcoreclasses::TcxFreeNotificator* FFreeNotificator;
	int FImageBorder;
	Vcl::Imglist::TCustomImageList* FImages;
	Vcl::Imglist::TChangeLink* FImagesChangeLink;
	TcxCustomGrid* FOwner;
	Cxpc::TcxTabSlants* FSlants;
	Cxpc::TcxPCStyleID FStyle;
	void __fastcall SetCaptionAlignment(System::Classes::TAlignment Value);
	void __fastcall SetImageBorder(int Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetSlants(Cxpc::TcxTabSlants* Value);
	void __fastcall SetStyle(Cxpc::TcxPCStyleID Value);
	void __fastcall FreeNotification(System::Classes::TComponent* Sender);
	void __fastcall ImagesChanged(System::TObject* Sender);
	void __fastcall SlantsChanged(System::TObject* Sender);
	
protected:
	void __fastcall Changed();
	virtual void __fastcall ChangeScale(int M, int D);
	
public:
	__fastcall virtual TcxGridLevelTabs(TcxCustomGrid* AOwner);
	__fastcall virtual ~TcxGridLevelTabs();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	Vcl::Imglist::TCustomImageList* __fastcall GetImages();
	__property TcxCustomGrid* Owner = {read=FOwner};
	
__published:
	__property System::Classes::TAlignment CaptionAlignment = {read=FCaptionAlignment, write=SetCaptionAlignment, default=2};
	__property int ImageBorder = {read=FImageBorder, write=SetImageBorder, default=0};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property Cxpc::TcxTabSlants* Slants = {read=FSlants, write=SetSlants};
	__property Cxpc::TcxPCStyleID Style = {read=FStyle, write=SetStyle, default=0};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridRootLevelOptions : public Cxgridlevel::TcxGridLevelOptions
{
	typedef Cxgridlevel::TcxGridLevelOptions inherited;
	
public:
	__fastcall virtual TcxGridRootLevelOptions(Cxgridlevel::TcxGridLevel* ALevel);
	
__published:
	__property DetailFrameWidth = {default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxGridRootLevelOptions() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxGridRootLevel : public Cxgridlevel::TcxGridLevel
{
	typedef Cxgridlevel::TcxGridLevel inherited;
	
protected:
	virtual Cxgridlevel::TcxGridLevelOptionsClass __fastcall GetOptionsClass();
public:
	/* TcxGridLevel.Create */ inline __fastcall virtual TcxGridRootLevel(System::Classes::TComponent* AOwner) : Cxgridlevel::TcxGridLevel(AOwner) { }
	/* TcxGridLevel.Destroy */ inline __fastcall virtual ~TcxGridRootLevel() { }
	
};


typedef System::TMetaClass* TcxGridLockedStateImageOptionsClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridLockedStateImageOptions : public Cxcontrols::TcxLockedStateImageOptions
{
	typedef Cxcontrols::TcxLockedStateImageOptions inherited;
	
private:
	TcxCustomGrid* FGrid;
	
protected:
	virtual Vcl::Graphics::TFont* __fastcall GetFont();
	virtual bool __fastcall IsTextStored();
	__property TcxCustomGrid* Grid = {read=FGrid};
	
public:
	__fastcall virtual TcxGridLockedStateImageOptions(TcxCustomGrid* AGrid);
	
__published:
	__property AssignedValues = {default=0};
	__property Color = {default=536870911};
	__property Effect = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ShowText = {default=0};
	__property Text = {default=0};
public:
	/* TcxLockedStateImageOptions.Destroy */ inline __fastcall virtual ~TcxGridLockedStateImageOptions() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridLockedStatePaintHelper : public Cxcontrols::TcxLockedStatePaintHelper
{
	typedef Cxcontrols::TcxLockedStatePaintHelper inherited;
	
private:
	TcxCustomGrid* __fastcall GetGrid();
	
protected:
	virtual void __fastcall AfterDestroyingImage();
	virtual void __fastcall BeforeCreatingImage();
	virtual bool __fastcall CanCreateLockedImage();
	virtual bool __fastcall DoPrepareImage();
	virtual Cxcontrols::TcxLockedStateImageOptions* __fastcall GetOptions();
	virtual Cxcontrols::TcxControl* __fastcall GetControl();
	__property TcxCustomGrid* Grid = {read=GetGrid};
public:
	/* TcxLockedStatePaintHelper.Create */ inline __fastcall virtual TcxGridLockedStatePaintHelper(System::Classes::TComponent* AOwner) : Cxcontrols::TcxLockedStatePaintHelper(AOwner) { }
	/* TcxLockedStatePaintHelper.Destroy */ inline __fastcall virtual ~TcxGridLockedStatePaintHelper() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridLockedStatePaintHelperClass;

typedef void __fastcall (__closure *TcxGridActiveTabChangedEvent)(TcxCustomGrid* Sender, Cxgridlevel::TcxGridLevel* ALevel);

typedef void __fastcall (__closure *TcxGridActiveTabChangedExEvent)(TcxCustomGrid* Sender, Cxgridlevel::TcxGridLevel* ALevel, int ARecordIndex, bool &ADone);

typedef void __fastcall (__closure *TcxGridFocusedViewChangedEvent)(TcxCustomGrid* Sender, Cxgridcustomview::TcxCustomGridView* APrevFocusedView, Cxgridcustomview::TcxCustomGridView* AFocusedView);

typedef void __fastcall (__closure *TcxGridLayoutChangedEvent)(TcxCustomGrid* Sender, Cxgridcustomview::TcxCustomGridView* AGridView);

typedef void __fastcall (__closure *TcxGridPrepareLockedStateImageEvent)(TcxCustomGrid* Sender, Cxgraphics::TcxBitmap32* AImage, bool &ADone);

class PASCALIMPLEMENTATION TcxCustomGrid : public Cxcontrols::TcxControl
{
	typedef Cxcontrols::TcxControl inherited;
	
private:
	Cxgridlevel::TcxGridLevel* FActiveLevel;
	Cxgridcommon::TcxGridChanges* FChanges;
	TcxGridController* FController;
	bool FCreatingStructureNavigator;
	bool FDragOpening;
	int FDragOpeningWaitTime;
	Cxgridcustomview::TcxCustomGridView* FFocusedView;
	Vcl::Imglist::TCustomImageList* FImages;
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	bool FIsExportMode;
	bool FIsPopupControl;
	bool FLastFocused;
	Cxgridlevel::TcxGridLevel* FLevels;
	TcxGridLevelTabs* FLevelTabs;
	TcxGridLockedStatePaintHelper* FLockedStatePaintHelper;
	TcxGridLockedStateImageOptions* FLockedStateImageOptions;
	Cxnavigator::TcxNavigatorControlNotifier* FNavigatorNotifier;
	System::Classes::TList* FNotifications;
	TcxGridPainter* FPainter;
	TcxCustomGridStructureNavigator* FStructureNavigator;
	bool FTabStop;
	System::TObject* FTag;
	int FUpdateCount;
	int FUpdateLockCount;
	TcxGridViewInfo* FViewInfo;
	System::Classes::TList* FViews;
	TcxGridActiveTabChangedEvent FOnActiveTabChanged;
	TcxGridActiveTabChangedExEvent FOnActiveTabChangedEx;
	TcxGridFocusedViewChangedEvent FOnFocusedViewChanged;
	TcxGridLayoutChangedEvent FOnLayoutChanged;
	TcxGridPrepareLockedStateImageEvent FOnPrepareLockedStateImage;
	System::Classes::TNotifyEvent FSubClassEvents;
	Cxgridcustomview::TcxCustomGridView* __fastcall GetActiveView();
	Cxnavigator::_di_IcxNavigator __fastcall GetFocusedViewNavigator();
	Cxgridcustomview::TcxCustomGridView* __fastcall GetView(int Index);
	int __fastcall GetViewCount();
	Cxgridlevel::TcxGridLevelOptions* __fastcall GetRootLevelOptions();
	Cxgridlevel::TcxGridLevelStyles* __fastcall GetRootLevelStyles();
	TcxCustomGridStructureNavigator* __fastcall GetStructureNavigator();
	bool __fastcall GetUpdateLocked();
	void __fastcall ImageListChange(System::TObject* Sender);
	void __fastcall SetActiveLevel(Cxgridlevel::TcxGridLevel* Value);
	void __fastcall SetDragOpeningWaitTime(int Value);
	void __fastcall SetFocusedView(Cxgridcustomview::TcxCustomGridView* Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetLevels(Cxgridlevel::TcxGridLevel* Value);
	void __fastcall SetLevelTabs(TcxGridLevelTabs* Value);
	void __fastcall SetLockedStateImageOptions(TcxGridLockedStateImageOptions* Value);
	void __fastcall SetRootLevelOptions(Cxgridlevel::TcxGridLevelOptions* Value);
	void __fastcall SetRootLevelStyles(Cxgridlevel::TcxGridLevelStyles* Value);
	HIDESBASE void __fastcall SetTabStop(bool Value);
	void __fastcall AddView(Cxgridcustomview::TcxCustomGridView* AView);
	void __fastcall RemoveView(Cxgridcustomview::TcxCustomGridView* AView);
	void __fastcall DestroyViews();
	void __fastcall DestroyChanges(Dxcoreclasses::TdxFastObjectList* AChanges);
	void __fastcall DestroyViewChanges(Cxgridcustomview::TcxCustomGridView* AView);
	void __fastcall CreateStructureNavigator();
	HIDESBASE MESSAGE void __fastcall CMBiDiModeChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMRecreateWnd(Winapi::Messages::TMessage &Message);
	
protected:
	bool __fastcall NavigatorIsActive();
	bool __fastcall NavigatorIsBof();
	bool __fastcall NavigatorIsEof();
	bool __fastcall NavigatorCanAppend();
	bool __fastcall NavigatorCanEdit();
	bool __fastcall NavigatorCanDelete();
	bool __fastcall NavigatorCanInsert();
	bool __fastcall NavigatorIsEditing();
	void __fastcall NavigatorClearBookmark();
	bool __fastcall NavigatorIsBookmarkAvailable();
	void __fastcall NavigatorDoAction(int AButtonIndex);
	Cxnavigator::TcxNavigatorControlNotifier* __fastcall NavigatorGetNotifier();
	bool __fastcall NavigatorIsActionSupported(int AButtonIndex);
	int __fastcall NavigatorGetRecordCount();
	int __fastcall NavigatorGetRecordIndex();
	Cxgraphics::TcxBitmap32* __fastcall GetLockedStateImage();
	Cxcontrols::TcxControl* __fastcall GetLockedStateTopmostControl();
	void __fastcall UpdateLockedStateFont(Vcl::Graphics::TFont* AFont);
	virtual Dxtouch::_di_IdxGestureClient __fastcall GetGestureClient(const System::Types::TPoint &APoint);
	virtual bool __fastcall IsGestureTarget(NativeUInt AWnd);
	virtual void __fastcall GetAdornerTargetElements(System::Classes::TStrings* AList);
	DYNAMIC void __fastcall AddChildComponent(Cxcontrols::TcxControlChildComponent* AComponent);
	DYNAMIC void __fastcall RemoveChildComponent(Cxcontrols::TcxControlChildComponent* AComponent);
	DYNAMIC void __fastcall BoundsChanged();
	virtual void __fastcall ChangeScaleEx(int M, int D, bool IsDpiChange);
	DYNAMIC void __fastcall DoCancelMode();
	DYNAMIC void __fastcall DoContextPopup(const System::Types::TPoint &MousePos, bool &Handled);
	virtual void __fastcall DoPaint();
	DYNAMIC void __fastcall FocusChanged();
	virtual System::Uitypes::TCursor __fastcall GetCurrentCursor(int X, int Y);
	DYNAMIC bool __fastcall GetDesignHitTest(int X, int Y, System::Classes::TShiftState Shift);
	virtual bool __fastcall GetIsFocused();
	virtual void __fastcall Loaded();
	DYNAMIC bool __fastcall MayFocus();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall LookAndFeelChanged(Cxlookandfeels::TcxLookAndFeel* Sender, Cxlookandfeels::TcxLookAndFeelValues AChangedValues);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall ReadState(System::Classes::TReader* Reader);
	DYNAMIC void __fastcall SetChildOrder(System::Classes::TComponent* Child, int Order);
	virtual void __fastcall SetName(const System::Classes::TComponentName NewName);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	DYNAMIC void __fastcall DoEndDrag(System::TObject* Target, int X, int Y);
	DYNAMIC void __fastcall DoStartDrag(Vcl::Controls::TDragObject* &DragObject);
	DYNAMIC void __fastcall DragOver(System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	virtual void __fastcall CreateHandlers();
	virtual void __fastcall DestroyHandlers();
	bool __fastcall CanUseLockedStateImage();
	virtual bool __fastcall DoPrepareLockedStateImage();
	virtual TcxGridLockedStatePaintHelperClass __fastcall GetLockedStatePaintHelperClass();
	virtual TcxGridLockedStateImageOptionsClass __fastcall GetLockedStateImageOptionsClass();
	__property TcxGridLockedStatePaintHelper* LockedStatePaintHelper = {read=FLockedStatePaintHelper};
	__property TcxGridPrepareLockedStateImageEvent OnPrepareLockedStateImage = {read=FOnPrepareLockedStateImage, write=FOnPrepareLockedStateImage};
	virtual void __fastcall DoActiveTabChanged(Cxgridlevel::TcxGridLevel* ALevel);
	virtual void __fastcall DoActiveTabChangedEx(Cxgridlevel::TcxGridLevel* ALevel, int ARecordIndex);
	void __fastcall DoChange(Cxgridcommon::TcxCustomGridChange* AGridChange);
	virtual void __fastcall DoLayoutChanged(Cxgridcustomview::TcxCustomGridView* AGridView);
	void __fastcall DoUpdate(Dxcoreclasses::TdxFastObjectList* AChanges);
	virtual void __fastcall FocusedViewChanged(Cxgridcustomview::TcxCustomGridView* APrevFocusedView, Cxgridcustomview::TcxCustomGridView* AFocusedView);
	virtual TcxGridControllerClass __fastcall GetControllerClass();
	virtual Cxgridcustomview::TcxCustomGridViewClass __fastcall GetDefaultViewClass();
	virtual Cxgridlevel::TcxGridLevelClass __fastcall GetLevelsClass();
	virtual TcxGridLevelTabsClass __fastcall GetLevelTabsClass();
	virtual TcxGridPainterClass __fastcall GetPainterClass();
	virtual TcxGridViewInfoClass __fastcall GetViewInfoClass();
	bool __fastcall IsUpdating();
	void __fastcall LevelChanged(Cxgridlevel::TcxGridLevel* ALevel, Cxgridlevel::TcxGridLevelChangeKind AChangeKind);
	void __fastcall RefreshNavigators();
	void __fastcall StructureNavigatorChanged();
	virtual bool __fastcall UpdateOnRootViewDataChange();
	void __fastcall ViewChanged(Cxgridcustomview::TcxCustomGridView* AView, Cxgridcustomview::TcxGridViewChangeNotificationKind AChangeKind);
	void __fastcall UpdateFocusing(bool AChildFocused);
	__property bool LastFocused = {read=FLastFocused, nodefault};
	__property Cxnavigator::_di_IcxNavigator FocusedViewNavigator = {read=GetFocusedViewNavigator};
	__property bool IsExportMode = {read=FIsExportMode, nodefault};
	__property bool IsPopupControl = {read=FIsPopupControl, write=FIsPopupControl, nodefault};
	__property Cxnavigator::TcxNavigatorControlNotifier* NavigatorNotifier = {read=FNavigatorNotifier};
	
public:
	__fastcall virtual TcxCustomGrid(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TcxCustomGrid();
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	HIDESBASE void __fastcall Invalidate(bool AHardUpdate = false);
	HIDESBASE void __fastcall RemoveFocus(bool AGoForward);
	void __fastcall BeginLockedStatePaint(Cxgridcustomview::TcxGridShowLockedStateImageMode AMode);
	void __fastcall EndLockedStatePaint();
	void __fastcall BeginUpdate(Cxgridcustomview::TcxGridShowLockedStateImageMode AMode = (Cxgridcustomview::TcxGridShowLockedStateImageMode)(0x0));
	void __fastcall CancelUpdate();
	void __fastcall BeginExport();
	void __fastcall EndExport();
	HIDESBASE void __fastcall Changed(Cxgridcommon::TcxCustomGridChange* AGridChange);
	void __fastcall CheckFocusedView();
	void __fastcall EndUpdate();
	virtual void __fastcall LayoutChanged();
	virtual void __fastcall SizeChanged();
	__property bool UpdateLocked = {read=GetUpdateLocked, nodefault};
	Cxgridcustomview::TcxCustomGridView* __fastcall CreateView(Cxgridcustomview::TcxCustomGridViewClass AViewClass);
	bool __fastcall ViewExists(Cxgridcustomview::TcxCustomGridView* AView);
	void __fastcall RegisterNotification(TcxCustomGridNotification* ANotification);
	void __fastcall UnregisterNotification(TcxCustomGridNotification* ANotification);
	bool __fastcall SendNotifications(TcxGridNotificationKind AKind, System::TObject* AData = (System::TObject*)(0x0));
	virtual void __fastcall RootViewDataChanged(Cxgridcustomview::TcxCustomGridView* AView);
	virtual void __fastcall TranslationChanged();
	__property Cxgridcustomview::TcxCustomGridView* ActiveView = {read=GetActiveView};
	__property Cxgridlevel::TcxGridLevel* ActiveLevel = {read=FActiveLevel, write=SetActiveLevel};
	__property BorderStyle = {default=1};
	__property Color = {default=-16777211};
	__property TcxGridController* Controller = {read=FController};
	__property bool DragOpening = {read=FDragOpening, write=FDragOpening, default=1};
	__property int DragOpeningWaitTime = {read=FDragOpeningWaitTime, write=SetDragOpeningWaitTime, default=800};
	__property Cxgridcustomview::TcxCustomGridView* FocusedView = {read=FFocusedView, write=SetFocusedView};
	__property Font;
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property Cxgridlevel::TcxGridLevel* Levels = {read=FLevels, write=SetLevels};
	__property TcxGridLevelTabs* LevelTabs = {read=FLevelTabs, write=SetLevelTabs};
	__property TcxGridLockedStateImageOptions* LockedStateImageOptions = {read=FLockedStateImageOptions, write=SetLockedStateImageOptions};
	__property LookAndFeel;
	__property LookAndFeelPainter;
	__property TcxGridPainter* Painter = {read=FPainter};
	__property Cxgridlevel::TcxGridLevelOptions* RootLevelOptions = {read=GetRootLevelOptions, write=SetRootLevelOptions};
	__property Cxgridlevel::TcxGridLevelStyles* RootLevelStyles = {read=GetRootLevelStyles, write=SetRootLevelStyles};
	__property TcxCustomGridStructureNavigator* StructureNavigator = {read=GetStructureNavigator};
	__property bool TabStop = {read=FTabStop, write=SetTabStop, default=1};
	__property int ViewCount = {read=GetViewCount, nodefault};
	__property TcxGridViewInfo* ViewInfo = {read=FViewInfo};
	__property Cxgridcustomview::TcxCustomGridView* Views[int Index] = {read=GetView};
	__property TcxGridActiveTabChangedEvent OnActiveTabChanged = {read=FOnActiveTabChanged, write=FOnActiveTabChanged};
	__property TcxGridActiveTabChangedExEvent OnActiveTabChangedEx = {read=FOnActiveTabChangedEx, write=FOnActiveTabChangedEx};
	__property TcxGridFocusedViewChangedEvent OnFocusedViewChanged = {read=FOnFocusedViewChanged, write=FOnFocusedViewChanged};
	__property TcxGridLayoutChangedEvent OnLayoutChanged = {read=FOnLayoutChanged, write=FOnLayoutChanged};
	
__published:
	__property System::Classes::TNotifyEvent RootLevelStylesEvents = {read=FSubClassEvents, write=FSubClassEvents};
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomGrid(HWND ParentWindow) : Cxcontrols::TcxControl(ParentWindow) { }
	
private:
	void *__IcxLockedStateFontChanged;	// Cxcontrols::IcxLockedStateFontChanged 
	void *__IcxLockedStatePaint;	// Cxcontrols::IcxLockedStatePaint 
	void *__IdxSkinSupport;	// Cxlookandfeels::IdxSkinSupport 
	void *__IcxNavigatorRecordPosition;	// Cxnavigator::IcxNavigatorRecordPosition 
	void *__IcxNavigator;	// Cxnavigator::IcxNavigator 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {825BFA90-77C6-4725-BE95-B0A1EA8F934D}
	operator Cxcontrols::_di_IcxLockedStateFontChanged()
	{
		Cxcontrols::_di_IcxLockedStateFontChanged intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxcontrols::IcxLockedStateFontChanged*(void) { return (Cxcontrols::IcxLockedStateFontChanged*)&__IcxLockedStateFontChanged; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {EB45AB76-3681-4838-BDA8-7D0081B4C184}
	operator Cxcontrols::_di_IcxLockedStatePaint()
	{
		Cxcontrols::_di_IcxLockedStatePaint intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxcontrols::IcxLockedStatePaint*(void) { return (Cxcontrols::IcxLockedStatePaint*)&__IcxLockedStatePaint; }
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
	// {715C9E38-5BA0-4ED8-B35C-BB40EA739362}
	operator Cxnavigator::_di_IcxNavigatorRecordPosition()
	{
		Cxnavigator::_di_IcxNavigatorRecordPosition intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxnavigator::IcxNavigatorRecordPosition*(void) { return (Cxnavigator::IcxNavigatorRecordPosition*)&__IcxNavigatorRecordPosition; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {A15F80CA-DE56-47CB-B0EB-035D0BF90E9D}
	operator Cxnavigator::_di_IcxNavigator()
	{
		Cxnavigator::_di_IcxNavigator intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxnavigator::IcxNavigator*(void) { return (Cxnavigator::IcxNavigator*)&__IcxNavigator; }
	#endif
	
};


class PASCALIMPLEMENTATION TcxGrid : public TcxCustomGrid
{
	typedef TcxCustomGrid inherited;
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelKind = {default=0};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderWidth = {default=0};
	__property BorderStyle = {default=1};
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property Images;
	__property ParentBiDiMode = {default=1};
	__property ParentFont = {default=1};
	__property PopupMenu;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Visible = {default=1};
	__property OnContextPopup;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnResize;
	__property OnStartDock;
	__property OnStartDrag;
	__property DragOpening = {default=1};
	__property DragOpeningWaitTime = {default=800};
	__property LevelTabs;
	__property LockedStateImageOptions;
	__property LookAndFeel;
	__property RootLevelOptions;
	__property RootLevelStyles;
	__property OnActiveTabChanged;
	__property OnFocusedViewChanged;
	__property OnLayoutChanged;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPrepareLockedStateImage;
public:
	/* TcxCustomGrid.Create */ inline __fastcall virtual TcxGrid(System::Classes::TComponent* AOwner) : TcxCustomGrid(AOwner) { }
	/* TcxCustomGrid.Destroy */ inline __fastcall virtual ~TcxGrid() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxGrid(HWND ParentWindow) : TcxCustomGrid(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxGridViewRepository : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
public:
	Cxgridcustomview::TcxCustomGridView* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TList* FItems;
	int __fastcall GetCount();
	Cxgridcustomview::TcxCustomGridView* __fastcall GetItem(int Index);
	void __fastcall DestroyItems();
	
protected:
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	void __fastcall AddItem(Cxgridcustomview::TcxCustomGridView* AItem);
	void __fastcall RemoveItem(Cxgridcustomview::TcxCustomGridView* AItem);
	
public:
	__fastcall virtual TcxGridViewRepository(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TcxGridViewRepository();
	Cxgridcustomview::TcxCustomGridView* __fastcall CreateItem(Cxgridcustomview::TcxCustomGridViewClass AItemClass);
	__property int Count = {read=GetCount, nodefault};
	__property Cxgridcustomview::TcxCustomGridView* Items[int Index] = {read=GetItem/*, default*/};
};


//-- var, const, procedure ---------------------------------------------------
static const System::Classes::TAlignment cxGridLevelTabsDefaultCaptionAlignment = (System::Classes::TAlignment)(2);
static const System::Int8 cxGridLevelTabsDefaultImageBorder = System::Int8(0x0);
static const System::Int8 cxGridRootLevelDefaultDetailFrameWidth = System::Int8(0x0);
static const System::Word cxGridDefaultDragOpeningWaitTime = System::Word(0x320);
extern DELPHI_PACKAGE TcxCustomGridStructureNavigatorClass cxGridStructureNavigatorClass;
extern DELPHI_PACKAGE TcxCustomGrid* __fastcall GetParentGrid(Vcl::Controls::TControl* AControl);
}	/* namespace Cxgrid */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXGRID)
using namespace Cxgrid;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxgridHPP
