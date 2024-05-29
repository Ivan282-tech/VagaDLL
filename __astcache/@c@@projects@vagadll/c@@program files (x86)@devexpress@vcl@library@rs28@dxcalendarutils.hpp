// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxCalendarUtils.pas' rev: 35.00 (Windows)

#ifndef DxcalendarutilsHPP
#define DxcalendarutilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <cxDateUtils.hpp>
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxcalendarutils
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxGregorianCalendarTable;
class DELPHICLASS TcxGregorianUSEnglishCalendarTable;
class DELPHICLASS TcxGregorianMiddleEastFrenchCalendarTable;
class DELPHICLASS TcxGregorianArabicCalendarTable;
class DELPHICLASS TcxGregorianTransliteratedEnglishCalendarTable;
class DELPHICLASS TcxGregorianTransliteratedFrenchCalendarTable;
class DELPHICLASS TcxJapaneseCalendarTable;
class DELPHICLASS TcxTaiwanCalendarTable;
class DELPHICLASS TcxKoreanCalendarTable;
class DELPHICLASS TcxHijriCalendarTable;
class DELPHICLASS TcxThaiCalendarTable;
class DELPHICLASS TcxHebrewCalendarTable;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGregorianCalendarTable : public Cxdateutils::TcxCustomCalendarTable
{
	typedef Cxdateutils::TcxCustomCalendarTable inherited;
	
private:
	Cxdateutils::TcxEra* FDefaultEra;
	
protected:
	virtual Cxdateutils::TcxCalendarAlgorithmType __fastcall GetCalendarAlgorithmType();
	virtual unsigned __fastcall GetCalendarID();
	virtual Cxdateutils::TcxEra* __fastcall GetDefaultEra();
	virtual System::TDateTime __fastcall GetMaxSupportedDate();
	virtual System::TDateTime __fastcall GetMinSupportedDate();
	virtual int __fastcall GetMaxSupportedYear();
	virtual int __fastcall GetMinSupportedYear();
	
public:
	__fastcall virtual TcxGregorianCalendarTable();
	__fastcall virtual ~TcxGregorianCalendarTable();
	virtual Cxdateutils::TcxDateTime __fastcall FromDateTime(System::TDateTime ADate)/* overload */;
	virtual System::Byte __fastcall GetFirstWeekDay();
	virtual unsigned __fastcall GetWeekNumber(const Cxdateutils::TcxDateTime &ADate, Cxdateutils::TDay AStartOfWeek, Cxdateutils::TcxFirstWeekOfYear AFirstWeekOfYear)/* overload */;
	virtual unsigned __fastcall GetDaysInMonth(int AEra, unsigned AYear, unsigned AMonth)/* overload */;
	virtual unsigned __fastcall GetDaysInYear(int AEra, unsigned AYear)/* overload */;
	virtual unsigned __fastcall GetFullWeeksInYear(unsigned AYear);
	virtual unsigned __fastcall GetMonthsInYear(int AEra, unsigned AYear)/* overload */;
	virtual bool __fastcall IsLeapDay(int AEra, unsigned AYear, unsigned AMonth, unsigned ADay)/* overload */;
	virtual bool __fastcall IsLeapMonth(int AEra, unsigned AYear, unsigned AMonth)/* overload */;
	virtual bool __fastcall IsLeapYear(int AEra, unsigned AYear)/* overload */;
	virtual System::TDateTime __fastcall ToDateTime(const Cxdateutils::TcxDateTime &ADateTime)/* overload */;
	/* Hoisted overloads: */
	
public:
	inline Cxdateutils::TcxDateTime __fastcall  FromDateTime(unsigned AYear, unsigned AMonth, unsigned ADay){ return Cxdateutils::TcxCustomCalendarTable::FromDateTime(AYear, AMonth, ADay); }
	inline Cxdateutils::TcxDateTime __fastcall  FromDateTime(unsigned AYear, unsigned AMonth, unsigned ADay, System::Byte AHours, System::Byte AMinutes, System::Byte ASeconds, System::Word AMilliseconds){ return Cxdateutils::TcxCustomCalendarTable::FromDateTime(AYear, AMonth, ADay, AHours, AMinutes, ASeconds, AMilliseconds); }
	inline unsigned __fastcall  GetWeekNumber(System::TDateTime ADate, Cxdateutils::TDay AStartOfWeek, Cxdateutils::TcxFirstWeekOfYear AFirstWeekOfYear){ return Cxdateutils::TcxCustomCalendarTable::GetWeekNumber(ADate, AStartOfWeek, AFirstWeekOfYear); }
	inline unsigned __fastcall  GetDaysInMonth(unsigned AYear, unsigned AMonth){ return Cxdateutils::TcxCustomCalendarTable::GetDaysInMonth(AYear, AMonth); }
	inline unsigned __fastcall  GetDaysInYear(unsigned AYear){ return Cxdateutils::TcxCustomCalendarTable::GetDaysInYear(AYear); }
	inline unsigned __fastcall  GetMonthsInYear(unsigned AYear){ return Cxdateutils::TcxCustomCalendarTable::GetMonthsInYear(AYear); }
	inline bool __fastcall  IsLeapDay(unsigned AYear, unsigned AMonth, unsigned ADay){ return Cxdateutils::TcxCustomCalendarTable::IsLeapDay(AYear, AMonth, ADay); }
	inline bool __fastcall  IsLeapMonth(unsigned AYear, unsigned AMonth){ return Cxdateutils::TcxCustomCalendarTable::IsLeapMonth(AYear, AMonth); }
	inline bool __fastcall  IsLeapYear(unsigned AYear){ return Cxdateutils::TcxCustomCalendarTable::IsLeapYear(AYear); }
	inline System::TDateTime __fastcall  ToDateTime(unsigned AYear, unsigned AMonth, unsigned ADay){ return Cxdateutils::TcxCustomCalendarTable::ToDateTime(AYear, AMonth, ADay); }
	inline System::TDateTime __fastcall  ToDateTime(unsigned AYear, unsigned AMonth, unsigned ADay, System::Byte AHours, System::Byte AMinutes, System::Byte ASeconds, System::Word AMilliseconds){ return Cxdateutils::TcxCustomCalendarTable::ToDateTime(AYear, AMonth, ADay, AHours, AMinutes, ASeconds, AMilliseconds); }
	inline System::TDateTime __fastcall  ToDateTime(const Cxdateutils::TcxDate &ADate){ return Cxdateutils::TcxCustomCalendarTable::ToDateTime(ADate); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGregorianUSEnglishCalendarTable : public TcxGregorianCalendarTable
{
	typedef TcxGregorianCalendarTable inherited;
	
protected:
	virtual unsigned __fastcall GetCalendarID();
public:
	/* TcxGregorianCalendarTable.Create */ inline __fastcall virtual TcxGregorianUSEnglishCalendarTable() : TcxGregorianCalendarTable() { }
	/* TcxGregorianCalendarTable.Destroy */ inline __fastcall virtual ~TcxGregorianUSEnglishCalendarTable() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGregorianMiddleEastFrenchCalendarTable : public TcxGregorianCalendarTable
{
	typedef TcxGregorianCalendarTable inherited;
	
protected:
	virtual unsigned __fastcall GetCalendarID();
	
public:
	virtual System::Byte __fastcall GetFirstWeekDay();
public:
	/* TcxGregorianCalendarTable.Create */ inline __fastcall virtual TcxGregorianMiddleEastFrenchCalendarTable() : TcxGregorianCalendarTable() { }
	/* TcxGregorianCalendarTable.Destroy */ inline __fastcall virtual ~TcxGregorianMiddleEastFrenchCalendarTable() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGregorianArabicCalendarTable : public TcxGregorianCalendarTable
{
	typedef TcxGregorianCalendarTable inherited;
	
protected:
	virtual unsigned __fastcall GetCalendarID();
	
public:
	virtual System::Byte __fastcall GetFirstWeekDay();
public:
	/* TcxGregorianCalendarTable.Create */ inline __fastcall virtual TcxGregorianArabicCalendarTable() : TcxGregorianCalendarTable() { }
	/* TcxGregorianCalendarTable.Destroy */ inline __fastcall virtual ~TcxGregorianArabicCalendarTable() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGregorianTransliteratedEnglishCalendarTable : public TcxGregorianCalendarTable
{
	typedef TcxGregorianCalendarTable inherited;
	
protected:
	virtual unsigned __fastcall GetCalendarID();
	
public:
	virtual System::Byte __fastcall GetFirstWeekDay();
public:
	/* TcxGregorianCalendarTable.Create */ inline __fastcall virtual TcxGregorianTransliteratedEnglishCalendarTable() : TcxGregorianCalendarTable() { }
	/* TcxGregorianCalendarTable.Destroy */ inline __fastcall virtual ~TcxGregorianTransliteratedEnglishCalendarTable() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGregorianTransliteratedFrenchCalendarTable : public TcxGregorianCalendarTable
{
	typedef TcxGregorianCalendarTable inherited;
	
protected:
	virtual unsigned __fastcall GetCalendarID();
	
public:
	virtual System::Byte __fastcall GetFirstWeekDay();
public:
	/* TcxGregorianCalendarTable.Create */ inline __fastcall virtual TcxGregorianTransliteratedFrenchCalendarTable() : TcxGregorianCalendarTable() { }
	/* TcxGregorianCalendarTable.Destroy */ inline __fastcall virtual ~TcxGregorianTransliteratedFrenchCalendarTable() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxJapaneseCalendarTable : public TcxGregorianCalendarTable
{
	typedef TcxGregorianCalendarTable inherited;
	
protected:
	virtual Cxdateutils::TcxCalendarAlgorithmType __fastcall GetCalendarAlgorithmType();
	virtual unsigned __fastcall GetCalendarID();
	virtual Cxdateutils::TcxEra* __fastcall GetDefaultEra();
	virtual System::TDateTime __fastcall GetMaxSupportedDate();
	virtual System::TDateTime __fastcall GetMinSupportedDate();
	virtual int __fastcall GetMaxSupportedYear();
	virtual int __fastcall GetMinSupportedYear();
	
public:
	__fastcall virtual TcxJapaneseCalendarTable();
	virtual Cxdateutils::TcxDateTime __fastcall FromDateTime(System::TDateTime ADate)/* overload */;
	virtual System::Byte __fastcall GetFirstWeekDay();
	virtual System::TDateTime __fastcall ToDateTime(const Cxdateutils::TcxDateTime &ADateTime)/* overload */;
public:
	/* TcxGregorianCalendarTable.Destroy */ inline __fastcall virtual ~TcxJapaneseCalendarTable() { }
	
	/* Hoisted overloads: */
	
public:
	inline Cxdateutils::TcxDateTime __fastcall  FromDateTime(unsigned AYear, unsigned AMonth, unsigned ADay){ return Cxdateutils::TcxCustomCalendarTable::FromDateTime(AYear, AMonth, ADay); }
	inline Cxdateutils::TcxDateTime __fastcall  FromDateTime(unsigned AYear, unsigned AMonth, unsigned ADay, System::Byte AHours, System::Byte AMinutes, System::Byte ASeconds, System::Word AMilliseconds){ return Cxdateutils::TcxCustomCalendarTable::FromDateTime(AYear, AMonth, ADay, AHours, AMinutes, ASeconds, AMilliseconds); }
	inline System::TDateTime __fastcall  ToDateTime(unsigned AYear, unsigned AMonth, unsigned ADay){ return Cxdateutils::TcxCustomCalendarTable::ToDateTime(AYear, AMonth, ADay); }
	inline System::TDateTime __fastcall  ToDateTime(unsigned AYear, unsigned AMonth, unsigned ADay, System::Byte AHours, System::Byte AMinutes, System::Byte ASeconds, System::Word AMilliseconds){ return Cxdateutils::TcxCustomCalendarTable::ToDateTime(AYear, AMonth, ADay, AHours, AMinutes, ASeconds, AMilliseconds); }
	inline System::TDateTime __fastcall  ToDateTime(const Cxdateutils::TcxDate &ADate){ return Cxdateutils::TcxCustomCalendarTable::ToDateTime(ADate); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxTaiwanCalendarTable : public TcxJapaneseCalendarTable
{
	typedef TcxJapaneseCalendarTable inherited;
	
protected:
	virtual Cxdateutils::TcxCalendarAlgorithmType __fastcall GetCalendarAlgorithmType();
	virtual unsigned __fastcall GetCalendarID();
	virtual Cxdateutils::TcxEra* __fastcall GetDefaultEra();
	virtual System::TDateTime __fastcall GetMinSupportedDate();
	virtual int __fastcall GetMaxSupportedYear();
	virtual int __fastcall GetMinSupportedYear();
	
public:
	__fastcall virtual TcxTaiwanCalendarTable();
public:
	/* TcxGregorianCalendarTable.Destroy */ inline __fastcall virtual ~TcxTaiwanCalendarTable() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxKoreanCalendarTable : public TcxJapaneseCalendarTable
{
	typedef TcxJapaneseCalendarTable inherited;
	
protected:
	virtual Cxdateutils::TcxCalendarAlgorithmType __fastcall GetCalendarAlgorithmType();
	virtual unsigned __fastcall GetCalendarID();
	virtual Cxdateutils::TcxEra* __fastcall GetDefaultEra();
	virtual System::TDateTime __fastcall GetMinSupportedDate();
	virtual int __fastcall GetMaxSupportedYear();
	virtual int __fastcall GetMinSupportedYear();
	
public:
	__fastcall virtual TcxKoreanCalendarTable();
public:
	/* TcxGregorianCalendarTable.Destroy */ inline __fastcall virtual ~TcxKoreanCalendarTable() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxHijriCalendarTable : public Cxdateutils::TcxCustomCalendarTable
{
	typedef Cxdateutils::TcxCustomCalendarTable inherited;
	
private:
	Cxdateutils::TcxEra* FDefaultEra;
	
protected:
	virtual Cxdateutils::TcxCalendarAlgorithmType __fastcall GetCalendarAlgorithmType();
	virtual unsigned __fastcall GetCalendarID();
	virtual Cxdateutils::TcxEra* __fastcall GetDefaultEra();
	virtual System::TDateTime __fastcall GetMaxSupportedDate();
	virtual System::TDateTime __fastcall GetMinSupportedDate();
	virtual int __fastcall GetMaxSupportedYear();
	virtual int __fastcall GetMinSupportedYear();
	
public:
	__fastcall virtual TcxHijriCalendarTable();
	__fastcall virtual ~TcxHijriCalendarTable();
	virtual Cxdateutils::TcxDateTime __fastcall FromDateTime(System::TDateTime ADate)/* overload */;
	virtual System::Byte __fastcall GetFirstWeekDay();
	virtual unsigned __fastcall GetWeekNumber(const Cxdateutils::TcxDateTime &ADate, Cxdateutils::TDay AStartOfWeek, Cxdateutils::TcxFirstWeekOfYear AFirstWeekOfYear)/* overload */;
	virtual unsigned __fastcall GetDaysInMonth(int AEra, unsigned AYear, unsigned AMonth)/* overload */;
	virtual unsigned __fastcall GetDaysInYear(int AEra, unsigned AYear)/* overload */;
	virtual unsigned __fastcall GetFullWeeksInYear(unsigned AYear);
	virtual unsigned __fastcall GetMonthsInYear(int AEra, unsigned AYear)/* overload */;
	virtual bool __fastcall IsLeapDay(int AEra, unsigned AYear, unsigned AMonth, unsigned ADay)/* overload */;
	virtual bool __fastcall IsLeapMonth(int AEra, unsigned AYear, unsigned AMonth)/* overload */;
	virtual bool __fastcall IsLeapYear(int AEra, unsigned AYear)/* overload */;
	virtual System::TDateTime __fastcall ToDateTime(const Cxdateutils::TcxDateTime &ADateTime)/* overload */;
	virtual bool __fastcall TryGetMonthNumber(int AYear, const System::UnicodeString S, const System::Sysutils::TFormatSettings &AFormat, /* out */ unsigned &AValue);
	/* Hoisted overloads: */
	
public:
	inline Cxdateutils::TcxDateTime __fastcall  FromDateTime(unsigned AYear, unsigned AMonth, unsigned ADay){ return Cxdateutils::TcxCustomCalendarTable::FromDateTime(AYear, AMonth, ADay); }
	inline Cxdateutils::TcxDateTime __fastcall  FromDateTime(unsigned AYear, unsigned AMonth, unsigned ADay, System::Byte AHours, System::Byte AMinutes, System::Byte ASeconds, System::Word AMilliseconds){ return Cxdateutils::TcxCustomCalendarTable::FromDateTime(AYear, AMonth, ADay, AHours, AMinutes, ASeconds, AMilliseconds); }
	inline unsigned __fastcall  GetWeekNumber(System::TDateTime ADate, Cxdateutils::TDay AStartOfWeek, Cxdateutils::TcxFirstWeekOfYear AFirstWeekOfYear){ return Cxdateutils::TcxCustomCalendarTable::GetWeekNumber(ADate, AStartOfWeek, AFirstWeekOfYear); }
	inline unsigned __fastcall  GetDaysInMonth(unsigned AYear, unsigned AMonth){ return Cxdateutils::TcxCustomCalendarTable::GetDaysInMonth(AYear, AMonth); }
	inline unsigned __fastcall  GetDaysInYear(unsigned AYear){ return Cxdateutils::TcxCustomCalendarTable::GetDaysInYear(AYear); }
	inline unsigned __fastcall  GetMonthsInYear(unsigned AYear){ return Cxdateutils::TcxCustomCalendarTable::GetMonthsInYear(AYear); }
	inline bool __fastcall  IsLeapDay(unsigned AYear, unsigned AMonth, unsigned ADay){ return Cxdateutils::TcxCustomCalendarTable::IsLeapDay(AYear, AMonth, ADay); }
	inline bool __fastcall  IsLeapMonth(unsigned AYear, unsigned AMonth){ return Cxdateutils::TcxCustomCalendarTable::IsLeapMonth(AYear, AMonth); }
	inline bool __fastcall  IsLeapYear(unsigned AYear){ return Cxdateutils::TcxCustomCalendarTable::IsLeapYear(AYear); }
	inline System::TDateTime __fastcall  ToDateTime(unsigned AYear, unsigned AMonth, unsigned ADay){ return Cxdateutils::TcxCustomCalendarTable::ToDateTime(AYear, AMonth, ADay); }
	inline System::TDateTime __fastcall  ToDateTime(unsigned AYear, unsigned AMonth, unsigned ADay, System::Byte AHours, System::Byte AMinutes, System::Byte ASeconds, System::Word AMilliseconds){ return Cxdateutils::TcxCustomCalendarTable::ToDateTime(AYear, AMonth, ADay, AHours, AMinutes, ASeconds, AMilliseconds); }
	inline System::TDateTime __fastcall  ToDateTime(const Cxdateutils::TcxDate &ADate){ return Cxdateutils::TcxCustomCalendarTable::ToDateTime(ADate); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxThaiCalendarTable : public TcxJapaneseCalendarTable
{
	typedef TcxJapaneseCalendarTable inherited;
	
protected:
	virtual Cxdateutils::TcxCalendarAlgorithmType __fastcall GetCalendarAlgorithmType();
	virtual unsigned __fastcall GetCalendarID();
	virtual Cxdateutils::TcxEra* __fastcall GetDefaultEra();
	virtual System::TDateTime __fastcall GetMinSupportedDate();
	virtual int __fastcall GetMaxSupportedYear();
	virtual int __fastcall GetMinSupportedYear();
	
public:
	__fastcall virtual TcxThaiCalendarTable();
public:
	/* TcxGregorianCalendarTable.Destroy */ inline __fastcall virtual ~TcxThaiCalendarTable() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TcxHebrewCalendarTableTypeYear : unsigned char { hctyDeficient = 1, hctyNormal, hctyPerfect };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxHebrewCalendarTable : public Cxdateutils::TcxCustomCalendarTable
{
	typedef Cxdateutils::TcxCustomCalendarTable inherited;
	
private:
	Cxdateutils::TcxEra* FDefaultEra;
	int __fastcall GetDayDifference(int ALunarYearType, int AMonth, int ADay, int ALunarMonth, int ALunarDay);
	int __fastcall HebrewNumber(const System::UnicodeString S);
	void __fastcall GetLunarMonthDay(int AYear, Cxdateutils::TcxDate &ADate);
	
protected:
	virtual Cxdateutils::TcxCalendarAlgorithmType __fastcall GetCalendarAlgorithmType();
	virtual unsigned __fastcall GetCalendarID();
	virtual Cxdateutils::TcxEra* __fastcall GetDefaultEra();
	virtual System::TDateTime __fastcall GetMaxSupportedDate();
	virtual System::TDateTime __fastcall GetMinSupportedDate();
	virtual int __fastcall GetMaxSupportedYear();
	virtual int __fastcall GetMinSupportedYear();
	
public:
	__fastcall virtual TcxHebrewCalendarTable();
	__fastcall virtual ~TcxHebrewCalendarTable();
	virtual Cxdateutils::TcxDateTime __fastcall FromDateTime(System::TDateTime ADate)/* overload */;
	virtual System::Byte __fastcall GetFirstWeekDay();
	TcxHebrewCalendarTableTypeYear __fastcall GetYearType(unsigned AYear);
	virtual unsigned __fastcall GetWeekNumber(const Cxdateutils::TcxDateTime &ADate, Cxdateutils::TDay AStartOfWeek, Cxdateutils::TcxFirstWeekOfYear AFirstWeekOfYear)/* overload */;
	virtual unsigned __fastcall GetDaysInMonth(int AEra, unsigned AYear, unsigned AMonth)/* overload */;
	virtual unsigned __fastcall GetDaysInYear(int AEra, unsigned AYear)/* overload */;
	virtual unsigned __fastcall GetFullWeeksInYear(unsigned AYear);
	virtual unsigned __fastcall GetMonthsInYear(int AEra, unsigned AYear)/* overload */;
	virtual bool __fastcall IsLeapDay(int AEra, unsigned AYear, unsigned AMonth, unsigned ADay)/* overload */;
	virtual bool __fastcall IsLeapMonth(int AEra, unsigned AYear, unsigned AMonth)/* overload */;
	virtual bool __fastcall IsLeapYear(int AEra, unsigned AYear)/* overload */;
	virtual System::TDateTime __fastcall ToDateTime(const Cxdateutils::TcxDateTime &ADateTime)/* overload */;
	virtual bool __fastcall TryGetDayNumber(const System::UnicodeString S, /* out */ unsigned &AValue);
	virtual bool __fastcall TryGetMonthNumber(int AYear, const System::UnicodeString S, const System::Sysutils::TFormatSettings &AFormat, /* out */ unsigned &AValue);
	virtual bool __fastcall TryGetYearNumber(const System::UnicodeString S, /* out */ unsigned &AValue);
	/* Hoisted overloads: */
	
public:
	inline Cxdateutils::TcxDateTime __fastcall  FromDateTime(unsigned AYear, unsigned AMonth, unsigned ADay){ return Cxdateutils::TcxCustomCalendarTable::FromDateTime(AYear, AMonth, ADay); }
	inline Cxdateutils::TcxDateTime __fastcall  FromDateTime(unsigned AYear, unsigned AMonth, unsigned ADay, System::Byte AHours, System::Byte AMinutes, System::Byte ASeconds, System::Word AMilliseconds){ return Cxdateutils::TcxCustomCalendarTable::FromDateTime(AYear, AMonth, ADay, AHours, AMinutes, ASeconds, AMilliseconds); }
	inline unsigned __fastcall  GetWeekNumber(System::TDateTime ADate, Cxdateutils::TDay AStartOfWeek, Cxdateutils::TcxFirstWeekOfYear AFirstWeekOfYear){ return Cxdateutils::TcxCustomCalendarTable::GetWeekNumber(ADate, AStartOfWeek, AFirstWeekOfYear); }
	inline unsigned __fastcall  GetDaysInMonth(unsigned AYear, unsigned AMonth){ return Cxdateutils::TcxCustomCalendarTable::GetDaysInMonth(AYear, AMonth); }
	inline unsigned __fastcall  GetDaysInYear(unsigned AYear){ return Cxdateutils::TcxCustomCalendarTable::GetDaysInYear(AYear); }
	inline unsigned __fastcall  GetMonthsInYear(unsigned AYear){ return Cxdateutils::TcxCustomCalendarTable::GetMonthsInYear(AYear); }
	inline bool __fastcall  IsLeapDay(unsigned AYear, unsigned AMonth, unsigned ADay){ return Cxdateutils::TcxCustomCalendarTable::IsLeapDay(AYear, AMonth, ADay); }
	inline bool __fastcall  IsLeapMonth(unsigned AYear, unsigned AMonth){ return Cxdateutils::TcxCustomCalendarTable::IsLeapMonth(AYear, AMonth); }
	inline bool __fastcall  IsLeapYear(unsigned AYear){ return Cxdateutils::TcxCustomCalendarTable::IsLeapYear(AYear); }
	inline System::TDateTime __fastcall  ToDateTime(unsigned AYear, unsigned AMonth, unsigned ADay){ return Cxdateutils::TcxCustomCalendarTable::ToDateTime(AYear, AMonth, ADay); }
	inline System::TDateTime __fastcall  ToDateTime(unsigned AYear, unsigned AMonth, unsigned ADay, System::Byte AHours, System::Byte AMinutes, System::Byte ASeconds, System::Word AMilliseconds){ return Cxdateutils::TcxCustomCalendarTable::ToDateTime(AYear, AMonth, ADay, AHours, AMinutes, ASeconds, AMilliseconds); }
	inline System::TDateTime __fastcall  ToDateTime(const Cxdateutils::TcxDate &ADate){ return Cxdateutils::TcxCustomCalendarTable::ToDateTime(ADate); }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Cxdateutils::TcxCustomCalendarTableClass __fastcall cxGetCalendarClass(unsigned ACalendType);
extern DELPHI_PACKAGE bool __fastcall cxIsGregorianCalendar(Cxdateutils::TcxCustomCalendarTable* ACalendar = (Cxdateutils::TcxCustomCalendarTable*)(0x0));
}	/* namespace Dxcalendarutils */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXCALENDARUTILS)
using namespace Dxcalendarutils;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxcalendarutilsHPP
