// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxGridCustomView.pas' rev: 35.00 (Windows)

#ifndef CxgridcustomviewHPP
#define CxgridcustomviewHPP

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
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ImgList.hpp>
#include <dxCore.hpp>
#include <dxTypeHelpers.hpp>
#include <dxMessages.hpp>
#include <dxCoreClasses.hpp>
#include <cxClasses.hpp>
#include <cxControls.hpp>
#include <cxContainer.hpp>
#include <cxGraphics.hpp>
#include <cxLookAndFeels.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <dxCustomHint.hpp>
#include <cxStyles.hpp>
#include <cxStorage.hpp>
#include <cxGridCommon.hpp>
#include <cxCustomData.hpp>
#include <cxData.hpp>
#include <cxListBox.hpp>
#include <cxPC.hpp>
#include <cxEdit.hpp>
#include <dxTouch.hpp>
#include <dxIncrementalFiltering.hpp>
#include <dxUIElementPopupWindow.hpp>
#include <cxGeometry.hpp>
#include <dxForms.hpp>
#include <dxScrollbarAnnotations.hpp>
#include <System.UITypes.hpp>
#include <cxCustomListBox.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxgridcustomview
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IcxGridViewLayoutEditorSupport;
typedef System::DelphiInterface<IcxGridViewLayoutEditorSupport> _di_IcxGridViewLayoutEditorSupport;
class DELPHICLASS TcxCustomGridViewChange;
class DELPHICLASS TcxGridControlFocusChange;
class DELPHICLASS TcxCustomGridHitTest;
class DELPHICLASS TcxGridNoneHitTest;
class DELPHICLASS TcxCustomGridViewHitTest;
class DELPHICLASS TcxGridViewNoneHitTest;
class DELPHICLASS TcxGridNavigatorHitTest;
class DELPHICLASS TcxGridCustomizationFormHitTest;
class DELPHICLASS TcxGridDesignSelectorHitTest;
class DELPHICLASS TcxGridViewHandler;
class DELPHICLASS TcxCustomGridDragAndDropObject;
class DELPHICLASS TcxCustomGridMovingObject;
class DELPHICLASS TcxCustomGridItemsInnerListBox;
class DELPHICLASS TcxCustomGridItemsListBox;
__interface DELPHIINTERFACE IcxGridCustomizationForm;
typedef System::DelphiInterface<IcxGridCustomizationForm> _di_IcxGridCustomizationForm;
class DELPHICLASS TcxCustomGridCustomizationForm;
class DELPHICLASS TcxCustomGridPopup;
class DELPHICLASS TcxGridPopupListBox;
class DELPHICLASS TcxCustomGridDesignController;
class DELPHICLASS TcxGridViewDesignController;
class DELPHICLASS TcxGridHintHelper;
class DELPHICLASS TcxCustomGridCustomizationController;
class DELPHICLASS TcxGridCustomizationController;
class DELPHICLASS TcxCustomGridController;
class DELPHICLASS TcxDataGroupNode;
class DELPHICLASS TcxSortingBySummaryInfo;
class DELPHICLASS TcxGridSortingBySummaryEngine;
__interface DELPHIINTERFACE IcxCustomGridDataController;
typedef System::DelphiInterface<IcxCustomGridDataController> _di_IcxCustomGridDataController;
class DELPHICLASS TcxCustomGridCellPainter;
class DELPHICLASS TcxGridDesignSelectorPainter;
class DELPHICLASS TcxCustomGridPainter;
class DELPHICLASS TcxCustomGridViewData;
class DELPHICLASS TcxGridSite;
class DELPHICLASS TcxCustomGridCellViewInfo;
class DELPHICLASS TcxCustomGridViewCellViewInfo;
class DELPHICLASS TcxGridDesignSelectorViewInfo;
class DELPHICLASS TcxCustomGridViewInfo;
class DELPHICLASS TcxCustomGridViewInfoCacheItem;
class DELPHICLASS TcxCustomGridViewInfoCache;
class DELPHICLASS TcxCustomGridOptions;
class DELPHICLASS TcxCustomGridBackgroundBitmaps;
class DELPHICLASS TcxCustomGridShowLockedStateImageOptions;
class DELPHICLASS TcxCustomGridOptionsBehavior;
class DELPHICLASS TcxCustomGridOptionsData;
class DELPHICLASS TcxCustomGridOptionsSelection;
class DELPHICLASS TcxCustomGridOptionsView;
class DELPHICLASS TcxCustomGridStyles;
class DELPHICLASS TcxCustomGridViewStyles;
class DELPHICLASS TcxGridViewNotificationList;
class DELPHICLASS TcxCustomGridView;
class DELPHICLASS TcxCustomGridViewAccess;
//-- type declarations -------------------------------------------------------
typedef System::TMetaClass* TcxCustomGridDragAndDropObjectClass;

typedef Cxcontrols::TcxLockedStateImageShowingMode TcxGridShowLockedStateImageMode;

__interface  INTERFACE_UUID("{9C5EC9C0-A912-4822-BBD0-87AB45FDCC78}") IcxGridViewLayoutEditorSupport  : public System::IInterface 
{
	virtual void __fastcall BeforeEditLayout(TcxCustomGridView* ALayoutView) = 0 ;
	virtual bool __fastcall CanEditViewLayoutAndData() = 0 ;
	virtual void __fastcall DoAssignLayout(TcxCustomGridView* ALayoutView) = 0 ;
	virtual System::UnicodeString __fastcall GetLayoutCustomizationFormButtonCaption() = 0 ;
	virtual bool __fastcall HasLayoutCustomizationForm() = 0 ;
	virtual bool __fastcall IsLayoutChangeable() = 0 ;
	virtual void __fastcall RunLayoutCustomizationForm() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridViewChange : public Cxgridcommon::TcxCustomGridChange
{
	typedef Cxgridcommon::TcxCustomGridChange inherited;
	
private:
	TcxCustomGridView* FGridView;
	
protected:
	virtual bool __fastcall IsEqualCore(Cxgridcommon::TcxCustomGridChange* AChange);
	
public:
	__fastcall virtual TcxCustomGridViewChange(TcxCustomGridView* AGridView);
	__property TcxCustomGridView* GridView = {read=FGridView, write=FGridView};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomGridViewChange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridControlFocusChange : public TcxCustomGridViewChange
{
	typedef TcxCustomGridViewChange inherited;
	
public:
	virtual void __fastcall Execute();
public:
	/* TcxCustomGridViewChange.Create */ inline __fastcall virtual TcxGridControlFocusChange(TcxCustomGridView* AGridView) : TcxCustomGridViewChange(AGridView) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridControlFocusChange() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomGridHitTestClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridHitTest : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool FIsClone;
	System::Types::TPoint FPos;
	TcxCustomGridCellViewInfo* FViewInfo;
	void __fastcall SetViewInfo(TcxCustomGridCellViewInfo* Value);
	
protected:
	virtual void __fastcall Assign(TcxCustomGridHitTest* Source);
	__classmethod virtual int __fastcall GetHitTestCode();
	void __fastcall Init(const System::Types::TPoint &APos);
	
public:
	__fastcall virtual ~TcxCustomGridHitTest();
	TcxCustomGridHitTest* __fastcall Clone();
	virtual System::Uitypes::TCursor __fastcall Cursor();
	virtual TcxCustomGridDragAndDropObjectClass __fastcall DragAndDropObjectClass();
	__classmethod int __fastcall HitTestCode();
	__classmethod TcxCustomGridHitTest* __fastcall Instance(const System::Types::TPoint &APos);
	__property System::Types::TPoint Pos = {read=FPos};
	__property TcxCustomGridCellViewInfo* ViewInfo = {read=FViewInfo, write=SetViewInfo};
public:
	/* TObject.Create */ inline __fastcall TcxCustomGridHitTest() : System::TObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridNoneHitTest : public TcxCustomGridHitTest
{
	typedef TcxCustomGridHitTest inherited;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridNoneHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridNoneHitTest() : TcxCustomGridHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridViewHitTest : public TcxCustomGridHitTest
{
	typedef TcxCustomGridHitTest inherited;
	
private:
	TcxCustomGridView* FGridView;
	
protected:
	virtual void __fastcall Assign(TcxCustomGridHitTest* Source);
	
public:
	__property TcxCustomGridView* GridView = {read=FGridView, write=FGridView};
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxCustomGridViewHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxCustomGridViewHitTest() : TcxCustomGridHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridViewNoneHitTest : public TcxCustomGridViewHitTest
{
	typedef TcxCustomGridViewHitTest inherited;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridViewNoneHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridViewNoneHitTest() : TcxCustomGridViewHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridNavigatorHitTest : public TcxCustomGridViewHitTest
{
	typedef TcxCustomGridViewHitTest inherited;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridNavigatorHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridNavigatorHitTest() : TcxCustomGridViewHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridCustomizationFormHitTest : public TcxCustomGridViewHitTest
{
	typedef TcxCustomGridViewHitTest inherited;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridCustomizationFormHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridCustomizationFormHitTest() : TcxCustomGridViewHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridDesignSelectorHitTest : public TcxCustomGridViewHitTest
{
	typedef TcxCustomGridViewHitTest inherited;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
	
public:
	virtual System::Uitypes::TCursor __fastcall Cursor();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridDesignSelectorHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridDesignSelectorHitTest() : TcxCustomGridViewHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridViewHandler : public Dxcoreclasses::TcxInterfacedPersistent
{
	typedef Dxcoreclasses::TcxInterfacedPersistent inherited;
	
private:
	TcxCustomGridView* FGridView;
	Cxcontrols::TcxControl* __fastcall GetControl();
	TcxCustomGridController* __fastcall GetController();
	Cxcustomdata::TcxCustomDataController* __fastcall GetDataController();
	Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetLookAndFeelPainter();
	TcxCustomGridPainter* __fastcall GetPainter();
	TcxGridSite* __fastcall GetSite();
	TcxCustomGridViewData* __fastcall GetViewData();
	TcxCustomGridViewInfo* __fastcall GetViewInfo();
	
protected:
	__property Cxcontrols::TcxControl* Control = {read=GetControl};
	__property TcxCustomGridController* Controller = {read=GetController};
	__property Cxcustomdata::TcxCustomDataController* DataController = {read=GetDataController};
	__property TcxCustomGridViewData* ViewData = {read=GetViewData};
	
public:
	__fastcall virtual TcxGridViewHandler(TcxCustomGridView* AGridView);
	void __fastcall BeginUpdate(TcxGridShowLockedStateImageMode AShowLockedStateImage = (TcxGridShowLockedStateImageMode)(0x0));
	void __fastcall EndUpdate();
	bool __fastcall UseRightToLeftAlignment();
	__property TcxCustomGridView* GridView = {read=FGridView};
	__property Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* LookAndFeelPainter = {read=GetLookAndFeelPainter};
	__property TcxCustomGridPainter* Painter = {read=GetPainter};
	__property TcxGridSite* Site = {read=GetSite};
	__property TcxCustomGridViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxGridViewHandler() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridDragAndDropObject : public Cxcontrols::TcxDragAndDropObject
{
	typedef Cxcontrols::TcxDragAndDropObject inherited;
	
private:
	TcxCustomGridController* __fastcall GetController();
	TcxCustomGridView* __fastcall GetGridView();
	TcxCustomGridViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall AfterDragAndDrop(bool Accepted);
	virtual void __fastcall AfterPaint();
	virtual void __fastcall BeforePaint();
	__property TcxCustomGridController* Controller = {read=GetController};
	__property TcxCustomGridViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	System::Types::TPoint SourcePoint;
	virtual void __fastcall AfterScrolling();
	virtual void __fastcall BeforeScrolling();
	virtual void __fastcall AfterViewChange();
	virtual void __fastcall BeforeViewChange();
	virtual void __fastcall Init(const System::Types::TPoint &P, TcxCustomGridHitTest* AParams);
	__property TcxCustomGridView* GridView = {read=GetGridView};
public:
	/* TcxDragAndDropObject.Create */ inline __fastcall virtual TcxCustomGridDragAndDropObject(Cxcontrols::TcxControl* AControl) : Cxcontrols::TcxDragAndDropObject(AControl) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomGridDragAndDropObject() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TcxGridArrowNumber : unsigned char { anFirst, anLast };

typedef Cxcontrols::TcxArrowPlace TcxGridArrowPlace;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridMovingObject : public TcxCustomGridDragAndDropObject
{
	typedef TcxCustomGridDragAndDropObject inherited;
	
private:
	Cxcontrols::TcxDragImage* FDragImage;
	System::TObject* FSourceItem;
	Cxcontrols::TcxArrowPlace __fastcall GetArrowPlace(TcxGridArrowNumber AArrowNumber);
	TcxCustomGridCustomizationForm* __fastcall GetCustomizationForm();
	bool __fastcall HasArrows();
	
protected:
	System::StaticArray<Cxcontrols::TcxDragAndDropArrow*, 2> Arrows;
	virtual void __fastcall DirtyChanged();
	virtual System::Uitypes::TCursor __fastcall GetDragAndDropCursor(bool Accepted);
	void __fastcall ChangeArrowsPosition(bool AVisible = true);
	void __fastcall ChangeDragImagePosition(bool AVisible = true);
	virtual bool __fastcall AreArrowsVertical();
	virtual bool __fastcall CanRemove() = 0 ;
	virtual System::Types::TRect __fastcall GetArrowAreaBounds(Cxcontrols::TcxArrowPlace APlace) = 0 ;
	virtual Cxcontrols::TcxDragAndDropArrowClass __fastcall GetArrowClass();
	virtual System::Types::TRect __fastcall GetArrowsClientRect();
	virtual TcxCustomGridItemsListBox* __fastcall GetCustomizationFormListBox() = 0 ;
	virtual Cxcontrols::TcxDragImageClass __fastcall GetDragImageClass();
	virtual System::Types::TRect __fastcall GetSourceItemBounds();
	virtual TcxCustomGridCellViewInfo* __fastcall GetSourceItemViewInfo();
	virtual void __fastcall InitDragImage();
	virtual void __fastcall InitDragImageUsingCustomizationForm(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, System::TObject* AItem);
	virtual void __fastcall InitDragObjects();
	virtual bool __fastcall IsSourceCustomizationForm() = 0 ;
	virtual bool __fastcall IsValidDestination() = 0 ;
	virtual void __fastcall BeginDragAndDrop();
	virtual void __fastcall DragAndDrop(const System::Types::TPoint &P, bool &Accepted);
	virtual void __fastcall EndDragAndDrop(bool Accepted);
	__property Cxcontrols::TcxArrowPlace ArrowPlaces[TcxGridArrowNumber AArrowNumber] = {read=GetArrowPlace};
	__property System::Types::TRect ArrowsClientRect = {read=GetArrowsClientRect};
	__property TcxCustomGridCustomizationForm* CustomizationForm = {read=GetCustomizationForm};
	__property TcxCustomGridItemsListBox* CustomizationFormListBox = {read=GetCustomizationFormListBox};
	__property Cxcontrols::TcxDragImage* DragImage = {read=FDragImage};
	__property System::TObject* SourceItem = {read=FSourceItem, write=FSourceItem};
	__property System::Types::TRect SourceItemBounds = {read=GetSourceItemBounds};
	__property TcxCustomGridCellViewInfo* SourceItemViewInfo = {read=GetSourceItemViewInfo};
	
public:
	virtual void __fastcall AfterScrolling();
public:
	/* TcxDragAndDropObject.Create */ inline __fastcall virtual TcxCustomGridMovingObject(Cxcontrols::TcxControl* AControl) : TcxCustomGridDragAndDropObject(AControl) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomGridMovingObject() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxCustomGridItemsInnerListBox : public Cxlistbox::TcxInnerListBox
{
	typedef Cxlistbox::TcxInnerListBox inherited;
	
private:
	int FDragAndDropItemIndex;
	System::Types::TPoint FMouseDownPos;
	HIDESBASE TcxCustomGridItemsListBox* __fastcall GetContainer();
	System::TObject* __fastcall GetDragAndDropItem();
	TcxCustomGridView* __fastcall GetGridView();
	Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetLookAndFeelPainter();
	HIDESBASE MESSAGE void __fastcall WMCancelMode(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMNCCalcSize(Winapi::Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TWMNCPaint &Message);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	virtual void __fastcall DrawBorder(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &R);
	virtual void __fastcall DrawItem(int Index, const System::Types::TRect &Rect, Winapi::Windows::TOwnerDrawState State);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall LookAndFeelChanged(Cxlookandfeels::TcxLookAndFeel* Sender, Cxlookandfeels::TcxLookAndFeelValues AChangedValues);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall CalculateBorderStyle();
	void __fastcall CalculateItemHeight();
	__property TcxCustomGridItemsListBox* Container = {read=GetContainer};
	__property System::TObject* DragAndDropItem = {read=GetDragAndDropItem};
	__property int DragAndDropItemIndex = {read=FDragAndDropItemIndex, nodefault};
	__property TcxCustomGridView* GridView = {read=GetGridView};
	__property Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* LookAndFeelPainter = {read=GetLookAndFeelPainter};
	
public:
	__fastcall virtual TcxCustomGridItemsInnerListBox(System::Classes::TComponent* AOwner);
public:
	/* TcxCustomInnerListBox.Destroy */ inline __fastcall virtual ~TcxCustomGridItemsInnerListBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomGridItemsInnerListBox(HWND ParentWindow) : Cxlistbox::TcxInnerListBox(ParentWindow) { }
	
};


typedef System::TMetaClass* TcxCustomGridItemsListBoxClass;

class PASCALIMPLEMENTATION TcxCustomGridItemsListBox : public Cxlistbox::TcxListBox
{
	typedef Cxlistbox::TcxListBox inherited;
	
private:
	System::TObject* __fastcall GetDragAndDropItem();
	TcxCustomGridView* __fastcall GetGridView();
	HIDESBASE TcxCustomGridItemsInnerListBox* __fastcall GetInnerListBox();
	
protected:
	virtual int __fastcall CalculateItemHeight() = 0 ;
	virtual void __fastcall DoRefreshItems() = 0 ;
	virtual Cxlistbox::TcxInnerListBoxClass __fastcall GetInnerListBoxClass();
	virtual TcxCustomGridHitTest* __fastcall GetDragAndDropParams() = 0 ;
	__property System::TObject* DragAndDropItem = {read=GetDragAndDropItem};
	__property TcxCustomGridView* GridView = {read=GetGridView};
	
public:
	__fastcall virtual TcxCustomGridItemsListBox(System::Classes::TComponent* AOwner);
	int __fastcall IndexOfItem(System::TObject* AItem);
	void __fastcall PaintDragAndDropItem(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, System::TObject* AItem);
	virtual void __fastcall PaintItem(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, int AIndex, bool AFocused) = 0 ;
	void __fastcall RefreshItems();
	__property TcxCustomGridItemsInnerListBox* InnerListBox = {read=GetInnerListBox};
public:
	/* TcxCustomListBox.Destroy */ inline __fastcall virtual ~TcxCustomGridItemsListBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomGridItemsListBox(HWND ParentWindow) : Cxlistbox::TcxListBox(ParentWindow) { }
	
};


__interface  INTERFACE_UUID("{D702C868-B1BC-41B6-BDD0-5CF5030E03C3}") IcxGridCustomizationForm  : public System::IInterface 
{
	virtual void __fastcall GridViewChanged() = 0 ;
	virtual TcxCustomGridController* __fastcall GetController() = 0 ;
	virtual void __fastcall Initialize(TcxCustomGridController* AController) = 0 ;
	virtual void __fastcall RefreshData() = 0 ;
	__property TcxCustomGridController* Controller = {read=GetController};
};

typedef System::TMetaClass* TcxCustomGridCustomizationFormClass;

class PASCALIMPLEMENTATION TcxCustomGridCustomizationForm : public Dxforms::TdxForm
{
	typedef Dxforms::TdxForm inherited;
	
private:
	TcxCustomGridController* FController;
	Cxclasses::TcxTimer* FHookTimer;
	int FOffset;
	Cxpc::TcxPageControl* FPageControl;
	TcxCustomGridView* __fastcall GetGridView();
	TcxCustomGridViewInfo* __fastcall GetViewInfo();
	void __fastcall HookTimerHandler(System::TObject* Sender);
	
protected:
	virtual void __fastcall GridViewChanged();
	TcxCustomGridController* __fastcall GetController();
	void __fastcall Initialize(TcxCustomGridController* AController);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	DYNAMIC void __fastcall DoClose(System::Uitypes::TCloseAction &Action);
	DYNAMIC void __fastcall DoShow();
	Cxpc::TcxTabSheet* __fastcall CreatePage(const System::UnicodeString ACaption, bool AVisible);
	virtual void __fastcall CalculateConsts();
	virtual void __fastcall CreateControls();
	virtual System::Types::TRect __fastcall GetContentBounds();
	virtual System::Types::TRect __fastcall GetPageControlBounds();
	virtual bool __fastcall HasDFM();
	virtual void __fastcall InitPageControl();
	__property System::Types::TRect ContentBounds = {read=GetContentBounds};
	__property TcxCustomGridView* GridView = {read=GetGridView};
	__property int Offset = {read=FOffset, write=FOffset, nodefault};
	__property Cxpc::TcxPageControl* PageControl = {read=FPageControl};
	__property TcxCustomGridViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	__fastcall virtual TcxCustomGridCustomizationForm(TcxCustomGridController* AController);
	__fastcall virtual ~TcxCustomGridCustomizationForm();
	__property TcxCustomGridController* Controller = {read=FController};
	void __fastcall ActivatePage(Cxpc::TcxTabSheet* APage);
	virtual void __fastcall RefreshData();
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TcxCustomGridCustomizationForm(System::Classes::TComponent* AOwner, int Dummy) : Dxforms::TdxForm(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomGridCustomizationForm(HWND ParentWindow) : Dxforms::TdxForm(ParentWindow) { }
	
private:
	void *__IcxGridCustomizationForm;	// IcxGridCustomizationForm 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {D702C868-B1BC-41B6-BDD0-5CF5030E03C3}
	operator _di_IcxGridCustomizationForm()
	{
		_di_IcxGridCustomizationForm intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IcxGridCustomizationForm*(void) { return (IcxGridCustomizationForm*)&__IcxGridCustomizationForm; }
	#endif
	
};


typedef Dxuielementpopupwindow::_di_IdxUIElementPopupWindowOwner IcxCustomGridPopupOwner;

class PASCALIMPLEMENTATION TcxCustomGridPopup : public Dxuielementpopupwindow::TdxUIElementPopupWindow
{
	typedef Dxuielementpopupwindow::TdxUIElementPopupWindow inherited;
	
private:
	TcxCustomGridView* FGridView;
	
public:
	__fastcall virtual TcxCustomGridPopup(TcxCustomGridView* AGridView);
	__property TcxCustomGridView* GridView = {read=FGridView};
public:
	/* TcxCustomPopupWindow.Destroy */ inline __fastcall virtual ~TcxCustomGridPopup() { }
	
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TcxCustomGridPopup(System::Classes::TComponent* AOwner, int Dummy) : Dxuielementpopupwindow::TdxUIElementPopupWindow(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomGridPopup(HWND ParentWindow) : Dxuielementpopupwindow::TdxUIElementPopupWindow(ParentWindow) { }
	
};


typedef Cxclasses::TdxIntegerIndexes TcxGridIndexes;

class PASCALIMPLEMENTATION TcxGridPopupListBox : public Cxlistbox::TdxCustomCheckListBox
{
	typedef Cxlistbox::TdxCustomCheckListBox inherited;
	
private:
	TcxCustomGridPopup* __fastcall GetPopup();
	
protected:
	virtual void __fastcall DoItemAction(int AItemIndex);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual bool __fastcall NeedHotTrack();
	
public:
	__fastcall virtual TcxGridPopupListBox(TcxCustomGridPopup* APopup);
	__property TcxCustomGridPopup* Popup = {read=GetPopup};
public:
	/* TdxCustomCheckListBox.Destroy */ inline __fastcall virtual ~TcxGridPopupListBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxGridPopupListBox(HWND ParentWindow) : Cxlistbox::TdxCustomCheckListBox(ParentWindow) { }
	
};


typedef System::TMetaClass* TcxGridPopupListBoxClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridDesignController : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	virtual Cxcontrols::TcxControl* __fastcall GetControl() = 0 ;
	virtual System::Classes::TPersistent* __fastcall GetDesignObject(System::Classes::TPersistent* AObject);
	
public:
	bool __fastcall CanAddComponent();
	bool __fastcall CanDeleteComponent(System::Classes::TComponent* AComponent);
	void __fastcall GetSelection(System::Classes::TList* AList);
	bool __fastcall IsObjectSelected(System::Classes::TPersistent* AObject);
	void __fastcall NotifyEditors();
	void __fastcall SelectObject(System::Classes::TPersistent* AObject, bool AClearSelection);
	void __fastcall SelectObjects(System::Classes::TList* AObjects);
	void __fastcall UnselectObject(System::Classes::TPersistent* AObject);
	__property Cxcontrols::TcxControl* Control = {read=GetControl};
public:
	/* TObject.Create */ inline __fastcall TcxCustomGridDesignController() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomGridDesignController() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridViewDesignControllerClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridViewDesignController : public TcxCustomGridDesignController
{
	typedef TcxCustomGridDesignController inherited;
	
private:
	TcxCustomGridController* FController;
	
protected:
	virtual Cxcontrols::TcxControl* __fastcall GetControl();
	virtual System::Classes::TPersistent* __fastcall GetDesignObject(System::Classes::TPersistent* AObject);
	
public:
	__fastcall virtual TcxGridViewDesignController(TcxCustomGridController* AController);
	__property TcxCustomGridController* Controller = {read=FController};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridViewDesignController() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridHintHelper : public Cxcontrols::TcxControlHintHelper
{
	typedef Cxcontrols::TcxControlHintHelper inherited;
	
private:
	TcxCustomGridController* FController;
	TcxCustomGridOptionsBehavior* __fastcall GetOptionsBehavior();
	
protected:
	virtual Cxcontrols::TcxControl* __fastcall GetHintControl();
	virtual int __fastcall GetHintHidePause();
	virtual Vcl::Controls::THintWindowClass __fastcall GetHintWindowClass();
	virtual Cxcontrols::TcxControl* __fastcall GetOwnerControl();
	virtual bool __fastcall IsSuppressHintOnMouseDown();
	__property TcxCustomGridOptionsBehavior* OptionsBehavior = {read=GetOptionsBehavior};
	
public:
	__fastcall virtual TcxGridHintHelper(TcxCustomGridController* AController);
public:
	/* TcxCustomHintHelper.Destroy */ inline __fastcall virtual ~TcxGridHintHelper() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridHintHelperClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridCustomizationController : public TcxGridViewHandler
{
	typedef TcxGridViewHandler inherited;
	
private:
	bool FCustomization;
	Vcl::Forms::TForm* FForm;
	System::Types::TRect FFormBounds;
	_di_IcxGridCustomizationForm __fastcall GetFormIntf();
	void __fastcall SetCustomization(bool Value);
	
protected:
	virtual bool __fastcall CanCustomize();
	virtual void __fastcall CheckFormBounds(System::Types::TRect &R);
	virtual Vcl::Forms::TForm* __fastcall CreateForm() = 0 ;
	virtual void __fastcall CustomizationChanged();
	virtual void __fastcall DoCreateForm();
	virtual void __fastcall DoCustomization();
	virtual System::Types::TRect __fastcall GetFormBounds();
	virtual int __fastcall GetFormDefaultHeight();
	virtual int __fastcall GetFormDefaultWidth();
	void __fastcall HideForm();
	virtual void __fastcall InitializeForm(Vcl::Forms::TForm* AForm);
	void __fastcall ShowForm();
	__property Vcl::Forms::TForm* Form = {read=FForm};
	__property System::Types::TRect FormBounds = {read=FFormBounds, write=FFormBounds};
	__property _di_IcxGridCustomizationForm FormIntf = {read=GetFormIntf};
	
public:
	__property bool Customization = {read=FCustomization, write=SetCustomization, nodefault};
public:
	/* TcxGridViewHandler.Create */ inline __fastcall virtual TcxCustomGridCustomizationController(TcxCustomGridView* AGridView) : TcxGridViewHandler(AGridView) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxCustomGridCustomizationController() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridCustomizationController : public TcxCustomGridCustomizationController
{
	typedef TcxCustomGridCustomizationController inherited;
	
protected:
	virtual Vcl::Forms::TForm* __fastcall CreateForm();
public:
	/* TcxGridViewHandler.Create */ inline __fastcall virtual TcxGridCustomizationController(TcxCustomGridView* AGridView) : TcxCustomGridCustomizationController(AGridView) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxGridCustomizationController() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridController : public TcxGridViewHandler
{
	typedef TcxGridViewHandler inherited;
	
private:
	TcxCustomGridCustomizationController* FCustomizationController;
	TcxGridViewDesignController* FDesignController;
	TcxCustomGridCellViewInfo* FDesignPopupMenuInvoker;
	TcxGridHintHelper* FHintHelper;
	bool FIsCheckingCoordinates;
	bool FIsDblClick;
	bool FIsFocusing;
	bool FIsNavigationKeyAutoRepeat;
	bool FIsScrolling;
	bool __fastcall GetCustomization();
	Vcl::Forms::TForm* __fastcall GetCustomizationForm();
	System::Types::TRect __fastcall GetCustomizationFormBounds();
	TcxGridViewDesignController* __fastcall GetDesignController();
	TcxCustomGridDragAndDropObject* __fastcall GetDragAndDropObject();
	Cxcontrols::TcxDragAndDropObjectClass __fastcall GetDragAndDropObjectClass();
	Cxcontrols::TcxDragImageList* __fastcall GetDragImages();
	TcxCustomGridViewCellViewInfo* __fastcall GetHintCellViewInfo();
	Vcl::Controls::THintWindow* __fastcall GetHintWindow();
	bool __fastcall GetIsDragging();
	TcxCustomGridCellViewInfo* __fastcall GetMouseCaptureViewInfo();
	void __fastcall SetCustomization(bool Value);
	void __fastcall SetCustomizationFormBounds(const System::Types::TRect &AValue);
	void __fastcall SetDragAndDropObjectClass(Cxcontrols::TcxDragAndDropObjectClass Value);
	void __fastcall SetMouseCaptureViewInfo(TcxCustomGridCellViewInfo* Value);
	void __fastcall CheckKeyAutoRepeat(System::Word ACharCode, unsigned ARepeatCount);
	bool __fastcall IsNavigationKey(System::Word ACharCode);
	void __fastcall ResetKeyAutoRepeat(System::Word ACharCode);
	
protected:
	virtual void __fastcall AfterPaint();
	virtual bool __fastcall AllowPan(Vcl::Forms::TScrollBarKind AScrollKind);
	virtual void __fastcall BeforePaint();
	virtual bool __fastcall CanCancelDragStartOnCaptureObjectClear();
	virtual bool __fastcall CanFocusOnClick(int X, int Y);
	virtual bool __fastcall CanHandleHitTest(TcxCustomGridHitTest* AHitTest);
	virtual void __fastcall CheckCoordinates();
	virtual bool __fastcall CreateFieldControls(int X, int Y, System::TObject* ADataSource, System::Classes::TList* AFieldList);
	virtual void __fastcall DetailFocused(TcxCustomGridView* ADetail);
	virtual void __fastcall DoEnter();
	virtual void __fastcall DoExit();
	virtual void __fastcall DoKeyAutoRepeat();
	virtual void __fastcall DoSetFocus(bool ANotifyMaster);
	TcxCustomGridCellViewInfo* __fastcall GetActiveCellViewInfo(TcxCustomGridHitTest* AHitTest);
	virtual TcxGridViewDesignControllerClass __fastcall GetDesignControllerClass();
	virtual bool __fastcall GetDesignHitTest(TcxCustomGridHitTest* AHitTest);
	virtual int __fastcall GetDlgCode();
	virtual Vcl::Forms::TScrollBarKind __fastcall GetMouseWheelMajorScrollBarKind();
	virtual System::Classes::TPersistent* __fastcall GetPatternObject(System::Classes::TPersistent* AObject);
	virtual void __fastcall GridViewChanged();
	virtual bool __fastcall IsPixelScrollBar(Vcl::Forms::TScrollBarKind AKind);
	bool __fastcall IsSuppressHintOnMouseDown();
	virtual bool __fastcall MayFocus();
	virtual void __fastcall MouseLeave();
	virtual bool __fastcall ProcessDesignPopupMenu(TcxCustomGridCellViewInfo* AViewInfo);
	virtual void __fastcall RemoveFocus();
	virtual void __fastcall SetFocus(bool ANotifyMaster);
	virtual void __fastcall SetFocusOnMouseClick(System::Uitypes::TMouseButton AButton, int X, int Y);
	virtual void __fastcall VisibilityChanged(bool AVisible);
	virtual bool __fastcall WantSpecialKey(System::Word AKey);
	virtual TcxCustomGridCustomizationController* __fastcall CreateCustomizationController();
	virtual TcxCustomGridCustomizationFormClass __fastcall GetCustomizationFormClass();
	virtual TcxGridHintHelperClass __fastcall GetHintHelperClass();
	virtual void __fastcall AfterScrolling();
	virtual void __fastcall BeforeScrolling();
	virtual void __fastcall BeginGestureScroll(const System::Types::TPoint &APos);
	virtual void __fastcall DoScroll(Vcl::Forms::TScrollBarKind AScrollBarKind, System::Uitypes::TScrollCode AScrollCode, int &AScrollPos);
	virtual void __fastcall EndGestureScroll();
	virtual void __fastcall ScrollContentByGesture(Vcl::Forms::TScrollBarKind AScrollKind, int ADelta);
	__property TcxCustomGridCustomizationController* CustomizationController = {read=FCustomizationController};
	__property TcxGridHintHelper* HintHelper = {read=FHintHelper};
	__property TcxCustomGridCellViewInfo* DesignPopupMenuInvoker = {read=FDesignPopupMenuInvoker};
	__property TcxCustomGridDragAndDropObject* DragAndDropObject = {read=GetDragAndDropObject};
	__property bool IsCheckingCoordinates = {read=FIsCheckingCoordinates, nodefault};
	__property bool IsDragging = {read=GetIsDragging, nodefault};
	__property bool IsFocusing = {read=FIsFocusing, nodefault};
	__property bool IsNavigationKeyAutoRepeat = {read=FIsNavigationKeyAutoRepeat, nodefault};
	__property bool IsScrolling = {read=FIsScrolling, write=FIsScrolling, nodefault};
	
public:
	__fastcall virtual TcxCustomGridController(TcxCustomGridView* AGridView);
	__fastcall virtual ~TcxCustomGridController();
	virtual void __fastcall ControlFocusChanged();
	void __fastcall DesignerModified();
	virtual void __fastcall DoCancelMode();
	void __fastcall DoCheckCoordinates();
	void __fastcall DoControlFocusChanged();
	virtual System::Uitypes::TCursor __fastcall GetCursor(int X, int Y);
	virtual bool __fastcall HasFocusedControls();
	virtual void __fastcall InitScrollBarsParameters();
	virtual bool __fastcall IsDataFullyVisible(bool AIsCallFromMaster = false);
	virtual void __fastcall Scroll(Vcl::Forms::TScrollBarKind AScrollBarKind, System::Uitypes::TScrollCode AScrollCode, int &AScrollPos);
	void __fastcall SetScrollBarInfo(Vcl::Forms::TScrollBarKind AScrollBarKind, int AMin, int AMax, int AStep, int APage, int APos, bool AAllowShow, bool AAllowHide);
	void __fastcall UpdateScrollBars(bool AIgnoreUpdateLock = false);
	virtual void __fastcall BeginDragAndDrop();
	virtual void __fastcall DragAndDrop(const System::Types::TPoint &P, bool &Accepted);
	virtual void __fastcall EndDragAndDrop(bool Accepted);
	virtual bool __fastcall StartDragAndDrop(const System::Types::TPoint &P);
	virtual void __fastcall BeforeStartDrag();
	virtual bool __fastcall CanDrag(int X, int Y);
	virtual void __fastcall DragDrop(System::TObject* Source, int X, int Y);
	virtual void __fastcall DragOver(System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	virtual void __fastcall DrawDragImage(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R);
	virtual void __fastcall EndDrag(System::TObject* Target, int X, int Y);
	virtual System::Types::TPoint __fastcall GetDragImagesSize();
	virtual bool __fastcall HasDragImages();
	virtual void __fastcall StartDrag(Vcl::Controls::TDragObject* &DragObject);
	__property Cxcontrols::TcxDragImageList* DragImages = {read=GetDragImages};
	void __fastcall CancelHint();
	void __fastcall HideHint();
	virtual Vcl::Controls::THintWindowClass __fastcall GetHintWindowClass();
	void __fastcall ShowHint(const System::Types::TRect &AHintAreaBounds, const System::Types::TRect &ATextRect, const System::UnicodeString AText, bool AIsHintMultiLine, Vcl::Graphics::TFont* AFont, TcxCustomGridViewCellViewInfo* AHintCellViewInfo);
	__property TcxCustomGridViewCellViewInfo* HintCellViewInfo = {read=GetHintCellViewInfo};
	__property Vcl::Controls::THintWindow* HintWindow = {read=GetHintWindow};
	virtual void __fastcall DoKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual bool __fastcall IMEComposition(Winapi::Messages::TMessage &AMessage);
	virtual bool __fastcall IMEStartComposition();
	virtual void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual bool __fastcall ProcessDetailDialogChar(TcxCustomGridView* ADetail, System::Word ACharCode);
	virtual bool __fastcall ProcessDialogChar(System::Word ACharCode);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	void __fastcall RefreshCustomizationForm();
	__property bool Customization = {read=GetCustomization, write=SetCustomization, nodefault};
	__property Vcl::Forms::TForm* CustomizationForm = {read=GetCustomizationForm};
	__property System::Types::TRect CustomizationFormBounds = {read=GetCustomizationFormBounds, write=SetCustomizationFormBounds};
	__property TcxGridViewDesignController* DesignController = {read=GetDesignController};
	__property Cxcontrols::TcxDragAndDropObjectClass DragAndDropObjectClass = {read=GetDragAndDropObjectClass, write=SetDragAndDropObjectClass};
	__property bool IsDblClick = {read=FIsDblClick, nodefault};
	__property TcxCustomGridCellViewInfo* MouseCaptureViewInfo = {read=GetMouseCaptureViewInfo, write=SetMouseCaptureViewInfo};
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomGridControllerClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDataGroupNode : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TcxDataGroupNode* operator[](int Index) { return this->Children[Index]; }
	
private:
	Dxcoreclasses::TdxFastObjectList* FChildren;
	Cxcustomdata::TcxDataGroupInfo* FDataGroupInfo;
	TcxDataGroupNode* FParent;
	TcxDataGroupNode* __fastcall GetChild(int Index);
	int __fastcall GetChildCount();
	
protected:
	void __fastcall SortChildren(Dxcoreclasses::TCompareItems ACompare);
	
public:
	__fastcall TcxDataGroupNode(TcxDataGroupNode* AParent, Cxcustomdata::TcxDataGroupInfo* ADataGroupInfo);
	__fastcall virtual ~TcxDataGroupNode();
	TcxDataGroupNode* __fastcall AddChild(Cxcustomdata::TcxDataGroupInfo* ADataGroupInfo);
	__property int ChildCount = {read=GetChildCount, nodefault};
	__property TcxDataGroupNode* Children[int Index] = {read=GetChild/*, default*/};
	__property Cxcustomdata::TcxDataGroupInfo* DataGroupInfo = {read=FDataGroupInfo};
	__property TcxDataGroupNode* Parent = {read=FParent};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxSortingBySummaryInfo : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	Dxcore::TdxSortOrder SortOrder;
	int SummaryItemIndex;
public:
	/* TObject.Create */ inline __fastcall TcxSortingBySummaryInfo() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxSortingBySummaryInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridSortingBySummaryEngine : public Cxcustomdata::TcxSortingBySummaryEngine
{
	typedef Cxcustomdata::TcxSortingBySummaryEngine inherited;
	
private:
	Dxcoreclasses::TdxFastObjectList* FInfos;
	TcxDataGroupNode* FRootNode;
	Cxcustomdata::TcxDataGroups* __fastcall GetDataGroups();
	TcxSortingBySummaryInfo* __fastcall GetInfo(int Index);
	int __fastcall GetInfoCount();
	
protected:
	void __fastcall AddInfo(TcxSortingBySummaryInfo* AInfo);
	void __fastcall BuildNodes(TcxDataGroupNode* AParentNode, int ALevel, int &ACurIndex);
	void __fastcall ClearInfos();
	int __fastcall CompareGroupsBySummary(void * AInfo1, void * AInfo2);
	void __fastcall RebuildDataGroupRecursive(TcxDataGroupNode* AParentNode, int &AFirstRecordListIndex);
	void __fastcall RebuildDataGroups();
	void __fastcall SortNodeRecursive(TcxDataGroupNode* ANode, int ALevel);
	void __fastcall SortNodes();
	__property Cxcustomdata::TcxDataGroups* DataGroups = {read=GetDataGroups};
	__property int InfoCount = {read=GetInfoCount, nodefault};
	__property TcxSortingBySummaryInfo* Infos[int Index] = {read=GetInfo};
	
public:
	__fastcall virtual TcxGridSortingBySummaryEngine(Cxcustomdata::TcxCustomDataControllerInfo* ADataControllerInfo);
	__fastcall virtual ~TcxGridSortingBySummaryEngine();
	virtual void __fastcall Sort();
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{B9ABDC6B-1A4A-4F11-A629-09B6FB9FB4BA}") IcxCustomGridDataController  : public System::IInterface 
{
	virtual void __fastcall AssignData(Cxcustomdata::TcxCustomDataController* ADataController) = 0 ;
	virtual void __fastcall CreateAllItems(bool AMissingItemsOnly) = 0 ;
	virtual void __fastcall DeleteAllItems() = 0 ;
	virtual void __fastcall GetFakeComponentLinks(System::Classes::TList* AList) = 0 ;
	virtual TcxCustomGridView* __fastcall GetGridView() = 0 ;
	virtual bool __fastcall HasAllItems() = 0 ;
	virtual bool __fastcall IsDataChangeable() = 0 ;
	virtual bool __fastcall IsDataLinked() = 0 ;
	virtual bool __fastcall SupportsCreateAllItems() = 0 ;
	__property TcxCustomGridView* GridView = {read=GetGridView};
};

typedef System::TMetaClass* TcxCustomGridCellPainterClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridCellPainter : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Cxgraphics::TcxCanvas* FCanvas;
	TcxCustomGridCellViewInfo* FViewInfo;
	bool __fastcall GetIsMainCanvasInUseValue();
	Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	
protected:
	virtual void __fastcall AfterPaint();
	virtual void __fastcall BeforePaint();
	virtual bool __fastcall CanDrawDesignSelection();
	virtual void __fastcall DoExcludeFromClipRect();
	virtual void __fastcall DrawBackground()/* overload */;
	virtual void __fastcall DrawBackground(const System::Types::TRect &R)/* overload */;
	virtual bool __fastcall DrawBackgroundHandler(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds);
	virtual void __fastcall DrawBorder(Cxgeometry::TcxBorder ABorder);
	virtual void __fastcall DrawBorders();
	virtual void __fastcall DrawContent();
	__classmethod virtual void __fastcall DrawDesignSelection(Cxgraphics::TcxCanvas* ACanvas, TcxCustomGridCellViewInfo* AViewInfo);
	virtual void __fastcall DrawText();
	virtual bool __fastcall ExcludeFromClipRect();
	__classmethod bool __fastcall GetIsMainCanvasInUse(Cxgraphics::TcxCanvas* ACanvas, TcxCustomGridCellViewInfo* AViewInfo);
	virtual bool __fastcall NeedsPainting();
	virtual void __fastcall Paint();
	virtual void __fastcall PrepareCanvasForDrawText();
	virtual void __fastcall UnprepareCanvasForDrawText();
	__property Cxgraphics::TcxCanvas* Canvas = {read=FCanvas};
	__property bool IsMainCanvasInUse = {read=GetIsMainCanvasInUseValue, nodefault};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=GetScaleFactor};
	__property TcxCustomGridCellViewInfo* ViewInfo = {read=FViewInfo};
	
public:
	__fastcall virtual TcxCustomGridCellPainter(Cxgraphics::TcxCanvas* ACanvas, TcxCustomGridCellViewInfo* AViewInfo);
	__classmethod virtual void __fastcall DoDrawDesignSelection(Cxgraphics::TcxCanvas* ACanvas, TcxCustomGridCellViewInfo* AViewInfo);
	virtual void __fastcall MainPaint();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomGridCellPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridDesignSelectorPainter : public TcxCustomGridCellPainter
{
	typedef TcxCustomGridCellPainter inherited;
	
private:
	TcxGridDesignSelectorViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DoExcludeFromClipRect();
	virtual void __fastcall DrawSign(System::Uitypes::TColor AColor);
	virtual bool __fastcall ExcludeFromClipRect();
	virtual void __fastcall Paint();
	__property TcxGridDesignSelectorViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridDesignSelectorPainter(Cxgraphics::TcxCanvas* ACanvas, TcxCustomGridCellViewInfo* AViewInfo) : TcxCustomGridCellPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridDesignSelectorPainter() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomGridPainterClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridPainter : public TcxGridViewHandler
{
	typedef TcxGridViewHandler inherited;
	
private:
	Cxgraphics::TcxRegion* FBackgroundRegion;
	Cxgraphics::TcxRegion* FBeforePaintClipRegion;
	Cxgraphics::TcxCanvas* FCanvas;
	TcxCustomGridViewInfo* FViewInfo;
	Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	HIDESBASE TcxCustomGridViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DrawBackground();
	virtual bool __fastcall DrawBackgroundBeforePaint();
	virtual void __fastcall PaintAfter();
	virtual void __fastcall PaintBefore();
	virtual void __fastcall PaintContent();
	__property Cxgraphics::TcxCanvas* Canvas = {read=GetCanvas, write=FCanvas};
	__property TcxCustomGridViewInfo* ViewInfo = {read=GetViewInfo, write=FViewInfo};
	
public:
	virtual void __fastcall DrawFocusRect(const System::Types::TRect &R, bool AHideFocusRect);
	void __fastcall ExcludeFromBackground(const System::Types::TRect &R);
	void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas = (Cxgraphics::TcxCanvas*)(0x0), TcxCustomGridViewInfo* AViewInfo = (TcxCustomGridViewInfo*)(0x0));
	void __fastcall Invalidate()/* overload */;
	void __fastcall Invalidate(const System::Types::TRect &R)/* overload */;
	void __fastcall Invalidate(Cxgraphics::TcxRegion* ARegion)/* overload */;
public:
	/* TcxGridViewHandler.Create */ inline __fastcall virtual TcxCustomGridPainter(TcxCustomGridView* AGridView) : TcxGridViewHandler(AGridView) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxCustomGridPainter() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomGridViewDataClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridViewData : public TcxGridViewHandler
{
	typedef TcxGridViewHandler inherited;
	
public:
	virtual Cxcustomdata::TcxSortingBySummaryEngineClass __fastcall GetSortingBySummaryEngineClass();
	virtual bool __fastcall IsEmpty();
	virtual TcxCustomGridView* __fastcall MakeDetailVisible(System::Classes::TComponent* ADetailLevel);
	__property DataController;
public:
	/* TcxGridViewHandler.Create */ inline __fastcall virtual TcxCustomGridViewData(TcxCustomGridView* AGridView) : TcxGridViewHandler(AGridView) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxCustomGridViewData() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxGridSite : public Cxcontrols::TcxControl
{
	typedef Cxcontrols::TcxControl inherited;
	
private:
	Cxgraphics::TcxCanvas* FActiveCanvas;
	Cxclasses::TcxTimer* FBoundsChangedTimer;
	TcxCustomGridCellViewInfo* FDesignPopupMenuInvoker;
	bool FIgnoreUpdateLock;
	bool FIsWindowRegionAssigned;
	int FLeftOnMouseDown;
	System::Types::TSize FSize;
	int FTopOnMouseDown;
	TcxCustomGridViewInfo* FViewInfo;
	bool __fastcall AllowBoundsChangedNotification();
	HIDESBASE Cxgraphics::TcxCanvas* __fastcall GetActiveCanvas();
	Cxcontrols::TcxControl* __fastcall GetContainer();
	TcxCustomGridController* __fastcall GetController();
	TcxCustomGridView* __fastcall GetGridView();
	bool __fastcall GetLocked();
	TcxCustomGridPainter* __fastcall GetPainter();
	void __fastcall SendKeyDownNotification(Winapi::Messages::TWMKey &Message);
	void __fastcall BoundsChangedTimerHandler(System::TObject* Sender);
	void __fastcall SaveOrigin();
	HIDESBASE MESSAGE void __fastcall CMBiDiModeChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CNKeyDown(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CNSysKeyDown(Winapi::Messages::TWMKey &Message);
	MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall WMContextMenu(Winapi::Messages::TWMContextMenu &Message);
	HIDESBASE MESSAGE void __fastcall WMGestureNotify(Dxtouch::TWMGestureNotify &Message);
	HIDESBASE MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	MESSAGE void __fastcall WMIMEComposition(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMIMEStartComposition(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall WMKeyUp(Winapi::Messages::TWMKey &Message);
	
protected:
	Cxgraphics::TcxBitmap32* __fastcall GetLockedStateImage();
	Cxcontrols::TcxControl* __fastcall GetLockedStateTopmostControl();
	bool __fastcall CreateFieldControls(int X, int Y, System::TObject* ADataSource, System::Classes::TList* AFieldList);
	virtual bool __fastcall AllowPan(Vcl::Forms::TScrollBarKind AScrollKind);
	virtual void __fastcall CheckOverpan(Vcl::Forms::TScrollBarKind AScrollKind, int ANewDataPos, int AMinDataPos, int AMaxDataPos, int ADeltaX, int ADeltaY);
	virtual bool __fastcall IsGestureTarget(NativeUInt AWnd);
	virtual bool __fastcall AllowAutoDragAndDropAtDesignTime(int X, int Y, System::Classes::TShiftState Shift);
	DYNAMIC bool __fastcall AllowDragAndDropWithoutFocus();
	virtual void __fastcall BeforeMouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall BoundsChanged();
	DYNAMIC bool __fastcall CanDrag(int X, int Y);
	virtual bool __fastcall CanFocusOnClick(int X, int Y)/* overload */;
	virtual bool __fastcall CanProcessScrollEvents(Winapi::Messages::TMessage &Message);
	virtual void __fastcall ChangeScaleEx(int M, int D, bool isDpiChange);
	void __fastcall CheckCancelDrag();
	virtual void __fastcall DestroyHandle();
	DYNAMIC void __fastcall DoCancelMode();
	DYNAMIC void __fastcall DoContextPopup(const System::Types::TPoint &MousePos, bool &Handled);
	DYNAMIC void __fastcall DoEnter();
	DYNAMIC void __fastcall DoExit();
	virtual Dxscrollbarannotations::TdxScrollbarAnnotations* __fastcall GetScrollbarAnnotationHelper();
	virtual void __fastcall SetFocusOnMouseClick(System::Uitypes::TMouseButton AButton, int X, int Y);
	virtual void __fastcall BeginGestureScroll(const System::Types::TPoint &APos);
	virtual bool __fastcall CanScrollContentByGestureWithoutScrollBars();
	virtual void __fastcall DoGetGestureOptions(Vcl::Controls::TInteractiveGestures &Gestures, Vcl::Controls::TInteractiveGestureOptions &Options);
	virtual void __fastcall DoGestureScroll(Vcl::Forms::TScrollBarKind AScrollKind, int ANewScrollPos);
	virtual void __fastcall EndGestureScroll();
	virtual bool __fastcall IsDataScrollbar(Vcl::Forms::TScrollBarKind AKind);
	virtual bool __fastcall IsDoubleBufferedNeeded();
	virtual bool __fastcall IsGestureScrolling();
	virtual bool __fastcall IsGestureHelperMessage(Winapi::Messages::TMessage &Message);
	virtual bool __fastcall IsScrollBarBasedGestureScroll(Vcl::Forms::TScrollBarKind AScrollKind);
	void __fastcall ResetRegion();
	virtual void __fastcall ScrollContentByGesture(Vcl::Forms::TScrollBarKind AScrollKind, int ADelta);
	void __fastcall SetRegion(const System::Types::TRect &AVisibleRect);
	virtual bool __fastcall AllowTouchScrollUIMode();
	virtual Cxcontrols::_di_IdxTouchScrollUIOwner __fastcall GetTouchScrollUIOwner(const System::Types::TPoint &APoint);
	virtual void __fastcall DoPaint();
	virtual void __fastcall DoScrollUIModeChanged();
	DYNAMIC void __fastcall FocusChanged();
	virtual bool __fastcall FocusWhenChildIsClicked(Vcl::Controls::TControl* AChild);
	virtual System::Types::TRect __fastcall GetClientBounds();
	virtual System::Uitypes::TCursor __fastcall GetCurrentCursor(int X, int Y);
	DYNAMIC bool __fastcall GetDesignHitTest(int X, int Y, System::Classes::TShiftState Shift);
	virtual bool __fastcall GetIsDesigning();
	virtual bool __fastcall GetIsFocused();
	virtual Cxcontrols::TcxControlCustomScrollBarsClass __fastcall GetMainScrollBarsClass();
	virtual Cxcontrols::TcxMouseWheelScrollingKind __fastcall GetMouseWheelScrollingKind();
	virtual System::Types::TRect __fastcall GetVScrollBarBounds();
	virtual System::Uitypes::TScrollStyle __fastcall GetSystemSizeScrollBars();
	void __fastcall HideWindow();
	virtual bool __fastcall IsPanArea(const System::Types::TPoint &APoint);
	virtual bool __fastcall IsPixelScrollBar(Vcl::Forms::TScrollBarKind AKind);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC bool __fastcall MayFocus();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseLeave(Vcl::Controls::TControl* AControl);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall MoveWindow(const System::Types::TRect &ANewBounds);
	virtual void __fastcall Paint();
	virtual void __fastcall RequestAlign();
	virtual void __fastcall SetParent(Vcl::Controls::TWinControl* AParent);
	virtual bool __fastcall UpdateMousePositionIfControlMoved();
	virtual bool __fastcall WasMovedOnMouseDown();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	DYNAMIC void __fastcall DoEndDrag(System::TObject* Target, int X, int Y);
	DYNAMIC void __fastcall DoStartDrag(Vcl::Controls::TDragObject* &DragObject);
	DYNAMIC void __fastcall DragOver(System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	virtual void __fastcall DrawDragImage(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R);
	virtual System::Types::TPoint __fastcall GetDragImagesSize();
	virtual bool __fastcall HasDragImages();
	virtual void __fastcall InitScrollBarsParameters();
	virtual System::Uitypes::TColor __fastcall GetScrollContentForegroundColor();
	virtual System::Types::TRect __fastcall GetHScrollBarBounds();
	virtual bool __fastcall HasScrollBarArea();
	virtual void __fastcall Scroll(Vcl::Forms::TScrollBarKind AScrollBarKind, System::Uitypes::TScrollCode AScrollCode, int &AScrollPos);
	virtual void __fastcall UpdateScrollBars();
	virtual bool __fastcall CanCancelDragStartOnCaptureObjectClear();
	DYNAMIC void __fastcall DragAndDrop(const System::Types::TPoint &P, bool &Accepted);
	DYNAMIC void __fastcall EndDragAndDrop(bool Accepted);
	DYNAMIC bool __fastcall StartDragAndDrop(const System::Types::TPoint &P);
	void __fastcall CancelPostBoundsChanged();
	virtual void __fastcall CheckClipping();
	void __fastcall InitTabStop(Vcl::Controls::TWinControl* AParent);
	bool __fastcall IsLockedStatePaint(/* out */ Cxgraphics::TcxBitmap32* &ALockedStateImage);
	void __fastcall PostBoundsChanged();
	virtual void __fastcall ScrollBarVisibilityChanged(Cxcontrols::TScrollBarKinds AScrollBars);
	virtual void __fastcall UpdateSize();
	__property TcxCustomGridController* Controller = {read=GetController};
	__property bool IgnoreUpdateLock = {read=FIgnoreUpdateLock, write=FIgnoreUpdateLock, nodefault};
	__property TcxCustomGridPainter* Painter = {read=GetPainter};
	
public:
	__fastcall virtual TcxGridSite(TcxCustomGridViewInfo* AViewInfo);
	__fastcall virtual ~TcxGridSite();
	DYNAMIC void __fastcall BeginDragAndDrop();
	DYNAMIC void __fastcall DragDrop(System::TObject* Source, int X, int Y);
	DYNAMIC bool __fastcall ExecuteAction(System::Classes::TBasicAction* Action);
	virtual void __fastcall ScaleForPPI(int NewPPI);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	virtual void __fastcall SetFocus();
	virtual bool __fastcall UpdateAction(System::Classes::TBasicAction* Action);
	__property Cxgraphics::TcxCanvas* ActiveCanvas = {read=GetActiveCanvas};
	__property Cxcontrols::TcxControl* Container = {read=GetContainer};
	__property TcxCustomGridView* GridView = {read=GetGridView};
	__property HScrollBar;
	__property HScrollBarVisible;
	__property Keys;
	__property bool Locked = {read=GetLocked, nodefault};
	__property MouseCapture;
	__property TcxCustomGridViewInfo* ViewInfo = {read=FViewInfo};
	__property VScrollBar;
	__property VScrollBarVisible;
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxGridSite(HWND ParentWindow) : Cxcontrols::TcxControl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	inline bool __fastcall  CanFocusOnClick(){ return Cxcontrols::TcxControl::CanFocusOnClick(); }
	
private:
	void *__IcxEditorFieldLink;	// Cxedit::IcxEditorFieldLink 
	void *__IcxLockedStatePaint;	// Cxcontrols::IcxLockedStatePaint 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E21A0DDE-85DF-42CC-9063-D9E5DF45F02F}
	operator Cxedit::_di_IcxEditorFieldLink()
	{
		Cxedit::_di_IcxEditorFieldLink intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxedit::IcxEditorFieldLink*(void) { return (Cxedit::IcxEditorFieldLink*)&__IcxEditorFieldLink; }
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
	
};


typedef System::TMetaClass* TcxGridSiteClass;

typedef System::TMetaClass* TcxCustomGridCellViewInfoClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridCellViewInfo : public Dxcoreclasses::TcxOwnedInterfacedPersistent
{
	typedef Dxcoreclasses::TcxOwnedInterfacedPersistent inherited;
	
private:
	bool FCalculated;
	bool FCalculatingParams;
	bool FIsRightToLeftConverted;
	System::Classes::TAlignment FAlignmentHorz;
	Cxclasses::TcxAlignmentVert FAlignmentVert;
	Cxgeometry::TcxBorders FBorders;
	bool FIsDestroying;
	bool FIsStateResetting;
	TcxCustomGridHitTest* FLinkedHitTest;
	bool FParamsCalculated;
	Cxgeometry::TdxScaleFactor* FScaleFactor;
	Cxgridcommon::TcxGridCellState FState;
	System::UnicodeString FText;
	System::Uitypes::TColor FTextSelBkColor;
	System::Uitypes::TColor FTextSelColor;
	int FTextSelLength;
	int FTextSelStart;
	bool FVisible;
	int __fastcall GetBorderSize(Cxgeometry::TcxBorder AIndex);
	System::Types::TRect __fastcall GetClientBounds();
	System::Types::TRect __fastcall GetContentBounds();
	System::Types::TRect __fastcall GetTextBoundsValue();
	int __fastcall GetTextHeight();
	int __fastcall GetTextWidth();
	void __fastcall SetLinkedHitTest(TcxCustomGridHitTest* Value);
	void __fastcall SetState(Cxgridcommon::TcxGridCellState Value);
	
protected:
	System::Types::TRect FClientBounds;
	System::Types::TRect FContentBounds;
	virtual void __fastcall DoCancelMode();
	void __fastcall TrackingMouseLeave();
	virtual void __fastcall MouseLeave();
	virtual bool __fastcall PtInCaller(const System::Types::TPoint &P);
	Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	virtual Vcl::Controls::TWinControl* __fastcall GetAdornerTargetElementControl();
	virtual System::Types::TRect __fastcall GetAdornerTargetElementBounds();
	virtual bool __fastcall GetAdornerTargetElementVisible();
	virtual void __fastcall GetAdornerTargetElements(System::Classes::TStrings* AList);
	virtual void __fastcall AfterOffset();
	virtual void __fastcall AfterCalculateBounds(System::Types::TRect &ABounds);
	virtual void __fastcall AfterCustomDraw(Cxgraphics::TcxCanvas* ACanvas);
	virtual bool __fastcall AllowRightToLeftConversionOnRecalculate();
	virtual void __fastcall BeforeCustomDraw(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall BeforeOffset();
	virtual void __fastcall BeforeStateChange();
	virtual System::Types::TRect __fastcall CalculateClientBounds();
	virtual System::Types::TRect __fastcall CalculateContentBounds();
	int __fastcall CalculateTextWidth();
	int __fastcall CalculateTextHeight(bool AForPainting);
	virtual void __fastcall CalculateTextSelectionInfo();
	void __fastcall CalculateParams();
	void __fastcall CalculateParamsNeeded();
	virtual int __fastcall CalculateHeight();
	virtual int __fastcall CalculateWidth();
	virtual bool __fastcall CanProcessMouseLeave();
	virtual bool __fastcall CaptureMouseOnPress();
	virtual void __fastcall Click();
	virtual bool __fastcall CustomDraw(Cxgraphics::TcxCanvas* ACanvas);
	virtual bool __fastcall CustomDrawBackground(Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall Destroying();
	virtual void __fastcall DoCalculateParams();
	virtual void __fastcall DoInvalidate();
	virtual bool __fastcall DoCustomDraw(Cxgraphics::TcxCanvas* ACanvas);
	virtual bool __fastcall DoCustomDrawBackground(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DoMouseLeave();
	virtual Cxgeometry::TdxScaleFactor* __fastcall GetActualScaleFactor();
	virtual Cxgridcommon::TcxGridCellState __fastcall GetActualState();
	virtual System::Classes::TAlignment __fastcall GetAlignmentHorz();
	virtual Cxclasses::TcxAlignmentVert __fastcall GetAlignmentVert();
	virtual System::Types::TRect __fastcall GetAreaBounds();
	virtual Vcl::Graphics::TBitmap* __fastcall GetBackgroundBitmap();
	virtual System::Types::TRect __fastcall GetBorderBounds(Cxgeometry::TcxBorder AIndex);
	virtual System::Uitypes::TColor __fastcall GetBorderColor(Cxgeometry::TcxBorder AIndex);
	virtual Cxgeometry::TcxBorders __fastcall GetBorders();
	virtual int __fastcall GetBorderWidth(Cxgeometry::TcxBorder AIndex);
	System::Types::TRect __fastcall GetBounds();
	virtual Cxlookandfeelpainters::TcxButtonState __fastcall GetButtonState();
	virtual Cxgraphics::TcxCanvas* __fastcall GetCanvas() = 0 ;
	__classmethod virtual int __fastcall GetCellHeight(int ATextHeight, Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* ALookAndFeelPainter, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual int __fastcall GetContentHeight();
	virtual int __fastcall GetContentWidth();
	virtual Cxcontrols::TcxControl* __fastcall GetControl();
	virtual System::Types::TRect __fastcall GetDesignSelectionBounds();
	virtual int __fastcall GetDesignSelectionWidth();
	virtual Cxcustomcanvas::TcxRotationAngle __fastcall GetDrawTextRotationAngle();
	virtual int __fastcall GetHeight();
	virtual TcxCustomGridHitTestClass __fastcall GetHitTestClass() = 0 ;
	virtual bool __fastcall GetHotTrack();
	virtual bool __fastcall GetIsCheck();
	virtual bool __fastcall GetIsDesignSelected();
	virtual bool __fastcall GetIsVisibleForPainting();
	virtual bool __fastcall GetMouseCapture();
	virtual bool __fastcall GetMultiLine();
	virtual bool __fastcall GetMultiLinePainting();
	virtual TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	virtual System::Types::TRect __fastcall GetRealBounds();
	virtual System::Types::TRect __fastcall GetRealTextAreaBounds();
	virtual bool __fastcall GetShowEndEllipsis();
	virtual System::UnicodeString __fastcall GetText();
	virtual System::Types::TRect __fastcall GetTextAreaBounds();
	virtual int __fastcall GetTextAttributes(bool AForPainting);
	System::Types::TRect __fastcall GetTextBounds(bool AHorizontal, bool AVertical);
	virtual int __fastcall GetTextCellHeight(TcxCustomGridViewInfo* AGridViewInfo, Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* ALookAndFeelPainter);
	virtual int __fastcall GetTextHeightWithOffset();
	virtual int __fastcall GetTextWidthWithOffset();
	virtual System::UnicodeString __fastcall GetTextForPainting();
	virtual bool __fastcall GetTransparent();
	virtual void __fastcall GetViewParams(Cxgraphics::TcxViewParams &AParams);
	virtual bool __fastcall GetVisible();
	virtual bool __fastcall GetVisibleForHitTest();
	virtual int __fastcall GetWidth();
	virtual bool __fastcall HasBackground();
	virtual bool __fastcall HasCustomDraw();
	virtual bool __fastcall HasCustomDrawBackground();
	virtual bool __fastcall HasDesignPopupMenu();
	virtual bool __fastcall HasHitTestPoint(const System::Types::TPoint &P);
	virtual bool __fastcall HasMouse(TcxCustomGridHitTest* AHitTest);
	virtual void __fastcall HotTrackChanged(bool AHotTracked);
	virtual void __fastcall InitDropDownWindow(Dxuielementpopupwindow::TdxUIElementPopupWindow* APopup);
	virtual void __fastcall InitHitTest(TcxCustomGridHitTest* AHitTest);
	virtual bool __fastcall InvalidateOnStateChange();
	virtual bool __fastcall IsChildrenHotTracked();
	virtual bool __fastcall IsHotTrackChanged(Cxgridcommon::TcxGridCellState APrevState);
	virtual void __fastcall Offset(int DX, int DY);
	virtual void __fastcall PopulateDesignPopupMenu(Vcl::Menus::TPopupMenu* APopupMenu);
	virtual void __fastcall PrepareCanvas(Cxgraphics::TcxCanvas* ACanvas);
	virtual bool __fastcall RecalculateOnStateChange();
	virtual void __fastcall ResetChildrenState();
	virtual void __fastcall ResetState();
	virtual void __fastcall RestoreParams(const Cxgraphics::TcxViewParams &AParams);
	virtual void __fastcall SaveParams(/* out */ Cxgraphics::TcxViewParams &AParams);
	virtual void __fastcall SetHeight(int Value);
	virtual void __fastcall SetMouseCapture(bool Value);
	virtual void __fastcall SetWidth(int Value);
	virtual void __fastcall StateChanged(Cxgridcommon::TcxGridCellState APrevState);
	virtual void __fastcall UpdateOnStateChange();
	virtual void __fastcall DropDown();
	virtual void __fastcall CloseUp();
	virtual bool __fastcall CloseDropDownWindowOnDestruction();
	virtual bool __fastcall DropDownWindowExists();
	virtual Dxuielementpopupwindow::TdxUIElementPopupWindow* __fastcall GetDropDownWindow();
	virtual Cxcontrols::TcxPopupAlignHorz __fastcall GetDropDownWindowAlignHorz();
	virtual Cxcontrols::TcxPopupAlignHorz __fastcall GetDropDownWindowDefaultAlignHorz();
	virtual System::Types::TRect __fastcall GetDropDownWindowOwnerBounds();
	virtual bool __fastcall IsDropDownWindowOwner();
	__property Dxuielementpopupwindow::TdxUIElementPopupWindow* DropDownWindow = {read=GetDropDownWindow};
	__property int BorderWidth[Cxgeometry::TcxBorder AIndex] = {read=GetBorderWidth};
	__property bool CalculatingParams = {read=FCalculatingParams, nodefault};
	__property Cxgraphics::TcxCanvas* Canvas = {read=GetCanvas};
	__property Cxcontrols::TcxControl* Control = {read=GetControl};
	__property System::Types::TRect DesignSelectionBounds = {read=GetDesignSelectionBounds};
	__property int DesignSelectionWidth = {read=GetDesignSelectionWidth, nodefault};
	__property bool HotTrack = {read=GetHotTrack, nodefault};
	__property bool IsCheck = {read=GetIsCheck, nodefault};
	__property bool IsDesignSelected = {read=GetIsDesignSelected, nodefault};
	__property bool IsDestroying = {read=FIsDestroying, nodefault};
	__property bool IsVisibleForPainting = {read=GetIsVisibleForPainting, nodefault};
	__property TcxCustomGridHitTest* LinkedHitTest = {read=FLinkedHitTest, write=SetLinkedHitTest};
	__property bool ShowEndEllipsis = {read=GetShowEndEllipsis, nodefault};
	__property System::Uitypes::TColor TextSelBkColor = {read=FTextSelBkColor, write=FTextSelBkColor, nodefault};
	__property System::Uitypes::TColor TextSelColor = {read=FTextSelColor, write=FTextSelColor, nodefault};
	__property int TextSelStart = {read=FTextSelStart, write=FTextSelStart, nodefault};
	__property int TextSelLength = {read=FTextSelLength, write=FTextSelLength, nodefault};
	
public:
	System::Types::TRect Bounds;
	bool MultiLine;
	bool MultiLinePainting;
	Cxgraphics::TcxViewParams Params;
	__fastcall TcxCustomGridCellViewInfo();
	__fastcall virtual ~TcxCustomGridCellViewInfo();
	virtual void __fastcall AfterConstruction();
	virtual void __fastcall AfterRecalculation();
	virtual void __fastcall BeforeDestruction();
	virtual void __fastcall BeforeRecalculation();
	virtual void __fastcall Calculate(int ALeftBound, int ATopBound, int AWidth = 0xffffffff, int AHeight = 0xffffffff)/* overload */;
	virtual void __fastcall Calculate(const System::Types::TRect &ABounds)/* overload */;
	virtual System::Types::TRect __fastcall GetAreaBoundsForPainting();
	virtual int __fastcall GetBestFitWidth();
	virtual TcxCustomGridHitTest* __fastcall GetHitTest(const System::Types::TPoint &P);
	virtual bool __fastcall HasPoint(const System::Types::TPoint &P);
	virtual void __fastcall Invalidate();
	virtual bool __fastcall IsHotTracked(bool ACheckChildren = true);
	virtual bool __fastcall MouseDown(TcxCustomGridHitTest* AHitTest, System::Uitypes::TMouseButton AButton, System::Classes::TShiftState AShift);
	virtual bool __fastcall MouseMove(TcxCustomGridHitTest* AHitTest, System::Classes::TShiftState AShift);
	virtual bool __fastcall MouseUp(TcxCustomGridHitTest* AHitTest, System::Uitypes::TMouseButton AButton, System::Classes::TShiftState AShift);
	void __fastcall DoOffset(int DX, int DY);
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas = (Cxgraphics::TcxCanvas*)(0x0));
	void __fastcall Recalculate();
	void __fastcall ResetContentBounds();
	void __fastcall RightToLeftConversion(const System::Types::TRect &ABounds);
	void __fastcall Update();
	bool __fastcall UseRightToLeftAlignment();
	__property Cxgridcommon::TcxGridCellState ActualState = {read=GetActualState, nodefault};
	__property System::Classes::TAlignment AlignmentHorz = {read=FAlignmentHorz, write=FAlignmentHorz, nodefault};
	__property Cxclasses::TcxAlignmentVert AlignmentVert = {read=FAlignmentVert, write=FAlignmentVert, nodefault};
	__property Vcl::Graphics::TBitmap* BackgroundBitmap = {read=GetBackgroundBitmap};
	__property System::Types::TRect BorderBounds[Cxgeometry::TcxBorder AIndex] = {read=GetBorderBounds};
	__property System::Uitypes::TColor BorderColor[Cxgeometry::TcxBorder AIndex] = {read=GetBorderColor};
	__property int BorderSize[Cxgeometry::TcxBorder AIndex] = {read=GetBorderSize};
	__property Cxgeometry::TcxBorders Borders = {read=FBorders, write=FBorders, nodefault};
	__property Cxlookandfeelpainters::TcxButtonState ButtonState = {read=GetButtonState, nodefault};
	__property bool Calculated = {read=FCalculated, write=FCalculated, nodefault};
	__property System::Types::TRect ClientBounds = {read=GetClientBounds};
	__property System::Types::TRect ContentBounds = {read=GetContentBounds};
	__property int ContentHeight = {read=GetContentHeight, nodefault};
	__property int ContentWidth = {read=GetContentWidth, nodefault};
	__property int Height = {read=GetHeight, write=SetHeight, nodefault};
	__property bool IsRightToLeftConverted = {read=FIsRightToLeftConverted, write=FIsRightToLeftConverted, nodefault};
	__property bool MouseCapture = {read=GetMouseCapture, write=SetMouseCapture, nodefault};
	__property System::Types::TRect RealBounds = {read=GetRealBounds};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=FScaleFactor};
	__property Cxgridcommon::TcxGridCellState State = {read=FState, write=SetState, nodefault};
	__property System::UnicodeString Text = {read=FText, write=FText};
	__property System::Types::TRect TextBounds = {read=GetTextBoundsValue};
	__property System::UnicodeString TextForPainting = {read=GetTextForPainting};
	__property int TextHeightWithOffset = {read=GetTextHeightWithOffset, nodefault};
	__property int TextWidthWithOffset = {read=GetTextWidthWithOffset, nodefault};
	__property int TextHeight = {read=GetTextHeight, nodefault};
	__property int TextWidth = {read=GetTextWidth, nodefault};
	__property System::Types::TRect TextAreaBounds = {read=GetRealTextAreaBounds};
	__property bool Transparent = {read=GetTransparent, nodefault};
	__property bool Visible = {read=GetVisible, write=FVisible, nodefault};
	__property bool VisibleForHitTest = {read=GetVisibleForHitTest, nodefault};
	__property int Width = {read=GetWidth, write=SetWidth, nodefault};
private:
	void *__IdxAdornerTargetElementCollection;	// Cxclasses::IdxAdornerTargetElementCollection 
	void *__IdxAdornerTargetElement;	// Cxclasses::IdxAdornerTargetElement 
	void *__IdxScaleFactor;	// Cxgeometry::IdxScaleFactor 
	void *__IdxUIElementPopupWindowOwner;	// Dxuielementpopupwindow::IdxUIElementPopupWindowOwner 
	void *__IcxMouseTrackingCaller2;	// Dxcoreclasses::IcxMouseTrackingCaller2 
	void *__IcxMouseTrackingCaller;	// Dxcoreclasses::IcxMouseTrackingCaller 
	void *__IcxMouseCaptureObject;	// Cxcontrols::IcxMouseCaptureObject 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {315F65EF-DC25-417E-8A4F-26060549DCC7}
	operator Cxclasses::_di_IdxAdornerTargetElementCollection()
	{
		Cxclasses::_di_IdxAdornerTargetElementCollection intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxclasses::IdxAdornerTargetElementCollection*(void) { return (Cxclasses::IdxAdornerTargetElementCollection*)&__IdxAdornerTargetElementCollection; }
	#endif
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
	// {ACF62D23-6871-4735-A4CE-3B0888DB8FC3}
	operator Dxuielementpopupwindow::_di_IdxUIElementPopupWindowOwner()
	{
		Dxuielementpopupwindow::_di_IdxUIElementPopupWindowOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxuielementpopupwindow::IdxUIElementPopupWindowOwner*(void) { return (Dxuielementpopupwindow::IdxUIElementPopupWindowOwner*)&__IdxUIElementPopupWindowOwner; }
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
	// {ACB73657-6066-4564-9A3D-D4D0273AA82F}
	operator Cxcontrols::_di_IcxMouseCaptureObject()
	{
		Cxcontrols::_di_IcxMouseCaptureObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxcontrols::IcxMouseCaptureObject*(void) { return (Cxcontrols::IcxMouseCaptureObject*)&__IcxMouseCaptureObject; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridViewCellViewInfo : public TcxCustomGridCellViewInfo
{
	typedef TcxCustomGridCellViewInfo inherited;
	
private:
	TcxCustomGridViewInfo* FGridViewInfo;
	TcxCustomGridController* __fastcall GetController();
	TcxCustomGridView* __fastcall GetGridView();
	Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetLookAndFeelPainter();
	
protected:
	virtual Vcl::Controls::TWinControl* __fastcall GetAdornerTargetElementControl();
	virtual System::Types::TRect __fastcall GetAdornerTargetElementBounds();
	virtual void __fastcall AfterCalculateBounds(System::Types::TRect &ABounds);
	virtual bool __fastcall AllowRightToLeftConversionOnRecalculate();
	virtual void __fastcall DoInvalidate();
	virtual bool __fastcall EmulateMouseMoveAfterCalculate();
	virtual Cxgeometry::TdxScaleFactor* __fastcall GetActualScaleFactor();
	virtual Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	virtual Cxcontrols::TcxControl* __fastcall GetControl();
	virtual bool __fastcall HasMouse(TcxCustomGridHitTest* AHitTest);
	virtual void __fastcall InitHitTest(TcxCustomGridHitTest* AHitTest);
	virtual void __fastcall InitDropDownWindow(Dxuielementpopupwindow::TdxUIElementPopupWindow* APopup);
	virtual bool __fastcall IsHintAtMousePos();
	virtual bool __fastcall UseHintHidePause();
	virtual bool __fastcall HasHintPoint(const System::Types::TPoint &P);
	virtual bool __fastcall CanShowHint();
	void __fastcall CheckHint(TcxCustomGridHitTest* AHitTest);
	virtual System::Types::TRect __fastcall GetAreaBoundsForHint();
	System::Types::TRect __fastcall GetBoundsForHint();
	virtual System::Types::TRect __fastcall GetCellBoundsForHint();
	virtual System::UnicodeString __fastcall GetHintText();
	virtual System::Types::TRect __fastcall GetHintTextRect(const System::Types::TPoint &AMousePos);
	virtual void __fastcall InitHint(const System::Types::TPoint &AMousePos, /* out */ Vcl::Controls::TCaption &AHintText, /* out */ bool &AIsHintMultiLine, /* out */ System::Types::TRect &ATextRect);
	virtual bool __fastcall IsHintForText();
	virtual bool __fastcall IsHintMultiLine();
	virtual bool __fastcall NeedShowHint(const System::Types::TPoint &AMousePos, /* out */ Vcl::Controls::TCaption &AHintText, /* out */ bool &AIsHintMultiLine, /* out */ System::Types::TRect &ATextRect);
	__property TcxCustomGridController* Controller = {read=GetController};
	
public:
	__fastcall virtual TcxCustomGridViewCellViewInfo(TcxCustomGridViewInfo* AGridViewInfo);
	__fastcall virtual ~TcxCustomGridViewCellViewInfo();
	virtual void __fastcall BeforeRecalculation();
	virtual void __fastcall Invalidate();
	virtual bool __fastcall MouseMove(TcxCustomGridHitTest* AHitTest, System::Classes::TShiftState AShift);
	__property TcxCustomGridView* GridView = {read=GetGridView};
	__property TcxCustomGridViewInfo* GridViewInfo = {read=FGridViewInfo};
	__property System::UnicodeString HintText = {read=GetHintText};
	__property Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* LookAndFeelPainter = {read=GetLookAndFeelPainter};
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

typedef System::TMetaClass* TcxGridDesignSelectorViewInfoClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridDesignSelectorViewInfo : public TcxCustomGridViewCellViewInfo
{
	typedef TcxCustomGridViewCellViewInfo inherited;
	
private:
	Cxgraphics::TcxRegion* FRegion;
	
protected:
	virtual int __fastcall CalculateHeight();
	virtual int __fastcall CalculateWidth();
	virtual TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual bool __fastcall GetHotTrack();
	virtual TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	virtual void __fastcall GetViewParams(Cxgraphics::TcxViewParams &AParams);
	void __fastcall CreateRegion();
	void __fastcall DestroyRegion();
	__property Cxgraphics::TcxRegion* Region = {read=FRegion};
	
public:
	__fastcall virtual ~TcxGridDesignSelectorViewInfo();
	virtual void __fastcall Calculate(int ALeftBound, int ATopBound, int AWidth = 0xffffffff, int AHeight = 0xffffffff)/* overload */;
	virtual bool __fastcall HasPoint(const System::Types::TPoint &P);
	virtual bool __fastcall MouseDown(TcxCustomGridHitTest* AHitTest, System::Uitypes::TMouseButton AButton, System::Classes::TShiftState AShift);
public:
	/* TcxCustomGridViewCellViewInfo.Create */ inline __fastcall virtual TcxGridDesignSelectorViewInfo(TcxCustomGridViewInfo* AGridViewInfo) : TcxCustomGridViewCellViewInfo(AGridViewInfo) { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Calculate(const System::Types::TRect &ABounds){ TcxCustomGridCellViewInfo::Calculate(ABounds); }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomGridViewInfoClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridViewInfo : public TcxGridViewHandler
{
	typedef TcxGridViewHandler inherited;
	
private:
	bool FAllowCheckCoordinates;
	bool FAllowHideSite;
	System::Types::TRect FBounds;
	System::Types::TRect FClientBounds;
	bool FClientBoundsAssigned;
	TcxGridDesignSelectorViewInfo* FDesignSelectorViewInfo;
	bool FIsCalculating;
	bool FIsInternalUse;
	bool FIsRightToLeftConverted;
	_RTL_CRITICAL_SECTION FLock;
	System::Types::TPoint FMousePos;
	TcxGridSite* FSite;
	bool FSizeCalculating;
	bool FVisibilityChanging;
	bool __fastcall GetCalculated();
	Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	System::Types::TRect __fastcall GetClientBounds();
	int __fastcall GetClientHeight();
	int __fastcall GetClientWidth();
	bool __fastcall GetIsInternalUseValue();
	void __fastcall SetClientBounds(const System::Types::TRect &Value);
	
protected:
	virtual void __fastcall CreateViewInfos();
	virtual void __fastcall DestroyViewInfos(bool AIsRecreating);
	virtual void __fastcall RecreateViewInfos();
	virtual TcxGridDesignSelectorViewInfoClass __fastcall GetDesignSelectorViewInfoClass();
	virtual bool __fastcall CanHideSite();
	void __fastcall CreateSite();
	void __fastcall DestroySite();
	virtual TcxGridSiteClass __fastcall GetSiteClass();
	Vcl::Controls::TWinControl* __fastcall GetSiteParent();
	void __fastcall AddScrollBarHeight(int &AHeight);
	virtual void __fastcall AdjustClientBounds(System::Types::TRect &ABounds);
	virtual int __fastcall GetBottomNonClientHeight();
	virtual int __fastcall GetRightNonClientWidth();
	virtual void __fastcall AfterCalculating();
	virtual void __fastcall BeforeCalculating();
	virtual void __fastcall Calculate();
	virtual System::Types::TRect __fastcall CalculateClientBounds();
	virtual void __fastcall CalculateHeight(const System::Types::TPoint &AMaxSize, int &AHeight, bool &AFullyVisible);
	virtual void __fastcall CalculateWidth(const System::Types::TPoint &AMaxSize, int &AWidth);
	virtual bool __fastcall CanCheckCoordinates();
	virtual bool __fastcall CanHandleDesignHitTest(int X, int Y, System::Classes::TShiftState Shift);
	virtual void __fastcall ControlFocusChanged();
	virtual TcxCustomGridHitTest* __fastcall DoGetHitTest(const System::Types::TPoint &P);
	virtual bool __fastcall GetAllowBoundsChangedNotification();
	virtual Vcl::Graphics::TBitmap* __fastcall GetBackgroundBitmap();
	virtual System::Uitypes::TColor __fastcall GetBackgroundColor();
	virtual System::Types::TRect __fastcall GetContentBounds();
	virtual System::Types::TPoint __fastcall GetDesignSelectorPos();
	virtual void __fastcall GetHScrollBarBounds(System::Types::TRect &ABounds);
	virtual bool __fastcall GetIsInternalUse();
	virtual bool __fastcall GetVisible();
	virtual void __fastcall InitHitTest(TcxCustomGridHitTest* AHitTest);
	virtual bool __fastcall IsDoubleBufferedNeeded();
	virtual bool __fastcall SiteCanBeClipped();
	void __fastcall UpdateMousePos();
	virtual void __fastcall VisibilityChanged(bool AVisible);
	Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	virtual void __fastcall GetVScrollBarBounds(System::Types::TRect &ABounds);
	__property bool AllowBoundsChangedNotification = {read=GetAllowBoundsChangedNotification, nodefault};
	__property bool AllowCheckCoordinates = {read=FAllowCheckCoordinates, write=FAllowCheckCoordinates, nodefault};
	__property bool ClientBoundsAssigned = {read=FClientBoundsAssigned, write=FClientBoundsAssigned, nodefault};
	__property bool SizeCalculating = {read=FSizeCalculating, nodefault};
	__property bool VisibilityChanging = {read=FVisibilityChanging, nodefault};
	__property bool Visible = {read=GetVisible, nodefault};
	
public:
	__fastcall virtual TcxCustomGridViewInfo(TcxCustomGridView* AGridView);
	__fastcall virtual ~TcxCustomGridViewInfo();
	virtual void __fastcall BeforeDestruction();
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	void __fastcall DoVisibilityChanged(bool AVisible);
	int __fastcall GetFontHeight(Vcl::Graphics::TFont* AFont);
	void __fastcall GetFontMetrics(Vcl::Graphics::TFont* AFont, /* out */ tagTEXTMETRICW &AMetrics);
	void __fastcall GetHeight(const System::Types::TPoint &AMaxSize, int &AHeight, bool &AFullyVisible);
	virtual TcxCustomGridHitTest* __fastcall GetHitTest(const System::Types::TPoint &P)/* overload */;
	virtual TcxCustomGridHitTest* __fastcall GetHitTest(int X, int Y)/* overload */;
	void __fastcall GetWidth(const System::Types::TPoint &AMaxSize, int &AWidth);
	void __fastcall MainCalculate(const System::Types::TRect &ABounds);
	void __fastcall Recalculate();
	void __fastcall RightToLeftConversion(const System::Types::TRect &ABounds);
	__property bool AllowHideSite = {read=FAllowHideSite, write=FAllowHideSite, nodefault};
	__property System::Uitypes::TColor BackgroundColor = {read=GetBackgroundColor, nodefault};
	__property Vcl::Graphics::TBitmap* BackgroundBitmap = {read=GetBackgroundBitmap};
	__property System::Types::TRect Bounds = {read=FBounds};
	__property bool Calculated = {read=GetCalculated, nodefault};
	__property Cxgraphics::TcxCanvas* Canvas = {read=GetCanvas};
	__property System::Types::TRect ClientBounds = {read=GetClientBounds, write=SetClientBounds};
	__property int ClientHeight = {read=GetClientHeight, nodefault};
	__property int ClientWidth = {read=GetClientWidth, nodefault};
	__property TcxGridDesignSelectorViewInfo* DesignSelectorViewInfo = {read=FDesignSelectorViewInfo};
	__property bool IsCalculating = {read=FIsCalculating, nodefault};
	__property bool IsInternalUse = {read=GetIsInternalUseValue, write=FIsInternalUse, nodefault};
	__property bool IsRightToLeftConverted = {read=FIsRightToLeftConverted, write=FIsRightToLeftConverted, nodefault};
	__property System::Types::TPoint MousePos = {read=FMousePos};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=GetScaleFactor};
	__property TcxGridSite* Site = {read=FSite};
private:
	void *__IdxScaleFactor;	// Cxgeometry::IdxScaleFactor 
	
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
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomGridViewInfoCacheItemClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridViewInfoCacheItem : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FIndex;
	TcxCustomGridViewInfoCache* FOwner;
	
protected:
	__property int Index = {read=FIndex, nodefault};
	__property TcxCustomGridViewInfoCache* Owner = {read=FOwner};
	
public:
	__fastcall virtual TcxCustomGridViewInfoCacheItem(TcxCustomGridViewInfoCache* AOwner, int AIndex);
	virtual void __fastcall UnassignValues(bool AKeepMaster);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomGridViewInfoCacheItem() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomGridViewInfoCacheClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridViewInfoCache : public TcxGridViewHandler
{
	typedef TcxGridViewHandler inherited;
	
public:
	TcxCustomGridViewInfoCacheItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	Dxcoreclasses::TdxFastList* FItems;
	bool FUnassigningValues;
	int __fastcall GetCount();
	TcxCustomGridViewInfoCacheItem* __fastcall GetInternalItem(int Index);
	TcxCustomGridViewInfoCacheItem* __fastcall GetItem(int Index);
	void __fastcall SetCount(int Value);
	
protected:
	virtual TcxCustomGridViewInfoCacheItemClass __fastcall GetItemClass(int Index) = 0 ;
	__property TcxCustomGridViewInfoCacheItem* InternalItems[int Index] = {read=GetInternalItem};
	
public:
	__fastcall virtual TcxCustomGridViewInfoCache(TcxCustomGridView* AGridView);
	__fastcall virtual ~TcxCustomGridViewInfoCache();
	void __fastcall Reset();
	virtual void __fastcall UnassignValues(bool AKeepMaster = false);
	__property int Count = {read=GetCount, write=SetCount, nodefault};
	__property TcxCustomGridViewInfoCacheItem* Items[int Index] = {read=GetItem/*, default*/};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TcxGridViewChangeKind : unsigned char { vcProperty, vcLayout, vcSize };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridOptions : public Dxcoreclasses::TcxInterfacedPersistent
{
	typedef Dxcoreclasses::TcxInterfacedPersistent inherited;
	
private:
	TcxCustomGridView* FGridView;
	Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetLookAndFeelPainter();
	
protected:
	virtual void __fastcall Changed(TcxGridViewChangeKind AChangeKind);
	virtual void __fastcall ChangeScale(int M, int D);
	virtual TcxCustomGridView* __fastcall GetGridViewValue();
	bool __fastcall IsLoading();
	virtual void __fastcall GetStoredProperties(System::Classes::TStrings* AProperties);
	virtual void __fastcall GetStoredPropertyValue(const System::UnicodeString AName, System::Variant &AValue);
	virtual void __fastcall SetStoredPropertyValue(const System::UnicodeString AName, const System::Variant &AValue);
	__property Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* LookAndFeelPainter = {read=GetLookAndFeelPainter};
	
public:
	__fastcall virtual TcxCustomGridOptions(TcxCustomGridView* AGridView);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property TcxCustomGridView* GridView = {read=GetGridViewValue};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxCustomGridOptions() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomGridBackgroundBitmapsClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridBackgroundBitmaps : public TcxCustomGridOptions
{
	typedef TcxCustomGridOptions inherited;
	
public:
	Vcl::Graphics::TBitmap* operator[](int Index) { return this->Values[Index]; }
	
private:
	Dxcoreclasses::TdxFastList* FItems;
	int __fastcall GetCount();
	void __fastcall BitmapChanged(System::TObject* Sender);
	
protected:
	virtual int __fastcall GetBitmapStyleIndex(int Index);
	virtual Vcl::Graphics::TBitmap* __fastcall GetDefaultBitmap(int Index);
	Vcl::Graphics::TBitmap* __fastcall GetValue(int Index);
	void __fastcall SetValue(int Index, Vcl::Graphics::TBitmap* Value);
	__property int Count = {read=GetCount, nodefault};
	
public:
	__fastcall virtual TcxCustomGridBackgroundBitmaps(TcxCustomGridView* AGridView);
	__fastcall virtual ~TcxCustomGridBackgroundBitmaps();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual Vcl::Graphics::TBitmap* __fastcall GetBitmap(int Index);
	__property Vcl::Graphics::TBitmap* Values[int Index] = {read=GetValue, write=SetValue/*, default*/};
	
__published:
	__property Vcl::Graphics::TBitmap* Background = {read=GetValue, write=SetValue, index=0};
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomGridShowLockedStateImageOptionsClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridShowLockedStateImageOptions : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
public:
	__fastcall virtual TcxCustomGridShowLockedStateImageOptions();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxCustomGridShowLockedStateImageOptions() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomGridOptionsBehaviorClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridOptionsBehavior : public TcxCustomGridOptions
{
	typedef TcxCustomGridOptions inherited;
	
private:
	int FHintHidePause;
	TcxCustomGridShowLockedStateImageOptions* FShowLockedStateImageOptions;
	bool FPostponedSynchronization;
	bool FShowHourglassCursor;
	bool FSuppressHintOnMouseDown;
	bool __fastcall GetPostponedSynchronization();
	void __fastcall SetShowLockedStateImageOptions(TcxCustomGridShowLockedStateImageOptions* Value);
	
protected:
	virtual TcxCustomGridShowLockedStateImageOptionsClass __fastcall GetShowLockedStateImageOptionsClass();
	__property int HintHidePause = {read=FHintHidePause, write=FHintHidePause, default=0};
	__property bool ShowHourglassCursor = {read=FShowHourglassCursor, write=FShowHourglassCursor, default=1};
	__property TcxCustomGridShowLockedStateImageOptions* ShowLockedStateImageOptions = {read=FShowLockedStateImageOptions, write=SetShowLockedStateImageOptions};
	__property bool SuppressHintOnMouseDown = {read=FSuppressHintOnMouseDown, write=FSuppressHintOnMouseDown, default=1};
	
public:
	__fastcall virtual TcxCustomGridOptionsBehavior(TcxCustomGridView* AGridView);
	__fastcall virtual ~TcxCustomGridOptionsBehavior();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property bool PostponedSynchronization = {read=GetPostponedSynchronization, write=FPostponedSynchronization, default=1};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridOptionsData : public TcxCustomGridOptions
{
	typedef TcxCustomGridOptions inherited;
	
public:
	/* TcxCustomGridOptions.Create */ inline __fastcall virtual TcxCustomGridOptionsData(TcxCustomGridView* AGridView) : TcxCustomGridOptions(AGridView) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxCustomGridOptionsData() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomGridOptionsDataClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridOptionsSelection : public TcxCustomGridOptions
{
	typedef TcxCustomGridOptions inherited;
	
public:
	/* TcxCustomGridOptions.Create */ inline __fastcall virtual TcxCustomGridOptionsSelection(TcxCustomGridView* AGridView) : TcxCustomGridOptions(AGridView) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxCustomGridOptionsSelection() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomGridOptionsSelectionClass;

typedef System::TMetaClass* TcxCustomGridOptionsViewClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridOptionsView : public TcxCustomGridOptions
{
	typedef TcxCustomGridOptions inherited;
	
private:
	System::Uitypes::TScrollStyle __fastcall GetScrollBars();
	void __fastcall SetScrollBars(System::Uitypes::TScrollStyle Value);
	
protected:
	__property System::Uitypes::TScrollStyle ScrollBars = {read=GetScrollBars, write=SetScrollBars, default=3};
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
public:
	/* TcxCustomGridOptions.Create */ inline __fastcall virtual TcxCustomGridOptionsView(TcxCustomGridView* AGridView) : TcxCustomGridOptions(AGridView) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxCustomGridOptionsView() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridStyles : public Cxstyles::TcxStyles
{
	typedef Cxstyles::TcxStyles inherited;
	
private:
	TcxCustomGridView* FGridView;
	Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* FLookAndFeelPainter;
	
protected:
	virtual void __fastcall Changed(int AIndex);
	virtual void __fastcall GetDefaultViewParams(int Index, System::TObject* AData, /* out */ Cxgraphics::TcxViewParams &AParams);
	virtual void __fastcall GetFakeComponentLinks(System::Classes::TList* AList);
	virtual TcxCustomGridView* __fastcall GetGridView() = 0 ;
	virtual void __fastcall RefreshCache();
	__property Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* LookAndFeelPainter = {read=FLookAndFeelPainter};
	
public:
	virtual void __fastcall AfterConstruction();
	__property TcxCustomGridView* GridView = {read=FGridView};
public:
	/* TcxStyles.Destroy */ inline __fastcall virtual ~TcxCustomGridStyles() { }
	
public:
	/* TcxCustomStyles.Create */ inline __fastcall virtual TcxCustomGridStyles(System::Classes::TPersistent* AOwner) : Cxstyles::TcxStyles(AOwner) { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomGridViewStylesClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridViewStyles : public TcxCustomGridStyles
{
	typedef TcxCustomGridStyles inherited;
	
protected:
	virtual void __fastcall GetDefaultViewParams(int Index, System::TObject* AData, /* out */ Cxgraphics::TcxViewParams &AParams);
	virtual TcxCustomGridView* __fastcall GetGridView();
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property Cxstyles::TcxStyle* Background = {read=GetValue, write=SetValue, index=0};
public:
	/* TcxStyles.Destroy */ inline __fastcall virtual ~TcxCustomGridViewStyles() { }
	
public:
	/* TcxCustomStyles.Create */ inline __fastcall virtual TcxCustomGridViewStyles(System::Classes::TPersistent* AOwner) : TcxCustomGridStyles(AOwner) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridViewNotificationList : public Dxcoreclasses::TdxFastObjectList
{
	typedef Dxcoreclasses::TdxFastObjectList inherited;
	
public:
	Cxcustomdata::TcxUpdateControlInfo* operator[](int Index) { return this->Items[Index]; }
	
private:
	TcxCustomGridView* FGridView;
	HIDESBASE Cxcustomdata::TcxUpdateControlInfo* __fastcall GetItem(int Index);
	
public:
	__fastcall TcxGridViewNotificationList(TcxCustomGridView* AGridView);
	HIDESBASE void __fastcall Add(Cxcustomdata::TcxUpdateControlInfo* AInfo);
	__property Cxcustomdata::TcxUpdateControlInfo* Items[int Index] = {read=GetItem/*, default*/};
public:
	/* TdxFastList.Destroy */ inline __fastcall virtual ~TcxGridViewNotificationList() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TcxGridStorageOption : unsigned char { gsoUseFilter, gsoUseSummary };

typedef System::Set<TcxGridStorageOption, TcxGridStorageOption::gsoUseFilter, TcxGridStorageOption::gsoUseSummary> TcxGridStorageOptions;

enum DECLSPEC_DENUM TcxGridViewChangeNotificationKind : unsigned char { vcnName };

typedef void __fastcall (__closure *TcxGridInitStoredObjectEvent)(TcxCustomGridView* Sender, System::TObject* AObject);

typedef void __fastcall (__closure *TcxGridViewGetStoredPropertiesEvent)(TcxCustomGridView* Sender, System::Classes::TStrings* AProperties);

typedef void __fastcall (__closure *TcxGridViewGetStoredPropertyValueEvent)(TcxCustomGridView* Sender, const System::UnicodeString AName, System::Variant &AValue);

typedef void __fastcall (__closure *TcxGridViewSetStoredPropertyValueEvent)(TcxCustomGridView* Sender, const System::UnicodeString AName, const System::Variant &AValue);

typedef System::TMetaClass* TcxCustomGridViewClass;

class PASCALIMPLEMENTATION TcxCustomGridView : public Cxcontrols::TcxControlChildComponent
{
	typedef Cxcontrols::TcxControlChildComponent inherited;
	
private:
	bool FAssigningPattern;
	bool FAssigningSettings;
	TcxCustomGridBackgroundBitmaps* FBackgroundBitmaps;
	Dxcoreclasses::TdxFastList* FClones;
	TcxCustomGridController* FController;
	Vcl::Imglist::TCustomImageList* FImages;
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	bool FIsChangeNotificationForControllerNeeded;
	bool FIsCustomizationFormRefreshNeeded;
	bool FIsRestoring;
	bool FIsSynchronizing;
	System::Classes::TComponent* FLevel;
	TcxGridViewNotificationList* FNotifications;
	TcxCustomGridOptionsBehavior* FOptionsBehavior;
	TcxCustomGridOptionsData* FOptionsData;
	TcxCustomGridOptionsSelection* FOptionsSelection;
	TcxCustomGridOptionsView* FOptionsView;
	TcxCustomGridPainter* FPainter;
	TcxCustomGridView* FPatternGridView;
	System::Classes::TComponent* FRepository;
	Cxcontrols::TcxControl* FStorageControl;
	TcxGridStorageOptions FStorageOptions;
	int FStoredVersion;
	System::UnicodeString FStoringName;
	TcxCustomGridStyles* FStyles;
	bool FSynchronization;
	bool FSynchronizationAssignNeeded;
	bool FSynchronizationNeeded;
	int FUpdateLockCount;
	TcxCustomGridViewData* FViewData;
	TcxCustomGridViewInfo* FViewInfo;
	TcxCustomGridViewInfoCache* FViewInfoCache;
	System::Classes::TNotifyEvent FOnCustomization;
	TcxGridViewGetStoredPropertiesEvent FOnGetStoredProperties;
	TcxGridViewGetStoredPropertyValueEvent FOnGetStoredPropertyValue;
	TcxGridInitStoredObjectEvent FOnInitStoredObject;
	TcxGridViewSetStoredPropertyValueEvent FOnSetStoredPropertyValue;
	TcxCustomGridView* __fastcall GetClone(int Index);
	int __fastcall GetCloneCount();
	System::Uitypes::TDragMode __fastcall GetDragMode();
	bool __fastcall GetFocused();
	bool __fastcall GetIsControlFocusedValue();
	bool __fastcall GetIsDetail();
	bool __fastcall GetIsExportMode();
	bool __fastcall GetIsMaster();
	bool __fastcall GetIsPattern();
	bool __fastcall GetIsStoringNameMode();
	bool __fastcall GetIsUpdating();
	Cxlookandfeels::TcxLookAndFeel* __fastcall GetLookAndFeel();
	Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetLookAndFeelPainter();
	Cxcustomdata::TcxCustomDataController* __fastcall GetMasterDataController();
	int __fastcall GetMasterGridRecordIndex();
	TcxCustomGridView* __fastcall GetMasterGridView();
	int __fastcall GetMasterRecordIndex();
	System::Classes::TNotifyEvent __fastcall GetOnDblClick();
	Vcl::Controls::TDragDropEvent __fastcall GetOnDragDrop();
	Vcl::Controls::TDragOverEvent __fastcall GetOnDragOver();
	Vcl::Controls::TEndDragEvent __fastcall GetOnEndDrag();
	Vcl::Controls::TKeyEvent __fastcall GetOnKeyDown();
	Vcl::Controls::TKeyPressEvent __fastcall GetOnKeyPress();
	Vcl::Controls::TKeyEvent __fastcall GetOnKeyUp();
	Vcl::Controls::TMouseEvent __fastcall GetOnMouseDown();
	System::Classes::TNotifyEvent __fastcall GetOnMouseEnter();
	System::Classes::TNotifyEvent __fastcall GetOnMouseLeave();
	Vcl::Controls::TMouseMoveEvent __fastcall GetOnMouseMove();
	Vcl::Controls::TMouseEvent __fastcall GetOnMouseUp();
	Vcl::Controls::TMouseWheelEvent __fastcall GetOnMouseWheel();
	Vcl::Controls::TMouseWheelUpDownEvent __fastcall GetOnMouseWheelDown();
	Vcl::Controls::TMouseWheelUpDownEvent __fastcall GetOnMouseWheelUp();
	Vcl::Controls::TStartDragEvent __fastcall GetOnStartDrag();
	TcxCustomGridView* __fastcall GetPatternGridView();
	System::Classes::TComponent* __fastcall GetPopupMenu();
	TcxGridSite* __fastcall GetSite();
	bool __fastcall GetSynchronization();
	void __fastcall SetBackgroundBitmaps(TcxCustomGridBackgroundBitmaps* Value);
	void __fastcall SetDragMode(System::Uitypes::TDragMode Value);
	void __fastcall SetFocused(bool Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetIsRestoring(bool Value);
	void __fastcall SetSynchronization(bool Value);
	void __fastcall SetOnCustomization(System::Classes::TNotifyEvent Value);
	void __fastcall SetOnDblClick(System::Classes::TNotifyEvent Value);
	void __fastcall SetOnDragDrop(Vcl::Controls::TDragDropEvent Value);
	void __fastcall SetOnDragOver(Vcl::Controls::TDragOverEvent Value);
	void __fastcall SetOnEndDrag(Vcl::Controls::TEndDragEvent Value);
	void __fastcall SetOnGetStoredProperties(TcxGridViewGetStoredPropertiesEvent Value);
	void __fastcall SetOnGetStoredPropertyValue(TcxGridViewGetStoredPropertyValueEvent Value);
	void __fastcall SetOnInitStoredObject(TcxGridInitStoredObjectEvent Value);
	void __fastcall SetOnKeyDown(Vcl::Controls::TKeyEvent Value);
	void __fastcall SetOnKeyPress(Vcl::Controls::TKeyPressEvent Value);
	void __fastcall SetOnKeyUp(Vcl::Controls::TKeyEvent Value);
	void __fastcall SetOnMouseDown(Vcl::Controls::TMouseEvent Value);
	void __fastcall SetOnMouseEnter(System::Classes::TNotifyEvent Value);
	void __fastcall SetOnMouseLeave(System::Classes::TNotifyEvent Value);
	void __fastcall SetOnMouseMove(Vcl::Controls::TMouseMoveEvent Value);
	void __fastcall SetOnMouseUp(Vcl::Controls::TMouseEvent Value);
	void __fastcall SetOnMouseWheel(Vcl::Controls::TMouseWheelEvent Value);
	void __fastcall SetOnMouseWheelDown(Vcl::Controls::TMouseWheelUpDownEvent Value);
	void __fastcall SetOnMouseWheelUp(Vcl::Controls::TMouseWheelUpDownEvent Value);
	void __fastcall SetOnSetStoredPropertyValue(TcxGridViewSetStoredPropertyValueEvent Value);
	void __fastcall SetOnStartDrag(Vcl::Controls::TStartDragEvent Value);
	void __fastcall SetOptionsBehavior(TcxCustomGridOptionsBehavior* Value);
	void __fastcall SetOptionsData(TcxCustomGridOptionsData* Value);
	void __fastcall SetOptionsSelection(TcxCustomGridOptionsSelection* Value);
	void __fastcall SetOptionsView(TcxCustomGridOptionsView* Value);
	void __fastcall SetPopupMenu(System::Classes::TComponent* Value);
	void __fastcall SetStyles(TcxCustomGridStyles* Value);
	void __fastcall ClearNotifications();
	
protected:
	Cxcustomdata::TcxCustomDataController* FDataController;
	System::Classes::TNotifyEvent FSubClassEvents;
	virtual System::UnicodeString __fastcall GetObjectName();
	virtual bool __fastcall GetProperties(System::Classes::TStrings* AProperties);
	virtual void __fastcall GetPropertyValue(const System::UnicodeString AName, System::Variant &AValue);
	virtual void __fastcall SetPropertyValue(const System::UnicodeString AName, const System::Variant &AValue);
	System::TObject* __fastcall CreateChild(const System::UnicodeString AObjectName, const System::UnicodeString AClassName);
	virtual System::TObject* __fastcall CreateStoredObject(const System::UnicodeString AObjectName, const System::UnicodeString AClassName);
	virtual void __fastcall DeleteChild(const System::UnicodeString AObjectName, System::TObject* AObject);
	virtual void __fastcall GetStoredChildren(System::Classes::TStringList* AChildren);
	virtual void __fastcall InitChildComponent(System::TObject* AObject, const System::UnicodeString AObjectName);
	virtual void __fastcall AssignLayout(TcxCustomGridView* ALayoutView);
	virtual void __fastcall BeforeEditLayout(TcxCustomGridView* ALayoutView);
	virtual bool __fastcall CanEditViewLayoutAndData();
	void __fastcall DoAssignLayout(TcxCustomGridView* ALayoutView);
	virtual System::UnicodeString __fastcall GetLayoutCustomizationFormButtonCaption();
	virtual bool __fastcall HasLayoutCustomizationForm();
	virtual bool __fastcall IsLayoutChangeable();
	virtual void __fastcall RunLayoutCustomizationForm();
	virtual bool __fastcall ShowGridViewEditor();
	virtual Vcl::Controls::TWinControl* __fastcall GetAdornerTargetElementControl();
	virtual System::Types::TRect __fastcall GetAdornerTargetElementBounds();
	virtual bool __fastcall GetAdornerTargetElementVisible();
	virtual void __fastcall ChangeScale(int M, int D);
	virtual void __fastcall GetFakeComponentLinks(System::Classes::TList* AList);
	virtual bool __fastcall GetIsDestroying();
	virtual System::Uitypes::TScrollStyle __fastcall GetSystemSizeScrollBars();
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall ScaleFactorChanged(int M, int D) _FINAL_ATTRIBUTE;
	virtual void __fastcall SetControl(Cxcontrols::TcxControl* Value);
	virtual void __fastcall SetName(const System::Classes::TComponentName NewName);
	DYNAMIC void __fastcall Updated();
	DYNAMIC void __fastcall Updating();
	virtual void __fastcall CreateHandlers();
	virtual void __fastcall DestroyHandlers();
	virtual void __fastcall InitDataController();
	virtual void __fastcall CreateOptions();
	virtual void __fastcall DestroyOptions();
	void __fastcall AddClone(TcxCustomGridView* AClone);
	void __fastcall RemoveClone(TcxCustomGridView* AClone);
	void __fastcall GridBeginUpdate(TcxGridShowLockedStateImageMode AShowLockedStateImage = (TcxGridShowLockedStateImageMode)(0x0));
	void __fastcall GridCancelUpdate();
	void __fastcall GridEndUpdate();
	virtual void __fastcall AfterDestroyingLockedStateImage();
	virtual void __fastcall BeforeCreatingLockedStateImage();
	virtual void __fastcall GridBeginLockedStatePaint(TcxGridShowLockedStateImageMode AMode);
	virtual void __fastcall GridEndLockedStatePaint();
	void __fastcall Synchronize(bool ACheckUpdateLock = true)/* overload */;
	void __fastcall Synchronize(TcxCustomGridView* AView)/* overload */;
	__property bool SynchronizationAssignNeeded = {read=FSynchronizationAssignNeeded, nodefault};
	__property bool SynchronizationNeeded = {read=FSynchronizationNeeded, nodefault};
	void __fastcall AssignPattern(TcxCustomGridView* APattern);
	virtual void __fastcall BeforeAssign(TcxCustomGridView* ASource);
	virtual void __fastcall DoAssign(TcxCustomGridView* ASource);
	virtual void __fastcall DoAssignSettings(TcxCustomGridView* ASource);
	virtual void __fastcall AfterAssign(TcxCustomGridView* ASource);
	__property bool AssigningPattern = {read=FAssigningPattern, nodefault};
	__property bool AssigningSettings = {read=FAssigningSettings, nodefault};
	virtual void __fastcall BeforeRestoring();
	virtual void __fastcall AfterRestoring();
	virtual void __fastcall RestoreFrom(const System::UnicodeString AStorageName, System::Classes::TStream* AStream, Cxstorage::TcxCustomReaderClass AReaderClass, bool AChildrenCreating, bool AChildrenDeleting, TcxGridStorageOptions AOptions, const System::UnicodeString ARestoreViewName, const System::UnicodeString AOwnerName = System::UnicodeString());
	void __fastcall StoreTo(const System::UnicodeString AStorageName, System::Classes::TStream* AStream, Cxstorage::TcxCustomWriterClass AWriterClass, bool AReCreate, TcxGridStorageOptions AOptions, const System::UnicodeString ASaveViewName, const System::UnicodeString AOwnerName = System::UnicodeString());
	virtual bool __fastcall HandleSetStoredPropertyValueError(Cxstorage::TcxStorage* Sender, const System::UnicodeString AName, const System::Variant &AValue);
	__property bool IsRestoring = {read=FIsRestoring, write=SetIsRestoring, nodefault};
	void __fastcall AddNotification(Cxcustomdata::TcxUpdateControlInfo* AUpdateInfo);
	virtual bool __fastcall CanBeUsedAsDetail();
	virtual bool __fastcall CanBeUsedAsMaster();
	void __fastcall UnsupportedMasterDetailError();
	void __fastcall ValidateMasterDetailRelationship(bool AIsMaster);
	virtual void __fastcall BiDiModeChanged();
	virtual bool __fastcall CanFocus();
	virtual bool __fastcall CanGetHitTest();
	virtual bool __fastcall CanTabStop();
	virtual bool __fastcall CheckVisibility(bool APotentional);
	virtual void __fastcall Deactivate();
	virtual void __fastcall DestroyingSiteHandle();
	virtual void __fastcall DetailDataChanged(TcxCustomGridView* ADetail);
	virtual void __fastcall DetailVisibleChanged(System::Classes::TComponent* ADetailLevel, int APrevVisibleDetailCount, int AVisibleDetailCount);
	virtual void __fastcall DoChanged(TcxGridViewChangeKind AChangeKind);
	virtual void __fastcall DoRefreshStylesCache();
	virtual void __fastcall DoStylesChanged();
	virtual void __fastcall DoUnlockNotification(Cxcustomdata::TcxUpdateControlInfo* AInfo);
	virtual bool __fastcall GetChangeable();
	int __fastcall GetHorizontalScrollBarAreaHeight();
	virtual bool __fastcall GetIsControlFocused();
	virtual bool __fastcall GetIsControlLocked();
	virtual bool __fastcall GetResizeOnBoundsChange();
	virtual Dxscrollbarannotations::TdxScrollbarAnnotations* __fastcall GetScrollbarAnnotationHelper();
	virtual Cxcontrols::_di_IdxTouchScrollUIOwner __fastcall GetTouchScrollUIOwner(const System::Types::TPoint &APoint);
	int __fastcall GetVerticalScrollBarAreaWidth();
	virtual bool __fastcall GetVisible();
	virtual void __fastcall HideTouchScrollUI(bool AImmediately);
	void __fastcall ImageListChange(System::TObject* Sender);
	virtual void __fastcall Init();
	virtual bool __fastcall IsDataScrollbar(Vcl::Forms::TScrollBarKind AKind);
	virtual bool __fastcall IsDetailVisible(TcxCustomGridView* AGridView);
	virtual bool __fastcall IsRecordPixelScrolling();
	virtual void __fastcall FocusChanged(bool AFocused);
	virtual void __fastcall LoadingComplete();
	virtual void __fastcall LookAndFeelChanged();
	void __fastcall NotifyControl(TcxGridViewChangeNotificationKind AChangeKind);
	void __fastcall NotifyControllerAboutChange();
	virtual void __fastcall RestoringComplete();
	virtual void __fastcall ScrollContentByGesture(Vcl::Forms::TScrollBarKind AScrollKind, int ADelta);
	virtual void __fastcall SetLevel(System::Classes::TComponent* Value);
	virtual void __fastcall SetTabStop(bool Value);
	virtual bool __fastcall SpaceForHorizontalScrollbarNeeded();
	void __fastcall StylesChanged();
	void __fastcall UnlockNotifications();
	virtual void __fastcall UpdateControl(Cxcustomdata::TcxUpdateControlInfo* AInfo);
	virtual void __fastcall UpdateUnlocked();
	virtual bool __fastcall UseOptimalHeightWhenDetail();
	virtual TcxCustomGridControllerClass __fastcall GetControllerClass() = 0 ;
	virtual Cxcustomdata::TcxCustomDataControllerClass __fastcall GetDataControllerClass() = 0 ;
	virtual TcxCustomGridPainterClass __fastcall GetPainterClass() = 0 ;
	virtual TcxCustomGridViewDataClass __fastcall GetViewDataClass() = 0 ;
	virtual TcxCustomGridViewInfoCacheClass __fastcall GetViewInfoCacheClass();
	virtual TcxCustomGridViewInfoClass __fastcall GetViewInfoClass() = 0 ;
	virtual TcxCustomGridBackgroundBitmapsClass __fastcall GetBackgroundBitmapsClass();
	virtual TcxCustomGridOptionsBehaviorClass __fastcall GetOptionsBehaviorClass();
	virtual TcxCustomGridOptionsDataClass __fastcall GetOptionsDataClass();
	virtual TcxCustomGridOptionsSelectionClass __fastcall GetOptionsSelectionClass();
	virtual TcxCustomGridOptionsViewClass __fastcall GetOptionsViewClass();
	virtual TcxCustomGridViewStylesClass __fastcall GetStylesClass();
	virtual void __fastcall Initialize();
	void __fastcall RefreshCustomizationForm();
	virtual void __fastcall DoCustomization();
	virtual void __fastcall DoInitStoredObject(System::TObject* AObject);
	__property TcxCustomGridBackgroundBitmaps* BackgroundBitmaps = {read=FBackgroundBitmaps, write=SetBackgroundBitmaps};
	__property bool Changeable = {read=GetChangeable, nodefault};
	__property Vcl::Imglist::TChangeLink* ImageChangeLink = {read=FImageChangeLink};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property bool IsExportMode = {read=GetIsExportMode, nodefault};
	__property bool IsStoringNameMode = {read=GetIsStoringNameMode, nodefault};
	__property bool IsSynchronizing = {read=FIsSynchronizing, nodefault};
	__property bool IsUpdating = {read=GetIsUpdating, nodefault};
	__property TcxCustomGridOptionsBehavior* OptionsBehavior = {read=FOptionsBehavior, write=SetOptionsBehavior};
	__property TcxCustomGridOptionsData* OptionsData = {read=FOptionsData, write=SetOptionsData};
	__property TcxCustomGridOptionsSelection* OptionsSelection = {read=FOptionsSelection, write=SetOptionsSelection};
	__property TcxCustomGridOptionsView* OptionsView = {read=FOptionsView, write=SetOptionsView};
	__property bool ResizeOnBoundsChange = {read=GetResizeOnBoundsChange, nodefault};
	__property int StoredVersion = {read=FStoredVersion, nodefault};
	__property TcxCustomGridStyles* Styles = {read=FStyles, write=SetStyles};
	__property System::Classes::TNotifyEvent OnCustomization = {read=FOnCustomization, write=SetOnCustomization};
	__property TcxGridInitStoredObjectEvent OnInitStoredObject = {read=FOnInitStoredObject, write=SetOnInitStoredObject};
	
public:
	__fastcall virtual TcxCustomGridView(Cxcontrols::TcxControl* AControl);
	__fastcall virtual ~TcxCustomGridView();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall AssignSettings(TcxCustomGridView* ASource);
	Vcl::Imglist::TCustomImageList* __fastcall GetImages();
	DYNAMIC System::Classes::TComponent* __fastcall GetParentComponent();
	DYNAMIC bool __fastcall HasParent();
	bool __fastcall HasAsClone(TcxCustomGridView* AGridView);
	bool __fastcall HasAsMaster(TcxCustomGridView* AGridView);
	void __fastcall Invalidate(bool AHardUpdate = false);
	virtual void __fastcall RestoreDefaults();
	DYNAMIC void __fastcall SetParentComponent(System::Classes::TComponent* Value);
	bool __fastcall UseRightToLeftAlignment();
	void __fastcall CheckSynchronizationAssignNeeded();
	bool __fastcall IsSynchronization();
	void __fastcall BeginUpdate(TcxGridShowLockedStateImageMode AShowLockedStateImage = (TcxGridShowLockedStateImageMode)(0x0));
	void __fastcall CancelUpdate();
	virtual bool __fastcall Changed(System::TObject* AGridChange)/* overload */;
	void __fastcall EndUpdate();
	bool __fastcall IsUpdateLocked();
	void __fastcall HideHourglassCursor();
	void __fastcall ShowHourglassCursor();
	virtual TcxCustomGridHitTest* __fastcall GetHitTest(const System::Types::TPoint &P)/* overload */;
	virtual TcxCustomGridHitTest* __fastcall GetHitTest(int X, int Y)/* overload */;
	virtual void __fastcall BoundsChanged(bool AUpdateSelfOnly = false, bool AKeepMaster = false);
	virtual void __fastcall Changed(TcxGridViewChangeKind AChangeKind)/* overload */;
	void __fastcall LayoutChanged(bool AUpdateSelfOnly = true);
	virtual bool __fastcall SizeChanged(bool AUpdateSelfOnly = false, bool AKeepMaster = false);
	virtual void __fastcall ViewChanged()/* overload */;
	virtual void __fastcall ViewChanged(const System::Types::TRect &AUpdateRect)/* overload */;
	virtual void __fastcall ViewChanged(Cxgraphics::TcxRegion* ARegion)/* overload */;
	void __fastcall RestoreFromIniFile(const System::UnicodeString AStorageName, bool AChildrenCreating = true, bool AChildrenDeleting = false, TcxGridStorageOptions AOptions = (TcxGridStorageOptions() << TcxGridStorageOption::gsoUseFilter << TcxGridStorageOption::gsoUseSummary ), const System::UnicodeString ARestoreViewName = System::UnicodeString(), const System::UnicodeString AOwnerName = System::UnicodeString());
	void __fastcall RestoreFromRegistry(const System::UnicodeString AStorageName, bool AChildrenCreating = true, bool AChildrenDeleting = false, TcxGridStorageOptions AOptions = (TcxGridStorageOptions() << TcxGridStorageOption::gsoUseFilter << TcxGridStorageOption::gsoUseSummary ), const System::UnicodeString ARestoreViewName = System::UnicodeString(), const System::UnicodeString AOwnerName = System::UnicodeString());
	void __fastcall RestoreFromStream(System::Classes::TStream* AStream, bool AChildrenCreating = true, bool AChildrenDeleting = false, TcxGridStorageOptions AOptions = (TcxGridStorageOptions() << TcxGridStorageOption::gsoUseFilter << TcxGridStorageOption::gsoUseSummary ), const System::UnicodeString ARestoreViewName = System::UnicodeString(), const System::UnicodeString AOwnerName = System::UnicodeString());
	void __fastcall RestoreFromStorage(const System::UnicodeString AStorageName, Cxstorage::TcxCustomReaderClass AReaderClass, bool AChildrenCreating = true, bool AChildrenDeleting = false, TcxGridStorageOptions AOptions = (TcxGridStorageOptions() << TcxGridStorageOption::gsoUseFilter << TcxGridStorageOption::gsoUseSummary ), const System::UnicodeString ARestoreViewName = System::UnicodeString(), const System::UnicodeString AOwnerName = System::UnicodeString());
	void __fastcall StoreToIniFile(const System::UnicodeString AStorageName, bool AReCreate = true, TcxGridStorageOptions AOptions = TcxGridStorageOptions() , const System::UnicodeString ASaveViewName = System::UnicodeString(), const System::UnicodeString AOwnerName = System::UnicodeString());
	void __fastcall StoreToRegistry(const System::UnicodeString AStorageName, bool AReCreate = true, TcxGridStorageOptions AOptions = TcxGridStorageOptions() , const System::UnicodeString ASaveViewName = System::UnicodeString(), const System::UnicodeString AOwnerName = System::UnicodeString());
	void __fastcall StoreToStream(System::Classes::TStream* AStream, TcxGridStorageOptions AOptions = TcxGridStorageOptions() , const System::UnicodeString ASaveViewName = System::UnicodeString(), const System::UnicodeString AOwnerName = System::UnicodeString());
	void __fastcall StoreToStorage(const System::UnicodeString AStorageName, Cxstorage::TcxCustomWriterClass AWriterClass, bool AReCreate = true, TcxGridStorageOptions AOptions = TcxGridStorageOptions() , const System::UnicodeString ASaveViewName = System::UnicodeString(), const System::UnicodeString AOwnerName = System::UnicodeString());
	TcxCustomGridViewInfo* __fastcall CreateViewInfo();
	__property bool Focused = {read=GetFocused, write=SetFocused, nodefault};
	__property TcxGridStorageOptions StorageOptions = {read=FStorageOptions, write=FStorageOptions, nodefault};
	__property System::UnicodeString StoringName = {read=FStoringName, write=FStoringName};
	__property bool TabStop = {write=SetTabStop, nodefault};
	__property int CloneCount = {read=GetCloneCount, nodefault};
	__property TcxCustomGridView* Clones[int Index] = {read=GetClone};
	__property bool IsControlFocused = {read=GetIsControlFocusedValue, nodefault};
	__property bool IsControlLocked = {read=GetIsControlLocked, nodefault};
	__property bool IsDetail = {read=GetIsDetail, nodefault};
	__property bool IsMaster = {read=GetIsMaster, nodefault};
	__property bool IsPattern = {read=GetIsPattern, nodefault};
	__property System::Classes::TComponent* Level = {read=FLevel};
	__property Cxcustomdata::TcxCustomDataController* MasterDataController = {read=GetMasterDataController};
	__property int MasterGridRecordIndex = {read=GetMasterGridRecordIndex, nodefault};
	__property TcxCustomGridView* MasterGridView = {read=GetMasterGridView};
	__property int MasterRecordIndex = {read=GetMasterRecordIndex, nodefault};
	__property TcxCustomGridView* PatternGridView = {read=GetPatternGridView};
	__property System::Classes::TComponent* Repository = {read=FRepository, write=FRepository};
	__property TcxCustomGridController* Controller = {read=FController};
	__property Cxcustomdata::TcxCustomDataController* DataController = {read=FDataController};
	__property Cxlookandfeels::TcxLookAndFeel* LookAndFeel = {read=GetLookAndFeel};
	__property Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* LookAndFeelPainter = {read=GetLookAndFeelPainter};
	__property TcxCustomGridPainter* Painter = {read=FPainter};
	__property TcxGridSite* Site = {read=GetSite};
	__property Cxcontrols::TcxControl* StorageControl = {read=FStorageControl};
	__property TcxCustomGridViewData* ViewData = {read=FViewData};
	__property TcxCustomGridViewInfo* ViewInfo = {read=FViewInfo};
	__property TcxCustomGridViewInfoCache* ViewInfoCache = {read=FViewInfoCache};
	__property bool Visible = {read=GetVisible, nodefault};
	
__published:
	__property System::Classes::TNotifyEvent DataControllerEvents = {read=FSubClassEvents, write=FSubClassEvents};
	__property System::Uitypes::TDragMode DragMode = {read=GetDragMode, write=SetDragMode, default=0};
	__property System::Classes::TComponent* PopupMenu = {read=GetPopupMenu, write=SetPopupMenu};
	__property System::Classes::TNotifyEvent StylesEvents = {read=FSubClassEvents, write=FSubClassEvents};
	__property bool Synchronization = {read=GetSynchronization, write=SetSynchronization, default=1};
	__property System::Classes::TNotifyEvent OnDblClick = {read=GetOnDblClick, write=SetOnDblClick};
	__property Vcl::Controls::TDragDropEvent OnDragDrop = {read=GetOnDragDrop, write=SetOnDragDrop};
	__property Vcl::Controls::TDragOverEvent OnDragOver = {read=GetOnDragOver, write=SetOnDragOver};
	__property Vcl::Controls::TEndDragEvent OnEndDrag = {read=GetOnEndDrag, write=SetOnEndDrag};
	__property Vcl::Controls::TKeyEvent OnKeyDown = {read=GetOnKeyDown, write=SetOnKeyDown};
	__property Vcl::Controls::TKeyPressEvent OnKeyPress = {read=GetOnKeyPress, write=SetOnKeyPress};
	__property Vcl::Controls::TKeyEvent OnKeyUp = {read=GetOnKeyUp, write=SetOnKeyUp};
	__property Vcl::Controls::TMouseEvent OnMouseDown = {read=GetOnMouseDown, write=SetOnMouseDown};
	__property System::Classes::TNotifyEvent OnMouseEnter = {read=GetOnMouseEnter, write=SetOnMouseEnter};
	__property System::Classes::TNotifyEvent OnMouseLeave = {read=GetOnMouseLeave, write=SetOnMouseLeave};
	__property Vcl::Controls::TMouseMoveEvent OnMouseMove = {read=GetOnMouseMove, write=SetOnMouseMove};
	__property Vcl::Controls::TMouseEvent OnMouseUp = {read=GetOnMouseUp, write=SetOnMouseUp};
	__property Vcl::Controls::TMouseWheelEvent OnMouseWheel = {read=GetOnMouseWheel, write=SetOnMouseWheel};
	__property Vcl::Controls::TMouseWheelUpDownEvent OnMouseWheelDown = {read=GetOnMouseWheelDown, write=SetOnMouseWheelDown};
	__property Vcl::Controls::TMouseWheelUpDownEvent OnMouseWheelUp = {read=GetOnMouseWheelUp, write=SetOnMouseWheelUp};
	__property Vcl::Controls::TStartDragEvent OnStartDrag = {read=GetOnStartDrag, write=SetOnStartDrag};
	__property TcxGridViewGetStoredPropertiesEvent OnGetStoredProperties = {read=FOnGetStoredProperties, write=SetOnGetStoredProperties};
	__property TcxGridViewGetStoredPropertyValueEvent OnGetStoredPropertyValue = {read=FOnGetStoredPropertyValue, write=SetOnGetStoredPropertyValue};
	__property TcxGridViewSetStoredPropertyValueEvent OnSetStoredPropertyValue = {read=FOnSetStoredPropertyValue, write=SetOnSetStoredPropertyValue};
public:
	/* TcxControlChildComponent.Create */ inline __fastcall virtual TcxCustomGridView(System::Classes::TComponent* AOwner) : Cxcontrols::TcxControlChildComponent(AOwner) { }
	/* TcxControlChildComponent.CreateEx */ inline __fastcall virtual TcxCustomGridView(Cxcontrols::TcxControl* AControl, bool AAssignOwner) : Cxcontrols::TcxControlChildComponent(AControl, AAssignOwner) { }
	
private:
	void *__IdxAdornerTargetElement;	// Cxclasses::IdxAdornerTargetElement 
	void *__IcxGridViewLayoutEditorSupport;	// IcxGridViewLayoutEditorSupport 
	void *__IcxStoredParent;	// Cxstorage::IcxStoredParent 
	void *__IcxStoredObject;	// Cxstorage::IcxStoredObject 
	
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
	// {9C5EC9C0-A912-4822-BBD0-87AB45FDCC78}
	operator _di_IcxGridViewLayoutEditorSupport()
	{
		_di_IcxGridViewLayoutEditorSupport intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IcxGridViewLayoutEditorSupport*(void) { return (IcxGridViewLayoutEditorSupport*)&__IcxGridViewLayoutEditorSupport; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6AF48CD0-3A0B-4BEC-AC88-5D323432A686}
	operator Cxstorage::_di_IcxStoredParent()
	{
		Cxstorage::_di_IcxStoredParent intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxstorage::IcxStoredParent*(void) { return (Cxstorage::IcxStoredParent*)&__IcxStoredParent; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {79A05009-CAC3-47E8-B454-F6F3D91F495D}
	operator Cxstorage::_di_IcxStoredObject()
	{
		Cxstorage::_di_IcxStoredObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxstorage::IcxStoredObject*(void) { return (Cxstorage::IcxStoredObject*)&__IcxStoredObject; }
	#endif
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridViewAccess : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static void __fastcall AddClone(TcxCustomGridView* AInstance, TcxCustomGridView* AClone);
	static void __fastcall AssignPattern(TcxCustomGridView* AInstance, TcxCustomGridView* APattern);
	static bool __fastcall CanBeUsedAsDetail(TcxCustomGridView* AInstance);
	static bool __fastcall CanBeUsedAsMaster(TcxCustomGridView* AInstance);
	static bool __fastcall CanFocus(TcxCustomGridView* AInstance);
	static void __fastcall Deactivate(TcxCustomGridView* AInstance);
	static void __fastcall DetailVisibleChanged(TcxCustomGridView* AInstance, System::Classes::TComponent* ADetailLevel, int APrevVisibleDetailCount, int AVisibleDetailCount);
	static void __fastcall FocusChanged(TcxCustomGridView* AInstance, bool AFocused);
	static void __fastcall LookAndFeelChanged(TcxCustomGridView* AInstance);
	static void __fastcall SetLevel(TcxCustomGridView* AInstance, System::Classes::TComponent* Value);
	static bool __fastcall GetChangeable(TcxCustomGridView* AInstance);
	static TcxCustomGridStyles* __fastcall GetStyles(TcxCustomGridView* AInstance);
	static void __fastcall AfterDestroyingLockedStateImage(TcxCustomGridView* AInstance);
	static void __fastcall BeforeCreatingLockedStateImage(TcxCustomGridView* AInstance);
public:
	/* TObject.Create */ inline __fastcall TcxCustomGridViewAccess() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomGridViewAccess() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Byte cxGridCustomizationFormDefaultWidth = System::Byte(0xb4);
static const System::Word cxGridCustomizationFormDefaultHeight = System::Word(0x12c);
static const System::Int8 htError = System::Int8(-1);
static const System::Int8 htNone = System::Int8(0x0);
static const System::Int8 htNavigator = System::Int8(0x1);
static const System::Int8 htCustomizationForm = System::Int8(0x2);
static const System::Int8 htDesignSelector = System::Int8(0x3);
static const System::Int8 ckNone = System::Int8(0x0);
static const System::Int8 ckCustomizationForm = System::Int8(0x1);
static const System::Int8 bbCustomFirst = System::Int8(0x0);
static const System::Int8 bbBackground = System::Int8(0x0);
static const System::Int8 bbCustomLast = System::Int8(0x0);
static const System::Int8 vsCustomFirst = System::Int8(0x0);
static const System::Int8 vsBackground = System::Int8(0x0);
static const System::Int8 vsCustomLast = System::Int8(0x0);
static const System::Int8 StoringVersion = System::Int8(0x1);
extern DELPHI_PACKAGE Cxclasses::TcxRegisteredClasses* cxGridRegisteredViews;
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetViewItemUniqueName(TcxCustomGridView* AView, System::Classes::TComponent* AItem, const System::UnicodeString AItemName);
extern DELPHI_PACKAGE Cxcustomdata::TcxCustomDataController* __fastcall GetGridViewDataController(TcxCustomGridView* AView);
extern DELPHI_PACKAGE TcxCustomGridView* __fastcall GetParentGridView(Vcl::Controls::TControl* AControl);
}	/* namespace Cxgridcustomview */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXGRIDCUSTOMVIEW)
using namespace Cxgridcustomview;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxgridcustomviewHPP
