// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxRegExpr.pas' rev: 35.00 (Windows)

#ifndef CxregexprHPP
#define CxregexprHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <dxCore.hpp>
#include <cxClasses.hpp>
#include <cxEdit.hpp>
#include <cxEditConsts.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxregexpr
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxRegExprError;
class DELPHICLASS TcxRegExprErrors;
class DELPHICLASS EcxRegExprError;
struct TcxLexem;
class DELPHICLASS TcxLexems;
class DELPHICLASS TcxRegExprItem;
class DELPHICLASS TcxRegExprSymbol;
class DELPHICLASS TcxRegExprTimeSeparator;
class DELPHICLASS TcxRegExprDateSeparator;
class DELPHICLASS TcxRegExprSubrange;
class DELPHICLASS TcxRegExprEnumeration;
class DELPHICLASS TcxRegExprUserEnumeration;
class DELPHICLASS TcxRegExprDigit;
class DELPHICLASS TcxRegExprIdLetter;
class DELPHICLASS TcxRegExprSpace;
class DELPHICLASS TcxRegExprAll;
class DELPHICLASS TcxRegExprState;
class DELPHICLASS TcxRegExprSimpleState;
class DELPHICLASS TcxRegExprBlockState;
class DELPHICLASS TcxRegExprStates;
class DELPHICLASS TcxRegExprAutomat;
class DELPHICLASS TcxRegExprQuantifier;
class DELPHICLASS TcxRegExprSimpleQuantifier;
class DELPHICLASS TcxRegExprQuestionQuantifier;
class DELPHICLASS TcxRegExprStarQuantifier;
class DELPHICLASS TcxRegExprPlusQuantifier;
class DELPHICLASS TcxRegExprParserItem;
class DELPHICLASS TcxRegExprParserSimpleItem;
class DELPHICLASS TcxRegExprParserBlockItem;
class DELPHICLASS TcxRegExprParserAlt;
class DELPHICLASS TcxRegExprParserAlts;
class DELPHICLASS TcxRegExpr;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxRegExprError : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FChar;
	int FLine;
	System::UnicodeString FMessage;
	System::UnicodeString __fastcall GetFullMessage();
	
public:
	__fastcall TcxRegExprError(int ALine, int AChar, System::UnicodeString AMessage);
	TcxRegExprError* __fastcall Clone();
	__property int Char = {read=FChar, nodefault};
	__property System::UnicodeString FullMessage = {read=GetFullMessage};
	__property int Line = {read=FLine, nodefault};
	__property System::UnicodeString Message = {read=FMessage};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxRegExprError() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxRegExprErrors : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TcxRegExprError* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TList* FErrors;
	int __fastcall GetCount();
	TcxRegExprError* __fastcall GetItems(int Index);
	
public:
	__fastcall TcxRegExprErrors();
	__fastcall virtual ~TcxRegExprErrors();
	void __fastcall Add(TcxRegExprError* AError);
	void __fastcall Clear();
	TcxRegExprErrors* __fastcall Clone();
	__property int Count = {read=GetCount, nodefault};
	__property TcxRegExprError* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EcxRegExprError : public Cxedit::EcxEditError
{
	typedef Cxedit::EcxEditError inherited;
	
private:
	TcxRegExprErrors* FErrors;
	
public:
	__fastcall EcxRegExprError(TcxRegExprErrors* AErrors);
	__property TcxRegExprErrors* Errors = {read=FErrors};
public:
	/* Exception.CreateFmt */ inline __fastcall EcxRegExprError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Cxedit::EcxEditError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EcxRegExprError(NativeUInt Ident)/* overload */ : Cxedit::EcxEditError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EcxRegExprError(System::PResStringRec ResStringRec)/* overload */ : Cxedit::EcxEditError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EcxRegExprError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Cxedit::EcxEditError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EcxRegExprError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Cxedit::EcxEditError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EcxRegExprError(const System::UnicodeString Msg, int AHelpContext) : Cxedit::EcxEditError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EcxRegExprError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Cxedit::EcxEditError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EcxRegExprError(NativeUInt Ident, int AHelpContext)/* overload */ : Cxedit::EcxEditError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EcxRegExprError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Cxedit::EcxEditError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EcxRegExprError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Cxedit::EcxEditError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EcxRegExprError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Cxedit::EcxEditError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EcxRegExprError() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TcxRegExprLexemCode : unsigned char { relcSymbol, relcSpecial, relcInteger, relcAll, relcId, relcNotId, relcDigit, relcNotDigit, relcSpace, relcNotSpace, relcReference, relcDateSeparator, relcTimeSeparator };

struct DECLSPEC_DRECORD TcxLexem
{
public:
	int Char;
	TcxRegExprLexemCode Code;
	int Line;
	System::UnicodeString Value;
};


typedef TcxLexem *PcxLexem;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxLexems : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TcxLexem operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TList* FLexems;
	int __fastcall GetCount();
	TcxLexem __fastcall GetItems(int Index);
	
public:
	__fastcall TcxLexems();
	__fastcall virtual ~TcxLexems();
	void __fastcall Add(const TcxLexem &ALexem);
	void __fastcall Clear();
	__property int Count = {read=GetCount, nodefault};
	__property TcxLexem Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxRegExprItem : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual bool __fastcall Check(System::WideChar &AToken, bool ACaseInsensitive, bool ACanChangeCase) = 0 ;
	virtual TcxRegExprItem* __fastcall Clone() = 0 ;
public:
	/* TObject.Create */ inline __fastcall TcxRegExprItem() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxRegExprItem() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxRegExprSymbol : public TcxRegExprItem
{
	typedef TcxRegExprItem inherited;
	
private:
	System::WideChar FValue;
	
public:
	__fastcall TcxRegExprSymbol(System::WideChar AValue);
	virtual bool __fastcall Check(System::WideChar &AToken, bool ACaseInsensitive, bool ACanChangeCase);
	virtual TcxRegExprItem* __fastcall Clone();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxRegExprSymbol() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxRegExprTimeSeparator : public TcxRegExprItem
{
	typedef TcxRegExprItem inherited;
	
public:
	virtual bool __fastcall Check(System::WideChar &AToken, bool ACaseInsensitive, bool ACanChangeCase);
	virtual TcxRegExprItem* __fastcall Clone();
	System::WideChar __fastcall Value();
public:
	/* TObject.Create */ inline __fastcall TcxRegExprTimeSeparator() : TcxRegExprItem() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxRegExprTimeSeparator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxRegExprDateSeparator : public TcxRegExprItem
{
	typedef TcxRegExprItem inherited;
	
public:
	virtual bool __fastcall Check(System::WideChar &AToken, bool ACaseInsensitive, bool ACanChangeCase);
	virtual TcxRegExprItem* __fastcall Clone();
	System::WideChar __fastcall Value();
public:
	/* TObject.Create */ inline __fastcall TcxRegExprDateSeparator() : TcxRegExprItem() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxRegExprDateSeparator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxRegExprSubrange : public TcxRegExprItem
{
	typedef TcxRegExprItem inherited;
	
private:
	System::WideChar FStartValue;
	System::WideChar FFinishValue;
	
public:
	__fastcall TcxRegExprSubrange(System::WideChar AStartValue, System::WideChar AFinishValue);
	virtual bool __fastcall Check(System::WideChar &AToken, bool ACaseInsensitive, bool ACanChangeCase);
	virtual TcxRegExprItem* __fastcall Clone();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxRegExprSubrange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxRegExprEnumeration : public TcxRegExprItem
{
	typedef TcxRegExprItem inherited;
	
private:
	bool FInverse;
	
public:
	__fastcall TcxRegExprEnumeration(bool AInverse);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxRegExprEnumeration() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxRegExprUserEnumeration : public TcxRegExprEnumeration
{
	typedef TcxRegExprEnumeration inherited;
	
private:
	System::Classes::TList* FItems;
	TcxRegExprItem* __fastcall Item(int AIndex);
	
public:
	__fastcall TcxRegExprUserEnumeration(bool AInverse);
	__fastcall virtual ~TcxRegExprUserEnumeration();
	void __fastcall Add(TcxRegExprItem* AItem);
	virtual bool __fastcall Check(System::WideChar &AToken, bool ACaseInsensitive, bool ACanChangeCase);
	virtual TcxRegExprItem* __fastcall Clone();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxRegExprDigit : public TcxRegExprEnumeration
{
	typedef TcxRegExprEnumeration inherited;
	
public:
	__fastcall TcxRegExprDigit(bool AInverse);
	virtual bool __fastcall Check(System::WideChar &AToken, bool ACaseInsensitive, bool ACanChangeCase);
	virtual TcxRegExprItem* __fastcall Clone();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxRegExprDigit() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxRegExprIdLetter : public TcxRegExprEnumeration
{
	typedef TcxRegExprEnumeration inherited;
	
public:
	__fastcall TcxRegExprIdLetter(bool AInverse);
	virtual bool __fastcall Check(System::WideChar &AToken, bool ACaseInsensitive, bool ACanChangeCase);
	virtual TcxRegExprItem* __fastcall Clone();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxRegExprIdLetter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxRegExprSpace : public TcxRegExprEnumeration
{
	typedef TcxRegExprEnumeration inherited;
	
public:
	__fastcall TcxRegExprSpace(bool AInverse);
	virtual bool __fastcall Check(System::WideChar &AToken, bool ACaseInsensitive, bool ACanChangeCase);
	virtual TcxRegExprItem* __fastcall Clone();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxRegExprSpace() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxRegExprAll : public TcxRegExprItem
{
	typedef TcxRegExprItem inherited;
	
public:
	virtual bool __fastcall Check(System::WideChar &AToken, bool ACaseInsensitive, bool ACanChangeCase);
	virtual TcxRegExprItem* __fastcall Clone();
public:
	/* TObject.Create */ inline __fastcall TcxRegExprAll() : TcxRegExprItem() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxRegExprAll() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxRegExprState : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TcxRegExprStates* FStates;
	
public:
	__fastcall TcxRegExprState();
	__fastcall virtual ~TcxRegExprState();
	void __fastcall Add(TcxRegExprState* AState)/* overload */;
	void __fastcall Add(TcxRegExprStates* AStates)/* overload */;
	virtual TcxRegExprStates* __fastcall Check(System::WideChar &AToken, bool ACaseInsensitive, bool ACanChangeCase);
	virtual TcxRegExprState* __fastcall Clone();
	TcxRegExprStates* __fastcall GetAllNextStates();
	virtual TcxRegExprStates* __fastcall GetSelf();
	TcxRegExprStates* __fastcall Next(System::WideChar &AToken, bool ACaseInsensitive, bool ACanChangeCase);
	__property TcxRegExprStates* States = {read=FStates};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxRegExprSimpleState : public TcxRegExprState
{
	typedef TcxRegExprState inherited;
	
private:
	bool FIsFinal;
	TcxRegExprItem* FValue;
	
public:
	__fastcall TcxRegExprSimpleState(TcxRegExprItem* AValue);
	__fastcall virtual ~TcxRegExprSimpleState();
	virtual TcxRegExprStates* __fastcall Check(System::WideChar &AToken, bool ACaseInsensitive, bool ACanChangeCase);
	virtual TcxRegExprState* __fastcall Clone();
	virtual TcxRegExprStates* __fastcall GetSelf();
	void __fastcall SetFinal();
	__property bool IsFinal = {read=FIsFinal, nodefault};
	__property TcxRegExprItem* Value = {read=FValue};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxRegExprBlockState : public TcxRegExprState
{
	typedef TcxRegExprState inherited;
	
public:
	virtual TcxRegExprStates* __fastcall Check(System::WideChar &AToken, bool ACaseInsensitive, bool ACanChangeCase);
	virtual TcxRegExprState* __fastcall Clone();
	virtual TcxRegExprStates* __fastcall GetSelf();
public:
	/* TcxRegExprState.Create */ inline __fastcall TcxRegExprBlockState() : TcxRegExprState() { }
	/* TcxRegExprState.Destroy */ inline __fastcall virtual ~TcxRegExprBlockState() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxRegExprStates : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TcxRegExprState* operator[](int AIndex) { return this->State[AIndex]; }
	
private:
	System::Classes::TList* FStates;
	int __fastcall GetCount();
	TcxRegExprState* __fastcall GetState(int AIndex);
	
public:
	__fastcall TcxRegExprStates();
	__fastcall virtual ~TcxRegExprStates();
	void __fastcall Add(TcxRegExprState* AState)/* overload */;
	void __fastcall Add(TcxRegExprStates* AStates)/* overload */;
	void __fastcall Clear();
	bool __fastcall Equ(System::WideChar &ASymbol);
	TcxRegExprStates* __fastcall GetAllNextStates();
	bool __fastcall IsFinal();
	TcxRegExprStates* __fastcall Next(System::WideChar &AToken, bool ACaseInsensitive, bool ACanChangeCase);
	__property int Count = {read=GetCount, nodefault};
	__property TcxRegExprState* State[int AIndex] = {read=GetState/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxRegExprAutomat : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TcxRegExpr* FOwner;
	TcxRegExprStates* FCurrentStates;
	TcxRegExprParserAlts* FExpr;
	System::Classes::TList* FHistory;
	TcxRegExprSimpleState* FStartState;
	TcxRegExprStates* __fastcall GetAllNextStates();
	TcxRegExprStates* __fastcall Pop();
	void __fastcall Push(TcxRegExprStates* AStates);
	
public:
	__fastcall TcxRegExprAutomat(TcxRegExprParserAlts* AExpr, TcxRegExpr* AOwner);
	__fastcall virtual ~TcxRegExprAutomat();
	bool __fastcall IsFinal();
	bool __fastcall IsStart();
	bool __fastcall Next(System::WideChar &AToken, bool ACaseInsensitive, bool ACanChangeCase);
	bool __fastcall Prev();
	System::UnicodeString __fastcall Print();
	void __fastcall Reset();
	void __fastcall ReUpdate();
	void __fastcall Update();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxRegExprQuantifier : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual bool __fastcall CanMissing() = 0 ;
	virtual bool __fastcall CanRepeat() = 0 ;
	virtual TcxRegExprQuantifier* __fastcall Clone() = 0 ;
	virtual System::UnicodeString __fastcall Print() = 0 ;
public:
	/* TObject.Create */ inline __fastcall TcxRegExprQuantifier() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxRegExprQuantifier() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxRegExprSimpleQuantifier : public TcxRegExprQuantifier
{
	typedef TcxRegExprQuantifier inherited;
	
public:
	virtual bool __fastcall CanMissing();
	virtual bool __fastcall CanRepeat();
	virtual TcxRegExprQuantifier* __fastcall Clone();
	virtual System::UnicodeString __fastcall Print();
public:
	/* TObject.Create */ inline __fastcall TcxRegExprSimpleQuantifier() : TcxRegExprQuantifier() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxRegExprSimpleQuantifier() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxRegExprQuestionQuantifier : public TcxRegExprQuantifier
{
	typedef TcxRegExprQuantifier inherited;
	
public:
	virtual bool __fastcall CanMissing();
	virtual bool __fastcall CanRepeat();
	virtual TcxRegExprQuantifier* __fastcall Clone();
	virtual System::UnicodeString __fastcall Print();
public:
	/* TObject.Create */ inline __fastcall TcxRegExprQuestionQuantifier() : TcxRegExprQuantifier() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxRegExprQuestionQuantifier() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxRegExprStarQuantifier : public TcxRegExprQuantifier
{
	typedef TcxRegExprQuantifier inherited;
	
public:
	virtual bool __fastcall CanMissing();
	virtual bool __fastcall CanRepeat();
	virtual TcxRegExprQuantifier* __fastcall Clone();
	virtual System::UnicodeString __fastcall Print();
public:
	/* TObject.Create */ inline __fastcall TcxRegExprStarQuantifier() : TcxRegExprQuantifier() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxRegExprStarQuantifier() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxRegExprPlusQuantifier : public TcxRegExprQuantifier
{
	typedef TcxRegExprQuantifier inherited;
	
public:
	virtual bool __fastcall CanMissing();
	virtual bool __fastcall CanRepeat();
	virtual TcxRegExprQuantifier* __fastcall Clone();
	virtual System::UnicodeString __fastcall Print();
public:
	/* TObject.Create */ inline __fastcall TcxRegExprPlusQuantifier() : TcxRegExprQuantifier() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxRegExprPlusQuantifier() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxRegExprParserItem : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TcxRegExprQuantifier* FQuantifier;
	
public:
	__fastcall TcxRegExprParserItem(TcxRegExprQuantifier* AQuantifier);
	__fastcall virtual ~TcxRegExprParserItem();
	virtual bool __fastcall CanEmpty() = 0 ;
	bool __fastcall CanMissing();
	bool __fastcall CanRepeat();
	virtual TcxRegExprParserItem* __fastcall Clone() = 0 ;
	bool __fastcall NotQuantifier();
	virtual System::UnicodeString __fastcall Print() = 0 ;
	virtual void __fastcall SetFinal() = 0 ;
	void __fastcall SetQuantifier(TcxRegExprQuantifier* AQuantifier);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxRegExprParserSimpleItem : public TcxRegExprParserItem
{
	typedef TcxRegExprParserItem inherited;
	
private:
	TcxRegExprState* FState;
	
public:
	__fastcall TcxRegExprParserSimpleItem(TcxRegExprState* AState, TcxRegExprQuantifier* AQuantifier);
	__fastcall virtual ~TcxRegExprParserSimpleItem();
	virtual bool __fastcall CanEmpty();
	virtual TcxRegExprParserItem* __fastcall Clone();
	virtual System::UnicodeString __fastcall Print();
	virtual void __fastcall SetFinal();
	__property TcxRegExprState* State = {read=FState};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxRegExprParserBlockItem : public TcxRegExprParserItem
{
	typedef TcxRegExprParserItem inherited;
	
private:
	TcxRegExprParserAlts* FAlts;
	TcxRegExprState* FFinishState;
	TcxRegExprState* FStartState;
	
public:
	__fastcall TcxRegExprParserBlockItem(TcxRegExprQuantifier* AQuantifier);
	__fastcall virtual ~TcxRegExprParserBlockItem();
	virtual bool __fastcall CanEmpty();
	void __fastcall CreateConnections();
	void __fastcall AddAlt(TcxRegExprParserAlt* AAlt);
	void __fastcall AddAlts(TcxRegExprParserAlts* AAlts);
	virtual TcxRegExprParserItem* __fastcall Clone();
	virtual System::UnicodeString __fastcall Print();
	virtual void __fastcall SetFinal();
	__property TcxRegExprParserAlts* Alts = {read=FAlts};
	__property TcxRegExprState* FinishState = {read=FFinishState};
	__property TcxRegExprState* StartState = {read=FStartState};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxRegExprParserAlt : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TcxRegExprParserItem* operator[](int AIndex) { return this->Item[AIndex]; }
	
private:
	System::Classes::TList* FItems;
	int __fastcall GetCount();
	TcxRegExprParserItem* __fastcall GetFirstItem();
	TcxRegExprParserItem* __fastcall GetItem(int AIndex);
	TcxRegExprParserItem* __fastcall GetLastItem();
	void __fastcall SetLastItem(TcxRegExprParserItem* AItem);
	
public:
	__fastcall TcxRegExprParserAlt();
	__fastcall virtual ~TcxRegExprParserAlt();
	void __fastcall Add(TcxRegExprParserItem* AItem);
	bool __fastcall CanEmpty();
	bool __fastcall CanMissing();
	TcxRegExprParserAlt* __fastcall Clone();
	void __fastcall CreateConnections();
	void __fastcall CreateFinalStates();
	TcxRegExprStates* __fastcall GetStartConnections();
	System::UnicodeString __fastcall Print();
	void __fastcall SetFinishConnection(TcxRegExprState* AFinishState);
	__property int Count = {read=GetCount, nodefault};
	__property TcxRegExprParserItem* FirstItem = {read=GetFirstItem};
	__property TcxRegExprParserItem* Item[int AIndex] = {read=GetItem/*, default*/};
	__property TcxRegExprParserItem* LastItem = {read=GetLastItem, write=SetLastItem};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxRegExprParserAlts : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TcxRegExprParserAlt* operator[](int AIndex) { return this->Alt[AIndex]; }
	
private:
	System::Classes::TList* FAlts;
	TcxRegExprParserAlt* __fastcall GetAlt(int AIndex);
	int __fastcall GetCount();
	TcxRegExprParserAlt* __fastcall GetLastAlt();
	
public:
	__fastcall TcxRegExprParserAlts();
	__fastcall virtual ~TcxRegExprParserAlts();
	void __fastcall Add(TcxRegExprParserAlt* AAlt);
	void __fastcall AddAlt();
	bool __fastcall CanEmpty();
	void __fastcall CreateConnections();
	void __fastcall CreateFinalStates();
	TcxRegExprParserAlts* __fastcall Clone();
	TcxRegExprStates* __fastcall GetStartConnections();
	System::UnicodeString __fastcall Print();
	void __fastcall SetFinishConnections(TcxRegExprState* AFinishState);
	bool __fastcall StartStateIsFinal();
	bool __fastcall ThereIsEmptyAlt();
	__property TcxRegExprParserAlt* Alt[int AIndex] = {read=GetAlt/*, default*/};
	__property int Count = {read=GetCount, nodefault};
	__property TcxRegExprParserAlt* LastAlt = {read=GetLastAlt};
};

#pragma pack(pop)

typedef void __fastcall (__closure *TcxSymbolDeleteEvent)(void);

typedef void __fastcall (__closure *TcxSymbolUpdateEvent)(System::WideChar ASymbol);

class PASCALIMPLEMENTATION TcxRegExpr : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TcxRegExprAutomat* FAutomat;
	System::Classes::TList* FBlocks;
	int FChar;
	bool FCaseInsensitive;
	bool FCompiled;
	TcxRegExprErrors* FErrors;
	bool FFirstExpr;
	int FIndex;
	int FLexemIndex;
	TcxLexems* FLexems;
	int FLine;
	TcxSymbolDeleteEvent FOnSymbolDelete;
	TcxSymbolUpdateEvent FOnSymbolUpdate;
	System::Classes::TStringStream* FStream;
	bool FUpdateOn;
	void __fastcall Clear();
	bool __fastcall Decimal(System::WideChar AToken);
	bool __fastcall EmptyStream();
	TcxLexem __fastcall CreateLexem(int ALine, int AChar, TcxRegExprLexemCode ACode, System::UnicodeString AValue);
	bool __fastcall GetLexem(TcxLexem &ALexem);
	bool __fastcall GetToken(/* out */ System::WideChar &AToken);
	System::Classes::TStream* __fastcall GetStream();
	bool __fastcall Hexadecimal(System::WideChar AToken);
	bool __fastcall LookToken(/* out */ System::WideChar &AToken, int APtr);
	bool __fastcall ParseAlt(TcxRegExprParserAlt* AAlt, bool Global = true);
	TcxRegExprParserBlockItem* __fastcall ParseBlock();
	TcxRegExprParserSimpleItem* __fastcall ParseEnumeration();
	void __fastcall ParseExpr();
	void __fastcall ParseQuantifier(int &A, int &B);
	void __fastcall ScanASCII(int ALine, int AChar);
	void __fastcall ScanClass();
	void __fastcall ScanExpr();
	void __fastcall ScanEscape(int ALine, int AChar);
	bool __fastcall ScanInteger(int ALine, int AChar, System::WideChar &AToken);
	void __fastcall ScanQuantifier();
	void __fastcall ScanString();
	void __fastcall SetUpdateOn(bool AUpdateOn);
	bool __fastcall Space(System::WideChar AToken);
	void __fastcall SymbolDelete();
	void __fastcall SymbolUpdate(System::WideChar ASymbol);
	void __fastcall TestCompiledStatus();
	
protected:
	__property TcxRegExprAutomat* Automat = {read=FAutomat};
	
public:
	__fastcall TcxRegExpr();
	__fastcall virtual ~TcxRegExpr();
	void __fastcall Compile(System::Classes::TStream* AStream)/* overload */;
	void __fastcall Compile(const System::UnicodeString S)/* overload */;
	bool __fastcall IsCompiled();
	bool __fastcall IsFinal();
	bool __fastcall IsStart();
	bool __fastcall Next(System::WideChar &AToken);
	System::UnicodeString __fastcall NextEx(const System::UnicodeString AString);
	bool __fastcall Prev();
	System::UnicodeString __fastcall Print();
	void __fastcall Reset();
	__property bool CaseInsensitive = {read=FCaseInsensitive, write=FCaseInsensitive, nodefault};
	__property System::Classes::TStream* Stream = {read=GetStream};
	__property bool UpdateOn = {read=FUpdateOn, write=SetUpdateOn, nodefault};
	__property TcxSymbolDeleteEvent OnSymbolDelete = {read=FOnSymbolDelete, write=FOnSymbolDelete};
	__property TcxSymbolUpdateEvent OnSymbolUpdate = {read=FOnSymbolUpdate, write=FOnSymbolUpdate};
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool __fastcall IsTextFullValid(const System::UnicodeString AText, const System::UnicodeString AMask);
extern DELPHI_PACKAGE bool __fastcall IsTextValid(const System::UnicodeString AText, const System::UnicodeString AMask);
}	/* namespace Cxregexpr */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXREGEXPR)
using namespace Cxregexpr;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxregexprHPP
