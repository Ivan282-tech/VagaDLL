// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxSpreadSheetCoreFormulasParser.pas' rev: 35.00 (Windows)

#ifndef DxspreadsheetcoreformulasparserHPP
#define DxspreadsheetcoreformulasparserHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <System.Variants.hpp>
#include <System.Classes.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Generics.Defaults.hpp>
#include <dxCore.hpp>
#include <dxStringHelper.hpp>
#include <dxGenerics.hpp>
#include <dxSpreadSheetClasses.hpp>
#include <dxSpreadSheetCoreFormulas.hpp>
#include <dxSpreadSheetCoreFormulasTokens.hpp>
#include <dxSpreadSheetCoreReferences.hpp>
#include <dxSpreadSheetFunctions.hpp>
#include <dxSpreadSheetTypes.hpp>
#include <dxSpreadSheetUtils.hpp>
#include <dxCoreClasses.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxspreadsheetcoreformulasparser
{
//-- forward type declarations -----------------------------------------------
struct TdxSpreadSheetFormulaParserToken;
class DELPHICLASS TdxSpreadSheetFormulaParserTokenList;
class DELPHICLASS TdxSpreadSheetFormulaParserState;
class DELPHICLASS TdxSpreadSheetFormulaParserStateMachine;
class DELPHICLASS TdxSpreadSheetAbstractFormulaParser;
class DELPHICLASS TdxSpreadSheetFormulaParserIdentList;
class DELPHICLASS TdxSpreadSheetCustomFormulaParser;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TdxSpreadSheetFormulaParserErrorCode : unsigned char { pecNone, pecUnknownIdentifier, pecUnknownIdentifierInParameterList, pecUnexpectedEndOfExternalReference, pecUnexpectedEndOfString, pecUnexpectedEndOfExpression, pecUnexpectedEndOfArray, pecInvalidReference, pecInvalidExpression };

struct DECLSPEC_DRECORD TdxSpreadSheetFormulaParserToken
{
public:
	int ID;
	__int64 Data;
	__int64 Data2;
	int StartPosition;
	int FinishPosition;
	bool __fastcall Equals(const System::UnicodeString AText, const System::UnicodeString ACandidate);
	void __fastcall Initialize(const int ATokenId, const int AStartPosition, const int AFinishPosition);
	int __fastcall GetLength();
	System::UnicodeString __fastcall GetString(const System::UnicodeString AText);
	void __fastcall Reset();
};


class PASCALIMPLEMENTATION TdxSpreadSheetFormulaParserTokenList : public System::Generics::Collections::TList__1<TdxSpreadSheetFormulaParserToken>
{
	typedef System::Generics::Collections::TList__1<TdxSpreadSheetFormulaParserToken> inherited;
	
public:
	TdxSpreadSheetFormulaParserToken __fastcall Pop();
public:
	/* {System_Generics_Collections}TList<dxSpreadSheetCoreFormulasParser_TdxSpreadSheetFormulaParserToken>.Create */ inline __fastcall TdxSpreadSheetFormulaParserTokenList()/* overload */ : System::Generics::Collections::TList__1<TdxSpreadSheetFormulaParserToken>() { }
	/* {System_Generics_Collections}TList<dxSpreadSheetCoreFormulasParser_TdxSpreadSheetFormulaParserToken>.Create */ inline __fastcall TdxSpreadSheetFormulaParserTokenList(const System::DelphiInterface<System::Generics::Defaults::IComparer__1<TdxSpreadSheetFormulaParserToken> > AComparer)/* overload */ : System::Generics::Collections::TList__1<TdxSpreadSheetFormulaParserToken>(AComparer) { }
	/* {System_Generics_Collections}TList<dxSpreadSheetCoreFormulasParser_TdxSpreadSheetFormulaParserToken>.Create */ inline __fastcall TdxSpreadSheetFormulaParserTokenList(System::Generics::Collections::TEnumerable__1<TdxSpreadSheetFormulaParserToken>* const Collection)/* overload */ : System::Generics::Collections::TList__1<TdxSpreadSheetFormulaParserToken>(Collection) { }
	/* {System_Generics_Collections}TList<dxSpreadSheetCoreFormulasParser_TdxSpreadSheetFormulaParserToken>.Create */ inline __fastcall TdxSpreadSheetFormulaParserTokenList(const TdxSpreadSheetFormulaParserToken *Values, const int Values_High)/* overload */ : System::Generics::Collections::TList__1<TdxSpreadSheetFormulaParserToken>(Values, Values_High) { }
	/* {System_Generics_Collections}TList<dxSpreadSheetCoreFormulasParser_TdxSpreadSheetFormulaParserToken>.Destroy */ inline __fastcall virtual ~TdxSpreadSheetFormulaParserTokenList() { }
	
};


typedef bool __fastcall (__closure *TdxSpreadSheetFormulaParserCheckFunc)(int APosition, int AFinishPos);

typedef Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* __fastcall (__closure *TdxSpreadSheetFormulaParserTokenCreator)(TdxSpreadSheetFormulaParserTokenList* AStack);

typedef bool __fastcall (__closure *TdxSpreadSheetFormulaParserTokenController)(int &APosition, int AFinishPos, TdxSpreadSheetFormulaParserToken &AToken);

class PASCALIMPLEMENTATION TdxSpreadSheetFormulaParserState : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Dxgenerics::TdxIntegersDictionary* FNextState;
	System::Generics::Collections::TList__1<TdxSpreadSheetFormulaParserTokenController>* FTokenControllers;
	TdxSpreadSheetFormulaParserTokenCreator FTokenCreator;
	
public:
	__fastcall TdxSpreadSheetFormulaParserState();
	__fastcall virtual ~TdxSpreadSheetFormulaParserState();
	void __fastcall AddTokenController(TdxSpreadSheetFormulaParserTokenController AController);
	Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* __fastcall CreateToken(TdxSpreadSheetFormulaParserTokenList* AStack, System::Word ASourceOffset = (System::Word)(0x0));
	bool __fastcall GetNextState(int ATokenId, /* out */ int &AStateId);
	bool __fastcall GetNextToken(int &APosition, int AFinishPos, TdxSpreadSheetFormulaParserToken &AToken);
	void __fastcall RemoveTokenController(TdxSpreadSheetFormulaParserTokenController AController);
	void __fastcall SetNextState(const int ATokenId, const int AStateId);
	void __fastcall SetTokenCreator(TdxSpreadSheetFormulaParserTokenCreator ATokenCreator);
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetFormulaParserStateMachine : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Generics::Collections::TObjectDictionary__2<int,TdxSpreadSheetFormulaParserState*>* FStates;
	
public:
	__fastcall TdxSpreadSheetFormulaParserStateMachine();
	__fastcall virtual ~TdxSpreadSheetFormulaParserStateMachine();
	TdxSpreadSheetFormulaParserState* __fastcall CreateState(int StateId);
	TdxSpreadSheetFormulaParserState* __fastcall GetState(int StateId);
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxSpreadSheetAbstractFormulaParser : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	static Dxcore::TdxAnsiCharSet BreakLineAndSpaceCharacters;
	Dxspreadsheetclasses::TdxSpreadSheetFormatSettings* FFormatSettings;
	Dxspreadsheetcoreformulas::TdxSpreadSheetCustomFormula* FFormula;
	int FFormulaOffset;
	bool FParserInitialized;
	TdxSpreadSheetFormulaParserStateMachine* FStateMachine;
	bool __fastcall GetR1C1Reference();
	
protected:
	static const System::Int8 StateStart = System::Int8(0x0);
	
	int FAnchorColumn;
	int FAnchorRow;
	bool FCanSpaceBeSignificant;
	TdxSpreadSheetFormulaParserErrorCode FErrorCode;
	int FErrorIndex;
	System::UnicodeString FFormulaSourceText;
	System::UnicodeString FFormulaText;
	TdxSpreadSheetFormulaParserCheckFunc FParameterSeparatorCheckFunc;
	bool __fastcall CheckError();
	bool __fastcall CheckText(int APosition, int AFinishPos, const System::WideChar ACandidate)/* overload */;
	bool __fastcall CheckText(int APosition, int AFinishPos, const System::UnicodeString ACandidate)/* overload */;
	bool __fastcall IsArraySeparator(int APosition, int AFinishPos);
	bool __fastcall IsBreakChar(int APosition, int AFinishPos);
	virtual bool __fastcall IsFormulaText(const System::UnicodeString S, /* out */ int &AOffset);
	bool __fastcall IsListOrArraySeparator(int APosition, int AFinishPos);
	bool __fastcall IsListSeparator(int APosition, int AFinishPos);
	virtual Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* __fastcall DoFullParse(int APosition, int AFinishPos);
	virtual Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* __fastcall DoParse(int &APosition, int &AFinishPos, TdxSpreadSheetFormulaParserCheckFunc AIsParameterSeparatorProc);
	virtual void __fastcall Initialize(const System::UnicodeString AText, int AAnchorRow, int AAnchorColumn);
	virtual void __fastcall InitializeParser();
	void __fastcall InitializeSourceBounds(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* AToken, System::Word AStart, System::Word AFinish)/* overload */;
	void __fastcall InitializeSourceBounds(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* AToken, const TdxSpreadSheetFormulaParserToken &AParserToken)/* overload */;
	void __fastcall UpdateFormula(Dxspreadsheetcoreformulas::TdxSpreadSheetCustomFormula* AFormula);
	virtual Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* __fastcall GetNextToken(int &APosition, int AFinishPos);
	virtual bool __fastcall GetParameters(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* AParent, int APosition, int AFinishPos, TdxSpreadSheetFormulaParserCheckFunc AIsParameterSeparatorProc);
	virtual Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* __fastcall GetTokensFromStringRange(int &APosition, int &AFinishPos, TdxSpreadSheetFormulaParserCheckFunc AIsParameterSeparatorProc);
	virtual void __fastcall PopulateStateMachine() = 0 ;
	virtual void __fastcall SetErrorIndex(int AErrorIndex, TdxSpreadSheetFormulaParserErrorCode AErrorCode);
	void __fastcall SkipInsignificantSpaces(int &APosition, int AFinishPos);
	virtual Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* __fastcall CompactTokens(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* AToken);
	virtual bool __fastcall ValidateTokens(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* AToken);
	__property TdxSpreadSheetFormulaParserStateMachine* StateMachine = {read=FStateMachine};
	
public:
	__fastcall virtual TdxSpreadSheetAbstractFormulaParser();
	__fastcall virtual ~TdxSpreadSheetAbstractFormulaParser();
	virtual bool __fastcall ParseFormula(const System::UnicodeString AFormulaText, Dxspreadsheetcoreformulas::TdxSpreadSheetCustomFormula* AFormula);
	__property int AnchorColumn = {read=FAnchorColumn, nodefault};
	__property int AnchorRow = {read=FAnchorRow, nodefault};
	__property TdxSpreadSheetFormulaParserErrorCode ErrorCode = {read=FErrorCode, nodefault};
	__property Dxspreadsheetclasses::TdxSpreadSheetFormatSettings* FormatSettings = {read=FFormatSettings};
	__property Dxspreadsheetcoreformulas::TdxSpreadSheetCustomFormula* Formula = {read=FFormula};
	__property bool R1C1Reference = {read=GetR1C1Reference, nodefault};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetFormulaParserIdentList : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Classes::TStringList* FData;
	
public:
	__fastcall TdxSpreadSheetFormulaParserIdentList();
	__fastcall virtual ~TdxSpreadSheetFormulaParserIdentList();
	void __fastcall Add(const System::UnicodeString Ident, NativeInt AData);
	void __fastcall Clear();
	bool __fastcall Contains(const System::UnicodeString S);
	bool __fastcall Find(const System::UnicodeString S, int &AStartPos, int AFinishPos, /* out */ NativeInt &AData);
	void __fastcall Remove(NativeInt AData);
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxSpreadSheetCustomFormulaParser : public TdxSpreadSheetAbstractFormulaParser
{
	typedef TdxSpreadSheetAbstractFormulaParser inherited;
	
	
protected:
	typedef bool __fastcall (__closure *TTokenToReferenceAdapter)(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* AToken, /* out */ Dxspreadsheetcorereferences::TdxSpreadSheetReference &ARow, /* out */ Dxspreadsheetcorereferences::TdxSpreadSheetReference &AColumn, /* out */ Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink* &ALink);
	
	
protected:
	static const System::Int8 TokenArray = System::Int8(0x1);
	
	static const System::Int8 TokenError = System::Int8(0x2);
	
	static const System::Int8 TokenFloat = System::Int8(0x3);
	
	static const System::Int8 TokenIdent = System::Int8(0x4);
	
	static const System::Int8 TokenInteger = System::Int8(0x5);
	
	static const System::Int8 TokenOperator = System::Int8(0x6);
	
	static const System::Int8 TokenReference = System::Int8(0x7);
	
	static const System::Int8 TokenReferenceError = System::Int8(0x8);
	
	static const System::Int8 TokenReferenceSeparator = System::Int8(0x9);
	
	static const System::Int8 TokenFullColumnReference = System::Int8(0xa);
	
	static const System::Int8 TokenString = System::Int8(0xb);
	
	static const System::Int8 TokenSubExpression = System::Int8(0xc);
	
	static const System::Int8 TokenExternalReference = System::Int8(0xd);
	
	static const System::Int8 TokenLast = System::Int8(0xd);
	
	static const System::Int8 StateArray = System::Int8(0x1);
	
	static const System::Int8 StateError = System::Int8(0x2);
	
	static const System::Int8 StateErrorOrReference = System::Int8(0x3);
	
	static const System::Int8 StateFunction = System::Int8(0x4);
	
	static const System::Int8 StateIdent = System::Int8(0x5);
	
	static const System::Int8 StateNumber = System::Int8(0x6);
	
	static const System::Int8 StateOperator = System::Int8(0x8);
	
	static const System::Int8 StateStringOr3DReference = System::Int8(0x9);
	
	static const System::Int8 StateSubExpression = System::Int8(0xa);
	
	static const System::Int8 State3DReference = System::Int8(0xb);
	
	static const System::Int8 State3DReferencePre1 = System::Int8(0xc);
	
	static const System::Int8 State3DReferencePre2 = System::Int8(0xd);
	
	static const System::Int8 StateExternalReferencePre1 = System::Int8(0xe);
	
	static const System::Int8 StateExternalReferencePre2 = System::Int8(0xf);
	
	static const System::Int8 StateFullColumnReference = System::Int8(0x10);
	
	static const System::Int8 StateExternalNameOrFunction = System::Int8(0x11);
	
	static const System::Int8 StateExternalFunction = System::Int8(0x12);
	
	static const System::Int8 StateLast = System::Int8(0x12);
	
	bool FIsRangeOperatorSupported;
	TdxSpreadSheetFormulaParserIdentList* FKnownErrors;
	TdxSpreadSheetFormulaParserIdentList* FKnownOperations;
	Dxgenerics::TdxClassDictionary__1<TTokenToReferenceAdapter>* FTokenToReferenceAdapters;
	int __fastcall FindStringRightBound(const System::UnicodeString S, const System::WideChar AMark, int APosition, int AFinishPos);
	int __fastcall FindSubExpressionRightBound(const System::WideChar AClosingTag, int AStartPos, int AFinishPos);
	System::Word __fastcall GetSourceStart(TdxSpreadSheetFormulaParserTokenList* AStack);
	int __fastcall SkipString(const System::WideChar AMark, int AStartPos, int AFinishPos);
	int __fastcall SkipSubExpression(const System::WideChar AOpeningTag, const System::WideChar AClosingTag, int AStartPos, int AFinishPos);
	Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* __fastcall CreateToken3DReference(TdxSpreadSheetFormulaParserTokenList* AStack);
	Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* __fastcall CreateTokenArray(TdxSpreadSheetFormulaParserTokenList* AStack);
	Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* __fastcall CreateTokenError(TdxSpreadSheetFormulaParserTokenList* AStack);
	Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* __fastcall CreateTokenExternalFunction(TdxSpreadSheetFormulaParserTokenList* AStack);
	Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* __fastcall CreateTokenExternalName(TdxSpreadSheetFormulaParserTokenList* AStack);
	Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* __fastcall CreateTokenFullColumnReference(TdxSpreadSheetFormulaParserTokenList* AStack);
	Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* __fastcall CreateTokenFunction(TdxSpreadSheetFormulaParserTokenList* AStack);
	virtual Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* __fastcall CreateTokenIdent(TdxSpreadSheetFormulaParserTokenList* AStack);
	Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* __fastcall CreateTokenNumber(TdxSpreadSheetFormulaParserTokenList* AStack);
	Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* __fastcall CreateTokenOperator(TdxSpreadSheetFormulaParserTokenList* AStack);
	Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* __fastcall CreateTokenString(TdxSpreadSheetFormulaParserTokenList* AStack);
	Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* __fastcall CreateTokenSubExpression(TdxSpreadSheetFormulaParserTokenList* AStack);
	Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* __fastcall Create3DAreaReferenceToken(const Dxspreadsheetcorereferences::TdxSpreadSheetReference &ARow, const Dxspreadsheetcorereferences::TdxSpreadSheetReference &AColumn, const Dxspreadsheetcorereferences::TdxSpreadSheetReference &ARow2, const Dxspreadsheetcorereferences::TdxSpreadSheetReference &AColumn2, Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink* ALink1 = (Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink*)(0x0), Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink* ALink2 = (Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink*)(0x0));
	virtual Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink* __fastcall Create3DReferenceAutoLink();
	virtual Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomExternalLink* __fastcall Create3DReferenceExternalLink(int ALinkId, const System::UnicodeString AName);
	Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink* __fastcall Create3DReferenceLink(TdxSpreadSheetFormulaParserTokenList* AStack);
	Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* __fastcall Create3DReferenceToken(const Dxspreadsheetcorereferences::TdxSpreadSheetReference &ARow, const Dxspreadsheetcorereferences::TdxSpreadSheetReference &AColumn, Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink* ALink = (Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink*)(0x0));
	virtual bool __fastcall CreateDefinedNameToken(const TdxSpreadSheetFormulaParserToken &AToken, /* out */ Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* &ADefinedNameToken, Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink* ALink = (Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink*)(0x0));
	Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* __fastcall CreateUnknownNameToken(const TdxSpreadSheetFormulaParserToken &AToken, Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink* ALink = (Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink*)(0x0));
	bool __fastcall IsArray(int &APosition, int AFinishPos, TdxSpreadSheetFormulaParserToken &AToken);
	bool __fastcall IsError(int &APosition, int AFinishPos, TdxSpreadSheetFormulaParserToken &AToken);
	bool __fastcall IsExternalReference(int &APosition, int AFinishPos, TdxSpreadSheetFormulaParserToken &AToken);
	bool __fastcall IsFunctionParameters(int &APosition, int AFinishPos, TdxSpreadSheetFormulaParserToken &AToken);
	bool __fastcall IsIdent(int &APosition, int AFinishPos, TdxSpreadSheetFormulaParserToken &AToken);
	bool __fastcall IsNumber(int &APosition, int AFinishPos, TdxSpreadSheetFormulaParserToken &AToken);
	bool __fastcall IsOperation(int &APosition, int AFinishPos, TdxSpreadSheetFormulaParserToken &AToken);
	bool __fastcall IsReference(int &APosition, int AFinishPos, TdxSpreadSheetFormulaParserToken &AToken);
	bool __fastcall IsReferenceSeparator(int &APosition, int AFinishPos, TdxSpreadSheetFormulaParserToken &AToken);
	bool __fastcall IsString(int &APosition, int AFinishPos, TdxSpreadSheetFormulaParserToken &AToken);
	bool __fastcall IsSubExpression(int &APosition, int AFinishPos, TdxSpreadSheetFormulaParserToken &AToken);
	bool __fastcall TokenAreaReferenceAsReference(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* AToken, /* out */ Dxspreadsheetcorereferences::TdxSpreadSheetReference &ARow, /* out */ Dxspreadsheetcorereferences::TdxSpreadSheetReference &AColumn, /* out */ Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink* &ALink);
	bool __fastcall TokenErrorAsReference(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* AToken, /* out */ Dxspreadsheetcorereferences::TdxSpreadSheetReference &ARow, /* out */ Dxspreadsheetcorereferences::TdxSpreadSheetReference &AColumn, /* out */ Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink* &ALink);
	bool __fastcall TokenIntegerAsReference(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* AToken, /* out */ Dxspreadsheetcorereferences::TdxSpreadSheetReference &ARow, /* out */ Dxspreadsheetcorereferences::TdxSpreadSheetReference &AColumn, /* out */ Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink* &ALink);
	bool __fastcall TokenReferenceAsReference(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* AToken, /* out */ Dxspreadsheetcorereferences::TdxSpreadSheetReference &ARow, /* out */ Dxspreadsheetcorereferences::TdxSpreadSheetReference &AColumn, /* out */ Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink* &ALink);
	bool __fastcall Token3DReferenceAsReference(Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* AToken, /* out */ Dxspreadsheetcorereferences::TdxSpreadSheetReference &ARow, /* out */ Dxspreadsheetcorereferences::TdxSpreadSheetReference &AColumn, /* out */ Dxspreadsheetcoreformulas::TdxSpreadSheet3DReferenceCustomLink* &ALink);
	bool __fastcall CheckReference(const TdxSpreadSheetFormulaParserToken &AToken, Dxspreadsheetcorereferences::TdxSpreadSheetReference &ARow, Dxspreadsheetcorereferences::TdxSpreadSheetReference &AColumn);
	bool __fastcall GetExternalLinkInfo(const TdxSpreadSheetFormulaParserToken &AToken, /* out */ int &ALinkId, /* out */ System::UnicodeString &AName, TdxSpreadSheetFormulaParserTokenList* AStack = (TdxSpreadSheetFormulaParserTokenList*)(0x0));
	virtual Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* __fastcall GetNextToken(int &APosition, int AFinishPos);
	virtual bool __fastcall GetViewByName(const System::UnicodeString AName, /* out */ System::TObject* &AView);
	bool __fastcall ParseReference(int &AStartPos, int &AFinishPos, Dxspreadsheetcorereferences::TdxSpreadSheetReference &ARow, Dxspreadsheetcorereferences::TdxSpreadSheetReference &AColumn);
	virtual void __fastcall InitializeParser();
	void __fastcall ValidateReference(int AIndex, Dxspreadsheetcorereferences::TdxSpreadSheetReference &AReference);
	void __fastcall ValidateReferences(Dxspreadsheetcorereferences::TdxSpreadSheetReference &ARow, Dxspreadsheetcorereferences::TdxSpreadSheetReference &AColumn);
	virtual void __fastcall PopulateKnownErrors();
	virtual void __fastcall PopulateKnownOperations();
	virtual void __fastcall PopulateStateMachine();
	virtual void __fastcall PopulateTokenToReferenceAdapters();
	
public:
	__fastcall virtual TdxSpreadSheetCustomFormulaParser();
	__fastcall virtual ~TdxSpreadSheetCustomFormulaParser();
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool __fastcall dxBeginsWith(const System::UnicodeString ASubText, const System::UnicodeString AText, int AStartPos, int AFinishPos);
extern DELPHI_PACKAGE System::UnicodeString __fastcall dxSpreadSheetFormulaExcludeEqualSymbol(const System::UnicodeString S);
extern DELPHI_PACKAGE System::UnicodeString __fastcall dxSpreadSheetFormulaIncludeEqualSymbol(const System::UnicodeString S);
}	/* namespace Dxspreadsheetcoreformulasparser */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXSPREADSHEETCOREFORMULASPARSER)
using namespace Dxspreadsheetcoreformulasparser;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxspreadsheetcoreformulasparserHPP
