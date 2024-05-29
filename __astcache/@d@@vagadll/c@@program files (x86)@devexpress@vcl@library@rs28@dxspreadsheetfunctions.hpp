// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxSpreadSheetFunctions.pas' rev: 35.00 (Windows)

#ifndef DxspreadsheetfunctionsHPP
#define DxspreadsheetfunctionsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Types.hpp>
#include <dxCore.hpp>
#include <dxCoreClasses.hpp>
#include <cxClasses.hpp>
#include <dxSpreadSheetClasses.hpp>
#include <dxSpreadSheetCoreFormulas.hpp>
#include <dxSpreadSheetCoreStrs.hpp>
#include <dxSpreadSheetTypes.hpp>
#include <dxSpreadSheetUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxspreadsheetfunctions
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TdxSpreadSheetFunctionInfo;
class DELPHICLASS TdxSpreadSheetFunctionsRepository;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (*TdxSpreadSheetFunction)(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaResult* Sender, Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* const AParams);

typedef void __fastcall (*TdxSpreadSheetFunctionParamInfo)(int &AParamCount, Dxspreadsheetcoreformulas::TdxSpreadSheetFunctionParamKindInfo &AParamKind);

enum DECLSPEC_DENUM TdxSpreadSheetFunctionType : unsigned char { ftCommon, ftCompatibility, ftDateTime, ftMath, ftFinancial, ftInformation, ftLookupAndReference, ftLogical, ftStatistical, ftText, ftCube, ftDatabase, ftEngineering };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetFunctionInfo : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	bool AvailableInContainerControls;
	void *DescriptionPtr;
	void *NamePtr;
	System::UnicodeString Name;
	int PrefixID;
	TdxSpreadSheetFunction Proc;
	TdxSpreadSheetFunctionParamInfo ParamInfo;
	Dxspreadsheetcoreformulas::TdxSpreadSheetFunctionResultKind ResultKind;
	System::Word Token;
	TdxSpreadSheetFunctionType TypeID;
	System::UnicodeString __fastcall GetPrefix();
	bool __fastcall IsValid();
	virtual System::UnicodeString __fastcall ToString();
	void __fastcall UpdateInfo(Dxspreadsheetclasses::TdxSpreadSheetFormatSettings* AFormatSettings);
public:
	/* TObject.Create */ inline __fastcall TdxSpreadSheetFunctionInfo() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSpreadSheetFunctionInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetFunctionsRepository : public Cxclasses::TcxObjectList
{
	typedef Cxclasses::TcxObjectList inherited;
	
public:
	TdxSpreadSheetFunctionInfo* operator[](int Index) { return this->Items[Index]; }
	
private:
	bool FSorted;
	HIDESBASE TdxSpreadSheetFunctionInfo* __fastcall GetItem(int AIndex);
	void __fastcall SetSorted(bool AValue);
	
protected:
	void __fastcall InternalAdd(const void * AName, TdxSpreadSheetFunction AProc, TdxSpreadSheetFunctionParamInfo AParamInfo, Dxspreadsheetcoreformulas::TdxSpreadSheetFunctionResultKind AResultKind, System::Word AToken, TdxSpreadSheetFunctionType AType = (TdxSpreadSheetFunctionType)(0x0), const void * ADescription = (void *)(0x0), int APrefixID = 0x0, bool AAvailableInContainerControls = true);
	__property bool Sorted = {read=FSorted, write=SetSorted, nodefault};
	
public:
	HIDESBASE void __fastcall Add(const void * AName, TdxSpreadSheetFunction AProc, TdxSpreadSheetFunctionParamInfo AParamInfo, Dxspreadsheetcoreformulas::TdxSpreadSheetFunctionResultKind AResultKind, System::Word AToken, TdxSpreadSheetFunctionType AType = (TdxSpreadSheetFunctionType)(0x0), const void * ADescription = (void *)(0x0), int APrefixID = 0x0, bool AAvailableInContainerControls = true);
	TdxSpreadSheetFunctionInfo* __fastcall AddUnknown(const System::UnicodeString AName, TdxSpreadSheetFunctionType AType = (TdxSpreadSheetFunctionType)(0x0));
	TdxSpreadSheetFunctionInfo* __fastcall GetInfoByID(const int ID);
	TdxSpreadSheetFunctionInfo* __fastcall GetInfoByName(const System::UnicodeString AName)/* overload */;
	TdxSpreadSheetFunctionInfo* __fastcall GetInfoByName(const System::WideChar * AName, int ALength)/* overload */;
	HIDESBASE void __fastcall Remove(const void * AName);
	void __fastcall TranslationChanged(Dxspreadsheetclasses::TdxSpreadSheetFormatSettings* AFormatSettings);
	bool __fastcall HasFunctions(TdxSpreadSheetFunctionType AFunctionType);
	__property TdxSpreadSheetFunctionInfo* Items[int Index] = {read=GetItem/*, default*/};
public:
	/* TcxObjectList.Create */ inline __fastcall TdxSpreadSheetFunctionsRepository(bool AOwnObjects) : Cxclasses::TcxObjectList(AOwnObjects) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TdxSpreadSheetFunctionsRepository() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TdxSpreadSheetFunctionsRepository* __fastcall dxSpreadSheetFunctionsRepository(void);
extern DELPHI_PACKAGE void * __fastcall dxSpreadSheetFunctionTypeNameAsResString(TdxSpreadSheetFunctionType AType);
extern DELPHI_PACKAGE System::UnicodeString __fastcall dxSpreadSheetFunctionTypeNameAsString(TdxSpreadSheetFunctionType AType);
}	/* namespace Dxspreadsheetfunctions */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXSPREADSHEETFUNCTIONS)
using namespace Dxspreadsheetfunctions;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxspreadsheetfunctionsHPP
