// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxEditDataRegisteredRepositoryItems.pas' rev: 35.00 (Windows)

#ifndef CxeditdataregisteredrepositoryitemsHPP
#define CxeditdataregisteredrepositoryitemsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <dxCore.hpp>
#include <cxClasses.hpp>
#include <cxDataStorage.hpp>
#include <cxEdit.hpp>
#include <cxEditRegisteredRepositoryItems.hpp>
#include <cxEditRepositoryItems.hpp>
#include <dxCoreClasses.hpp>
#include <System.Classes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxeditdataregisteredrepositoryitems
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxEditDataRegisteredRepositoryItems;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxEditDataRegisteredRepositoryItems : public Cxeditregisteredrepositoryitems::TcxEditRegisteredRepositoryItems
{
	typedef Cxeditregisteredrepositoryitems::TcxEditRegisteredRepositoryItems inherited;
	
public:
	HIDESBASE Cxedit::TcxEditRepositoryItem* __fastcall GetItem(Cxdatastorage::TcxValueTypeClass AValueTypeClass);
	HIDESBASE void __fastcall RegisterItem(Cxdatastorage::TcxValueTypeClass AValueTypeClass, int AVersion, Cxedit::TcxEditRepositoryItem* ARepositoryItem);
	HIDESBASE void __fastcall UnregisterItem(Cxdatastorage::TcxValueTypeClass AValueTypeClass, int AVersion);
public:
	/* TcxEditRegisteredRepositoryItems.Destroy */ inline __fastcall virtual ~TcxEditDataRegisteredRepositoryItems() { }
	
public:
	/* TcxInterfacedPersistent.Create */ inline __fastcall virtual TcxEditDataRegisteredRepositoryItems(System::Classes::TPersistent* AOwner) : Cxeditregisteredrepositoryitems::TcxEditRegisteredRepositoryItems(AOwner) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TcxEditDataRegisteredRepositoryItems* __fastcall GetDefaultEditDataRepositoryItems(void);
}	/* namespace Cxeditdataregisteredrepositoryitems */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXEDITDATAREGISTEREDREPOSITORYITEMS)
using namespace Cxeditdataregisteredrepositoryitems;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxeditdataregisteredrepositoryitemsHPP
