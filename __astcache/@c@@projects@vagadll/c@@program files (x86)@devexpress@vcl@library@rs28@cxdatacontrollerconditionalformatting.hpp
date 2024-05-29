// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxDataControllerConditionalFormatting.pas' rev: 35.00 (Windows)

#ifndef CxdatacontrollerconditionalformattingHPP
#define CxdatacontrollerconditionalformattingHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Classes.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Generics.Collections.hpp>
#include <Vcl.Forms.hpp>
#include <dxCore.hpp>
#include <dxCoreClasses.hpp>
#include <cxClasses.hpp>
#include <cxControls.hpp>
#include <cxLookAndFeels.hpp>
#include <cxGeometry.hpp>
#include <cxVariants.hpp>
#include <cxCustomData.hpp>
#include <cxGraphics.hpp>
#include <cxInplaceContainer.hpp>
#include <cxStorage.hpp>
#include <cxEdit.hpp>
#include <dxSpreadSheetTypes.hpp>
#include <dxSpreadSheetCoreFormulas.hpp>
#include <dxSpreadSheetCoreFormulasTokens.hpp>
#include <dxSpreadSheetCoreFormulasParser.hpp>
#include <dxSpreadSheetCoreReferences.hpp>
#include <dxSpreadSheetCoreStyles.hpp>
#include <dxSpreadSheetClasses.hpp>
#include <dxSpreadSheetStyles.hpp>
#include <dxSpreadSheetConditionalFormatting.hpp>
#include <cxDataControllerSpreadSheetDataProvider.hpp>
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxdatacontrollerconditionalformatting
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxDataControllerConditionalFormattingFormulaItemReference;
class DELPHICLASS TcxDataControllerConditionalFormattingFormulaParser;
class DELPHICLASS TcxDataControllerConditionalFormattingFormatSettings;
class DELPHICLASS TcxDataControllerConditionalFormattingFormulaController;
class DELPHICLASS TcxDataControllerConditionalFormattingStyleViewInfo;
__interface DELPHIINTERFACE IcxDataControllerConditionalFormattingProviderOwner;
typedef System::DelphiInterface<IcxDataControllerConditionalFormattingProviderOwner> _di_IcxDataControllerConditionalFormattingProviderOwner;
class DELPHICLASS TcxDataControllerConditionalFormattingProvider;
class DELPHICLASS TcxDataControllerConditionalFormatting;
class DELPHICLASS TcxCustomControlControllerConditionalFormattingProvider;
class DELPHICLASS TcxDataControllerConditionalFormattingRulesManagerDialogProvider;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TcxDataControllerConditionalFormattingFormulaItemReference : public Dxspreadsheetcoreformulastokens::TdxSpreadSheetFormulaAreaReferenceToken
{
	typedef Dxspreadsheetcoreformulastokens::TdxSpreadSheetFormulaAreaReferenceToken inherited;
	
private:
	TcxDataControllerConditionalFormattingProvider* FProvider;
	
protected:
	virtual System::UnicodeString __fastcall ReferenceToString()/* overload */;
	void __fastcall ItemIndexChanged(int AOldIndex, int ANewIndex);
	
public:
	__fastcall TcxDataControllerConditionalFormattingFormulaItemReference(TcxDataControllerConditionalFormattingProvider* AProvider, int AItemIndex);
public:
	/* TdxSpreadSheetFormulaToken.Destroy */ inline __fastcall virtual ~TcxDataControllerConditionalFormattingFormulaItemReference() { }
	
};


class PASCALIMPLEMENTATION TcxDataControllerConditionalFormattingFormulaParser : public Cxdatacontrollerspreadsheetdataprovider::TcxDataControllerSpreadSheetFormulaParser
{
	typedef Cxdatacontrollerspreadsheetdataprovider::TcxDataControllerSpreadSheetFormulaParser inherited;
	
private:
	TcxDataControllerConditionalFormattingProvider* __fastcall GetDataProvider();
	
protected:
	virtual Dxspreadsheetcoreformulastokens::TdxSpreadSheetFormulaReferenceToken* __fastcall CreateItemReferenceToken(int AItemIndex)/* overload */;
	__property TcxDataControllerConditionalFormattingProvider* DataProvider = {read=GetDataProvider};
public:
	/* TcxDataControllerSpreadSheetFormulaParser.Create */ inline __fastcall TcxDataControllerConditionalFormattingFormulaParser(Cxdatacontrollerspreadsheetdataprovider::TcxDataControllerSpreadSheetDataProvider* ADataProvider) : Cxdatacontrollerspreadsheetdataprovider::TcxDataControllerSpreadSheetFormulaParser(ADataProvider) { }
	
public:
	/* TdxSpreadSheetCustomFormulaParser.Destroy */ inline __fastcall virtual ~TcxDataControllerConditionalFormattingFormulaParser() { }
	
	/* Hoisted overloads: */
	
protected:
	inline Dxspreadsheetcoreformulas::TdxSpreadSheetFormulaToken* __fastcall  CreateItemReferenceToken(Dxspreadsheetcoreformulasparser::TdxSpreadSheetFormulaParserTokenList* AStack){ return Cxdatacontrollerspreadsheetdataprovider::TcxDataControllerSpreadSheetFormulaParser::CreateItemReferenceToken(AStack); }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDataControllerConditionalFormattingFormatSettings : public Cxdatacontrollerspreadsheetdataprovider::TcxDataControllerSpreadSheetFormatSettings
{
	typedef Cxdatacontrollerspreadsheetdataprovider::TcxDataControllerSpreadSheetFormatSettings inherited;
	
public:
	/* TdxSpreadSheetCustomFormatSettings.Create */ inline __fastcall TcxDataControllerConditionalFormattingFormatSettings() : Cxdatacontrollerspreadsheetdataprovider::TcxDataControllerSpreadSheetFormatSettings() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxDataControllerConditionalFormattingFormatSettings() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDataControllerConditionalFormattingFormulaController : public Cxdatacontrollerspreadsheetdataprovider::TcxDataControllerSpreadSheetFormulaController
{
	typedef Cxdatacontrollerspreadsheetdataprovider::TcxDataControllerSpreadSheetFormulaController inherited;
	
protected:
	virtual System::TObject* __fastcall CreateParser();
public:
	/* TcxDataControllerSpreadSheetFormulaController.Create */ inline __fastcall TcxDataControllerConditionalFormattingFormulaController(Cxdatacontrollerspreadsheetdataprovider::TcxDataControllerSpreadSheetDataProvider* ADataProvider) : Cxdatacontrollerspreadsheetdataprovider::TcxDataControllerSpreadSheetFormulaController(ADataProvider) { }
	
public:
	/* TdxSpreadSheetCustomFormulaController.Destroy */ inline __fastcall virtual ~TcxDataControllerConditionalFormattingFormulaController() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDataControllerConditionalFormattingStyleViewInfo : public Dxspreadsheetconditionalformatting::TdxSpreadSheetConditionalFormattingStyleViewInfo
{
	typedef Dxspreadsheetconditionalformatting::TdxSpreadSheetConditionalFormattingStyleViewInfo inherited;
	
private:
	System::Types::TRect FCalculatedBounds;
	
protected:
	void __fastcall ValidateBounds(const System::Types::TRect &R);
	
public:
	void __fastcall AfterDrawCellBackground(Cxgraphics::TcxCanvas* ACanvas, System::Uitypes::TColor ABackgroundColor);
	void __fastcall AfterDrawCellValue(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall Calculate(const System::Types::TRect &ABounds, const System::Types::TRect &AContentBounds)/* overload */;
public:
	/* TdxSpreadSheetConditionalFormattingStyleViewInfo.Create */ inline __fastcall virtual TcxDataControllerConditionalFormattingStyleViewInfo(Dxspreadsheetstyles::TdxSpreadSheetCellDisplayStyle* AStyle, Cxgeometry::TdxScaleFactor* AScaleFactor) : Dxspreadsheetconditionalformatting::TdxSpreadSheetConditionalFormattingStyleViewInfo(AStyle, AScaleFactor) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxDataControllerConditionalFormattingStyleViewInfo() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Calculate(const System::Types::TRect &ABounds){ Dxspreadsheetconditionalformatting::TdxSpreadSheetConditionalFormattingStyleViewInfo::Calculate(ABounds); }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{52592036-5D36-435E-ABBF-AFFCEE73F577}") IcxDataControllerConditionalFormattingProviderOwner  : public System::IInterface 
{
	virtual TcxDataControllerConditionalFormattingProvider* __fastcall GetConditionalFormattingProvider() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDataControllerConditionalFormattingProvider : public Cxdatacontrollerspreadsheetdataprovider::TcxDataControllerSpreadSheetDataProvider
{
	typedef Cxdatacontrollerspreadsheetdataprovider::TcxDataControllerSpreadSheetDataProvider inherited;
	
	
private:
	typedef System::Types::TRect TCellStyleCacheKey;
	
	class DELPHICLASS TCellStyleCache;
	#pragma pack(push,8)
	class PASCALIMPLEMENTATION TCellStyleCache : public System::Generics::Collections::TObjectDictionary__2<System::Types::TRect,Dxspreadsheetstyles::TdxSpreadSheetCellDisplayStyle*>
	{
		typedef System::Generics::Collections::TObjectDictionary__2<System::Types::TRect,Dxspreadsheetstyles::TdxSpreadSheetCellDisplayStyle*> inherited;
		
	public:
		/* {System_Generics_Collections}TObjectDictionary<System_Types_TRect,dxSpreadSheetStyles_TdxSpreadSheetCellDisplayStyle>.Create */ inline __fastcall TCellStyleCache(System::Generics::Collections::TDictionaryOwnerships Ownerships, int ACapacity)/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TRect,Dxspreadsheetstyles::TdxSpreadSheetCellDisplayStyle*>(Ownerships, ACapacity) { }
		/* {System_Generics_Collections}TObjectDictionary<System_Types_TRect,dxSpreadSheetStyles_TdxSpreadSheetCellDisplayStyle>.Create */ inline __fastcall TCellStyleCache(System::Generics::Collections::TDictionaryOwnerships Ownerships, const System::DelphiInterface<System::Generics::Defaults::IEqualityComparer__1<System::Types::TRect> > AComparer)/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TRect,Dxspreadsheetstyles::TdxSpreadSheetCellDisplayStyle*>(Ownerships, AComparer) { }
		/* {System_Generics_Collections}TObjectDictionary<System_Types_TRect,dxSpreadSheetStyles_TdxSpreadSheetCellDisplayStyle>.Create */ inline __fastcall TCellStyleCache(System::Generics::Collections::TDictionaryOwnerships Ownerships, int ACapacity, const System::DelphiInterface<System::Generics::Defaults::IEqualityComparer__1<System::Types::TRect> > AComparer)/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TRect,Dxspreadsheetstyles::TdxSpreadSheetCellDisplayStyle*>(Ownerships, ACapacity, AComparer) { }
		
	public:
		/* {System_Generics_Collections}TDictionary<System_Types_TRect,dxSpreadSheetStyles_TdxSpreadSheetCellDisplayStyle>.Create */ inline __fastcall TCellStyleCache()/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TRect,Dxspreadsheetstyles::TdxSpreadSheetCellDisplayStyle*>() { }
		/* {System_Generics_Collections}TDictionary<System_Types_TRect,dxSpreadSheetStyles_TdxSpreadSheetCellDisplayStyle>.Create */ inline __fastcall TCellStyleCache(int ACapacity)/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TRect,Dxspreadsheetstyles::TdxSpreadSheetCellDisplayStyle*>(ACapacity) { }
		/* {System_Generics_Collections}TDictionary<System_Types_TRect,dxSpreadSheetStyles_TdxSpreadSheetCellDisplayStyle>.Create */ inline __fastcall TCellStyleCache(const System::DelphiInterface<System::Generics::Defaults::IEqualityComparer__1<System::Types::TRect> > AComparer)/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TRect,Dxspreadsheetstyles::TdxSpreadSheetCellDisplayStyle*>(AComparer) { }
		/* {System_Generics_Collections}TDictionary<System_Types_TRect,dxSpreadSheetStyles_TdxSpreadSheetCellDisplayStyle>.Create */ inline __fastcall TCellStyleCache(int ACapacity, const System::DelphiInterface<System::Generics::Defaults::IEqualityComparer__1<System::Types::TRect> > AComparer)/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TRect,Dxspreadsheetstyles::TdxSpreadSheetCellDisplayStyle*>(ACapacity, AComparer) { }
		/* {System_Generics_Collections}TDictionary<System_Types_TRect,dxSpreadSheetStyles_TdxSpreadSheetCellDisplayStyle>.Create */ inline __fastcall TCellStyleCache(System::Generics::Collections::TEnumerable__1<System::Generics::Collections::TPair__2<System::Types::TRect,Dxspreadsheetstyles::TdxSpreadSheetCellDisplayStyle*> >* const Collection)/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TRect,Dxspreadsheetstyles::TdxSpreadSheetCellDisplayStyle*>(Collection) { }
		/* {System_Generics_Collections}TDictionary<System_Types_TRect,dxSpreadSheetStyles_TdxSpreadSheetCellDisplayStyle>.Create */ inline __fastcall TCellStyleCache(System::Generics::Collections::TEnumerable__1<System::Generics::Collections::TPair__2<System::Types::TRect,Dxspreadsheetstyles::TdxSpreadSheetCellDisplayStyle*> >* const Collection, const System::DelphiInterface<System::Generics::Defaults::IEqualityComparer__1<System::Types::TRect> > AComparer)/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TRect,Dxspreadsheetstyles::TdxSpreadSheetCellDisplayStyle*>(Collection, AComparer) { }
		/* {System_Generics_Collections}TDictionary<System_Types_TRect,dxSpreadSheetStyles_TdxSpreadSheetCellDisplayStyle>.Create */ inline __fastcall TCellStyleCache(const System::Generics::Collections::TPair__2<System::Types::TRect,Dxspreadsheetstyles::TdxSpreadSheetCellDisplayStyle*> *AItems, const int AItems_High)/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TRect,Dxspreadsheetstyles::TdxSpreadSheetCellDisplayStyle*>(AItems, AItems_High) { }
		/* {System_Generics_Collections}TDictionary<System_Types_TRect,dxSpreadSheetStyles_TdxSpreadSheetCellDisplayStyle>.Create */ inline __fastcall TCellStyleCache(const System::Generics::Collections::TPair__2<System::Types::TRect,Dxspreadsheetstyles::TdxSpreadSheetCellDisplayStyle*> *AItems, const int AItems_High, const System::DelphiInterface<System::Generics::Defaults::IEqualityComparer__1<System::Types::TRect> > AComparer)/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TRect,Dxspreadsheetstyles::TdxSpreadSheetCellDisplayStyle*>(AItems, AItems_High, AComparer) { }
		/* {System_Generics_Collections}TDictionary<System_Types_TRect,dxSpreadSheetStyles_TdxSpreadSheetCellDisplayStyle>.Destroy */ inline __fastcall virtual ~TCellStyleCache() { }
		
	};
	
	#pragma pack(pop)
	
	class DELPHICLASS TStyleCache;
	#pragma pack(push,8)
	class PASCALIMPLEMENTATION TStyleCache : public System::Generics::Collections::TObjectDictionary__2<System::Types::TPoint,TcxDataControllerConditionalFormattingProvider::TCellStyleCache*>
	{
		typedef System::Generics::Collections::TObjectDictionary__2<System::Types::TPoint,TcxDataControllerConditionalFormattingProvider::TCellStyleCache*> inherited;
		
	public:
		void __fastcall AddStyle(const System::Types::TPoint &ACell, const System::Types::TRect &AKey, Dxspreadsheetstyles::TdxSpreadSheetCellDisplayStyle* AStyle);
		bool __fastcall TryGetStyle(const System::Types::TPoint &ACell, /* out */ Dxspreadsheetstyles::TdxSpreadSheetCellDisplayStyle* &AStyle);
		bool __fastcall TryGetCellStyle(const System::Types::TPoint &ACell, const System::Types::TRect &AKey, /* out */ Dxspreadsheetstyles::TdxSpreadSheetCellDisplayStyle* &AStyle);
	public:
		/* {System_Generics_Collections}TObjectDictionary<System_Types_TPoint,cxDataControllerConditionalFormatting_TcxDataControllerConditionalFormattingProvider_TCellStyleCache>.Create */ inline __fastcall TStyleCache(System::Generics::Collections::TDictionaryOwnerships Ownerships, int ACapacity)/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TPoint,TcxDataControllerConditionalFormattingProvider::TCellStyleCache*>(Ownerships, ACapacity) { }
		/* {System_Generics_Collections}TObjectDictionary<System_Types_TPoint,cxDataControllerConditionalFormatting_TcxDataControllerConditionalFormattingProvider_TCellStyleCache>.Create */ inline __fastcall TStyleCache(System::Generics::Collections::TDictionaryOwnerships Ownerships, const System::DelphiInterface<System::Generics::Defaults::IEqualityComparer__1<System::Types::TPoint> > AComparer)/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TPoint,TcxDataControllerConditionalFormattingProvider::TCellStyleCache*>(Ownerships, AComparer) { }
		/* {System_Generics_Collections}TObjectDictionary<System_Types_TPoint,cxDataControllerConditionalFormatting_TcxDataControllerConditionalFormattingProvider_TCellStyleCache>.Create */ inline __fastcall TStyleCache(System::Generics::Collections::TDictionaryOwnerships Ownerships, int ACapacity, const System::DelphiInterface<System::Generics::Defaults::IEqualityComparer__1<System::Types::TPoint> > AComparer)/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TPoint,TcxDataControllerConditionalFormattingProvider::TCellStyleCache*>(Ownerships, ACapacity, AComparer) { }
		
	public:
		/* {System_Generics_Collections}TDictionary<System_Types_TPoint,cxDataControllerConditionalFormatting_TcxDataControllerConditionalFormattingProvider_TCellStyleCache>.Create */ inline __fastcall TStyleCache()/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TPoint,TcxDataControllerConditionalFormattingProvider::TCellStyleCache*>() { }
		/* {System_Generics_Collections}TDictionary<System_Types_TPoint,cxDataControllerConditionalFormatting_TcxDataControllerConditionalFormattingProvider_TCellStyleCache>.Create */ inline __fastcall TStyleCache(int ACapacity)/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TPoint,TcxDataControllerConditionalFormattingProvider::TCellStyleCache*>(ACapacity) { }
		/* {System_Generics_Collections}TDictionary<System_Types_TPoint,cxDataControllerConditionalFormatting_TcxDataControllerConditionalFormattingProvider_TCellStyleCache>.Create */ inline __fastcall TStyleCache(const System::DelphiInterface<System::Generics::Defaults::IEqualityComparer__1<System::Types::TPoint> > AComparer)/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TPoint,TcxDataControllerConditionalFormattingProvider::TCellStyleCache*>(AComparer) { }
		/* {System_Generics_Collections}TDictionary<System_Types_TPoint,cxDataControllerConditionalFormatting_TcxDataControllerConditionalFormattingProvider_TCellStyleCache>.Create */ inline __fastcall TStyleCache(int ACapacity, const System::DelphiInterface<System::Generics::Defaults::IEqualityComparer__1<System::Types::TPoint> > AComparer)/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TPoint,TcxDataControllerConditionalFormattingProvider::TCellStyleCache*>(ACapacity, AComparer) { }
		/* {System_Generics_Collections}TDictionary<System_Types_TPoint,cxDataControllerConditionalFormatting_TcxDataControllerConditionalFormattingProvider_TCellStyleCache>.Create */ inline __fastcall TStyleCache(System::Generics::Collections::TEnumerable__1<System::Generics::Collections::TPair__2<System::Types::TPoint,TcxDataControllerConditionalFormattingProvider::TCellStyleCache*> >* const Collection)/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TPoint,TcxDataControllerConditionalFormattingProvider::TCellStyleCache*>(Collection) { }
		/* {System_Generics_Collections}TDictionary<System_Types_TPoint,cxDataControllerConditionalFormatting_TcxDataControllerConditionalFormattingProvider_TCellStyleCache>.Create */ inline __fastcall TStyleCache(System::Generics::Collections::TEnumerable__1<System::Generics::Collections::TPair__2<System::Types::TPoint,TcxDataControllerConditionalFormattingProvider::TCellStyleCache*> >* const Collection, const System::DelphiInterface<System::Generics::Defaults::IEqualityComparer__1<System::Types::TPoint> > AComparer)/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TPoint,TcxDataControllerConditionalFormattingProvider::TCellStyleCache*>(Collection, AComparer) { }
		/* {System_Generics_Collections}TDictionary<System_Types_TPoint,cxDataControllerConditionalFormatting_TcxDataControllerConditionalFormattingProvider_TCellStyleCache>.Create */ inline __fastcall TStyleCache(const System::Generics::Collections::TPair__2<System::Types::TPoint,TcxDataControllerConditionalFormattingProvider::TCellStyleCache*> *AItems, const int AItems_High)/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TPoint,TcxDataControllerConditionalFormattingProvider::TCellStyleCache*>(AItems, AItems_High) { }
		/* {System_Generics_Collections}TDictionary<System_Types_TPoint,cxDataControllerConditionalFormatting_TcxDataControllerConditionalFormattingProvider_TCellStyleCache>.Create */ inline __fastcall TStyleCache(const System::Generics::Collections::TPair__2<System::Types::TPoint,TcxDataControllerConditionalFormattingProvider::TCellStyleCache*> *AItems, const int AItems_High, const System::DelphiInterface<System::Generics::Defaults::IEqualityComparer__1<System::Types::TPoint> > AComparer)/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TPoint,TcxDataControllerConditionalFormattingProvider::TCellStyleCache*>(AItems, AItems_High, AComparer) { }
		/* {System_Generics_Collections}TDictionary<System_Types_TPoint,cxDataControllerConditionalFormatting_TcxDataControllerConditionalFormattingProvider_TCellStyleCache>.Destroy */ inline __fastcall virtual ~TStyleCache() { }
		
	};
	
	#pragma pack(pop)
	
	class DELPHICLASS TStyleViewInfoCache;
	#pragma pack(push,8)
	class PASCALIMPLEMENTATION TStyleViewInfoCache : public System::Generics::Collections::TObjectDictionary__2<System::Types::TPoint,TcxDataControllerConditionalFormattingStyleViewInfo*>
	{
		typedef System::Generics::Collections::TObjectDictionary__2<System::Types::TPoint,TcxDataControllerConditionalFormattingStyleViewInfo*> inherited;
		
	public:
		/* {System_Generics_Collections}TObjectDictionary<System_Types_TPoint,cxDataControllerConditionalFormatting_TcxDataControllerConditionalFormattingStyleViewInfo>.Create */ inline __fastcall TStyleViewInfoCache(System::Generics::Collections::TDictionaryOwnerships Ownerships, int ACapacity)/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TPoint,TcxDataControllerConditionalFormattingStyleViewInfo*>(Ownerships, ACapacity) { }
		/* {System_Generics_Collections}TObjectDictionary<System_Types_TPoint,cxDataControllerConditionalFormatting_TcxDataControllerConditionalFormattingStyleViewInfo>.Create */ inline __fastcall TStyleViewInfoCache(System::Generics::Collections::TDictionaryOwnerships Ownerships, const System::DelphiInterface<System::Generics::Defaults::IEqualityComparer__1<System::Types::TPoint> > AComparer)/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TPoint,TcxDataControllerConditionalFormattingStyleViewInfo*>(Ownerships, AComparer) { }
		/* {System_Generics_Collections}TObjectDictionary<System_Types_TPoint,cxDataControllerConditionalFormatting_TcxDataControllerConditionalFormattingStyleViewInfo>.Create */ inline __fastcall TStyleViewInfoCache(System::Generics::Collections::TDictionaryOwnerships Ownerships, int ACapacity, const System::DelphiInterface<System::Generics::Defaults::IEqualityComparer__1<System::Types::TPoint> > AComparer)/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TPoint,TcxDataControllerConditionalFormattingStyleViewInfo*>(Ownerships, ACapacity, AComparer) { }
		
	public:
		/* {System_Generics_Collections}TDictionary<System_Types_TPoint,cxDataControllerConditionalFormatting_TcxDataControllerConditionalFormattingStyleViewInfo>.Create */ inline __fastcall TStyleViewInfoCache()/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TPoint,TcxDataControllerConditionalFormattingStyleViewInfo*>() { }
		/* {System_Generics_Collections}TDictionary<System_Types_TPoint,cxDataControllerConditionalFormatting_TcxDataControllerConditionalFormattingStyleViewInfo>.Create */ inline __fastcall TStyleViewInfoCache(int ACapacity)/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TPoint,TcxDataControllerConditionalFormattingStyleViewInfo*>(ACapacity) { }
		/* {System_Generics_Collections}TDictionary<System_Types_TPoint,cxDataControllerConditionalFormatting_TcxDataControllerConditionalFormattingStyleViewInfo>.Create */ inline __fastcall TStyleViewInfoCache(const System::DelphiInterface<System::Generics::Defaults::IEqualityComparer__1<System::Types::TPoint> > AComparer)/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TPoint,TcxDataControllerConditionalFormattingStyleViewInfo*>(AComparer) { }
		/* {System_Generics_Collections}TDictionary<System_Types_TPoint,cxDataControllerConditionalFormatting_TcxDataControllerConditionalFormattingStyleViewInfo>.Create */ inline __fastcall TStyleViewInfoCache(int ACapacity, const System::DelphiInterface<System::Generics::Defaults::IEqualityComparer__1<System::Types::TPoint> > AComparer)/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TPoint,TcxDataControllerConditionalFormattingStyleViewInfo*>(ACapacity, AComparer) { }
		/* {System_Generics_Collections}TDictionary<System_Types_TPoint,cxDataControllerConditionalFormatting_TcxDataControllerConditionalFormattingStyleViewInfo>.Create */ inline __fastcall TStyleViewInfoCache(System::Generics::Collections::TEnumerable__1<System::Generics::Collections::TPair__2<System::Types::TPoint,TcxDataControllerConditionalFormattingStyleViewInfo*> >* const Collection)/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TPoint,TcxDataControllerConditionalFormattingStyleViewInfo*>(Collection) { }
		/* {System_Generics_Collections}TDictionary<System_Types_TPoint,cxDataControllerConditionalFormatting_TcxDataControllerConditionalFormattingStyleViewInfo>.Create */ inline __fastcall TStyleViewInfoCache(System::Generics::Collections::TEnumerable__1<System::Generics::Collections::TPair__2<System::Types::TPoint,TcxDataControllerConditionalFormattingStyleViewInfo*> >* const Collection, const System::DelphiInterface<System::Generics::Defaults::IEqualityComparer__1<System::Types::TPoint> > AComparer)/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TPoint,TcxDataControllerConditionalFormattingStyleViewInfo*>(Collection, AComparer) { }
		/* {System_Generics_Collections}TDictionary<System_Types_TPoint,cxDataControllerConditionalFormatting_TcxDataControllerConditionalFormattingStyleViewInfo>.Create */ inline __fastcall TStyleViewInfoCache(const System::Generics::Collections::TPair__2<System::Types::TPoint,TcxDataControllerConditionalFormattingStyleViewInfo*> *AItems, const int AItems_High)/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TPoint,TcxDataControllerConditionalFormattingStyleViewInfo*>(AItems, AItems_High) { }
		/* {System_Generics_Collections}TDictionary<System_Types_TPoint,cxDataControllerConditionalFormatting_TcxDataControllerConditionalFormattingStyleViewInfo>.Create */ inline __fastcall TStyleViewInfoCache(const System::Generics::Collections::TPair__2<System::Types::TPoint,TcxDataControllerConditionalFormattingStyleViewInfo*> *AItems, const int AItems_High, const System::DelphiInterface<System::Generics::Defaults::IEqualityComparer__1<System::Types::TPoint> > AComparer)/* overload */ : System::Generics::Collections::TObjectDictionary__2<System::Types::TPoint,TcxDataControllerConditionalFormattingStyleViewInfo*>(AItems, AItems_High, AComparer) { }
		/* {System_Generics_Collections}TDictionary<System_Types_TPoint,cxDataControllerConditionalFormatting_TcxDataControllerConditionalFormattingStyleViewInfo>.Destroy */ inline __fastcall virtual ~TStyleViewInfoCache() { }
		
	};
	
	#pragma pack(pop)
	
	
public:
	static System::Types::TRect DefaultArea;
	
private:
	System::Types::TRect FCustomSelectedArea;
	Cxcustomdata::TcxCustomDataController* FDataController;
	int FFieldsOrderLockCount;
	bool FIsDestroying;
	System::Classes::TMemoryStream* FLoadingStream;
	int FLockCount;
	int FOwnerUpdateLockCount;
	TStyleCache* FStyleCache;
	TStyleViewInfoCache* FStyleViewInfoCache;
	void __fastcall DataControllerChangedHandler(System::TObject* Sender);
	void __fastcall FieldIndexChangedHandler(System::TObject* Sender, int AOldIndex, int ANewIndex);
	void __fastcall FieldRemovedHandler(System::TObject* Sender, int AFieldIndex);
	TcxDataControllerConditionalFormattingFormatSettings* __fastcall GetFormatSettings();
	bool __fastcall IsOwnerLocked();
	
protected:
	Dxspreadsheetcorestyles::TdxSpreadSheetCellStyles* FCellStyles;
	TcxDataControllerConditionalFormatting* FConditionalFormatting;
	TcxDataControllerConditionalFormattingFormulaController* FFormulaController;
	
protected:
	int __fastcall CalculateBestFitWidth(const System::Types::TPoint &ACell, int ABaseWidth);
	virtual Dxspreadsheetcorestyles::TdxSpreadSheetCellStyles* __fastcall CreateCellStyles();
	virtual TcxDataControllerConditionalFormatting* __fastcall CreateConditionalFormatting();
	virtual Cxdatacontrollerspreadsheetdataprovider::TcxDataControllerSpreadSheetFormatSettings* __fastcall CreateFormatSettings();
	virtual TcxDataControllerConditionalFormattingFormulaController* __fastcall CreateFormulaController();
	void __fastcall ForEachRow(int ARow, int AStart, int AFinish, Dxspreadsheettypes::_di_TdxSpreadSheetViewForEachCellProc AProc, bool AGoForward);
	void __fastcall ClearCache();
	virtual void __fastcall ClearCacheCore();
	virtual void __fastcall ConditionalFormattingChanged();
	bool __fastcall TryGetStyle(const System::Types::TPoint &ACell, /* out */ Dxspreadsheetstyles::TdxSpreadSheetCellDisplayStyle* &AStyle);
	virtual void __fastcall Changed();
	virtual void __fastcall DoOwnerBeginUpdate() = 0 ;
	virtual void __fastcall DoOwnerEndUpdate() = 0 ;
	virtual Vcl::Forms::TCustomForm* __fastcall DoGetParentForm() = 0 ;
	virtual System::Types::TPoint __fastcall EditCellViewInfoToPoint(System::TObject* ACell) = 0 ;
	virtual System::Types::TRect __fastcall GetCellBounds(System::TObject* ACellViewInfo) = 0 ;
	TcxDataControllerConditionalFormattingStyleViewInfo* __fastcall GetConditionalFormattingStyleViewInfo(System::TObject* ACell);
	virtual Cxedit::TcxCustomEditProperties* __fastcall GetEditProperties(System::TObject* AItem) = 0 ;
	virtual int __fastcall GetFocusedItemIndex() = 0 ;
	virtual Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor() = 0 ;
	virtual System::Variant __fastcall GetValue(int ARecordIndex, int AItemIndex);
	bool __fastcall IsDesigning();
	bool __fastcall IsItemVisible(int AItemIndex)/* overload */;
	virtual bool __fastcall IsItemVisible(System::TObject* AItem) = 0 /* overload */;
	bool __fastcall IsUpdateLocked();
	void __fastcall OwnerBeginUpdate();
	void __fastcall OwnerEndUpdate();
	bool __fastcall IsStoringSupported();
	void __fastcall DefineBinaryProperty(System::Classes::TFiler* AFiler);
	void __fastcall LoadFromStream(System::Classes::TStream* AStream);
	void __fastcall Loaded();
	virtual void __fastcall Read(System::Classes::TStream* AStream);
	virtual void __fastcall Write(System::Classes::TStream* AStream);
	void __fastcall BeginUpdateFieldsOrder();
	void __fastcall EndUpdateFieldsOrder();
	void __fastcall AfterDrawCellBackground(System::TObject* ACellViewInfo, System::Uitypes::TColor ABackgroundColor, Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall AfterDrawCellValue(System::TObject* ACellViewInfo, Cxgraphics::TcxCanvas* ACanvas);
	virtual bool __fastcall CalculateStyle(Dxspreadsheetstyles::TdxSpreadSheetCellDisplayStyle* const AStyle, int ARow, int AColumn, Dxspreadsheettypes::_di_IdxSpreadSheetCellData ACell);
	void __fastcall CalculateCellEditorBounds(System::TObject* ACellViewInfo, System::Types::TRect &R);
	void __fastcall CalculateStyleViewInfo(System::TObject* ACellViewInfo);
	virtual void __fastcall CalculateViewParams(Cxgraphics::TcxViewParams &AParams, int ARecordIndex, int AItemIndex);
	void __fastcall CanDrawCellValue(System::TObject* ACellViewInfo, bool &Allow);
	System::Variant __fastcall FormatDisplayValue(System::TObject* const ACellViewInfo, const System::Variant &AValue);
	static int __fastcall CalculateNewIndex(int ACheckIndex, int AOldIndex, int ANewIndex);
	virtual void __fastcall ForEachCell(const System::Types::TRect &AArea, Dxspreadsheettypes::_di_TdxSpreadSheetViewForEachCellProc AProc, bool AGoForward = true);
	virtual Dxspreadsheettypes::_di_IdxSpreadSheetCellData __fastcall GetCellData(const int ARow, const int AColumn);
	virtual int __fastcall GetNextRowWithNonEmptyCell(const int ARow, const int AColumn, const bool AGoForward = true);
	Dxspreadsheetclasses::TdxSpreadSheetCustomFormatSettings* __fastcall GetCellStyleFormatSettings();
	void __fastcall CellStyleChanged();
	void __fastcall CellStyleChanging();
	Dxspreadsheetcorestyles::TdxSpreadSheetCellStyles* __fastcall GetCellStyles();
	void __fastcall ProcessStyleChanges(Dxspreadsheetcorestyles::TdxSpreadSheetCellStyleHandle* APrevStyle, Dxspreadsheetcorestyles::TdxSpreadSheetCellStyleHandle* ANewStyle);
	Dxspreadsheetcoreformulas::TdxSpreadSheetCustomFormulaController* __fastcall GetConditionalFormattingFormulaController();
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	virtual System::Types::TRect __fastcall GetSelectionArea();
	virtual bool __fastcall IsRightToLeft() = 0 ;
	Dxspreadsheetconditionalformatting::TdxSpreadSheetCustomConditionalFormatting* __fastcall GetConditionalFormatting();
	virtual Cxlookandfeels::TcxLookAndFeel* __fastcall GetLookAndFeel() = 0 ;
	virtual System::Classes::TComponent* __fastcall GetOwner() = 0 ;
	Vcl::Forms::TCustomForm* __fastcall GetParentForm();
	System::TObject* __fastcall CreateChild(const System::UnicodeString AObjectName, const System::UnicodeString AClassName);
	void __fastcall DeleteChild(const System::UnicodeString AObjectName, System::TObject* AObject);
	void __fastcall GetChildren(System::Classes::TStringList* AChildren);
	void __fastcall StoringBegin();
	void __fastcall StoringEnd();
	System::UnicodeString __fastcall GetObjectName();
	bool __fastcall GetProperties(System::Classes::TStrings* AProperties);
	void __fastcall GetPropertyValue(const System::UnicodeString AName, System::Variant &AValue);
	void __fastcall SetPropertyValue(const System::UnicodeString AName, const System::Variant &AValue);
	bool __fastcall CanDelete();
	bool __fastcall IsActive();
	void __fastcall Recalculate();
	__property Dxspreadsheetcorestyles::TdxSpreadSheetCellStyles* CellStyles = {read=GetCellStyles};
	__property System::Types::TRect CustomSelectedArea = {read=FCustomSelectedArea, write=FCustomSelectedArea};
	__property Cxcustomdata::TcxCustomDataController* DataController = {read=FDataController};
	__property TcxDataControllerConditionalFormattingFormatSettings* FormatSettings = {read=GetFormatSettings};
	__property TcxDataControllerConditionalFormattingFormulaController* FormulaController = {read=FFormulaController};
	__property bool IsDestroying = {read=FIsDestroying, nodefault};
	__property TStyleCache* StyleCache = {read=FStyleCache};
	__property TStyleViewInfoCache* StyleViewInfoCache = {read=FStyleViewInfoCache};
	
public:
	__fastcall virtual TcxDataControllerConditionalFormattingProvider(Cxcustomdata::TcxCustomDataController* ADataController);
	__fastcall virtual ~TcxDataControllerConditionalFormattingProvider();
	virtual void __fastcall BeforeDestruction();
	__property TcxDataControllerConditionalFormatting* ConditionalFormatting = {read=FConditionalFormatting};
private:
	void *__IdxDialogOwner;	// Cxcontrols::IdxDialogOwner 
	void *__IcxStoredObject2;	// Cxstorage::IcxStoredObject2 
	void *__IcxStoredObject;	// Cxstorage::IcxStoredObject 
	void *__IcxStoredParent2;	// Cxstorage::IcxStoredParent2 
	void *__IcxStoredParent;	// Cxstorage::IcxStoredParent 
	void *__IdxSpreadSheetConditionalFormatting;	// Dxspreadsheetconditionalformatting::IdxSpreadSheetConditionalFormatting 
	void *__IdxSpreadSheetConditionalFormattingOwner;	// Dxspreadsheetconditionalformatting::IdxSpreadSheetConditionalFormattingOwner 
	void *__IdxSpreadSheetCellStyleOwner;	// Dxspreadsheetstyles::IdxSpreadSheetCellStyleOwner 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {09028781-0230-48C9-A8D3-02FD987F872B}
	operator Cxcontrols::_di_IdxDialogOwner()
	{
		Cxcontrols::_di_IdxDialogOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxcontrols::IdxDialogOwner*(void) { return (Cxcontrols::IdxDialogOwner*)&__IdxDialogOwner; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {770DF537-C44D-4B54-A226-4195ED234F9E}
	operator Cxstorage::_di_IcxStoredObject2()
	{
		Cxstorage::_di_IcxStoredObject2 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxstorage::IcxStoredObject2*(void) { return (Cxstorage::IcxStoredObject2*)&__IcxStoredObject2; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {79A05009-CAC3-47E8-B454-F6F3D91F495D}
	operator Cxstorage::_di_IcxStoredObject()
	{
		Cxstorage::_di_IcxStoredObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxstorage::IcxStoredObject*(void) { return (Cxstorage::IcxStoredObject*)&__IcxStoredObject; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {337024FA-3C2E-4870-97D3-1467DAB60E2E}
	operator Cxstorage::_di_IcxStoredParent2()
	{
		Cxstorage::_di_IcxStoredParent2 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxstorage::IcxStoredParent2*(void) { return (Cxstorage::IcxStoredParent2*)&__IcxStoredParent2; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6AF48CD0-3A0B-4BEC-AC88-5D323432A686}
	operator Cxstorage::_di_IcxStoredParent()
	{
		Cxstorage::_di_IcxStoredParent intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxstorage::IcxStoredParent*(void) { return (Cxstorage::IcxStoredParent*)&__IcxStoredParent; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {5E4679AF-EE22-4657-A0C0-F774E2515263}
	operator Dxspreadsheetconditionalformatting::_di_IdxSpreadSheetConditionalFormatting()
	{
		Dxspreadsheetconditionalformatting::_di_IdxSpreadSheetConditionalFormatting intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxspreadsheetconditionalformatting::IdxSpreadSheetConditionalFormatting*(void) { return (Dxspreadsheetconditionalformatting::IdxSpreadSheetConditionalFormatting*)&__IdxSpreadSheetConditionalFormatting; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E81C6304-414A-4A81-B254-4A1AFE7562BB}
	operator Dxspreadsheetconditionalformatting::_di_IdxSpreadSheetConditionalFormattingOwner()
	{
		Dxspreadsheetconditionalformatting::_di_IdxSpreadSheetConditionalFormattingOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxspreadsheetconditionalformatting::IdxSpreadSheetConditionalFormattingOwner*(void) { return (Dxspreadsheetconditionalformatting::IdxSpreadSheetConditionalFormattingOwner*)&__IdxSpreadSheetConditionalFormattingOwner; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7E2D8A63-43AE-401B-B98C-9BB737DB60CF}
	operator Dxspreadsheetstyles::_di_IdxSpreadSheetCellStyleOwner()
	{
		Dxspreadsheetstyles::_di_IdxSpreadSheetCellStyleOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxspreadsheetstyles::IdxSpreadSheetCellStyleOwner*(void) { return (Dxspreadsheetstyles::IdxSpreadSheetCellStyleOwner*)&__IdxSpreadSheetCellStyleOwner; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDataControllerConditionalFormatting : public Dxspreadsheetconditionalformatting::TdxSpreadSheetCustomConditionalFormatting
{
	typedef Dxspreadsheetconditionalformatting::TdxSpreadSheetCustomConditionalFormatting inherited;
	
private:
	TcxDataControllerConditionalFormattingProvider* FProvider;
	bool FExcludeFilteredOutRecords;
	Cxcustomdata::TcxCustomDataController* __fastcall GetDataController();
	void __fastcall SetExcludeFilteredOutRecords(const bool Value);
	
protected:
	virtual bool __fastcall CanValidateExpressionRuleResultValue();
	virtual void __fastcall DoChanged();
	virtual System::UnicodeString __fastcall GetFormulaEditMask();
	virtual bool __fastcall IsStyleBorderSupported();
	virtual bool __fastcall IsValueFormattingSupported();
	void __fastcall SetCustomAreaInfoCache(System::Generics::Collections::TObjectDictionary__2<System::UnicodeString,Dxspreadsheetconditionalformatting::TdxSpreadSheetConditionalFormattingAreaInfo*>* const Value);
	void __fastcall SetCustomProvider(TcxDataControllerConditionalFormattingProvider* const Value);
	__property TcxDataControllerConditionalFormattingProvider* Provider = {read=FProvider};
	
public:
	__fastcall TcxDataControllerConditionalFormatting(TcxDataControllerConditionalFormattingProvider* AOwner);
	HIDESBASE void __fastcall Add(Cxcustomdata::TcxCustomDataField* const AField, Dxspreadsheetconditionalformatting::TdxSpreadSheetCustomConditionalFormattingRuleClass ARuleClass, /* out */ void *ARule)/* overload */;
	HIDESBASE void __fastcall Add(const int AFieldIndex, Dxspreadsheetconditionalformatting::TdxSpreadSheetCustomConditionalFormattingRuleClass ARuleClass, /* out */ void *ARule)/* overload */;
	HIDESBASE void __fastcall Add(const System::UnicodeString AFieldName, Dxspreadsheetconditionalformatting::TdxSpreadSheetCustomConditionalFormattingRuleClass ARuleClass, /* out */ void *ARule)/* overload */;
	bool __fastcall CanShowRulesManagerDialog();
	System::UnicodeString __fastcall GetFieldDisplayName(Cxcustomdata::TcxCustomDataField* AField);
	System::UnicodeString __fastcall GetItemDisplayName(int AItemIndex);
	bool __fastcall IsFieldVisible(Cxcustomdata::TcxCustomDataField* AField);
	bool __fastcall IsItemVisible(int AItemIndex);
	virtual System::UnicodeString __fastcall ReferencesToString(Dxspreadsheettypes::TdxSpreadSheetAreaList* const AAreas);
	void __fastcall ShowRulesManagerDialog();
	__property bool ExcludeFilteredOutRecords = {read=FExcludeFilteredOutRecords, write=SetExcludeFilteredOutRecords, nodefault};
	__property Cxcustomdata::TcxCustomDataController* DataController = {read=GetDataController};
public:
	/* TdxSpreadSheetCustomConditionalFormatting.Destroy */ inline __fastcall virtual ~TcxDataControllerConditionalFormatting() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Add(Dxspreadsheetconditionalformatting::TdxSpreadSheetCustomConditionalFormattingRuleClass ARuleClass, /* out */ void *ARule){ Dxspreadsheetconditionalformatting::TdxSpreadSheetCustomConditionalFormatting::Add(ARuleClass, ARule); }
	inline void __fastcall  Add(const System::Types::TRect &AArea, Dxspreadsheetconditionalformatting::TdxSpreadSheetCustomConditionalFormattingRuleClass ARuleClass, /* out */ void *ARule){ Dxspreadsheetconditionalformatting::TdxSpreadSheetCustomConditionalFormatting::Add(AArea, ARuleClass, ARule); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomControlControllerConditionalFormattingProvider : public TcxDataControllerConditionalFormattingProvider
{
	typedef TcxDataControllerConditionalFormattingProvider inherited;
	
protected:
	virtual System::Types::TPoint __fastcall EditCellViewInfoToPoint(System::TObject* ACellViewInfo);
	virtual System::Types::TRect __fastcall GetCellBounds(System::TObject* ACellViewInfo);
	virtual Cxinplacecontainer::TcxCustomControlController* __fastcall GetController() = 0 ;
	virtual Cxedit::TcxCustomEditProperties* __fastcall GetEditProperties(System::TObject* AItem);
	virtual int __fastcall GetFocusedItemIndex();
	__property Cxinplacecontainer::TcxCustomControlController* Controller = {read=GetController};
public:
	/* TcxDataControllerConditionalFormattingProvider.Create */ inline __fastcall virtual TcxCustomControlControllerConditionalFormattingProvider(Cxcustomdata::TcxCustomDataController* ADataController) : TcxDataControllerConditionalFormattingProvider(ADataController) { }
	/* TcxDataControllerConditionalFormattingProvider.Destroy */ inline __fastcall virtual ~TcxCustomControlControllerConditionalFormattingProvider() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDataControllerConditionalFormattingRulesManagerDialogProvider : /*[[sealed]]*/ public System::TObject
{
	typedef System::TObject inherited;
	
	
public:
	class DELPHICLASS TAdapter;
	class PASCALIMPLEMENTATION TAdapter : public System::Classes::TPersistent
	{
		typedef System::Classes::TPersistent inherited;
		
	public:
		virtual void __fastcall Execute(TcxDataControllerConditionalFormattingProvider* AProvider) = 0 ;
	public:
		/* TPersistent.Destroy */ inline __fastcall virtual ~TAdapter() { }
		
	public:
		/* TObject.Create */ inline __fastcall TAdapter() : System::Classes::TPersistent() { }
		
	};
	
	
	typedef System::TMetaClass* TAdapterClass;
	
	
private:
	static System::Generics::Collections::TList__1<TAdapterClass>* FRulesManagerDialogs;
	static System::Generics::Collections::TList__1<TAdapterClass>* __fastcall GetRulesManagerDialogs();
	// __classmethod void __fastcall Finalize@();
	
protected:
	/* static */ __property System::Generics::Collections::TList__1<TAdapterClass>* RulesManagerDialogs = {read=GetRulesManagerDialogs};
	
public:
	static void __fastcall RequiresRulesManagerDialogUnits(System::TClass AClass, const System::Classes::TGetStrProc AProc)/* overload */;
	static void __fastcall RequiresRulesManagerDialogUnits(System::Classes::TComponent* const ARootComponent, const System::Classes::TGetStrProc AProc)/* overload */;
	static void __fastcall RegisterRulesManagerDialog(TAdapterClass AAdapter);
	static void __fastcall UnregisterRulesManagerDialog(TAdapterClass AAdapter);
	static bool __fastcall CanShowRulesManagerDialog();
	static void __fastcall ShowRulesManagerDialog(TcxDataControllerConditionalFormattingProvider* AProvider);
	
private:
	// __classmethod void __fastcall Create@();
public:
	/* TObject.Create */ inline __fastcall TcxDataControllerConditionalFormattingRulesManagerDialogProvider() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxDataControllerConditionalFormattingRulesManagerDialogProvider() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Cxdatacontrollerconditionalformatting */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXDATACONTROLLERCONDITIONALFORMATTING)
using namespace Cxdatacontrollerconditionalformatting;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxdatacontrollerconditionalformattingHPP
