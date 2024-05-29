// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxLookupDBGrid.pas' rev: 35.00 (Windows)

#ifndef CxlookupdbgridHPP
#define CxlookupdbgridHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Data.DB.hpp>
#include <cxClasses.hpp>
#include <cxControls.hpp>
#include <cxGraphics.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxEdit.hpp>
#include <cxDBEdit.hpp>
#include <cxCustomData.hpp>
#include <cxDB.hpp>
#include <cxDBData.hpp>
#include <cxEditRepositoryItems.hpp>
#include <cxLookupGrid.hpp>
#include <dxCoreClasses.hpp>
#include <System.UITypes.hpp>
#include <cxLookAndFeels.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxlookupdbgrid
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxLookupGridDBDataController;
class DELPHICLASS TcxLookupDBGridDefaultValuesProvider;
class DELPHICLASS TcxLookupDBGridColumn;
class DELPHICLASS TcxLookupDBGridColumns;
class DELPHICLASS TcxLookupDBGridOptions;
class DELPHICLASS TcxCustomLookupDBGrid;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TcxLookupGridDBDataController : public Cxdbdata::TcxDBDataController
{
	typedef Cxdbdata::TcxDBDataController inherited;
	
private:
	TcxCustomLookupDBGrid* __fastcall GetGrid();
	
protected:
	virtual void __fastcall UpdateScrollBars();
	
public:
	__fastcall virtual TcxLookupGridDBDataController(System::Classes::TComponent* AOwner);
	virtual System::TObject* __fastcall GetItem(int Index);
	__property TcxCustomLookupDBGrid* Grid = {read=GetGrid};
	
__published:
	__property OnCompare;
public:
	/* TcxDBDataController.Destroy */ inline __fastcall virtual ~TcxLookupGridDBDataController() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxLookupDBGridDefaultValuesProvider : public Cxdbedit::TcxCustomDBEditDefaultValuesProvider
{
	typedef Cxdbedit::TcxCustomDBEditDefaultValuesProvider inherited;
	
__published:
	virtual bool __fastcall IsDisplayFormatDefined(bool AIsCurrencyValueAccepted);
public:
	/* TcxCustomDBEditDefaultValuesProvider.Create */ inline __fastcall virtual TcxLookupDBGridDefaultValuesProvider(System::Classes::TPersistent* AOwner) : Cxdbedit::TcxCustomDBEditDefaultValuesProvider(AOwner) { }
	/* TcxCustomDBEditDefaultValuesProvider.Destroy */ inline __fastcall virtual ~TcxLookupDBGridDefaultValuesProvider() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxLookupDBGridColumn : public Cxlookupgrid::TcxLookupGridColumn
{
	typedef Cxlookupgrid::TcxLookupGridColumn inherited;
	
private:
	HIDESBASE TcxLookupGridDBDataController* __fastcall GetDataController();
	Data::Db::TField* __fastcall GetField();
	System::UnicodeString __fastcall GetFieldName();
	void __fastcall SetFieldName(const System::UnicodeString Value);
	
protected:
	virtual Cxedit::TcxCustomEditDefaultValuesProviderClass __fastcall GetDefaultValuesProviderClass();
	void __fastcall InitDefaultValuesProvider();
	__property TcxLookupGridDBDataController* DataController = {read=GetDataController};
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual System::UnicodeString __fastcall DefaultCaption();
	virtual Cxedit::TcxEditRepositoryItem* __fastcall DefaultRepositoryItem();
	virtual int __fastcall DefaultWidth();
	virtual bool __fastcall Equals(System::TObject* Obj);
	__property Data::Db::TField* Field = {read=GetField};
	
__published:
	__property System::UnicodeString FieldName = {read=GetFieldName, write=SetFieldName};
public:
	/* TcxLookupGridColumn.Create */ inline __fastcall virtual TcxLookupDBGridColumn(System::Classes::TCollection* Collection) : Cxlookupgrid::TcxLookupGridColumn(Collection) { }
	/* TcxLookupGridColumn.Destroy */ inline __fastcall virtual ~TcxLookupDBGridColumn() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxLookupDBGridColumns : public Cxlookupgrid::TcxLookupGridColumns
{
	typedef Cxlookupgrid::TcxLookupGridColumns inherited;
	
public:
	TcxLookupDBGridColumn* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TcxLookupDBGridColumn* __fastcall GetColumn(int Index);
	HIDESBASE void __fastcall SetColumn(int Index, TcxLookupDBGridColumn* Value);
	
public:
	HIDESBASE TcxLookupDBGridColumn* __fastcall Add();
	TcxLookupDBGridColumn* __fastcall ColumnByFieldName(const System::UnicodeString AFieldName);
	virtual bool __fastcall Equals(System::TObject* Obj);
	__property TcxLookupDBGridColumn* Items[int Index] = {read=GetColumn, write=SetColumn/*, default*/};
public:
	/* TcxLookupGridColumns.Create */ inline __fastcall virtual TcxLookupDBGridColumns(Cxlookupgrid::TcxCustomLookupGrid* AGrid, Cxlookupgrid::TcxLookupGridColumnClass AColumnClass) : Cxlookupgrid::TcxLookupGridColumns(AGrid, AColumnClass) { }
	
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TcxLookupDBGridColumns() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxLookupDBGridOptions : public Cxlookupgrid::TcxLookupGridOptions
{
	typedef Cxlookupgrid::TcxLookupGridOptions inherited;
	
private:
	TcxCustomLookupDBGrid* __fastcall GetGrid();
	bool __fastcall GetSyncMode();
	void __fastcall SetSyncMode(bool Value);
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property TcxCustomLookupDBGrid* Grid = {read=GetGrid};
	
__published:
	__property bool SyncMode = {read=GetSyncMode, write=SetSyncMode, default=0};
public:
	/* TcxLookupGridOptions.Create */ inline __fastcall virtual TcxLookupDBGridOptions(Cxlookupgrid::TcxCustomLookupGrid* AGrid) : Cxlookupgrid::TcxLookupGridOptions(AGrid) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxLookupDBGridOptions() { }
	
};


class PASCALIMPLEMENTATION TcxCustomLookupDBGrid : public Cxlookupgrid::TcxCustomLookupGrid
{
	typedef Cxlookupgrid::TcxCustomLookupGrid inherited;
	
private:
	TcxLookupDBGridColumns* __fastcall GetColumns();
	HIDESBASE TcxLookupGridDBDataController* __fastcall GetDataController();
	Data::Db::TDataSource* __fastcall GetDataSource();
	System::UnicodeString __fastcall GetKeyFieldNames();
	TcxLookupDBGridOptions* __fastcall GetOptions();
	HIDESBASE void __fastcall SetColumns(TcxLookupDBGridColumns* Value);
	HIDESBASE void __fastcall SetDataController(TcxLookupGridDBDataController* Value);
	void __fastcall SetDataSource(Data::Db::TDataSource* Value);
	void __fastcall SetKeyFieldNames(const System::UnicodeString Value);
	HIDESBASE void __fastcall SetOptions(TcxLookupDBGridOptions* Value);
	
protected:
	virtual void __fastcall CreateColumnsByFields(System::Classes::TStrings* AFieldNames);
	virtual void __fastcall DataChanged();
	virtual Cxlookupgrid::TcxLookupGridColumnClass __fastcall GetColumnClass();
	virtual Cxlookupgrid::TcxLookupGridColumnsClass __fastcall GetColumnsClass();
	virtual Cxcustomdata::TcxCustomDataControllerClass __fastcall GetDataControllerClass();
	virtual Cxlookupgrid::TcxLookupGridOptionsClass __fastcall GetOptionsClass();
	virtual void __fastcall InitScrollBarsParameters();
	virtual void __fastcall Scroll(Vcl::Forms::TScrollBarKind AScrollBarKind, System::Uitypes::TScrollCode AScrollCode, int &AScrollPos);
	virtual void __fastcall UpdateScrollBars();
	
public:
	void __fastcall CreateAllColumns();
	void __fastcall CreateColumnsByFieldNames(const System::UnicodeString AFieldNames);
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property Color = {default=-16777211};
	__property TcxLookupDBGridColumns* Columns = {read=GetColumns, write=SetColumns};
	__property TcxLookupGridDBDataController* DataController = {read=GetDataController, write=SetDataController};
	__property Font;
	__property LookAndFeel;
	__property TcxLookupDBGridOptions* Options = {read=GetOptions, write=SetOptions};
	__property ParentFont = {default=1};
	__property Visible = {default=1};
	
__published:
	__property Data::Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property System::UnicodeString KeyFieldNames = {read=GetKeyFieldNames, write=SetKeyFieldNames};
public:
	/* TcxCustomLookupGrid.Create */ inline __fastcall virtual TcxCustomLookupDBGrid(System::Classes::TComponent* AOwner) : Cxlookupgrid::TcxCustomLookupGrid(AOwner) { }
	/* TcxCustomLookupGrid.Destroy */ inline __fastcall virtual ~TcxCustomLookupDBGrid() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomLookupDBGrid(HWND ParentWindow) : Cxlookupgrid::TcxCustomLookupGrid(ParentWindow) { }
	
};


typedef System::TMetaClass* TcxCustomLookupDBGridClass;

//-- var, const, procedure ---------------------------------------------------
static const bool DefaultSyncMode = false;
}	/* namespace Cxlookupdbgrid */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXLOOKUPDBGRID)
using namespace Cxlookupdbgrid;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxlookupdbgridHPP
