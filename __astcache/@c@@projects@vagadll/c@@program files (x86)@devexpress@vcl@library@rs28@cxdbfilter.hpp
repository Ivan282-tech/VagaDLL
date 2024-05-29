// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxDBFilter.pas' rev: 35.00 (Windows)

#ifndef CxdbfilterHPP
#define CxdbfilterHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Data.DB.hpp>
#include <cxFilter.hpp>
#include <cxDB.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxdbfilter
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxFilterSQLNullOperator;
class DELPHICLASS TcxFilterSQLNotNullOperator;
class DELPHICLASS TcxFilterSQLIgnoreTimeEqualOperator;
class DELPHICLASS TcxFilterSQLIgnoreTimeNotEqualOperator;
class DELPHICLASS TcxFilterSQLIgnoreTimeLessOperator;
class DELPHICLASS TcxFilterSQLIgnoreTimeLessEqualOperator;
class DELPHICLASS TcxFilterSQLIgnoreTimeGreaterOperator;
class DELPHICLASS TcxFilterSQLIgnoreTimeGreaterEqualOperator;
class DELPHICLASS TcxDBFilterOperatorAdapter;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxFilterSQLNullOperator : public Cxfilter::TcxFilterNullOperator
{
	typedef Cxfilter::TcxFilterNullOperator inherited;
	
public:
	virtual System::UnicodeString __fastcall FilterText();
public:
	/* TcxFilterOperator.Create */ inline __fastcall virtual TcxFilterSQLNullOperator(Cxfilter::TcxFilterCriteriaItem* ACriteriaItem) : Cxfilter::TcxFilterNullOperator(ACriteriaItem) { }
	/* TcxFilterOperator.Destroy */ inline __fastcall virtual ~TcxFilterSQLNullOperator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxFilterSQLNotNullOperator : public Cxfilter::TcxFilterNotNullOperator
{
	typedef Cxfilter::TcxFilterNotNullOperator inherited;
	
public:
	virtual System::UnicodeString __fastcall FilterText();
public:
	/* TcxFilterOperator.Create */ inline __fastcall virtual TcxFilterSQLNotNullOperator(Cxfilter::TcxFilterCriteriaItem* ACriteriaItem) : Cxfilter::TcxFilterNotNullOperator(ACriteriaItem) { }
	/* TcxFilterOperator.Destroy */ inline __fastcall virtual ~TcxFilterSQLNotNullOperator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxFilterSQLIgnoreTimeEqualOperator : public Cxfilter::TcxFilterEqualOperator
{
	typedef Cxfilter::TcxFilterEqualOperator inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetFilterExpressionText(const System::Variant &AValue);
	
public:
	virtual bool __fastcall IsExpression();
public:
	/* TcxFilterOperator.Create */ inline __fastcall virtual TcxFilterSQLIgnoreTimeEqualOperator(Cxfilter::TcxFilterCriteriaItem* ACriteriaItem) : Cxfilter::TcxFilterEqualOperator(ACriteriaItem) { }
	/* TcxFilterOperator.Destroy */ inline __fastcall virtual ~TcxFilterSQLIgnoreTimeEqualOperator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxFilterSQLIgnoreTimeNotEqualOperator : public Cxfilter::TcxFilterNotEqualOperator
{
	typedef Cxfilter::TcxFilterNotEqualOperator inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetFilterExpressionText(const System::Variant &AValue);
	
public:
	virtual bool __fastcall IsExpression();
public:
	/* TcxFilterOperator.Create */ inline __fastcall virtual TcxFilterSQLIgnoreTimeNotEqualOperator(Cxfilter::TcxFilterCriteriaItem* ACriteriaItem) : Cxfilter::TcxFilterNotEqualOperator(ACriteriaItem) { }
	/* TcxFilterOperator.Destroy */ inline __fastcall virtual ~TcxFilterSQLIgnoreTimeNotEqualOperator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxFilterSQLIgnoreTimeLessOperator : public Cxfilter::TcxFilterLessOperator
{
	typedef Cxfilter::TcxFilterLessOperator inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetFilterExpressionValue(const System::Variant &AValue);
public:
	/* TcxFilterOperator.Create */ inline __fastcall virtual TcxFilterSQLIgnoreTimeLessOperator(Cxfilter::TcxFilterCriteriaItem* ACriteriaItem) : Cxfilter::TcxFilterLessOperator(ACriteriaItem) { }
	/* TcxFilterOperator.Destroy */ inline __fastcall virtual ~TcxFilterSQLIgnoreTimeLessOperator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxFilterSQLIgnoreTimeLessEqualOperator : public Cxfilter::TcxFilterLessEqualOperator
{
	typedef Cxfilter::TcxFilterLessEqualOperator inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetFilterExpressionValue(const System::Variant &AValue);
public:
	/* TcxFilterOperator.Create */ inline __fastcall virtual TcxFilterSQLIgnoreTimeLessEqualOperator(Cxfilter::TcxFilterCriteriaItem* ACriteriaItem) : Cxfilter::TcxFilterLessEqualOperator(ACriteriaItem) { }
	/* TcxFilterOperator.Destroy */ inline __fastcall virtual ~TcxFilterSQLIgnoreTimeLessEqualOperator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxFilterSQLIgnoreTimeGreaterOperator : public Cxfilter::TcxFilterGreaterOperator
{
	typedef Cxfilter::TcxFilterGreaterOperator inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetFilterExpressionValue(const System::Variant &AValue);
public:
	/* TcxFilterOperator.Create */ inline __fastcall virtual TcxFilterSQLIgnoreTimeGreaterOperator(Cxfilter::TcxFilterCriteriaItem* ACriteriaItem) : Cxfilter::TcxFilterGreaterOperator(ACriteriaItem) { }
	/* TcxFilterOperator.Destroy */ inline __fastcall virtual ~TcxFilterSQLIgnoreTimeGreaterOperator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxFilterSQLIgnoreTimeGreaterEqualOperator : public Cxfilter::TcxFilterGreaterEqualOperator
{
	typedef Cxfilter::TcxFilterGreaterEqualOperator inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetFilterExpressionValue(const System::Variant &AValue);
public:
	/* TcxFilterOperator.Create */ inline __fastcall virtual TcxFilterSQLIgnoreTimeGreaterEqualOperator(Cxfilter::TcxFilterCriteriaItem* ACriteriaItem) : Cxfilter::TcxFilterGreaterEqualOperator(ACriteriaItem) { }
	/* TcxFilterOperator.Destroy */ inline __fastcall virtual ~TcxFilterSQLIgnoreTimeGreaterEqualOperator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDBFilterOperatorAdapter : public Cxdb::TcxDBAdapterItem
{
	typedef Cxdb::TcxDBAdapterItem inherited;
	
public:
	virtual void __fastcall PrepareOperatorClass(System::TObject* ASender, Data::Db::TDataSet* ADataSet, Cxfilter::TcxFilterOperatorClass &AOperatorClass);
public:
	/* TcxDBAdapterItem.Create */ inline __fastcall virtual TcxDBFilterOperatorAdapter(Cxdb::TDataSetClass ADataSetClass) : Cxdb::TcxDBAdapterItem(ADataSetClass) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxDBFilterOperatorAdapter() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Cxdb::TcxDBAdapterList* cxFilterOperatorAdapters;
extern DELPHI_PACKAGE TcxDBFilterOperatorAdapter* __fastcall cxGetFilterOperatorAdapter(Data::Db::TDataSet* ADataSet);
extern DELPHI_PACKAGE Cxfilter::TcxFilterOperatorClass __fastcall cxGetFilterSQLIgnoreTimeOperatorClass(Cxfilter::TcxFilterOperatorKind AOperatorKind);
}	/* namespace Cxdbfilter */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXDBFILTER)
using namespace Cxdbfilter;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxdbfilterHPP
