// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxGallery.pas' rev: 35.00 (Windows)

#ifndef DxgalleryHPP
#define DxgalleryHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.ImgList.hpp>
#include <dxCoreClasses.hpp>
#include <dxCore.hpp>
#include <cxClasses.hpp>
#include <dxGDIPlusClasses.hpp>
#include <cxGraphics.hpp>
#include <cxAccessibility.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxgallery
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IdxGalleryObject;
typedef System::DelphiInterface<IdxGalleryObject> _di_IdxGalleryObject;
__interface DELPHIINTERFACE IdxGalleryItem;
typedef System::DelphiInterface<IdxGalleryItem> _di_IdxGalleryItem;
__interface DELPHIINTERFACE IdxGalleryItems;
typedef System::DelphiInterface<IdxGalleryItems> _di_IdxGalleryItems;
__interface DELPHIINTERFACE IdxGalleryGroup;
typedef System::DelphiInterface<IdxGalleryGroup> _di_IdxGalleryGroup;
__interface DELPHIINTERFACE IdxGalleryGroups;
typedef System::DelphiInterface<IdxGalleryGroups> _di_IdxGalleryGroups;
__interface DELPHIINTERFACE IdxGallery;
typedef System::DelphiInterface<IdxGallery> _di_IdxGallery;
__interface DELPHIINTERFACE IdxGallery2;
typedef System::DelphiInterface<IdxGallery2> _di_IdxGallery2;
__interface DELPHIINTERFACE IdxGalleryOwner;
typedef System::DelphiInterface<IdxGalleryOwner> _di_IdxGalleryOwner;
class DELPHICLASS TdxCustomGalleryItem;
class DELPHICLASS TdxCustomGalleryItems;
class DELPHICLASS TdxCustomGalleryGroupHeader;
class DELPHICLASS TdxGalleryGroupCustomAccessibilityHelper;
class DELPHICLASS TdxCustomGalleryGroup;
class DELPHICLASS TdxCustomGalleryGroups;
class DELPHICLASS TdxGalleryItem;
class DELPHICLASS TdxGalleryItems;
class DELPHICLASS TdxGalleryGroupHeader;
class DELPHICLASS TdxGalleryGroup;
class DELPHICLASS TdxGalleryGroups;
class DELPHICLASS TdxCustomGallery;
class DELPHICLASS TdxGallery;
//-- type declarations -------------------------------------------------------
typedef System::TMetaClass* TdxGalleryItemClass;

typedef System::TMetaClass* TdxGalleryItemsClass;

typedef System::TMetaClass* TdxGalleryGroupClass;

typedef System::TMetaClass* TdxGalleryGroupsClass;

typedef System::TMetaClass* TdxGalleryGroupHeaderClass;

enum DECLSPEC_DENUM TdxGalleryCustomizationAction : unsigned char { gcaChangeGroupCaption, gcaChangeItemCaption };

typedef System::Set<TdxGalleryCustomizationAction, TdxGalleryCustomizationAction::gcaChangeGroupCaption, TdxGalleryCustomizationAction::gcaChangeItemCaption> TdxGalleryCustomizationActions;

typedef void __fastcall (__closure *TdxGalleryItemEvent)(System::TObject* Sender, TdxGalleryItem* AItem);

enum DECLSPEC_DENUM TdxGalleryItemCheckMode : unsigned char { icmNone, icmSingleCheck, icmSingleRadio, icmMultiple };

enum DECLSPEC_DENUM TdxGalleryChangeType : unsigned char { gctLight, gctHard };

typedef void __fastcall (__closure *TdxGalleryChangeEvent)(System::TObject* Sender, TdxGalleryChangeType AChangeType);

__interface  INTERFACE_UUID("{DF69CAD3-7A28-480E-BC37-D412C8985FC9}") IdxGalleryObject  : public System::IInterface 
{
	virtual System::TObject* __fastcall GetInstance() = 0 ;
	__property System::TObject* Instance = {read=GetInstance};
};

__interface  INTERFACE_UUID("{B30DECAE-EDCD-4221-B404-5E811A866DA6}") IdxGalleryItem  : public IdxGalleryObject 
{
	virtual System::UnicodeString __fastcall GetCaption() = 0 ;
	virtual _di_IdxGalleryItems __fastcall GetItems() = 0 ;
	virtual int __fastcall GetIndex() = 0 ;
	virtual void __fastcall SetCaption(const System::UnicodeString AValue) = 0 ;
	virtual void __fastcall SetIndex(int AIndex) = 0 ;
	virtual void __fastcall SetItems(_di_IdxGalleryItems AItems) = 0 ;
	__property int Index = {read=GetIndex, write=SetIndex};
	__property _di_IdxGalleryItems Items = {read=GetItems, write=SetItems};
};

__interface  INTERFACE_UUID("{B695ABB2-86B7-403E-AF57-B0EBAABBA0FA}") IdxGalleryItems  : public IdxGalleryObject 
{
	virtual _di_IdxGalleryItem __fastcall Add() = 0 ;
	virtual int __fastcall GetCount() = 0 ;
	virtual _di_IdxGalleryItem __fastcall GetItem(int AIndex) = 0 ;
	virtual _di_IdxGalleryItem __fastcall Insert(int AIndex) = 0 ;
	virtual void __fastcall Delete(int AIndex) = 0 ;
	__property int Count = {read=GetCount};
};

__interface  INTERFACE_UUID("{250CA14D-1229-45EB-938F-E2C6FED13645}") IdxGalleryGroup  : public IdxGalleryObject 
{
	virtual System::UnicodeString __fastcall GetCaption() = 0 ;
	virtual _di_IdxGalleryGroups __fastcall GetGroups() = 0 ;
	virtual int __fastcall GetIndex() = 0 ;
	virtual _di_IdxGalleryItems __fastcall GetItems() = 0 ;
	virtual void __fastcall SetCaption(const System::UnicodeString AValue) = 0 ;
	virtual void __fastcall SetIndex(int AIndex) = 0 ;
	__property int Index = {read=GetIndex, write=SetIndex};
	__property _di_IdxGalleryGroups Groups = {read=GetGroups};
};

__interface  INTERFACE_UUID("{C853A9B6-66EF-4397-BEEF-5A5F8CA74EDD}") IdxGalleryGroups  : public IdxGalleryObject 
{
	virtual _di_IdxGalleryGroup __fastcall Add() = 0 ;
	virtual int __fastcall GetCount() = 0 ;
	virtual System::UnicodeString __fastcall GetDisplayName() = 0 ;
	virtual _di_IdxGalleryGroup __fastcall GetGroup(int AIndex) = 0 ;
	virtual _di_IdxGalleryGroup __fastcall Insert(int AIndex) = 0 ;
	virtual void __fastcall Delete(int AIndex) = 0 ;
	__property int Count = {read=GetCount};
};

__interface  INTERFACE_UUID("{B652EE21-71B8-4C82-9D33-BA53365A3627}") IdxGallery  : public System::IInterface 
{
	virtual TdxGalleryCustomizationActions __fastcall GetAllowedCustomizationActions() = 0 ;
	virtual _di_IdxGalleryGroups __fastcall GetGroups() = 0 ;
	__property _di_IdxGalleryGroups Groups = {read=GetGroups};
};

__interface  INTERFACE_UUID("{418FD781-56A7-4EA6-8720-1D0D479EBC2E}") IdxGallery2  : public System::IInterface 
{
	virtual TdxGalleryItemCheckMode __fastcall GetItemCheckMode() = 0 ;
	virtual void __fastcall SetItemCheckMode(TdxGalleryItemCheckMode AValue) = 0 ;
	virtual TdxGalleryGroups* __fastcall GetGroups() = 0 ;
	virtual TdxGalleryItemEvent __fastcall GetOnItemClick() = 0 ;
	virtual void __fastcall SetOnItemClick(TdxGalleryItemEvent AValue) = 0 ;
	virtual System::TObject* __fastcall GetInstance() = 0 ;
	virtual System::Classes::TComponent* __fastcall GetParentComponent() = 0 ;
	virtual void __fastcall ClickItem(TdxGalleryItem* AItem) = 0 ;
	virtual TdxGalleryItem* __fastcall GetCheckedItem() = 0 ;
	virtual void __fastcall GetCheckedItems(System::Classes::TList* AList) = 0 ;
	virtual void __fastcall UncheckAll() = 0 ;
	__property TdxGalleryItemCheckMode ItemCheckMode = {read=GetItemCheckMode, write=SetItemCheckMode};
	__property TdxGalleryGroups* Groups = {read=GetGroups};
	__property TdxGalleryItemEvent OnItemClick = {read=GetOnItemClick, write=SetOnItemClick};
};

__interface  INTERFACE_UUID("{9E2F64DD-D370-4B24-8FF3-7E4FE08A15F1}") IdxGalleryOwner  : public System::IInterface 
{
	virtual _di_IdxGallery __fastcall GetGallery() = 0 ;
	virtual _di_IdxGallery2 __fastcall GetGallery2() = 0 ;
};

class PASCALIMPLEMENTATION TdxCustomGalleryItem : public Cxclasses::TcxComponentCollectionItem
{
	typedef Cxclasses::TcxComponentCollectionItem inherited;
	
private:
	System::UnicodeString FCaption;
	System::UnicodeString FDescription;
	bool FEnabled;
	Dxgdiplusclasses::TdxSmartGlyph* FGlyph;
	System::UnicodeString FHint;
	System::Uitypes::TImageIndex FImageIndex;
	void __fastcall GlyphChangeHandler(System::TObject* Sender);
	System::UnicodeString __fastcall GetCaption();
	void __fastcall SetCaption(const System::UnicodeString AValue);
	void __fastcall SetDescription(const System::UnicodeString AValue);
	void __fastcall SetEnabled(bool AValue);
	void __fastcall SetGlyph(Dxgdiplusclasses::TdxSmartGlyph* AValue);
	void __fastcall SetImageIndex(System::Uitypes::TImageIndex Value);
	System::TObject* __fastcall GetInstance();
	_di_IdxGalleryItems __fastcall GetGalleryItems();
	void __fastcall SetGalleryItems(_di_IdxGalleryItems AItems);
	void __fastcall ReadActionIndex(System::Classes::TReader* Reader);
	void __fastcall WriteActionIndex(System::Classes::TWriter* Writer);
	
protected:
	System::Variant FActionIndex;
	virtual void __fastcall ChangeScale(int M, int D);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	
public:
	__fastcall virtual TdxCustomGalleryItem(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxCustomGalleryItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property System::UnicodeString Caption = {read=GetCaption, write=SetCaption};
	__property System::UnicodeString Description = {read=FDescription, write=SetDescription};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=1};
	__property Dxgdiplusclasses::TdxSmartGlyph* Glyph = {read=FGlyph, write=SetGlyph};
	__property System::UnicodeString Hint = {read=FHint, write=FHint};
	__property System::Uitypes::TImageIndex ImageIndex = {read=FImageIndex, write=SetImageIndex, default=-1};
private:
	void *__IdxGalleryItem;	// IdxGalleryItem 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B30DECAE-EDCD-4221-B404-5E811A866DA6}
	operator _di_IdxGalleryItem()
	{
		_di_IdxGalleryItem intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxGalleryItem*(void) { return (IdxGalleryItem*)&__IdxGalleryItem; }
	#endif
	
};


class PASCALIMPLEMENTATION TdxCustomGalleryItems : public Cxclasses::TcxInterfacedComponentCollection
{
	typedef Cxclasses::TcxInterfacedComponentCollection inherited;
	
public:
	TdxCustomGalleryItem* operator[](int AIndex) { return this->Items[AIndex]; }
	
private:
	System::TObject* __fastcall GetInstance();
	_di_IdxGalleryItem __fastcall AddGalleryItem();
	_di_IdxGalleryItem __fastcall GetGalleryItem(int AIndex);
	_di_IdxGalleryItem __fastcall InsertGalleryItem(int AIndex);
	
protected:
	virtual void __fastcall ChangeScale(int M, int D);
	HIDESBASE TdxCustomGalleryItem* __fastcall GetItem(int AIndex);
	HIDESBASE void __fastcall SetItem(int AIndex, TdxCustomGalleryItem* AValue);
	
public:
	HIDESBASE TdxCustomGalleryItem* __fastcall Add();
	__property TdxCustomGalleryItem* Items[int AIndex] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TcxComponentCollection.Create */ inline __fastcall virtual TdxCustomGalleryItems(System::Classes::TComponent* AParentComponent, Cxclasses::TcxComponentCollectionItemClass AItemClass) : Cxclasses::TcxInterfacedComponentCollection(AParentComponent, AItemClass) { }
	/* TcxComponentCollection.Destroy */ inline __fastcall virtual ~TdxCustomGalleryItems() { }
	
private:
	void *__IdxGalleryItems;	// IdxGalleryItems 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B695ABB2-86B7-403E-AF57-B0EBAABBA0FA}
	operator _di_IdxGalleryItems()
	{
		_di_IdxGalleryItems intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxGalleryItems*(void) { return (IdxGalleryItems*)&__IdxGalleryItems; }
	#endif
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomGalleryGroupHeader : public Dxcoreclasses::TcxOwnedPersistent
{
	typedef Dxcoreclasses::TcxOwnedPersistent inherited;
	
private:
	System::Classes::TAlignment FAlignment;
	System::UnicodeString FCaption;
	bool FVisible;
	void __fastcall SetAlignment(System::Classes::TAlignment AValue);
	void __fastcall SetCaption(const System::UnicodeString AValue);
	void __fastcall SetVisible(bool AValue);
	
protected:
	virtual void __fastcall Changed();
	virtual void __fastcall ChangeScale(int M, int D);
	virtual void __fastcall DoAssign(System::Classes::TPersistent* Source);
	
public:
	__fastcall virtual TdxCustomGalleryGroupHeader(System::Classes::TPersistent* AOwner);
	__property System::Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property System::UnicodeString Caption = {read=FCaption, write=SetCaption};
	__property bool Visible = {read=FVisible, write=SetVisible, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxCustomGalleryGroupHeader() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxGalleryGroupCustomAccessibilityHelper : public Cxaccessibility::TcxAccessibilityHelper
{
	typedef Cxaccessibility::TcxAccessibilityHelper inherited;
	
protected:
	virtual TdxCustomGalleryGroup* __fastcall GetGroup() = 0 ;
	virtual bool __fastcall ChildIsSimpleElement(int AIndex);
	virtual int __fastcall GetChildCount();
	virtual System::UnicodeString __fastcall GetName(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetRole(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetState(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual Cxaccessibility::TcxAccessibleObjectProperties __fastcall GetSupportedProperties(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	__property TdxCustomGalleryGroup* Group = {read=GetGroup};
public:
	/* TcxAccessibilityHelper.Create */ inline __fastcall virtual TdxGalleryGroupCustomAccessibilityHelper(System::TObject* AOwnerObject) : Cxaccessibility::TcxAccessibilityHelper(AOwnerObject) { }
	/* TcxAccessibilityHelper.Destroy */ inline __fastcall virtual ~TdxGalleryGroupCustomAccessibilityHelper() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxCustomGalleryGroup : public Cxclasses::TcxComponentCollectionItem
{
	typedef Cxclasses::TcxComponentCollectionItem inherited;
	
private:
	TdxCustomGalleryGroupHeader* FHeader;
	TdxCustomGalleryItems* FItems;
	bool FVisible;
	System::UnicodeString __fastcall GetCaption();
	int __fastcall GetItemCount();
	bool __fastcall GetShowCaption();
	bool __fastcall GetVisible();
	void __fastcall SetCaption(const System::UnicodeString AValue);
	void __fastcall SetItems(TdxCustomGalleryItems* AValue);
	void __fastcall SetHeader(TdxCustomGalleryGroupHeader* AValue);
	void __fastcall SetShowCaption(bool AValue);
	void __fastcall SetVisible(bool AValue);
	_di_IdxGalleryGroups __fastcall GetGalleryGroups();
	_di_IdxGalleryItems __fastcall GetGalleryGroupItems();
	System::TObject* __fastcall GetInstance();
	
protected:
	virtual void __fastcall ChangeScale(int M, int D);
	void __fastcall CreateItems();
	void __fastcall ItemsChangeHandler(System::TObject* Sender, Cxclasses::TcxComponentCollectionItem* AItem, Cxclasses::TcxComponentCollectionNotification AAction);
	virtual TdxGalleryGroupHeaderClass __fastcall GetGalleryGroupHeaderClass();
	virtual TdxGalleryItemClass __fastcall GetGalleryItemClass();
	virtual TdxGalleryItemsClass __fastcall GetGalleryItemsClass();
	
public:
	__fastcall virtual TdxCustomGalleryGroup(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxCustomGalleryGroup();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property System::UnicodeString Caption = {read=GetCaption, write=SetCaption};
	__property TdxCustomGalleryItems* Items = {read=FItems, write=SetItems};
	__property int ItemCount = {read=GetItemCount, nodefault};
	__property TdxCustomGalleryGroupHeader* Header = {read=FHeader, write=SetHeader};
	__property bool ShowCaption = {read=GetShowCaption, write=SetShowCaption, nodefault};
	__property bool Visible = {read=GetVisible, write=SetVisible, nodefault};
private:
	void *__IdxGalleryGroup;	// IdxGalleryGroup 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {250CA14D-1229-45EB-938F-E2C6FED13645}
	operator _di_IdxGalleryGroup()
	{
		_di_IdxGalleryGroup intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxGalleryGroup*(void) { return (IdxGalleryGroup*)&__IdxGalleryGroup; }
	#endif
	
};


class PASCALIMPLEMENTATION TdxCustomGalleryGroups : public Cxclasses::TcxInterfacedComponentCollection
{
	typedef Cxclasses::TcxInterfacedComponentCollection inherited;
	
public:
	TdxCustomGalleryGroup* operator[](int AIndex) { return this->Groups[AIndex]; }
	
private:
	TdxCustomGalleryGroup* __fastcall GetGroup(int AIndex);
	void __fastcall SetGroup(int AIndex, TdxCustomGalleryGroup* AValue);
	System::UnicodeString __fastcall GetDisplayName();
	System::TObject* __fastcall GetInstance();
	_di_IdxGalleryGroup __fastcall AddGalleryGroup();
	_di_IdxGalleryGroup __fastcall GetGalleryGroup(int AIndex);
	_di_IdxGalleryGroup __fastcall InsertGalleryGroup(int AIndex);
	
protected:
	virtual void __fastcall ChangeScale(int M, int D);
	
public:
	HIDESBASE TdxCustomGalleryGroup* __fastcall Add();
	__property TdxCustomGalleryGroup* Groups[int AIndex] = {read=GetGroup, write=SetGroup/*, default*/};
public:
	/* TcxComponentCollection.Create */ inline __fastcall virtual TdxCustomGalleryGroups(System::Classes::TComponent* AParentComponent, Cxclasses::TcxComponentCollectionItemClass AItemClass) : Cxclasses::TcxInterfacedComponentCollection(AParentComponent, AItemClass) { }
	/* TcxComponentCollection.Destroy */ inline __fastcall virtual ~TdxCustomGalleryGroups() { }
	
private:
	void *__IdxGalleryGroups;	// IdxGalleryGroups 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {C853A9B6-66EF-4397-BEEF-5A5F8CA74EDD}
	operator _di_IdxGalleryGroups()
	{
		_di_IdxGalleryGroups intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxGalleryGroups*(void) { return (IdxGalleryGroups*)&__IdxGalleryGroups; }
	#endif
	
};


class PASCALIMPLEMENTATION TdxGalleryItem : public TdxCustomGalleryItem
{
	typedef TdxCustomGalleryItem inherited;
	
private:
	bool FChecked;
	void __fastcall SetChecked(bool AValue);
	
protected:
	virtual Cxclasses::TcxComponentCollection* __fastcall GetCollectionFromParent(System::Classes::TComponent* AParent);
	_di_IdxGallery2 __fastcall GetGallery();
	TdxGalleryGroup* __fastcall GetGroup();
	void __fastcall SetGroup(TdxGalleryGroup* AGroup);
	__property _di_IdxGallery2 Gallery = {read=GetGallery};
	__property TdxGalleryGroup* Group = {read=GetGroup, write=SetGroup};
	
public:
	__property bool Checked = {read=FChecked, write=SetChecked, default=0};
public:
	/* TdxCustomGalleryItem.Create */ inline __fastcall virtual TdxGalleryItem(System::Classes::TComponent* AOwner) : TdxCustomGalleryItem(AOwner) { }
	/* TdxCustomGalleryItem.Destroy */ inline __fastcall virtual ~TdxGalleryItem() { }
	
};


class PASCALIMPLEMENTATION TdxGalleryItems : public TdxCustomGalleryItems
{
	typedef TdxCustomGalleryItems inherited;
	
public:
	TdxGalleryItem* operator[](int AIndex) { return this->Items[AIndex]; }
	
private:
	HIDESBASE TdxGalleryItem* __fastcall GetItem(int AIndex);
	HIDESBASE void __fastcall SetItem(int AIndex, TdxGalleryItem* AValue);
	
protected:
	virtual System::UnicodeString __fastcall GetItemPrefixName();
	
public:
	HIDESBASE TdxGalleryItem* __fastcall Add();
	__property TdxGalleryItem* Items[int AIndex] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TcxComponentCollection.Create */ inline __fastcall virtual TdxGalleryItems(System::Classes::TComponent* AParentComponent, Cxclasses::TcxComponentCollectionItemClass AItemClass) : TdxCustomGalleryItems(AParentComponent, AItemClass) { }
	/* TcxComponentCollection.Destroy */ inline __fastcall virtual ~TdxGalleryItems() { }
	
};


class PASCALIMPLEMENTATION TdxGalleryGroupHeader : public TdxCustomGalleryGroupHeader
{
	typedef TdxCustomGalleryGroupHeader inherited;
	
private:
	System::Classes::TNotifyEvent FOnChange;
	
protected:
	virtual void __fastcall Changed();
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	/* TdxCustomGalleryGroupHeader.Create */ inline __fastcall virtual TdxGalleryGroupHeader(System::Classes::TPersistent* AOwner) : TdxCustomGalleryGroupHeader(AOwner) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxGalleryGroupHeader() { }
	
};


class PASCALIMPLEMENTATION TdxGalleryGroup : public TdxCustomGalleryGroup
{
	typedef TdxCustomGalleryGroup inherited;
	
private:
	TdxGalleryItems* __fastcall GetItems();
	TdxGalleryGroupHeader* __fastcall GetHeader();
	HIDESBASE void __fastcall SetItems(TdxGalleryItems* AValue);
	HIDESBASE void __fastcall SetHeader(TdxGalleryGroupHeader* AValue);
	void __fastcall HeaderChangeHandler(System::TObject* ASender);
	
protected:
	virtual TdxGalleryGroupHeaderClass __fastcall GetGalleryGroupHeaderClass();
	virtual TdxGalleryItemClass __fastcall GetGalleryItemClass();
	virtual TdxGalleryItemsClass __fastcall GetGalleryItemsClass();
	virtual Cxclasses::TcxComponentCollection* __fastcall GetCollectionFromParent(System::Classes::TComponent* AParent);
	_di_IdxGallery2 __fastcall GetGallery();
	__property _di_IdxGallery2 Gallery = {read=GetGallery};
	__property TdxGalleryGroupHeader* Header = {read=GetHeader, write=SetHeader};
	
public:
	__fastcall virtual TdxGalleryGroup(System::Classes::TComponent* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	__property TdxGalleryItems* Items = {read=GetItems, write=SetItems};
public:
	/* TdxCustomGalleryGroup.Destroy */ inline __fastcall virtual ~TdxGalleryGroup() { }
	
};


class PASCALIMPLEMENTATION TdxGalleryGroups : public TdxCustomGalleryGroups
{
	typedef TdxCustomGalleryGroups inherited;
	
public:
	TdxGalleryGroup* operator[](int AIndex) { return this->Groups[AIndex]; }
	
private:
	HIDESBASE TdxGalleryGroup* __fastcall GetGroup(int AIndex);
	HIDESBASE void __fastcall SetGroup(int AIndex, TdxGalleryGroup* AValue);
	
protected:
	virtual System::UnicodeString __fastcall GetItemPrefixName();
	
public:
	HIDESBASE TdxGalleryGroup* __fastcall Add();
	bool __fastcall FindByCaption(const System::UnicodeString ACaption, /* out */ TdxGalleryGroup* &AGroup);
	__property TdxGalleryGroup* Groups[int AIndex] = {read=GetGroup, write=SetGroup/*, default*/};
public:
	/* TcxComponentCollection.Create */ inline __fastcall virtual TdxGalleryGroups(System::Classes::TComponent* AParentComponent, Cxclasses::TcxComponentCollectionItemClass AItemClass) : TdxCustomGalleryGroups(AParentComponent, AItemClass) { }
	/* TcxComponentCollection.Destroy */ inline __fastcall virtual ~TdxGalleryGroups() { }
	
};


class PASCALIMPLEMENTATION TdxCustomGallery : public Dxcoreclasses::TcxOwnedInterfacedPersistent
{
	typedef Dxcoreclasses::TcxOwnedInterfacedPersistent inherited;
	
private:
	TdxGalleryGroups* FGroups;
	TdxGalleryItemCheckMode FItemCheckMode;
	TdxGalleryChangeEvent FOnChange;
	TdxGalleryItemEvent FOnItemClick;
	TdxGalleryItemCheckMode __fastcall GetItemCheckMode();
	void __fastcall SetItemCheckMode(TdxGalleryItemCheckMode AValue);
	TdxGalleryGroups* __fastcall GetGroups();
	void __fastcall SetGroups(TdxGalleryGroups* AValue);
	TdxGalleryChangeEvent __fastcall GetOnChange();
	void __fastcall SetOnChange(TdxGalleryChangeEvent AValue);
	TdxGalleryItemEvent __fastcall GetOnItemClick();
	void __fastcall SetOnItemClick(TdxGalleryItemEvent AValue);
	void __fastcall GroupsChangeHandler(System::TObject* Sender, Cxclasses::TcxComponentCollectionItem* AItem, Cxclasses::TcxComponentCollectionNotification AAction);
	
protected:
	virtual TdxGalleryGroupClass __fastcall GetGroupClass();
	virtual TdxGalleryGroupsClass __fastcall GetGroupsClass();
	void __fastcall CheckItem(TdxGalleryItem* AItem, bool AValue);
	void __fastcall Changed(TdxGalleryChangeType AType);
	virtual void __fastcall ChangeScale(int M, int D);
	void __fastcall DoClickItem(TdxGalleryItem* AItem);
	System::TObject* __fastcall GetInstance();
	System::Classes::TComponent* __fastcall GetParentComponent();
	TdxGalleryCustomizationActions __fastcall GetAllowedCustomizationActions();
	_di_IdxGalleryGroups __fastcall GetGalleryGroups();
	__property TdxGalleryChangeEvent OnChange = {read=GetOnChange, write=SetOnChange};
	__property TdxGalleryItemEvent OnItemClick = {read=GetOnItemClick, write=SetOnItemClick};
	
public:
	__fastcall virtual TdxCustomGallery(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TdxCustomGallery();
	void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	void __fastcall ClickItem(TdxGalleryItem* AItem);
	void __fastcall GetAllItems(System::Classes::TList* AList);
	TdxGalleryItem* __fastcall GetCheckedItem();
	TdxGalleryItem* __fastcall GetFirstItem();
	TdxGalleryItem* __fastcall GetFirstVisibleItem();
	void __fastcall GetCheckedItems(System::Classes::TList* AList);
	void __fastcall UncheckAll();
	TdxGalleryItem* __fastcall FindItemByTag(NativeInt ATag);
	__property TdxGalleryItemCheckMode ItemCheckMode = {read=GetItemCheckMode, write=SetItemCheckMode, default=0};
	__property TdxGalleryGroups* Groups = {read=GetGroups, write=SetGroups};
private:
	void *__IdxGallery2;	// IdxGallery2 
	void *__IdxGallery;	// IdxGallery 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {418FD781-56A7-4EA6-8720-1D0D479EBC2E}
	operator _di_IdxGallery2()
	{
		_di_IdxGallery2 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxGallery2*(void) { return (IdxGallery2*)&__IdxGallery2; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B652EE21-71B8-4C82-9D33-BA53365A3627}
	operator _di_IdxGallery()
	{
		_di_IdxGallery intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxGallery*(void) { return (IdxGallery*)&__IdxGallery; }
	#endif
	
};


class PASCALIMPLEMENTATION TdxGallery : public TdxCustomGallery
{
	typedef TdxCustomGallery inherited;
	
public:
	/* TdxCustomGallery.Create */ inline __fastcall virtual TdxGallery(System::Classes::TPersistent* AOwner) : TdxCustomGallery(AOwner) { }
	/* TdxCustomGallery.Destroy */ inline __fastcall virtual ~TdxGallery() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dxgallery */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXGALLERY)
using namespace Dxgallery;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxgalleryHPP
