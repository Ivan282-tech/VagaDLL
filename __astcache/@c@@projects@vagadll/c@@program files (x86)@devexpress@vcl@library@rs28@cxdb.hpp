// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxDB.pas' rev: 35.00 (Windows)

#ifndef CxdbHPP
#define CxdbHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Generics.Collections.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Variants.hpp>
#include <Data.DB.hpp>
#include <dxCore.hpp>
#include <dxCoreClasses.hpp>
#include <cxDataUtils.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxdb
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxDBAdapterItem;
class DELPHICLASS TcxDBAdapterList;
__interface DELPHIINTERFACE TcxForEachDataLinkProc;
typedef System::DelphiInterface<TcxForEachDataLinkProc> _di_TcxForEachDataLinkProc;
class DELPHICLASS TcxCustomDataLink;
class DELPHICLASS TcxCustomFieldDataLink;
class DELPHICLASS TcxCustomDBDataBinding;
class DELPHICLASS TcxDBDataBinding;
//-- type declarations -------------------------------------------------------
typedef System::Generics::Collections::TList__1<Data::Db::TField*>* TcxDBFieldList;

typedef System::TMetaClass* TDataSetClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDBAdapterItem : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TDataSetClass FDataSetClass;
	
public:
	__fastcall virtual TcxDBAdapterItem(TDataSetClass ADataSetClass);
	__property TDataSetClass DataSetClass = {read=FDataSetClass};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxDBAdapterItem() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxDBAdapterItemClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDBAdapterList : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TcxDBAdapterItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TList* FItems;
	TcxDBAdapterItem* __fastcall GetItem(int Index);
	int __fastcall GetItemCount();
	
public:
	__fastcall TcxDBAdapterList();
	__fastcall virtual ~TcxDBAdapterList();
	void __fastcall Clear();
	virtual bool __fastcall FindAdapter(TDataSetClass ADataSetClass, int &AIndex);
	virtual void __fastcall RegisterAdapter(TDataSetClass ADataSetClass, TcxDBAdapterItemClass AItemClass);
	virtual void __fastcall UnregisterAdapter(TDataSetClass ADataSetClass, TcxDBAdapterItemClass AItemClass);
	__property int ItemCount = {read=GetItemCount, nodefault};
	__property TcxDBAdapterItem* Items[int Index] = {read=GetItem/*, default*/};
};

#pragma pack(pop)

__interface TcxForEachDataLinkProc  : public System::IInterface 
{
	virtual void __fastcall Invoke(TcxCustomDataLink* ADataLink) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomDataLink : public Dxcoreclasses::TcxDoublyLinkedObject
{
	typedef Dxcoreclasses::TcxDoublyLinkedObject inherited;
	
private:
	int FBufferCount;
	Data::Db::TDataLink* FDataLink;
	System::TObject* FDataSetLink;
	System::TObject* FDataSourceLink;
	bool FReadOnly;
	bool FUpdating;
	bool FVisualControl;
	bool __fastcall GetActive();
	int __fastcall GetActiveRecord();
	bool __fastcall GetBOF();
	int __fastcall GetBufferCount();
	Data::Db::TDataSet* __fastcall GetDataSet();
	Data::Db::TDataSource* __fastcall GetDataSource();
	bool __fastcall GetDataSourceFixed();
	bool __fastcall GetEditing();
	bool __fastcall GetEOF();
	bool __fastcall GetGridMode();
	bool __fastcall GetIsLoading();
	bool __fastcall GetIsLocate();
	int __fastcall GetRecordCount();
	void __fastcall SetActiveRecord(const int AValue);
	void __fastcall SetBufferCount(int AValue);
	void __fastcall SetDataSetLink(System::TObject* AValue);
	void __fastcall SetDataSource(Data::Db::TDataSource* const AValue);
	void __fastcall SetIsLoading(const bool AValue);
	void __fastcall SetIsLocate(const bool AValue);
	void __fastcall SetReadOnly(const bool AValue);
	void __fastcall SetUpdating(const bool AValue);
	void __fastcall SetVisualControl(bool AValue);
	
protected:
	virtual void __fastcall ActiveChanged();
	virtual void __fastcall DataSetChanged();
	virtual void __fastcall DataSetScrolled(int Distance);
	virtual void __fastcall EditingChanged();
	virtual bool __fastcall FocusControl(Data::Db::TField* Field);
	virtual void __fastcall LayoutChanged();
	virtual void __fastcall RecordChanged(Data::Db::TField* Field);
	virtual void __fastcall UpdateData();
	static System::_di_IEnumerable __fastcall GetDataLinksByDataSet(Data::Db::TDataSet* ADataSet);
	__property Data::Db::TDataLink* DataLink = {read=FDataLink};
	__property bool GridMode = {read=GetGridMode, nodefault};
	__property bool IsLoading = {read=GetIsLoading, write=SetIsLoading, nodefault};
	__property bool IsLocate = {read=GetIsLocate, write=SetIsLocate, nodefault};
	__property bool VisualControl = {read=FVisualControl, write=SetVisualControl, nodefault};
	
public:
	__fastcall TcxCustomDataLink();
	__fastcall virtual ~TcxCustomDataLink();
	bool __fastcall Edit();
	virtual bool __fastcall ExecuteAction(System::Classes::TBasicAction* Action);
	virtual bool __fastcall UpdateAction(System::Classes::TBasicAction* Action);
	void __fastcall UpdateRecord();
	__property bool Active = {read=GetActive, nodefault};
	__property int ActiveRecord = {read=GetActiveRecord, write=SetActiveRecord, nodefault};
	__property bool BOF = {read=GetBOF, nodefault};
	__property int BufferCount = {read=GetBufferCount, write=SetBufferCount, nodefault};
	__property Data::Db::TDataSet* DataSet = {read=GetDataSet};
	__property Data::Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property bool DataSourceFixed = {read=GetDataSourceFixed, nodefault};
	__property bool Editing = {read=GetEditing, nodefault};
	__property bool Eof = {read=GetEOF, nodefault};
	__property bool ReadOnly = {read=FReadOnly, write=SetReadOnly, nodefault};
	__property int RecordCount = {read=GetRecordCount, nodefault};
	__property bool Updating = {read=FUpdating, write=SetUpdating, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomFieldDataLink : public Data::Db::TDataLink
{
	typedef Data::Db::TDataLink inherited;
	
private:
	Data::Db::TField* FField;
	System::UnicodeString FFieldName;
	bool FEditing;
	bool FModified;
	bool __fastcall GetCanModify();
	System::Classes::TComponent* __fastcall GetDataComponent();
	HIDESBASE void __fastcall SetEditing(bool Value);
	void __fastcall SetField(Data::Db::TField* Value);
	void __fastcall SetFieldName(const System::UnicodeString Value);
	void __fastcall UpdateField();
	
protected:
	TcxCustomDBDataBinding* FDataBinding;
	virtual void __fastcall ActiveChanged();
	virtual void __fastcall DataEvent(Data::Db::TDataEvent Event, NativeInt Info);
	virtual void __fastcall EditingChanged();
	virtual void __fastcall LayoutChanged();
	virtual void __fastcall RecordChanged(Data::Db::TField* Field);
	virtual void __fastcall UpdateData();
	virtual void __fastcall DataComponentChanged();
	virtual void __fastcall UpdateRightToLeft();
	virtual void __fastcall VisualControlChanged();
	__property TcxCustomDBDataBinding* DataBinding = {read=FDataBinding};
	__property System::Classes::TComponent* DataComponent = {read=GetDataComponent};
	
public:
	__fastcall virtual TcxCustomFieldDataLink(TcxCustomDBDataBinding* ADataBinding);
	HIDESBASE bool __fastcall Edit();
	void __fastcall Modified();
	void __fastcall Reset();
	__property bool CanModify = {read=GetCanModify, nodefault};
	__property bool Editing = {read=FEditing, nodefault};
	__property Data::Db::TField* Field = {read=FField};
	__property System::UnicodeString FieldName = {read=FFieldName, write=SetFieldName};
public:
	/* TDataLink.Destroy */ inline __fastcall virtual ~TcxCustomFieldDataLink() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomFieldDataLinkClass;

class PASCALIMPLEMENTATION TcxCustomDBDataBinding : public Cxdatautils::TcxCustomDataBinding
{
	typedef Cxdatautils::TcxCustomDataBinding inherited;
	
private:
	int FRefreshCount;
	System::UnicodeString __fastcall GetDataField();
	Data::Db::TDataSource* __fastcall GetDataSource();
	Data::Db::TField* __fastcall GetField();
	void __fastcall InternalDataChange();
	void __fastcall SetDataField(const System::UnicodeString Value);
	void __fastcall SetDataSource(Data::Db::TDataSource* Value);
	
protected:
	TcxCustomFieldDataLink* FDataLink;
	virtual bool __fastcall GetModified();
	virtual bool __fastcall GetReadOnly();
	virtual void __fastcall SetReadOnly(bool Value);
	virtual void __fastcall VisualControlChanged();
	void __fastcall DisableRefresh();
	void __fastcall EnableRefresh();
	virtual TcxCustomFieldDataLinkClass __fastcall GetDataLinkClass();
	bool __fastcall IsRefreshDisabled();
	
public:
	__fastcall virtual TcxCustomDBDataBinding(System::Classes::TComponent* AOwner, System::Classes::TComponent* ADataComponent);
	__fastcall virtual ~TcxCustomDBDataBinding();
	virtual bool __fastcall CanModify();
	virtual bool __fastcall ExecuteAction(System::Classes::TBasicAction* Action);
	virtual System::Variant __fastcall GetStoredValue(Cxdatautils::TcxDataEditValueSource AValueSource, bool AFocused);
	virtual bool __fastcall IsControlReadOnly();
	virtual bool __fastcall IsDataSourceLive();
	virtual bool __fastcall IsDataStorage();
	virtual void __fastcall Reset();
	virtual bool __fastcall SetEditMode();
	virtual void __fastcall SetStoredValue(Cxdatautils::TcxDataEditValueSource AValueSource, const System::Variant &Value);
	virtual bool __fastcall UpdateAction(System::Classes::TBasicAction* Action);
	virtual void __fastcall UpdateDataSource();
	__property Data::Db::TField* Field = {read=GetField};
	__property Data::Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property System::UnicodeString DataField = {read=GetDataField, write=SetDataField};
	__property TcxCustomFieldDataLink* DataLink = {read=FDataLink};
};


class PASCALIMPLEMENTATION TcxDBDataBinding : public TcxCustomDBDataBinding
{
	typedef TcxCustomDBDataBinding inherited;
	
__published:
	__property DataSource;
	__property DataField = {default=0};
public:
	/* TcxCustomDBDataBinding.Create */ inline __fastcall virtual TcxDBDataBinding(System::Classes::TComponent* AOwner, System::Classes::TComponent* ADataComponent) : TcxCustomDBDataBinding(AOwner, ADataComponent) { }
	/* TcxCustomDBDataBinding.Destroy */ inline __fastcall virtual ~TcxDBDataBinding() { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool __fastcall CanModifyLookupField(Data::Db::TField* AField);
extern DELPHI_PACKAGE void __fastcall CheckFilterFieldName(System::UnicodeString &AFieldName);
extern DELPHI_PACKAGE System::Variant __fastcall GetDataSetValues(Data::Db::TDataSet* ADataSet, System::Classes::TList* AFields);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetFilterFieldName(Data::Db::TField* AField, bool AIgnoreOrigin);
extern DELPHI_PACKAGE bool __fastcall IsDataAvailable(Data::Db::TField* AField);
extern DELPHI_PACKAGE bool __fastcall IsDefaultFields(Data::Db::TDataSet* ADataSet);
extern DELPHI_PACKAGE bool __fastcall IsEqualFieldNames(const System::UnicodeString AFieldName1, const System::UnicodeString AFieldName2);
extern DELPHI_PACKAGE bool __fastcall IsFieldCanModify(Data::Db::TField* AField, bool AIsValueSource);
extern DELPHI_PACKAGE bool __fastcall IsFieldFormatted(Data::Db::TField* AField, bool AIsTextEdit);
extern DELPHI_PACKAGE bool __fastcall IsMultipleFieldNames(const System::UnicodeString AFieldNames);
extern DELPHI_PACKAGE bool __fastcall IsSimpleCurrencyField(Data::Db::TField* AField);
extern DELPHI_PACKAGE int __fastcall GetFieldNamesCount(const System::UnicodeString AFieldNames);
extern DELPHI_PACKAGE void __fastcall GetFieldNames(const System::UnicodeString AFieldNames, System::Classes::TStrings* AList);
extern DELPHI_PACKAGE System::Variant __fastcall GetFieldValue(Data::Db::TField* AField);
extern DELPHI_PACKAGE void __fastcall SetDataSetValues(Data::Db::TDataSet* ADataSet, System::Classes::TList* AFields, const System::Variant &AValues);
extern DELPHI_PACKAGE void __fastcall SetFieldValue(Data::Db::TField* AField, const System::Variant &AValue);
extern DELPHI_PACKAGE Data::Db::TField* __fastcall FindField(Data::Db::TFields* AFields, const System::UnicodeString AName);
}	/* namespace Cxdb */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXDB)
using namespace Cxdb;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxdbHPP
