// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxGridDBDataDefinitions.pas' rev: 35.00 (Windows)

#ifndef CxgriddbdatadefinitionsHPP
#define CxgriddbdatadefinitionsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <cxGridCustomView.hpp>
#include <dxCoreClasses.hpp>
#include <cxCustomData.hpp>
#include <cxFilter.hpp>
#include <cxDBData.hpp>
#include <cxDataStorage.hpp>
#include <cxDataUtils.hpp>
#include <cxEdit.hpp>
#include <cxDBEdit.hpp>
#include <cxGridCustomTableView.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxgriddbdatadefinitions
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxGridDBDataFilterCriteriaItem;
class DELPHICLASS TcxGridDBDataFilterCriteria;
class DELPHICLASS TcxGridDBDefaultValuesProvider;
class DELPHICLASS TcxGridDBDataController;
class DELPHICLASS TcxGridItemDBDataBinding;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TcxGridDBDataFilterCriteriaItem : public Cxdbdata::TcxDBDataFilterCriteriaItem
{
	typedef Cxdbdata::TcxDBDataFilterCriteriaItem inherited;
	
private:
	HIDESBASE TcxGridDBDataController* __fastcall GetDataController();
	
protected:
	virtual bool __fastcall IsItemLinkSupportsMultiThreading();
	
public:
	__property TcxGridDBDataController* DataController = {read=GetDataController};
public:
	/* TcxDataFilterCriteriaItem.Destroy */ inline __fastcall virtual ~TcxGridDBDataFilterCriteriaItem() { }
	
public:
	/* TcxFilterCriteriaItem.Create */ inline __fastcall virtual TcxGridDBDataFilterCriteriaItem(Cxfilter::TcxFilterCriteriaItemList* AOwner, System::TObject* AItemLink, Cxfilter::TcxFilterOperatorKind AOperatorKind, const System::Variant &AValue, const System::UnicodeString ADisplayValue) : Cxdbdata::TcxDBDataFilterCriteriaItem(AOwner, AItemLink, AOperatorKind, AValue, ADisplayValue) { }
	
};


class PASCALIMPLEMENTATION TcxGridDBDataFilterCriteria : public Cxdbdata::TcxDBDataFilterCriteria
{
	typedef Cxdbdata::TcxDBDataFilterCriteria inherited;
	
private:
	HIDESBASE TcxGridDBDataController* __fastcall GetDataController();
	
protected:
	virtual Cxfilter::TcxFilterCriteriaItemClass __fastcall GetItemClass();
	
public:
	__property TcxGridDBDataController* DataController = {read=GetDataController};
public:
	/* TcxDBDataFilterCriteria.Create */ inline __fastcall virtual TcxGridDBDataFilterCriteria(Cxcustomdata::TcxCustomDataController* ADataController) : Cxdbdata::TcxDBDataFilterCriteria(ADataController) { }
	
public:
	/* TcxDataFilterCriteria.Destroy */ inline __fastcall virtual ~TcxGridDBDataFilterCriteria() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridDBDefaultValuesProvider : public Cxdbedit::TcxCustomDBEditDefaultValuesProvider
{
	typedef Cxdbedit::TcxCustomDBEditDefaultValuesProvider inherited;
	
private:
	System::UnicodeString FFieldName;
	
public:
	virtual bool __fastcall DefaultCanModify();
	virtual bool __fastcall IsDisplayFormatDefined(bool AIsCurrencyValueAccepted);
	__property System::UnicodeString FieldName = {read=FFieldName, write=FFieldName};
public:
	/* TcxCustomDBEditDefaultValuesProvider.Create */ inline __fastcall virtual TcxGridDBDefaultValuesProvider(System::Classes::TPersistent* AOwner) : Cxdbedit::TcxCustomDBEditDefaultValuesProvider(AOwner) { }
	/* TcxCustomDBEditDefaultValuesProvider.Destroy */ inline __fastcall virtual ~TcxGridDBDefaultValuesProvider() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxGridDBDataController : public Cxdbdata::TcxDBDataController
{
	typedef Cxdbdata::TcxDBDataController inherited;
	
private:
	int FPrevScrollBarPos;
	Cxgridcustomtableview::TcxCustomGridTableController* __fastcall GetController();
	Cxgridcustomtableview::TcxCustomGridTableView* __fastcall GetGridViewValue();
	
protected:
	virtual bool __fastcall IsDestroying();
	void __fastcall AssignData(Cxcustomdata::TcxCustomDataController* ADataController);
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
	Cxgridcustomtableview::TcxGridItemDataBindingClass __fastcall GetItemDataBindingClass();
	Cxedit::TcxCustomEditDefaultValuesProviderClass __fastcall GetItemDefaultValuesProviderClass();
	bool __fastcall GetNavigatorIsBof();
	bool __fastcall GetNavigatorIsEof();
	int __fastcall GetScrollBarPos();
	int __fastcall GetScrollBarRecordCount();
	bool __fastcall SetScrollBarPos(int Value);
	virtual bool __fastcall CreateFieldControls(int X, int Y, System::TObject* ADataSource, System::Classes::TList* AFieldList);
	virtual bool __fastcall CanIgnoreTimeForFiltering(System::TObject* AItemLink);
	virtual bool __fastcall CanSelectRow(int ARowIndex);
	virtual int __fastcall CompareByField(int ARecordIndex1, int ARecordIndex2, Cxcustomdata::TcxCustomDataField* AField, Cxcustomdata::TcxDataControllerComparisonMode AMode);
	virtual Cxcustomdata::TcxDataCustomExpressionProvider* __fastcall CreateExpressionProvider();
	virtual void __fastcall DoDataSetCurrentChanged(bool AIsCurrent);
	virtual void __fastcall DoDataSourceChanged();
	virtual void __fastcall DoValueTypeClassChanged(int AItemIndex);
	virtual void __fastcall FilterChanged();
	virtual int __fastcall GetDefaultActiveRelationIndex();
	virtual int __fastcall GetDefaultGridModeBufferCount();
	virtual Cxcustomdata::TcxDataFilterCriteriaClass __fastcall GetFilterCriteriaClass();
	virtual System::UnicodeString __fastcall GetFilterDisplayText(int ARecordIndex, int AItemIndex);
	virtual int __fastcall GetItemID(System::TObject* AItem);
	virtual Cxcustomdata::TcxSortingBySummaryEngineClass __fastcall GetSortingBySummaryEngineClass();
	virtual Cxcustomdata::TcxDataSummaryGroupItemLinkClass __fastcall GetSummaryGroupItemLinkClass();
	virtual Cxcustomdata::TcxDataSummaryItemClass __fastcall GetSummaryItemClass();
	virtual void __fastcall PrepareFieldForSorting(Cxcustomdata::TcxCustomDataField* AField, Cxcustomdata::TcxDataControllerComparisonMode AMode);
	virtual bool __fastcall SupportsScrollBarParams();
	virtual bool __fastcall SyncDetailsFocusWithMaster();
	virtual void __fastcall UpdateScrollBars();
	
public:
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
	virtual void __fastcall Post(bool AForcePost = false);
	virtual void __fastcall UpdateData();
	void __fastcall CreateAllItems(bool AMissingItemsOnly = false);
	Cxgridcustomtableview::TcxCustomGridTableItem* __fastcall CreateItemByField(Data::Db::TField* AField);
	HIDESBASE Cxgridcustomtableview::TcxCustomGridTableItem* __fastcall GetItemByFieldName(const System::UnicodeString AFieldName);
	__property Cxgridcustomtableview::TcxCustomGridTableController* Controller = {read=GetController};
	__property Cxgridcustomtableview::TcxCustomGridTableView* GridView = {read=GetGridViewValue};
	
__published:
	__property DataModeController;
	__property DataSource;
	__property DetailKeyFieldNames = {default=0};
	__property Filter;
	__property KeyFieldNames = {default=0};
	__property MasterKeyFieldNames = {default=0};
	__property MultiThreadedOptions;
	__property Options = {default=28};
	__property Summary;
	__property OnCanSelectRecord;
	__property OnCompare;
	__property OnDataChanged;
	__property OnDetailCollapsing;
	__property OnDetailCollapsed;
	__property OnDetailExpanding;
	__property OnDetailExpanded;
	__property OnDetailHasChildren;
	__property OnFilterRecord;
	__property OnFindCriteriaBeforeChange;
	__property OnFindCriteriaChanged;
	__property OnGroupingChanged;
	__property OnSortingChanged;
public:
	/* TcxDBDataController.Create */ inline __fastcall virtual TcxGridDBDataController(System::Classes::TComponent* AOwner) : Cxdbdata::TcxDBDataController(AOwner) { }
	/* TcxDBDataController.Destroy */ inline __fastcall virtual ~TcxGridDBDataController() { }
	
private:
	void *__IcxEditorFieldLink;	// Cxedit::IcxEditorFieldLink 
	void *__IcxGridDataController;	// Cxgridcustomtableview::IcxGridDataController 
	void *__IcxCustomGridDataController;	// Cxgridcustomview::IcxCustomGridDataController 
	
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
	// {FEEE7E69-BD54-4B5D-BA0B-B6116B69C0CC}
	operator Cxgridcustomtableview::_di_IcxGridDataController()
	{
		Cxgridcustomtableview::_di_IcxGridDataController intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxgridcustomtableview::IcxGridDataController*(void) { return (Cxgridcustomtableview::IcxGridDataController*)&__IcxGridDataController; }
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


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridItemDBDataBinding : public Cxgridcustomtableview::TcxGridItemDataBinding
{
	typedef Cxgridcustomtableview::TcxGridItemDataBinding inherited;
	
private:
	HIDESBASE TcxGridDBDataController* __fastcall GetDataController();
	Data::Db::TField* __fastcall GetField();
	System::UnicodeString __fastcall GetFieldName();
	void __fastcall SetFieldName(const System::UnicodeString Value);
	
protected:
	virtual Cxdatastorage::TcxValueTypeClass __fastcall GetDefaultValueTypeClass();
	virtual System::UnicodeString __fastcall GetFilterFieldName();
	virtual void __fastcall Init();
	virtual bool __fastcall IsValueTypeStored();
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual System::UnicodeString __fastcall DefaultCaption();
	virtual Cxedit::TcxEditRepositoryItem* __fastcall DefaultRepositoryItem();
	virtual int __fastcall DefaultWidth(bool ATakeHeaderIntoAccount = true);
	__property TcxGridDBDataController* DataController = {read=GetDataController};
	__property Data::Db::TField* Field = {read=GetField};
	
__published:
	__property System::UnicodeString FieldName = {read=GetFieldName, write=SetFieldName};
public:
	/* TcxGridItemDataBinding.Create */ inline __fastcall virtual TcxGridItemDBDataBinding(Cxgridcustomtableview::TcxCustomGridTableItem* AItem) : Cxgridcustomtableview::TcxGridItemDataBinding(AItem) { }
	/* TcxGridItemDataBinding.Destroy */ inline __fastcall virtual ~TcxGridItemDBDataBinding() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Cxgriddbdatadefinitions */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXGRIDDBDATADEFINITIONS)
using namespace Cxgriddbdatadefinitions;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxgriddbdatadefinitionsHPP
