// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxStorage.pas' rev: 35.00 (Windows)

#ifndef CxstorageHPP
#define CxstorageHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Variants.hpp>
#include <Winapi.Windows.hpp>
#include <System.Win.Registry.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.TypInfo.hpp>
#include <System.IniFiles.hpp>
#include <dxCore.hpp>
#include <cxClasses.hpp>
#include <cxLibraryStrs.hpp>
#include <cxGeometry.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxstorage
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IcxStoredObject;
typedef System::DelphiInterface<IcxStoredObject> _di_IcxStoredObject;
__interface DELPHIINTERFACE IcxStoredObject2;
typedef System::DelphiInterface<IcxStoredObject2> _di_IcxStoredObject2;
__interface DELPHIINTERFACE IcxStoredParent;
typedef System::DelphiInterface<IcxStoredParent> _di_IcxStoredParent;
__interface DELPHIINTERFACE IcxStoredParent2;
typedef System::DelphiInterface<IcxStoredParent2> _di_IcxStoredParent2;
class DELPHICLASS EcxStorage;
class DELPHICLASS EcxHexStringConvertError;
class DELPHICLASS TcxStorage;
class DELPHICLASS TcxCustomReader;
class DELPHICLASS TcxCustomWriter;
class DELPHICLASS TcxRegistryReader;
class DELPHICLASS TcxRegistryWriter;
class DELPHICLASS TcxIniFileReader;
class DELPHICLASS TcxIniFileWriter;
class DELPHICLASS TcxStreamReader;
class DELPHICLASS TcxStreamWriter;
class DELPHICLASS TcxStreamPropertyData;
class DELPHICLASS TcxStreamObjectData;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{79A05009-CAC3-47E8-B454-F6F3D91F495D}") IcxStoredObject  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetObjectName() = 0 ;
	virtual bool __fastcall GetProperties(System::Classes::TStrings* AProperties) = 0 ;
	virtual void __fastcall GetPropertyValue(const System::UnicodeString AName, System::Variant &AValue) = 0 ;
	virtual void __fastcall SetPropertyValue(const System::UnicodeString AName, const System::Variant &AValue) = 0 ;
};

__interface  INTERFACE_UUID("{770DF537-C44D-4B54-A226-4195ED234F9E}") IcxStoredObject2  : public System::IInterface 
{
	virtual bool __fastcall CanDelete() = 0 ;
};

__interface  INTERFACE_UUID("{6AF48CD0-3A0B-4BEC-AC88-5D323432A686}") IcxStoredParent  : public System::IInterface 
{
	virtual System::TObject* __fastcall CreateChild(const System::UnicodeString AObjectName, const System::UnicodeString AClassName) = 0 ;
	virtual void __fastcall DeleteChild(const System::UnicodeString AObjectName, System::TObject* AObject) = 0 ;
	virtual void __fastcall GetChildren(System::Classes::TStringList* AChildren) = 0 ;
};

__interface  INTERFACE_UUID("{337024FA-3C2E-4870-97D3-1467DAB60E2E}") IcxStoredParent2  : public System::IInterface 
{
	virtual void __fastcall StoringBegin() = 0 ;
	virtual void __fastcall StoringEnd() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION EcxStorage : public Dxcore::EdxException
{
	typedef Dxcore::EdxException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EcxStorage(const System::UnicodeString Msg) : Dxcore::EdxException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EcxStorage(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Dxcore::EdxException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EcxStorage(NativeUInt Ident)/* overload */ : Dxcore::EdxException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EcxStorage(System::PResStringRec ResStringRec)/* overload */ : Dxcore::EdxException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EcxStorage(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Dxcore::EdxException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EcxStorage(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Dxcore::EdxException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EcxStorage(const System::UnicodeString Msg, int AHelpContext) : Dxcore::EdxException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EcxStorage(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Dxcore::EdxException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EcxStorage(NativeUInt Ident, int AHelpContext)/* overload */ : Dxcore::EdxException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EcxStorage(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Dxcore::EdxException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EcxStorage(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Dxcore::EdxException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EcxStorage(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Dxcore::EdxException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EcxStorage() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EcxHexStringConvertError : public Dxcore::EdxException
{
	typedef Dxcore::EdxException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EcxHexStringConvertError(const System::UnicodeString Msg) : Dxcore::EdxException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EcxHexStringConvertError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Dxcore::EdxException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EcxHexStringConvertError(NativeUInt Ident)/* overload */ : Dxcore::EdxException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EcxHexStringConvertError(System::PResStringRec ResStringRec)/* overload */ : Dxcore::EdxException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EcxHexStringConvertError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Dxcore::EdxException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EcxHexStringConvertError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Dxcore::EdxException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EcxHexStringConvertError(const System::UnicodeString Msg, int AHelpContext) : Dxcore::EdxException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EcxHexStringConvertError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Dxcore::EdxException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EcxHexStringConvertError(NativeUInt Ident, int AHelpContext)/* overload */ : Dxcore::EdxException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EcxHexStringConvertError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Dxcore::EdxException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EcxHexStringConvertError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Dxcore::EdxException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EcxHexStringConvertError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Dxcore::EdxException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EcxHexStringConvertError() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TcxStorageMode : unsigned char { smChildrenCreating, smChildrenDeleting, smSavePublishedClassProperties };

typedef System::Set<TcxStorageMode, TcxStorageMode::smChildrenCreating, TcxStorageMode::smSavePublishedClassProperties> TcxStorageModes;

typedef System::TMetaClass* TcxCustomReaderClass;

typedef System::TMetaClass* TcxCustomWriterClass;

typedef TcxStorageModes __fastcall (__closure *TcxGetStorageModesEvent)(void);

typedef bool __fastcall (__closure *TcxTestClassPropertyEvent)(const System::UnicodeString AName, System::TObject* AObject);

typedef System::Classes::TComponent* __fastcall (__closure *TcxGetComponentByNameEvent)(const System::UnicodeString AName);

typedef bool __fastcall (__closure *TcxGetUseInterfaceOnlyEvent)(void);

typedef void __fastcall (__closure *TcxGetStoredPropertiesEvent)(System::TObject* Sender, System::Classes::TStrings* AProperties);

typedef void __fastcall (__closure *TcxGetStoredPropertyValueEvent)(System::TObject* Sender, const System::UnicodeString AName, System::Variant &AValue);

typedef void __fastcall (__closure *TcxInitStoredObjectEvent)(System::TObject* Sender, System::TObject* AObject);

typedef void __fastcall (__closure *TcxSetStoredPropertyValueEvent)(System::TObject* Sender, const System::UnicodeString AName, const System::Variant &AValue);

typedef bool __fastcall (__closure *TcxSetStoredPropertyValueErrorEvent)(TcxStorage* Sender, const System::UnicodeString AName, const System::Variant &AValue);

enum DECLSPEC_DENUM TcxStorageType : unsigned char { stIniFile, stRegistry, stStream };

class PASCALIMPLEMENTATION TcxStorage : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	#define TcxStorage_sPropertySourceDPI L"SourceDPI"
	
	TcxStorageModes FModes;
	System::UnicodeString FNamePrefix;
	System::UnicodeString FObjectNamePrefix;
	bool FReCreate;
	bool FSaveComponentPropertiesByName;
	System::UnicodeString FStorageName;
	int FStoredDPI;
	System::TObject* FStoredObject;
	int FStoredObjectPrevDPI;
	System::Classes::TStream* FStream;
	bool FUseInterfaceOnly;
	TcxGetComponentByNameEvent FOnGetComponentByName;
	TcxGetStorageModesEvent FOnGetStorageModes;
	TcxGetUseInterfaceOnlyEvent FOnGetUseInterfaceOnly;
	TcxSetStoredPropertyValueErrorEvent FOnSetStoredPropertyValueError;
	TcxTestClassPropertyEvent FOnTestClassProperty;
	System::TObject* __fastcall CreateChild(const System::UnicodeString AObjectName, const System::UnicodeString AClassName);
	void __fastcall CreateChildrenNames(System::Classes::TStringList* AChildren);
	void __fastcall DeleteChild(const System::UnicodeString AObjectName, System::TObject* AObject);
	void __fastcall GetAllPublishedClassProperties(System::Classes::TStrings* AProperties);
	void __fastcall GetAllPublishedProperties(System::Classes::TStrings* AProperties)/* overload */;
	void __fastcall GetAllPublishedProperties(System::Classes::TStrings* AProperties, System::Typinfo::TTypeKinds ATypeKinds)/* overload */;
	void __fastcall GetChildren(System::Classes::TStringList* AChildren);
	System::TObject* __fastcall GetClassProperty(const System::UnicodeString AName);
	System::Classes::TComponent* __fastcall GetComponentByName(const System::UnicodeString AName);
	System::UnicodeString __fastcall GetObjectName(System::TObject* AObject);
	void __fastcall GetProperties(System::Classes::TStrings* AProperties);
	System::Variant __fastcall GetPropertyValue(const System::UnicodeString AName);
	TcxStorageModes __fastcall GetStorageModes();
	bool __fastcall GetUseInterfaceOnly();
	void __fastcall ScaleStoredObjectForPPI(int ATargetPPI);
	void __fastcall SetPropertyValue(const System::UnicodeString AName, const System::Variant &AValue);
	void __fastcall StoringBegin();
	void __fastcall StoringEnd();
	bool __fastcall TestClassProperty(const System::UnicodeString AName, System::TObject* AObject);
	
protected:
	void __fastcall ClearObjectData(TcxCustomWriter* AWriter);
	System::UnicodeString __fastcall GetFullObjectName(const System::UnicodeString ADefaultObjectName = System::UnicodeString());
	void __fastcall InternalCheckChildrenOrder(System::Classes::TStringList* AChildrenNames, System::Classes::TStringList* AChildrenClassNames);
	virtual void __fastcall InternalRestoreFrom(TcxCustomReader* AReader, const System::UnicodeString ADefaultObjectName = System::UnicodeString());
	virtual void __fastcall InternalStoreTo(TcxCustomWriter* AWriter, const System::UnicodeString ADefaultObjectName = System::UnicodeString());
	void __fastcall SetStoredObject(System::TObject* AObject);
	
public:
	__fastcall TcxStorage(const System::UnicodeString AStorageName, System::Classes::TStream* AStorageStream)/* overload */;
	__fastcall TcxStorage(const System::UnicodeString AStorageName)/* overload */;
	__fastcall TcxStorage(System::Classes::TStream* AStream)/* overload */;
	virtual void __fastcall RestoreFrom(System::TObject* AObject, TcxCustomReaderClass AReaderClass);
	virtual void __fastcall RestoreWithExistingReader(System::TObject* AObject, TcxCustomReader* AReader);
	void __fastcall RestoreFromIni(System::TObject* AObject);
	void __fastcall RestoreFromRegistry(System::TObject* AObject);
	void __fastcall RestoreFromStream(System::TObject* AObject);
	virtual void __fastcall StoreTo(System::TObject* AObject, TcxCustomWriterClass AWriterClass);
	virtual void __fastcall StoreWithExistingWriter(System::TObject* AObject, TcxCustomWriter* AWriter);
	void __fastcall StoreToIni(System::TObject* AObject);
	void __fastcall StoreToRegistry(System::TObject* AObject);
	void __fastcall StoreToStream(System::TObject* AObject);
	__property System::UnicodeString NamePrefix = {read=FNamePrefix, write=FNamePrefix};
	__property TcxStorageModes Modes = {read=FModes, write=FModes, nodefault};
	__property bool ReCreate = {read=FReCreate, write=FReCreate, nodefault};
	__property bool SaveComponentPropertiesByName = {read=FSaveComponentPropertiesByName, write=FSaveComponentPropertiesByName, nodefault};
	__property int StoredDPI = {read=FStoredDPI, nodefault};
	__property System::TObject* StoredObject = {read=FStoredObject};
	__property System::UnicodeString StorageName = {read=FStorageName, write=FStorageName};
	__property bool UseInterfaceOnly = {read=FUseInterfaceOnly, write=FUseInterfaceOnly, nodefault};
	__property TcxGetComponentByNameEvent OnGetComponentByName = {read=FOnGetComponentByName, write=FOnGetComponentByName};
	__property TcxGetStorageModesEvent OnGetStorageModes = {read=FOnGetStorageModes, write=FOnGetStorageModes};
	__property TcxGetUseInterfaceOnlyEvent OnGetUseInterfaceOnly = {read=FOnGetUseInterfaceOnly, write=FOnGetUseInterfaceOnly};
	__property TcxTestClassPropertyEvent OnTestClassProperty = {read=FOnTestClassProperty, write=FOnTestClassProperty};
	__property TcxSetStoredPropertyValueErrorEvent OnSetStoredPropertyValueError = {read=FOnSetStoredPropertyValueError, write=FOnSetStoredPropertyValueError};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxStorage() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomReader : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FStorageVersion;
	System::UnicodeString FStorageName;
	System::Classes::TStream* FStorageStream;
	
protected:
	virtual bool __fastcall CanRead();
	virtual void __fastcall DoSetStream(System::Classes::TStream* AStream);
	virtual void __fastcall BeginRead();
	virtual void __fastcall EndRead();
	
public:
	__fastcall virtual TcxCustomReader(const System::UnicodeString AStorageName)/* overload */;
	__fastcall virtual TcxCustomReader(const System::UnicodeString AStorageName, System::Classes::TStream* AStorageStream)/* overload */;
	virtual void __fastcall ReadProperties(const System::UnicodeString AObjectName, const System::UnicodeString AClassName, System::Classes::TStrings* AProperties);
	virtual System::Variant __fastcall ReadProperty(const System::UnicodeString AObjectName, const System::UnicodeString AClassName, const System::UnicodeString AName);
	virtual void __fastcall ReadChildren(const System::UnicodeString AObjectName, const System::UnicodeString AClassName, System::Classes::TStrings* AChildrenNames, System::Classes::TStrings* AChildrenClassNames);
	void __fastcall SetStream(System::Classes::TStream* AStream);
	__property System::UnicodeString StorageName = {read=FStorageName};
	__property System::Classes::TStream* StorageStream = {read=FStorageStream};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomReader() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomWriter : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	bool FReCreate;
	System::UnicodeString FStorageName;
	System::Classes::TStream* FStorageStream;
	virtual bool __fastcall CanWrite();
	virtual void __fastcall ClearObjectData(const System::UnicodeString AObjectFullName, const System::UnicodeString AClassName);
	virtual void __fastcall DoSetStream(System::Classes::TStream* AStream);
	virtual void __fastcall BeginWrite();
	virtual void __fastcall EndWrite();
	
public:
	__fastcall virtual TcxCustomWriter(const System::UnicodeString AStorageName, bool AReCreate)/* overload */;
	__fastcall virtual TcxCustomWriter(const System::UnicodeString AStorageName, System::Classes::TStream* AStorageStream, bool AReCreate)/* overload */;
	virtual void __fastcall BeginWriteObject(const System::UnicodeString AObjectName, const System::UnicodeString AClassName);
	virtual void __fastcall EndWriteObject(const System::UnicodeString AObjectName, const System::UnicodeString AClassName);
	void __fastcall SetStream(System::Classes::TStream* AStream);
	virtual void __fastcall WriteProperty(const System::UnicodeString AObjectName, const System::UnicodeString AClassName, const System::UnicodeString AName, const System::Variant &AValue);
	__property bool ReCreate = {read=FReCreate, write=FReCreate, nodefault};
	__property System::UnicodeString StorageName = {read=FStorageName};
	__property System::Classes::TStream* StorageStream = {read=FStorageStream};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomWriter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxRegistryReader : public TcxCustomReader
{
	typedef TcxCustomReader inherited;
	
private:
	System::Win::Registry::TRegistry* FRegistry;
	
protected:
	__property System::Win::Registry::TRegistry* Registry = {read=FRegistry};
	
public:
	__fastcall virtual TcxRegistryReader(const System::UnicodeString AStorageName, System::Classes::TStream* AStorageStream)/* overload */;
	__fastcall virtual ~TcxRegistryReader();
	virtual void __fastcall ReadProperties(const System::UnicodeString AObjectName, const System::UnicodeString AClassName, System::Classes::TStrings* AProperties);
	virtual System::Variant __fastcall ReadProperty(const System::UnicodeString AObjectName, const System::UnicodeString AClassName, const System::UnicodeString AName);
	virtual void __fastcall ReadChildren(const System::UnicodeString AObjectName, const System::UnicodeString AClassName, System::Classes::TStrings* AChildrenNames, System::Classes::TStrings* AChildrenClassNames);
public:
	/* TcxCustomReader.Create */ inline __fastcall virtual TcxRegistryReader(const System::UnicodeString AStorageName)/* overload */ : TcxCustomReader(AStorageName) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxRegistryWriter : public TcxCustomWriter
{
	typedef TcxCustomWriter inherited;
	
private:
	System::Win::Registry::TRegistry* FRegistry;
	bool FRootKeyCreated;
	bool FRootKeyOpened;
	void __fastcall CreateRootKey();
	System::UnicodeString __fastcall GetKeyName(const System::UnicodeString AObjectName);
	
protected:
	virtual void __fastcall ClearObjectData(const System::UnicodeString AObjectFullName, const System::UnicodeString AClassName);
	__property System::Win::Registry::TRegistry* Registry = {read=FRegistry};
	
public:
	__fastcall virtual TcxRegistryWriter(const System::UnicodeString AStorageName, System::Classes::TStream* AStream, bool AReCreate)/* overload */;
	__fastcall virtual ~TcxRegistryWriter();
	virtual void __fastcall BeginWriteObject(const System::UnicodeString AObjectName, const System::UnicodeString AClassName);
	virtual void __fastcall EndWriteObject(const System::UnicodeString AObjectName, const System::UnicodeString AClassName);
	virtual void __fastcall WriteProperty(const System::UnicodeString AObjectName, const System::UnicodeString AClassName, const System::UnicodeString AName, const System::Variant &AValue);
public:
	/* TcxCustomWriter.Create */ inline __fastcall virtual TcxRegistryWriter(const System::UnicodeString AStorageName, bool AReCreate)/* overload */ : TcxCustomWriter(AStorageName, AReCreate) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxIniFileReader : public TcxCustomReader
{
	typedef TcxCustomReader inherited;
	
private:
	System::Inifiles::TMemIniFile* FIniFile;
	System::Classes::TStringList* FPathList;
	System::Classes::TStringList* FObjectNameList;
	System::Classes::TStringList* FClassNameList;
	System::UnicodeString __fastcall DecodeString(System::UnicodeString S);
	void __fastcall CreateLists();
	void __fastcall GetSectionDetail(const System::UnicodeString ASection, System::UnicodeString &APath, System::UnicodeString &AObjectName, System::UnicodeString &AClassName);
	
protected:
	virtual void __fastcall BeginRead();
	virtual bool __fastcall CanRead();
	__property System::Inifiles::TMemIniFile* IniFile = {read=FIniFile};
	
public:
	__fastcall virtual TcxIniFileReader(const System::UnicodeString AStorageName, System::Classes::TStream* AStorageStream)/* overload */;
	__fastcall virtual ~TcxIniFileReader();
	virtual void __fastcall ReadProperties(const System::UnicodeString AObjectName, const System::UnicodeString AClassName, System::Classes::TStrings* AProperties);
	virtual System::Variant __fastcall ReadProperty(const System::UnicodeString AObjectName, const System::UnicodeString AClassName, const System::UnicodeString AName);
	virtual void __fastcall ReadChildren(const System::UnicodeString AObjectName, const System::UnicodeString AClassName, System::Classes::TStrings* AChildrenNames, System::Classes::TStrings* AChildrenClassNames);
public:
	/* TcxCustomReader.Create */ inline __fastcall virtual TcxIniFileReader(const System::UnicodeString AStorageName)/* overload */ : TcxCustomReader(AStorageName) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxIniFileWriter : public TcxCustomWriter
{
	typedef TcxCustomWriter inherited;
	
private:
	static const System::Int8 cxIniFileStorageVersion = System::Int8(0x2);
	
	System::Inifiles::TMemIniFile* FIniFile;
	System::UnicodeString __fastcall EncodeString(const System::UnicodeString S);
	
protected:
	virtual void __fastcall BeginWrite();
	virtual void __fastcall ClearObjectData(const System::UnicodeString AObjectFullName, const System::UnicodeString AClassName);
	virtual void __fastcall EndWrite();
	__property System::Inifiles::TMemIniFile* IniFile = {read=FIniFile};
	
public:
	__fastcall virtual TcxIniFileWriter(const System::UnicodeString AStorageName, System::Classes::TStream* AStream, bool AReCreate)/* overload */;
	__fastcall virtual ~TcxIniFileWriter();
	virtual void __fastcall BeginWriteObject(const System::UnicodeString AObjectName, const System::UnicodeString AClassName);
	virtual void __fastcall WriteProperty(const System::UnicodeString AObjectName, const System::UnicodeString AClassName, const System::UnicodeString AName, const System::Variant &AValue);
public:
	/* TcxCustomWriter.Create */ inline __fastcall virtual TcxIniFileWriter(const System::UnicodeString AStorageName, bool AReCreate)/* overload */ : TcxCustomWriter(AStorageName, AReCreate) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxStreamReader : public TcxCustomReader
{
	typedef TcxCustomReader inherited;
	
private:
	TcxStreamObjectData* FCurrentObject;
	System::UnicodeString FCurrentObjectFullName;
	TcxStreamObjectData* FRootObject;
	System::Classes::TReader* FReader;
	TcxStreamObjectData* __fastcall GetObject(const System::UnicodeString AObjectFullName);
	TcxStreamPropertyData* __fastcall GetProperty(TcxStreamObjectData* AObject, const System::UnicodeString AName);
	TcxStreamObjectData* __fastcall InternalGetObject(const System::UnicodeString AObjectName, System::Classes::TStrings* AParents);
	
protected:
	virtual bool __fastcall CanRead();
	virtual void __fastcall DoSetStream(System::Classes::TStream* AStream);
	virtual void __fastcall BeginRead();
	
public:
	__fastcall virtual ~TcxStreamReader();
	void __fastcall Read();
	virtual void __fastcall ReadProperties(const System::UnicodeString AObjectName, const System::UnicodeString AClassName, System::Classes::TStrings* AProperties);
	virtual System::Variant __fastcall ReadProperty(const System::UnicodeString AObjectName, const System::UnicodeString AClassName, const System::UnicodeString AName);
	virtual void __fastcall ReadChildren(const System::UnicodeString AObjectName, const System::UnicodeString AClassName, System::Classes::TStrings* AChildrenNames, System::Classes::TStrings* AChildrenClassNames);
public:
	/* TcxCustomReader.Create */ inline __fastcall virtual TcxStreamReader(const System::UnicodeString AStorageName)/* overload */ : TcxCustomReader(AStorageName) { }
	/* TcxCustomReader.Create */ inline __fastcall virtual TcxStreamReader(const System::UnicodeString AStorageName, System::Classes::TStream* AStorageStream)/* overload */ : TcxCustomReader(AStorageName, AStorageStream) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxStreamWriter : public TcxCustomWriter
{
	typedef TcxCustomWriter inherited;
	
private:
	TcxStreamObjectData* FCurrentObject;
	TcxStreamObjectData* FRootObject;
	System::Classes::TWriter* FWriter;
	void __fastcall CreateObject(const System::UnicodeString AObjectName, const System::UnicodeString AClassName, System::Classes::TStrings* AParents);
	
protected:
	virtual bool __fastcall CanWrite();
	virtual void __fastcall DoSetStream(System::Classes::TStream* AStream);
	virtual void __fastcall EndWrite();
	
public:
	__fastcall virtual ~TcxStreamWriter();
	virtual void __fastcall BeginWriteObject(const System::UnicodeString AObjectName, const System::UnicodeString AClassName);
	void __fastcall Write();
	virtual void __fastcall WriteProperty(const System::UnicodeString AObjectName, const System::UnicodeString AClassName, const System::UnicodeString AName, const System::Variant &AValue);
public:
	/* TcxCustomWriter.Create */ inline __fastcall virtual TcxStreamWriter(const System::UnicodeString AStorageName, bool AReCreate)/* overload */ : TcxCustomWriter(AStorageName, AReCreate) { }
	/* TcxCustomWriter.Create */ inline __fastcall virtual TcxStreamWriter(const System::UnicodeString AStorageName, System::Classes::TStream* AStorageStream, bool AReCreate)/* overload */ : TcxCustomWriter(AStorageName, AStorageStream, AReCreate) { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxStreamPropertyData : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FName;
	System::Variant FValue;
	void __fastcall ReadValue(System::Classes::TReader* AReader);
	void __fastcall WriteValue(System::Classes::TWriter* AWriter);
	
public:
	__fastcall TcxStreamPropertyData(const System::UnicodeString AName, const System::Variant &AValue);
	void __fastcall Read(System::Classes::TReader* AReader);
	void __fastcall Write(System::Classes::TWriter* AWriter);
	__property System::UnicodeString Name = {read=FName};
	__property System::Variant Value = {read=FValue};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxStreamPropertyData() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxStreamObjectData : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FClassName;
	System::Classes::TList* FChildren;
	System::UnicodeString FName;
	System::Classes::TList* FProperties;
	void __fastcall Clear();
	int __fastcall GetChildCount();
	TcxStreamObjectData* __fastcall GetChildren(int AIndex);
	TcxStreamPropertyData* __fastcall GetProperties(int AIndex);
	int __fastcall GetPropertyCount();
	
public:
	__fastcall TcxStreamObjectData(const System::UnicodeString AName, const System::UnicodeString AClassName);
	__fastcall virtual ~TcxStreamObjectData();
	void __fastcall AddChild(TcxStreamObjectData* AChild);
	void __fastcall AddProperty(TcxStreamPropertyData* AProperty);
	void __fastcall Read(System::Classes::TReader* AReader);
	void __fastcall Write(System::Classes::TWriter* AWriter);
	__property int ChildCount = {read=GetChildCount, nodefault};
	__property TcxStreamObjectData* Children[int AIndex] = {read=GetChildren};
	__property System::UnicodeString Name = {read=FName};
	__property System::UnicodeString ClassName_ = {read=FClassName};
	__property TcxStreamPropertyData* Properties[int AIndex] = {read=GetProperties};
	__property int PropertyCount = {read=GetPropertyCount, nodefault};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE int cxBufferSize;
static const System::Int8 cxStreamBoolean = System::Int8(0x1);
static const System::Int8 cxStreamChar = System::Int8(0x2);
static const System::Int8 cxStreamCurrency = System::Int8(0x3);
static const System::Int8 cxStreamDate = System::Int8(0x4);
static const System::Int8 cxStreamFloat = System::Int8(0x5);
static const System::Int8 cxStreamInteger = System::Int8(0x6);
static const System::Int8 cxStreamSingle = System::Int8(0x7);
static const System::Int8 cxStreamString = System::Int8(0x8);
static const System::Int8 cxStreamWideString = System::Int8(0x9);
extern DELPHI_PACKAGE System::UnicodeString __fastcall cxQuotedStr(const System::UnicodeString S, System::WideChar AQuote = (System::WideChar)(0x22));
extern DELPHI_PACKAGE System::UnicodeString __fastcall cxDequotedStr(const System::UnicodeString S);
extern DELPHI_PACKAGE bool __fastcall cxIsQuotedStr(const System::UnicodeString S, System::WideChar AQuote = (System::WideChar)(0x22));
extern DELPHI_PACKAGE System::AnsiString __fastcall StreamToString(System::Classes::TStream* AStream);
extern DELPHI_PACKAGE void __fastcall StringToStream(System::AnsiString AValue, System::Classes::TStream* AStream);
extern DELPHI_PACKAGE System::AnsiString __fastcall StringToHexString(const System::AnsiString ABuffer);
extern DELPHI_PACKAGE System::AnsiString __fastcall HexStringToString(const System::AnsiString AHexString);
extern DELPHI_PACKAGE bool __fastcall StringToBoolean(const System::UnicodeString AString);
extern DELPHI_PACKAGE System::UnicodeString __fastcall EnumerationToString(const int AValue, const System::UnicodeString *AEnumNames, const int AEnumNames_High);
extern DELPHI_PACKAGE int __fastcall StringToEnumeration(const System::UnicodeString AValue, const System::UnicodeString *AEnumNames, const int AEnumNames_High);
extern DELPHI_PACKAGE System::UnicodeString __fastcall SetToString(const void *ASet, int ASize, const System::UnicodeString *AEnumNames, const int AEnumNames_High);
extern DELPHI_PACKAGE void __fastcall StringToSet(System::UnicodeString AString, void *ASet, int ASize, const System::UnicodeString *AEnumNames, const int AEnumNames_High);
}	/* namespace Cxstorage */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXSTORAGE)
using namespace Cxstorage;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxstorageHPP
