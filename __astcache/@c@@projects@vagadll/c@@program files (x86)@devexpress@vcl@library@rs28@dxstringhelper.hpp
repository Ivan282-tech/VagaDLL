// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxStringHelper.pas' rev: 35.00 (Windows)

#ifndef DxstringhelperHPP
#define DxstringhelperHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <System.SysUtils.hpp>
#include <System.StrUtils.hpp>
#include <dxCore.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxstringhelper
{
//-- forward type declarations -----------------------------------------------
struct TdxStringHelper;
class DELPHICLASS TdxStringSet;
class DELPHICLASS TdxStringBuilderManager;
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TdxStringHelper
{
	
public:
	enum DECLSPEC_DENUM _TdxStringHelper__1 : unsigned char { RemoveEmptyEntries };
	
	typedef System::Set<_TdxStringHelper__1, _TdxStringHelper__1::RemoveEmptyEntries, _TdxStringHelper__1::RemoveEmptyEntries> TStringSplitOptions;
	
	
private:
	typedef System::StaticArray<System::UnicodeString, 256> _TdxStringHelper__2;
	
	
private:
	static _TdxStringHelper__2 ByteToHexMap;
	static const System::WideChar LastLowSpecial = (System::WideChar)(0x1f);
	
	static const System::WideChar FirstHighSpecial = (System::WideChar)(0xffff);
	
	static const System::Int8 MaxDocFontNameLength = System::Int8(0x2a);
	
	static bool __fastcall ContainsSpecialSymbols(const System::UnicodeString AText);
	static bool __fastcall CharInArray(const System::WideChar C, const System::WideChar *AChars, const int AChars_High);
	static void __fastcall SetSinglePrecision(System::Extended &AValue);
	
public:
	static System::UnicodeString __fastcall Create(const System::WideChar *AValue, const int AValue_High, int AStartIndex, int ALength)/* overload */;
	static System::UnicodeString __fastcall Create(const System::DynamicArray<System::WideChar> AValue, int AStartIndex, int ALength)/* overload */;
	static bool __fastcall EndsWith(const System::UnicodeString AText, const System::UnicodeString APattern)/* overload */;
	static bool __fastcall EndsWith(const System::UnicodeString AText, const System::UnicodeString APattern, bool AIgnoreCase)/* overload */;
	static bool __fastcall Contains(const System::UnicodeString AText, const System::UnicodeString APattern);
	static int __fastcall IndexOf(const System::UnicodeString AText, System::WideChar APattern, int AOffset = 0x0)/* overload */;
	static int __fastcall IndexOf(const System::UnicodeString AText, const System::UnicodeString APattern, int AOffset = 0x0)/* overload */;
	static int __fastcall IndexOfAny(const System::UnicodeString AText, const System::WideChar *AChars, const int AChars_High, int AOffset = 0x0);
	static System::UnicodeString __fastcall Join(const System::UnicodeString ASeparator, const System::DynamicArray<System::UnicodeString> AValues)/* overload */;
	static System::UnicodeString __fastcall Join(const System::UnicodeString Separator, const System::UnicodeString *AValues, const int AValues_High, int AStartIndex, int ACount)/* overload */;
	static System::UnicodeString __fastcall Remove(const System::UnicodeString AText, int AStartIndex)/* overload */;
	static System::UnicodeString __fastcall Remove(const System::UnicodeString AText, int AStartIndex, int ACount)/* overload */;
	static System::UnicodeString __fastcall RemoveEnclosedPart(const System::UnicodeString AText, System::WideChar ALeft, System::WideChar ARight);
	static System::UnicodeString __fastcall Replace(const System::UnicodeString AText, System::WideChar AOldChar, System::WideChar ANewChar)/* overload */;
	static System::UnicodeString __fastcall Replace(const System::UnicodeString AText, const System::UnicodeString OldValue, const System::UnicodeString NewValue)/* overload */;
	static System::DynamicArray<System::UnicodeString> __fastcall Split(const System::UnicodeString AText, const System::UnicodeString *ADelimiters, const int ADelimiters_High)/* overload */;
	static System::DynamicArray<System::UnicodeString> __fastcall Split(const System::UnicodeString AText, const System::UnicodeString *ADelimiters, const int ADelimiters_High, TStringSplitOptions AOptions)/* overload */;
	static bool __fastcall StartsWithChar(const System::UnicodeString AText, System::WideChar APattern, bool AIgnoreCase = true)/* overload */;
	static bool __fastcall StartsWith(const System::UnicodeString AText, const System::UnicodeString APattern, bool AIgnoreCase = true)/* overload */;
	static System::UnicodeString __fastcall Substring(const System::UnicodeString AText, int AStartIndex)/* overload */;
	static System::UnicodeString __fastcall Substring(const System::UnicodeString AText, int AStartIndex, int ALength)/* overload */;
	static int __fastcall LastIndexOf(const System::UnicodeString AText, System::WideChar AChar)/* overload */;
	static int __fastcall LastIndexOf(const System::UnicodeString AText, const System::UnicodeString AValue)/* overload */;
	static int __fastcall LastIndexOf(const System::UnicodeString AText, const System::UnicodeString AValue, int AStartIndex)/* overload */;
	static int __fastcall LastIndexOf(const System::UnicodeString AText, const System::UnicodeString AValue, int AStartIndex, int ACount)/* overload */;
	static int __fastcall LastIndexOfAny(const System::UnicodeString AText, const System::WideChar *AAnyOf, const int AAnyOf_High)/* overload */;
	static int __fastcall LastIndexOfAny(const System::UnicodeString AText, const System::WideChar *AAnyOf, const int AAnyOf_High, int AStartIndex)/* overload */;
	static int __fastcall LastIndexOfAny(const System::UnicodeString AText, const System::WideChar *AAnyOf, const int AAnyOf_High, int AStartIndex, int ACount)/* overload */;
	static System::UnicodeString __fastcall Trim(const System::UnicodeString AText, const System::WideChar *AChars, const int AChars_High);
	static System::UnicodeString __fastcall TrimEnd(const System::UnicodeString AText, const System::WideChar *AChars, const int AChars_High);
	static System::UnicodeString __fastcall TrimStart(const System::UnicodeString AText, const System::WideChar *AChars, const int AChars_High);
	static System::UnicodeString __fastcall ToHex(System::WideChar C)/* overload */;
	static System::WideChar * __fastcall ToHex(System::WideChar C, System::WideChar * P)/* overload */;
	static System::UnicodeString __fastcall ToHex(System::Byte B)/* overload */;
	static int __fastcall ToHex(const System::DynamicArray<System::Byte> ASource, int AOffset, int ACount, System::DynamicArray<System::WideChar> &ADest)/* overload */;
	static int __fastcall ToInt32(const System::UnicodeString AText, unsigned AFromBase = (unsigned)(0xa));
	static int __fastcall ToInt32Def(const System::UnicodeString AText, int ADefault, unsigned AFromBase = (unsigned)(0xa));
	static System::UnicodeString __fastcall ToBinary(unsigned AValue, int ADigits);
	static System::UnicodeString __fastcall Format(const System::UnicodeString AFormat, const System::TVarRec *Args, const int Args_High)/* overload */;
	static System::UnicodeString __fastcall Format(const System::Sysutils::TFormatSettings &AFormatSettings, const System::UnicodeString AFormat, const System::TVarRec *Args, const int Args_High)/* overload */;
	static System::UnicodeString __fastcall PrepareFontNameForDoc(const System::UnicodeString AOriginalFontName);
	static System::UnicodeString __fastcall RemoveSpecialSymbols(const System::UnicodeString AText);
	static System::UnicodeString __fastcall ReplaceParagraphMarksWithLineBreaks(const System::UnicodeString AText);
	static bool __fastcall ContainsParagraphMarksOrUnitSeparators(const System::UnicodeString AText);
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxStringSet : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	struct TItem;
	typedef TItem *PItem;
	
	#pragma pack(push,8)
	struct DECLSPEC_DRECORD TItem
	{
	public:
		unsigned Hash;
		System::UnicodeString Value;
		TdxStringSet::TItem *Next;
	};
	#pragma pack(pop)
	
	
	typedef System::StaticArray<PItem, 258> TTable;
	
	
private:
	static const System::Word TableSize = System::Word(0x101);
	
	
private:
	TTable FTable;
	unsigned __fastcall Hash(const System::UnicodeString S);
	PItem __fastcall NewItem(const System::UnicodeString S, unsigned AHash);
	
public:
	__fastcall virtual ~TdxStringSet();
	System::UnicodeString __fastcall Add(const System::UnicodeString S);
	void __fastcall Clear();
	bool __fastcall Contains(const System::UnicodeString S);
public:
	/* TObject.Create */ inline __fastcall TdxStringSet() : System::TObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxStringBuilderManager : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	static const System::Int8 CacheSize = System::Int8(0x4);
	
	static const int HugeCapacityThreshold = int(0x100000);
	
	static System::StaticArray<System::Sysutils::TStringBuilder*, 4> Cache;
	
public:
	__classmethod void __fastcall Finalize();
	__classmethod System::Sysutils::TStringBuilder* __fastcall Get(int ACapacity = 0x0);
	__classmethod void __fastcall Release(System::Sysutils::TStringBuilder* &ABuilder);
public:
	/* TObject.Create */ inline __fastcall TdxStringBuilderManager() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxStringBuilderManager() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::UnicodeString __fastcall Trim(System::Sysutils::TStringBuilder* const ABuilder)/* overload */;
}	/* namespace Dxstringhelper */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXSTRINGHELPER)
using namespace Dxstringhelper;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxstringhelperHPP
