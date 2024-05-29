// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxLookupGrid.pas' rev: 35.00 (Windows)

#ifndef CxlookupgridHPP
#define CxlookupgridHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Winapi.Messages.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Generics.Collections.hpp>
#include <dxCore.hpp>
#include <cxClasses.hpp>
#include <dxCoreClasses.hpp>
#include <cxControls.hpp>
#include <cxContainer.hpp>
#include <cxGraphics.hpp>
#include <cxLookAndFeels.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxDataUtils.hpp>
#include <cxDataStorage.hpp>
#include <cxCustomData.hpp>
#include <cxData.hpp>
#include <cxEdit.hpp>
#include <cxEditRepositoryItems.hpp>
#include <cxAccessibility.hpp>
#include <cxGeometry.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxlookupgrid
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxLookupGridDataController;
class DELPHICLASS TcxLookupGridPartViewInfo;
class DELPHICLASS TcxLookupGridColumnViewInfo;
class DELPHICLASS TcxLookupGridColumnsViewInfo;
class DELPHICLASS TdxLookupGridCellAccessibilityHelper;
class DELPHICLASS TcxLookupGridCellViewInfo;
class DELPHICLASS TdxLookupGridRowAccessibilityHelper;
class DELPHICLASS TcxLookupGridRowViewInfo;
class DELPHICLASS TcxLookupGridRowsViewInfo;
class DELPHICLASS TdxLookupGridAccessibilityHelper;
class DELPHICLASS TcxLookupGridViewInfo;
class DELPHICLASS TcxLookupGridPainter;
class DELPHICLASS TcxLookupGridDefaultValuesProvider;
class DELPHICLASS TcxLookupGridColumn;
class DELPHICLASS TcxLookupGridColumns;
struct TcxLookupGridHitInfo;
class DELPHICLASS TcxLookupGridOptions;
class DELPHICLASS TcxCustomLookupGrid;
class DELPHICLASS TcxLookupGrid;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TcxLookupGridHitTest : unsigned char { htNone, htHeader, htCell };

enum DECLSPEC_DENUM TcxLookupGridScrollMode : unsigned char { smNone, smTop, smBottom };

class PASCALIMPLEMENTATION TcxLookupGridDataController : public Cxdata::TcxDataController
{
	typedef Cxdata::TcxDataController inherited;
	
private:
	TcxCustomLookupGrid* __fastcall GetGrid();
	
public:
	virtual System::TObject* __fastcall GetItem(int Index);
	__property TcxCustomLookupGrid* Grid = {read=GetGrid};
	
__published:
	__property OnCompare;
public:
	/* TcxDataController.Create */ inline __fastcall virtual TcxLookupGridDataController(System::Classes::TComponent* AOwner) : Cxdata::TcxDataController(AOwner) { }
	/* TcxDataController.Destroy */ inline __fastcall virtual ~TcxLookupGridDataController() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxLookupGridPartViewInfo : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	System::Types::TRect Bounds;
	System::Types::TRect ContentBounds;
public:
	/* TObject.Create */ inline __fastcall TcxLookupGridPartViewInfo() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxLookupGridPartViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxLookupGridColumnViewInfo : public TcxLookupGridPartViewInfo
{
	typedef TcxLookupGridPartViewInfo inherited;
	
private:
	Cxedit::TcxCustomEditViewData* FEditViewData;
	Cxedit::TcxCustomEditStyle* FStyle;
	
public:
	System::Classes::TAlignment Alignment;
	Cxgeometry::TcxBorders Borders;
	Cxlookandfeelpainters::TcxNeighbors Neighbors;
	Dxcore::TdxSortOrder SortOrder;
	System::UnicodeString Text;
	__fastcall virtual ~TcxLookupGridColumnViewInfo();
	Cxedit::TcxCustomEditStyle* __fastcall CreateEditStyle(Cxedit::TcxCustomEditProperties* AProperties);
	Cxedit::TcxCustomEditViewData* __fastcall CreateEditViewData(Cxedit::TcxCustomEditProperties* AProperties);
	void __fastcall DestroyEditViewData();
	__property Cxedit::TcxCustomEditStyle* Style = {read=FStyle};
public:
	/* TObject.Create */ inline __fastcall TcxLookupGridColumnViewInfo() : TcxLookupGridPartViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxLookupGridColumnsViewInfo : public Cxclasses::TcxObjectList
{
	typedef Cxclasses::TcxObjectList inherited;
	
public:
	TcxLookupGridColumnViewInfo* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TcxLookupGridColumnViewInfo* __fastcall GetItem(int Index);
	
public:
	__property TcxLookupGridColumnViewInfo* Items[int Index] = {read=GetItem/*, default*/};
public:
	/* TcxObjectList.Create */ inline __fastcall TcxLookupGridColumnsViewInfo(bool AOwnObjects) : Cxclasses::TcxObjectList(AOwnObjects) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TcxLookupGridColumnsViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLookupGridCellAccessibilityHelper : public Cxaccessibility::TcxAccessibilityHelper
{
	typedef Cxaccessibility::TcxAccessibilityHelper inherited;
	
private:
	TdxLookupGridRowAccessibilityHelper* FRow;
	TcxLookupGridCellViewInfo* __fastcall GetViewInfo();
	
protected:
	int FLocalId;
	virtual void __fastcall DoDefaultAction(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual System::UnicodeString __fastcall GetDefaultActionDescription(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetLocalId(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID = (Cxaccessibility::TcxAccessibleSimpleChildElementID)(0x0));
	virtual System::UnicodeString __fastcall GetName(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual Cxaccessibility::TcxAccessibilityHelper* __fastcall GetParent();
	virtual int __fastcall GetRole(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetState(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual Cxaccessibility::TcxAccessibleObjectProperties __fastcall GetSupportedProperties(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual System::UnicodeString __fastcall GetValue(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual bool __fastcall IsExtended();
	__property TdxLookupGridRowAccessibilityHelper* Row = {read=FRow};
	__property TcxLookupGridCellViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	__fastcall virtual TdxLookupGridCellAccessibilityHelper(System::TObject* AOwnerObject, TdxLookupGridRowAccessibilityHelper* ARow);
	virtual System::Types::TRect __fastcall GetScreenBounds(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
public:
	/* TcxAccessibilityHelper.Destroy */ inline __fastcall virtual ~TdxLookupGridCellAccessibilityHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxLookupGridCellViewInfo : public TcxLookupGridPartViewInfo
{
	typedef TcxLookupGridPartViewInfo inherited;
	
private:
	Cxedit::TcxCustomEditViewInfo* FEditViewInfo;
	
protected:
	Cxaccessibility::_di_IcxAccessibilityHelper FIAccessibilityHelper;
	
public:
	Cxgeometry::TcxBorders Borders;
	int Index;
	bool IsFocused;
	__fastcall virtual ~TcxLookupGridCellViewInfo();
	Cxedit::TcxCustomEditViewInfo* __fastcall CreateEditViewInfo(Cxedit::TcxCustomEditProperties* AProperties);
	__property Cxedit::TcxCustomEditViewInfo* EditViewInfo = {read=FEditViewInfo};
public:
	/* TObject.Create */ inline __fastcall TcxLookupGridCellViewInfo() : TcxLookupGridPartViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLookupGridRowAccessibilityHelper : public Cxaccessibility::TcxAccessibilityHelper
{
	typedef Cxaccessibility::TcxAccessibilityHelper inherited;
	
private:
	TdxLookupGridAccessibilityHelper* FGrid;
	System::Classes::TInterfaceList* FIAccessibilityChildren;
	TcxLookupGridRowViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual bool __fastcall ChildIsSimpleElement(int AIndex);
	virtual Cxaccessibility::TcxAccessibilityHelper* __fastcall GetChild(int AIndex);
	virtual int __fastcall GetChildCount();
	virtual Cxaccessibility::TcxAccessibilityHelper* __fastcall GetParent();
	virtual int __fastcall GetRole(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetState(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual Cxaccessibility::TcxAccessibleObjectProperties __fastcall GetSupportedProperties(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual bool __fastcall IsExtended();
	bool __fastcall IsSelected();
	__property TdxLookupGridAccessibilityHelper* Grid = {read=FGrid};
	__property TcxLookupGridRowViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	__fastcall virtual TdxLookupGridRowAccessibilityHelper(System::TObject* AOwnerObject, TdxLookupGridAccessibilityHelper* AGrid);
	__fastcall virtual ~TdxLookupGridRowAccessibilityHelper();
	virtual System::Types::TRect __fastcall GetScreenBounds(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxLookupGridRowViewInfo : public Cxclasses::TcxObjectList
{
	typedef Cxclasses::TcxObjectList inherited;
	
public:
	TcxLookupGridCellViewInfo* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TcxLookupGridCellViewInfo* __fastcall GetItem(int Index);
	
protected:
	Cxaccessibility::_di_IcxAccessibilityHelper FIAccessibilityHelper;
	TcxLookupGridCellViewInfo* __fastcall AddCell(int AIndex, const System::Types::TRect &AInitBounds, bool AIsFocused);
	void __fastcall PopulateIAccessibilityChildren(System::Classes::TInterfaceList* IAccessibilityChildren);
	
public:
	Cxgeometry::TcxBorders Borders;
	System::Types::TRect Bounds;
	System::Types::TRect ContentBounds;
	bool IsFocused;
	int RecordIndex;
	int RowIndex;
	__fastcall virtual ~TcxLookupGridRowViewInfo();
	__property TcxLookupGridCellViewInfo* Items[int Index] = {read=GetItem/*, default*/};
public:
	/* TcxObjectList.Create */ inline __fastcall TcxLookupGridRowViewInfo(bool AOwnObjects) : Cxclasses::TcxObjectList(AOwnObjects) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxLookupGridRowsViewInfo : public Cxclasses::TcxObjectList
{
	typedef Cxclasses::TcxObjectList inherited;
	
public:
	TcxLookupGridRowViewInfo* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TcxLookupGridRowViewInfo* __fastcall GetItem(int Index);
	
public:
	TcxLookupGridRowViewInfo* __fastcall FindByRowIndex(int ARowIndex);
	__property TcxLookupGridRowViewInfo* Items[int Index] = {read=GetItem/*, default*/};
public:
	/* TcxObjectList.Create */ inline __fastcall TcxLookupGridRowsViewInfo(bool AOwnObjects) : Cxclasses::TcxObjectList(AOwnObjects) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TcxLookupGridRowsViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLookupGridAccessibilityHelper : public Cxaccessibility::TcxAccessibilityHelper
{
	typedef Cxaccessibility::TcxAccessibilityHelper inherited;
	
private:
	System::Classes::TInterfaceList* FIAccessibilityChildren;
	int __fastcall GetColumnIndex(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	int __fastcall GetFirstSimpleChildIndex();
	TcxCustomLookupGrid* __fastcall GetGrid();
	TcxLookupGridViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual bool __fastcall ChildIsSimpleElement(int AIndex);
	virtual Cxaccessibility::TcxAccessibilityHelper* __fastcall GetChild(int AIndex);
	virtual int __fastcall GetChildCount();
	virtual System::UnicodeString __fastcall GetName(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual HWND __fastcall GetOwnerObjectWindow();
	virtual int __fastcall GetRole(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetState(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual Cxaccessibility::TcxAccessibleObjectProperties __fastcall GetSupportedProperties(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual bool __fastcall IsExtended();
	void __fastcall FocusRowChanged();
	__property int FirstSimpleChildIndex = {read=GetFirstSimpleChildIndex, nodefault};
	__property TcxCustomLookupGrid* Grid = {read=GetGrid};
	__property TcxLookupGridViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	__fastcall virtual TdxLookupGridAccessibilityHelper(System::TObject* AOwnerObject);
	__fastcall virtual ~TdxLookupGridAccessibilityHelper();
	virtual System::Types::TRect __fastcall GetScreenBounds(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
};

#pragma pack(pop)

enum DECLSPEC_DENUM TcxLookupGridTopRowIndexCalculation : unsigned char { ticNone, ticForward, ticBackward };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxLookupGridViewInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TcxLookupGridColumnsViewInfo* FColumns;
	TcxCustomLookupGrid* FGrid;
	Cxaccessibility::_di_IcxAccessibilityHelper FIAccessibilityHelper;
	int FInternalTopRowIndex;
	TcxLookupGridTopRowIndexCalculation FTopRowIndexCalculation;
	int FRowMinHeight;
	TcxLookupGridRowsViewInfo* FRows;
	System::Types::TRect __fastcall GetBounds();
	Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	System::Types::TRect __fastcall GetClientBounds();
	System::Uitypes::TColor __fastcall GetEmptyAreaColor();
	Cxgraphics::TcxGridLines __fastcall GetGridLines();
	Cxaccessibility::_di_IcxAccessibilityHelper __fastcall GetIAccessibilityHelper();
	int __fastcall GetRowCount();
	int __fastcall GetRowHeight();
	int __fastcall GetTopRowIndex();
	
protected:
	System::Generics::Collections::TList__1<Cxaccessibility::TcxAccessibilityHelper*>* FAccessibleObjects;
	TcxLookupGridRowViewInfo* __fastcall AddRow(int ARowIndex, const System::Types::TRect &AInitBounds);
	int __fastcall CalcCellMinHeight(int AIndex);
	int __fastcall CalcRowMinHeight();
	void __fastcall CalculateCells(TcxLookupGridRowViewInfo* ARowViewInfo);
	int __fastcall GetCellHeight(int ARowIndex, int AColumnIndex);
	virtual int __fastcall GetHeaderHeight();
	void __fastcall PopulateIAccessibilityChildren(System::Classes::TInterfaceList* IAccessibilityChildren);
	__property Cxaccessibility::_di_IcxAccessibilityHelper IAccessibilityHelper = {read=GetIAccessibilityHelper};
	__property TcxLookupGridTopRowIndexCalculation TopRowIndexCalculation = {read=FTopRowIndexCalculation, write=FTopRowIndexCalculation, nodefault};
	
public:
	int BorderSize;
	System::Types::TRect HeadersRect;
	System::Types::TRect EmptyRectBottom;
	System::Types::TRect EmptyRectRight;
	int PartialVisibleRowCount;
	int VisibleRowCount;
	System::Types::TRect RowsRect;
	System::Types::TRect VisibleRowsRect;
	__fastcall virtual TcxLookupGridViewInfo(TcxCustomLookupGrid* AGrid);
	__fastcall virtual ~TcxLookupGridViewInfo();
	void __fastcall CalcCellColors(bool ARowIsSelected, bool ACellIsSelected, System::Uitypes::TColor &AColor, System::Uitypes::TColor &AFontColor);
	virtual void __fastcall CalcColumns();
	virtual void __fastcall CalcEmptyAreas();
	virtual void __fastcall CalcHeaders();
	virtual void __fastcall CalcRows();
	virtual void __fastcall Calculate();
	virtual int __fastcall CheckTopRowIndex(int ANewTopIndex);
	virtual void __fastcall CreateEditStyle(TcxLookupGridColumnViewInfo* AColumnViewInfo, TcxLookupGridColumn* AColumn);
	virtual Cxedit::TcxCustomEditViewData* __fastcall CreateEditViewData(TcxLookupGridColumnViewInfo* AColumnViewInfo, TcxLookupGridColumn* AColumn);
	virtual void __fastcall DestroyEditViewData(TcxLookupGridColumnViewInfo* AColumnViewInfo, TcxLookupGridColumn* AColumn);
	virtual void __fastcall DoColumnsRightToLeftConversion();
	virtual void __fastcall DoEmptyAreasRightToLeftConversion();
	virtual void __fastcall DoRowRightToLeftConversion(TcxLookupGridRowViewInfo* ARowViewInfo);
	virtual System::Uitypes::TColor __fastcall GetContentColor();
	virtual Vcl::Graphics::TFont* __fastcall GetContentFont();
	virtual System::Uitypes::TColor __fastcall GetContentFontColor();
	virtual System::Uitypes::TColor __fastcall GetGridColor();
	virtual int __fastcall GetGridLineWidth();
	virtual System::Uitypes::TColor __fastcall GetHeaderColor();
	virtual Vcl::Graphics::TFont* __fastcall GetHeaderFont();
	virtual System::Uitypes::TColor __fastcall GetHeaderFontColor();
	virtual System::Uitypes::TColor __fastcall GetSelectedColor();
	virtual System::Uitypes::TColor __fastcall GetSelectedFontColor();
	__property System::Types::TRect Bounds = {read=GetBounds};
	__property Cxgraphics::TcxCanvas* Canvas = {read=GetCanvas};
	__property System::Types::TRect ClientBounds = {read=GetClientBounds};
	__property TcxLookupGridColumnsViewInfo* Columns = {read=FColumns};
	__property System::Uitypes::TColor EmptyAreaColor = {read=GetEmptyAreaColor, nodefault};
	__property TcxCustomLookupGrid* Grid = {read=FGrid};
	__property Cxgraphics::TcxGridLines GridLines = {read=GetGridLines, nodefault};
	__property int GridLineWidth = {read=GetGridLineWidth, nodefault};
	__property int RowCount = {read=GetRowCount, nodefault};
	__property int RowHeight = {read=GetRowHeight, nodefault};
	__property TcxLookupGridRowsViewInfo* Rows = {read=FRows};
	__property int TopRowIndex = {read=GetTopRowIndex, nodefault};
};

#pragma pack(pop)

typedef System::TMetaClass* TcxLookupGridViewInfoClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxLookupGridPainter : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Cxgraphics::TcxCanvas* FCanvas;
	TcxCustomLookupGrid* FGrid;
	Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* FLFPainterClass;
	Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	TcxLookupGridViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DrawBorder();
	virtual void __fastcall DrawCell(TcxLookupGridCellViewInfo* ACellViewInfo);
	virtual void __fastcall DrawContent();
	virtual void __fastcall DrawEmptyArea();
	virtual void __fastcall DrawHeaders();
	virtual void __fastcall DrawRow(TcxLookupGridRowViewInfo* ARowViewInfo);
	virtual void __fastcall DrawRows();
	__property TcxLookupGridViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	__fastcall virtual TcxLookupGridPainter(TcxCustomLookupGrid* AGrid);
	__fastcall virtual ~TcxLookupGridPainter();
	void __fastcall Invalidate();
	void __fastcall Paint();
	__property Cxgraphics::TcxCanvas* Canvas = {read=GetCanvas};
	__property TcxCustomLookupGrid* Grid = {read=FGrid};
	__property Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* LFPainterClass = {read=FLFPainterClass, write=FLFPainterClass};
};

#pragma pack(pop)

typedef System::TMetaClass* TcxLookupGridPainterClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxLookupGridDefaultValuesProvider : public Cxedit::TcxCustomEditDefaultValuesProvider
{
	typedef Cxedit::TcxCustomEditDefaultValuesProvider inherited;
	
__published:
	virtual bool __fastcall IsDisplayFormatDefined(bool AIsCurrencyValueAccepted);
public:
	/* TcxCustomEditDefaultValuesProvider.Destroy */ inline __fastcall virtual ~TcxLookupGridDefaultValuesProvider() { }
	
public:
	/* TcxInterfacedPersistent.Create */ inline __fastcall virtual TcxLookupGridDefaultValuesProvider(System::Classes::TPersistent* AOwner) : Cxedit::TcxCustomEditDefaultValuesProvider(AOwner) { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxLookupGridColumnClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxLookupGridColumn : public Cxclasses::TcxInterfacedCollectionItem
{
	typedef Cxclasses::TcxInterfacedCollectionItem inherited;
	
private:
	System::UnicodeString FCaption;
	Cxedit::TcxCustomEditDefaultValuesProvider* FDefaultValuesProvider;
	bool FFixed;
	System::Classes::TAlignment FHeaderAlignment;
	Cxedit::TcxEditRepositoryItem* FInternalDefaultRepositoryItem;
	bool FIsCaptionAssigned;
	bool FIsWidthAssigned;
	int FMinWidth;
	Cxedit::TcxEditRepositoryItem* FRepositoryItem;
	bool FSorting;
	int FWidth;
	System::UnicodeString __fastcall GetCaption();
	Cxcustomdata::TcxCustomDataController* __fastcall GetDataController();
	TcxCustomLookupGrid* __fastcall GetGrid();
	int __fastcall GetMinWidth();
	Cxedit::TcxCustomEditProperties* __fastcall GetProperties();
	Dxcore::TdxSortOrder __fastcall GetSortOrder();
	int __fastcall GetWidth();
	bool __fastcall IsCaptionStored();
	bool __fastcall IsWidthStored();
	void __fastcall SetCaption(const System::UnicodeString Value);
	void __fastcall SetFixed(bool Value);
	void __fastcall SetHeaderAlignment(System::Classes::TAlignment Value);
	void __fastcall SetMinWidth(int Value);
	void __fastcall SetRepositoryItem(Cxedit::TcxEditRepositoryItem* Value);
	void __fastcall SetSorting(bool Value);
	void __fastcall SetSortOrder(Dxcore::TdxSortOrder Value);
	void __fastcall SetWidth(int Value);
	
protected:
	void __fastcall ChangeScale(int M, int D);
	void __fastcall ItemRemoved(Cxedit::TcxEditRepositoryItem* Sender);
	void __fastcall PropertiesChanged(Cxedit::TcxEditRepositoryItem* Sender);
	virtual void __fastcall CheckWidthValue(int &Value);
	virtual Cxedit::TcxCustomEditDefaultValuesProviderClass __fastcall GetDefaultValuesProviderClass();
	virtual Cxdatastorage::TcxValueTypeClass __fastcall GetValueTypeClass();
	virtual void __fastcall SetIndex(int Value);
	virtual void __fastcall SetValueTypeClass(Cxdatastorage::TcxValueTypeClass Value);
	__property Cxcustomdata::TcxCustomDataController* DataController = {read=GetDataController};
	
public:
	__fastcall virtual TcxLookupGridColumn(System::Classes::TCollection* Collection);
	__fastcall virtual ~TcxLookupGridColumn();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual System::UnicodeString __fastcall DefaultCaption();
	virtual Cxedit::TcxEditRepositoryItem* __fastcall DefaultRepositoryItem();
	virtual int __fastcall DefaultWidth();
	virtual bool __fastcall Equals(System::TObject* Obj);
	virtual Vcl::Graphics::TFont* __fastcall GetContentFont();
	virtual Cxedit::TcxEditRepositoryItem* __fastcall GetInternalDefaultRepositoryItem();
	virtual Cxedit::TcxEditRepositoryItem* __fastcall GetRepositoryItem();
	virtual bool __fastcall IsLeft();
	virtual bool __fastcall IsRight();
	virtual void __fastcall RestoreDefaults();
	__property Cxedit::TcxCustomEditDefaultValuesProvider* DefaultValuesProvider = {read=FDefaultValuesProvider};
	__property Cxedit::TcxCustomEditProperties* Properties = {read=GetProperties};
	__property TcxCustomLookupGrid* Grid = {read=GetGrid};
	__property Cxdatastorage::TcxValueTypeClass ValueTypeClass = {read=GetValueTypeClass, write=SetValueTypeClass};
	
__published:
	__property System::UnicodeString Caption = {read=GetCaption, write=SetCaption, stored=IsCaptionStored};
	__property bool Fixed = {read=FFixed, write=SetFixed, default=0};
	__property System::Classes::TAlignment HeaderAlignment = {read=FHeaderAlignment, write=SetHeaderAlignment, default=0};
	__property int MinWidth = {read=GetMinWidth, write=SetMinWidth, default=20};
	__property bool Sorting = {read=FSorting, write=SetSorting, default=1};
	__property Dxcore::TdxSortOrder SortOrder = {read=GetSortOrder, write=SetSortOrder, default=0};
	__property Cxedit::TcxEditRepositoryItem* RepositoryItem = {read=FRepositoryItem, write=SetRepositoryItem};
	__property int Width = {read=GetWidth, write=SetWidth, stored=IsWidthStored, nodefault};
private:
	void *__IcxEditRepositoryItemListener;	// Cxedit::IcxEditRepositoryItemListener 
	
public:
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

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxLookupGridColumns : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TcxLookupGridColumn* operator[](int Index) { return this->Items[Index]; }
	
private:
	TcxCustomLookupGrid* FGrid;
	TcxLookupGridColumn* __fastcall GetColumn(int Index);
	void __fastcall SetColumn(int Index, TcxLookupGridColumn* Value);
	
protected:
	void __fastcall ChangeScale(int M, int D);
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	__fastcall virtual TcxLookupGridColumns(TcxCustomLookupGrid* AGrid, TcxLookupGridColumnClass AColumnClass);
	HIDESBASE TcxLookupGridColumn* __fastcall Add();
	virtual void __fastcall BeginUpdate();
	virtual void __fastcall EndUpdate();
	virtual void __fastcall RestoreDefaults();
	__property TcxCustomLookupGrid* Grid = {read=FGrid};
	__property TcxLookupGridColumn* Items[int Index] = {read=GetColumn, write=SetColumn/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TcxLookupGridColumns() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxLookupGridColumnsClass;

enum DECLSPEC_DENUM TcxLookupGridChange : unsigned char { lgcLayout, lgcData, lgcFocusedRow };

typedef System::Set<TcxLookupGridChange, TcxLookupGridChange::lgcLayout, TcxLookupGridChange::lgcFocusedRow> TcxLookupGridChanges;

struct DECLSPEC_DRECORD TcxLookupGridHitInfo
{
public:
	TcxLookupGridHitTest HitTest;
	int RowIndex;
	int ColumnIndex;
};


class PASCALIMPLEMENTATION TcxLookupGridOptions : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FColumnSorting;
	bool FFocusRowOnMouseMove;
	Cxgraphics::TcxGridLines FGridLines;
	bool FHighlightIncrementalFilteringText;
	bool FRowSelect;
	bool FShowHeader;
	System::Classes::TNotifyEvent FOnChanged;
	bool __fastcall GetAnsiSort();
	bool __fastcall GetCaseInsensitive();
	void __fastcall SetAnsiSort(bool Value);
	void __fastcall SetCaseInsensitive(bool Value);
	void __fastcall SetGridLines(Cxgraphics::TcxGridLines Value);
	void __fastcall SetRowSelect(bool Value);
	void __fastcall SetShowHeader(bool Value);
	
protected:
	TcxCustomLookupGrid* FGrid;
	virtual void __fastcall Changed();
	
public:
	__fastcall virtual TcxLookupGridOptions(TcxCustomLookupGrid* AGrid);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property bool HighlightIncrementalFilteringText = {read=FHighlightIncrementalFilteringText, write=FHighlightIncrementalFilteringText, nodefault};
	__property TcxCustomLookupGrid* Grid = {read=FGrid};
	__property System::Classes::TNotifyEvent OnChanged = {read=FOnChanged, write=FOnChanged};
	
__published:
	__property bool AnsiSort = {read=GetAnsiSort, write=SetAnsiSort, default=0};
	__property bool CaseInsensitive = {read=GetCaseInsensitive, write=SetCaseInsensitive, default=0};
	__property bool ColumnSorting = {read=FColumnSorting, write=FColumnSorting, default=1};
	__property bool FocusRowOnMouseMove = {read=FFocusRowOnMouseMove, write=FFocusRowOnMouseMove, default=1};
	__property Cxgraphics::TcxGridLines GridLines = {read=FGridLines, write=SetGridLines, default=0};
	__property bool RowSelect = {read=FRowSelect, write=SetRowSelect, default=1};
	__property bool ShowHeader = {read=FShowHeader, write=SetShowHeader, default=1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxLookupGridOptions() { }
	
};


typedef System::TMetaClass* TcxLookupGridOptionsClass;

typedef void __fastcall (__closure *TcxLookupGridCloseUpEvent)(System::TObject* Sender, bool AAccept);

class PASCALIMPLEMENTATION TcxCustomLookupGrid : public Cxcontrols::TcxControl
{
	typedef Cxcontrols::TcxControl inherited;
	
private:
	TcxLookupGridChanges FChanges;
	TcxLookupGridColumns* FColumns;
	TcxLookupGridColumn* FFocusedColumn;
	bool FIsPopupControl;
	int FLockCount;
	TcxLookupGridPainter* FPainter;
	bool FRowPressed;
	TcxLookupGridScrollMode FScrollMode;
	Cxclasses::TcxTimer* FScrollTimer;
	int FTopRowIndex;
	TcxLookupGridViewInfo* FViewInfo;
	System::Classes::TNotifyEvent FOnClick;
	TcxLookupGridCloseUpEvent FOnCloseUp;
	System::Classes::TNotifyEvent FOnDataChanged;
	System::Classes::TNotifyEvent FOnFocusedRowChanged;
	void __fastcall CreateScrollTimer();
	void __fastcall DestroyScrollTimer();
	Cxcustomdata::TcxCustomDataController* __fastcall GetDataController();
	TcxLookupGridColumn* __fastcall GetFocusedColumn();
	int __fastcall GetFocusedColumnIndex();
	int __fastcall GetFocusedRowIndex();
	int __fastcall GetRowCount();
	void __fastcall SetColumns(TcxLookupGridColumns* Value);
	void __fastcall SetDataController(Cxcustomdata::TcxCustomDataController* Value);
	void __fastcall SetFocusedColumn(TcxLookupGridColumn* Value);
	void __fastcall SetFocusedColumnIndex(int Value);
	void __fastcall SetFocusedRowIndex(int Value);
	void __fastcall SetIsPopupControl(bool Value);
	void __fastcall SetOptions(TcxLookupGridOptions* Value);
	void __fastcall SetTopRowIndex(int Value);
	void __fastcall ScrollTimerHandler(System::TObject* Sender);
	MESSAGE void __fastcall WMGetObject(Winapi::Messages::TMessage &Message);
	
protected:
	Cxcustomdata::TcxCustomDataController* FDataController;
	TcxLookupGridOptions* FOptions;
	DYNAMIC void __fastcall ColorChanged();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint();
	DYNAMIC bool __fastcall AllowDragAndDropWithoutFocus();
	DYNAMIC void __fastcall BoundsChanged();
	DYNAMIC void __fastcall DoCancelMode();
	DYNAMIC void __fastcall FocusChanged();
	DYNAMIC void __fastcall FontChanged();
	virtual int __fastcall GetBorderSize();
	virtual void __fastcall InitControl();
	virtual void __fastcall InitScrollBarsParameters();
	virtual void __fastcall Scroll(Vcl::Forms::TScrollBarKind AScrollBarKind, System::Uitypes::TScrollCode AScrollCode, int &AScrollPos);
	virtual void __fastcall AddColumn(TcxLookupGridColumn* AColumn);
	virtual bool __fastcall AllowTouchScrollUIMode();
	virtual void __fastcall Change(TcxLookupGridChanges AChanges);
	virtual void __fastcall ChangeScaleEx(int M, int D, bool isDpiChange);
	void __fastcall CheckChanges();
	void __fastcall CheckSetTopRowIndex(int &Value);
	void __fastcall CheckTopRowIndex(int ATopRowIndex, bool ANotUpdate);
	virtual void __fastcall CreateHandlers();
	virtual void __fastcall CreateSubClasses();
	virtual void __fastcall DestroyHandlers();
	virtual void __fastcall DestroySubClasses();
	virtual void __fastcall DoCellClick(int ARowIndex, int AColumnIndex, System::Classes::TShiftState AShift);
	virtual void __fastcall DoHeaderClick(int AColumnIndex, System::Classes::TShiftState AShift);
	virtual System::Uitypes::TColor __fastcall GetScrollContentForegroundColor();
	void __fastcall FocusColumn(int AColumnIndex);
	void __fastcall FocusNextPage();
	void __fastcall FocusNextRow(bool AGoForward);
	void __fastcall FocusPriorPage();
	virtual TcxLookupGridColumnClass __fastcall GetColumnClass();
	virtual TcxLookupGridColumnsClass __fastcall GetColumnsClass();
	virtual Cxcustomdata::TcxCustomDataControllerClass __fastcall GetDataControllerClass();
	Cxaccessibility::_di_IcxAccessibilityHelper __fastcall GetIAccessibilityHelper();
	virtual Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetLFPainterClass();
	virtual TcxLookupGridOptionsClass __fastcall GetOptionsClass();
	virtual TcxLookupGridPainterClass __fastcall GetPainterClass();
	virtual int __fastcall GetScrollBarOffsetBegin();
	virtual int __fastcall GetScrollBarOffsetEnd();
	virtual TcxLookupGridViewInfoClass __fastcall GetViewInfoClass();
	virtual bool __fastcall IsHotTrack();
	virtual void __fastcall LookAndFeelChanged(Cxlookandfeels::TcxLookAndFeel* Sender, Cxlookandfeels::TcxLookAndFeelValues AChangedValues);
	virtual void __fastcall RemoveColumn(TcxLookupGridColumn* AColumn);
	virtual void __fastcall SetScrollMode(TcxLookupGridScrollMode Value);
	void __fastcall ShowNextPage();
	void __fastcall ShowPrevPage();
	virtual void __fastcall UpdateFocusing();
	virtual void __fastcall UpdateRowInfo(int ARowIndex, bool ARecalculate);
	virtual void __fastcall UpdateLayout();
	virtual void __fastcall DataChanged();
	virtual void __fastcall DataLayoutChanged();
	virtual void __fastcall DoClick();
	virtual void __fastcall DoCloseUp(bool AAccept);
	virtual void __fastcall DoFocusedRowChanged();
	virtual void __fastcall FocusedRowChanged(int APrevFocusedRowIndex, int AFocusedRowIndex);
	virtual void __fastcall LayoutChanged();
	virtual void __fastcall SelectionChanged(Cxcustomdata::TcxSelectionChangedInfo* AInfo);
	virtual void __fastcall UpdateControl(Cxcustomdata::TcxUpdateControlInfo* AInfo);
	__property Color = {default=-16777211};
	__property Cxaccessibility::_di_IcxAccessibilityHelper IAccessibilityHelper = {read=GetIAccessibilityHelper};
	__property ParentColor = {default=0};
	
public:
	__fastcall virtual TcxCustomLookupGrid(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TcxCustomLookupGrid();
	void __fastcall BeginUpdate();
	void __fastcall CancelUpdate();
	void __fastcall EndUpdate();
	TcxLookupGridHitInfo __fastcall GetHitInfo(const System::Types::TPoint &P);
	int __fastcall GetNearestPopupHeight(int AHeight);
	int __fastcall GetPopupHeight(int ADropDownRowCount);
	bool __fastcall IsMouseOverList(const System::Types::TPoint &P);
	bool __fastcall IsRowVisible(int ARowIndex);
	void __fastcall LockPopupMouseMove();
	void __fastcall MakeFocusedRowVisible();
	void __fastcall MakeRowVisible(int ARowIndex);
	virtual void __fastcall SyncSelected(bool ASelected);
	__property TcxLookupGridColumns* Columns = {read=FColumns, write=SetColumns};
	__property Cxcustomdata::TcxCustomDataController* DataController = {read=GetDataController, write=SetDataController};
	__property TcxLookupGridColumn* FocusedColumn = {read=GetFocusedColumn, write=SetFocusedColumn};
	__property int FocusedColumnIndex = {read=GetFocusedColumnIndex, write=SetFocusedColumnIndex, nodefault};
	__property int FocusedRowIndex = {read=GetFocusedRowIndex, write=SetFocusedRowIndex, nodefault};
	__property bool IsPopupControl = {read=FIsPopupControl, write=SetIsPopupControl, nodefault};
	__property int LockCount = {read=FLockCount, nodefault};
	__property LookAndFeel;
	__property TcxLookupGridOptions* Options = {read=FOptions, write=SetOptions};
	__property TcxLookupGridPainter* Painter = {read=FPainter};
	__property int RowCount = {read=GetRowCount, nodefault};
	__property int ScrollBarOffsetBegin = {read=GetScrollBarOffsetBegin, nodefault};
	__property int ScrollBarOffsetEnd = {read=GetScrollBarOffsetEnd, nodefault};
	__property int TopRowIndex = {read=FTopRowIndex, write=SetTopRowIndex, nodefault};
	__property TcxLookupGridViewInfo* ViewInfo = {read=FViewInfo};
	__property System::Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick};
	__property TcxLookupGridCloseUpEvent OnCloseUp = {read=FOnCloseUp, write=FOnCloseUp};
	__property System::Classes::TNotifyEvent OnDataChanged = {read=FOnDataChanged, write=FOnDataChanged};
	__property System::Classes::TNotifyEvent OnFocusedRowChanged = {read=FOnFocusedRowChanged, write=FOnFocusedRowChanged};
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomLookupGrid(HWND ParentWindow) : Cxcontrols::TcxControl(ParentWindow) { }
	
};


typedef System::TMetaClass* TcxCustomLookupGridClass;

class PASCALIMPLEMENTATION TcxLookupGrid : public TcxCustomLookupGrid
{
	typedef TcxCustomLookupGrid inherited;
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property Color = {default=-16777211};
	__property Font;
	__property ParentFont = {default=1};
	__property Visible = {default=1};
	__property Columns;
	__property DataController;
	__property Options;
	__property LookAndFeel;
public:
	/* TcxCustomLookupGrid.Create */ inline __fastcall virtual TcxLookupGrid(System::Classes::TComponent* AOwner) : TcxCustomLookupGrid(AOwner) { }
	/* TcxCustomLookupGrid.Destroy */ inline __fastcall virtual ~TcxLookupGrid() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxLookupGrid(HWND ParentWindow) : TcxCustomLookupGrid(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 cxLookupGridColumnDefaultMinWidth = System::Int8(0x14);
static const System::Int8 cxGridEditOffset = System::Int8(0x1);
}	/* namespace Cxlookupgrid */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXLOOKUPGRID)
using namespace Cxlookupgrid;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxlookupgridHPP
