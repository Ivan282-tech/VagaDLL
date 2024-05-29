// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxSkinsCore.pas' rev: 35.00 (Windows)

#ifndef DxskinscoreHPP
#define DxskinscoreHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Math.hpp>
#include <cxGraphics.hpp>
#include <cxGeometry.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Generics.Defaults.hpp>
#include <Vcl.Forms.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.Contnrs.hpp>
#include <cxClasses.hpp>
#include <cxLookAndFeels.hpp>
#include <dxGDIPlusAPI.hpp>
#include <dxGDIPlusClasses.hpp>
#include <dxSkinsStrs.hpp>
#include <dxOffice11.hpp>
#include <dxCore.hpp>
#include <dxCoreClasses.hpp>
#include <dxCoreGraphics.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <dxSmartImage.hpp>
#include <dxDPIAwareUtils.hpp>
#include <cxCustomCanvas.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxskinscore
{
//-- forward type declarations -----------------------------------------------
struct TdxSkinHeader;
class DELPHICLASS EdxSkinError;
__interface DELPHIINTERFACE IdxSkinInfo;
typedef System::DelphiInterface<IdxSkinInfo> _di_IdxSkinInfo;
__interface DELPHIINTERFACE IdxSkinChangeListener;
typedef System::DelphiInterface<IdxSkinChangeListener> _di_IdxSkinChangeListener;
__interface DELPHIINTERFACE IdxSkinChangeListener2;
typedef System::DelphiInterface<IdxSkinChangeListener2> _di_IdxSkinChangeListener2;
__interface DELPHIINTERFACE IdxSkinColorPalette;
typedef System::DelphiInterface<IdxSkinColorPalette> _di_IdxSkinColorPalette;
class DELPHICLASS TdxSkinCustomObject;
class DELPHICLASS TdxSkinCustomObjectList;
class DELPHICLASS TdxSkinProperties;
class DELPHICLASS TdxSkinColors;
class DELPHICLASS TdxSkinControlGroups;
class DELPHICLASS TdxSkinElements;
struct TdxSkinColorValue;
class DELPHICLASS TdxSkinPersistent;
class DELPHICLASS TdxSkinProperty;
class DELPHICLASS TdxSkinIntegerProperty;
class DELPHICLASS TdxSkinBooleanProperty;
class DELPHICLASS TdxSkinColor;
class DELPHICLASS TdxSkinAlphaColor;
class DELPHICLASS TdxSkinRectProperty;
class DELPHICLASS TdxSkinSizeProperty;
class DELPHICLASS TdxSkinBorder;
class DELPHICLASS TdxSkinBorders;
class DELPHICLASS TdxSkinStringProperty;
class DELPHICLASS TdxSkinWideStringProperty;
class DELPHICLASS TdxSkinAlternateImageAttributes;
class DELPHICLASS TdxSkinCustomListProperty;
class DELPHICLASS TdxSkinColorPalette;
class DELPHICLASS TdxSkinColorPalettes;
class DELPHICLASS TdxSkinColorPalettePreview;
class DELPHICLASS TdxSkinControlGroup;
class DELPHICLASS TdxSkinImage;
class DELPHICLASS TdxSkinGlyph;
class DELPHICLASS TdxSkinElement;
class DELPHICLASS TdxSkinEmptyElement;
class DELPHICLASS TdxSkinElementCache;
class DELPHICLASS TdxSkinElementCacheList;
class DELPHICLASS TdxSkinBinaryWriter;
class DELPHICLASS TdxSkinBinaryReader;
class DELPHICLASS TdxSkinDetails;
class DELPHICLASS TdxSkin;
//-- type declarations -------------------------------------------------------
typedef double TdxSkinVersion;

typedef System::StaticArray<char, 6> TdxSkinSignature;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TdxSkinHeader
{
public:
	int Reserved;
	TdxSkinSignature Signature;
	double Version;
};
#pragma pack(pop)


typedef System::TMetaClass* TdxSkinControlGroupClass;

typedef System::TMetaClass* TdxSkinCustomObjectClass;

typedef System::TMetaClass* TdxSkinElementClass;

typedef System::TMetaClass* TdxSkinPersistentClass;

typedef System::TMetaClass* TdxSkinPropertyClass;

enum DECLSPEC_DENUM TdxSkinGradientMode : unsigned char { gmHorizontal, gmVertical, gmForwardDiagonal, gmBackwardDiagonal };

enum DECLSPEC_DENUM TdxSkinIconSize : unsigned char { sis16, sis48 };

enum DECLSPEC_DENUM TdxSkinImageSet : unsigned char { imsDefault, imsOriginal, imsAlternate };

enum DECLSPEC_DENUM TdxSkinObjectState : unsigned char { sosUnassigned, sosUnused };

typedef System::Set<TdxSkinObjectState, TdxSkinObjectState::sosUnassigned, TdxSkinObjectState::sosUnused> TdxSkinObjectStates;

enum DECLSPEC_DENUM TdxSkinChange : unsigned char { scStruct, scContent, scDetails };

typedef System::Set<TdxSkinChange, TdxSkinChange::scStruct, TdxSkinChange::scDetails> TdxSkinChanges;

typedef void __fastcall (__closure *TdxSkinChangeNotify)(System::TObject* Sender, TdxSkinChanges AChanges);

#pragma pack(push,4)
class PASCALIMPLEMENTATION EdxSkinError : public Dxcore::EdxException
{
	typedef Dxcore::EdxException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EdxSkinError(const System::UnicodeString Msg) : Dxcore::EdxException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EdxSkinError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Dxcore::EdxException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EdxSkinError(NativeUInt Ident)/* overload */ : Dxcore::EdxException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EdxSkinError(System::PResStringRec ResStringRec)/* overload */ : Dxcore::EdxException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EdxSkinError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Dxcore::EdxException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EdxSkinError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Dxcore::EdxException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EdxSkinError(const System::UnicodeString Msg, int AHelpContext) : Dxcore::EdxException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EdxSkinError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Dxcore::EdxException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EdxSkinError(NativeUInt Ident, int AHelpContext)/* overload */ : Dxcore::EdxException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EdxSkinError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Dxcore::EdxException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EdxSkinError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Dxcore::EdxException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EdxSkinError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Dxcore::EdxException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EdxSkinError() { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{97D85495-E631-413C-8DBC-BE7B784A9EA0}") IdxSkinInfo  : public System::IInterface 
{
	virtual TdxSkin* __fastcall GetSkin() = 0 ;
};

__interface  INTERFACE_UUID("{28681774-0475-43AE-8704-1C904D294742}") IdxSkinChangeListener  : public System::IInterface 
{
	virtual void __fastcall SkinChanged(TdxSkin* Sender) = 0 ;
};

__interface  INTERFACE_UUID("{0D7C0942-D2C4-4579-AD03-A3CB5BBFC5AF}") IdxSkinChangeListener2  : public System::IInterface 
{
	virtual void __fastcall SkinChanged(TdxSkin* ASkin, TdxSkinChanges AChanges) = 0 ;
};

__interface  INTERFACE_UUID("{A7511E95-1577-41D3-ACB8-12F34E79AF1B}") IdxSkinColorPalette  : public System::IInterface 
{
	virtual bool __fastcall GetColor(const System::UnicodeString AKey, /* out */ System::Uitypes::TColor &AColor) = 0 ;
};

class PASCALIMPLEMENTATION TdxSkinCustomObject : public System::Classes::TInterfacedPersistent
{
	typedef System::Classes::TInterfacedPersistent inherited;
	
private:
	TdxSkinChanges FChanges;
	System::UnicodeString FName;
	System::Classes::TPersistent* FOwner;
	TdxSkinObjectStates FState;
	NativeInt FTag;
	int FUpdateCount;
	TdxSkinChangeNotify FOnChange;
	void __fastcall SetName(const System::UnicodeString AValue);
	
protected:
	virtual void __fastcall AssignCore(System::Classes::TPersistent* Source);
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	virtual void __fastcall Changed(TdxSkinChanges AChanges);
	virtual void __fastcall DataRead(System::Classes::TStream* Stream, const double AVersion);
	virtual void __fastcall DataWrite(System::Classes::TStream* Stream);
	virtual void __fastcall DoChanged(TdxSkinChanges AChanges);
	virtual void __fastcall FlushCache();
	__property int UpdateCount = {read=FUpdateCount, nodefault};
	
public:
	__fastcall virtual TdxSkinCustomObject(System::Classes::TPersistent* AOwner, const System::UnicodeString AName);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source) _FINAL_ATTRIBUTE;
	void __fastcall BeginUpdate();
	void __fastcall CancelUpdate();
	void __fastcall EndUpdate();
	__property TdxSkinObjectStates State = {read=FState, write=FState, nodefault};
	__property NativeInt Tag = {read=FTag, write=FTag, nodefault};
	
__published:
	__property System::UnicodeString Name = {read=FName, write=SetName};
	__property TdxSkinChangeNotify OnChange = {read=FOnChange, write=FOnChange};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxSkinCustomObject() { }
	
};


class PASCALIMPLEMENTATION TdxSkinCustomObjectList : public Cxclasses::TcxObjectList
{
	typedef Cxclasses::TcxObjectList inherited;
	
private:
	TdxSkinChanges FChanges;
	System::Classes::TPersistent* FOwner;
	bool FSorted;
	int FUpdateCount;
	TdxSkinChangeNotify FOnChange;
	static int __fastcall CompareByName(TdxSkinCustomObject* AItem1, TdxSkinCustomObject* AItem2);
	
protected:
	virtual void __fastcall Changed(TdxSkinChanges AChanges);
	virtual void __fastcall Notify(void * Ptr, System::Classes::TListNotification Action);
	void __fastcall SubItemChanged(System::TObject* ASender, TdxSkinChanges AChanges);
	void __fastcall FlushCache();
	virtual void __fastcall SortChildren();
	void __fastcall DataRead(System::Classes::TStream* AStream, const double AVersion);
	virtual void __fastcall DataReadItem(System::Classes::TStream* AStream, const double AVersion) = 0 ;
	void __fastcall DataWrite(System::Classes::TStream* AStream);
	virtual void __fastcall DataWriteItem(System::Classes::TStream* AStream, TdxSkinCustomObject* AItem) = 0 ;
	__property TdxSkinChangeNotify OnChange = {read=FOnChange, write=FOnChange};
	
public:
	__fastcall virtual TdxSkinCustomObjectList(System::Classes::TPersistent* AOwner);
	__fastcall TdxSkinCustomObjectList(System::Classes::TPersistent* AOwner, TdxSkinChangeNotify AChangeHandler);
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	virtual void __fastcall Clear();
	HIDESBASE void __fastcall Exchange(int Index1, int Index2);
	bool __fastcall Find(const System::UnicodeString AName, void *AObject);
	HIDESBASE int __fastcall IndexOf(const System::UnicodeString AName)/* overload */;
	HIDESBASE void __fastcall Sort(bool ASortChildren = false);
	__property System::Classes::TPersistent* Owner = {read=FOwner};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TdxSkinCustomObjectList() { }
	
};


class PASCALIMPLEMENTATION TdxSkinProperties : public TdxSkinCustomObjectList
{
	typedef TdxSkinCustomObjectList inherited;
	
public:
	TdxSkinProperty* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TdxSkinProperty* __fastcall GetItem(int Index);
	
protected:
	virtual void __fastcall DataReadItem(System::Classes::TStream* AStream, const double AVersion);
	virtual void __fastcall DataWriteItem(System::Classes::TStream* AStream, TdxSkinCustomObject* AItem);
	
public:
	HIDESBASE TdxSkinProperty* __fastcall Add(const System::UnicodeString AName, TdxSkinPropertyClass AClass);
	HIDESBASE void __fastcall Assign(TdxSkinProperties* ASource);
	bool __fastcall Compare(TdxSkinProperties* AProperties);
	__property TdxSkinProperty* Items[int Index] = {read=GetItem/*, default*/};
public:
	/* TdxSkinCustomObjectList.Create */ inline __fastcall virtual TdxSkinProperties(System::Classes::TPersistent* AOwner) : TdxSkinCustomObjectList(AOwner) { }
	/* TdxSkinCustomObjectList.CreateEx */ inline __fastcall TdxSkinProperties(System::Classes::TPersistent* AOwner, TdxSkinChangeNotify AChangeHandler) : TdxSkinCustomObjectList(AOwner, AChangeHandler) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TdxSkinProperties() { }
	
};


class PASCALIMPLEMENTATION TdxSkinColors : public TdxSkinProperties
{
	typedef TdxSkinProperties inherited;
	
public:
	TdxSkinColor* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TdxSkinColor* __fastcall GetItem(int Index);
	
public:
	HIDESBASE TdxSkinColor* __fastcall Add(const System::UnicodeString AName, System::Uitypes::TColor AValue);
	__property TdxSkinColor* Items[int Index] = {read=GetItem/*, default*/};
public:
	/* TdxSkinCustomObjectList.Create */ inline __fastcall virtual TdxSkinColors(System::Classes::TPersistent* AOwner) : TdxSkinProperties(AOwner) { }
	/* TdxSkinCustomObjectList.CreateEx */ inline __fastcall TdxSkinColors(System::Classes::TPersistent* AOwner, TdxSkinChangeNotify AChangeHandler) : TdxSkinProperties(AOwner, AChangeHandler) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TdxSkinColors() { }
	
};


class PASCALIMPLEMENTATION TdxSkinControlGroups : public TdxSkinCustomObjectList
{
	typedef TdxSkinCustomObjectList inherited;
	
public:
	TdxSkinControlGroup* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TdxSkinControlGroup* __fastcall GetItem(int Index);
	
public:
	virtual void __fastcall DataReadItem(System::Classes::TStream* AStream, const double AVersion);
	virtual void __fastcall DataWriteItem(System::Classes::TStream* AStream, TdxSkinCustomObject* AItem);
	virtual void __fastcall SortChildren();
	HIDESBASE TdxSkinControlGroup* __fastcall Add(const System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TdxSkinControlGroups* ASource);
	void __fastcall Dormant();
	__property TdxSkinControlGroup* Items[int Index] = {read=GetItem/*, default*/};
public:
	/* TdxSkinCustomObjectList.Create */ inline __fastcall virtual TdxSkinControlGroups(System::Classes::TPersistent* AOwner) : TdxSkinCustomObjectList(AOwner) { }
	/* TdxSkinCustomObjectList.CreateEx */ inline __fastcall TdxSkinControlGroups(System::Classes::TPersistent* AOwner, TdxSkinChangeNotify AChangeHandler) : TdxSkinCustomObjectList(AOwner, AChangeHandler) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TdxSkinControlGroups() { }
	
};


class PASCALIMPLEMENTATION TdxSkinElements : public TdxSkinCustomObjectList
{
	typedef TdxSkinCustomObjectList inherited;
	
public:
	TdxSkinElement* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TdxSkinElement* __fastcall GetItem(int Index);
	
protected:
	virtual void __fastcall DataReadItem(System::Classes::TStream* AStream, const double AVersion);
	virtual void __fastcall DataWriteItem(System::Classes::TStream* AStream, TdxSkinCustomObject* AItem);
	virtual void __fastcall SortChildren();
	
public:
	HIDESBASE TdxSkinElement* __fastcall Add(const System::UnicodeString AName, TdxSkinElementClass AClass);
	HIDESBASE void __fastcall Assign(TdxSkinElements* ASource);
	void __fastcall Dormant();
	__property TdxSkinElement* Items[int Index] = {read=GetItem/*, default*/};
public:
	/* TdxSkinCustomObjectList.Create */ inline __fastcall virtual TdxSkinElements(System::Classes::TPersistent* AOwner) : TdxSkinCustomObjectList(AOwner) { }
	/* TdxSkinCustomObjectList.CreateEx */ inline __fastcall TdxSkinElements(System::Classes::TPersistent* AOwner, TdxSkinChangeNotify AChangeHandler) : TdxSkinCustomObjectList(AOwner, AChangeHandler) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TdxSkinElements() { }
	
};


#pragma pack(push,1)
struct DECLSPEC_DRECORD TdxSkinColorValue
{
private:
	static const int clUnassigned = int(0x1ffffffe);
	
	System::Uitypes::TColor FDefaultValue;
	TdxSkinCustomObject* FOwner;
	System::Uitypes::TColor FValue;
	System::UnicodeString FValueReference;
	System::Uitypes::TColor __fastcall GetValue();
	void __fastcall SetValue(const System::Uitypes::TColor AValue);
	void __fastcall SetValueReference(const System::UnicodeString AValue);
	
private:
	void __fastcall Changed();
	void __fastcall DataRead(System::Classes::TStream* AStream, const double AVersion);
	void __fastcall DataWrite(System::Classes::TStream* AStream);
	
public:
	__fastcall TdxSkinColorValue(TdxSkinCustomObject* AOwner, System::Uitypes::TColor ADefaultValue);
	void __fastcall Assign(const TdxSkinColorValue &ASource);
	bool __fastcall Equals(const TdxSkinColorValue &ASource);
	bool __fastcall GetColorPalette(/* out */ _di_IdxSkinColorPalette &APalette);
	void __fastcall FlushCache();
	void __fastcall ResetToDefaults();
	System::UnicodeString __fastcall ToString();
	__property System::Uitypes::TColor Value = {read=GetValue, write=SetValue};
	__property System::UnicodeString ValueReference = {read=FValueReference, write=SetValueReference};
	TdxSkinColorValue() {}
};
#pragma pack(pop)


class PASCALIMPLEMENTATION TdxSkinPersistent : public TdxSkinCustomObject
{
	typedef TdxSkinCustomObject inherited;
	
private:
	TdxSkinProperty* __fastcall GetProperty(int Index);
	int __fastcall GetPropertyCount();
	
protected:
	bool FModified;
	TdxSkinProperties* FProperties;
	virtual void __fastcall AssignCore(System::Classes::TPersistent* Source);
	virtual void __fastcall Changed(TdxSkinChanges AChanges) _FINAL_ATTRIBUTE;
	virtual void __fastcall FlushCache();
	void __fastcall SubItemChanged(System::TObject* ASender, TdxSkinChanges AChanges);
	
public:
	__fastcall virtual TdxSkinPersistent(System::Classes::TPersistent* AOwner, const System::UnicodeString AName);
	__fastcall virtual ~TdxSkinPersistent();
	TdxSkinProperty* __fastcall AddProperty(const System::UnicodeString AName, TdxSkinPropertyClass APropertyClass);
	TdxSkinBooleanProperty* __fastcall AddPropertyBool(const System::UnicodeString AName, bool AValue);
	TdxSkinColor* __fastcall AddPropertyColor(const System::UnicodeString AName, System::Uitypes::TColor AValue);
	TdxSkinIntegerProperty* __fastcall AddPropertyInteger(const System::UnicodeString AName, int AValue);
	virtual void __fastcall Clear();
	virtual void __fastcall DeleteProperty(TdxSkinProperty* const AProperty)/* overload */;
	void __fastcall DeleteProperty(const System::UnicodeString APropertyName)/* overload */;
	void __fastcall ExchangeProperty(int AIndex1, int AIndex2);
	TdxSkinProperty* __fastcall GetPropertyByName(const System::UnicodeString AName)/* overload */;
	bool __fastcall GetPropertyByName(const System::UnicodeString AName, /* out */ TdxSkinProperty* &AProperty)/* overload */;
	virtual void __fastcall Sort(bool ASortChildren = false);
	__property bool Modified = {read=FModified, write=FModified, nodefault};
	__property int PropertyCount = {read=GetPropertyCount, nodefault};
	__property TdxSkinProperty* Properties[int Index] = {read=GetProperty};
};


class PASCALIMPLEMENTATION TdxSkinProperty : public TdxSkinCustomObject
{
	typedef TdxSkinCustomObject inherited;
	
public:
	__classmethod void __fastcall Register();
	__classmethod void __fastcall Unregister();
	__classmethod virtual System::UnicodeString __fastcall Description();
	virtual bool __fastcall Compare(TdxSkinProperty* AProperty);
public:
	/* TdxSkinCustomObject.Create */ inline __fastcall virtual TdxSkinProperty(System::Classes::TPersistent* AOwner, const System::UnicodeString AName) : TdxSkinCustomObject(AOwner, AName) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxSkinProperty() { }
	
};


class PASCALIMPLEMENTATION TdxSkinIntegerProperty : public TdxSkinProperty
{
	typedef TdxSkinProperty inherited;
	
private:
	int FValue;
	void __fastcall SetValue(int AValue);
	
protected:
	virtual void __fastcall AssignCore(System::Classes::TPersistent* Source);
	virtual void __fastcall DataRead(System::Classes::TStream* Stream, const double AVersion);
	virtual void __fastcall DataWrite(System::Classes::TStream* Stream);
	
public:
	virtual bool __fastcall Compare(TdxSkinProperty* AProperty);
	
__published:
	__property int Value = {read=FValue, write=SetValue, default=0};
public:
	/* TdxSkinCustomObject.Create */ inline __fastcall virtual TdxSkinIntegerProperty(System::Classes::TPersistent* AOwner, const System::UnicodeString AName) : TdxSkinProperty(AOwner, AName) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxSkinIntegerProperty() { }
	
};


class PASCALIMPLEMENTATION TdxSkinBooleanProperty : public TdxSkinProperty
{
	typedef TdxSkinProperty inherited;
	
private:
	bool FValue;
	void __fastcall SetValue(bool AValue);
	
protected:
	virtual void __fastcall AssignCore(System::Classes::TPersistent* Source);
	virtual void __fastcall DataRead(System::Classes::TStream* Stream, const double AVersion);
	virtual void __fastcall DataWrite(System::Classes::TStream* Stream);
	
public:
	virtual bool __fastcall Compare(TdxSkinProperty* AProperty);
	
__published:
	__property bool Value = {read=FValue, write=SetValue, default=0};
public:
	/* TdxSkinCustomObject.Create */ inline __fastcall virtual TdxSkinBooleanProperty(System::Classes::TPersistent* AOwner, const System::UnicodeString AName) : TdxSkinProperty(AOwner, AName) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxSkinBooleanProperty() { }
	
};


typedef System::TMetaClass* TdxSkinColorClass;

class PASCALIMPLEMENTATION TdxSkinColor : public TdxSkinProperty
{
	typedef TdxSkinProperty inherited;
	
private:
	TdxSkinColorValue FValue;
	System::Uitypes::TColor __fastcall GetValue();
	System::UnicodeString __fastcall GetValueReference();
	void __fastcall SetValue(const System::Uitypes::TColor AValue);
	void __fastcall SetValueReference(const System::UnicodeString Value);
	
protected:
	virtual void __fastcall AssignCore(System::Classes::TPersistent* Source);
	virtual void __fastcall DataRead(System::Classes::TStream* Stream, const double AVersion);
	virtual void __fastcall DataWrite(System::Classes::TStream* Stream);
	virtual void __fastcall FlushCache();
	virtual Dxcoregraphics::TdxAlphaColor __fastcall GetValueAsAlphaColor();
	
public:
	__fastcall virtual TdxSkinColor(System::Classes::TPersistent* AOwner, const System::UnicodeString AName);
	virtual bool __fastcall Compare(TdxSkinProperty* AProperty);
	virtual System::UnicodeString __fastcall ToString();
	__property Dxcoregraphics::TdxAlphaColor ValueAsAlphaColor = {read=GetValueAsAlphaColor, nodefault};
	
__published:
	__property System::Uitypes::TColor Value = {read=GetValue, write=SetValue, nodefault};
	__property System::UnicodeString ValueReference = {read=GetValueReference, write=SetValueReference};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxSkinColor() { }
	
};


class PASCALIMPLEMENTATION TdxSkinAlphaColor : public TdxSkinColor
{
	typedef TdxSkinColor inherited;
	
private:
	System::Byte FValueAlpha;
	void __fastcall SetValueAlpha(const System::Byte Value);
	
protected:
	virtual void __fastcall AssignCore(System::Classes::TPersistent* Source);
	virtual void __fastcall DataRead(System::Classes::TStream* Stream, const double AVersion);
	virtual void __fastcall DataWrite(System::Classes::TStream* Stream);
	virtual Dxcoregraphics::TdxAlphaColor __fastcall GetValueAsAlphaColor();
	
public:
	__fastcall virtual TdxSkinAlphaColor(System::Classes::TPersistent* AOwner, const System::UnicodeString AName);
	virtual bool __fastcall Compare(TdxSkinProperty* AProperty);
	virtual System::UnicodeString __fastcall ToString();
	
__published:
	__property System::Byte ValueAlpha = {read=FValueAlpha, write=SetValueAlpha, default=255};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxSkinAlphaColor() { }
	
};


class PASCALIMPLEMENTATION TdxSkinRectProperty : public TdxSkinProperty
{
	typedef TdxSkinProperty inherited;
	
private:
	Cxgeometry::TcxRect* FValue;
	void __fastcall SetValue(Cxgeometry::TcxRect* Value);
	void __fastcall InternalHandler(System::TObject* Sender);
	
protected:
	virtual void __fastcall AssignCore(System::Classes::TPersistent* Source);
	virtual void __fastcall DataRead(System::Classes::TStream* Stream, const double AVersion);
	virtual void __fastcall DataWrite(System::Classes::TStream* Stream);
	int __fastcall GetValueByIndex(int Index);
	void __fastcall SetValueByIndex(int Index, int Value);
	
public:
	__fastcall virtual TdxSkinRectProperty(System::Classes::TPersistent* AOwner, const System::UnicodeString AName);
	__fastcall virtual ~TdxSkinRectProperty();
	virtual bool __fastcall Compare(TdxSkinProperty* AProperty);
	virtual System::UnicodeString __fastcall ToString();
	__property Cxgeometry::TcxRect* Value = {read=FValue, write=SetValue};
	
__published:
	__property int Left = {read=GetValueByIndex, write=SetValueByIndex, index=0, default=0};
	__property int Top = {read=GetValueByIndex, write=SetValueByIndex, index=1, default=0};
	__property int Right = {read=GetValueByIndex, write=SetValueByIndex, index=2, default=0};
	__property int Bottom = {read=GetValueByIndex, write=SetValueByIndex, index=3, default=0};
};


class PASCALIMPLEMENTATION TdxSkinSizeProperty : public TdxSkinProperty
{
	typedef TdxSkinProperty inherited;
	
private:
	System::Types::TSize FValue;
	void __fastcall SetValue(const System::Types::TSize &AValue);
	
protected:
	virtual void __fastcall AssignCore(System::Classes::TPersistent* Source);
	virtual void __fastcall DataRead(System::Classes::TStream* Stream, const double AVersion);
	virtual void __fastcall DataWrite(System::Classes::TStream* Stream);
	
public:
	virtual bool __fastcall Compare(TdxSkinProperty* AProperty);
	int __fastcall GetValueByIndex(int Index);
	void __fastcall SetValueByIndex(int Index, int Value);
	virtual System::UnicodeString __fastcall ToString();
	__property System::Types::TSize Value = {read=FValue, write=SetValue};
	
__published:
	__property int cx = {read=GetValueByIndex, write=SetValueByIndex, index=0, default=0};
	__property int cy = {read=GetValueByIndex, write=SetValueByIndex, index=1, default=0};
public:
	/* TdxSkinCustomObject.Create */ inline __fastcall virtual TdxSkinSizeProperty(System::Classes::TPersistent* AOwner, const System::UnicodeString AName) : TdxSkinProperty(AOwner, AName) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxSkinSizeProperty() { }
	
};


class PASCALIMPLEMENTATION TdxSkinBorder : public TdxSkinProperty
{
	typedef TdxSkinProperty inherited;
	
private:
	TdxSkinColorValue FColor;
	Cxgeometry::TcxBorder FKind;
	int FThin;
	System::Uitypes::TColor __fastcall GetColor();
	System::UnicodeString __fastcall GetColorReference();
	int __fastcall GetContentMargin();
	void __fastcall SetColor(System::Uitypes::TColor AValue);
	void __fastcall SetColorReference(const System::UnicodeString Value);
	void __fastcall SetThin(int AValue);
	
protected:
	virtual void __fastcall AssignCore(System::Classes::TPersistent* Source);
	virtual void __fastcall DataRead(System::Classes::TStream* Stream, const double AVersion);
	virtual void __fastcall DataWrite(System::Classes::TStream* Stream);
	virtual void __fastcall FlushCache();
	
public:
	__fastcall virtual TdxSkinBorder(System::Classes::TPersistent* AOwner, Cxgeometry::TcxBorder AKind);
	virtual bool __fastcall Compare(TdxSkinProperty* AProperty);
	virtual void __fastcall Draw(HDC DC, const System::Types::TRect &ABounds);
	virtual void __fastcall DrawEx(Dxgdiplusclasses::TdxGPCanvas* ACanvas, const System::Types::TRect &ABounds);
	virtual void __fastcall ResetToDefaults();
	virtual System::UnicodeString __fastcall ToString();
	__property int ContentMargin = {read=GetContentMargin, nodefault};
	__property Cxgeometry::TcxBorder Kind = {read=FKind, nodefault};
	
__published:
	__property System::Uitypes::TColor Color = {read=GetColor, write=SetColor, default=536870911};
	__property System::UnicodeString ColorReference = {read=GetColorReference, write=SetColorReference};
	__property int Thin = {read=FThin, write=SetThin, default=1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxSkinBorder() { }
	
};


class PASCALIMPLEMENTATION TdxSkinBorders : public TdxSkinProperty
{
	typedef TdxSkinProperty inherited;
	
public:
	TdxSkinBorder* operator[](Cxgeometry::TcxBorder AKind) { return this->Items[AKind]; }
	
private:
	System::StaticArray<TdxSkinBorder*, 4> FBorders;
	TdxSkinBorder* __fastcall GetBorder(Cxgeometry::TcxBorder ABorder);
	TdxSkinBorder* __fastcall GetBorderByIndex(int Index);
	System::Types::TRect __fastcall GetContentMargins();
	void __fastcall SetBorderByIndex(int Index, TdxSkinBorder* AValue);
	void __fastcall SubItemChanged(System::TObject* ASender, TdxSkinChanges AChanges);
	
protected:
	virtual void __fastcall AssignCore(System::Classes::TPersistent* ASource);
	void __fastcall CreateBorders();
	void __fastcall DeleteBorders();
	virtual void __fastcall DataRead(System::Classes::TStream* AStream, const double AVersion);
	virtual void __fastcall DataWrite(System::Classes::TStream* AStream);
	virtual void __fastcall FlushCache();
	
public:
	__fastcall virtual TdxSkinBorders(System::Classes::TPersistent* AOwner, const System::UnicodeString AName);
	__fastcall virtual ~TdxSkinBorders();
	virtual bool __fastcall Compare(TdxSkinProperty* AProperty);
	virtual void __fastcall Draw(Dxgdiplusclasses::TdxGPCanvas* ACanvas, const System::Types::TRect &ABounds);
	virtual void __fastcall ResetToDefaults();
	__property System::Types::TRect ContentMargins = {read=GetContentMargins};
	__property TdxSkinBorder* Items[Cxgeometry::TcxBorder AKind] = {read=GetBorder/*, default*/};
	
__published:
	__property TdxSkinBorder* Left = {read=GetBorderByIndex, write=SetBorderByIndex, index=0};
	__property TdxSkinBorder* Top = {read=GetBorderByIndex, write=SetBorderByIndex, index=1};
	__property TdxSkinBorder* Right = {read=GetBorderByIndex, write=SetBorderByIndex, index=2};
	__property TdxSkinBorder* Bottom = {read=GetBorderByIndex, write=SetBorderByIndex, index=3};
};


class PASCALIMPLEMENTATION TdxSkinStringProperty : public TdxSkinProperty
{
	typedef TdxSkinProperty inherited;
	
private:
	System::UnicodeString FValue;
	void __fastcall SetValue(const System::UnicodeString AValue);
	
protected:
	virtual void __fastcall AssignCore(System::Classes::TPersistent* Source);
	virtual void __fastcall DataRead(System::Classes::TStream* Stream, const double AVersion);
	virtual void __fastcall DataWrite(System::Classes::TStream* Stream);
	
public:
	virtual bool __fastcall Compare(TdxSkinProperty* AProperty);
	
__published:
	__property System::UnicodeString Value = {read=FValue, write=SetValue};
public:
	/* TdxSkinCustomObject.Create */ inline __fastcall virtual TdxSkinStringProperty(System::Classes::TPersistent* AOwner, const System::UnicodeString AName) : TdxSkinProperty(AOwner, AName) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxSkinStringProperty() { }
	
};


class PASCALIMPLEMENTATION TdxSkinWideStringProperty : public TdxSkinStringProperty
{
	typedef TdxSkinStringProperty inherited;
	
protected:
	virtual void __fastcall AssignCore(System::Classes::TPersistent* Source);
	virtual void __fastcall DataRead(System::Classes::TStream* Stream, const double AVersion);
	virtual void __fastcall DataWrite(System::Classes::TStream* Stream);
public:
	/* TdxSkinCustomObject.Create */ inline __fastcall virtual TdxSkinWideStringProperty(System::Classes::TPersistent* AOwner, const System::UnicodeString AName) : TdxSkinStringProperty(AOwner, AName) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxSkinWideStringProperty() { }
	
};


class PASCALIMPLEMENTATION TdxSkinAlternateImageAttributes : public TdxSkinProperty
{
	typedef TdxSkinProperty inherited;
	
private:
	System::Byte FAlpha;
	TdxSkinBorders* FBorders;
	TdxSkinBorders* FBordersInner;
	Cxgeometry::TcxRect* FContentOffsets;
	TdxSkinGradientMode FGradient;
	TdxSkinColorValue FGradientBeginColor;
	TdxSkinColorValue FGradientEndColor;
	void __fastcall BordersChanged(System::TObject* ASender, TdxSkinChanges AChanges);
	void __fastcall ContentOffsetsChanged(System::TObject* ASender);
	System::Uitypes::TColor __fastcall GetGradientBeginColor();
	System::UnicodeString __fastcall GetGradientBeginColorReference();
	System::Uitypes::TColor __fastcall GetGradientEndColor();
	System::UnicodeString __fastcall GetGradientEndColorReference();
	bool __fastcall GetIsAlphaUsed();
	void __fastcall SetAlpha(System::Byte AValue);
	void __fastcall SetBorders(TdxSkinBorders* AValue);
	void __fastcall SetBordersInner(TdxSkinBorders* AValue);
	void __fastcall SetContentOffsets(Cxgeometry::TcxRect* AValue);
	void __fastcall SetGradientBeginColor(System::Uitypes::TColor AValue);
	void __fastcall SetGradientBeginColorReference(const System::UnicodeString Value);
	void __fastcall SetGradientEndColor(System::Uitypes::TColor AValue);
	void __fastcall SetGradientEndColorReference(const System::UnicodeString Value);
	void __fastcall SetGradientMode(TdxSkinGradientMode AValue);
	
protected:
	virtual void __fastcall AssignCore(System::Classes::TPersistent* Source);
	virtual void __fastcall DataRead(System::Classes::TStream* AStream, const double AVersion);
	virtual void __fastcall DataWrite(System::Classes::TStream* AStream);
	virtual void __fastcall FlushCache();
	
public:
	__fastcall virtual TdxSkinAlternateImageAttributes(System::Classes::TPersistent* AOwner, const System::UnicodeString AName);
	__fastcall virtual ~TdxSkinAlternateImageAttributes();
	virtual void __fastcall Draw(Dxgdiplusclasses::TdxGPCanvas* ACanvas, const System::Types::TRect &R);
	virtual bool __fastcall Compare(TdxSkinProperty* AProperty);
	__property bool IsAlphaUsed = {read=GetIsAlphaUsed, nodefault};
	
__published:
	__property System::Byte Alpha = {read=FAlpha, write=SetAlpha, default=255};
	__property TdxSkinBorders* Borders = {read=FBorders, write=SetBorders};
	__property TdxSkinBorders* BordersInner = {read=FBordersInner, write=SetBordersInner};
	__property Cxgeometry::TcxRect* ContentOffsets = {read=FContentOffsets, write=SetContentOffsets};
	__property TdxSkinGradientMode Gradient = {read=FGradient, write=SetGradientMode, default=0};
	__property System::Uitypes::TColor GradientBeginColor = {read=GetGradientBeginColor, write=SetGradientBeginColor, default=536870911};
	__property System::UnicodeString GradientBeginColorReference = {read=GetGradientBeginColorReference, write=SetGradientBeginColorReference};
	__property System::Uitypes::TColor GradientEndColor = {read=GetGradientEndColor, write=SetGradientEndColor, default=536870911};
	__property System::UnicodeString GradientEndColorReference = {read=GetGradientEndColorReference, write=SetGradientEndColorReference};
};


class PASCALIMPLEMENTATION TdxSkinCustomListProperty : public TdxSkinProperty
{
	typedef TdxSkinProperty inherited;
	
public:
	TdxSkinProperty* operator[](int Index) { return this->Items[Index]; }
	
private:
	int __fastcall GetCount();
	TdxSkinProperty* __fastcall GetItem(int Index);
	
protected:
	TdxSkinProperties* FProperties;
	virtual void __fastcall AssignCore(System::Classes::TPersistent* Source);
	virtual TdxSkinProperties* __fastcall CreateProperties();
	virtual void __fastcall DataRead(System::Classes::TStream* Stream, const double AVersion);
	virtual void __fastcall DataWrite(System::Classes::TStream* Stream);
	virtual void __fastcall FlushCache();
	void __fastcall HandlerPropertiesChanged(System::TObject* Sender, TdxSkinChanges Changes);
	
public:
	__fastcall virtual TdxSkinCustomListProperty(System::Classes::TPersistent* AOwner, const System::UnicodeString AName);
	__fastcall virtual ~TdxSkinCustomListProperty();
	virtual void __fastcall BeforeDestruction();
	void __fastcall Clear();
	virtual bool __fastcall Compare(TdxSkinProperty* AProperty);
	void __fastcall Delete(TdxSkinProperty* const AProperty)/* overload */;
	void __fastcall Delete(const int AIndex)/* overload */;
	void __fastcall Delete(const System::UnicodeString AName)/* overload */;
	bool __fastcall Find(const System::UnicodeString AName, void *AProperty);
	void __fastcall Sort(bool ASortChildren = false);
	__property int Count = {read=GetCount, nodefault};
	__property TdxSkinProperty* Items[int Index] = {read=GetItem/*, default*/};
};


class PASCALIMPLEMENTATION TdxSkinColorPalette : public TdxSkinCustomListProperty
{
	typedef TdxSkinCustomListProperty inherited;
	
public:
	TdxSkinColor* operator[](int Index) { return this->Items[Index]; }
	
private:
	GUID FID;
	HIDESBASE TdxSkinColor* __fastcall GetItem(int Index);
	
protected:
	TdxSkinColorClass FDefaultColorClass;
	TdxSkinColor* __fastcall AddCore(const System::UnicodeString AName, System::Uitypes::TColor AValue, System::UnicodeString AValueReference);
	virtual void __fastcall DoChanged(TdxSkinChanges AChanges);
	virtual void __fastcall FlushCache();
	GUID __fastcall GetID();
	Dxcoregraphics::TdxAlphaColor __fastcall GetFillColor(const System::UnicodeString ID);
	Dxcoregraphics::TdxAlphaColor __fastcall GetStrokeColor(const System::UnicodeString ID);
	
public:
	__fastcall virtual TdxSkinColorPalette(System::Classes::TPersistent* AOwner, const System::UnicodeString AName);
	TdxSkinColor* __fastcall Add(const System::UnicodeString AName, System::Uitypes::TColor AValue)/* overload */;
	TdxSkinColor* __fastcall Add(const System::UnicodeString AName, const System::UnicodeString AValueReference)/* overload */;
	__property TdxSkinColor* Items[int Index] = {read=GetItem/*, default*/};
public:
	/* TdxSkinCustomListProperty.Destroy */ inline __fastcall virtual ~TdxSkinColorPalette() { }
	
private:
	void *__IdxColorPalette;	// Dxcoregraphics::IdxColorPalette 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {D0CB7E80-BE5A-4532-972C-5046B346FDA5}
	operator Dxcoregraphics::_di_IdxColorPalette()
	{
		Dxcoregraphics::_di_IdxColorPalette intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxcoregraphics::IdxColorPalette*(void) { return (Dxcoregraphics::IdxColorPalette*)&__IdxColorPalette; }
	#endif
	
};


class PASCALIMPLEMENTATION TdxSkinColorPalettes : public TdxSkinCustomListProperty
{
	typedef TdxSkinCustomListProperty inherited;
	
public:
	TdxSkinColorPalette* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TdxSkinColorPalette* __fastcall GetItem(int Index);
	
protected:
	TdxSkinColorClass FDefaultColorClass;
	
public:
	__fastcall virtual TdxSkinColorPalettes(System::Classes::TPersistent* AOwner, const System::UnicodeString AName);
	TdxSkinColorPalette* __fastcall Add(const System::UnicodeString AName);
	__property TdxSkinColorPalette* Items[int Index] = {read=GetItem/*, default*/};
public:
	/* TdxSkinCustomListProperty.Destroy */ inline __fastcall virtual ~TdxSkinColorPalettes() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSkinColorPalettePreview : public Dxcoreclasses::TcxInterfacedPersistent
{
	typedef Dxcoreclasses::TcxInterfacedPersistent inherited;
	
private:
	GUID FID;
	TdxSkinColorPalette* FPalette;
	TdxSkinColorPalette* FPaletteBase;
	bool __fastcall GetColor(const System::UnicodeString AKey, /* out */ System::Uitypes::TColor &AColor);
	
public:
	__fastcall TdxSkinColorPalettePreview(TdxSkin* ASkin, const System::UnicodeString AColorPaletteName);
	__fastcall virtual ~TdxSkinColorPalettePreview();
	Dxcoregraphics::TdxAlphaColor __fastcall GetFillColor(const System::UnicodeString ID);
	GUID __fastcall GetID();
	Dxcoregraphics::TdxAlphaColor __fastcall GetStrokeColor(const System::UnicodeString ID);
private:
	void *__IdxSkinColorPalette;	// IdxSkinColorPalette 
	void *__IdxColorPalette;	// Dxcoregraphics::IdxColorPalette 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {A7511E95-1577-41D3-ACB8-12F34E79AF1B}
	operator _di_IdxSkinColorPalette()
	{
		_di_IdxSkinColorPalette intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxSkinColorPalette*(void) { return (IdxSkinColorPalette*)&__IdxSkinColorPalette; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {D0CB7E80-BE5A-4532-972C-5046B346FDA5}
	operator Dxcoregraphics::_di_IdxColorPalette()
	{
		Dxcoregraphics::_di_IdxColorPalette intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxcoregraphics::IdxColorPalette*(void) { return (Dxcoregraphics::IdxColorPalette*)&__IdxColorPalette; }
	#endif
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxSkinControlGroup : public TdxSkinPersistent
{
	typedef TdxSkinPersistent inherited;
	
private:
	int __fastcall GetCount();
	TdxSkinElement* __fastcall GetElement(int AIndex);
	bool __fastcall GetHasMissingElements();
	TdxSkin* __fastcall GetSkin();
	void __fastcall SetElement(int AIndex, TdxSkinElement* AElement);
	
protected:
	TdxSkinElements* FElements;
	virtual void __fastcall AssignCore(System::Classes::TPersistent* Source);
	virtual void __fastcall DataRead(System::Classes::TStream* AStream, const double AVersion);
	virtual void __fastcall DataWrite(System::Classes::TStream* AStream);
	virtual void __fastcall FlushCache();
	
public:
	__fastcall virtual TdxSkinControlGroup(System::Classes::TPersistent* AOwner, const System::UnicodeString AName);
	__fastcall virtual ~TdxSkinControlGroup();
	TdxSkinElement* __fastcall AddElement(const System::UnicodeString AName);
	TdxSkinElement* __fastcall AddElementEx(const System::UnicodeString AName, TdxSkinElementClass AElementClass);
	TdxSkinElement* __fastcall GetElementByName(const System::UnicodeString AName)/* overload */;
	bool __fastcall GetElementByName(const System::UnicodeString AName, /* out */ TdxSkinElement* &AElement)/* overload */;
	virtual void __fastcall Clear();
	void __fastcall ClearModified();
	void __fastcall Delete(int AIndex);
	virtual void __fastcall Dormant();
	void __fastcall ExchangeElements(int AIndex1, int AIndex2);
	void __fastcall RemoveElement(TdxSkinElement* AElement);
	void __fastcall RemoveElementByName(const System::UnicodeString AElementName);
	virtual void __fastcall Sort(bool ASortChildren = false);
	__property int Count = {read=GetCount, nodefault};
	__property TdxSkinElement* Elements[int Index] = {read=GetElement, write=SetElement};
	__property bool HasMissingElements = {read=GetHasMissingElements, nodefault};
	__property TdxSkin* Skin = {read=GetSkin};
};


enum DECLSPEC_DENUM TdxSkinElementState : unsigned char { esNormal, esHot, esPressed, esDisabled, esActive, esFocused, esDroppedDown, esChecked, esHotCheck, esActiveDisabled, esCheckPressed };

typedef System::Set<TdxSkinElementState, TdxSkinElementState::esNormal, TdxSkinElementState::esCheckPressed> TdxSkinElementStates;

enum DECLSPEC_DENUM TdxSkinImagePart : unsigned char { sipTopLeft, sipTop, sipTopRight, sipLeft, sipCenter, sipRight, sipBottomLeft, sipBottom, sipBottomRight };

typedef System::StaticArray<System::Types::TRect, 9> TdxSkinElementPartBounds;

enum DECLSPEC_DENUM TdxSkinImageLayout : unsigned char { ilHorizontal, ilVertical };

enum DECLSPEC_DENUM TdxSkinStretchMode : unsigned char { smStretch, smTile, smNoResize };

class PASCALIMPLEMENTATION TdxSkinImage : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
	
private:
	typedef void __fastcall (__closure *TDrawPartProc)(Dxgdiplusclasses::TdxGPCanvas* ACanvas, const System::Types::TRect &ATargetRect, const System::Types::TRect &ASourceRect, Dxgdiplusclasses::TdxGPImageHandle* AImage);
	
	
private:
	TdxSkinElement* FOwner;
	TdxSkinColorPalettes* FColorPalettes;
	TdxSkinGradientMode FGradient;
	TdxSkinColorValue FGradientBeginColor;
	TdxSkinColorValue FGradientEndColor;
	int FImageCount;
	TdxSkinImageLayout FImageLayout;
	Dxgdiplusclasses::TdxGPInterpolationMode FInterpolationMode;
	bool FIsDestroying;
	bool FIsDirty;
	Cxgeometry::TcxMargin* FMargins;
	bool FMarginsScaled;
	TdxSkinElementPartBounds FPartsBounds;
	System::Types::TRect FPartsBoundsSourceMargins;
	System::Types::TSize FPartsBoundsSourceSize;
	System::StaticArray<TDrawPartProc, 9> FPartsDrawProcs;
	System::Types::TSize FSize;
	System::UnicodeString FSourceName;
	System::StaticArray<System::Types::TRect, 11> FStateBounds;
	int FStateCount;
	TdxSkinElementStates FStates;
	TdxSkinStretchMode FStretch;
	Dxgdiplusclasses::TdxSmartImage* FTexture;
	Dxcore::TdxDefaultBoolean FTextureIsVector;
	System::Classes::TNotifyEvent FOnChange;
	bool __fastcall GetEmpty();
	System::UnicodeString __fastcall GetFileExt();
	System::Uitypes::TColor __fastcall GetGradientBeginColor();
	System::UnicodeString __fastcall GetGradientBeginColorReference();
	System::Uitypes::TColor __fastcall GetGradientEndColor();
	System::UnicodeString __fastcall GetGradientEndColorReference();
	bool __fastcall GetIsGradientParamsAssigned();
	bool __fastcall GetIsVectorTexture();
	System::UnicodeString __fastcall GetName();
	System::Types::TRect __fastcall GetPartBounds(TdxSkinImagePart APart);
	System::Types::TSize __fastcall GetSize();
	System::UnicodeString __fastcall GetSourceName();
	System::Types::TRect __fastcall GetStateBounds(int AImageIndex, TdxSkinElementState AState);
	int __fastcall GetStateCount();
	void __fastcall SetColorPalettes(TdxSkinColorPalettes* const Value);
	void __fastcall SetGradientBeginColor(System::Uitypes::TColor AValue);
	void __fastcall SetGradientBeginColorReference(const System::UnicodeString Value);
	void __fastcall SetGradientEndColor(System::Uitypes::TColor AValue);
	void __fastcall SetGradientEndColorReference(const System::UnicodeString Value);
	void __fastcall SetGradientMode(TdxSkinGradientMode AValue);
	void __fastcall SetImageCount(int AValue);
	void __fastcall SetImageLayout(TdxSkinImageLayout AValue);
	void __fastcall SetInterpolationMode(Dxgdiplusclasses::TdxGPInterpolationMode AValue);
	void __fastcall SetMargins(Cxgeometry::TcxMargin* AValue);
	void __fastcall SetMarginsScaled(bool AValue);
	void __fastcall SetName(const System::UnicodeString AValue);
	void __fastcall SetStates(TdxSkinElementStates AValue);
	void __fastcall SetStretch(TdxSkinStretchMode AValue);
	void __fastcall HandlerColorPaletteChanged(System::TObject* Sender, TdxSkinChanges Changes);
	void __fastcall HandlerMarginsChanged(System::TObject* Sender);
	void __fastcall HandlerTextureChanged(System::TObject* Sender);
	void __fastcall DrawPartColor(Dxgdiplusclasses::TdxGPCanvas* ACanvas, const System::Types::TRect &ATargetRect, const System::Types::TRect &ASourceRect, Dxgdiplusclasses::TdxGPImageHandle* AImage);
	void __fastcall DrawPartEmpty(Dxgdiplusclasses::TdxGPCanvas* ACanvas, const System::Types::TRect &ATargetRect, const System::Types::TRect &ASourceRect, Dxgdiplusclasses::TdxGPImageHandle* AImage);
	void __fastcall DrawPartTile(Dxgdiplusclasses::TdxGPCanvas* ACanvas, const System::Types::TRect &ATargetRect, const System::Types::TRect &ASourceRect, Dxgdiplusclasses::TdxGPImageHandle* AImage);
	void __fastcall DrawPartStretch(Dxgdiplusclasses::TdxGPCanvas* ACanvas, const System::Types::TRect &ATargetRect, const System::Types::TRect &ASourceRect, Dxgdiplusclasses::TdxGPImageHandle* AImage);
	
protected:
	virtual Dxgdiplusclasses::TdxSmartImage* __fastcall CreateTexture();
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	void __fastcall CalculatePartsBounds(const System::Types::TSize &ASize, const System::Types::TRect &AMargins);
	void __fastcall CalculatePartsDrawProcs();
	void __fastcall CalculateStateBounds();
	virtual void __fastcall Changed();
	void __fastcall CheckInfo();
	void __fastcall CheckState(TdxSkinElementState &AState, int &AImageIndex);
	virtual void __fastcall DataRead(System::Classes::TStream* AStream, const double AVersion);
	virtual void __fastcall DataWrite(System::Classes::TStream* AStream);
	virtual void __fastcall FlushCache();
	virtual int __fastcall GetSourceDPI();
	virtual void __fastcall InitializeInfo();
	bool __fastcall IsCacheMakeSense();
	__property bool IsDirty = {read=FIsDirty, write=FIsDirty, nodefault};
	__property bool IsGradientParamsAssigned = {read=GetIsGradientParamsAssigned, nodefault};
	__property bool IsVectorTexture = {read=GetIsVectorTexture, nodefault};
	__property System::Types::TRect PartBounds[TdxSkinImagePart APart] = {read=GetPartBounds};
	
public:
	__fastcall virtual TdxSkinImage(TdxSkinElement* AOwner);
	__fastcall virtual ~TdxSkinImage();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall BeforeDestruction();
	void __fastcall Clear();
	virtual bool __fastcall Compare(TdxSkinImage* AImage);
	virtual void __fastcall Dormant();
	void __fastcall Draw(HDC DC, const System::Types::TRect &ARect, int AImageIndex = 0x0, TdxSkinElementState AState = (TdxSkinElementState)(0x0))/* overload */;
	virtual void __fastcall Draw(HDC DC, const System::Types::TRect &ARect, Cxgeometry::TdxScaleFactor* AScaleFactor, int AImageIndex = 0x0, TdxSkinElementState AState = (TdxSkinElementState)(0x0))/* overload */;
	virtual void __fastcall Draw(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &ARect, Cxgeometry::TdxScaleFactor* AScaleFactor, int AImageIndex = 0x0, TdxSkinElementState AState = (TdxSkinElementState)(0x0))/* overload */;
	void __fastcall DrawEx(Dxgdiplusclasses::TdxGPCanvas* ACanvas, const System::Types::TRect &ARect, int AImageIndex = 0x0, TdxSkinElementState AState = (TdxSkinElementState)(0x0))/* overload */;
	virtual void __fastcall DrawEx(Dxgdiplusclasses::TdxGPCanvas* ACanvas, const System::Types::TRect &ARect, Cxgeometry::TdxScaleFactor* AScaleFactor, int AImageIndex = 0x0, TdxSkinElementState AState = (TdxSkinElementState)(0x0))/* overload */;
	void __fastcall RightToLeftDependentDraw(HDC DC, const System::Types::TRect &ARect, Cxgeometry::TdxScaleFactor* AScaleFactor, bool AIsRightToLeftLayout, int AImageIndex = 0x0, TdxSkinElementState AState = (TdxSkinElementState)(0x0))/* overload */;
	void __fastcall RightToLeftDependentDraw(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &ARect, Cxgeometry::TdxScaleFactor* AScaleFactor, bool AIsRightToLeftLayout, int AImageIndex = 0x0, TdxSkinElementState AState = (TdxSkinElementState)(0x0))/* overload */;
	void __fastcall GetBitmap(int AImageIndex, TdxSkinElementState AState, Vcl::Graphics::TBitmap* ABitmap, System::Uitypes::TColor ABackgroundColor = (System::Uitypes::TColor)(0x1fffffff));
	Dxcoregraphics::_di_IdxColorPalette __fastcall GetPalette(TdxSkinElementState AState, bool ACanUseGlobalPalette = true);
	void __fastcall LoadFromFile(const System::UnicodeString AFileName);
	void __fastcall LoadFromResource(NativeUInt AInstance, const System::UnicodeString AName, System::WideChar * AType);
	void __fastcall LoadFromStream(System::Classes::TStream* AStream);
	void __fastcall SaveToFile(const System::UnicodeString AFileName);
	void __fastcall SaveToStream(System::Classes::TStream* AStream);
	void __fastcall SetStateMapping(TdxSkinElementState *ATargetStateOrder, const int ATargetStateOrder_High);
	__property bool Empty = {read=GetEmpty, nodefault};
	__property System::UnicodeString Name = {read=GetName, write=SetName};
	__property TdxSkinElement* Owner = {read=FOwner};
	__property System::Types::TSize Size = {read=GetSize};
	__property System::UnicodeString SourceName = {read=GetSourceName};
	__property System::Types::TRect StateBounds[int ImageIndex][TdxSkinElementState State] = {read=GetStateBounds};
	__property int StateCount = {read=GetStateCount, nodefault};
	__property Dxgdiplusclasses::TdxSmartImage* Texture = {read=FTexture};
	
__published:
	__property TdxSkinColorPalettes* ColorPalettes = {read=FColorPalettes, write=SetColorPalettes};
	__property TdxSkinGradientMode Gradient = {read=FGradient, write=SetGradientMode, default=0};
	__property System::Uitypes::TColor GradientBeginColor = {read=GetGradientBeginColor, write=SetGradientBeginColor, default=536870911};
	__property System::UnicodeString GradientBeginColorReference = {read=GetGradientBeginColorReference, write=SetGradientBeginColorReference};
	__property System::Uitypes::TColor GradientEndColor = {read=GetGradientEndColor, write=SetGradientEndColor, default=536870911};
	__property System::UnicodeString GradientEndColorReference = {read=GetGradientEndColorReference, write=SetGradientEndColorReference};
	__property int ImageCount = {read=FImageCount, write=SetImageCount, default=1};
	__property TdxSkinImageLayout ImageLayout = {read=FImageLayout, write=SetImageLayout, default=0};
	__property Dxgdiplusclasses::TdxGPInterpolationMode InterpolationMode = {read=FInterpolationMode, write=SetInterpolationMode, default=0};
	__property Cxgeometry::TcxMargin* Margins = {read=FMargins, write=SetMargins};
	__property bool MarginsScaled = {read=FMarginsScaled, write=SetMarginsScaled, default=0};
	__property TdxSkinElementStates States = {read=FStates, write=SetStates, default=1};
	__property TdxSkinStretchMode Stretch = {read=FStretch, write=SetStretch, default=0};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
};


class PASCALIMPLEMENTATION TdxSkinGlyph : public TdxSkinImage
{
	typedef TdxSkinImage inherited;
	
private:
	Dxgdiplusclasses::TdxSmartGlyph* __fastcall GetTexture();
	
protected:
	virtual Dxgdiplusclasses::TdxSmartImage* __fastcall CreateTexture();
	virtual int __fastcall GetSourceDPI();
	
public:
	virtual void __fastcall AfterConstruction();
	__property Dxgdiplusclasses::TdxSmartGlyph* Texture = {read=GetTexture};
	
__published:
	__property MarginsScaled = {default=1};
public:
	/* TdxSkinImage.Create */ inline __fastcall virtual TdxSkinGlyph(TdxSkinElement* AOwner) : TdxSkinImage(AOwner) { }
	/* TdxSkinImage.Destroy */ inline __fastcall virtual ~TdxSkinGlyph() { }
	
};


typedef System::StaticArray<TdxSkinAlternateImageAttributes*, 11> TdxSkinAlternateImageSet;

class PASCALIMPLEMENTATION TdxSkinElement : public TdxSkinPersistent
{
	typedef TdxSkinPersistent inherited;
	
private:
	System::Byte FAlpha;
	bool FAlternateImageSetDirty;
	int FAlternateImageSetIndex;
	TdxSkinBorders* FBorders;
	TdxSkinElementCacheList* FCache;
	int FCacheCapacity;
	TdxSkinColorValue FColor;
	Cxgeometry::TcxRect* FContentOffset;
	TdxSkinImage* FGlyph;
	TdxSkinImage* FImage;
	Cxgeometry::TcxSize* FMinSize;
	TdxSkinColorValue FTextColor;
	void __fastcall BordersChanged(System::TObject* ASender, TdxSkinChanges AChanges);
	System::Uitypes::TColor __fastcall GetColor();
	System::UnicodeString __fastcall GetColorReference();
	TdxSkinControlGroup* __fastcall GetGroup();
	int __fastcall GetImageCount();
	bool __fastcall GetIsAlphaUsed();
	System::UnicodeString __fastcall GetPath();
	System::Types::TSize __fastcall GetSize();
	TdxSkinElementStates __fastcall GetStates();
	System::Uitypes::TColor __fastcall GetTextColorPropertyValue();
	System::UnicodeString __fastcall GetTextColorReference();
	bool __fastcall GetUseCache();
	void __fastcall SetAlpha(System::Byte AValue);
	void __fastcall SetBorders(TdxSkinBorders* AValue);
	void __fastcall SetCacheCapacity(int AValue);
	void __fastcall SetColor(System::Uitypes::TColor AValue);
	void __fastcall SetColorReference(const System::UnicodeString Value);
	void __fastcall SetContentOffset(Cxgeometry::TcxRect* AValue);
	void __fastcall SetGlyph(TdxSkinImage* AValue);
	void __fastcall SetImage(TdxSkinImage* AValue);
	void __fastcall SetMinSize(Cxgeometry::TcxSize* AValue);
	void __fastcall SetTextColorPropertyValue(System::Uitypes::TColor AValue);
	void __fastcall SetTextColorReference(const System::UnicodeString Value);
	void __fastcall SetUseCache(bool AValue);
	HIDESBASE void __fastcall SubItemChanged(System::TObject* ASender);
	
protected:
	TdxSkinAlternateImageSet FAlternateImageSet;
	int FReadImageCount;
	virtual void __fastcall AssignCore(System::Classes::TPersistent* Source);
	bool __fastcall CanUseAlternateImageSet(int AImageIndex, TdxSkinElementState AState, bool ALowColorsMode, /* out */ TdxSkinAlternateImageAttributes* &AStateAttributes);
	void __fastcall CheckAlternateImageSet(int AIndex);
	virtual void __fastcall DoChanged(TdxSkinChanges AChanges);
	virtual void __fastcall DataRead(System::Classes::TStream* AStream, const double AVersion);
	virtual void __fastcall DataWrite(System::Classes::TStream* AStream);
	virtual void __fastcall FlushCache();
	bool __fastcall IsCacheMakeSense();
	__property bool AlternateImageSetDirty = {read=FAlternateImageSetDirty, write=FAlternateImageSetDirty, nodefault};
	__property int AlternateImageSetIndex = {read=FAlternateImageSetIndex, nodefault};
	__property TdxSkinElementCacheList* Cache = {read=FCache};
	
public:
	__fastcall virtual TdxSkinElement(System::Classes::TPersistent* AOwner, const System::UnicodeString AName);
	__fastcall virtual ~TdxSkinElement();
	TdxSkinAlternateImageAttributes* __fastcall AddAlternateImageAttributes(TdxSkinElementState AState, int AImageIndex = 0x0);
	virtual bool __fastcall Compare(TdxSkinElement* AElement);
	System::Types::TSize __fastcall CalculateMinSize();
	System::Uitypes::TColor __fastcall FindColor(const System::UnicodeString AName, const System::UnicodeString ANamePrefix);
	Dxcoregraphics::_di_IdxColorPalette __fastcall GetGlyphColorPalette(TdxSkinElementState AState);
	System::Uitypes::TColor __fastcall GetTextColor(Cxlookandfeelpainters::TcxButtonState AState, const System::UnicodeString APropertyPrefix = System::UnicodeString())/* overload */;
	System::Uitypes::TColor __fastcall GetTextColor(TdxSkinElementState AState, const System::UnicodeString APropertyPrefix = System::UnicodeString())/* overload */;
	System::Uitypes::TColor __fastcall GetTextColor(const System::UnicodeString AName)/* overload */;
	virtual void __fastcall Dormant();
	void __fastcall Draw(HDC DC, const System::Types::TRect &ARect, int AImageIndex = 0x0, TdxSkinElementState AState = (TdxSkinElementState)(0x0))/* overload */;
	void __fastcall Draw(HDC DC, const System::Types::TRect &ARect, Cxgeometry::TdxScaleFactor* AScaleFactor, int AImageIndex = 0x0, TdxSkinElementState AState = (TdxSkinElementState)(0x0))/* overload */;
	void __fastcall Draw(HDC DC, const System::Types::TRect &ARect, const System::Types::TRect &AClipRect, Cxgeometry::TdxScaleFactor* AScaleFactor, int AImageIndex = 0x0, TdxSkinElementState AState = (TdxSkinElementState)(0x0))/* overload */;
	void __fastcall Draw(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &ARect, Cxgeometry::TdxScaleFactor* AScaleFactor, int AImageIndex = 0x0, TdxSkinElementState AState = (TdxSkinElementState)(0x0))/* overload */;
	void __fastcall Draw(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &ARect, const System::Types::TRect &AClipRect, Cxgeometry::TdxScaleFactor* AScaleFactor, int AImageIndex = 0x0, TdxSkinElementState AState = (TdxSkinElementState)(0x0))/* overload */;
	void __fastcall Draw(Dxgdiplusclasses::TdxGPCanvas* ACanvas, const System::Types::TRect &ARect, Cxgeometry::TdxScaleFactor* AScaleFactor, int AImageIndex = 0x0, TdxSkinElementState AState = (TdxSkinElementState)(0x0))/* overload */;
	void __fastcall DrawEx(Dxgdiplusclasses::TdxGPCanvas* ACanvas, const System::Types::TRect &ARect, int AImageIndex = 0x0, TdxSkinElementState AState = (TdxSkinElementState)(0x0))/* overload */;
	virtual void __fastcall DrawEx(Dxgdiplusclasses::TdxGPCanvas* ACanvas, const System::Types::TRect &ARect, Cxgeometry::TdxScaleFactor* AScaleFactor, int AImageIndex = 0x0, TdxSkinElementState AState = (TdxSkinElementState)(0x0))/* overload */;
	void __fastcall RightToLeftDependentDraw(HDC DC, const System::Types::TRect &ARect, Cxgeometry::TdxScaleFactor* AScaleFactor, bool AIsRightToLeftLayout, int AImageIndex = 0x0, TdxSkinElementState AState = (TdxSkinElementState)(0x0))/* overload */;
	void __fastcall RightToLeftDependentDraw(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &ARect, Cxgeometry::TdxScaleFactor* AScaleFactor, bool AIsRightToLeftLayout, int AImageIndex = 0x0, TdxSkinElementState AState = (TdxSkinElementState)(0x0))/* overload */;
	void __fastcall RightToLeftDependentDraw(Dxgdiplusclasses::TdxGPCanvas* ACanvas, const System::Types::TRect &ARect, Cxgeometry::TdxScaleFactor* AScaleFactor, bool AIsRightToLeftLayout, int AImageIndex = 0x0, TdxSkinElementState AState = (TdxSkinElementState)(0x0))/* overload */;
	Dxgdiplusclasses::TdxSmartImage* __fastcall GetImage(int AImageIndex, const System::Types::TSize &ASize, Cxgeometry::TdxScaleFactor* AScaleFactor, TdxSkinElementState AState = (TdxSkinElementState)(0x0))/* overload */;
	Dxgdiplusclasses::TdxSmartImage* __fastcall GetImage(int AImageIndex, const System::Types::TSize &ASize, TdxSkinElementState AState = (TdxSkinElementState)(0x0))/* overload */;
	void __fastcall SetStateMapping(TdxSkinElementState *AStateOrder, const int AStateOrder_High);
	__property TdxSkinControlGroup* Group = {read=GetGroup};
	__property int ImageCount = {read=GetImageCount, nodefault};
	__property bool IsAlphaUsed = {read=GetIsAlphaUsed, nodefault};
	__property System::UnicodeString Path = {read=GetPath};
	__property System::Types::TSize Size = {read=GetSize};
	__property TdxSkinElementStates States = {read=GetStates, nodefault};
	__property int CacheCapacity = {read=FCacheCapacity, write=SetCacheCapacity, nodefault};
	__property bool UseCache = {read=GetUseCache, write=SetUseCache, nodefault};
	
__published:
	__property System::Byte Alpha = {read=FAlpha, write=SetAlpha, default=255};
	__property TdxSkinBorders* Borders = {read=FBorders, write=SetBorders};
	__property System::Uitypes::TColor Color = {read=GetColor, write=SetColor, default=536870912};
	__property System::UnicodeString ColorReference = {read=GetColorReference, write=SetColorReference};
	__property Cxgeometry::TcxRect* ContentOffset = {read=FContentOffset, write=SetContentOffset};
	__property TdxSkinImage* Glyph = {read=FGlyph, write=SetGlyph};
	__property TdxSkinImage* Image = {read=FImage, write=SetImage};
	__property Cxgeometry::TcxSize* MinSize = {read=FMinSize, write=SetMinSize};
	__property System::Uitypes::TColor TextColor = {read=GetTextColorPropertyValue, write=SetTextColorPropertyValue, default=536870912};
	__property System::UnicodeString TextColorReference = {read=GetTextColorReference, write=SetTextColorReference};
};


class PASCALIMPLEMENTATION TdxSkinEmptyElement : public TdxSkinElement
{
	typedef TdxSkinElement inherited;
	
public:
	virtual void __fastcall DrawEx(Dxgdiplusclasses::TdxGPCanvas* ACanvas, const System::Types::TRect &ARect, Cxgeometry::TdxScaleFactor* AScaleFactor, int AImageIndex = 0x0, TdxSkinElementState AState = (TdxSkinElementState)(0x0))/* overload */;
public:
	/* TdxSkinElement.Create */ inline __fastcall virtual TdxSkinEmptyElement(System::Classes::TPersistent* AOwner, const System::UnicodeString AName) : TdxSkinElement(AOwner, AName) { }
	/* TdxSkinElement.Destroy */ inline __fastcall virtual ~TdxSkinEmptyElement() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  DrawEx(Dxgdiplusclasses::TdxGPCanvas* ACanvas, const System::Types::TRect &ARect, int AImageIndex = 0x0, TdxSkinElementState AState = (TdxSkinElementState)(0x0)){ TdxSkinElement::DrawEx(ACanvas, ARect, AImageIndex, AState); }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSkinElementCache : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void *FCache;
	Cxgraphics::TcxBitmap* FCacheOpaque;
	TdxSkinElement* FElement;
	int FImageIndex;
	TdxSkinImageSet FImageSet;
	System::Types::TRect FRect;
	Cxgeometry::TdxScaleFactor* FScaleFactor;
	TdxSkinElementState FState;
	void __fastcall FreeCache();
	void __fastcall InitCache(const System::Types::TRect &R);
	void __fastcall InitOpaqueCache(const System::Types::TRect &R);
	void __fastcall InternalRightToLeftDependentDraw(HDC DC, const System::Types::TRect &R, bool AIsRightToLeftLayout);
	
protected:
	__property TdxSkinElement* Element = {read=FElement};
	__property int ImageIndex = {read=FImageIndex, nodefault};
	__property System::Types::TRect Rect = {read=FRect};
	__property TdxSkinElementState State = {read=FState, nodefault};
	
public:
	__fastcall TdxSkinElementCache();
	__fastcall virtual ~TdxSkinElementCache();
	void __fastcall CheckCacheState(TdxSkinElement* AElement, const System::Types::TRect &R, TdxSkinElementState AState = (TdxSkinElementState)(0x0), int AImageIndex = 0x0)/* overload */;
	void __fastcall CheckCacheState(TdxSkinElement* AElement, const System::Types::TRect &R, Cxgeometry::TdxScaleFactor* AScaleFactor, TdxSkinElementState AState = (TdxSkinElementState)(0x0), int AImageIndex = 0x0)/* overload */;
	void __fastcall Draw(HDC DC, const System::Types::TRect &R)/* overload */;
	void __fastcall Draw(Dxgdiplusclasses::TdxGPCanvas* ACanvas, const System::Types::TRect &R)/* overload */;
	void __fastcall DrawEx(HDC DC, TdxSkinElement* AElement, const System::Types::TRect &R, TdxSkinElementState AState = (TdxSkinElementState)(0x0), int AImageIndex = 0x0)/* overload */;
	void __fastcall DrawEx(HDC DC, TdxSkinElement* AElement, const System::Types::TRect &R, Cxgeometry::TdxScaleFactor* AScaleFactor, TdxSkinElementState AState = (TdxSkinElementState)(0x0), int AImageIndex = 0x0)/* overload */;
	void __fastcall DrawEx(Dxgdiplusclasses::TdxGPCanvas* ACanvas, TdxSkinElement* AElement, const System::Types::TRect &R, Cxgeometry::TdxScaleFactor* AScaleFactor, TdxSkinElementState AState = (TdxSkinElementState)(0x0), int AImageIndex = 0x0)/* overload */;
	void __fastcall Flush();
	void __fastcall RightToLeftDependentDraw(HDC DC, TdxSkinElement* AElement, const System::Types::TRect &R, Cxgeometry::TdxScaleFactor* AScaleFactor, bool AIsRightToLeftLayout, TdxSkinElementState AState = (TdxSkinElementState)(0x0), int AImageIndex = 0x0);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSkinElementCacheList : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::Int8 DefaultCapacity = System::Int8(0x8);
	
	
private:
	int FCapacity;
	System::Contnrs::TObjectList* FData;
	void __fastcall CheckCapacity();
	void __fastcall SetCapacity(int AValue);
	
protected:
	TdxSkinElementCache* __fastcall GetCacheItem(TdxSkinElement* AElement, const System::Types::TRect &R, TdxSkinElementState AState, int AImageIndex);
	bool __fastcall TryGet(TdxSkinElement* AElement, const System::Types::TRect &R, TdxSkinElementState AState, int AImageIndex, /* out */ TdxSkinElementCache* &AElementCache);
	
public:
	__fastcall TdxSkinElementCacheList(int ACapacity);
	__fastcall virtual ~TdxSkinElementCacheList();
	void __fastcall DrawElement(HDC DC, TdxSkinElement* AElement, const System::Types::TRect &R, TdxSkinElementState AState = (TdxSkinElementState)(0x0), int AImageIndex = 0x0)/* overload */;
	void __fastcall DrawElement(HDC DC, TdxSkinElement* AElement, const System::Types::TRect &R, Cxgeometry::TdxScaleFactor* AScaleFactor, TdxSkinElementState AState = (TdxSkinElementState)(0x0), int AImageIndex = 0x0)/* overload */;
	void __fastcall DrawElement(Dxgdiplusclasses::TdxGPCanvas* ACanvas, TdxSkinElement* AElement, const System::Types::TRect &R, Cxgeometry::TdxScaleFactor* AScaleFactor, TdxSkinElementState AState = (TdxSkinElementState)(0x0), int AImageIndex = 0x0)/* overload */;
	void __fastcall Flush();
	__property int Capacity = {read=FCapacity, write=SetCapacity, nodefault};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxSkinBinaryWriter : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FCount;
	__int64 FHeaderOffset;
	System::Classes::TStream* FStream;
	void __fastcall WriteHeader();
	
protected:
	__property System::Classes::TStream* Stream = {read=FStream};
	
public:
	__fastcall TdxSkinBinaryWriter(System::Classes::TStream* AStream);
	__fastcall virtual ~TdxSkinBinaryWriter();
	void __fastcall AddSkin(TdxSkin* ASkin);
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSkinBinaryReader : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Cxclasses::TcxObjectList* FSkins;
	System::Classes::TStream* FStream;
	int __fastcall GetCount();
	TdxSkinDetails* __fastcall GetSkinDetails(int Index);
	System::UnicodeString __fastcall GetSkinDisplayName(int Index);
	System::UnicodeString __fastcall GetSkinName(int Index);
	int __fastcall GetSkinOffset(int Index);
	
protected:
	int __fastcall IndexOf(const System::UnicodeString ASkinName);
	bool __fastcall ReadBinaryProject(System::Classes::TStream* AStream);
	bool __fastcall ReadBinarySkin(System::Classes::TStream* AStream);
	void __fastcall ReadSkinsInfo();
	__property System::Classes::TStream* Stream = {read=FStream};
	
public:
	__fastcall virtual TdxSkinBinaryReader(System::Classes::TStream* AStream);
	__fastcall virtual ~TdxSkinBinaryReader();
	bool __fastcall LoadSkin(TdxSkin* ASkin, int ASkinIndex)/* overload */;
	bool __fastcall LoadSkin(TdxSkin* ASkin, const System::UnicodeString ASkinName)/* overload */;
	__property int Count = {read=GetCount, nodefault};
	__property TdxSkinDetails* SkinDetails[int Index] = {read=GetSkinDetails};
	__property System::UnicodeString SkinDisplayName[int Index] = {read=GetSkinDisplayName};
	__property System::UnicodeString SkinName[int Index] = {read=GetSkinName};
	__property int SkinOffset[int Index] = {read=GetSkinOffset};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxSkinDetails : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::UnicodeString FDisplayName;
	System::UnicodeString FGroupName;
	System::StaticArray<Dxgdiplusclasses::TdxSmartImage*, 2> FIcons;
	System::UnicodeString FName;
	System::WideString FNotes;
	int FUpdateCount;
	System::Classes::TNotifyEvent FOnChange;
	Dxgdiplusclasses::TdxSmartImage* __fastcall GetIcon(TdxSkinIconSize ASize);
	void __fastcall DoIconsChanged(System::TObject* Sender);
	void __fastcall SetDisplayName(const System::UnicodeString AValue);
	void __fastcall SetGroupName(const System::UnicodeString AValue);
	void __fastcall SetName(const System::UnicodeString AValue);
	void __fastcall SetNotes(const System::WideString AValue);
	
protected:
	__int64 FDataOffset;
	virtual void __fastcall Changed();
	virtual void __fastcall DataRead(System::Classes::TStream* AStream, const double AVersion);
	virtual void __fastcall DataWrite(System::Classes::TStream* AStream);
	
public:
	__fastcall virtual TdxSkinDetails();
	__fastcall virtual ~TdxSkinDetails();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	virtual void __fastcall Clear();
	bool __fastcall LoadFromStream(System::Classes::TStream* AStream);
	void __fastcall ResetIcon(TdxSkinIconSize ASize);
	__property System::UnicodeString DisplayName = {read=FDisplayName, write=SetDisplayName};
	__property System::UnicodeString GroupName = {read=FGroupName, write=SetGroupName};
	__property Dxgdiplusclasses::TdxSmartImage* Icons[TdxSkinIconSize ASize] = {read=GetIcon};
	__property System::UnicodeString Name = {read=FName, write=SetName};
	__property System::WideString Notes = {read=FNotes, write=SetNotes};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
};


typedef System::TMetaClass* TdxSkinClass;

class PASCALIMPLEMENTATION TdxSkin : public TdxSkinPersistent
{
	typedef TdxSkinPersistent inherited;
	
private:
	TdxSkinColorPalette* FColorPalette;
	TdxSkinColorPalettes* FColorPalettes;
	bool FDestroying;
	TdxSkinDetails* FDetails;
	TdxSkinControlGroups* FGroups;
	System::Classes::TInterfaceList* FListeners;
	TdxSkinChangeNotify FOnChange;
	TdxSkinColor* __fastcall GetColor(int Index);
	int __fastcall GetColorCount();
	System::UnicodeString __fastcall GetActiveColorPaletteName();
	System::UnicodeString __fastcall GetDisplayName();
	TdxSkinControlGroup* __fastcall GetGroup(int Index);
	int __fastcall GetGroupCount();
	bool __fastcall GetHasMissingElements();
	System::UnicodeString __fastcall GetName();
	void __fastcall SetActiveColorPaletteName(const System::UnicodeString Value);
	HIDESBASE void __fastcall SetName(const System::UnicodeString Value);
	void __fastcall HandlerColorPalettesChanged(System::TObject* Sender, TdxSkinChanges AChanges);
	void __fastcall HandlerDetailsChanged(System::TObject* Sender);
	
protected:
	TdxSkinColors* FColors;
	virtual void __fastcall AssignCore(System::Classes::TPersistent* Source);
	virtual void __fastcall FlushCache();
	virtual void __fastcall DoChanged(TdxSkinChanges AChanges);
	virtual void __fastcall LoadFromResource(NativeUInt hInst);
	Dxcoregraphics::_di_IdxColorPalette __fastcall GetGlyphColorPalette(TdxSkinElementState AState);
	void __fastcall NotifyListener(TdxSkinChanges AChanges, const System::_di_IInterface ACustomListener);
	void __fastcall NotifyListeners(TdxSkinChanges AChanges);
	void __fastcall SelectColorPalette(const System::UnicodeString Value);
	bool __fastcall PaletteGetColor(const System::UnicodeString AKey, /* out */ System::Uitypes::TColor &AColor);
	__property System::Classes::TInterfaceList* Listeners = {read=FListeners};
	
public:
	__fastcall virtual TdxSkin(const System::UnicodeString AName, bool ALoadOnCreate, NativeUInt hInst);
	__fastcall virtual ~TdxSkin();
	TdxSkinColor* __fastcall AddColor(const System::UnicodeString AName, const System::Uitypes::TColor AColor = (System::Uitypes::TColor)(0x20000000));
	TdxSkinControlGroup* __fastcall AddGroup(const System::UnicodeString AName = System::UnicodeString());
	virtual void __fastcall Clear();
	void __fastcall ClearModified();
	virtual TdxSkin* __fastcall Clone(const System::UnicodeString AName);
	virtual void __fastcall DeleteGroup(TdxSkinControlGroup* const AGroup);
	virtual void __fastcall DeleteProperty(TdxSkinProperty* const AProperty)/* overload */;
	virtual void __fastcall Dormant();
	void __fastcall ExchangeColors(int AIndex1, int AIndex2);
	void __fastcall ExchangeGroups(int AIndex1, int AIndex2);
	TdxSkinColor* __fastcall GetColorByName(const System::UnicodeString AName);
	TdxSkinControlGroup* __fastcall GetGroupByName(const System::UnicodeString AName)/* overload */;
	bool __fastcall GetGroupByName(const System::UnicodeString AName, /* out */ TdxSkinControlGroup* &AGroup)/* overload */;
	virtual void __fastcall Sort(bool ASortChildren = false);
	void __fastcall LoadFromBinaryFile(const System::UnicodeString AFileName);
	void __fastcall LoadFromBinaryStream(System::Classes::TStream* AStream);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* AStream);
	void __fastcall LoadFromFile(const System::UnicodeString AFileName);
	void __fastcall SaveToFile(const System::UnicodeString AFileName);
	virtual void __fastcall SaveToStream(System::Classes::TStream* AStream);
	void __fastcall SaveToBinaryFile(const System::UnicodeString AFileName);
	void __fastcall SaveToBinaryStream(System::Classes::TStream* AStream);
	void __fastcall AddListener(System::_di_IInterface AListener);
	void __fastcall RemoveListener(System::_di_IInterface AListener);
	__property TdxSkinColorPalette* ActiveColorPalette = {read=FColorPalette};
	__property System::UnicodeString ActiveColorPaletteName = {read=GetActiveColorPaletteName, write=SetActiveColorPaletteName};
	__property int ColorCount = {read=GetColorCount, nodefault};
	__property TdxSkinColor* Colors[int Index] = {read=GetColor};
	__property TdxSkinColorPalettes* ColorPalettes = {read=FColorPalettes};
	__property TdxSkinDetails* Details = {read=FDetails};
	__property int GroupCount = {read=GetGroupCount, nodefault};
	__property TdxSkinControlGroup* Groups[int Index] = {read=GetGroup};
	__property bool HasMissingElements = {read=GetHasMissingElements, nodefault};
	
__published:
	__property System::UnicodeString DisplayName = {read=GetDisplayName};
	__property System::UnicodeString Name = {read=GetName, write=SetName};
	__property TdxSkinChangeNotify OnChange = {read=FOnChange, write=FOnChange};
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  DeleteProperty(const System::UnicodeString APropertyName){ TdxSkinPersistent::DeleteProperty(APropertyName); }
	
private:
	void *__IdxSkinColorPalette;	// IdxSkinColorPalette 
	void *__IdxColorPalette;	// Dxcoregraphics::IdxColorPalette 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {A7511E95-1577-41D3-ACB8-12F34E79AF1B}
	operator _di_IdxSkinColorPalette()
	{
		_di_IdxSkinColorPalette intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxSkinColorPalette*(void) { return (IdxSkinColorPalette*)&__IdxSkinColorPalette; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {D0CB7E80-BE5A-4532-972C-5046B346FDA5}
	operator Dxcoregraphics::_di_IdxColorPalette()
	{
		Dxcoregraphics::_di_IdxColorPalette intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxcoregraphics::IdxColorPalette*(void) { return (Dxcoregraphics::IdxColorPalette*)&__IdxColorPalette; }
	#endif
	
};


typedef System::StaticArray<System::UnicodeString, 5> Dxskinscore__63;

typedef System::StaticArray<System::UnicodeString, 11> Dxskinscore__73;

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TdxSkinSignature dxSkinSignature;
extern DELPHI_PACKAGE double dxSkinStreamVersion;
#define dxSkinImageExt L".png"
#define dxSkinVectorImageExt L".svg"
extern DELPHI_PACKAGE Dxskinscore__63 dxSkinElementTextColorPropertyNames;
extern DELPHI_PACKAGE Dxskinscore__73 dxSkinElementStateNames;
extern DELPHI_PACKAGE System::StaticArray<Dxgdiplusapi::LinearGradientMode, 4> dxSkinsGradientModeMap;
extern DELPHI_PACKAGE TdxSkinImageSet dxSkinsUseImageSet;
extern DELPHI_PACKAGE System::UnicodeString __fastcall dxSkinGetAlternateImageAttrsPropertyName(TdxSkinElementState AState, int AImageIndex = 0x0);
extern DELPHI_PACKAGE System::UnicodeString __fastcall dxSkinReadStringFromStream(System::Classes::TStream* AStream);
extern DELPHI_PACKAGE System::WideString __fastcall dxSkinReadWideStringFromStream(System::Classes::TStream* AStream);
extern DELPHI_PACKAGE void __fastcall dxSkinWriteStringToStream(System::Classes::TStream* AStream, const System::UnicodeString AValue);
extern DELPHI_PACKAGE void __fastcall dxSkinWriteWideStringToStream(System::Classes::TStream* AStream, const System::WideString AValue);
extern DELPHI_PACKAGE System::Classes::TList* __fastcall dxSkinRegisteredPropertyTypes(void);
extern DELPHI_PACKAGE void __fastcall dxSkinInvalidOperation(const System::UnicodeString AMessage);
extern DELPHI_PACKAGE void __fastcall dxSkinCheck(bool ACondition, const System::UnicodeString AMessage);
extern DELPHI_PACKAGE void __fastcall dxSkinCheckVersion(const double AVersion);
extern DELPHI_PACKAGE bool __fastcall dxSkinCheckSignature(System::Classes::TStream* AStream, /* out */ double &AVersion);
extern DELPHI_PACKAGE TdxSkinElement* __fastcall dxSkinCheckSkinElement(TdxSkinElement* AElement);
extern DELPHI_PACKAGE void __fastcall dxSkinWriteSignature(System::Classes::TStream* AStream);
extern DELPHI_PACKAGE Dxcoregraphics::TdxAlphaColor __fastcall dxSkinCalculateBorderColor(TdxSkinElement* AElement, Cxgeometry::TcxBorder ABorder, int AImageIndex = 0x0, TdxSkinElementState AState = (TdxSkinElementState)(0x0));
extern DELPHI_PACKAGE void __fastcall dxSkinsCalculatePartsBounds(const System::Types::TRect &R, const System::Types::TRect &AMargins, void *AParts);
extern DELPHI_PACKAGE void __fastcall dxSkinsCheckMargins(System::Types::TRect &AMargins, const System::Types::TRect &R);
extern DELPHI_PACKAGE TdxSkinElementState __fastcall dxSkinElementCheckState(TdxSkinElement* AElement, TdxSkinElementState AState);
extern DELPHI_PACKAGE System::Types::TSize __fastcall dxSkinGetElementSize(TdxSkinElement* AElement, Cxgeometry::TdxScaleFactor* AScaleFactor = (Cxgeometry::TdxScaleFactor*)(0x0));
extern DELPHI_PACKAGE bool __fastcall dxSkinColorIsAssigned(TdxSkinColor* AColor)/* overload */;
extern DELPHI_PACKAGE bool __fastcall dxSkinColorIsAssigned(TdxSkinAlphaColor* AColor)/* overload */;
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall dxSkinColorSelect(bool AIsHighlighted, TdxSkinColor* AHighlightColor, TdxSkinColor* AColor);
}	/* namespace Dxskinscore */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXSKINSCORE)
using namespace Dxskinscore;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxskinscoreHPP
