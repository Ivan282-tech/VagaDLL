// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxDBData.pas' rev: 35.00 (Windows)

#ifndef CxdbdataHPP
#define CxdbdataHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Types.hpp>
#include <System.Variants.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <dxCore.hpp>
#include <cxDataUtils.hpp>
#include <cxCustomData.hpp>
#include <cxDataStorage.hpp>
#include <cxVariants.hpp>
#include <cxFilter.hpp>
#include <cxDBFilter.hpp>
#include <cxDB.hpp>
#include <dxCoreClasses.hpp>
#include <System.Generics.Defaults.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxdbdata
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxDBProviderDetailFilterAdapter;
class DELPHICLASS TcxDBCustomDataLink;
class DELPHICLASS TcxDBDataLink;
struct TcxDBDataProviderSavePosInfo;
class DELPHICLASS TcxDBDataAssignedFields;
class DELPHICLASS TcxDBDataProvider;
class DELPHICLASS TcxValueDefDBReader;
class DELPHICLASS TcxDBDataField;
class DELPHICLASS TcxDBDataRelation;
class DELPHICLASS TcxDBDataFilterCriteriaItem;
class DELPHICLASS TcxDBDataFilterCriteria;
class DELPHICLASS TcxDBDataSummaryItem;
class DELPHICLASS TcxDBDataModeController;
class DELPHICLASS TcxBookmarkList;
class DELPHICLASS TcxDBDataSelection;
class DELPHICLASS TcxDBDataControllerInfo;
class DELPHICLASS TcxDBDataController;
class DELPHICLASS TcxDataSetBookmark;
//-- type declarations -------------------------------------------------------
typedef System::DynamicArray<System::Byte> TcxBookmark;

typedef void __fastcall (__closure *TGetListProc)(System::Classes::TList* AList);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDBProviderDetailFilterAdapter : public Cxdb::TcxDBAdapterItem
{
	typedef Cxdb::TcxDBAdapterItem inherited;
	
public:
	virtual bool __fastcall IsCurrentQuery(Data::Db::TDataSet* ADataSet, const System::UnicodeString AParamNames, const System::Variant &AParamValues);
	virtual void __fastcall ReopenSQL(Data::Db::TDataSet* ADataSet, const System::UnicodeString AParamNames, const System::Variant &AParamValues, bool &AReopened);
	virtual void __fastcall SetFilter(Data::Db::TDataSet* ADataSet, const System::UnicodeString AMasterDetailKeyFieldNames, const System::Variant &AMasterDetailKeyValues, bool AIsSQLMode, bool &AReopened);
public:
	/* TcxDBAdapterItem.Create */ inline __fastcall virtual TcxDBProviderDetailFilterAdapter(Cxdb::TDataSetClass ADataSetClass) : Cxdb::TcxDBAdapterItem(ADataSetClass) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxDBProviderDetailFilterAdapter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDBCustomDataLink : public Cxdb::TcxCustomDataLink
{
	typedef Cxdb::TcxCustomDataLink inherited;
	
private:
	bool __fastcall GetIsDataSetBusy();
	
protected:
	virtual bool __fastcall GetIsDataSetBusyState();
	virtual bool __fastcall IsDataLocate();
	virtual bool __fastcall IsDataUpdate();
	bool __fastcall IsOtherDataControllerLocate();
	bool __fastcall IsOtherDataControllerUpdating();
	__property bool IsDataSetBusy = {read=GetIsDataSetBusy, nodefault};
	
public:
	__fastcall TcxDBCustomDataLink();
	__fastcall virtual ~TcxDBCustomDataLink();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDBDataLink : public TcxDBCustomDataLink
{
	typedef TcxDBCustomDataLink inherited;
	
private:
	bool FPreventLayoutChanged;
	TcxDBDataProvider* FProvider;
	void __fastcall DoInsertingRecord();
	
protected:
	virtual void __fastcall ActiveChanged();
	virtual void __fastcall DataSetChanged();
	virtual void __fastcall DataSetScrolled(int Distance);
	virtual void __fastcall EditingChanged();
	virtual bool __fastcall FocusControl(Data::Db::TField* Field);
	virtual bool __fastcall GetIsDataSetBusyState();
	virtual void __fastcall LayoutChanged();
	virtual void __fastcall RecordChanged(Data::Db::TField* Field);
	virtual void __fastcall UpdateData();
	__property TcxDBDataProvider* Provider = {read=FProvider};
	
public:
	__fastcall TcxDBDataLink(TcxDBDataProvider* AProvider);
public:
	/* TcxDBCustomDataLink.Destroy */ inline __fastcall virtual ~TcxDBDataLink() { }
	
};

#pragma pack(pop)

struct DECLSPEC_DRECORD TcxDBDataProviderSavePosInfo
{
public:
	System::DynamicArray<System::Byte> Bookmark;
	bool Bof;
	bool Eof;
	int ActiveRecord;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDBDataAssignedFields : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Generics::Collections::TList__1<Data::Db::TField*>* FFields;
	
public:
	__fastcall TcxDBDataAssignedFields();
	__fastcall virtual ~TcxDBDataAssignedFields();
	void __fastcall AddField(Data::Db::TField* AField);
	void __fastcall AddFieldsByFieldList(System::Classes::TList* AFieldList);
	void __fastcall AddFieldsByFieldNames(Data::Db::TDataSet* ADataSet, const System::UnicodeString AFieldNames);
	void __fastcall Clear();
	bool __fastcall IsEmpty();
	bool __fastcall IsFieldExists(Data::Db::TField* AField);
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxDBDataProvider : public Cxcustomdata::TcxCustomDataProvider
{
	typedef Cxcustomdata::TcxCustomDataProvider inherited;
	
	
private:
	class DELPHICLASS TListeners;
	class PASCALIMPLEMENTATION TListeners : public System::Generics::Collections::TDictionary__2<TcxDBDataProvider*,System::Byte>
	{
		typedef System::Generics::Collections::TDictionary__2<TcxDBDataProvider*,System::Byte> inherited;
		
	public:
		/* {System_Generics_Collections}TDictionary<cxDBData_TcxDBDataProvider,System_Byte>.Create */ inline __fastcall TListeners()/* overload */ : System::Generics::Collections::TDictionary__2<TcxDBDataProvider*,System::Byte>() { }
		/* {System_Generics_Collections}TDictionary<cxDBData_TcxDBDataProvider,System_Byte>.Create */ inline __fastcall TListeners(int ACapacity)/* overload */ : System::Generics::Collections::TDictionary__2<TcxDBDataProvider*,System::Byte>(ACapacity) { }
		/* {System_Generics_Collections}TDictionary<cxDBData_TcxDBDataProvider,System_Byte>.Create */ inline __fastcall TListeners(const System::DelphiInterface<System::Generics::Defaults::IEqualityComparer__1<TcxDBDataProvider*> > AComparer)/* overload */ : System::Generics::Collections::TDictionary__2<TcxDBDataProvider*,System::Byte>(AComparer) { }
		/* {System_Generics_Collections}TDictionary<cxDBData_TcxDBDataProvider,System_Byte>.Create */ inline __fastcall TListeners(int ACapacity, const System::DelphiInterface<System::Generics::Defaults::IEqualityComparer__1<TcxDBDataProvider*> > AComparer)/* overload */ : System::Generics::Collections::TDictionary__2<TcxDBDataProvider*,System::Byte>(ACapacity, AComparer) { }
		/* {System_Generics_Collections}TDictionary<cxDBData_TcxDBDataProvider,System_Byte>.Create */ inline __fastcall TListeners(System::Generics::Collections::TEnumerable__1<System::Generics::Collections::TPair__2<TcxDBDataProvider*,System::Byte> >* const Collection)/* overload */ : System::Generics::Collections::TDictionary__2<TcxDBDataProvider*,System::Byte>(Collection) { }
		/* {System_Generics_Collections}TDictionary<cxDBData_TcxDBDataProvider,System_Byte>.Create */ inline __fastcall TListeners(System::Generics::Collections::TEnumerable__1<System::Generics::Collections::TPair__2<TcxDBDataProvider*,System::Byte> >* const Collection, const System::DelphiInterface<System::Generics::Defaults::IEqualityComparer__1<TcxDBDataProvider*> > AComparer)/* overload */ : System::Generics::Collections::TDictionary__2<TcxDBDataProvider*,System::Byte>(Collection, AComparer) { }
		/* {System_Generics_Collections}TDictionary<cxDBData_TcxDBDataProvider,System_Byte>.Create */ inline __fastcall TListeners(const System::Generics::Collections::TPair__2<TcxDBDataProvider*,System::Byte> *AItems, const int AItems_High)/* overload */ : System::Generics::Collections::TDictionary__2<TcxDBDataProvider*,System::Byte>(AItems, AItems_High) { }
		/* {System_Generics_Collections}TDictionary<cxDBData_TcxDBDataProvider,System_Byte>.Create */ inline __fastcall TListeners(const System::Generics::Collections::TPair__2<TcxDBDataProvider*,System::Byte> *AItems, const int AItems_High, const System::DelphiInterface<System::Generics::Defaults::IEqualityComparer__1<TcxDBDataProvider*> > AComparer)/* overload */ : System::Generics::Collections::TDictionary__2<TcxDBDataProvider*,System::Byte>(AItems, AItems_High, AComparer) { }
		/* {System_Generics_Collections}TDictionary<cxDBData_TcxDBDataProvider,System_Byte>.Destroy */ inline __fastcall virtual ~TListeners() { }
		
	};
	
	
	
private:
	TcxDBDataAssignedFields* FAssignedFields;
	TcxDBDataLink* FDataLink;
	bool FInCanInitEditing;
	bool FInSetDataSource;
	bool FIncrementalSearching;
	bool FInFirst;
	bool FInInsert;
	bool FInsertOperation;
	bool FInUpdateGridMode;
	bool FIsDataSetCurrent;
	bool FInNotify;
	TListeners* FListeners;
	System::Variant FNewRecordKeyValue;
	bool FPostLocateFlag;
	int FRecordIndex;
	TcxDBDataProviderSavePosInfo FSavePosInfo;
	int FUpdatingPrevFocusedRecordIndex;
	int FUpdatingRecordIndex;
	bool FUpdatingRecordIsInserting;
	int FUpdatingNewRecordIndex;
	void __fastcall AddNewRecord(Data::Db::TDataOperation AOperation);
	TcxDBDataController* __fastcall GetDataController();
	Data::Db::TDataSet* __fastcall GetDataSet();
	Data::Db::TDataSource* __fastcall GetDataSource();
	bool __fastcall GetIsDataSetCurrent();
	bool __fastcall GetIsSmartRefresh();
	void __fastcall RemoveFromListeners();
	void __fastcall SetDataSource(Data::Db::TDataSource* Value);
	void __fastcall SetIsDataSetCurrent(bool Value);
	
protected:
	virtual bool __fastcall IsCustomDataSourceSupported();
	virtual bool __fastcall IsGridMode();
	virtual bool __fastcall IsDataSource();
	bool __fastcall IsKeyNavigation();
	virtual bool __fastcall IsOtherInsert();
	bool __fastcall IsSyncInsert();
	virtual bool __fastcall IsSyncMode();
	int __fastcall DataSet_ActiveRecord();
	bool __fastcall DataSet_BookmarkAvailable();
	int __fastcall DataSet_BufferCount();
	virtual bool __fastcall IsActive();
	virtual bool __fastcall IsActiveDataSet();
	virtual bool __fastcall IsBOF();
	virtual bool __fastcall IsChanging();
	virtual bool __fastcall IsEditing();
	virtual bool __fastcall IsEOF();
	virtual bool __fastcall IsGridModeUpdating();
	virtual bool __fastcall IsInserting();
	bool __fastcall IsLocating();
	virtual bool __fastcall IsModified();
	virtual bool __fastcall IsDataSetModified();
	virtual bool __fastcall BookmarkValid(const System::DynamicArray<System::Byte> ABookmark);
	virtual int __fastcall CompareBookmarks(const System::DynamicArray<System::Byte> AItem1, const System::DynamicArray<System::Byte> AItem2);
	virtual void __fastcall CorrectRecordIndex(int ARecordIndex);
	virtual void __fastcall First();
	virtual void __fastcall Prev();
	virtual void __fastcall Next();
	virtual void __fastcall Last();
	virtual void __fastcall MoveBy(int ADistance);
	virtual void __fastcall Scroll(int ADistance);
	virtual void __fastcall SavePos();
	virtual void __fastcall RestorePos();
	virtual bool __fastcall CanDelete();
	virtual bool __fastcall CanInitEditing(int ARecordIndex);
	virtual bool __fastcall CanModify();
	virtual void __fastcall Append();
	virtual void __fastcall InternalCancel();
	virtual void __fastcall Cancel();
	virtual void __fastcall Delete();
	virtual void __fastcall DeleteRecords(System::Classes::TList* AList);
	virtual void __fastcall DeleteSelection();
	virtual void __fastcall Edit();
	virtual System::Variant __fastcall GetEditValue(int ARecordIndex, Cxcustomdata::TcxCustomDataField* AField, Cxdatautils::TcxDataEditValueSource AEditValueSource);
	virtual void __fastcall Insert();
	virtual void __fastcall Post(bool AForcePost = false);
	virtual void __fastcall PostEditingData();
	virtual bool __fastcall SetEditValue(int ARecordIndex, Cxcustomdata::TcxCustomDataField* AField, const System::Variant &AValue, Cxdatautils::TcxDataEditValueSource AEditValueSource);
	virtual void __fastcall EndDeleting();
	virtual void __fastcall AssignItemValue(int ARecordIndex, Cxcustomdata::TcxCustomDataField* AField, const System::Variant &AValue);
	virtual void __fastcall DoInitInsertingRecord(int AInsertingRecordIndex, const Cxcustomdata::TcxDataSummaryValues AGroupValues);
	virtual void __fastcall ActiveChanged(bool AActive);
	void __fastcall AddListener(TcxDBDataProvider* AProvider);
	virtual void __fastcall BeginLocate();
	virtual void __fastcall DataScrolled(int ADistance);
	virtual void __fastcall Freeze();
	virtual void __fastcall LayoutChanged(Cxcustomdata::TcxDataLayoutChanges ADataLayoutChanges);
	virtual void __fastcall RecordChanged(Data::Db::TField* Field);
	void __fastcall ResetPostLocateFlag();
	void __fastcall ResetSmartRefresh();
	void __fastcall SetPostLocateFlag();
	virtual void __fastcall Unfreeze();
	void __fastcall SmartDataChanged();
	void __fastcall CheckExpandedDetails();
	bool __fastcall DoLocate(const System::UnicodeString ASubText, bool AForward, bool ANext);
	int __fastcall GetDataBufferCount();
	int __fastcall GetDataRecordCount();
	virtual System::UnicodeString __fastcall GetExternalDataDisplayText(int ARecordIndex, Cxcustomdata::TcxCustomDataField* AField);
	virtual System::Variant __fastcall GetExternalDataValue(int ARecordIndex, Cxcustomdata::TcxCustomDataField* AField);
	virtual void __fastcall LoadDataBuffer();
	void __fastcall UpdateGridMode();
	virtual bool __fastcall GetDetailHasChildren(int ARecordIndex, int ARelationIndex);
	virtual int __fastcall GetRecordIndex();
	virtual Cxdatastorage::TcxValueDefReaderClass __fastcall GetValueDefReaderClass();
	__property TcxDBDataController* DataController = {read=GetDataController};
	__property TcxDBDataLink* DataLink = {read=FDataLink};
	__property int UpdatingRecordIndex = {read=FUpdatingRecordIndex, nodefault};
	
public:
	__fastcall virtual TcxDBDataProvider(Cxcustomdata::TcxCustomDataController* ADataController);
	__fastcall virtual ~TcxDBDataProvider();
	bool __fastcall IsCanInitEditingBusy();
	bool __fastcall IsDataSetBusy();
	bool __fastcall IsDetailDataSetBusy();
	bool __fastcall IsOtherDataControllerUpdating();
	bool __fastcall IsOtherDetailDataSetInInsert();
	bool __fastcall IsOtherDetailChanged();
	bool __fastcall IsUniDirectional();
	__property Data::Db::TDataSet* DataSet = {read=GetDataSet};
	__property Data::Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property bool IsDataSetCurrent = {read=GetIsDataSetCurrent, write=SetIsDataSetCurrent, nodefault};
	__property bool IsSmartRefresh = {read=GetIsSmartRefresh, nodefault};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxValueDefDBReader : public Cxdatastorage::TcxValueDefReader
{
	typedef Cxdatastorage::TcxValueDefReader inherited;
	
public:
	virtual System::UnicodeString __fastcall GetDisplayText(Cxdatastorage::TcxValueDef* AValueDef);
	virtual System::Variant __fastcall GetValue(Cxdatastorage::TcxValueDef* AValueDef);
	virtual bool __fastcall IsInternal(Cxdatastorage::TcxValueDef* AValueDef);
	virtual void __fastcall Read(char * ABuffer, Cxdatastorage::TcxValueDef* AValueDef);
public:
	/* TcxValueDefReader.Create */ inline __fastcall virtual TcxValueDefDBReader() : Cxdatastorage::TcxValueDefReader() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxValueDefDBReader() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDBDataField : public Cxcustomdata::TcxCustomDataField
{
	typedef Cxcustomdata::TcxCustomDataField inherited;
	
public:
	TcxDBDataField* operator[](int Index) { return this->Fields[Index]; }
	
private:
	Data::Db::TField* FField;
	System::UnicodeString FFieldName;
	System::Classes::TList* FFields;
	bool FIsCurrency;
	TcxDBDataField* FParentField;
	HIDESBASE TcxDBDataController* __fastcall GetDataController();
	Data::Db::TField* __fastcall GetField();
	TcxDBDataField* __fastcall GetFieldItem(int Index);
	int __fastcall GetFieldCount();
	bool __fastcall GetIsLookup();
	TcxDBDataProvider* __fastcall GetProvider();
	void __fastcall SetField(Data::Db::TField* Value);
	
protected:
	void __fastcall AddField(TcxDBDataField* ADataField);
	void __fastcall ClearFields();
	virtual void __fastcall Reassign(Cxcustomdata::TcxCustomDataField* ASource);
	void __fastcall RemoveField(TcxDBDataField* ADataField);
	virtual void __fastcall RemoveNotification(System::Classes::TComponent* AComponent);
	void __fastcall SetPropertiesByField(Data::Db::TField* AField, bool AFieldChanged);
	virtual bool __fastcall SupportsMultiThreading();
	__property TcxDBDataController* DataController = {read=GetDataController};
	__property Data::Db::TField* Field = {read=GetField, write=SetField};
	__property int FieldCount = {read=GetFieldCount, nodefault};
	__property System::UnicodeString FieldName = {read=FFieldName, write=FFieldName};
	__property TcxDBDataField* Fields[int Index] = {read=GetFieldItem/*, default*/};
	__property bool IsCurrency = {read=FIsCurrency, nodefault};
	__property bool IsLookup = {read=GetIsLookup, nodefault};
	__property TcxDBDataField* ParentField = {read=FParentField};
	__property TcxDBDataProvider* Provider = {read=GetProvider};
	
public:
	__fastcall virtual ~TcxDBDataField();
	virtual bool __fastcall CanModify(Cxdatautils::TcxDataEditValueSource AEditValueSource);
	virtual bool __fastcall IsUnbound();
	virtual bool __fastcall IsValueDefInternal();
public:
	/* TcxCustomDataField.Create */ inline __fastcall virtual TcxDBDataField(Cxcustomdata::TcxCustomDataFieldList* AFieldList) : Cxcustomdata::TcxCustomDataField(AFieldList) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDBDataRelation : public Cxcustomdata::TcxCustomDataRelation
{
	typedef Cxcustomdata::TcxCustomDataRelation inherited;
	
private:
	TcxDBDataField* FMasterKeyField;
	HIDESBASE TcxDBDataController* __fastcall GetDataController();
	System::UnicodeString __fastcall GetDetailKeyFieldNames();
	int __fastcall GetMasterKeyFieldCount();
	System::UnicodeString __fastcall GetMasterKeyFieldNames();
	
protected:
	void __fastcall GetMasterKeyFields(System::Classes::TList* AList);
	virtual bool __fastcall IsLinked();
	virtual void __fastcall RemoveDataField(Cxcustomdata::TcxCustomDataField* ADataField);
	void __fastcall RemoveMasterKeyField();
	void __fastcall UpdateMasterDetailKeyFieldNames();
	__property int MasterKeyFieldCount = {read=GetMasterKeyFieldCount, nodefault};
	
public:
	__fastcall virtual ~TcxDBDataRelation();
	System::Variant __fastcall GetMasterRecordID(int ARecordIndex);
	__property TcxDBDataController* DataController = {read=GetDataController};
	__property System::UnicodeString DetailKeyFieldNames = {read=GetDetailKeyFieldNames};
	__property System::UnicodeString MasterKeyFieldNames = {read=GetMasterKeyFieldNames};
public:
	/* TcxCustomDataRelation.Create */ inline __fastcall virtual TcxDBDataRelation(Cxcustomdata::TcxCustomDataRelationList* ARelationList, System::TObject* AItem) : Cxcustomdata::TcxCustomDataRelation(ARelationList, AItem) { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxDBDataFilterCriteriaItem : public Cxcustomdata::TcxDataFilterCriteriaItem
{
	typedef Cxcustomdata::TcxDataFilterCriteriaItem inherited;
	
private:
	HIDESBASE TcxDBDataController* __fastcall GetDataController();
	TcxDBDataField* __fastcall GetDBField();
	TcxDBDataFilterCriteria* __fastcall GetFilterCriteria();
	
protected:
	virtual Cxfilter::TcxFilterOperatorClass __fastcall GetFilterOperatorClass()/* overload */;
	virtual void __fastcall SetItemLink(System::TObject* Value);
	virtual bool __fastcall UseSQLIgnoreTimeOperatorClass();
	
public:
	__property TcxDBDataFilterCriteria* Criteria = {read=GetFilterCriteria};
	__property TcxDBDataController* DataController = {read=GetDataController};
	__property TcxDBDataField* DBField = {read=GetDBField};
public:
	/* TcxDataFilterCriteriaItem.Destroy */ inline __fastcall virtual ~TcxDBDataFilterCriteriaItem() { }
	
public:
	/* TcxFilterCriteriaItem.Create */ inline __fastcall virtual TcxDBDataFilterCriteriaItem(Cxfilter::TcxFilterCriteriaItemList* AOwner, System::TObject* AItemLink, Cxfilter::TcxFilterOperatorKind AOperatorKind, const System::Variant &AValue, const System::UnicodeString ADisplayValue) : Cxcustomdata::TcxDataFilterCriteriaItem(AOwner, AItemLink, AOperatorKind, AValue, ADisplayValue) { }
	
	/* Hoisted overloads: */
	
protected:
	inline Cxfilter::TcxFilterOperatorClass __fastcall  GetFilterOperatorClass(Cxfilter::TcxFilterOperatorKind AKind){ return Cxfilter::TcxFilterCriteriaItem::GetFilterOperatorClass(AKind); }
	
};


typedef void __fastcall (__closure *TcxDBDataFilterBeforeChangeEvent)(TcxDBDataFilterCriteria* Sender, Data::Db::TDataSet* ADataSet, const System::UnicodeString AFilterText);

typedef void __fastcall (__closure *TcxDBDataFilterFormatFilterTextValueEvent)(TcxDBDataFilterCriteria* Sender, Cxfilter::TcxFilterCriteriaItem* AItem, const System::Variant &AValue, System::UnicodeString &ADisplayValue);

class PASCALIMPLEMENTATION TcxDBDataFilterCriteria : public Cxcustomdata::TcxDataFilterCriteria
{
	typedef Cxcustomdata::TcxDataFilterCriteria inherited;
	
private:
	bool FAutoDataSetFilter;
	bool FIgnoreOrigin;
	TcxDBDataFilterBeforeChangeEvent FOnBeforeChange;
	TcxDBDataFilterFormatFilterTextValueEvent FOnFormatFilterTextValue;
	TcxDBDataController* __fastcall GetDataController();
	void __fastcall SetAutoDataSetFilter(bool Value);
	void __fastcall SetIgnoreOrigin(bool Value);
	
protected:
	virtual void __fastcall FormatFilterTextValue(Cxfilter::TcxFilterCriteriaItem* AItem, const System::Variant &AValue, System::UnicodeString &ADisplayValue);
	virtual Cxfilter::TcxFilterCriteriaItemClass __fastcall GetItemClass();
	virtual bool __fastcall IsExpressionsSupported();
	virtual void __fastcall Update();
	
public:
	__fastcall virtual TcxDBDataFilterCriteria(Cxcustomdata::TcxCustomDataController* ADataController);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source, bool AIgnoreItemNames = false);
	virtual void __fastcall AssignEvents(System::Classes::TPersistent* Source);
	bool __fastcall IsAutoDataSetFilter();
	virtual bool __fastcall IsFiltering();
	virtual void __fastcall RestoreDefaults();
	__property TcxDBDataController* DataController = {read=GetDataController};
	
__published:
	__property bool AutoDataSetFilter = {read=FAutoDataSetFilter, write=SetAutoDataSetFilter, default=0};
	__property DateTimeFormat = {default=0};
	__property bool IgnoreOrigin = {read=FIgnoreOrigin, write=SetIgnoreOrigin, default=1};
	__property TranslateBetween = {default=0};
	__property TranslateIn = {default=0};
	__property TranslateLike = {default=0};
	__property SupportedLike = {default=1};
	__property TcxDBDataFilterBeforeChangeEvent OnBeforeChange = {read=FOnBeforeChange, write=FOnBeforeChange};
	__property TcxDBDataFilterFormatFilterTextValueEvent OnFormatFilterTextValue = {read=FOnFormatFilterTextValue, write=FOnFormatFilterTextValue};
public:
	/* TcxDataFilterCriteria.Destroy */ inline __fastcall virtual ~TcxDBDataFilterCriteria() { }
	
};


class PASCALIMPLEMENTATION TcxDBDataSummaryItem : public Cxcustomdata::TcxDataSummaryItem
{
	typedef Cxcustomdata::TcxDataSummaryItem inherited;
	
private:
	TcxDBDataField* FDataField;
	System::UnicodeString FFieldName;
	TcxDBDataController* __fastcall GetDBDataController();
	void __fastcall SetFieldName(const System::UnicodeString Value);
	
protected:
	virtual bool __fastcall IsCurrency(System::Word AVarType);
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property TcxDBDataController* DataController = {read=GetDBDataController};
	virtual Cxcustomdata::TcxCustomDataField* __fastcall DataField();
	
__published:
	__property System::UnicodeString FieldName = {read=FFieldName, write=SetFieldName};
public:
	/* TcxDataSummaryItem.Destroy */ inline __fastcall virtual ~TcxDBDataSummaryItem() { }
	
public:
	/* TCollectionItem.Create */ inline __fastcall virtual TcxDBDataSummaryItem(System::Classes::TCollection* Collection) : Cxcustomdata::TcxDataSummaryItem(Collection) { }
	
};


typedef bool __fastcall (__closure *TcxDBDataModeControllerDetailIsCurrentQueryEvent)(TcxDBDataModeController* Sender, Data::Db::TDataSet* ADataSet, const System::UnicodeString AMasterDetailKeyFieldNames, const System::Variant &AMasterDetailKeyValues);

typedef void __fastcall (__closure *TcxDBDataModeControllerDetailFirstEvent)(TcxDBDataModeController* Sender, Data::Db::TDataSet* ADataSet, const System::UnicodeString AMasterDetailKeyFieldNames, const System::Variant &AMasterDetailKeyValues, bool &AReopened);

class PASCALIMPLEMENTATION TcxDBDataModeController : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TcxDBDataController* FDataController;
	bool FDetailInSQLMode;
	bool FDetailInSyncMode;
	bool FGridMode;
	int FGridModeBufferCount;
	bool FSmartRefresh;
	bool FSyncInsert;
	bool FSyncMode;
	TcxDBDataModeControllerDetailFirstEvent FOnDetailFirst;
	TcxDBDataModeControllerDetailIsCurrentQueryEvent FOnDetailIsCurrentQuery;
	void __fastcall SetGridMode(bool Value);
	void __fastcall SetGridModeBufferCount(int Value);
	void __fastcall SetSmartRefresh(bool Value);
	void __fastcall SetSyncMode(bool Value);
	
protected:
	virtual bool __fastcall DetailIsCurrentQuery(const System::UnicodeString AMasterDetailKeyFieldNames, const System::Variant &AMasterDetailKeyValues);
	virtual void __fastcall DoDetailFirst(const System::UnicodeString AMasterDetailKeyFieldNames, const System::Variant &AMasterDetailKeyValues, bool &AReopened);
	__property bool DetailInSyncMode = {read=FDetailInSyncMode, write=FDetailInSyncMode, default=1};
	
public:
	__fastcall TcxDBDataModeController(TcxDBDataController* ADataController);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property TcxDBDataController* DataController = {read=FDataController};
	__property bool SyncInsert = {read=FSyncInsert, write=FSyncInsert, default=1};
	
__published:
	__property bool DetailInSQLMode = {read=FDetailInSQLMode, write=FDetailInSQLMode, default=0};
	__property bool GridMode = {read=FGridMode, write=SetGridMode, default=0};
	__property int GridModeBufferCount = {read=FGridModeBufferCount, write=SetGridModeBufferCount, default=0};
	__property bool SmartRefresh = {read=FSmartRefresh, write=SetSmartRefresh, default=0};
	__property bool SyncMode = {read=FSyncMode, write=SetSyncMode, default=1};
	__property TcxDBDataModeControllerDetailFirstEvent OnDetailFirst = {read=FOnDetailFirst, write=FOnDetailFirst};
	__property TcxDBDataModeControllerDetailIsCurrentQueryEvent OnDetailIsCurrentQuery = {read=FOnDetailIsCurrentQuery, write=FOnDetailIsCurrentQuery};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxDBDataModeController() { }
	
};


typedef System::DynamicArray<System::Byte> _dt_Cxdbdata_1;
typedef System::DynamicArray<System::Byte> _dt_Cxdbdata_2;
typedef int __fastcall (__closure *TcxCompareBookmarksFunc)(const _dt_Cxdbdata_1 AItem1, const _dt_Cxdbdata_2 AItem2);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxBookmarkList : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<System::DynamicArray<System::Byte> > _TcxBookmarkList__1;
	
	
public:
	System::DynamicArray<System::Byte> operator[](int Index) { return this->Items[Index]; }
	
private:
	_TcxBookmarkList__1 FItems;
	int __fastcall GetCount();
	System::DynamicArray<System::Byte> __fastcall GetItem(int AIndex);
	
public:
	__fastcall TcxBookmarkList();
	__fastcall virtual ~TcxBookmarkList();
	void __fastcall Clear();
	void __fastcall Add(System::DynamicArray<System::Byte> AItem);
	void __fastcall Insert(int AIndex, System::DynamicArray<System::Byte> AItem);
	void __fastcall Delete(int AIndex);
	void __fastcall QuickSort(int L, int R, TcxCompareBookmarksFunc ACompareFunc);
	__property int Count = {read=GetCount, nodefault};
	__property System::DynamicArray<System::Byte> Items[int Index] = {read=GetItem/*, default*/};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxDBDataSelection : public Cxcustomdata::TcxDataSelection
{
	typedef Cxcustomdata::TcxDataSelection inherited;
	
private:
	System::DynamicArray<System::Byte> FAnchorBookmark;
	TcxBookmarkList* FBookmarks;
	bool FInSelectAll;
	TcxDBDataController* __fastcall GetDataController();
	
protected:
	virtual void __fastcall ClearAnchor();
	int __fastcall CompareBookmarks(const System::DynamicArray<System::Byte> AItem1, const System::DynamicArray<System::Byte> AItem2);
	virtual void __fastcall InternalAdd(int AIndex, int ARowIndex, int ARecordIndex, int ALevel);
	virtual void __fastcall InternalClear();
	virtual void __fastcall InternalDelete(int AIndex);
	bool __fastcall FindBookmark(const System::DynamicArray<System::Byte> ABookmark, int &AIndex);
	virtual System::DynamicArray<System::Byte> __fastcall GetRowBookmark(int ARowIndex);
	bool __fastcall RefreshBookmarks();
	void __fastcall SyncCount();
	void __fastcall EnsureBookmarkListOrder();
	
public:
	__fastcall virtual TcxDBDataSelection(Cxcustomdata::TcxCustomDataController* ADataController);
	__fastcall virtual ~TcxDBDataSelection();
	virtual bool __fastcall FindByRowIndex(int ARowIndex, int &AIndex);
	void __fastcall SelectAll();
	void __fastcall SelectFromAnchor(System::DynamicArray<System::Byte> AToBookmark, bool AKeepSelection);
	__property TcxDBDataController* DataController = {read=GetDataController};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDBDataControllerInfo : public Cxcustomdata::TcxCustomDataControllerInfo
{
	typedef Cxcustomdata::TcxCustomDataControllerInfo inherited;
	
private:
	TcxDBDataController* __fastcall GetDataController();
	
protected:
	virtual int __fastcall GetSelectionMaxRecordCount();
	
public:
	__property TcxDBDataController* DataController = {read=GetDataController};
public:
	/* TcxCustomDataControllerInfo.Create */ inline __fastcall virtual TcxDBDataControllerInfo(Cxcustomdata::TcxCustomDataController* ADataController) : Cxcustomdata::TcxCustomDataControllerInfo(ADataController) { }
	/* TcxCustomDataControllerInfo.Destroy */ inline __fastcall virtual ~TcxDBDataControllerInfo() { }
	
};

#pragma pack(pop)

typedef void __fastcall (__closure *TcxDBDataDetailHasChildrenEvent)(TcxDBDataController* Sender, int ARecordIndex, int ARelationIndex, const System::UnicodeString AMasterDetailKeyFieldNames, const System::Variant &AMasterDetailKeyValues, bool &HasChildren);

typedef void __fastcall (__closure *TcxDBDataControllerGridModeChangedEvent)(TcxDBDataController* Sender);

class PASCALIMPLEMENTATION TcxDBDataController : public Cxcustomdata::TcxCustomDataController
{
	typedef Cxcustomdata::TcxCustomDataController inherited;
	
private:
	System::DynamicArray<System::Byte> FBookmark;
	Cxcustomdata::TcxCustomDataController* FCreatedDataController;
	TcxDBDataModeController* FDataModeController;
	System::UnicodeString FDetailKeyFieldNames;
	bool FFocusingRecord;
	int FFocusingRecordIndex;
	bool FInCheckBrowseMode;
	bool FInCheckCurrentQuery;
	bool FInResetDataSetCurrent;
	bool FInUnboundCopy;
	bool FInUpdateGridModeBufferCount;
	TcxDBDataField* FKeyField;
	System::UnicodeString FKeyFieldNames;
	bool FLoaded;
	System::Classes::TList* FMasterDetailKeyFields;
	System::Variant FMasterDetailKeyValues;
	System::UnicodeString FMasterKeyFieldNames;
	bool FResetDBFields;
	bool FUpdateDataSetPos;
	TcxDBDataDetailHasChildrenEvent FOnDetailHasChildren;
	TcxDBDataControllerGridModeChangedEvent FOnGridModeChanged;
	TcxDBDataField* __fastcall AddInternalDBField();
	TcxDBDataControllerInfo* __fastcall GetDataControllerInfo();
	Data::Db::TDataSet* __fastcall GetDataSet();
	int __fastcall GetDataSetRecordCount();
	Data::Db::TDataSource* __fastcall GetDataSource();
	TcxDBDataField* __fastcall GetDBField(int Index);
	TcxDBDataSelection* __fastcall GetDBSelection();
	TcxDBDataFilterCriteria* __fastcall GetFilter();
	System::UnicodeString __fastcall GetMasterDetailKeyFieldNames();
	System::Classes::TList* __fastcall GetMasterDetailKeyFields();
	TcxDBDataProvider* __fastcall GetProvider();
	int __fastcall GetRecNo();
	void __fastcall MasterDetailKeyFieldsRemoveNotification(System::Classes::TComponent* AComponent);
	void __fastcall RemoveKeyField();
	void __fastcall SetDataModeController(TcxDBDataModeController* Value);
	void __fastcall SetDataSource(Data::Db::TDataSource* Value);
	void __fastcall SetDetailKeyFieldNames(const System::UnicodeString Value);
	HIDESBASE void __fastcall SetFilter(TcxDBDataFilterCriteria* Value);
	void __fastcall SetKeyFieldNames(const System::UnicodeString Value);
	void __fastcall SetMasterKeyFieldNames(const System::UnicodeString Value);
	void __fastcall SetRecNo(int Value);
	void __fastcall SyncDataSetPos();
	Cxcustomdata::TcxCustomDataController* __fastcall SyncMasterDetail();
	void __fastcall SyncMasterDetailDataSetPos();
	void __fastcall UpdateRelationFields();
	
protected:
	virtual void __fastcall ActiveChanged(bool AActive);
	virtual bool __fastcall CanChangeDetailExpanding(int ARecordIndex, bool AExpanded);
	virtual bool __fastcall CanFocusRecord(int ARecordIndex);
	virtual bool __fastcall CanIgnoreTimeForFiltering(System::TObject* AItemLink);
	virtual bool __fastcall CanLoadData();
	virtual void __fastcall CheckEditingOnFindCriteriaChanged();
	virtual void __fastcall CheckDataSetCurrent();
	virtual bool __fastcall CheckMasterBrowseMode();
	void __fastcall ClearMasterDetailKeyFields();
	virtual void __fastcall CorrectAfterDelete(int ARecordIndex);
	virtual Cxcustomdata::TcxCustomDataControllerInfo* __fastcall CreateDataControllerInfo();
	virtual void __fastcall DoDataSetCurrentChanged(bool AIsCurrent);
	virtual void __fastcall DoDataSourceChanged();
	virtual void __fastcall DoGridModeChanged();
	virtual void __fastcall DoInitInsertingRecord(int AInsertingRecordIndex);
	virtual bool __fastcall DoSearchInGridMode(const System::UnicodeString ASubText, bool AForward, bool ANext);
	virtual void __fastcall FindCriteriaChanged();
	virtual int __fastcall FindRecordByFields(int ABufferRecordIndex, System::Classes::TList* AFields);
	int __fastcall FindRecordIndexInGridMode(const System::Variant &AKeyFieldValues);
	virtual int __fastcall GetActiveRecordIndex();
	virtual bool __fastcall GetClearDetailsOnCollapse();
	virtual Cxcustomdata::TcxCustomDataProviderClass __fastcall GetDataProviderClass();
	virtual int __fastcall GetDataRowCount();
	virtual Cxcustomdata::TcxDataSelectionClass __fastcall GetDataSelectionClass();
	virtual int __fastcall GetDefaultGridModeBufferCount();
	virtual Cxcustomdata::TcxCustomDataFieldClass __fastcall GetFieldClass();
	virtual Cxcustomdata::TcxDataFilterCriteriaClass __fastcall GetFilterCriteriaClass();
	virtual int __fastcall GetFocusedDataRowIndex();
	virtual void __fastcall GetKeyFields(System::Classes::TList* AList);
	virtual Cxcustomdata::TcxCustomDataRelationClass __fastcall GetRelationClass();
	virtual Cxcustomdata::TcxDataSummaryItemClass __fastcall GetSummaryItemClass();
	virtual bool __fastcall InternalCheckBookmark(int ADeletedRecordIndex);
	virtual void __fastcall InternalClearBookmark();
	virtual void __fastcall InternalGotoBookmark();
	virtual bool __fastcall InternalSaveBookmark();
	virtual void __fastcall InvalidateDataBuffer();
	virtual bool __fastcall IsDataField(Cxcustomdata::TcxCustomDataField* AField);
	virtual bool __fastcall IsFieldSupportsExpression(Cxcustomdata::TcxCustomDataField* AField);
	virtual bool __fastcall IsKeyNavigation();
	bool __fastcall IsOtherDetailChanged();
	bool __fastcall IsOtherDetailCreating();
	virtual bool __fastcall IsProviderDataSource();
	virtual bool __fastcall IsSmartRefresh();
	virtual void __fastcall LoadStorage();
	virtual int __fastcall LocateRecordIndex(TGetListProc AGetFieldsProc);
	virtual bool __fastcall LockOnAfterSummary();
	virtual void __fastcall NotifyDataControllers();
	void __fastcall NotifyDetailAfterFieldsRecreating(Cxcustomdata::TcxCustomDataController* ADataController);
	void __fastcall NotifyDetailsAfterFieldsRecreating(bool ACreatingLinkObject);
	virtual void __fastcall PrepareField(Cxcustomdata::TcxCustomDataField* AField);
	virtual void __fastcall RemoveNotification(System::Classes::TComponent* AComponent);
	void __fastcall ResetDataSetCurrent(Cxcustomdata::TcxCustomDataController* ADataController);
	void __fastcall ResetDBFields();
	virtual void __fastcall RestructData();
	void __fastcall ResyncDBFields();
	void __fastcall RetrieveField(TcxDBDataField* ADataField, bool AIsLookupKeyOnly);
	virtual bool __fastcall SkipLocateNotification();
	virtual bool __fastcall TryFocusRecord(int ARecordIndex);
	void __fastcall UpdateEditingRecord();
	void __fastcall UpdateField(TcxDBDataField* ADataField, const System::UnicodeString AFieldNames, bool AIsLookup);
	virtual void __fastcall UpdateFields();
	virtual void __fastcall UpdateFocused();
	void __fastcall UpdateInternalKeyFields(const System::UnicodeString AFieldNames, TcxDBDataField* &AField);
	void __fastcall UpdateLookupFields();
	virtual void __fastcall UpdateRelations(Cxcustomdata::TcxCustomDataRelation* ARelation);
	virtual void __fastcall UpdateScrollBars();
	virtual void __fastcall BeginReadRecord();
	virtual void __fastcall EndReadRecord();
	__property TcxDBDataField* DBFields[int Index] = {read=GetDBField};
	__property TcxDBDataSelection* DBSelection = {read=GetDBSelection};
	__property TcxDBDataField* KeyField = {read=FKeyField};
	__property System::UnicodeString MasterDetailKeyFieldNames = {read=GetMasterDetailKeyFieldNames};
	__property System::Classes::TList* MasterDetailKeyFields = {read=GetMasterDetailKeyFields};
	__property System::Variant MasterDetailKeyValues = {read=FMasterDetailKeyValues};
	
public:
	__fastcall virtual TcxDBDataController(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TcxDBDataController();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual bool __fastcall ExecuteAction(System::Classes::TBasicAction* Action);
	virtual bool __fastcall UpdateAction(System::Classes::TBasicAction* Action);
	void __fastcall ChangeFieldName(int AItemIndex, const System::UnicodeString AFieldName);
	virtual void __fastcall ChangeValueTypeClass(int AItemIndex, Cxdatastorage::TcxValueTypeClass AValueTypeClass);
	System::TObject* __fastcall GetItemByFieldName(const System::UnicodeString AFieldName);
	Data::Db::TField* __fastcall GetItemField(int AItemIndex);
	System::UnicodeString __fastcall GetItemFieldName(int AItemIndex);
	virtual bool __fastcall IsDisplayFormatDefined(int AItemIndex, bool AIgnoreSimpleCurrency);
	virtual void __fastcall Loaded();
	void __fastcall BeginLocate();
	void __fastcall EndLocate();
	void __fastcall DoUpdateRecord(int ARecordIndex);
	virtual System::Variant __fastcall GetGroupValue(int ARecordIndex, Cxcustomdata::TcxCustomDataField* AField);
	void __fastcall GetKeyDBFields(System::Classes::TList* AList);
	System::Variant __fastcall GetKeyFieldsValues();
	virtual System::Variant __fastcall GetRecordId(int ARecordIndex);
	void __fastcall UpdateGridModeBufferCount();
	virtual void __fastcall CheckBrowseMode();
	virtual bool __fastcall CheckDetailsBrowseMode();
	virtual bool __fastcall DataChangedNotifyLocked();
	virtual void __fastcall RefreshExternalData();
	virtual bool __fastcall CanFocusedRecordIndexChangePostData();
	virtual void __fastcall SetFocus();
	virtual bool __fastcall IsBookmarkAvailable();
	virtual bool __fastcall IsBookmarkRow(int ARowIndex);
	virtual System::Variant __fastcall GetFilterDataValue(int ARecordIndex, Cxcustomdata::TcxCustomDataField* AField);
	virtual System::UnicodeString __fastcall GetFilterItemFieldName(System::TObject* AItem);
	int __fastcall FindRecordIndexByKey(const System::Variant &AKeyFieldValues);
	bool __fastcall LocateByKey(const System::Variant &AKeyFieldValues);
	void __fastcall CheckCurrentQuery();
	virtual TcxDBProviderDetailFilterAdapter* __fastcall GetDetailFilterAdapter();
	virtual void __fastcall SetMasterRelation(Cxcustomdata::TcxCustomDataRelation* AMasterRelation, int AMasterRecordIndex);
	virtual System::Variant __fastcall GetRowId(int ARowIndex);
	System::DynamicArray<System::Byte> __fastcall GetSelectedBookmark(int Index);
	virtual int __fastcall GetSelectedRowIndex(int Index);
	System::DynamicArray<System::Byte> __fastcall GetSelectionAnchorBookmark();
	virtual int __fastcall GetSelectionAnchorRowIndex();
	virtual bool __fastcall IsSelectionAnchorExist();
	virtual void __fastcall SelectAll();
	virtual void __fastcall SelectFromAnchor(int ARowIndex, bool AKeepSelection);
	virtual void __fastcall SetSelectionAnchor(int ARowIndex);
	virtual bool __fastcall FocusSelectedRow(int ASelectedIndex);
	virtual void __fastcall ForEachRow(bool ASelectedRows, Cxcustomdata::TcxDataControllerEachRowProc AProc);
	bool __fastcall IsSequenced();
	__property TcxDBDataControllerInfo* DataControllerInfo = {read=GetDataControllerInfo};
	__property TcxDBDataModeController* DataModeController = {read=FDataModeController, write=SetDataModeController};
	__property Data::Db::TDataSet* DataSet = {read=GetDataSet};
	__property Data::Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property System::UnicodeString DetailKeyFieldNames = {read=FDetailKeyFieldNames, write=SetDetailKeyFieldNames};
	__property TcxDBDataFilterCriteria* Filter = {read=GetFilter, write=SetFilter};
	__property System::UnicodeString KeyFieldNames = {read=FKeyFieldNames, write=SetKeyFieldNames};
	__property System::UnicodeString MasterKeyFieldNames = {read=FMasterKeyFieldNames, write=SetMasterKeyFieldNames};
	__property TcxDBDataProvider* Provider = {read=GetProvider};
	__property int RecNo = {read=GetRecNo, write=SetRecNo, nodefault};
	__property int DataSetRecordCount = {read=GetDataSetRecordCount, nodefault};
	__property TcxDBDataDetailHasChildrenEvent OnDetailHasChildren = {read=FOnDetailHasChildren, write=FOnDetailHasChildren};
	__property TcxDBDataControllerGridModeChangedEvent OnGridModeChanged = {read=FOnGridModeChanged, write=FOnGridModeChanged};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDataSetBookmark : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	int SaveActiveRecord;
	bool SaveBOF;
	System::DynamicArray<System::Byte> SaveBookmark;
	bool SaveEOF;
public:
	/* TObject.Create */ inline __fastcall TcxDataSetBookmark() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxDataSetBookmark() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Cxdb::TcxDBAdapterList* cxDetailFilterControllers;
extern DELPHI_PACKAGE TcxDataSetBookmark* __fastcall cxDataSetCreateBookmark(Data::Db::TDataSet* ADataSet);
extern DELPHI_PACKAGE void __fastcall cxDataSetRestoreBookmark(Data::Db::TDataSet* ADataSet, TcxDataSetBookmark* &ABookmark);
extern DELPHI_PACKAGE bool __fastcall CanCallDataSetLocate(Data::Db::TDataSet* ADataSet, const System::UnicodeString AKeyFieldNames, const System::Variant &AValue);
extern DELPHI_PACKAGE Cxdatastorage::TcxValueTypeClass __fastcall GetValueTypeClassByField(Data::Db::TField* AField);
}	/* namespace Cxdbdata */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXDBDATA)
using namespace Cxdbdata;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxdbdataHPP
