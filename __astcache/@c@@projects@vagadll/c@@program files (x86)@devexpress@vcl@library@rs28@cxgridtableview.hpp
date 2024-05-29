// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxGridTableView.pas' rev: 35.00 (Windows)

#ifndef CxgridtableviewHPP
#define CxgridtableviewHPP

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
#include <Winapi.Messages.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Forms.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Generics.Defaults.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <cxClasses.hpp>
#include <cxControls.hpp>
#include <cxGraphics.hpp>
#include <dxTypeHelpers.hpp>
#include <cxLookAndFeels.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxStyles.hpp>
#include <cxStorage.hpp>
#include <cxPC.hpp>
#include <cxListBox.hpp>
#include <cxContainer.hpp>
#include <cxEdit.hpp>
#include <cxTextEdit.hpp>
#include <cxGrid.hpp>
#include <cxGridCommon.hpp>
#include <cxGridLevel.hpp>
#include <cxFilterControl.hpp>
#include <dxScrollbarAnnotations.hpp>
#include <cxGridCustomView.hpp>
#include <cxGridCustomTableView.hpp>
#include <cxGridDetailsSite.hpp>
#include <cxCustomData.hpp>
#include <cxImageComboBox.hpp>
#include <dxFilterPopupWindow.hpp>
#include <cxData.hpp>
#include <cxDataStorage.hpp>
#include <cxFilter.hpp>
#include <Vcl.Menus.hpp>
#include <dxCoreClasses.hpp>
#include <cxGridInplaceEditForm.hpp>
#include <dxUIElementPopupWindow.hpp>
#include <cxFindPanel.hpp>
#include <dxLayoutContainer.hpp>
#include <dxLayoutLookAndFeels.hpp>
#include <dxCore.hpp>
#include <cxGridViewLayoutContainer.hpp>
#include <cxGeometry.hpp>
#include <dxGDIPlusClasses.hpp>
#include <dxFilterValueContainer.hpp>
#include <dxScrollAnimation.hpp>
#include <cxGridRowLayout.hpp>
#include <dxCoreGraphics.hpp>
#include <System.SysUtils.hpp>
#include <System.UITypes.hpp>
#include <dxForms.hpp>
#include <cxCustomListBox.hpp>
#include <dxDateRanges.hpp>
#include <cxNavigator.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxgridtableview
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxCustomGridColumnHitTest;
class DELPHICLASS TcxGridGroupByBoxSearchButtonHitTest;
class DELPHICLASS TcxGridGroupByBoxHitTest;
class DELPHICLASS TcxGridColumnHeaderHitTest;
class DELPHICLASS TcxGridColumnHeaderHorzSizingEdgeHitTest;
class DELPHICLASS TcxGridColumnHeaderFilterButtonHitTest;
class DELPHICLASS TcxGridHeaderHitTest;
class DELPHICLASS TcxGridFooterHitTest;
class DELPHICLASS TcxGridFooterCellHitTest;
class DELPHICLASS TcxGridGroupFooterHitTest;
class DELPHICLASS TcxGridGroupFooterCellHitTest;
class DELPHICLASS TcxGridRowIndicatorHitTest;
class DELPHICLASS TcxGridRowSizingEdgeHitTest;
class DELPHICLASS TcxGridIndicatorHitTest;
class DELPHICLASS TcxGridIndicatorHeaderHitTest;
class DELPHICLASS TcxGridRowLevelIndentHitTest;
class DELPHICLASS TcxGridGroupSummaryHitTest;
class DELPHICLASS TcxGridDataRowFixingMenu;
class DELPHICLASS TcxGridRowLayoutOptions;
class DELPHICLASS TcxGridTableRowLayoutDataCellViewInfo;
class DELPHICLASS TcxGridTableRowLayoutContainerViewInfo;
class DELPHICLASS TcxGridTableRowLayoutItem;
class DELPHICLASS TcxGridTableRowLayoutGroup;
class DELPHICLASS TcxGridTableRowLayoutContainer;
class DELPHICLASS TcxGridTableRowLayoutSerializationOwner;
class DELPHICLASS TcxGridTableRowLayoutCustomizationController;
class DELPHICLASS TcxGridTableRowLayoutController;
class DELPHICLASS TcxGridTableViewInplaceEditFormDataCellViewInfo;
class DELPHICLASS TcxGridTableViewInplaceEditFormContainerViewInfo;
class DELPHICLASS TcxGridTableViewInplaceEditFormContainer;
class DELPHICLASS TcxGridTableViewInplaceEditFormCustomizationController;
class DELPHICLASS TcxGridTableViewInplaceEditForm;
class DELPHICLASS TcxGridEditFormOptions;
class DELPHICLASS TcxCustomGridRow;
class DELPHICLASS TcxGridDataRow;
class DELPHICLASS TcxGridNewItemRow;
class DELPHICLASS TcxGridFilterRow;
class DELPHICLASS TcxGridMasterDataRow;
class DELPHICLASS TcxGridGroupRow;
class DELPHICLASS TcxGridViewData;
class DELPHICLASS TcxGridColumnHeaderMergeIndicator;
class DELPHICLASS TcxGridColumnHeaderMovingObject;
class DELPHICLASS TcxCustomGridSizingObject;
class DELPHICLASS TcxCustomGridColumnSizingObject;
class DELPHICLASS TcxGridColumnHorzSizingObject;
class DELPHICLASS TcxGridRowSizingObject;
class DELPHICLASS TcxGridTableItemsListBox;
class DELPHICLASS TcxGridTableColumnsListBox;
class DELPHICLASS TcxGridTableCustomizationForm;
class DELPHICLASS TcxGridDragOpenInfoMasterDataRowTab;
class DELPHICLASS TcxGridColumnsCustomizationPopup;
class DELPHICLASS TcxGridTableFindPanel;
class DELPHICLASS TcxGridTableEditingController;
class DELPHICLASS TcxGridTableCustomizationController;
class DELPHICLASS TcxGridTableColumnScrollAnimationHelper;
class DELPHICLASS TcxGridTableController;
class DELPHICLASS TcxGridColumnContainerPainter;
class DELPHICLASS TcxGridColumnHeaderAreaPainter;
class DELPHICLASS TcxGridColumnHeaderSortingMarkPainter;
class DELPHICLASS TcxGridColumnHeaderFilterButtonPainter;
class DELPHICLASS TcxGridColumnHeaderGlyphPainter;
class DELPHICLASS TcxGridColumnHeaderCheckBoxPainter;
class DELPHICLASS TcxGridColumnHeaderPainter;
class DELPHICLASS TcxGridHeaderPainter;
class DELPHICLASS TcxGridGroupByBoxSearchButtonPainter;
class DELPHICLASS TcxGridGroupByBoxPainter;
class DELPHICLASS TcxGridFooterCellPainter;
class DELPHICLASS TcxGridFooterPainter;
class DELPHICLASS TcxCustomGridIndicatorItemPainter;
class DELPHICLASS TcxGridIndicatorHeaderItemPainter;
class DELPHICLASS TcxGridIndicatorRowItemPainter;
class DELPHICLASS TcxGridIndicatorFooterItemPainter;
class DELPHICLASS TcxGridIndicatorPainter;
class DELPHICLASS TcxCustomGridRowPainter;
class DELPHICLASS TcxGridFixedDataRowsPainter;
class DELPHICLASS TcxGridRowsPainter;
class DELPHICLASS TcxGridTablePainter;
class DELPHICLASS TcxGridHeaderCheckBoxViewInfo;
class DELPHICLASS TcxGridRowCheckBoxViewInfo;
class DELPHICLASS TcxGridTableFindPanelViewInfo;
class DELPHICLASS TcxGridColumnContainerViewInfo;
class DELPHICLASS TcxGridColumnHeaderAreaViewInfo;
class DELPHICLASS TcxGridColumnHeaderSortingMarkViewInfo;
class DELPHICLASS TcxGridColumnHeaderHorzSizingEdgeViewInfo;
class DELPHICLASS TcxGridColumnHeaderFilterButtonViewInfo;
class DELPHICLASS TcxGridColumnHeaderGlyphViewInfo;
class DELPHICLASS TcxGridColumnHeaderCheckBoxAreaViewInfo;
class DELPHICLASS TcxGridColumnHeaderViewInfo;
class DELPHICLASS TcxGridHeaderViewInfoSpecific;
class DELPHICLASS TcxGridHeaderViewInfo;
class DELPHICLASS TcxGridGroupByBoxColumnHeaderViewInfo;
class DELPHICLASS TcxGridGroupByBoxSearchButtonViewInfo;
class DELPHICLASS TcxGridGroupByBoxViewInfo;
class DELPHICLASS TcxGridFooterCellData;
class DELPHICLASS TcxGridFooterCellViewInfo;
class DELPHICLASS TcxGridFooterViewInfo;
class DELPHICLASS TcxCustomGridIndicatorItemViewInfo;
class DELPHICLASS TcxGridIndicatorHeaderItemViewInfo;
class DELPHICLASS TcxGridIndicatorRowItemViewInfo;
class DELPHICLASS TcxGridIndicatorFooterItemViewInfo;
class DELPHICLASS TcxGridIndicatorViewInfo;
class DELPHICLASS TcxGridRowFooterCellData;
class DELPHICLASS TcxGridRowFooterCellViewInfo;
class DELPHICLASS TcxGridRowFooterViewInfo;
class DELPHICLASS TcxGridRowFootersViewInfo;
class DELPHICLASS TcxCustomGridRowViewInfo;
class DELPHICLASS TcxGridFixedDataRowsViewInfo;
class DELPHICLASS TcxGridRowsViewInfo;
class DELPHICLASS TcxGridTableViewInfo;
class DELPHICLASS TcxGridTableViewInfoCacheItem;
class DELPHICLASS TcxGridMasterTableViewInfoCacheItem;
class DELPHICLASS TcxCustomGridColumnOptions;
class DELPHICLASS TcxGridColumnOptions;
class DELPHICLASS TcxGridColumnStyles;
class DELPHICLASS TcxGridColumnSummary;
class DELPHICLASS TcxCustomGridColumn;
class DELPHICLASS TcxGridColumn;
class DELPHICLASS TcxGridTableBackgroundBitmaps;
class DELPHICLASS TcxGridTableDateTimeHandling;
class DELPHICLASS TcxGridTableViewNavigatorButtons;
class DELPHICLASS TcxGridTableViewNavigator;
class DELPHICLASS TcxGridTableFindPanelOptions;
class DELPHICLASS TcxGridTableShowLockedStateImageOptions;
class DELPHICLASS TcxGridTableOptionsBehavior;
class DELPHICLASS TcxGridTableFiltering;
class DELPHICLASS TcxGridTableOptionsCustomize;
class DELPHICLASS TcxGridTableOptionsData;
class DELPHICLASS TcxGridTableOptionsSelection;
class DELPHICLASS TcxGridFixedDataRowsOptions;
class DELPHICLASS TcxGridSpecialRowOptions;
class DELPHICLASS TcxGridFilterRowOptions;
class DELPHICLASS TcxGridNewItemRowOptions;
class DELPHICLASS TcxGridTableOptionsView;
class DELPHICLASS TcxGridPreview;
class DELPHICLASS TcxGridTableViewStyles;
class DELPHICLASS TcxGridTableViewStyleSheet;
class DELPHICLASS TcxGridTableSummaryGroupItemLink;
__interface DELPHIINTERFACE IcxGridSummaryItem;
typedef System::DelphiInterface<IcxGridSummaryItem> _di_IcxGridSummaryItem;
class DELPHICLASS TcxGridTableSummaryItem;
class DELPHICLASS TcxGridTableView;
//-- type declarations -------------------------------------------------------
typedef System::TMetaClass* TcxGridColumnHeaderAreaPainterClass;

typedef System::TMetaClass* TcxGridColumnHeaderAreaViewInfoClass;

typedef System::TMetaClass* TcxGridColumnHeaderViewInfoClass;

typedef int TcxGridColumnContainerKind;

enum DECLSPEC_DENUM TcxGridColumnFixedKind : unsigned char { fkNone, fkLeft, fkRight, fkLeftDynamic };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridColumnHitTest : public Cxgridcustomview::TcxCustomGridViewHitTest
{
	typedef Cxgridcustomview::TcxCustomGridViewHitTest inherited;
	
protected:
	virtual void __fastcall Assign(Cxgridcustomview::TcxCustomGridHitTest* Source);
	
public:
	TcxGridColumn* Column;
	int ColumnContainerKind;
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxCustomGridColumnHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxCustomGridColumnHitTest() : Cxgridcustomview::TcxCustomGridViewHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridGroupByBoxSearchButtonHitTest : public Cxgridcustomview::TcxCustomGridViewHitTest
{
	typedef Cxgridcustomview::TcxCustomGridViewHitTest inherited;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridGroupByBoxSearchButtonHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridGroupByBoxSearchButtonHitTest() : Cxgridcustomview::TcxCustomGridViewHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridGroupByBoxHitTest : public Cxgridcustomview::TcxCustomGridViewHitTest
{
	typedef Cxgridcustomview::TcxCustomGridViewHitTest inherited;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridGroupByBoxHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridGroupByBoxHitTest() : Cxgridcustomview::TcxCustomGridViewHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridColumnHeaderHitTest : public TcxCustomGridColumnHitTest
{
	typedef TcxCustomGridColumnHitTest inherited;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
	
public:
	virtual Cxgridcustomview::TcxCustomGridDragAndDropObjectClass __fastcall DragAndDropObjectClass();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridColumnHeaderHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridColumnHeaderHitTest() : TcxCustomGridColumnHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridColumnHeaderHorzSizingEdgeHitTest : public TcxCustomGridColumnHitTest
{
	typedef TcxCustomGridColumnHitTest inherited;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
	
public:
	virtual System::Uitypes::TCursor __fastcall Cursor();
	virtual Cxgridcustomview::TcxCustomGridDragAndDropObjectClass __fastcall DragAndDropObjectClass();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridColumnHeaderHorzSizingEdgeHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridColumnHeaderHorzSizingEdgeHitTest() : TcxCustomGridColumnHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridColumnHeaderFilterButtonHitTest : public TcxCustomGridColumnHitTest
{
	typedef TcxCustomGridColumnHitTest inherited;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridColumnHeaderFilterButtonHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridColumnHeaderFilterButtonHitTest() : TcxCustomGridColumnHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridHeaderHitTest : public Cxgridcustomview::TcxCustomGridViewHitTest
{
	typedef Cxgridcustomview::TcxCustomGridViewHitTest inherited;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridHeaderHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridHeaderHitTest() : Cxgridcustomview::TcxCustomGridViewHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFooterHitTest : public Cxgridcustomview::TcxCustomGridViewHitTest
{
	typedef Cxgridcustomview::TcxCustomGridViewHitTest inherited;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridFooterHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridFooterHitTest() : Cxgridcustomview::TcxCustomGridViewHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFooterCellHitTest : public TcxCustomGridColumnHitTest
{
	typedef TcxCustomGridColumnHitTest inherited;
	
protected:
	virtual void __fastcall Assign(Cxgridcustomview::TcxCustomGridHitTest* Source);
	__classmethod virtual int __fastcall GetHitTestCode();
	
public:
	Cxcustomdata::TcxDataSummaryItem* SummaryItem;
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridFooterCellHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridFooterCellHitTest() : TcxCustomGridColumnHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridGroupFooterHitTest : public TcxGridFooterHitTest
{
	typedef TcxGridFooterHitTest inherited;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridGroupFooterHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridGroupFooterHitTest() : TcxGridFooterHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridGroupFooterCellHitTest : public TcxGridFooterCellHitTest
{
	typedef TcxGridFooterCellHitTest inherited;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridGroupFooterCellHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridGroupFooterCellHitTest() : TcxGridFooterCellHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridRowIndicatorHitTest : public Cxgridcustomtableview::TcxGridRecordHitTest
{
	typedef Cxgridcustomtableview::TcxGridRecordHitTest inherited;
	
private:
	TcxGridTableView* __fastcall GetGridView();
	void __fastcall SetGridView(TcxGridTableView* AValue);
	
protected:
	virtual void __fastcall Assign(Cxgridcustomview::TcxCustomGridHitTest* Source);
	__classmethod virtual int __fastcall GetHitTestCode();
	virtual bool __fastcall UseSelectRowCursor();
	
public:
	bool MultiSelect;
	virtual System::Uitypes::TCursor __fastcall Cursor();
	__property TcxGridTableView* GridView = {read=GetGridView, write=SetGridView};
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridRowIndicatorHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridRowIndicatorHitTest() : Cxgridcustomtableview::TcxGridRecordHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridRowSizingEdgeHitTest : public Cxgridcustomtableview::TcxGridRecordHitTest
{
	typedef Cxgridcustomtableview::TcxGridRecordHitTest inherited;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
	
public:
	virtual System::Uitypes::TCursor __fastcall Cursor();
	virtual Cxgridcustomview::TcxCustomGridDragAndDropObjectClass __fastcall DragAndDropObjectClass();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridRowSizingEdgeHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridRowSizingEdgeHitTest() : Cxgridcustomtableview::TcxGridRecordHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridIndicatorHitTest : public Cxgridcustomview::TcxCustomGridViewHitTest
{
	typedef Cxgridcustomview::TcxCustomGridViewHitTest inherited;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridIndicatorHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridIndicatorHitTest() : Cxgridcustomview::TcxCustomGridViewHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridIndicatorHeaderHitTest : public TcxGridIndicatorHitTest
{
	typedef TcxGridIndicatorHitTest inherited;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridIndicatorHeaderHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridIndicatorHeaderHitTest() : TcxGridIndicatorHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridRowLevelIndentHitTest : public Cxgridcustomtableview::TcxGridRecordHitTest
{
	typedef Cxgridcustomtableview::TcxGridRecordHitTest inherited;
	
protected:
	__classmethod virtual int __fastcall GetHitTestCode();
	
public:
	__classmethod virtual bool __fastcall CanClick();
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridRowLevelIndentHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridRowLevelIndentHitTest() : Cxgridcustomtableview::TcxGridRecordHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridGroupSummaryHitTest : public Cxgridcustomtableview::TcxGridRecordHitTest
{
	typedef Cxgridcustomtableview::TcxGridRecordHitTest inherited;
	
private:
	TcxGridColumn* __fastcall GetColumn();
	
protected:
	virtual void __fastcall Assign(Cxgridcustomview::TcxCustomGridHitTest* Source);
	__classmethod virtual int __fastcall GetHitTestCode();
	
public:
	Cxcustomdata::TcxDataSummaryItem* SummaryItem;
	__property TcxGridColumn* Column = {read=GetColumn};
public:
	/* TcxCustomGridHitTest.Destroy */ inline __fastcall virtual ~TcxGridGroupSummaryHitTest() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGridGroupSummaryHitTest() : Cxgridcustomtableview::TcxGridRecordHitTest() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxGridDataRowFixingMenu : public Cxlistbox::TdxCustomDropDownListBox
{
	typedef Cxlistbox::TdxCustomDropDownListBox inherited;
	
private:
	TcxGridDataRow* FDataRow;
	
protected:
	void __fastcall AddOperation(Cxcustomdata::TcxDataControllerRowFixedState AFixedState);
	virtual void __fastcall DoSelectItem(Cxlistbox::TdxCustomListBoxItem* AItem, bool ASelectedViaKeyboard);
	int __fastcall GetOperationImageIndex(Cxcustomdata::TcxDataControllerRowFixedState AFixedState);
	System::UnicodeString __fastcall GetOperationText(Cxcustomdata::TcxDataControllerRowFixedState AFixedState);
	void __fastcall RecreateOperations();
	__property TcxGridDataRow* DataRow = {read=FDataRow};
	
public:
	HIDESBASE virtual void __fastcall Popup(TcxGridDataRow* ADataRow, const System::Types::TRect &AForBounds);
public:
	/* TdxCustomDropDownListBox.Create */ inline __fastcall virtual TcxGridDataRowFixingMenu(Vcl::Controls::TWinControl* AOwnerControl) : Cxlistbox::TdxCustomDropDownListBox(AOwnerControl) { }
	/* TdxCustomDropDownListBox.CreateEx */ inline __fastcall TcxGridDataRowFixingMenu(Vcl::Controls::TWinControl* AOwnerControl, Cxcontrols::TcxControl* AOwnerParent) : Cxlistbox::TdxCustomDropDownListBox(AOwnerControl, AOwnerParent) { }
	/* TdxCustomDropDownListBox.Destroy */ inline __fastcall virtual ~TcxGridDataRowFixingMenu() { }
	
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TcxGridDataRowFixingMenu(System::Classes::TComponent* AOwner, int Dummy) : Cxlistbox::TdxCustomDropDownListBox(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxGridDataRowFixingMenu(HWND ParentWindow) : Cxlistbox::TdxCustomDropDownListBox(ParentWindow) { }
	
};


typedef void __fastcall (__closure *TcxGridRowLayoutCustomDrawEvent)(TcxGridTableView* Sender, Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo, bool &ADone);

class PASCALIMPLEMENTATION TcxGridRowLayoutOptions : public Cxgridrowlayout::TcxGridCustomRowLayoutOptions
{
	typedef Cxgridrowlayout::TcxGridCustomRowLayoutOptions inherited;
	
private:
	bool FSmartCellNavigation;
	TcxGridRowLayoutCustomDrawEvent FOnCustomDrawRowBackground;
	TcxGridRowLayoutCustomDrawEvent FOnCustomDrawRowHotTrack;
	TcxGridRowLayoutCustomDrawEvent FOnCustomDrawRowSelection;
	TcxGridTableView* __fastcall GetGridView();
	void __fastcall SetOnCustomDrawRowBackground(TcxGridRowLayoutCustomDrawEvent AValue);
	void __fastcall SetOnCustomDrawRowHotTrack(TcxGridRowLayoutCustomDrawEvent AValue);
	void __fastcall SetOnCustomDrawRowSelection(TcxGridRowLayoutCustomDrawEvent AValue);
	
protected:
	virtual void __fastcall ActiveChanged();
	virtual void __fastcall DoAssign(System::Classes::TPersistent* Source);
	virtual void __fastcall DoCustomDrawRowBackground(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo, bool &ADone);
	virtual void __fastcall DoCustomDrawRowHotTrack(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo, bool &ADone);
	virtual void __fastcall DoCustomDrawRowSelection(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo, bool &ADone);
	virtual Cxgridrowlayout::TcxGridRowLayoutController* __fastcall GetLayoutController();
	virtual bool __fastcall HasCustomDrawRowHotTrack();
	virtual bool __fastcall HasCustomDrawRowSelection();
	virtual void __fastcall UseDefaultLayoutChanged();
	
public:
	__property TcxGridTableView* GridView = {read=GetGridView};
	
__published:
	__property Active = {default=0};
	__property CaptionSuffix = {default=0};
	__property CellBorders = {default=1};
	__property DefaultColumnCount = {default=2};
	__property DefaultStretch = {default=0};
	__property MinValueWidth = {default=80};
	__property bool SmartCellNavigation = {read=FSmartCellNavigation, write=FSmartCellNavigation, default=0};
	__property UseDefaultLayout = {default=1};
	__property TcxGridRowLayoutCustomDrawEvent OnCustomDrawRowBackground = {read=FOnCustomDrawRowBackground, write=SetOnCustomDrawRowBackground};
	__property TcxGridRowLayoutCustomDrawEvent OnCustomDrawRowHotTrack = {read=FOnCustomDrawRowHotTrack, write=SetOnCustomDrawRowHotTrack};
	__property TcxGridRowLayoutCustomDrawEvent OnCustomDrawRowSelection = {read=FOnCustomDrawRowSelection, write=SetOnCustomDrawRowSelection};
public:
	/* TcxGridCustomRowLayoutOptions.Create */ inline __fastcall virtual TcxGridRowLayoutOptions(Cxgridcustomview::TcxCustomGridView* AGridView) : Cxgridrowlayout::TcxGridCustomRowLayoutOptions(AGridView) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxGridRowLayoutOptions() { }
	
};


typedef System::TMetaClass* TcxGridRowLayoutOptionsClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridTableRowLayoutDataCellViewInfo : public Cxgridrowlayout::TcxGridRowLayoutDataCellViewInfo
{
	typedef Cxgridrowlayout::TcxGridRowLayoutDataCellViewInfo inherited;
	
private:
	HIDESBASE TcxGridTableView* __fastcall GetGridView();
	TcxGridColumn* __fastcall GetItem();
	TcxCustomGridRowViewInfo* __fastcall GetRecordViewInfo();
	
protected:
	virtual bool __fastcall AlwaysDrawSelectedWhenFocused();
	virtual bool __fastcall CanAutoHeight();
	virtual bool __fastcall CanFocus();
	virtual bool __fastcall CanDrawSelectedWhenEditing();
	virtual void __fastcall GetCaptionParams(Cxgraphics::TcxViewParams &AParams);
	virtual Cxgridviewlayoutcontainer::TcxGridCustomLayoutItemViewInfo* __fastcall GetLayoutItemViewInfoInstance();
	virtual bool __fastcall GetMultiLine();
	virtual bool __fastcall GetTransparent();
	virtual bool __fastcall HasBorders();
	virtual bool __fastcall HasHotTrackBackground();
	virtual bool __fastcall HasSelectionBackground();
	virtual void __fastcall InitEditSizeProperties(/* out */ Cxedit::TcxEditSizeProperties &AEditSizeProperties);
	virtual bool __fastcall IsValueTransparent();
	virtual bool __fastcall SupportsEditing();
	
public:
	__property TcxGridTableView* GridView = {read=GetGridView};
	__property TcxGridColumn* Item = {read=GetItem};
	__property TcxCustomGridRowViewInfo* RecordViewInfo = {read=GetRecordViewInfo};
public:
	/* TcxGridTableDataCellViewInfo.Create */ inline __fastcall virtual TcxGridTableRowLayoutDataCellViewInfo(Cxgridcustomtableview::TcxCustomGridRecordViewInfo* ARecordViewInfo, Cxgridcustomtableview::TcxCustomGridTableItem* AItem) : Cxgridrowlayout::TcxGridRowLayoutDataCellViewInfo(ARecordViewInfo, AItem) { }
	/* TcxGridTableDataCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridTableRowLayoutDataCellViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridTableRowLayoutContainerViewInfo : public Cxgridrowlayout::TcxGridRowLayoutContainerViewInfo
{
	typedef Cxgridrowlayout::TcxGridRowLayoutContainerViewInfo inherited;
	
private:
	HIDESBASE TcxGridTableRowLayoutContainer* __fastcall GetContainer();
	
protected:
	virtual bool __fastcall CanDrawRoot();
	virtual Cxgridviewlayoutcontainer::TcxGridViewLayoutItemDataCellViewInfo* __fastcall FindGridItemViewInfo(Cxgridviewlayoutcontainer::TcxGridCustomLayoutItemViewInfo* AViewInfo);
	
public:
	__property TcxGridTableRowLayoutContainer* Container = {read=GetContainer};
public:
	/* TcxGridRecordLayoutContainerViewInfo.Create */ inline __fastcall virtual TcxGridTableRowLayoutContainerViewInfo(Dxlayoutcontainer::TdxLayoutContainer* AContainer, Cxgridcustomtableview::TcxCustomGridRecordViewInfo* ARecordViewInfo) : Cxgridrowlayout::TcxGridRowLayoutContainerViewInfo(AContainer, ARecordViewInfo) { }
	
public:
	/* TdxLayoutContainerViewInfo.Destroy */ inline __fastcall virtual ~TcxGridTableRowLayoutContainerViewInfo() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxGridTableRowLayoutItem : public Cxgridrowlayout::TcxGridRowLayoutItem
{
	typedef Cxgridrowlayout::TcxGridRowLayoutItem inherited;
	
public:
	/* TcxGridCustomLayoutItem.Create */ inline __fastcall virtual TcxGridTableRowLayoutItem(System::Classes::TComponent* AOwner) : Cxgridrowlayout::TcxGridRowLayoutItem(AOwner) { }
	
public:
	/* TdxCustomLayoutItem.Destroy */ inline __fastcall virtual ~TcxGridTableRowLayoutItem() { }
	
};


class PASCALIMPLEMENTATION TcxGridTableRowLayoutGroup : public Dxlayoutcontainer::TdxLayoutGroup
{
	typedef Dxlayoutcontainer::TdxLayoutGroup inherited;
	
public:
	/* TdxCustomLayoutGroup.Create */ inline __fastcall virtual TcxGridTableRowLayoutGroup(System::Classes::TComponent* AOwner) : Dxlayoutcontainer::TdxLayoutGroup(AOwner) { }
	/* TdxCustomLayoutGroup.Destroy */ inline __fastcall virtual ~TcxGridTableRowLayoutGroup() { }
	
};


class PASCALIMPLEMENTATION TcxGridTableRowLayoutContainer : public Cxgridrowlayout::TcxGridRowLayoutContainer
{
	typedef Cxgridrowlayout::TcxGridRowLayoutContainer inherited;
	
private:
	HIDESBASE TcxGridTableView* __fastcall GetGridView();
	TcxGridTableRowLayoutController* __fastcall GetLayoutController();
	
protected:
	virtual bool __fastcall CanCreateLayoutItem(Cxgridcustomtableview::TcxCustomGridTableItem* AGridItem);
	virtual bool __fastcall CanPlaceItem(Cxgridrowlayout::TcxGridRowLayoutItem* AItem);
	virtual Cxgridviewlayoutcontainer::TcxGridLayoutContainerViewInfo* __fastcall GetActualViewInfo();
	virtual System::Types::TRect __fastcall GetClientRect();
	virtual Dxlayoutcontainer::TdxLayoutGroupClass __fastcall GetDefaultGroupClass();
	virtual Cxgridrowlayout::TcxGridRowLayoutItemClass __fastcall GetItemClass();
	virtual void __fastcall SetItemForGridItem(Cxgridcustomtableview::TcxCustomGridTableItem* AGridItem, Cxgridrowlayout::TcxGridRowLayoutItem* AItem);
	__property TcxGridTableView* GridView = {read=GetGridView};
	__property TcxGridTableRowLayoutController* LayoutController = {read=GetLayoutController};
public:
	/* TcxGridRowLayoutContainer.Create */ inline __fastcall virtual TcxGridTableRowLayoutContainer(Cxgridrowlayout::TcxGridRowLayoutController* ALayoutController) : Cxgridrowlayout::TcxGridRowLayoutContainer(ALayoutController) { }
	
public:
	/* TdxLayoutContainer.Destroy */ inline __fastcall virtual ~TcxGridTableRowLayoutContainer() { }
	
};


class PASCALIMPLEMENTATION TcxGridTableRowLayoutSerializationOwner : public Cxclasses::TcxComponent
{
	typedef Cxclasses::TcxComponent inherited;
	
private:
	TcxGridTableRowLayoutContainer* FContainer;
	Dxlayoutcontainer::TdxLayoutContainer* __fastcall GetContainer();
	
protected:
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	void __fastcall SetContainer(TcxGridTableRowLayoutContainer* AValue);
	DYNAMIC void __fastcall SetParentComponent(System::Classes::TComponent* Value);
public:
	/* TcxCustomComponent.Destroy */ inline __fastcall virtual ~TcxGridTableRowLayoutSerializationOwner() { }
	
public:
	/* TComponent.Create */ inline __fastcall virtual TcxGridTableRowLayoutSerializationOwner(System::Classes::TComponent* AOwner) : Cxclasses::TcxComponent(AOwner) { }
	
private:
	void *__IdxLayoutContainerOwner;	// Dxlayoutcontainer::IdxLayoutContainerOwner 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {85310BD8-3D7A-454F-A54B-9898C0AA55A2}
	operator Dxlayoutcontainer::_di_IdxLayoutContainerOwner()
	{
		Dxlayoutcontainer::_di_IdxLayoutContainerOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxlayoutcontainer::IdxLayoutContainerOwner*(void) { return (Dxlayoutcontainer::IdxLayoutContainerOwner*)&__IdxLayoutContainerOwner; }
	#endif
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridTableRowLayoutCustomizationController : public Cxgridrowlayout::TcxGridRowLayoutCustomizationController
{
	typedef Cxgridrowlayout::TcxGridRowLayoutCustomizationController inherited;
	
protected:
	virtual Vcl::Forms::TForm* __fastcall CreateForm();
public:
	/* TcxGridViewHandler.Create */ inline __fastcall virtual TcxGridTableRowLayoutCustomizationController(Cxgridcustomview::TcxCustomGridView* AGridView) : Cxgridrowlayout::TcxGridRowLayoutCustomizationController(AGridView) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxGridTableRowLayoutCustomizationController() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridTableRowLayoutController : public Cxgridrowlayout::TcxGridRowLayoutController
{
	typedef Cxgridrowlayout::TcxGridRowLayoutController inherited;
	
private:
	System::Types::TRect FContainerClientRect;
	TcxGridTableRowLayoutContainerViewInfo* FDefaultContainerViewInfo;
	bool FIsDefaultContainerCalculated;
	TcxGridTableRowLayoutSerializationOwner* FSerializationOwner;
	TcxGridTableRowLayoutContainer* __fastcall GetContainer();
	virtual int __fastcall GetContainerDefaultHeight();
	virtual int __fastcall GetContainerDefaultWidth();
	TcxGridTableView* __fastcall GetGridView();
	HIDESBASE TcxGridRowLayoutOptions* __fastcall GetOptions();
	
protected:
	virtual void __fastcall CalculateDefaultContainer(int AWidth, int AHeight);
	virtual Cxgridrowlayout::TcxGridRowLayoutCustomizationController* __fastcall CreateCustomizationController();
	virtual TcxGridTableRowLayoutContainerViewInfo* __fastcall CreateDefaultContainerViewInfo();
	virtual TcxGridTableRowLayoutSerializationOwner* __fastcall CreateSerializationOwner();
	virtual Cxgridrowlayout::TcxGridRowLayoutContainerClass __fastcall GetContainerClass();
	virtual int __fastcall GetContainerHeight(TcxGridTableRowLayoutContainerViewInfo* AViewInfo);
	virtual int __fastcall GetContainerWidth(TcxGridTableRowLayoutContainerViewInfo* AViewInfo);
	virtual Cxgridrowlayout::TcxGridCustomRowLayoutOptions* __fastcall GetOptionsInstance();
	virtual void __fastcall SetSerializationOwner(TcxGridTableRowLayoutSerializationOwner* AValue);
	virtual void __fastcall Store(System::Classes::TGetChildProc Proc);
	virtual void __fastcall UpdateLayoutLookAndFeel();
	__property System::Types::TRect ContainerClientRect = {read=FContainerClientRect};
	__property TcxGridTableRowLayoutContainerViewInfo* DefaultContainerViewInfo = {read=FDefaultContainerViewInfo};
	__property bool IsDefaultContainerCalculated = {read=FIsDefaultContainerCalculated, nodefault};
	
public:
	__fastcall virtual TcxGridTableRowLayoutController(Cxgridcustomtableview::TcxCustomGridTableView* AGridView);
	__fastcall virtual ~TcxGridTableRowLayoutController();
	virtual void __fastcall CalculateContainer(TcxGridTableRowLayoutContainerViewInfo* AViewInfo, int AWidth, int AHeight);
	virtual int __fastcall CalculateContainerAutoHeight(TcxGridTableRowLayoutContainerViewInfo* AViewInfo, int AWidth);
	virtual void __fastcall CopyCustomizationSetting(Dxlayoutcontainer::TdxLayoutContainer* AContainer);
	virtual void __fastcall Init();
	virtual void __fastcall InvalidateDefaultContainer();
	__property TcxGridTableRowLayoutContainer* Container = {read=GetContainer};
	__property int ContainerDefaultHeight = {read=GetContainerDefaultHeight, nodefault};
	__property int ContainerDefaultWidth = {read=GetContainerDefaultWidth, nodefault};
	__property TcxGridTableView* GridView = {read=GetGridView};
	__property TcxGridRowLayoutOptions* Options = {read=GetOptions};
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridTableRowLayoutControllerClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridTableViewInplaceEditFormDataCellViewInfo : public Cxgridinplaceeditform::TcxGridInplaceEditFormDataCellViewInfo
{
	typedef Cxgridinplaceeditform::TcxGridInplaceEditFormDataCellViewInfo inherited;
	
private:
	HIDESBASE TcxGridTableView* __fastcall GetGridView();
	TcxGridTableViewInfo* __fastcall GetGridViewInfo();
	TcxGridColumn* __fastcall GetItem();
	
protected:
	virtual bool __fastcall CalculateHotTracked();
	virtual bool __fastcall CalculateSelected();
	virtual bool __fastcall CanAutoHeight();
	virtual bool __fastcall CanFocus();
	virtual void __fastcall GetCaptionParams(Cxgraphics::TcxViewParams &AParams);
	virtual System::Types::TRect __fastcall GetEditBounds();
	virtual Cxgridviewlayoutcontainer::TcxGridCustomLayoutItemViewInfo* __fastcall GetLayoutItemViewInfoInstance();
	virtual bool __fastcall HasBorders();
	virtual bool __fastcall HotTrackSelection();
	virtual bool __fastcall InvalidateOnStateChange();
	virtual bool __fastcall RecalculateOnStateChange();
	
public:
	virtual bool __fastcall CanDrawHotTracked();
	virtual bool __fastcall CanDrawSelected();
	__property TcxGridTableView* GridView = {read=GetGridView};
	__property TcxGridTableViewInfo* GridViewInfo = {read=GetGridViewInfo};
	__property TcxGridColumn* Item = {read=GetItem};
public:
	/* TcxGridTableDataCellViewInfo.Create */ inline __fastcall virtual TcxGridTableViewInplaceEditFormDataCellViewInfo(Cxgridcustomtableview::TcxCustomGridRecordViewInfo* ARecordViewInfo, Cxgridcustomtableview::TcxCustomGridTableItem* AItem) : Cxgridinplaceeditform::TcxGridInplaceEditFormDataCellViewInfo(ARecordViewInfo, AItem) { }
	/* TcxGridTableDataCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridTableViewInplaceEditFormDataCellViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridTableViewInplaceEditFormContainerViewInfo : public Cxgridinplaceeditform::TcxGridInplaceEditFormContainerViewInfo
{
	typedef Cxgridinplaceeditform::TcxGridInplaceEditFormContainerViewInfo inherited;
	
protected:
	virtual Cxgridviewlayoutcontainer::TcxGridViewLayoutItemDataCellViewInfo* __fastcall FindGridItemViewInfo(Cxgridviewlayoutcontainer::TcxGridCustomLayoutItemViewInfo* AViewInfo);
public:
	/* TcxGridRecordLayoutContainerViewInfo.Create */ inline __fastcall virtual TcxGridTableViewInplaceEditFormContainerViewInfo(Dxlayoutcontainer::TdxLayoutContainer* AContainer, Cxgridcustomtableview::TcxCustomGridRecordViewInfo* ARecordViewInfo) : Cxgridinplaceeditform::TcxGridInplaceEditFormContainerViewInfo(AContainer, ARecordViewInfo) { }
	
public:
	/* TdxLayoutContainerViewInfo.Destroy */ inline __fastcall virtual ~TcxGridTableViewInplaceEditFormContainerViewInfo() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxGridTableViewInplaceEditFormContainer : public Cxgridinplaceeditform::TcxGridInplaceEditFormContainer
{
	typedef Cxgridinplaceeditform::TcxGridInplaceEditFormContainer inherited;
	
private:
	HIDESBASE TcxGridTableViewInplaceEditForm* __fastcall GetInplaceEditForm();
	HIDESBASE TcxGridTableView* __fastcall GetGridView();
	HIDESBASE TcxGridTableViewInplaceEditFormContainerViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual bool __fastcall CanCreateLayoutItem(Cxgridcustomtableview::TcxCustomGridTableItem* AGridItem);
	virtual bool __fastcall CanPlaceItem(Cxgridrowlayout::TcxGridRowLayoutItem* AItem);
	virtual System::Types::TRect __fastcall GetClientBounds();
	virtual Dxlayoutcontainer::TdxLayoutContainerViewInfoClass __fastcall GetViewInfoClass();
	virtual void __fastcall SetItemForGridItem(Cxgridcustomtableview::TcxCustomGridTableItem* AGridItem, Cxgridrowlayout::TcxGridRowLayoutItem* AItem);
	
public:
	__property TcxGridTableViewInplaceEditForm* InplaceEditForm = {read=GetInplaceEditForm};
	__property TcxGridTableView* GridView = {read=GetGridView};
	__property TcxGridTableViewInplaceEditFormContainerViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxGridRowLayoutContainer.Create */ inline __fastcall virtual TcxGridTableViewInplaceEditFormContainer(Cxgridrowlayout::TcxGridRowLayoutController* ALayoutController) : Cxgridinplaceeditform::TcxGridInplaceEditFormContainer(ALayoutController) { }
	
public:
	/* TdxLayoutContainer.Destroy */ inline __fastcall virtual ~TcxGridTableViewInplaceEditFormContainer() { }
	
};


typedef void __fastcall (__closure *TcxGridTableViewDetachedEditFormEvent)(TcxGridTableView* Sender, Vcl::Forms::TForm* AForm);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridTableViewInplaceEditFormCustomizationController : public Cxgridrowlayout::TcxGridRowLayoutCustomizationController
{
	typedef Cxgridrowlayout::TcxGridRowLayoutCustomizationController inherited;
	
protected:
	virtual Vcl::Forms::TForm* __fastcall CreateForm();
public:
	/* TcxGridViewHandler.Create */ inline __fastcall virtual TcxGridTableViewInplaceEditFormCustomizationController(Cxgridcustomview::TcxCustomGridView* AGridView) : Cxgridrowlayout::TcxGridRowLayoutCustomizationController(AGridView) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxGridTableViewInplaceEditFormCustomizationController() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridTableViewInplaceEditForm : public Cxgridinplaceeditform::TcxGridInplaceEditForm
{
	typedef Cxgridinplaceeditform::TcxGridInplaceEditForm inherited;
	
private:
	HIDESBASE TcxGridTableViewInplaceEditFormContainer* __fastcall GetContainer();
	TcxGridTableView* __fastcall GetGridView();
	
protected:
	virtual Cxgridrowlayout::TcxGridRowLayoutCustomizationController* __fastcall CreateCustomizationController();
	virtual void __fastcall DetachedFormInitialize();
	virtual void __fastcall Edit(TcxGridDataRow* ARow);
	virtual Cxgridrowlayout::TcxGridRowLayoutContainerClass __fastcall GetContainerClass();
	virtual void __fastcall InvalidateIndicator();
	virtual void __fastcall InvalidateUpdateButton();
	virtual Cxgridrowlayout::TcxGridCustomRowLayoutOptions* __fastcall GetOptionsInstance();
	virtual void __fastcall ModifiedChanged();
	virtual void __fastcall UpdateLayoutLookAndFeel();
	
public:
	void __fastcall CheckFocusedItem(TcxGridTableViewInplaceEditFormDataCellViewInfo* AItemViewInfo);
	void __fastcall ValidateEditVisibility();
	__property TcxGridTableViewInplaceEditFormContainer* Container = {read=GetContainer};
	__property TcxGridTableView* GridView = {read=GetGridView};
public:
	/* TcxGridInplaceEditForm.Create */ inline __fastcall virtual TcxGridTableViewInplaceEditForm(Cxgridcustomtableview::TcxCustomGridTableView* AGridView) : Cxgridinplaceeditform::TcxGridInplaceEditForm(AGridView) { }
	/* TcxGridInplaceEditForm.Destroy */ inline __fastcall virtual ~TcxGridTableViewInplaceEditForm() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridTableViewInplaceEditFormClass;

enum DECLSPEC_DENUM TcxGridMasterRowDblClickAction : unsigned char { dcaSwitchExpandedState, dcaShowEditForm };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridEditFormOptions : public Cxgridinplaceeditform::TcxGridCustomEditFormOptions
{
	typedef Cxgridinplaceeditform::TcxGridCustomEditFormOptions inherited;
	
private:
	TcxGridMasterRowDblClickAction FMasterRowDblClickAction;
	TcxGridTableView* __fastcall GetGridView();
	void __fastcall SetMasterRowDblClickAction(TcxGridMasterRowDblClickAction AValue);
	
protected:
	virtual void __fastcall DoAssign(System::Classes::TPersistent* Source);
	virtual Cxgridrowlayout::TcxGridRowLayoutController* __fastcall GetLayoutController();
	
public:
	__property TcxGridTableView* GridView = {read=GetGridView};
	
__published:
	__property CaptionMask = {default=0};
	__property CellBorders = {default=1};
	__property DefaultColumnCount = {default=2};
	__property DefaultStretch = {default=0};
	__property ItemHotTrack = {default=0};
	__property TcxGridMasterRowDblClickAction MasterRowDblClickAction = {read=FMasterRowDblClickAction, write=SetMasterRowDblClickAction, default=0};
	__property UseDefaultLayout = {default=1};
public:
	/* TcxGridCustomRowLayoutOptions.Create */ inline __fastcall virtual TcxGridEditFormOptions(Cxgridcustomview::TcxCustomGridView* AGridView) : Cxgridinplaceeditform::TcxGridCustomEditFormOptions(AGridView) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxGridEditFormOptions() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridEditFormOptionsClass;

typedef System::TMetaClass* TcxCustomGridRowClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridRow : public Cxgridcustomtableview::TcxCustomGridRecord
{
	typedef Cxgridcustomtableview::TcxCustomGridRecord inherited;
	
private:
	TcxGridGroupRow* __fastcall GetAsGroupRow();
	TcxGridMasterDataRow* __fastcall GetAsMasterDataRow();
	HIDESBASE TcxGridTableController* __fastcall GetController();
	HIDESBASE TcxGridTableView* __fastcall GetGridView();
	Cxgridlevel::TcxGridLevel* __fastcall GetGridViewLevel();
	bool __fastcall GetIsFilterRow();
	bool __fastcall GetIsNewItemRow();
	TcxGridViewData* __fastcall GetViewData();
	TcxCustomGridRowViewInfo* __fastcall GetViewInfo();
	bool __fastcall HasParentGroup();
	
protected:
	virtual Cxlookandfeelpainters::TcxCheckBoxState __fastcall GetCheckBoxState();
	virtual Cxcustomdata::TcxDataControllerRowFixedState __fastcall GetFixedState();
	virtual Cxlookandfeelpainters::TcxIndicatorKind __fastcall GetIndicatorKind();
	virtual bool __fastcall GetIsParentRecordLast(int AIndex);
	virtual int __fastcall GetTopGroupIndex(int ALevel = 0x0);
	virtual bool __fastcall IsSpecial();
	virtual void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual bool __fastcall ShowCheckBox();
	virtual void __fastcall SetFixedState(Cxcustomdata::TcxDataControllerRowFixedState AValue);
	virtual void __fastcall ToggleCheckBox();
	virtual void __fastcall ToggleFixedState(const System::Types::TRect &AMenuForBounds) = 0 ;
	__property Cxlookandfeelpainters::TcxCheckBoxState CheckBoxState = {read=GetCheckBoxState, nodefault};
	__property TcxGridTableController* Controller = {read=GetController};
	__property Cxcustomdata::TcxDataControllerRowFixedState FixedState = {read=GetFixedState, write=SetFixedState, nodefault};
	__property Cxlookandfeelpainters::TcxIndicatorKind IndicatorKind = {read=GetIndicatorKind, nodefault};
	__property int TopGroupIndex[int ALevel] = {read=GetTopGroupIndex};
	
public:
	virtual bool __fastcall ExpandOnDblClick();
	virtual bool __fastcall SupportsCellMultiSelect();
	__property TcxGridGroupRow* AsGroupRow = {read=GetAsGroupRow};
	__property TcxGridMasterDataRow* AsMasterDataRow = {read=GetAsMasterDataRow};
	__property TcxGridTableView* GridView = {read=GetGridView};
	__property Cxgridlevel::TcxGridLevel* GridViewLevel = {read=GetGridViewLevel};
	__property bool IsFilterRow = {read=GetIsFilterRow, nodefault};
	__property bool IsNewItemRow = {read=GetIsNewItemRow, nodefault};
	__property TcxGridViewData* ViewData = {read=GetViewData};
	__property TcxCustomGridRowViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomGridRecord.Create */ inline __fastcall virtual TcxCustomGridRow(Cxgridcustomtableview::TcxCustomGridTableViewData* AViewData, int AIndex, const Cxcustomdata::TcxRowInfo &ARecordInfo) : Cxgridcustomtableview::TcxCustomGridRecord(AViewData, AIndex, ARecordInfo) { }
	/* TcxCustomGridRecord.Destroy */ inline __fastcall virtual ~TcxCustomGridRow() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridDataRow : public TcxCustomGridRow
{
	typedef TcxCustomGridRow inherited;
	
private:
	TcxGridTableViewInplaceEditForm* __fastcall GetInplaceEditForm();
	
protected:
	virtual bool __fastcall GetEditFormVisible();
	virtual System::Types::TRect __fastcall GetInplaceEditFormClientBounds();
	virtual void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall SetEditFormVisible(bool AValue);
	virtual bool __fastcall ShowCheckBox();
	virtual Cxcustomdata::TcxDataControllerRowFixedState __fastcall GetFixedState();
	virtual bool __fastcall GetHasCells();
	virtual Cxlookandfeelpainters::TcxIndicatorKind __fastcall GetIndicatorKind();
	virtual Cxgridcustomtableview::TcxCustomGridRecord* __fastcall GetParentRecord();
	virtual Cxgridcustomview::TcxCustomGridViewInfoCacheItemClass __fastcall GetViewInfoCacheItemClass();
	virtual Cxgridcustomtableview::TcxCustomGridRecordViewInfoClass __fastcall GetViewInfoClass();
	virtual void __fastcall SetFixedState(Cxcustomdata::TcxDataControllerRowFixedState AValue);
	virtual void __fastcall ToggleFixedState(const System::Types::TRect &AMenuForBounds);
	__property TcxGridTableViewInplaceEditForm* InplaceEditForm = {read=GetInplaceEditForm};
	
public:
	virtual bool __fastcall ExpandOnDblClick();
	virtual bool __fastcall SupportsCellMultiSelect();
	virtual void __fastcall ToggleEditFormVisibility();
	__property bool EditFormVisible = {read=GetEditFormVisible, write=SetEditFormVisible, nodefault};
	__property FixedState;
public:
	/* TcxCustomGridRecord.Create */ inline __fastcall virtual TcxGridDataRow(Cxgridcustomtableview::TcxCustomGridTableViewData* AViewData, int AIndex, const Cxcustomdata::TcxRowInfo &ARecordInfo) : TcxCustomGridRow(AViewData, AIndex, ARecordInfo) { }
	/* TcxCustomGridRecord.Destroy */ inline __fastcall virtual ~TcxGridDataRow() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridNewItemRowClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridNewItemRow : public TcxGridDataRow
{
	typedef TcxGridDataRow inherited;
	
protected:
	virtual Cxlookandfeelpainters::TcxIndicatorKind __fastcall GetIndicatorKind();
	virtual bool __fastcall HasErrorData();
	virtual bool __fastcall IsSpecial();
	virtual void __fastcall SetEditFormVisible(bool AValue);
	
public:
	virtual bool __fastcall SupportsCellMultiSelect();
public:
	/* TcxCustomGridRecord.Create */ inline __fastcall virtual TcxGridNewItemRow(Cxgridcustomtableview::TcxCustomGridTableViewData* AViewData, int AIndex, const Cxcustomdata::TcxRowInfo &ARecordInfo) : TcxGridDataRow(AViewData, AIndex, ARecordInfo) { }
	/* TcxCustomGridRecord.Destroy */ inline __fastcall virtual ~TcxGridNewItemRow() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridFilterRowClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFilterRow : public TcxGridNewItemRow
{
	typedef TcxGridNewItemRow inherited;
	
private:
	bool FSelected;
	void __fastcall ActualizeProperties(Cxedit::TcxCustomEditProperties* AProperties);
	Cxfilter::TcxFilterCriteriaItem* __fastcall GetFilterCriteriaItem(int Index);
	Cxfilter::TcxFilterOperatorKind __fastcall GetOperator(int Index)/* overload */;
	Cxfilter::TcxFilterOperatorKind __fastcall GetOperator(int Index, const System::Variant &AValue)/* overload */;
	void __fastcall SetOperator(int Index, Cxfilter::TcxFilterOperatorKind AOperator);
	
protected:
	virtual Cxlookandfeelpainters::TcxIndicatorKind __fastcall GetIndicatorKind();
	virtual void __fastcall RefreshRecordInfo();
	virtual bool __fastcall GetSelected();
	virtual bool __fastcall GetVisible();
	virtual void __fastcall SetSelected(bool Value);
	virtual System::UnicodeString __fastcall GetDisplayText(int Index);
	virtual System::Variant __fastcall GetValue(int Index);
	virtual void __fastcall SetDisplayText(int Index, const System::UnicodeString Value);
	virtual void __fastcall SetValue(int Index, const System::Variant &Value);
	virtual System::UnicodeString __fastcall GetDisplayTextForValue(int AIndex, const System::Variant &AValue);
	virtual Cxfilter::TcxFilterOperatorKind __fastcall GetDefaultFilterOperatorKind(const System::Variant &AValue, bool ACheckMask);
	virtual bool __fastcall IsCriteriaItemSupported(int AIndex, Cxfilter::TcxFilterCriteriaItem* ACriteriaItem);
	virtual void __fastcall ResetOperators();
	virtual void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	__property Cxfilter::TcxFilterCriteriaItem* FilterCriteriaItems[int Index] = {read=GetFilterCriteriaItem};
	__property bool InternalSelected = {read=FSelected, write=FSelected, nodefault};
	
public:
	__fastcall virtual ~TcxGridFilterRow();
	virtual bool __fastcall CanFocusCells();
	bool __fastcall IsEmpty();
	__property Cxfilter::TcxFilterOperatorKind Operators[int Index] = {read=GetOperator, write=SetOperator};
public:
	/* TcxCustomGridRecord.Create */ inline __fastcall virtual TcxGridFilterRow(Cxgridcustomtableview::TcxCustomGridTableViewData* AViewData, int AIndex, const Cxcustomdata::TcxRowInfo &ARecordInfo) : TcxGridNewItemRow(AViewData, AIndex, ARecordInfo) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridMasterDataRow : public TcxGridDataRow
{
	typedef TcxGridDataRow inherited;
	
private:
	Cxgridcustomview::TcxCustomGridView* __fastcall GetActiveDetailGridView();
	bool __fastcall GetActiveDetailGridViewExists();
	int __fastcall GetActiveDetailIndex();
	Cxgridlevel::TcxGridLevel* __fastcall GetActiveDetailLevel();
	Cxgridcustomview::TcxCustomGridView* __fastcall GetDetailGridView(int Index);
	int __fastcall GetDetailGridViewCount();
	bool __fastcall GetDetailGridViewExists(int Index);
	bool __fastcall GetDetailGridViewHasData(int Index);
	int __fastcall GetInternalActiveDetailIndex();
	void __fastcall SetActiveDetailIndex(int Value);
	void __fastcall SetActiveDetailLevel(Cxgridlevel::TcxGridLevel* Value);
	
protected:
	virtual void __fastcall DoCollapse(bool ARecurse);
	virtual void __fastcall DoExpand(bool ARecurse);
	virtual bool __fastcall GetExpandable();
	virtual bool __fastcall GetExpanded();
	virtual bool __fastcall GetHasChildren();
	bool __fastcall GetInternalActiveDetailGridView(/* out */ Cxgridcustomview::TcxCustomGridView* &AView);
	virtual Cxgridcustomview::TcxCustomGridViewInfoCacheItemClass __fastcall GetViewInfoCacheItemClass();
	virtual Cxgridcustomtableview::TcxCustomGridRecordViewInfoClass __fastcall GetViewInfoClass();
	virtual void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall ToggleExpanded();
	__property int InternalActiveDetailIndex = {read=GetInternalActiveDetailIndex, nodefault};
	
public:
	virtual bool __fastcall ExpandOnDblClick();
	virtual Cxgridcustomtableview::TcxCustomGridRecord* __fastcall GetFirstFocusableChild();
	virtual Cxgridcustomtableview::TcxCustomGridRecord* __fastcall GetLastFocusableChild(bool ARecursive);
	__property Cxgridcustomview::TcxCustomGridView* ActiveDetailGridView = {read=GetActiveDetailGridView};
	__property bool ActiveDetailGridViewExists = {read=GetActiveDetailGridViewExists, nodefault};
	__property int ActiveDetailIndex = {read=GetActiveDetailIndex, write=SetActiveDetailIndex, nodefault};
	__property Cxgridlevel::TcxGridLevel* ActiveDetailLevel = {read=GetActiveDetailLevel, write=SetActiveDetailLevel};
	__property int DetailGridViewCount = {read=GetDetailGridViewCount, nodefault};
	__property bool DetailGridViewExists[int Index] = {read=GetDetailGridViewExists};
	__property bool DetailGridViewHasData[int Index] = {read=GetDetailGridViewHasData};
	__property Cxgridcustomview::TcxCustomGridView* DetailGridViews[int Index] = {read=GetDetailGridView};
	__property bool HasChildren = {read=GetHasChildren, nodefault};
public:
	/* TcxCustomGridRecord.Create */ inline __fastcall virtual TcxGridMasterDataRow(Cxgridcustomtableview::TcxCustomGridTableViewData* AViewData, int AIndex, const Cxcustomdata::TcxRowInfo &ARecordInfo) : TcxGridDataRow(AViewData, AIndex, ARecordInfo) { }
	/* TcxCustomGridRecord.Destroy */ inline __fastcall virtual ~TcxGridMasterDataRow() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridGroupRow : public TcxCustomGridRow
{
	typedef TcxCustomGridRow inherited;
	
private:
	System::UnicodeString __fastcall GetCaptionPrefix(int AIndex);
	System::UnicodeString __fastcall GetCaptionSeparator();
	System::UnicodeString __fastcall GetDisplayCaptionByGroupedColumn(int AIndex);
	System::UnicodeString __fastcall GetDisplayTextValueByGroupedColumn(int AIndex);
	TcxGridColumn* __fastcall GetMainGroupedColumn();
	TcxGridColumn* __fastcall GetGroupedColumn(int AGroupedColumnIndex);
	int __fastcall GetGroupedColumnCount();
	System::Variant __fastcall GetGroupedColumnValue(int AGroupedColumnIndex);
	Cxcustomdata::TcxDataGroupSummaryItems* __fastcall GetGroupSummaryItems();
	
protected:
	virtual void __fastcall DoCollapse(bool ARecurse);
	virtual void __fastcall DoExpand(bool ARecurse);
	virtual bool __fastcall GetExpandable();
	virtual bool __fastcall GetExpanded();
	virtual Cxlookandfeelpainters::TcxCheckBoxState __fastcall GetCheckBoxState();
	virtual System::UnicodeString __fastcall GetDisplayCaption();
	virtual System::UnicodeString __fastcall GetDisplayText(int Index);
	virtual System::UnicodeString __fastcall GetDisplayTextByGroupedColumn(int AGroupedColumnIndex);
	virtual System::UnicodeString __fastcall GetDisplayTextValue();
	virtual Cxcustomdata::TcxDataControllerRowFixedState __fastcall GetFixedState();
	virtual bool __fastcall GetIsData();
	virtual bool __fastcall GetIsParent();
	virtual int __fastcall GetTopGroupIndex(int ALevel = 0x0);
	HIDESBASE virtual System::Variant __fastcall GetValue();
	virtual Cxgridcustomview::TcxCustomGridViewInfoCacheItemClass __fastcall GetViewInfoCacheItemClass();
	virtual Cxgridcustomtableview::TcxCustomGridRecordViewInfoClass __fastcall GetViewInfoClass();
	virtual bool __fastcall HasErrorData();
	virtual void __fastcall SetDisplayText(int Index, const System::UnicodeString Value);
	virtual void __fastcall SetValue(int Index, const System::Variant &Value);
	virtual bool __fastcall ShowCheckBox();
	__property System::UnicodeString CaptionPrefix[int AGroupedColumnIndex] = {read=GetCaptionPrefix};
	__property System::UnicodeString CaptionSeparator = {read=GetCaptionSeparator};
	__property System::UnicodeString DisplayTextByGroupedColumn[int AGroupedColumnIndex] = {read=GetDisplayTextByGroupedColumn};
	
public:
	virtual bool __fastcall ExpandOnDblClick();
	bool __fastcall GetGroupSummaryInfo(Cxcustomdata::TcxDataSummaryItems* &ASummaryItems, System::PVariant &ASummaryValues, int AGroupedColumnIndex = 0x0);
	__property System::UnicodeString DisplayCaption = {read=GetDisplayCaption};
	__property System::UnicodeString DisplayCaptions[int AGroupedColumnIndex] = {read=GetDisplayCaptionByGroupedColumn};
	__property System::UnicodeString DisplayText = {read=GetDisplayTextValue};
	__property TcxGridColumn* GroupedColumn = {read=GetMainGroupedColumn};
	__property TcxGridColumn* GroupedColumns[int AGroupedColumnIndex] = {read=GetGroupedColumn};
	__property int GroupedColumnCount = {read=GetGroupedColumnCount, nodefault};
	__property System::Variant GroupedColumnValue[int AGroupedColumnIndex] = {read=GetGroupedColumnValue};
	__property Cxcustomdata::TcxDataGroupSummaryItems* GroupSummaryItems = {read=GetGroupSummaryItems};
	__property System::Variant Value = {read=GetValue};
public:
	/* TcxCustomGridRecord.Create */ inline __fastcall virtual TcxGridGroupRow(Cxgridcustomtableview::TcxCustomGridTableViewData* AViewData, int AIndex, const Cxcustomdata::TcxRowInfo &ARecordInfo) : TcxCustomGridRow(AViewData, AIndex, ARecordInfo) { }
	/* TcxCustomGridRecord.Destroy */ inline __fastcall virtual ~TcxGridGroupRow() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridViewData : public Cxgridcustomtableview::TcxCustomGridTableViewData
{
	typedef Cxgridcustomtableview::TcxCustomGridTableViewData inherited;
	
private:
	TcxGridFilterRow* FFilterRow;
	int __fastcall GetFixedBottomRowCount();
	int __fastcall GetFixedTopRowCount();
	TcxGridNewItemRow* __fastcall GetNewItemRow();
	TcxCustomGridRow* __fastcall GetRow(int Index);
	int __fastcall GetRowCount();
	
protected:
	virtual TcxGridMasterDataRow* __fastcall GetFirstVisibleExpandedMasterRow();
	virtual Cxgridcustomtableview::TcxCustomGridRecordClass __fastcall GetNewItemRecordClass();
	virtual Cxgridcustomtableview::TcxCustomGridRecord* __fastcall GetRecordByKind(int AKind, int AIndex);
	virtual int __fastcall GetRecordKind(Cxgridcustomtableview::TcxCustomGridRecord* ARecord);
	virtual Cxgridcustomtableview::TcxCustomGridRecordClass __fastcall GetDataRecordClass(const Cxcustomdata::TcxRowInfo &ARecordInfo);
	virtual Cxgridcustomtableview::TcxCustomGridRecordClass __fastcall GetGroupRecordClass(const Cxcustomdata::TcxRowInfo &ARecordInfo);
	virtual Cxgridcustomtableview::TcxCustomGridRecordClass __fastcall GetMasterRecordClass(const Cxcustomdata::TcxRowInfo &ARecordInfo);
	virtual Cxgridcustomtableview::TcxCustomGridRecordClass __fastcall GetRecordClass(const Cxcustomdata::TcxRowInfo &ARecordInfo);
	virtual TcxCustomGridRow* __fastcall GetTopGroup(int ARowIndex, int ALevel = 0x0);
	virtual int __fastcall GetTopGroupIndex(int ARowIndex, int ALevel = 0x0);
	void __fastcall CreateFilterRow();
	void __fastcall DestroyFilterRow();
	void __fastcall CheckFilterRow();
	virtual TcxGridFilterRowClass __fastcall GetFilterRowClass();
	
public:
	__fastcall virtual ~TcxGridViewData();
	virtual void __fastcall Collapse(bool ARecurse);
	virtual void __fastcall Expand(bool ARecurse);
	virtual bool __fastcall HasFilterRow();
	virtual bool __fastcall HasNewItemRecord();
	virtual Cxgridcustomview::TcxCustomGridView* __fastcall MakeDetailVisible(System::Classes::TComponent* ADetailLevel);
	__property TcxGridFilterRow* FilterRow = {read=FFilterRow};
	__property int FixedBottomRowCount = {read=GetFixedBottomRowCount, nodefault};
	__property int FixedTopRowCount = {read=GetFixedTopRowCount, nodefault};
	__property TcxGridNewItemRow* NewItemRow = {read=GetNewItemRow};
	__property int RowCount = {read=GetRowCount, nodefault};
	__property TcxCustomGridRow* Rows[int Index] = {read=GetRow};
public:
	/* TcxCustomGridTableViewData.Create */ inline __fastcall virtual TcxGridViewData(Cxgridcustomview::TcxCustomGridView* AGridView) : Cxgridcustomtableview::TcxCustomGridTableViewData(AGridView) { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridColumnHeaderMergeIndicatorClass;

class PASCALIMPLEMENTATION TcxGridColumnHeaderMergeIndicator : public Cxcontrols::TcxDragImage
{
	typedef Cxcontrols::TcxDragImage inherited;
	
private:
	Cxgeometry::TdxScaleFactor* FScaleFactor;
	bool FTransparent;
	bool __fastcall GetTransparent();
	
protected:
	virtual System::Types::TRect __fastcall CalculateBounds(const System::Types::TPoint &APosition);
	virtual void __fastcall Draw();
	virtual void __fastcall DrawBackground();
	virtual void __fastcall DrawIndicator();
	virtual int __fastcall GetHeight();
	virtual System::Uitypes::TColor __fastcall GetBackColor();
	virtual Dxcore::TPoints __fastcall GetIndicatorPoints(const System::Types::TRect &ABounds);
	virtual int __fastcall GetWidth();
	HIDESBASE void __fastcall Init(const System::Types::TPoint &APosition)/* overload */;
	__property System::Uitypes::TColor BackColor = {read=GetBackColor, nodefault};
	__property bool Transparent = {read=GetTransparent, nodefault};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=FScaleFactor};
	
public:
	__fastcall virtual TcxGridColumnHeaderMergeIndicator(bool ATransparent);
	__fastcall virtual ~TcxGridColumnHeaderMergeIndicator();
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxGridColumnHeaderMergeIndicator(HWND ParentWindow) : Cxcontrols::TcxDragImage(ParentWindow) { }
	
};


typedef System::TMetaClass* TcxGridColumnHeaderMovingObjectClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridColumnHeaderMovingObject : public Cxgridcustomtableview::TcxCustomGridTableItemMovingObject
{
	typedef Cxgridcustomtableview::TcxCustomGridTableItemMovingObject inherited;
	
private:
	TcxGridColumnHeaderMergeIndicator* FMergeIndicator;
	int FOriginalDestColumnContainerKind;
	System::Classes::TList* FUnmergeableColumns;
	bool __fastcall AllowMergeWithLeftColumn();
	bool __fastcall AllowMergeWithRightColumn();
	bool __fastcall ColumnGrouping();
	bool __fastcall ColumnMovingToHeader();
	bool __fastcall ColumnRemoving();
	HIDESBASE TcxGridTableView* __fastcall GetGridView();
	int __fastcall GetGroupByIndex();
	TcxGridColumn* __fastcall GetLeftGroupColumn();
	TcxGridColumn* __fastcall GetRightGroupColumn();
	TcxGridColumn* __fastcall GetSourceItem();
	HIDESBASE TcxGridTableViewInfo* __fastcall GetViewInfo();
	bool __fastcall MergeWithLeftColumn();
	bool __fastcall MergeWithRightColumn();
	void __fastcall SetSourceItem(TcxGridColumn* Value);
	bool __fastcall UpdateColumnPosition();
	
protected:
	virtual void __fastcall CalculateDestParams(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, /* out */ int &AContainerKind, /* out */ Cxgridcustomtableview::TcxGridItemContainerZone* &AZone);
	virtual bool __fastcall CanMergeByCtrl();
	virtual bool __fastcall CanRemove();
	virtual void __fastcall CheckDestItemContainerKind(int &AValue);
	virtual void __fastcall DirtyChanged();
	virtual void __fastcall DoColumnMovingToHeader();
	virtual void __fastcall DoGetUnmergeableColumns();
	virtual void __fastcall DragAndDrop(const System::Types::TPoint &P, bool &Accepted);
	virtual void __fastcall EndDragAndDrop(bool Accepted);
	virtual System::Types::TRect __fastcall GetArrowAreaBounds(Cxcontrols::TcxArrowPlace APlace);
	virtual System::Types::TRect __fastcall GetArrowsClientRect();
	virtual System::Types::TRect __fastcall GetDestZonesClientBounds();
	virtual System::Types::TRect __fastcall GetGroupByBoxArrowAreaBounds();
	virtual System::Types::TRect __fastcall GetHeaderArrowAreaBounds(Cxcontrols::TcxArrowPlace APlace);
	virtual System::Types::TRect __fastcall GetHeaderArrowAreaBoundsForLeftFixedSource();
	virtual System::Types::TRect __fastcall GetHeaderArrowAreaBoundsForRightFixedSource();
	virtual System::Types::TRect __fastcall GetHeaderArrowAreaBoundsForScrollableSource();
	virtual System::Types::TRect __fastcall GetHeaderLeftFixedArrowAreaBounds();
	virtual System::Types::TRect __fastcall GetHeaderRightFixedArrowAreaBounds();
	virtual TcxGridColumnHeaderMergeIndicatorClass __fastcall GetMergeIndicatorClass();
	virtual System::Types::TPoint __fastcall GetMergeIndicatorPosition();
	virtual Cxgridcustomview::TcxCustomGridCellViewInfo* __fastcall GetSourceItemViewInfo();
	virtual bool __fastcall HasMergeIndicator();
	virtual void __fastcall HeaderBeginUpdate(bool AFromGroupByBox);
	virtual void __fastcall HeaderEndUpdate(bool AFromGroupByBox);
	virtual void __fastcall InitMergeIndicator();
	virtual void __fastcall InitDragObjects();
	virtual bool __fastcall IsCtrlPressed();
	virtual bool __fastcall IsMerging();
	virtual bool __fastcall IsValidDestination();
	virtual bool __fastcall IsValidDestinationFixedKind();
	virtual bool __fastcall IsValidDestinationForVisibleSource();
	virtual void __fastcall MergeIndicatorPositionChanged(bool AVisible = true);
	virtual bool __fastcall NeedCheckScrolling();
	virtual bool __fastcall NeedMergeIndicator();
	virtual bool __fastcall ProcessKeyDown(System::Word AKey, System::Classes::TShiftState AShiftState);
	virtual bool __fastcall ProcessKeyUp(System::Word AKey, System::Classes::TShiftState AShiftState);
	__property TcxGridTableView* GridView = {read=GetGridView};
	__property TcxGridColumnHeaderMergeIndicator* MergeIndicator = {read=FMergeIndicator};
	__property int OriginalDestColumnContainerKind = {read=FOriginalDestColumnContainerKind, write=FOriginalDestColumnContainerKind, nodefault};
	__property System::Classes::TList* UnmergeableColumns = {read=FUnmergeableColumns};
	__property TcxGridColumn* SourceItem = {read=GetSourceItem, write=SetSourceItem};
	__property TcxGridTableViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	virtual void __fastcall Init(const System::Types::TPoint &P, Cxgridcustomview::TcxCustomGridHitTest* AParams);
public:
	/* TcxCustomGridTableItemMovingObject.Create */ inline __fastcall virtual TcxGridColumnHeaderMovingObject(Cxcontrols::TcxControl* AControl) : Cxgridcustomtableview::TcxCustomGridTableItemMovingObject(AControl) { }
	/* TcxCustomGridTableItemMovingObject.Destroy */ inline __fastcall virtual ~TcxGridColumnHeaderMovingObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridSizingObject : public Cxgridcustomview::TcxCustomGridDragAndDropObject
{
	typedef Cxgridcustomview::TcxCustomGridDragAndDropObject inherited;
	
private:
	int FDestPointX;
	int FDestPointY;
	int FOriginalSize;
	HIDESBASE TcxGridTableController* __fastcall GetController();
	HIDESBASE TcxGridTableView* __fastcall GetGridView();
	HIDESBASE TcxGridTableViewInfo* __fastcall GetViewInfo();
	void __fastcall SetDestPointX(int Value);
	void __fastcall SetDestPointY(int Value);
	
protected:
	virtual void __fastcall DirtyChanged();
	virtual int __fastcall GetCurrentSize();
	virtual int __fastcall GetDeltaSize();
	virtual System::Uitypes::TCursor __fastcall GetDragAndDropCursor(bool Accepted);
	virtual System::Types::TRect __fastcall GetHorzSizingMarkBounds();
	virtual bool __fastcall GetImmediateStart();
	virtual bool __fastcall GetIsHorizontalSizing();
	virtual System::Types::TRect __fastcall GetSizingItemBounds() = 0 ;
	virtual System::Types::TRect __fastcall GetSizingMarkBounds();
	virtual int __fastcall GetSizingMarkWidth() = 0 ;
	virtual System::Types::TRect __fastcall GetVertSizingMarkBounds();
	virtual void __fastcall DragAndDrop(const System::Types::TPoint &P, bool &Accepted);
	__property TcxGridTableController* Controller = {read=GetController};
	__property int CurrentSize = {read=GetCurrentSize, nodefault};
	__property int DeltaSize = {read=GetDeltaSize, nodefault};
	__property int DestPointX = {read=FDestPointX, write=SetDestPointX, nodefault};
	__property int DestPointY = {read=FDestPointY, write=SetDestPointY, nodefault};
	__property TcxGridTableView* GridView = {read=GetGridView};
	__property bool IsHorizontalSizing = {read=GetIsHorizontalSizing, nodefault};
	__property int OriginalSize = {read=FOriginalSize, write=FOriginalSize, nodefault};
	__property System::Types::TRect SizingItemBounds = {read=GetSizingItemBounds};
	__property System::Types::TRect SizingMarkBounds = {read=GetSizingMarkBounds};
	__property int SizingMarkWidth = {read=GetSizingMarkWidth, nodefault};
	__property TcxGridTableViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	virtual void __fastcall BeforeScrolling();
	virtual void __fastcall Init(const System::Types::TPoint &P, Cxgridcustomview::TcxCustomGridHitTest* AParams);
public:
	/* TcxDragAndDropObject.Create */ inline __fastcall virtual TcxCustomGridSizingObject(Cxcontrols::TcxControl* AControl) : Cxgridcustomview::TcxCustomGridDragAndDropObject(AControl) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomGridSizingObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridColumnSizingObject : public TcxCustomGridSizingObject
{
	typedef TcxCustomGridSizingObject inherited;
	
private:
	TcxGridColumn* FColumn;
	TcxGridColumnHeaderViewInfo* __fastcall GetColumnHeaderViewInfo();
	
protected:
	virtual System::Types::TRect __fastcall GetSizingItemBounds();
	virtual int __fastcall GetSizingMarkWidth();
	__property TcxGridColumn* Column = {read=FColumn, write=FColumn};
	__property TcxGridColumnHeaderViewInfo* ColumnHeaderViewInfo = {read=GetColumnHeaderViewInfo};
	
public:
	virtual void __fastcall Init(const System::Types::TPoint &P, Cxgridcustomview::TcxCustomGridHitTest* AParams);
public:
	/* TcxDragAndDropObject.Create */ inline __fastcall virtual TcxCustomGridColumnSizingObject(Cxcontrols::TcxControl* AControl) : TcxCustomGridSizingObject(AControl) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomGridColumnSizingObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridColumnHorzSizingObject : public TcxCustomGridColumnSizingObject
{
	typedef TcxCustomGridColumnSizingObject inherited;
	
protected:
	virtual void __fastcall BeginDragAndDrop();
	virtual void __fastcall EndDragAndDrop(bool Accepted);
	virtual int __fastcall GetCurrentSize();
public:
	/* TcxDragAndDropObject.Create */ inline __fastcall virtual TcxGridColumnHorzSizingObject(Cxcontrols::TcxControl* AControl) : TcxCustomGridColumnSizingObject(AControl) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridColumnHorzSizingObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridRowSizingObject : public TcxCustomGridSizingObject
{
	typedef TcxCustomGridSizingObject inherited;
	
private:
	TcxCustomGridRow* FRow;
	TcxCustomGridRowViewInfo* __fastcall GetRowViewInfo();
	
protected:
	virtual void __fastcall BeginDragAndDrop();
	virtual void __fastcall EndDragAndDrop(bool Accepted);
	virtual int __fastcall GetCurrentSize();
	virtual bool __fastcall GetIsHorizontalSizing();
	virtual System::Types::TRect __fastcall GetSizingItemBounds();
	virtual int __fastcall GetSizingMarkWidth();
	__property TcxCustomGridRow* Row = {read=FRow};
	__property TcxCustomGridRowViewInfo* RowViewInfo = {read=GetRowViewInfo};
	
public:
	virtual void __fastcall Init(const System::Types::TPoint &P, Cxgridcustomview::TcxCustomGridHitTest* AParams);
public:
	/* TcxDragAndDropObject.Create */ inline __fastcall virtual TcxGridRowSizingObject(Cxcontrols::TcxControl* AControl) : TcxCustomGridSizingObject(AControl) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridRowSizingObject() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxGridTableItemsListBox : public Cxgridcustomtableview::TcxCustomGridTableItemsListBox
{
	typedef Cxgridcustomtableview::TcxCustomGridTableItemsListBox inherited;
	
private:
	HIDESBASE TcxGridTableView* __fastcall GetGridView();
	System::Uitypes::TColor __fastcall GetTextColor();
	
protected:
	virtual int __fastcall CalculateItemHeight();
	virtual bool __fastcall DrawItemDrawBackgroundHandler(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds) = 0 ;
	virtual bool __fastcall GetItemEndEllipsis() = 0 ;
	virtual void __fastcall LookAndFeelChanged(Cxlookandfeels::TcxLookAndFeel* Sender, Cxlookandfeels::TcxLookAndFeelValues AChangedValues);
	void __fastcall UpdateBackgroundColor();
	__property TcxGridTableView* GridView = {read=GetGridView};
	__property System::Uitypes::TColor TextColor = {read=GetTextColor, nodefault};
	
public:
	__fastcall virtual TcxGridTableItemsListBox(System::Classes::TComponent* AOwner);
	virtual void __fastcall PaintItem(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, int AIndex, bool AFocused);
public:
	/* TcxCustomListBox.Destroy */ inline __fastcall virtual ~TcxGridTableItemsListBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxGridTableItemsListBox(HWND ParentWindow) : Cxgridcustomtableview::TcxCustomGridTableItemsListBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxGridTableColumnsListBox : public TcxGridTableItemsListBox
{
	typedef TcxGridTableItemsListBox inherited;
	
protected:
	virtual void __fastcall DoRefreshItems();
	virtual bool __fastcall DrawItemDrawBackgroundHandler(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds);
	virtual Cxgridcustomview::TcxCustomGridHitTest* __fastcall GetDragAndDropParams();
	virtual bool __fastcall GetItemEndEllipsis();
public:
	/* TcxGridTableItemsListBox.Create */ inline __fastcall virtual TcxGridTableColumnsListBox(System::Classes::TComponent* AOwner) : TcxGridTableItemsListBox(AOwner) { }
	
public:
	/* TcxCustomListBox.Destroy */ inline __fastcall virtual ~TcxGridTableColumnsListBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxGridTableColumnsListBox(HWND ParentWindow) : TcxGridTableItemsListBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxGridTableCustomizationForm : public Cxgridcustomtableview::TcxCustomGridTableCustomizationForm
{
	typedef Cxgridcustomtableview::TcxCustomGridTableCustomizationForm inherited;
	
private:
	TcxGridTableColumnsListBox* __fastcall GetColumnsListBox();
	Cxpc::TcxTabSheet* __fastcall GetColumnsPage();
	HIDESBASE TcxGridTableController* __fastcall GetController();
	HIDESBASE TcxGridTableView* __fastcall GetGridView();
	HIDESBASE TcxGridTableViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual Cxgridcustomtableview::TcxCustomGridTableItemsListBoxClass __fastcall GetItemsListBoxClass();
	virtual System::UnicodeString __fastcall GetItemsPageCaption();
	__property TcxGridTableColumnsListBox* ColumnsListBox = {read=GetColumnsListBox};
	__property TcxGridTableView* GridView = {read=GetGridView};
	__property TcxGridTableViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	__property TcxGridTableController* Controller = {read=GetController};
	__property Cxpc::TcxTabSheet* ColumnsPage = {read=GetColumnsPage};
public:
	/* TcxCustomGridCustomizationForm.Create */ inline __fastcall virtual TcxGridTableCustomizationForm(Cxgridcustomview::TcxCustomGridController* AController) : Cxgridcustomtableview::TcxCustomGridTableCustomizationForm(AController) { }
	/* TcxCustomGridCustomizationForm.Destroy */ inline __fastcall virtual ~TcxGridTableCustomizationForm() { }
	
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TcxGridTableCustomizationForm(System::Classes::TComponent* AOwner, int Dummy) : Cxgridcustomtableview::TcxCustomGridTableCustomizationForm(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxGridTableCustomizationForm(HWND ParentWindow) : Cxgridcustomtableview::TcxCustomGridTableCustomizationForm(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridDragOpenInfoMasterDataRowTab : public Cxgrid::TcxGridDragOpenInfoTab
{
	typedef Cxgrid::TcxGridDragOpenInfoTab inherited;
	
public:
	TcxGridMasterDataRow* GridRow;
	__fastcall virtual TcxGridDragOpenInfoMasterDataRowTab(Cxgridlevel::TcxGridLevel* ALevel, TcxGridMasterDataRow* AGridRow);
	virtual bool __fastcall Equals(Cxgridcommon::TcxCustomGridDragOpenInfo* AInfo);
	virtual void __fastcall Run();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridDragOpenInfoMasterDataRowTab() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxGridColumnsCustomizationPopup : public Cxgridcustomtableview::TcxCustomGridItemsCustomizationPopup
{
	typedef Cxgridcustomtableview::TcxCustomGridItemsCustomizationPopup inherited;
	
private:
	HIDESBASE TcxGridTableView* __fastcall GetGridView();
	
protected:
	virtual void __fastcall DoItemPosChanged(System::TObject* AItem);
	virtual void __fastcall SetItemIndex(System::TObject* AItem, int AIndex);
	
public:
	__property TcxGridTableView* GridView = {read=GetGridView};
public:
	/* TcxCustomGridCustomizationPopup.Create */ inline __fastcall virtual TcxGridColumnsCustomizationPopup(Cxgridcustomview::TcxCustomGridView* AGridView) : Cxgridcustomtableview::TcxCustomGridItemsCustomizationPopup(AGridView) { }
	/* TcxCustomGridCustomizationPopup.Destroy */ inline __fastcall virtual ~TcxGridColumnsCustomizationPopup() { }
	
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TcxGridColumnsCustomizationPopup(System::Classes::TComponent* AOwner, int Dummy) : Cxgridcustomtableview::TcxCustomGridItemsCustomizationPopup(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxGridColumnsCustomizationPopup(HWND ParentWindow) : Cxgridcustomtableview::TcxCustomGridItemsCustomizationPopup(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridTableFindPanel : public Cxgridcustomtableview::TcxGridFindPanel
{
	typedef Cxgridcustomtableview::TcxGridFindPanel inherited;
	
private:
	HIDESBASE TcxGridTableView* __fastcall GetGridView();
	
protected:
	virtual Cxfindpanel::TcxFindPanelLayout __fastcall GetActualLayout();
	
public:
	virtual void __fastcall DisplayModeChanged();
	__property TcxGridTableView* GridView = {read=GetGridView};
public:
	/* TcxGridFindPanel.Create */ inline __fastcall virtual TcxGridTableFindPanel(Cxgridcustomtableview::TcxCustomGridTableController* AController) : Cxgridcustomtableview::TcxGridFindPanel(AController) { }
	
public:
	/* TcxCustomFindPanel.Destroy */ inline __fastcall virtual ~TcxGridTableFindPanel() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxGridTableEditingController : public Cxgridcustomtableview::TcxGridEditingController
{
	typedef Cxgridcustomtableview::TcxGridEditingController inherited;
	
private:
	bool FApplyingImmediateFiltering;
	Cxclasses::TcxTimer* FDelayedFilteringTimer;
	bool FHasImmediateFilterValue;
	TcxGridTableController* __fastcall GetController();
	HIDESBASE TcxGridTableView* __fastcall GetGridView();
	
protected:
	void __fastcall ApplyFilterRowFiltering();
	virtual bool __fastcall CanInitEditing();
	virtual bool __fastcall CanUpdateEditValue();
	virtual void __fastcall DoEditChanged();
	virtual void __fastcall DoEditKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual bool __fastcall GetHideEditOnFocusedRecordChange();
	virtual void __fastcall InitEdit();
	virtual bool __fastcall IsNeedInvokeEditChangedEventsBeforePost();
	virtual bool __fastcall NeedCellViewInfoWhenUpdateEditValue();
	virtual void __fastcall PostEditingData();
	void __fastcall StartDelayedFiltering();
	void __fastcall OnDelayedFilteringTimer(System::TObject* Sender);
	__property bool ApplyingImmediateFiltering = {read=FApplyingImmediateFiltering, write=FApplyingImmediateFiltering, nodefault};
	__property bool HasImmediateFilterValue = {read=FHasImmediateFilterValue, write=FHasImmediateFilterValue, nodefault};
	
public:
	__fastcall virtual ~TcxGridTableEditingController();
	virtual void __fastcall HideEdit(bool Accept);
	__property TcxGridTableController* Controller = {read=GetController};
	__property TcxGridTableView* GridView = {read=GetGridView};
public:
	/* TcxGridEditingController.Create */ inline __fastcall virtual TcxGridTableEditingController(Cxgridcustomtableview::TcxCustomGridTableController* AController) : Cxgridcustomtableview::TcxGridEditingController(AController) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridTableCustomizationController : public Cxgridcustomview::TcxGridCustomizationController
{
	typedef Cxgridcustomview::TcxGridCustomizationController inherited;
	
private:
	HIDESBASE TcxGridTableViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall CheckFormBounds(System::Types::TRect &R);
	
public:
	__property TcxGridTableViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxGridViewHandler.Create */ inline __fastcall virtual TcxGridTableCustomizationController(Cxgridcustomview::TcxCustomGridView* AGridView) : Cxgridcustomview::TcxGridCustomizationController(AGridView) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxGridTableCustomizationController() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TcxGridFocusedItemKind : unsigned char { fikNone, fikGridItem, fikUpdateButton, fikCancelButton };

typedef int __fastcall (__closure *TcxGridGetNextItemFunc)(System::Classes::TList* AItems, int AFocusedIndex, bool AGoForward, bool AGoOnCycle, /* out */ bool &ACycleChanged);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridTableColumnScrollAnimationHelper : public Dxscrollanimation::TdxScrollAnimationHelper
{
	typedef Dxscrollanimation::TdxScrollAnimationHelper inherited;
	
private:
	TcxGridTableController* FOwner;
	
protected:
	virtual void __fastcall AfterAnimationEnded(bool AIsRaiseEvent);
	virtual void __fastcall BeforeAnimationStarted();
	virtual void __fastcall CheckPosition(int &AValue);
	virtual int __fastcall GetOwnerPosition();
	virtual void __fastcall PositionChanged();
	virtual void __fastcall UpdateOwnerPosition(int AValue);
	
public:
	__fastcall TcxGridTableColumnScrollAnimationHelper(TcxGridTableController* AOwner);
public:
	/* {dxScrollAnimation}TdxCustomScrollAnimationHelper<System_Integer>.Destroy */ inline __fastcall virtual ~TcxGridTableColumnScrollAnimationHelper() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxGridTableController : public Cxgridcustomtableview::TcxCustomGridTableController
{
	typedef Cxgridcustomtableview::TcxCustomGridTableController inherited;
	
private:
	TcxGridColumn* FCellSelectionAnchor;
	TcxGridTableColumnScrollAnimationHelper* FColumnScrollAnimationHelper;
	TcxGridDataRowFixingMenu* FDataRowFixingMenu;
	Cxfiltercontrol::TcxFilterDropDownMenu* FFilterRowOperatorMenu;
	TcxGridFocusedItemKind FFocusedItemKind;
	TcxGridColumn* FHorzSizingColumn;
	bool FIsFilterPopupOpenedFromHeader;
	bool FKeepFilterRowFocusing;
	int FLeftPos;
	TcxCustomGridRow* FPostponedAdjustableRow;
	TcxGridColumn* FPressedColumn;
	System::Classes::TList* FSelectedColumns;
	TcxGridColumnsCustomizationPopup* __fastcall GetColumnsCustomizationPopup();
	HIDESBASE TcxGridTableCustomizationForm* __fastcall GetCustomizationForm();
	TcxGridDataRowFixingMenu* __fastcall GetDataRowFixingMenu();
	TcxGridTableEditingController* __fastcall GetEditingController();
	Cxfiltercontrol::TcxFilterDropDownMenu* __fastcall GetFilterRowOperatorMenu();
	TcxGridTableFindPanel* __fastcall GetFindPanel();
	TcxGridColumn* __fastcall GetFocusedColumn();
	int __fastcall GetFocusedColumnIndex();
	TcxCustomGridRow* __fastcall GetFocusedRow();
	int __fastcall GetFocusedRowIndex();
	HIDESBASE TcxGridTableView* __fastcall GetGridView();
	TcxGridTableViewInplaceEditForm* __fastcall GetInplaceEditForm();
	bool __fastcall GetIsColumnHorzSizing();
	TcxGridTableRowLayoutController* __fastcall GetRowLayoutController();
	TcxGridColumn* __fastcall GetSelectedColumn(int Index);
	int __fastcall GetSelectedColumnCount();
	TcxCustomGridRow* __fastcall GetSelectedRow(int Index);
	int __fastcall GetSelectedRowCount();
	int __fastcall GetTopRowIndex();
	HIDESBASE TcxGridViewData* __fastcall GetViewData();
	HIDESBASE TcxGridTableViewInfo* __fastcall GetViewInfo();
	void __fastcall SetFocusedColumn(TcxGridColumn* Value);
	void __fastcall SetFocusedColumnIndex(int Value);
	void __fastcall SetFocusedRow(TcxCustomGridRow* Value);
	void __fastcall SetFocusedRowIndex(int Value);
	void __fastcall SetFocusedItemKind(TcxGridFocusedItemKind AValue);
	void __fastcall SetLeftPos(int Value);
	void __fastcall SetPressedColumn(TcxGridColumn* Value);
	void __fastcall SetTopRowIndex(int Value);
	void __fastcall AddSelectedColumn(TcxGridColumn* AColumn);
	void __fastcall DoSetLeftPos(int AValue);
	void __fastcall MakeMasterRecordVisible(Cxgridcustomtableview::TcxCustomGridRecord* ARecord);
	void __fastcall RemoveSelectedColumn(TcxGridColumn* AColumn);
	
protected:
	virtual void __fastcall AdjustOffsetForFixedGroupMode(TcxCustomGridRow* ARow);
	virtual void __fastcall AdjustRowVisibility(TcxCustomGridRow* ARow);
	virtual bool __fastcall CanAppend(bool ACheckOptions);
	virtual bool __fastcall CanDataPost();
	virtual bool __fastcall CanDelete(bool ACheckOptions);
	virtual bool __fastcall CanEdit();
	virtual bool __fastcall CanInsert(bool ACheckOptions);
	bool __fastcall CanMakeItemVisible(TcxCustomGridColumn* AItem);
	virtual bool __fastcall CanRowLayoutSmartCellNavigate();
	virtual bool __fastcall CanUseAutoHeightEditing();
	virtual bool __fastcall CheckBrowseModeOnRecordChanging(int ANewRecordIndex);
	virtual void __fastcall CheckCoordinates();
	void __fastcall CheckLeftPos(int &Value);
	virtual void __fastcall CheckInternalTopRecordIndex(int &AIndex);
	virtual Cxgridcustomtableview::TcxGridFindPanel* __fastcall CreateFindPanel();
	virtual void __fastcall DoMakeRecordVisible(Cxgridcustomtableview::TcxCustomGridRecord* ARecord);
	virtual void __fastcall FocusedItemChanged(Cxgridcustomtableview::TcxCustomGridTableItem* APrevFocusedItem);
	virtual void __fastcall FocusedRecordChanged(int APrevFocusedRecordIndex, int AFocusedRecordIndex, int APrevFocusedDataRecordIndex, int AFocusedDataRecordIndex, bool ANewItemRecordFocusingChanged);
	virtual int __fastcall GetActuallyFocusedItemIndex();
	virtual bool __fastcall GetDesignHitTest(Cxgridcustomview::TcxCustomGridHitTest* AHitTest);
	virtual int __fastcall GetDlgCode();
	virtual Cxfilter::TcxFilterOperatorKinds __fastcall GetFilterRowSupportedOperators();
	virtual Cxgridcustomtableview::TcxCustomGridRecord* __fastcall GetFocusedRecord();
	virtual int __fastcall GetGroupIndexByFocusedRowIndex();
	virtual int __fastcall GetGroupIndexByRowIndex(int AIndex);
	virtual bool __fastcall GetIsRecordsScrollHorizontal();
	virtual Cxgridcustomtableview::TcxCustomGridItemsCustomizationPopupClass __fastcall GetItemsCustomizationPopupClass();
	virtual int __fastcall GetLastVisibleRecordIndex();
	virtual int __fastcall GetMaxTopRecordIndexValue();
	virtual int __fastcall GetScrollBarRecordCount();
	virtual int __fastcall GetTopRecordIndex();
	virtual bool __fastcall HasDataRowFixingMenu();
	virtual bool __fastcall HasFilterRowOperatorMenu();
	virtual bool __fastcall IsColumnFixedDuringHorzSizing(TcxGridColumn* AColumn);
	virtual bool __fastcall IsFirstPageRecordFocused();
	virtual bool __fastcall IsKeyForMultiSelect(System::Word AKey, System::Classes::TShiftState AShift, bool AFocusedRecordChanged);
	virtual bool __fastcall IsPixelScrollBar(Vcl::Forms::TScrollBarKind AKind);
	virtual bool __fastcall IsScrollAnimationActive();
	virtual void __fastcall LeftPosChanged();
	virtual bool __fastcall NeedsAdditionalRowsScrolling(bool AIsCallFromMaster = false);
	virtual void __fastcall RemoveFocus();
	virtual void __fastcall ScrollAnimationEnded();
	virtual void __fastcall ScrollData(Cxclasses::TcxDirection ADirection);
	virtual void __fastcall SetFocusedRecord(Cxgridcustomtableview::TcxCustomGridRecord* Value);
	virtual void __fastcall ShowDataRowFixingMenu(TcxGridDataRow* ADataRow, const System::Types::TRect &AForBounds);
	virtual void __fastcall ShowNextPage();
	virtual void __fastcall ShowPrevPage();
	virtual void __fastcall StopScrollAnimation();
	virtual bool __fastcall WantSpecialKey(System::Word AKey);
	virtual void __fastcall CreateGridViewItem(System::TObject* Sender);
	virtual void __fastcall DeleteGridViewItem(System::Classes::TPersistent* AItem);
	virtual void __fastcall DeleteGridViewItems(System::TObject* Sender);
	virtual void __fastcall PopulateColumnHeaderDesignPopupMenu(Vcl::Menus::TPopupMenu* AMenu);
	virtual void __fastcall DoScroll(Vcl::Forms::TScrollBarKind AScrollBarKind, System::Uitypes::TScrollCode AScrollCode, int &AScrollPos);
	virtual int __fastcall GetFirstScrollRecordIndex();
	virtual int __fastcall GetLastScrollRecordIndex();
	void __fastcall SetLeftPosition(int AValue, bool AAnimated);
	virtual bool __fastcall CanScrollData(Cxclasses::TcxDirection ADirection);
	virtual bool __fastcall CanPostponeRecordSelection(System::Classes::TShiftState AShift);
	virtual bool __fastcall CanProcessMultiSelect(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, System::Classes::TShiftState AShift)/* overload */;
	virtual void __fastcall DoMouseNormalSelection(Cxgridcustomview::TcxCustomGridHitTest* AHitTest);
	virtual void __fastcall DoMouseRangeSelection(bool AClearSelection = true, System::TObject* AData = (System::TObject*)(0x0));
	virtual void __fastcall DoNormalSelection();
	virtual void __fastcall MultiSelectKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual bool __fastcall SupportsAdditiveSelection();
	virtual bool __fastcall SupportsRecordSelectionToggling();
	bool __fastcall CanCloseInplaceEditForm();
	void __fastcall CheckFocusedItem(TcxGridTableViewInplaceEditFormDataCellViewInfo* AItemViewInfo);
	bool __fastcall CloseInplaceEditFormOnRecordInserting();
	bool __fastcall FocusNextEditFormItem(bool AGoForward)/* overload */;
	bool __fastcall FocusNextEditFormItem(int AFocusedItemIndex, bool AGoForward)/* overload */;
	bool __fastcall FocusNextRowLayoutItem(int AFocusedItemIndex, bool AGoForward, bool AGoOnCycle, /* out */ bool &ACycleChanged);
	int __fastcall GetNextEditFormItemIndexFunc(System::Classes::TList* AItems, int AFocusedIndex, bool AGoForward, bool AGoOnCycle, /* out */ bool &ACycleChanged);
	TcxGridFocusedItemKind __fastcall GetNextInplaceButton();
	int __fastcall GetNextRowLayoutItemIndexFunc(System::Classes::TList* AItems, int AFocusedIndex, bool AGoForward, bool AGoOnCycle, /* out */ bool &ACycleChanged);
	int __fastcall GetNextLayoutItemIndex(Cxgridviewlayoutcontainer::TcxGridLayoutContainerViewInfo* AContainerViewInfo, int AFocusedIndex, bool AGoForward, bool AGoOnCycle, TcxGridGetNextItemFunc AFunc, /* out */ bool &ACycleChanged);
	bool __fastcall RowLayoutSmartCellNavigate(TcxCustomGridColumn* AFocusedItem, Cxlookandfeelpainters::TcxNeighbor ADirection, bool AStartNewCycle);
	virtual bool __fastcall DefocusSpecialRow();
	virtual bool __fastcall FocusSpecialRow();
	virtual void __fastcall FilterRowFocusChanged();
	virtual void __fastcall FilterRowFocusChanging(bool AValue);
	virtual void __fastcall DoPullFocusingScrolling(Cxclasses::TcxDirection ADirection);
	virtual bool __fastcall GetPullFocusingScrollingDirection(int X, int Y, /* out */ Cxclasses::TcxDirection &ADirection);
	virtual bool __fastcall SupportsPullFocusing();
	virtual Cxgridcommon::TcxCustomGridDragOpenInfo* __fastcall GetDragOpenInfo(Cxgridcustomview::TcxCustomGridHitTest* AHitTest);
	virtual Cxclasses::TcxDirection __fastcall GetDragScrollDirection(int X, int Y);
	virtual Cxgridcustomview::TcxCustomGridCustomizationController* __fastcall CreateCustomizationController();
	virtual TcxGridColumnHeaderMovingObjectClass __fastcall GetColumnHeaderDragAndDropObjectClass();
	virtual Cxgridcustomview::TcxCustomGridCustomizationFormClass __fastcall GetCustomizationFormClass();
	virtual bool __fastcall CanNormalSelectionOnMouse();
	virtual bool __fastcall CanProcessCellMultiSelect(TcxGridColumn* APrevFocusedColumn);
	virtual void __fastcall CellMultiSelectKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall DoNormalCellSelection();
	void __fastcall DoRangeCellSelection();
	virtual bool __fastcall GetCellMultiSelect();
	__property bool CellMultiSelect = {read=GetCellMultiSelect, nodefault};
	void __fastcall AddBeginsWithMask(System::Variant &AValue);
	void __fastcall RemoveBeginsWithMask(System::Variant &AValue);
	int __fastcall GetBeginsWithMaskPos(const System::UnicodeString AValue);
	virtual Cxgridcustomtableview::TcxGridEditingControllerClass __fastcall GetEditingControllerClass();
	__property TcxGridDataRowFixingMenu* DataRowFixingMenu = {read=GetDataRowFixingMenu};
	__property Cxfiltercontrol::TcxFilterDropDownMenu* FilterRowOperatorMenu = {read=GetFilterRowOperatorMenu};
	__property TcxGridTableFindPanel* FindPanel = {read=GetFindPanel};
	__property TcxGridFocusedItemKind FocusedItemKind = {read=FFocusedItemKind, write=SetFocusedItemKind, nodefault};
	__property TcxGridTableViewInplaceEditForm* InplaceEditForm = {read=GetInplaceEditForm};
	__property bool IsFilterPopupOpenedFromHeader = {read=FIsFilterPopupOpenedFromHeader, write=FIsFilterPopupOpenedFromHeader, nodefault};
	__property bool KeepFilterRowFocusing = {read=FKeepFilterRowFocusing, write=FKeepFilterRowFocusing, nodefault};
	__property TcxGridTableRowLayoutController* RowLayoutController = {read=GetRowLayoutController};
	__property TcxGridViewData* ViewData = {read=GetViewData};
	__property TcxGridTableViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	__fastcall virtual TcxGridTableController(Cxgridcustomview::TcxCustomGridView* AGridView);
	__fastcall virtual ~TcxGridTableController();
	bool __fastcall CanShowGroupFooter(int ALevel);
	virtual void __fastcall CreateNewRecord(bool AtEnd);
	virtual void __fastcall CheckScrolling(const System::Types::TPoint &P);
	void __fastcall ClearGrouping();
	virtual void __fastcall ClearSelection();
	virtual void __fastcall DoCancelMode();
	virtual bool __fastcall FocusFirstAvailableItem();
	virtual bool __fastcall FocusNextCell(bool AGoForward, bool AProcessCellsOnly = true, bool AAllowCellsCycle = true, bool AFollowVisualOrder = true, bool ANeedNormalizeSelection = false);
	virtual bool __fastcall FocusNextItem(int AFocusedItemIndex, bool AGoForward, bool AGoOnCycle, bool AGoToNextRecordOnCycle, bool AFollowVisualOrder, bool ANeedNormalizeSelection = false);
	bool __fastcall IsFilterRowFocused();
	virtual bool __fastcall IsFilterRowOperatorSupported(int AItemIndex, Cxfilter::TcxFilterOperatorKind AOperator);
	bool __fastcall IsNewItemRowFocused();
	virtual bool __fastcall IsSpecialRowFocused();
	virtual void __fastcall MakeItemVisible(Cxgridcustomtableview::TcxCustomGridTableItem* AItem);
	virtual void __fastcall SelectAll();
	void __fastcall ShowEditFormCustomizationDialog();
	void __fastcall ShowRowLayoutCustomizationDialog();
	virtual void __fastcall InitScrollBarsParameters();
	virtual bool __fastcall IsDataFullyVisible(bool AIsCallFromMaster = false);
	virtual void __fastcall EndDragAndDrop(bool Accepted);
	virtual void __fastcall DoKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall ClearCellSelection();
	void __fastcall SelectAllColumns();
	void __fastcall SelectCells(TcxGridColumn* AFromColumn, TcxGridColumn* AToColumn, int AFromRowIndex, int AToRowIndex);
	void __fastcall SelectColumns(TcxGridColumn* AFromColumn, TcxGridColumn* AToColumn);
	__property TcxGridColumn* CellSelectionAnchor = {read=FCellSelectionAnchor, write=FCellSelectionAnchor};
	__property TcxGridColumnsCustomizationPopup* ColumnsCustomizationPopup = {read=GetColumnsCustomizationPopup};
	__property TcxGridTableCustomizationForm* CustomizationForm = {read=GetCustomizationForm};
	__property TcxGridTableEditingController* EditingController = {read=GetEditingController};
	__property TcxGridColumn* FocusedColumn = {read=GetFocusedColumn, write=SetFocusedColumn};
	__property int FocusedColumnIndex = {read=GetFocusedColumnIndex, write=SetFocusedColumnIndex, nodefault};
	__property TcxCustomGridRow* FocusedRow = {read=GetFocusedRow, write=SetFocusedRow};
	__property int FocusedRowIndex = {read=GetFocusedRowIndex, write=SetFocusedRowIndex, nodefault};
	__property TcxGridTableView* GridView = {read=GetGridView};
	__property TcxGridColumn* HorzSizingColumn = {read=FHorzSizingColumn};
	__property bool IsColumnHorzSizing = {read=GetIsColumnHorzSizing, nodefault};
	__property int LeftPos = {read=FLeftPos, write=SetLeftPos, nodefault};
	__property TcxGridColumn* PressedColumn = {read=FPressedColumn, write=SetPressedColumn};
	__property int SelectedColumnCount = {read=GetSelectedColumnCount, nodefault};
	__property TcxGridColumn* SelectedColumns[int Index] = {read=GetSelectedColumn};
	__property int SelectedRowCount = {read=GetSelectedRowCount, nodefault};
	__property TcxCustomGridRow* SelectedRows[int Index] = {read=GetSelectedRow};
	__property int TopRowIndex = {read=GetTopRowIndex, write=SetTopRowIndex, nodefault};
	/* Hoisted overloads: */
	
protected:
	inline bool __fastcall  CanProcessMultiSelect(bool AIsKeyboard){ return Cxgridcustomtableview::TcxCustomGridTableController::CanProcessMultiSelect(AIsKeyboard); }
	inline bool __fastcall  CanProcessMultiSelect(System::Word AKey, System::Classes::TShiftState AShift, bool AFocusedRecordChanged){ return Cxgridcustomtableview::TcxCustomGridTableController::CanProcessMultiSelect(AKey, AShift, AFocusedRecordChanged); }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridColumnContainerPainter : public Cxgridcustomtableview::TcxCustomGridPartPainter
{
	typedef Cxgridcustomtableview::TcxCustomGridPartPainter inherited;
	
private:
	TcxGridColumnContainerViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DrawContent();
	virtual void __fastcall DrawItems();
	virtual bool __fastcall DrawItemsFirst();
	virtual bool __fastcall ExcludeFromClipRect();
	__property TcxGridColumnContainerViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridColumnContainerPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : Cxgridcustomtableview::TcxCustomGridPartPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridColumnContainerPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridColumnHeaderAreaPainter : public Cxgridcustomview::TcxCustomGridCellPainter
{
	typedef Cxgridcustomview::TcxCustomGridCellPainter inherited;
	
private:
	TcxGridColumnHeaderAreaViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual bool __fastcall ExcludeFromClipRect();
	__property TcxGridColumnHeaderAreaViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridColumnHeaderAreaPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : Cxgridcustomview::TcxCustomGridCellPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridColumnHeaderAreaPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridColumnHeaderSortingMarkPainter : public TcxGridColumnHeaderAreaPainter
{
	typedef TcxGridColumnHeaderAreaPainter inherited;
	
protected:
	virtual void __fastcall Paint();
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridColumnHeaderSortingMarkPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : TcxGridColumnHeaderAreaPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridColumnHeaderSortingMarkPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridColumnHeaderFilterButtonPainter : public TcxGridColumnHeaderAreaPainter
{
	typedef TcxGridColumnHeaderAreaPainter inherited;
	
private:
	Cxlookandfeelpainters::TcxFilterSmartTagState __fastcall GetSmartTagState();
	HIDESBASE TcxGridColumnHeaderFilterButtonViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall Paint();
	__property Cxlookandfeelpainters::TcxFilterSmartTagState SmartTagState = {read=GetSmartTagState, nodefault};
	__property TcxGridColumnHeaderFilterButtonViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridColumnHeaderFilterButtonPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : TcxGridColumnHeaderAreaPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridColumnHeaderFilterButtonPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridColumnHeaderGlyphPainter : public TcxGridColumnHeaderAreaPainter
{
	typedef TcxGridColumnHeaderAreaPainter inherited;
	
private:
	HIDESBASE TcxGridColumnHeaderGlyphViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall Paint();
	__property TcxGridColumnHeaderGlyphViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridColumnHeaderGlyphPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : TcxGridColumnHeaderAreaPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridColumnHeaderGlyphPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridColumnHeaderCheckBoxPainter : public TcxGridColumnHeaderAreaPainter
{
	typedef TcxGridColumnHeaderAreaPainter inherited;
	
private:
	HIDESBASE TcxGridColumnHeaderCheckBoxAreaViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall Paint();
	__property TcxGridColumnHeaderCheckBoxAreaViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridColumnHeaderCheckBoxPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : TcxGridColumnHeaderAreaPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridColumnHeaderCheckBoxPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridColumnHeaderPainter : public Cxgridcustomview::TcxCustomGridCellPainter
{
	typedef Cxgridcustomview::TcxCustomGridCellPainter inherited;
	
private:
	TcxGridColumnHeaderViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall BeforePaint();
	virtual void __fastcall DrawAreas();
	virtual void __fastcall DrawBorders();
	virtual void __fastcall DrawContent();
	virtual void __fastcall DrawFixedHighlight();
	virtual void __fastcall DrawPressed();
	virtual bool __fastcall ExcludeFromClipRect();
	virtual void __fastcall Paint();
	__property TcxGridColumnHeaderViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridColumnHeaderPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : Cxgridcustomview::TcxCustomGridCellPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridColumnHeaderPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridHeaderPainter : public TcxGridColumnContainerPainter
{
	typedef TcxGridColumnContainerPainter inherited;
	
private:
	HIDESBASE TcxGridHeaderViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DrawItems();
	virtual void __fastcall DrawItemsByFixedKind(TcxGridColumnFixedKind AKind);
	virtual bool __fastcall DrawItemsFirst();
	__property TcxGridHeaderViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridHeaderPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : TcxGridColumnContainerPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridHeaderPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridGroupByBoxSearchButtonPainter : public Cxgridcustomview::TcxCustomGridCellPainter
{
	typedef Cxgridcustomview::TcxCustomGridCellPainter inherited;
	
private:
	TcxGridGroupByBoxSearchButtonViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DrawContent();
	__property TcxGridGroupByBoxSearchButtonViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridGroupByBoxSearchButtonPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : Cxgridcustomview::TcxCustomGridCellPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridGroupByBoxSearchButtonPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridGroupByBoxPainter : public TcxGridColumnContainerPainter
{
	typedef TcxGridColumnContainerPainter inherited;
	
private:
	HIDESBASE TcxGridGroupByBoxViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DrawBackground(const System::Types::TRect &R)/* overload */;
	void __fastcall DrawConnectors();
	virtual void __fastcall DrawContent();
	virtual bool __fastcall DrawItemsFirst();
	__property TcxGridGroupByBoxViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridGroupByBoxPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : TcxGridColumnContainerPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridGroupByBoxPainter() { }
	
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  DrawBackground(){ Cxgridcustomview::TcxCustomGridCellPainter::DrawBackground(); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFooterCellPainter : public TcxGridColumnHeaderPainter
{
	typedef TcxGridColumnHeaderPainter inherited;
	
protected:
	virtual void __fastcall DrawBorders();
	virtual void __fastcall DrawContent();
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridFooterCellPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : TcxGridColumnHeaderPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridFooterCellPainter() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridFooterPainterClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFooterPainter : public TcxGridHeaderPainter
{
	typedef TcxGridHeaderPainter inherited;
	
private:
	Cxgraphics::TcxRegion* FLeftFixedRegion;
	Cxgraphics::TcxRegion* FRightFixedRegion;
	HIDESBASE TcxGridFooterViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DrawBackground(const System::Types::TRect &R)/* overload */;
	virtual void __fastcall DrawBorders();
	virtual void __fastcall DrawItems();
	virtual void __fastcall DrawItemsByFixedKind(TcxGridColumnFixedKind AKind);
	virtual bool __fastcall DrawItemsFirst();
	virtual void __fastcall DrawSeparator();
	virtual void __fastcall ExcludeLeftFixedRegion();
	virtual void __fastcall ExcludeRightFixedRegion();
	__property TcxGridFooterViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	__fastcall virtual ~TcxGridFooterPainter();
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridFooterPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : TcxGridHeaderPainter(ACanvas, AViewInfo) { }
	
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  DrawBackground(){ Cxgridcustomview::TcxCustomGridCellPainter::DrawBackground(); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridIndicatorItemPainter : public Cxgridcustomview::TcxCustomGridCellPainter
{
	typedef Cxgridcustomview::TcxCustomGridCellPainter inherited;
	
private:
	TcxCustomGridIndicatorItemViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual bool __fastcall ExcludeFromClipRect();
	virtual void __fastcall Paint();
	__property TcxCustomGridIndicatorItemViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxCustomGridIndicatorItemPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : Cxgridcustomview::TcxCustomGridCellPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomGridIndicatorItemPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridIndicatorHeaderItemPainter : public TcxCustomGridIndicatorItemPainter
{
	typedef TcxCustomGridIndicatorItemPainter inherited;
	
private:
	HIDESBASE TcxGridIndicatorHeaderItemViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual bool __fastcall DrawBackgroundHandler(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds);
	virtual void __fastcall DrawContent();
	virtual void __fastcall DrawQuickCustomizationMark();
	__property TcxGridIndicatorHeaderItemViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridIndicatorHeaderItemPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : TcxCustomGridIndicatorItemPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridIndicatorHeaderItemPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridIndicatorRowItemPainter : public TcxCustomGridIndicatorItemPainter
{
	typedef TcxCustomGridIndicatorItemPainter inherited;
	
private:
	HIDESBASE TcxGridIndicatorRowItemViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DrawContent();
	__property TcxGridIndicatorRowItemViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridIndicatorRowItemPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : TcxCustomGridIndicatorItemPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridIndicatorRowItemPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridIndicatorFooterItemPainter : public TcxCustomGridIndicatorItemPainter
{
	typedef TcxCustomGridIndicatorItemPainter inherited;
	
private:
	HIDESBASE TcxGridIndicatorFooterItemViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DrawContent();
	virtual void __fastcall DrawBorders();
	__property TcxGridIndicatorFooterItemViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridIndicatorFooterItemPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : TcxCustomGridIndicatorItemPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridIndicatorFooterItemPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridIndicatorPainter : public Cxgridcustomview::TcxCustomGridCellPainter
{
	typedef Cxgridcustomview::TcxCustomGridCellPainter inherited;
	
private:
	TcxGridIndicatorViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DrawContent();
	virtual void __fastcall DrawItems();
	virtual bool __fastcall DrawItemsFirst();
	virtual bool __fastcall ExcludeFromClipRect();
	__property TcxGridIndicatorViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridIndicatorPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : Cxgridcustomview::TcxCustomGridCellPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridIndicatorPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridRowPainter : public Cxgridcustomtableview::TcxCustomGridRecordPainter
{
	typedef Cxgridcustomtableview::TcxCustomGridRecordPainter inherited;
	
private:
	HIDESBASE TcxCustomGridRowViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DrawFooters();
	virtual void __fastcall DrawIndent();
	virtual void __fastcall DrawIndentPart(int ALevel, const System::Types::TRect &ABounds);
	virtual void __fastcall DrawLastHorzGridLine();
	virtual void __fastcall DrawSeparator();
	virtual bool __fastcall NeedsPainting();
	virtual void __fastcall Paint();
	__property TcxCustomGridRowViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxCustomGridRowPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : Cxgridcustomtableview::TcxCustomGridRecordPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomGridRowPainter() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridFixedDataRowsPainterClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFixedDataRowsPainter : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Cxgraphics::TcxCanvas* FCanvas;
	TcxGridFixedDataRowsViewInfo* FViewInfo;
	
protected:
	virtual void __fastcall DrawBottomItems();
	virtual void __fastcall DrawTopItems();
	virtual void __fastcall Paint();
	__property Cxgraphics::TcxCanvas* Canvas = {read=FCanvas};
	__property TcxGridFixedDataRowsViewInfo* ViewInfo = {read=FViewInfo};
	
public:
	__fastcall virtual TcxGridFixedDataRowsPainter(Cxgraphics::TcxCanvas* ACanvas, TcxGridFixedDataRowsViewInfo* AViewInfo);
	void __fastcall MainPaint();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridFixedDataRowsPainter() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridRowsPainterClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridRowsPainter : public Cxgridcustomtableview::TcxCustomGridRecordsPainter
{
	typedef Cxgridcustomtableview::TcxCustomGridRecordsPainter inherited;
	
private:
	TcxGridRowsViewInfo* __fastcall GetViewInfo();
	
protected:
	__classmethod virtual void __fastcall DrawDataRowCellsByFixedKind(TcxCustomGridRowViewInfo* ARowViewInfo, TcxGridColumnFixedKind AKind);
	virtual void __fastcall Paint();
	__property TcxGridRowsViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	__classmethod virtual void __fastcall DrawDataRowCells(TcxCustomGridRowViewInfo* ARowViewInfo);
public:
	/* TcxCustomGridRecordsPainter.Create */ inline __fastcall virtual TcxGridRowsPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomtableview::TcxCustomGridRecordsViewInfo* AViewInfo) : Cxgridcustomtableview::TcxCustomGridRecordsPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridRowsPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridTablePainter : public Cxgridcustomtableview::TcxCustomGridTablePainter
{
	typedef Cxgridcustomtableview::TcxCustomGridTablePainter inherited;
	
private:
	System::Classes::TList* FGridLines;
	HIDESBASE TcxGridTableController* __fastcall GetController();
	HIDESBASE TcxGridTableView* __fastcall GetGridView();
	HIDESBASE TcxGridTableViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual bool __fastcall CanOffset(int AItemsOffset, int DX, int DY);
	void __fastcall ClearGridLines();
	virtual void __fastcall DrawFooter();
	virtual void __fastcall DrawGridLines();
	virtual void __fastcall DrawGroupByBox();
	virtual void __fastcall DrawHeader();
	virtual void __fastcall DrawIndicator();
	virtual void __fastcall DrawRecords();
	virtual void __fastcall Offset(int AItemsOffset)/* overload */;
	virtual void __fastcall Offset(int DX, int DY)/* overload */;
	virtual void __fastcall PaintContent();
	virtual void __fastcall RepaintOnOffset();
	
public:
	__fastcall virtual TcxGridTablePainter(Cxgridcustomview::TcxCustomGridView* AGridView);
	__fastcall virtual ~TcxGridTablePainter();
	void __fastcall AddGridLine(const System::Types::TRect &R);
	void __fastcall DrawFixedHighlight(const System::Types::TRect &ABounds);
	void __fastcall DrawFixedSeparator(const System::Types::TRect &ABounds);
	__property TcxGridTableController* Controller = {read=GetController};
	__property TcxGridTableView* GridView = {read=GetGridView};
	__property TcxGridTableViewInfo* ViewInfo = {read=GetViewInfo};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridHeaderCheckBoxViewInfo : public Cxgridcustomtableview::TcxGridCheckBoxViewInfo
{
	typedef Cxgridcustomtableview::TcxGridCheckBoxViewInfo inherited;
	
private:
	HIDESBASE TcxGridTableController* __fastcall GetController();
	
protected:
	virtual Cxlookandfeelpainters::TcxCheckBoxState __fastcall CalculateCheckBoxState();
	virtual void __fastcall Toggle();
	__property TcxGridTableController* Controller = {read=GetController};
public:
	/* TcxCustomGridViewCellViewInfo.Create */ inline __fastcall virtual TcxGridHeaderCheckBoxViewInfo(Cxgridcustomview::TcxCustomGridViewInfo* AGridViewInfo) : Cxgridcustomtableview::TcxGridCheckBoxViewInfo(AGridViewInfo) { }
	/* TcxCustomGridViewCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridHeaderCheckBoxViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridRowCheckBoxViewInfo : public Cxgridcustomtableview::TcxGridCheckBoxViewInfo
{
	typedef Cxgridcustomtableview::TcxGridCheckBoxViewInfo inherited;
	
private:
	TcxCustomGridRowViewInfo* FRowViewInfo;
	HIDESBASE TcxGridTableController* __fastcall GetController();
	HIDESBASE TcxGridTableView* __fastcall GetGridView();
	
protected:
	virtual Cxlookandfeelpainters::TcxCheckBoxState __fastcall CalculateCheckBoxState();
	virtual bool __fastcall GetIsVisibleForPainting();
	virtual void __fastcall Toggle();
	__property TcxGridTableController* Controller = {read=GetController};
	__property TcxCustomGridRowViewInfo* RowViewInfo = {read=FRowViewInfo};
	
public:
	__fastcall virtual TcxGridRowCheckBoxViewInfo(TcxCustomGridRowViewInfo* ARowViewInfo);
	__property TcxGridTableView* GridView = {read=GetGridView};
public:
	/* TcxCustomGridViewCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridRowCheckBoxViewInfo() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TcxGridTableFindPanelLocation : unsigned char { fplSeparatePanel, fplGroupByBox };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridTableFindPanelViewInfo : public Cxgridcustomtableview::TcxGridFindPanelViewInfo
{
	typedef Cxgridcustomtableview::TcxGridFindPanelViewInfo inherited;
	
private:
	TcxGridTableFindPanelLocation FLocation;
	int FWidthInGroupByBox;
	bool FWidthInGroupByBoxAssigned;
	HIDESBASE TcxGridTableView* __fastcall GetGridView();
	HIDESBASE TcxGridTableViewInfo* __fastcall GetGridViewInfo();
	int __fastcall GetWidthInGroupByBox();
	
protected:
	virtual System::Types::TRect __fastcall CalculateBounds();
	virtual int __fastcall CalculateWidth();
	virtual int __fastcall CalculateWidthInGroupByBox();
	virtual int __fastcall GetButtonsOffset();
	virtual int __fastcall GetFirstOffset();
	virtual bool __fastcall GetIsPart();
	virtual TcxGridTableFindPanelLocation __fastcall GetLocation();
	virtual bool __fastcall GetVisible();
	virtual bool __fastcall HasBackground();
	virtual bool __fastcall HasBorders();
	__property TcxGridTableFindPanelLocation Location = {read=FLocation, nodefault};
	__property int WidthInGroupByBox = {read=GetWidthInGroupByBox, nodefault};
	
public:
	__fastcall virtual TcxGridTableFindPanelViewInfo(Cxgridcustomtableview::TcxCustomGridTableViewInfo* AGridViewInfo);
	__property TcxGridTableView* GridView = {read=GetGridView};
	__property TcxGridTableViewInfo* GridViewInfo = {read=GetGridViewInfo};
public:
	/* TcxGridPartContainerViewInfo.Destroy */ inline __fastcall virtual ~TcxGridTableFindPanelViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridColumnContainerViewInfo : public Cxgridcustomtableview::TcxCustomGridPartViewInfo
{
	typedef Cxgridcustomtableview::TcxCustomGridPartViewInfo inherited;
	
public:
	TcxGridColumnHeaderViewInfo* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Generics::Collections::TDictionary__2<TcxCustomGridColumn*,TcxGridColumnHeaderViewInfo*>* FIndex;
	int FItemHeight;
	HIDESBASE TcxGridTableController* __fastcall GetController();
	int __fastcall GetCount();
	HIDESBASE TcxGridTableView* __fastcall GetGridView();
	HIDESBASE TcxGridTableViewInfo* __fastcall GetGridViewInfo();
	TcxGridColumnHeaderViewInfo* __fastcall GetInternalItem(int Index);
	TcxGridColumnHeaderViewInfo* __fastcall GetItem(int Index);
	int __fastcall GetItemHeight();
	
protected:
	System::Classes::TList* FItems;
	virtual TcxGridColumnHeaderViewInfo* __fastcall CreateItem(int AIndex);
	virtual void __fastcall CreateItems();
	virtual void __fastcall DestroyItems();
	virtual TcxGridColumn* __fastcall GetColumn(int Index) = 0 ;
	virtual int __fastcall GetColumnCount() = 0 ;
	virtual TcxGridColumnHeaderViewInfoClass __fastcall GetItemClass();
	virtual int __fastcall CalculateItemHeight();
	virtual TcxGridColumnHeaderViewInfo* __fastcall FindItem(TcxCustomGridColumn* AColumn);
	virtual bool __fastcall GetAutoHeight();
	virtual int __fastcall GetColumnAdditionalWidth(TcxGridColumn* AColumn);
	virtual int __fastcall GetColumnMinWidth(TcxGridColumn* AColumn);
	virtual int __fastcall GetColumnIndentWidth(TcxGridColumn* AColumn);
	virtual Cxlookandfeelpainters::TcxNeighbors __fastcall GetColumnNeighbors(TcxGridColumn* AColumn);
	virtual int __fastcall GetColumnWidth(TcxGridColumn* AColumn);
	virtual int __fastcall GetItemAdditionWidth(TcxGridColumnHeaderViewInfo* AItem);
	virtual System::Types::TRect __fastcall GetItemAreaBounds(TcxGridColumnHeaderViewInfo* AItem);
	virtual bool __fastcall GetItemMultiLinePainting(TcxGridColumnHeaderViewInfo* AItem);
	virtual System::Types::TRect __fastcall GetItemsAreaBounds();
	virtual Cxgridcustomview::TcxCustomGridHitTest* __fastcall GetItemsHitTest(const System::Types::TPoint &P);
	virtual int __fastcall GetKind() = 0 ;
	virtual Cxgridcustomview::TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	virtual Cxgridcustomtableview::TcxGridItemContainerZone* __fastcall GetZone(const System::Types::TPoint &P, const System::Types::TRect &ATrackingBounds, int AFirst, int ALast)/* overload */;
	virtual System::Types::TRect __fastcall GetZonesTrackingBounds();
	virtual void __fastcall InitHitTest(Cxgridcustomview::TcxCustomGridHitTest* AHitTest);
	virtual void __fastcall Offset(int DX, int DY);
	__property bool AutoHeight = {read=GetAutoHeight, nodefault};
	__property int ColumnCount = {read=GetColumnCount, nodefault};
	__property TcxGridColumn* Columns[int Index] = {read=GetColumn};
	__property TcxGridTableController* Controller = {read=GetController};
	__property System::Types::TRect ZonesTrackingBounds = {read=GetZonesTrackingBounds};
	
public:
	__fastcall virtual TcxGridColumnContainerViewInfo(Cxgridcustomtableview::TcxCustomGridTableViewInfo* AGridViewInfo);
	__fastcall virtual ~TcxGridColumnContainerViewInfo();
	virtual void __fastcall BeforeRecalculation();
	virtual Cxgridcustomview::TcxCustomGridHitTest* __fastcall GetHitTest(const System::Types::TPoint &P);
	virtual Cxgridcustomtableview::TcxGridItemContainerZone* __fastcall GetZone(const System::Types::TPoint &P)/* overload */;
	__property int Count = {read=GetCount, nodefault};
	__property TcxGridTableView* GridView = {read=GetGridView};
	__property TcxGridTableViewInfo* GridViewInfo = {read=GetGridViewInfo};
	__property TcxGridColumnHeaderViewInfo* InternalItems[int Index] = {read=GetInternalItem};
	__property int ItemHeight = {read=GetItemHeight, nodefault};
	__property TcxGridColumnHeaderViewInfo* Items[int Index] = {read=GetItem/*, default*/};
	__property System::Types::TRect ItemsAreaBounds = {read=GetItemsAreaBounds};
	__property int Kind = {read=GetKind, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridColumnHeaderAreaViewInfo : public Cxgridcustomview::TcxCustomGridViewCellViewInfo
{
	typedef Cxgridcustomview::TcxCustomGridViewCellViewInfo inherited;
	
private:
	TcxGridColumnHeaderViewInfo* FColumnHeaderViewInfo;
	TcxCustomGridColumn* __fastcall GetColumn();
	HIDESBASE TcxGridTableView* __fastcall GetGridView();
	TcxGridTableViewInfo* __fastcall GetGridViewInfo();
	
protected:
	virtual bool __fastcall CanShowContainerHint();
	virtual Cxclasses::TcxAlignmentVert __fastcall GetAlignmentVert();
	virtual Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	virtual int __fastcall GetHeight();
	virtual int __fastcall GetWidth();
	virtual bool __fastcall HasMouse(Cxgridcustomview::TcxCustomGridHitTest* AHitTest);
	virtual void __fastcall InitHitTest(Cxgridcustomview::TcxCustomGridHitTest* AHitTest);
	virtual bool __fastcall NeedsContainerHotTrack();
	virtual bool __fastcall OccupiesSpace();
	virtual bool __fastcall ResidesInContent();
	__property TcxCustomGridColumn* Column = {read=GetColumn};
	__property TcxGridTableView* GridView = {read=GetGridView};
	__property TcxGridTableViewInfo* GridViewInfo = {read=GetGridViewInfo};
	
public:
	__fastcall virtual TcxGridColumnHeaderAreaViewInfo(TcxGridColumnHeaderViewInfo* AColumnHeaderViewInfo);
	HIDESBASE virtual void __fastcall Calculate(const System::Types::TRect &ABounds, System::Types::TRect &ATextAreaBounds);
	__property System::Classes::TAlignment AlignmentHorz = {read=GetAlignmentHorz, nodefault};
	__property Cxclasses::TcxAlignmentVert AlignmentVert = {read=GetAlignmentVert, nodefault};
	__property TcxGridColumnHeaderViewInfo* ColumnHeaderViewInfo = {read=FColumnHeaderViewInfo};
	__property int Height = {read=GetHeight, nodefault};
	__property int Width = {read=GetWidth, nodefault};
public:
	/* TcxCustomGridViewCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridColumnHeaderAreaViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridColumnHeaderSortingMarkViewInfo : public TcxGridColumnHeaderAreaViewInfo
{
	typedef TcxGridColumnHeaderAreaViewInfo inherited;
	
private:
	Dxcore::TdxSortOrder __fastcall GetSortOrder();
	
protected:
	virtual int __fastcall CalculateHeight();
	virtual int __fastcall CalculateWidth();
	virtual bool __fastcall CanShowContainerHint();
	virtual System::Classes::TAlignment __fastcall GetAlignmentHorz();
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual Cxgridcustomview::TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	__property Dxcore::TdxSortOrder SortOrder = {read=GetSortOrder, nodefault};
public:
	/* TcxGridColumnHeaderAreaViewInfo.Create */ inline __fastcall virtual TcxGridColumnHeaderSortingMarkViewInfo(TcxGridColumnHeaderViewInfo* AColumnHeaderViewInfo) : TcxGridColumnHeaderAreaViewInfo(AColumnHeaderViewInfo) { }
	
public:
	/* TcxCustomGridViewCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridColumnHeaderSortingMarkViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridColumnHeaderHorzSizingEdgeViewInfo : public TcxGridColumnHeaderAreaViewInfo
{
	typedef TcxGridColumnHeaderAreaViewInfo inherited;
	
protected:
	virtual int __fastcall CalculateHeight();
	virtual int __fastcall CalculateWidth();
	virtual System::Classes::TAlignment __fastcall GetAlignmentHorz();
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual Cxgridcustomview::TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	virtual bool __fastcall OccupiesSpace();
	virtual bool __fastcall ResidesInContent();
	
public:
	virtual void __fastcall Calculate(const System::Types::TRect &ABounds, System::Types::TRect &ATextAreaBounds);
	virtual bool __fastcall MouseDown(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, System::Uitypes::TMouseButton AButton, System::Classes::TShiftState AShift);
public:
	/* TcxGridColumnHeaderAreaViewInfo.Create */ inline __fastcall virtual TcxGridColumnHeaderHorzSizingEdgeViewInfo(TcxGridColumnHeaderViewInfo* AColumnHeaderViewInfo) : TcxGridColumnHeaderAreaViewInfo(AColumnHeaderViewInfo) { }
	
public:
	/* TcxCustomGridViewCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridColumnHeaderHorzSizingEdgeViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridColumnHeaderFilterButtonViewInfo : public TcxGridColumnHeaderAreaViewInfo
{
	typedef TcxGridColumnHeaderAreaViewInfo inherited;
	
private:
	bool __fastcall GetActive();
	bool __fastcall GetActuallyVisible();
	Dxfilterpopupwindow::TdxFilterPopupWindow* __fastcall GetDropDownWindowValue();
	
protected:
	virtual System::Classes::TComponent* __fastcall GetFilterDropDownWindowLinkComponent();
	virtual Dxfilterpopupwindow::TdxFilterPopupWindowMode __fastcall GetFilterPopupMode();
	virtual System::TObject* __fastcall GetFilterDropDownWindowOptions();
	virtual int __fastcall CalculateHeight();
	virtual int __fastcall CalculateWidth();
	virtual void __fastcall DropDown();
	virtual bool __fastcall EmulateMouseMoveAfterCalculate();
	virtual System::Classes::TAlignment __fastcall GetAlignmentHorz();
	virtual Cxclasses::TcxAlignmentVert __fastcall GetAlignmentVert();
	virtual bool __fastcall GetAlwaysVisible();
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual bool __fastcall GetIsVisibleForPainting();
	virtual Cxgridcustomview::TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	virtual bool __fastcall GetVisible();
	virtual bool __fastcall NeedsContainerHotTrack();
	virtual bool __fastcall OccupiesSpace();
	virtual void __fastcall StateChanged(Cxgridcommon::TcxGridCellState APrevState);
	virtual bool __fastcall CloseDropDownWindowOnDestruction();
	virtual bool __fastcall DropDownWindowExists();
	virtual Dxuielementpopupwindow::TdxUIElementPopupWindow* __fastcall GetDropDownWindow();
	virtual Cxcontrols::TcxPopupAlignHorz __fastcall GetDropDownWindowDefaultAlignHorz();
	virtual System::Types::TRect __fastcall GetDropDownWindowOwnerBounds();
	virtual bool __fastcall IsDropDownWindowOwner();
	bool __fastcall IsSmartTag();
	__property Dxfilterpopupwindow::TdxFilterPopupWindow* DropDownWindow = {read=GetDropDownWindowValue};
	__property bool ActuallyVisible = {read=GetActuallyVisible, nodefault};
	__property bool AlwaysVisible = {read=GetAlwaysVisible, nodefault};
	
public:
	virtual bool __fastcall MouseMove(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, System::Classes::TShiftState AShift);
	__property bool Active = {read=GetActive, nodefault};
public:
	/* TcxGridColumnHeaderAreaViewInfo.Create */ inline __fastcall virtual TcxGridColumnHeaderFilterButtonViewInfo(TcxGridColumnHeaderViewInfo* AColumnHeaderViewInfo) : TcxGridColumnHeaderAreaViewInfo(AColumnHeaderViewInfo) { }
	
public:
	/* TcxCustomGridViewCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridColumnHeaderFilterButtonViewInfo() { }
	
private:
	void *__IdxFilterPopupWindowOwner;	// Dxfilterpopupwindow::IdxFilterPopupWindowOwner 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {973519A2-4DDB-4DF6-93E9-D23E89675977}
	operator Dxfilterpopupwindow::_di_IdxFilterPopupWindowOwner()
	{
		Dxfilterpopupwindow::_di_IdxFilterPopupWindowOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxfilterpopupwindow::IdxFilterPopupWindowOwner*(void) { return (Dxfilterpopupwindow::IdxFilterPopupWindowOwner*)&__IdxFilterPopupWindowOwner; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridColumnHeaderGlyphViewInfo : public TcxGridColumnHeaderAreaViewInfo
{
	typedef TcxGridColumnHeaderAreaViewInfo inherited;
	
private:
	bool FUseImages;
	Dxcoregraphics::_di_IdxColorPalette __fastcall GetColorPalette();
	Dxgdiplusclasses::TdxSmartGlyph* __fastcall GetGlyph();
	System::Uitypes::TImageIndex __fastcall GetImageIndex();
	Vcl::Imglist::TCustomImageList* __fastcall GetImages();
	
protected:
	virtual int __fastcall CalculateHeight();
	virtual int __fastcall CalculateWidth();
	virtual bool __fastcall CanShowContainerHint();
	virtual System::Classes::TAlignment __fastcall GetAlignmentHorz();
	virtual Cxclasses::TcxAlignmentVert __fastcall GetAlignmentVert();
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual Cxgridcustomview::TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	
public:
	__fastcall virtual TcxGridColumnHeaderGlyphViewInfo(TcxGridColumnHeaderViewInfo* AColumnHeaderViewInfo);
	__property Dxcoregraphics::_di_IdxColorPalette ColorPalette = {read=GetColorPalette};
	__property Dxgdiplusclasses::TdxSmartGlyph* Glyph = {read=GetGlyph};
	__property System::Uitypes::TImageIndex ImageIndex = {read=GetImageIndex, nodefault};
	__property Vcl::Imglist::TCustomImageList* Images = {read=GetImages};
public:
	/* TcxCustomGridViewCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridColumnHeaderGlyphViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridColumnHeaderCheckBoxAreaViewInfo : public TcxGridColumnHeaderAreaViewInfo
{
	typedef TcxGridColumnHeaderAreaViewInfo inherited;
	
private:
	TcxGridHeaderCheckBoxViewInfo* FCheckBox;
	
protected:
	virtual int __fastcall CalculateHeight();
	virtual int __fastcall CalculateWidth();
	virtual System::Types::TRect __fastcall GetCheckBoxRect();
	virtual System::Types::TRect __fastcall GetMargins();
	virtual Cxgridcustomview::TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	virtual void __fastcall Offset(int DX, int DY);
	__property TcxGridHeaderCheckBoxViewInfo* CheckBox = {read=FCheckBox};
	
public:
	__fastcall virtual TcxGridColumnHeaderCheckBoxAreaViewInfo(TcxGridColumnHeaderViewInfo* AColumnHeaderViewInfo);
	__fastcall virtual ~TcxGridColumnHeaderCheckBoxAreaViewInfo();
	virtual void __fastcall AfterRecalculation();
	virtual void __fastcall BeforeRecalculation();
	virtual void __fastcall Calculate(const System::Types::TRect &ABounds, System::Types::TRect &ATextAreaBounds);
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	virtual Cxgridcustomview::TcxCustomGridHitTest* __fastcall GetHitTest(const System::Types::TPoint &P);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridColumnHeaderViewInfo : public Cxgridcustomview::TcxCustomGridViewCellViewInfo
{
	typedef Cxgridcustomview::TcxCustomGridViewCellViewInfo inherited;
	
private:
	int FAdditionalHeightAtTop;
	int FAdditionalWidthAtLeft;
	System::Classes::TList* FAreaViewInfos;
	System::Types::TRect FCellBoundsForHint;
	TcxGridColumn* FColumn;
	TcxGridColumnContainerViewInfo* FContainer;
	bool FDrawPressed;
	Cxgeometry::TcxBorders FHiddenBorders;
	bool FIsDynamicFixed;
	bool FIsFilterActive;
	Cxlookandfeelpainters::TcxNeighbors FNeighbors;
	int FOriginalWidth;
	int FRealWidth;
	bool FSortByGroupSummary;
	System::Types::TRect FTextAreaBounds;
	int FWidth;
	int __fastcall GetAreaViewInfoCount();
	TcxGridColumnHeaderAreaViewInfo* __fastcall GetAreaViewInfo(int Index);
	TcxGridColumnFixedKind __fastcall GetFixedKind();
	HIDESBASE TcxGridTableView* __fastcall GetGridView();
	TcxGridTableViewInfo* __fastcall GetGridViewInfo();
	bool __fastcall GetHasTextOffsetLeft();
	bool __fastcall GetHasTextOffsetRight();
	int __fastcall GetIndex();
	bool __fastcall GetIsFixedByWidth();
	int __fastcall GetOriginalWidth();
	int __fastcall GetRealWidth();
	void __fastcall EnumAreaViewInfoClasses(System::TClass AClass);
	void __fastcall CreateAreaViewInfos();
	void __fastcall DestroyAreaViewInfos();
	
protected:
	bool __fastcall AreasNeedHotTrack();
	virtual void __fastcall CalculateCellBoundsForHint();
	virtual bool __fastcall CalculateHasTextOffset(System::Classes::TAlignment ASide);
	virtual int __fastcall CalculateHeight();
	int __fastcall CalculateOriginalWidth(int Value);
	int __fastcall CalculateRealWidth(int Value);
	virtual void __fastcall CalculateTextAreaBounds();
	virtual void __fastcall CalculateVisible(int ALeftBound, int AWidth);
	virtual int __fastcall CalculateWidth();
	virtual bool __fastcall CanFilter();
	virtual bool __fastcall CanHorzSize();
	virtual bool __fastcall CanPress();
	virtual bool __fastcall CanShowHint();
	virtual bool __fastcall CanSort();
	virtual void __fastcall CheckWidth(int &Value);
	virtual bool __fastcall CaptureMouseOnPress();
	virtual bool __fastcall CustomDraw(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DoCalculateParams();
	virtual bool __fastcall EmulateMouseMoveAfterCalculate();
	virtual TcxGridColumnHeaderAreaViewInfo* __fastcall FindArea(TcxGridColumnHeaderAreaViewInfoClass AAreaClass);
	virtual void __fastcall FixDynamically();
	virtual Cxgridcommon::TcxGridCellState __fastcall GetActualState();
	virtual int __fastcall GetAdditionalWidth();
	virtual System::Classes::TAlignment __fastcall GetAlignmentHorz();
	virtual Cxclasses::TcxAlignmentVert __fastcall GetAlignmentVert();
	virtual System::Types::TRect __fastcall GetAreaBounds();
	virtual void __fastcall GetAreaViewInfoClasses(Cxgridcommon::TcxGridClassEnumeratorProc AProc);
	virtual bool __fastcall GetAutoWidthSizable();
	virtual Vcl::Graphics::TBitmap* __fastcall GetBackgroundBitmap();
	virtual Cxgeometry::TcxBorders __fastcall GetBorders();
	virtual int __fastcall GetBorderWidth(Cxgeometry::TcxBorder AIndex);
	virtual Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	virtual System::UnicodeString __fastcall GetCaption();
	__classmethod virtual int __fastcall GetCellBorderWidth(Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* ALookAndFeelPainter);
	__classmethod virtual int __fastcall GetCellHeight(int ATextHeight, Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* ALookAndFeelPainter, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual int __fastcall GetCheckBoxAreaWidth();
	virtual System::Types::TRect __fastcall GetContentIndents();
	virtual int __fastcall GetDataOffset();
	virtual int __fastcall GetHeight();
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual bool __fastcall GetHotTrack();
	virtual bool __fastcall GetIsDesignSelected();
	virtual bool __fastcall GetIsPressed();
	virtual int __fastcall GetMaxWidth();
	virtual int __fastcall GetMinWidth();
	virtual bool __fastcall GetMultiLine();
	virtual bool __fastcall GetMultiLinePainting();
	virtual Cxgridcustomview::TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	virtual System::Types::TRect __fastcall GetRealBounds();
	virtual System::Types::TRect __fastcall GetRealTextAreaBounds();
	virtual bool __fastcall GetShowEndEllipsis();
	virtual System::UnicodeString __fastcall GetText();
	virtual System::Types::TRect __fastcall GetTextAreaBounds();
	virtual int __fastcall GetTextHeightWithOffset();
	virtual int __fastcall GetTextWidthWithOffset();
	virtual void __fastcall GetViewParams(Cxgraphics::TcxViewParams &AParams);
	virtual int __fastcall GetWidth();
	virtual bool __fastcall HasCheckBox();
	virtual bool __fastcall HasCustomDraw();
	virtual bool __fastcall HasFixedContentSpace();
	virtual bool __fastcall HasGlyph();
	bool __fastcall HasHeaderAsContainer();
	virtual bool __fastcall HasDataCellCheckBoxAdditionalWidth();
	virtual bool __fastcall HasDataCellPinAdditionalWidth();
	virtual void __fastcall InitHitTest(Cxgridcustomview::TcxCustomGridHitTest* AHitTest);
	virtual bool __fastcall NeedFixedHighlight();
	virtual bool __fastcall DesignMouseDown(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, System::Uitypes::TMouseButton AButton, System::Classes::TShiftState AShift);
	virtual bool __fastcall HasDesignPopupMenu();
	virtual void __fastcall PopulateDesignPopupMenu(Vcl::Menus::TPopupMenu* AMenu);
	virtual System::Types::TRect __fastcall GetCellBoundsForHint();
	virtual System::UnicodeString __fastcall GetHintText();
	virtual System::Types::TRect __fastcall GetHintTextRect(const System::Types::TPoint &AMousePos);
	virtual bool __fastcall HasCustomHint();
	virtual bool __fastcall IsHintForText();
	virtual bool __fastcall IsHintMultiLine();
	virtual void __fastcall Offset(int DX, int DY);
	virtual void __fastcall SetWidth(int Value);
	virtual void __fastcall StateChanged(Cxgridcommon::TcxGridCellState APrevState);
	__property System::UnicodeString Caption = {read=GetCaption};
	__property TcxGridColumnFixedKind FixedKind = {read=GetFixedKind, nodefault};
	__property TcxGridTableView* GridView = {read=GetGridView};
	__property TcxGridTableViewInfo* GridViewInfo = {read=GetGridViewInfo};
	__property bool HasTextOffsetLeft = {read=GetHasTextOffsetLeft, nodefault};
	__property bool HasTextOffsetRight = {read=GetHasTextOffsetRight, nodefault};
	__property Cxgeometry::TcxBorders HiddenBorders = {read=FHiddenBorders, nodefault};
	__property int OriginalWidth = {read=GetOriginalWidth, nodefault};
	__property bool SortByGroupSummary = {read=FSortByGroupSummary, nodefault};
	
public:
	__fastcall virtual TcxGridColumnHeaderViewInfo(TcxGridColumnContainerViewInfo* AContainer, TcxGridColumn* AColumn);
	__fastcall virtual ~TcxGridColumnHeaderViewInfo();
	virtual void __fastcall Calculate(int ALeftBound, int ATopBound, int AWidth = 0xffffffff, int AHeight = 0xffffffff)/* overload */;
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	virtual int __fastcall GetBestFitWidth();
	virtual Cxgridcustomview::TcxCustomGridHitTest* __fastcall GetHitTest(const System::Types::TPoint &P);
	void __fastcall InitAutoWidthItem(Cxclasses::TcxAutoWidthItem* AAutoWidthItem);
	virtual bool __fastcall MouseDown(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, System::Uitypes::TMouseButton AButton, System::Classes::TShiftState AShift);
	__property int AreaViewInfoCount = {read=GetAreaViewInfoCount, nodefault};
	__property TcxGridColumnHeaderAreaViewInfo* AreaViewInfos[int Index] = {read=GetAreaViewInfo};
	__property bool AutoWidthSizable = {read=GetAutoWidthSizable, nodefault};
	__property TcxGridColumn* Column = {read=FColumn};
	__property TcxGridColumnContainerViewInfo* Container = {read=FContainer};
	__property int DataOffset = {read=GetDataOffset, nodefault};
	__property bool DrawPressed = {read=FDrawPressed, write=FDrawPressed, nodefault};
	__property int Index = {read=GetIndex, nodefault};
	__property bool IsFilterActive = {read=FIsFilterActive, nodefault};
	__property bool IsFixed = {read=GetIsFixedByWidth, nodefault};
	__property bool IsPressed = {read=GetIsPressed, nodefault};
	__property int MaxWidth = {read=GetMaxWidth, nodefault};
	__property int MinWidth = {read=GetMinWidth, nodefault};
	__property Cxlookandfeelpainters::TcxNeighbors Neighbors = {read=FNeighbors, write=FNeighbors, nodefault};
	__property int RealWidth = {read=GetRealWidth, nodefault};
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Calculate(const System::Types::TRect &ABounds){ Cxgridcustomview::TcxCustomGridCellViewInfo::Calculate(ABounds); }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridHeaderViewInfoSpecificClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridHeaderViewInfoSpecific : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TcxGridHeaderViewInfo* FContainerViewInfo;
	TcxGridTableViewInfo* __fastcall GetGridViewInfo();
	int __fastcall GetItemHeight();
	
protected:
	virtual int __fastcall CalculateHeight();
	virtual int __fastcall GetHeight();
	
public:
	__fastcall virtual TcxGridHeaderViewInfoSpecific(TcxGridHeaderViewInfo* AContainerViewInfo);
	__property TcxGridHeaderViewInfo* ContainerViewInfo = {read=FContainerViewInfo};
	__property TcxGridTableViewInfo* GridViewInfo = {read=GetGridViewInfo};
	__property int Height = {read=GetHeight, nodefault};
	__property int ItemHeight = {read=GetItemHeight, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridHeaderViewInfoSpecific() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridHeaderViewInfoClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridHeaderViewInfo : public TcxGridColumnContainerViewInfo
{
	typedef TcxGridColumnContainerViewInfo inherited;
	
private:
	System::StaticArray<System::Types::TRect, 4> FSeparatorsBounds;
	System::Classes::TList* FDynamicFixedItems;
	TcxGridHeaderViewInfoSpecific* FSpecific;
	int __fastcall GetDynamicFixedItemCount();
	TcxGridColumnHeaderViewInfo* __fastcall GetDynamicFixedItem(int AIndex);
	TcxGridColumnHeaderViewInfo* __fastcall GetFirstItem(TcxGridColumnFixedKind AFixedKind);
	int __fastcall GetFirstItemIndex(TcxGridColumnFixedKind AFixedKind);
	int __fastcall GetItemCount(TcxGridColumnFixedKind AFixedKind);
	TcxGridColumnHeaderViewInfo* __fastcall GetLastItem(TcxGridColumnFixedKind AFixedKind);
	int __fastcall GetLastItemIndex(TcxGridColumnFixedKind AFixedKind);
	System::Types::TRect __fastcall GetSeparatorBounds(TcxGridColumnFixedKind AFixedKind);
	virtual int __fastcall GetSeparatorActualWidth(TcxGridColumnFixedKind AFixedKind);
	
protected:
	virtual TcxGridColumn* __fastcall GetColumn(int Index);
	virtual int __fastcall GetColumnCount();
	virtual void __fastcall AddDynamicFixedItem(TcxGridColumnHeaderViewInfo* AItem);
	virtual void __fastcall AddIndicatorItems(TcxGridIndicatorViewInfo* AIndicatorViewInfo, int ATopBound);
	virtual void __fastcall CalculateColumnAutoWidths();
	virtual void __fastcall CalculateColumnWidths();
	virtual void __fastcall CalculateDynamicFixedItems(int ALeft, int ATop, int ACheckedkLeft);
	virtual int __fastcall CalculateHeight();
	virtual void __fastcall CalculateInvisible();
	virtual int __fastcall CalculateItemHeight();
	virtual void __fastcall CalculateItems();
	virtual void __fastcall CalculateLeftFixedItems(int &ALeft, int ATop);
	virtual void __fastcall CalculateRightFixedItems(int &ARight, int ATop);
	virtual void __fastcall CalculateScrollableItems(int ALeft, int ATop);
	virtual void __fastcall CalculateSeparatorBounds(TcxGridColumnFixedKind AFixedKind, int &ALeft, int ATop, int AWidth);
	virtual void __fastcall CalculateVisible();
	virtual int __fastcall CalculateWidth();
	virtual bool __fastcall CanCalculateAutoWidths();
	virtual bool __fastcall DrawColumnBackgroundHandler(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds);
	virtual Cxgridcustomtableview::TcxGridPartAlignment __fastcall GetAlignment();
	virtual bool __fastcall GetAutoHeight();
	virtual Vcl::Graphics::TBitmap* __fastcall GetColumnBackgroundBitmap();
	virtual Cxlookandfeelpainters::TcxNeighbors __fastcall GetColumnNeighbors(TcxGridColumn* AColumn);
	virtual int __fastcall GetDynamicFixedAreaLastBound();
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual bool __fastcall GetIsAutoWidth();
	virtual bool __fastcall GetIsScrollable();
	virtual System::Types::TRect __fastcall GetItemAreaBounds(TcxGridColumnHeaderViewInfo* AItem);
	virtual System::Types::TRect __fastcall GetItemAreaBoundsByFixedKind(TcxGridColumnFixedKind AKind);
	virtual bool __fastcall GetItemMultiLinePainting(TcxGridColumnHeaderViewInfo* AItem);
	virtual Cxgridcustomview::TcxCustomGridHitTest* __fastcall GetItemsHitTest(const System::Types::TPoint &P);
	virtual Cxgridcustomview::TcxCustomGridHitTest* __fastcall GetItemsHitTestByFixedKind(const System::Types::TPoint &P, TcxGridColumnFixedKind AKind);
	virtual int __fastcall GetKind();
	virtual int __fastcall GetLeftFixedAreaLastBound();
	virtual Cxgridcustomview::TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	virtual int __fastcall GetRightFixedAreaFirstBound();
	virtual void __fastcall GetViewParams(Cxgraphics::TcxViewParams &AParams);
	virtual bool __fastcall GetVisible();
	virtual int __fastcall GetWidth();
	virtual Cxgridcustomtableview::TcxGridItemContainerZone* __fastcall GetZoneByFixedKind(const System::Types::TPoint &P, TcxGridColumnFixedKind AKind);
	virtual System::Types::TRect __fastcall GetZonesClientBoundsByFixedKind(TcxGridColumnFixedKind AKind);
	virtual System::Types::TRect __fastcall GetZonesTrackingBounds();
	virtual System::Types::TRect __fastcall GetZonesTrackingBoundsByFixedKind(TcxGridColumnFixedKind AKind);
	virtual bool __fastcall IsAlwaysVisibleForCalculation();
	virtual bool __fastcall IsColumnLeft(TcxCustomGridColumn* AColumn);
	virtual bool __fastcall IsHeightAssigned();
	virtual void __fastcall Offset(int DX, int DY);
	virtual void __fastcall RecalculateItemVisibles();
	virtual void __fastcall ResetSeparatorsBounds();
	__property Vcl::Graphics::TBitmap* ColumnBackgroundBitmap = {read=GetColumnBackgroundBitmap};
	__property int DynamicFixedItemCount = {read=GetDynamicFixedItemCount, nodefault};
	__property TcxGridColumnHeaderViewInfo* DynamicFixedItems[int AIndex] = {read=GetDynamicFixedItem};
	__property TcxGridColumnHeaderViewInfo* FirstItem[TcxGridColumnFixedKind AFixedKind] = {read=GetFirstItem};
	__property int FirstItemIndex[TcxGridColumnFixedKind AFixedKind] = {read=GetFirstItemIndex};
	__property int ItemCount[TcxGridColumnFixedKind AFixedKind] = {read=GetItemCount};
	__property TcxGridColumnHeaderViewInfo* LastItem[TcxGridColumnFixedKind AFixedKind] = {read=GetLastItem};
	__property int LastItemIndex[TcxGridColumnFixedKind AFixedKind] = {read=GetLastItemIndex};
	__property int SeparatorActualWidth[TcxGridColumnFixedKind AFixedKind] = {read=GetSeparatorActualWidth};
	__property System::Types::TRect SeparatorBounds[TcxGridColumnFixedKind AFixedKind] = {read=GetSeparatorBounds};
	
public:
	__fastcall virtual TcxGridHeaderViewInfo(Cxgridcustomtableview::TcxCustomGridTableViewInfo* AGridViewInfo);
	__fastcall virtual ~TcxGridHeaderViewInfo();
	void __fastcall AssignColumnWidths();
	virtual void __fastcall Calculate(int ALeftBound, int ATopBound, int AWidth = 0xffffffff, int AHeight = 0xffffffff)/* overload */;
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	__property TcxGridHeaderViewInfoSpecific* Specific = {read=FSpecific};
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Calculate(const System::Types::TRect &ABounds){ Cxgridcustomview::TcxCustomGridCellViewInfo::Calculate(ABounds); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridGroupByBoxColumnHeaderViewInfo : public TcxGridColumnHeaderViewInfo
{
	typedef TcxGridColumnHeaderViewInfo inherited;
	
private:
	TcxGridGroupByBoxViewInfo* __fastcall GetContainer();
	
protected:
	virtual int __fastcall CalculateHeight();
	virtual System::UnicodeString __fastcall GetCaption();
	virtual bool __fastcall HasFixedContentSpace();
	int __fastcall InheritedCalculateHeight();
	
public:
	__property TcxGridGroupByBoxViewInfo* Container = {read=GetContainer};
public:
	/* TcxGridColumnHeaderViewInfo.Create */ inline __fastcall virtual TcxGridGroupByBoxColumnHeaderViewInfo(TcxGridColumnContainerViewInfo* AContainer, TcxGridColumn* AColumn) : TcxGridColumnHeaderViewInfo(AContainer, AColumn) { }
	/* TcxGridColumnHeaderViewInfo.Destroy */ inline __fastcall virtual ~TcxGridGroupByBoxColumnHeaderViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridGroupByBoxSearchButtonViewInfo : public Cxgridcustomtableview::TcxGridPartCustomCellViewInfo
{
	typedef Cxgridcustomtableview::TcxGridPartCustomCellViewInfo inherited;
	
private:
	static const System::Int8 GlyphSize = System::Int8(0x14);
	
	static const System::Int8 Margin = System::Int8(0x6);
	
	System::Types::TRect FGlyphBounds;
	TcxGridGroupByBoxViewInfo* FGroupByBoxViewInfo;
	HIDESBASE TcxGridTableView* __fastcall GetGridView();
	
protected:
	virtual int __fastcall CalculateHeight();
	virtual int __fastcall CalculateWidth();
	virtual void __fastcall Click();
	virtual bool __fastcall GetFocused();
	virtual System::Types::TSize __fastcall GetGlyphSize();
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual int __fastcall GetMargin();
	virtual Cxgridcustomview::TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	virtual void __fastcall GetViewParams(Cxgraphics::TcxViewParams &AParams);
	__property System::Types::TRect GlyphBounds = {read=FGlyphBounds};
	__property TcxGridGroupByBoxViewInfo* GroupByBoxViewInfo = {read=FGroupByBoxViewInfo};
	
public:
	__fastcall virtual TcxGridGroupByBoxSearchButtonViewInfo(TcxGridGroupByBoxViewInfo* AGroupByBoxViewInfo);
	virtual void __fastcall Calculate(int ALeftBound, int ATopBound, int AWidth = 0xffffffff, int AHeight = 0xffffffff)/* overload */;
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	__property TcxGridTableView* GridView = {read=GetGridView};
public:
	/* TcxCustomGridViewCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridGroupByBoxSearchButtonViewInfo() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Calculate(const System::Types::TRect &ABounds){ Cxgridcustomview::TcxCustomGridCellViewInfo::Calculate(ABounds); }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridGroupByBoxViewInfoClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridGroupByBoxViewInfo : public TcxGridColumnContainerViewInfo
{
	typedef TcxGridColumnContainerViewInfo inherited;
	
private:
	int FColumnWidthCalculatingCount;
	bool FIsSearchButtonVisible;
	bool FIsSearchButtonVisibleAssigned;
	TcxGridGroupByBoxSearchButtonViewInfo* FSearchButtonViewInfo;
	int __fastcall GetGroupByBoxVerOffset();
	bool __fastcall GetIsSearchButtonVisible();
	System::Types::TRect __fastcall GetLinkLineBounds(int Index, bool Horizontal);
	
protected:
	virtual TcxGridColumn* __fastcall GetColumn(int Index);
	virtual int __fastcall GetColumnCount();
	virtual TcxGridColumnHeaderViewInfoClass __fastcall GetItemClass();
	virtual System::Types::TRect __fastcall CalculateFitElementBounds(int AElementHeight, int AElementWidth);
	virtual int __fastcall CalculateHeaderAreaHeight(int ALevelCount);
	virtual int __fastcall CalculateHeight();
	virtual int __fastcall CalculateItemHeight();
	virtual int __fastcall CalculateMinHeight();
	virtual int __fastcall CalculateWidth();
	virtual bool __fastcall CanFitElement(int AElementWidth);
	virtual bool __fastcall CanShowFindPanel();
	virtual bool __fastcall CanShowSearchButton();
	virtual TcxGridGroupByBoxSearchButtonViewInfo* __fastcall CreateSearchButtonViewInfo();
	virtual Cxgridcustomtableview::TcxGridPartAlignment __fastcall GetAlignment();
	virtual Cxclasses::TcxAlignmentVert __fastcall GetAlignmentVert();
	virtual Vcl::Graphics::TBitmap* __fastcall GetBackgroundBitmap();
	virtual int __fastcall GetColumnWidth(TcxGridColumn* AColumn);
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual bool __fastcall GetIsAutoWidth();
	virtual bool __fastcall GetIsScrollable();
	virtual int __fastcall GetKind();
	virtual Cxgridcustomview::TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	virtual System::UnicodeString __fastcall GetText();
	virtual System::Types::TRect __fastcall GetTextAreaBounds();
	virtual void __fastcall GetViewParams(Cxgraphics::TcxViewParams &AParams);
	virtual bool __fastcall GetVisible();
	virtual bool __fastcall IsColumnWidthCalculating();
	virtual bool __fastcall IsSingleLine();
	__property int GroupByBoxVerOffset = {read=GetGroupByBoxVerOffset, nodefault};
	__property bool IsSearchButtonVisible = {read=GetIsSearchButtonVisible, nodefault};
	__property TcxGridGroupByBoxSearchButtonViewInfo* SearchButtonViewInfo = {read=FSearchButtonViewInfo};
	
public:
	__fastcall virtual TcxGridGroupByBoxViewInfo(Cxgridcustomtableview::TcxCustomGridTableViewInfo* AGridViewInfo);
	__fastcall virtual ~TcxGridGroupByBoxViewInfo();
	virtual void __fastcall Calculate(int ALeftBound, int ATopBound, int AWidth = 0xffffffff, int AHeight = 0xffffffff)/* overload */;
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	virtual Cxgridcustomview::TcxCustomGridHitTest* __fastcall GetHitTest(const System::Types::TPoint &P);
	__property System::Types::TRect LinkLineBounds[int Index][bool Horizontal] = {read=GetLinkLineBounds};
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Calculate(const System::Types::TRect &ABounds){ Cxgridcustomview::TcxCustomGridCellViewInfo::Calculate(ABounds); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFooterCellData : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Cxcustomdata::TcxDataSummaryItem* FSummaryItem;
	
public:
	__fastcall virtual TcxGridFooterCellData(Cxcustomdata::TcxDataSummaryItem* ASummaryItem);
	__property Cxcustomdata::TcxDataSummaryItem* SummaryItem = {read=FSummaryItem};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridFooterCellData() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridFooterCellViewInfoClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFooterCellViewInfo : public TcxGridColumnHeaderViewInfo
{
	typedef TcxGridColumnHeaderViewInfo inherited;
	
private:
	TcxGridFooterCellData* FData;
	TcxGridFooterViewInfo* __fastcall GetContainer();
	Cxcustomdata::TcxDataSummary* __fastcall GetSummary();
	Cxcustomdata::TcxDataSummaryItem* __fastcall GetSummaryItem();
	
protected:
	virtual void __fastcall AfterCalculateBounds(System::Types::TRect &ABounds);
	virtual bool __fastcall CanPress();
	virtual bool __fastcall CustomDraw(Cxgraphics::TcxCanvas* ACanvas);
	virtual System::Classes::TAlignment __fastcall GetAlignmentHorz();
	virtual Vcl::Graphics::TBitmap* __fastcall GetBackgroundBitmap();
	virtual void __fastcall GetAreaViewInfoClasses(Cxgridcommon::TcxGridClassEnumeratorProc AProc);
	virtual Cxgeometry::TcxBorders __fastcall GetBorders();
	__classmethod virtual int __fastcall GetCellBorderWidth(Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* ALookAndFeelPainter);
	__classmethod virtual int __fastcall GetCellHeight(int ATextHeight, Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* ALookAndFeelPainter, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Types::TRect __fastcall GetContentIndents();
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual bool __fastcall GetIsDesignSelected();
	virtual bool __fastcall GetIsPressed();
	virtual Cxgridcustomview::TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	virtual System::UnicodeString __fastcall GetText();
	virtual int __fastcall GetTextHeightWithOffset();
	virtual int __fastcall GetTextWidthWithOffset();
	virtual void __fastcall GetViewParams(Cxgraphics::TcxViewParams &AParams);
	virtual bool __fastcall HasCustomDraw();
	virtual bool __fastcall HasCustomHint();
	virtual void __fastcall InitHitTest(Cxgridcustomview::TcxCustomGridHitTest* AHitTest);
	virtual void __fastcall PopulateDesignPopupMenu(Vcl::Menus::TPopupMenu* AMenu);
	__property Cxcustomdata::TcxDataSummary* Summary = {read=GetSummary};
	
public:
	__fastcall virtual TcxGridFooterCellViewInfo(TcxGridColumnContainerViewInfo* AContainer, TcxGridFooterCellData* AData);
	virtual int __fastcall GetBestFitWidth();
	virtual bool __fastcall MouseDown(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, System::Uitypes::TMouseButton AButton, System::Classes::TShiftState AShift);
	__property TcxGridFooterViewInfo* Container = {read=GetContainer};
	__property TcxGridFooterCellData* Data = {read=FData};
	__property Cxcustomdata::TcxDataSummaryItem* SummaryItem = {read=GetSummaryItem};
public:
	/* TcxGridColumnHeaderViewInfo.Destroy */ inline __fastcall virtual ~TcxGridFooterCellViewInfo() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridFooterViewInfoClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFooterViewInfo : public TcxGridHeaderViewInfo
{
	typedef TcxGridHeaderViewInfo inherited;
	
private:
	int FRowCount;
	Dxcoreclasses::TdxFastObjectList* FCellDataList;
	TcxGridFooterCellData* __fastcall GetCellData(int AIndex);
	bool __fastcall GetMultipleSummaries();
	int __fastcall GetRowCount();
	int __fastcall GetRowHeight();
	
protected:
	virtual void __fastcall AddAdornerTargetElementForColumn(System::Classes::TStrings* AList, TcxCustomGridColumn* AColumn, System::UnicodeString AName);
	virtual void __fastcall AddCellData(Cxcustomdata::TcxDataSummaryItem* ASummaryItem);
	virtual void __fastcall CreateCellDataList();
	virtual TcxGridColumnHeaderViewInfo* __fastcall CreateItem(int AIndex);
	virtual void __fastcall CreateItems();
	virtual TcxGridFooterCellData* __fastcall CreateCellData(Cxcustomdata::TcxDataSummaryItem* ASummaryItem);
	virtual void __fastcall DestroyItems();
	virtual TcxGridColumn* __fastcall GetColumn(int Index);
	virtual int __fastcall GetColumnCount();
	virtual TcxGridColumnHeaderViewInfoClass __fastcall GetItemClass();
	virtual void __fastcall PopulateCellDataList(bool *AColumnHasSummaries, const int AColumnHasSummaries_High)/* overload */;
	virtual void __fastcall PopulateCellDataList(Cxcustomdata::TcxDataSummaryItems* ASummaryItems, bool *AColumnHasSummaries, const int AColumnHasSummaries_High)/* overload */;
	virtual void __fastcall Prepare(Dxcoreclasses::TdxFastObjectList* ACellDataList);
	virtual System::Types::TRect __fastcall CalculateBounds();
	virtual int __fastcall CalculateHeight();
	virtual int __fastcall CalculateItemHeight();
	virtual void __fastcall CalculateItem(int AIndex);
	virtual void __fastcall CalculateItems();
	virtual int __fastcall CalculateRowCount();
	virtual bool __fastcall CanCalculateAutoWidths();
	virtual Cxgridcustomtableview::TcxGridPartAlignment __fastcall GetAlignment();
	virtual bool __fastcall GetAutoHeight();
	virtual Vcl::Graphics::TBitmap* __fastcall GetBackgroundBitmap();
	virtual System::Types::TRect __fastcall GetBordersBounds();
	virtual Cxgeometry::TcxBorders __fastcall GetBorders();
	virtual int __fastcall GetBorderWidth(Cxgeometry::TcxBorder AIndex);
	virtual int __fastcall GetColumnWidth(TcxGridColumn* AColumn);
	virtual int __fastcall GetDynamicFixedAreaLastBound();
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual bool __fastcall GetIsAutoWidth();
	virtual bool __fastcall GetIsScrollable();
	virtual System::Types::TRect __fastcall GetItemAreaBounds(TcxGridColumnHeaderViewInfo* AItem);
	HIDESBASE virtual int __fastcall GetItemHeight(TcxGridColumn* AColumn)/* overload */;
	HIDESBASE int __fastcall GetItemHeight(int AIndex)/* overload */;
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetItemHitTestClass();
	virtual int __fastcall GetItemLeftBound(TcxGridColumn* AColumn)/* overload */;
	int __fastcall GetItemLeftBound(int AIndex)/* overload */;
	virtual int __fastcall GetItemRowIndex(int AIndex);
	virtual System::Types::TRect __fastcall GetItemsAreaBounds();
	virtual int __fastcall GetItemTopBound(TcxGridColumn* AColumn)/* overload */;
	virtual int __fastcall GetItemTopBound(int AIndex)/* overload */;
	virtual int __fastcall GetKind();
	virtual int __fastcall GetLeftFixedAreaLastBound();
	virtual Cxgridcustomview::TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	virtual int __fastcall GetRightFixedAreaFirstBound();
	HIDESBASE virtual System::Types::TRect __fastcall GetSeparatorBounds();
	virtual int __fastcall GetSeparatorWidth();
	virtual Cxcustomdata::TcxDataSummaryItems* __fastcall GetSummaryItems();
	virtual void __fastcall GetViewParams(Cxgraphics::TcxViewParams &AParams);
	virtual bool __fastcall GetVisible();
	virtual bool __fastcall HasSeparator();
	virtual bool __fastcall IsAlwaysVisibleForCalculation();
	virtual bool __fastcall IsColumnLeft(TcxCustomGridColumn* AColumn);
	virtual bool __fastcall IsColumnOnFirstLayer(int AColumnIndex);
	virtual bool __fastcall IsHeightAssigned();
	virtual bool __fastcall IsItemVisible(int AIndex);
	virtual bool __fastcall IsMultilayerLayout();
	virtual void __fastcall Offset(int DX, int DY);
	__property TcxGridFooterCellData* CellDataList[int AIndex] = {read=GetCellData};
	
public:
	virtual bool __fastcall CanShowMultipleSummaries();
	virtual int __fastcall GetCellBestFitWidth(TcxGridColumn* AColumn);
	virtual Cxgridcustomview::TcxCustomGridHitTest* __fastcall GetHitTest(const System::Types::TPoint &P);
	__property System::Types::TRect BordersBounds = {read=GetBordersBounds};
	__property bool MultipleSummaries = {read=GetMultipleSummaries, nodefault};
	__property int RowCount = {read=GetRowCount, nodefault};
	__property int RowHeight = {read=GetRowHeight, nodefault};
	__property System::Types::TRect SeparatorBounds = {read=GetSeparatorBounds};
	__property int SeparatorWidth = {read=GetSeparatorWidth, nodefault};
	__property Cxcustomdata::TcxDataSummaryItems* SummaryItems = {read=GetSummaryItems};
public:
	/* TcxGridHeaderViewInfo.Create */ inline __fastcall virtual TcxGridFooterViewInfo(Cxgridcustomtableview::TcxCustomGridTableViewInfo* AGridViewInfo) : TcxGridHeaderViewInfo(AGridViewInfo) { }
	/* TcxGridHeaderViewInfo.Destroy */ inline __fastcall virtual ~TcxGridFooterViewInfo() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomGridIndicatorItemViewInfoClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridIndicatorItemViewInfo : public Cxgridcustomview::TcxCustomGridViewCellViewInfo
{
	typedef Cxgridcustomview::TcxCustomGridViewCellViewInfo inherited;
	
private:
	Cxgridcustomtableview::TcxGridCheckBoxViewInfo* FCheckBox;
	TcxGridIndicatorViewInfo* FContainer;
	HIDESBASE TcxGridTableView* __fastcall GetGridView();
	TcxGridTableViewInfo* __fastcall GetGridViewInfo();
	
protected:
	virtual int __fastcall CalculateWidth();
	virtual Cxgridcustomtableview::TcxGridCheckBoxViewInfo* __fastcall CreateCheckBox() = 0 ;
	virtual bool __fastcall CustomDraw(Cxgraphics::TcxCanvas* ACanvas);
	virtual System::Types::TRect __fastcall GetCheckBoxAreaBounds();
	virtual System::Types::TRect __fastcall GetCheckBoxBounds();
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual System::Types::TRect __fastcall GetImageAreaBounds();
	virtual Cxgridcustomview::TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	virtual void __fastcall GetViewParams(Cxgraphics::TcxViewParams &AParams);
	virtual bool __fastcall HasCheckBox();
	virtual bool __fastcall HasCustomDraw();
	virtual void __fastcall Offset(int DX, int DY);
	virtual bool __fastcall ShowCheckBox();
	__property Cxgridcustomtableview::TcxGridCheckBoxViewInfo* CheckBox = {read=FCheckBox};
	
public:
	__fastcall virtual TcxCustomGridIndicatorItemViewInfo(TcxGridIndicatorViewInfo* AContainer);
	__fastcall virtual ~TcxCustomGridIndicatorItemViewInfo();
	virtual void __fastcall Calculate(int ALeftBound, int ATopBound, int AWidth = 0xffffffff, int AHeight = 0xffffffff)/* overload */;
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	virtual Cxgridcustomview::TcxCustomGridHitTest* __fastcall GetHitTest(const System::Types::TPoint &P);
	__property TcxGridIndicatorViewInfo* Container = {read=FContainer};
	__property TcxGridTableView* GridView = {read=GetGridView};
	__property TcxGridTableViewInfo* GridViewInfo = {read=GetGridViewInfo};
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Calculate(const System::Types::TRect &ABounds){ Cxgridcustomview::TcxCustomGridCellViewInfo::Calculate(ABounds); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridIndicatorHeaderItemViewInfo : public TcxCustomGridIndicatorItemViewInfo
{
	typedef TcxCustomGridIndicatorItemViewInfo inherited;
	
private:
	Cxgridcustomtableview::TcxCustomGridCustomizationPopup* __fastcall GetDropDownWindowValue();
	
protected:
	virtual int __fastcall CalculateHeight();
	virtual bool __fastcall CanShowHint();
	virtual Cxgridcustomtableview::TcxGridCheckBoxViewInfo* __fastcall CreateCheckBox();
	virtual System::Types::TRect __fastcall GetCellBoundsForHint();
	virtual System::Types::TRect __fastcall GetHintTextRect(const System::Types::TPoint &AMousePos);
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual bool __fastcall GetHotTrack();
	virtual Cxgridcustomview::TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	virtual System::UnicodeString __fastcall GetText();
	virtual void __fastcall GetViewParams(Cxgraphics::TcxViewParams &AParams);
	virtual bool __fastcall IsHintForText();
	virtual bool __fastcall IsHintMultiLine();
	virtual bool __fastcall ShowCheckBox();
	virtual bool __fastcall SupportsQuickCustomization();
	virtual bool __fastcall CloseDropDownWindowOnDestruction();
	virtual bool __fastcall DropDownWindowExists();
	virtual Dxuielementpopupwindow::TdxUIElementPopupWindow* __fastcall GetDropDownWindow();
	__property Cxgridcustomtableview::TcxCustomGridCustomizationPopup* DropDownWindow = {read=GetDropDownWindowValue};
public:
	/* TcxCustomGridIndicatorItemViewInfo.Create */ inline __fastcall virtual TcxGridIndicatorHeaderItemViewInfo(TcxGridIndicatorViewInfo* AContainer) : TcxCustomGridIndicatorItemViewInfo(AContainer) { }
	/* TcxCustomGridIndicatorItemViewInfo.Destroy */ inline __fastcall virtual ~TcxGridIndicatorHeaderItemViewInfo() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridIndicatorRowItemViewInfoClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridIndicatorRowItemViewInfo : public TcxCustomGridIndicatorItemViewInfo
{
	typedef TcxCustomGridIndicatorItemViewInfo inherited;
	
private:
	TcxCustomGridRowViewInfo* FRowViewInfo;
	HIDESBASE TcxGridTableController* __fastcall GetController();
	TcxCustomGridRow* __fastcall GetGridRecord();
	HIDESBASE TcxGridTableView* __fastcall GetGridView();
	
protected:
	virtual int __fastcall CalculateHeight();
	virtual Cxgridcustomtableview::TcxGridCheckBoxViewInfo* __fastcall CreateCheckBox();
	virtual Vcl::Graphics::TBitmap* __fastcall GetBackgroundBitmap();
	virtual System::Types::TRect __fastcall GetCheckBoxAreaBounds();
	virtual Cxlookandfeelpainters::TcxIndicatorKind __fastcall GetIndicatorKind();
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual Cxlookandfeelpainters::TcxNeighbors __fastcall GetNeighbors();
	virtual Cxgridcustomview::TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	virtual System::Types::TRect __fastcall GetRowSizingEdgeBounds();
	virtual void __fastcall InitHitTest(Cxgridcustomview::TcxCustomGridHitTest* AHitTest);
	virtual bool __fastcall ShowCheckBox();
	__property TcxGridTableController* Controller = {read=GetController};
	__property System::Types::TRect RowSizingEdgeBounds = {read=GetRowSizingEdgeBounds};
	
public:
	__fastcall virtual TcxGridIndicatorRowItemViewInfo(TcxGridIndicatorViewInfo* AContainer, TcxCustomGridRowViewInfo* ARowViewInfo);
	__fastcall virtual ~TcxGridIndicatorRowItemViewInfo();
	virtual Cxgridcustomview::TcxCustomGridHitTest* __fastcall GetHitTest(const System::Types::TPoint &P);
	virtual bool __fastcall MouseDown(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, System::Uitypes::TMouseButton AButton, System::Classes::TShiftState AShift);
	__property TcxCustomGridRow* GridRecord = {read=GetGridRecord};
	__property TcxGridTableView* GridView = {read=GetGridView};
	__property Cxlookandfeelpainters::TcxIndicatorKind IndicatorKind = {read=GetIndicatorKind, nodefault};
	__property TcxCustomGridRowViewInfo* RowViewInfo = {read=FRowViewInfo};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridIndicatorFooterItemViewInfo : public TcxCustomGridIndicatorItemViewInfo
{
	typedef TcxCustomGridIndicatorItemViewInfo inherited;
	
private:
	int __fastcall GetSeparatorWidth();
	
protected:
	virtual int __fastcall CalculateHeight();
	virtual Vcl::Graphics::TBitmap* __fastcall GetBackgroundBitmap();
	virtual Cxgeometry::TcxBorders __fastcall GetBorders();
	virtual System::Types::TRect __fastcall GetBordersBounds();
	virtual int __fastcall GetBorderWidth(Cxgeometry::TcxBorder AIndex);
	virtual Cxgridcustomview::TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	virtual System::Types::TRect __fastcall GetSeparatorBounds();
	bool __fastcall HasSeparator();
	virtual bool __fastcall ShowCheckBox();
	
public:
	__property System::Types::TRect BordersBounds = {read=GetBordersBounds};
	__property System::Types::TRect SeparatorBounds = {read=GetSeparatorBounds};
	__property int SeparatorWidth = {read=GetSeparatorWidth, nodefault};
public:
	/* TcxCustomGridIndicatorItemViewInfo.Create */ inline __fastcall virtual TcxGridIndicatorFooterItemViewInfo(TcxGridIndicatorViewInfo* AContainer) : TcxCustomGridIndicatorItemViewInfo(AContainer) { }
	/* TcxCustomGridIndicatorItemViewInfo.Destroy */ inline __fastcall virtual ~TcxGridIndicatorFooterItemViewInfo() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridIndicatorViewInfoClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridIndicatorViewInfo : public Cxgridcustomview::TcxCustomGridViewCellViewInfo
{
	typedef Cxgridcustomview::TcxCustomGridViewCellViewInfo inherited;
	
private:
	System::Classes::TList* FItems;
	int __fastcall GetCount();
	HIDESBASE TcxGridTableView* __fastcall GetGridView();
	TcxGridTableViewInfo* __fastcall GetGridViewInfo();
	TcxCustomGridIndicatorItemViewInfo* __fastcall GetItem(int Index);
	void __fastcall DestroyItems();
	
protected:
	virtual int __fastcall CalculateHeight();
	virtual int __fastcall CalculateWidth();
	virtual bool __fastcall GetAlwaysVisible();
	virtual Vcl::Graphics::TBitmap* __fastcall GetBackgroundBitmap();
	virtual int __fastcall GetCheckBoxAreaWidth();
	virtual System::Types::TRect __fastcall GetCheckBoxAreaMargins();
	virtual int __fastcall GetIndicatorAreaWidth();
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual Cxgridcustomview::TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	virtual TcxGridIndicatorRowItemViewInfoClass __fastcall GetRowItemClass(TcxCustomGridRowViewInfo* ARowViewInfo);
	virtual void __fastcall GetViewParams(Cxgraphics::TcxViewParams &AParams);
	virtual bool __fastcall GetVisible();
	virtual int __fastcall GetWidth();
	virtual void __fastcall MoveItem(int ACurIndex, int ANewIndex);
	virtual bool __fastcall ShowCheckBoxes();
	
public:
	__fastcall virtual TcxGridIndicatorViewInfo(TcxGridTableViewInfo* AGridViewInfo);
	__fastcall virtual ~TcxGridIndicatorViewInfo();
	TcxCustomGridIndicatorItemViewInfo* __fastcall AddItem(TcxCustomGridIndicatorItemViewInfoClass AItemClass)/* overload */;
	TcxCustomGridIndicatorItemViewInfo* __fastcall AddItem(int ATopBound, int AHeight, TcxCustomGridIndicatorItemViewInfoClass AItemClass)/* overload */;
	TcxCustomGridIndicatorItemViewInfo* __fastcall AddRowItem(TcxCustomGridRowViewInfo* ARowViewInfo);
	virtual void __fastcall Calculate(int ALeftBound, int ATopBound, int AWidth = 0xffffffff, int AHeight = 0xffffffff)/* overload */;
	void __fastcall CalculateRowItem(TcxCustomGridRowViewInfo* ARowViewInfo, TcxCustomGridIndicatorItemViewInfo* AItem);
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	virtual Cxgridcustomview::TcxCustomGridHitTest* __fastcall GetHitTest(const System::Types::TPoint &P);
	System::Types::TRect __fastcall GetRowItemBounds(TcxCustomGridRow* AGridRecord);
	__property bool AlwaysVisible = {read=GetAlwaysVisible, nodefault};
	__property int Count = {read=GetCount, nodefault};
	__property TcxGridTableView* GridView = {read=GetGridView};
	__property TcxGridTableViewInfo* GridViewInfo = {read=GetGridViewInfo};
	__property TcxCustomGridIndicatorItemViewInfo* Items[int Index] = {read=GetItem};
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Calculate(const System::Types::TRect &ABounds){ Cxgridcustomview::TcxCustomGridCellViewInfo::Calculate(ABounds); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridRowFooterCellData : public TcxGridFooterCellData
{
	typedef TcxGridFooterCellData inherited;
	
private:
	int FGroupedColumnIndex;
	
public:
	__fastcall virtual TcxGridRowFooterCellData(Cxcustomdata::TcxDataSummaryItem* ASummaryItem, int AGroupedColumnIndex);
	__property int GroupedColumnIndex = {read=FGroupedColumnIndex, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridRowFooterCellData() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridRowFooterCellViewInfo : public TcxGridFooterCellViewInfo
{
	typedef TcxGridFooterCellViewInfo inherited;
	
private:
	HIDESBASE TcxGridRowFooterViewInfo* __fastcall GetContainer();
	TcxCustomGridRow* __fastcall GetGridRecord();
	TcxGridRowFooterCellData* __fastcall GetData();
	
protected:
	virtual System::UnicodeString __fastcall GetText();
	virtual void __fastcall GetViewParams(Cxgraphics::TcxViewParams &AParams);
	
public:
	__property TcxGridRowFooterViewInfo* Container = {read=GetContainer};
	__property TcxCustomGridRow* GridRecord = {read=GetGridRecord};
	__property TcxGridRowFooterCellData* Data = {read=GetData};
public:
	/* TcxGridFooterCellViewInfo.Create */ inline __fastcall virtual TcxGridRowFooterCellViewInfo(TcxGridColumnContainerViewInfo* AContainer, TcxGridFooterCellData* AData) : TcxGridFooterCellViewInfo(AContainer, AData) { }
	
public:
	/* TcxGridColumnHeaderViewInfo.Destroy */ inline __fastcall virtual ~TcxGridRowFooterCellViewInfo() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridRowFooterViewInfoClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridRowFooterViewInfo : public TcxGridFooterViewInfo
{
	typedef TcxGridFooterViewInfo inherited;
	
private:
	TcxGridRowFootersViewInfo* FContainer;
	int FPopulatedGroupedColumnIndex;
	int FLevel;
	int __fastcall GetIndent();
	TcxCustomGridRow* __fastcall GetGridRecord();
	int __fastcall GetGroupLevel();
	TcxCustomGridRowViewInfo* __fastcall GetRowViewInfo();
	
protected:
	virtual int __fastcall CalculateHeight();
	virtual int __fastcall CalculateWidth();
	virtual TcxGridFooterCellData* __fastcall CreateCellData(Cxcustomdata::TcxDataSummaryItem* ASummaryItem);
	virtual Cxgeometry::TcxBorders __fastcall GetBorders();
	virtual int __fastcall GetColumnWidth(TcxGridColumn* AColumn);
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetHitTestClass();
	virtual bool __fastcall GetIsPart();
	virtual System::Types::TRect __fastcall GetItemAreaBounds(TcxGridColumnHeaderViewInfo* AItem);
	virtual TcxGridColumnHeaderViewInfoClass __fastcall GetItemClass();
	virtual Cxgridcustomview::TcxCustomGridHitTestClass __fastcall GetItemHitTestClass();
	virtual bool __fastcall GetItemMultiLinePainting(TcxGridColumnHeaderViewInfo* AItem);
	virtual Cxcustomdata::TcxDataSummaryItems* __fastcall GetSummaryItems();
	virtual void __fastcall GetViewParams(Cxgraphics::TcxViewParams &AParams);
	virtual bool __fastcall GetVisible();
	virtual int __fastcall GetVisualLevel();
	virtual bool __fastcall HasSeparator();
	virtual void __fastcall PopulateCellDataList(bool *AColumnHasSummaries, const int AColumnHasSummaries_High)/* overload */;
	virtual void __fastcall Prepare(Dxcoreclasses::TdxFastObjectList* ACellDataList);
	__property int Indent = {read=GetIndent, nodefault};
	
public:
	__fastcall virtual TcxGridRowFooterViewInfo(TcxGridRowFootersViewInfo* AContainer, int ALevel);
	virtual bool __fastcall CanShowMultipleSummaries();
	__property TcxGridRowFootersViewInfo* Container = {read=FContainer};
	__property TcxCustomGridRow* GridRecord = {read=GetGridRecord};
	__property int GroupLevel = {read=GetGroupLevel, nodefault};
	__property int Level = {read=FLevel, nodefault};
	__property TcxCustomGridRowViewInfo* RowViewInfo = {read=GetRowViewInfo};
	__property int VisualLevel = {read=GetVisualLevel, nodefault};
public:
	/* TcxGridHeaderViewInfo.Destroy */ inline __fastcall virtual ~TcxGridRowFooterViewInfo() { }
	
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  PopulateCellDataList(Cxcustomdata::TcxDataSummaryItems* ASummaryItems, bool *AColumnHasSummaries, const int AColumnHasSummaries_High){ TcxGridFooterViewInfo::PopulateCellDataList(ASummaryItems, AColumnHasSummaries, AColumnHasSummaries_High); }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridRowFootersViewInfoClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridRowFootersViewInfo : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TcxGridRowFooterViewInfo* operator[](int Index) { return this->Items[Index]; }
	
private:
	int FHeight;
	bool FIsRightToLeftConverted;
	System::Classes::TList* FItems;
	TcxCustomGridRowViewInfo* FRowViewInfo;
	int __fastcall GetCount();
	TcxGridTableViewInfo* __fastcall GetGridViewInfo();
	int __fastcall GetHeight();
	TcxGridRowFooterViewInfo* __fastcall GetItem(int Index);
	TcxGridRowFooterViewInfo* __fastcall GetVisibleItem(int ALevel);
	void __fastcall CreateItems();
	void __fastcall DestroyItems();
	
protected:
	virtual void __fastcall BeforeRecalculation();
	virtual void __fastcall Calculate(int ALeftBound, int ATopBound);
	virtual int __fastcall CalculateHeight();
	virtual TcxGridRowFooterViewInfoClass __fastcall GetItemClass();
	
public:
	__fastcall virtual TcxGridRowFootersViewInfo(TcxCustomGridRowViewInfo* ARowViewInfo);
	__fastcall virtual ~TcxGridRowFootersViewInfo();
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	int __fastcall GetCellBestFitWidth(TcxGridColumn* AColumn);
	virtual Cxgridcustomview::TcxCustomGridHitTest* __fastcall GetHitTest(const System::Types::TPoint &P);
	bool __fastcall GetTopBound(int ALevel, int &ATopBound);
	virtual void __fastcall Offset(int DX, int DY);
	void __fastcall Paint();
	void __fastcall RightToLeftConversion(const System::Types::TRect &ABounds);
	__property int Count = {read=GetCount, nodefault};
	__property TcxGridTableViewInfo* GridViewInfo = {read=GetGridViewInfo};
	__property TcxGridRowFooterViewInfo* Items[int Index] = {read=GetItem/*, default*/};
	__property int Height = {read=GetHeight, nodefault};
	__property bool IsRightToLeftConverted = {read=FIsRightToLeftConverted, write=FIsRightToLeftConverted, nodefault};
	__property TcxCustomGridRowViewInfo* RowViewInfo = {read=FRowViewInfo};
	__property TcxGridRowFooterViewInfo* VisibleItems[int ALevel] = {read=GetVisibleItem};
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomGridRowViewInfoClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridRowViewInfo : public Cxgridcustomtableview::TcxCustomGridRecordViewInfo
{
	typedef Cxgridcustomtableview::TcxCustomGridRecordViewInfo inherited;
	
private:
	bool FOverlapped;
	TcxGridRowFootersViewInfo* FFootersViewInfo;
	TcxCustomGridIndicatorItemViewInfo* FIndicatorItem;
	HIDESBASE TcxGridTableViewInfoCacheItem* __fastcall GetCacheItem();
	Cxlookandfeelpainters::TcxCheckBoxState __fastcall GetCheckBoxState();
	HIDESBASE TcxGridTableController* __fastcall GetController();
	HIDESBASE TcxGridTableView* __fastcall GetGridView();
	Cxgraphics::TcxGridLines __fastcall GetGridLines();
	TcxCustomGridRow* __fastcall GetGridRecord();
	HIDESBASE TcxGridTableViewInfo* __fastcall GetGridViewInfo();
	TcxGridFocusedItemKind __fastcall GetFocusedItemKind();
	int __fastcall GetLevel();
	int __fastcall GetLevelIndent();
	System::Types::TRect __fastcall GetLevelIndentBounds(int Index);
	System::Types::TRect __fastcall GetLevelIndentHorzLineBounds(int Index);
	System::Types::TRect __fastcall GetLevelIndentSpaceBounds(int Index);
	System::Types::TRect __fastcall GetLevelIndentVertLineBounds(int Index);
	TcxGridRowsViewInfo* __fastcall GetRecordsViewInfo();
	void __fastcall CreateFootersViewInfo();
	void __fastcall DestroyFootersViewInfo();
	void __fastcall RecreateFootersViewInfo();
	
protected:
	virtual void __fastcall AddAdornerTargetElementsForColumn(System::Classes::TStrings* AList, TcxCustomGridColumn* AColumn, System::UnicodeString AName);
	virtual void __fastcall AfterRowsViewInfoCalculate();
	virtual void __fastcall AfterRowsViewInfoOffset();
	virtual void __fastcall CalculateExpandButtonBounds(System::Types::TRect &ABounds);
	virtual int __fastcall CalculateHeight();
	System::Types::TRect __fastcall CalculateLevelIndentHorzLineBounds(int ALevel, const System::Types::TRect &ABounds);
	System::Types::TRect __fastcall CalculateLevelIndentSpaceBounds(int ALevel, const System::Types::TRect &ABounds);
	System::Types::TRect __fastcall CalculateLevelIndentVertLineBounds(int ALevel, const System::Types::TRect &ABounds);
	virtual int __fastcall CalculateWidth();
	virtual bool __fastcall CanSize();
	virtual void __fastcall CheckRowHeight(int &AValue);
	virtual void __fastcall DoToggleExpanded();
	virtual bool __fastcall GetAutoHeight();
	virtual int __fastcall GetBaseHeight();
	virtual int __fastcall GetBottomPartHeight();
	virtual bool __fastcall GetCellTransparent(Cxgridcustomtableview::TcxGridTableCellViewInfo* ACell);
	virtual System::Types::TRect __fastcall GetContentBounds();
	virtual int __fastcall GetContentIndent();
	virtual int __fastcall GetContentWidth();
	virtual int __fastcall GetDataHeight();
	virtual int __fastcall GetDataIndent();
	virtual int __fastcall GetDataRelativeIndent();
	virtual int __fastcall GetDataWidth();
	virtual Cxcustomdata::TcxDataControllerRowFixedState __fastcall GetFixedState();
	virtual System::Types::TRect __fastcall GetFocusRectBounds();
	virtual TcxGridRowFootersViewInfoClass __fastcall GetFootersViewInfoClass();
	virtual bool __fastcall GetHotTrack();
	virtual System::Types::TRect __fastcall GetLastHorzGridLineBounds();
	virtual int __fastcall GetMaxHeight();
	virtual int __fastcall GetNonBaseHeight();
	virtual int __fastcall GetRowHeight();
	virtual System::Types::TRect __fastcall GetSeparatorBounds();
	virtual System::Uitypes::TColor __fastcall GetSeparatorColor();
	virtual int __fastcall GetSeparatorWidth();
	virtual bool __fastcall GetShowSeparator();
	virtual int __fastcall GetTopPartHeight();
	virtual bool __fastcall GetVisible();
	virtual int __fastcall GetVisualLevel();
	virtual int __fastcall GetWidth();
	bool __fastcall HasAnyFooter(int ALevel);
	virtual bool __fastcall HasFooter(int ALevel);
	virtual bool __fastcall HasFooters();
	virtual bool __fastcall HasLastHorzGridLine();
	virtual bool __fastcall IsFullyVisible();
	virtual bool __fastcall IsSpecial();
	virtual void __fastcall MarkAsOverlapped();
	virtual bool __fastcall NeedToggleExpandRecord(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, System::Uitypes::TMouseButton AButton, System::Classes::TShiftState AShift);
	virtual void __fastcall Offset(int DX, int DY);
	virtual bool __fastcall PtInCaller(const System::Types::TPoint &P);
	virtual void __fastcall SetFixedState(Cxcustomdata::TcxDataControllerRowFixedState AValue);
	virtual void __fastcall SetRowHeight(int Value) = 0 ;
	virtual bool __fastcall ShowCheckBox();
	virtual void __fastcall ToggleCheckBox();
	virtual void __fastcall ToggleFixedState(const System::Types::TRect &AMenuForBounds);
	__property int BaseHeight = {read=GetBaseHeight, nodefault};
	__property int BottomPartHeight = {read=GetBottomPartHeight, nodefault};
	__property TcxGridTableViewInfoCacheItem* CacheItem = {read=GetCacheItem};
	__property Cxlookandfeelpainters::TcxCheckBoxState CheckBoxState = {read=GetCheckBoxState, nodefault};
	__property TcxGridTableController* Controller = {read=GetController};
	__property int DataRelativeIndent = {read=GetDataRelativeIndent, nodefault};
	__property TcxCustomGridIndicatorItemViewInfo* IndicatorItem = {read=FIndicatorItem};
	__property Cxcustomdata::TcxDataControllerRowFixedState FixedState = {read=GetFixedState, write=SetFixedState, nodefault};
	__property TcxGridFocusedItemKind FocusedItemKind = {read=GetFocusedItemKind, nodefault};
	__property System::Types::TRect LastHorzGridLineBounds = {read=GetLastHorzGridLineBounds};
	__property int Level = {read=GetLevel, nodefault};
	__property int LevelIndent = {read=GetLevelIndent, nodefault};
	__property int NonBaseHeight = {read=GetNonBaseHeight, nodefault};
	__property bool Overlapped = {read=FOverlapped, nodefault};
	__property int RowHeight = {read=GetRowHeight, write=SetRowHeight, nodefault};
	__property bool ShowSeparator = {read=GetShowSeparator, nodefault};
	__property int TopPartHeight = {read=GetTopPartHeight, nodefault};
	
public:
	__fastcall virtual TcxCustomGridRowViewInfo(Cxgridcustomtableview::TcxCustomGridRecordsViewInfo* ARecordsViewInfo, Cxgridcustomtableview::TcxCustomGridRecord* ARecord);
	__fastcall virtual ~TcxCustomGridRowViewInfo();
	virtual void __fastcall BeforeRecalculation();
	virtual void __fastcall Calculate(int ALeftBound, int ATopBound, int AWidth = 0xffffffff, int AHeight = 0xffffffff)/* overload */;
	virtual bool __fastcall Click(Cxgridcustomview::TcxCustomGridHitTest* AHitTest, System::Uitypes::TMouseButton AButton, System::Classes::TShiftState AShift);
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	virtual System::Types::TRect __fastcall GetBoundsForInvalidate(Cxgridcustomtableview::TcxCustomGridTableItem* AItem);
	virtual Cxgridcustomview::TcxCustomGridHitTest* __fastcall GetHitTest(const System::Types::TPoint &P);
	bool __fastcall HasSeparator();
	__property int ContentIndent = {read=GetContentIndent, nodefault};
	__property int DataHeight = {read=GetDataHeight, nodefault};
	__property int DataIndent = {read=GetDataIndent, nodefault};
	__property int DataWidth = {read=GetDataWidth, nodefault};
	__property TcxGridRowFootersViewInfo* FootersViewInfo = {read=FFootersViewInfo};
	__property TcxGridTableView* GridView = {read=GetGridView};
	__property Cxgraphics::TcxGridLines GridLines = {read=GetGridLines, nodefault};
	__property TcxCustomGridRow* GridRecord = {read=GetGridRecord};
	__property TcxGridTableViewInfo* GridViewInfo = {read=GetGridViewInfo};
	__property System::Types::TRect LevelIndentBounds[int Index] = {read=GetLevelIndentBounds};
	__property System::Types::TRect LevelIndentHorzLineBounds[int Index] = {read=GetLevelIndentHorzLineBounds};
	__property System::Types::TRect LevelIndentSpaceBounds[int Index] = {read=GetLevelIndentSpaceBounds};
	__property System::Types::TRect LevelIndentVertLineBounds[int Index] = {read=GetLevelIndentVertLineBounds};
	__property int MaxHeight = {read=GetMaxHeight, nodefault};
	__property TcxGridRowsViewInfo* RecordsViewInfo = {read=GetRecordsViewInfo};
	__property System::Types::TRect SeparatorBounds = {read=GetSeparatorBounds};
	__property System::Uitypes::TColor SeparatorColor = {read=GetSeparatorColor, nodefault};
	__property int SeparatorWidth = {read=GetSeparatorWidth, nodefault};
	__property int VisualLevel = {read=GetVisualLevel, nodefault};
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Calculate(const System::Types::TRect &ABounds){ Cxgridcustomview::TcxCustomGridCellViewInfo::Calculate(ABounds); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFixedDataRowsViewInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Dxcoreclasses::TdxFastObjectList* FBottomItems;
	bool FIsRightToLeftConverted;
	TcxGridRowsViewInfo* FRowsViewInfo;
	Dxcoreclasses::TdxFastObjectList* FTopItems;
	TcxCustomGridRowViewInfo* __fastcall GetBottomItem(int Index);
	int __fastcall GetBottomItemCount();
	int __fastcall GetBottomItemMaxCount();
	Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	TcxGridTableController* __fastcall GetController();
	TcxCustomGridRowViewInfo* __fastcall GetTopItem(int Index);
	int __fastcall GetTopItemCount();
	int __fastcall GetTopItemMaxCount();
	TcxGridViewData* __fastcall GetViewData();
	
protected:
	virtual void __fastcall CalculateBottomItems(int ALeftBound, int ATopBound);
	virtual void __fastcall CalculateTopItems(int ALeftBound, int ATopBound);
	virtual void __fastcall ControlFocusChanged();
	virtual TcxCustomGridRowViewInfo* __fastcall CreateRowViewInfo(TcxCustomGridRow* ARow);
	virtual int __fastcall GetBottomContentHeight();
	virtual TcxGridFixedDataRowsPainterClass __fastcall GetPainterClass();
	virtual int __fastcall GetTopContentHeight();
	virtual void __fastcall Offset(int DX, int DY);
	virtual void __fastcall VisibilityChanged(bool AVisible);
	__property TcxCustomGridRowViewInfo* BottomItems[int Index] = {read=GetBottomItem};
	__property int BottomItemCount = {read=GetBottomItemCount, nodefault};
	__property int BottomItemMaxCount = {read=GetBottomItemMaxCount, nodefault};
	__property Cxgraphics::TcxCanvas* Canvas = {read=GetCanvas};
	__property TcxGridTableController* Controller = {read=GetController};
	__property TcxGridRowsViewInfo* RowsViewInfo = {read=FRowsViewInfo};
	__property TcxCustomGridRowViewInfo* TopItems[int Index] = {read=GetTopItem};
	__property int TopItemCount = {read=GetTopItemCount, nodefault};
	__property int TopItemMaxCount = {read=GetTopItemMaxCount, nodefault};
	__property TcxGridViewData* ViewData = {read=GetViewData};
	
public:
	__fastcall virtual TcxGridFixedDataRowsViewInfo(TcxGridRowsViewInfo* ARowsViewInfo);
	__fastcall virtual ~TcxGridFixedDataRowsViewInfo();
	virtual void __fastcall Calculate(const System::Types::TRect &ABounds);
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	virtual Cxgridcustomview::TcxCustomGridHitTest* __fastcall GetHitTest(const System::Types::TPoint &P);
	virtual void __fastcall Paint();
	void __fastcall RightToLeftConversion(const System::Types::TRect &ABounds);
	__property bool IsRightToLeftConverted = {read=FIsRightToLeftConverted, write=FIsRightToLeftConverted, nodefault};
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridRowsViewInfoClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridRowsViewInfo : public Cxgridcustomtableview::TcxCustomGridRecordsViewInfo
{
	typedef Cxgridcustomtableview::TcxCustomGridRecordsViewInfo inherited;
	
public:
	TcxCustomGridRowViewInfo* operator[](int Index) { return this->Items[Index]; }
	
private:
	int FCommonPreviewHeight;
	int FDataRowHeight;
	TcxCustomGridRowViewInfo* FFilterRowViewInfo;
	TcxGridFixedDataRowsViewInfo* FFixedDataRowsViewInfo;
	int FGroupRowHeight;
	TcxCustomGridRowViewInfo* FNewItemRowViewInfo;
	int FRestHeight;
	int FRowHeight;
	int FSpecialDataRowHeight;
	int FSpecialRowHeight;
	HIDESBASE TcxGridTableController* __fastcall GetController();
	TcxCustomGridRowViewInfo* __fastcall GetFilterRowViewInfo();
	Cxgraphics::TcxGridLines __fastcall GetGridLines();
	int __fastcall GetGridLineWidth();
	HIDESBASE TcxGridTableView* __fastcall GetGridView();
	TcxGridTableViewInfo* __fastcall GetGridViewInfo();
	TcxGridHeaderViewInfo* __fastcall GetHeaderViewInfo();
	HIDESBASE TcxCustomGridRowViewInfo* __fastcall GetItem(int Index);
	TcxCustomGridRowViewInfo* __fastcall GetNewItemRowViewInfo();
	TcxGridRowsPainterClass __fastcall GetPainterClassValue();
	HIDESBASE TcxGridViewData* __fastcall GetViewData();
	void __fastcall CalculateFixedGroupsForPixelScrolling();
	void __fastcall CheckOverlapRows(Dxcoreclasses::TdxFastList* AFixedGroups);
	void __fastcall CorrectFixedGroupIndicatorsOrder(Dxcoreclasses::TdxFastList* AFixedGroups);
	void __fastcall PopulateFixedGroups(Dxcoreclasses::TdxFastList* AFixedGroups);
	void __fastcall PostFixedGroups(Dxcoreclasses::TdxFastList* AFixedGroups);
	void __fastcall RecalculateFixedGroups(Dxcoreclasses::TdxFastList* AFixedGroups);
	void __fastcall CalculateFixedGroupsForRecordScrolling();
	void __fastcall CreateMissingItems(TcxCustomGridRowViewInfo* ABottomViewInfo, int ATopBound);
	
protected:
	bool FIsFirstRowFullyVisible;
	virtual void __fastcall AfterCalculate();
	virtual void __fastcall AfterOffset();
	virtual void __fastcall Calculate();
	virtual System::Types::TRect __fastcall CalculateBounds();
	virtual void __fastcall CalculateConsts();
	virtual System::Types::TRect __fastcall CalculateContentBounds();
	virtual int __fastcall CalculateDataRowHeight(bool AConsideLayout = true);
	virtual int __fastcall CalculateSpecialDataRowHeight();
	virtual int __fastcall CalculateSpecialRowHeight();
	void __fastcall CalculateFixedGroups();
	virtual int __fastcall CalculateGroupImagesHeight();
	virtual int __fastcall CalculateGroupRowDefaultHeight(bool AMinHeight);
	virtual int __fastcall CalculateGroupRowHeight();
	virtual void __fastcall CalculateItems();
	virtual int __fastcall CalculatePreviewDefaultHeight();
	virtual int __fastcall CalculateRestHeight(int ATopBound);
	virtual int __fastcall CalculateRowDefaultHeight(bool AConsideLayout = true);
	virtual int __fastcall CalculateRowHeight(bool AConsideLayout = true);
	virtual void __fastcall CalculateVisibleCount();
	virtual void __fastcall ControlFocusChanged();
	virtual TcxCustomGridRowViewInfo* __fastcall CreateFixedGroupRowViewInfo(TcxCustomGridRow* ARow);
	virtual TcxCustomGridRowViewInfo* __fastcall CreateRowViewInfo(TcxCustomGridRow* ARow);
	int __fastcall GetAdjustedScrollPositionForFixedGroupMode(TcxCustomGridRow* ARow, int APosition);
	int __fastcall GetAdjustedPixelScrollPositionForFixedGroupsMode(TcxCustomGridRow* ARow, int APosition);
	int __fastcall GetAdjustedIndexScrollPositionForFixedGroupsMode(TcxCustomGridRow* ARow, int APosition);
	virtual bool __fastcall GetAutoDataCellHeight();
	virtual System::Types::TRect __fastcall GetCellAreaBounds(Cxgridcustomtableview::TcxGridTableDataCellViewInfo* ACellViewInfo);
	virtual int __fastcall GetCommonDataRowHeight();
	virtual Cxgridcustomview::TcxCustomGridHitTest* __fastcall GetDataRowCellsHitTestByFixedKind(const System::Types::TPoint &P, TcxCustomGridRowViewInfo* ARowViewInfo, TcxGridColumnFixedKind AKind);
	virtual TcxCustomGridRowViewInfoClass __fastcall GetFilterRowViewInfoClass();
	int __fastcall GetFixedGroupsBottomBound();
	int __fastcall GetFixedGroupsCount();
	virtual Vcl::Graphics::TBitmap* __fastcall GetGroupBackgroundBitmap();
	virtual int __fastcall GetGroupRowSeparatorWidth();
	virtual int __fastcall GetItemLeftBound(int AIndex);
	virtual int __fastcall GetItemsOffset(int AItemCountDelta);
	virtual int __fastcall GetItemTopBound(int AIndex);
	virtual bool __fastcall GetIsScrollable();
	virtual TcxCustomGridRowViewInfoClass __fastcall GetNewItemRowViewInfoClass();
	virtual int __fastcall GetNextNonOverlappedIndex(int AIndex);
	virtual Cxgridcustomtableview::TcxCustomGridRecordsPainterClass __fastcall GetPainterClass();
	virtual System::Types::TRect __fastcall GetRowFocusRectBounds(TcxCustomGridRowViewInfo* ARowViewInfo);
	virtual int __fastcall GetRowWidth();
	virtual int __fastcall GetSeparatorWidth();
	virtual int __fastcall GetViewInfoIndexByRecordIndex(int ARecordIndex);
	bool __fastcall HasFilterRow();
	bool __fastcall HasFixedDataRows();
	virtual bool __fastcall HasLastHorzGridLine(TcxCustomGridRowViewInfo* ARowViewInfo);
	bool __fastcall HasNewItemRow();
	virtual bool __fastcall IsFilterRowVisible();
	virtual bool __fastcall IsFixedDataRowsVisible();
	virtual bool __fastcall IsNewItemRowVisible();
	virtual bool __fastcall IsRowLocatedInGroup(int ARowIndex, int AGroupIndex, int ALevel);
	virtual bool __fastcall NeedCalculateFixedGroups();
	void __fastcall NotifyItemsCalculationFinished();
	virtual void __fastcall OffsetItem(int AIndex, int AOffset);
	virtual void __fastcall UpdateVisibleCount();
	virtual void __fastcall VisibilityChanged(bool AVisible);
	__property int CommonPreviewHeight = {read=FCommonPreviewHeight, nodefault};
	__property TcxGridTableController* Controller = {read=GetController};
	__property TcxGridFixedDataRowsViewInfo* FixedDataRowsViewInfo = {read=FFixedDataRowsViewInfo};
	__property int GridLineWidth = {read=GetGridLineWidth, nodefault};
	__property TcxGridTableView* GridView = {read=GetGridView};
	__property TcxGridTableViewInfo* GridViewInfo = {read=GetGridViewInfo};
	__property TcxGridHeaderViewInfo* HeaderViewInfo = {read=GetHeaderViewInfo};
	__property bool IsScrollable = {read=GetIsScrollable, nodefault};
	__property TcxGridViewData* ViewData = {read=GetViewData};
	
public:
	__fastcall virtual ~TcxGridRowsViewInfo();
	virtual void __fastcall AfterConstruction();
	virtual int __fastcall CalculateCustomGroupRowHeight(bool AMinHeight, const Cxgraphics::TcxViewParams &AParams);
	virtual bool __fastcall CanDataRowSize();
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	virtual int __fastcall GetCellHeight(int ACellContentHeight);
	virtual System::TClass __fastcall GetDataRowCellsAreaViewInfoClass();
	virtual Cxgridcustomview::TcxCustomGridHitTest* __fastcall GetDataRowCellsHitTest(const System::Types::TPoint &P, TcxCustomGridRowViewInfo* ARowViewInfo);
	int __fastcall GetFooterCellBestFitWidth(TcxGridColumn* AColumn);
	virtual Cxgridcustomview::TcxCustomGridHitTest* __fastcall GetHitTest(const System::Types::TPoint &P);
	virtual Cxgridcustomtableview::TcxCustomGridRecordViewInfo* __fastcall GetRealItem(Cxgridcustomtableview::TcxCustomGridRecord* ARecord);
	virtual int __fastcall GetRestHeight(int ATopBound);
	virtual bool __fastcall IsCellMultiLine(Cxgridcustomtableview::TcxCustomGridTableItem* AItem);
	virtual bool __fastcall IsDataRowHeightAssigned();
	virtual void __fastcall Offset(int DX, int DY);
	__property int CommonDataRowHeight = {read=GetCommonDataRowHeight, nodefault};
	__property int DataRowHeight = {read=FDataRowHeight, nodefault};
	__property TcxCustomGridRowViewInfo* FilterRowViewInfo = {read=GetFilterRowViewInfo};
	__property Cxgraphics::TcxGridLines GridLines = {read=GetGridLines, nodefault};
	__property Vcl::Graphics::TBitmap* GroupBackgroundBitmap = {read=GetGroupBackgroundBitmap};
	__property int GroupRowHeight = {read=FGroupRowHeight, write=FGroupRowHeight, nodefault};
	__property int GroupRowSeparatorWidth = {read=GetGroupRowSeparatorWidth, nodefault};
	__property bool IsFirstRowFullyVisible = {read=FIsFirstRowFullyVisible, nodefault};
	__property TcxCustomGridRowViewInfo* Items[int Index] = {read=GetItem/*, default*/};
	__property TcxCustomGridRowViewInfo* NewItemRowViewInfo = {read=GetNewItemRowViewInfo};
	__property TcxGridRowsPainterClass PainterClass = {read=GetPainterClassValue};
	__property int RowHeight = {read=FRowHeight, write=FRowHeight, nodefault};
	__property int RowWidth = {read=GetRowWidth, nodefault};
	__property int SeparatorWidth = {read=GetSeparatorWidth, nodefault};
	__property int SpecialDataRowHeight = {read=FSpecialDataRowHeight, nodefault};
	__property int SpecialRowHeight = {read=FSpecialRowHeight, nodefault};
public:
	/* TcxCustomGridRecordsViewInfo.Create */ inline __fastcall virtual TcxGridRowsViewInfo(Cxgridcustomtableview::TcxCustomGridTableViewInfo* AGridViewInfo) : Cxgridcustomtableview::TcxCustomGridRecordsViewInfo(AGridViewInfo) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridTableViewInfo : public Cxgridcustomtableview::TcxCustomGridTableViewInfo
{
	typedef Cxgridcustomtableview::TcxCustomGridTableViewInfo inherited;
	
private:
	int FBorderOverlapSize;
	int FDataWidth;
	int FExpandButtonIndent;
	TcxGridFooterViewInfo* FFooterViewInfo;
	System::Uitypes::TColor FGridLineColor;
	TcxGridGroupByBoxViewInfo* FGroupByBoxViewInfo;
	TcxGridHeaderViewInfo* FHeaderViewInfo;
	TcxGridIndicatorViewInfo* FIndicatorViewInfo;
	int FLevelIndent;
	int FPrevDataRowHeight;
	HIDESBASE TcxGridTableController* __fastcall GetController();
	int __fastcall GetDataWidth();
	TcxGridTableFindPanelViewInfo* __fastcall GetFindPanelViewInfo();
	int __fastcall GetFixedSeparatorWidth();
	HIDESBASE TcxGridTableView* __fastcall GetGridView();
	Cxgraphics::TcxGridLines __fastcall GetGridLines();
	int __fastcall GetHeaderWidth();
	int __fastcall GetLeftPos();
	Vcl::Graphics::TBitmap* __fastcall GetLevelIndentBackgroundBitmap();
	System::Uitypes::TColor __fastcall GetLevelIndentColor(int Index);
	HIDESBASE TcxGridTablePainter* __fastcall GetPainter();
	TcxGridRowsViewInfo* __fastcall GetRecordsViewInfo();
	HIDESBASE TcxGridViewData* __fastcall GetViewData();
	
protected:
	virtual void __fastcall AfterCalculating();
	virtual void __fastcall BeforeCalculating();
	virtual void __fastcall CreateViewInfos();
	virtual void __fastcall DestroyViewInfos(bool AIsRecreating);
	virtual void __fastcall Calculate();
	virtual int __fastcall CalculateBorderOverlapSize();
	virtual System::Types::TRect __fastcall CalculateClientBounds();
	virtual int __fastcall CalculateDataWidth();
	virtual int __fastcall GetEqualHeightRecordScrollSize();
	virtual void __fastcall CalculateExpandButtonParams();
	virtual void __fastcall CalculateHeight(const System::Types::TPoint &AMaxSize, int &AHeight, bool &AFullyVisible);
	virtual System::Types::TRect __fastcall CalculatePartBounds(Cxgridcustomtableview::TcxCustomGridPartViewInfo* APart);
	virtual void __fastcall CalculateParams();
	virtual void __fastcall CalculateParts();
	virtual int __fastcall CalculateVisibleEqualHeightRecordCount();
	virtual void __fastcall CalculateWidth(const System::Types::TPoint &AMaxSize, int &AWidth);
	virtual Cxgridcustomtableview::TcxGridFindPanelViewInfo* __fastcall CreateFindPanelViewInfo();
	virtual Cxgridcustomview::TcxCustomGridHitTest* __fastcall DoGetHitTest(const System::Types::TPoint &P);
	virtual System::Types::TRect __fastcall GetBoundsForMakeItemVisible(TcxCustomGridColumn* AColumn);
	virtual int __fastcall GetColumnFooterWidth(TcxGridFooterViewInfo* AFooterViewInfo, TcxGridColumn* AColumn);
	virtual int __fastcall GetDefaultGridModeBufferCount();
	virtual int __fastcall GetFirstItemAdditionalWidth();
	virtual Dxcoregraphics::TdxAlphaColor __fastcall GetFixedHighlightColor();
	virtual System::Byte __fastcall GetFixedHighlightColorMaxAlpha();
	virtual int __fastcall GetFixedSeparatorActualWidth(int ANeighborBorderWidth);
	virtual System::Uitypes::TColor __fastcall GetFixedSeparatorColor();
	virtual int __fastcall GetGridLineWidth();
	virtual System::Uitypes::TColor __fastcall GetLevelSeparatorColor();
	virtual System::Types::TRect __fastcall GetMultilineEditorBounds(const System::Types::TRect &ACellEditBounds, int ACalculatedHeight, Cxedit::TcxInplaceEditAutoHeight AAutoHeight);
	virtual int __fastcall GetNonRecordsAreaHeight(bool ACheckScrollBar);
	virtual System::Types::TRect __fastcall GetScrollableAreaBoundsForEdit();
	virtual System::Types::TRect __fastcall GetScrollableAreaBoundsHorz();
	virtual System::Types::TRect __fastcall GetScrollableAreaBoundsVert();
	int __fastcall GetScrollContentWidth();
	virtual int __fastcall GetVisualLevelCount();
	bool __fastcall HasFirstBorderOverlap();
	virtual bool __fastcall IsCellPartVisible(Cxgridcustomtableview::TcxGridTableDataCellViewInfo* ACell);
	virtual bool __fastcall NeedIncludeVerticalScrollBarAreaInScrollContent();
	virtual void __fastcall Offset(int DX, int DY);
	virtual void __fastcall RecreateViewInfos();
	virtual bool __fastcall SupportsAutoHeight();
	virtual bool __fastcall SupportsGroupSummariesAlignedWithColumns();
	virtual bool __fastcall SupportsMultipleFooterSummaries();
	virtual TcxGridFooterPainterClass __fastcall GetFooterPainterClass();
	virtual TcxGridFooterViewInfoClass __fastcall GetFooterViewInfoClass();
	virtual TcxGridGroupByBoxViewInfoClass __fastcall GetGroupByBoxViewInfoClass();
	virtual TcxGridHeaderViewInfoClass __fastcall GetHeaderViewInfoClass();
	virtual TcxGridIndicatorViewInfoClass __fastcall GetIndicatorViewInfoClass();
	virtual TcxGridHeaderViewInfoSpecificClass __fastcall GetHeaderViewInfoSpecificClass();
	virtual Cxgridcustomtableview::TcxCustomGridRecordsViewInfoClass __fastcall GetRecordsViewInfoClass();
	__property int BorderOverlapSize = {read=FBorderOverlapSize, nodefault};
	__property TcxGridTableController* Controller = {read=GetController};
	__property Dxcoregraphics::TdxAlphaColor FixedHighlightColor = {read=GetFixedHighlightColor, nodefault};
	__property System::Uitypes::TColor FixedSeparatorColor = {read=GetFixedSeparatorColor, nodefault};
	__property int FixedSeparatorWidth = {read=GetFixedSeparatorWidth, nodefault};
	__property int HeaderWidth = {read=GetHeaderWidth, nodefault};
	__property TcxGridViewData* ViewData = {read=GetViewData};
	
public:
	virtual bool __fastcall CanOffset(int ARecordCountDelta, int APixelScrollRecordOffsetDelta, int DX, int DY);
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	virtual Cxgeometry::TcxBorders __fastcall GetCellBorders(bool AIsRight, bool AIsBottom);
	virtual int __fastcall GetCellHeight(int AIndex, int ACellHeight);
	virtual int __fastcall GetCellTopOffset(int AIndex, int ACellHeight);
	virtual System::Types::TRect __fastcall GetOffsetBounds(int AItemsOffset, /* out */ System::Types::TRect &AUpdateBounds)/* overload */;
	virtual System::Types::TRect __fastcall GetOffsetBounds(int DX, int DY, /* out */ System::Types::TRect &AUpdateBounds)/* overload */;
	virtual int __fastcall GetVisualLevel(int ALevel);
	virtual int __fastcall GetNearestPopupHeight(int AHeight, bool AAdditionalRecord = false);
	virtual int __fastcall GetPopupHeight(int ADropDownRowCount);
	__property int DataWidth = {read=GetDataWidth, nodefault};
	__property int ExpandButtonIndent = {read=FExpandButtonIndent, write=FExpandButtonIndent, nodefault};
	__property TcxGridTableFindPanelViewInfo* FindPanelViewInfo = {read=GetFindPanelViewInfo};
	__property int FirstItemAdditionalWidth = {read=GetFirstItemAdditionalWidth, nodefault};
	__property TcxGridFooterViewInfo* FooterViewInfo = {read=FFooterViewInfo};
	__property System::Uitypes::TColor GridLineColor = {read=FGridLineColor, nodefault};
	__property Cxgraphics::TcxGridLines GridLines = {read=GetGridLines, nodefault};
	__property int GridLineWidth = {read=GetGridLineWidth, nodefault};
	__property TcxGridTableView* GridView = {read=GetGridView};
	__property TcxGridGroupByBoxViewInfo* GroupByBoxViewInfo = {read=FGroupByBoxViewInfo};
	__property TcxGridHeaderViewInfo* HeaderViewInfo = {read=FHeaderViewInfo};
	__property TcxGridIndicatorViewInfo* IndicatorViewInfo = {read=FIndicatorViewInfo};
	__property int LeftPos = {read=GetLeftPos, nodefault};
	__property int LevelIndent = {read=FLevelIndent, write=FLevelIndent, nodefault};
	__property Vcl::Graphics::TBitmap* LevelIndentBackgroundBitmap = {read=GetLevelIndentBackgroundBitmap};
	__property System::Uitypes::TColor LevelIndentColors[int Index] = {read=GetLevelIndentColor};
	__property System::Uitypes::TColor LevelSeparatorColor = {read=GetLevelSeparatorColor, nodefault};
	__property TcxGridTablePainter* Painter = {read=GetPainter};
	__property TcxGridRowsViewInfo* RecordsViewInfo = {read=GetRecordsViewInfo};
	__property int VisualLevelCount = {read=GetVisualLevelCount, nodefault};
public:
	/* TcxCustomGridTableViewInfo.Create */ inline __fastcall virtual TcxGridTableViewInfo(Cxgridcustomview::TcxCustomGridView* AGridView) : Cxgridcustomtableview::TcxCustomGridTableViewInfo(AGridView) { }
	/* TcxCustomGridTableViewInfo.Destroy */ inline __fastcall virtual ~TcxGridTableViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridTableViewInfoCacheItem : public Cxgridcustomtableview::TcxCustomGridTableViewInfoCacheItem
{
	typedef Cxgridcustomtableview::TcxCustomGridTableViewInfoCacheItem inherited;
	
private:
	bool FIsPreviewHeightAssigned;
	int FPreviewHeight;
	void __fastcall SetPreviewHeight(int Value);
	
public:
	virtual void __fastcall UnassignValues(bool AKeepMaster);
	__property bool IsPreviewHeightAssigned = {read=FIsPreviewHeightAssigned, write=FIsPreviewHeightAssigned, nodefault};
	__property int PreviewHeight = {read=FPreviewHeight, write=SetPreviewHeight, nodefault};
public:
	/* TcxCustomGridViewInfoCacheItem.Create */ inline __fastcall virtual TcxGridTableViewInfoCacheItem(Cxgridcustomview::TcxCustomGridViewInfoCache* AOwner, int AIndex) : Cxgridcustomtableview::TcxCustomGridTableViewInfoCacheItem(AOwner, AIndex) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridTableViewInfoCacheItem() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridMasterTableViewInfoCacheItem : public TcxGridTableViewInfoCacheItem
{
	typedef TcxGridTableViewInfoCacheItem inherited;
	
private:
	bool FIsDetailsSiteFullyVisibleAssigned;
	bool FIsDetailsSiteHeightAssigned;
	bool FIsDetailsSiteNormalHeightAssigned;
	bool FIsDetailsSiteWidthAssigned;
	bool FDetailsSiteFullyVisible;
	int FDetailsSiteHeight;
	int FDetailsSiteNormalHeight;
	int FDetailsSiteWidth;
	bool FUnassigningValues;
	HIDESBASE TcxGridMasterDataRow* __fastcall GetGridRecord();
	bool __fastcall GetIsDetailsSiteCachedInfoAssigned();
	void __fastcall SetDetailsSiteFullyVisible(bool Value);
	void __fastcall SetDetailsSiteHeight(int Value);
	void __fastcall SetDetailsSiteNormalHeight(int Value);
	void __fastcall SetDetailsSiteWidth(int Value);
	
protected:
	__property TcxGridMasterDataRow* GridRecord = {read=GetGridRecord};
	
public:
	Cxgriddetailssite::TcxCustomGridDetailsSiteViewInfoCachedInfo* DetailsSiteCachedInfo;
	__fastcall virtual ~TcxGridMasterTableViewInfoCacheItem();
	virtual void __fastcall UnassignValues(bool AKeepMaster);
	__property bool IsDetailsSiteCachedInfoAssigned = {read=GetIsDetailsSiteCachedInfoAssigned, nodefault};
	__property bool IsDetailsSiteFullyVisibleAssigned = {read=FIsDetailsSiteFullyVisibleAssigned, write=FIsDetailsSiteFullyVisibleAssigned, nodefault};
	__property bool IsDetailsSiteHeightAssigned = {read=FIsDetailsSiteHeightAssigned, write=FIsDetailsSiteHeightAssigned, nodefault};
	__property bool IsDetailsSiteNormalHeightAssigned = {read=FIsDetailsSiteNormalHeightAssigned, write=FIsDetailsSiteNormalHeightAssigned, nodefault};
	__property bool IsDetailsSiteWidthAssigned = {read=FIsDetailsSiteWidthAssigned, write=FIsDetailsSiteWidthAssigned, nodefault};
	__property bool DetailsSiteFullyVisible = {read=FDetailsSiteFullyVisible, write=SetDetailsSiteFullyVisible, nodefault};
	__property int DetailsSiteHeight = {read=FDetailsSiteHeight, write=SetDetailsSiteHeight, nodefault};
	__property int DetailsSiteNormalHeight = {read=FDetailsSiteNormalHeight, write=SetDetailsSiteNormalHeight, nodefault};
	__property int DetailsSiteWidth = {read=FDetailsSiteWidth, write=SetDetailsSiteWidth, nodefault};
public:
	/* TcxCustomGridViewInfoCacheItem.Create */ inline __fastcall virtual TcxGridMasterTableViewInfoCacheItem(Cxgridcustomview::TcxCustomGridViewInfoCache* AOwner, int AIndex) : TcxGridTableViewInfoCacheItem(AOwner, AIndex) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridColumnOptions : public Cxgridcustomtableview::TcxCustomGridTableItemOptions
{
	typedef Cxgridcustomtableview::TcxCustomGridTableItemOptions inherited;
	
private:
	bool FAutoWidthSizable;
	bool FCellMerging;
	bool FGroupFooters;
	bool FHorzSizing;
	bool FShowGroupValuesWithImages;
	Cxfilter::TcxFilterOperatorKind __fastcall GetFilterRowOperator();
	HIDESBASE TcxGridTableView* __fastcall GetGridView();
	HIDESBASE TcxCustomGridColumn* __fastcall GetItem();
	void __fastcall SetAutoWidthSizable(bool Value);
	void __fastcall SetCellMerging(bool Value);
	void __fastcall SetFilterRowOperator(Cxfilter::TcxFilterOperatorKind Value);
	void __fastcall SetGroupFooters(bool Value);
	void __fastcall SetHorzSizing(bool Value);
	void __fastcall SetShowGroupValuesWithImages(bool Value);
	
protected:
	__property TcxGridTableView* GridView = {read=GetGridView};
	
public:
	__fastcall virtual TcxCustomGridColumnOptions(Cxgridcustomtableview::TcxCustomGridTableItem* AItem);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property bool AutoWidthSizable = {read=FAutoWidthSizable, write=SetAutoWidthSizable, default=1};
	__property bool CellMerging = {read=FCellMerging, write=SetCellMerging, default=0};
	__property bool GroupFooters = {read=FGroupFooters, write=SetGroupFooters, default=1};
	__property bool HorzSizing = {read=FHorzSizing, write=SetHorzSizing, default=1};
	__property TcxCustomGridColumn* Item = {read=GetItem};
	
__published:
	__property FilteringAddValueItems = {default=1};
	__property FilteringExcelPopupApplyChanges = {default=0};
	__property FilteringExcelPopupDateTimeValuesPageType = {default=0};
	__property FilteringExcelPopupDefaultPage = {default=0};
	__property FilteringExcelPopupNumericValuesPageType = {default=0};
	__property FilteringFilteredItemsList = {default=1};
	__property FilteringFilteredItemsListShowFilteredItemsOnly = {default=1};
	__property FilteringMRUItemsList = {default=1};
	__property FilteringPopup = {default=1};
	__property FilteringPopupIncrementalFiltering = {default=0};
	__property FilteringPopupIncrementalFilteringOptions = {default=3};
	__property FilteringPopupMode = {default=0};
	__property FilteringPopupMultiSelect = {default=1};
	__property Cxfilter::TcxFilterOperatorKind FilterRowOperator = {read=GetFilterRowOperator, write=SetFilterRowOperator, default=0};
	__property ShowEditButtons = {default=0};
	__property bool ShowGroupValuesWithImages = {read=FShowGroupValuesWithImages, write=SetShowGroupValuesWithImages, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxCustomGridColumnOptions() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridColumnOptions : public TcxCustomGridColumnOptions
{
	typedef TcxCustomGridColumnOptions inherited;
	
__published:
	__property AutoWidthSizable = {default=1};
	__property CellMerging = {default=0};
	__property EditAutoHeight = {default=0};
	__property ExpressionEditing = {default=1};
	__property GroupFooters = {default=1};
	__property Grouping = {default=1};
	__property HorzSizing = {default=1};
	__property Moving = {default=1};
	__property ShowCaption = {default=1};
	__property SortByDisplayText = {default=0};
	__property Sorting = {default=1};
public:
	/* TcxCustomGridColumnOptions.Create */ inline __fastcall virtual TcxGridColumnOptions(Cxgridcustomtableview::TcxCustomGridTableItem* AItem) : TcxCustomGridColumnOptions(AItem) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxGridColumnOptions() { }
	
};

#pragma pack(pop)

typedef void __fastcall (__closure *TcxGridGetFooterStyleExEvent)(TcxGridTableView* Sender, TcxCustomGridRow* ARow, TcxGridColumn* AColumn, int AFooterGroupLevel, Cxstyles::TcxStyle* &AStyle);

typedef void __fastcall (__closure *TcxGridGetFooterSummaryStyleEvent)(TcxGridTableView* AView, TcxCustomGridRow* ARow, TcxGridColumn* AColumn, int AFooterGroupLevel, Cxcustomdata::TcxDataSummaryItem* ASummaryItem, Cxstyles::TcxStyle* &AStyle);

typedef void __fastcall (__closure *TcxGridGetGroupSummaryStyleEvent)(TcxGridTableView* Sender, TcxGridGroupRow* ARow, TcxGridColumn* AColumn, Cxcustomdata::TcxDataSummaryItem* ASummaryItem, Cxstyles::TcxStyle* &AStyle);

typedef void __fastcall (__closure *TcxGridGetHeaderStyleEvent)(TcxGridTableView* Sender, TcxGridColumn* AColumn, Cxstyles::TcxStyle* &AStyle);

class PASCALIMPLEMENTATION TcxGridColumnStyles : public Cxgridcustomtableview::TcxCustomGridTableItemStyles
{
	typedef Cxgridcustomtableview::TcxCustomGridTableItemStyles inherited;
	
private:
	Cxgridcustomtableview::TcxGridGetCellStyleEvent FOnGetFooterStyle;
	TcxGridGetFooterStyleExEvent FOnGetFooterStyleEx;
	TcxGridGetFooterSummaryStyleEvent FOnGetFooterSummaryStyle;
	TcxGridGetGroupSummaryStyleEvent FOnGetGroupSummaryStyle;
	TcxGridGetHeaderStyleEvent FOnGetHeaderStyle;
	HIDESBASE TcxGridTableView* __fastcall GetGridViewValue();
	HIDESBASE TcxGridColumn* __fastcall GetItem();
	void __fastcall SetOnGetFooterStyle(Cxgridcustomtableview::TcxGridGetCellStyleEvent Value);
	void __fastcall SetOnGetFooterStyleEx(TcxGridGetFooterStyleExEvent Value);
	void __fastcall SetOnGetFooterSummaryStyle(TcxGridGetFooterSummaryStyleEvent Value);
	void __fastcall SetOnGetGroupSummaryStyle(TcxGridGetGroupSummaryStyleEvent Value);
	void __fastcall SetOnGetHeaderStyle(TcxGridGetHeaderStyleEvent Value);
	
protected:
	virtual void __fastcall GetDefaultViewParams(int Index, System::TObject* AData, /* out */ Cxgraphics::TcxViewParams &AParams);
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall GetFooterParams(TcxCustomGridRow* ARow, int AFooterGroupLevel, Cxcustomdata::TcxDataSummaryItem* ASummaryItem, /* out */ Cxgraphics::TcxViewParams &AParams);
	virtual void __fastcall GetGroupSummaryParams(TcxGridGroupRow* ARow, Cxcustomdata::TcxDataSummaryItem* ASummaryItem, /* out */ Cxgraphics::TcxViewParams &AParams);
	virtual void __fastcall GetHeaderParams(/* out */ Cxgraphics::TcxViewParams &AParams);
	__property TcxGridTableView* GridView = {read=GetGridViewValue};
	__property TcxGridColumn* Item = {read=GetItem};
	
__published:
	__property Cxstyles::TcxStyle* Footer = {read=GetValue, write=SetValue, index=1};
	__property Cxstyles::TcxStyle* GroupSummary = {read=GetValue, write=SetValue, index=2};
	__property Cxstyles::TcxStyle* Header = {read=GetValue, write=SetValue, index=3};
	__property Cxgridcustomtableview::TcxGridGetCellStyleEvent OnGetFooterStyle = {read=FOnGetFooterStyle, write=SetOnGetFooterStyle};
	__property TcxGridGetFooterStyleExEvent OnGetFooterStyleEx = {read=FOnGetFooterStyleEx, write=SetOnGetFooterStyleEx};
	__property TcxGridGetFooterSummaryStyleEvent OnGetFooterSummaryStyle = {read=FOnGetFooterSummaryStyle, write=SetOnGetFooterSummaryStyle};
	__property TcxGridGetGroupSummaryStyleEvent OnGetGroupSummaryStyle = {read=FOnGetGroupSummaryStyle, write=SetOnGetGroupSummaryStyle};
	__property TcxGridGetHeaderStyleEvent OnGetHeaderStyle = {read=FOnGetHeaderStyle, write=SetOnGetHeaderStyle};
public:
	/* TcxCustomGridTableItemStyles.Create */ inline __fastcall virtual TcxGridColumnStyles(System::Classes::TPersistent* AOwner) : Cxgridcustomtableview::TcxCustomGridTableItemStyles(AOwner) { }
	
public:
	/* TcxStyles.Destroy */ inline __fastcall virtual ~TcxGridColumnStyles() { }
	
};


enum DECLSPEC_DENUM TcxGridSummariesIndex : unsigned char { siFooter, siGroupFooter, siGroup };

typedef System::TMetaClass* TcxGridColumnSummaryClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridColumnSummary : public Cxgridcustomtableview::TcxCustomGridTableItemCustomOptions
{
	typedef Cxgridcustomtableview::TcxCustomGridTableItemCustomOptions inherited;
	
private:
	Cxcustomdata::TcxCustomDataController* __fastcall GetDataController();
	System::UnicodeString __fastcall GetFormat(int Index);
	Cxcustomdata::TcxSummaryKind __fastcall GetKind(int Index);
	bool __fastcall GetSortByGroupFooterSummary();
	bool __fastcall GetSortByGroupSummary();
	void __fastcall SetFormat(int Index, const System::UnicodeString Value);
	void __fastcall SetKind(int Index, Cxcustomdata::TcxSummaryKind Value);
	void __fastcall SetSortByGroupFooterSummary(bool Value);
	void __fastcall SetSortByGroupSummary(bool Value);
	
protected:
	Cxcustomdata::TcxDataSummaryItems* __fastcall GetSummaryItems(TcxGridSummariesIndex AIndex);
	Cxcustomdata::TcxSummaryPosition __fastcall GetSummaryItemsPosition(TcxGridSummariesIndex AIndex);
	__property Cxcustomdata::TcxCustomDataController* DataController = {read=GetDataController};
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property Cxcustomdata::TcxSummaryKind FooterKind = {read=GetKind, write=SetKind, stored=false, index=0, nodefault};
	__property System::UnicodeString FooterFormat = {read=GetFormat, write=SetFormat, stored=false, index=0};
	__property Cxcustomdata::TcxSummaryKind GroupFooterKind = {read=GetKind, write=SetKind, stored=false, index=1, nodefault};
	__property System::UnicodeString GroupFooterFormat = {read=GetFormat, write=SetFormat, stored=false, index=1};
	__property Cxcustomdata::TcxSummaryKind GroupKind = {read=GetKind, write=SetKind, stored=false, index=2, nodefault};
	__property System::UnicodeString GroupFormat = {read=GetFormat, write=SetFormat, stored=false, index=2};
	__property bool SortByGroupFooterSummary = {read=GetSortByGroupFooterSummary, write=SetSortByGroupFooterSummary, stored=false, nodefault};
	__property bool SortByGroupSummary = {read=GetSortByGroupSummary, write=SetSortByGroupSummary, stored=false, nodefault};
public:
	/* TcxCustomGridTableItemCustomOptions.Create */ inline __fastcall virtual TcxGridColumnSummary(Cxgridcustomtableview::TcxCustomGridTableItem* AItem) : Cxgridcustomtableview::TcxCustomGridTableItemCustomOptions(AItem) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxGridColumnSummary() { }
	
};

#pragma pack(pop)

typedef void __fastcall (__closure *TcxGridColumnCompareRowValuesEvent)(TcxGridColumn* Sender, TcxGridDataRow* ARow1, Cxedit::TcxCustomEditProperties* AProperties1, const System::Variant &AValue1, TcxGridDataRow* ARow2, Cxedit::TcxCustomEditProperties* AProperties2, const System::Variant &AValue2, bool &AAreEqual);

typedef void __fastcall (__closure *TcxGridColumnCompareValuesEvent)(TcxGridColumn* Sender, Cxedit::TcxCustomEditProperties* AProperties1, const System::Variant &AValue1, Cxedit::TcxCustomEditProperties* AProperties2, const System::Variant &AValue2, bool &AAreEqual);

typedef void __fastcall (__closure *TcxGridColumnCustomDrawHeaderEvent)(TcxGridTableView* Sender, Cxgraphics::TcxCanvas* ACanvas, TcxGridColumnHeaderViewInfo* AViewInfo, bool &ADone);

typedef void __fastcall (__closure *TcxGridGroupSummaryCellCustomDrawEvent)(System::TObject* Sender, Cxgraphics::TcxCanvas* ACanvas, TcxGridGroupRow* ARow, TcxGridColumn* AColumn, Cxcustomdata::TcxDataSummaryItem* ASummaryItem, Cxgridcustomview::TcxCustomGridViewCellViewInfo* AViewInfo, bool &ADone);

class PASCALIMPLEMENTATION TcxCustomGridColumn : public Cxgridcustomtableview::TcxCustomGridTableItem
{
	typedef Cxgridcustomtableview::TcxCustomGridTableItem inherited;
	
private:
	System::Classes::TAlignment FFooterAlignmentHorz;
	System::Classes::TAlignment FGroupSummaryAlignment;
	Dxgdiplusclasses::TdxSmartGlyph* FHeaderGlyph;
	System::Classes::TAlignment FHeaderGlyphAlignmentHorz;
	Cxclasses::TcxAlignmentVert FHeaderGlyphAlignmentVert;
	System::Uitypes::TImageIndex FHeaderImageIndex;
	Cxfilter::TcxFilterOperatorKind FFilterRowOperator;
	TcxGridColumnFixedKind FFixedKind;
	bool FIsFooterAlignmentHorzAssigned;
	bool FIsGroupSummaryAlignmentAssigned;
	bool FIsPreview;
	Cxgridinplaceeditform::TcxGridInplaceEditFormLayoutItem* FLayoutItem;
	TcxGridTableRowLayoutItem* FRowLayoutItem;
	bool FSelected;
	TcxGridColumnSummary* FSummary;
	Dxcore::TdxDefaultBoolean FVisibleForEditForm;
	Dxcore::TdxDefaultBoolean FVisibleForRowLayout;
	HIDESBASE TcxGridTableController* __fastcall GetController();
	Cxfilter::TcxFilterOperatorKind __fastcall GetFilterRowOperator();
	System::Classes::TAlignment __fastcall GetFooterAlignmentHorz();
	TcxGridTableView* __fastcall GetGridView();
	System::Classes::TAlignment __fastcall GetGroupSummaryAlignment();
	bool __fastcall GetIsChildInMergedGroup();
	TcxCustomGridColumnOptions* __fastcall GetOptions();
	TcxGridColumnStyles* __fastcall GetStyles();
	HIDESBASE TcxGridViewData* __fastcall GetViewData();
	void __fastcall SetFilterRowOperator(Cxfilter::TcxFilterOperatorKind AValue);
	void __fastcall SetFixedKind(TcxGridColumnFixedKind Value);
	void __fastcall SetFooterAlignmentHorz(System::Classes::TAlignment Value);
	void __fastcall SetGroupSummaryAlignment(System::Classes::TAlignment Value);
	void __fastcall SetHeaderGlyph(Dxgdiplusclasses::TdxSmartGlyph* Value);
	void __fastcall SetHeaderGlyphAlignmentHorz(System::Classes::TAlignment Value);
	void __fastcall SetHeaderGlyphAlignmentVert(Cxclasses::TcxAlignmentVert Value);
	void __fastcall SetHeaderImageIndex(System::Uitypes::TImageIndex Value);
	void __fastcall SetIsChildInMergedGroup(bool Value);
	void __fastcall SetLayoutItem(Cxgridinplaceeditform::TcxGridInplaceEditFormLayoutItem* const Value);
	void __fastcall SetRowLayoutItem(TcxGridTableRowLayoutItem* const Value);
	void __fastcall SetVisibleForEditForm(Dxcore::TdxDefaultBoolean AValue);
	void __fastcall SetVisibleForRowLayout(Dxcore::TdxDefaultBoolean AValue);
	HIDESBASE void __fastcall SetOptions(TcxCustomGridColumnOptions* Value);
	HIDESBASE void __fastcall SetStyles(TcxGridColumnStyles* Value);
	void __fastcall SetSummary(TcxGridColumnSummary* Value);
	bool __fastcall IsFooterAlignmentHorzStored();
	bool __fastcall IsGroupSummaryAlignmentStored();
	void __fastcall HeaderGlyphChanged(System::TObject* Sender);
	
protected:
	virtual bool __fastcall GetStoredProperties(System::Classes::TStrings* AProperties);
	virtual void __fastcall GetPropertyValue(const System::UnicodeString AName, System::Variant &AValue);
	virtual void __fastcall SetPropertyValue(const System::UnicodeString AName, const System::Variant &AValue);
	virtual void __fastcall GetAdornerTargetElements(System::Classes::TStrings* AList);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall CreateSubClasses();
	virtual void __fastcall DestroySubClasses();
	virtual Cxgridcustomtableview::TcxCustomGridTableItemOptionsClass __fastcall GetOptionsClass();
	virtual Cxgridcustomtableview::TcxCustomGridTableItemStylesClass __fastcall GetStylesClass();
	virtual TcxGridColumnSummaryClass __fastcall GetSummaryClass();
	virtual void __fastcall CreateLayoutItem();
	virtual void __fastcall CreateRowLayoutItem();
	virtual void __fastcall DestroyLayoutItem();
	virtual void __fastcall DestroyRowLayoutItem();
	virtual void __fastcall AssignColumnWidths();
	virtual bool __fastcall CanCellMerging();
	bool __fastcall CanCreateLayoutItem();
	bool __fastcall CanCreateRowLayoutItem();
	virtual bool __fastcall CanDataCellScroll();
	virtual bool __fastcall CanEdit();
	virtual bool __fastcall CanFilter(bool AVisually);
	virtual bool __fastcall CanFilterMRUValueItems();
	virtual bool __fastcall CanFilterUsingChecks();
	virtual bool __fastcall CanFocus(Cxgridcustomtableview::TcxCustomGridRecord* ARecord);
	virtual bool __fastcall CanGroup();
	virtual bool __fastcall CanHorzSize();
	virtual bool __fastcall CanIncSearch();
	virtual bool __fastcall CanScroll();
	virtual bool __fastcall CanSearchInGroupRows();
	virtual bool __fastcall CanShowGroupFooters();
	virtual bool __fastcall CanSort();
	virtual void __fastcall CaptionChanged();
	void __fastcall CheckAccessibilityForEditForm();
	void __fastcall CheckAccessibilityForRowLayout();
	virtual void __fastcall CheckUsingInFindCriteria();
	virtual void __fastcall DoSetVisible(bool Value);
	virtual void __fastcall ForceWidth(int Value);
	virtual System::Variant __fastcall GetEditValue();
	virtual void __fastcall SetEditValue(const System::Variant &Value);
	virtual bool __fastcall GetAutoWidthSizable();
	Cximagecombobox::TcxImageComboBoxProperties* __fastcall GetImageComboBoxProperties();
	virtual bool __fastcall GetIsBottom();
	virtual bool __fastcall GetIsLeft();
	virtual bool __fastcall GetIsMostBottom();
	virtual bool __fastcall GetIsMostLeft();
	virtual bool __fastcall GetIsMostRight();
	virtual bool __fastcall GetIsRight();
	virtual bool __fastcall GetIsTop();
	virtual bool __fastcall GetVisible();
	virtual bool __fastcall GetVisibleForCustomization();
	virtual bool __fastcall HasFixedWidth();
	virtual bool __fastcall HideOnGrouping();
	void __fastcall InternalSetFilterRowOperator(Cxfilter::TcxFilterOperatorKind AValue);
	Cxfilter::TcxFilterOperatorKind __fastcall InternalGetFilterRowOperator();
	bool __fastcall IsDefaultVisibleForEditForm();
	bool __fastcall IsDefaultVisibleForRowLayout();
	virtual bool __fastcall IsFilterOperatorSupported(Cxfilter::TcxFilterOperatorKind AOperator);
	bool __fastcall IsFilterRowIncrementalFiltering();
	virtual bool __fastcall IsLayoutItemStored();
	virtual bool __fastcall IsRowLayoutItemStored();
	virtual bool __fastcall IsSearchable();
	virtual bool __fastcall IsVisibleStored();
	virtual bool __fastcall IsVisibleForCustomizationStored();
	bool __fastcall IsVisibleForEditForm();
	virtual bool __fastcall IsVisibleForFocus(Cxgridcustomtableview::TcxCustomGridRecord* ARecord);
	bool __fastcall IsVisibleForRowLayout();
	virtual bool __fastcall NeedFixedHighlight();
	virtual void __fastcall SetGridView(Cxgridcustomtableview::TcxCustomGridTableView* Value);
	virtual bool __fastcall ShowGroupValuesWithImages();
	bool __fastcall SupportsBeginsWithFilterOperator(TcxCustomGridRow* ARow);
	virtual bool __fastcall TryResetFocusToNext();
	virtual bool __fastcall UseBeginWithMask();
	TcxGridColumnHeaderViewInfoClass __fastcall GetHeaderViewInfoClass();
	bool __fastcall HasGlyph();
	__property bool AutoWidthSizable = {read=GetAutoWidthSizable, nodefault};
	__property TcxGridTableController* Controller = {read=GetController};
	__property Cxfilter::TcxFilterOperatorKind FilterRowOperator = {read=GetFilterRowOperator, write=SetFilterRowOperator, nodefault};
	__property TcxGridViewData* ViewData = {read=GetViewData};
	
public:
	__fastcall virtual TcxCustomGridColumn(System::Classes::TComponent* AOwner);
	bool __fastcall GroupBy(int AGroupIndex, bool ACanShow = true, bool AMergeWithLeftColumn = false, bool AMergeWithRightColumn = false);
	__property TcxGridTableView* GridView = {read=GetGridView};
	__property GroupingDateRanges;
	__property Hidden;
	__property bool IsBottom = {read=GetIsBottom, nodefault};
	__property bool IsLeft = {read=GetIsLeft, nodefault};
	__property bool IsMostBottom = {read=GetIsMostBottom, nodefault};
	__property bool IsMostLeft = {read=GetIsMostLeft, nodefault};
	__property bool IsMostRight = {read=GetIsMostRight, nodefault};
	__property bool IsPreview = {read=FIsPreview, nodefault};
	__property bool IsRight = {read=GetIsRight, nodefault};
	__property bool IsTop = {read=GetIsTop, nodefault};
	__property bool Selected = {read=FSelected, nodefault};
	
__published:
	__property BestFitMaxWidth = {default=0};
	__property DateTimeGrouping = {default=0};
	__property TcxGridColumnFixedKind FixedKind = {read=FFixedKind, write=SetFixedKind, default=0};
	__property System::Classes::TAlignment FooterAlignmentHorz = {read=GetFooterAlignmentHorz, write=SetFooterAlignmentHorz, stored=IsFooterAlignmentHorzStored, nodefault};
	__property GroupIndex = {default=-1};
	__property System::Classes::TAlignment GroupSummaryAlignment = {read=GetGroupSummaryAlignment, write=SetGroupSummaryAlignment, stored=IsGroupSummaryAlignmentStored, nodefault};
	__property HeaderAlignmentHorz;
	__property HeaderAlignmentVert;
	__property Dxgdiplusclasses::TdxSmartGlyph* HeaderGlyph = {read=FHeaderGlyph, write=SetHeaderGlyph};
	__property System::Classes::TAlignment HeaderGlyphAlignmentHorz = {read=FHeaderGlyphAlignmentHorz, write=SetHeaderGlyphAlignmentHorz, default=0};
	__property Cxclasses::TcxAlignmentVert HeaderGlyphAlignmentVert = {read=FHeaderGlyphAlignmentVert, write=SetHeaderGlyphAlignmentVert, default=2};
	__property HeaderHint = {default=0};
	__property System::Uitypes::TImageIndex HeaderImageIndex = {read=FHeaderImageIndex, write=SetHeaderImageIndex, default=-1};
	__property bool IsChildInMergedGroup = {read=GetIsChildInMergedGroup, write=SetIsChildInMergedGroup, default=0};
	__property Cxgridinplaceeditform::TcxGridInplaceEditFormLayoutItem* LayoutItem = {read=FLayoutItem, write=SetLayoutItem, stored=IsLayoutItemStored};
	__property MinWidth = {default=20};
	__property TcxCustomGridColumnOptions* Options = {read=GetOptions, write=SetOptions};
	__property TcxGridTableRowLayoutItem* RowLayoutItem = {read=FRowLayoutItem, write=SetRowLayoutItem, stored=IsRowLayoutItemStored};
	__property SortIndex = {default=-1};
	__property SortOrder;
	__property TcxGridColumnStyles* Styles = {read=GetStyles, write=SetStyles};
	__property TcxGridColumnSummary* Summary = {read=FSummary, write=SetSummary};
	__property VisibleForCustomization;
	__property Dxcore::TdxDefaultBoolean VisibleForEditForm = {read=FVisibleForEditForm, write=SetVisibleForEditForm, default=2};
	__property Dxcore::TdxDefaultBoolean VisibleForRowLayout = {read=FVisibleForRowLayout, write=SetVisibleForRowLayout, default=2};
	__property Width;
public:
	/* TcxCustomGridTableItem.Destroy */ inline __fastcall virtual ~TcxCustomGridColumn() { }
	
};


class PASCALIMPLEMENTATION TcxGridColumn : public TcxCustomGridColumn
{
	typedef TcxCustomGridColumn inherited;
	
private:
	TcxGridColumnCompareRowValuesEvent FOnCompareRowValuesForCellMerging;
	TcxGridColumnCompareValuesEvent FOnCompareValuesForCellMerging;
	TcxGridColumnCustomDrawHeaderEvent FOnCustomDrawFooterCell;
	TcxGridGroupSummaryCellCustomDrawEvent FOnCustomDrawGroupSummaryCell;
	TcxGridColumnCustomDrawHeaderEvent FOnCustomDrawHeader;
	System::Classes::TNotifyEvent FOnHeaderClick;
	bool __fastcall GetIsPreview();
	HIDESBASE TcxGridColumnOptions* __fastcall GetOptions();
	bool __fastcall GetSelected();
	void __fastcall SetIsPreview(bool Value);
	void __fastcall SetOnCompareRowValuesForCellMerging(TcxGridColumnCompareRowValuesEvent Value);
	void __fastcall SetOnCompareValuesForCellMerging(TcxGridColumnCompareValuesEvent Value);
	void __fastcall SetOnCustomDrawFooterCell(TcxGridColumnCustomDrawHeaderEvent Value);
	void __fastcall SetOnCustomDrawGroupSummaryCell(TcxGridGroupSummaryCellCustomDrawEvent Value);
	void __fastcall SetOnCustomDrawHeader(TcxGridColumnCustomDrawHeaderEvent Value);
	void __fastcall SetOnHeaderClick(System::Classes::TNotifyEvent Value);
	HIDESBASE void __fastcall SetOptions(TcxGridColumnOptions* Value);
	void __fastcall SetSelected(bool Value);
	
protected:
	virtual void __fastcall BestFitApplied(bool AFireEvents);
	virtual int __fastcall CalculateBestFitWidth();
	virtual void __fastcall ChangeGrouping(int AGroupIndex, bool AMergeWithLeftColumn = false, bool AMergeWithRightColumn = false);
	virtual bool __fastcall GetIsFixedByWidth();
	virtual Cxgridcustomtableview::TcxCustomGridTableItemOptionsClass __fastcall GetOptionsClass();
	virtual void __fastcall DoCustomDrawFooterCell(Cxgraphics::TcxCanvas* ACanvas, TcxGridColumnHeaderViewInfo* AViewInfo, bool &ADone);
	virtual void __fastcall DoCustomDrawGroupSummaryCell(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridViewCellViewInfo* AViewInfo, bool &ADone);
	virtual void __fastcall DoCustomDrawHeader(Cxgraphics::TcxCanvas* ACanvas, TcxGridColumnHeaderViewInfo* AViewInfo, bool &ADone);
	virtual void __fastcall DoHeaderClick();
	bool __fastcall HasCustomDrawFooterCell();
	bool __fastcall HasCustomDrawGroupSummaryCell();
	bool __fastcall HasCustomDrawHeader();
	
public:
	__fastcall virtual ~TcxGridColumn();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	bool __fastcall DoCompareValuesForCellMerging(TcxGridDataRow* ARow1, Cxedit::TcxCustomEditProperties* AProperties1, const System::Variant &AValue1, TcxGridDataRow* ARow2, Cxedit::TcxCustomEditProperties* AProperties2, const System::Variant &AValue2);
	virtual void __fastcall FocusWithSelection();
	__property bool IsPreview = {read=GetIsPreview, write=SetIsPreview, nodefault};
	__property bool Selected = {read=GetSelected, write=SetSelected, nodefault};
	
__published:
	__property TcxGridColumnOptions* Options = {read=GetOptions, write=SetOptions};
	__property TcxGridColumnCompareRowValuesEvent OnCompareRowValuesForCellMerging = {read=FOnCompareRowValuesForCellMerging, write=SetOnCompareRowValuesForCellMerging};
	__property TcxGridColumnCompareValuesEvent OnCompareValuesForCellMerging = {read=FOnCompareValuesForCellMerging, write=SetOnCompareValuesForCellMerging};
	__property TcxGridColumnCustomDrawHeaderEvent OnCustomDrawFooterCell = {read=FOnCustomDrawFooterCell, write=SetOnCustomDrawFooterCell};
	__property TcxGridGroupSummaryCellCustomDrawEvent OnCustomDrawGroupSummaryCell = {read=FOnCustomDrawGroupSummaryCell, write=SetOnCustomDrawGroupSummaryCell};
	__property TcxGridColumnCustomDrawHeaderEvent OnCustomDrawHeader = {read=FOnCustomDrawHeader, write=SetOnCustomDrawHeader};
	__property System::Classes::TNotifyEvent OnHeaderClick = {read=FOnHeaderClick, write=SetOnHeaderClick};
	__property OnInitGroupingDateRanges;
public:
	/* TcxCustomGridColumn.Create */ inline __fastcall virtual TcxGridColumn(System::Classes::TComponent* AOwner) : TcxCustomGridColumn(AOwner) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridTableBackgroundBitmaps : public Cxgridcustomtableview::TcxCustomGridTableBackgroundBitmaps
{
	typedef Cxgridcustomtableview::TcxCustomGridTableBackgroundBitmaps inherited;
	
protected:
	virtual int __fastcall GetBitmapStyleIndex(int Index);
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property Vcl::Graphics::TBitmap* Footer = {read=GetValue, write=SetValue, index=3};
	__property Vcl::Graphics::TBitmap* Header = {read=GetValue, write=SetValue, index=4};
	__property Vcl::Graphics::TBitmap* Group = {read=GetValue, write=SetValue, index=5};
	__property Vcl::Graphics::TBitmap* GroupByBox = {read=GetValue, write=SetValue, index=6};
	__property Vcl::Graphics::TBitmap* Indicator = {read=GetValue, write=SetValue, index=7};
	__property Vcl::Graphics::TBitmap* Preview = {read=GetValue, write=SetValue, index=8};
public:
	/* TcxCustomGridBackgroundBitmaps.Create */ inline __fastcall virtual TcxGridTableBackgroundBitmaps(Cxgridcustomview::TcxCustomGridView* AGridView) : Cxgridcustomtableview::TcxCustomGridTableBackgroundBitmaps(AGridView) { }
	/* TcxCustomGridBackgroundBitmaps.Destroy */ inline __fastcall virtual ~TcxGridTableBackgroundBitmaps() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridTableDateTimeHandling : public Cxgridcustomtableview::TcxCustomGridTableDateTimeHandling
{
	typedef Cxgridcustomtableview::TcxCustomGridTableDateTimeHandling inherited;
	
__published:
	__property DateFormat = {default=0};
	__property Grouping = {default=1};
	__property HourFormat = {default=0};
	__property UseLongDateFormat = {default=1};
	__property UseShortTimeFormat = {default=1};
public:
	/* TcxCustomGridTableDateTimeHandling.Create */ inline __fastcall virtual TcxGridTableDateTimeHandling(Cxgridcustomview::TcxCustomGridView* AGridView) : Cxgridcustomtableview::TcxCustomGridTableDateTimeHandling(AGridView) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxGridTableDateTimeHandling() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxGridTableViewNavigatorButtons : public Cxgridcustomtableview::TcxGridViewNavigatorButtons
{
	typedef Cxgridcustomtableview::TcxGridViewNavigatorButtons inherited;
	
private:
	TcxGridTableView* __fastcall GetGridView();
	
protected:
	virtual bool __fastcall GetButtonEnabled(int ADefaultIndex);
	
public:
	__property TcxGridTableView* GridView = {read=GetGridView};
public:
	/* TcxGridViewNavigatorButtons.Create */ inline __fastcall virtual TcxGridTableViewNavigatorButtons(Cxgridcustomtableview::TcxCustomGridTableView* AGridView) : Cxgridcustomtableview::TcxGridViewNavigatorButtons(AGridView) { }
	
public:
	/* TcxCustomNavigatorButtons.Destroy */ inline __fastcall virtual ~TcxGridTableViewNavigatorButtons() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridTableViewNavigator : public Cxgridcustomtableview::TcxGridViewNavigator
{
	typedef Cxgridcustomtableview::TcxGridViewNavigator inherited;
	
protected:
	virtual Cxgridcustomtableview::TcxGridViewNavigatorButtonsClass __fastcall GetNavigatorButtonsClass();
public:
	/* TcxGridViewNavigator.Create */ inline __fastcall virtual TcxGridTableViewNavigator(Cxgridcustomview::TcxCustomGridView* AGridView) : Cxgridcustomtableview::TcxGridViewNavigator(AGridView) { }
	/* TcxGridViewNavigator.Destroy */ inline __fastcall virtual ~TcxGridTableViewNavigator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridTableFindPanelOptions : public Cxgridcustomtableview::TcxGridFindPanelOptions
{
	typedef Cxgridcustomtableview::TcxGridFindPanelOptions inherited;
	
private:
	TcxGridTableFindPanelLocation FLocation;
	bool FSearchInGroupRows;
	bool FSearchInPreview;
	HIDESBASE TcxGridTableView* __fastcall GetGridView();
	void __fastcall SetLocation(const TcxGridTableFindPanelLocation AValue);
	void __fastcall SetSearchInGroupRows(bool AValue);
	void __fastcall SetSearchInPreview(bool AValue);
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property TcxGridTableView* GridView = {read=GetGridView};
	
__published:
	__property TcxGridTableFindPanelLocation Location = {read=FLocation, write=SetLocation, default=0};
	__property bool SearchInGroupRows = {read=FSearchInGroupRows, write=SetSearchInGroupRows, default=0};
	__property bool SearchInPreview = {read=FSearchInPreview, write=SetSearchInPreview, default=0};
public:
	/* TcxCustomGridOptions.Create */ inline __fastcall virtual TcxGridTableFindPanelOptions(Cxgridcustomview::TcxCustomGridView* AGridView) : Cxgridcustomtableview::TcxGridFindPanelOptions(AGridView) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxGridTableFindPanelOptions() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridTableShowLockedStateImageOptions : public Cxgridcustomtableview::TcxCustomGridTableShowLockedStateImageOptions
{
	typedef Cxgridcustomtableview::TcxCustomGridTableShowLockedStateImageOptions inherited;
	
__published:
	__property BestFit = {default=1};
	__property Filtering = {default=1};
	__property Grouping = {default=1};
	__property Sorting = {default=1};
	__property Posting = {default=0};
public:
	/* TcxCustomGridTableShowLockedStateImageOptions.Create */ inline __fastcall virtual TcxGridTableShowLockedStateImageOptions() : Cxgridcustomtableview::TcxCustomGridTableShowLockedStateImageOptions() { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxGridTableShowLockedStateImageOptions() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TcxGridEditMode : unsigned char { emInplace, emInplaceEditForm, emInplaceEditFormHideCurrentRow, emModalEditForm };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridTableOptionsBehavior : public Cxgridcustomtableview::TcxCustomGridTableOptionsBehavior
{
	typedef Cxgridcustomtableview::TcxCustomGridTableOptionsBehavior inherited;
	
private:
	bool FColumnHeaderHints;
	bool FColumnMergedGrouping;
	bool FCopyPreviewToClipboard;
	TcxGridEditMode FEditMode;
	bool FExpandMasterRowOnDblClick;
	bool FFixedGroups;
	HIDESBASE TcxGridTableView* __fastcall GetGridView();
	HIDESBASE TcxGridTableShowLockedStateImageOptions* __fastcall GetShowLockedStateImageOptions();
	void __fastcall SetColumnHeaderHints(bool Value);
	void __fastcall SetColumnMergedGrouping(bool Value);
	void __fastcall SetCopyPreviewToClipboard(bool Value);
	void __fastcall SetEditMode(TcxGridEditMode AValue);
	void __fastcall SetExpandMasterRowOnDblClick(bool Value);
	void __fastcall SetFixedGroups(bool Value);
	HIDESBASE void __fastcall SetShowLockedStateImageOptions(TcxGridTableShowLockedStateImageOptions* Value);
	
protected:
	virtual Cxgridcustomview::TcxCustomGridShowLockedStateImageOptionsClass __fastcall GetShowLockedStateImageOptionsClass();
	
public:
	__fastcall virtual TcxGridTableOptionsBehavior(Cxgridcustomview::TcxCustomGridView* AGridView);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property RepaintVisibleRecordsOnScroll = {default=0};
	virtual bool __fastcall IsInplaceEditFormMode();
	bool __fastcall NeedHideCurrentRow();
	__property TcxGridTableView* GridView = {read=GetGridView};
	
__published:
	__property BestFitMaxRecordCount = {default=0};
	__property bool ColumnHeaderHints = {read=FColumnHeaderHints, write=SetColumnHeaderHints, default=1};
	__property bool ColumnMergedGrouping = {read=FColumnMergedGrouping, write=SetColumnMergedGrouping, default=0};
	__property bool CopyPreviewToClipboard = {read=FCopyPreviewToClipboard, write=SetCopyPreviewToClipboard, default=1};
	__property EditAutoHeight = {default=0};
	__property TcxGridEditMode EditMode = {read=FEditMode, write=SetEditMode, default=0};
	__property bool ExpandMasterRowOnDblClick = {read=FExpandMasterRowOnDblClick, write=SetExpandMasterRowOnDblClick, default=1};
	__property bool FixedGroups = {read=FFixedGroups, write=SetFixedGroups, default=0};
	__property FocusCellOnCycle = {default=0};
	__property HotTrack = {default=0};
	__property HotTrackSelection = {default=1};
	__property ImmediateEditor = {default=1};
	__property RecordScrollMode = {default=0};
	__property TcxGridTableShowLockedStateImageOptions* ShowLockedStateImageOptions = {read=GetShowLockedStateImageOptions, write=SetShowLockedStateImageOptions};
	__property PullFocusing = {default=0};
public:
	/* TcxCustomGridOptionsBehavior.Destroy */ inline __fastcall virtual ~TcxGridTableOptionsBehavior() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridTableFiltering : public Cxgridcustomtableview::TcxCustomGridTableFiltering
{
	typedef Cxgridcustomtableview::TcxCustomGridTableFiltering inherited;
	
private:
	bool __fastcall GetColumnAddValueItems();
	Cxgridcustomtableview::TcxGridItemExcelFilterPopupOptions* __fastcall GetColumnExcelPopup();
	bool __fastcall GetColumnFilteredItemsList();
	bool __fastcall GetColumnFilteredItemsListShowFilteredItemsOnly();
	bool __fastcall GetColumnMRUItemsList();
	int __fastcall GetColumnMRUItemsListCount();
	Cxgridcustomtableview::TcxGridItemFilterPopupOptions* __fastcall GetColumnPopup();
	Dxfilterpopupwindow::TdxFilterPopupWindowMode __fastcall GetColumnPopupMode();
	HIDESBASE TcxGridTableView* __fastcall GetGridView();
	void __fastcall SetColumnAddValueItems(bool Value);
	void __fastcall SetColumnExcelPopup(Cxgridcustomtableview::TcxGridItemExcelFilterPopupOptions* Value);
	void __fastcall SetColumnFilteredItemsList(bool Value);
	void __fastcall SetColumnFilteredItemsListShowFilteredItemsOnly(bool AValue);
	void __fastcall SetColumnMRUItemsList(bool Value);
	void __fastcall SetColumnMRUItemsListCount(int Value);
	void __fastcall SetColumnPopup(Cxgridcustomtableview::TcxGridItemFilterPopupOptions* Value);
	void __fastcall SetColumnPopupMode(Dxfilterpopupwindow::TdxFilterPopupWindowMode Value);
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual bool __fastcall IsFilterBoxEnabled();
	
public:
	virtual void __fastcall RunCustomizeDialog(Cxgridcustomtableview::TcxCustomGridTableItem* AItem = (Cxgridcustomtableview::TcxCustomGridTableItem*)(0x0));
	__property TcxGridTableView* GridView = {read=GetGridView};
	__property int ColumnPopupDropDownWidth = {read=GetItemPopupDropDownWidth, write=SetItemPopupDropDownWidth, nodefault};
	__property DropDownWidth;
	__property int ColumnPopupMaxDropDownItemCount = {read=GetItemPopupMaxDropDownItemCount, write=SetItemPopupMaxDropDownItemCount, nodefault};
	__property MaxDropDownCount;
	
__published:
	__property bool ColumnAddValueItems = {read=GetColumnAddValueItems, write=SetColumnAddValueItems, default=1};
	__property Cxgridcustomtableview::TcxGridItemExcelFilterPopupOptions* ColumnExcelPopup = {read=GetColumnExcelPopup, write=SetColumnExcelPopup};
	__property bool ColumnFilteredItemsList = {read=GetColumnFilteredItemsList, write=SetColumnFilteredItemsList, default=0};
	__property bool ColumnFilteredItemsListShowFilteredItemsOnly = {read=GetColumnFilteredItemsListShowFilteredItemsOnly, write=SetColumnFilteredItemsListShowFilteredItemsOnly, default=1};
	__property bool ColumnMRUItemsList = {read=GetColumnMRUItemsList, write=SetColumnMRUItemsList, default=1};
	__property int ColumnMRUItemsListCount = {read=GetColumnMRUItemsListCount, write=SetColumnMRUItemsListCount, default=5};
	__property Cxgridcustomtableview::TcxGridItemFilterPopupOptions* ColumnPopup = {read=GetColumnPopup, write=SetColumnPopup};
	__property Dxfilterpopupwindow::TdxFilterPopupWindowMode ColumnPopupMode = {read=GetColumnPopupMode, write=SetColumnPopupMode, default=0};
public:
	/* TcxCustomGridTableFiltering.Create */ inline __fastcall virtual TcxGridTableFiltering(Cxgridcustomview::TcxCustomGridView* AGridView) : Cxgridcustomtableview::TcxCustomGridTableFiltering(AGridView) { }
	/* TcxCustomGridTableFiltering.Destroy */ inline __fastcall virtual ~TcxGridTableFiltering() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridTableOptionsCustomize : public Cxgridcustomtableview::TcxCustomGridTableOptionsCustomize
{
	typedef Cxgridcustomtableview::TcxCustomGridTableOptionsCustomize inherited;
	
private:
	bool FColumnHidingOnGrouping;
	bool FColumnHorzSizing;
	bool FDataRowFixing;
	bool FDataRowSizing;
	bool FGroupBySorting;
	bool FGroupRowSizing;
	bool __fastcall GetColumnExpressionEditing();
	bool __fastcall GetColumnFiltering();
	bool __fastcall GetColumnGrouping();
	bool __fastcall GetColumnHiding();
	bool __fastcall GetColumnMoving();
	bool __fastcall GetColumnSorting();
	bool __fastcall GetColumnsQuickCustomization();
	int __fastcall GetColumnsQuickCustomizationMaxDropDownCount();
	bool __fastcall GetColumnsQuickCustomizationMultiColumnMode();
	Cxgridcustomtableview::TcxGridQuickCustomizationReordering __fastcall GetColumnsQuickCustomizationReordering();
	bool __fastcall GetColumnsQuickCustomizationShowCommands();
	bool __fastcall GetColumnsQuickCustomizationSorted();
	TcxGridTableView* __fastcall GetGridView();
	void __fastcall SetColumnExpressionEditing(bool Value);
	void __fastcall SetColumnFiltering(bool Value);
	void __fastcall SetColumnGrouping(bool Value);
	void __fastcall SetColumnHiding(bool Value);
	void __fastcall SetColumnHidingOnGrouping(bool Value);
	void __fastcall SetColumnHorzSizing(bool Value);
	void __fastcall SetColumnMoving(bool Value);
	void __fastcall SetColumnSorting(bool Value);
	void __fastcall SetColumnsQuickCustomization(bool Value);
	void __fastcall SetColumnsQuickCustomizationMaxDropDownCount(int Value);
	void __fastcall SetColumnsQuickCustomizationMultiColumnMode(bool Value);
	void __fastcall SetColumnsQuickCustomizationReordering(Cxgridcustomtableview::TcxGridQuickCustomizationReordering Value);
	void __fastcall SetColumnsQuickCustomizationShowCommands(bool Value);
	void __fastcall SetColumnsQuickCustomizationSorted(bool Value);
	void __fastcall SetDataRowFixing(bool Value);
	void __fastcall SetDataRowSizing(bool Value);
	void __fastcall SetGroupBySorting(bool Value);
	void __fastcall SetGroupRowSizing(bool Value);
	
protected:
	__property bool ColumnsQuickCustomizationMultiColumnMode = {read=GetColumnsQuickCustomizationMultiColumnMode, write=SetColumnsQuickCustomizationMultiColumnMode, default=1};
	
public:
	__fastcall virtual TcxGridTableOptionsCustomize(Cxgridcustomview::TcxCustomGridView* AGridView);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property TcxGridTableView* GridView = {read=GetGridView};
	
__published:
	__property bool ColumnExpressionEditing = {read=GetColumnExpressionEditing, write=SetColumnExpressionEditing, default=0};
	__property bool ColumnFiltering = {read=GetColumnFiltering, write=SetColumnFiltering, default=1};
	__property bool ColumnGrouping = {read=GetColumnGrouping, write=SetColumnGrouping, default=1};
	__property bool ColumnHiding = {read=GetColumnHiding, write=SetColumnHiding, default=0};
	__property bool ColumnHidingOnGrouping = {read=FColumnHidingOnGrouping, write=SetColumnHidingOnGrouping, default=1};
	__property bool ColumnHorzSizing = {read=FColumnHorzSizing, write=SetColumnHorzSizing, default=1};
	__property bool ColumnMoving = {read=GetColumnMoving, write=SetColumnMoving, default=1};
	__property bool ColumnSorting = {read=GetColumnSorting, write=SetColumnSorting, default=1};
	__property bool ColumnsQuickCustomization = {read=GetColumnsQuickCustomization, write=SetColumnsQuickCustomization, default=0};
	__property int ColumnsQuickCustomizationMaxDropDownCount = {read=GetColumnsQuickCustomizationMaxDropDownCount, write=SetColumnsQuickCustomizationMaxDropDownCount, default=0};
	__property Cxgridcustomtableview::TcxGridQuickCustomizationReordering ColumnsQuickCustomizationReordering = {read=GetColumnsQuickCustomizationReordering, write=SetColumnsQuickCustomizationReordering, default=0};
	__property bool ColumnsQuickCustomizationShowCommands = {read=GetColumnsQuickCustomizationShowCommands, write=SetColumnsQuickCustomizationShowCommands, default=1};
	__property bool ColumnsQuickCustomizationSorted = {read=GetColumnsQuickCustomizationSorted, write=SetColumnsQuickCustomizationSorted, default=0};
	__property bool DataRowFixing = {read=FDataRowFixing, write=SetDataRowFixing, default=0};
	__property bool DataRowSizing = {read=FDataRowSizing, write=SetDataRowSizing, default=0};
	__property bool GroupBySorting = {read=FGroupBySorting, write=SetGroupBySorting, default=0};
	__property bool GroupRowSizing = {read=FGroupRowSizing, write=SetGroupRowSizing, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxGridTableOptionsCustomize() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridTableOptionsData : public Cxgridcustomtableview::TcxCustomGridTableOptionsData
{
	typedef Cxgridcustomtableview::TcxCustomGridTableOptionsData inherited;
	
public:
	/* TcxCustomGridTableOptionsData.Create */ inline __fastcall virtual TcxGridTableOptionsData(Cxgridcustomview::TcxCustomGridView* AGridView) : Cxgridcustomtableview::TcxCustomGridTableOptionsData(AGridView) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxGridTableOptionsData() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TcxGridMultiSelectMode : unsigned char { msmStandard, msmPersistent };

enum DECLSPEC_DENUM TcxGridCheckBoxPosition : unsigned char { cbpFirstColumn, cbpIndicator };

enum DECLSPEC_DENUM TcxGridCheckBoxVisibilityOption : unsigned char { cbvDataRow, cbvGroupRow, cbvColumnHeader };

typedef System::Set<TcxGridCheckBoxVisibilityOption, TcxGridCheckBoxVisibilityOption::cbvDataRow, TcxGridCheckBoxVisibilityOption::cbvColumnHeader> TcxGridCheckBoxVisibility;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridTableOptionsSelection : public Cxgridcustomtableview::TcxCustomGridTableOptionsSelection
{
	typedef Cxgridcustomtableview::TcxCustomGridTableOptionsSelection inherited;
	
private:
	bool FCellMultiSelect;
	TcxGridCheckBoxPosition FCheckBoxPosition;
	TcxGridCheckBoxVisibility FCheckBoxVisibility;
	bool FClearPersistentSelectionOnOutsideClick;
	TcxGridMultiSelectMode FMultiSelectMode;
	bool FShowCheckBoxesDynamically;
	HIDESBASE TcxGridTableView* __fastcall GetGridView();
	void __fastcall SetCellMultiSelect(bool Value);
	void __fastcall SetCheckBoxPosition(TcxGridCheckBoxPosition Value);
	void __fastcall SetCheckBoxVisibility(TcxGridCheckBoxVisibility Value);
	void __fastcall SetClearPersistentSelectionOnOutsideClick(bool Value);
	void __fastcall SetMultiSelectMode(TcxGridMultiSelectMode Value);
	void __fastcall SetShowCheckBoxesDynamically(bool Value);
	
protected:
	virtual bool __fastcall IsMultiSelectPersistent();
	virtual void __fastcall SetCellSelect(bool Value);
	virtual void __fastcall SetInvertSelect(bool Value);
	virtual void __fastcall SetMultiSelect(bool Value);
	__property TcxGridTableView* GridView = {read=GetGridView};
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property bool CellMultiSelect = {read=FCellMultiSelect, write=SetCellMultiSelect, default=0};
	__property TcxGridCheckBoxPosition CheckBoxPosition = {read=FCheckBoxPosition, write=SetCheckBoxPosition, default=0};
	__property TcxGridCheckBoxVisibility CheckBoxVisibility = {read=FCheckBoxVisibility, write=SetCheckBoxVisibility, default=0};
	__property bool ClearPersistentSelectionOnOutsideClick = {read=FClearPersistentSelectionOnOutsideClick, write=SetClearPersistentSelectionOnOutsideClick, default=0};
	__property HideFocusRect;
	__property HideFocusRectOnExit = {default=1};
	__property HideSelection = {default=0};
	__property InvertSelect = {default=1};
	__property TcxGridMultiSelectMode MultiSelectMode = {read=FMultiSelectMode, write=SetMultiSelectMode, default=0};
	__property bool ShowCheckBoxesDynamically = {read=FShowCheckBoxesDynamically, write=SetShowCheckBoxesDynamically, default=0};
	__property UnselectFocusedRecordOnExit = {default=1};
public:
	/* TcxCustomGridTableOptionsSelection.Create */ inline __fastcall virtual TcxGridTableOptionsSelection(Cxgridcustomview::TcxCustomGridView* AGridView) : Cxgridcustomtableview::TcxCustomGridTableOptionsSelection(AGridView) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxGridTableOptionsSelection() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TcxGridDataRowPinClickAction : unsigned char { rpcaNone, rpcaFixToTop, rpcaFixToBottom, rpcaShowPopup };

enum DECLSPEC_DENUM TcxGridDataRowPinVisibility : unsigned char { rpvNever, rpvAlways, rpvHotTrack, rpvRowHotTrack };

typedef System::TMetaClass* TcxGridFixedDataRowsOptionsClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFixedDataRowsOptions : public Cxgridcustomview::TcxCustomGridOptions
{
	typedef Cxgridcustomview::TcxCustomGridOptions inherited;
	
private:
	TcxGridDataRowPinClickAction FPinClickAction;
	Cxgeometry::TcxSize* FPinSize;
	TcxGridDataRowPinVisibility FPinVisibility;
	System::Uitypes::TColor FSeparatorColor;
	int FSeparatorWidth;
	System::Uitypes::TColor __fastcall DefaultSeparatorColor();
	TcxGridTableView* __fastcall GetGridView();
	void __fastcall SetPinClickAction(TcxGridDataRowPinClickAction AValue);
	void __fastcall SetPinSize(Cxgeometry::TcxSize* AValue);
	void __fastcall SetPinVisibility(TcxGridDataRowPinVisibility AValue);
	void __fastcall SetSeparatorColor(System::Uitypes::TColor AValue);
	void __fastcall SetSeparatorWidth(int AValue);
	void __fastcall CreatePinSize();
	void __fastcall DestroyPinSize();
	void __fastcall PinSizeChangeHandler(System::TObject* Sender);
	
protected:
	virtual void __fastcall ChangeScale(int M, int D);
	
public:
	__fastcall virtual TcxGridFixedDataRowsOptions(Cxgridcustomview::TcxCustomGridView* AGridView);
	__fastcall virtual ~TcxGridFixedDataRowsOptions();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	System::Uitypes::TColor __fastcall GetSeparatorColor();
	__property TcxGridTableView* GridView = {read=GetGridView};
	
__published:
	__property TcxGridDataRowPinClickAction PinClickAction = {read=FPinClickAction, write=SetPinClickAction, default=3};
	__property Cxgeometry::TcxSize* PinSize = {read=FPinSize, write=SetPinSize};
	__property TcxGridDataRowPinVisibility PinVisibility = {read=FPinVisibility, write=SetPinVisibility, default=0};
	__property System::Uitypes::TColor SeparatorColor = {read=FSeparatorColor, write=SetSeparatorColor, default=536870912};
	__property int SeparatorWidth = {read=FSeparatorWidth, write=SetSeparatorWidth, default=6};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridSpecialRowOptions : public Cxgridcustomview::TcxCustomGridOptions
{
	typedef Cxgridcustomview::TcxCustomGridOptions inherited;
	
private:
	System::UnicodeString FInfoText;
	bool FIsInfoTextAssigned;
	System::Uitypes::TColor FSeparatorColor;
	int FSeparatorWidth;
	bool FVisible;
	TcxGridTableView* __fastcall GetGridView();
	System::UnicodeString __fastcall GetInfoText();
	void __fastcall SetInfoText(const System::UnicodeString Value);
	void __fastcall SetSeparatorColor(System::Uitypes::TColor Value);
	void __fastcall SetSeparatorWidth(int Value);
	void __fastcall SetVisible(bool Value);
	bool __fastcall IsInfoTextStored();
	
protected:
	virtual void __fastcall ChangeScale(int M, int D);
	virtual System::UnicodeString __fastcall DefaultInfoText() = 0 ;
	virtual System::Uitypes::TColor __fastcall DefaultSeparatorColor();
	virtual void __fastcall VisibleChanged() = 0 ;
	
public:
	__fastcall virtual TcxGridSpecialRowOptions(Cxgridcustomview::TcxCustomGridView* AGridView);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	System::Uitypes::TColor __fastcall GetSeparatorColor();
	__property TcxGridTableView* GridView = {read=GetGridView};
	
__published:
	__property System::UnicodeString InfoText = {read=GetInfoText, write=SetInfoText, stored=IsInfoTextStored};
	__property System::Uitypes::TColor SeparatorColor = {read=FSeparatorColor, write=SetSeparatorColor, default=536870912};
	__property int SeparatorWidth = {read=FSeparatorWidth, write=SetSeparatorWidth, default=6};
	__property bool Visible = {read=FVisible, write=SetVisible, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxGridSpecialRowOptions() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TcxGridFilterRowApplyChangesMode : unsigned char { fracOnCellExit, fracImmediately, fracDelayed };

typedef System::TMetaClass* TcxGridFilterRowOptionsClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridFilterRowOptions : public TcxGridSpecialRowOptions
{
	typedef TcxGridSpecialRowOptions inherited;
	
private:
	bool FOperatorCustomization;
	TcxGridFilterRowApplyChangesMode FApplyChanges;
	unsigned FApplyInputDelay;
	void __fastcall SetApplyChanges(TcxGridFilterRowApplyChangesMode Value);
	void __fastcall SetApplyInputDelay(unsigned Value);
	void __fastcall SetOperatorCustomization(bool Value);
	
protected:
	virtual System::UnicodeString __fastcall DefaultInfoText();
	virtual void __fastcall VisibleChanged();
	
public:
	__fastcall virtual TcxGridFilterRowOptions(Cxgridcustomview::TcxCustomGridView* AGridView);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property TcxGridFilterRowApplyChangesMode ApplyChanges = {read=FApplyChanges, write=SetApplyChanges, default=0};
	__property unsigned ApplyInputDelay = {read=FApplyInputDelay, write=SetApplyInputDelay, default=1000};
	__property bool OperatorCustomization = {read=FOperatorCustomization, write=SetOperatorCustomization, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxGridFilterRowOptions() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridNewItemRowOptionsClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridNewItemRowOptions : public TcxGridSpecialRowOptions
{
	typedef TcxGridSpecialRowOptions inherited;
	
protected:
	virtual System::UnicodeString __fastcall DefaultInfoText();
	virtual void __fastcall VisibleChanged();
public:
	/* TcxGridSpecialRowOptions.Create */ inline __fastcall virtual TcxGridNewItemRowOptions(Cxgridcustomview::TcxCustomGridView* AGridView) : TcxGridSpecialRowOptions(AGridView) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxGridNewItemRowOptions() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TcxGridGroupByHeaderLayout : unsigned char { ghlVerticallyShifted, ghlHorizontal };

enum DECLSPEC_DENUM TcxGridGroupFootersMode : unsigned char { gfInvisible, gfVisibleWhenExpanded, gfAlwaysVisible };

enum DECLSPEC_DENUM TcxGridGroupRowStyle : unsigned char { grsStandard, grsOffice11 };

enum DECLSPEC_DENUM TcxGridGroupSummaryLayout : unsigned char { gslStandard, gslAlignWithColumns, gslAlignWithColumnsAndDistribute };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridTableOptionsView : public Cxgridcustomtableview::TcxCustomGridTableOptionsView
{
	typedef Cxgridcustomtableview::TcxCustomGridTableOptionsView inherited;
	
private:
	bool FColumnAutoWidth;
	int FDataRowHeight;
	bool FExpandButtonsForEmptyDetails;
	Dxcoregraphics::TdxAlphaColor FFixedColumnHighlightColor;
	System::Uitypes::TColor FFixedColumnSeparatorColor;
	int FFixedColumnSeparatorWidth;
	bool FFooter;
	bool FFooterAutoHeight;
	bool FFooterMultiSummaries;
	System::Uitypes::TColor FGridLineColor;
	Cxgraphics::TcxGridLines FGridLines;
	bool FGroupByBox;
	TcxGridGroupByHeaderLayout FGroupByHeaderLayout;
	bool FGroupFooterMultiSummaries;
	TcxGridGroupFootersMode FGroupFooters;
	int FGroupRowHeight;
	TcxGridGroupRowStyle FGroupRowStyle;
	TcxGridGroupSummaryLayout FGroupSummaryLayout;
	bool FHeader;
	int FHeaderHeight;
	bool FHighlightFixedColumns;
	bool FIndicator;
	int FIndicatorWidth;
	TcxGridGroupFootersMode FPrevGroupFooters;
	System::UnicodeString FMergedGroupSeparator;
	System::Uitypes::TColor FRowSeparatorColor;
	int FRowSeparatorWidth;
	bool __fastcall GetExpandButtonsForEmptyDetails();
	HIDESBASE TcxGridTableView* __fastcall GetGridView();
	bool __fastcall GetHeaderAutoHeight();
	bool __fastcall GetHeaderEndEllipsis();
	Cxlookandfeelpainters::TcxFilterButtonShowMode __fastcall GetHeaderFilterButtonShowMode();
	bool __fastcall GetNewItemRow();
	System::UnicodeString __fastcall GetNewItemRowInfoText();
	System::Uitypes::TColor __fastcall GetNewItemRowSeparatorColor();
	int __fastcall GetNewItemRowSeparatorWidth();
	Cxlookandfeelpainters::TcxShowFilterButtons __fastcall GetShowColumnFilterButtons();
	void __fastcall SetColumnAutoWidth(bool Value);
	void __fastcall SetDataRowHeight(int Value);
	void __fastcall SetExpandButtonsForEmptyDetails(bool Value);
	void __fastcall SetFixedColumnHighlightColor(Dxcoregraphics::TdxAlphaColor Value);
	void __fastcall SetFixedColumnSeparatorColor(System::Uitypes::TColor Value);
	void __fastcall SetFixedColumnSeparatorWidth(int Value);
	void __fastcall SetFooter(bool Value);
	void __fastcall SetFooterAutoHeight(bool Value);
	void __fastcall SetFooterMultiSummaries(bool Value);
	void __fastcall SetGridLineColor(System::Uitypes::TColor Value);
	void __fastcall SetGridLines(Cxgraphics::TcxGridLines Value);
	void __fastcall SetGroupByBox(bool Value);
	void __fastcall SetGroupByHeaderLayout(TcxGridGroupByHeaderLayout Value);
	void __fastcall SetGroupFooterMultiSummaries(bool Value);
	void __fastcall SetGroupFooters(TcxGridGroupFootersMode Value);
	void __fastcall SetGroupRowHeight(int Value);
	void __fastcall SetGroupRowStyle(TcxGridGroupRowStyle Value);
	void __fastcall SetGroupSummaryLayout(TcxGridGroupSummaryLayout Value);
	void __fastcall SetHeader(bool Value);
	void __fastcall SetHeaderAutoHeight(bool Value);
	void __fastcall SetHeaderEndEllipsis(bool Value);
	void __fastcall SetHeaderFilterButtonShowMode(Cxlookandfeelpainters::TcxFilterButtonShowMode Value);
	void __fastcall SetHeaderHeight(int Value);
	void __fastcall SetHighlightFixedColumns(bool AValue);
	void __fastcall SetIndicator(bool Value);
	void __fastcall SetIndicatorWidth(int Value);
	void __fastcall SetNewItemRow(bool Value);
	void __fastcall SetNewItemRowInfoText(const System::UnicodeString Value);
	void __fastcall SetNewItemRowSeparatorColor(System::Uitypes::TColor Value);
	void __fastcall SetNewItemRowSeparatorWidth(int Value);
	void __fastcall SetMergedGroupSeparator(System::UnicodeString AValue);
	void __fastcall SetRowSeparatorColor(System::Uitypes::TColor Value);
	void __fastcall SetRowSeparatorWidth(int Value);
	void __fastcall SetShowColumnFilterButtons(Cxlookandfeelpainters::TcxShowFilterButtons Value);
	void __fastcall ReadNewItemRow(System::Classes::TReader* Reader);
	void __fastcall ReadNewItemRowInfoText(System::Classes::TReader* Reader);
	void __fastcall ReadNewItemRowSeparatorColor(System::Classes::TReader* Reader);
	void __fastcall ReadNewItemRowSeparatorWidth(System::Classes::TReader* Reader);
	
protected:
	virtual void __fastcall ChangeScale(int M, int D);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual bool __fastcall IsMergedGroupSeparatorStored();
	DYNAMIC void __fastcall ItemCaptionAutoHeightChanged();
	
public:
	__fastcall virtual TcxGridTableOptionsView(Cxgridcustomview::TcxCustomGridView* AGridView);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	bool __fastcall CanShowFooterMultiSummaries();
	bool __fastcall CanShowGroupFooterMultiSummaries();
	virtual void __fastcall CheckDataRowHeight(int &AValue);
	virtual void __fastcall CheckGroupRowHeight(int &AValue);
	virtual System::Uitypes::TColor __fastcall GetGridLineColor();
	TcxGridGroupSummaryLayout __fastcall GetGroupSummaryLayout();
	System::Uitypes::TColor __fastcall GetRowSeparatorColor();
	__property TcxGridTableView* GridView = {read=GetGridView};
	__property bool NewItemRow = {read=GetNewItemRow, write=SetNewItemRow, nodefault};
	__property System::UnicodeString NewItemRowInfoText = {read=GetNewItemRowInfoText, write=SetNewItemRowInfoText};
	__property System::Uitypes::TColor NewItemRowSeparatorColor = {read=GetNewItemRowSeparatorColor, write=SetNewItemRowSeparatorColor, nodefault};
	__property int NewItemRowSeparatorWidth = {read=GetNewItemRowSeparatorWidth, write=SetNewItemRowSeparatorWidth, nodefault};
	__property TcxGridGroupFootersMode PrevGroupFooters = {read=FPrevGroupFooters, nodefault};
	
__published:
	__property CellAutoHeight = {default=0};
	__property CellTextMaxLineCount = {default=0};
	__property bool ColumnAutoWidth = {read=FColumnAutoWidth, write=SetColumnAutoWidth, default=0};
	__property int DataRowHeight = {read=FDataRowHeight, write=SetDataRowHeight, default=0};
	__property EditAutoHeightBorderColor = {default=536870912};
	__property bool ExpandButtonsForEmptyDetails = {read=GetExpandButtonsForEmptyDetails, write=SetExpandButtonsForEmptyDetails, default=1};
	__property Dxcoregraphics::TdxAlphaColor FixedColumnHighlightColor = {read=FFixedColumnHighlightColor, write=SetFixedColumnHighlightColor, default=66051};
	__property System::Uitypes::TColor FixedColumnSeparatorColor = {read=FFixedColumnSeparatorColor, write=SetFixedColumnSeparatorColor, default=536870912};
	__property int FixedColumnSeparatorWidth = {read=FFixedColumnSeparatorWidth, write=SetFixedColumnSeparatorWidth, default=2};
	__property bool Footer = {read=FFooter, write=SetFooter, default=0};
	__property bool FooterAutoHeight = {read=FFooterAutoHeight, write=SetFooterAutoHeight, default=0};
	__property bool FooterMultiSummaries = {read=FFooterMultiSummaries, write=SetFooterMultiSummaries, default=0};
	__property System::Uitypes::TColor GridLineColor = {read=FGridLineColor, write=SetGridLineColor, default=536870912};
	__property Cxgraphics::TcxGridLines GridLines = {read=FGridLines, write=SetGridLines, default=0};
	__property bool GroupByBox = {read=FGroupByBox, write=SetGroupByBox, default=1};
	__property TcxGridGroupByHeaderLayout GroupByHeaderLayout = {read=FGroupByHeaderLayout, write=SetGroupByHeaderLayout, default=0};
	__property bool GroupFooterMultiSummaries = {read=FGroupFooterMultiSummaries, write=SetGroupFooterMultiSummaries, default=0};
	__property TcxGridGroupFootersMode GroupFooters = {read=FGroupFooters, write=SetGroupFooters, default=0};
	__property int GroupRowHeight = {read=FGroupRowHeight, write=SetGroupRowHeight, default=0};
	__property TcxGridGroupRowStyle GroupRowStyle = {read=FGroupRowStyle, write=SetGroupRowStyle, default=0};
	__property TcxGridGroupSummaryLayout GroupSummaryLayout = {read=FGroupSummaryLayout, write=SetGroupSummaryLayout, default=0};
	__property bool Header = {read=FHeader, write=SetHeader, default=1};
	__property bool HeaderAutoHeight = {read=GetHeaderAutoHeight, write=SetHeaderAutoHeight, default=0};
	__property bool HeaderEndEllipsis = {read=GetHeaderEndEllipsis, write=SetHeaderEndEllipsis, default=0};
	__property Cxlookandfeelpainters::TcxFilterButtonShowMode HeaderFilterButtonShowMode = {read=GetHeaderFilterButtonShowMode, write=SetHeaderFilterButtonShowMode, default=2};
	__property int HeaderHeight = {read=FHeaderHeight, write=SetHeaderHeight, default=0};
	__property bool HighlightFixedColumns = {read=FHighlightFixedColumns, write=SetHighlightFixedColumns, default=0};
	__property bool Indicator = {read=FIndicator, write=SetIndicator, default=0};
	__property int IndicatorWidth = {read=FIndicatorWidth, write=SetIndicatorWidth, default=12};
	__property System::UnicodeString MergedGroupSeparator = {read=FMergedGroupSeparator, write=SetMergedGroupSeparator, stored=IsMergedGroupSeparatorStored};
	__property System::Uitypes::TColor RowSeparatorColor = {read=FRowSeparatorColor, write=SetRowSeparatorColor, default=536870912};
	__property int RowSeparatorWidth = {read=FRowSeparatorWidth, write=SetRowSeparatorWidth, default=0};
	__property Cxlookandfeelpainters::TcxShowFilterButtons ShowColumnFilterButtons = {read=GetShowColumnFilterButtons, write=SetShowColumnFilterButtons, default=2};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxGridTableOptionsView() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TcxGridPreviewPlace : unsigned char { ppBottom, ppTop };

typedef System::TMetaClass* TcxGridPreviewClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridPreview : public Cxgridcustomview::TcxCustomGridOptions
{
	typedef Cxgridcustomview::TcxCustomGridOptions inherited;
	
private:
	bool FAutoHeight;
	TcxGridColumn* FColumn;
	int FLeftIndent;
	int FMaxLineCount;
	TcxGridPreviewPlace FPlace;
	int FRightIndent;
	bool FVisible;
	bool __fastcall GetActive();
	TcxGridTableView* __fastcall GetGridView();
	void __fastcall SetAutoHeight(bool Value);
	void __fastcall SetColumn(TcxGridColumn* Value);
	void __fastcall SetLeftIndent(int Value);
	void __fastcall SetMaxLineCount(int Value);
	void __fastcall SetPlace(TcxGridPreviewPlace Value);
	void __fastcall SetRightIndent(int Value);
	void __fastcall SetVisible(bool Value);
	
protected:
	virtual void __fastcall ChangeScale(int M, int D);
	int __fastcall GetFixedHeight();
	void __fastcall PropertyChanged();
	
public:
	__fastcall virtual TcxGridPreview(Cxgridcustomview::TcxCustomGridView* AGridView);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property bool Active = {read=GetActive, nodefault};
	__property TcxGridTableView* GridView = {read=GetGridView};
	
__published:
	__property bool AutoHeight = {read=FAutoHeight, write=SetAutoHeight, default=1};
	__property TcxGridColumn* Column = {read=FColumn, write=SetColumn};
	__property int LeftIndent = {read=FLeftIndent, write=SetLeftIndent, default=20};
	__property int MaxLineCount = {read=FMaxLineCount, write=SetMaxLineCount, default=3};
	__property TcxGridPreviewPlace Place = {read=FPlace, write=SetPlace, default=0};
	__property int RightIndent = {read=FRightIndent, write=SetRightIndent, default=5};
	__property bool Visible = {read=FVisible, write=SetVisible, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxGridPreview() { }
	
};

#pragma pack(pop)

typedef void __fastcall (__closure *TcxGridGetGroupStyleEvent)(TcxGridTableView* Sender, Cxgridcustomtableview::TcxCustomGridRecord* ARecord, int ALevel, Cxstyles::TcxStyle* &AStyle);

class PASCALIMPLEMENTATION TcxGridTableViewStyles : public Cxgridcustomtableview::TcxCustomGridTableViewStyles
{
	typedef Cxgridcustomtableview::TcxCustomGridTableViewStyles inherited;
	
private:
	bool FIsInplaceEditFormItemSelectionParams;
	bool FProcessingGroupSortedSummary;
	Cxgridcustomtableview::TcxGridGetCellStyleEvent FOnGetFooterStyle;
	TcxGridGetFooterStyleExEvent FOnGetFooterStyleEx;
	TcxGridGetFooterSummaryStyleEvent FOnGetFooterSummaryStyle;
	TcxGridGetGroupStyleEvent FOnGetGroupStyle;
	TcxGridGetGroupSummaryStyleEvent FOnGetGroupSummaryStyle;
	TcxGridGetHeaderStyleEvent FOnGetHeaderStyle;
	Cxgridcustomtableview::TcxGridGetCellStyleEvent FOnGetInplaceEditFormGroupStyle;
	Cxgridcustomtableview::TcxGridGetCellStyleEvent FOnGetInplaceEditFormItemStyle;
	Cxgridcustomtableview::TcxGridGetCellStyleEvent FOnGetPreviewStyle;
	HIDESBASE TcxGridTableView* __fastcall GetGridViewValue();
	void __fastcall SetOnGetFooterStyle(Cxgridcustomtableview::TcxGridGetCellStyleEvent Value);
	void __fastcall SetOnGetFooterStyleEx(TcxGridGetFooterStyleExEvent Value);
	void __fastcall SetOnGetFooterSummaryStyle(TcxGridGetFooterSummaryStyleEvent Value);
	void __fastcall SetOnGetGroupStyle(TcxGridGetGroupStyleEvent Value);
	void __fastcall SetOnGetGroupSummaryStyle(TcxGridGetGroupSummaryStyleEvent Value);
	void __fastcall SetOnGetHeaderStyle(TcxGridGetHeaderStyleEvent Value);
	void __fastcall SetOnGetInplaceEditFormItemStyle(Cxgridcustomtableview::TcxGridGetCellStyleEvent Value);
	void __fastcall SetOnGetPreviewStyle(Cxgridcustomtableview::TcxGridGetCellStyleEvent Value);
	
protected:
	virtual void __fastcall GetDefaultViewParams(int Index, System::TObject* AData, /* out */ Cxgraphics::TcxViewParams &AParams);
	virtual void __fastcall GetRowLayoutGroupParams(/* out */ Cxgraphics::TcxViewParams &AParams);
	virtual void __fastcall GetRowLayoutItemParams(Cxgridcustomtableview::TcxCustomGridRecord* ARecord, Cxgridcustomtableview::TcxCustomGridTableItem* AItem, /* out */ Cxgraphics::TcxViewParams &AParams, bool AUseViewInfo = false, Cxgridcustomtableview::TcxGridTableCellViewInfo* ACellViewInfo = (Cxgridcustomtableview::TcxGridTableCellViewInfo*)(0x0));
	virtual bool __fastcall IsOddEvenStylesSupported();
	__property bool IsInplaceEditFormItemSelectionParams = {read=FIsInplaceEditFormItemSelectionParams, nodefault};
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall GetCellContentParams(Cxgridcustomtableview::TcxCustomGridRecord* ARecord, System::TObject* AItem, /* out */ Cxgraphics::TcxViewParams &AParams);
	virtual void __fastcall GetContentParams(Cxgridcustomtableview::TcxCustomGridRecord* ARecord, Cxgridcustomtableview::TcxCustomGridTableItem* AItem, /* out */ Cxgraphics::TcxViewParams &AParams);
	virtual void __fastcall GetFooterCellParams(TcxCustomGridRow* ARow, TcxGridColumn* AColumn, int AFooterGroupLevel, Cxcustomdata::TcxDataSummaryItem* ASummaryItem, /* out */ Cxgraphics::TcxViewParams &AParams);
	virtual void __fastcall GetFooterParams(TcxCustomGridRow* ARow, TcxGridColumn* AColumn, int AFooterGroupLevel, Cxcustomdata::TcxDataSummaryItem* ASummaryItem, /* out */ Cxgraphics::TcxViewParams &AParams);
	virtual void __fastcall GetGroupParams(Cxgridcustomtableview::TcxCustomGridRecord* ARecord, int ALevel, /* out */ Cxgraphics::TcxViewParams &AParams);
	virtual void __fastcall GetGroupSummaryCellContentParams(TcxGridGroupRow* ARow, Cxcustomdata::TcxDataSummaryItem* ASummaryItem, /* out */ Cxgraphics::TcxViewParams &AParams);
	virtual void __fastcall GetGroupSummaryCellParams(TcxGridGroupRow* ARow, Cxcustomdata::TcxDataSummaryItem* ASummaryItem, /* out */ Cxgraphics::TcxViewParams &AParams);
	virtual void __fastcall GetGroupSummaryParams(TcxGridGroupRow* ARow, Cxcustomdata::TcxDataSummaryItem* ASummaryItem, /* out */ Cxgraphics::TcxViewParams &AParams);
	virtual void __fastcall GetHeaderParams(TcxGridColumn* AItem, /* out */ Cxgraphics::TcxViewParams &AParams);
	virtual void __fastcall GetInplaceEditFormGroupParams(Cxgridcustomtableview::TcxCustomGridRecord* ARecord, Cxgridcustomtableview::TcxCustomGridTableItem* AItem, /* out */ Cxgraphics::TcxViewParams &AParams);
	virtual void __fastcall GetInplaceEditFormItemHottrackParams(Cxgridcustomtableview::TcxCustomGridTableItem* AItem, /* out */ Cxgraphics::TcxViewParams &AParams);
	virtual void __fastcall GetInplaceEditFormItemParams(Cxgridcustomtableview::TcxCustomGridRecord* ARecord, Cxgridcustomtableview::TcxCustomGridTableItem* AItem, /* out */ Cxgraphics::TcxViewParams &AParams);
	virtual void __fastcall GetPreviewParams(Cxgridcustomtableview::TcxCustomGridRecord* ARecord, Cxgridcustomtableview::TcxCustomGridTableItem* AItem, /* out */ Cxgraphics::TcxViewParams &AParams);
	virtual void __fastcall GetRecordContentParams(Cxgridcustomtableview::TcxCustomGridRecord* ARecord, Cxgridcustomtableview::TcxCustomGridTableItem* AItem, /* out */ Cxgraphics::TcxViewParams &AParams);
	__property TcxGridTableView* GridView = {read=GetGridViewValue};
	
__published:
	__property Cxstyles::TcxStyle* FilterRowInfoText = {read=GetValue, write=SetValue, index=13};
	__property Cxstyles::TcxStyle* Footer = {read=GetValue, write=SetValue, index=14};
	__property Cxstyles::TcxStyle* Group = {read=GetValue, write=SetValue, index=15};
	__property Cxstyles::TcxStyle* GroupByBox = {read=GetValue, write=SetValue, index=16};
	__property Cxstyles::TcxStyle* GroupFooterSortedSummary = {read=GetValue, write=SetValue, index=17};
	__property Cxstyles::TcxStyle* GroupSortedSummary = {read=GetValue, write=SetValue, index=18};
	__property Cxstyles::TcxStyle* GroupSummary = {read=GetValue, write=SetValue, index=19};
	__property Cxstyles::TcxStyle* Header = {read=GetValue, write=SetValue, index=20};
	__property HotTrack;
	__property Inactive;
	__property Cxstyles::TcxStyle* Indicator = {read=GetValue, write=SetValue, index=22};
	__property Cxstyles::TcxStyle* InplaceEditFormGroup = {read=GetValue, write=SetValue, index=24};
	__property Cxstyles::TcxStyle* InplaceEditFormItem = {read=GetValue, write=SetValue, index=25};
	__property Cxstyles::TcxStyle* InplaceEditFormItemHotTrack = {read=GetValue, write=SetValue, index=26};
	__property Cxstyles::TcxStyle* NewItemRowInfoText = {read=GetValue, write=SetValue, index=21};
	__property Cxstyles::TcxStyle* Preview = {read=GetValue, write=SetValue, index=23};
	__property Selection;
	__property StyleSheet;
	__property Cxgridcustomtableview::TcxGridGetCellStyleEvent OnGetFooterStyle = {read=FOnGetFooterStyle, write=SetOnGetFooterStyle};
	__property TcxGridGetFooterStyleExEvent OnGetFooterStyleEx = {read=FOnGetFooterStyleEx, write=SetOnGetFooterStyleEx};
	__property TcxGridGetFooterSummaryStyleEvent OnGetFooterSummaryStyle = {read=FOnGetFooterSummaryStyle, write=SetOnGetFooterSummaryStyle};
	__property TcxGridGetGroupStyleEvent OnGetGroupStyle = {read=FOnGetGroupStyle, write=SetOnGetGroupStyle};
	__property TcxGridGetGroupSummaryStyleEvent OnGetGroupSummaryStyle = {read=FOnGetGroupSummaryStyle, write=SetOnGetGroupSummaryStyle};
	__property TcxGridGetHeaderStyleEvent OnGetHeaderStyle = {read=FOnGetHeaderStyle, write=SetOnGetHeaderStyle};
	__property Cxgridcustomtableview::TcxGridGetCellStyleEvent OnGetInplaceEditFormGroupStyle = {read=FOnGetInplaceEditFormGroupStyle, write=FOnGetInplaceEditFormGroupStyle};
	__property Cxgridcustomtableview::TcxGridGetCellStyleEvent OnGetInplaceEditFormItemStyle = {read=FOnGetInplaceEditFormItemStyle, write=SetOnGetInplaceEditFormItemStyle};
	__property Cxgridcustomtableview::TcxGridGetCellStyleEvent OnGetPreviewStyle = {read=FOnGetPreviewStyle, write=SetOnGetPreviewStyle};
public:
	/* TcxCustomGridTableViewStyles.Create */ inline __fastcall virtual TcxGridTableViewStyles(System::Classes::TPersistent* AOwner) : Cxgridcustomtableview::TcxCustomGridTableViewStyles(AOwner) { }
	
public:
	/* TcxStyles.Destroy */ inline __fastcall virtual ~TcxGridTableViewStyles() { }
	
};


class PASCALIMPLEMENTATION TcxGridTableViewStyleSheet : public Cxstyles::TcxCustomStyleSheet
{
	typedef Cxstyles::TcxCustomStyleSheet inherited;
	
private:
	TcxGridTableViewStyles* __fastcall GetStylesValue();
	void __fastcall SetStylesValue(TcxGridTableViewStyles* Value);
	
public:
	__classmethod virtual Cxstyles::TcxCustomStylesClass __fastcall GetStylesClass();
	
__published:
	__property TcxGridTableViewStyles* Styles = {read=GetStylesValue, write=SetStylesValue};
public:
	/* TcxCustomStyleSheet.Create */ inline __fastcall virtual TcxGridTableViewStyleSheet(System::Classes::TComponent* AOwner) : Cxstyles::TcxCustomStyleSheet(AOwner) { }
	/* TcxCustomStyleSheet.Destroy */ inline __fastcall virtual ~TcxGridTableViewStyleSheet() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridTableSummaryGroupItemLink : public Cxcustomdata::TcxDataSummaryGroupItemLink
{
	typedef Cxcustomdata::TcxDataSummaryGroupItemLink inherited;
	
private:
	TcxGridColumn* __fastcall GetColumn();
	void __fastcall SetColumn(TcxGridColumn* Value);
	TcxGridTableView* __fastcall GetGridView();
	
protected:
	HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	int __stdcall _AddRef();
	int __stdcall _Release();
	System::UnicodeString __fastcall GetObjectName();
	bool __fastcall GetProperties(System::Classes::TStrings* AProperties);
	void __fastcall GetPropertyValue(const System::UnicodeString AName, System::Variant &AValue);
	void __fastcall SetPropertyValue(const System::UnicodeString AName, const System::Variant &AValue);
	__property TcxGridTableView* GridView = {read=GetGridView};
	
__published:
	__property TcxGridColumn* Column = {read=GetColumn, write=SetColumn};
public:
	/* TCollectionItem.Create */ inline __fastcall virtual TcxGridTableSummaryGroupItemLink(System::Classes::TCollection* Collection) : Cxcustomdata::TcxDataSummaryGroupItemLink(Collection) { }
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TcxGridTableSummaryGroupItemLink() { }
	
private:
	void *__IcxStoredObject;	// Cxstorage::IcxStoredObject 
	
public:
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

#pragma pack(pop)

__interface  INTERFACE_UUID("{6F9A0C3E-E33F-4E77-9357-82F1D19CDB67}") IcxGridSummaryItem  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetDisplayText() = 0 ;
	virtual bool __fastcall GetVisibleForCustomization() = 0 ;
	__property System::UnicodeString DisplayText = {read=GetDisplayText};
	__property bool VisibleForCustomization = {read=GetVisibleForCustomization};
};

class PASCALIMPLEMENTATION TcxGridTableSummaryItem : public Cxcustomdata::TcxDataSummaryItem
{
	typedef Cxcustomdata::TcxDataSummaryItem inherited;
	
private:
	System::UnicodeString FDisplayText;
	bool FVisibleForCustomization;
	TcxGridColumn* __fastcall GetColumn();
	TcxGridTableView* __fastcall GetGridView();
	void __fastcall SetColumn(TcxGridColumn* Value);
	void __fastcall SetDisplayText(const System::UnicodeString Value);
	void __fastcall SetVisibleForCustomization(bool Value);
	
protected:
	HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	int __stdcall _AddRef();
	int __stdcall _Release();
	System::UnicodeString __fastcall GetObjectName();
	bool __fastcall GetProperties(System::Classes::TStrings* AProperties);
	void __fastcall GetPropertyValue(const System::UnicodeString AName, System::Variant &AValue);
	void __fastcall SetPropertyValue(const System::UnicodeString AName, const System::Variant &AValue);
	System::UnicodeString __fastcall GetDisplayText();
	bool __fastcall GetVisibleForCustomization();
	__property TcxGridTableView* GridView = {read=GetGridView};
	
public:
	__fastcall virtual TcxGridTableSummaryItem(System::Classes::TCollection* Collection);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property TcxGridColumn* Column = {read=GetColumn, write=SetColumn};
	__property System::UnicodeString DisplayText = {read=FDisplayText, write=SetDisplayText};
	__property Sorted = {default=0};
	__property bool VisibleForCustomization = {read=FVisibleForCustomization, write=SetVisibleForCustomization, default=1};
public:
	/* TcxDataSummaryItem.Destroy */ inline __fastcall virtual ~TcxGridTableSummaryItem() { }
	
private:
	void *__IcxGridSummaryItem;	// IcxGridSummaryItem 
	void *__IcxStoredObject;	// Cxstorage::IcxStoredObject 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6F9A0C3E-E33F-4E77-9357-82F1D19CDB67}
	operator _di_IcxGridSummaryItem()
	{
		_di_IcxGridSummaryItem intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IcxGridSummaryItem*(void) { return (IcxGridSummaryItem*)&__IcxGridSummaryItem; }
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


typedef void __fastcall (__closure *TcxGridColumnEvent)(TcxGridTableView* Sender, TcxGridColumn* AColumn);

typedef void __fastcall (__closure *TcxGridIndicatorCellCustomDrawEvent)(TcxGridTableView* Sender, Cxgraphics::TcxCanvas* ACanvas, TcxCustomGridIndicatorItemViewInfo* AViewInfo, bool &ADone);

typedef void __fastcall (__closure *TcxGridGroupRowChangingEvent)(TcxGridTableView* Sender, TcxGridGroupRow* AGroup, bool &AAllow);

typedef void __fastcall (__closure *TcxGridGroupRowEvent)(TcxGridTableView* Sender, TcxGridGroupRow* AGroup);

typedef void __fastcall (__closure *TcxGridGetUnmergeableColumnsEvent)(TcxGridTableView* Sender, TcxGridColumn* AColumn, System::Classes::TList* AUnmergeableColumns);

class PASCALIMPLEMENTATION TcxGridTableView : public Cxgridcustomtableview::TcxCustomGridTableView
{
	typedef Cxgridcustomtableview::TcxCustomGridTableView inherited;
	
private:
	bool FAllowCellMerging;
	Cxgridcustomtableview::TcxGridOpenTableItemList* FAssigningIsChildInMergedGroupItems;
	int FDynamicFixedColumnCount;
	TcxGridEditFormOptions* FEditForm;
	TcxGridFilterRowOptions* FFilterRow;
	int FFixedColumnCount;
	TcxGridFixedDataRowsOptions* FFixedDataRows;
	TcxGridTableViewInplaceEditForm* FInplaceEditForm;
	int FLastAutoWidthSizableColumnVisibleIndex;
	TcxGridNewItemRowOptions* FNewItemRow;
	TcxGridPreview* FPreview;
	TcxGridRowLayoutOptions* FRowLayout;
	TcxGridTableRowLayoutController* FRowLayoutController;
	int FVisibleDynamicFixedColumnCount;
	int FVisibleLeftFixedColumnCount;
	int FVisibleRightFixedColumnCount;
	TcxGridColumnEvent FOnColumnHeaderClick;
	TcxGridColumnEvent FOnColumnPosChanged;
	TcxGridColumnEvent FOnColumnSizeChanged;
	TcxGridColumnCustomDrawHeaderEvent FOnCustomDrawColumnHeader;
	TcxGridColumnCustomDrawHeaderEvent FOnCustomDrawFooterCell;
	Cxgridcustomtableview::TcxGridTableCellCustomDrawEvent FOnCustomDrawGroupCell;
	TcxGridGroupSummaryCellCustomDrawEvent FOnCustomDrawGroupSummaryCell;
	TcxGridIndicatorCellCustomDrawEvent FOnCustomDrawIndicatorCell;
	TcxGridTableViewDetachedEditFormEvent FOnDetachedEditFormInitialize;
	TcxGridGetUnmergeableColumnsEvent FOnGetUnmergeableColumns;
	TcxGridGroupRowEvent FOnGroupRowCollapsed;
	TcxGridGroupRowChangingEvent FOnGroupRowCollapsing;
	TcxGridGroupRowEvent FOnGroupRowExpanded;
	TcxGridGroupRowChangingEvent FOnGroupRowExpanding;
	System::Classes::TNotifyEvent FOnLeftPosChanged;
	HIDESBASE TcxGridTableBackgroundBitmaps* __fastcall GetBackgroundBitmaps();
	TcxGridColumn* __fastcall GetColumn(int Index);
	int __fastcall GetColumnCount();
	HIDESBASE TcxGridTableController* __fastcall GetController();
	Cxgridcustomtableview::TcxGridDataController* __fastcall GetDataController();
	TcxGridTableDateTimeHandling* __fastcall GetDateTimeHandling();
	TcxGridTableFiltering* __fastcall GetFiltering();
	TcxGridTableFindPanelOptions* __fastcall GetFindPanel();
	TcxGridColumn* __fastcall GetGroupedColumn(int Index);
	int __fastcall GetGroupedColumnCount();
	TcxGridTableViewInplaceEditForm* __fastcall GetInplaceEditForm();
	HIDESBASE TcxGridTableOptionsBehavior* __fastcall GetOptionsBehavior();
	TcxGridTableOptionsCustomize* __fastcall GetOptionsCustomize();
	HIDESBASE TcxGridTableOptionsData* __fastcall GetOptionsData();
	HIDESBASE TcxGridTableOptionsSelection* __fastcall GetOptionsSelection();
	HIDESBASE TcxGridTableOptionsView* __fastcall GetOptionsView();
	HIDESBASE TcxGridTablePainter* __fastcall GetPainter();
	TcxGridTableRowLayoutController* __fastcall GetRowLayoutController();
	HIDESBASE TcxGridTableViewStyles* __fastcall GetStyles();
	HIDESBASE TcxGridViewData* __fastcall GetViewData();
	HIDESBASE TcxGridTableViewInfo* __fastcall GetViewInfo();
	TcxGridColumn* __fastcall GetVisibleColumn(int Index);
	int __fastcall GetVisibleColumnCount();
	int __fastcall GetVisibleColumnCountByFixedKind(TcxGridColumnFixedKind AKind);
	int __fastcall GetVisibleFixedColumnCount();
	int __fastcall GetVisibleScrollableColumnCount();
	HIDESBASE void __fastcall SetBackgroundBitmaps(TcxGridTableBackgroundBitmaps* Value);
	void __fastcall SetColumn(int Index, TcxGridColumn* Value);
	void __fastcall SetDataController(Cxgridcustomtableview::TcxGridDataController* Value);
	HIDESBASE void __fastcall SetDateTimeHandling(TcxGridTableDateTimeHandling* Value);
	void __fastcall SetEditForm(TcxGridEditFormOptions* AValue);
	HIDESBASE void __fastcall SetFiltering(TcxGridTableFiltering* Value);
	void __fastcall SetFilterRow(TcxGridFilterRowOptions* Value);
	HIDESBASE void __fastcall SetFindPanel(TcxGridTableFindPanelOptions* AValue);
	void __fastcall SetFixedDataRows(TcxGridFixedDataRowsOptions* Value);
	void __fastcall SetNewItemRow(TcxGridNewItemRowOptions* Value);
	void __fastcall SetRowLayout(TcxGridRowLayoutOptions* AValue);
	void __fastcall SetOnColumnHeaderClick(TcxGridColumnEvent Value);
	void __fastcall SetOnColumnPosChanged(TcxGridColumnEvent Value);
	void __fastcall SetOnColumnSizeChanged(TcxGridColumnEvent Value);
	void __fastcall SetOnCustomDrawColumnHeader(TcxGridColumnCustomDrawHeaderEvent Value);
	void __fastcall SetOnCustomDrawFooterCell(TcxGridColumnCustomDrawHeaderEvent Value);
	void __fastcall SetOnCustomDrawGroupCell(Cxgridcustomtableview::TcxGridTableCellCustomDrawEvent Value);
	void __fastcall SetOnCustomDrawGroupSummaryCell(TcxGridGroupSummaryCellCustomDrawEvent Value);
	void __fastcall SetOnCustomDrawIndicatorCell(TcxGridIndicatorCellCustomDrawEvent Value);
	void __fastcall SetOnDetachedEditFormInitialize(TcxGridTableViewDetachedEditFormEvent Value);
	void __fastcall SetOnGetUnmergeableColumns(TcxGridGetUnmergeableColumnsEvent Value);
	void __fastcall SetOnLeftPosChanged(System::Classes::TNotifyEvent Value);
	HIDESBASE void __fastcall SetOptionsBehavior(TcxGridTableOptionsBehavior* Value);
	HIDESBASE void __fastcall SetOptionsCustomize(TcxGridTableOptionsCustomize* Value);
	HIDESBASE void __fastcall SetOptionsData(TcxGridTableOptionsData* Value);
	HIDESBASE void __fastcall SetOptionsSelection(TcxGridTableOptionsSelection* Value);
	HIDESBASE void __fastcall SetOptionsView(TcxGridTableOptionsView* Value);
	void __fastcall SetPreview(TcxGridPreview* Value);
	HIDESBASE void __fastcall SetStyles(TcxGridTableViewStyles* Value);
	Dxlayoutcontainer::TdxLayoutContainer* __fastcall GetLayoutContainer();
	
protected:
	virtual bool __fastcall GetProperties(System::Classes::TStrings* AProperties);
	virtual void __fastcall GetPropertyValue(const System::UnicodeString AName, System::Variant &AValue);
	virtual void __fastcall SetPropertyValue(const System::UnicodeString AName, const System::Variant &AValue);
	virtual void __fastcall GetStoredChildren(System::Classes::TStringList* AChildren);
	virtual void __fastcall AssignLayout(Cxgridcustomview::TcxCustomGridView* ALayoutView);
	virtual void __fastcall BeforeEditLayout(Cxgridcustomview::TcxCustomGridView* ALayoutView);
	virtual System::UnicodeString __fastcall GetLayoutCustomizationFormButtonCaption();
	virtual void __fastcall AddAdornerTargetColumns(System::Classes::TStrings* AList);
	virtual void __fastcall GetAdornerTargetElements(System::Classes::TStrings* AList);
	virtual void __fastcall DestroyHandlers();
	virtual void __fastcall CreateOptions();
	virtual void __fastcall DestroyOptions();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	virtual void __fastcall LookAndFeelChanged();
	virtual void __fastcall AfterRestoring();
	virtual void __fastcall BeforeRestoring();
	virtual void __fastcall AfterAssign(Cxgridcustomview::TcxCustomGridView* ASource);
	virtual void __fastcall AssignEditingRecord();
	virtual bool __fastcall CanCellMerging();
	virtual bool __fastcall CanOffset(int ARecordCountDelta, int APixelScrollRecordOffsetDelta);
	virtual bool __fastcall CanOffsetHorz();
	virtual void __fastcall CheckVisibleDynamicFixedColumnCount();
	virtual void __fastcall ColumnFixedKindChanged(TcxGridColumnFixedKind AKind, TcxGridColumnFixedKind APrevKind);
	virtual Cxgridcustomtableview::TcxGridFindPanelOptions* __fastcall CreateFindPanel();
	virtual void __fastcall DetailDataChanged(Cxgridcustomview::TcxCustomGridView* ADetail);
	virtual void __fastcall DoAssign(Cxgridcustomview::TcxCustomGridView* ASource);
	virtual void __fastcall DoItemsAssigned();
	virtual void __fastcall DoAfterAssignItems();
	virtual void __fastcall DoBeforeAssignItems();
	virtual void __fastcall DoMakeMasterGridRecordVisible();
	virtual void __fastcall DoStylesChanged();
	virtual int __fastcall GetLastAutoWidthSizableColumnVisibleIndex();
	virtual System::Types::TRect __fastcall GetInplaceEditFormClientBounds();
	virtual bool __fastcall GetIsControlFocused();
	virtual void __fastcall GetItemsListForClipboard(System::Classes::TList* AItems, bool ACopyAll);
	virtual bool __fastcall GetResizeOnBoundsChange();
	virtual Cxcontrols::_di_IdxTouchScrollUIOwner __fastcall GetTouchScrollUIOwner(const System::Types::TPoint &APoint);
	bool __fastcall HasCellMerging();
	virtual bool __fastcall HasColumnAutoWidth();
	virtual bool __fastcall HasInplaceEditForm();
	virtual bool __fastcall HasRowLayoutController();
	virtual void __fastcall Init();
	virtual bool __fastcall IsCheckBoxSelectionSupported();
	virtual bool __fastcall IsDataRowFixingSupported();
	virtual bool __fastcall IsFixedGroupsMode();
	virtual bool __fastcall IsInplaceEditFormVisible();
	virtual bool __fastcall IsMergedGroupsSupported();
	virtual bool __fastcall IsPersistentMultiSelectSupported();
	bool __fastcall IsPreviewHeightFixed();
	virtual bool __fastcall IsRecordHeightDependsOnData();
	virtual void __fastcall NavigatorEditExecute();
	virtual bool __fastcall NeedChangeLayoutOnSelectionChanged(Cxcustomdata::TcxSelectionChangedInfo* AInfo);
	virtual bool __fastcall NeedFocusFirstItemAfterInit();
	virtual void __fastcall RecordChanged(int ARecordIndex);
	virtual void __fastcall RefreshVisibleItemsList();
	virtual void __fastcall RemoveItem(Cxgridcustomtableview::TcxCustomGridTableItem* AItem);
	virtual void __fastcall ReorderVisibleItemListByFixedKind();
	virtual void __fastcall ChangeScale(int M, int D);
	virtual void __fastcall SetName(const System::Classes::TComponentName NewName);
	virtual bool __fastcall SupportsColumnFixing();
	virtual bool __fastcall SupportsHotTrack();
	virtual void __fastcall UpdateData(Cxcustomdata::TcxUpdateControlInfo* AInfo);
	virtual void __fastcall UpdateFocusedRecord(Cxcustomdata::TcxUpdateControlInfo* AInfo);
	virtual void __fastcall UpdateInplaceEditForm(Cxcustomdata::TcxUpdateControlInfo* AInfo);
	virtual bool __fastcall UpdateOnDetailDataChange(Cxgridcustomview::TcxCustomGridView* ADetail);
	virtual Cxgridcustomview::TcxCustomGridControllerClass __fastcall GetControllerClass();
	virtual Cxcustomdata::TcxCustomDataControllerClass __fastcall GetDataControllerClass();
	virtual Cxgridcustomview::TcxCustomGridPainterClass __fastcall GetPainterClass();
	virtual Cxgridcustomview::TcxCustomGridViewDataClass __fastcall GetViewDataClass();
	virtual Cxgridcustomview::TcxCustomGridViewInfoClass __fastcall GetViewInfoClass();
	virtual Cxgridcustomview::TcxCustomGridBackgroundBitmapsClass __fastcall GetBackgroundBitmapsClass();
	virtual Cxgridcustomtableview::TcxCustomGridTableDateTimeHandlingClass __fastcall GetDateTimeHandlingClass();
	virtual TcxGridEditFormOptionsClass __fastcall GetEditFormClass();
	virtual Cxgridcustomtableview::TcxCustomGridTableFilteringClass __fastcall GetFilteringClass();
	virtual TcxGridFilterRowOptionsClass __fastcall GetFilterRowOptionsClass();
	virtual TcxGridFixedDataRowsOptionsClass __fastcall GetFixedDataRowsOptionsClass();
	virtual TcxGridTableViewInplaceEditFormClass __fastcall GetInplaceEditFormClass();
	virtual Cxgridcustomtableview::TcxGridViewNavigatorClass __fastcall GetNavigatorClass();
	virtual TcxGridNewItemRowOptionsClass __fastcall GetNewItemRowOptionsClass();
	virtual Cxgridcustomview::TcxCustomGridOptionsBehaviorClass __fastcall GetOptionsBehaviorClass();
	virtual Cxgridcustomtableview::TcxCustomGridTableOptionsCustomizeClass __fastcall GetOptionsCustomizeClass();
	virtual Cxgridcustomview::TcxCustomGridOptionsDataClass __fastcall GetOptionsDataClass();
	virtual Cxgridcustomview::TcxCustomGridOptionsSelectionClass __fastcall GetOptionsSelectionClass();
	virtual Cxgridcustomview::TcxCustomGridOptionsViewClass __fastcall GetOptionsViewClass();
	virtual TcxGridPreviewClass __fastcall GetPreviewClass();
	virtual TcxGridRowLayoutOptionsClass __fastcall GetRowLayoutClass();
	virtual TcxGridTableRowLayoutControllerClass __fastcall GetRowLayoutControllerClass();
	virtual Cxgridcustomview::TcxCustomGridViewStylesClass __fastcall GetStylesClass();
	virtual Cxcustomdata::TcxDataSummaryGroupItemLinkClass __fastcall GetSummaryGroupItemLinkClass();
	virtual Cxcustomdata::TcxDataSummaryItemClass __fastcall GetSummaryItemClass();
	virtual Cxgridcustomtableview::TcxCustomGridTableItemClass __fastcall GetItemClass();
	virtual void __fastcall ItemVisibilityChanged(Cxgridcustomtableview::TcxCustomGridTableItem* AItem, bool Value);
	virtual bool __fastcall CalculateDataCellSelected(Cxgridcustomtableview::TcxCustomGridRecord* ARecord, Cxgridcustomtableview::TcxCustomGridTableItem* AItem, bool AUseViewInfo, Cxgridcustomtableview::TcxGridTableCellViewInfo* ACellViewInfo);
	virtual void __fastcall DoColumnHeaderClick(TcxGridColumn* AColumn);
	virtual void __fastcall DoColumnPosChanged(TcxGridColumn* AColumn);
	virtual void __fastcall DoColumnSizeChanged(TcxGridColumn* AColumn);
	virtual void __fastcall DoCustomDrawColumnHeader(Cxgraphics::TcxCanvas* ACanvas, TcxGridColumnHeaderViewInfo* AViewInfo, bool &ADone);
	virtual void __fastcall DoCustomDrawFooterCell(Cxgraphics::TcxCanvas* ACanvas, TcxGridColumnHeaderViewInfo* AViewInfo, bool &ADone);
	virtual void __fastcall DoCustomDrawGroupCell(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomtableview::TcxGridTableCellViewInfo* AViewInfo, bool &ADone);
	virtual void __fastcall DoCustomDrawGroupSummaryCell(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridViewCellViewInfo* AViewInfo, bool &ADone);
	virtual void __fastcall DoCustomDrawIndicatorCell(Cxgraphics::TcxCanvas* ACanvas, TcxCustomGridIndicatorItemViewInfo* AViewInfo, bool &ADone);
	virtual void __fastcall DoCustomDrawRowLayoutRowBackground(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo, bool &ADone);
	virtual void __fastcall DoCustomDrawRowLayoutRowHotTrack(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo, bool &ADone);
	virtual void __fastcall DoCustomDrawRowLayoutRowSelection(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo, bool &ADone);
	virtual void __fastcall DoDetachedEditFormInitialize(Vcl::Forms::TForm* AForm);
	virtual void __fastcall DoGetUnmergeableColumns(TcxGridColumn* AColumn, System::Classes::TList* AUnmergeableColumns);
	virtual void __fastcall DoLeftPosChanged();
	bool __fastcall HasCustomDrawColumnHeader();
	bool __fastcall HasCustomDrawFooterCell();
	bool __fastcall HasCustomDrawGroupCell();
	bool __fastcall HasCustomDrawGroupSummaryCell();
	bool __fastcall HasCustomDrawIndicatorCell();
	bool __fastcall HasCustomDrawRowLayoutRowHotTrack();
	bool __fastcall HasCustomDrawRowLayoutRowSelection();
	virtual void __fastcall DoGroupRowCollapsed(TcxGridGroupRow* AGroup);
	virtual bool __fastcall DoGroupRowCollapsing(TcxGridGroupRow* AGroup);
	virtual void __fastcall DoGroupRowExpanded(TcxGridGroupRow* AGroup);
	virtual bool __fastcall DoGroupRowExpanding(TcxGridGroupRow* AGroup);
	__property bool AllowCellMerging = {read=FAllowCellMerging, write=FAllowCellMerging, nodefault};
	__property TcxGridTableViewInplaceEditForm* InplaceEditForm = {read=GetInplaceEditForm};
	__property int LastAutoWidthSizableColumnVisibleIndex = {read=FLastAutoWidthSizableColumnVisibleIndex, nodefault};
	__property TcxGridTableRowLayoutController* RowLayoutController = {read=GetRowLayoutController};
	__property int VisibleFixedColumnCount = {read=GetVisibleFixedColumnCount, nodefault};
	__property int VisibleScrollableColumnCount = {read=GetVisibleScrollableColumnCount, nodefault};
	
public:
	__fastcall virtual TcxGridTableView(System::Classes::TComponent* AOwner);
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	TcxGridColumn* __fastcall CreateColumn();
	virtual TcxGridMasterRowDblClickAction __fastcall MasterRowDblClickAction();
	virtual bool __fastcall IsEqualHeightRecords();
	virtual bool __fastcall IsInplaceEditFormMode();
	bool __fastcall UseRestHeightForDetails();
	__classmethod virtual bool __fastcall CanBeLookupList();
	__property Cxgridcustomtableview::TcxGridOpenTableItemList* AssigningIsChildInMergedGroupItems = {read=FAssigningIsChildInMergedGroupItems};
	__property int ColumnCount = {read=GetColumnCount, nodefault};
	__property TcxGridColumn* Columns[int Index] = {read=GetColumn, write=SetColumn};
	__property TcxGridTableController* Controller = {read=GetController};
	__property int GroupedColumnCount = {read=GetGroupedColumnCount, nodefault};
	__property TcxGridColumn* GroupedColumns[int Index] = {read=GetGroupedColumn};
	__property TcxGridTablePainter* Painter = {read=GetPainter};
	__property TcxGridViewData* ViewData = {read=GetViewData};
	__property TcxGridTableViewInfo* ViewInfo = {read=GetViewInfo};
	__property int VisibleColumnCount = {read=GetVisibleColumnCount, nodefault};
	__property int VisibleColumnCountByFixedKind[TcxGridColumnFixedKind AKind] = {read=GetVisibleColumnCountByFixedKind};
	__property TcxGridColumn* VisibleColumns[int Index] = {read=GetVisibleColumn};
	
__published:
	__property TcxGridTableBackgroundBitmaps* BackgroundBitmaps = {read=GetBackgroundBitmaps, write=SetBackgroundBitmaps};
	__property Cxgridcustomtableview::TcxGridDataController* DataController = {read=GetDataController, write=SetDataController};
	__property TcxGridTableDateTimeHandling* DateTimeHandling = {read=GetDateTimeHandling, write=SetDateTimeHandling};
	__property TcxGridEditFormOptions* EditForm = {read=FEditForm, write=SetEditForm};
	__property TcxGridTableFiltering* Filtering = {read=GetFiltering, write=SetFiltering};
	__property TcxGridFilterRowOptions* FilterRow = {read=FFilterRow, write=SetFilterRow};
	__property TcxGridTableFindPanelOptions* FindPanel = {read=GetFindPanel, write=SetFindPanel};
	__property TcxGridFixedDataRowsOptions* FixedDataRows = {read=FFixedDataRows, write=SetFixedDataRows};
	__property Images;
	__property TcxGridNewItemRowOptions* NewItemRow = {read=FNewItemRow, write=SetNewItemRow};
	__property TcxGridTableOptionsBehavior* OptionsBehavior = {read=GetOptionsBehavior, write=SetOptionsBehavior};
	__property TcxGridTableOptionsCustomize* OptionsCustomize = {read=GetOptionsCustomize, write=SetOptionsCustomize};
	__property TcxGridTableOptionsData* OptionsData = {read=GetOptionsData, write=SetOptionsData};
	__property TcxGridTableOptionsSelection* OptionsSelection = {read=GetOptionsSelection, write=SetOptionsSelection};
	__property TcxGridTableOptionsView* OptionsView = {read=GetOptionsView, write=SetOptionsView};
	__property TcxGridPreview* Preview = {read=FPreview, write=SetPreview};
	__property TcxGridRowLayoutOptions* RowLayout = {read=FRowLayout, write=SetRowLayout};
	__property System::Classes::TNotifyEvent RowLayoutEvents = {read=FSubClassEvents, write=FSubClassEvents};
	__property TcxGridTableViewStyles* Styles = {read=GetStyles, write=SetStyles};
	__property TcxGridColumnEvent OnColumnHeaderClick = {read=FOnColumnHeaderClick, write=SetOnColumnHeaderClick};
	__property TcxGridColumnEvent OnColumnPosChanged = {read=FOnColumnPosChanged, write=SetOnColumnPosChanged};
	__property TcxGridColumnEvent OnColumnSizeChanged = {read=FOnColumnSizeChanged, write=SetOnColumnSizeChanged};
	__property TcxGridColumnCustomDrawHeaderEvent OnCustomDrawColumnHeader = {read=FOnCustomDrawColumnHeader, write=SetOnCustomDrawColumnHeader};
	__property TcxGridColumnCustomDrawHeaderEvent OnCustomDrawFooterCell = {read=FOnCustomDrawFooterCell, write=SetOnCustomDrawFooterCell};
	__property Cxgridcustomtableview::TcxGridTableCellCustomDrawEvent OnCustomDrawGroupCell = {read=FOnCustomDrawGroupCell, write=SetOnCustomDrawGroupCell};
	__property TcxGridGroupSummaryCellCustomDrawEvent OnCustomDrawGroupSummaryCell = {read=FOnCustomDrawGroupSummaryCell, write=SetOnCustomDrawGroupSummaryCell};
	__property TcxGridIndicatorCellCustomDrawEvent OnCustomDrawIndicatorCell = {read=FOnCustomDrawIndicatorCell, write=SetOnCustomDrawIndicatorCell};
	__property OnCustomization;
	__property TcxGridGroupRowEvent OnGroupRowCollapsed = {read=FOnGroupRowCollapsed, write=FOnGroupRowCollapsed};
	__property TcxGridGroupRowChangingEvent OnGroupRowCollapsing = {read=FOnGroupRowCollapsing, write=FOnGroupRowCollapsing};
	__property TcxGridGroupRowEvent OnGroupRowExpanded = {read=FOnGroupRowExpanded, write=FOnGroupRowExpanded};
	__property TcxGridGroupRowChangingEvent OnGroupRowExpanding = {read=FOnGroupRowExpanding, write=FOnGroupRowExpanding};
	__property TcxGridTableViewDetachedEditFormEvent OnDetachedEditFormInitialize = {read=FOnDetachedEditFormInitialize, write=SetOnDetachedEditFormInitialize};
	__property TcxGridGetUnmergeableColumnsEvent OnGetUnmergeableColumns = {read=FOnGetUnmergeableColumns, write=SetOnGetUnmergeableColumns};
	__property OnInitGroupingDateRanges;
	__property System::Classes::TNotifyEvent OnLeftPosChanged = {read=FOnLeftPosChanged, write=SetOnLeftPosChanged};
public:
	/* TcxCustomGridTableView.Destroy */ inline __fastcall virtual ~TcxGridTableView() { }
	
public:
	/* TcxCustomGridView.CreateCloned */ inline __fastcall virtual TcxGridTableView(Cxcontrols::TcxControl* AControl) : Cxgridcustomtableview::TcxCustomGridTableView(AControl) { }
	
public:
	/* TcxControlChildComponent.CreateEx */ inline __fastcall virtual TcxGridTableView(Cxcontrols::TcxControl* AControl, bool AAssignOwner) : Cxgridcustomtableview::TcxCustomGridTableView(AControl, AAssignOwner) { }
	
private:
	void *__IdxLayoutContainerOwner;	// Dxlayoutcontainer::IdxLayoutContainerOwner 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {85310BD8-3D7A-454F-A54B-9898C0AA55A2}
	operator Dxlayoutcontainer::_di_IdxLayoutContainerOwner()
	{
		Dxlayoutcontainer::_di_IdxLayoutContainerOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxlayoutcontainer::IdxLayoutContainerOwner*(void) { return (Dxlayoutcontainer::IdxLayoutContainerOwner*)&__IdxLayoutContainerOwner; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Byte htGridBase = System::Byte(0xc8);
static const System::Byte htGroupByBox = System::Byte(0xc9);
static const System::Byte htColumnHeader = System::Byte(0xca);
static const System::Byte htColumnHeaderHorzSizingEdge = System::Byte(0xcb);
static const System::Byte htColumnHeaderFilterButton = System::Byte(0xcc);
static const System::Byte htFooter = System::Byte(0xcd);
static const System::Byte htFooterCell = System::Byte(0xce);
static const System::Byte htGroupFooter = System::Byte(0xcf);
static const System::Byte htGroupFooterCell = System::Byte(0xd0);
static const System::Byte htRowIndicator = System::Byte(0xd1);
static const System::Byte htRowSizingEdge = System::Byte(0xd2);
static const System::Byte htIndicator = System::Byte(0xd3);
static const System::Byte htIndicatorHeader = System::Byte(0xd4);
static const System::Byte htRowLevelIndent = System::Byte(0xd5);
static const System::Byte htHeader = System::Byte(0xd6);
static const System::Byte htGroupSummary = System::Byte(0xd7);
static const System::Byte htGroupByBoxSearchButton = System::Byte(0xd8);
static const System::Int8 ckHeader = System::Int8(0x2);
static const System::Int8 ckGroupByBox = System::Int8(0x3);
static const System::Int8 ckFooter = System::Int8(0x4);
static const System::Int8 cxGridDefaultIndicatorWidth = System::Int8(0xc);
#define cxGridDefaultMergedGroupSeparator L"; "
static const System::Int8 cxGridPreviewDefaultLeftIndent = System::Int8(0x14);
static const System::Int8 cxGridPreviewDefaultMaxLineCount = System::Int8(0x3);
static const System::Int8 cxGridPreviewDefaultRightIndent = System::Int8(0x5);
static const System::Int8 cxGridHeaderSizingEdgeSize = System::Int8(0x8);
static const System::Int8 cxGridRowSizingEdgeSize = System::Int8(0x8);
static const System::Int8 cxGridDefaultFixedColumnSeparatorWidth = System::Int8(0x2);
static const System::Int8 cxGridCustomRowSeparatorDefaultWidth = System::Int8(0x6);
static const System::Int8 cxGridCustomRowSeparatorMinWidth = System::Int8(0x2);
extern DELPHI_PACKAGE int cxGridOffice11GroupRowSeparatorWidth;
static const System::Int8 rkFiltering = System::Int8(0x2);
static const System::Int8 isColumnFirst = System::Int8(0x1);
static const System::Int8 isFooter = System::Int8(0x1);
static const System::Int8 isGroupSummary = System::Int8(0x2);
static const System::Int8 isHeader = System::Int8(0x3);
static const System::Int8 isColumnLast = System::Int8(0x3);
static const System::Int8 bbTableFirst = System::Int8(0x3);
static const System::Int8 bbFooter = System::Int8(0x3);
static const System::Int8 bbHeader = System::Int8(0x4);
static const System::Int8 bbGroup = System::Int8(0x5);
static const System::Int8 bbGroupByBox = System::Int8(0x6);
static const System::Int8 bbIndicator = System::Int8(0x7);
static const System::Int8 bbPreview = System::Int8(0x8);
static const System::Int8 bbTableLast = System::Int8(0x8);
static const System::Int8 vsTableFirst = System::Int8(0xd);
static const System::Int8 vsFilterRowInfoText = System::Int8(0xd);
static const System::Int8 vsFooter = System::Int8(0xe);
static const System::Int8 vsGroup = System::Int8(0xf);
static const System::Int8 vsGroupByBox = System::Int8(0x10);
static const System::Int8 vsGroupFooterSortedSummary = System::Int8(0x11);
static const System::Int8 vsGroupSortedSummary = System::Int8(0x12);
static const System::Int8 vsGroupSummary = System::Int8(0x13);
static const System::Int8 vsHeader = System::Int8(0x14);
static const System::Int8 vsNewItemRowInfoText = System::Int8(0x15);
static const System::Int8 vsIndicator = System::Int8(0x16);
static const System::Int8 vsPreview = System::Int8(0x17);
static const System::Int8 vsInplaceEditFormGroup = System::Int8(0x18);
static const System::Int8 vsInplaceEditFormItem = System::Int8(0x19);
static const System::Int8 vsInplaceEditFormItemHotTrack = System::Int8(0x1a);
static const System::Int8 vsRowLayoutGroup = System::Int8(0x1b);
static const System::Int8 vsTableLast = System::Int8(0x1b);
static const System::Word cxGridFilterRowDelayDefault = System::Word(0x3e8);
}	/* namespace Cxgridtableview */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXGRIDTABLEVIEW)
using namespace Cxgridtableview;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxgridtableviewHPP
