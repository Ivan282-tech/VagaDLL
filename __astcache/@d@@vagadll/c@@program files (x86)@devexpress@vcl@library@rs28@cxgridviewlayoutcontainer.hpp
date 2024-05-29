// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxGridViewLayoutContainer.pas' rev: 35.00 (Windows)

#ifndef CxgridviewlayoutcontainerHPP
#define CxgridviewlayoutcontainerHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Variants.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <System.Contnrs.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.StdCtrls.hpp>
#include <dxCore.hpp>
#include <cxClasses.hpp>
#include <cxGraphics.hpp>
#include <cxControls.hpp>
#include <cxStyles.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxGridCommon.hpp>
#include <cxGrid.hpp>
#include <dxCoreClasses.hpp>
#include <dxGDIPlusClasses.hpp>
#include <cxGridCustomView.hpp>
#include <cxGridCustomTableView.hpp>
#include <dxLayoutLookAndFeels.hpp>
#include <cxDataStorage.hpp>
#include <cxCustomData.hpp>
#include <cxEdit.hpp>
#include <dxLayoutContainer.hpp>
#include <dxLayoutSelection.hpp>
#include <dxLayoutCommon.hpp>
#include <Vcl.Forms.hpp>
#include <cxNavigator.hpp>
#include <cxLookAndFeels.hpp>
#include <System.SysUtils.hpp>
#include <cxGeometry.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxgridviewlayoutcontainer
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxLayoutViewLookAndFeelItemPadding;
class DELPHICLASS TcxLayoutLayoutViewLookAndFeelItemOptions;
class DELPHICLASS TcxGridCustomLayoutLookAndFeel;
class DELPHICLASS TcxGridCustomLayoutItemCaptionPainter;
class DELPHICLASS TcxGridCustomLayoutItemEditPainter;
class DELPHICLASS TcxGridCustomLayoutItemPainter;
class DELPHICLASS TcxGridCustomLayoutItemCaptionViewInfo;
class DELPHICLASS TcxGridCustomLayoutItemEditViewInfo;
class DELPHICLASS TcxGridCustomLayoutItemViewInfo;
class DELPHICLASS TcxGridCustomLayoutItemCaptionOptions;
class DELPHICLASS TcxGridCustomLayoutItem;
class DELPHICLASS TcxGridViewLayoutItemDataCellPainter;
class DELPHICLASS TcxGridViewLayoutItemDataCellViewInfo;
class DELPHICLASS TcxGridLayoutCustomizationController;
class DELPHICLASS TcxGridCustomLayoutController;
class DELPHICLASS TdxGridLayoutRootViewInfo;
class DELPHICLASS TcxGridLayoutContainerTabOrderHelper;
class DELPHICLASS TcxGridLayoutContainerSmartOrderHelper;
class DELPHICLASS TcxGridLayoutContainerViewInfo;
class DELPHICLASS TdxLayoutCloneGroupViewData;
class DELPHICLASS TcxGridRecordLayoutContainerViewInfo;
class DELPHICLASS TcxGridLayoutContainerCustomizationHelper;
class DELPHICLASS TcxGridCustomLayoutContainer;
//-- type declarations -------------------------------------------------------
typedef System::TMetaClass* TcxGridCustomLayoutItemClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxLayoutViewLookAndFeelItemPadding : public Dxlayoutlookandfeels::TdxLayoutLookAndFeelPadding
{
	typedef Dxlayoutlookandfeels::TdxLayoutLookAndFeelPadding inherited;
	
protected:
	virtual int __fastcall GetDefaultValue(int Index);
public:
	/* TdxCustomLayoutLookAndFeelPart.Create */ inline __fastcall virtual TcxLayoutViewLookAndFeelItemPadding(Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* ALookAndFeel) : Dxlayoutlookandfeels::TdxLayoutLookAndFeelPadding(ALookAndFeel) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxLayoutViewLookAndFeelItemPadding() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxLayoutLayoutViewLookAndFeelItemOptions : public Dxlayoutlookandfeels::TdxLayoutLookAndFeelItemOptions
{
	typedef Dxlayoutlookandfeels::TdxLayoutLookAndFeelItemOptions inherited;
	
protected:
	virtual Dxlayoutlookandfeels::TdxLayoutLookAndFeelPaddingClass __fastcall GetPaddingClass();
public:
	/* TdxLayoutLookAndFeelItemOptions.Create */ inline __fastcall virtual TcxLayoutLayoutViewLookAndFeelItemOptions(Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* ALookAndFeel) : Dxlayoutlookandfeels::TdxLayoutLookAndFeelItemOptions(ALookAndFeel) { }
	
public:
	/* TdxCustomLayoutLookAndFeelOptions.Destroy */ inline __fastcall virtual ~TcxLayoutLayoutViewLookAndFeelItemOptions() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxGridCustomLayoutLookAndFeel : public Dxlayoutlookandfeels::TdxLayoutCxLookAndFeel
{
	typedef Dxlayoutlookandfeels::TdxLayoutCxLookAndFeel inherited;
	
private:
	int FLockCount;
	Cxgridcustomtableview::TcxCustomGridTableView* FGridView;
	
protected:
	virtual void __fastcall Changed();
	virtual Dxlayoutlookandfeels::TdxLayoutLookAndFeelItemOptionsClass __fastcall GetItemOptionsClass();
	
public:
	__fastcall virtual TcxGridCustomLayoutLookAndFeel(Cxgridcustomtableview::TcxCustomGridTableView* AGridView);
	HIDESBASE void __fastcall BeginUpdate();
	HIDESBASE void __fastcall EndUpdate();
	__property Cxgridcustomtableview::TcxCustomGridTableView* GridView = {read=FGridView};
public:
	/* TdxCustomLayoutLookAndFeel.Destroy */ inline __fastcall virtual ~TcxGridCustomLayoutLookAndFeel() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridCustomLayoutItemCaptionPainter : public Dxlayoutcontainer::TdxCustomLayoutItemCaptionPainter
{
	typedef Dxlayoutcontainer::TdxCustomLayoutItemCaptionPainter inherited;
	
protected:
	virtual void __fastcall DrawBackground(Cxgraphics::TcxCanvas* ACanvas);
public:
	/* TdxCustomLayoutElementPainter.Create */ inline __fastcall virtual TcxGridCustomLayoutItemCaptionPainter(Dxlayoutcontainer::TdxCustomLayoutElementViewInfo* AViewInfo) : Dxlayoutcontainer::TdxCustomLayoutItemCaptionPainter(AViewInfo) { }
	/* TdxCustomLayoutElementPainter.Destroy */ inline __fastcall virtual ~TcxGridCustomLayoutItemCaptionPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridCustomLayoutItemEditPainter : public Dxlayoutcontainer::TdxLayoutControlItemControlPainter
{
	typedef Dxlayoutcontainer::TdxLayoutControlItemControlPainter inherited;
	
private:
	HIDESBASE TcxGridCustomLayoutItemEditViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DrawEdit(Cxgraphics::TcxCanvas* ACanvas);
	virtual Cxgridcustomtableview::TcxCustomGridTableItem* __fastcall GetGridViewItem();
	HIDESBASE virtual Cxlookandfeels::TcxLookAndFeel* __fastcall GetLookAndFeel();
	
public:
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
	__property TcxGridCustomLayoutItemEditViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TdxCustomLayoutElementPainter.Create */ inline __fastcall virtual TcxGridCustomLayoutItemEditPainter(Dxlayoutcontainer::TdxCustomLayoutElementViewInfo* AViewInfo) : Dxlayoutcontainer::TdxLayoutControlItemControlPainter(AViewInfo) { }
	/* TdxCustomLayoutElementPainter.Destroy */ inline __fastcall virtual ~TcxGridCustomLayoutItemEditPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridCustomLayoutItemPainter : public Dxlayoutcontainer::TdxLayoutControlItemPainter
{
	typedef Dxlayoutcontainer::TdxLayoutControlItemPainter inherited;
	
private:
	HIDESBASE TcxGridCustomLayoutItemViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual bool __fastcall CanPaint();
	virtual Dxlayoutcontainer::TdxCustomLayoutItemCaptionPainterClass __fastcall GetCaptionPainterClass();
	virtual Dxlayoutcontainer::TdxLayoutControlItemControlPainterClass __fastcall GetControlPainterClass();
	__property TcxGridCustomLayoutItemViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TdxCustomLayoutElementPainter.Create */ inline __fastcall virtual TcxGridCustomLayoutItemPainter(Dxlayoutcontainer::TdxCustomLayoutElementViewInfo* AViewInfo) : Dxlayoutcontainer::TdxLayoutControlItemPainter(AViewInfo) { }
	/* TdxCustomLayoutElementPainter.Destroy */ inline __fastcall virtual ~TcxGridCustomLayoutItemPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridCustomLayoutItemCaptionViewInfo : public Dxlayoutcontainer::TdxLayoutControlItemCaptionViewInfo
{
	typedef Dxlayoutcontainer::TdxLayoutControlItemCaptionViewInfo inherited;
	
private:
	HIDESBASE TcxGridCustomLayoutItemViewInfo* __fastcall GetItemViewInfo();
	
protected:
	virtual System::Types::TRect __fastcall CalculatePadding();
	virtual System::Uitypes::TColor __fastcall GetTextColor();
	__property TcxGridCustomLayoutItemViewInfo* ItemViewInfo = {read=GetItemViewInfo};
	
public:
	virtual int __fastcall CalculateHeight();
public:
	/* TdxLayoutLabeledItemCaptionViewInfo.Create */ inline __fastcall virtual TcxGridCustomLayoutItemCaptionViewInfo(Dxlayoutcontainer::TdxCustomLayoutItemViewInfo* AItemViewInfo) : Dxlayoutcontainer::TdxLayoutControlItemCaptionViewInfo(AItemViewInfo) { }
	
public:
	/* TdxCustomLayoutItemElementViewInfo.Destroy */ inline __fastcall virtual ~TcxGridCustomLayoutItemCaptionViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridCustomLayoutItemEditViewInfo : public Dxlayoutcontainer::TdxLayoutControlItemControlViewInfo
{
	typedef Dxlayoutcontainer::TdxLayoutControlItemControlViewInfo inherited;
	
private:
	int FDataHeight;
	TcxGridViewLayoutItemDataCellViewInfo* __fastcall GetDataViewInfo();
	HIDESBASE TcxGridCustomLayoutItem* __fastcall GetItem();
	HIDESBASE TcxGridCustomLayoutItemViewInfo* __fastcall GetItemViewInfo();
	Cxgridcustomtableview::TcxCustomGridTableView* __fastcall GetGridView();
	
protected:
	virtual int __fastcall GetDefaultValueHeight();
	virtual void __fastcall GetDefaultValueParams(/* out */ Cxgraphics::TcxViewParams &AParams);
	virtual Cxgridcustomtableview::TcxCustomGridRecord* __fastcall GetGridRecord();
	virtual int __fastcall GetMinValueWidth();
	virtual System::Types::TSize __fastcall GetOriginalControlSize();
	int __fastcall GetValueHeight();
	virtual bool __fastcall HasBorder();
	virtual bool __fastcall IsValueHeightDependOnData();
	__property TcxGridViewLayoutItemDataCellViewInfo* DataViewInfo = {read=GetDataViewInfo};
	__property Cxgridcustomtableview::TcxCustomGridTableView* GridView = {read=GetGridView};
	__property TcxGridCustomLayoutItemViewInfo* ItemViewInfo = {read=GetItemViewInfo};
	__property TcxGridCustomLayoutItem* Item = {read=GetItem};
	
public:
	virtual void __fastcall CalculateInternalTabOrder(int &AAvailableTabOrder);
	virtual int __fastcall CalculateMinHeight();
	virtual int __fastcall CalculateMinWidth();
public:
	/* TdxCustomLayoutItemElementViewInfo.Create */ inline __fastcall virtual TcxGridCustomLayoutItemEditViewInfo(Dxlayoutcontainer::TdxCustomLayoutItemViewInfo* AItemViewInfo) : Dxlayoutcontainer::TdxLayoutControlItemControlViewInfo(AItemViewInfo) { }
	/* TdxCustomLayoutItemElementViewInfo.Destroy */ inline __fastcall virtual ~TcxGridCustomLayoutItemEditViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridCustomLayoutItemViewInfo : public Dxlayoutcontainer::TdxLayoutControlItemViewInfo
{
	typedef Dxlayoutcontainer::TdxLayoutControlItemViewInfo inherited;
	
private:
	TcxGridViewLayoutItemDataCellViewInfo* FGridItemViewInfo;
	HIDESBASE TcxGridCustomLayoutItemEditViewInfo* __fastcall GetControlViewInfo();
	HIDESBASE TcxGridCustomLayoutItem* __fastcall GetItem();
	TcxGridViewLayoutItemDataCellViewInfo* __fastcall GetGridItemViewInfo();
	
protected:
	virtual Dxlayoutcontainer::TdxCustomLayoutItemCaptionViewInfoClass __fastcall GetCaptionViewInfoClass();
	virtual Dxlayoutcontainer::TdxLayoutControlItemControlViewInfoClass __fastcall GetControlViewInfoClass();
	virtual TcxGridViewLayoutItemDataCellViewInfo* __fastcall GetCurrentGridItemViewInfo();
	virtual Dxlayoutcontainer::TdxCustomLayoutItemPainterClass __fastcall GetPainterClass();
	
public:
	__property TcxGridCustomLayoutItemEditViewInfo* ControlViewInfo = {read=GetControlViewInfo};
	__property TcxGridViewLayoutItemDataCellViewInfo* GridItemViewInfo = {read=GetGridItemViewInfo};
	__property TcxGridCustomLayoutItem* Item = {read=GetItem};
public:
	/* TdxCustomLayoutItemViewInfo.Create */ inline __fastcall virtual TcxGridCustomLayoutItemViewInfo(Dxlayoutcontainer::TdxLayoutContainerViewInfo* AContainerViewInfo, Dxlayoutcontainer::TdxLayoutGroupViewInfo* AParentViewInfo, Dxlayoutcontainer::TdxCustomLayoutItemViewData* AViewData) : Dxlayoutcontainer::TdxLayoutControlItemViewInfo(AContainerViewInfo, AParentViewInfo, AViewData) { }
	/* TdxCustomLayoutItemViewInfo.Destroy */ inline __fastcall virtual ~TcxGridCustomLayoutItemViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridCustomLayoutItemCaptionOptions : public Dxlayoutcontainer::TdxLayoutLabeledItemCustomCaptionOptions
{
	typedef Dxlayoutcontainer::TdxLayoutLabeledItemCustomCaptionOptions inherited;
	
private:
	System::UnicodeString FGridItemCaption;
	TcxGridCustomLayoutItem* __fastcall GetItem();
	
protected:
	virtual System::UnicodeString __fastcall GetText();
	virtual bool __fastcall IsTextStored();
	virtual void __fastcall SetText(const System::UnicodeString Value);
	__property System::UnicodeString GridItemCaption = {read=FGridItemCaption, write=FGridItemCaption};
	
public:
	__property TcxGridCustomLayoutItem* Item = {read=GetItem};
public:
	/* TdxLayoutLabeledItemCustomCaptionOptions.Create */ inline __fastcall virtual TcxGridCustomLayoutItemCaptionOptions(Dxlayoutcontainer::TdxCustomLayoutItem* AItem) : Dxlayoutcontainer::TdxLayoutLabeledItemCustomCaptionOptions(AItem) { }
	
public:
	/* TdxCustomLayoutItemCaptionOptions.Destroy */ inline __fastcall virtual ~TcxGridCustomLayoutItemCaptionOptions() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxGridCustomLayoutItem : public Dxlayoutcontainer::TdxLayoutControlItem
{
	typedef Dxlayoutcontainer::TdxLayoutControlItem inherited;
	
private:
	Cxgridcustomtableview::TcxCustomGridTableItem* FGridViewItem;
	System::UnicodeString FLoadedGridViewItemName;
	HIDESBASE TcxGridCustomLayoutItemCaptionOptions* __fastcall GetCaptionOptions();
	HIDESBASE TcxGridCustomLayoutItemViewInfo* __fastcall GetViewInfo();
	HIDESBASE void __fastcall SetCaptionOptions(TcxGridCustomLayoutItemCaptionOptions* Value);
	void __fastcall SetGridViewItem(Cxgridcustomtableview::TcxCustomGridTableItem* const AValue);
	
protected:
	virtual bool __fastcall GetStoredProperties(System::Classes::TStrings* AProperties);
	virtual void __fastcall GetStoredPropertyValue(const System::UnicodeString AName, System::Variant &AValue);
	virtual void __fastcall SetStoredPropertyValue(const System::UnicodeString AName, const System::Variant &AValue);
	virtual bool __fastcall CanDelete();
	virtual void __fastcall CustomizationChanged();
	virtual System::UnicodeString __fastcall GetBaseName();
	__classmethod virtual Dxlayoutcontainer::TdxCustomLayoutItemCaptionOptionsClass __fastcall GetCaptionOptionsClass();
	virtual System::UnicodeString __fastcall GetInplaceRenameCaption();
	virtual TcxGridCustomLayoutItem* __fastcall GetObjectForSelect();
	virtual Dxlayoutcontainer::TdxCustomLayoutItemViewInfoClass __fastcall GetViewInfoClass();
	virtual bool __fastcall HasControl();
	virtual bool __fastcall IsVisibleForCustomization();
	virtual void __fastcall SetInplaceRenameCaption(const System::UnicodeString ACaption);
	virtual System::UnicodeString __fastcall CaptionToDisplayCaption(System::UnicodeString AValue);
	virtual System::UnicodeString __fastcall DisplayCaptionToCaption(System::UnicodeString AValue);
	__property System::UnicodeString LoadedGridViewItemName = {read=FLoadedGridViewItemName};
	
public:
	__fastcall virtual TcxGridCustomLayoutItem(System::Classes::TComponent* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property TcxGridCustomLayoutItemCaptionOptions* CaptionOptions = {read=GetCaptionOptions, write=SetCaptionOptions};
	__property Cxgridcustomtableview::TcxCustomGridTableItem* GridViewItem = {read=FGridViewItem, write=SetGridViewItem};
	__property TcxGridCustomLayoutItemViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TdxCustomLayoutItem.Destroy */ inline __fastcall virtual ~TcxGridCustomLayoutItem() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridViewLayoutItemDataCellPainter : public Cxgridcustomtableview::TcxGridTableDataCellPainter
{
	typedef Cxgridcustomtableview::TcxGridTableDataCellPainter inherited;
	
private:
	HIDESBASE TcxGridViewLayoutItemDataCellViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DrawBackground()/* overload */;
	virtual void __fastcall DrawBorders();
	virtual void __fastcall DrawContent();
	virtual void __fastcall DrawText();
	virtual System::Types::TRect __fastcall GetFocusRect();
	virtual void __fastcall Paint();
	__property TcxGridViewLayoutItemDataCellViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridViewLayoutItemDataCellPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : Cxgridcustomtableview::TcxGridTableDataCellPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridViewLayoutItemDataCellPainter() { }
	
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  DrawBackground(const System::Types::TRect &R){ Cxgridcustomview::TcxCustomGridCellPainter::DrawBackground(R); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridViewLayoutItemDataCellViewInfo : public Cxgridcustomtableview::TcxGridTableDataCellViewInfo
{
	typedef Cxgridcustomtableview::TcxGridTableDataCellViewInfo inherited;
	
private:
	TcxGridCustomLayoutItemViewInfo* __fastcall GetLayoutItemViewInfo();
	System::Types::TRect __fastcall GetLayoutItemViewInfoBounds();
	System::Types::TRect __fastcall GetVisibleBounds();
	
protected:
	virtual void __fastcall CalculateEditViewInfo(Cxedit::TcxCustomEditViewInfo* AEditViewInfo, const System::Types::TPoint &AMousePos);
	virtual bool __fastcall CanFocus();
	virtual void __fastcall DoCalculateParams();
	virtual Cxgridcommon::TcxGridCellState __fastcall GetActualState();
	virtual Cxlookandfeelpainters::TcxButtonState __fastcall GetButtonState();
	virtual void __fastcall GetCaptionParams(Cxgraphics::TcxViewParams &AParams);
	virtual System::Types::TRect __fastcall GetEditViewDataBounds();
	virtual System::Types::TRect __fastcall GetFocusRect();
	virtual TcxGridCustomLayoutItemViewInfo* __fastcall GetLayoutItemViewInfoInstance() = 0 ;
	virtual bool __fastcall GetMultiLine();
	virtual Cxgridcustomview::TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	virtual System::Types::TRect __fastcall GetRealEditViewDataBounds();
	virtual bool __fastcall GetTransparent();
	virtual void __fastcall GetViewParams(Cxgraphics::TcxViewParams &AParams);
	virtual bool __fastcall GetVisible();
	virtual bool __fastcall HasBackground();
	virtual bool __fastcall HasBorders();
	virtual bool __fastcall HasFocusRect();
	virtual bool __fastcall HasHotTrackBackground();
	virtual bool __fastcall HasSelectionBackground();
	virtual bool __fastcall IsValueTransparent();
	virtual void __fastcall StateChanged(Cxgridcommon::TcxGridCellState APrevState);
	__property TcxGridCustomLayoutItemViewInfo* LayoutItemViewInfo = {read=GetLayoutItemViewInfo};
	__property System::Types::TRect VisibleBounds = {read=GetVisibleBounds};
	
public:
	Cxgraphics::TcxViewParams CaptionParams;
	virtual void __fastcall Calculate(const System::Types::TRect &ABounds)/* overload */;
	virtual void __fastcall Calculate(int ALeftBound, int ATopBound, int AWidth = 0xffffffff, int AHeight = 0xffffffff)/* overload */;
	__property System::Types::TRect LayoutItemViewInfoBounds = {read=GetLayoutItemViewInfoBounds};
public:
	/* TcxGridTableDataCellViewInfo.Create */ inline __fastcall virtual TcxGridViewLayoutItemDataCellViewInfo(Cxgridcustomtableview::TcxCustomGridRecordViewInfo* ARecordViewInfo, Cxgridcustomtableview::TcxCustomGridTableItem* AItem) : Cxgridcustomtableview::TcxGridTableDataCellViewInfo(ARecordViewInfo, AItem) { }
	/* TcxGridTableDataCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridViewLayoutItemDataCellViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridLayoutCustomizationController : public Cxgridcustomview::TcxCustomGridCustomizationController
{
	typedef Cxgridcustomview::TcxCustomGridCustomizationController inherited;
	
private:
	Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	
protected:
	virtual bool __fastcall CanCustomize();
	virtual void __fastcall CheckFormBounds(System::Types::TRect &R);
	virtual void __fastcall CustomizationChanged();
	virtual void __fastcall DoCreateForm();
	virtual System::Types::TRect __fastcall GetFormBounds();
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=GetScaleFactor};
public:
	/* TcxGridViewHandler.Create */ inline __fastcall virtual TcxGridLayoutCustomizationController(Cxgridcustomview::TcxCustomGridView* AGridView) : Cxgridcustomview::TcxCustomGridCustomizationController(AGridView) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxGridLayoutCustomizationController() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxGridCustomLayoutController : public Cxgridcustomtableview::TcxCustomGridTableController
{
	typedef Cxgridcustomtableview::TcxCustomGridTableController inherited;
	
public:
	/* TcxCustomGridTableController.Create */ inline __fastcall virtual TcxGridCustomLayoutController(Cxgridcustomview::TcxCustomGridView* AGridView) : Cxgridcustomtableview::TcxCustomGridTableController(AGridView) { }
	/* TcxCustomGridTableController.Destroy */ inline __fastcall virtual ~TcxGridCustomLayoutController() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxGridLayoutRootViewInfo : public Dxlayoutcontainer::TdxLayoutRootViewInfo
{
	typedef Dxlayoutcontainer::TdxLayoutRootViewInfo inherited;
	
protected:
	virtual bool __fastcall CanDrawBackground();
public:
	/* TdxLayoutGroupViewInfo.Create */ inline __fastcall virtual TdxGridLayoutRootViewInfo(Dxlayoutcontainer::TdxLayoutContainerViewInfo* AContainerViewInfo, Dxlayoutcontainer::TdxLayoutGroupViewInfo* AParentViewInfo, Dxlayoutcontainer::TdxCustomLayoutItemViewData* AViewData) : Dxlayoutcontainer::TdxLayoutRootViewInfo(AContainerViewInfo, AParentViewInfo, AViewData) { }
	/* TdxLayoutGroupViewInfo.Destroy */ inline __fastcall virtual ~TdxGridLayoutRootViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridLayoutContainerTabOrderHelper : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TcxGridLayoutContainerViewInfo* FContainer;
	void __fastcall PopulateGroup(System::Classes::TList* AOrderList, Dxlayoutcontainer::TdxLayoutGroupViewInfo* AValue);
	void __fastcall PopulateItem(System::Classes::TList* AOrderList, Dxlayoutcontainer::TdxCustomLayoutItemViewInfo* AItem);
	
protected:
	virtual void __fastcall PopulateGridItem(System::Classes::TList* AOrderList, TcxGridCustomLayoutItemViewInfo* AItem);
	__property TcxGridLayoutContainerViewInfo* Container = {read=FContainer};
	
public:
	__fastcall virtual TcxGridLayoutContainerTabOrderHelper(TcxGridLayoutContainerViewInfo* AContainer);
	virtual void __fastcall PopulateOrder(System::Classes::TList* AOrderList);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridLayoutContainerTabOrderHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridLayoutContainerSmartOrderHelper : public TcxGridLayoutContainerTabOrderHelper
{
	typedef TcxGridLayoutContainerTabOrderHelper inherited;
	
private:
	System::Types::TRect FContainerBounds;
	Cxlookandfeelpainters::TcxNeighbor FDirection;
	Dxlayoutcontainer::TdxCustomLayoutItemViewInfo* FFocusedItem;
	System::Types::TRect FFocusedItemBounds;
	bool FStartNewCycle;
	int __fastcall CompareItems(void * AItem1, void * AItem2);
	System::Types::TRect __fastcall GetActualFocusedItemBounds();
	void __fastcall DeleteItemsNonMatchesWithDirection(System::Classes::TList* AList);
	bool __fastcall IsItemMatchedWithDirection(Dxlayoutcontainer::TdxCustomLayoutItemViewInfo* AViewInfo);
	
protected:
	virtual void __fastcall PopulateGridItem(System::Classes::TList* AOrderList, TcxGridCustomLayoutItemViewInfo* AItem);
	__property System::Types::TRect ContainerBounds = {read=FContainerBounds};
	__property Cxlookandfeelpainters::TcxNeighbor Direction = {read=FDirection, nodefault};
	__property Dxlayoutcontainer::TdxCustomLayoutItemViewInfo* FocusedItem = {read=FFocusedItem};
	__property System::Types::TRect FocusedItemBounds = {read=FFocusedItemBounds};
	__property bool StartNewCycle = {read=FStartNewCycle, nodefault};
	
public:
	__fastcall virtual TcxGridLayoutContainerSmartOrderHelper(TcxGridLayoutContainerViewInfo* AContainer);
	void __fastcall Init(Dxlayoutcontainer::TdxCustomLayoutItemViewInfo* AFocusedItem, Cxlookandfeelpainters::TcxNeighbor ADirection, bool AStartNewCycle);
	virtual void __fastcall PopulateOrder(System::Classes::TList* AOrderList);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridLayoutContainerSmartOrderHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridLayoutContainerViewInfo : public Dxlayoutcontainer::TdxLayoutContainerViewInfo
{
	typedef Dxlayoutcontainer::TdxLayoutContainerViewInfo inherited;
	
private:
	Cxgridcustomtableview::TcxCustomGridRecord* __fastcall GetGridRecord();
	Cxgridcustomtableview::TcxCustomGridRecordViewInfo* __fastcall GetRecordViewInfo();
	
protected:
	virtual bool __fastcall CanDrawRoot();
	virtual bool __fastcall CanShowGroupScrollBars();
	virtual bool __fastcall CanUseCachedInfo();
	virtual Cxgridcustomtableview::TcxCustomGridRecord* __fastcall GetGridRecordInstance();
	virtual Cxgridcustomtableview::TcxCustomGridRecordViewInfo* __fastcall GetRecordViewInfoInstance();
	virtual Dxlayoutcontainer::TdxLayoutRootViewInfoClass __fastcall GetRootViewInfoClass();
	virtual void __fastcall RecreateViewData();
	
public:
	virtual bool __fastcall CanItemValueAutoHeight();
	virtual TcxGridViewLayoutItemDataCellViewInfo* __fastcall GetGridItemViewInfo(TcxGridCustomLayoutItemViewInfo* AViewInfo);
	void __fastcall PopulateSmartOrderList(System::Classes::TList* AList, Dxlayoutcontainer::TdxCustomLayoutItemViewInfo* AFocusedItem, Cxlookandfeelpainters::TcxNeighbor ADirection, bool AStartNewCycle);
	void __fastcall PopulateTabOrderList(System::Classes::TList* AList);
	__property Cxgridcustomtableview::TcxCustomGridRecord* GridRecord = {read=GetGridRecord};
	__property Cxgridcustomtableview::TcxCustomGridRecordViewInfo* RecordViewInfo = {read=GetRecordViewInfo};
public:
	/* TdxLayoutContainerViewInfo.Create */ inline __fastcall virtual TcxGridLayoutContainerViewInfo(Dxlayoutcontainer::TdxLayoutContainer* AContainer) : Dxlayoutcontainer::TdxLayoutContainerViewInfo(AContainer) { }
	/* TdxLayoutContainerViewInfo.Destroy */ inline __fastcall virtual ~TcxGridLayoutContainerViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutCloneGroupViewData : public Dxlayoutcontainer::TdxLayoutGroupViewData
{
	typedef Dxlayoutcontainer::TdxLayoutGroupViewData inherited;
	
private:
	bool FExpanded;
	int FItemIndex;
	
protected:
	virtual void __fastcall Changed();
	virtual int __fastcall GetSize();
	virtual bool __fastcall GetExpanded();
	virtual int __fastcall GetItemIndex();
	virtual void __fastcall SetExpanded(bool Value);
	virtual void __fastcall SetItemIndex(int Value);
	virtual void __fastcall SetTabIndex(int Value);
	
public:
	virtual void __fastcall Assign(Dxlayoutcontainer::TdxCustomLayoutItemViewData* Source);
	virtual void __fastcall Calculate();
	virtual void __fastcall Load(System::Classes::TStream* AStream);
	virtual void __fastcall Save(System::Classes::TStream* AStream);
public:
	/* TdxLayoutGroupViewData.Create */ inline __fastcall virtual TdxLayoutCloneGroupViewData(Dxlayoutcontainer::TdxLayoutItemViewDataList* AOwner, Dxlayoutcontainer::TdxCustomLayoutItem* AItem) : Dxlayoutcontainer::TdxLayoutGroupViewData(AOwner, AItem) { }
	/* TdxLayoutGroupViewData.Destroy */ inline __fastcall virtual ~TdxLayoutCloneGroupViewData() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridRecordLayoutContainerViewInfo : public TcxGridLayoutContainerViewInfo
{
	typedef TcxGridLayoutContainerViewInfo inherited;
	
private:
	Cxgridcustomtableview::TcxCustomGridRecordViewInfo* FRecordViewInfo;
	
protected:
	virtual Cxgridcustomtableview::TcxCustomGridRecordViewInfo* __fastcall GetRecordViewInfoInstance();
	virtual TcxGridViewLayoutItemDataCellViewInfo* __fastcall FindGridItemViewInfo(TcxGridCustomLayoutItemViewInfo* AViewInfo) = 0 ;
	virtual Dxlayoutcontainer::TdxLayoutControlItem* __fastcall GetLayoutItem(TcxGridCustomLayoutItemViewInfo* AViewInfo);
	virtual Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeelOptions* __fastcall GetItemOptions(Dxlayoutcontainer::TdxCustomLayoutItemViewInfo* AViewInfo);
	virtual Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* __fastcall GetItemLayoutLookAndFeel(Dxlayoutcontainer::TdxCustomLayoutItemViewInfo* AViewInfo);
	virtual Dxlayoutcontainer::TdxCustomLayoutItemViewDataClass __fastcall GetViewDataClass(Dxlayoutcontainer::TdxCustomLayoutItem* AItem);
	
public:
	__fastcall virtual TcxGridRecordLayoutContainerViewInfo(Dxlayoutcontainer::TdxLayoutContainer* AContainer, Cxgridcustomtableview::TcxCustomGridRecordViewInfo* ARecordViewInfo);
	virtual TcxGridViewLayoutItemDataCellViewInfo* __fastcall GetGridItemViewInfo(TcxGridCustomLayoutItemViewInfo* AViewInfo);
public:
	/* TdxLayoutContainerViewInfo.Destroy */ inline __fastcall virtual ~TcxGridRecordLayoutContainerViewInfo() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TcxGridLayoutContainerAssignLayoutMode : unsigned char { almNone, almToParent, almFromParent };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridLayoutContainerCustomizationHelper : public Dxlayoutcontainer::TdxLayoutContainerCustomizationHelper
{
	typedef Dxlayoutcontainer::TdxLayoutContainerCustomizationHelper inherited;
	
private:
	TcxGridLayoutContainerAssignLayoutMode FAssignLayoutMode;
	Dxlayoutcontainer::TdxLayoutContainer* FPattern;
	void __fastcall AssignStructureFromPattern();
	void __fastcall AssignStructureToPattern();
	
protected:
	__property TcxGridLayoutContainerAssignLayoutMode AssignLayoutMode = {read=FAssignLayoutMode, nodefault};
	__property Dxlayoutcontainer::TdxLayoutContainer* Pattern = {read=FPattern};
	
public:
	virtual void __fastcall CopyStructure(Dxlayoutcontainer::TdxLayoutContainer* AContainer);
	void __fastcall ResetPattern();
public:
	/* TdxLayoutContainerCustomizationHelper.Create */ inline __fastcall TcxGridLayoutContainerCustomizationHelper(Dxlayoutcontainer::TdxLayoutContainer* AContainer) : Dxlayoutcontainer::TdxLayoutContainerCustomizationHelper(AContainer) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridLayoutContainerCustomizationHelper() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxGridCustomLayoutContainer : public Dxlayoutcontainer::TdxLayoutContainer
{
	typedef Dxlayoutcontainer::TdxLayoutContainer inherited;
	
private:
	TcxGridLayoutContainerCustomizationHelper* __fastcall GetCustomizationHelper();
	Cxgridcustomtableview::TcxCustomGridTableView* __fastcall GetGridView();
	
protected:
	virtual void __fastcall DoInitialize();
	virtual void __fastcall DoUpdateRootOptions();
	virtual Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	virtual Dxlayoutcontainer::TdxLayoutContainerCustomizationHelperClass __fastcall GetCustomizationHelperClass();
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetImages();
	virtual System::Classes::TComponent* __fastcall GetItemsOwner();
	virtual System::Classes::TComponent* __fastcall GetItemsParentComponent();
	virtual Cxcontrols::TcxControl* __fastcall GetItemsParentControl();
	virtual bool __fastcall IsRootStored();
	virtual void __fastcall LayoutChanged(bool ANeedPack = true);
	virtual bool __fastcall NeedStretchRecordHeight();
	virtual bool __fastcall NeedStretchRecordWidth();
	virtual void __fastcall UnregisterControlFont();
	virtual void __fastcall UnregisterFonts();
	virtual void __fastcall UnregisterSiteFont();
	void __fastcall UpdateRootOptions();
	__property TcxGridLayoutContainerCustomizationHelper* CustomizationHelper = {read=GetCustomizationHelper};
	__property Cxgridcustomtableview::TcxCustomGridTableView* GridView = {read=GetGridView};
public:
	/* TdxLayoutContainer.Create */ inline __fastcall virtual TcxGridCustomLayoutContainer(System::Classes::TComponent* AOwner) : Dxlayoutcontainer::TdxLayoutContainer(AOwner) { }
	/* TdxLayoutContainer.Destroy */ inline __fastcall virtual ~TcxGridCustomLayoutContainer() { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Word cxGridLayoutCustomizationFormDefaultWidth = System::Word(0x320);
static const System::Word cxGridLayoutCustomizationFormDefaultHeight = System::Word(0x1f4);
static const System::Int8 cxGridLayoutItemCellBorderWidth = System::Int8(0x1);
}	/* namespace Cxgridviewlayoutcontainer */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXGRIDVIEWLAYOUTCONTAINER)
using namespace Cxgridviewlayoutcontainer;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxgridviewlayoutcontainerHPP
