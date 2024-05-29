// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxDBLookupEdit.pas' rev: 35.00 (Windows)

#ifndef CxdblookupeditHPP
#define CxdblookupeditHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Variants.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.Controls.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <cxClasses.hpp>
#include <cxContainer.hpp>
#include <cxEdit.hpp>
#include <cxDBEdit.hpp>
#include <cxEditConsts.hpp>
#include <cxDB.hpp>
#include <cxDataUtils.hpp>
#include <cxDataStorage.hpp>
#include <cxCustomData.hpp>
#include <cxDBData.hpp>
#include <cxDropDownEdit.hpp>
#include <cxLookupEdit.hpp>
#include <dxCoreClasses.hpp>
#include <cxMaskEdit.hpp>
#include <cxTextEdit.hpp>
#include <cxControls.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxdblookupedit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxCustomDBLookupEditLookupData;
class DELPHICLASS TcxCustomDBLookupEditProperties;
class DELPHICLASS TcxCustomDBLookupEdit;
class DELPHICLASS TcxDBLookupEditDataBinding;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TcxCustomDBLookupEditLookupData : public Cxlookupedit::TcxCustomLookupEditLookupData
{
	typedef Cxlookupedit::TcxCustomLookupEditLookupData inherited;
	
private:
	HIDESBASE Cxdbdata::TcxDBDataController* __fastcall GetDataController();
	HIDESBASE TcxCustomDBLookupEditProperties* __fastcall GetProperties();
	
protected:
	virtual void __fastcall DoSetCurrentKey(int ARecordIndex);
	virtual void __fastcall DoSyncGrid();
	virtual int __fastcall DoFindRecordIndex();
	__property Cxdbdata::TcxDBDataController* DataController = {read=GetDataController};
	__property TcxCustomDBLookupEditProperties* Properties = {read=GetProperties};
public:
	/* TcxCustomLookupEditLookupData.Create */ inline __fastcall virtual TcxCustomDBLookupEditLookupData(System::Classes::TPersistent* AOwner) : Cxlookupedit::TcxCustomLookupEditLookupData(AOwner) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxCustomDBLookupEditLookupData() { }
	
};


class PASCALIMPLEMENTATION TcxCustomDBLookupEditProperties : public Cxlookupedit::TcxCustomLookupEditProperties
{
	typedef Cxlookupedit::TcxCustomLookupEditProperties inherited;
	
private:
	Data::Db::TDataSource* FCachedLookupSource;
	bool FCaseSensitiveSearch;
	int FLockGridModeCount;
	Data::Db::TField* FLookupField;
	Cxdatastorage::TcxLookupList* FLookupList;
	Data::Db::TDataSource* FLookupSource;
	Dxcoreclasses::TcxFreeNotificator* FLookupSourceFreeNotificator;
	bool FSyncLookup;
	bool __fastcall GetIsUseLookupList();
	System::UnicodeString __fastcall GetKeyFieldNames();
	Data::Db::TField* __fastcall GetListField();
	int __fastcall GetListFieldIndex();
	System::UnicodeString __fastcall GetListFieldNames();
	void __fastcall SetIsUseLookupList(bool Value);
	void __fastcall SetKeyFieldNames(const System::UnicodeString Value);
	void __fastcall SetListFieldIndex(int Value);
	void __fastcall SetListFieldNames(const System::UnicodeString Value);
	
protected:
	virtual void __fastcall DBLookupGridBeginUpdate();
	virtual void __fastcall DBLookupGridCheckColumnByFieldName(const System::UnicodeString AFieldName);
	virtual void __fastcall DBLookupGridCreateColumnsByFieldNames(const System::UnicodeString AFieldNames);
	virtual void __fastcall DBLookupGridEndUpdate();
	virtual Data::Db::TField* __fastcall GetDBLookupGridColumnField(int AIndex);
	virtual System::UnicodeString __fastcall GetDBLookupGridColumnFieldName(int AIndex);
	virtual int __fastcall GetDBLookupGridColumnIndexByFieldName(const System::UnicodeString AFieldName);
	virtual Cxdbdata::TcxDBDataController* __fastcall GetDBLookupGridDataController();
	bool __fastcall CanDisplayArbitraryEditValue();
	virtual void __fastcall CheckLookup();
	virtual void __fastcall CheckLookupColumn();
	void __fastcall CheckLookupList();
	virtual void __fastcall DefaultValuesProviderDestroyed();
	void __fastcall DefineByLookupError();
	virtual void __fastcall DoChanged();
	virtual int __fastcall FindByText(int AItemIndex, const System::UnicodeString AText, bool APartialCompare);
	virtual int __fastcall GetDisplayColumnIndex();
	virtual System::UnicodeString __fastcall GetDisplayLookupText(const System::Variant &AKey);
	virtual System::Classes::TAlignment __fastcall GetDefaultHorzAlignment();
	virtual int __fastcall GetDefaultMaxLength();
	virtual bool __fastcall GetIncrementalFiltering();
	System::Variant __fastcall GetKeyByRecordIndex(int ARecordIndex);
	__classmethod virtual Dxcoreclasses::TcxInterfacedPersistentClass __fastcall GetLookupDataClass();
	System::UnicodeString __fastcall GetLookupResultFieldName();
	virtual System::Variant __fastcall GetNullKey();
	int __fastcall GetRecordIndexByKey(const System::Variant &AKey);
	virtual bool __fastcall IsPickMode();
	virtual void __fastcall LockDataChanged();
	virtual void __fastcall LookupSourceFreeNotification(System::Classes::TComponent* Sender);
	virtual void __fastcall SetDisplayColumnIndex(int Value);
	void __fastcall SetLookupField(Data::Db::TField* ALookupField);
	virtual void __fastcall UnlockDataChanged();
	__property bool InSyncLookup = {read=FSyncLookup, nodefault};
	__property bool IsUseLookupList = {read=GetIsUseLookupList, write=SetIsUseLookupList, nodefault};
	
public:
	__fastcall virtual ~TcxCustomDBLookupEditProperties();
	virtual bool __fastcall AllowRepositorySharing();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	Data::Db::TField* __fastcall GetDataField();
	virtual Cxdatautils::TcxDataEditValueSource __fastcall GetEditValueSource(bool AEditFocused);
	Data::Db::TField* __fastcall GetLookupField();
	virtual bool __fastcall IsLookupField();
	virtual void __fastcall PrepareDisplayValue(const System::Variant &AEditValue, System::Variant &DisplayValue, bool AEditFocused);
	virtual void __fastcall RefreshNonShareable();
	__property bool CaseSensitiveSearch = {read=FCaseSensitiveSearch, write=FCaseSensitiveSearch, default=0};
	__property Cxdbdata::TcxDBDataController* DataController = {read=GetDBLookupGridDataController};
	__property System::UnicodeString KeyFieldNames = {read=GetKeyFieldNames, write=SetKeyFieldNames};
	__property Data::Db::TField* ListField = {read=GetListField};
	__property System::UnicodeString ListFieldNames = {read=GetListFieldNames, write=SetListFieldNames, stored=false};
	__property int ListFieldIndex = {read=GetListFieldIndex, write=SetListFieldIndex, default=0};
public:
	/* TcxCustomLookupEditProperties.Create */ inline __fastcall virtual TcxCustomDBLookupEditProperties(System::Classes::TPersistent* AOwner) : Cxlookupedit::TcxCustomLookupEditProperties(AOwner) { }
	
};


class PASCALIMPLEMENTATION TcxCustomDBLookupEdit : public Cxlookupedit::TcxCustomLookupEdit
{
	typedef Cxlookupedit::TcxCustomLookupEdit inherited;
	
private:
	HIDESBASE TcxCustomDBLookupEditProperties* __fastcall GetProperties();
	HIDESBASE TcxCustomDBLookupEditProperties* __fastcall GetActiveProperties();
	HIDESBASE void __fastcall SetProperties(TcxCustomDBLookupEditProperties* Value);
	
protected:
	virtual System::Variant __fastcall GetClearValue();
	virtual bool __fastcall IsValidChar(System::WideChar AChar);
	virtual System::Variant __fastcall ItemIndexToLookupKey(int AItemIndex);
	virtual System::Variant __fastcall LookupKeyToEditValue(const System::Variant &AKey);
	virtual int __fastcall LookupKeyToItemIndex(const System::Variant &AKey);
	DYNAMIC void __fastcall PopupWindowBeforeClosing(System::TObject* Sender);
	DYNAMIC void __fastcall PopupWindowClosed(System::TObject* Sender);
	virtual void __fastcall PrepareDisplayValue(const System::Variant &AEditValue, System::Variant &DisplayValue, bool AEditFocused);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TcxCustomDBLookupEditProperties* ActiveProperties = {read=GetActiveProperties};
	__property TcxCustomDBLookupEditProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxCustomDropDownEdit.Destroy */ inline __fastcall virtual ~TcxCustomDBLookupEdit() { }
	
public:
	/* TcxCustomMaskEdit.Create */ inline __fastcall virtual TcxCustomDBLookupEdit(System::Classes::TComponent* AOwner)/* overload */ : Cxlookupedit::TcxCustomLookupEdit(AOwner) { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxCustomDBLookupEdit(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Cxlookupedit::TcxCustomLookupEdit(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomDBLookupEdit(HWND ParentWindow) : Cxlookupedit::TcxCustomLookupEdit(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxDBLookupEditDataBinding : public Cxdbedit::TcxDBTextEditDataBinding
{
	typedef Cxdbedit::TcxDBTextEditDataBinding inherited;
	
protected:
	virtual bool __fastcall IsLookupControl();
public:
	/* TcxDBEditDataBinding.Create */ inline __fastcall virtual TcxDBLookupEditDataBinding(Cxedit::TcxCustomEdit* AEdit) : Cxdbedit::TcxDBTextEditDataBinding(AEdit) { }
	/* TcxDBEditDataBinding.Destroy */ inline __fastcall virtual ~TcxDBLookupEditDataBinding() { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool __fastcall IsLinkedToDataSet(Data::Db::TDataSource* ADataSource, Data::Db::TDataSet* ADataSet);
}	/* namespace Cxdblookupedit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXDBLOOKUPEDIT)
using namespace Cxdblookupedit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxdblookupeditHPP
