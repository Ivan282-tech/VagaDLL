// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxDateRanges.pas' rev: 35.00 (Windows)

#ifndef DxdaterangesHPP
#define DxdaterangesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxdateranges
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IdxDateTimeHandling;
typedef System::DelphiInterface<IdxDateTimeHandling> _di_IdxDateTimeHandling;
__interface DELPHIINTERFACE IdxFilteringDateTimeHandling;
typedef System::DelphiInterface<IdxFilteringDateTimeHandling> _di_IdxFilteringDateTimeHandling;
__interface DELPHIINTERFACE IdxGroupingDateTimeHandling;
typedef System::DelphiInterface<IdxGroupingDateTimeHandling> _di_IdxGroupingDateTimeHandling;
class DELPHICLASS TdxCustomDateRange;
class DELPHICLASS TdxHourRange;
class DELPHICLASS TdxDayRange;
class DELPHICLASS TdxMonthRange;
class DELPHICLASS TdxYearRange;
class DELPHICLASS TdxYesterdayRange;
class DELPHICLASS TdxTodayRange;
class DELPHICLASS TdxTomorrowRange;
class DELPHICLASS TdxLastWeekRange;
class DELPHICLASS TdxThisWeekRange;
class DELPHICLASS TdxNextWeekRange;
class DELPHICLASS TdxLastMonthRange;
class DELPHICLASS TdxThisMonthRange;
class DELPHICLASS TdxNextMonthRange;
class DELPHICLASS TdxLastYearRange;
class DELPHICLASS TdxThisYearRange;
class DELPHICLASS TdxNextYearRange;
class DELPHICLASS TdxDateRanges;
class DELPHICLASS TdxFilteringDateRanges;
class DELPHICLASS TdxGroupingDateRanges;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TdxInitDateRangesEvent)(System::TObject* Sender, TdxDateRanges* ADateRanges);

enum DECLSPEC_DENUM TdxDateTimeFilter : unsigned char { dtfRelativeDays, dtfRelativeDayPeriods, dtfRelativeWeeks, dtfRelativeMonths, dtfRelativeYears, dtfPastFuture, dtfMonths, dtfYears };

typedef System::Set<TdxDateTimeFilter, TdxDateTimeFilter::dtfRelativeDays, TdxDateTimeFilter::dtfYears> TdxDateTimeFilters;

enum DECLSPEC_DENUM TdxDateTimeGrouping : unsigned char { dtgDefault, dtgByDateAndTime, dtgRelativeToToday, dtgByHour, dtgByDate, dtgByMonth, dtgByYear };

__interface  INTERFACE_UUID("{FBFE2378-48D4-4D6C-B93A-9A430D2C6FD6}") IdxDateTimeHandling  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetDateFormat() = 0 ;
	virtual System::UnicodeString __fastcall GetHourFormat() = 0 ;
	virtual System::UnicodeString __fastcall GetMonthFormat() = 0 ;
	virtual System::UnicodeString __fastcall GetYearFormat() = 0 ;
};

__interface  INTERFACE_UUID("{0A6FF65F-FE22-4D0B-A576-1B8A7850C18F}") IdxFilteringDateTimeHandling  : public System::IInterface 
{
	virtual TdxDateTimeFilters __fastcall GetFilters() = 0 ;
};

__interface  INTERFACE_UUID("{8BFD824B-3C6C-4A20-9726-22BF3A0D0F2B}") IdxGroupingDateTimeHandling  : public System::IInterface 
{
	virtual TdxDateTimeGrouping __fastcall GetGrouping() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomDateRange : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TdxDateRanges* FContainer;
	int __fastcall GetIndex();
	void __fastcall SetIndex(int Value);
	
public:
	__fastcall virtual ~TdxCustomDateRange();
	virtual bool __fastcall Contains(const System::TDateTime ADate) = 0 ;
	virtual System::UnicodeString __fastcall GetDisplayText(const System::TDateTime ADate) = 0 ;
	virtual System::Variant __fastcall GetRangeValue(const System::TDateTime ADate, bool AIgnoreTime);
	virtual System::Variant __fastcall GetSortingValue(const System::TDateTime ADate);
	virtual System::Variant __fastcall GetValue(const System::TDateTime ADate) = 0 ;
	virtual bool __fastcall NeedsSortingByTime();
	virtual bool __fastcall NeedsTime();
	__property TdxDateRanges* Container = {read=FContainer};
	__property int Index = {read=GetIndex, write=SetIndex, nodefault};
public:
	/* TObject.Create */ inline __fastcall TdxCustomDateRange() : System::TObject() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TdxCustomDateRangeClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxHourRange : public TdxCustomDateRange
{
	typedef TdxCustomDateRange inherited;
	
public:
	virtual bool __fastcall Contains(const System::TDateTime ADate);
	virtual System::UnicodeString __fastcall GetDisplayText(const System::TDateTime ADate);
	virtual System::Variant __fastcall GetValue(const System::TDateTime ADate);
	virtual bool __fastcall NeedsSortingByTime();
public:
	/* TdxCustomDateRange.Destroy */ inline __fastcall virtual ~TdxHourRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TdxHourRange() : TdxCustomDateRange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxDayRange : public TdxCustomDateRange
{
	typedef TdxCustomDateRange inherited;
	
public:
	virtual bool __fastcall Contains(const System::TDateTime ADate);
	virtual System::UnicodeString __fastcall GetDisplayText(const System::TDateTime ADate);
	virtual System::Variant __fastcall GetValue(const System::TDateTime ADate);
public:
	/* TdxCustomDateRange.Destroy */ inline __fastcall virtual ~TdxDayRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TdxDayRange() : TdxCustomDateRange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxMonthRange : public TdxCustomDateRange
{
	typedef TdxCustomDateRange inherited;
	
public:
	virtual bool __fastcall Contains(const System::TDateTime ADate);
	virtual System::UnicodeString __fastcall GetDisplayText(const System::TDateTime ADate);
	virtual System::Variant __fastcall GetRangeValue(const System::TDateTime ADate, bool AIgnoreTime);
	virtual System::Variant __fastcall GetValue(const System::TDateTime ADate);
public:
	/* TdxCustomDateRange.Destroy */ inline __fastcall virtual ~TdxMonthRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TdxMonthRange() : TdxCustomDateRange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxYearRange : public TdxCustomDateRange
{
	typedef TdxCustomDateRange inherited;
	
public:
	virtual bool __fastcall Contains(const System::TDateTime ADate);
	virtual System::UnicodeString __fastcall GetDisplayText(const System::TDateTime ADate);
	virtual System::Variant __fastcall GetRangeValue(const System::TDateTime ADate, bool AIgnoreTime);
	virtual System::Variant __fastcall GetValue(const System::TDateTime ADate);
public:
	/* TdxCustomDateRange.Destroy */ inline __fastcall virtual ~TdxYearRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TdxYearRange() : TdxCustomDateRange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxYesterdayRange : public TdxCustomDateRange
{
	typedef TdxCustomDateRange inherited;
	
public:
	virtual bool __fastcall Contains(const System::TDateTime ADate);
	virtual System::UnicodeString __fastcall GetDisplayText(const System::TDateTime ADate);
	virtual System::Variant __fastcall GetValue(const System::TDateTime ADate);
public:
	/* TdxCustomDateRange.Destroy */ inline __fastcall virtual ~TdxYesterdayRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TdxYesterdayRange() : TdxCustomDateRange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTodayRange : public TdxCustomDateRange
{
	typedef TdxCustomDateRange inherited;
	
public:
	virtual bool __fastcall Contains(const System::TDateTime ADate);
	virtual System::UnicodeString __fastcall GetDisplayText(const System::TDateTime ADate);
	virtual System::Variant __fastcall GetValue(const System::TDateTime ADate);
public:
	/* TdxCustomDateRange.Destroy */ inline __fastcall virtual ~TdxTodayRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TdxTodayRange() : TdxCustomDateRange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTomorrowRange : public TdxCustomDateRange
{
	typedef TdxCustomDateRange inherited;
	
public:
	virtual bool __fastcall Contains(const System::TDateTime ADate);
	virtual System::UnicodeString __fastcall GetDisplayText(const System::TDateTime ADate);
	virtual System::Variant __fastcall GetValue(const System::TDateTime ADate);
public:
	/* TdxCustomDateRange.Destroy */ inline __fastcall virtual ~TdxTomorrowRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TdxTomorrowRange() : TdxCustomDateRange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLastWeekRange : public TdxCustomDateRange
{
	typedef TdxCustomDateRange inherited;
	
public:
	virtual bool __fastcall Contains(const System::TDateTime ADate);
	virtual System::UnicodeString __fastcall GetDisplayText(const System::TDateTime ADate);
	virtual System::Variant __fastcall GetValue(const System::TDateTime ADate);
public:
	/* TdxCustomDateRange.Destroy */ inline __fastcall virtual ~TdxLastWeekRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TdxLastWeekRange() : TdxCustomDateRange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxThisWeekRange : public TdxCustomDateRange
{
	typedef TdxCustomDateRange inherited;
	
public:
	virtual bool __fastcall Contains(const System::TDateTime ADate);
	virtual System::UnicodeString __fastcall GetDisplayText(const System::TDateTime ADate);
	virtual System::Variant __fastcall GetValue(const System::TDateTime ADate);
public:
	/* TdxCustomDateRange.Destroy */ inline __fastcall virtual ~TdxThisWeekRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TdxThisWeekRange() : TdxCustomDateRange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNextWeekRange : public TdxCustomDateRange
{
	typedef TdxCustomDateRange inherited;
	
public:
	virtual bool __fastcall Contains(const System::TDateTime ADate);
	virtual System::UnicodeString __fastcall GetDisplayText(const System::TDateTime ADate);
	virtual System::Variant __fastcall GetValue(const System::TDateTime ADate);
public:
	/* TdxCustomDateRange.Destroy */ inline __fastcall virtual ~TdxNextWeekRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TdxNextWeekRange() : TdxCustomDateRange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLastMonthRange : public TdxCustomDateRange
{
	typedef TdxCustomDateRange inherited;
	
public:
	virtual bool __fastcall Contains(const System::TDateTime ADate);
	virtual System::UnicodeString __fastcall GetDisplayText(const System::TDateTime ADate);
	virtual System::Variant __fastcall GetValue(const System::TDateTime ADate);
public:
	/* TdxCustomDateRange.Destroy */ inline __fastcall virtual ~TdxLastMonthRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TdxLastMonthRange() : TdxCustomDateRange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxThisMonthRange : public TdxCustomDateRange
{
	typedef TdxCustomDateRange inherited;
	
public:
	virtual bool __fastcall Contains(const System::TDateTime ADate);
	virtual System::UnicodeString __fastcall GetDisplayText(const System::TDateTime ADate);
	virtual System::Variant __fastcall GetValue(const System::TDateTime ADate);
public:
	/* TdxCustomDateRange.Destroy */ inline __fastcall virtual ~TdxThisMonthRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TdxThisMonthRange() : TdxCustomDateRange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNextMonthRange : public TdxCustomDateRange
{
	typedef TdxCustomDateRange inherited;
	
public:
	virtual bool __fastcall Contains(const System::TDateTime ADate);
	virtual System::UnicodeString __fastcall GetDisplayText(const System::TDateTime ADate);
	virtual System::Variant __fastcall GetValue(const System::TDateTime ADate);
public:
	/* TdxCustomDateRange.Destroy */ inline __fastcall virtual ~TdxNextMonthRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TdxNextMonthRange() : TdxCustomDateRange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLastYearRange : public TdxCustomDateRange
{
	typedef TdxCustomDateRange inherited;
	
public:
	virtual bool __fastcall Contains(const System::TDateTime ADate);
	virtual System::UnicodeString __fastcall GetDisplayText(const System::TDateTime ADate);
	virtual System::Variant __fastcall GetValue(const System::TDateTime ADate);
public:
	/* TdxCustomDateRange.Destroy */ inline __fastcall virtual ~TdxLastYearRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TdxLastYearRange() : TdxCustomDateRange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxThisYearRange : public TdxCustomDateRange
{
	typedef TdxCustomDateRange inherited;
	
public:
	virtual bool __fastcall Contains(const System::TDateTime ADate);
	virtual System::UnicodeString __fastcall GetDisplayText(const System::TDateTime ADate);
	virtual System::Variant __fastcall GetValue(const System::TDateTime ADate);
public:
	/* TdxCustomDateRange.Destroy */ inline __fastcall virtual ~TdxThisYearRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TdxThisYearRange() : TdxCustomDateRange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNextYearRange : public TdxCustomDateRange
{
	typedef TdxCustomDateRange inherited;
	
public:
	virtual bool __fastcall Contains(const System::TDateTime ADate);
	virtual System::UnicodeString __fastcall GetDisplayText(const System::TDateTime ADate);
	virtual System::Variant __fastcall GetValue(const System::TDateTime ADate);
public:
	/* TdxCustomDateRange.Destroy */ inline __fastcall virtual ~TdxNextYearRange() { }
	
public:
	/* TObject.Create */ inline __fastcall TdxNextYearRange() : TdxCustomDateRange() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxDateRanges : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TdxCustomDateRange* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::TObject* FDateTimeHandling;
	System::Classes::TList* FItems;
	System::TDateTime FStartOfThisWeek;
	System::Word FThisDay;
	System::Word FThisMonth;
	int FThisMonthNumber;
	System::Word FThisYear;
	System::TDateTime FToday;
	int __fastcall GetCount();
	_di_IdxDateTimeHandling __fastcall GetIDateTimeHandling();
	TdxCustomDateRange* __fastcall GetItem(int Index);
	
protected:
	void __fastcall AddItem(TdxCustomDateRange* AItem);
	void __fastcall RemoveItem(TdxCustomDateRange* AItem);
	int __fastcall GetItemIndex(TdxCustomDateRange* AItem);
	void __fastcall SetItemIndex(TdxCustomDateRange* AItem, int AValue);
	virtual void __fastcall InitConsts();
	__property _di_IdxDateTimeHandling IDateTimeHandling = {read=GetIDateTimeHandling};
	
public:
	__fastcall virtual TdxDateRanges();
	__fastcall virtual ~TdxDateRanges();
	void __fastcall Add(TdxCustomDateRange* ARange)/* overload */;
	void __fastcall Add(TdxCustomDateRangeClass ARangeClass)/* overload */;
	void __fastcall Clear();
	TdxCustomDateRange* __fastcall GetRange(const System::TDateTime ADate)/* overload */;
	TdxCustomDateRange* __fastcall GetRange(TdxCustomDateRangeClass ARangeClass)/* overload */;
	virtual void __fastcall Init(System::TObject* ADateTimeHandling);
	bool __fastcall IsEmpty();
	bool __fastcall NeedSortingByTime();
	bool __fastcall NeedTime();
	__property int Count = {read=GetCount, nodefault};
	__property TdxCustomDateRange* Items[int Index] = {read=GetItem/*, default*/};
	__property System::TObject* DateTimeHandling = {read=FDateTimeHandling};
	__property System::TDateTime StartOfThisWeek = {read=FStartOfThisWeek};
	__property System::Word ThisDay = {read=FThisDay, nodefault};
	__property System::Word ThisMonth = {read=FThisMonth, nodefault};
	__property int ThisMonthNumber = {read=FThisMonthNumber, nodefault};
	__property System::Word ThisYear = {read=FThisYear, nodefault};
	__property System::TDateTime Today = {read=FToday};
};


typedef System::TMetaClass* TdxDateRangesClass;

class PASCALIMPLEMENTATION TdxFilteringDateRanges : public TdxDateRanges
{
	typedef TdxDateRanges inherited;
	
private:
	_di_IdxFilteringDateTimeHandling __fastcall GetIFilteringDateTimeHandling();
	
protected:
	virtual TdxCustomDateRangeClass __fastcall GetMonthRange();
	virtual TdxCustomDateRangeClass __fastcall GetYearRange();
	__property _di_IdxFilteringDateTimeHandling IFilteringDateTimeHandling = {read=GetIFilteringDateTimeHandling};
	
public:
	virtual void __fastcall Init(System::TObject* ADateTimeHandling);
public:
	/* TdxDateRanges.Create */ inline __fastcall virtual TdxFilteringDateRanges() : TdxDateRanges() { }
	/* TdxDateRanges.Destroy */ inline __fastcall virtual ~TdxFilteringDateRanges() { }
	
};


typedef System::TMetaClass* TdxFilteringDateRangesClass;

class PASCALIMPLEMENTATION TdxGroupingDateRanges : public TdxDateRanges
{
	typedef TdxDateRanges inherited;
	
private:
	_di_IdxGroupingDateTimeHandling __fastcall GetIGroupingDateTimeHandling();
	
protected:
	virtual TdxCustomDateRangeClass __fastcall GetDayRangeClass();
	virtual TdxCustomDateRangeClass __fastcall GetHourRangeClass();
	virtual TdxCustomDateRangeClass __fastcall GetLastMonthRangeClass();
	virtual TdxCustomDateRangeClass __fastcall GetLastWeekRangeClass();
	virtual TdxCustomDateRangeClass __fastcall GetLastYearRangeClass();
	virtual TdxCustomDateRangeClass __fastcall GetMonthRangeClass();
	virtual TdxCustomDateRangeClass __fastcall GetNextMonthRangeClass();
	virtual TdxCustomDateRangeClass __fastcall GetNextWeekRangeClass();
	virtual TdxCustomDateRangeClass __fastcall GetNextYearRangeClass();
	virtual TdxCustomDateRangeClass __fastcall GetThisMonthRangeClass();
	virtual TdxCustomDateRangeClass __fastcall GetThisWeekRangeClass();
	virtual TdxCustomDateRangeClass __fastcall GetThisYearRangeClass();
	virtual TdxCustomDateRangeClass __fastcall GetTodayRangeClass();
	virtual TdxCustomDateRangeClass __fastcall GetTomorrowRangeClass();
	virtual TdxCustomDateRangeClass __fastcall GetYearRangeClass();
	virtual TdxCustomDateRangeClass __fastcall GetYesterdayRangeClass();
	__property _di_IdxGroupingDateTimeHandling IGroupingDateTimeHandling = {read=GetIGroupingDateTimeHandling};
	
public:
	virtual void __fastcall Init(System::TObject* ADateTimeHandling);
public:
	/* TdxDateRanges.Create */ inline __fastcall virtual TdxGroupingDateRanges() : TdxDateRanges() { }
	/* TdxDateRanges.Destroy */ inline __fastcall virtual ~TdxGroupingDateRanges() { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool __fastcall dxContainDateTimeAbsoluteFilters(TdxDateTimeFilters AFilters);
extern DELPHI_PACKAGE bool __fastcall dxContainDateTimeRelativeFilters(TdxDateTimeFilters AFilters);
}	/* namespace Dxdateranges */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXDATERANGES)
using namespace Dxdateranges;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxdaterangesHPP
