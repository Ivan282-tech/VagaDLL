// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxData.pas' rev: 35.00 (Windows)

#ifndef CxdataHPP
#define CxdataHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <cxCustomData.hpp>
#include <dxCoreClasses.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxdata
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxDataController;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TcxDataController : public Cxcustomdata::TcxCustomDataController
{
	typedef Cxcustomdata::TcxCustomDataController inherited;
	
public:
	__fastcall virtual TcxDataController(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TcxDataController();
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Cxdata */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXDATA)
using namespace Cxdata;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxdataHPP
