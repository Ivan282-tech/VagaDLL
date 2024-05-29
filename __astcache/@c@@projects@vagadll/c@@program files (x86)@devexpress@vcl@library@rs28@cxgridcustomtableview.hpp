// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxGridCustomTableView.pas' rev: 35.00 (Windows)

#ifndef CxgridcustomtableviewHPP
#define CxgridcustomtableviewHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <System.Variants.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Dialogs.hpp>
#include <Winapi.MultiMon.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Generics.Collections.hpp>
#include <cxClasses.hpp>
#include <cxGraphics.hpp>
#include <cxControls.hpp>
#include <cxLookAndFeels.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxGeometry.hpp>
#include <cxStorage.hpp>
#include <cxPC.hpp>
#include <cxFilterControl.hpp>
#include <cxNavigator.hpp>
#include <cxListBox.hpp>
#include <cxEdit.hpp>
#include <cxButtons.hpp>
#include <cxDataStorage.hpp>
#include <cxCustomData.hpp>
#include <cxData.hpp>
#include <cxFilter.hpp>
#include <cxDataUtils.hpp>
#include <cxContainer.hpp>
#include <cxCheckBox.hpp>
#include <cxCheckListBox.hpp>
#include <cxStyles.hpp>
#include <cxGridCommon.hpp>
#include <cxGridCustomView.hpp>
#include <dxCore.hpp>
#include <dxCoreClasses.hpp>
#include <dxGDIPlusClasses.hpp>
#include <dxScrollAnimation.hpp>
#include <cxMemo.hpp>
#include <cxDropDownEdit.hpp>
#include <cxMRUEdit.hpp>
#include <cxTextEdit.hpp>
#include <dxIncrementalFiltering.hpp>
#include <dxUIElementPopupWindow.hpp>
#include <cxFindPanel.hpp>
#include <cxDataControllerSpreadSheetExpressionProvider.hpp>
#include <dxSpreadSheetTypes.hpp>
#include <dxSpreadSheetStyles.hpp>
#include <dxSpreadSheetConditionalFormatting.hpp>
#include <cxDataControllerConditionalFormatting.hpp>
#include <dxFilterPopupWindow.hpp>
#include <dxFilterValueContainer.hpp>
#include <cxDateUtils.hpp>
#include <dxDateRanges.hpp>
#include <dxFilterBox.hpp>
#include <dxScrollbarAnnotations.hpp>
#include <dxCoreGraphics.hpp>
#include <dxCustomFunction.hpp>
#include <cxCustomListBox.hpp>
#include <dxForms.hpp>
#include <System.Types.hpp>
#include <cxDataControllerSpreadSheetDataProvider.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxgridcustomtableview
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxGridDataChange;
class DELPHICLASS TcxGridRecordChange;
class DELPHICLASS TcxGridFocusedRecordChange;
class DELPHICLASS TcxGridFilterHitTest;
class DELPHICLASS TcxGridFilterCloseButtonHitTest;
class DELPHICLASS TcxGridFilterActivateButtonHitTest;
class DELPHICLASS TcxGridFilterDropDownButtonHitTest;
class DELPHICLASS TcxGridFilterCustomizeButtonHitTest;
class DELPHICLASS TcxGridFindPanelHitTest;
class DELPHICLASS TcxGridFindPanelCloseButtonHitTest;
class DELPHICLASS TcxGridFindPanelFindButtonHitTest;
class DELPHICLASS TcxGridFindPanelClearButtonHitTest;
class DELPHICLASS TcxGridFindPanelNextButtonHitTest;
class DELPHICLASS TcxGridFindPanelPreviousButtonHitTest;
class DELPHICLASS TcxGridCheckBoxHitTest;
class DELPHICLASS TcxGridPinHitTest;
class DELPHICLASS TcxGridRecordHitTest;
class DELPHICLASS TcxGridRecordCellHitTest;
class DELPHICLASS TcxGridExpandButtonHitTest;
class DELPHICLASS TcxGridDataFilterCriteriaItem;
class DELPHICLASS TcxGridDataFilterCriteria;
class DELPHICLASS TcxGridDefaultValuesProvider;
__interface DELPHIINTERFACE IcxGridDataController;
typedef System::DelphiInterface<IcxGridDataController> _di_IcxGridDataController;
class DELPHICLASS TcxGridDataController;
class DELPHICLASS TcxGridHourRange;
class DELPHICLASS TcxGridDayRange;
class DELPHICLASS TcxGridMonthRange;
class DELPHICLASS TcxGridYearRange;
class DELPHICLASS TcxGridYesterdayRange;
class DELPHICLASS TcxGridTodayRange;
class DELPHICLASS TcxGridTomorrowRange;
class DELPHICLASS TcxGridLastWeekRange;
class DELPHICLASS TcxGridThisWeekRange;
class DELPHICLASS TcxGridNextWeekRange;
class DELPHICLASS TcxGridLastMonthRange;
class DELPHICLASS TcxGridThisMonthRange;
class DELPHICLASS TcxGridNextMonthRange;
class DELPHICLASS TcxGridLastYearRange;
class DELPHICLASS TcxGridThisYearRange;
class DELPHICLASS TcxGridNextYearRange;
class DELPHICLASS TcxGridFilteringDateRanges;
class DELPHICLASS TcxGridGroupingDateRanges;
class DELPHICLASS TcxGridFilterValueList;
class DELPHICLASS TcxGridItemDataBinding;
class DELPHICLASS TcxCustomGridRecord;
class DELPHICLASS TcxCustomGridTableViewData;
class DELPHICLASS TcxCustomGridTableMovingObject;
class DELPHICLASS TcxGridItemContainerZone;
class DELPHICLASS TcxCustomGridTableItemMovingObject;
class DELPHICLASS TcxCustomGridTableItemsListBox;
class DELPHICLASS TcxCustomGridTableCustomizationForm;
class DELPHICLASS TcxGridFilterPopup;
class DELPHICLASS TcxGridFilterMRUItemsPopup;
class DELPHICLASS TdxCustomGridQuickCustomizationControl;
class DELPHICLASS TcxCustomGridCustomizationPopup;
class DELPHICLASS TcxCustomGridItemsCustomizationPopup;
class DELPHICLASS TcxGridEditingController;
class DELPHICLASS TcxGridDragOpenInfoExpand;
struct TcxGridTableClickedDataCellInfo;
class DELPHICLASS TcxCustomGridTableRecordScrollAnimationHelper;
class DELPHICLASS TcxCustomGridTableController;
class DELPHICLASS TcxCustomGridPartPainter;
class DELPHICLASS TcxGridCustomButtonPainter;
class DELPHICLASS TcxGridCheckBoxPainter;
class DELPHICLASS TcxGridPinPainter;
class DELPHICLASS TcxGridPartCustomButtonPainter;
class DELPHICLASS TcxGridPartCloseButtonPainter;
class DELPHICLASS TcxGridPartButtonPainter;
class DELPHICLASS TcxGridFilterActivateButtonPainter;
class DELPHICLASS TcxGridFilterDropDownButtonPainter;
class DELPHICLASS TcxGridPartContainerPainter;
class DELPHICLASS TcxGridFilterPainter;
class DELPHICLASS TcxGridFindPanelPainter;
class DELPHICLASS TcxGridTableDataCellPainter;
class DELPHICLASS TcxCustomGridRecordPainter;
class DELPHICLASS TcxCustomGridRecordsPainter;
class DELPHICLASS TcxNavigatorSitePainter;
class DELPHICLASS TcxCustomGridTablePainter;
class DELPHICLASS TcxCustomGridPartViewInfo;
class DELPHICLASS TcxGridPartCustomCellViewInfo;
class DELPHICLASS TcxGridCustomToggleCellViewInfo;
class DELPHICLASS TcxGridCheckBoxViewInfo;
class DELPHICLASS TcxGridPinViewInfo;
class DELPHICLASS TcxGridPartContainerItemViewInfo;
class DELPHICLASS TcxGridCustomButtonViewInfo;
class DELPHICLASS TcxGridPartCloseButtonViewInfo;
class DELPHICLASS TcxGridPartButtonViewInfo;
class DELPHICLASS TcxGridFindPanelEditViewInfo;
class DELPHICLASS TcxGridFindPanelCloseButtonViewInfo;
class DELPHICLASS TcxGridFindPanelButtonViewInfo;
class DELPHICLASS TcxGridFindPanelFindButtonViewInfo;
class DELPHICLASS TcxGridFindPanelClearButtonViewInfo;
class DELPHICLASS TcxGridFindPanelNextButtonViewInfo;
class DELPHICLASS TcxGridFindPanelPreviousButtonViewInfo;
class DELPHICLASS TcxGridFilterCloseButtonViewInfo;
class DELPHICLASS TcxGridFilterActivateButtonViewInfo;
class DELPHICLASS TcxGridFilterDropDownButtonViewInfo;
class DELPHICLASS TcxGridFilterCustomizeButtonViewInfo;
class DELPHICLASS TcxGridPartContainerButtonsViewInfo;
class DELPHICLASS TcxGridFilterButtonsViewInfo;
class DELPHICLASS TcxGridFindPanelButtonsViewInfo;
class DELPHICLASS TcxGridPartContainerViewInfo;
class DELPHICLASS TcxGridFilterViewInfo;
class DELPHICLASS TcxGridFindPanelViewInfo;
class DELPHICLASS TcxGridTableCellViewInfo;
class DELPHICLASS TcxGridTableDataCellViewInfo;
class DELPHICLASS TcxCustomGridRecordViewInfo;
class DELPHICLASS TcxCustomGridRecordsViewInfo;
class DELPHICLASS TcxGridCustomTableNavigatorViewInfo;
class DELPHICLASS TcxNavigatorSiteViewInfo;
class DELPHICLASS TcxCustomGridTableViewInfo;
class DELPHICLASS TcxCustomGridTableViewInfoCacheItem;
class DELPHICLASS TcxCustomGridTableViewInfoCache;
class DELPHICLASS TcxCustomGridTableItemCustomOptions;
class DELPHICLASS TcxCustomGridTableItemOptions;
class DELPHICLASS TcxCustomGridTableItemStyles;
class DELPHICLASS TcxCustomGridTableItem;
class DELPHICLASS TcxCustomGridTableBackgroundBitmaps;
class DELPHICLASS TcxCustomGridTableDateTimeHandling;
class DELPHICLASS TcxGridFilterMRUItem;
class DELPHICLASS TcxGridFilterMRUItems;
class DELPHICLASS TcxGridFilterBoxTokenCriteriaOptions;
class DELPHICLASS TcxGridFilterBox;
class DELPHICLASS TcxGridFindPanel;
class DELPHICLASS TcxGridFindPanelOptions;
class DELPHICLASS TcxGridItemFilterPopupOptions;
class DELPHICLASS TcxGridItemExcelFilterPopupOptions;
class DELPHICLASS TcxCustomGridTableFiltering;
class DELPHICLASS TcxGridViewNavigatorButtons;
class DELPHICLASS TcxGridViewNavigatorInfoPanel;
class DELPHICLASS TcxGridViewNavigator;
class DELPHICLASS TcxCustomGridTableShowLockedStateImageOptions;
class DELPHICLASS TcxCustomGridTableOptionsBehavior;
class DELPHICLASS TcxCustomGridTableOptionsCustomize;
class DELPHICLASS TcxGridScrollbarAnnotations;
class DELPHICLASS TcxGridScrollbarAnnotationOptionsHelper;
class DELPHICLASS TcxGridScrollbarAnnotationOptions;
class DELPHICLASS TcxCustomGridTableOptionsData;
class DELPHICLASS TcxCustomGridTableOptionsSelection;
class DELPHICLASS TcxCustomGridTableOptionsView;
class DELPHICLASS TcxGridCellPos;
class DELPHICLASS TcxGridDataCellPos;
class DELPHICLASS TcxCustomGridTableViewStyles;
class DELPHICLASS TcxGridConditionalFormattingProvider;
class DELPHICLASS TcxGridDetailModeConditionalFormattingProvider;
class DELPHICLASS TcxGridOpenTableItemList;
class DELPHICLASS TcxCustomGridTableView;
class DELPHICLASS TcxCustomGridTableControllerAccess;
class DELPHICLASS TcxCustomGridTableItemAccess;
class DELPHICLASS TcxCustomGridTableOptionsBehaviorAccess;
class DELPHICLASS TcxCustomGridTableOptionsViewAccess;
class DELPHICLASS TcxCustomGridTableViewAccess;
class DELPHICLASS TcxCustomGridTableViewInfoAccess;
//-- type declarations -------------------------------------------------------
typedef Dxdateranges::TdxDateTimeFilter TcxGridDateTimeFilter;

typedef Dxdateranges::TdxDateTimeFilters TcxGridDateTimeFilters;

typedef Dxdateranges::TdxDateTimeGrouping TcxGridDateTimeGrouping;

typedef Dxfilterbox::TcxFilterBoxVisible TcxGridFilterVisible;

typedef Dxfilterbox::TcxFilterBoxPosition TcxGridFilterPosition;

typedef Cxlookandfeelpainters::TcxShowFilterButtons TcxGridShowItemFilterButtons;

typedef Cxlookandfeelpainters::TcxFilterButtonShowMode TcxGridItemFilterButtonShowMode;

typedef Dxfilterbox::TcxFilterBoxButtonAlignment TcxGridFilterButtonAlignment;

typedef Dxfiltervaluecontainer::TdxFilterApplyChangesMode TcxGridItemFilterPopupApplyChangesMode;

typedef System::TMetaClass* TcxGridItemDataBindingClass;

typedef System::TMetaClass* TcxCustomGridRecordViewInfoClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridDataChange : public Cxgridcustomview::TcxCustomGridViewChange
{
	typedef Cxgridcustomview::TcxCustomGridViewChange inherited;
	
public:
	virtual void __fastcall Execute();
	virtual bool __fastcall IsLockable();
public:
	/* TcxCustomGridViewChange.Create */ inline __fastcall virtual TcxGridDataChange(Cxgridcustomview::TcxCustomGridView* AGridView) : Cxgridcustomview::TcxCustomGridViewChange(AGridView) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridDataChange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridRecordChange : public Cxgridcustomview::TcxCustomGridViewChange
{
	typedef Cxgridcustomview::TcxCustomGridViewChange inherited;
	
private:
	TcxCustomGridTableItem* FItem;
	TcxCustomGridRecord* FRecord;
	int FRecordIndex;
	TcxCustomGridTableView* __fastcall GetGridView();
	TcxCustomGridRecordViewInfo* __fastcall GetRecordViewInfo();
	
protected:
	virtual bool __fastcall IsEqualCore(Cxgridcommon::TcxCustomGridChange* AChange);
	
public:
	__fastcall virtual TcxGridRecordChange(Cxgridcustomview::TcxCustomGridView* AGridView, TcxCustomGridRecord* ARecord, int ARecordIndex, TcxCustomGridTableItem* AItem);
	virtual void __fastcall Execute();
	virtual bool __fastcall IsCompatibleWith(Cxgridcommon::TcxCustomGridChange* AChange);
	bool __fastcall IsItemVisible();
	__property TcxCustomGridRecord* GridRecord = {read=FRecord};
	__property TcxCustomGridTableView* GridView = {read=GetGridView};
	__property TcxCustomGridTableItem* Item = {read=FItem};
	__property int RecordIndex = {read=FRecordIndex, nodefault};
	__property TcxCustomGridRecordViewInfo* RecordViewInfo = {read=GetRecordViewInfo};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridRecordChange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFocusedRecordChange : public Cxgridcustomview::TcxCustomGridViewChange
{
	typedef Cxgridcustomview::TcxCustomGridViewChange inherited;
	
private:
	int FFocusedDataRecordIndex;
	int FFocusedRecordIndex;
	bool FNewItemRecordFocusingChanged;
	int FPrevFocusedDataRecordIndex;
	int FPrevFocusedRecordIndex;
	
public:
	__fastcall virtual TcxGridFocusedRecordChange(Cxgridcustomview::TcxCustomGridView* AGridView, int APrevFocusedRecordIndex, int AFocusedRecordIndex, int APrevFocusedDataRecordIndex, int AFocusedDataRecordIndex, bool ANewItemRecordFocusingChanged);
	virtual bool __fastcall CanExecuteWhenLocked();
	virtual void __fastcall Execute();
	__property int FocusedRecordIndex = {read=FFocusedRecordIndex, nodefault};
	__property bool NewItemRecordFocusingChanged = {read=FNewItemRecordFocusingChanged, nodefault};
	__property int PrevFocusedRecordIndex = {read=FPrevFocusedRecordIndex, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridFocusedRecordChange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFilterHitTest : public Cxgridcustomview::TcxCustomGridViewHitTest
{
	typedef Cxgridcustomview::TcxCustomGridViewHitTest inherited;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridFilterHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridFilterHitTest() : Cxgridcustomview::TcxCustomGridViewHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFilterCloseButtonHitTest : public Cxgridcustomview::TcxCustomGridViewHitTest
{
	typedef Cxgridcustomview::TcxCustomGridViewHitTest inherited;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridFilterCloseButtonHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridFilterCloseButtonHitTest() : Cxgridcustomview::TcxCustomGridViewHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFilterActivateButtonHitTest : public Cxgridcustomview::TcxCustomGridViewHitTest
{
	typedef Cxgridcustomview::TcxCustomGridViewHitTest inherited;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridFilterActivateButtonHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridFilterActivateButtonHitTest() : Cxgridcustomview::TcxCustomGridViewHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFilterDropDownButtonHitTest : public Cxgridcustomview::TcxCustomGridViewHitTest
{
	typedef Cxgridcustomview::TcxCustomGridViewHitTest inherited;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridFilterDropDownButtonHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridFilterDropDownButtonHitTest() : Cxgridcustomview::TcxCustomGridViewHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFilterCustomizeButtonHitTest : public Cxgridcustomview::TcxCustomGridViewHitTest
{
	typedef Cxgridcustomview::TcxCustomGridViewHitTest inherited;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridFilterCustomizeButtonHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridFilterCustomizeButtonHitTest() : Cxgridcustomview::TcxCustomGridViewHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFindPanelHitTest : public Cxgridcustomview::TcxCustomGridViewHitTest
{
	typedef Cxgridcustomview::TcxCustomGridViewHitTest inherited;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridFindPanelHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridFindPanelHitTest() : Cxgridcustomview::TcxCustomGridViewHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFindPanelCloseButtonHitTest : public Cxgridcustomview::TcxCustomGridViewHitTest
{
	typedef Cxgridcustomview::TcxCustomGridViewHitTest inherited;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridFindPanelCloseButtonHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridFindPanelCloseButtonHitTest() : Cxgridcustomview::TcxCustomGridViewHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFindPanelFindButtonHitTest : public Cxgridcustomview::TcxCustomGridViewHitTest
{
	typedef Cxgridcustomview::TcxCustomGridViewHitTest inherited;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridFindPanelFindButtonHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridFindPanelFindButtonHitTest() : Cxgridcustomview::TcxCustomGridViewHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFindPanelClearButtonHitTest : public Cxgridcustomview::TcxCustomGridViewHitTest
{
	typedef Cxgridcustomview::TcxCustomGridViewHitTest inherited;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridFindPanelClearButtonHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridFindPanelClearButtonHitTest() : Cxgridcustomview::TcxCustomGridViewHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFindPanelNextButtonHitTest : public Cxgridcustomview::TcxCustomGridViewHitTest
{
	typedef Cxgridcustomview::TcxCustomGridViewHitTest inherited;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridFindPanelNextButtonHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridFindPanelNextButtonHitTest() : Cxgridcustomview::TcxCustomGridViewHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFindPanelPreviousButtonHitTest : public Cxgridcustomview::TcxCustomGridViewHitTest
{
	typedef Cxgridcustomview::TcxCustomGridViewHitTest inherited;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridFindPanelPreviousButtonHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridFindPanelPreviousButtonHitTest() : Cxgridcustomview::TcxCustomGridViewHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridCheckBoxHitTest : public Cxgridcustomview::TcxCustomGridViewHitTest
{
	typedef Cxgridcustomview::TcxCustomGridViewHitTest inherited;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridCheckBoxHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridCheckBoxHitTest() : Cxgridcustomview::TcxCustomGridViewHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridPinHitTest : public Cxgridcustomview::TcxCustomGridViewHitTest
{
	typedef Cxgridcustomview::TcxCustomGridViewHitTest inherited;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridPinHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridPinHitTest() : Cxgridcustomview::TcxCustomGridViewHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridRecordHitTest : public Cxgridcustomview::TcxCustomGridViewHitTest
{
	typedef Cxgridcustomview::TcxCustomGridViewHitTest inherited;
	
private:
	int FGridRecordIndex;
	int FGridRecordKind;
	TcxCustomGridTableViewData* FViewData;
	TcxCustomGridRecord* __fastcall GetGridRecord();
	void __fastcall SetGridRecord(TcxCustomGridRecord* Value);
	
protected:
	virtual void __fastcall Assign(Cxgridcustomview::TcxCustomGridHitTest* Source);
	__classmethod virtual int __fastcall GetHitTestCode();
	
public:
	__classmethod virtual bool __fastcall CanClick();
	__property TcxCustomGridRecord* GridRecord = {read=GetGridRecord, write=SetGridRecord};
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridRecordHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridRecordHitTest() : Cxgridcustomview::TcxCustomGridViewHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridRecordCellHitTest : public TcxGridRecordHitTest
{
	typedef TcxGridRecordHitTest inherited;
	
protected:
	virtual void __fastcall Assign(Cxgridcustomview::TcxCustomGridHitTest* Source);
	__classmethod virtual int __fastcall GetHitTestCode();
	
public:
	TcxCustomGridTableItem* Item;
	virtual System::Uitypes::TCursor __fastcall Cursor();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridRecordCellHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridRecordCellHitTest() : TcxGridRecordHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridExpandButtonHitTest : public TcxGridRecordHitTest
{
	typedef TcxGridRecordHitTest inherited;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
	
public:
	__classmethod virtual bool __fastcall CanClick();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridExpandButtonHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridExpandButtonHitTest() : TcxGridRecordHitTest() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxGridDataFilterCriteriaItem : public Cxcustomdata::TcxDataFilterCriteriaItem
{
	typedef Cxcustomdata::TcxDataFilterCriteriaItem inherited;
	
protected:
	virtual bool __fastcall IsItemLinkSupportsMultiThreading();
public:
	/* TcxDataFilterCriteriaItem.Destroy */ inline __fastcall virtual ~TcxGridDataFilterCriteriaItem() { }
	
public:
	/* TcxFilterCriteriaItem.Create */ inline __fastcall virtual TcxGridDataFilterCriteriaItem(Cxfilter::TcxFilterCriteriaItemList* AOwner, System::TObject* AItemLink, Cxfilter::TcxFilterOperatorKind AOperatorKind, const System::Variant &AValue, const System::UnicodeString ADisplayValue) : Cxcustomdata::TcxDataFilterCriteriaItem(AOwner, AItemLink, AOperatorKind, AValue, ADisplayValue) { }
	
};


class PASCALIMPLEMENTATION TcxGridDataFilterCriteria : public Cxcustomdata::TcxDataFilterCriteria
{
	typedef Cxcustomdata::TcxDataFilterCriteria inherited;
	
protected:
	virtual Cxfilter::TcxFilterCriteriaItemClass __fastcall GetItemClass();
public:
	/* TcxDataFilterCriteria.Create */ inline __fastcall virtual TcxGridDataFilterCriteria(Cxcustomdata::TcxCustomDataController* ADataController) : Cxcustomdata::TcxDataFilterCriteria(ADataController) { }
	/* TcxDataFilterCriteria.Destroy */ inline __fastcall virtual ~TcxGridDataFilterCriteria() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridDefaultValuesProvider : public Cxedit::TcxCustomEditDefaultValuesProvider
{
	typedef Cxedit::TcxCustomEditDefaultValuesProvider inherited;
	
public:
	virtual bool __fastcall IsDisplayFormatDefined(bool AIsCurrencyValueAccepted);
public:
	/* TcxCustomEditDefaultValuesProvider.Destroy */ inline __fastcall virtual ~TcxGridDefaultValuesProvider() { }
	
public:
	/* TcxInterfacedPersistent.Create */ inline __fastcall virtual TcxGridDefaultValuesProvider(System::Classes::TPersistent* AOwner) : Cxedit::TcxCustomEditDefaultValuesProvider(AOwner) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{FEEE7E69-BD54-4B5D-BA0B-B6116B69C0CC}") IcxGridDataController  : public System::IInterface 
{
	virtual void __fastcall CheckGridModeBufferCount() = 0 ;
	virtual bool __fastcall DoScroll(bool AForward) = 0 ;
	virtual bool __fastcall DoScrollPage(bool AForward) = 0 ;
	virtual TcxGridItemDataBindingClass __fastcall GetItemDataBindingClass() = 0 ;
	virtual Cxedit::TcxCustomEditDefaultValuesProviderClass __fastcall GetItemDefaultValuesProviderClass() = 0 ;
	virtual bool __fastcall GetNavigatorIsBof() = 0 ;
	virtual bool __fastcall GetNavigatorIsEof() = 0 ;
	virtual int __fastcall GetScrollBarPos() = 0 ;
	virtual int __fastcall GetScrollBarRecordCount() = 0 ;
	virtual bool __fastcall SetScrollBarPos(int Value) = 0 ;
};

class PASCALIMPLEMENTATION TcxGridDataController : public Cxdata::TcxDataController
{
	typedef Cxdata::TcxDataController inherited;
	
private:
	TcxCustomGridTableView* FGridView;
	System::Classes::TMemoryStream* FLoadedData;
	void __fastcall ReadData(System::Classes::TStream* Stream);
	void __fastcall WriteData(System::Classes::TStream* Stream);
	
protected:
	void __fastcall AssignData(Cxcustomdata::TcxCustomDataController* ADataController);
	void __fastcall CreateAllItems(bool AMissingItemsOnly);
	void __fastcall DeleteAllItems();
	void __fastcall GetFakeComponentLinks(System::Classes::TList* AList);
	Cxgridcustomview::TcxCustomGridView* __fastcall GetGridView();
	bool __fastcall HasAllItems();
	bool __fastcall IsDataChangeable();
	bool __fastcall IsDataLinked();
	bool __fastcall SupportsCreateAllItems();
	void __fastcall CheckGridModeBufferCount();
	bool __fastcall DoScroll(bool AForward);
	bool __fastcall DoScrollPage(bool AForward);
	TcxGridItemDataBindingClass __fastcall GetItemDataBindingClass();
	Cxedit::TcxCustomEditDefaultValuesProviderClass __fastcall GetItemDefaultValuesProviderClass();
	bool __fastcall GetNavigatorIsBof();
	bool __fastcall GetNavigatorIsEof();
	int __fastcall GetScrollBarPos();
	int __fastcall GetScrollBarRecordCount();
	bool __fastcall SetScrollBarPos(int Value);
	virtual bool __fastcall CanSelectRow(int ARowIndex);
	virtual int __fastcall CompareByField(int ARecordIndex1, int ARecordIndex2, Cxcustomdata::TcxCustomDataField* AField, Cxcustomdata::TcxDataControllerComparisonMode AMode);
	virtual Cxcustomdata::TcxDataCustomExpressionProvider* __fastcall CreateExpressionProvider();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall DoValueTypeClassChanged(int AItemIndex);
	virtual void __fastcall FilterChanged();
	virtual int __fastcall GetDefaultActiveRelationIndex();
	virtual Cxcustomdata::TcxDataFilterCriteriaClass __fastcall GetFilterCriteriaClass();
	virtual System::UnicodeString __fastcall GetFilterDisplayText(int ARecordIndex, int AItemIndex);
	virtual int __fastcall GetItemID(System::TObject* AItem);
	virtual Cxcustomdata::TcxSortingBySummaryEngineClass __fastcall GetSortingBySummaryEngineClass();
	virtual Cxcustomdata::TcxDataSummaryGroupItemLinkClass __fastcall GetSummaryGroupItemLinkClass();
	virtual Cxcustomdata::TcxDataSummaryItemClass __fastcall GetSummaryItemClass();
	
public:
	__fastcall virtual TcxGridDataController(System::Classes::TComponent* AOwner);
	virtual void __fastcall BeginFullUpdate();
	virtual void __fastcall EndFullUpdate();
	virtual System::TObject* __fastcall CreateDetailLinkObject(Cxcustomdata::TcxCustomDataRelation* ARelation, int ARecordIndex);
	virtual void __fastcall FocusControl(int AItemIndex, bool &Done);
	virtual Cxcustomdata::TcxCustomDataController* __fastcall GetDetailDataControllerByLinkObject(System::TObject* ALinkObject);
	virtual System::UnicodeString __fastcall GetDisplayText(int ARecordIndex, int AItemIndex);
	virtual System::Variant __fastcall GetFilterDataValue(int ARecordIndex, Cxcustomdata::TcxCustomDataField* AField);
	virtual System::UnicodeString __fastcall GetFilterItemFieldCaption(System::TObject* AItem);
	virtual System::TObject* __fastcall GetItem(int Index);
	virtual bool __fastcall GetItemSortByDisplayText(int AItemIndex, bool ASortByDisplayText);
	virtual Cxdatautils::TcxDataEditValueSource __fastcall GetItemValueSource(int AItemIndex);
	virtual void __fastcall Loaded();
	virtual void __fastcall UpdateData();
	__property TcxCustomGridTableView* GridView = {read=FGridView};
	
__published:
	__property Filter;
	__property Options = {default=28};
	__property Summary;
	__property OnAfterCancel;
	__property OnAfterDelete;
	__property OnAfterInsert;
	__property OnAfterPost;
	__property OnBeforeCancel;
	__property OnBeforeDelete;
	__property OnBeforeInsert;
	__property OnBeforePost;
	__property OnCanSelectRecord;
	__property OnNewRecord;
	__property OnCompare;
	__property OnDataChanged;
	__property OnDetailCollapsing;
	__property OnDetailCollapsed;
	__property OnDetailExpanding;
	__property OnDetailExpanded;
	__property OnFilterRecord;
	__property OnFindCriteriaBeforeChange;
	__property OnFindCriteriaChanged;
	__property OnGroupingChanged;
	__property OnRecordChanged;
	__property OnSortingChanged;
public:
	/* TcxDataController.Destroy */ inline __fastcall virtual ~TcxGridDataController() { }
	
private:
	void *__IcxGridDataController;	// IcxGridDataController 
	void *__IcxCustomGridDataController;	// Cxgridcustomview::IcxCustomGridDataController 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {FEEE7E69-BD54-4B5D-BA0B-B6116B69C0CC}
	operator _di_IcxGridDataController()
	{
		_di_IcxGridDataController intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IcxGridDataController*(void) { return (IcxGridDataController*)&__IcxGridDataController; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B9ABDC6B-1A4A-4F11-A629-09B6FB9FB4BA}
	operator Cxgridcustomview::_di_IcxCustomGridDataController()
	{
		Cxgridcustomview::_di_IcxCustomGridDataController intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxgridcustomview::IcxCustomGridDataController*(void) { return (Cxgridcustomview::IcxCustomGridDataController*)&__IcxCustomGridDataController; }
	#endif
	
};


typedef Dxdateranges::TdxCustomDateRangeClass TcxCustomGridDateRangeClass;

typedef Dxdateranges::TdxCustomDateRange TcxCustomGridDateRange;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridHourRange : public Dxdateranges::TdxHourRange
{
	typedef Dxdateranges::TdxHourRange inherited;
	
public:
	/* TdxCustomDateRange.Destroy */ inline __fastcall virtual ~TcxGridHourRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridHourRange() : Dxdateranges::TdxHourRange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridDayRange : public Dxdateranges::TdxDayRange
{
	typedef Dxdateranges::TdxDayRange inherited;
	
public:
	/* TdxCustomDateRange.Destroy */ inline __fastcall virtual ~TcxGridDayRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridDayRange() : Dxdateranges::TdxDayRange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridMonthRange : public Dxdateranges::TdxMonthRange
{
	typedef Dxdateranges::TdxMonthRange inherited;
	
public:
	/* TdxCustomDateRange.Destroy */ inline __fastcall virtual ~TcxGridMonthRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridMonthRange() : Dxdateranges::TdxMonthRange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridYearRange : public Dxdateranges::TdxYearRange
{
	typedef Dxdateranges::TdxYearRange inherited;
	
public:
	/* TdxCustomDateRange.Destroy */ inline __fastcall virtual ~TcxGridYearRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridYearRange() : Dxdateranges::TdxYearRange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridYesterdayRange : public Dxdateranges::TdxYesterdayRange
{
	typedef Dxdateranges::TdxYesterdayRange inherited;
	
public:
	virtual System::UnicodeString __fastcall GetDisplayText(const System::TDateTime ADate);
public:
	/* TdxCustomDateRange.Destroy */ inline __fastcall virtual ~TcxGridYesterdayRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridYesterdayRange() : Dxdateranges::TdxYesterdayRange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridTodayRange : public Dxdateranges::TdxTodayRange
{
	typedef Dxdateranges::TdxTodayRange inherited;
	
public:
	virtual System::UnicodeString __fastcall GetDisplayText(const System::TDateTime ADate);
public:
	/* TdxCustomDateRange.Destroy */ inline __fastcall virtual ~TcxGridTodayRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridTodayRange() : Dxdateranges::TdxTodayRange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridTomorrowRange : public Dxdateranges::TdxTomorrowRange
{
	typedef Dxdateranges::TdxTomorrowRange inherited;
	
public:
	virtual System::UnicodeString __fastcall GetDisplayText(const System::TDateTime ADate);
public:
	/* TdxCustomDateRange.Destroy */ inline __fastcall virtual ~TcxGridTomorrowRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridTomorrowRange() : Dxdateranges::TdxTomorrowRange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridLastWeekRange : public Dxdateranges::TdxLastWeekRange
{
	typedef Dxdateranges::TdxLastWeekRange inherited;
	
public:
	virtual System::UnicodeString __fastcall GetDisplayText(const System::TDateTime ADate);
public:
	/* TdxCustomDateRange.Destroy */ inline __fastcall virtual ~TcxGridLastWeekRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridLastWeekRange() : Dxdateranges::TdxLastWeekRange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridThisWeekRange : public Dxdateranges::TdxThisWeekRange
{
	typedef Dxdateranges::TdxThisWeekRange inherited;
	
public:
	virtual System::UnicodeString __fastcall GetDisplayText(const System::TDateTime ADate);
public:
	/* TdxCustomDateRange.Destroy */ inline __fastcall virtual ~TcxGridThisWeekRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridThisWeekRange() : Dxdateranges::TdxThisWeekRange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridNextWeekRange : public Dxdateranges::TdxNextWeekRange
{
	typedef Dxdateranges::TdxNextWeekRange inherited;
	
public:
	virtual System::UnicodeString __fastcall GetDisplayText(const System::TDateTime ADate);
public:
	/* TdxCustomDateRange.Destroy */ inline __fastcall virtual ~TcxGridNextWeekRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridNextWeekRange() : Dxdateranges::TdxNextWeekRange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridLastMonthRange : public Dxdateranges::TdxLastMonthRange
{
	typedef Dxdateranges::TdxLastMonthRange inherited;
	
public:
	virtual System::UnicodeString __fastcall GetDisplayText(const System::TDateTime ADate);
public:
	/* TdxCustomDateRange.Destroy */ inline __fastcall virtual ~TcxGridLastMonthRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridLastMonthRange() : Dxdateranges::TdxLastMonthRange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridThisMonthRange : public Dxdateranges::TdxThisMonthRange
{
	typedef Dxdateranges::TdxThisMonthRange inherited;
	
public:
	virtual System::UnicodeString __fastcall GetDisplayText(const System::TDateTime ADate);
public:
	/* TdxCustomDateRange.Destroy */ inline __fastcall virtual ~TcxGridThisMonthRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridThisMonthRange() : Dxdateranges::TdxThisMonthRange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridNextMonthRange : public Dxdateranges::TdxNextMonthRange
{
	typedef Dxdateranges::TdxNextMonthRange inherited;
	
public:
	virtual System::UnicodeString __fastcall GetDisplayText(const System::TDateTime ADate);
public:
	/* TdxCustomDateRange.Destroy */ inline __fastcall virtual ~TcxGridNextMonthRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridNextMonthRange() : Dxdateranges::TdxNextMonthRange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridLastYearRange : public Dxdateranges::TdxLastYearRange
{
	typedef Dxdateranges::TdxLastYearRange inherited;
	
public:
	virtual System::UnicodeString __fastcall GetDisplayText(const System::TDateTime ADate);
public:
	/* TdxCustomDateRange.Destroy */ inline __fastcall virtual ~TcxGridLastYearRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridLastYearRange() : Dxdateranges::TdxLastYearRange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridThisYearRange : public Dxdateranges::TdxThisYearRange
{
	typedef Dxdateranges::TdxThisYearRange inherited;
	
public:
	virtual System::UnicodeString __fastcall GetDisplayText(const System::TDateTime ADate);
public:
	/* TdxCustomDateRange.Destroy */ inline __fastcall virtual ~TcxGridThisYearRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridThisYearRange() : Dxdateranges::TdxThisYearRange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridNextYearRange : public Dxdateranges::TdxNextYearRange
{
	typedef Dxdateranges::TdxNextYearRange inherited;
	
public:
	virtual System::UnicodeString __fastcall GetDisplayText(const System::TDateTime ADate);
public:
	/* TdxCustomDateRange.Destroy */ inline __fastcall virtual ~TcxGridNextYearRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridNextYearRange() : Dxdateranges::TdxNextYearRange() { }
	
};

#pragma pack(pop)

typedef Dxdateranges::TdxDateRanges TcxGridDateRanges;

typedef Dxdateranges::TdxDateRangesClass TcxGridDateRangesClass;

class PASCALIMPLEMENTATION TcxGridFilteringDateRanges : public Dxdateranges::TdxFilteringDateRanges
{
	typedef Dxdateranges::TdxFilteringDateRanges inherited;
	
private:
	TcxCustomGridTableDateTimeHandling* __fastcall GetDateTimeHandling();
	
protected:
	virtual Dxdateranges::TdxCustomDateRangeClass __fastcall GetMonthRange();
	virtual Dxdateranges::TdxCustomDateRangeClass __fastcall GetYearRange();
	
public:
	__property TcxCustomGridTableDateTimeHandling* DateTimeHandling = {read=GetDateTimeHandling};
public:
	/* TdxDateRanges.Create */ inline __fastcall virtual TcxGridFilteringDateRanges() : Dxdateranges::TdxFilteringDateRanges() { }
	/* TdxDateRanges.Destroy */ inline __fastcall virtual ~TcxGridFilteringDateRanges() { }
	
};


typedef System::TMetaClass* TcxGridFilteringDateRangesClass;

class PASCALIMPLEMENTATION TcxGridGroupingDateRanges : public Dxdateranges::TdxGroupingDateRanges
{
	typedef Dxdateranges::TdxGroupingDateRanges inherited;
	
private:
	TcxCustomGridTableDateTimeHandling* __fastcall GetDateTimeHandling();
	
protected:
	virtual Dxdateranges::TdxCustomDateRangeClass __fastcall GetDayRangeClass();
	virtual Dxdateranges::TdxCustomDateRangeClass __fastcall GetHourRangeClass();
	virtual Dxdateranges::TdxCustomDateRangeClass __fastcall GetLastMonthRangeClass();
	virtual Dxdateranges::TdxCustomDateRangeClass __fastcall GetLastWeekRangeClass();
	virtual Dxdateranges::TdxCustomDateRangeClass __fastcall GetLastYearRangeClass();
	virtual Dxdateranges::TdxCustomDateRangeClass __fastcall GetMonthRangeClass();
	virtual Dxdateranges::TdxCustomDateRangeClass __fastcall GetNextMonthRangeClass();
	virtual Dxdateranges::TdxCustomDateRangeClass __fastcall GetNextWeekRangeClass();
	virtual Dxdateranges::TdxCustomDateRangeClass __fastcall GetNextYearRangeClass();
	virtual Dxdateranges::TdxCustomDateRangeClass __fastcall GetThisMonthRangeClass();
	virtual Dxdateranges::TdxCustomDateRangeClass __fastcall GetThisWeekRangeClass();
	virtual Dxdateranges::TdxCustomDateRangeClass __fastcall GetThisYearRangeClass();
	virtual Dxdateranges::TdxCustomDateRangeClass __fastcall GetTodayRangeClass();
	virtual Dxdateranges::TdxCustomDateRangeClass __fastcall GetTomorrowRangeClass();
	virtual Dxdateranges::TdxCustomDateRangeClass __fastcall GetYearRangeClass();
	virtual Dxdateranges::TdxCustomDateRangeClass __fastcall GetYesterdayRangeClass();
	
public:
	__property TcxCustomGridTableDateTimeHandling* DateTimeHandling = {read=GetDateTimeHandling};
public:
	/* TdxDateRanges.Create */ inline __fastcall virtual TcxGridGroupingDateRanges() : Dxdateranges::TdxGroupingDateRanges() { }
	/* TdxDateRanges.Destroy */ inline __fastcall virtual ~TcxGridGroupingDateRanges() { }
	
};


typedef System::TMetaClass* TcxGridGroupingDateRangesClass;

typedef System::TMetaClass* TcxGridFilterValueListClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFilterValueList : public Cxcustomdata::TcxDataFilterValueList
{
	typedef Cxcustomdata::TcxDataFilterValueList inherited;
	
protected:
	virtual void __fastcall AddDateTimeAbsoluteFilters(Dxdateranges::TdxCustomDateRange* ADateRange, bool AIgnoreTime)/* overload */;
	virtual void __fastcall AddDateTimeAbsoluteFilters(TcxCustomGridTableItem* AItem)/* overload */;
	virtual void __fastcall AddDateTimeRelativeFilters(TcxCustomGridTableItem* AItem);
	virtual bool __fastcall IsSpecialOperatorKindSupported(Cxfilter::TcxFilterOperatorKind AKind);
	HIDESBASE void __fastcall Load(TcxCustomGridTableItem* AItem, bool AInitSortByDisplayText, bool AUseFilteredValues, bool AAddValueItems, bool AUniqueOnly, bool AFilteredValuesShowFilteredItemsOnly)/* overload */;
	
public:
	void __fastcall ApplyFilter(TcxCustomGridTableItem* AItem, int AIndex, Cxfilter::TcxFilterCriteriaItemList* AFilterList, bool AReplaceExistent, bool AAddToMRUItemsList);
	virtual int __fastcall GetIndexByCriteriaItem(Cxfilter::TcxFilterCriteriaItem* ACriteriaItem);
	HIDESBASE virtual void __fastcall Load(TcxCustomGridTableItem* AItem, bool AInitSortByDisplayText = true, bool AUseFilteredValues = false, bool AAddValueItems = true)/* overload */;
public:
	/* TcxFilterValueList.Create */ inline __fastcall virtual TcxGridFilterValueList(Cxfilter::TcxFilterCriteria* ACriteria) : Cxcustomdata::TcxDataFilterValueList(ACriteria) { }
	/* TcxFilterValueList.Destroy */ inline __fastcall virtual ~TcxGridFilterValueList() { }
	
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  Load(int AItemIndex, bool AInitSortByDisplayText, bool AUseFilteredValues, bool AAddValueItems, bool AUniqueOnly, bool AFilteredValuesShowFilteredItemsOnly){ Cxcustomdata::TcxDataFilterValueList::Load(AItemIndex, AInitSortByDisplayText, AUseFilteredValues, AAddValueItems, AUniqueOnly, AFilteredValuesShowFilteredItemsOnly); }
	
public:
	inline void __fastcall  Load(int AItemIndex, bool AInitSortByDisplayText = true, bool AUseFilteredValues = false, bool AAddValueItems = true){ Cxcustomdata::TcxDataFilterValueList::Load(AItemIndex, AInitSortByDisplayText, AUseFilteredValues, AAddValueItems); }
	
};

#pragma pack(pop)

typedef Cxfilter::TcxFilterMRUValueItem TcxGridFilterMRUValueItem;

typedef Cxfilter::TcxFilterMRUValueItemsClass TcxGridFilterMRUValueItemsClass;

typedef Cxfilter::TcxFilterMRUValueItems TcxGridFilterMRUValueItems;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridItemDataBinding : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	static const System::WideChar InvariantExpressionFlag = (System::WideChar)(0x1);
	
	
private:
	System::TObject* FData;
	Cxedit::TcxCustomEditDefaultValuesProvider* FDefaultValuesProvider;
	TcxCustomGridTableItem* FItem;
	Cxfilter::TcxFilterMRUValueItems* FFilterMRUValueItems;
	Cxcustomdata::TcxCustomDataController* __fastcall GetDataController();
	System::UnicodeString __fastcall GetExpression();
	Cxcustomdata::TcxDataFilterCriteria* __fastcall GetFilter();
	Cxfilter::TcxFilterCriteriaItem* __fastcall GetFilterCriteriaItem();
	bool __fastcall GetFiltered();
	TcxCustomGridTableView* __fastcall GetGridView();
	System::UnicodeString __fastcall GetStoredExpression();
	System::UnicodeString __fastcall GetValueType();
	Cxdatastorage::TcxValueTypeClass __fastcall GetValueTypeClass();
	void __fastcall SetData(System::TObject* Value);
	void __fastcall SetExpression(const System::UnicodeString AValue);
	void __fastcall SetFiltered(bool Value);
	void __fastcall SetStoredExpression(const System::UnicodeString AValue);
	void __fastcall SetValueType(const System::UnicodeString Value);
	void __fastcall SetValueTypeClass(Cxdatastorage::TcxValueTypeClass Value);
	void __fastcall ReadIsNullValueType(System::Classes::TReader* AReader);
	void __fastcall WriteIsNullValueType(System::Classes::TWriter* AWriter);
	
protected:
	void __fastcall AddCustomFunctionToFilter(Cxfilter::TcxFilterCriteriaItemList* AParent, const System::UnicodeString ACustomFunctionName, const System::Variant &AValue, const System::UnicodeString ADisplayText, bool AReplaceExistent = true);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	Cxedit::TcxCustomEditDefaultValuesProviderClass __fastcall GetDefaultValuesProviderClass();
	virtual Cxdatastorage::TcxValueTypeClass __fastcall GetDefaultValueTypeClass();
	virtual System::UnicodeString __fastcall GetFilterFieldName();
	virtual Cxfilter::TcxFilterMRUValueItemsClass __fastcall GetFilterMRUValueItemsClass();
	void __fastcall GetFilterStrings(System::Classes::TStrings* AStrings, TcxGridFilterValueList* AValueList, bool AValuesOnly, bool AUniqueOnly)/* overload */;
	void __fastcall GetFilterValues(TcxGridFilterValueList* AValueList, bool AValuesOnly, bool AInitSortByDisplayText, bool ACanUseFilteredValues, bool AUniqueOnly)/* overload */;
	virtual void __fastcall Init();
	virtual bool __fastcall IsValueTypeStored();
	void __fastcall SetFilterActiveCustomFunction(const System::UnicodeString ACustomFunctionName, const System::Variant &AValue, const System::UnicodeString ADisplayText);
	void __fastcall SetFilterActiveValue(Cxfilter::TcxFilterOperatorKind AOperatorKind, const System::Variant &AValue, const System::UnicodeString ADisplayText);
	void __fastcall SetFilterActiveValueIndex(TcxGridFilterValueList* AValueList, int AIndex, Cxfilter::TcxFilterCriteriaItemList* AFilterList, bool AReplaceExistent, bool AAddToMRUItemsList);
	void __fastcall SetFilterActiveValues(Dxcoreclasses::TdxFastObjectList* AValueInfos, Cxfilter::TcxFilterBoolOperatorKind ABoolOperator);
	__property Cxedit::TcxCustomEditDefaultValuesProvider* DefaultValuesProvider = {read=FDefaultValuesProvider};
	__property System::UnicodeString StoredExpression = {read=GetStoredExpression, write=SetStoredExpression};
	
public:
	__fastcall virtual TcxGridItemDataBinding(TcxCustomGridTableItem* AItem);
	__fastcall virtual ~TcxGridItemDataBinding();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual System::UnicodeString __fastcall DefaultCaption();
	virtual Cxedit::TcxEditRepositoryItem* __fastcall DefaultRepositoryItem();
	virtual int __fastcall DefaultWidth(bool ATakeHeaderIntoAccount = true);
	Cxcustomdata::TcxSummaryKinds __fastcall GetAllowedSummaryKinds();
	Cxedit::TcxCustomEditDefaultValuesProvider* __fastcall GetDefaultValuesProvider(Cxedit::TcxCustomEditProperties* AProperties = (Cxedit::TcxCustomEditProperties*)(0x0));
	bool __fastcall IsDisplayFormatDefined(bool AIsCurrencyValueAccepted);
	Cxfilter::TcxFilterCriteriaItem* __fastcall AddToFilter(Cxfilter::TcxFilterCriteriaItemList* AParent, Cxfilter::TcxFilterOperatorKind AOperatorKind, const System::Variant &AValue, const System::UnicodeString ADisplayText = System::UnicodeString(), bool AReplaceExistent = true);
	void __fastcall GetFilterDisplayText(const System::Variant &AValue, System::UnicodeString &ADisplayText);
	void __fastcall GetFilterStrings(System::Classes::TStrings* AStrings, TcxGridFilterValueList* AValueList)/* overload */;
	void __fastcall GetFilterValues(TcxGridFilterValueList* AValueList, bool AValuesOnly = true, bool AInitSortByDisplayText = false, bool ACanUseFilteredValues = false)/* overload */;
	void __fastcall GetFilterActiveValueIndexes(TcxGridFilterValueList* AValueList, Cxclasses::TdxIntegerIndexes &AIndexes);
	void __fastcall SetFilterActiveValueIndexes(TcxGridFilterValueList* AValueList, const Cxclasses::TdxIntegerIndexes AIndexes, bool AAddToMRUItemsList = false);
	__property System::TObject* Data = {read=FData, write=SetData};
	__property Cxcustomdata::TcxCustomDataController* DataController = {read=GetDataController};
	__property Cxcustomdata::TcxDataFilterCriteria* Filter = {read=GetFilter};
	__property Cxfilter::TcxFilterCriteriaItem* FilterCriteriaItem = {read=GetFilterCriteriaItem};
	__property bool Filtered = {read=GetFiltered, write=SetFiltered, nodefault};
	__property System::UnicodeString FilterFieldName = {read=GetFilterFieldName};
	__property Cxfilter::TcxFilterMRUValueItems* FilterMRUValueItems = {read=FFilterMRUValueItems};
	__property TcxCustomGridTableView* GridView = {read=GetGridView};
	__property TcxCustomGridTableItem* Item = {read=FItem};
	__property Cxdatastorage::TcxValueTypeClass ValueTypeClass = {read=GetValueTypeClass, write=SetValueTypeClass};
	
__published:
	__property System::UnicodeString Expression = {read=GetExpression, write=SetExpression};
	__property System::UnicodeString ValueType = {read=GetValueType, write=SetValueType, stored=IsValueTypeStored};
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomGridRecordClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridRecord : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FIndex;
	TcxCustomGridTableViewData* FViewData;
	TcxCustomGridRecordViewInfo* FViewInfo;
	TcxCustomGridTableController* __fastcall GetController();
	Cxcustomdata::TcxCustomDataController* __fastcall GetDataController();
	bool __fastcall GetDragHighlighted();
	bool __fastcall GetFocused();
	TcxCustomGridTableView* __fastcall GetGridView();
	bool __fastcall GetIsEditing();
	bool __fastcall GetIsNewItemRecord();
	bool __fastcall GetIsValid();
	int __fastcall GetLastParentRecordCount();
	int __fastcall GetLevel();
	bool __fastcall GetPartVisible();
	int __fastcall GetRecordIndex();
	void __fastcall SetExpanded(bool Value);
	void __fastcall SetFocused(bool Value);
	
protected:
	int FPixelScrollPosition;
	Cxcustomdata::TcxRowInfo RecordInfo;
	virtual void __fastcall RefreshRecordInfo();
	virtual void __fastcall DoCollapse(bool ARecurse);
	virtual void __fastcall DoExpand(bool ARecurse);
	virtual bool __fastcall GetExpandable();
	virtual bool __fastcall GetExpanded();
	virtual void __fastcall ToggleExpanded();
	virtual bool __fastcall GetHasCells();
	virtual bool __fastcall GetIsData();
	virtual bool __fastcall GetIsFirst();
	virtual bool __fastcall GetIsLast();
	virtual bool __fastcall GetIsParent();
	virtual bool __fastcall GetIsParentRecordLast(int AIndex);
	virtual TcxCustomGridRecord* __fastcall GetParentRecord();
	virtual bool __fastcall GetSelected();
	virtual bool __fastcall GetVisible();
	virtual bool __fastcall HasErrorData();
	virtual void __fastcall SetSelected(bool Value);
	virtual System::UnicodeString __fastcall GetDisplayText(int Index);
	virtual int __fastcall GetValueCount();
	virtual System::Variant __fastcall GetValue(int Index);
	virtual void __fastcall SetDisplayText(int Index, const System::UnicodeString Value);
	virtual void __fastcall SetValue(int Index, const System::Variant &Value);
	virtual void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual Cxgridcustomview::TcxCustomGridViewInfoCacheItemClass __fastcall GetViewInfoCacheItemClass() = 0 ;
	virtual TcxCustomGridRecordViewInfoClass __fastcall GetViewInfoClass() = 0 ;
	__property bool IsParent = {read=GetIsParent, nodefault};
	__property bool IsParentRecordLast[int AIndex] = {read=GetIsParentRecordLast};
	__property bool IsValid = {read=GetIsValid, nodefault};
	__property int LastParentRecordCount = {read=GetLastParentRecordCount, nodefault};
	__property TcxCustomGridTableController* Controller = {read=GetController};
	__property Cxcustomdata::TcxCustomDataController* DataController = {read=GetDataController};
	
public:
	__fastcall virtual TcxCustomGridRecord(TcxCustomGridTableViewData* AViewData, int AIndex, const Cxcustomdata::TcxRowInfo &ARecordInfo);
	__fastcall virtual ~TcxCustomGridRecord();
	virtual bool __fastcall CanFocus();
	virtual bool __fastcall CanFocusCells();
	void __fastcall Collapse(bool ARecurse);
	void __fastcall Expand(bool ARecurse);
	virtual TcxCustomGridRecord* __fastcall GetFirstFocusableChild();
	virtual TcxCustomGridRecord* __fastcall GetLastFocusableChild(bool ARecursive);
	virtual void __fastcall Invalidate(TcxCustomGridTableItem* AItem = (TcxCustomGridTableItem*)(0x0));
	void __fastcall MakeVisible();
	__property bool DragHighlighted = {read=GetDragHighlighted, nodefault};
	__property System::UnicodeString DisplayTexts[int Index] = {read=GetDisplayText, write=SetDisplayText};
	__property bool Expandable = {read=GetExpandable, nodefault};
	__property bool Expanded = {read=GetExpanded, write=SetExpanded, nodefault};
	__property bool Focused = {read=GetFocused, write=SetFocused, nodefault};
	__property TcxCustomGridTableView* GridView = {read=GetGridView};
	__property bool HasCells = {read=GetHasCells, nodefault};
	__property int Index = {read=FIndex, nodefault};
	__property bool IsData = {read=GetIsData, nodefault};
	__property bool IsEditing = {read=GetIsEditing, nodefault};
	__property bool IsFirst = {read=GetIsFirst, nodefault};
	__property bool IsLast = {read=GetIsLast, nodefault};
	__property bool IsNewItemRecord = {read=GetIsNewItemRecord, nodefault};
	__property int Level = {read=GetLevel, nodefault};
	__property TcxCustomGridRecord* ParentRecord = {read=GetParentRecord};
	__property bool PartVisible = {read=GetPartVisible, nodefault};
	__property int PixelScrollPosition = {read=FPixelScrollPosition, nodefault};
	__property int RecordIndex = {read=GetRecordIndex, nodefault};
	__property bool Selected = {read=GetSelected, write=SetSelected, nodefault};
	__property int ValueCount = {read=GetValueCount, nodefault};
	__property System::Variant Values[int Index] = {read=GetValue, write=SetValue};
	__property TcxCustomGridTableViewData* ViewData = {read=FViewData};
	__property TcxCustomGridRecordViewInfo* ViewInfo = {read=FViewInfo};
	__property bool Visible = {read=GetVisible, nodefault};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TcxGridDataOperation : unsigned char { doSorting, doGrouping, doFiltering };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridTableViewData : public Cxgridcustomview::TcxCustomGridViewData
{
	typedef Cxgridcustomview::TcxCustomGridViewData inherited;
	
private:
	TcxCustomGridRecord* FEditingRecord;
	TcxCustomGridRecord* FNewItemRecord;
	Dxcoreclasses::TdxFastList* FRecords;
	HIDESBASE TcxCustomGridTableController* __fastcall GetController();
	TcxCustomGridRecord* __fastcall GetEditingRecord();
	TcxCustomGridTableView* __fastcall GetGridView();
	TcxCustomGridRecord* __fastcall GetInternalRecord(int Index);
	TcxCustomGridRecord* __fastcall GetRecord(int Index);
	int __fastcall GetRecordCount();
	HIDESBASE TcxCustomGridTableViewInfo* __fastcall GetViewInfo();
	TcxCustomGridRecord* __fastcall CreateRecord(int AIndex);
	
protected:
	virtual Cxfilter::TcxFilterCriteriaItem* __fastcall AddCustomFunctionToFilter(Cxfilter::TcxFilterCriteriaItemList* AParent, TcxCustomGridTableItem* AItem, const System::UnicodeString ACustomFunctionName, const System::Variant &AValue, System::UnicodeString ADisplayText = System::UnicodeString(), bool AReplaceExistent = true);
	virtual TcxGridFilterValueListClass __fastcall GetFilterValueListClass();
	virtual TcxCustomGridRecord* __fastcall GetRecordByKind(int AKind, int AIndex);
	virtual TcxCustomGridRecordClass __fastcall GetRecordClass(const Cxcustomdata::TcxRowInfo &ARecordInfo) = 0 ;
	virtual int __fastcall GetRecordKind(TcxCustomGridRecord* ARecord);
	void __fastcall AssignEditingRecord();
	void __fastcall AssignFocusedRecord();
	void __fastcall CreateNewItemRecord();
	void __fastcall DestroyNewItemRecord();
	virtual TcxCustomGridRecordClass __fastcall GetNewItemRecordClass();
	void __fastcall RecreateNewItemRecord();
	__property TcxCustomGridTableController* Controller = {read=GetController};
	__property TcxCustomGridRecord* InternalRecords[int Index] = {read=GetInternalRecord};
	__property TcxCustomGridTableViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	__fastcall virtual TcxCustomGridTableViewData(Cxgridcustomview::TcxCustomGridView* AGridView);
	__fastcall virtual ~TcxCustomGridTableViewData();
	virtual void __fastcall Collapse(bool ARecurse);
	void __fastcall DestroyRecords();
	virtual void __fastcall Expand(bool ARecurse);
	TcxCustomGridRecord* __fastcall GetRecordByIndex(int AIndex);
	TcxCustomGridRecord* __fastcall GetRecordByRecordIndex(int ARecordIndex);
	int __fastcall GetRecordIndexByRecord(TcxCustomGridRecord* ARecord);
	bool __fastcall IsRecordIndexValid(int AIndex);
	virtual void __fastcall Refresh(int ARecordCount);
	void __fastcall RefreshRecords();
	void __fastcall CheckNewItemRecord();
	virtual bool __fastcall HasNewItemRecord();
	Cxfilter::TcxFilterCriteriaItem* __fastcall AddItemToFilter(Cxfilter::TcxFilterCriteriaItemList* AParent, TcxCustomGridTableItem* AItem, Cxfilter::TcxFilterOperatorKind AOperatorKind, const System::Variant &AValue, System::UnicodeString ADisplayText = System::UnicodeString(), bool AReplaceExistent = true);
	TcxGridFilterValueList* __fastcall CreateFilterValueList();
	virtual bool __fastcall GetDisplayText(int ARecordIndex, int AItemIndex, /* out */ System::UnicodeString &AText, bool AUseCustomValue = false, TcxGridDataOperation ACustomValueOperation = (TcxGridDataOperation)(0x1));
	System::UnicodeString __fastcall GetDisplayTextFromValue(TcxCustomGridTableItem* AItem, Cxedit::TcxCustomEditProperties* AProperties, const System::Variant &AValue, bool AUseCustomValue = false, TcxGridDataOperation ACustomValueOperation = (TcxGridDataOperation)(0x1))/* overload */;
	System::UnicodeString __fastcall GetDisplayTextFromValue(int ARecordIndex, int AItemIndex, const System::Variant &AValue, bool AUseCustomValue = false, TcxGridDataOperation ACustomValueOperation = (TcxGridDataOperation)(0x1))/* overload */;
	virtual int __fastcall CustomCompareDataValues(Cxcustomdata::TcxCustomDataField* AField, const System::Variant &AValue1, const System::Variant &AValue2, Cxcustomdata::TcxDataControllerComparisonMode AMode);
	virtual System::UnicodeString __fastcall GetCustomDataDisplayText(int ARecordIndex, int AItemIndex, TcxGridDataOperation AOperation)/* overload */;
	virtual System::UnicodeString __fastcall GetCustomDataDisplayText(int AItemIndex, const System::Variant &AValue)/* overload */;
	System::Variant __fastcall GetCustomDataValue(Cxcustomdata::TcxCustomDataField* AField, const System::Variant &AValue, TcxGridDataOperation AOperation)/* overload */;
	virtual System::Variant __fastcall GetCustomDataValue(TcxCustomGridTableItem* AItem, const System::Variant &AValue, TcxGridDataOperation AOperation)/* overload */;
	bool __fastcall HasCustomDataHandling(Cxcustomdata::TcxCustomDataField* AField, TcxGridDataOperation AOperation)/* overload */;
	virtual bool __fastcall HasCustomDataHandling(TcxCustomGridTableItem* AItem, TcxGridDataOperation AOperation)/* overload */;
	virtual bool __fastcall NeedsCustomDataComparison(Cxcustomdata::TcxCustomDataField* AField, Cxcustomdata::TcxDataControllerComparisonMode AMode);
	__property TcxCustomGridRecord* EditingRecord = {read=FEditingRecord};
	__property TcxCustomGridTableView* GridView = {read=GetGridView};
	__property TcxCustomGridRecord* NewItemRecord = {read=FNewItemRecord};
	__property int RecordCount = {read=GetRecordCount, nodefault};
	__property TcxCustomGridRecord* Records[int Index] = {read=GetRecord};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridTableMovingObject : public Cxgridcustomview::TcxCustomGridMovingObject
{
	typedef Cxgridcustomview::TcxCustomGridMovingObject inherited;
	
private:
	HIDESBASE TcxCustomGridTableController* __fastcall GetController();
	HIDESBASE TcxCustomGridTableCustomizationForm* __fastcall GetCustomizationForm();
	
protected:
	virtual void __fastcall DragAndDrop(const System::Types::TPoint &P, bool &Accepted);
	virtual bool __fastcall NeedCheckScrolling();
	__property TcxCustomGridTableController* Controller = {read=GetController};
	__property TcxCustomGridTableCustomizationForm* CustomizationForm = {read=GetCustomizationForm};
public:
	/* TcxDragAndDropObject.Create */ inline __fastcall virtual TcxCustomGridTableMovingObject(Cxcontrols::TcxControl* AControl) : Cxgridcustomview::TcxCustomGridMovingObject(AControl) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomGridTableMovingObject() { }
	
};

#pragma pack(pop)

typedef int TcxGridItemContainerKind;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridItemContainerZone : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	int ItemIndex;
	__fastcall TcxGridItemContainerZone(int AItemIndex);
	virtual bool __fastcall IsEqual(TcxGridItemContainerZone* Value);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridItemContainerZone() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridTableItemMovingObject : public TcxCustomGridTableMovingObject
{
	typedef TcxCustomGridTableMovingObject inherited;
	
private:
	int FDestItemContainerKind;
	TcxGridItemContainerZone* FDestZone;
	int FSourceItemContainerKind;
	void __fastcall SetDestItemContainerKind(int Value);
	void __fastcall SetDestZone(TcxGridItemContainerZone* Value);
	
protected:
	virtual void __fastcall CalculateDestParams(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, /* out */ int &AContainerKind, /* out */ TcxGridItemContainerZone* &AZone);
	virtual void __fastcall CheckDestItemContainerKind(int &AValue);
	virtual Cxgridcustomview::TcxCustomGridItemsListBox* __fastcall GetCustomizationFormListBox();
	virtual bool __fastcall IsSourceCustomizationForm();
	virtual void __fastcall BeginDragAndDrop();
	virtual void __fastcall DragAndDrop(const System::Types::TPoint &P, bool &Accepted);
	virtual void __fastcall EndDragAndDrop(bool Accepted);
	__property int DestItemContainerKind = {read=FDestItemContainerKind, write=SetDestItemContainerKind, nodefault};
	__property TcxGridItemContainerZone* DestZone = {read=FDestZone, write=SetDestZone};
	__property int SourceItemContainerKind = {read=FSourceItemContainerKind, write=FSourceItemContainerKind, nodefault};
	
public:
	__fastcall virtual TcxCustomGridTableItemMovingObject(Cxcontrols::TcxControl* AControl);
	__fastcall virtual ~TcxCustomGridTableItemMovingObject();
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomGridTableItemsListBoxClass;

class PASCALIMPLEMENTATION TcxCustomGridTableItemsListBox : public Cxgridcustomview::TcxCustomGridItemsListBox
{
	typedef Cxgridcustomview::TcxCustomGridItemsListBox inherited;
	
private:
	HIDESBASE TcxCustomGridTableView* __fastcall GetGridView();
	
protected:
	void __fastcall RefreshItemsAsTableItems();
	__property TcxCustomGridTableView* GridView = {read=GetGridView};
public:
	/* TcxCustomGridItemsListBox.Create */ inline __fastcall virtual TcxCustomGridTableItemsListBox(System::Classes::TComponent* AOwner) : Cxgridcustomview::TcxCustomGridItemsListBox(AOwner) { }
	
public:
	/* TcxCustomListBox.Destroy */ inline __fastcall virtual ~TcxCustomGridTableItemsListBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomGridTableItemsListBox(HWND ParentWindow) : Cxgridcustomview::TcxCustomGridItemsListBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxCustomGridTableCustomizationForm : public Cxgridcustomview::TcxCustomGridCustomizationForm
{
	typedef Cxgridcustomview::TcxCustomGridCustomizationForm inherited;
	
private:
	TcxCustomGridTableItemsListBox* FItemsListBox;
	Cxpc::TcxTabSheet* FItemsPage;
	
protected:
	virtual void __fastcall CreateControls();
	virtual TcxCustomGridTableItemsListBoxClass __fastcall GetItemsListBoxClass();
	virtual System::UnicodeString __fastcall GetItemsPageCaption() = 0 ;
	virtual bool __fastcall GetItemsPageVisible();
	virtual void __fastcall InitPageControl();
	__property TcxCustomGridTableItemsListBox* ItemsListBox = {read=FItemsListBox};
	
public:
	virtual void __fastcall RefreshData();
	__property Cxpc::TcxTabSheet* ItemsPage = {read=FItemsPage};
public:
	/* TcxCustomGridCustomizationForm.Create */ inline __fastcall virtual TcxCustomGridTableCustomizationForm(Cxgridcustomview::TcxCustomGridController* AController) : Cxgridcustomview::TcxCustomGridCustomizationForm(AController) { }
	/* TcxCustomGridCustomizationForm.Destroy */ inline __fastcall virtual ~TcxCustomGridTableCustomizationForm() { }
	
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TcxCustomGridTableCustomizationForm(System::Classes::TComponent* AOwner, int Dummy) : Cxgridcustomview::TcxCustomGridCustomizationForm(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomGridTableCustomizationForm(HWND ParentWindow) : Cxgridcustomview::TcxCustomGridCustomizationForm(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxGridFilterPopup : public Dxfilterpopupwindow::TdxFilterPopupWindow
{
	typedef Dxfilterpopupwindow::TdxFilterPopupWindow inherited;
	
private:
	TcxCustomGridTableView* FGridView;
	TcxCustomGridTableItem* __fastcall GetItem();
	
public:
	__fastcall virtual TcxGridFilterPopup(TcxCustomGridTableView* AGridView);
	__property TcxCustomGridTableView* GridView = {read=FGridView};
	__property TcxCustomGridTableItem* Item = {read=GetItem};
public:
	/* TdxFilterPopupWindow.Destroy */ inline __fastcall virtual ~TcxGridFilterPopup() { }
	
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TcxGridFilterPopup(System::Classes::TComponent* AOwner, int Dummy) : Dxfilterpopupwindow::TdxFilterPopupWindow(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxGridFilterPopup(HWND ParentWindow) : Dxfilterpopupwindow::TdxFilterPopupWindow(ParentWindow) { }
	
};


typedef System::TMetaClass* TcxGridFilterPopupClass;

typedef System::TMetaClass* TcxGridFilterMRUItemsPopupClass;

class PASCALIMPLEMENTATION TcxGridFilterMRUItemsPopup : public Dxfilterbox::TdxFilterBoxMRUItemsPopup
{
	typedef Dxfilterbox::TdxFilterBoxMRUItemsPopup inherited;
	
private:
	TcxCustomGridTableView* FGridView;
	
protected:
	virtual void __fastcall ApplyFilter(int AItemIndex);
	virtual int __fastcall GetMRUItemCount();
	virtual Dxfilterbox::TdxFilterBoxMRUItems* __fastcall GetMRUItems();
	
public:
	__fastcall virtual TcxGridFilterMRUItemsPopup(TcxCustomGridTableView* AGridView);
	__property TcxCustomGridTableView* GridView = {read=FGridView};
public:
	/* TcxCustomPopupWindow.Destroy */ inline __fastcall virtual ~TcxGridFilterMRUItemsPopup() { }
	
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TcxGridFilterMRUItemsPopup(System::Classes::TComponent* AOwner, int Dummy) : Dxfilterbox::TdxFilterBoxMRUItemsPopup(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxGridFilterMRUItemsPopup(HWND ParentWindow) : Dxfilterbox::TdxFilterBoxMRUItemsPopup(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TdxCustomGridQuickCustomizationControl : public Cxlistbox::TdxQuickCustomizationCustomControl
{
	typedef Cxlistbox::TdxQuickCustomizationCustomControl inherited;
	
private:
	void __fastcall CheckAllItems(System::TObject* Sender);
	void __fastcall SortItems(System::TObject* Sender);
	TcxCustomGridTableView* __fastcall GetGridView();
	TcxCustomGridCustomizationPopup* __fastcall GetPopup();
	
protected:
	void __fastcall DoCheckAllItems(bool AValue);
	Cxlookandfeelpainters::TcxCheckBoxState __fastcall GetCheckingAllState();
	virtual void __fastcall PopulateCommandListBox();
	virtual void __fastcall PopulateCheckListBox();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	
public:
	__property TcxCustomGridTableView* GridView = {read=GetGridView};
	__property TcxCustomGridCustomizationPopup* Popup = {read=GetPopup};
public:
	/* TdxQuickCustomizationCustomControl.Create */ inline __fastcall virtual TdxCustomGridQuickCustomizationControl(System::Classes::TComponent* AOwner) : Cxlistbox::TdxQuickCustomizationCustomControl(AOwner) { }
	/* TdxQuickCustomizationCustomControl.Destroy */ inline __fastcall virtual ~TdxCustomGridQuickCustomizationControl() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxCustomGridQuickCustomizationControl(HWND ParentWindow) : Cxlistbox::TdxQuickCustomizationCustomControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxCustomGridCustomizationPopup : public Cxgridcustomview::TcxCustomGridPopup
{
	typedef Cxgridcustomview::TcxCustomGridPopup inherited;
	
private:
	TdxCustomGridQuickCustomizationControl* FCustomizationControl;
	System::Classes::TList* FChangingItems;
	Cxclasses::TdxIntegerIndexes FChangingItemsCheckStates;
	bool FSelectionInitializingInProcess;
	Cxlistbox::TdxQuickCustomizationCustomCheckListBox* __fastcall GetCheckListBox();
	TcxCustomGridTableView* __fastcall GetGridView();
	void __fastcall CheckListBoxAction(Cxlistbox::TdxCustomListBox* Sender, int AItemIndex);
	void __fastcall CheckListBoxCheckClicked(int AIndex, bool AChecked);
	void __fastcall CheckListBoxDragDrop(System::TObject* Sender, System::TObject* Source, int X, int Y);
	void __fastcall CheckListBoxInitializeSelection(System::TObject* Sender);
	void __fastcall CheckListBoxItemDragOver(void * AItem, bool &AAccept);
	void __fastcall CheckListBoxSelectionChanged(System::TObject* Sender);
	void __fastcall CheckListSelectedItemCheckedStateChanging(System::TObject* Sender);
	void __fastcall CheckListSelectedItemCheckedStateChanged(System::TObject* Sender);
	void __fastcall CustomizationControlInitialize(System::TObject* Sender);
	
protected:
	virtual void __fastcall AddCheckListBoxItems() = 0 ;
	virtual void __fastcall ApplyCheckListBoxSorting();
	void __fastcall AdjustCustomizationControlSize();
	virtual bool __fastcall CanMoveItem(void * AItem);
	virtual void __fastcall CreateCustomizationControl();
	virtual int __fastcall GetDropDownCount() = 0 ;
	virtual void __fastcall InitPopup();
	virtual bool __fastcall IsCheckListBoxSorted();
	virtual bool __fastcall IsMultiColumnMode();
	void __fastcall RefreshCheckListBoxItems();
	virtual void __fastcall ScaleFactorChanged(int M, int D);
	virtual void __fastcall SetQuickCustomizationSorted(bool AValue) = 0 ;
	void __fastcall SetQuickCustomizationSortOptions();
	void __fastcall SetVisibleRowCount(int ACount);
	virtual bool __fastcall SupportsItemMoving() = 0 ;
	virtual void __fastcall SynchronizeTableItemsVisibilityWithListBox() = 0 ;
	virtual void __fastcall UpdateCommandListBoxItemsChecking();
	void __fastcall GetCheckListBoxSelectedItems(System::Classes::TList* AItems, System::TObject* &AFocusedItem);
	virtual bool __fastcall CanAddCommands();
	virtual bool __fastcall IsGridItem(System::TObject* AItem) = 0 ;
	virtual bool __fastcall IsVisibleGridItem(System::TObject* AItem) = 0 ;
	void __fastcall SetCheckListBoxSelectedItems(System::Classes::TList* AItems, System::TObject* AFocusedItem);
	virtual void __fastcall DoItemPosChanged(System::TObject* AItem) = 0 ;
	virtual void __fastcall HandleItemClicked(System::TObject* AItem, bool AChecked) = 0 ;
	virtual void __fastcall ItemClicked(System::TObject* AItem, bool AChecked);
	virtual int __fastcall GetItemIndex(System::TObject* AItem) = 0 ;
	virtual void __fastcall SetItemIndex(System::TObject* AItem, int AIndex) = 0 ;
	void __fastcall SetGridModified();
	__property Cxlistbox::TdxQuickCustomizationCustomCheckListBox* CheckListBox = {read=GetCheckListBox};
	
public:
	__fastcall virtual TcxCustomGridCustomizationPopup(Cxgridcustomview::TcxCustomGridView* AGridView);
	__fastcall virtual ~TcxCustomGridCustomizationPopup();
	virtual void __fastcall CloseUp();
	virtual void __fastcall CorrectBoundsWithDesktopWorkArea(System::Types::TPoint &APosition, System::Types::TSize &ASize);
	virtual void __fastcall Popup();
	__property TdxCustomGridQuickCustomizationControl* CustomizationControl = {read=FCustomizationControl};
	__property TcxCustomGridTableView* GridView = {read=GetGridView};
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TcxCustomGridCustomizationPopup(System::Classes::TComponent* AOwner, int Dummy) : Cxgridcustomview::TcxCustomGridPopup(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomGridCustomizationPopup(HWND ParentWindow) : Cxgridcustomview::TcxCustomGridPopup(ParentWindow) { }
	
};


typedef System::TMetaClass* TcxCustomGridItemsCustomizationPopupClass;

class PASCALIMPLEMENTATION TcxCustomGridItemsCustomizationPopup : public TcxCustomGridCustomizationPopup
{
	typedef TcxCustomGridCustomizationPopup inherited;
	
protected:
	virtual void __fastcall AddCheckListBoxItems();
	virtual bool __fastcall CanMoveItem(void * AItem);
	virtual int __fastcall GetDropDownCount();
	virtual void __fastcall SetQuickCustomizationSorted(bool AValue);
	virtual bool __fastcall SupportsItemMoving();
	virtual void __fastcall SynchronizeTableItemsVisibilityWithListBox();
	virtual void __fastcall DoItemPosChanged(System::TObject* AItem);
	virtual void __fastcall HandleItemClicked(System::TObject* AItem, bool AChecked);
	virtual bool __fastcall IsGridItem(System::TObject* AItem);
	virtual bool __fastcall IsVisibleGridItem(System::TObject* AItem);
	virtual int __fastcall GetItemIndex(System::TObject* AItem);
	virtual void __fastcall SetItemIndex(System::TObject* AItem, int AIndex);
public:
	/* TcxCustomGridCustomizationPopup.Create */ inline __fastcall virtual TcxCustomGridItemsCustomizationPopup(Cxgridcustomview::TcxCustomGridView* AGridView) : TcxCustomGridCustomizationPopup(AGridView) { }
	/* TcxCustomGridCustomizationPopup.Destroy */ inline __fastcall virtual ~TcxCustomGridItemsCustomizationPopup() { }
	
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TcxCustomGridItemsCustomizationPopup(System::Classes::TComponent* AOwner, int Dummy) : TcxCustomGridCustomizationPopup(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomGridItemsCustomizationPopup(HWND ParentWindow) : TcxCustomGridCustomizationPopup(ParentWindow) { }
	
};


typedef System::TMetaClass* TcxGridEditingControllerClass;

class PASCALIMPLEMENTATION TcxGridEditingController : public Cxedit::TcxCustomEditingController
{
	typedef Cxedit::TcxCustomEditingController inherited;
	
private:
	TcxCustomGridTableController* FController;
	TcxCustomGridTableItem* FEditingItem;
	TcxCustomGridTableItem* FEditShowingTimerItem;
	bool FIsEditAutoHeight;
	Cxmemo::TcxAutoHeightInplaceEdit* FMultiLineEdit;
	int FMultiLineEditMinHeight;
	bool FUpdateEditStyleNeeded;
	TcxGridTableDataCellViewInfo* __fastcall GetEditingCellViewInfo();
	Cxedit::TcxCustomEditProperties* __fastcall GetEditingProperties();
	TcxCustomGridTableView* __fastcall GetGridView();
	Cxedit::TcxInplaceEditAutoHeight __fastcall GetAutoHeight();
	void __fastcall SetEditingItem(TcxCustomGridTableItem* Value);
	
protected:
	bool __fastcall CanUpdateMultilineEditHeight();
	virtual bool __fastcall CanUseAutoHeightEditor();
	System::Types::TRect __fastcall GetAdjustedMultilineEditBounds(const System::Types::TRect &ABounds);
	virtual Cxmemo::TcxAutoHeightInplaceEdit* __fastcall GetMultilineEdit();
	virtual void __fastcall MultilineEditTextChanged();
	void __fastcall SetupMultilineEdit(Cxmemo::TcxAutoHeightInplaceEdit* AEdit);
	virtual void __fastcall StartEditAutoHeight(bool AHeightChanged);
	void __fastcall UpdateMultilineEditBounds(const System::Types::TRect &ABounds);
	virtual void __fastcall AfterViewInfoCalculate();
	virtual void __fastcall BeforeViewInfoCalculate();
	virtual bool __fastcall CanInitEditing();
	virtual bool __fastcall CanUpdateEdit();
	virtual bool __fastcall CanUpdateEditValue();
	System::Types::TRect __fastcall CellEditBoundsToEditBounds(const System::Types::TRect &ACellEditBounds);
	void __fastcall CheckEdit();
	void __fastcall CheckUsingMultilineEdit();
	virtual Cxmemo::TcxAutoHeightInplaceEditProperties* __fastcall CreateEditAutoHeightProperties();
	virtual void __fastcall ClearEditingItem();
	virtual void __fastcall DoEditKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall DoHideEdit(bool Accept);
	virtual void __fastcall DoUpdateEdit();
	virtual void __fastcall FocusedRecordChanged();
	virtual bool __fastcall GetCancelEditingOnExit();
	virtual Vcl::Controls::TWinControl* __fastcall GetEditParent();
	virtual System::Types::TRect __fastcall GetFocusedCellBounds();
	virtual System::Types::TRect __fastcall GetFocusRectBounds();
	virtual bool __fastcall GetHideEditOnExit();
	virtual bool __fastcall GetHideEditOnFocusedRecordChange();
	virtual bool __fastcall GetIsEditing();
	virtual void __fastcall InitEdit();
	virtual void __fastcall InitMultilineEditorMinHeight();
	virtual bool __fastcall IsNeedInvokeEditChangedEventsBeforePost();
	virtual bool __fastcall NeedCellViewInfoWhenUpdateEditValue();
	virtual void __fastcall PostEditingData();
	virtual bool __fastcall PrepareEdit(TcxCustomGridTableItem* AItem, bool AOnMouseEvent);
	virtual void __fastcall RecalculateEditViewInfo();
	virtual void __fastcall StartEditingByTimer();
	void __fastcall UpdateEditBounds(const System::Types::TRect &AEditBounds);
	void __fastcall UpdateEditStyle(TcxGridTableDataCellViewInfo* AEditCellViewInfo);
	virtual void __fastcall UpdateInplaceParamsPosition();
	void __fastcall ValidateEditVisibility();
	virtual Cxcustomdata::TcxCustomDataController* __fastcall GetDataController();
	virtual System::Variant __fastcall GetValue();
	virtual void __fastcall SetValue(const System::Variant &AValue);
	virtual void __fastcall EditAfterKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall EditChanged(System::TObject* Sender);
	virtual void __fastcall EditDblClick(System::TObject* Sender);
	virtual void __fastcall EditExecuteAction(System::Classes::TBasicAction* Action, bool &Handled);
	virtual void __fastcall EditFocusChanged(System::TObject* Sender);
	virtual void __fastcall EditKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall EditKeyPress(System::TObject* Sender, System::WideChar &Key);
	virtual void __fastcall EditKeyUp(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall EditUpdateAction(System::Classes::TBasicAction* Action, bool &Handled);
	virtual void __fastcall EditValueChanged(System::TObject* Sender);
	__property Cxedit::TcxInplaceEditAutoHeight AutoHeight = {read=GetAutoHeight, nodefault};
	__property TcxGridTableDataCellViewInfo* EditingCellViewInfo = {read=GetEditingCellViewInfo};
	__property Cxedit::TcxCustomEditProperties* EditingProperties = {read=GetEditingProperties};
	__property bool IsEditAutoHeight = {read=FIsEditAutoHeight, nodefault};
	__property Cxmemo::TcxAutoHeightInplaceEdit* MultiLineEdit = {read=FMultiLineEdit};
	__property int MultiLineEditMinHeight = {read=FMultiLineEditMinHeight, nodefault};
	
public:
	__fastcall virtual TcxGridEditingController(TcxCustomGridTableController* AController);
	virtual void __fastcall HideEdit(bool Accept);
	virtual void __fastcall RemoveEdit(Cxedit::TcxCustomEditProperties* AProperties);
	virtual void __fastcall ShowEdit()/* overload */;
	HIDESBASE void __fastcall ShowEdit(TcxCustomGridTableItem* AItem)/* overload */;
	HIDESBASE void __fastcall ShowEdit(TcxCustomGridTableItem* AItem, System::WideChar Key)/* overload */;
	HIDESBASE void __fastcall ShowEdit(TcxCustomGridTableItem* AItem, System::Classes::TShiftState Shift, int X, int Y)/* overload */;
	HIDESBASE void __fastcall StartEditShowingTimer(TcxCustomGridTableItem* AItem);
	__property TcxCustomGridTableController* Controller = {read=FController};
	__property TcxCustomGridTableItem* EditingItem = {read=FEditingItem, write=SetEditingItem};
	__property TcxCustomGridTableView* GridView = {read=GetGridView};
public:
	/* TcxCustomEditingController.Destroy */ inline __fastcall virtual ~TcxGridEditingController() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridDragOpenInfoExpand : public Cxgridcommon::TcxCustomGridDragOpenInfo
{
	typedef Cxgridcommon::TcxCustomGridDragOpenInfo inherited;
	
public:
	TcxCustomGridRecord* GridRecord;
	__fastcall virtual TcxGridDragOpenInfoExpand(TcxCustomGridRecord* AGridRecord);
	virtual bool __fastcall Equals(Cxgridcommon::TcxCustomGridDragOpenInfo* AInfo);
	virtual void __fastcall Run();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridDragOpenInfoExpand() { }
	
};

#pragma pack(pop)

typedef bool __fastcall (*TcxCustomGridTableCanItemFocus)(TcxCustomGridTableView* AOwner, int AItemIndex, System::TObject* AData);

struct DECLSPEC_DRECORD TcxGridTableClickedDataCellInfo
{
public:
	TcxCustomGridTableItem* Item;
	TcxGridTableDataCellViewInfo* Cell;
	int RecordIndex;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridTableRecordScrollAnimationHelper : public Dxscrollanimation::TdxRecordPixelScrollAnimationHelper
{
	typedef Dxscrollanimation::TdxRecordPixelScrollAnimationHelper inherited;
	
private:
	bool FIsScrollingByRecord;
	TcxCustomGridTableController* FOwner;
	
protected:
	virtual void __fastcall AfterAnimationEnded(bool AIsRaiseEvent);
	virtual void __fastcall BeforeAnimationStarted();
	virtual Dxscrollanimation::TdxRecordPixelScrollData __fastcall CalculateAnimatedPosition(int &APosition);
	virtual int __fastcall CalculateScrollDelta(const Dxscrollanimation::TdxRecordPixelScrollData &AValue);
	virtual Dxscrollanimation::TdxRecordPixelScrollData __fastcall GetOwnerPosition();
	virtual void __fastcall PositionChanged();
	virtual void __fastcall SetTargetPosition(const Dxscrollanimation::TdxRecordPixelScrollData &AValue);
	virtual void __fastcall UpdateOwnerPosition(const Dxscrollanimation::TdxRecordPixelScrollData &AValue);
	
public:
	__fastcall TcxCustomGridTableRecordScrollAnimationHelper(TcxCustomGridTableController* AOwner);
public:
	/* {dxScrollAnimation}TdxCustomScrollAnimationHelper<dxScrollAnimation_TdxRecordPixelScrollData>.Destroy */ inline __fastcall virtual ~TcxCustomGridTableRecordScrollAnimationHelper() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxCustomGridTableController : public Cxgridcustomview::TcxCustomGridController
{
	typedef Cxgridcustomview::TcxCustomGridController inherited;
	
private:
	bool FAllowRecordScrollAnimationOnMakeVisible;
	bool FIsScrollbarAnnotationsRenderingByRecordPixelScrollPosition;
	
private:
	bool FAllowAppendRecord;
	bool FAllowCheckEdit;
	bool FBlockRecordKeyboardHandling;
	bool FCheckEditNeeded;
	bool FCheckingCoordinate;
	TcxGridTableDataCellViewInfo* FClickedCellViewInfo;
	TcxGridTableClickedDataCellInfo FClickedDataCellInfo;
	System::UnicodeString FDragDropText;
	Cxclasses::TcxDirection FDragScrollDirection;
	Cxclasses::TcxTimer* FDragScrollTimer;
	TcxCustomGridRecord* FDragHighlightedRecord;
	bool FEatKeyPress;
	TcxGridEditingController* FEditingController;
	TcxGridFilterMRUItemsPopup* FFilterMRUItemsPopup;
	TcxGridFilterPopup* FFilterPopup;
	TcxGridFindPanel* FFindPanel;
	TcxCustomGridTableItem* FFocusedItem;
	TcxCustomGridRecord* FFocusedRecord;
	bool FFocusOnRecordFocusing;
	TcxCustomGridTableItem* FForcingWidthItem;
	bool FGridModeBufferCountUpdateNeeded;
	Cxclasses::TcxTimer* FGridModeBufferCountUpdateTimer;
	TcxCustomGridRecordViewInfo* FHotRecord;
	int FInternalTopRecordIndex;
	bool FIsDetailRecordFocusing;
	bool FIsPullFocusing;
	bool FIsReadyForImmediateEditing;
	bool FIsRecordUnselecting;
	TcxCustomGridItemsCustomizationPopup* FItemsCustomizationPopup;
	System::Types::TRect FMakeVisibleDetailRecordBounds;
	TcxCustomGridTableItem* FMovingItem;
	bool FNeedUpdateSiteOnFocusedRecordChanged;
	int FPixelScrollRecordOffset;
	int FPixelScrollTopRecordIndexMaxValue;
	int FPixelScrollTopRecordOffsetMaxValue;
	int FPrevFocusedRecordIndex;
	TcxCustomGridTableItem* FPullFocusingItem;
	System::Types::TPoint FPullFocusingMousePos;
	Cxgridcustomview::TcxCustomGridHitTest* FPullFocusingOriginHitTest;
	System::Variant FPullFocusingRecordId;
	Cxclasses::TcxDirection FPullFocusingScrollingDirection;
	Cxclasses::TcxTimer* FPullFocusingScrollingTimer;
	TcxCustomGridTableRecordScrollAnimationHelper* FRecordScrollAnimationHelper;
	Cxclasses::TcxDirection FScrollDirection;
	Cxclasses::TcxTimer* FScrollTimer;
	bool FTracking;
	int FUnselectingRecordIndex;
	int __fastcall GetAdjustedTopRecordIndex(int ATopRecordIndex);
	TcxCustomGridTableItem* __fastcall GetEditingItem();
	TcxGridFilterMRUItemsPopup* __fastcall GetFilterMRUItemsPopup();
	TcxGridFilterPopup* __fastcall GetFilterPopup();
	int __fastcall GetFocusedItemIndex();
	int __fastcall GetFocusedRecordIndex();
	TcxCustomGridTableView* __fastcall GetGridView();
	TcxCustomGridTableItem* __fastcall GetIncSearchingItem();
	System::UnicodeString __fastcall GetIncSearchingText();
	int __fastcall GetInternalTopRecordIndex();
	bool __fastcall GetIsEditing();
	bool __fastcall GetIsIncSearching();
	bool __fastcall GetIsItemMoving();
	TcxCustomGridItemsCustomizationPopup* __fastcall GetItemsCustomizationPopup();
	TcxCustomGridTableController* __fastcall GetMasterController();
	bool __fastcall GetMultiSelect();
	bool __fastcall GetNewItemRecordFocused();
	int __fastcall GetPrevFocusedRecordIndex();
	int __fastcall GetScrollRecordCount();
	TcxCustomGridRecord* __fastcall GetSelectedRecord(int Index);
	int __fastcall GetSelectedRecordCount();
	HIDESBASE TcxCustomGridTableViewData* __fastcall GetViewData();
	HIDESBASE TcxCustomGridTableViewInfo* __fastcall GetViewInfo();
	void __fastcall SetDragHighlightedRecord(TcxCustomGridRecord* Value);
	void __fastcall SetEditingItem(TcxCustomGridTableItem* Value);
	void __fastcall SetFocusedItem(TcxCustomGridTableItem* Value);
	void __fastcall SetFocusedItemIndex(int Value);
	void __fastcall SetFocusedRecordIndex(int Value);
	void __fastcall SetIncSearchingText(const System::UnicodeString Value);
	void __fastcall SetInternalTopRecordIndex(int Value);
	void __fastcall SetNewItemRecordFocused(bool Value);
	void __fastcall SetPixelScrollRecordOffset(const int Value);
	void __fastcall SetScrollDirection(Cxclasses::TcxDirection Value);
	void __fastcall SetTopRecordIndex(int Value);
	void __fastcall SetTracking(bool Value);
	void __fastcall DragScrollTimerHandler(System::TObject* Sender);
	void __fastcall GridModeBufferCountUpdateTimerHandler(System::TObject* Sender);
	void __fastcall PullFocusingScrollingTimerHandler(System::TObject* Sender);
	void __fastcall CreateScrollTimer();
	void __fastcall DestroyScrollTimer();
	void __fastcall ScrollTimerHandler(System::TObject* Sender);
	int __fastcall GetTargetRecordScrollIndex();
	int __fastcall GetTargetRecordScrollOffset();
	
protected:
	virtual void __fastcall AfterPaint();
	virtual bool __fastcall AllowPan(Vcl::Forms::TScrollBarKind AScrollKind);
	void __fastcall AssignFocusedRecord();
	virtual void __fastcall BeforePaint();
	virtual bool __fastcall CanCancelDragStartOnCaptureObjectClear();
	virtual bool __fastcall CanFocusOnClick(int X, int Y);
	virtual void __fastcall CheckInternalTopRecordIndex(int &AIndex);
	virtual void __fastcall DetailFocused(Cxgridcustomview::TcxCustomGridView* ADetail);
	virtual void __fastcall DoEnter();
	virtual void __fastcall DoExit();
	virtual void __fastcall RemoveFocus();
	virtual void __fastcall SetFocus(bool ANotifyMaster);
	virtual void __fastcall AfterOffset();
	void __fastcall AllowRecordScrollAnimationOnMakeVisible(System::Sysutils::_di_TProc AProc);
	virtual void __fastcall BeforeOffset();
	virtual bool __fastcall CanAppend(bool ACheckOptions);
	void __fastcall CancelCheckEditPost();
	virtual bool __fastcall CanChangeFocusedRecordIndex(int APrevRecordIndex, int ANewRecordIndex);
	virtual bool __fastcall CanCopyToClipboard();
	virtual bool __fastcall CanDataPost();
	virtual bool __fastcall CanDelete(bool ACheckOptions);
	virtual bool __fastcall CanEdit();
	virtual bool __fastcall CanEditFocusedItem();
	virtual void __fastcall CheckCoordinates();
	virtual bool __fastcall CanHScrollBarHide();
	virtual bool __fastcall CanInsert(bool ACheckOptions);
	virtual bool __fastcall CanMakeRecordVisible(TcxCustomGridRecord* ARecord);
	virtual bool __fastcall CanNormalSelectionOnMouse();
	virtual bool __fastcall CanUseAutoHeightEditing();
	virtual bool __fastcall CheckBrowseModeOnRecordChanging(int ANewRecordIndex);
	virtual void __fastcall CheckEdit();
	virtual void __fastcall CheckTopRecordIndex(int &Value);
	virtual void __fastcall CheckTopRecordIndexAndOffset(int &AIndex, int &AOffset);
	virtual int __fastcall DataScrollSize();
	virtual int __fastcall DoGetScrollBarPos();
	virtual void __fastcall DoMakeRecordVisible(TcxCustomGridRecord* ARecord);
	virtual void __fastcall DoScroll(Vcl::Forms::TScrollBarKind AScrollBarKind, System::Uitypes::TScrollCode AScrollCode, int &AScrollPos);
	virtual void __fastcall DoSetScrollBarPos(int Value);
	void __fastcall DoSetTopRecordIndexWithOffset(int ATopRecordIndex, int ATopRecordOffset);
	virtual void __fastcall EndGestureScroll();
	bool __fastcall FindNextCustomItem(int AFocusedItemIndex, int AItemCount, bool AGoForward, bool AGoOnCycle, TcxCustomGridTableCanItemFocus ACanFocus, System::TObject* AData, int &AItemIndex, /* out */ bool &ACycleChanged);
	virtual void __fastcall FocusedItemChanged(TcxCustomGridTableItem* APrevFocusedItem);
	virtual void __fastcall FocusedRecordChanged(int APrevFocusedRecordIndex, int AFocusedRecordIndex, int APrevFocusedDataRecordIndex, int AFocusedDataRecordIndex, bool ANewItemRecordFocusingChanged);
	virtual int __fastcall GetActuallyFocusedItemIndex();
	virtual void __fastcall GetBestFitRecordRange(/* out */ int &AFirstIndex, /* out */ int &ALastIndex);
	virtual bool __fastcall GetCancelEditingOnExit();
	virtual int __fastcall GetDlgCode();
	virtual TcxGridFilterMRUItemsPopupClass __fastcall GetFilterMRUItemsPopupClass();
	virtual TcxGridFilterPopupClass __fastcall GetFilterPopupClass();
	virtual TcxCustomGridRecord* __fastcall GetFocusedRecord();
	virtual bool __fastcall GetIsRecordsScrollHorizontal() = 0 ;
	virtual TcxCustomGridItemsCustomizationPopupClass __fastcall GetItemsCustomizationPopupClass();
	virtual int __fastcall GetLastVisibleRecordIndex();
	virtual int __fastcall GetMaxTopRecordIndexValue();
	virtual void __fastcall GetPixelScrollTopRecordIndexAndOffsetByBottomRecord(int ABottomRecordIndex, /* out */ int &ATopRecordIndex, /* out */ int &ATopRecordPixelScrollOffset);
	virtual void __fastcall GetPixelScrollTopRecordIndexAndOffsetMaxValues(/* out */ int &ARecordIndex, /* out */ int &APixelScrollOffset);
	int __fastcall GetPageVisibleRecordCount(int AFirstRecordIndex, int APixelScrollRecordOffset, bool ACalculateDown = true);
	virtual System::Classes::TPersistent* __fastcall GetPatternObject(System::Classes::TPersistent* AObject);
	virtual int __fastcall GetScrollBarOffsetBegin();
	virtual int __fastcall GetScrollBarOffsetEnd();
	virtual int __fastcall GetScrollBarPos();
	virtual int __fastcall GetScrollBarRecordCount();
	virtual int __fastcall GetScrollDelta();
	virtual int __fastcall GetTopRecordIndex();
	virtual int __fastcall GetTopRecordIndexByBottomRecord(int ABottomRecordIndex);
	virtual int __fastcall GetVisibleRecordCount(int AFirstRecordIndex, int APixelScrollRecordOffset, bool ACalculateDown = true);
	bool __fastcall IsClickedCell(TcxGridTableDataCellViewInfo* ACell);
	bool __fastcall IsPixelBasedScrollDataPos();
	bool __fastcall IsRecordPixelScrolling();
	virtual bool __fastcall IsRecordScrollable(int ARecordIndex);
	virtual bool __fastcall NeedCheckInternalTopRecordIndex();
	void __fastcall PostCheckEdit();
	void __fastcall ProcessCheckEditPost();
	virtual void __fastcall ScrollData(Cxclasses::TcxDirection ADirection);
	void __fastcall SetClickedCellInfo(TcxGridTableDataCellViewInfo* ACell);
	virtual void __fastcall SetFocusedRecord(TcxCustomGridRecord* Value);
	virtual void __fastcall SetFocusOnMouseClick(System::Uitypes::TMouseButton AButton, int X, int Y);
	virtual void __fastcall SetScrollBarPos(int Value);
	void __fastcall SetTopRecordIndexWithOffset(int ATopRecordIndex, int ATopRecordOffset, bool AAnimated = false)/* overload */;
	virtual void __fastcall ScrollAnimationEnded();
	void __fastcall ScrollAnimationStarted();
	virtual void __fastcall ValidateEditVisibility();
	virtual int __fastcall VisibleDataScrollSize();
	virtual bool __fastcall WantSpecialKey(System::Word AKey);
	void __fastcall CancelGridModeBufferCountUpdate();
	void __fastcall CheckGridModeBufferCountUpdatePost();
	void __fastcall PostGridModeBufferCountUpdate();
	__property bool GridModeBufferCountUpdateNeeded = {read=FGridModeBufferCountUpdateNeeded, nodefault};
	virtual TcxGridFindPanel* __fastcall CreateFindPanel();
	virtual void __fastcall AfterScrolling();
	virtual void __fastcall BeforeScrolling();
	virtual void __fastcall BeginGestureScroll(const System::Types::TPoint &APos);
	void __fastcall CheckPixelScrollTopRecordIndexAndOffsetValues(int &ATopRecordIndex, int &APixelScrollRecordOffset);
	virtual void __fastcall DoOverpan(Vcl::Forms::TScrollBarKind AScrollKind, int ADelta);
	virtual int __fastcall GetFirstScrollRecordIndex();
	virtual int __fastcall GetFirstIndexInScrollBand(int ARecordIndexInBand);
	int __fastcall GetLastIndexInScrollBand(int ARecordIndexInBand);
	virtual int __fastcall GetLastScrollRecordIndex();
	int __fastcall GetPixelScrollSize();
	virtual int __fastcall GetRecordCountInScrollBand(int ARecordIndexInBand);
	virtual bool __fastcall IsRecordFullyVisibleAtBottom(int ARecordIndex);
	virtual bool __fastcall IsRecordFullyVisibleAtTop(int ARecordIndex);
	virtual bool __fastcall IsRecordPartVisibleAtTop(int ARecordIndex);
	void __fastcall UpdatePixelScrollTopRecordIndexAndOffsetMaxValues();
	virtual void __fastcall ScrollContentByGesture(Vcl::Forms::TScrollBarKind AScrollKind, int ADelta);
	bool __fastcall IsRecordHot(TcxCustomGridRecordViewInfo* AViewInfo);
	void __fastcall ResetHotRecord();
	void __fastcall SetHotRecord(TcxCustomGridRecordViewInfo* AValue);
	virtual bool __fastcall CanScrollData(Cxclasses::TcxDirection ADirection);
	virtual int __fastcall GetScrollDataTimeInterval(Cxclasses::TcxDirection ADirection);
	__property Cxclasses::TcxDirection ScrollDirection = {read=FScrollDirection, write=SetScrollDirection, nodefault};
	virtual bool __fastcall CanPostponeRecordSelection(System::Classes::TShiftState AShift);
	virtual bool __fastcall CanProcessMultiSelect(bool AIsKeyboard)/* overload */;
	virtual bool __fastcall CanProcessMultiSelect(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, System::Classes::TShiftState AShift)/* overload */;
	virtual bool __fastcall CanProcessMultiSelect(System::Word AKey, System::Classes::TShiftState AShift, bool AFocusedRecordChanged)/* overload */;
	void __fastcall ChangeRecordSelection(TcxCustomGridRecord* ARecord, bool Value);
	void __fastcall CheckFocusedRecordSelectionWhenExit(TcxCustomGridRecord* ARecord);
	virtual void __fastcall DoMouseNormalSelection(Cxgridcustomview::TcxCustomGridHitTest* AHitTest);
	virtual void __fastcall DoMouseRangeSelection(bool AClearSelection = true, System::TObject* AData = (System::TObject*)(0x0));
	virtual void __fastcall DoNormalSelection();
	void __fastcall DoRangeSelection(bool AClearSelection = true);
	void __fastcall DoToggleRecordSelection();
	virtual void __fastcall FinishSelection();
	virtual void __fastcall InvalidateFocusedRecord();
	virtual void __fastcall InvalidateSelection();
	virtual bool __fastcall IsKeyForMultiSelect(System::Word AKey, System::Classes::TShiftState AShift, bool AFocusedRecordChanged);
	bool __fastcall IsMultiSelectPersistent();
	bool __fastcall IsRecordSelected(TcxCustomGridRecord* ARecord);
	virtual void __fastcall MultiSelectKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall MultiSelectMouseDown(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, System::Classes::TShiftState AShift);
	virtual void __fastcall MultiSelectMouseUp(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, System::Classes::TShiftState AShift);
	void __fastcall SelectFocusedRecord();
	void __fastcall SetSelectionAnchor(int AGridRecordIndex);
	virtual bool __fastcall SupportsAdditiveSelection();
	virtual bool __fastcall SupportsRecordSelectionToggling();
	bool __fastcall IsRecordScrollAnimationActive();
	virtual bool __fastcall IsScrollAnimationActive();
	bool __fastcall IsScrollAnimationEnabled();
	virtual void __fastcall StopScrollAnimation();
	virtual bool __fastcall CanFocusNextItem(int AFocusedItemIndex, int ANextItemIndex, bool AGoForward, bool AGoOnCycle, bool AGoToNextRecordOnCycle);
	bool __fastcall FocusedRecordHasCells(bool ACheckCellSelectionAbility);
	virtual void __fastcall FocusNextPage(bool ASyncSelection);
	virtual void __fastcall FocusPrevPage(bool ASyncSelection);
	virtual int __fastcall GetPageRecordCount();
	virtual bool __fastcall IsFirstPageRecordFocused();
	virtual bool __fastcall IsKeyForController(System::Word AKey, System::Classes::TShiftState AShift);
	virtual void __fastcall ScrollPage(bool AForward);
	virtual void __fastcall ScrollRecords(bool AForward, int ACount);
	virtual void __fastcall ShowNextPage();
	virtual void __fastcall ShowPrevPage();
	virtual void __fastcall DoPullFocusing(TcxGridRecordHitTest* AHitTest);
	virtual void __fastcall DoPullFocusingScrolling(Cxclasses::TcxDirection ADirection);
	virtual bool __fastcall GetPullFocusingScrollingDirection(int X, int Y, /* out */ Cxclasses::TcxDirection &ADirection);
	bool __fastcall IsPullFocusingPosChanged();
	void __fastcall SavePullFocusingPos();
	virtual void __fastcall StartPullFocusing(Cxgridcustomview::TcxCustomGridHitTest* AHitTest);
	void __fastcall StopPullFocusing();
	void __fastcall StartPullFocusingScrolling(Cxclasses::TcxDirection ADirection);
	void __fastcall StopPullFocusingScrolling();
	virtual bool __fastcall SupportsPullFocusing();
	__property Cxgridcustomview::TcxCustomGridHitTest* PullFocusingOriginHitTest = {read=FPullFocusingOriginHitTest};
	virtual Cxclasses::TcxDirection __fastcall GetDragScrollDirection(int X, int Y);
	virtual int __fastcall GetDragScrollInterval();
	virtual bool __fastcall IsFirstRecordForDragScroll(TcxCustomGridRecord* ARecord);
	virtual bool __fastcall IsLastRecordForDragScroll(TcxCustomGridRecord* ARecord);
	void __fastcall ProcessDragFocusing(int X, int Y);
	void __fastcall StartDragScroll(Cxclasses::TcxDirection ADirection);
	void __fastcall StopDragScroll();
	bool __fastcall IsDragScroll();
	virtual Cxgridcommon::TcxCustomGridDragOpenInfo* __fastcall GetDragOpenInfo(Cxgridcustomview::TcxCustomGridHitTest* AHitTest);
	bool __fastcall IsDragOpenHitTest(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, /* out */ Cxgridcommon::TcxCustomGridDragOpenInfo* &ADragOpenInfo);
	__property TcxCustomGridRecord* DragHighlightedRecord = {read=FDragHighlightedRecord, write=SetDragHighlightedRecord};
	virtual TcxCustomGridTableItem* __fastcall GetItemForIncSearching();
	virtual void __fastcall IncSearchKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	__property TcxCustomGridTableItem* ItemForIncSearching = {read=GetItemForIncSearching};
	virtual void __fastcall DoKeyAutoRepeat();
	virtual TcxGridEditingControllerClass __fastcall GetEditingControllerClass();
	void __fastcall InternalDoMakeRecordVisible(TcxCustomGridRecord* ARecord);
	__property int ActuallyFocusedItemIndex = {read=GetActuallyFocusedItemIndex, nodefault};
	__property bool AllowAppendRecord = {read=FAllowAppendRecord, write=FAllowAppendRecord, nodefault};
	__property bool AllowCheckEdit = {read=FAllowCheckEdit, write=FAllowCheckEdit, nodefault};
	__property bool BlockRecordKeyboardHandling = {read=FBlockRecordKeyboardHandling, write=FBlockRecordKeyboardHandling, nodefault};
	__property bool CancelEditingOnExit = {read=GetCancelEditingOnExit, nodefault};
	__property bool EatKeyPress = {read=FEatKeyPress, write=FEatKeyPress, nodefault};
	__property TcxGridFindPanel* FindPanel = {read=FFindPanel};
	__property int FirstScrollRecordIndex = {read=GetFirstScrollRecordIndex, nodefault};
	__property bool FocusOnRecordFocusing = {read=FFocusOnRecordFocusing, write=FFocusOnRecordFocusing, nodefault};
	__property TcxCustomGridTableItem* ForcingWidthItem = {read=FForcingWidthItem, write=FForcingWidthItem};
	__property int InternalTopRecordIndex = {read=GetInternalTopRecordIndex, write=SetInternalTopRecordIndex, nodefault};
	__property bool IsReadyForImmediateEditing = {read=FIsReadyForImmediateEditing, write=FIsReadyForImmediateEditing, nodefault};
	__property bool IsRecordsScrollHorizontal = {read=GetIsRecordsScrollHorizontal, nodefault};
	__property int LastScrollRecordIndex = {read=GetLastScrollRecordIndex, nodefault};
	__property int LastVisibleRecordIndex = {read=GetLastVisibleRecordIndex, nodefault};
	__property System::Types::TRect MakeVisibleDetailRecordBounds = {read=FMakeVisibleDetailRecordBounds, write=FMakeVisibleDetailRecordBounds};
	__property bool MultiSelect = {read=GetMultiSelect, nodefault};
	__property bool NeedUpdateSiteOnFocusedRecordChanged = {read=FNeedUpdateSiteOnFocusedRecordChanged, write=FNeedUpdateSiteOnFocusedRecordChanged, nodefault};
	__property int PixelScrollRecordOffset = {read=FPixelScrollRecordOffset, write=SetPixelScrollRecordOffset, nodefault};
	__property int ScrollBarOffsetBegin = {read=GetScrollBarOffsetBegin, nodefault};
	__property int ScrollBarOffsetEnd = {read=GetScrollBarOffsetEnd, nodefault};
	__property int ScrollBarRecordCount = {read=GetScrollBarRecordCount, nodefault};
	__property int ScrollBarPos = {read=GetScrollBarPos, write=SetScrollBarPos, nodefault};
	__property int ScrollDelta = {read=GetScrollDelta, nodefault};
	__property int ScrollRecordCount = {read=GetScrollRecordCount, nodefault};
	__property int TargetRecordScrollIndex = {read=GetTargetRecordScrollIndex, nodefault};
	__property int TargetRecordScrollOffset = {read=GetTargetRecordScrollOffset, nodefault};
	__property bool Tracking = {read=FTracking, write=SetTracking, nodefault};
	__property TcxCustomGridTableViewData* ViewData = {read=GetViewData};
	__property TcxCustomGridTableViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	__fastcall virtual TcxCustomGridTableController(Cxgridcustomview::TcxCustomGridView* AGridView);
	__fastcall virtual ~TcxCustomGridTableController();
	virtual void __fastcall BeginDragAndDrop();
	virtual void __fastcall ControlFocusChanged();
	virtual void __fastcall DoCancelMode();
	virtual void __fastcall DoKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall EndDragAndDrop(bool Accepted);
	virtual int __fastcall FindNextItem(int AFocusedItemIndex, bool AGoForward, bool AGoOnCycle, bool AFollowVisualOrder, /* out */ bool &ACycleChanged, TcxCustomGridRecord* ARecord);
	int __fastcall FindNextRecord(int AFocusedRecordIndex, bool AGoForward, bool AGoOnCycle, /* out */ bool &ACycleChanged);
	bool __fastcall HasFilterMRUItemsPopup();
	bool __fastcall HasFilterPopup();
	virtual bool __fastcall HasFocusedControls();
	bool __fastcall HasItemsCustomizationPopup();
	virtual bool __fastcall IMEComposition(Winapi::Messages::TMessage &AMessage);
	virtual bool __fastcall IMEStartComposition();
	bool __fastcall IsClickableRecordHitTest(Cxgridcustomview::TcxCustomGridHitTest* AHitTest);
	virtual bool __fastcall IsDataFullyVisible(bool AIsCallFromMaster = false);
	virtual void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual bool __fastcall ProcessDetailDialogChar(Cxgridcustomview::TcxCustomGridView* ADetail, System::Word ACharCode);
	virtual bool __fastcall ProcessDialogChar(System::Word ACharCode);
	virtual bool __fastcall SupportsTabAccelerators(TcxCustomGridRecord* AGridRecord);
	virtual void __fastcall BeforeStartDrag();
	virtual bool __fastcall CanDrag(int X, int Y);
	virtual void __fastcall DragDrop(System::TObject* Source, int X, int Y);
	virtual void __fastcall DragOver(System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	virtual void __fastcall DrawDragImage(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R);
	virtual void __fastcall EndDrag(System::TObject* Target, int X, int Y);
	virtual System::UnicodeString __fastcall GetDragDropText(Vcl::Controls::TDragObject* ADragObject);
	virtual void __fastcall GetDragDropTextViewParams(/* out */ Cxgraphics::TcxViewParams &AParams);
	virtual System::Types::TPoint __fastcall GetDragImagesSize();
	virtual bool __fastcall HasDragImages();
	virtual void __fastcall StartDrag(Vcl::Controls::TDragObject* &DragObject);
	__property System::UnicodeString DragDropText = {read=FDragDropText};
	void __fastcall HideFindPanel();
	bool __fastcall IsFindPanelVisible();
	void __fastcall ShowFindPanel();
	void __fastcall CancelIncSearching();
	bool __fastcall CheckEditing(int &AFocusedRecordIndex, bool AGoForward);
	virtual void __fastcall CheckScrolling(const System::Types::TPoint &P);
	virtual void __fastcall ClearSelection();
	virtual void __fastcall CreateNewRecord(bool AtEnd);
	virtual void __fastcall DeleteSelection();
	virtual bool __fastcall FocusFirstAvailableItem();
	virtual bool __fastcall FocusNextCell(bool AGoForward, bool AProcessCellsOnly = true, bool AAllowCellsCycle = true, bool AFollowVisualOrder = true, bool ANeedNormalizeSelection = false);
	virtual bool __fastcall FocusNextItem(int AFocusedItemIndex, bool AGoForward, bool AGoOnCycle, bool AGoToNextRecordOnCycle, bool AFollowVisualOrder, bool ANeedNormalizeSelection = false);
	bool __fastcall FocusNextRecord(int AFocusedRecordIndex, bool AGoForward, bool AGoOnCycle, bool AGoIntoDetail, bool AGoOutOfDetail);
	bool __fastcall FocusNextRecordWithSelection(int AFocusedRecordIndex, bool AGoForward, bool AGoOnCycle, bool AGoIntoDetail, bool ASyncSelection = true);
	bool __fastcall FocusRecord(int AFocusedRecordIndex, bool ASyncSelection);
	void __fastcall MakeFocusedItemVisible();
	void __fastcall MakeFocusedRecordVisible();
	virtual void __fastcall MakeItemVisible(TcxCustomGridTableItem* AItem) = 0 ;
	virtual void __fastcall MakeRecordVisible(TcxCustomGridRecord* ARecord);
	virtual void __fastcall SelectAll();
	void __fastcall SelectAllRecords();
	bool __fastcall GoToFirst(bool ASyncSelection = true);
	bool __fastcall GoToLast(bool AGoIntoDetail, bool ASyncSelection = true);
	bool __fastcall GoToNext(bool AGoIntoDetail, bool ASyncSelection = true);
	bool __fastcall GoToPrev(bool AGoIntoDetail, bool ASyncSelection = true);
	bool __fastcall IsFinish();
	bool __fastcall IsStart();
	__property TcxGridTableDataCellViewInfo* ClickedCellViewInfo = {read=FClickedCellViewInfo, write=FClickedCellViewInfo};
	__property TcxGridEditingController* EditingController = {read=FEditingController};
	__property TcxCustomGridTableItem* EditingItem = {read=GetEditingItem, write=SetEditingItem};
	__property TcxGridFilterMRUItemsPopup* FilterMRUItemsPopup = {read=GetFilterMRUItemsPopup};
	__property TcxGridFilterPopup* FilterPopup = {read=GetFilterPopup};
	__property TcxCustomGridTableItem* FocusedItem = {read=FFocusedItem, write=SetFocusedItem};
	__property int FocusedItemIndex = {read=GetFocusedItemIndex, write=SetFocusedItemIndex, nodefault};
	__property TcxCustomGridRecord* FocusedRecord = {read=FFocusedRecord, write=SetFocusedRecord};
	__property int FocusedRecordIndex = {read=GetFocusedRecordIndex, write=SetFocusedRecordIndex, nodefault};
	__property TcxCustomGridTableView* GridView = {read=GetGridView};
	__property TcxCustomGridTableItem* IncSearchingItem = {read=GetIncSearchingItem};
	__property System::UnicodeString IncSearchingText = {read=GetIncSearchingText, write=SetIncSearchingText};
	__property bool IsPullFocusing = {read=FIsPullFocusing, nodefault};
	__property bool IsEditing = {read=GetIsEditing, nodefault};
	__property bool IsIncSearching = {read=GetIsIncSearching, nodefault};
	__property bool IsItemMoving = {read=GetIsItemMoving, nodefault};
	__property TcxCustomGridItemsCustomizationPopup* ItemsCustomizationPopup = {read=GetItemsCustomizationPopup};
	__property TcxCustomGridTableController* MasterController = {read=GetMasterController};
	__property TcxCustomGridTableItem* MovingItem = {read=FMovingItem};
	__property bool NewItemRecordFocused = {read=GetNewItemRecordFocused, write=SetNewItemRecordFocused, nodefault};
	__property int PrevFocusedRecordIndex = {read=GetPrevFocusedRecordIndex, write=FPrevFocusedRecordIndex, nodefault};
	__property int SelectedRecordCount = {read=GetSelectedRecordCount, nodefault};
	__property TcxCustomGridRecord* SelectedRecords[int Index] = {read=GetSelectedRecord};
	__property int TopRecordIndex = {read=GetTopRecordIndex, write=SetTopRecordIndex, nodefault};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridPartPainter : public Cxgridcustomview::TcxCustomGridCellPainter
{
	typedef Cxgridcustomview::TcxCustomGridCellPainter inherited;
	
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxCustomGridPartPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : Cxgridcustomview::TcxCustomGridCellPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomGridPartPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridCustomButtonPainter : public Cxgridcustomview::TcxCustomGridCellPainter
{
	typedef Cxgridcustomview::TcxCustomGridCellPainter inherited;
	
protected:
	virtual bool __fastcall CanDrawFocusRect() = 0 ;
	virtual void __fastcall DoDrawFocusRect();
	void __fastcall DrawFocusRect();
	virtual bool __fastcall ExcludeFromClipRect();
	virtual Cxgridcustomview::TcxCustomGridViewInfo* __fastcall GetGridViewInfo() = 0 ;
	virtual System::Types::TRect __fastcall GetFocusRect();
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridCustomButtonPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : Cxgridcustomview::TcxCustomGridCellPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridCustomButtonPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridCheckBoxPainter : public TcxGridCustomButtonPainter
{
	typedef TcxGridCustomButtonPainter inherited;
	
private:
	TcxGridCheckBoxViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DrawContent();
	virtual bool __fastcall ExcludeFromClipRect();
	__property TcxGridCheckBoxViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridCheckBoxPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : TcxGridCustomButtonPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridCheckBoxPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridPinPainter : public Cxgridcustomview::TcxCustomGridCellPainter
{
	typedef Cxgridcustomview::TcxCustomGridCellPainter inherited;
	
private:
	TcxGridPinViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DrawContent();
	virtual void __fastcall DrawImage();
	__property TcxGridPinViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridPinPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : Cxgridcustomview::TcxCustomGridCellPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridPinPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridPartCustomButtonPainter : public TcxGridCustomButtonPainter
{
	typedef TcxGridCustomButtonPainter inherited;
	
private:
	TcxGridCustomButtonViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual bool __fastcall CanDrawFocusRect();
	virtual Cxgridcustomview::TcxCustomGridViewInfo* __fastcall GetGridViewInfo();
	__property TcxGridCustomButtonViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridPartCustomButtonPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : TcxGridCustomButtonPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridPartCustomButtonPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridPartCloseButtonPainter : public TcxGridPartCustomButtonPainter
{
	typedef TcxGridPartCustomButtonPainter inherited;
	
protected:
	virtual void __fastcall DrawContent();
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridPartCloseButtonPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : TcxGridPartCustomButtonPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridPartCloseButtonPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridPartButtonPainter : public TcxGridPartCustomButtonPainter
{
	typedef TcxGridPartCustomButtonPainter inherited;
	
protected:
	virtual void __fastcall Paint();
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridPartButtonPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : TcxGridPartCustomButtonPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridPartButtonPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFilterActivateButtonPainter : public TcxGridPartCustomButtonPainter
{
	typedef TcxGridPartCustomButtonPainter inherited;
	
private:
	HIDESBASE TcxGridFilterActivateButtonViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DrawContent();
	__property TcxGridFilterActivateButtonViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridFilterActivateButtonPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : TcxGridPartCustomButtonPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridFilterActivateButtonPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFilterDropDownButtonPainter : public TcxGridPartCustomButtonPainter
{
	typedef TcxGridPartCustomButtonPainter inherited;
	
protected:
	virtual void __fastcall DrawContent();
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridFilterDropDownButtonPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : TcxGridPartCustomButtonPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridFilterDropDownButtonPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridPartContainerPainter : public TcxCustomGridPartPainter
{
	typedef TcxCustomGridPartPainter inherited;
	
private:
	TcxGridPartContainerViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DrawButtons();
	virtual bool __fastcall ExcludeFromClipRect();
	virtual void __fastcall Paint();
	__property TcxGridPartContainerViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridPartContainerPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : TcxCustomGridPartPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridPartContainerPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFilterPainter : public TcxGridPartContainerPainter
{
	typedef TcxGridPartContainerPainter inherited;
	
private:
	bool FTextWasUnderlined;
	HIDESBASE TcxGridFilterViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DrawBackground(const System::Types::TRect &R)/* overload */;
	virtual void __fastcall DrawContent();
	virtual void __fastcall DrawText();
	virtual void __fastcall PrepareCanvasForDrawText();
	virtual void __fastcall UnprepareCanvasForDrawText();
	__property TcxGridFilterViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridFilterPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : TcxGridPartContainerPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridFilterPainter() { }
	
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  DrawBackground(){ Cxgridcustomview::TcxCustomGridCellPainter::DrawBackground(); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFindPanelPainter : public TcxGridPartContainerPainter
{
	typedef TcxGridPartContainerPainter inherited;
	
private:
	HIDESBASE TcxGridFindPanelViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DrawBackground(const System::Types::TRect &R)/* overload */;
	virtual void __fastcall DrawBorders();
	__property TcxGridFindPanelViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridFindPanelPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : TcxGridPartContainerPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridFindPanelPainter() { }
	
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  DrawBackground(){ Cxgridcustomview::TcxCustomGridCellPainter::DrawBackground(); }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridTableDataCellPainterClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridTableDataCellPainter : public Cxgridcustomview::TcxCustomGridCellPainter
{
	typedef Cxgridcustomview::TcxCustomGridCellPainter inherited;
	
private:
	TcxGridTableDataCellViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DrawContent();
	virtual bool __fastcall CanDrawFocusRect();
	virtual void __fastcall DoDrawFocusRect();
	virtual void __fastcall DrawEditViewInfo();
	void __fastcall DrawFocusRect();
	virtual System::Types::TRect __fastcall GetFocusRect();
	virtual void __fastcall Paint();
	__property TcxGridTableDataCellViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridTableDataCellPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : Cxgridcustomview::TcxCustomGridCellPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridTableDataCellPainter() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomGridRecordPainterClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridRecordPainter : public Cxgridcustomview::TcxCustomGridCellPainter
{
	typedef Cxgridcustomview::TcxCustomGridCellPainter inherited;
	
private:
	TcxCustomGridRecordViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall AfterPaint();
	virtual void __fastcall BeforePaint();
	virtual void __fastcall DrawBackground()/* overload */;
	virtual void __fastcall DrawExpandButton();
	virtual bool __fastcall DrawExpandButtonBeforePaint();
	virtual void __fastcall DrawFocusRect();
	void __fastcall ExcludeRectFromBackground(const System::Types::TRect &R);
	virtual void __fastcall ExcludeFromBackground();
	virtual Cxlookandfeelpainters::TcxExpandButtonState __fastcall GetExpandButtonState();
	virtual void __fastcall Paint();
	__property TcxCustomGridRecordViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxCustomGridRecordPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : Cxgridcustomview::TcxCustomGridCellPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomGridRecordPainter() { }
	
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  DrawBackground(const System::Types::TRect &R){ Cxgridcustomview::TcxCustomGridCellPainter::DrawBackground(R); }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomGridRecordsPainterClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridRecordsPainter : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Cxgraphics::TcxCanvas* FCanvas;
	TcxCustomGridRecordsViewInfo* FViewInfo;
	
protected:
	virtual void __fastcall DrawItems();
	virtual void __fastcall Paint();
	__property Cxgraphics::TcxCanvas* Canvas = {read=FCanvas};
	__property TcxCustomGridRecordsViewInfo* ViewInfo = {read=FViewInfo};
	
public:
	__fastcall virtual TcxCustomGridRecordsPainter(Cxgraphics::TcxCanvas* ACanvas, TcxCustomGridRecordsViewInfo* AViewInfo);
	void __fastcall MainPaint();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomGridRecordsPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxNavigatorSitePainter : public Cxgridcustomview::TcxCustomGridCellPainter
{
	typedef Cxgridcustomview::TcxCustomGridCellPainter inherited;
	
protected:
	virtual bool __fastcall ExcludeFromClipRect();
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxNavigatorSitePainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : Cxgridcustomview::TcxCustomGridCellPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxNavigatorSitePainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridTablePainter : public Cxgridcustomview::TcxCustomGridPainter
{
	typedef Cxgridcustomview::TcxCustomGridPainter inherited;
	
private:
	HIDESBASE TcxCustomGridTableController* __fastcall GetController();
	HIDESBASE TcxCustomGridTableViewInfo* __fastcall GetViewInfo();
	TcxCustomGridTableView* __fastcall GetGridView();
	
protected:
	virtual bool __fastcall CanOffset(int AItemsOffset, int DX, int DY);
	virtual void __fastcall DrawBackground();
	virtual void __fastcall DrawFilterBar();
	virtual void __fastcall DrawFindPanel();
	virtual void __fastcall DrawInfoText();
	virtual void __fastcall DrawNavigator();
	virtual void __fastcall DrawRecords();
	virtual void __fastcall Offset(int AItemsOffset)/* overload */;
	virtual void __fastcall Offset(int DX, int DY)/* overload */;
	virtual void __fastcall PaintBefore();
	virtual void __fastcall PaintContent();
	virtual void __fastcall RepaintOnOffset();
	
public:
	void __fastcall DoOffset(int AItemsOffset, int DX, int DY);
	virtual void __fastcall DrawFocusRect(const System::Types::TRect &R, bool AHideFocusRect);
	__property TcxCustomGridTableController* Controller = {read=GetController};
	__property TcxCustomGridTableView* GridView = {read=GetGridView};
	__property TcxCustomGridTableViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxGridViewHandler.Create */ inline __fastcall virtual TcxCustomGridTablePainter(Cxgridcustomview::TcxCustomGridView* AGridView) : Cxgridcustomview::TcxCustomGridPainter(AGridView) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxCustomGridTablePainter() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TcxGridPartAlignment : unsigned char { gpaTop, gpaBottom };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridPartViewInfo : public Cxgridcustomview::TcxCustomGridViewCellViewInfo
{
	typedef Cxgridcustomview::TcxCustomGridViewCellViewInfo inherited;
	
private:
	int FHeight;
	bool FIsPart;
	HIDESBASE TcxCustomGridTableView* __fastcall GetGridView();
	TcxCustomGridTableViewInfo* __fastcall GetGridViewInfo();
	int __fastcall GetIndex();
	void __fastcall SetIndex(int Value);
	
protected:
	virtual System::Types::TRect __fastcall CalculateBounds();
	virtual void __fastcall CalculateInvisible();
	virtual void __fastcall CalculateVisible();
	virtual bool __fastcall CustomDrawBackground(Cxgraphics::TcxCanvas* ACanvas);
	virtual TcxGridPartAlignment __fastcall GetAlignment() = 0 ;
	virtual bool __fastcall GetIsAutoWidth() = 0 ;
	virtual bool __fastcall GetIsPart();
	virtual bool __fastcall GetIsScrollable() = 0 ;
	virtual Cxgridcustomview::TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	virtual bool __fastcall HasCustomDrawBackground();
	virtual void __fastcall InitHitTest(Cxgridcustomview::TcxCustomGridHitTest* AHitTest);
	__property int Height = {read=FHeight, write=FHeight, nodefault};
	__property bool IsPart = {read=FIsPart, nodefault};
	
public:
	__fastcall virtual TcxCustomGridPartViewInfo(TcxCustomGridTableViewInfo* AGridViewInfo);
	virtual void __fastcall AfterConstruction();
	virtual void __fastcall BeforeDestruction();
	void __fastcall MainCalculate();
	__property TcxGridPartAlignment Alignment = {read=GetAlignment, nodefault};
	__property TcxCustomGridTableView* GridView = {read=GetGridView};
	__property TcxCustomGridTableViewInfo* GridViewInfo = {read=GetGridViewInfo};
	__property int Index = {read=GetIndex, write=SetIndex, nodefault};
	__property bool IsAutoWidth = {read=GetIsAutoWidth, nodefault};
	__property bool IsScrollable = {read=GetIsScrollable, nodefault};
public:
	/* TcxCustomGridViewCellViewInfo.Destroy */ inline __fastcall virtual ~TcxCustomGridPartViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridPartCustomCellViewInfo : public Cxgridcustomview::TcxCustomGridViewCellViewInfo
{
	typedef Cxgridcustomview::TcxCustomGridViewCellViewInfo inherited;
	
protected:
	virtual int __fastcall CalculateHeight();
	virtual int __fastcall CalculateWidth();
	virtual bool __fastcall CaptureMouseOnPress();
	virtual int __fastcall DoCalculateHeight();
	virtual int __fastcall DoCalculateWidth();
	virtual System::UnicodeString __fastcall GetAdornerTargetElementName();
	virtual Cxlookandfeelpainters::TcxButtonState __fastcall GetButtonState();
	virtual bool __fastcall GetEnabled();
	virtual int __fastcall GetHeight();
	virtual bool __fastcall GetHotTrack();
	virtual bool __fastcall GetFocused() = 0 ;
	virtual int __fastcall GetWidth();
	
public:
	__property bool Enabled = {read=GetEnabled, nodefault};
	__property bool Focused = {read=GetFocused, nodefault};
public:
	/* TcxCustomGridViewCellViewInfo.Create */ inline __fastcall virtual TcxGridPartCustomCellViewInfo(Cxgridcustomview::TcxCustomGridViewInfo* AGridViewInfo) : Cxgridcustomview::TcxCustomGridViewCellViewInfo(AGridViewInfo) { }
	/* TcxCustomGridViewCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridPartCustomCellViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridCustomToggleCellViewInfo : public TcxGridPartCustomCellViewInfo
{
	typedef TcxGridPartCustomCellViewInfo inherited;
	
protected:
	virtual bool __fastcall CanToggle();
	virtual bool __fastcall GetFocused();
	virtual void __fastcall Toggle() = 0 ;
public:
	/* TcxCustomGridViewCellViewInfo.Create */ inline __fastcall virtual TcxGridCustomToggleCellViewInfo(Cxgridcustomview::TcxCustomGridViewInfo* AGridViewInfo) : TcxGridPartCustomCellViewInfo(AGridViewInfo) { }
	/* TcxCustomGridViewCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridCustomToggleCellViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridCheckBoxViewInfo : public TcxGridCustomToggleCellViewInfo
{
	typedef TcxGridCustomToggleCellViewInfo inherited;
	
private:
	Cxlookandfeelpainters::TcxCheckBoxState FCheckBoxState;
	
protected:
	virtual Cxlookandfeelpainters::TcxCheckBoxState __fastcall CalculateCheckBoxState();
	virtual void __fastcall Click();
	virtual int __fastcall DoCalculateHeight();
	virtual int __fastcall DoCalculateWidth();
	virtual Cxgridcustomview::TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual void __fastcall Toggle();
	__property Cxlookandfeelpainters::TcxCheckBoxState CheckBoxState = {read=FCheckBoxState, nodefault};
	
public:
	virtual void __fastcall Calculate(const System::Types::TRect &ABounds)/* overload */;
public:
	/* TcxCustomGridViewCellViewInfo.Create */ inline __fastcall virtual TcxGridCheckBoxViewInfo(Cxgridcustomview::TcxCustomGridViewInfo* AGridViewInfo) : TcxGridCustomToggleCellViewInfo(AGridViewInfo) { }
	/* TcxCustomGridViewCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridCheckBoxViewInfo() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Calculate(int ALeftBound, int ATopBound, int AWidth = 0xffffffff, int AHeight = 0xffffffff){ Cxgridcustomview::TcxCustomGridCellViewInfo::Calculate(ALeftBound, ATopBound, AWidth, AHeight); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridPinViewInfo : public TcxGridCustomToggleCellViewInfo
{
	typedef TcxGridCustomToggleCellViewInfo inherited;
	
private:
	bool FPinned;
	
protected:
	virtual bool __fastcall CalculatePinned();
	virtual bool __fastcall CanDrawImage();
	virtual bool __fastcall CaptureMouseOnPress();
	virtual int __fastcall DoCalculateHeight();
	virtual int __fastcall DoCalculateWidth();
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual System::Types::TRect __fastcall GetImageBounds();
	virtual System::Types::TSize __fastcall GetImageSize();
	virtual System::Types::TRect __fastcall GetMargins();
	virtual Cxgridcustomview::TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	virtual void __fastcall Toggle();
	__property bool Pinned = {read=FPinned, nodefault};
	
public:
	virtual void __fastcall Calculate(int ALeftBound, int ATopBound, int AWidth = 0xffffffff, int AHeight = 0xffffffff)/* overload */;
public:
	/* TcxCustomGridViewCellViewInfo.Create */ inline __fastcall virtual TcxGridPinViewInfo(Cxgridcustomview::TcxCustomGridViewInfo* AGridViewInfo) : TcxGridCustomToggleCellViewInfo(AGridViewInfo) { }
	/* TcxCustomGridViewCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridPinViewInfo() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Calculate(const System::Types::TRect &ABounds){ Cxgridcustomview::TcxCustomGridCellViewInfo::Calculate(ABounds); }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridPartContainerItemViewInfoClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridPartContainerItemViewInfo : public TcxGridPartCustomCellViewInfo
{
	typedef TcxGridPartCustomCellViewInfo inherited;
	
private:
	TcxGridPartContainerButtonsViewInfo* FContainer;
	HIDESBASE TcxCustomGridTableView* __fastcall GetGridView();
	
protected:
	virtual void __fastcall DoMouseLeave();
	virtual bool __fastcall GetAdornerTargetElementVisible();
	virtual Dxfilterbox::TcxFilterBoxButtonAlignment __fastcall GetAlignment();
	virtual Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	virtual bool __fastcall GetVisible();
	virtual bool __fastcall GetEnabled();
	
public:
	__fastcall virtual TcxGridPartContainerItemViewInfo(TcxGridPartContainerButtonsViewInfo* AContainer);
	virtual bool __fastcall MouseDown(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, System::Uitypes::TMouseButton AButton, System::Classes::TShiftState AShift);
	virtual bool __fastcall MouseMove(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, System::Classes::TShiftState AShift);
	virtual bool __fastcall MouseUp(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, System::Uitypes::TMouseButton AButton, System::Classes::TShiftState AShift);
	__property Dxfilterbox::TcxFilterBoxButtonAlignment Alignment = {read=GetAlignment, nodefault};
	__property TcxGridPartContainerButtonsViewInfo* Container = {read=FContainer};
	__property TcxCustomGridTableView* GridView = {read=GetGridView};
public:
	/* TcxCustomGridViewCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridPartContainerItemViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridCustomButtonViewInfo : public TcxGridPartContainerItemViewInfo
{
	typedef TcxGridPartContainerItemViewInfo inherited;
	
public:
	/* TcxGridPartContainerItemViewInfo.Create */ inline __fastcall virtual TcxGridCustomButtonViewInfo(TcxGridPartContainerButtonsViewInfo* AContainer) : TcxGridPartContainerItemViewInfo(AContainer) { }
	
public:
	/* TcxCustomGridViewCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridCustomButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridPartCloseButtonViewInfo : public TcxGridCustomButtonViewInfo
{
	typedef TcxGridCustomButtonViewInfo inherited;
	
protected:
	virtual int __fastcall DoCalculateHeight();
	virtual int __fastcall DoCalculateWidth();
	virtual System::UnicodeString __fastcall GetAdornerTargetElementName();
	virtual Cxgridcustomview::TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	virtual bool __fastcall GetFocused();
public:
	/* TcxGridPartContainerItemViewInfo.Create */ inline __fastcall virtual TcxGridPartCloseButtonViewInfo(TcxGridPartContainerButtonsViewInfo* AContainer) : TcxGridCustomButtonViewInfo(AContainer) { }
	
public:
	/* TcxCustomGridViewCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridPartCloseButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridPartButtonViewInfo : public TcxGridCustomButtonViewInfo
{
	typedef TcxGridCustomButtonViewInfo inherited;
	
protected:
	virtual int __fastcall DoCalculateHeight();
	virtual int __fastcall DoCalculateWidth();
	virtual System::Classes::TAlignment __fastcall GetAlignmentHorz();
	virtual Cxclasses::TcxAlignmentVert __fastcall GetAlignmentVert();
	virtual Cxgeometry::TcxBorders __fastcall GetBorders();
	virtual int __fastcall GetBorderWidth(Cxgeometry::TcxBorder AIndex);
	virtual Cxgridcustomview::TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	virtual void __fastcall GetViewParams(Cxgraphics::TcxViewParams &AParams);
	virtual bool __fastcall GetFocused();
public:
	/* TcxGridPartContainerItemViewInfo.Create */ inline __fastcall virtual TcxGridPartButtonViewInfo(TcxGridPartContainerButtonsViewInfo* AContainer) : TcxGridCustomButtonViewInfo(AContainer) { }
	
public:
	/* TcxCustomGridViewCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridPartButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFindPanelEditViewInfo : public TcxGridPartContainerItemViewInfo
{
	typedef TcxGridPartContainerItemViewInfo inherited;
	
private:
	TcxGridFindPanelButtonsViewInfo* __fastcall GetContainer();
	HIDESBASE TcxCustomGridTableController* __fastcall GetController();
	TcxGridFindPanel* __fastcall GetFindPanel();
	
protected:
	virtual void __fastcall AdjustWidth(int &AWidth);
	virtual int __fastcall DoCalculateHeight();
	virtual int __fastcall DoCalculateWidth();
	virtual System::UnicodeString __fastcall GetAdornerTargetElementName();
	virtual void __fastcall GetViewParams(Cxgraphics::TcxViewParams &AParams);
	virtual bool __fastcall GetFocused();
	void __fastcall ShowEdit();
	void __fastcall HideEdit();
	__property TcxGridFindPanelButtonsViewInfo* Container = {read=GetContainer};
	__property TcxCustomGridTableController* Controller = {read=GetController};
	__property TcxGridFindPanel* FindPanel = {read=GetFindPanel};
	
public:
	virtual void __fastcall Calculate(int ALeftBound, int ATopBound, int AWidth = 0xffffffff, int AHeight = 0xffffffff)/* overload */;
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	virtual Cxgridcustomview::TcxCustomGridHitTest* __fastcall GetHitTest(const System::Types::TPoint &P);
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas = (Cxgraphics::TcxCanvas*)(0x0));
public:
	/* TcxGridPartContainerItemViewInfo.Create */ inline __fastcall virtual TcxGridFindPanelEditViewInfo(TcxGridPartContainerButtonsViewInfo* AContainer) : TcxGridPartContainerItemViewInfo(AContainer) { }
	
public:
	/* TcxCustomGridViewCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridFindPanelEditViewInfo() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Calculate(const System::Types::TRect &ABounds){ Cxgridcustomview::TcxCustomGridCellViewInfo::Calculate(ABounds); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFindPanelCloseButtonViewInfo : public TcxGridPartCloseButtonViewInfo
{
	typedef TcxGridPartCloseButtonViewInfo inherited;
	
private:
	TcxGridFindPanelButtonsViewInfo* __fastcall GetContainer();
	HIDESBASE TcxCustomGridTableController* __fastcall GetController();
	
protected:
	virtual void __fastcall Click();
	virtual bool __fastcall GetFocused();
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual Cxfindpanel::TcxFindPanelItemKind __fastcall GetKind();
	virtual bool __fastcall GetVisible();
	__property TcxGridFindPanelButtonsViewInfo* Container = {read=GetContainer};
	__property TcxCustomGridTableController* Controller = {read=GetController};
	__property Cxfindpanel::TcxFindPanelItemKind Kind = {read=GetKind, nodefault};
public:
	/* TcxGridPartContainerItemViewInfo.Create */ inline __fastcall virtual TcxGridFindPanelCloseButtonViewInfo(TcxGridPartContainerButtonsViewInfo* AContainer) : TcxGridPartCloseButtonViewInfo(AContainer) { }
	
public:
	/* TcxCustomGridViewCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridFindPanelCloseButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFindPanelButtonViewInfo : public TcxGridPartButtonViewInfo
{
	typedef TcxGridPartButtonViewInfo inherited;
	
private:
	TcxGridFindPanelButtonsViewInfo* __fastcall GetContainer();
	HIDESBASE TcxCustomGridTableController* __fastcall GetController();
	TcxGridFindPanel* __fastcall GetFindPanel();
	
protected:
	virtual void __fastcall Click();
	virtual int __fastcall DoCalculateHeight();
	virtual int __fastcall DoCalculateWidth();
	virtual Dxfilterbox::TcxFilterBoxButtonAlignment __fastcall GetAlignment();
	virtual bool __fastcall GetEnabled();
	virtual bool __fastcall GetFocused();
	virtual Cxfindpanel::TcxFindPanelItemKind __fastcall GetKind();
	virtual System::UnicodeString __fastcall GetText();
	virtual bool __fastcall GetVisible();
	__property TcxGridFindPanelButtonsViewInfo* Container = {read=GetContainer};
	__property TcxCustomGridTableController* Controller = {read=GetController};
	__property TcxGridFindPanel* FindPanel = {read=GetFindPanel};
	__property Cxfindpanel::TcxFindPanelItemKind Kind = {read=GetKind, nodefault};
public:
	/* TcxGridPartContainerItemViewInfo.Create */ inline __fastcall virtual TcxGridFindPanelButtonViewInfo(TcxGridPartContainerButtonsViewInfo* AContainer) : TcxGridPartButtonViewInfo(AContainer) { }
	
public:
	/* TcxCustomGridViewCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridFindPanelButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFindPanelFindButtonViewInfo : public TcxGridFindPanelButtonViewInfo
{
	typedef TcxGridFindPanelButtonViewInfo inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetAdornerTargetElementName();
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual Cxfindpanel::TcxFindPanelItemKind __fastcall GetKind();
public:
	/* TcxGridPartContainerItemViewInfo.Create */ inline __fastcall virtual TcxGridFindPanelFindButtonViewInfo(TcxGridPartContainerButtonsViewInfo* AContainer) : TcxGridFindPanelButtonViewInfo(AContainer) { }
	
public:
	/* TcxCustomGridViewCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridFindPanelFindButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFindPanelClearButtonViewInfo : public TcxGridFindPanelButtonViewInfo
{
	typedef TcxGridFindPanelButtonViewInfo inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetAdornerTargetElementName();
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual Cxfindpanel::TcxFindPanelItemKind __fastcall GetKind();
public:
	/* TcxGridPartContainerItemViewInfo.Create */ inline __fastcall virtual TcxGridFindPanelClearButtonViewInfo(TcxGridPartContainerButtonsViewInfo* AContainer) : TcxGridFindPanelButtonViewInfo(AContainer) { }
	
public:
	/* TcxCustomGridViewCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridFindPanelClearButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFindPanelNextButtonViewInfo : public TcxGridFindPanelButtonViewInfo
{
	typedef TcxGridFindPanelButtonViewInfo inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetAdornerTargetElementName();
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual Cxfindpanel::TcxFindPanelItemKind __fastcall GetKind();
public:
	/* TcxGridPartContainerItemViewInfo.Create */ inline __fastcall virtual TcxGridFindPanelNextButtonViewInfo(TcxGridPartContainerButtonsViewInfo* AContainer) : TcxGridFindPanelButtonViewInfo(AContainer) { }
	
public:
	/* TcxCustomGridViewCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridFindPanelNextButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFindPanelPreviousButtonViewInfo : public TcxGridFindPanelButtonViewInfo
{
	typedef TcxGridFindPanelButtonViewInfo inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetAdornerTargetElementName();
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual Cxfindpanel::TcxFindPanelItemKind __fastcall GetKind();
public:
	/* TcxGridPartContainerItemViewInfo.Create */ inline __fastcall virtual TcxGridFindPanelPreviousButtonViewInfo(TcxGridPartContainerButtonsViewInfo* AContainer) : TcxGridFindPanelButtonViewInfo(AContainer) { }
	
public:
	/* TcxCustomGridViewCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridFindPanelPreviousButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFilterCloseButtonViewInfo : public TcxGridPartCloseButtonViewInfo
{
	typedef TcxGridPartCloseButtonViewInfo inherited;
	
private:
	TcxGridFilterButtonsViewInfo* __fastcall GetContainer();
	Cxcustomdata::TcxDataFilterCriteria* __fastcall GetFilter();
	
protected:
	virtual void __fastcall Click();
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual bool __fastcall GetVisible();
	__property TcxGridFilterButtonsViewInfo* Container = {read=GetContainer};
	__property Cxcustomdata::TcxDataFilterCriteria* Filter = {read=GetFilter};
public:
	/* TcxGridPartContainerItemViewInfo.Create */ inline __fastcall virtual TcxGridFilterCloseButtonViewInfo(TcxGridPartContainerButtonsViewInfo* AContainer) : TcxGridPartCloseButtonViewInfo(AContainer) { }
	
public:
	/* TcxCustomGridViewCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridFilterCloseButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFilterActivateButtonViewInfo : public TcxGridCustomButtonViewInfo
{
	typedef TcxGridCustomButtonViewInfo inherited;
	
private:
	bool __fastcall GetChecked();
	TcxGridFilterButtonsViewInfo* __fastcall GetContainer();
	Cxcustomdata::TcxDataFilterCriteria* __fastcall GetFilter();
	
protected:
	virtual void __fastcall Click();
	virtual int __fastcall DoCalculateHeight();
	virtual int __fastcall DoCalculateWidth();
	virtual System::UnicodeString __fastcall GetAdornerTargetElementName();
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual Cxgridcustomview::TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	virtual bool __fastcall GetVisible();
	virtual bool __fastcall GetFocused();
	__property TcxGridFilterButtonsViewInfo* Container = {read=GetContainer};
	__property Cxcustomdata::TcxDataFilterCriteria* Filter = {read=GetFilter};
	
public:
	__property bool Checked = {read=GetChecked, nodefault};
public:
	/* TcxGridPartContainerItemViewInfo.Create */ inline __fastcall virtual TcxGridFilterActivateButtonViewInfo(TcxGridPartContainerButtonsViewInfo* AContainer) : TcxGridCustomButtonViewInfo(AContainer) { }
	
public:
	/* TcxCustomGridViewCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridFilterActivateButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFilterDropDownButtonViewInfo : public TcxGridCustomButtonViewInfo
{
	typedef TcxGridCustomButtonViewInfo inherited;
	
private:
	TcxGridFilterButtonsViewInfo* __fastcall GetContainer();
	TcxGridFilterMRUItemsPopup* __fastcall GetDropDownWindowValue();
	
protected:
	virtual void __fastcall BeforeStateChange();
	virtual bool __fastcall CaptureMouseOnPress();
	virtual int __fastcall DoCalculateHeight();
	virtual int __fastcall DoCalculateWidth();
	virtual System::UnicodeString __fastcall GetAdornerTargetElementName();
	virtual Dxfilterbox::TcxFilterBoxButtonAlignment __fastcall GetAlignment();
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual Cxgridcustomview::TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	virtual bool __fastcall GetVisible();
	virtual bool __fastcall GetFocused();
	virtual bool __fastcall DropDownWindowExists();
	virtual Dxuielementpopupwindow::TdxUIElementPopupWindow* __fastcall GetDropDownWindow();
	virtual System::Types::TRect __fastcall GetDropDownWindowOwnerBounds();
	__property TcxGridFilterButtonsViewInfo* Container = {read=GetContainer};
	__property TcxGridFilterMRUItemsPopup* DropDownWindow = {read=GetDropDownWindowValue};
	
public:
	virtual void __fastcall Calculate(int ALeftBound, int ATopBound, int AWidth = 0xffffffff, int AHeight = 0xffffffff)/* overload */;
public:
	/* TcxGridPartContainerItemViewInfo.Create */ inline __fastcall virtual TcxGridFilterDropDownButtonViewInfo(TcxGridPartContainerButtonsViewInfo* AContainer) : TcxGridCustomButtonViewInfo(AContainer) { }
	
public:
	/* TcxCustomGridViewCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridFilterDropDownButtonViewInfo() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Calculate(const System::Types::TRect &ABounds){ Cxgridcustomview::TcxCustomGridCellViewInfo::Calculate(ABounds); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFilterCustomizeButtonViewInfo : public TcxGridPartButtonViewInfo
{
	typedef TcxGridPartButtonViewInfo inherited;
	
private:
	TcxGridFilterButtonsViewInfo* __fastcall GetContainer();
	
protected:
	virtual void __fastcall Click();
	virtual System::UnicodeString __fastcall GetAdornerTargetElementName();
	virtual Dxfilterbox::TcxFilterBoxButtonAlignment __fastcall GetAlignment();
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual System::UnicodeString __fastcall GetText();
	virtual void __fastcall GetViewParams(Cxgraphics::TcxViewParams &AParams);
	virtual bool __fastcall GetVisible();
	__property TcxGridFilterButtonsViewInfo* Container = {read=GetContainer};
public:
	/* TcxGridPartContainerItemViewInfo.Create */ inline __fastcall virtual TcxGridFilterCustomizeButtonViewInfo(TcxGridPartContainerButtonsViewInfo* AContainer) : TcxGridPartButtonViewInfo(AContainer) { }
	
public:
	/* TcxCustomGridViewCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridFilterCustomizeButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridPartContainerButtonsViewInfo : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TcxGridPartContainerItemViewInfo* operator[](int Index) { return this->Items[Index]; }
	
private:
	bool FIsRightToLeftConverted;
	Dxcoreclasses::TdxFastObjectList* FItems;
	TcxGridPartContainerViewInfo* FOwner;
	int __fastcall GetCount();
	TcxCustomGridTableView* __fastcall GetGridView();
	int __fastcall GetHeight();
	TcxGridPartContainerItemViewInfo* __fastcall GetItem(int Index);
	Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	int __fastcall GetWidthLeftPart();
	int __fastcall GetWidthRightPart();
	
protected:
	virtual void __fastcall AddItems() = 0 ;
	virtual void __fastcall DestroyItems();
	virtual void __fastcall AddAdornerTargetElements(System::Classes::TStrings* AList);
	virtual int __fastcall CalculateBestWidth();
	virtual bool __fastcall IsItemCalculatedSingly(TcxGridPartCustomCellViewInfo* AItem);
	virtual int __fastcall GetButtonsOffset();
	virtual int __fastcall GetFirstOffset();
	virtual int __fastcall GetTopBound(TcxGridPartCustomCellViewInfo* AItem, const System::Types::TRect &ABounds);
	virtual int __fastcall GetWidth(Dxfilterbox::TcxFilterBoxButtonAlignment AAlignment);
	virtual bool __fastcall GetEnabled();
	virtual int __fastcall GetVertOffset();
	__property TcxCustomGridTableView* GridView = {read=GetGridView};
	__property TcxGridPartContainerViewInfo* Owner = {read=FOwner};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=GetScaleFactor};
	
public:
	__fastcall virtual TcxGridPartContainerButtonsViewInfo(TcxGridPartContainerViewInfo* AOwner);
	__fastcall virtual ~TcxGridPartContainerButtonsViewInfo();
	TcxGridPartContainerItemViewInfo* __fastcall AddItem(TcxGridPartContainerItemViewInfoClass AItemClass);
	virtual void __fastcall Calculate(const System::Types::TRect &ABounds);
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	virtual Cxgridcustomview::TcxCustomGridHitTest* __fastcall GetHitTest(const System::Types::TPoint &P);
	void __fastcall RightToLeftConversion(const System::Types::TRect &ABounds);
	__property int Count = {read=GetCount, nodefault};
	__property bool Enabled = {read=GetEnabled, nodefault};
	__property int Height = {read=GetHeight, nodefault};
	__property bool IsRightToLeftConverted = {read=FIsRightToLeftConverted, write=FIsRightToLeftConverted, nodefault};
	__property TcxGridPartContainerItemViewInfo* Items[int Index] = {read=GetItem/*, default*/};
	__property int WidthLeftPart = {read=GetWidthLeftPart, nodefault};
	__property int WidthRightPart = {read=GetWidthRightPart, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFilterButtonsViewInfo : public TcxGridPartContainerButtonsViewInfo
{
	typedef TcxGridPartContainerButtonsViewInfo inherited;
	
private:
	TcxGridFilterViewInfo* __fastcall GetFilterViewInfo();
	
protected:
	TcxGridFilterDropDownButtonViewInfo* FDropDownButtonViewInfo;
	virtual void __fastcall AddItems();
	virtual void __fastcall DestroyItems();
	virtual int __fastcall GetWidth(Dxfilterbox::TcxFilterBoxButtonAlignment AAlignment);
	virtual bool __fastcall GetEnabled();
	__property TcxGridFilterViewInfo* FilterViewInfo = {read=GetFilterViewInfo};
	
public:
	__property TcxGridFilterDropDownButtonViewInfo* DropDownButtonViewInfo = {read=FDropDownButtonViewInfo};
public:
	/* TcxGridPartContainerButtonsViewInfo.Create */ inline __fastcall virtual TcxGridFilterButtonsViewInfo(TcxGridPartContainerViewInfo* AOwner) : TcxGridPartContainerButtonsViewInfo(AOwner) { }
	/* TcxGridPartContainerButtonsViewInfo.Destroy */ inline __fastcall virtual ~TcxGridFilterButtonsViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFindPanelButtonsViewInfo : public TcxGridPartContainerButtonsViewInfo
{
	typedef TcxGridPartContainerButtonsViewInfo inherited;
	
private:
	TcxGridFindPanelEditViewInfo* FEditViewInfo;
	TcxGridFindPanelViewInfo* __fastcall GetFindPanelViewInfo();
	
protected:
	virtual void __fastcall AddItems();
	virtual void __fastcall DestroyItems();
	virtual int __fastcall CalculateBestWidth();
	void __fastcall CalculateEditViewInfo(const System::Types::TRect &ABounds);
	virtual int __fastcall GetEditMaxWidth();
	virtual int __fastcall GetEditMinWidth();
	virtual int __fastcall GetWidth(Dxfilterbox::TcxFilterBoxButtonAlignment AAlignment);
	virtual bool __fastcall IsItemCalculatedSingly(TcxGridPartCustomCellViewInfo* AItem);
	virtual void __fastcall OffsetRightAlignedItemsToEditViewInfo();
	__property TcxGridFindPanelEditViewInfo* EditViewInfo = {read=FEditViewInfo};
	__property TcxGridFindPanelViewInfo* FindPanelViewInfo = {read=GetFindPanelViewInfo};
	
public:
	virtual void __fastcall Calculate(const System::Types::TRect &ABounds);
public:
	/* TcxGridPartContainerButtonsViewInfo.Create */ inline __fastcall virtual TcxGridFindPanelButtonsViewInfo(TcxGridPartContainerViewInfo* AOwner) : TcxGridPartContainerButtonsViewInfo(AOwner) { }
	/* TcxGridPartContainerButtonsViewInfo.Destroy */ inline __fastcall virtual ~TcxGridFindPanelButtonsViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridPartContainerViewInfo : public TcxCustomGridPartViewInfo
{
	typedef TcxCustomGridPartViewInfo inherited;
	
private:
	TcxGridPartContainerButtonsViewInfo* FButtonsViewInfo;
	
protected:
	virtual void __fastcall GetAdornerTargetElements(System::Classes::TStrings* AList);
	virtual System::Types::TRect __fastcall CalculateButtonsViewInfoBounds();
	virtual int __fastcall CalculateHeight();
	virtual int __fastcall CalculateWidth();
	virtual Cxclasses::TcxAlignmentVert __fastcall GetAlignmentVert();
	virtual Vcl::Graphics::TBitmap* __fastcall GetBackgroundBitmap();
	virtual int __fastcall GetButtonsOffset();
	virtual int __fastcall GetFirstOffset();
	virtual bool __fastcall GetHotTrack();
	virtual bool __fastcall GetIsAutoWidth();
	virtual bool __fastcall GetIsCheck();
	virtual bool __fastcall GetIsScrollable();
	virtual int __fastcall GetVertOffset();
	virtual bool __fastcall InvalidateOnStateChange();
	virtual TcxGridPartContainerButtonsViewInfo* __fastcall CreateButtonsViewInfo() = 0 ;
	virtual void __fastcall DestroyButtonsViewInfo();
	
public:
	__fastcall virtual TcxGridPartContainerViewInfo(TcxCustomGridTableViewInfo* AGridViewInfo);
	__fastcall virtual ~TcxGridPartContainerViewInfo();
	virtual void __fastcall Calculate(int ALeftBound, int ATopBound, int AWidth = 0xffffffff, int AHeight = 0xffffffff)/* overload */;
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	virtual Cxgridcustomview::TcxCustomGridHitTest* __fastcall GetHitTest(const System::Types::TPoint &P);
	__property TcxGridPartContainerButtonsViewInfo* ButtonsViewInfo = {read=FButtonsViewInfo};
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Calculate(const System::Types::TRect &ABounds){ Cxgridcustomview::TcxCustomGridCellViewInfo::Calculate(ABounds); }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridFilterViewInfoClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFilterViewInfo : public TcxGridPartContainerViewInfo
{
	typedef TcxGridPartContainerViewInfo inherited;
	
private:
	Dxfilterbox::TdxFilterBoxTokenCriteriaViewInfo* FTokenCriteriaViewInfo;
	TcxGridFilterButtonsViewInfo* __fastcall GetButtonsViewInfo();
	Cxcustomdata::TcxDataFilterCriteria* __fastcall GetFilter();
	TcxCustomGridTableFiltering* __fastcall GetFiltering();
	Cxcustomdata::TcxDataFilterCriteria* __fastcall GetMainFilter();
	Dxfilterbox::TdxFilterBoxTokenCriteria* __fastcall GetTokenCriteria();
	Cxcontrols::TcxControl* __fastcall GetTokenCriteriaControl();
	Dxfilterbox::_di_IdxFilterBoxTokenCriteriaOptions __fastcall GetTokenCriteriaOptions();
	void __fastcall GetTokenCriteriaParams(Cxgraphics::TcxViewParams &AParams);
	
protected:
	virtual int __fastcall CalculateHeight();
	virtual System::Types::TRect __fastcall CalculateTokenCriteriaViewInfoBounds();
	virtual TcxGridPartContainerButtonsViewInfo* __fastcall CreateButtonsViewInfo();
	virtual Dxfilterbox::TdxFilterBoxTokenCriteriaViewInfo* __fastcall CreateTokenCriteriaViewInfo();
	virtual TcxGridPartAlignment __fastcall GetAlignment();
	virtual int __fastcall GetButtonsOffset();
	virtual int __fastcall GetFirstOffset();
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual bool __fastcall GetHotTrack();
	virtual Cxgridcustomview::TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	virtual System::UnicodeString __fastcall GetText();
	virtual System::Types::TRect __fastcall GetTextAreaBounds();
	virtual void __fastcall GetViewParams(Cxgraphics::TcxViewParams &AParams);
	virtual bool __fastcall GetVisible();
	virtual bool __fastcall HasMouse(Cxgridcustomview::TcxCustomGridHitTest* AHitTest);
	virtual bool __fastcall IsMRUItemsListAvailable();
	virtual bool __fastcall IsTokenCriteriaVisible();
	virtual void __fastcall StateChanged(Cxgridcommon::TcxGridCellState APrevState);
	__property Cxcustomdata::TcxDataFilterCriteria* Filter = {read=GetFilter};
	__property TcxCustomGridTableFiltering* Filtering = {read=GetFiltering};
	__property Cxcustomdata::TcxDataFilterCriteria* MainFilter = {read=GetMainFilter};
	__property Dxfilterbox::TdxFilterBoxTokenCriteriaViewInfo* TokenCriteriaViewInfo = {read=FTokenCriteriaViewInfo};
	
public:
	__fastcall virtual TcxGridFilterViewInfo(TcxCustomGridTableViewInfo* AGridViewInfo);
	__fastcall virtual ~TcxGridFilterViewInfo();
	virtual void __fastcall Calculate(int ALeftBound, int ATopBound, int AWidth = 0xffffffff, int AHeight = 0xffffffff)/* overload */;
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	virtual bool __fastcall MouseDown(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, System::Uitypes::TMouseButton AButton, System::Classes::TShiftState AShift);
	virtual bool __fastcall MouseMove(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, System::Classes::TShiftState AShift);
	virtual bool __fastcall MouseUp(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, System::Uitypes::TMouseButton AButton, System::Classes::TShiftState AShift);
	__property TcxGridFilterButtonsViewInfo* ButtonsViewInfo = {read=GetButtonsViewInfo};
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Calculate(const System::Types::TRect &ABounds){ Cxgridcustomview::TcxCustomGridCellViewInfo::Calculate(ABounds); }
	
private:
	void *__IdxFilterBoxTokenCriteriaViewInfoOwner;	// Dxfilterbox::IdxFilterBoxTokenCriteriaViewInfoOwner 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {DD64CF3F-2CBF-4EFA-8C12-5507EE5B29C2}
	operator Dxfilterbox::_di_IdxFilterBoxTokenCriteriaViewInfoOwner()
	{
		Dxfilterbox::_di_IdxFilterBoxTokenCriteriaViewInfoOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxfilterbox::IdxFilterBoxTokenCriteriaViewInfoOwner*(void) { return (Dxfilterbox::IdxFilterBoxTokenCriteriaViewInfoOwner*)&__IdxFilterBoxTokenCriteriaViewInfoOwner; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFindPanelViewInfo : public TcxGridPartContainerViewInfo
{
	typedef TcxGridPartContainerViewInfo inherited;
	
private:
	TcxGridFindPanelButtonsViewInfo* __fastcall GetButtonsViewInfo();
	HIDESBASE TcxCustomGridTableController* __fastcall GetController();
	TcxGridFindPanel* __fastcall GetFindPanel();
	
protected:
	virtual int __fastcall CalculateBestWidth();
	virtual int __fastcall CalculateHeight();
	virtual void __fastcall CalculateInvisible();
	virtual void __fastcall CalculateVisible();
	virtual TcxGridPartContainerButtonsViewInfo* __fastcall CreateButtonsViewInfo();
	virtual TcxGridPartAlignment __fastcall GetAlignment();
	virtual Cxgeometry::TcxBorders __fastcall GetBorders();
	virtual int __fastcall GetButtonsOffset();
	virtual int __fastcall GetEditMaxWidth();
	virtual int __fastcall GetEditMinWidth();
	virtual int __fastcall GetFirstOffset();
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual Cxgridcustomview::TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	virtual int __fastcall GetVertOffset();
	virtual void __fastcall GetViewParams(Cxgraphics::TcxViewParams &AParams);
	virtual bool __fastcall GetVisible();
	virtual bool __fastcall HasBorders();
	virtual void __fastcall HideEdit();
	virtual void __fastcall ShowEdit();
	virtual void __fastcall VisibilityChanged(bool AVisible);
	__property TcxCustomGridTableController* Controller = {read=GetController};
	__property TcxGridFindPanel* FindPanel = {read=GetFindPanel};
	
public:
	__property TcxGridFindPanelButtonsViewInfo* ButtonsViewInfo = {read=GetButtonsViewInfo};
public:
	/* TcxGridPartContainerViewInfo.Create */ inline __fastcall virtual TcxGridFindPanelViewInfo(TcxCustomGridTableViewInfo* AGridViewInfo) : TcxGridPartContainerViewInfo(AGridViewInfo) { }
	/* TcxGridPartContainerViewInfo.Destroy */ inline __fastcall virtual ~TcxGridFindPanelViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridTableCellViewInfo : public Cxgridcustomview::TcxCustomGridViewCellViewInfo
{
	typedef Cxgridcustomview::TcxCustomGridViewCellViewInfo inherited;
	
private:
	bool FHotTracked;
	bool FHotTrackedCalculated;
	TcxCustomGridTableViewInfo* FGridViewInfo;
	TcxCustomGridRecordViewInfo* FRecordViewInfo;
	bool FSelected;
	bool FSelectedCalculated;
	TcxCustomGridTableViewInfoCacheItem* __fastcall GetCacheItem();
	HIDESBASE TcxCustomGridTableController* __fastcall GetController();
	HIDESBASE TcxCustomGridTableView* __fastcall GetGridView();
	TcxCustomGridRecord* __fastcall GetGridRecord();
	bool __fastcall GetHotTracked();
	bool __fastcall GetSelected();
	
protected:
	virtual bool __fastcall AllowDrawHotTracked();
	virtual bool __fastcall AllowDrawSelected();
	virtual bool __fastcall AlwaysDrawSelectedWhenFocused();
	virtual bool __fastcall CalculateHotTracked();
	virtual bool __fastcall CalculateSelected();
	virtual void __fastcall CalculateTextSelectionInfo();
	virtual bool __fastcall CanHighlightFindText();
	virtual bool __fastcall DrawHotTrackedWhenRecordHotTracked();
	virtual bool __fastcall GetAlwaysSelected();
	virtual Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual bool __fastcall GetHotTrack();
	virtual void __fastcall GetFindTextSelectionInfo(/* out */ int &ASelStart, /* out */ System::UnicodeString &AHighlightedText);
	virtual bool __fastcall GetTransparent();
	virtual void __fastcall HotTrackChanged(bool AHotTracked);
	virtual bool __fastcall HotTrackSelection();
	virtual void __fastcall InitHitTest(Cxgridcustomview::TcxCustomGridHitTest* AHitTest);
	virtual bool __fastcall NeedHighlightFindText();
	virtual void __fastcall PrepareFindTextSelColor();
	__property bool AlwaysSelected = {read=GetAlwaysSelected, nodefault};
	__property TcxCustomGridTableViewInfoCacheItem* CacheItem = {read=GetCacheItem};
	__property TcxCustomGridTableController* Controller = {read=GetController};
	
public:
	__fastcall virtual TcxGridTableCellViewInfo(TcxCustomGridRecordViewInfo* ARecordViewInfo);
	virtual void __fastcall BeforeRecalculation();
	virtual void __fastcall Calculate(int ALeftBound, int ATopBound, int AWidth = 0xffffffff, int AHeight = 0xffffffff)/* overload */;
	virtual bool __fastcall CanDrawHotTracked();
	virtual bool __fastcall CanDrawSelected();
	virtual bool __fastcall MouseDown(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, System::Uitypes::TMouseButton AButton, System::Classes::TShiftState AShift);
	__property TcxCustomGridRecord* GridRecord = {read=GetGridRecord};
	__property TcxCustomGridTableView* GridView = {read=GetGridView};
	__property TcxCustomGridTableViewInfo* GridViewInfo = {read=FGridViewInfo};
	__property bool HotTracked = {read=GetHotTracked, nodefault};
	__property TcxCustomGridRecordViewInfo* RecordViewInfo = {read=FRecordViewInfo};
	__property bool Selected = {read=GetSelected, nodefault};
public:
	/* TcxCustomGridViewCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridTableCellViewInfo() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Calculate(const System::Types::TRect &ABounds){ Cxgridcustomview::TcxCustomGridCellViewInfo::Calculate(ABounds); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridTableDataCellViewInfo : public TcxGridTableCellViewInfo
{
	typedef TcxGridTableCellViewInfo inherited;
	
private:
	TcxGridConditionalFormattingProvider* FConditionalFormattingProvider;
	Cxedit::TcxCustomEditViewData* FEditViewData;
	Cxedit::TcxCustomEditViewInfo* FEditViewInfo;
	bool FIsLocalCopyOfEditViewData;
	TcxCustomGridTableItem* FItem;
	Cxedit::TcxCustomEditProperties* FProperties;
	Cxedit::TcxEditStyle* FStyle;
	bool FUsedForPaintingHiddenEditor;
	bool FWasFocusedBeforeClick;
	void __fastcall AfterDrawCellBackgroundHandler(Cxedit::TcxCustomEditViewInfo* Sender, Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall AfterDrawCellValueHandler(Cxedit::TcxCustomEditViewInfo* Sender, Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall CalculateEditorBoundsHandler(Cxedit::TcxCustomEditViewInfo* AViewInfo, System::Types::TRect &R);
	void __fastcall CanDrawEditValueHandler(Cxedit::TcxCustomEditViewInfo* Sender, bool &Allow);
	bool __fastcall GetEditing();
	System::Types::TPoint __fastcall GetMousePos();
	Cxedit::TcxCustomEditProperties* __fastcall GetProperties();
	bool __fastcall GetShowButtons();
	void __fastcall SetUsedForPaintingHiddenEditor(bool AValue);
	
protected:
	virtual void __fastcall AfterCustomDraw(Cxgraphics::TcxCanvas* ACanvas);
	virtual bool __fastcall AllowDrawHotTracked();
	virtual bool __fastcall AllowDrawSelected();
	virtual void __fastcall BeforeCustomDraw(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall CalculateEditViewInfo(Cxedit::TcxCustomEditViewInfo* AEditViewInfo, const System::Types::TPoint &AMousePos);
	virtual int __fastcall CalculateHeight();
	virtual bool __fastcall CalculateSelected();
	virtual bool __fastcall CanActivateEditOnMouseDown(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, System::Uitypes::TMouseButton AButton, System::Classes::TShiftState AShift);
	virtual bool __fastcall CanAutoHeight();
	virtual bool __fastcall CanDrawSelectedWhenEditing();
	virtual bool __fastcall CanHighlightEditViewDataFindText();
	virtual bool __fastcall CanImmediateEdit(Cxgridcustomview::TcxCustomGridHitTest* AHitTest);
	virtual bool __fastcall CanProcessMouseLeave();
	virtual bool __fastcall CanShowEdit();
	void __fastcall CheckEditHotTrack(const System::Types::TPoint &AMousePos);
	virtual bool __fastcall CustomDraw(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DoCalculateParams();
	virtual void __fastcall DoMouseLeave();
	void __fastcall EditHotTrackChanged();
	virtual System::Types::TRect __fastcall GetAreaBounds();
	virtual bool __fastcall GetAutoHeight();
	virtual System::Variant __fastcall GetDisplayValue();
	virtual System::Types::TRect __fastcall GetEditBounds();
	System::Types::TSize __fastcall GetEditSize(const Cxedit::TcxEditSizeProperties &AEditSizeProperties);
	virtual System::Types::TRect __fastcall GetEditViewDataBounds();
	virtual void __fastcall GetEditViewDataContentOffsets(System::Types::TRect &R);
	virtual void __fastcall GetEditViewDataFindTextSelectionInfo(/* out */ int &ASelStart, /* out */ System::UnicodeString &AHighlightedText);
	bool __fastcall GetEditViewDataTextSelectionInfo(/* out */ Cxgraphics::TcxViewParams &AParams, /* out */ int &ASelStart, /* out */ int &ASelLength);
	virtual bool __fastcall GetFocused();
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual bool __fastcall GetHotTrack();
	virtual bool __fastcall GetIsMain();
	virtual Cxedit::TcxCustomEditProperties* __fastcall GetItemProperties();
	virtual int __fastcall GetMaxLineCount();
	virtual bool __fastcall GetMultiLine();
	virtual Cxgridcustomview::TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	virtual System::Types::TRect __fastcall GetRealEditViewDataBounds();
	void __fastcall GetRealEditViewDataContentOffsets(System::Types::TRect &R);
	virtual bool __fastcall GetShowEndEllipsis();
	virtual System::UnicodeString __fastcall GetText();
	virtual System::Types::TRect __fastcall GetTextAreaBounds();
	virtual bool __fastcall GetUsedForPaintingHiddenEditor();
	virtual System::Variant __fastcall GetValue();
	virtual void __fastcall GetViewParams(Cxgraphics::TcxViewParams &AParams);
	virtual bool __fastcall HasCustomDraw();
	virtual bool __fastcall HasFocusRect();
	virtual void __fastcall InitEditSizeProperties(/* out */ Cxedit::TcxEditSizeProperties &AEditSizeProperties);
	virtual void __fastcall InitHitTest(Cxgridcustomview::TcxCustomGridHitTest* AHitTest);
	virtual void __fastcall InitializeByHiddenEditor(Cxedit::TcxCustomEditViewInfo* AEditViewInfo, Cxedit::TcxCustomEdit* AEdit);
	virtual void __fastcall InitViewDataTextSelection();
	virtual bool __fastcall InvalidateOnStateChange();
	virtual bool __fastcall IsTextSelected();
	virtual bool __fastcall NeedHighlightEditViewDataFindText();
	virtual bool __fastcall NeedLocalCopyOfEditViewData();
	virtual bool __fastcall NeedShowEditOnDblClick();
	virtual void __fastcall Offset(int DX, int DY);
	virtual void __fastcall RestoreParams(const Cxgraphics::TcxViewParams &AParams);
	virtual void __fastcall SaveParams(/* out */ Cxgraphics::TcxViewParams &AParams);
	virtual void __fastcall StateChanged(Cxgridcommon::TcxGridCellState APrevState);
	virtual bool __fastcall SupportsZeroHeight();
	virtual bool __fastcall CanShowAutoHint();
	virtual bool __fastcall CanShowCustomHint();
	virtual bool __fastcall CanShowHint();
	virtual System::Types::TRect __fastcall GetCellBoundsForHint();
	virtual bool __fastcall NeedShowHint(const System::Types::TPoint &AMousePos, /* out */ Vcl::Controls::TCaption &AHintText, /* out */ bool &AIsHintMultiLine, /* out */ System::Types::TRect &ATextRect);
	virtual bool __fastcall UseStandardNeedShowHint();
	virtual void __fastcall InitStyle();
	virtual void __fastcall ValidateDrawValue();
	Cxedit::TcxCustomEditViewInfo* __fastcall CreateEditViewInfo();
	void __fastcall CreateEditViewData();
	void __fastcall DestroyEditViewData();
	virtual void __fastcall InitEditInfo();
	virtual bool __fastcall SupportsEditing();
	void __fastcall UpdateEdit();
	virtual void __fastcall UpdateEditInfo();
	Cxedit::TcxCustomEditViewData* __fastcall EditOwnerGetViewData(/* out */ bool &AIsViewDataCreated);
	void __fastcall EditOwnerInvalidate(const System::Types::TRect &R, bool AEraseBackground = true);
	__property bool AutoHeight = {read=GetAutoHeight, nodefault};
	__property Cxedit::TcxCustomEditViewData* EditViewData = {read=FEditViewData};
	__property System::Types::TRect EditViewDataBounds = {read=GetRealEditViewDataBounds};
	__property int MaxLineCount = {read=GetMaxLineCount, nodefault};
	__property System::Types::TPoint MousePos = {read=GetMousePos};
	__property bool ShowButtons = {read=GetShowButtons, nodefault};
	__property bool UsedForPaintingHiddenEditor = {read=FUsedForPaintingHiddenEditor, write=SetUsedForPaintingHiddenEditor, nodefault};
	__property bool WasFocusedBeforeClick = {read=FWasFocusedBeforeClick, nodefault};
	
public:
	__fastcall virtual TcxGridTableDataCellViewInfo(TcxCustomGridRecordViewInfo* ARecordViewInfo, TcxCustomGridTableItem* AItem);
	__fastcall virtual ~TcxGridTableDataCellViewInfo();
	virtual void __fastcall BeforeRecalculation();
	virtual void __fastcall Calculate(int ALeftBound, int ATopBound, int AWidth = 0xffffffff, int AHeight = 0xffffffff)/* overload */;
	virtual bool __fastcall CanDrawSelected();
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	Cxedit::TcxInplaceEditPosition __fastcall GetInplaceEditPosition();
	HIDESBASE virtual void __fastcall Invalidate(bool ARecalculate);
	virtual bool __fastcall MouseDown(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, System::Uitypes::TMouseButton AButton, System::Classes::TShiftState AShift);
	virtual bool __fastcall MouseMove(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, System::Classes::TShiftState AShift);
	virtual bool __fastcall MouseUp(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, System::Uitypes::TMouseButton AButton, System::Classes::TShiftState AShift);
	__property System::Variant DisplayValue = {read=GetDisplayValue};
	__property System::Types::TRect EditBounds = {read=GetEditBounds};
	__property bool Editing = {read=GetEditing, nodefault};
	__property Cxedit::TcxCustomEditViewInfo* EditViewInfo = {read=FEditViewInfo};
	__property bool Focused = {read=GetFocused, nodefault};
	__property bool IsMain = {read=GetIsMain, nodefault};
	__property TcxCustomGridTableItem* Item = {read=FItem};
	__property Cxedit::TcxCustomEditProperties* Properties = {read=GetProperties};
	__property Cxedit::TcxEditStyle* Style = {read=FStyle};
	__property System::Variant Value = {read=GetValue};
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Calculate(const System::Types::TRect &ABounds){ Cxgridcustomview::TcxCustomGridCellViewInfo::Calculate(ABounds); }
	
private:
	void *__IcxEditOwner;	// Cxedit::IcxEditOwner 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {4129100C-7FC6-436E-8711-47A5C978CA73}
	operator Cxedit::_di_IcxEditOwner()
	{
		Cxedit::_di_IcxEditOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxedit::IcxEditOwner*(void) { return (Cxedit::IcxEditOwner*)&__IcxEditOwner; }
	#endif
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridTableDataCellViewInfoClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridRecordViewInfo : public Cxgridcustomview::TcxCustomGridViewCellViewInfo
{
	typedef Cxgridcustomview::TcxCustomGridViewCellViewInfo inherited;
	
private:
	bool FHotTracked;
	bool FHotTrackedCalculated;
	System::Types::TRect FExpandButtonBounds;
	bool FExpanded;
	bool FExpandedCalculated;
	bool FIsRecordViewInfoAssigned;
	TcxCustomGridRecordsViewInfo* FRecordsViewInfo;
	bool FSelected;
	bool FSelectedCalculated;
	TcxCustomGridTableViewInfoCacheItem* __fastcall GetCacheItem();
	HIDESBASE TcxCustomGridTableController* __fastcall GetController();
	bool __fastcall GetExpanded();
	bool __fastcall GetFocused();
	HIDESBASE TcxCustomGridTableView* __fastcall GetGridView();
	TcxCustomGridTableViewInfo* __fastcall GetGridViewInfo();
	bool __fastcall GetHotTracked();
	int __fastcall GetIndex();
	System::Types::TRect __fastcall GetRealFocusRectBounds();
	bool __fastcall GetSelected();
	
protected:
	TcxCustomGridRecord* FRecord;
	virtual bool __fastcall AdjustToIntegralBottomBound(int &ABound);
	virtual bool __fastcall AllowDrawHotTracked();
	virtual bool __fastcall AllowDrawSelected();
	virtual void __fastcall BeforeOffset();
	virtual void __fastcall CalculateExpandButtonBounds(System::Types::TRect &ABounds) = 0 ;
	virtual bool __fastcall CalculateHotTracked();
	virtual void __fastcall CalculateInPlace(int ALeft, int ATop);
	virtual int __fastcall CalculateMultilineEditMinHeight();
	virtual bool __fastcall CalculateSelected();
	virtual bool __fastcall CanDrawHotTracked();
	virtual bool __fastcall CanGenerateExpandButtonHitTest();
	virtual bool __fastcall CanShowDataCellHint();
	virtual void __fastcall ControlFocusChanged();
	virtual bool __fastcall GetAutoHeight();
	virtual Vcl::Graphics::TBitmap* __fastcall GetBackgroundBitmap();
	virtual System::Types::TRect __fastcall GetBackgroundBounds();
	virtual System::Types::TRect __fastcall GetBackgroundBitmapBounds();
	virtual Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	virtual bool __fastcall GetCellTransparent(TcxGridTableCellViewInfo* ACell);
	HIDESBASE virtual System::Types::TRect __fastcall GetContentBounds();
	virtual System::Types::TRect __fastcall GetExpandButtonAreaBounds();
	virtual System::Types::TRect __fastcall GetExpandButtonOwnerCellBounds();
	virtual System::Types::TRect __fastcall GetFocusRectBounds();
	virtual bool __fastcall GetFullyVisible();
	virtual int __fastcall GetHeight();
	virtual bool __fastcall GetHideFocusRectOnExit();
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual bool __fastcall GetHotTrack();
	virtual int __fastcall GetPixelScrollSize();
	virtual System::Types::TRect __fastcall GetRealExpandButtonAreaBounds();
	virtual bool __fastcall GetVisible();
	virtual bool __fastcall HasFocusRect();
	virtual void __fastcall HotTrackChanged(bool AHotTracked);
	virtual void __fastcall InitHitTest(Cxgridcustomview::TcxCustomGridHitTest* AHitTest);
	virtual bool __fastcall InvalidateOnStateChange();
	virtual bool __fastcall IsClickHitTest(Cxgridcustomview::TcxCustomGridHitTest* AHitTest);
	virtual bool __fastcall IsDetailVisible(Cxgridcustomview::TcxCustomGridView* ADetail);
	virtual void __fastcall Offset(int DX, int DY);
	virtual void __fastcall VisibilityChanged(bool AVisible);
	__property bool AutoHeight = {read=GetAutoHeight, nodefault};
	__property System::Types::TRect BackgroundBitmapBounds = {read=GetBackgroundBitmapBounds};
	__property TcxCustomGridTableViewInfoCacheItem* CacheItem = {read=GetCacheItem};
	__property TcxCustomGridTableController* Controller = {read=GetController};
	__property System::Types::TRect ExpandButtonAreaBounds = {read=GetRealExpandButtonAreaBounds};
	__property bool Expanded = {read=GetExpanded, nodefault};
	
public:
	__fastcall virtual TcxCustomGridRecordViewInfo(TcxCustomGridRecordsViewInfo* ARecordsViewInfo, TcxCustomGridRecord* ARecord);
	__fastcall virtual ~TcxCustomGridRecordViewInfo();
	virtual void __fastcall BeforeRecalculation();
	virtual void __fastcall Calculate(int ALeftBound, int ATopBound, int AWidth = 0xffffffff, int AHeight = 0xffffffff)/* overload */;
	HIDESBASE virtual bool __fastcall Click(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, System::Uitypes::TMouseButton AButton, System::Classes::TShiftState AShift);
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	virtual System::Types::TRect __fastcall GetBoundsForInvalidate(TcxCustomGridTableItem* AItem);
	virtual System::Types::TRect __fastcall GetBoundsForItem(TcxCustomGridTableItem* AItem);
	virtual TcxGridTableDataCellViewInfo* __fastcall GetCellViewInfoByItem(TcxCustomGridTableItem* AItem);
	virtual Cxgridcustomview::TcxCustomGridHitTest* __fastcall GetHitTest(const System::Types::TPoint &P);
	virtual void __fastcall MainCalculate(int ALeftBound, int ATopBound);
	virtual bool __fastcall MouseDown(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, System::Uitypes::TMouseButton AButton, System::Classes::TShiftState AShift);
	virtual bool __fastcall ProcessDialogChar(System::Word ACharCode);
	HIDESBASE void __fastcall Recalculate();
	__property System::Types::TRect ContentBounds = {read=GetContentBounds};
	__property System::Types::TRect ExpandButtonBounds = {read=FExpandButtonBounds};
	__property bool Focused = {read=GetFocused, nodefault};
	__property System::Types::TRect FocusRectBounds = {read=GetRealFocusRectBounds};
	__property bool FullyVisible = {read=GetFullyVisible, nodefault};
	__property TcxCustomGridTableView* GridView = {read=GetGridView};
	__property TcxCustomGridRecord* GridRecord = {read=FRecord};
	__property TcxCustomGridTableViewInfo* GridViewInfo = {read=GetGridViewInfo};
	__property bool HotTracked = {read=GetHotTracked, nodefault};
	__property int Index = {read=GetIndex, nodefault};
	__property bool HideFocusRectOnExit = {read=GetHideFocusRectOnExit, nodefault};
	__property TcxCustomGridRecordsViewInfo* RecordsViewInfo = {read=FRecordsViewInfo};
	__property bool Selected = {read=GetSelected, nodefault};
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Calculate(const System::Types::TRect &ABounds){ Cxgridcustomview::TcxCustomGridCellViewInfo::Calculate(ABounds); }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomGridRecordsViewInfoClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridRecordsViewInfo : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TcxCustomGridRecordViewInfo* operator[](int Index) { return this->Items[Index]; }
	
private:
	Vcl::Graphics::TBitmap* FBackgroundBitmap;
	System::Types::TRect FBounds;
	System::Types::TRect FContentBounds;
	TcxCustomGridTableViewInfo* FGridViewInfo;
	TcxGridTableDataCellViewInfo* FIncSearchingCellViewInfo;
	bool FIsIncSearchingCellViewInfoCalculated;
	bool FIsRightToLeftConverted;
	int FRecordPixelScrollSizeCalculatingLockCount;
	Dxcoreclasses::TdxFastList* FItems;
	int FItemsOffset;
	System::Types::TRect FPrevFocusedItemBounds;
	Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	TcxCustomGridTableController* __fastcall GetController();
	int __fastcall GetCount();
	int __fastcall GetFirstRecordIndex();
	TcxCustomGridTableView* __fastcall GetGridView();
	TcxGridTableDataCellViewInfo* __fastcall GetIncSearchingCellViewInfo();
	bool __fastcall GetIsRecordPixelScrollSizeCalculating();
	TcxCustomGridRecordViewInfo* __fastcall GetItem(int Index);
	int __fastcall GetMaxCount();
	int __fastcall GetPixelScrollRecordOffset();
	Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	int __fastcall GetTopRecordIndex();
	TcxCustomGridTableViewData* __fastcall GetViewData();
	void __fastcall CreateItems();
	void __fastcall DestroyItems();
	TcxCustomGridRecordViewInfo* __fastcall CreateRecordViewInfo(int AIndex)/* overload */;
	
protected:
	int FPartVisibleCount;
	int FVisibleCount;
	int __fastcall AddRecordViewInfo(TcxCustomGridRecordViewInfo* AViewInfo);
	void __fastcall AdjustEditorBoundsToIntegralHeight(System::Types::TRect &AEditorBounds);
	virtual void __fastcall AfterCalculate();
	virtual bool __fastcall AllowPan(Vcl::Forms::TScrollBarKind AScrollKind);
	virtual void __fastcall BeforeCalculate();
	virtual void __fastcall BeforeItemRecalculation();
	virtual void __fastcall AfterOffset();
	virtual void __fastcall BeforeOffset();
	virtual void __fastcall Calculate();
	virtual System::Types::TRect __fastcall CalculateBounds();
	virtual System::Types::TRect __fastcall CalculateContentBounds();
	virtual TcxGridTableDataCellViewInfo* __fastcall CalculateIncSearchingCellViewInfo();
	virtual void __fastcall CalculatePixelScrollInfo(int &ARecordIndex, int &ARecordOffset, int AMaxRecordIndex, int AMaxRecordOffset, int ADelta, /* out */ bool &AOverPan);
	int __fastcall GetPixelScrollOffset(int AFirstRecordIndex, int AFirstRecordOffset, int ALastRecordIndex, int ALastRecordOffset);
	virtual void __fastcall CalculateVisibleCount();
	void __fastcall Clear();
	void __fastcall CreateEditViewDatas();
	TcxCustomGridRecordViewInfo* __fastcall CreateRecordViewInfo(TcxCustomGridRecord* ARecord)/* overload */;
	virtual void __fastcall DeleteItem(int AIndex);
	void __fastcall DestroyEditViewDatas();
	virtual bool __fastcall GetAutoDataCellHeight();
	virtual bool __fastcall GetAutoDataRecordHeight();
	virtual bool __fastcall GetAutoRecordHeight();
	virtual Vcl::Graphics::TBitmap* __fastcall GetBackgroundBitmap();
	virtual System::Types::TRect __fastcall GetCellAreaBounds(TcxGridTableDataCellViewInfo* ACellViewInfo);
	virtual int __fastcall GetPixelScrollContentSize();
	virtual int __fastcall GetItemLeftBound(int AIndex) = 0 ;
	virtual int __fastcall GetItemPixelScrollSize(TcxCustomGridRecordViewInfo* AItem);
	virtual int __fastcall GetItemsOffset(int AItemCountDelta) = 0 ;
	virtual int __fastcall GetItemTopBound(int AIndex) = 0 ;
	int __fastcall GetRecordIndex(int AViewInfoIndex);
	virtual int __fastcall GetRecordScrollSize(int ARecordIndex);
	TcxCustomGridRecordViewInfo* __fastcall GetRecordViewInfo(int ARecordIndex, /* out */ bool &ANewlyCreated);
	virtual int __fastcall GetViewInfoIndexByRecordIndex(int ARecordIndex);
	virtual bool __fastcall IsEmpty();
	virtual void __fastcall InsertItem(int AIndex, void * AItem);
	virtual void __fastcall OffsetItem(int AIndex, int AOffset) = 0 ;
	virtual void __fastcall ControlFocusChanged();
	virtual void __fastcall VisibilityChanged(bool AVisible);
	virtual TcxCustomGridRecordsPainterClass __fastcall GetPainterClass();
	__property Cxgraphics::TcxCanvas* Canvas = {read=GetCanvas};
	__property TcxCustomGridTableController* Controller = {read=GetController};
	__property int FirstRecordIndex = {read=GetFirstRecordIndex, nodefault};
	__property TcxCustomGridTableViewInfo* GridViewInfo = {read=FGridViewInfo};
	__property TcxGridTableDataCellViewInfo* IncSearchingCellViewInfo = {read=GetIncSearchingCellViewInfo};
	__property bool IsRecordPixelScrollSizeCalculating = {read=GetIsRecordPixelScrollSizeCalculating, nodefault};
	__property int MaxCount = {read=GetMaxCount, nodefault};
	__property int PixelScrollRecordOffset = {read=GetPixelScrollRecordOffset, nodefault};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=GetScaleFactor};
	__property int TopRecordIndex = {read=GetTopRecordIndex, nodefault};
	__property TcxCustomGridTableViewData* ViewData = {read=GetViewData};
	
public:
	__fastcall virtual TcxCustomGridRecordsViewInfo(TcxCustomGridTableViewInfo* AGridViewInfo);
	__fastcall virtual ~TcxCustomGridRecordsViewInfo();
	virtual bool __fastcall CanOffset(int AItemCountDelta);
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	virtual int __fastcall GetCellHeight(int ACellContentHeight);
	virtual Cxgridcustomview::TcxCustomGridHitTest* __fastcall GetHitTest(const System::Types::TPoint &P);
	virtual TcxCustomGridRecordViewInfo* __fastcall GetRealItem(TcxCustomGridRecord* ARecord);
	virtual bool __fastcall IsCellMultiLine(TcxCustomGridTableItem* AItem);
	virtual void __fastcall MainCalculate();
	virtual void __fastcall Offset(int DX, int DY);
	virtual void __fastcall OffsetRecords(int AItemCountDelta, int APixelScrollRecordOffsetDelta);
	void __fastcall Paint();
	void __fastcall RightToLeftConversion(const System::Types::TRect &ABounds);
	__property bool AutoDataCellHeight = {read=GetAutoDataCellHeight, nodefault};
	__property bool AutoDataRecordHeight = {read=GetAutoDataRecordHeight, nodefault};
	__property bool AutoRecordHeight = {read=GetAutoRecordHeight, nodefault};
	__property Vcl::Graphics::TBitmap* BackgroundBitmap = {read=FBackgroundBitmap, write=FBackgroundBitmap};
	__property System::Types::TRect Bounds = {read=FBounds};
	__property System::Types::TRect ContentBounds = {read=FContentBounds};
	__property int Count = {read=GetCount, nodefault};
	__property TcxCustomGridTableView* GridView = {read=GetGridView};
	__property bool IsRightToLeftConverted = {read=FIsRightToLeftConverted, write=FIsRightToLeftConverted, nodefault};
	__property TcxCustomGridRecordViewInfo* Items[int Index] = {read=GetItem/*, default*/};
	__property int ItemsOffset = {read=FItemsOffset, nodefault};
	__property int PartVisibleCount = {read=FPartVisibleCount, nodefault};
	__property System::Types::TRect PrevFocusedItemBounds = {read=FPrevFocusedItemBounds, write=FPrevFocusedItemBounds};
	__property int VisibleCount = {read=FVisibleCount, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridCustomTableNavigatorViewInfo : public Cxnavigator::TcxInplaceNavigatorViewInfo
{
	typedef Cxnavigator::TcxInplaceNavigatorViewInfo inherited;
	
private:
	TcxCustomGridTableViewInfo* FGridViewInfo;
	
protected:
	virtual Cxcontrols::TcxControl* __fastcall GetControl();
	virtual Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetLookAndFeelPainter();
	virtual int __fastcall GetNavigatorOffset();
	virtual Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	virtual void __fastcall UpdateNavigatorSiteBounds(const System::Types::TRect &ABounds);
	
public:
	__fastcall virtual TcxGridCustomTableNavigatorViewInfo(TcxCustomGridTableViewInfo* AGridViewInfo);
public:
	/* TcxNavigatorViewInfo.Destroy */ inline __fastcall virtual ~TcxGridCustomTableNavigatorViewInfo() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridCustomTableNavigatorViewInfoClass;

typedef System::TMetaClass* TcxNavigatorSiteViewInfoClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxNavigatorSiteViewInfo : public Cxgridcustomview::TcxCustomGridViewCellViewInfo
{
	typedef Cxgridcustomview::TcxCustomGridViewCellViewInfo inherited;
	
private:
	int FCalculatedHeight;
	TcxGridCustomTableNavigatorViewInfo* FNavigatorViewInfo;
	TcxCustomGridTableViewInfo* __fastcall GetGridViewInfo();
	TcxGridViewNavigator* __fastcall GetNavigator();
	
protected:
	virtual int __fastcall CalculateHeight();
	void __fastcall CalculateNavigator();
	virtual int __fastcall CalculateWidth();
	virtual void __fastcall DoMouseLeave();
	virtual void __fastcall GetAdornerTargetElements(System::Classes::TStrings* AList);
	virtual int __fastcall GetHeight();
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual bool __fastcall GetHotTrack();
	System::Types::TRect __fastcall GetNavigatorBounds();
	virtual Cxgridcustomview::TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	virtual bool __fastcall GetVisible();
	void __fastcall NavigatorStateChanged();
	virtual void __fastcall GetViewParams(Cxgraphics::TcxViewParams &AParams);
	virtual int __fastcall GetWidth();
	bool __fastcall IsNavigatorSizeChanged();
	void __fastcall ResetCalculatedHeight();
	__property TcxGridViewNavigator* Navigator = {read=GetNavigator};
	
public:
	__fastcall virtual TcxNavigatorSiteViewInfo(Cxgridcustomview::TcxCustomGridViewInfo* AGridViewInfo);
	__fastcall virtual ~TcxNavigatorSiteViewInfo();
	virtual void __fastcall Calculate(int ALeftBound, int ATopBound, int AWidth = 0xffffffff, int AHeight = 0xffffffff)/* overload */;
	virtual bool __fastcall MouseDown(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, System::Uitypes::TMouseButton AButton, System::Classes::TShiftState AShift);
	virtual bool __fastcall MouseMove(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, System::Classes::TShiftState AShift);
	virtual bool __fastcall MouseUp(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, System::Uitypes::TMouseButton AButton, System::Classes::TShiftState AShift);
	__property TcxCustomGridTableViewInfo* GridViewInfo = {read=GetGridViewInfo};
	__property TcxGridCustomTableNavigatorViewInfo* NavigatorViewInfo = {read=FNavigatorViewInfo};
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Calculate(const System::Types::TRect &ABounds){ Cxgridcustomview::TcxCustomGridCellViewInfo::Calculate(ABounds); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridTableViewInfo : public Cxgridcustomview::TcxCustomGridViewInfo
{
	typedef Cxgridcustomview::TcxCustomGridViewInfo inherited;
	
private:
	bool FCalculateDown;
	TcxGridFilterViewInfo* FFilterViewInfo;
	TcxGridFindPanelViewInfo* FFindPanelViewInfo;
	int FFirstRecordIndex;
	TcxNavigatorSiteViewInfo* FNavigatorSiteViewInfo;
	Dxcoreclasses::TdxFastList* FParts;
	int FPixelScrollRecordOffset;
	TcxCustomGridRecordsViewInfo* FRecordsViewInfo;
	HIDESBASE TcxCustomGridTableController* __fastcall GetController();
	int __fastcall GetExpandButtonSize();
	TcxCustomGridTableView* __fastcall GetGridView();
	Cxnavigator::TcxNavigatorViewInfo* __fastcall GetNavigatorViewInfo();
	TcxCustomGridPartViewInfo* __fastcall GetPart(int Index);
	int __fastcall GetPartCount();
	int __fastcall GetPartsBottomHeight();
	int __fastcall GetPartsCustomHeight(TcxGridPartAlignment AAlignment);
	int __fastcall GetPartsTopHeight();
	int __fastcall GetScrollableAreaWidth();
	HIDESBASE TcxCustomGridTableViewData* __fastcall GetViewData();
	int __fastcall GetVisibleRecordCount();
	void __fastcall AddPart(TcxCustomGridPartViewInfo* AItem);
	void __fastcall RemovePart(TcxCustomGridPartViewInfo* AItem);
	
protected:
	virtual System::Types::TRect __fastcall GetNavigatorBounds();
	Cxnavigator::TcxCustomNavigatorButtons* __fastcall GetNavigatorButtons();
	Vcl::Graphics::TCanvas* __fastcall GetNavigatorCanvas();
	Vcl::Controls::TWinControl* __fastcall GetNavigatorControl();
	bool __fastcall GetNavigatorFocused();
	Cxlookandfeels::TcxLookAndFeel* __fastcall GetNavigatorLookAndFeel();
	System::Classes::TComponent* __fastcall GetNavigatorOwner();
	bool __fastcall GetNavigatorShowHint();
	bool __fastcall GetNavigatorTabStop();
	void __fastcall NavigatorStateChanged();
	void __fastcall NavigatorChanged(Cxnavigator::TcxNavigatorChangeType AChangeType);
	void __fastcall RefreshNavigator();
	Cxnavigator::TcxCustomNavigatorInfoPanel* __fastcall GetNavigatorInfoPanel();
	virtual void __fastcall CreateViewInfos();
	virtual void __fastcall DestroyViewInfos(bool AIsRecreating);
	virtual TcxGridFindPanelViewInfo* __fastcall CreateFindPanelViewInfo();
	virtual void __fastcall AfterCalculating();
	virtual void __fastcall AfterOffset();
	virtual void __fastcall BeforeCalculating();
	virtual void __fastcall BeforeOffset();
	virtual void __fastcall Calculate();
	virtual System::Types::TRect __fastcall CalculateClientBounds();
	virtual int __fastcall GetEqualHeightRecordScrollSize();
	virtual void __fastcall CalculateHeight(const System::Types::TPoint &AMaxSize, int &AHeight, bool &AFullyVisible);
	void __fastcall CalculateNavigator();
	virtual System::Types::TRect __fastcall CalculatePartBounds(TcxCustomGridPartViewInfo* APart);
	virtual int __fastcall CalculateVisibleEqualHeightRecordCount();
	virtual void __fastcall ControlFocusChanged();
	virtual Cxgridcustomview::TcxCustomGridHitTest* __fastcall DoGetHitTest(const System::Types::TPoint &P);
	virtual int __fastcall GetBottomNonClientHeight();
	virtual System::Types::TRect __fastcall GetContentBounds();
	virtual int __fastcall GetDefaultGridModeBufferCount();
	virtual int __fastcall GetFirstRecordIndex();
	virtual void __fastcall GetHScrollBarBounds(System::Types::TRect &ABounds);
	virtual TcxGridFilterViewInfoClass __fastcall GetFilterViewInfoClass();
	virtual bool __fastcall GetIsInternalUse();
	virtual System::Types::TRect __fastcall GetMultilineEditorBounds(const System::Types::TRect &ACellEditBounds, int ACalculatedHeight, Cxedit::TcxInplaceEditAutoHeight AAutoHeight);
	virtual int __fastcall GetNavigatorOffset();
	virtual TcxNavigatorSiteViewInfoClass __fastcall GetNavigatorSiteViewInfoClass();
	virtual TcxGridCustomTableNavigatorViewInfoClass __fastcall GetNavigatorViewInfoClass();
	virtual System::UnicodeString __fastcall GetNoDataInfoText();
	virtual System::Types::TRect __fastcall GetNoDataInfoTextAreaBounds();
	virtual void __fastcall GetNoDataInfoTextParams(/* out */ Cxgraphics::TcxViewParams &AParams);
	virtual bool __fastcall GetNoDataInfoTextAreaVisible();
	virtual int __fastcall GetNonRecordsAreaHeight(bool ACheckScrollBar);
	virtual int __fastcall GetPixelScrollRecordOffset();
	virtual TcxCustomGridRecordsViewInfoClass __fastcall GetRecordsViewInfoClass() = 0 ;
	virtual System::Types::TRect __fastcall GetScrollableAreaBounds();
	virtual System::Types::TRect __fastcall GetScrollableAreaBoundsForEdit();
	virtual System::Types::TRect __fastcall GetScrollableAreaBoundsHorz();
	virtual System::Types::TRect __fastcall GetScrollableAreaBoundsVert();
	virtual void __fastcall GetVScrollBarBounds(System::Types::TRect &ABounds);
	virtual bool __fastcall IsCellPartVisible(TcxGridTableDataCellViewInfo* ACell);
	bool __fastcall IsFirstRecordIndexAssigned();
	bool __fastcall IsPixelScrollRecordOffsetAssigned();
	virtual void __fastcall Offset(int DX, int DY);
	virtual void __fastcall OffsetRecords(int ARecordCountDelta, int APixelScrollRecordOffsetDelta);
	virtual void __fastcall VisibilityChanged(bool AVisible);
	__property TcxCustomGridTableController* Controller = {read=GetController};
	__property int PartCount = {read=GetPartCount, nodefault};
	__property TcxCustomGridPartViewInfo* Parts[int Index] = {read=GetPart};
	__property TcxCustomGridTableViewData* ViewData = {read=GetViewData};
	
public:
	__fastcall virtual TcxCustomGridTableViewInfo(Cxgridcustomview::TcxCustomGridView* AGridView);
	__fastcall virtual ~TcxCustomGridTableViewInfo();
	virtual bool __fastcall CanOffset(int ARecordCountDelta, int APixelScrollRecordOffsetDelta, int DX, int DY);
	virtual bool __fastcall CanOffsetView(int ARecordCountDelta);
	virtual void __fastcall DoOffset(int ARecordCountDelta, int APixelScrollRecordOffsetDelta, int DX, int DY);
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	virtual int __fastcall GetNearestPopupHeight(int AHeight, bool AAdditionalRecord = false);
	virtual int __fastcall GetPopupHeight(int ADropDownRecordCount);
	__property bool CalculateDown = {read=FCalculateDown, write=FCalculateDown, nodefault};
	__property int ExpandButtonSize = {read=GetExpandButtonSize, nodefault};
	__property TcxGridFilterViewInfo* FilterViewInfo = {read=FFilterViewInfo};
	__property TcxGridFindPanelViewInfo* FindPanelViewInfo = {read=FFindPanelViewInfo};
	__property int FirstRecordIndex = {read=GetFirstRecordIndex, write=FFirstRecordIndex, nodefault};
	__property TcxCustomGridTableView* GridView = {read=GetGridView};
	__property System::Types::TRect NavigatorBounds = {read=GetNavigatorBounds};
	__property int NavigatorOffset = {read=GetNavigatorOffset, nodefault};
	__property TcxNavigatorSiteViewInfo* NavigatorSiteViewInfo = {read=FNavigatorSiteViewInfo};
	__property Cxnavigator::TcxNavigatorViewInfo* NavigatorViewInfo = {read=GetNavigatorViewInfo};
	__property System::UnicodeString NoDataInfoText = {read=GetNoDataInfoText};
	__property System::Types::TRect NoDataInfoTextAreaBounds = {read=GetNoDataInfoTextAreaBounds};
	__property bool NoDataInfoTextAreaVisible = {read=GetNoDataInfoTextAreaVisible, nodefault};
	__property int PartsBottomHeight = {read=GetPartsBottomHeight, nodefault};
	__property int PartsTopHeight = {read=GetPartsTopHeight, nodefault};
	__property int PixelScrollRecordOffset = {read=GetPixelScrollRecordOffset, write=FPixelScrollRecordOffset, nodefault};
	__property TcxCustomGridRecordsViewInfo* RecordsViewInfo = {read=FRecordsViewInfo};
	__property System::Types::TRect ScrollableAreaBounds = {read=GetScrollableAreaBounds};
	__property System::Types::TRect ScrollableAreaBoundsForEdit = {read=GetScrollableAreaBoundsForEdit};
	__property System::Types::TRect ScrollableAreaBoundsHorz = {read=GetScrollableAreaBoundsHorz};
	__property System::Types::TRect ScrollableAreaBoundsVert = {read=GetScrollableAreaBoundsVert};
	__property int ScrollableAreaWidth = {read=GetScrollableAreaWidth, nodefault};
	__property int VisibleRecordCount = {read=GetVisibleRecordCount, nodefault};
private:
	void *__IcxNavigatorOwner2;	// Cxnavigator::IcxNavigatorOwner2 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {5AC3BE65-B332-40D4-9635-869F52634B17}
	operator Cxnavigator::_di_IcxNavigatorOwner2()
	{
		Cxnavigator::_di_IcxNavigatorOwner2 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxnavigator::IcxNavigatorOwner2*(void) { return (Cxnavigator::IcxNavigatorOwner2*)&__IcxNavigatorOwner2; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {504B7F43-8847-46C5-B84A-C24F8E5E61A6}
	operator Cxnavigator::_di_IcxNavigatorOwner()
	{
		Cxnavigator::_di_IcxNavigatorOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxnavigator::IcxNavigatorOwner*(void) { return (Cxnavigator::IcxNavigatorOwner*)&__IcxNavigatorOwner2; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridTableViewInfoCacheItem : public Cxgridcustomview::TcxCustomGridViewInfoCacheItem
{
	typedef Cxgridcustomview::TcxCustomGridViewInfoCacheItem inherited;
	
private:
	int FHeight;
	bool FIsHeightAssigned;
	TcxCustomGridRecord* __fastcall GetGridRecord();
	void __fastcall SetHeight(int Value);
	
protected:
	__property TcxCustomGridRecord* GridRecord = {read=GetGridRecord};
	
public:
	virtual void __fastcall UnassignValues(bool AKeepMaster);
	__property int Height = {read=FHeight, write=SetHeight, nodefault};
	__property bool IsHeightAssigned = {read=FIsHeightAssigned, write=FIsHeightAssigned, nodefault};
public:
	/* TcxCustomGridViewInfoCacheItem.Create */ inline __fastcall virtual TcxCustomGridTableViewInfoCacheItem(Cxgridcustomview::TcxCustomGridViewInfoCache* AOwner, int AIndex) : Cxgridcustomview::TcxCustomGridViewInfoCacheItem(AOwner, AIndex) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomGridTableViewInfoCacheItem() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridTableViewInfoCache : public Cxgridcustomview::TcxCustomGridViewInfoCache
{
	typedef Cxgridcustomview::TcxCustomGridViewInfoCache inherited;
	
private:
	HIDESBASE TcxCustomGridTableViewData* __fastcall GetViewData();
	
protected:
	virtual Cxgridcustomview::TcxCustomGridViewInfoCacheItemClass __fastcall GetItemClass(int Index);
	__property TcxCustomGridTableViewData* ViewData = {read=GetViewData};
public:
	/* TcxCustomGridViewInfoCache.Create */ inline __fastcall virtual TcxCustomGridTableViewInfoCache(Cxgridcustomview::TcxCustomGridView* AGridView) : Cxgridcustomview::TcxCustomGridViewInfoCache(AGridView) { }
	/* TcxCustomGridViewInfoCache.Destroy */ inline __fastcall virtual ~TcxCustomGridTableViewInfoCache() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TcxGridTableItemChange : unsigned char { ticProperty, ticLayout, ticSize };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridTableItemCustomOptions : public Dxcoreclasses::TcxInterfacedPersistent
{
	typedef Dxcoreclasses::TcxInterfacedPersistent inherited;
	
private:
	TcxCustomGridTableView* __fastcall GetGridView();
	TcxCustomGridTableItem* __fastcall GetItem();
	
protected:
	virtual void __fastcall Changed(TcxGridTableItemChange AChange = (TcxGridTableItemChange)(0x1));
	
public:
	__fastcall virtual TcxCustomGridTableItemCustomOptions(TcxCustomGridTableItem* AItem);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property TcxCustomGridTableView* GridView = {read=GetGridView};
	__property TcxCustomGridTableItem* Item = {read=GetItem};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxCustomGridTableItemCustomOptions() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TcxGridItemShowEditButtons : unsigned char { isebDefault, isebNever, isebAlways };

enum DECLSPEC_DENUM TcxGridItemSortByDisplayText : unsigned char { isbtDefault, isbtOn, isbtOff };

typedef System::TMetaClass* TcxCustomGridTableItemOptionsClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridTableItemOptions : public TcxCustomGridTableItemCustomOptions
{
	typedef TcxCustomGridTableItemCustomOptions inherited;
	
private:
	Cxedit::TcxItemInplaceEditAutoHeight FEditAutoHeight;
	bool FEditing;
	bool FExpressionEditing;
	bool FFiltering;
	bool FFilteringAddValueItems;
	Dxfiltervaluecontainer::TdxExcelFilterValueContainerApplyChangesMode FFilteringExcelPopupApplyChanges;
	Dxfiltervaluecontainer::TdxExcelFilterValueContainerDateTimeValuesPageType FFilteringExcelPopupDateTimeValuesPageType;
	Dxfiltervaluecontainer::TdxExcelFilterValueContainerDefaultPage FFilteringExcelPopupDefaultPage;
	Dxfiltervaluecontainer::TdxExcelFilterValueContainerNumericValuesPageType FFilteringExcelPopupNumericValuesPageType;
	bool FFilteringFilteredItemsList;
	bool FFilteringFilteredItemsListShowFilteredItemsOnly;
	bool FFilteringMRUItemsList;
	bool FFilteringPopup;
	bool FFilteringPopupIncrementalFiltering;
	Cxtextedit::TcxTextEditIncrementalFilteringOptions FFilteringPopupIncrementalFilteringOptions;
	Dxfilterpopupwindow::TdxFilterPopupWindowMode FFilteringPopupMode;
	bool FFilteringPopupMultiSelect;
	bool FFilteringWithFindPanel;
	bool FFocusing;
	bool FGrouping;
	bool FIgnoreTimeForFiltering;
	bool FIncSearch;
	bool FMoving;
	bool FShowCaption;
	TcxGridItemShowEditButtons FShowEditButtons;
	TcxGridItemSortByDisplayText FSortByDisplayText;
	bool FSorting;
	void __fastcall SetEditAutoHeight(Cxedit::TcxItemInplaceEditAutoHeight Value);
	void __fastcall SetEditing(bool Value);
	void __fastcall SetFiltering(bool Value);
	void __fastcall SetFilteringAddValueItems(bool Value);
	void __fastcall SetFilteringExcelPopupApplyChanges(Dxfiltervaluecontainer::TdxExcelFilterValueContainerApplyChangesMode AValue);
	void __fastcall SetFilteringExcelPopupDateTimeValuesPageType(const Dxfiltervaluecontainer::TdxExcelFilterValueContainerDateTimeValuesPageType AValue);
	void __fastcall SetFilteringExcelPopupDefaultPage(const Dxfiltervaluecontainer::TdxExcelFilterValueContainerDefaultPage AValue);
	void __fastcall SetFilteringExcelPopupNumericValuesPageType(const Dxfiltervaluecontainer::TdxExcelFilterValueContainerNumericValuesPageType AValue);
	void __fastcall SetFilteringFilteredItemsList(bool Value);
	void __fastcall SetFilteringFilteredItemsListShowFilteredItemsOnly(bool AValue);
	void __fastcall SetFilteringMRUItemsList(bool Value);
	void __fastcall SetFilteringPopup(bool Value);
	void __fastcall SetFilteringPopupMode(const Dxfilterpopupwindow::TdxFilterPopupWindowMode AValue);
	void __fastcall SetFilteringPopupMultiSelect(bool Value);
	void __fastcall SetFilteringWithFindPanel(bool AValue);
	void __fastcall SetFocusing(bool Value);
	void __fastcall SetGrouping(bool Value);
	void __fastcall SetIgnoreTimeForFiltering(bool Value);
	void __fastcall SetIncSearch(bool Value);
	void __fastcall SetMoving(bool Value);
	void __fastcall SetShowCaption(bool Value);
	void __fastcall SetShowEditButtons(TcxGridItemShowEditButtons Value);
	void __fastcall SetSortByDisplayText(TcxGridItemSortByDisplayText Value);
	void __fastcall SetSorting(bool Value);
	
protected:
	Dxfiltervaluecontainer::TdxFilterApplyChangesMode __fastcall GetFilterPopupWindowApplyMode();
	System::UnicodeString __fastcall GetFilterPopupWindowButtonCaption();
	bool __fastcall GetFilterPopupWindowIncrementalFiltering();
	Cxtextedit::TcxTextEditIncrementalFilteringOptions __fastcall GetFilterPopupWindowIncrementalFilteringOptions();
	int __fastcall GetFilterPopupWindowVisibleItemCount();
	bool __fastcall GetFilterPopupWindowShowCheckBoxes();
	int __fastcall GetFilterPopupWindowWidth();
	Dxfiltervaluecontainer::TdxExcelFilterValueContainerApplyChangesMode __fastcall GetExcelFilterPopupApplyChanges();
	Dxfiltervaluecontainer::TdxExcelFilterValueContainerDateTimeValuesPageType __fastcall GetExcelFilterPopupDateTimeValuesPageType();
	Dxfiltervaluecontainer::TdxExcelFilterValueContainerDefaultPage __fastcall GetExcelFilterPopupDefaultPage();
	Dxfiltervaluecontainer::TdxExcelFilterValueContainerNumericValuesPageType __fastcall GetExcelFilterPopupNumericValuesPageType();
	virtual void __fastcall BeforeShowCaptionChange();
	__property Cxedit::TcxItemInplaceEditAutoHeight EditAutoHeight = {read=FEditAutoHeight, write=SetEditAutoHeight, default=0};
	__property bool ExpressionEditing = {read=FExpressionEditing, write=FExpressionEditing, default=1};
	__property bool Grouping = {read=FGrouping, write=SetGrouping, default=1};
	__property bool Moving = {read=FMoving, write=SetMoving, default=1};
	__property bool ShowCaption = {read=FShowCaption, write=SetShowCaption, default=1};
	__property TcxGridItemSortByDisplayText SortByDisplayText = {read=FSortByDisplayText, write=SetSortByDisplayText, default=0};
	__property bool Sorting = {read=FSorting, write=SetSorting, default=1};
	
public:
	__fastcall virtual TcxCustomGridTableItemOptions(TcxCustomGridTableItem* AItem);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property bool FilteringAddValueItems = {read=FFilteringAddValueItems, write=SetFilteringAddValueItems, default=1};
	__property Dxfiltervaluecontainer::TdxExcelFilterValueContainerApplyChangesMode FilteringExcelPopupApplyChanges = {read=FFilteringExcelPopupApplyChanges, write=SetFilteringExcelPopupApplyChanges, default=0};
	__property Dxfiltervaluecontainer::TdxExcelFilterValueContainerDateTimeValuesPageType FilteringExcelPopupDateTimeValuesPageType = {read=FFilteringExcelPopupDateTimeValuesPageType, write=SetFilteringExcelPopupDateTimeValuesPageType, default=0};
	__property Dxfiltervaluecontainer::TdxExcelFilterValueContainerDefaultPage FilteringExcelPopupDefaultPage = {read=FFilteringExcelPopupDefaultPage, write=SetFilteringExcelPopupDefaultPage, default=0};
	__property Dxfiltervaluecontainer::TdxExcelFilterValueContainerNumericValuesPageType FilteringExcelPopupNumericValuesPageType = {read=FFilteringExcelPopupNumericValuesPageType, write=SetFilteringExcelPopupNumericValuesPageType, default=0};
	__property bool FilteringFilteredItemsList = {read=FFilteringFilteredItemsList, write=SetFilteringFilteredItemsList, default=1};
	__property bool FilteringFilteredItemsListShowFilteredItemsOnly = {read=FFilteringFilteredItemsListShowFilteredItemsOnly, write=SetFilteringFilteredItemsListShowFilteredItemsOnly, default=1};
	__property bool FilteringMRUItemsList = {read=FFilteringMRUItemsList, write=SetFilteringMRUItemsList, default=1};
	__property bool FilteringPopup = {read=FFilteringPopup, write=SetFilteringPopup, default=1};
	__property bool FilteringPopupIncrementalFiltering = {read=FFilteringPopupIncrementalFiltering, write=FFilteringPopupIncrementalFiltering, default=0};
	__property Cxtextedit::TcxTextEditIncrementalFilteringOptions FilteringPopupIncrementalFilteringOptions = {read=FFilteringPopupIncrementalFilteringOptions, write=FFilteringPopupIncrementalFilteringOptions, default=3};
	__property Dxfilterpopupwindow::TdxFilterPopupWindowMode FilteringPopupMode = {read=FFilteringPopupMode, write=SetFilteringPopupMode, default=0};
	__property bool FilteringPopupMultiSelect = {read=FFilteringPopupMultiSelect, write=SetFilteringPopupMultiSelect, default=1};
	__property TcxGridItemShowEditButtons ShowEditButtons = {read=FShowEditButtons, write=SetShowEditButtons, default=0};
	
__published:
	__property bool Editing = {read=FEditing, write=SetEditing, default=1};
	__property bool Filtering = {read=FFiltering, write=SetFiltering, default=1};
	__property bool FilteringWithFindPanel = {read=FFilteringWithFindPanel, write=SetFilteringWithFindPanel, default=1};
	__property bool Focusing = {read=FFocusing, write=SetFocusing, default=1};
	__property bool IgnoreTimeForFiltering = {read=FIgnoreTimeForFiltering, write=SetIgnoreTimeForFiltering, default=1};
	__property bool IncSearch = {read=FIncSearch, write=SetIncSearch, default=1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxCustomGridTableItemOptions() { }
	
private:
	void *__IdxExcelFilterPopupWindowOptions;	// Dxfilterpopupwindow::IdxExcelFilterPopupWindowOptions 
	void *__IdxFilterPopupWindowOptions;	// Dxfilterpopupwindow::IdxFilterPopupWindowOptions 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {BC38A38C-8202-46C6-B5B3-3952577DE96B}
	operator Dxfilterpopupwindow::_di_IdxExcelFilterPopupWindowOptions()
	{
		Dxfilterpopupwindow::_di_IdxExcelFilterPopupWindowOptions intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxfilterpopupwindow::IdxExcelFilterPopupWindowOptions*(void) { return (Dxfilterpopupwindow::IdxExcelFilterPopupWindowOptions*)&__IdxExcelFilterPopupWindowOptions; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {EF3A7F20-7A85-4AEB-9FE6-91D3A60CDBC7}
	operator Dxfilterpopupwindow::_di_IdxFilterPopupWindowOptions()
	{
		Dxfilterpopupwindow::_di_IdxFilterPopupWindowOptions intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxfilterpopupwindow::IdxFilterPopupWindowOptions*(void) { return (Dxfilterpopupwindow::IdxFilterPopupWindowOptions*)&__IdxFilterPopupWindowOptions; }
	#endif
	
};

#pragma pack(pop)

typedef void __fastcall (__closure *TcxGridGetCellStyleEvent)(TcxCustomGridTableView* Sender, TcxCustomGridRecord* ARecord, TcxCustomGridTableItem* AItem, Cxstyles::TcxStyle* &AStyle);

typedef void __fastcall (__closure *TcxGridGetRecordStyleEvent)(TcxCustomGridTableView* Sender, TcxCustomGridRecord* ARecord, Cxstyles::TcxStyle* &AStyle);

typedef System::TMetaClass* TcxCustomGridTableItemStylesClass;

class PASCALIMPLEMENTATION TcxCustomGridTableItemStyles : public Cxgridcustomview::TcxCustomGridStyles
{
	typedef Cxgridcustomview::TcxCustomGridStyles inherited;
	
private:
	TcxCustomGridTableItem* FItem;
	TcxGridGetCellStyleEvent FOnGetContentStyle;
	TcxCustomGridTableView* __fastcall GetGridViewValue();
	void __fastcall SetOnGetContentStyle(TcxGridGetCellStyleEvent Value);
	
protected:
	virtual void __fastcall GetDefaultViewParams(int Index, System::TObject* AData, /* out */ Cxgraphics::TcxViewParams &AParams);
	virtual Cxgridcustomview::TcxCustomGridView* __fastcall GetGridView();
	
public:
	__fastcall virtual TcxCustomGridTableItemStyles(System::Classes::TPersistent* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall GetContentParams(TcxCustomGridRecord* ARecord, /* out */ Cxgraphics::TcxViewParams &AParams);
	__property TcxCustomGridTableView* GridView = {read=GetGridViewValue};
	__property TcxCustomGridTableItem* Item = {read=FItem};
	
__published:
	__property Cxstyles::TcxStyle* Content = {read=GetValue, write=SetValue, index=0};
	__property TcxGridGetCellStyleEvent OnGetContentStyle = {read=FOnGetContentStyle, write=SetOnGetContentStyle};
public:
	/* TcxStyles.Destroy */ inline __fastcall virtual ~TcxCustomGridTableItemStyles() { }
	
};


typedef Dxcore::TdxSortOrder TcxGridSortOrder;

typedef void __fastcall (__closure *TcxGridTableDataCellCustomDrawEvent)(TcxCustomGridTableView* Sender, Cxgraphics::TcxCanvas* ACanvas, TcxGridTableDataCellViewInfo* AViewInfo, bool &ADone);

typedef void __fastcall (__closure *TcxGridGetCellHintEvent)(TcxCustomGridTableItem* Sender, TcxCustomGridRecord* ARecord, TcxGridTableDataCellViewInfo* ACellViewInfo, const System::Types::TPoint &AMousePos, Vcl::Controls::TCaption &AHintText, bool &AIsHintMultiLine, System::Types::TRect &AHintTextRect);

typedef void __fastcall (__closure *TcxGridGetDataTextEvent)(TcxCustomGridTableItem* Sender, int ARecordIndex, System::UnicodeString &AText);

typedef void __fastcall (__closure *TcxGridGetDisplayTextEvent)(TcxCustomGridTableItem* Sender, TcxCustomGridRecord* ARecord, System::UnicodeString &AText);

typedef void __fastcall (__closure *TcxGridGetFilterDisplayTextEvent)(TcxCustomGridTableItem* Sender, const System::Variant &AValue, System::UnicodeString &ADisplayText);

typedef void __fastcall (__closure *TcxGridGetFilterValuesEvent)(TcxCustomGridTableItem* Sender, Cxcustomdata::TcxDataFilterValueList* AValueList);

typedef void __fastcall (__closure *TcxGridGetPropertiesEvent)(TcxCustomGridTableItem* Sender, TcxCustomGridRecord* ARecord, Cxedit::TcxCustomEditProperties* &AProperties);

typedef void __fastcall (__closure *TcxGridInitDateRangesEvent)(TcxCustomGridTableItem* Sender, Dxdateranges::TdxDateRanges* ADateRanges);

typedef void __fastcall (__closure *TcxGridTableItemGetStoredPropertiesEvent)(TcxCustomGridTableItem* Sender, System::Classes::TStrings* AProperties);

typedef void __fastcall (__closure *TcxGridTableItemGetStoredPropertyValueEvent)(TcxCustomGridTableItem* Sender, const System::UnicodeString AName, System::Variant &AValue);

typedef void __fastcall (__closure *TcxGridTableItemSetStoredPropertyValueEvent)(TcxCustomGridTableItem* Sender, const System::UnicodeString AName, const System::Variant &AValue);

typedef void __fastcall (__closure *TcxGridUserFilteringEvent)(TcxCustomGridTableItem* Sender, const System::Variant &AValue, const System::UnicodeString ADisplayText);

typedef void __fastcall (__closure *TcxGridUserFilteringExEvent)(TcxCustomGridTableItem* Sender, Cxfilter::TcxFilterCriteriaItemList* AFilterList, const System::Variant &AValue, const System::UnicodeString ADisplayText);

typedef void __fastcall (__closure *TcxGridValidateDrawValueEvent)(TcxCustomGridTableItem* Sender, TcxCustomGridRecord* ARecord, const System::Variant &AValue, Cxedit::TcxEditValidateInfo* AData);

typedef System::TMetaClass* TcxCustomGridTableItemClass;

class PASCALIMPLEMENTATION TcxCustomGridTableItem : public Cxclasses::TcxComponent
{
	typedef Cxclasses::TcxComponent inherited;
	
private:
	System::UnicodeString FAlternateCaption;
	int FBestFitMaxWidth;
	System::UnicodeString FCaption;
	Dxcoreclasses::TdxFastList* FCells;
	Cxedit::TcxEditStyle* FCellStyle;
	int FCellStyleUseCounter;
	TcxGridItemDataBinding* FDataBinding;
	Dxdateranges::TdxDateTimeGrouping FDateTimeGrouping;
	Cxedit::TcxCustomEditData* FEditData;
	Cxedit::TcxCustomEditViewData* FEditViewData;
	int FEmptyEditorHeight;
	TcxGridFilteringDateRanges* FFilteringDateRanges;
	TcxCustomGridTableView* FGridView;
	TcxGridGroupingDateRanges* FGroupingDateRanges;
	System::Classes::TAlignment FHeaderAlignmentHorz;
	Cxclasses::TcxAlignmentVert FHeaderAlignmentVert;
	System::UnicodeString FHeaderHint;
	int FID;
	bool FIgnoreLoadingStatus;
	int FIndex;
	bool FIsCaptionAssigned;
	bool FIsHeaderAlignmentHorzAssigned;
	bool FIsHeaderAlignmentVertAssigned;
	bool FIsWidthAssigned;
	Cxedit::TcxCustomEditProperties* FLastEditingProperties;
	Cxedit::TcxEditRepositoryItem* FLastUsedDefaultRepositoryItem;
	int FMinWidth;
	TcxCustomGridTableItemOptions* FOptions;
	Cxedit::TcxCustomEditProperties* FProperties;
	Cxedit::TcxCustomEditPropertiesClass FPropertiesClass;
	Cxedit::TcxCustomEditProperties* FPropertiesValue;
	Cxedit::TcxEditRepositoryItem* FRepositoryItem;
	Cxedit::TcxCustomEditProperties* FRepositoryItemTempProperties;
	bool FSavedVisible;
	TcxCustomGridTableItemStyles* FStyles;
	bool FVisible;
	bool FVisibleForCustomization;
	Dxcore::TdxDefaultBoolean FVisibleForExpressionEditor;
	int FVisibleIndex;
	bool FWasVisibleBeforeGrouping;
	int FWidth;
	TcxGridTableDataCellCustomDrawEvent FOnCustomDrawCell;
	TcxGridGetCellHintEvent FOnGetCellHint;
	TcxGridGetDataTextEvent FOnGetDataText;
	TcxGridGetDisplayTextEvent FOnGetDisplayText;
	TcxGridGetFilterDisplayTextEvent FOnGetFilterDisplayText;
	TcxGridGetFilterValuesEvent FOnGetFilterValues;
	TcxGridGetPropertiesEvent FOnGetProperties;
	TcxGridGetPropertiesEvent FOnGetPropertiesForEdit;
	TcxGridTableItemGetStoredPropertiesEvent FOnGetStoredProperties;
	TcxGridTableItemGetStoredPropertyValueEvent FOnGetStoredPropertyValue;
	TcxGridInitDateRangesEvent FOnInitFilteringDateRanges;
	TcxGridInitDateRangesEvent FOnInitGroupingDateRanges;
	TcxGridTableItemSetStoredPropertyValueEvent FOnSetStoredPropertyValue;
	TcxGridUserFilteringEvent FOnUserFiltering;
	TcxGridUserFilteringExEvent FOnUserFilteringEx;
	TcxGridValidateDrawValueEvent FOnValidateDrawValue;
	System::Classes::TNotifyEvent FSubClassEvents;
	int __fastcall GetActualMinWidth();
	System::UnicodeString __fastcall GetCaption();
	TcxGridTableDataCellViewInfo* __fastcall GetCell(int Index);
	int __fastcall GetCellCount();
	TcxCustomGridTableController* __fastcall GetController();
	Cxcustomdata::TcxCustomDataController* __fastcall GetDataController();
	bool __fastcall GetEditing();
	Cxedit::TcxCustomEditProperties* __fastcall GetEditingProperties();
	int __fastcall GetEmptyEditorHeight();
	System::UnicodeString __fastcall GetFilterCaption();
	bool __fastcall GetFiltered();
	bool __fastcall GetFocused();
	int __fastcall GetGroupIndex();
	System::Classes::TAlignment __fastcall GetHeaderAlignmentHorz();
	Cxclasses::TcxAlignmentVert __fastcall GetHeaderAlignmentVert();
	bool __fastcall GetHidden();
	HIDESBASE bool __fastcall GetIsLoading();
	bool __fastcall GetIncSearching();
	HIDESBASE bool __fastcall GetIsDestroying();
	bool __fastcall GetIsFirst();
	bool __fastcall GetIsLast();
	bool __fastcall GetIsReading();
	bool __fastcall GetIsUpdating();
	int __fastcall GetMinWidth();
	System::UnicodeString __fastcall GetPropertiesClassName();
	int __fastcall GetSortIndex();
	Dxcore::TdxSortOrder __fastcall GetSortOrder();
	NativeInt __fastcall GetTag();
	TcxCustomGridTableViewData* __fastcall GetViewData();
	int __fastcall GetWidth();
	void __fastcall SetAlternateCaption(const System::UnicodeString Value);
	void __fastcall SetBestFitMaxWidth(int Value);
	void __fastcall SetCaption(const System::UnicodeString Value);
	void __fastcall SetDataBinding(TcxGridItemDataBinding* Value);
	void __fastcall SetDateTimeGrouping(Dxdateranges::TdxDateTimeGrouping Value);
	void __fastcall SetEditing(bool Value);
	void __fastcall SetFiltered(bool Value);
	void __fastcall SetFocused(bool Value);
	void __fastcall SetGroupIndex(int Value);
	void __fastcall SetHeaderAlignmentHorz(System::Classes::TAlignment Value);
	void __fastcall SetHeaderAlignmentVert(Cxclasses::TcxAlignmentVert Value);
	void __fastcall SetHeaderHint(const System::UnicodeString Value);
	void __fastcall SetHidden(bool Value);
	void __fastcall SetIndex(int Value);
	void __fastcall SetMinWidth(int Value);
	void __fastcall SetOnCustomDrawCell(TcxGridTableDataCellCustomDrawEvent Value);
	void __fastcall SetOnGetCellHint(TcxGridGetCellHintEvent Value);
	void __fastcall SetOnGetDataText(TcxGridGetDataTextEvent Value);
	void __fastcall SetOnGetDisplayText(TcxGridGetDisplayTextEvent Value);
	void __fastcall SetOnGetFilterDisplayText(TcxGridGetFilterDisplayTextEvent Value);
	void __fastcall SetOnGetFilterValues(TcxGridGetFilterValuesEvent Value);
	void __fastcall SetOnGetProperties(TcxGridGetPropertiesEvent Value);
	void __fastcall SetOnGetPropertiesForEdit(TcxGridGetPropertiesEvent Value);
	void __fastcall SetOnGetStoredProperties(TcxGridTableItemGetStoredPropertiesEvent Value);
	void __fastcall SetOnGetStoredPropertyValue(TcxGridTableItemGetStoredPropertyValueEvent Value);
	void __fastcall SetOnInitFilteringDateRanges(TcxGridInitDateRangesEvent Value);
	void __fastcall SetOnInitGroupingDateRanges(TcxGridInitDateRangesEvent Value);
	void __fastcall SetOnSetStoredPropertyValue(TcxGridTableItemSetStoredPropertyValueEvent Value);
	void __fastcall SetOnUserFiltering(TcxGridUserFilteringEvent Value);
	void __fastcall SetOnUserFilteringEx(TcxGridUserFilteringExEvent Value);
	void __fastcall SetOnValidateDrawValue(TcxGridValidateDrawValueEvent Value);
	void __fastcall SetOptions(TcxCustomGridTableItemOptions* Value);
	void __fastcall SetProperties(Cxedit::TcxCustomEditProperties* Value);
	void __fastcall SetPropertiesClass(Cxedit::TcxCustomEditPropertiesClass Value);
	void __fastcall SetPropertiesClassName(const System::UnicodeString Value);
	void __fastcall SetRepositoryItem(Cxedit::TcxEditRepositoryItem* Value);
	void __fastcall SetSortIndex(int Value);
	void __fastcall SetSortOrder(Dxcore::TdxSortOrder Value);
	void __fastcall SetStyles(TcxCustomGridTableItemStyles* Value);
	void __fastcall SetTag(NativeInt Value);
	void __fastcall SetVisible(bool Value);
	void __fastcall SetVisibleForCustomization(bool Value);
	void __fastcall SetWidth(int Value);
	void __fastcall ReadHidden(System::Classes::TReader* Reader);
	void __fastcall ReadIsCaptionAssigned(System::Classes::TReader* Reader);
	void __fastcall WriteIsCaptionAssigned(System::Classes::TWriter* Writer);
	bool __fastcall IsCaptionStored();
	bool __fastcall IsSortOrderStored();
	bool __fastcall IsTagStored();
	bool __fastcall IsWidthStored();
	TcxGridItemDataBindingClass __fastcall GetDataBindingClass();
	void __fastcall CreateProperties();
	void __fastcall DestroyProperties();
	void __fastcall RecreateProperties();
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	DYNAMIC void __fastcall SetParentComponent(System::Classes::TComponent* AParent);
	void __fastcall ItemRemoved(Cxedit::TcxEditRepositoryItem* Sender);
	void __fastcall RepositoryItemPropertiesChanged(Cxedit::TcxEditRepositoryItem* Sender);
	virtual System::UnicodeString __fastcall GetObjectName();
	virtual bool __fastcall GetStoredProperties(System::Classes::TStrings* AProperties);
	virtual void __fastcall GetPropertyValue(const System::UnicodeString AName, System::Variant &AValue);
	virtual void __fastcall SetPropertyValue(const System::UnicodeString AName, const System::Variant &AValue);
	virtual void __fastcall ChangeScale(int M, int D);
	Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	void __fastcall FilteringApplied();
	Cxfilter::TcxFilterCriteria* __fastcall GetFilter();
	void __fastcall GetFilterActiveValueIndexes(Cxfilter::TcxFilterValueList* AValues, Cxclasses::TdxIntegerIndexes &AIndexes);
	int __fastcall GetFilterSelectedValueIndex(Cxfilter::TcxFilterValueList* AValues);
	Cxfilter::TcxFilterValueListClass __fastcall GetFilterValuesClass();
	void __fastcall PopulateFilterValues(Cxfilter::TcxFilterValueList* AValues, System::Classes::TStrings* ADisplayValues, bool AValuesOnly, bool AUniqueOnly);
	void __fastcall SetFilterActiveValueIndex(Cxfilter::TcxFilterValueList* AValues, int AIndex, Cxfilter::TcxFilterCriteriaItemList* AFilterList, bool AReplaceExistent, bool AAddToMRUItemsList);
	void __fastcall SetFilterActiveValueIndexes(Cxfilter::TcxFilterValueList* AValues, const Cxclasses::TdxIntegerIndexes AIndexes, bool AAddToMRUItemsList = false);
	System::TObject* __fastcall GetFilterItemLink();
	Cxedit::TcxCustomEditProperties* __fastcall GetFilterProperties();
	Cxdatastorage::TcxValueTypeClass __fastcall GetFilterValueTypeClass();
	void __fastcall SetFilterActiveValue(Cxfilter::TcxFilterOperatorKind AOperatorKind, const System::Variant &AValue, const System::UnicodeString ADisplayText);
	void __fastcall SetFilterActiveValues(Dxcoreclasses::TdxFastObjectList* AValueInfos, Cxfilter::TcxFilterBoolOperatorKind ABoolOperator);
	System::UnicodeString __fastcall GetCustomFunctions(System::Classes::TStrings* ACustomFunctions);
	void __fastcall SetFilterActiveCustomFunction(const System::UnicodeString ACustomFunctionName, const System::Variant &AValue, const System::UnicodeString ADisplayText);
	System::UnicodeString __fastcall GetDateTimeHandlingDateFormat();
	System::UnicodeString __fastcall GetDateTimeHandlingHourFormat();
	System::UnicodeString __fastcall GetDateTimeHandlingMonthFormat();
	System::UnicodeString __fastcall GetDateTimeHandlingYearFormat();
	Dxdateranges::TdxDateTimeFilters __fastcall GetDateTimeHandlingFilters();
	Dxdateranges::TdxDateTimeGrouping __fastcall GetDateTimeHandlingGrouping();
	bool __fastcall CanUseInExpression();
	System::UnicodeString __fastcall GetReferenceName();
	virtual void __fastcall CreateDataBinding();
	virtual void __fastcall DestroyDataBinding();
	virtual void __fastcall CreateSubClasses();
	virtual void __fastcall DestroySubClasses();
	virtual TcxGridFilteringDateRangesClass __fastcall GetFilteringDateRangesClass();
	virtual TcxGridGroupingDateRangesClass __fastcall GetGroupingDateRangesClass();
	virtual TcxCustomGridTableItemOptionsClass __fastcall GetOptionsClass();
	virtual TcxCustomGridTableItemStylesClass __fastcall GetStylesClass();
	bool __fastcall IsHeaderAlignmentHorzStored();
	bool __fastcall IsHeaderAlignmentVertStored();
	virtual void __fastcall BestFitApplied(bool AFireEvents);
	virtual int __fastcall CalculateBestFitWidth();
	virtual void __fastcall CalculateVisualParams();
	virtual bool __fastcall CanAutoHeight();
	virtual bool __fastcall CanEdit();
	virtual bool __fastcall CanEditAutoHeight();
	virtual bool __fastcall CanFilter(bool AVisually);
	virtual bool __fastcall CanFilterUsingChecks();
	virtual bool __fastcall CanFilterMRUValueItems();
	virtual bool __fastcall CanSearch();
	virtual bool __fastcall CanFocus(TcxCustomGridRecord* ARecord);
	virtual bool __fastcall CanGroup();
	virtual bool __fastcall CanHide();
	virtual bool __fastcall CanHorzSize();
	virtual bool __fastcall CanIgnoreTimeForFiltering();
	virtual bool __fastcall CanIncSearch();
	virtual bool __fastcall CanInitEditing();
	virtual bool __fastcall CanMove();
	virtual bool __fastcall CanScroll();
	virtual bool __fastcall CanSort();
	virtual void __fastcall CaptionChanged();
	virtual void __fastcall Changed(TcxGridTableItemChange AChange);
	virtual void __fastcall ChangeGroupIndex(int Value);
	virtual void __fastcall ChangeGrouping(int AGroupIndex, bool AMergeWithLeftColumn = false, bool AMergeWithRightColumn = false);
	void __fastcall ChangeSortIndex(int Value);
	virtual void __fastcall CheckUsingInFindCriteria();
	void __fastcall CheckWidthValue(int &Value);
	virtual void __fastcall DataChanged();
	virtual void __fastcall DateTimeGroupingChanged();
	virtual void __fastcall DoRefreshStylesCache();
	virtual void __fastcall DoSetVisible(bool Value);
	virtual void __fastcall ForceWidth(int Value);
	virtual bool __fastcall GetActuallyVisible();
	virtual void __fastcall GetBestFitRecordRange(/* out */ int &AFirstIndex, /* out */ int &ALastIndex);
	virtual int __fastcall GetBestFitWidth();
	virtual bool __fastcall GetEditable();
	virtual Cxedit::TcxInplaceEditAutoHeight __fastcall GetEditAutoHeight();
	virtual bool __fastcall GetEditPartVisible();
	virtual System::Variant __fastcall GetEditValue();
	virtual bool __fastcall GetFilterable();
	virtual void __fastcall GetFilterDisplayText(const System::Variant &AValue, System::UnicodeString &ADisplayText);
	virtual Dxfilterpopupwindow::TdxFilterPopupWindowMode __fastcall GetFilterPopupMode();
	virtual TcxGridTableDataCellViewInfo* __fastcall GetFocusedCellViewInfo();
	virtual bool __fastcall GetIsFixedByWidth();
	virtual Cxedit::TcxCustomEditProperties* __fastcall GetPropertiesForEdit();
	Cxedit::TcxCustomEditProperties* __fastcall GetPropertiesValue();
	virtual bool __fastcall GetVisible();
	virtual System::UnicodeString __fastcall GetVisibleCaption();
	virtual bool __fastcall GetVisibleForCustomization();
	virtual bool __fastcall GetVisibleInQuickCustomizationPopup();
	virtual void __fastcall GroupingChanging();
	bool __fastcall HasCustomDrawCell();
	virtual bool __fastcall HasFixedWidth();
	virtual void __fastcall InitFilteringDateRanges();
	virtual void __fastcall InitGroupingDateRanges();
	virtual void __fastcall InitProperties(Cxedit::TcxCustomEditProperties* AProperties);
	bool __fastcall IsDefaultVisibleForExpressionEditor();
	bool __fastcall IsExpression();
	virtual bool __fastcall IsSearchable();
	bool __fastcall IsSortingByDisplayText(bool ASortByDisplayText);
	virtual bool __fastcall IsVisibleForFocus(TcxCustomGridRecord* ARecord);
	virtual bool __fastcall IsVisibleForRecordChange();
	virtual bool __fastcall IsVisibleStored();
	virtual bool __fastcall IsVisibleForCustomizationStored();
	virtual bool __fastcall IsVisibleForExpressionEditor();
	virtual bool __fastcall CanDataCellScroll();
	void __fastcall PropertiesChanged();
	void __fastcall PropertiesChangedHandler(System::TObject* Sender);
	void __fastcall PropertiesValueChanged();
	void __fastcall RecalculateDefaultWidth();
	virtual void __fastcall ResetFocus();
	virtual void __fastcall SetEditValue(const System::Variant &Value);
	virtual void __fastcall SetGridView(TcxCustomGridTableView* Value);
	virtual bool __fastcall ShowButtons(bool AFocused);
	virtual bool __fastcall ShowFilteredItemsOnlyForFilteredValues();
	virtual bool __fastcall ShowOnUngrouping();
	virtual bool __fastcall SupportsGroupingDateRanges(bool ACheckCustomHandlers);
	virtual bool __fastcall TryResetFocusToNext();
	virtual bool __fastcall UseFilteredValuesForFilterValueList();
	bool __fastcall UseOwnProperties();
	virtual bool __fastcall UseValueItemsForFilterValueList();
	void __fastcall ValidateEditData(Cxedit::TcxCustomEditProperties* AEditProperties);
	virtual void __fastcall ValueTypeClassChanged();
	virtual void __fastcall VisibleChanged();
	virtual void __fastcall VisibleForCustomizationChanged();
	virtual System::UnicodeString __fastcall DefaultAlternateCaption();
	virtual System::UnicodeString __fastcall DefaultCaption();
	System::Classes::TAlignment __fastcall DefaultHeaderAlignmentHorz();
	Cxclasses::TcxAlignmentVert __fastcall DefaultHeaderAlignmentVert();
	Cxedit::TcxEditRepositoryItem* __fastcall DefaultRepositoryItem();
	virtual int __fastcall DefaultWidth();
	Cxedit::TcxEditStyle* __fastcall GetCellStyle();
	virtual void __fastcall InitStyle(Cxedit::TcxCustomEditStyle* AStyle, const Cxgraphics::TcxViewParams &AParams, bool AFocused);
	void __fastcall ReleaseCellStyle();
	void __fastcall AddCell(TcxGridTableDataCellViewInfo* ACell);
	void __fastcall RemoveCell(TcxGridTableDataCellViewInfo* ACell);
	__property int CellCount = {read=GetCellCount, nodefault};
	__property TcxGridTableDataCellViewInfo* Cells[int Index] = {read=GetCell};
	Cxedit::TcxCustomEditViewData* __fastcall CreateEditViewData(Cxedit::TcxCustomEditProperties* AProperties)/* overload */;
	Cxedit::TcxCustomEditViewData* __fastcall CreateEditViewData(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxEditStyle* ACellStyle)/* overload */;
	void __fastcall DestroyEditViewData(Cxedit::TcxCustomEditViewData* &AEditViewData);
	void __fastcall DoCreateEditViewData();
	void __fastcall DoDestroyEditViewData();
	void __fastcall EditViewDataGetDisplayTextHandler(Cxedit::TcxCustomEditViewData* Sender, System::UnicodeString &AText);
	Cxedit::TcxCustomEditViewData* __fastcall GetEditViewData(Cxedit::TcxCustomEditProperties* AProperties, /* out */ bool &AIsLocalCopy, bool ANeedLocalCopy = false);
	void __fastcall ReleaseEditViewData(Cxedit::TcxCustomEditViewData* &AEditViewData, bool AIsLocalCopy);
	__property Cxedit::TcxCustomEditViewData* EditViewData = {read=FEditViewData};
	void __fastcall CheckVisible();
	void __fastcall SaveVisible();
	__property bool SavedVisible = {read=FSavedVisible, nodefault};
	virtual void __fastcall DoCustomDrawCell(Cxgraphics::TcxCanvas* ACanvas, TcxGridTableDataCellViewInfo* AViewInfo, bool &ADone);
	virtual void __fastcall DoGetCellHint(TcxCustomGridRecord* ARecord, TcxGridTableDataCellViewInfo* ACellViewInfo, const System::Types::TPoint &AMousePos, Vcl::Controls::TCaption &AHintText, bool &AIsHintMultiLine, System::Types::TRect &AHintTextRect);
	virtual void __fastcall DoGetDataText(int ARecordIndex, System::UnicodeString &AText);
	virtual void __fastcall DoGetDisplayText(TcxCustomGridRecord* ARecord, System::UnicodeString &AText);
	virtual void __fastcall DoGetFilterValues(Cxcustomdata::TcxDataFilterValueList* AValueList);
	virtual Cxedit::TcxCustomEditProperties* __fastcall DoGetProperties(TcxCustomGridRecord* ARecord);
	virtual void __fastcall DoGetPropertiesForEdit(TcxCustomGridRecord* ARecord, Cxedit::TcxCustomEditProperties* &AProperties);
	virtual void __fastcall DoInitFilteringDateRanges();
	virtual void __fastcall DoInitGroupingDateRanges();
	virtual void __fastcall DoUserFiltering(const System::Variant &AValue, const System::UnicodeString ADisplayText);
	virtual void __fastcall DoUserFilteringEx(Cxfilter::TcxFilterCriteriaItemList* AFilterList, const System::Variant &AValue, const System::UnicodeString ADisplayText);
	virtual void __fastcall DoValidateDrawValue(TcxCustomGridRecord* ARecord, const System::Variant &AValue, Cxedit::TcxEditValidateInfo* AData);
	bool __fastcall HasCellHintHandler();
	bool __fastcall HasCustomPropertiesForEditHandler();
	bool __fastcall HasCustomPropertiesHandler();
	bool __fastcall HasDataTextHandler();
	bool __fastcall HasInitFilteringDateRangesHandler();
	bool __fastcall HasInitFilteringDateRangesHandlers();
	bool __fastcall HasInitGroupingDateRangesHandler();
	bool __fastcall HasInitGroupingDateRangesHandlers();
	bool __fastcall HasValidateDrawValueHandler();
	__property bool IsDestroying = {read=GetIsDestroying, nodefault};
	__property bool IsLoading = {read=GetIsLoading, nodefault};
	__property bool IsReading = {read=GetIsReading, nodefault};
	__property bool IsUpdating = {read=GetIsUpdating, nodefault};
	__property int ActualMinWidth = {read=GetActualMinWidth, nodefault};
	__property TcxCustomGridTableController* Controller = {read=GetController};
	__property Cxcustomdata::TcxCustomDataController* DataController = {read=GetDataController};
	__property Dxdateranges::TdxDateTimeGrouping DateTimeGrouping = {read=FDateTimeGrouping, write=SetDateTimeGrouping, default=0};
	__property Cxedit::TcxCustomEditProperties* EditingProperties = {read=GetEditingProperties};
	__property bool EditPartVisible = {read=GetEditPartVisible, nodefault};
	__property int EmptyEditorHeight = {read=FEmptyEditorHeight, nodefault};
	__property bool Filterable = {read=GetFilterable, nodefault};
	__property System::UnicodeString FilterCaption = {read=GetFilterCaption};
	__property int GroupIndex = {read=GetGroupIndex, write=SetGroupIndex, default=-1};
	__property TcxGridGroupingDateRanges* GroupingDateRanges = {read=FGroupingDateRanges};
	__property System::Classes::TAlignment HeaderAlignmentHorz = {read=GetHeaderAlignmentHorz, write=SetHeaderAlignmentHorz, stored=IsHeaderAlignmentHorzStored, nodefault};
	__property Cxclasses::TcxAlignmentVert HeaderAlignmentVert = {read=GetHeaderAlignmentVert, write=SetHeaderAlignmentVert, stored=IsHeaderAlignmentVertStored, nodefault};
	__property System::UnicodeString HeaderHint = {read=FHeaderHint, write=SetHeaderHint};
	__property bool Hidden = {read=GetHidden, write=SetHidden, nodefault};
	__property bool IgnoreLoadingStatus = {read=FIgnoreLoadingStatus, write=FIgnoreLoadingStatus, nodefault};
	__property bool InternalVisible = {read=FVisible, nodefault};
	__property bool IsCaptionAssigned = {read=FIsCaptionAssigned, nodefault};
	__property bool IsFixedByWidth = {read=GetIsFixedByWidth, nodefault};
	__property int MinWidth = {read=GetMinWidth, write=SetMinWidth, default=20};
	__property TcxCustomGridTableViewData* ViewData = {read=GetViewData};
	__property bool VisibleForCustomization = {read=GetVisibleForCustomization, write=SetVisibleForCustomization, stored=IsVisibleForCustomizationStored, nodefault};
	__property bool VisibleInQuickCustomizationPopup = {read=GetVisibleInQuickCustomizationPopup, nodefault};
	__property bool WasVisibleBeforeGrouping = {read=FWasVisibleBeforeGrouping, nodefault};
	__property int Width = {read=GetWidth, write=SetWidth, stored=IsWidthStored, nodefault};
	__property TcxGridInitDateRangesEvent OnInitGroupingDateRanges = {read=FOnInitGroupingDateRanges, write=SetOnInitGroupingDateRanges};
	
public:
	__fastcall virtual TcxCustomGridTableItem(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TcxCustomGridTableItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	DYNAMIC System::Classes::TComponent* __fastcall GetParentComponent();
	DYNAMIC bool __fastcall HasParent();
	virtual void __fastcall ApplyBestFit(bool ACheckSizingAbility = false, bool AFireEvents = false);
	virtual int __fastcall CalculateDefaultCellHeight(Cxgraphics::TcxCanvas* ACanvas, Vcl::Graphics::TFont* AFont);
	virtual Cxedit::TcxEditStyle* __fastcall CreateEditStyle();
	virtual void __fastcall FocusWithSelection();
	System::UnicodeString __fastcall GetAlternateCaption();
	Cxedit::TcxCustomEditDefaultValuesProvider* __fastcall GetDefaultValuesProvider(Cxedit::TcxCustomEditProperties* AProperties = (Cxedit::TcxCustomEditProperties*)(0x0));
	Cxedit::TcxCustomEditProperties* __fastcall GetProperties()/* overload */;
	Cxedit::TcxCustomEditProperties* __fastcall GetProperties(TcxCustomGridRecord* ARecord)/* overload */;
	Cxedit::TcxCustomEditProperties* __fastcall GetProperties(int ARecordIndex)/* overload */;
	Cxedit::TcxEditRepositoryItem* __fastcall GetRepositoryItem();
	void __fastcall MakeVisible();
	virtual void __fastcall RestoreDefaults();
	virtual void __fastcall ShowExpressionEditor();
	__property bool ActuallyVisible = {read=GetActuallyVisible, nodefault};
	__property int BestFitMaxWidth = {read=FBestFitMaxWidth, write=SetBestFitMaxWidth, default=0};
	__property bool Editable = {read=GetEditable, nodefault};
	__property bool Editing = {read=GetEditing, write=SetEditing, nodefault};
	__property System::Variant EditValue = {read=GetEditValue, write=SetEditValue};
	__property bool Filtered = {read=GetFiltered, write=SetFiltered, nodefault};
	__property TcxGridFilteringDateRanges* FilteringDateRanges = {read=FFilteringDateRanges};
	__property bool Focused = {read=GetFocused, write=SetFocused, nodefault};
	__property TcxGridTableDataCellViewInfo* FocusedCellViewInfo = {read=GetFocusedCellViewInfo};
	__property TcxCustomGridTableView* GridView = {read=FGridView};
	__property bool Hideable = {read=CanHide, nodefault};
	__property int ID = {read=FID, nodefault};
	__property bool IncSearching = {read=GetIncSearching, nodefault};
	__property int Index = {read=FIndex, write=SetIndex, nodefault};
	__property bool IsFirst = {read=GetIsFirst, nodefault};
	__property bool IsLast = {read=GetIsLast, nodefault};
	__property TcxCustomGridTableItemOptions* Options = {read=FOptions, write=SetOptions};
	__property Cxedit::TcxCustomEditPropertiesClass PropertiesClass = {read=FPropertiesClass, write=SetPropertiesClass};
	__property int SortIndex = {read=GetSortIndex, write=SetSortIndex, default=-1};
	__property Dxcore::TdxSortOrder SortOrder = {read=GetSortOrder, write=SetSortOrder, stored=IsSortOrderStored, nodefault};
	__property TcxCustomGridTableItemStyles* Styles = {read=FStyles, write=SetStyles};
	__property System::UnicodeString VisibleCaption = {read=GetVisibleCaption};
	__property int VisibleIndex = {read=FVisibleIndex, nodefault};
	
__published:
	__property System::UnicodeString AlternateCaption = {read=FAlternateCaption, write=SetAlternateCaption};
	__property System::UnicodeString Caption = {read=GetCaption, write=SetCaption, stored=IsCaptionStored};
	__property TcxGridItemDataBinding* DataBinding = {read=FDataBinding, write=SetDataBinding};
	__property System::UnicodeString PropertiesClassName = {read=GetPropertiesClassName, write=SetPropertiesClassName};
	__property Cxedit::TcxCustomEditProperties* Properties = {read=FProperties, write=SetProperties};
	__property Cxedit::TcxEditRepositoryItem* RepositoryItem = {read=FRepositoryItem, write=SetRepositoryItem};
	__property bool Visible = {read=GetVisible, write=SetVisible, stored=IsVisibleStored, default=1};
	__property Dxcore::TdxDefaultBoolean VisibleForExpressionEditor = {read=FVisibleForExpressionEditor, write=FVisibleForExpressionEditor, default=2};
	__property System::Classes::TNotifyEvent PropertiesEvents = {read=FSubClassEvents, write=FSubClassEvents};
	__property System::Classes::TNotifyEvent StylesEvents = {read=FSubClassEvents, write=FSubClassEvents};
	__property NativeInt Tag = {read=GetTag, write=SetTag, stored=IsTagStored, nodefault};
	__property TcxGridTableDataCellCustomDrawEvent OnCustomDrawCell = {read=FOnCustomDrawCell, write=SetOnCustomDrawCell};
	__property TcxGridGetCellHintEvent OnGetCellHint = {read=FOnGetCellHint, write=SetOnGetCellHint};
	__property TcxGridGetDataTextEvent OnGetDataText = {read=FOnGetDataText, write=SetOnGetDataText};
	__property TcxGridGetDisplayTextEvent OnGetDisplayText = {read=FOnGetDisplayText, write=SetOnGetDisplayText};
	__property TcxGridGetFilterDisplayTextEvent OnGetFilterDisplayText = {read=FOnGetFilterDisplayText, write=SetOnGetFilterDisplayText};
	__property TcxGridGetFilterValuesEvent OnGetFilterValues = {read=FOnGetFilterValues, write=SetOnGetFilterValues};
	__property TcxGridGetPropertiesEvent OnGetProperties = {read=FOnGetProperties, write=SetOnGetProperties};
	__property TcxGridGetPropertiesEvent OnGetPropertiesForEdit = {read=FOnGetPropertiesForEdit, write=SetOnGetPropertiesForEdit};
	__property TcxGridTableItemGetStoredPropertiesEvent OnGetStoredProperties = {read=FOnGetStoredProperties, write=SetOnGetStoredProperties};
	__property TcxGridTableItemGetStoredPropertyValueEvent OnGetStoredPropertyValue = {read=FOnGetStoredPropertyValue, write=SetOnGetStoredPropertyValue};
	__property TcxGridInitDateRangesEvent OnInitFilteringDateRanges = {read=FOnInitFilteringDateRanges, write=SetOnInitFilteringDateRanges};
	__property TcxGridTableItemSetStoredPropertyValueEvent OnSetStoredPropertyValue = {read=FOnSetStoredPropertyValue, write=SetOnSetStoredPropertyValue};
	__property TcxGridUserFilteringEvent OnUserFiltering = {read=FOnUserFiltering, write=SetOnUserFiltering};
	__property TcxGridUserFilteringExEvent OnUserFilteringEx = {read=FOnUserFilteringEx, write=SetOnUserFilteringEx};
	__property TcxGridValidateDrawValueEvent OnValidateDrawValue = {read=FOnValidateDrawValue, write=SetOnValidateDrawValue};
private:
	void *__IcxDataControllerSpreadSheetExpressionItem;	// Cxdatacontrollerspreadsheetexpressionprovider::IcxDataControllerSpreadSheetExpressionItem 
	void *__IdxGroupingDateTimeHandling;	// Dxdateranges::IdxGroupingDateTimeHandling 
	void *__IdxFilteringDateTimeHandling;	// Dxdateranges::IdxFilteringDateTimeHandling 
	void *__IdxDateTimeHandling;	// Dxdateranges::IdxDateTimeHandling 
	void *__IdxCustomFunctionFilterableComponent;	// Dxfiltervaluecontainer::IdxCustomFunctionFilterableComponent 
	void *__IdxExcelFilterableComponent;	// Dxfiltervaluecontainer::IdxExcelFilterableComponent 
	void *__IdxScaleFactor;	// Cxgeometry::IdxScaleFactor 
	void *__IcxStoredObject;	// Cxstorage::IcxStoredObject 
	void *__IcxEditRepositoryItemListener;	// Cxedit::IcxEditRepositoryItemListener 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {58B7DD4A-B654-44FE-B91C-5BDAEB28F6F6}
	operator Cxdatacontrollerspreadsheetexpressionprovider::_di_IcxDataControllerSpreadSheetExpressionItem()
	{
		Cxdatacontrollerspreadsheetexpressionprovider::_di_IcxDataControllerSpreadSheetExpressionItem intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxdatacontrollerspreadsheetexpressionprovider::IcxDataControllerSpreadSheetExpressionItem*(void) { return (Cxdatacontrollerspreadsheetexpressionprovider::IcxDataControllerSpreadSheetExpressionItem*)&__IcxDataControllerSpreadSheetExpressionItem; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {8BFD824B-3C6C-4A20-9726-22BF3A0D0F2B}
	operator Dxdateranges::_di_IdxGroupingDateTimeHandling()
	{
		Dxdateranges::_di_IdxGroupingDateTimeHandling intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxdateranges::IdxGroupingDateTimeHandling*(void) { return (Dxdateranges::IdxGroupingDateTimeHandling*)&__IdxGroupingDateTimeHandling; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {0A6FF65F-FE22-4D0B-A576-1B8A7850C18F}
	operator Dxdateranges::_di_IdxFilteringDateTimeHandling()
	{
		Dxdateranges::_di_IdxFilteringDateTimeHandling intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxdateranges::IdxFilteringDateTimeHandling*(void) { return (Dxdateranges::IdxFilteringDateTimeHandling*)&__IdxFilteringDateTimeHandling; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {FBFE2378-48D4-4D6C-B93A-9A430D2C6FD6}
	operator Dxdateranges::_di_IdxDateTimeHandling()
	{
		Dxdateranges::_di_IdxDateTimeHandling intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxdateranges::IdxDateTimeHandling*(void) { return (Dxdateranges::IdxDateTimeHandling*)&__IdxDateTimeHandling; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {08C58A7D-777D-4216-A2C0-4783FCA0626E}
	operator Dxfiltervaluecontainer::_di_IdxCustomFunctionFilterableComponent()
	{
		Dxfiltervaluecontainer::_di_IdxCustomFunctionFilterableComponent intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxfiltervaluecontainer::IdxCustomFunctionFilterableComponent*(void) { return (Dxfiltervaluecontainer::IdxCustomFunctionFilterableComponent*)&__IdxCustomFunctionFilterableComponent; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {96B14169-B9A6-465F-B10F-89288993F8FB}
	operator Dxcustomfunction::_di_IdxCustomFunctionContainer()
	{
		Dxcustomfunction::_di_IdxCustomFunctionContainer intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxcustomfunction::IdxCustomFunctionContainer*(void) { return (Dxcustomfunction::IdxCustomFunctionContainer*)&__IdxCustomFunctionFilterableComponent; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {C38F02A1-09C0-4F71-ADE9-A27215899C2E}
	operator Dxfiltervaluecontainer::_di_IdxExcelFilterableComponent()
	{
		Dxfiltervaluecontainer::_di_IdxExcelFilterableComponent intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxfiltervaluecontainer::IdxExcelFilterableComponent*(void) { return (Dxfiltervaluecontainer::IdxExcelFilterableComponent*)&__IdxExcelFilterableComponent; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {019D17DA-5693-46B5-8DA9-764E8AEA77C9}
	operator Dxfiltervaluecontainer::_di_IdxFilterableComponent()
	{
		Dxfiltervaluecontainer::_di_IdxFilterableComponent intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxfiltervaluecontainer::IdxFilterableComponent*(void) { return (Dxfiltervaluecontainer::IdxFilterableComponent*)&__IdxExcelFilterableComponent; }
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
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {4E27D642-022B-4CD2-AB96-64C7CF9B3299}
	operator Cxedit::_di_IcxEditRepositoryItemListener()
	{
		Cxedit::_di_IcxEditRepositoryItemListener intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxedit::IcxEditRepositoryItemListener*(void) { return (Cxedit::IcxEditRepositoryItemListener*)&__IcxEditRepositoryItemListener; }
	#endif
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridTableBackgroundBitmaps : public Cxgridcustomview::TcxCustomGridBackgroundBitmaps
{
	typedef Cxgridcustomview::TcxCustomGridBackgroundBitmaps inherited;
	
protected:
	virtual int __fastcall GetBitmapStyleIndex(int Index);
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property Vcl::Graphics::TBitmap* Content = {read=GetValue, write=SetValue, index=1};
	__property Vcl::Graphics::TBitmap* FilterBox = {read=GetValue, write=SetValue, index=2};
public:
	/* TcxCustomGridBackgroundBitmaps.Create */ inline __fastcall virtual TcxCustomGridTableBackgroundBitmaps(Cxgridcustomview::TcxCustomGridView* AGridView) : Cxgridcustomview::TcxCustomGridBackgroundBitmaps(AGridView) { }
	/* TcxCustomGridBackgroundBitmaps.Destroy */ inline __fastcall virtual ~TcxCustomGridTableBackgroundBitmaps() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomGridTableDateTimeHandlingClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridTableDateTimeHandling : public Cxgridcustomview::TcxCustomGridOptions
{
	typedef Cxgridcustomview::TcxCustomGridOptions inherited;
	
private:
	System::UnicodeString FDateFormat;
	Dxdateranges::TdxDateTimeFilters FFilters;
	Dxdateranges::TdxDateTimeGrouping FGrouping;
	System::UnicodeString FHourFormat;
	bool FIgnoreTimeForFiltering;
	System::UnicodeString FMonthFormat;
	bool FUseLongDateFormat;
	bool FUseShortTimeFormat;
	System::UnicodeString FYearFormat;
	TcxCustomGridTableView* __fastcall GetGridView();
	void __fastcall SetDateFormat(const System::UnicodeString Value);
	void __fastcall SetFilters(Dxdateranges::TdxDateTimeFilters Value);
	void __fastcall SetGrouping(Dxdateranges::TdxDateTimeGrouping Value);
	void __fastcall SetHourFormat(const System::UnicodeString Value);
	void __fastcall SetIgnoreTimeForFiltering(bool Value);
	void __fastcall SetMonthFormat(const System::UnicodeString Value);
	void __fastcall SetUseLongDateFormat(bool Value);
	void __fastcall SetUseShortTimeFormat(bool Value);
	void __fastcall SetYearFormat(const System::UnicodeString Value);
	
protected:
	__property System::UnicodeString DateFormat = {read=FDateFormat, write=SetDateFormat};
	__property Dxdateranges::TdxDateTimeGrouping Grouping = {read=FGrouping, write=SetGrouping, default=1};
	__property System::UnicodeString HourFormat = {read=FHourFormat, write=SetHourFormat};
	__property bool UseLongDateFormat = {read=FUseLongDateFormat, write=SetUseLongDateFormat, default=1};
	__property bool UseShortTimeFormat = {read=FUseShortTimeFormat, write=SetUseShortTimeFormat, default=1};
	
public:
	__fastcall virtual TcxCustomGridTableDateTimeHandling(Cxgridcustomview::TcxCustomGridView* AGridView);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	System::UnicodeString __fastcall GetDateFormat();
	System::UnicodeString __fastcall GetHourFormat();
	System::UnicodeString __fastcall GetMonthFormat();
	System::UnicodeString __fastcall GetYearFormat();
	void __fastcall GroupingChanged();
	__property TcxCustomGridTableView* GridView = {read=GetGridView};
	
__published:
	__property Dxdateranges::TdxDateTimeFilters Filters = {read=FFilters, write=SetFilters, default=0};
	__property bool IgnoreTimeForFiltering = {read=FIgnoreTimeForFiltering, write=SetIgnoreTimeForFiltering, default=0};
	__property System::UnicodeString MonthFormat = {read=FMonthFormat, write=SetMonthFormat};
	__property System::UnicodeString YearFormat = {read=FYearFormat, write=SetYearFormat};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxCustomGridTableDateTimeHandling() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFilterMRUItem : public Dxfilterbox::TdxFilterBoxMRUItem
{
	typedef Dxfilterbox::TdxFilterBoxMRUItem inherited;
	
public:
	/* TdxFilterBoxMRUItem.Create */ inline __fastcall TcxGridFilterMRUItem(Cxcustomdata::TcxDataFilterCriteria* AFilter) : Dxfilterbox::TdxFilterBoxMRUItem(AFilter) { }
	/* TdxFilterBoxMRUItem.Destroy */ inline __fastcall virtual ~TcxGridFilterMRUItem() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFilterMRUItems : public Dxfilterbox::TdxFilterBoxMRUItems
{
	typedef Dxfilterbox::TdxFilterBoxMRUItems inherited;
	
private:
	TcxCustomGridTableFiltering* FFiltering;
	int FLockCount;
	bool __fastcall GetIsLocked();
	
protected:
	virtual Cxcustomdata::TcxDataFilterCriteria* __fastcall GetCurrentFilter();
	virtual Dxfilterbox::TdxFilterBoxMRUItemClass __fastcall GetItemClass();
	virtual void __fastcall RefreshVisibleItemsList();
	virtual void __fastcall VisibleCountChanged(int APrevVisibleCount);
	__property bool IsLocked = {read=GetIsLocked, nodefault};
	
public:
	__fastcall virtual TcxGridFilterMRUItems(TcxCustomGridTableFiltering* AFiltering);
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	__property TcxCustomGridTableFiltering* Filtering = {read=FFiltering};
public:
	/* TdxFilterBoxMRUItems.Destroy */ inline __fastcall virtual ~TcxGridFilterMRUItems() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridFilterMRUItemsClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFilterBoxTokenCriteriaOptions : public Cxgridcustomview::TcxCustomGridOptions
{
	typedef Cxgridcustomview::TcxCustomGridOptions inherited;
	
private:
	bool FItemRemoval;
	bool __fastcall GetItemRemoval();
	void __fastcall SetItemRemoval(bool AValue);
	
public:
	__fastcall virtual TcxGridFilterBoxTokenCriteriaOptions(Cxgridcustomview::TcxCustomGridView* AGridView);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property bool ItemRemoval = {read=GetItemRemoval, write=SetItemRemoval, default=1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxGridFilterBoxTokenCriteriaOptions() { }
	
private:
	void *__IdxFilterBoxTokenCriteriaOptions;	// Dxfilterbox::IdxFilterBoxTokenCriteriaOptions 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B9930D9B-B4B4-4713-BAFC-487E59D71E61}
	operator Dxfilterbox::_di_IdxFilterBoxTokenCriteriaOptions()
	{
		Dxfilterbox::_di_IdxFilterBoxTokenCriteriaOptions intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxfilterbox::IdxFilterBoxTokenCriteriaOptions*(void) { return (Dxfilterbox::IdxFilterBoxTokenCriteriaOptions*)&__IdxFilterBoxTokenCriteriaOptions; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFilterBox : public Cxgridcustomview::TcxCustomGridOptions
{
	typedef Cxgridcustomview::TcxCustomGridOptions inherited;
	
private:
	Cxfilter::TcxFilterCriteriaDisplayStyle FCriteriaDisplayStyle;
	Dxfilterbox::TcxFilterBoxButtonAlignment FCustomizeButtonAlignment;
	bool FCustomizeDialog;
	int FMRUItemsListDropDownCount;
	Dxfilterbox::TcxFilterBoxPosition FPosition;
	TcxGridFilterBoxTokenCriteriaOptions* FTokenCriteria;
	Dxfilterbox::TcxFilterBoxVisible FVisible;
	TcxCustomGridTableView* __fastcall GetGridView();
	void __fastcall SetButtonPosition(const Dxfilterbox::TcxFilterBoxButtonAlignment Value);
	void __fastcall SetCriteriaDisplayStyle(Cxfilter::TcxFilterCriteriaDisplayStyle Value);
	void __fastcall SetCustomizeDialog(bool Value);
	void __fastcall SetMRUItemsListDropDownCount(int Value);
	void __fastcall SetPosition(Dxfilterbox::TcxFilterBoxPosition Value);
	void __fastcall SetTokenCriteria(TcxGridFilterBoxTokenCriteriaOptions* Value);
	void __fastcall SetVisible(Dxfilterbox::TcxFilterBoxVisible Value);
	
protected:
	virtual TcxGridFilterBoxTokenCriteriaOptions* __fastcall CreateTokenCriteria();
	bool __fastcall UseTokens();
	
public:
	__fastcall virtual TcxGridFilterBox(Cxgridcustomview::TcxCustomGridView* AGridView);
	__fastcall virtual ~TcxGridFilterBox();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property TcxCustomGridTableView* GridView = {read=GetGridView};
	
__published:
	__property Cxfilter::TcxFilterCriteriaDisplayStyle CriteriaDisplayStyle = {read=FCriteriaDisplayStyle, write=SetCriteriaDisplayStyle, default=0};
	__property Dxfilterbox::TcxFilterBoxButtonAlignment CustomizeButtonAlignment = {read=FCustomizeButtonAlignment, write=SetButtonPosition, default=1};
	__property bool CustomizeDialog = {read=FCustomizeDialog, write=SetCustomizeDialog, default=1};
	__property int MRUItemsListDropDownCount = {read=FMRUItemsListDropDownCount, write=SetMRUItemsListDropDownCount, default=0};
	__property Dxfilterbox::TcxFilterBoxPosition Position = {read=FPosition, write=SetPosition, default=1};
	__property TcxGridFilterBoxTokenCriteriaOptions* TokenCriteria = {read=FTokenCriteria, write=SetTokenCriteria};
	__property Dxfilterbox::TcxFilterBoxVisible Visible = {read=FVisible, write=SetVisible, default=1};
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridFilterBoxClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFindPanel : public Cxfindpanel::TcxCustomFindPanel
{
	typedef Cxfindpanel::TcxCustomFindPanel inherited;
	
private:
	TcxCustomGridTableController* FController;
	TcxCustomGridTableView* __fastcall GetGridView();
	
protected:
	virtual System::UnicodeString __fastcall DoGetItemCaption(Cxfindpanel::TcxFindPanelItemKind AItem);
	virtual void __fastcall FocusControlContent();
	virtual void __fastcall GetControlContentViewParams(Cxgraphics::TcxViewParams &AParams);
	virtual Cxcustomdata::TcxDataFindCriteria* __fastcall GetCriteria();
	virtual System::UnicodeString __fastcall GetDefaultInfoText();
	virtual Cxlookandfeels::TcxLookAndFeel* __fastcall GetLookAndFeel();
	virtual System::Classes::TComponent* __fastcall GetOwner();
	virtual Cxcontrols::TcxControl* __fastcall GetControl();
	virtual void __fastcall GetViewParams(Cxgraphics::TcxViewParams &AParams);
	virtual void __fastcall Invalidate(bool ARecalculate = false);
	virtual void __fastcall VisibilityChanged();
	
public:
	__fastcall virtual TcxGridFindPanel(TcxCustomGridTableController* AController);
	virtual void __fastcall Changed();
	__property TcxCustomGridTableController* Controller = {read=FController};
	__property TcxCustomGridTableView* GridView = {read=GetGridView};
public:
	/* TcxCustomFindPanel.Destroy */ inline __fastcall virtual ~TcxGridFindPanel() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFindPanelOptions : public Cxgridcustomview::TcxCustomGridOptions
{
	typedef Cxgridcustomview::TcxCustomGridOptions inherited;
	
private:
	int __fastcall GetApplyInputDelay();
	Cxcustomdata::TcxDataFindCriteriaBehavior __fastcall GetBehavior();
	bool __fastcall GetClearFindFilterTextOnClose();
	Cxfindpanel::TcxFindPanelDisplayMode __fastcall GetDisplayMode();
	bool __fastcall GetFocusViewOnApplyFilter();
	TcxCustomGridTableView* __fastcall GetGridView();
	bool __fastcall GetHighlightSearchResults();
	System::UnicodeString __fastcall GetInfoText();
	Cxfindpanel::TcxFindPanelLayout __fastcall GetLayout();
	System::Classes::TStrings* __fastcall GetMRUItems();
	int __fastcall GetMRUItemsListCount();
	int __fastcall GetMRUItemsListDropDownCount();
	Cxfindpanel::TcxFindPanelOptions* __fastcall GetOptions();
	Cxfindpanel::TcxFindPanelPosition __fastcall GetPosition();
	bool __fastcall GetShowClearButton();
	bool __fastcall GetShowCloseButton();
	bool __fastcall GetShowFindButton();
	bool __fastcall GetShowNextButton();
	bool __fastcall GetShowPreviousButton();
	bool __fastcall GetUseDelayedFind();
	bool __fastcall GetUseExtendedSyntax();
	bool __fastcall IsInfoTextStored();
	void __fastcall SetApplyInputDelay(int AValue);
	void __fastcall SetBehavior(Cxcustomdata::TcxDataFindCriteriaBehavior AValue);
	void __fastcall SetClearFindFilterTextOnClose(bool AValue);
	void __fastcall SetDisplayMode(Cxfindpanel::TcxFindPanelDisplayMode AValue);
	void __fastcall SetFocusViewOnApplyFilter(bool AValue);
	void __fastcall SetHighlightSearchResults(bool AValue);
	void __fastcall SetInfoText(System::UnicodeString AValue);
	void __fastcall SetLayout(Cxfindpanel::TcxFindPanelLayout AValue);
	void __fastcall SetMRUItems(System::Classes::TStrings* AValue);
	void __fastcall SetMRUItemsListCount(int AValue);
	void __fastcall SetMRUItemsListDropDownCount(int AValue);
	void __fastcall SetOptions(Cxfindpanel::TcxFindPanelOptions* AValue);
	void __fastcall SetPosition(Cxfindpanel::TcxFindPanelPosition AValue);
	void __fastcall SetShowClearButton(bool AValue);
	void __fastcall SetShowCloseButton(bool AValue);
	void __fastcall SetShowFindButton(bool AValue);
	void __fastcall SetShowNextButton(bool AValue);
	void __fastcall SetShowPreviousButton(bool AValue);
	void __fastcall SetUseExtendedSyntax(bool AValue);
	void __fastcall SetUseDelayedFind(bool AValue);
	
protected:
	__property Cxfindpanel::TcxFindPanelOptions* Options = {read=GetOptions, write=SetOptions};
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property TcxCustomGridTableView* GridView = {read=GetGridView};
	__property System::Classes::TStrings* MRUItems = {read=GetMRUItems, write=SetMRUItems};
	
__published:
	__property int ApplyInputDelay = {read=GetApplyInputDelay, write=SetApplyInputDelay, default=1000};
	__property Cxcustomdata::TcxDataFindCriteriaBehavior Behavior = {read=GetBehavior, write=SetBehavior, default=0};
	__property bool ClearFindFilterTextOnClose = {read=GetClearFindFilterTextOnClose, write=SetClearFindFilterTextOnClose, default=1};
	__property Cxfindpanel::TcxFindPanelDisplayMode DisplayMode = {read=GetDisplayMode, write=SetDisplayMode, default=0};
	__property bool FocusViewOnApplyFilter = {read=GetFocusViewOnApplyFilter, write=SetFocusViewOnApplyFilter, default=0};
	__property bool HighlightSearchResults = {read=GetHighlightSearchResults, write=SetHighlightSearchResults, default=1};
	__property System::UnicodeString InfoText = {read=GetInfoText, write=SetInfoText, stored=IsInfoTextStored};
	__property Cxfindpanel::TcxFindPanelLayout Layout = {read=GetLayout, write=SetLayout, default=0};
	__property int MRUItemsListCount = {read=GetMRUItemsListCount, write=SetMRUItemsListCount, default=0};
	__property int MRUItemsListDropDownCount = {read=GetMRUItemsListDropDownCount, write=SetMRUItemsListDropDownCount, default=8};
	__property Cxfindpanel::TcxFindPanelPosition Position = {read=GetPosition, write=SetPosition, default=0};
	__property bool ShowClearButton = {read=GetShowClearButton, write=SetShowClearButton, default=1};
	__property bool ShowCloseButton = {read=GetShowCloseButton, write=SetShowCloseButton, default=1};
	__property bool ShowFindButton = {read=GetShowFindButton, write=SetShowFindButton, default=1};
	__property bool ShowNextButton = {read=GetShowNextButton, write=SetShowNextButton, default=1};
	__property bool ShowPreviousButton = {read=GetShowPreviousButton, write=SetShowPreviousButton, default=1};
	__property bool UseDelayedFind = {read=GetUseDelayedFind, write=SetUseDelayedFind, default=1};
	__property bool UseExtendedSyntax = {read=GetUseExtendedSyntax, write=SetUseExtendedSyntax, default=0};
public:
	/* TcxCustomGridOptions.Create */ inline __fastcall virtual TcxGridFindPanelOptions(Cxgridcustomview::TcxCustomGridView* AGridView) : Cxgridcustomview::TcxCustomGridOptions(AGridView) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxGridFindPanelOptions() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridItemFilterPopupOptionsClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridItemFilterPopupOptions : public Cxgridcustomview::TcxCustomGridOptions
{
	typedef Cxgridcustomview::TcxCustomGridOptions inherited;
	
private:
	Dxfiltervaluecontainer::TdxFilterApplyChangesMode FApplyMultiSelectChanges;
	int FDropDownWidth;
	int FMaxDropDownItemCount;
	bool FMultiSelect;
	void __fastcall SetApplyMultiSelectChanges(Dxfiltervaluecontainer::TdxFilterApplyChangesMode AValue);
	void __fastcall SetDropDownWidth(int AValue);
	void __fastcall SetMaxDropDownItemCount(int AValue);
	void __fastcall SetMultiSelect(bool AValue);
	
protected:
	virtual void __fastcall ChangeScale(int M, int D);
	
public:
	__fastcall virtual TcxGridItemFilterPopupOptions(Cxgridcustomview::TcxCustomGridView* AGridView);
	virtual void __fastcall Assign(System::Classes::TPersistent* ASource);
	
__published:
	__property Dxfiltervaluecontainer::TdxFilterApplyChangesMode ApplyMultiSelectChanges = {read=FApplyMultiSelectChanges, write=SetApplyMultiSelectChanges, default=0};
	__property int DropDownWidth = {read=FDropDownWidth, write=SetDropDownWidth, default=0};
	__property int MaxDropDownItemCount = {read=FMaxDropDownItemCount, write=SetMaxDropDownItemCount, default=15};
	__property bool MultiSelect = {read=FMultiSelect, write=SetMultiSelect, default=1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxGridItemFilterPopupOptions() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridItemExcelFilterPopupOptionsClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridItemExcelFilterPopupOptions : public Cxgridcustomview::TcxCustomGridOptions
{
	typedef Cxgridcustomview::TcxCustomGridOptions inherited;
	
private:
	Dxfiltervaluecontainer::TdxExcelFilterValueContainerApplyChangesMode FApplyChanges;
	Dxfiltervaluecontainer::TdxExcelFilterValueContainerDateTimeValuesPageType FDateTimeValuesPageType;
	Dxfiltervaluecontainer::TdxExcelFilterValueContainerDefaultPage FDefaultPage;
	Dxfiltervaluecontainer::TdxExcelFilterValueContainerNumericValuesPageType FNumericValuesPageType;
	void __fastcall SetApplyChanges(Dxfiltervaluecontainer::TdxExcelFilterValueContainerApplyChangesMode AValue);
	void __fastcall SetDateTimeValuesPageType(const Dxfiltervaluecontainer::TdxExcelFilterValueContainerDateTimeValuesPageType AValue);
	void __fastcall SetDefaultPage(const Dxfiltervaluecontainer::TdxExcelFilterValueContainerDefaultPage AValue);
	void __fastcall SetNumericValuesPageType(const Dxfiltervaluecontainer::TdxExcelFilterValueContainerNumericValuesPageType AValue);
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* ASource);
	
__published:
	__property Dxfiltervaluecontainer::TdxExcelFilterValueContainerApplyChangesMode ApplyChanges = {read=FApplyChanges, write=SetApplyChanges, default=0};
	__property Dxfiltervaluecontainer::TdxExcelFilterValueContainerDateTimeValuesPageType DateTimeValuesPageType = {read=FDateTimeValuesPageType, write=SetDateTimeValuesPageType, default=0};
	__property Dxfiltervaluecontainer::TdxExcelFilterValueContainerDefaultPage DefaultPage = {read=FDefaultPage, write=SetDefaultPage, default=0};
	__property Dxfiltervaluecontainer::TdxExcelFilterValueContainerNumericValuesPageType NumericValuesPageType = {read=FNumericValuesPageType, write=SetNumericValuesPageType, default=0};
public:
	/* TcxCustomGridOptions.Create */ inline __fastcall virtual TcxGridItemExcelFilterPopupOptions(Cxgridcustomview::TcxCustomGridView* AGridView) : Cxgridcustomview::TcxCustomGridOptions(AGridView) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxGridItemExcelFilterPopupOptions() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomGridTableFilteringClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridTableFiltering : public Cxgridcustomview::TcxCustomGridOptions
{
	typedef Cxgridcustomview::TcxCustomGridOptions inherited;
	
private:
	bool FExpressionEditing;
	bool FItemAddValueItems;
	TcxGridItemExcelFilterPopupOptions* FItemExcelPopup;
	bool FItemFilteredItemsList;
	bool FItemFilteredItemsListShowFilteredItemsOnly;
	bool FItemMRUItemsList;
	int FItemMRUItemsListCount;
	TcxGridItemFilterPopupOptions* FItemPopup;
	Dxfilterpopupwindow::TdxFilterPopupWindowMode FItemPopupMode;
	TcxGridFilterMRUItems* FMRUItems;
	bool FMRUItemsList;
	int FMRUItemsListCount;
	bool FSynchronizeWithControlDialog;
	bool __fastcall GetCustomizeDialog();
	bool __fastcall GetExpressionEditing();
	TcxCustomGridTableView* __fastcall GetGridView();
	int __fastcall GetMRUItemsListDropDownCount();
	Dxfilterbox::TcxFilterBoxPosition __fastcall GetPosition();
	Dxfilterbox::TcxFilterBoxVisible __fastcall GetVisible();
	void __fastcall SetCustomizeDialog(bool Value);
	void __fastcall SetExpressionEditing(bool Value);
	void __fastcall SetItemAddValueItems(bool Value);
	void __fastcall SetItemExcelPopup(TcxGridItemExcelFilterPopupOptions* Value);
	void __fastcall SetItemFilteredItemsList(bool Value);
	void __fastcall SetItemFilteredItemsListShowFilteredItemsOnly(bool AValue);
	void __fastcall SetItemMRUItemsList(bool Value);
	void __fastcall SetItemMRUItemsListCount(int Value);
	void __fastcall SetItemPopup(TcxGridItemFilterPopupOptions* Value);
	void __fastcall SetItemPopupMode(Dxfilterpopupwindow::TdxFilterPopupWindowMode Value);
	void __fastcall SetMRUItemsList(bool Value);
	void __fastcall SetMRUItemsListCount(int Value);
	void __fastcall SetMRUItemsListDropDownCount(int Value);
	void __fastcall SetPosition(Dxfilterbox::TcxFilterBoxPosition Value);
	void __fastcall SetVisible(Dxfilterbox::TcxFilterBoxVisible Value);
	void __fastcall AfterFilterControlDialogApply(System::TObject* Sender);
	void __fastcall BeforeFilterControlDialogApply(System::TObject* Sender);
	void __fastcall FilterControlDialogApply(System::TObject* Sender);
	void __fastcall ReadCustomizeDialog(System::Classes::TReader* Reader);
	void __fastcall ReadMRUItemsListDropDownCount(System::Classes::TReader* Reader);
	void __fastcall ReadPosition(System::Classes::TReader* Reader);
	void __fastcall ReadVisible(System::Classes::TReader* Reader);
	
protected:
	virtual void __fastcall ChangeScale(int M, int D);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall FilterChanged();
	virtual TcxGridItemFilterPopupOptionsClass __fastcall GetItemPopupClass();
	virtual TcxGridItemExcelFilterPopupOptionsClass __fastcall GetItemExcelPopupClass();
	virtual TcxGridFilterMRUItemsClass __fastcall GetMRUItemsClass();
	virtual bool __fastcall IsFilterBoxEnabled();
	virtual bool __fastcall IsMRUItemsListAvailable();
	virtual void __fastcall MRUItemsVisibleCountChanged(int AOldCount, int ANewCount);
	__property bool ItemAddValueItems = {read=FItemAddValueItems, write=SetItemAddValueItems, default=1};
	__property TcxGridItemExcelFilterPopupOptions* ItemExcelPopup = {read=FItemExcelPopup, write=SetItemExcelPopup};
	__property bool ItemFilteredItemsList = {read=FItemFilteredItemsList, write=SetItemFilteredItemsList, default=0};
	__property bool ItemFilteredItemsListShowFilteredItemsOnly = {read=FItemFilteredItemsListShowFilteredItemsOnly, write=SetItemFilteredItemsListShowFilteredItemsOnly, default=1};
	__property bool ItemMRUItemsList = {read=FItemMRUItemsList, write=SetItemMRUItemsList, default=1};
	__property int ItemMRUItemsListCount = {read=FItemMRUItemsListCount, write=SetItemMRUItemsListCount, default=5};
	__property TcxGridItemFilterPopupOptions* ItemPopup = {read=FItemPopup, write=SetItemPopup};
	__property Dxfilterpopupwindow::TdxFilterPopupWindowMode ItemPopupMode = {read=FItemPopupMode, write=SetItemPopupMode, default=0};
	int __fastcall GetItemPopupDropDownWidth();
	int __fastcall GetItemPopupMaxDropDownItemCount();
	void __fastcall SetItemPopupDropDownWidth(int Value);
	void __fastcall SetItemPopupMaxDropDownItemCount(int Value);
	void __fastcall ReadItemPopupDropDownWidth(System::Classes::TReader* Reader);
	void __fastcall ReadItemPopupMaxDropDownCount(System::Classes::TReader* Reader);
	__property int DropDownWidth = {read=GetItemPopupDropDownWidth, write=SetItemPopupDropDownWidth, nodefault};
	__property int MaxDropDownCount = {read=GetItemPopupMaxDropDownItemCount, write=SetItemPopupMaxDropDownItemCount, nodefault};
	
public:
	__fastcall virtual TcxCustomGridTableFiltering(Cxgridcustomview::TcxCustomGridView* AGridView);
	__fastcall virtual ~TcxCustomGridTableFiltering();
	void __fastcall AddFilterToMRUItems(Cxcustomdata::TcxDataFilterCriteria* AFilter = (Cxcustomdata::TcxDataFilterCriteria*)(0x0));
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall RunCustomizeDialog(TcxCustomGridTableItem* AItem = (TcxCustomGridTableItem*)(0x0));
	__property TcxCustomGridTableView* GridView = {read=GetGridView};
	__property TcxGridFilterMRUItems* MRUItems = {read=FMRUItems};
	__property bool CustomizeDialog = {read=GetCustomizeDialog, write=SetCustomizeDialog, nodefault};
	__property int MRUItemsListDropDownCount = {read=GetMRUItemsListDropDownCount, write=SetMRUItemsListDropDownCount, nodefault};
	__property Dxfilterbox::TcxFilterBoxPosition Position = {read=GetPosition, write=SetPosition, nodefault};
	__property Dxfilterbox::TcxFilterBoxVisible Visible = {read=GetVisible, write=SetVisible, nodefault};
	
__published:
	__property bool ExpressionEditing = {read=GetExpressionEditing, write=SetExpressionEditing, default=0};
	__property bool MRUItemsList = {read=FMRUItemsList, write=SetMRUItemsList, default=1};
	__property int MRUItemsListCount = {read=FMRUItemsListCount, write=SetMRUItemsListCount, default=10};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxGridViewNavigatorButtons : public Cxnavigator::TcxNavigatorControlButtons
{
	typedef Cxnavigator::TcxNavigatorControlButtons inherited;
	
private:
	TcxCustomGridTableView* FGridView;
	
public:
	__fastcall virtual TcxGridViewNavigatorButtons(TcxCustomGridTableView* AGridView);
	__property TcxCustomGridTableView* GridView = {read=FGridView};
	
__published:
	__property ConfirmDelete = {default=0};
public:
	/* TcxCustomNavigatorButtons.Destroy */ inline __fastcall virtual ~TcxGridViewNavigatorButtons() { }
	
};


typedef System::TMetaClass* TcxGridViewNavigatorButtonsClass;

class PASCALIMPLEMENTATION TcxGridViewNavigatorInfoPanel : public Cxnavigator::TcxCustomNavigatorInfoPanel
{
	typedef Cxnavigator::TcxCustomNavigatorInfoPanel inherited;
	
private:
	TcxCustomGridTableView* FGridView;
	
protected:
	virtual bool __fastcall GetAdornerTargetElementVisible();
	
public:
	__fastcall virtual TcxGridViewNavigatorInfoPanel(TcxCustomGridTableView* AGridView);
	virtual Cxgraphics::TcxViewParams __fastcall GetViewParams();
	__property TcxCustomGridTableView* GridView = {read=FGridView};
	
__published:
	__property DisplayMask = {default=0};
	__property Visible = {default=0};
	__property Width = {default=0};
public:
	/* TcxCustomNavigatorInfoPanel.Destroy */ inline __fastcall virtual ~TcxGridViewNavigatorInfoPanel() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridViewNavigator : public Cxgridcustomview::TcxCustomGridOptions
{
	typedef Cxgridcustomview::TcxCustomGridOptions inherited;
	
private:
	TcxGridViewNavigatorButtons* FButtons;
	TcxGridViewNavigatorInfoPanel* FInfoPanel;
	bool FVisible;
	TcxCustomGridTableView* __fastcall GetGridView();
	Cxnavigator::_di_IcxNavigatorRecordPosition __fastcall GetIRecordPosition();
	void __fastcall SetButtons(TcxGridViewNavigatorButtons* Value);
	void __fastcall SetInfoPanel(TcxGridViewNavigatorInfoPanel* Value);
	void __fastcall SetVisible(bool Value);
	
protected:
	virtual TcxGridViewNavigatorButtonsClass __fastcall GetNavigatorButtonsClass();
	
public:
	__fastcall virtual TcxGridViewNavigator(Cxgridcustomview::TcxCustomGridView* AGridView);
	__fastcall virtual ~TcxGridViewNavigator();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property TcxCustomGridTableView* GridView = {read=GetGridView};
	
__published:
	__property TcxGridViewNavigatorButtons* Buttons = {read=FButtons, write=SetButtons};
	__property TcxGridViewNavigatorInfoPanel* InfoPanel = {read=FInfoPanel, write=SetInfoPanel};
	__property bool Visible = {read=FVisible, write=SetVisible, default=0};
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridViewNavigatorClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridTableShowLockedStateImageOptions : public Cxgridcustomview::TcxCustomGridShowLockedStateImageOptions
{
	typedef Cxgridcustomview::TcxCustomGridShowLockedStateImageOptions inherited;
	
private:
	Cxcontrols::TcxLockedStateImageShowingMode FBestFit;
	Cxcontrols::TcxLockedStateImageShowingMode FFiltering;
	Cxcontrols::TcxLockedStateImageShowingMode FGrouping;
	Cxcontrols::TcxLockedStateImageShowingMode FSorting;
	Cxcontrols::TcxLockedStateImageShowingMode FPosting;
	
protected:
	__property Cxgridcustomview::TcxGridShowLockedStateImageMode BestFit = {read=FBestFit, write=FBestFit, default=1};
	__property Cxgridcustomview::TcxGridShowLockedStateImageMode Filtering = {read=FFiltering, write=FFiltering, default=1};
	__property Cxgridcustomview::TcxGridShowLockedStateImageMode Grouping = {read=FGrouping, write=FGrouping, default=1};
	__property Cxgridcustomview::TcxGridShowLockedStateImageMode Sorting = {read=FSorting, write=FSorting, default=1};
	__property Cxgridcustomview::TcxGridShowLockedStateImageMode Posting = {read=FPosting, write=FPosting, default=0};
	
public:
	__fastcall virtual TcxCustomGridTableShowLockedStateImageOptions();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxCustomGridTableShowLockedStateImageOptions() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TcxGridDragFocusing : unsigned char { dfNone, dfDragOver, dfDragDrop };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridTableOptionsBehavior : public Cxgridcustomview::TcxCustomGridOptionsBehavior
{
	typedef Cxgridcustomview::TcxCustomGridOptionsBehavior inherited;
	
private:
	bool FAlwaysShowEditor;
	int FBestFitMaxRecordCount;
	bool FCellHints;
	bool FCopyCaptionsToClipboard;
	bool FCopyRecordsToClipboard;
	bool FDragDropText;
	TcxGridDragFocusing FDragFocusing;
	bool FDragHighlighting;
	bool FDragOpening;
	bool FDragScrolling;
	Cxedit::TcxInplaceEditAutoHeight FEditAutoHeight;
	bool FFocusCellOnCycle;
	bool FFocusCellOnTab;
	bool FFocusFirstCellOnNewRecord;
	bool FGoToNextCellOnEnter;
	bool FHotTrack;
	bool FHotTrackSelection;
	bool FImmediateEditor;
	bool FIncSearch;
	TcxCustomGridTableItem* FIncSearchItem;
	bool FNavigatorHints;
	bool FPullFocusing;
	Cxcontrols::TcxRecordScrollMode FRecordScrollMode;
	bool FRepaintVisibleRecordsOnScroll;
	TcxCustomGridTableView* __fastcall GetGridView();
	TcxCustomGridTableShowLockedStateImageOptions* __fastcall GetShowLockedStateImageOptions();
	void __fastcall SetAlwaysShowEditor(bool Value);
	void __fastcall SetBestFitMaxRecordCount(int Value);
	void __fastcall SetCellHints(bool Value);
	void __fastcall SetCopyCaptionsToClipboard(bool Value);
	void __fastcall SetCopyRecordsToClipboard(bool Value);
	void __fastcall SetDragDropText(bool Value);
	void __fastcall SetDragFocusing(TcxGridDragFocusing Value);
	void __fastcall SetDragHighlighting(bool Value);
	void __fastcall SetDragOpening(bool Value);
	void __fastcall SetDragScrolling(bool Value);
	void __fastcall SetEditAutoHeight(Cxedit::TcxInplaceEditAutoHeight Value);
	void __fastcall SetFocusCellOnCycle(bool Value);
	void __fastcall SetFocusCellOnTab(bool Value);
	void __fastcall SetFocusFirstCellOnNewRecord(bool Value);
	void __fastcall SetGoToNextCellOnEnter(bool Value);
	void __fastcall SetHotTrack(bool Value);
	void __fastcall SetHotTrackSelection(bool Value);
	void __fastcall SetImmediateEditor(bool Value);
	void __fastcall SetIncSearch(bool Value);
	void __fastcall SetIncSearchItem(TcxCustomGridTableItem* Value);
	void __fastcall SetNavigatorHints(bool Value);
	void __fastcall SetPullFocusing(bool Value);
	void __fastcall SetRecordScrollMode(Cxcontrols::TcxRecordScrollMode Value);
	void __fastcall SetRepaintVisibleRecordsOnScroll(bool Value);
	HIDESBASE void __fastcall SetShowLockedStateImageOptions(TcxCustomGridTableShowLockedStateImageOptions* Value);
	
protected:
	virtual bool __fastcall GetDefaultHotTrack();
	virtual bool __fastcall GetDefaultHotTrackSelection();
	virtual Cxgridcustomview::TcxCustomGridShowLockedStateImageOptionsClass __fastcall GetShowLockedStateImageOptionsClass();
	__property Cxedit::TcxInplaceEditAutoHeight EditAutoHeight = {read=FEditAutoHeight, write=SetEditAutoHeight, default=0};
	__property bool FocusCellOnCycle = {read=FFocusCellOnCycle, write=SetFocusCellOnCycle, default=0};
	__property bool HotTrack = {read=FHotTrack, write=SetHotTrack, default=0};
	__property bool HotTrackSelection = {read=FHotTrackSelection, write=SetHotTrackSelection, default=1};
	__property Cxcontrols::TcxRecordScrollMode RecordScrollMode = {read=FRecordScrollMode, write=SetRecordScrollMode, default=0};
	__property TcxCustomGridTableShowLockedStateImageOptions* ShowLockedStateImageOptions = {read=GetShowLockedStateImageOptions, write=SetShowLockedStateImageOptions};
	__property bool PullFocusing = {read=FPullFocusing, write=SetPullFocusing, default=0};
	__property bool RepaintVisibleRecordsOnScroll = {read=FRepaintVisibleRecordsOnScroll, write=SetRepaintVisibleRecordsOnScroll, default=0};
	
public:
	__fastcall virtual TcxCustomGridTableOptionsBehavior(Cxgridcustomview::TcxCustomGridView* AGridView);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property int BestFitMaxRecordCount = {read=FBestFitMaxRecordCount, write=SetBestFitMaxRecordCount, default=0};
	__property bool ImmediateEditor = {read=FImmediateEditor, write=SetImmediateEditor, default=1};
	__property TcxCustomGridTableView* GridView = {read=GetGridView};
	
__published:
	__property bool AlwaysShowEditor = {read=FAlwaysShowEditor, write=SetAlwaysShowEditor, default=0};
	__property bool CellHints = {read=FCellHints, write=SetCellHints, default=0};
	__property bool CopyCaptionsToClipboard = {read=FCopyCaptionsToClipboard, write=SetCopyCaptionsToClipboard, default=1};
	__property bool CopyRecordsToClipboard = {read=FCopyRecordsToClipboard, write=SetCopyRecordsToClipboard, default=1};
	__property bool DragDropText = {read=FDragDropText, write=SetDragDropText, default=0};
	__property TcxGridDragFocusing DragFocusing = {read=FDragFocusing, write=SetDragFocusing, default=0};
	__property bool DragHighlighting = {read=FDragHighlighting, write=SetDragHighlighting, default=1};
	__property bool DragOpening = {read=FDragOpening, write=SetDragOpening, default=1};
	__property bool DragScrolling = {read=FDragScrolling, write=SetDragScrolling, default=1};
	__property bool FocusCellOnTab = {read=FFocusCellOnTab, write=SetFocusCellOnTab, default=0};
	__property bool FocusFirstCellOnNewRecord = {read=FFocusFirstCellOnNewRecord, write=SetFocusFirstCellOnNewRecord, default=0};
	__property bool GoToNextCellOnEnter = {read=FGoToNextCellOnEnter, write=SetGoToNextCellOnEnter, default=0};
	__property HintHidePause = {default=0};
	__property bool IncSearch = {read=FIncSearch, write=SetIncSearch, default=0};
	__property TcxCustomGridTableItem* IncSearchItem = {read=FIncSearchItem, write=SetIncSearchItem};
	__property bool NavigatorHints = {read=FNavigatorHints, write=SetNavigatorHints, default=0};
	__property ShowHourglassCursor = {default=1};
	__property SuppressHintOnMouseDown = {default=1};
public:
	/* TcxCustomGridOptionsBehavior.Destroy */ inline __fastcall virtual ~TcxCustomGridTableOptionsBehavior() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TcxGridQuickCustomizationReordering : unsigned char { qcrDefault, qcrEnabled, qcrDisabled };

typedef System::TMetaClass* TcxCustomGridTableOptionsCustomizeClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridTableOptionsCustomize : public Cxgridcustomview::TcxCustomGridOptions
{
	typedef Cxgridcustomview::TcxCustomGridOptions inherited;
	
private:
	bool FItemExpressionEditing;
	bool FItemFiltering;
	bool FItemGrouping;
	bool FItemHiding;
	bool FItemMoving;
	bool FItemSorting;
	bool FItemsQuickCustomization;
	int FItemsQuickCustomizationMaxDropDownCount;
	bool FItemsQuickCustomizationMultiColumnMode;
	TcxGridQuickCustomizationReordering FItemsQuickCustomizationReordering;
	bool FItemsQuickCustomizationShowCommands;
	bool FItemsQuickCustomizationSorted;
	void __fastcall SetItemFiltering(bool Value);
	void __fastcall SetItemGrouping(bool Value);
	void __fastcall SetItemHiding(bool Value);
	void __fastcall SetItemMoving(bool Value);
	void __fastcall SetItemSorting(bool Value);
	void __fastcall SetItemsQuickCustomization(bool Value);
	void __fastcall SetItemsQuickCustomizationMaxDropDownCount(int Value);
	void __fastcall SetItemsQuickCustomizationMultiColumnMode(bool Value);
	void __fastcall SetItemsQuickCustomizationReordering(TcxGridQuickCustomizationReordering Value);
	void __fastcall SetItemsQuickCustomizationShowCommands(bool Value);
	void __fastcall SetItemsQuickCustomizationSorted(bool Value);
	
protected:
	__property bool ItemExpressionEditing = {read=FItemExpressionEditing, write=FItemExpressionEditing, default=0};
	__property bool ItemFiltering = {read=FItemFiltering, write=SetItemFiltering, default=1};
	__property bool ItemGrouping = {read=FItemGrouping, write=SetItemGrouping, default=1};
	__property bool ItemHiding = {read=FItemHiding, write=SetItemHiding, default=0};
	__property bool ItemMoving = {read=FItemMoving, write=SetItemMoving, default=1};
	__property bool ItemSorting = {read=FItemSorting, write=SetItemSorting, default=1};
	__property bool ItemsQuickCustomization = {read=FItemsQuickCustomization, write=SetItemsQuickCustomization, default=0};
	__property int ItemsQuickCustomizationMaxDropDownCount = {read=FItemsQuickCustomizationMaxDropDownCount, write=SetItemsQuickCustomizationMaxDropDownCount, default=0};
	__property bool ItemsQuickCustomizationMultiColumnMode = {read=FItemsQuickCustomizationMultiColumnMode, write=SetItemsQuickCustomizationMultiColumnMode, default=1};
	__property TcxGridQuickCustomizationReordering ItemsQuickCustomizationReordering = {read=FItemsQuickCustomizationReordering, write=SetItemsQuickCustomizationReordering, default=0};
	__property bool ItemsQuickCustomizationShowCommands = {read=FItemsQuickCustomizationShowCommands, write=SetItemsQuickCustomizationShowCommands, default=1};
	__property bool ItemsQuickCustomizationSorted = {read=FItemsQuickCustomizationSorted, write=SetItemsQuickCustomizationSorted, default=0};
	
public:
	__fastcall virtual TcxCustomGridTableOptionsCustomize(Cxgridcustomview::TcxCustomGridView* AGridView);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual bool __fastcall SupportsItemsQuickCustomizationReordering();
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxCustomGridTableOptionsCustomize() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridScrollbarAnnotations : public Dxscrollbarannotations::TdxScrollbarAnnotations
{
	typedef Dxscrollbarannotations::TdxScrollbarAnnotations inherited;
	
private:
	TcxCustomGridTableView* FGridView;
	
protected:
	virtual int __fastcall GetCurrentRecordIndex();
	virtual int __fastcall GetDataPixelScrollSize();
	virtual Dxscrollbarannotations::TdxScrollbarAnnotationOptions* __fastcall GetOptions();
	virtual int __fastcall GetRecordIndexByScrollableRecordIndex(int AIndex);
	virtual void __fastcall Populate(Dxscrollbarannotations::TdxScrollbarAnnotationKind AKind, Dxscrollbarannotations::TdxScrollbarAnnotationRowIndexList* AList);
	virtual void __fastcall SetCurrentRecordIndex(int AIndex);
	
public:
	__fastcall virtual TcxGridScrollbarAnnotations(TcxCustomGridTableView* AOwner);
	virtual void __fastcall GetHint(Dxscrollbarannotations::TdxScrollbarAnnotationRowIndexLists* AAnnotationRowIndexLists, System::UnicodeString &AHint);
	virtual int __fastcall GetLastIndexInScrollBand(int ARecordIndex);
	virtual int __fastcall GetRecordPixelScrollPosition(int ARecordIndex);
	virtual int __fastcall GetScrollableRecordCount();
	virtual int __fastcall GetScrollableRecordIndexByRecordIndex(int AIndex);
	virtual bool __fastcall IsRecordIndexBasedRendering();
public:
	/* TdxScrollbarAnnotations.Destroy */ inline __fastcall virtual ~TcxGridScrollbarAnnotations() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridScrollbarAnnotationOptionsHelper : public Dxscrollbarannotations::TdxScrollbarAnnotationOptions
{
	typedef Dxscrollbarannotations::TdxScrollbarAnnotationOptions inherited;
	
private:
	TcxCustomGridTableView* FOwner;
	
protected:
	virtual void __fastcall Changed();
	virtual void __fastcall CheckScrollbarAnnotations();
	virtual bool __fastcall IsVisible(int AKind);
	virtual void __fastcall RefreshScrollbarAnnotations(const Dxscrollbarannotations::TdxScrollbarAnnotationKinds &AChangedAnnotationKinds = (Dxscrollbarannotations::TdxScrollbarAnnotationKinds() << 0x0 << 0x1 << 0x2 << 0x3 << 0x4 << 0x5 << 0x6 << 0x7 << 0x8 << 0x9 << 0xa << 0xb << 0xc << 0xd << 0xe << 0xf << 0x10 << 0x11 << 0x12 << 0x13 << 0x14 << 0x15 << 0x16 << 0x17 << 0x18 << 0x19 << 0x1a << 0x1b << 0x1c << 0x1d << 0x1e << 0x1f << 0x20 << 0x21 << 0x22 << 0x23 << 0x24 << 0x25 << 0x26 << 0x27 << 0x28 << 0x29 << 0x2a << 0x2b << 0x2c << 0x2d << 0x2e << 0x2f << 0x30 << 0x31 << 0x32 << 0x33 << 0x34 << 0x35 << 0x36 << 0x37 << 0x38 << 0x39 << 0x3a << 0x3b << 0x3c << 0x3d << 0x3e << 0x3f << 0x40 << 0x41 << 0x42 << 0x43 << 0x44 << 0x45 << 0x46 << 0x47 << 0x48 << 0x49 << 0x4a << 0x4b << 0x4c << 0x4d << 0x4e << 0x4f << 0x50 << 0x51 << 0x52 << 0x53 << 0x54 << 0x55 << 0x56 << 0x57 << 0x58 << 0x59 << 0x5a << 0x5b << 0x5c << 0x5d << 0x5e << 0x5f << 0x60 << 0x61 << 0x62 << 0x63 << 0x64 << 0x65 << 0x66 << 0x67 << 0x68 << 0x69 << 0x6a << 0x6b << 0x6c << 0x6d << 0x6e << 0x6f << 0x70 << 0x71 << 0x72 << 0x73 << 0x74 << 0x75 << 0x76 << 0x77 << 0x78 << 0x79 << 0x7a << 0x7b << 0x7c << 0x7d << 0x7e << 0x7f << 0x80 << 0x81 << 0x82 << 0x83 << 0x84 << 0x85 << 0x86 << 0x87 << 0x88 << 0x89 << 0x8a << 0x8b << 0x8c << 0x8d << 0x8e << 0x8f << 0x90 << 0x91 << 0x92 << 0x93 << 0x94 << 0x95 << 0x96 << 0x97 << 0x98 << 0x99 << 0x9a << 0x9b << 0x9c << 0x9d << 0x9e << 0x9f << 0xa0 << 0xa1 << 0xa2 << 0xa3 << 0xa4 << 0xa5 << 0xa6 << 0xa7 << 0xa8 << 0xa9 << 0xaa << 0xab << 0xac << 0xad << 0xae << 0xaf << 0xb0 << 0xb1 << 0xb2 << 0xb3 << 0xb4 << 0xb5 << 0xb6 << 0xb7 << 0xb8 << 0xb9 << 0xba << 0xbb << 0xbc << 0xbd << 0xbe << 0xbf << 0xc0 << 0xc1 << 0xc2 << 0xc3 << 0xc4 << 0xc5 << 0xc6 << 0xc7 << 0xc8 << 0xc9 << 0xca << 0xcb << 0xcc << 0xcd << 0xce << 0xcf << 0xd0 << 0xd1 << 0xd2 << 0xd3 << 0xd4 << 0xd5 << 0xd6 << 0xd7 << 0xd8 << 0xd9 << 0xda << 0xdb << 0xdc << 0xdd << 0xde << 0xdf << 0xe0 << 0xe1 << 0xe2 << 0xe3 << 0xe4 << 0xe5 << 0xe6 << 0xe7 << 0xe8 << 0xe9 << 0xea << 0xeb << 0xec << 0xed << 0xee << 0xef << 0xf0 << 0xf1 << 0xf2 << 0xf3 << 0xf4 << 0xf5 << 0xf6 << 0xf7 << 0xf8 << 0xf9 << 0xfa << 0xfb << 0xfc << 0xfd << 0xfe << 0xff ));
	
public:
	__fastcall virtual TcxGridScrollbarAnnotationOptionsHelper(TcxCustomGridTableView* AOwner);
public:
	/* TdxScrollbarAnnotationOptions.Destroy */ inline __fastcall virtual ~TcxGridScrollbarAnnotationOptionsHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridScrollbarAnnotationOptions : public Cxgridcustomview::TcxCustomGridOptions
{
	typedef Cxgridcustomview::TcxCustomGridOptions inherited;
	
private:
	TcxGridScrollbarAnnotationOptionsHelper* FHelper;
	Dxscrollbarannotations::TdxCustomScrollbarAnnotations* __fastcall GetCustomScrollbarAnnotations();
	bool __fastcall GetValue(const int Index);
	bool __fastcall IsValueStored(int Index);
	void __fastcall SetCustomScrollbarAnnotations(Dxscrollbarannotations::TdxCustomScrollbarAnnotations* const Value);
	void __fastcall SetValue(const int Index, const bool Value);
	
protected:
	virtual TcxGridScrollbarAnnotationOptionsHelper* __fastcall CreateHelper();
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	__property TcxGridScrollbarAnnotationOptionsHelper* Helper = {read=FHelper};
	
public:
	__fastcall virtual TcxGridScrollbarAnnotationOptions(Cxgridcustomview::TcxCustomGridView* AGridView);
	__fastcall virtual ~TcxGridScrollbarAnnotationOptions();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property bool Active = {read=GetValue, write=SetValue, stored=IsValueStored, index=0, nodefault};
	__property Dxscrollbarannotations::TdxCustomScrollbarAnnotations* CustomAnnotations = {read=GetCustomScrollbarAnnotations, write=SetCustomScrollbarAnnotations};
	__property bool ShowErrors = {read=GetValue, write=SetValue, stored=IsValueStored, index=4, nodefault};
	__property bool ShowSearchResults = {read=GetValue, write=SetValue, stored=IsValueStored, index=3, nodefault};
	__property bool ShowFocusedRow = {read=GetValue, write=SetValue, stored=IsValueStored, index=2, nodefault};
	__property bool ShowSelectedRows = {read=GetValue, write=SetValue, stored=IsValueStored, index=1, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridTableOptionsData : public Cxgridcustomview::TcxCustomGridOptionsData
{
	typedef Cxgridcustomview::TcxCustomGridOptionsData inherited;
	
private:
	bool FAppending;
	bool FCancelOnExit;
	bool FDeleting;
	bool FDeletingConfirmation;
	bool FEditing;
	bool FInserting;
	TcxCustomGridTableView* __fastcall GetGridView();
	void __fastcall SetAppending(bool Value);
	void __fastcall SetCancelOnExit(bool Value);
	void __fastcall SetDeleting(bool Value);
	void __fastcall SetDeletingConfirmation(bool Value);
	void __fastcall SetEditing(bool Value);
	void __fastcall SetInserting(bool Value);
	
public:
	__fastcall virtual TcxCustomGridTableOptionsData(Cxgridcustomview::TcxCustomGridView* AGridView);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property TcxCustomGridTableView* GridView = {read=GetGridView};
	
__published:
	__property bool Appending = {read=FAppending, write=SetAppending, default=0};
	__property bool CancelOnExit = {read=FCancelOnExit, write=SetCancelOnExit, default=1};
	__property bool Deleting = {read=FDeleting, write=SetDeleting, default=1};
	__property bool DeletingConfirmation = {read=FDeletingConfirmation, write=SetDeletingConfirmation, default=1};
	__property bool Editing = {read=FEditing, write=SetEditing, default=1};
	__property bool Inserting = {read=FInserting, write=SetInserting, default=1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxCustomGridTableOptionsData() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridTableOptionsSelection : public Cxgridcustomview::TcxCustomGridOptionsSelection
{
	typedef Cxgridcustomview::TcxCustomGridOptionsSelection inherited;
	
private:
	bool FCellSelect;
	bool FHideFocusRectOnExit;
	bool FHideSelection;
	bool FInvertSelect;
	bool FUnselectFocusedRecordOnExit;
	TcxCustomGridTableView* __fastcall GetGridView();
	bool __fastcall GetMultiSelect();
	void __fastcall SetHideFocusRectOnExit(bool Value);
	void __fastcall SetHideSelection(bool Value);
	void __fastcall SetUnselectFocusedRecordOnExit(bool Value);
	
protected:
	virtual bool __fastcall IsMultiSelectPersistent();
	virtual void __fastcall SetCellSelect(bool Value);
	virtual void __fastcall SetInvertSelect(bool Value);
	virtual void __fastcall SetMultiSelect(bool Value);
	__property TcxCustomGridTableView* GridView = {read=GetGridView};
	
public:
	__fastcall virtual TcxCustomGridTableOptionsSelection(Cxgridcustomview::TcxCustomGridView* AGridView);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property bool HideFocusRect = {read=FHideFocusRectOnExit, write=SetHideFocusRectOnExit, stored=false, nodefault};
	__property bool HideFocusRectOnExit = {read=FHideFocusRectOnExit, write=SetHideFocusRectOnExit, default=1};
	__property bool HideSelection = {read=FHideSelection, write=SetHideSelection, default=0};
	__property bool InvertSelect = {read=FInvertSelect, write=SetInvertSelect, default=1};
	__property bool UnselectFocusedRecordOnExit = {read=FUnselectFocusedRecordOnExit, write=SetUnselectFocusedRecordOnExit, default=1};
	
__published:
	__property bool CellSelect = {read=FCellSelect, write=SetCellSelect, default=1};
	__property bool MultiSelect = {read=GetMultiSelect, write=SetMultiSelect, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxCustomGridTableOptionsSelection() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TcxGridShowEditButtons : unsigned char { gsebNever, gsebForFocusedRecord, gsebAlways };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridTableOptionsView : public Cxgridcustomview::TcxCustomGridOptionsView
{
	typedef Cxgridcustomview::TcxCustomGridOptionsView inherited;
	
private:
	bool FCellAutoHeight;
	bool FCellEndEllipsis;
	int FCellTextMaxLineCount;
	System::Uitypes::TColor FEditAutoHeightBorderColor;
	bool FFocusRect;
	bool FItemCaptionAutoHeight;
	bool FItemCaptionEndEllipsis;
	Cxlookandfeelpainters::TcxFilterButtonShowMode FItemFilterButtonShowMode;
	int FNavigatorOffset;
	System::UnicodeString FNoDataToDisplayInfoText;
	TcxGridShowEditButtons FShowEditButtons;
	Cxlookandfeelpainters::TcxShowFilterButtons FShowItemFilterButtons;
	TcxCustomGridTableView* __fastcall GetGridView();
	void __fastcall ReadNavigator(System::Classes::TReader* Reader);
	void __fastcall SetCellAutoHeight(bool Value);
	void __fastcall SetCellEndEllipsis(bool Value);
	void __fastcall SetCellTextMaxLineCount(int Value);
	void __fastcall SetEditAutoHeightBorderColor(System::Uitypes::TColor Value);
	void __fastcall SetFocusRect(bool Value);
	void __fastcall SetItemCaptionAutoHeight(bool Value);
	void __fastcall SetItemCaptionEndEllipsis(bool Value);
	void __fastcall SetItemFilterButtonShowMode(Cxlookandfeelpainters::TcxFilterButtonShowMode Value);
	void __fastcall SetNavigatorOffset(int Value);
	void __fastcall SetNoDataToDisplayInfoText(const System::UnicodeString Value);
	void __fastcall SetShowEditButtons(TcxGridShowEditButtons Value);
	void __fastcall SetShowItemFilterButtons(Cxlookandfeelpainters::TcxShowFilterButtons Value);
	bool __fastcall IsNoDataToDisplayInfoTextAssigned();
	
protected:
	virtual void __fastcall ChangeScale(int M, int D);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	DYNAMIC void __fastcall ItemCaptionAutoHeightChanged();
	__property bool CellAutoHeight = {read=FCellAutoHeight, write=SetCellAutoHeight, default=0};
	__property int CellTextMaxLineCount = {read=FCellTextMaxLineCount, write=SetCellTextMaxLineCount, default=0};
	__property System::Uitypes::TColor EditAutoHeightBorderColor = {read=FEditAutoHeightBorderColor, write=SetEditAutoHeightBorderColor, default=536870912};
	__property bool ItemCaptionAutoHeight = {read=FItemCaptionAutoHeight, write=SetItemCaptionAutoHeight, default=0};
	__property Cxlookandfeelpainters::TcxFilterButtonShowMode ItemFilterButtonShowMode = {read=FItemFilterButtonShowMode, write=SetItemFilterButtonShowMode, default=2};
	__property bool ItemCaptionEndEllipsis = {read=FItemCaptionEndEllipsis, write=SetItemCaptionEndEllipsis, default=0};
	__property Cxlookandfeelpainters::TcxShowFilterButtons ShowItemFilterButtons = {read=FShowItemFilterButtons, write=SetShowItemFilterButtons, default=2};
	
public:
	__fastcall virtual TcxCustomGridTableOptionsView(Cxgridcustomview::TcxCustomGridView* AGridView);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual System::Uitypes::TColor __fastcall GetGridLineColor();
	System::UnicodeString __fastcall GetNoDataToDisplayInfoText();
	__property TcxCustomGridTableView* GridView = {read=GetGridView};
	
__published:
	__property bool CellEndEllipsis = {read=FCellEndEllipsis, write=SetCellEndEllipsis, default=0};
	__property bool FocusRect = {read=FFocusRect, write=SetFocusRect, default=1};
	__property int NavigatorOffset = {read=FNavigatorOffset, write=SetNavigatorOffset, default=50};
	__property System::UnicodeString NoDataToDisplayInfoText = {read=FNoDataToDisplayInfoText, write=SetNoDataToDisplayInfoText, stored=IsNoDataToDisplayInfoTextAssigned};
	__property ScrollBars = {default=3};
	__property TcxGridShowEditButtons ShowEditButtons = {read=FShowEditButtons, write=SetShowEditButtons, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxCustomGridTableOptionsView() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridCellPos : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TcxCustomGridRecord* GridRecord;
	System::TObject* Item;
	__fastcall TcxGridCellPos(TcxCustomGridRecord* AGridRecord, System::TObject* AItem);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridCellPos() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridDataCellPos : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TcxCustomGridRecord* GridRecord;
	TcxCustomGridTableItem* Item;
	__fastcall TcxGridDataCellPos(TcxCustomGridRecord* AGridRecord, TcxCustomGridTableItem* AItem)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridDataCellPos() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxCustomGridTableViewStyles : public Cxgridcustomview::TcxCustomGridViewStyles
{
	typedef Cxgridcustomview::TcxCustomGridViewStyles inherited;
	
private:
	bool FActuallyUseOddEvenStyles;
	Dxcore::TdxDefaultBoolean FUseOddEvenStyles;
	TcxGridGetCellStyleEvent FOnGetContentStyle;
	TcxCustomGridTableView* __fastcall GetGridViewValue();
	void __fastcall SetUseOddEvenStyles(const Dxcore::TdxDefaultBoolean AValue);
	void __fastcall SetOnGetContentStyle(TcxGridGetCellStyleEvent Value);
	
protected:
	void __fastcall GetConditionalFormattingContentParams(TcxCustomGridRecord* ARecord, TcxCustomGridTableItem* AItem, Cxgraphics::TcxViewParams &AParams);
	virtual void __fastcall GetDefaultViewParams(int Index, System::TObject* AData, /* out */ Cxgraphics::TcxViewParams &AParams);
	virtual void __fastcall GetHotTrackParams(TcxCustomGridRecord* ARecord, System::TObject* AItem, /* out */ Cxgraphics::TcxViewParams &AParams);
	virtual void __fastcall GetSelectionParams(TcxCustomGridRecord* ARecord, System::TObject* AItem, /* out */ Cxgraphics::TcxViewParams &AParams);
	virtual bool __fastcall IsOddEvenStylesSupported();
	virtual void __fastcall RefreshCache();
	__property bool ActuallyUseOddEvenStyles = {read=FActuallyUseOddEvenStyles, nodefault};
	__property Cxstyles::TcxStyle* HotTrack = {read=GetValue, write=SetValue, index=12};
	
public:
	__fastcall virtual TcxCustomGridTableViewStyles(System::Classes::TPersistent* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall GetCellContentParams(TcxCustomGridRecord* ARecord, System::TObject* AItem, /* out */ Cxgraphics::TcxViewParams &AParams);
	virtual void __fastcall GetContentParams(TcxCustomGridRecord* ARecord, TcxCustomGridTableItem* AItem, /* out */ Cxgraphics::TcxViewParams &AParams);
	virtual void __fastcall GetDataCellContentParams(TcxCustomGridRecord* ARecord, TcxCustomGridTableItem* AItem, /* out */ Cxgraphics::TcxViewParams &AParams);
	virtual void __fastcall GetDataCellParams(TcxCustomGridRecord* ARecord, TcxCustomGridTableItem* AItem, /* out */ Cxgraphics::TcxViewParams &AParams, bool AUseViewInfo = false, TcxGridTableCellViewInfo* ACellViewInfo = (TcxGridTableCellViewInfo*)(0x0), bool AIgnoreSelection = false, bool AIgnoreHotTrack = false);
	virtual void __fastcall GetRecordContentParams(TcxCustomGridRecord* ARecord, TcxCustomGridTableItem* AItem, /* out */ Cxgraphics::TcxViewParams &AParams);
	__property TcxCustomGridTableView* GridView = {read=GetGridViewValue};
	__property Cxstyles::TcxStyle* Inactive = {read=GetValue, write=SetValue, index=5};
	__property Cxstyles::TcxStyle* Selection = {read=GetValue, write=SetValue, index=8};
	
__published:
	__property Cxstyles::TcxStyle* Content = {read=GetValue, write=SetValue, index=1};
	__property Cxstyles::TcxStyle* ContentEven = {read=GetValue, write=SetValue, index=2};
	__property Cxstyles::TcxStyle* ContentOdd = {read=GetValue, write=SetValue, index=3};
	__property Cxstyles::TcxStyle* FilterBox = {read=GetValue, write=SetValue, index=4};
	__property Cxstyles::TcxStyle* FindPanel = {read=GetValue, write=SetValue, index=11};
	__property Cxstyles::TcxStyle* IncSearch = {read=GetValue, write=SetValue, index=6};
	__property Cxstyles::TcxStyle* Navigator = {read=GetValue, write=SetValue, index=7};
	__property Cxstyles::TcxStyle* NavigatorInfoPanel = {read=GetValue, write=SetValue, index=9};
	__property Cxstyles::TcxStyle* SearchResultHighlight = {read=GetValue, write=SetValue, index=10};
	__property Dxcore::TdxDefaultBoolean UseOddEvenStyles = {read=FUseOddEvenStyles, write=SetUseOddEvenStyles, default=2};
	__property TcxGridGetCellStyleEvent OnGetContentStyle = {read=FOnGetContentStyle, write=SetOnGetContentStyle};
public:
	/* TcxStyles.Destroy */ inline __fastcall virtual ~TcxCustomGridTableViewStyles() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridConditionalFormattingProvider : public Cxdatacontrollerconditionalformatting::TcxDataControllerConditionalFormattingProvider
{
	typedef Cxdatacontrollerconditionalformatting::TcxDataControllerConditionalFormattingProvider inherited;
	
private:
	TcxCustomGridTableView* FOwner;
	
protected:
	virtual void __fastcall Changed();
	virtual void __fastcall ConditionalFormattingChanged();
	virtual void __fastcall DoOwnerBeginUpdate();
	virtual void __fastcall DoOwnerEndUpdate();
	virtual Vcl::Forms::TCustomForm* __fastcall DoGetParentForm();
	virtual System::Types::TPoint __fastcall EditCellViewInfoToPoint(System::TObject* ACellViewInfo);
	virtual System::Types::TRect __fastcall GetCellBounds(System::TObject* ACellViewInfo);
	virtual int __fastcall GetFocusedItemIndex();
	virtual Cxedit::TcxCustomEditProperties* __fastcall GetEditProperties(System::TObject* AItem);
	virtual System::UnicodeString __fastcall GetItemDisplayName(System::TObject* AItem)/* overload */;
	virtual Cxlookandfeels::TcxLookAndFeel* __fastcall GetLookAndFeel();
	virtual System::Classes::TComponent* __fastcall GetOwner();
	virtual Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	virtual bool __fastcall IsItemVisible(System::TObject* AItem)/* overload */;
	virtual bool __fastcall IsRightToLeft();
	virtual bool __fastcall IsRowVisible(const int ARow);
	virtual void __fastcall SynchronizeMasterClasses();
	__property TcxCustomGridTableView* Owner = {read=FOwner};
	
public:
	__fastcall TcxGridConditionalFormattingProvider(TcxCustomGridTableView* AOwner);
public:
	/* TcxDataControllerConditionalFormattingProvider.Destroy */ inline __fastcall virtual ~TcxGridConditionalFormattingProvider() { }
	
	/* Hoisted overloads: */
	
protected:
	inline System::UnicodeString __fastcall  GetItemDisplayName(int AItemIndex){ return Cxdatacontrollerspreadsheetdataprovider::TcxDataControllerSpreadSheetDataProvider::GetItemDisplayName(AItemIndex); }
	inline bool __fastcall  IsItemVisible(int AItemIndex){ return Cxdatacontrollerconditionalformatting::TcxDataControllerConditionalFormattingProvider::IsItemVisible(AItemIndex); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridDetailModeConditionalFormattingProvider : public TcxGridConditionalFormattingProvider
{
	typedef TcxGridConditionalFormattingProvider inherited;
	
private:
	System::Generics::Collections::TObjectDictionary__2<System::UnicodeString,Dxspreadsheetconditionalformatting::TdxSpreadSheetConditionalFormattingAreaInfo*>* FCustomAreaInfoCache;
	
protected:
	virtual bool __fastcall CalculateStyle(Dxspreadsheetstyles::TdxSpreadSheetCellDisplayStyle* const AStyle, int ARow, int AColumn, Dxspreadsheettypes::_di_IdxSpreadSheetCellData ACell);
	virtual void __fastcall ClearCacheCore();
	virtual bool __fastcall IsIndependent();
	virtual void __fastcall SynchronizeMasterClasses();
	
public:
	__fastcall virtual ~TcxGridDetailModeConditionalFormattingProvider();
public:
	/* TcxGridConditionalFormattingProvider.Create */ inline __fastcall TcxGridDetailModeConditionalFormattingProvider(TcxCustomGridTableView* AOwner) : TcxGridConditionalFormattingProvider(AOwner) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridOpenTableItemList : public Cxclasses::TcxOpenList
{
	typedef Cxclasses::TcxOpenList inherited;
	
public:
	TcxCustomGridTableItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TcxCustomGridTableItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TcxCustomGridTableItem* Value);
	
public:
	__property TcxCustomGridTableItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TcxGridOpenTableItemList() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridOpenTableItemList() : Cxclasses::TcxOpenList() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TcxGridViewRestoringFilterAttribute : unsigned char { rfaActive, rfaData, rfaMRUItems };

typedef System::Set<TcxGridViewRestoringFilterAttribute, TcxGridViewRestoringFilterAttribute::rfaActive, TcxGridViewRestoringFilterAttribute::rfaMRUItems> TcxGridViewRestoringFilterAttributes;

typedef void __fastcall (__closure *TcxGridTableCellCustomDrawEvent)(TcxCustomGridTableView* Sender, Cxgraphics::TcxCanvas* ACanvas, TcxGridTableCellViewInfo* AViewInfo, bool &ADone);

typedef void __fastcall (__closure *TcxGridAllowRecordOperationEvent)(TcxCustomGridTableView* Sender, TcxCustomGridRecord* ARecord, bool &AAllow);

typedef void __fastcall (__closure *TcxGridCellClickEvent)(TcxCustomGridTableView* Sender, TcxGridTableDataCellViewInfo* ACellViewInfo, System::Uitypes::TMouseButton AButton, System::Classes::TShiftState AShift, bool &AHandled);

typedef void __fastcall (__closure *TcxGridCustomTableViewEvent)(TcxCustomGridTableView* Sender);

typedef void __fastcall (__closure *TcxGridEditingEvent)(TcxCustomGridTableView* Sender, TcxCustomGridTableItem* AItem, bool &AAllow);

typedef void __fastcall (__closure *TcxGridEditDblClickEvent)(TcxCustomGridTableView* Sender, TcxCustomGridTableItem* AItem, Cxedit::TcxCustomEdit* AEdit);

typedef void __fastcall (__closure *TcxGridEditKeyEvent)(TcxCustomGridTableView* Sender, TcxCustomGridTableItem* AItem, Cxedit::TcxCustomEdit* AEdit, System::Word &Key, System::Classes::TShiftState Shift);

typedef void __fastcall (__closure *TcxGridEditKeyPressEvent)(TcxCustomGridTableView* Sender, TcxCustomGridTableItem* AItem, Cxedit::TcxCustomEdit* AEdit, System::WideChar &Key);

typedef void __fastcall (__closure *TcxGridCustomTableItemEvent)(TcxCustomGridTableView* Sender, TcxCustomGridTableItem* AItem);

typedef void __fastcall (__closure *TcxGridFilterCustomizationEvent)(TcxCustomGridTableView* Sender, bool &ADone);

typedef void __fastcall (__closure *TcxGridFilterDialogShowEvent)(TcxCustomGridTableView* Sender, TcxCustomGridTableItem* AItem, bool &ADone);

typedef void __fastcall (__closure *TcxGridFindPanelVisibilityChangedEvent)(TcxCustomGridTableView* Sender, const bool AVisible);

typedef void __fastcall (__closure *TcxGridFocusedItemChangedEvent)(TcxCustomGridTableView* Sender, TcxCustomGridTableItem* APrevFocusedItem, TcxCustomGridTableItem* AFocusedItem);

typedef void __fastcall (__closure *TcxGridFocusedRecordChangedEvent)(TcxCustomGridTableView* Sender, TcxCustomGridRecord* APrevFocusedRecord, TcxCustomGridRecord* AFocusedRecord, bool ANewItemRecordFocusingChanged);

typedef void __fastcall (__closure *TcxGridGetCellHeightEvent)(TcxCustomGridTableView* Sender, TcxCustomGridRecord* ARecord, TcxCustomGridTableItem* AItem, TcxGridTableDataCellViewInfo* ACellViewInfo, int &AHeight);

typedef void __fastcall (__closure *TcxGridPopulateCustomScrollbarAnnotationRowIndexList)(TcxCustomGridTableView* Sender, int AAnnotationIndex, Dxscrollbarannotations::TdxScrollbarAnnotationRowIndexList* ARowIndexList);

typedef void __fastcall (__closure *TcxGridGetDragDropTextEvent)(TcxCustomGridTableView* Sender, TcxCustomGridRecord* ARecord, TcxCustomGridTableItem* AItem, System::UnicodeString &AText);

typedef void __fastcall (__closure *TcxGridGetScrollbarAnnotationHint)(TcxCustomGridTableView* Sender, Dxscrollbarannotations::TdxScrollbarAnnotationRowIndexLists* AAnnotationRowIndexLists, System::UnicodeString &AHint);

typedef void __fastcall (__closure *TcxGridInitEditEvent)(TcxCustomGridTableView* Sender, TcxCustomGridTableItem* AItem, Cxedit::TcxCustomEdit* AEdit);

typedef void __fastcall (__closure *TcxGridInitEditValueEvent)(TcxCustomGridTableView* Sender, TcxCustomGridTableItem* AItem, Cxedit::TcxCustomEdit* AEdit, System::Variant &AValue);

typedef void __fastcall (__closure *TcxGridPartCustomDrawBackgroundEvent)(TcxCustomGridTableView* Sender, Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo, bool &ADone);

typedef void __fastcall (__closure *TcxGridRecordEvent)(TcxCustomGridTableView* Sender, TcxCustomGridRecord* ARecord);

enum DECLSPEC_DENUM TcxGridDataControllerChange : unsigned char { dccItemAdded, dccItemRemoved, dccIndexesChanged };

class PASCALIMPLEMENTATION TcxCustomGridTableView : public Cxgridcustomview::TcxCustomGridView
{
	typedef Cxgridcustomview::TcxCustomGridView inherited;
	
private:
	TcxGridOpenTableItemList* FAssigningGroupedItems;
	TcxGridOpenTableItemList* FAssigningSortedItems;
	TcxGridConditionalFormattingProvider* FConditionalFormattingProvider;
	System::Classes::TList* FCopyToClipboardItems;
	System::UnicodeString FCopyToClipboardStr;
	TcxCustomGridTableDateTimeHandling* FDateTimeHandling;
	bool FDontMakeMasterRecordVisible;
	System::Classes::TList* FFilterableItems;
	TcxGridFilterBox* FFilterBox;
	Dxfilterbox::TdxFilterBoxTokenCriteria* FFilterBoxTokenCriteria;
	TcxCustomGridTableFiltering* FFiltering;
	TcxGridFindPanelOptions* FFindPanel;
	bool FHighlightIncrementalFilteringText;
	bool FIgnorePropertiesChanges;
	bool FInDataControlFocusing;
	bool FIsAfterAssigningItems;
	int FAssigningItemsLockCount;
	System::Classes::TList* FItems;
	System::Classes::TList* FLinkedFilterControls;
	Dxscrollbarannotations::TdxScrollbarAnnotationKinds FLoadedChangedScrollbarAnnotationKinds;
	TcxGridViewNavigator* FNavigator;
	Cxnavigator::TcxNavigatorControlNotifier* FNavigatorNotifier;
	int FNextID;
	TcxCustomGridTableOptionsCustomize* FOptionsCustomize;
	bool FRestoringFilterActive;
	TcxGridViewRestoringFilterAttributes FRestoringFilterAttributes;
	System::AnsiString FRestoringFilterData;
	System::Classes::TStringList* FRestoringFilterMRUItems;
	TcxGridOpenTableItemList* FRestoringItems;
	TcxGridScrollbarAnnotations* FScrollbarAnnotationHelper;
	TcxGridScrollbarAnnotationOptions* FScrollbarAnnotations;
	System::Classes::TList* FVisibleItems;
	TcxGridAllowRecordOperationEvent FOnCanFocusRecord;
	TcxGridAllowRecordOperationEvent FOnCanSelectRecord;
	TcxGridCellClickEvent FOnCellClick;
	TcxGridCellClickEvent FOnCellDblClick;
	TcxGridTableDataCellCustomDrawEvent FOnCustomDrawCell;
	TcxGridPartCustomDrawBackgroundEvent FOnCustomDrawPartBackground;
	TcxGridEditingEvent FOnEditing;
	TcxGridCustomTableItemEvent FOnEditChanged;
	TcxGridEditDblClickEvent FOnEditDblClick;
	TcxGridEditKeyEvent FOnEditKeyDown;
	TcxGridEditKeyPressEvent FOnEditKeyPress;
	TcxGridEditKeyEvent FOnEditKeyUp;
	TcxGridCustomTableItemEvent FOnEditValueChanged;
	System::Classes::TNotifyEvent FOnFilterControlDialogShow;
	TcxGridFilterCustomizationEvent FOnFilterCustomization;
	TcxGridFilterDialogShowEvent FOnFilterDialogShow;
	TcxGridFindPanelVisibilityChangedEvent FOnFindPanelVisibilityChanged;
	TcxGridFocusedItemChangedEvent FOnFocusedItemChanged;
	TcxGridFocusedRecordChangedEvent FOnFocusedRecordChanged;
	TcxGridGetCellHeightEvent FOnGetCellHeight;
	TcxGridPopulateCustomScrollbarAnnotationRowIndexList FOnPopulateCustomScrollbarAnnotationRowIndexList;
	TcxGridGetDragDropTextEvent FOnGetDragDropText;
	TcxGridGetScrollbarAnnotationHint FOnGetScrollbarAnnotationHint;
	TcxGridInitDateRangesEvent FOnInitFilteringDateRanges;
	TcxGridInitDateRangesEvent FOnInitGroupingDateRanges;
	TcxGridInitEditEvent FOnInitEdit;
	TcxGridInitEditValueEvent FOnInitEditValue;
	Cxfilter::TcxQueryCustomFunctions FOnQueryCustomFunctions;
	TcxGridCustomTableViewEvent FOnSelectionChanged;
	System::Classes::TNotifyEvent FOnTopRecordIndexChanged;
	TcxGridInitEditEvent FOnUpdateEdit;
	System::Classes::TNotifyEvent FSubClassEvents;
	TcxCustomGridTableBackgroundBitmaps* __fastcall GetBackgroundBitmaps();
	Cxdatacontrollerconditionalformatting::TcxDataControllerConditionalFormatting* __fastcall GetConditionalFormatting();
	TcxCustomGridTableController* __fastcall GetController();
	TcxCustomGridTableItem* __fastcall GetFilterableItem(int Index);
	int __fastcall GetFilterableItemCount();
	Dxfilterbox::TdxFilterBoxTokenCriteria* __fastcall GetFilterBoxTokenCriteria();
	TcxCustomGridTableItem* __fastcall GetGroupedItem(int Index);
	int __fastcall GetGroupedItemCount();
	TcxGridConditionalFormattingProvider* __fastcall GetInternalConditionalFormattingProvider();
	TcxCustomGridTableItem* __fastcall GetItem(int Index);
	int __fastcall GetItemCount();
	TcxCustomGridRecord* __fastcall GetMasterGridRecord();
	Cxnavigator::TcxNavigatorControlButtons* __fastcall GetNavigatorButtons();
	TcxCustomGridTableOptionsBehavior* __fastcall GetOptionsBehavior();
	TcxCustomGridTableOptionsData* __fastcall GetOptionsData();
	TcxCustomGridTableOptionsSelection* __fastcall GetOptionsSelection();
	TcxCustomGridTableOptionsView* __fastcall GetOptionsView();
	TcxCustomGridTablePainter* __fastcall GetPainter();
	HIDESBASE TcxCustomGridTableView* __fastcall GetPatternGridView();
	Cxnavigator::_di_IcxNavigator __fastcall GetNavigatorButtonsControl();
	TcxCustomGridTableItem* __fastcall GetSortedItem(int Index);
	int __fastcall GetSortedItemCount();
	TcxCustomGridTableViewStyles* __fastcall GetStyles();
	TcxCustomGridTableViewData* __fastcall GetViewData();
	TcxCustomGridTableViewInfo* __fastcall GetViewInfo();
	TcxCustomGridTableItem* __fastcall GetVisibleItem(int Index);
	int __fastcall GetVisibleItemCount();
	HIDESBASE void __fastcall SetBackgroundBitmaps(TcxCustomGridTableBackgroundBitmaps* Value);
	void __fastcall SetDateTimeHandling(TcxCustomGridTableDateTimeHandling* Value);
	void __fastcall SetFilterBox(TcxGridFilterBox* Value);
	void __fastcall SetFiltering(TcxCustomGridTableFiltering* Value);
	void __fastcall SetFindPanel(TcxGridFindPanelOptions* AValue);
	void __fastcall SetItem(int Index, TcxCustomGridTableItem* Value);
	void __fastcall SetNavigator(TcxGridViewNavigator* Value);
	void __fastcall SetNavigatorButtons(Cxnavigator::TcxNavigatorControlButtons* Value);
	void __fastcall SetScrollbarAnnotations(TcxGridScrollbarAnnotationOptions* AValue);
	void __fastcall SetOnCanFocusRecord(TcxGridAllowRecordOperationEvent Value);
	void __fastcall SetOnCanSelectRecord(TcxGridAllowRecordOperationEvent Value);
	void __fastcall SetOnCellClick(TcxGridCellClickEvent Value);
	void __fastcall SetOnCellDblClick(TcxGridCellClickEvent Value);
	void __fastcall SetOnCustomDrawCell(TcxGridTableDataCellCustomDrawEvent Value);
	void __fastcall SetOnCustomDrawPartBackground(TcxGridPartCustomDrawBackgroundEvent Value);
	void __fastcall SetOnEditChanged(TcxGridCustomTableItemEvent Value);
	void __fastcall SetOnEditDblClick(TcxGridEditDblClickEvent Value);
	void __fastcall SetOnEditing(TcxGridEditingEvent Value);
	void __fastcall SetOnEditKeyDown(TcxGridEditKeyEvent Value);
	void __fastcall SetOnEditKeyPress(TcxGridEditKeyPressEvent Value);
	void __fastcall SetOnEditKeyUp(TcxGridEditKeyEvent Value);
	void __fastcall SetOnEditValueChanged(TcxGridCustomTableItemEvent Value);
	void __fastcall SetOnFilterControlDialogShow(System::Classes::TNotifyEvent Value);
	void __fastcall SetOnFilterCustomization(TcxGridFilterCustomizationEvent Value);
	void __fastcall SetOnFilterDialogShow(TcxGridFilterDialogShowEvent Value);
	void __fastcall SetOnFindPanelVisibilityChanged(TcxGridFindPanelVisibilityChangedEvent Value);
	void __fastcall SetOnFocusedItemChanged(TcxGridFocusedItemChangedEvent Value);
	void __fastcall SetOnFocusedRecordChanged(TcxGridFocusedRecordChangedEvent Value);
	void __fastcall SetOnGetCellHeight(TcxGridGetCellHeightEvent Value);
	void __fastcall SetOnPopulateCustomScrollbarAnnotationRowIndexList(const TcxGridPopulateCustomScrollbarAnnotationRowIndexList Value);
	void __fastcall SetOnGetDragDropText(TcxGridGetDragDropTextEvent Value);
	void __fastcall SetOnGetScrollbarAnnotationHint(TcxGridGetScrollbarAnnotationHint Value);
	void __fastcall SetOnInitFilteringDateRanges(TcxGridInitDateRangesEvent Value);
	void __fastcall SetOnInitGroupingDateRanges(TcxGridInitDateRangesEvent Value);
	void __fastcall SetOnInitEdit(TcxGridInitEditEvent Value);
	void __fastcall SetOnInitEditValue(TcxGridInitEditValueEvent Value);
	void __fastcall SetOnQueryCustomFunctions(Cxfilter::TcxQueryCustomFunctions Value);
	void __fastcall SetOnSelectionChanged(TcxGridCustomTableViewEvent Value);
	void __fastcall SetOnTopRecordIndexChanged(System::Classes::TNotifyEvent Value);
	void __fastcall SetOnUpdateEdit(TcxGridInitEditEvent Value);
	HIDESBASE void __fastcall SetOptionsBehavior(TcxCustomGridTableOptionsBehavior* Value);
	void __fastcall SetOptionsCustomize(TcxCustomGridTableOptionsCustomize* Value);
	HIDESBASE void __fastcall SetOptionsData(TcxCustomGridTableOptionsData* Value);
	HIDESBASE void __fastcall SetOptionsSelection(TcxCustomGridTableOptionsSelection* Value);
	HIDESBASE void __fastcall SetOptionsView(TcxCustomGridTableOptionsView* Value);
	HIDESBASE void __fastcall SetStyles(TcxCustomGridTableViewStyles* Value);
	void __fastcall CheckScrollbarAnnotations();
	void __fastcall CopyForEachRowProc(int ARowIndex, const Cxcustomdata::TcxRowInfo &ARowInfo);
	bool __fastcall HasConditionalFormattingProvider();
	void __fastcall InvalidateRecordPixelScrollSizeDependendScrollbarAnnotations();
	void __fastcall RefreshItemIndexes();
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	System::UnicodeString __fastcall GetFilterCaption(int Index);
	int __fastcall GetFilterCount();
	Cxfilter::TcxFilterCriteria* __fastcall GetFilterCriteria();
	System::UnicodeString __fastcall GetFilterFieldName(int Index);
	System::TObject* __fastcall GetFilterItemLink(int Index);
	int __fastcall GetFilterItemLinkID(int Index);
	System::UnicodeString __fastcall GetFilterItemLinkName(int Index);
	Cxedit::TcxCustomEditProperties* __fastcall GetFilterProperties(int Index);
	Cxdatastorage::TcxValueTypeClass __fastcall GetFilterValueType(int Index);
	bool __fastcall AllowFilterExpressionEditing();
	Cxcustomdata::TcxCustomExpressionProvider* __fastcall GetExpressionprovider();
	void __fastcall RegisterFilterControl(Cxfiltercontrol::TcxCustomFilterControl* AControl);
	void __fastcall UnregisterFilterControl(Cxfiltercontrol::TcxCustomFilterControl* AControl);
	void __fastcall UpdateLinkedFilterControls();
	bool __fastcall UseFilterTokens();
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
	virtual void __fastcall NavigatorCreateNewRecordExecute(bool AtEnd);
	virtual void __fastcall NavigatorEditExecute();
	virtual Cxdatacontrollerconditionalformatting::TcxDataControllerConditionalFormattingProvider* __fastcall GetConditionalFormattingProvider();
	int __fastcall NavigatorGetRecordCount();
	int __fastcall NavigatorGetRecordIndex();
	virtual bool __fastcall GetProperties(System::Classes::TStrings* AProperties);
	virtual void __fastcall GetPropertyValue(const System::UnicodeString AName, System::Variant &AValue);
	virtual void __fastcall SetPropertyValue(const System::UnicodeString AName, const System::Variant &AValue);
	virtual System::TObject* __fastcall CreateStoredObject(const System::UnicodeString AObjectName, const System::UnicodeString AClassName);
	virtual void __fastcall GetStoredChildren(System::Classes::TStringList* AChildren);
	virtual void __fastcall AssignLayout(Cxgridcustomview::TcxCustomGridView* ALayoutView);
	virtual void __fastcall BeforeEditLayout(Cxgridcustomview::TcxCustomGridView* ALayoutView);
	virtual System::Uitypes::TScrollStyle __fastcall GetSystemSizeScrollBars();
	virtual bool __fastcall HasLayoutCustomizationForm();
	virtual void __fastcall GetAdornerTargetElements(System::Classes::TStrings* AList);
	virtual void __fastcall ApplyRestoredFilter();
	virtual void __fastcall BeforeRestoring();
	virtual void __fastcall AfterRestoring();
	virtual void __fastcall ReadState(System::Classes::TReader* Reader);
	virtual void __fastcall Loaded();
	__property TcxGridOpenTableItemList* RestoringItems = {read=FRestoringItems};
	virtual void __fastcall AssignEditingRecord();
	void __fastcall BeginAssignItems();
	void __fastcall DestroyFilterBoxTokenCriteria();
	virtual void __fastcall DoAfterAssignItems();
	virtual void __fastcall DoBeforeAssignItems();
	virtual void __fastcall DoItemsAssigned();
	virtual void __fastcall DoRefreshStylesCache();
	virtual void __fastcall DoStylesChanged();
	void __fastcall EndAssignItems();
	bool __fastcall IsAssigningItems();
	__property TcxGridOpenTableItemList* AssigningGroupedItems = {read=FAssigningGroupedItems};
	__property TcxGridOpenTableItemList* AssigningSortedItems = {read=FAssigningSortedItems};
	__property bool IsAfterAssigningItems = {read=FIsAfterAssigningItems, nodefault};
	virtual bool __fastcall CanOffset(int ARecordCountDelta, int APixelScrollRecordOffsetDelta);
	virtual bool __fastcall CanSelectRecord(int ARecordIndex);
	virtual bool __fastcall CanTabStop();
	virtual void __fastcall CheckItemsUsingInFindCriteria();
	virtual void __fastcall DetailVisibleChanged(System::Classes::TComponent* ADetailLevel, int APrevVisibleDetailCount, int AVisibleDetailCount);
	virtual void __fastcall DoAssign(Cxgridcustomview::TcxCustomGridView* ASource);
	virtual TcxCustomGridTableItem* __fastcall FindItemByObjectName(const System::UnicodeString AObjectName);
	virtual void __fastcall FindPanelVisibilityChanged(bool AVisible);
	void __fastcall FocusDataControl(int AItemIndex, bool &ADone);
	virtual void __fastcall FocusEdit(int AItemIndex, bool &ADone);
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	virtual int __fastcall GetCurrentScrollbarAnnotationRecordIndex();
	virtual int __fastcall GetDefaultActiveDetailIndex();
	virtual Cxedit::TcxInplaceEditAutoHeight __fastcall GetEditAutoHeight();
	virtual void __fastcall GetFakeComponentLinks(System::Classes::TList* AList);
	virtual bool __fastcall GetIsControlFocused();
	virtual void __fastcall GetItemsListForClipboard(System::Classes::TList* AItems, bool ACopyAll);
	bool __fastcall GetItemSortByDisplayText(int AItemIndex, bool ASortByDisplayText);
	Cxdatautils::TcxDataEditValueSource __fastcall GetItemValueSource(int AItemIndex);
	Cxgridcustomview::TcxGridShowLockedStateImageMode __fastcall GetPostingLockedStateMode();
	virtual void __fastcall GetScrollbarAnnotationHint(Dxscrollbarannotations::TdxScrollbarAnnotationRowIndexLists* AAnnotationRowIndexLists, System::UnicodeString &AHint);
	virtual Dxscrollbarannotations::TdxScrollbarAnnotations* __fastcall GetScrollbarAnnotationHelper();
	virtual void __fastcall GetVisibleItemsList(System::Classes::TList* AItems);
	bool __fastcall HasCustomDrawCell();
	bool __fastcall HasCustomDrawPartBackground();
	bool __fastcall HasPixelScrollingMaster();
	virtual void __fastcall Init();
	virtual bool __fastcall IsDataScrollbar(Vcl::Forms::TScrollBarKind AKind);
	virtual bool __fastcall IsDetailVisible(Cxgridcustomview::TcxCustomGridView* AGridView);
	virtual bool __fastcall IsEqualScrollSizeRecords();
	virtual bool __fastcall IsRecordHeightDependsOnData();
	virtual bool __fastcall IsRecordHeightDependsOnFocus();
	virtual bool __fastcall IsRecordPixelScrolling();
	bool __fastcall IsScrollAnimationEnabled();
	virtual bool __fastcall IsScrollbarAnnotationVisible(int AKind);
	virtual void __fastcall LoadingComplete();
	virtual bool __fastcall NeedFocusFirstItemAfterInit();
	virtual void __fastcall Offset(int ARecordCountDelta, int APixelScrollRecordOffsetDelta, int DX, int DY);
	virtual void __fastcall PopulateScrollbarAnnotations(Dxscrollbarannotations::TdxScrollbarAnnotationKind AKind, Dxscrollbarannotations::TdxScrollbarAnnotationRowIndexList* AList);
	virtual void __fastcall ChangeScale(int M, int D);
	virtual void __fastcall RefreshScrollbarAnnotations(const Dxscrollbarannotations::TdxScrollbarAnnotationKinds &AChangedAnnotationKinds = (Dxscrollbarannotations::TdxScrollbarAnnotationKinds() << 0x0 << 0x1 << 0x2 << 0x3 << 0x4 << 0x5 << 0x6 << 0x7 << 0x8 << 0x9 << 0xa << 0xb << 0xc << 0xd << 0xe << 0xf << 0x10 << 0x11 << 0x12 << 0x13 << 0x14 << 0x15 << 0x16 << 0x17 << 0x18 << 0x19 << 0x1a << 0x1b << 0x1c << 0x1d << 0x1e << 0x1f << 0x20 << 0x21 << 0x22 << 0x23 << 0x24 << 0x25 << 0x26 << 0x27 << 0x28 << 0x29 << 0x2a << 0x2b << 0x2c << 0x2d << 0x2e << 0x2f << 0x30 << 0x31 << 0x32 << 0x33 << 0x34 << 0x35 << 0x36 << 0x37 << 0x38 << 0x39 << 0x3a << 0x3b << 0x3c << 0x3d << 0x3e << 0x3f << 0x40 << 0x41 << 0x42 << 0x43 << 0x44 << 0x45 << 0x46 << 0x47 << 0x48 << 0x49 << 0x4a << 0x4b << 0x4c << 0x4d << 0x4e << 0x4f << 0x50 << 0x51 << 0x52 << 0x53 << 0x54 << 0x55 << 0x56 << 0x57 << 0x58 << 0x59 << 0x5a << 0x5b << 0x5c << 0x5d << 0x5e << 0x5f << 0x60 << 0x61 << 0x62 << 0x63 << 0x64 << 0x65 << 0x66 << 0x67 << 0x68 << 0x69 << 0x6a << 0x6b << 0x6c << 0x6d << 0x6e << 0x6f << 0x70 << 0x71 << 0x72 << 0x73 << 0x74 << 0x75 << 0x76 << 0x77 << 0x78 << 0x79 << 0x7a << 0x7b << 0x7c << 0x7d << 0x7e << 0x7f << 0x80 << 0x81 << 0x82 << 0x83 << 0x84 << 0x85 << 0x86 << 0x87 << 0x88 << 0x89 << 0x8a << 0x8b << 0x8c << 0x8d << 0x8e << 0x8f << 0x90 << 0x91 << 0x92 << 0x93 << 0x94 << 0x95 << 0x96 << 0x97 << 0x98 << 0x99 << 0x9a << 0x9b << 0x9c << 0x9d << 0x9e << 0x9f << 0xa0 << 0xa1 << 0xa2 << 0xa3 << 0xa4 << 0xa5 << 0xa6 << 0xa7 << 0xa8 << 0xa9 << 0xaa << 0xab << 0xac << 0xad << 0xae << 0xaf << 0xb0 << 0xb1 << 0xb2 << 0xb3 << 0xb4 << 0xb5 << 0xb6 << 0xb7 << 0xb8 << 0xb9 << 0xba << 0xbb << 0xbc << 0xbd << 0xbe << 0xbf << 0xc0 << 0xc1 << 0xc2 << 0xc3 << 0xc4 << 0xc5 << 0xc6 << 0xc7 << 0xc8 << 0xc9 << 0xca << 0xcb << 0xcc << 0xcd << 0xce << 0xcf << 0xd0 << 0xd1 << 0xd2 << 0xd3 << 0xd4 << 0xd5 << 0xd6 << 0xd7 << 0xd8 << 0xd9 << 0xda << 0xdb << 0xdc << 0xdd << 0xde << 0xdf << 0xe0 << 0xe1 << 0xe2 << 0xe3 << 0xe4 << 0xe5 << 0xe6 << 0xe7 << 0xe8 << 0xe9 << 0xea << 0xeb << 0xec << 0xed << 0xee << 0xef << 0xf0 << 0xf1 << 0xf2 << 0xf3 << 0xf4 << 0xf5 << 0xf6 << 0xf7 << 0xf8 << 0xf9 << 0xfa << 0xfb << 0xfc << 0xfd << 0xfe << 0xff ));
	DYNAMIC void __fastcall SetChildOrder(System::Classes::TComponent* Child, int Order);
	virtual void __fastcall SetControl(Cxcontrols::TcxControl* Value);
	virtual void __fastcall SetCurrentScrollbarAnnotationRecordIndex(int AIndex);
	virtual void __fastcall SetName(const System::Classes::TComponentName NewName);
	virtual bool __fastcall SpaceForHorizontalScrollbarNeeded();
	virtual bool __fastcall SupportsHotTrack();
	virtual void __fastcall UpdateControl(Cxcustomdata::TcxUpdateControlInfo* AInfo);
	virtual void __fastcall UpdateData(Cxcustomdata::TcxUpdateControlInfo* AInfo);
	void __fastcall UpdateDataController(TcxGridDataControllerChange AChange, TcxCustomGridTableItem* AItem = (TcxCustomGridTableItem*)(0x0));
	virtual void __fastcall UpdateFilterBoxTokenCriteria();
	virtual void __fastcall UpdateFocusedRecord(Cxcustomdata::TcxUpdateControlInfo* AInfo);
	virtual void __fastcall UpdateRecord();
	virtual void __fastcall ValidateEditVisibility();
	virtual void __fastcall CreateHandlers();
	virtual void __fastcall DestroyHandlers();
	virtual void __fastcall CreateOptions();
	virtual void __fastcall DestroyOptions();
	virtual Dxfilterbox::TdxFilterBoxTokenCriteria* __fastcall CreateFilterBoxTokenCriteria();
	virtual TcxGridFindPanelOptions* __fastcall CreateFindPanel();
	virtual TcxGridScrollbarAnnotations* __fastcall CreateScrollbarAnnotationHelper();
	virtual TcxGridScrollbarAnnotationOptions* __fastcall CreateScrollbarAnnotations();
	virtual void __fastcall AddItem(TcxCustomGridTableItem* AItem);
	virtual void __fastcall RemoveItem(TcxCustomGridTableItem* AItem);
	void __fastcall AssignVisibleItemIndexes();
	virtual void __fastcall ChangeItemIndex(TcxCustomGridTableItem* AItem, int Value);
	void __fastcall CheckItemVisibles();
	void __fastcall SaveItemVisibles();
	virtual void __fastcall ItemIndexChanged(TcxCustomGridTableItem* AItem, int AOldIndex);
	virtual void __fastcall ItemVisibilityChanged(TcxCustomGridTableItem* AItem, bool Value);
	virtual void __fastcall RefreshVisibleItemsList();
	virtual TcxCustomGridTableItemClass __fastcall GetItemClass() = 0 ;
	virtual TcxGridItemDataBindingClass __fastcall GetItemDataBindingClass();
	int __fastcall GetNextID();
	void __fastcall ReleaseID(int AID);
	virtual void __fastcall AfterDestroyingLockedStateImage();
	virtual void __fastcall BeforeCreatingLockedStateImage();
	virtual void __fastcall Deactivate();
	virtual void __fastcall DestroyingSiteHandle();
	virtual void __fastcall DataChanged();
	virtual void __fastcall DataLayoutChanged();
	virtual bool __fastcall DoCellClick(TcxGridTableDataCellViewInfo* ACellViewInfo, System::Uitypes::TMouseButton AButton, System::Classes::TShiftState AShift);
	virtual bool __fastcall DoCellDblClick(TcxGridTableDataCellViewInfo* ACellViewInfo, System::Uitypes::TMouseButton AButton, System::Classes::TShiftState AShift);
	virtual bool __fastcall DoEditing(TcxCustomGridTableItem* AItem);
	virtual void __fastcall DoTopRecordIndexChanged();
	virtual void __fastcall DoUnlockNotification(Cxcustomdata::TcxUpdateControlInfo* AInfo);
	virtual void __fastcall FilterChanged();
	virtual void __fastcall FindCriteriaChanged(Cxcustomdata::TcxFindCriteriaChangedInfo* AInfo);
	virtual void __fastcall FocusedItemChanged(TcxCustomGridTableItem* APrevFocusedItem, TcxCustomGridTableItem* AFocusedItem);
	virtual void __fastcall FocusedRecordChanged(int APrevFocusedRecordIndex, int AFocusedRecordIndex, int APrevFocusedDataRecordIndex, int AFocusedDataRecordIndex, bool ANewItemRecordFocusingChanged);
	virtual void __fastcall GroupingChanging();
	virtual void __fastcall ItemCaptionChanged(TcxCustomGridTableItem* AItem);
	virtual void __fastcall ItemValueTypeClassChanged(int AItemIndex);
	bool __fastcall IsLongFilterOperation();
	virtual void __fastcall LookAndFeelChanged();
	virtual bool __fastcall NeedChangeLayoutOnSelectionChanged(Cxcustomdata::TcxSelectionChangedInfo* AInfo);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	void __fastcall NotifySelectionChanged(Cxcustomdata::TcxSelectionChangedInfo* AInfo = (Cxcustomdata::TcxSelectionChangedInfo*)(0x0));
	void __fastcall RecalculateDefaultWidths();
	virtual void __fastcall RecordChanged(int ARecordIndex);
	virtual void __fastcall RecordCountChanged();
	void __fastcall RefreshFilterableItemsList();
	void __fastcall RefreshNavigators();
	virtual void __fastcall SearchChanged();
	virtual void __fastcall SelectionChanged(Cxcustomdata::TcxSelectionChangedInfo* AInfo);
	virtual bool __fastcall CalculateDataCellSelected(TcxCustomGridRecord* ARecord, TcxCustomGridTableItem* AItem, bool AUseViewInfo, TcxGridTableCellViewInfo* ACellViewInfo);
	bool __fastcall CanMakeMasterGridRecordVisible();
	virtual bool __fastcall DrawDataCellHotTracked(TcxCustomGridRecord* ARecord, TcxGridTableCellViewInfo* ACellViewInfo = (TcxGridTableCellViewInfo*)(0x0));
	virtual bool __fastcall DrawDataCellSelected(TcxCustomGridRecord* ARecord, TcxCustomGridTableItem* AItem, bool AUseViewInfo = false, TcxGridTableCellViewInfo* ACellViewInfo = (TcxGridTableCellViewInfo*)(0x0));
	virtual bool __fastcall DrawRecordActive(TcxCustomGridRecord* ARecord);
	virtual bool __fastcall DrawRecordFocused(TcxCustomGridRecord* ARecord);
	virtual bool __fastcall DrawRecordSelected(TcxCustomGridRecord* ARecord);
	virtual bool __fastcall DrawSelection();
	virtual bool __fastcall DoCanFocusRecord(TcxCustomGridRecord* ARecord);
	virtual void __fastcall DoCustomDrawCell(Cxgraphics::TcxCanvas* ACanvas, TcxGridTableDataCellViewInfo* AViewInfo, bool &ADone);
	virtual void __fastcall DoCustomDrawPartBackground(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo, bool &ADone);
	virtual void __fastcall DoEditChanged(TcxCustomGridTableItem* AItem);
	virtual void __fastcall DoEditDblClick(TcxCustomGridTableItem* AItem, Cxedit::TcxCustomEdit* AEdit);
	virtual void __fastcall DoEditKeyDown(TcxCustomGridTableItem* AItem, Cxedit::TcxCustomEdit* AEdit, System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall DoEditKeyPress(TcxCustomGridTableItem* AItem, Cxedit::TcxCustomEdit* AEdit, System::WideChar &Key);
	virtual void __fastcall DoEditKeyUp(TcxCustomGridTableItem* AItem, Cxedit::TcxCustomEdit* AEdit, System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall DoEditValueChanged(TcxCustomGridTableItem* AItem);
	virtual bool __fastcall DoFilterCustomization();
	virtual bool __fastcall DoFilterDialogShow(TcxCustomGridTableItem* AItem);
	virtual void __fastcall DoFocusedRecordChanged(int APrevFocusedRecordIndex, int AFocusedRecordIndex, int APrevFocusedDataRecordIndex, int AFocusedDataRecordIndex, bool ANewItemRecordFocusingChanged);
	virtual void __fastcall DoGetCellHeight(TcxCustomGridRecord* ARecord, TcxCustomGridTableItem* AItem, TcxGridTableDataCellViewInfo* ACellViewInfo, int &AHeight);
	virtual System::UnicodeString __fastcall DoGetDragDropText(TcxCustomGridRecord* ARecord, TcxCustomGridTableItem* AItem);
	virtual void __fastcall DoInitEdit(TcxCustomGridTableItem* AItem, Cxedit::TcxCustomEdit* AEdit);
	virtual void __fastcall DoInitEditValue(TcxCustomGridTableItem* AItem, Cxedit::TcxCustomEdit* AEdit, System::Variant &AValue);
	virtual void __fastcall DoInitFilteringDateRanges(TcxCustomGridTableItem* AItem);
	virtual void __fastcall DoInitGroupingDateRanges(TcxCustomGridTableItem* AItem);
	virtual void __fastcall DoQueryCustomFunctions(TcxCustomGridTableItem* AItem, System::Classes::TStrings* ACustomFunctions);
	virtual void __fastcall DoMakeMasterGridRecordVisible();
	virtual void __fastcall DoUpdateEdit(TcxCustomGridTableItem* AItem, Cxedit::TcxCustomEdit* AEdit);
	virtual void __fastcall DoSelectionChanged();
	bool __fastcall HasCustomProperties();
	bool __fastcall HasInitFilteringDateRangesHandler();
	bool __fastcall HasInitGroupingDateRangesHandler();
	bool __fastcall IsGetCellHeightAssigned();
	bool __fastcall NeedHighlightFindText();
	virtual void __fastcall UpdateItemsVisualParams();
	virtual TcxGridConditionalFormattingProvider* __fastcall CreateConditionalFormattingProvider();
	virtual Cxgridcustomview::TcxCustomGridControllerClass __fastcall GetControllerClass();
	virtual Cxgridcustomview::TcxCustomGridPainterClass __fastcall GetPainterClass();
	virtual Cxgridcustomview::TcxCustomGridViewDataClass __fastcall GetViewDataClass();
	virtual Cxgridcustomview::TcxCustomGridViewInfoCacheClass __fastcall GetViewInfoCacheClass();
	virtual Cxgridcustomview::TcxCustomGridViewInfoClass __fastcall GetViewInfoClass();
	virtual Cxgridcustomview::TcxCustomGridBackgroundBitmapsClass __fastcall GetBackgroundBitmapsClass();
	virtual TcxCustomGridTableDateTimeHandlingClass __fastcall GetDateTimeHandlingClass();
	virtual TcxGridFilterBoxClass __fastcall GetFilterBoxClass();
	virtual TcxCustomGridTableFilteringClass __fastcall GetFilteringClass();
	virtual TcxGridViewNavigatorClass __fastcall GetNavigatorClass();
	virtual Cxgridcustomview::TcxCustomGridOptionsBehaviorClass __fastcall GetOptionsBehaviorClass();
	virtual TcxCustomGridTableOptionsCustomizeClass __fastcall GetOptionsCustomizeClass();
	virtual Cxgridcustomview::TcxCustomGridOptionsDataClass __fastcall GetOptionsDataClass();
	virtual Cxgridcustomview::TcxCustomGridOptionsSelectionClass __fastcall GetOptionsSelectionClass();
	virtual Cxgridcustomview::TcxCustomGridOptionsViewClass __fastcall GetOptionsViewClass();
	virtual Cxgridcustomview::TcxCustomGridViewStylesClass __fastcall GetStylesClass();
	virtual Cxcustomdata::TcxDataSummaryGroupItemLinkClass __fastcall GetSummaryGroupItemLinkClass();
	virtual Cxcustomdata::TcxDataSummaryItemClass __fastcall GetSummaryItemClass();
	__property TcxCustomGridTableBackgroundBitmaps* BackgroundBitmaps = {read=GetBackgroundBitmaps, write=SetBackgroundBitmaps};
	__property TcxGridConditionalFormattingProvider* ConditionalFormattingProvider = {read=GetInternalConditionalFormattingProvider};
	__property bool DontMakeMasterRecordVisible = {read=FDontMakeMasterRecordVisible, write=FDontMakeMasterRecordVisible, nodefault};
	__property int FilterableItemCount = {read=GetFilterableItemCount, nodefault};
	__property TcxCustomGridTableItem* FilterableItems[int Index] = {read=GetFilterableItem};
	__property Dxfilterbox::TdxFilterBoxTokenCriteria* FilterBoxTokenCriteria = {read=GetFilterBoxTokenCriteria};
	__property bool HighlightIncrementalFilteringText = {read=FHighlightIncrementalFilteringText, write=FHighlightIncrementalFilteringText, nodefault};
	__property bool IgnorePropertiesChanges = {read=FIgnorePropertiesChanges, write=FIgnorePropertiesChanges, nodefault};
	__property System::Classes::TList* ItemsList = {read=FItems};
	__property Cxnavigator::TcxNavigatorControlNotifier* NavigatorNotifier = {read=FNavigatorNotifier};
	__property int NextID = {read=FNextID, nodefault};
	__property System::Classes::TList* VisibleItemsList = {read=FVisibleItems};
	__property TcxGridInitDateRangesEvent OnInitGroupingDateRanges = {read=FOnInitGroupingDateRanges, write=SetOnInitGroupingDateRanges};
	__property Cxfilter::TcxQueryCustomFunctions OnQueryCustomFunctions = {read=FOnQueryCustomFunctions, write=SetOnQueryCustomFunctions};
	
public:
	__fastcall virtual ~TcxCustomGridTableView();
	virtual void __fastcall ApplyBestFit(TcxCustomGridTableItem* AItem = (TcxCustomGridTableItem*)(0x0), bool ACheckSizingAbility = false, bool AFireEvents = false);
	void __fastcall ClearItems();
	void __fastcall CopyToClipboard(bool ACopyAll);
	TcxCustomGridTableItem* __fastcall CreateItem();
	TcxCustomGridTableItem* __fastcall FindItemByID(int AID);
	TcxCustomGridTableItem* __fastcall FindItemByName(const System::UnicodeString AName);
	TcxCustomGridTableItem* __fastcall FindItemByTag(NativeInt ATag);
	int __fastcall IndexOfItem(TcxCustomGridTableItem* AItem);
	bool __fastcall GoToNextScrollbarAnnotation(const Dxscrollbarannotations::TdxScrollbarAnnotationKinds &AKinds = (Dxscrollbarannotations::TdxScrollbarAnnotationKinds() << 0x0 << 0x1 << 0x2 << 0x3 << 0x4 << 0x5 << 0x6 << 0x7 << 0x8 << 0x9 << 0xa << 0xb << 0xc << 0xd << 0xe << 0xf << 0x10 << 0x11 << 0x12 << 0x13 << 0x14 << 0x15 << 0x16 << 0x17 << 0x18 << 0x19 << 0x1a << 0x1b << 0x1c << 0x1d << 0x1e << 0x1f << 0x20 << 0x21 << 0x22 << 0x23 << 0x24 << 0x25 << 0x26 << 0x27 << 0x28 << 0x29 << 0x2a << 0x2b << 0x2c << 0x2d << 0x2e << 0x2f << 0x30 << 0x31 << 0x32 << 0x33 << 0x34 << 0x35 << 0x36 << 0x37 << 0x38 << 0x39 << 0x3a << 0x3b << 0x3c << 0x3d << 0x3e << 0x3f << 0x40 << 0x41 << 0x42 << 0x43 << 0x44 << 0x45 << 0x46 << 0x47 << 0x48 << 0x49 << 0x4a << 0x4b << 0x4c << 0x4d << 0x4e << 0x4f << 0x50 << 0x51 << 0x52 << 0x53 << 0x54 << 0x55 << 0x56 << 0x57 << 0x58 << 0x59 << 0x5a << 0x5b << 0x5c << 0x5d << 0x5e << 0x5f << 0x60 << 0x61 << 0x62 << 0x63 << 0x64 << 0x65 << 0x66 << 0x67 << 0x68 << 0x69 << 0x6a << 0x6b << 0x6c << 0x6d << 0x6e << 0x6f << 0x70 << 0x71 << 0x72 << 0x73 << 0x74 << 0x75 << 0x76 << 0x77 << 0x78 << 0x79 << 0x7a << 0x7b << 0x7c << 0x7d << 0x7e << 0x7f << 0x80 << 0x81 << 0x82 << 0x83 << 0x84 << 0x85 << 0x86 << 0x87 << 0x88 << 0x89 << 0x8a << 0x8b << 0x8c << 0x8d << 0x8e << 0x8f << 0x90 << 0x91 << 0x92 << 0x93 << 0x94 << 0x95 << 0x96 << 0x97 << 0x98 << 0x99 << 0x9a << 0x9b << 0x9c << 0x9d << 0x9e << 0x9f << 0xa0 << 0xa1 << 0xa2 << 0xa3 << 0xa4 << 0xa5 << 0xa6 << 0xa7 << 0xa8 << 0xa9 << 0xaa << 0xab << 0xac << 0xad << 0xae << 0xaf << 0xb0 << 0xb1 << 0xb2 << 0xb3 << 0xb4 << 0xb5 << 0xb6 << 0xb7 << 0xb8 << 0xb9 << 0xba << 0xbb << 0xbc << 0xbd << 0xbe << 0xbf << 0xc0 << 0xc1 << 0xc2 << 0xc3 << 0xc4 << 0xc5 << 0xc6 << 0xc7 << 0xc8 << 0xc9 << 0xca << 0xcb << 0xcc << 0xcd << 0xce << 0xcf << 0xd0 << 0xd1 << 0xd2 << 0xd3 << 0xd4 << 0xd5 << 0xd6 << 0xd7 << 0xd8 << 0xd9 << 0xda << 0xdb << 0xdc << 0xdd << 0xde << 0xdf << 0xe0 << 0xe1 << 0xe2 << 0xe3 << 0xe4 << 0xe5 << 0xe6 << 0xe7 << 0xe8 << 0xe9 << 0xea << 0xeb << 0xec << 0xed << 0xee << 0xef << 0xf0 << 0xf1 << 0xf2 << 0xf3 << 0xf4 << 0xf5 << 0xf6 << 0xf7 << 0xf8 << 0xf9 << 0xfa << 0xfb << 0xfc << 0xfd << 0xfe << 0xff ),
		bool AGoForward = true, bool AGoOnCycle = false);
	void __fastcall MakeMasterGridRecordVisible();
	virtual void __fastcall RestoreDefaults();
	void __fastcall BeginBestFitUpdate();
	void __fastcall EndBestFitUpdate();
	void __fastcall BeginFilteringUpdate();
	void __fastcall EndFilteringUpdate();
	void __fastcall BeginGroupingUpdate();
	void __fastcall EndGroupingUpdate();
	void __fastcall BeginSortingUpdate();
	void __fastcall EndSortingUpdate();
	virtual bool __fastcall IsEqualHeightRecords();
	__classmethod virtual bool __fastcall CanBeLookupList();
	__property Cxdatacontrollerconditionalformatting::TcxDataControllerConditionalFormatting* ConditionalFormatting = {read=GetConditionalFormatting};
	__property TcxCustomGridTableController* Controller = {read=GetController};
	__property TcxCustomGridTableDateTimeHandling* DateTimeHandling = {read=FDateTimeHandling, write=SetDateTimeHandling};
	__property TcxCustomGridTableFiltering* Filtering = {read=FFiltering, write=SetFiltering};
	__property int GroupedItemCount = {read=GetGroupedItemCount, nodefault};
	__property TcxCustomGridTableItem* GroupedItems[int Index] = {read=GetGroupedItem};
	__property bool InDataControlFocusing = {read=FInDataControlFocusing, nodefault};
	__property int ItemCount = {read=GetItemCount, nodefault};
	__property TcxCustomGridTableItem* Items[int Index] = {read=GetItem, write=SetItem};
	__property TcxCustomGridRecord* MasterGridRecord = {read=GetMasterGridRecord};
	__property TcxCustomGridTableOptionsBehavior* OptionsBehavior = {read=GetOptionsBehavior, write=SetOptionsBehavior};
	__property TcxCustomGridTableOptionsCustomize* OptionsCustomize = {read=FOptionsCustomize, write=SetOptionsCustomize};
	__property TcxCustomGridTableOptionsData* OptionsData = {read=GetOptionsData, write=SetOptionsData};
	__property TcxCustomGridTableOptionsSelection* OptionsSelection = {read=GetOptionsSelection, write=SetOptionsSelection};
	__property TcxCustomGridTableOptionsView* OptionsView = {read=GetOptionsView, write=SetOptionsView};
	__property TcxCustomGridTablePainter* Painter = {read=GetPainter};
	__property TcxCustomGridTableView* PatternGridView = {read=GetPatternGridView};
	__property int SortedItemCount = {read=GetSortedItemCount, nodefault};
	__property TcxCustomGridTableItem* SortedItems[int Index] = {read=GetSortedItem};
	__property TcxCustomGridTableViewStyles* Styles = {read=GetStyles, write=SetStyles};
	__property TcxCustomGridTableViewData* ViewData = {read=GetViewData};
	__property TcxCustomGridTableViewInfo* ViewInfo = {read=GetViewInfo};
	__property int VisibleItemCount = {read=GetVisibleItemCount, nodefault};
	__property TcxCustomGridTableItem* VisibleItems[int Index] = {read=GetVisibleItem};
	
__published:
	__property TcxGridViewNavigator* Navigator = {read=FNavigator, write=SetNavigator};
	__property TcxGridFilterBox* FilterBox = {read=FFilterBox, write=SetFilterBox};
	__property TcxGridFindPanelOptions* FindPanel = {read=FFindPanel, write=SetFindPanel};
	__property TcxGridScrollbarAnnotationOptions* ScrollbarAnnotations = {read=FScrollbarAnnotations, write=SetScrollbarAnnotations};
	__property Cxnavigator::TcxNavigatorControlButtons* NavigatorButtons = {read=GetNavigatorButtons, write=SetNavigatorButtons, stored=false};
	__property System::Classes::TNotifyEvent NavigatorEvents = {read=FSubClassEvents, write=FSubClassEvents};
	__property TcxGridAllowRecordOperationEvent OnCanFocusRecord = {read=FOnCanFocusRecord, write=SetOnCanFocusRecord};
	__property TcxGridAllowRecordOperationEvent OnCanSelectRecord = {read=FOnCanSelectRecord, write=SetOnCanSelectRecord};
	__property TcxGridCellClickEvent OnCellClick = {read=FOnCellClick, write=SetOnCellClick};
	__property TcxGridCellClickEvent OnCellDblClick = {read=FOnCellDblClick, write=SetOnCellDblClick};
	__property TcxGridTableDataCellCustomDrawEvent OnCustomDrawCell = {read=FOnCustomDrawCell, write=SetOnCustomDrawCell};
	__property TcxGridPartCustomDrawBackgroundEvent OnCustomDrawPartBackground = {read=FOnCustomDrawPartBackground, write=SetOnCustomDrawPartBackground};
	__property TcxGridEditingEvent OnEditing = {read=FOnEditing, write=SetOnEditing};
	__property TcxGridCustomTableItemEvent OnEditChanged = {read=FOnEditChanged, write=SetOnEditChanged};
	__property TcxGridEditDblClickEvent OnEditDblClick = {read=FOnEditDblClick, write=SetOnEditDblClick};
	__property TcxGridEditKeyEvent OnEditKeyDown = {read=FOnEditKeyDown, write=SetOnEditKeyDown};
	__property TcxGridEditKeyPressEvent OnEditKeyPress = {read=FOnEditKeyPress, write=SetOnEditKeyPress};
	__property TcxGridEditKeyEvent OnEditKeyUp = {read=FOnEditKeyUp, write=SetOnEditKeyUp};
	__property TcxGridCustomTableItemEvent OnEditValueChanged = {read=FOnEditValueChanged, write=SetOnEditValueChanged};
	__property System::Classes::TNotifyEvent OnFilterControlDialogShow = {read=FOnFilterControlDialogShow, write=SetOnFilterControlDialogShow};
	__property TcxGridFilterCustomizationEvent OnFilterCustomization = {read=FOnFilterCustomization, write=SetOnFilterCustomization};
	__property TcxGridFilterDialogShowEvent OnFilterDialogShow = {read=FOnFilterDialogShow, write=SetOnFilterDialogShow};
	__property TcxGridFindPanelVisibilityChangedEvent OnFindPanelVisibilityChanged = {read=FOnFindPanelVisibilityChanged, write=SetOnFindPanelVisibilityChanged};
	__property TcxGridFocusedItemChangedEvent OnFocusedItemChanged = {read=FOnFocusedItemChanged, write=SetOnFocusedItemChanged};
	__property TcxGridFocusedRecordChangedEvent OnFocusedRecordChanged = {read=FOnFocusedRecordChanged, write=SetOnFocusedRecordChanged};
	__property TcxGridGetCellHeightEvent OnGetCellHeight = {read=FOnGetCellHeight, write=SetOnGetCellHeight};
	__property TcxGridPopulateCustomScrollbarAnnotationRowIndexList OnPopulateCustomScrollbarAnnotationRowIndexList = {read=FOnPopulateCustomScrollbarAnnotationRowIndexList, write=SetOnPopulateCustomScrollbarAnnotationRowIndexList};
	__property TcxGridGetDragDropTextEvent OnGetDragDropText = {read=FOnGetDragDropText, write=SetOnGetDragDropText};
	__property TcxGridGetScrollbarAnnotationHint OnGetScrollbarAnnotationHint = {read=FOnGetScrollbarAnnotationHint, write=SetOnGetScrollbarAnnotationHint};
	__property TcxGridInitEditEvent OnInitEdit = {read=FOnInitEdit, write=SetOnInitEdit};
	__property TcxGridInitEditValueEvent OnInitEditValue = {read=FOnInitEditValue, write=SetOnInitEditValue};
	__property TcxGridInitDateRangesEvent OnInitFilteringDateRanges = {read=FOnInitFilteringDateRanges, write=SetOnInitFilteringDateRanges};
	__property OnInitStoredObject;
	__property TcxGridCustomTableViewEvent OnSelectionChanged = {read=FOnSelectionChanged, write=SetOnSelectionChanged};
	__property System::Classes::TNotifyEvent OnTopRecordIndexChanged = {read=FOnTopRecordIndexChanged, write=SetOnTopRecordIndexChanged};
	__property TcxGridInitEditEvent OnUpdateEdit = {read=FOnUpdateEdit, write=SetOnUpdateEdit};
public:
	/* TcxCustomGridView.CreateCloned */ inline __fastcall virtual TcxCustomGridTableView(Cxcontrols::TcxControl* AControl) : Cxgridcustomview::TcxCustomGridView(AControl) { }
	
public:
	/* TcxControlChildComponent.Create */ inline __fastcall virtual TcxCustomGridTableView(System::Classes::TComponent* AOwner) : Cxgridcustomview::TcxCustomGridView(AOwner) { }
	/* TcxControlChildComponent.CreateEx */ inline __fastcall virtual TcxCustomGridTableView(Cxcontrols::TcxControl* AControl, bool AAssignOwner) : Cxgridcustomview::TcxCustomGridView(AControl, AAssignOwner) { }
	
private:
	void *__IcxDataControllerConditionalFormattingProviderOwner;	// Cxdatacontrollerconditionalformatting::IcxDataControllerConditionalFormattingProviderOwner 
	void *__IcxNavigatorRecordPosition;	// Cxnavigator::IcxNavigatorRecordPosition 
	void *__IcxNavigator;	// Cxnavigator::IcxNavigator 
	void *__IcxFilterControlEx;	// Cxfiltercontrol::IcxFilterControlEx 
	void *__IcxFilterControl;	// Cxfiltercontrol::IcxFilterControl 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {52592036-5D36-435E-ABBF-AFFCEE73F577}
	operator Cxdatacontrollerconditionalformatting::_di_IcxDataControllerConditionalFormattingProviderOwner()
	{
		Cxdatacontrollerconditionalformatting::_di_IcxDataControllerConditionalFormattingProviderOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxdatacontrollerconditionalformatting::IcxDataControllerConditionalFormattingProviderOwner*(void) { return (Cxdatacontrollerconditionalformatting::IcxDataControllerConditionalFormattingProviderOwner*)&__IcxDataControllerConditionalFormattingProviderOwner; }
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
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {06029B36-8508-4613-9CA2-A7907BA76A02}
	operator Cxfiltercontrol::_di_IcxFilterControlEx()
	{
		Cxfiltercontrol::_di_IcxFilterControlEx intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxfiltercontrol::IcxFilterControlEx*(void) { return (Cxfiltercontrol::IcxFilterControlEx*)&__IcxFilterControlEx; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B9890E09-5400-428D-8F72-1FF8FD15937C}
	operator Cxfiltercontrol::_di_IcxFilterControl()
	{
		Cxfiltercontrol::_di_IcxFilterControl intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxfiltercontrol::IcxFilterControl*(void) { return (Cxfiltercontrol::IcxFilterControl*)&__IcxFilterControl; }
	#endif
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridTableControllerAccess : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static void __fastcall FocusNextPage(TcxCustomGridTableController* AInstance, bool ASyncSelection);
	static void __fastcall FocusPrevPage(TcxCustomGridTableController* AInstance, bool ASyncSelection);
public:
	/* TObject.Create */ inline __fastcall TcxCustomGridTableControllerAccess() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomGridTableControllerAccess() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridTableItemAccess : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static bool __fastcall CanFilter(TcxCustomGridTableItem* AInstance, bool AVisually);
	static bool __fastcall CanGroup(TcxCustomGridTableItem* AInstance);
	static bool __fastcall CanHide(TcxCustomGridTableItem* AInstance);
	static bool __fastcall CanHorzSize(TcxCustomGridTableItem* AInstance);
	static bool __fastcall CanIgnoreTimeForFiltering(TcxCustomGridTableItem* AInstance);
	static bool __fastcall CanSort(TcxCustomGridTableItem* AInstance);
	static void __fastcall CheckWidthValue(TcxCustomGridTableItem* AInstance, int &Value);
	static void __fastcall DoGetDataText(TcxCustomGridTableItem* AInstance, int ARecordIndex, System::UnicodeString &AText);
	static void __fastcall DoGetDisplayText(TcxCustomGridTableItem* AInstance, TcxCustomGridRecord* ARecord, System::UnicodeString &AText);
	static int __fastcall GetGroupIndex(TcxCustomGridTableItem* AInstance);
	static System::UnicodeString __fastcall GetFilterCaption(TcxCustomGridTableItem* AInstance);
public:
	/* TObject.Create */ inline __fastcall TcxCustomGridTableItemAccess() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomGridTableItemAccess() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridTableOptionsBehaviorAccess : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static bool __fastcall GetPullFocusing(TcxCustomGridTableOptionsBehavior* AInstance);
	static void __fastcall SetPullFocusing(TcxCustomGridTableOptionsBehavior* AInstance, bool Value);
public:
	/* TObject.Create */ inline __fastcall TcxCustomGridTableOptionsBehaviorAccess() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomGridTableOptionsBehaviorAccess() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridTableOptionsViewAccess : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static bool __fastcall GetCellAutoHeight(TcxCustomGridTableOptionsView* AInstance);
public:
	/* TObject.Create */ inline __fastcall TcxCustomGridTableOptionsViewAccess() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomGridTableOptionsViewAccess() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridTableViewAccess : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static bool __fastcall CanSelectRecord(TcxCustomGridTableView* AInstance, int ARecordIndex);
	static void __fastcall FilterChanged(TcxCustomGridTableView* AInstance);
	static TcxCustomGridTableItem* __fastcall FindItemByObjectName(TcxCustomGridTableView* AInstance, const System::UnicodeString AObjectName);
	static void __fastcall FocusEdit(TcxCustomGridTableView* AInstance, int AItemIndex, bool &ADone);
	static void __fastcall FocusDataControl(TcxCustomGridTableView* AInstance, int AItemIndex, bool &ADone);
	static int __fastcall GetDefaultActiveDetailIndex(TcxCustomGridTableView* AInstance);
	static TcxCustomGridTableItemClass __fastcall GetItemClass(TcxCustomGridTableView* AInstance);
	static bool __fastcall GetItemSortByDisplayText(TcxCustomGridTableView* AInstance, int AItemIndex, bool ASortByDisplayText);
	static Cxdatautils::TcxDataEditValueSource __fastcall GetItemValueSource(TcxCustomGridTableView* AInstance, int AItemIndex);
	static Cxcustomdata::TcxDataSummaryGroupItemLinkClass __fastcall GetSummaryGroupItemLinkClass(TcxCustomGridTableView* AInstance);
	static Cxcustomdata::TcxDataSummaryItemClass __fastcall GetSummaryItemClass(TcxCustomGridTableView* AInstance);
	static bool __fastcall IsEqualHeightRecords(TcxCustomGridTableView* AInstance);
	static bool __fastcall IsGetCellHeightAssigned(TcxCustomGridTableView* AInstance);
	static void __fastcall ItemValueTypeClassChanged(TcxCustomGridTableView* AInstance, int AItemIndex);
	static void __fastcall RefreshNavigators(TcxCustomGridTableView* AInstance);
	static void __fastcall UpdateRecord(TcxCustomGridTableView* AInstance);
	static void __fastcall BeginLockedStatePaintOnPost(TcxCustomGridTableView* AInstance);
	static void __fastcall EndLockedStatePaint(TcxCustomGridTableView* AInstance);
public:
	/* TObject.Create */ inline __fastcall TcxCustomGridTableViewAccess() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomGridTableViewAccess() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridTableViewInfoAccess : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static int __fastcall GetDefaultGridModeBufferCount(TcxCustomGridTableViewInfo* AInstance);
public:
	/* TObject.Create */ inline __fastcall TcxCustomGridTableViewInfoAccess() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomGridTableViewInfoAccess() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 cxGridFilterDefaultItemMRUItemsListCount = System::Int8(0x5);
static const System::Int8 cxGridFilterDefaultItemPopupMaxDropDownItemCount = System::Int8(0xf);
static const System::Int8 cxGridFilterDefaultMRUItemsListCount = System::Int8(0xa);
static const System::Int8 cxGridItemDefaultMinWidth = System::Int8(0x14);
static const System::Int8 cxGridNavigatorDefaultOffset = System::Int8(0x32);
static const System::Int8 cxRecordIndexNone = System::Int8(-1);
static const System::Int8 cxGridFindPanelDefaultMRUItemsListDropDownCount = System::Int8(0x8);
static const System::Int8 cxGridFindPanelDefaultMRUItemsListCount = System::Int8(0x0);
static const System::Int8 cxGridPinHeight = System::Int8(0xa);
static const System::Int8 cxGridPinWidth = System::Int8(0xa);
static const System::Int8 cxGridPinLeftMargin = System::Int8(0x4);
static const System::Int8 cxGridPinRightMargin = System::Int8(0x4);
static const System::Int8 htCustomGridTableBase = System::Int8(0x64);
static const System::Int8 htFilter = System::Int8(0x65);
static const System::Int8 htFilterActivateButton = System::Int8(0x66);
static const System::Int8 htFilterCloseButton = System::Int8(0x67);
static const System::Int8 htFilterDropDownButton = System::Int8(0x68);
static const System::Int8 htFilterCustomizeButton = System::Int8(0x69);
static const System::Int8 htRecord = System::Int8(0x6a);
static const System::Int8 htCell = System::Int8(0x6b);
static const System::Int8 htExpandButton = System::Int8(0x6c);
static const System::Int8 htFindPanel = System::Int8(0x6d);
static const System::Int8 htFindPanelCloseButton = System::Int8(0x6e);
static const System::Int8 htFindPanelFindButton = System::Int8(0x6f);
static const System::Int8 htFindPanelClearButton = System::Int8(0x70);
static const System::Int8 htFindPanelNextButton = System::Int8(0x71);
static const System::Int8 htFindPanelPreviousButton = System::Int8(0x72);
static const System::Int8 htCheckBox = System::Int8(0x71);
static const System::Int8 htPin = System::Int8(0x72);
static const System::Int8 rkNone = System::Int8(-1);
static const System::Int8 rkNormal = System::Int8(0x0);
static const System::Int8 rkNewItem = System::Int8(0x1);
static const System::Int8 isCustomItemFirst = System::Int8(0x0);
static const System::Int8 isContent = System::Int8(0x0);
static const System::Int8 isCustomItemLast = System::Int8(0x0);
static const System::Int8 bbCustomTableFirst = System::Int8(0x1);
static const System::Int8 bbContent = System::Int8(0x1);
static const System::Int8 bbFilterBox = System::Int8(0x2);
static const System::Int8 bbCustomTableLast = System::Int8(0x2);
static const System::Int8 vsCustomTableFirst = System::Int8(0x1);
static const System::Int8 vsContent = System::Int8(0x1);
static const System::Int8 vsContentEven = System::Int8(0x2);
static const System::Int8 vsContentOdd = System::Int8(0x3);
static const System::Int8 vsFilterBox = System::Int8(0x4);
static const System::Int8 vsInactive = System::Int8(0x5);
static const System::Int8 vsIncSearch = System::Int8(0x6);
static const System::Int8 vsNavigator = System::Int8(0x7);
static const System::Int8 vsSelection = System::Int8(0x8);
static const System::Int8 vsNavigatorInfoPanel = System::Int8(0x9);
static const System::Int8 vsSearchResultHighlight = System::Int8(0xa);
static const System::Int8 vsFindPanel = System::Int8(0xb);
static const System::Int8 vsHotTrack = System::Int8(0xc);
static const System::Int8 vsCustomTableLast = System::Int8(0xc);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetViewItemName(TcxCustomGridTableView* AView);
extern DELPHI_PACKAGE TcxCustomGridTableItem* __fastcall CreateViewItem(TcxCustomGridTableView* AView);
}	/* namespace Cxgridcustomtableview */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXGRIDCUSTOMTABLEVIEW)
using namespace Cxgridcustomtableview;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxgridcustomtableviewHPP
