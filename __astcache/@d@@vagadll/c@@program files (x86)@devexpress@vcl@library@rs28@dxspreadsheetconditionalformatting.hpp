// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxSpreadSheetConditionalFormatting.pas' rev: 35.00 (Windows)

#ifndef DxspreadsheetconditionalformattingHPP
#define DxspreadsheetconditionalformattingHPP

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
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Generics.Collections.hpp>
#include <Vcl.Forms.hpp>
#include <dxCore.hpp>
#include <cxGraphics.hpp>
#include <cxClasses.hpp>
#include <cxControls.hpp>
#include <dxCoreClasses.hpp>
#include <cxVariants.hpp>
#include <cxStorage.hpp>
#include <cxLookAndFeels.hpp>
#include <cxGeometry.hpp>
#include <dxSpreadSheetCoreStyles.hpp>
#include <dxSpreadSheetCoreFormulas.hpp>
#include <dxSpreadSheetCoreFormulasParser.hpp>
#include <dxSpreadSheetCoreFormulasTokens.hpp>
#include <dxSpreadSheetClasses.hpp>
#include <dxSpreadSheetGraphics.hpp>
#include <dxSpreadSheetStyles.hpp>
#include <dxSpreadSheetTypes.hpp>
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxspreadsheetconditionalformatting
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IdxSpreadSheetConditionalFormatting;
typedef System::DelphiInterface<IdxSpreadSheetConditionalFormatting> _di_IdxSpreadSheetConditionalFormatting;
__interface DELPHIINTERFACE IdxSpreadSheetConditionalFormattingOwner;
typedef System::DelphiInterface<IdxSpreadSheetConditionalFormattingOwner> _di_IdxSpreadSheetConditionalFormattingOwner;
class DELPHICLASS TdxSpreadSheetCustomConditionalFormatting;
class DELPHICLASS TdxSpreadSheetCustomConditionalFormattingRule;
class DELPHICLASS TdxSpreadSheetConditionalFormattingAreaInfo;
class DELPHICLASS TdxSpreadSheetConditionalFormattingCustomRule;
class DELPHICLASS TdxSpreadSheetConditionalFormattingStyleViewInfo;
//-- type declarations -------------------------------------------------------
typedef System::TMetaClass* TdxSpreadSheetCustomConditionalFormattingRuleClass;

__interface  INTERFACE_UUID("{5E4679AF-EE22-4657-A0C0-F774E2515263}") IdxSpreadSheetConditionalFormatting  : public System::IInterface 
{
	virtual TdxSpreadSheetCustomConditionalFormatting* __fastcall GetConditionalFormatting() = 0 ;
};

__interface  INTERFACE_UUID("{E81C6304-414A-4A81-B254-4A1AFE7562BB}") IdxSpreadSheetConditionalFormattingOwner  : public Dxspreadsheettypes::IdxSpreadSheetViewData 
{
	virtual Dxspreadsheetcorestyles::TdxSpreadSheetCellStyles* __fastcall GetCellStyles() = 0 ;
	virtual Dxspreadsheetcoreformulas::TdxSpreadSheetCustomFormulaController* __fastcall GetFormulaController() = 0 ;
	virtual void __fastcall BeginUpdate() = 0 ;
	virtual void __fastcall EndUpdate() = 0 ;
	virtual System::Types::TRect __fastcall GetSelectionArea() = 0 ;
	virtual bool __fastcall IsRightToLeft() = 0 ;
	__property Dxspreadsheetcorestyles::TdxSpreadSheetCellStyles* CellStyles = {read=GetCellStyles};
	__property Dxspreadsheetcoreformulas::TdxSpreadSheetCustomFormulaController* FormulaController = {read=GetFormulaController};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetCustomConditionalFormatting : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TdxSpreadSheetCustomConditionalFormattingRule* operator[](int Index) { return this->Rules[Index]; }
	
private:
	Dxspreadsheetcorestyles::TdxSpreadSheetCellStyles* __fastcall GetCellStyles();
	TdxSpreadSheetCustomConditionalFormattingRule* __fastcall GetRule(int Index);
	int __fastcall GetRuleCount();
	void __fastcall RulesChangeHandler(System::TObject* Sender, TdxSpreadSheetCustomConditionalFormattingRule* const AItem, System::Generics::Collections::TCollectionNotification AAction);
	
protected:
	System::Generics::Collections::TObjectDictionary__2<System::UnicodeString,TdxSpreadSheetConditionalFormattingAreaInfo*>* FAreaInfoCache;
	_di_IdxSpreadSheetConditionalFormattingOwner FOwner;
	System::Generics::Collections::TObjectList__1<TdxSpreadSheetCustomConditionalFormattingRule*>* FRules;
	virtual TdxSpreadSheetConditionalFormattingAreaInfo* __fastcall CreateAreaInfo(Dxspreadsheettypes::TdxSpreadSheetAreaList* AAreas);
	TdxSpreadSheetConditionalFormattingAreaInfo* __fastcall GetAreaInfo(Dxspreadsheettypes::TdxSpreadSheetAreaList* AAreas);
	virtual bool __fastcall CanValidateExpressionRuleResultValue();
	virtual bool __fastcall IsStyleBorderSupported();
	virtual bool __fastcall IsValueFormattingSupported();
	virtual System::UnicodeString __fastcall GetFormulaEditMask();
	virtual void __fastcall DoChanged();
	virtual void __fastcall DoRuleAdded(TdxSpreadSheetCustomConditionalFormattingRule* ARule);
	virtual void __fastcall DoRuleChanging(TdxSpreadSheetCustomConditionalFormattingRule* ARule);
	virtual void __fastcall DoRuleIndexChanged(int AOldIndex, int ANewIndex);
	virtual void __fastcall DoRuleDeleted(TdxSpreadSheetCustomConditionalFormattingRule* ARule);
	
public:
	__fastcall virtual TdxSpreadSheetCustomConditionalFormatting(const _di_IdxSpreadSheetConditionalFormattingOwner AOwner);
	__fastcall virtual ~TdxSpreadSheetCustomConditionalFormatting();
	void __fastcall Add(TdxSpreadSheetCustomConditionalFormattingRuleClass ARuleClass, /* out */ void *ARule)/* overload */;
	void __fastcall Add(const System::Types::TRect &AArea, TdxSpreadSheetCustomConditionalFormattingRuleClass ARuleClass, /* out */ void *ARule)/* overload */;
	virtual void __fastcall Assign(TdxSpreadSheetCustomConditionalFormatting* ASource);
	void __fastcall Remove(TdxSpreadSheetCustomConditionalFormattingRule* ARule);
	bool __fastcall CalculateStyle(Dxspreadsheetstyles::TdxSpreadSheetCellDisplayStyle* const AStyle, int ARow, int AColumn, Dxspreadsheettypes::_di_IdxSpreadSheetCellData ACell);
	void __fastcall Clear();
	virtual void __fastcall FlushCache();
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	virtual void __fastcall BeginEditing();
	virtual void __fastcall EndEditing(bool ACancel);
	virtual System::UnicodeString __fastcall ReferencesToString(Dxspreadsheettypes::TdxSpreadSheetAreaList* const AAreas);
	__property Dxspreadsheetcorestyles::TdxSpreadSheetCellStyles* CellStyles = {read=GetCellStyles};
	__property int RuleCount = {read=GetRuleCount, nodefault};
	__property TdxSpreadSheetCustomConditionalFormattingRule* Rules[int Index] = {read=GetRule/*, default*/};
	__property _di_IdxSpreadSheetConditionalFormattingOwner Owner = {read=FOwner};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetCustomConditionalFormattingRule : public Dxcoreclasses::TcxInterfacedPersistent
{
	typedef Dxcoreclasses::TcxInterfacedPersistent inherited;
	
private:
	Dxspreadsheettypes::TdxSpreadSheetAreaList* FAreas;
	int FLockCount;
	TdxSpreadSheetCustomConditionalFormatting* FOwner;
	bool FStopIfTrue;
	System::Types::TRect __fastcall GetArea();
	int __fastcall GetIndex();
	void __fastcall SetArea(const System::Types::TRect &AValue);
	void __fastcall SetAreas(Dxspreadsheettypes::TdxSpreadSheetAreaList* AAreas);
	void __fastcall SetIndex(int AValue);
	void __fastcall SetStopIfTrue(const bool AValue);
	
protected:
	virtual void __fastcall AreasChangeHandler(System::TObject* Sender);
	virtual void __fastcall Changed();
	virtual void __fastcall Changing();
	virtual void __fastcall DoAssign(TdxSpreadSheetCustomConditionalFormattingRule* Source);
	virtual void __fastcall DoLoadFromStream(Cxvariants::TcxReader* AReader);
	virtual void __fastcall DoSaveToStream(Cxvariants::TcxWriter* AWriter);
	virtual void __fastcall Apply(Dxspreadsheetstyles::TdxSpreadSheetCellDisplayStyle* const AStyle, int ARow, int AColumn, const Dxspreadsheettypes::_di_IdxSpreadSheetCellData ACell = Dxspreadsheettypes::_di_IdxSpreadSheetCellData()) = 0 ;
	bool __fastcall CanApply(int ARow, int AColumn, const Dxspreadsheettypes::_di_IdxSpreadSheetCellData ACell = Dxspreadsheettypes::_di_IdxSpreadSheetCellData());
	virtual bool __fastcall CanApplyCore(int ARow, int AColumn, const Dxspreadsheettypes::_di_IdxSpreadSheetCellData ACell = Dxspreadsheettypes::_di_IdxSpreadSheetCellData()) = 0 ;
	virtual void __fastcall DrawPreview(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R) = 0 ;
	virtual void __fastcall FlushCache();
	virtual System::UnicodeString __fastcall GetDetails() = 0 ;
	virtual bool __fastcall ApplyToTheRowSupported();
	System::UnicodeString __fastcall GetObjectName();
	virtual bool __fastcall GetProperties(System::Classes::TStrings* AProperties);
	virtual void __fastcall GetPropertyValue(const System::UnicodeString AName, System::Variant &AValue);
	virtual void __fastcall SetPropertyValue(const System::UnicodeString AName, const System::Variant &AValue);
	__property bool StopIfTrue = {read=FStopIfTrue, write=SetStopIfTrue, nodefault};
	
public:
	__fastcall virtual TdxSpreadSheetCustomConditionalFormattingRule(TdxSpreadSheetCustomConditionalFormatting* AOwner)/* overload */;
	__fastcall TdxSpreadSheetCustomConditionalFormattingRule(TdxSpreadSheetCustomConditionalFormatting* AOwner, const System::Types::TRect &AArea)/* overload */;
	__fastcall virtual ~TdxSpreadSheetCustomConditionalFormattingRule();
	virtual void __fastcall AfterConstruction();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall BeforeDestruction();
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	TdxSpreadSheetCustomConditionalFormattingRule* __fastcall Clone()/* overload */;
	TdxSpreadSheetCustomConditionalFormattingRule* __fastcall Clone(const System::Types::TRect &AArea)/* overload */;
	TdxSpreadSheetCustomConditionalFormattingRule* __fastcall Clone(Dxspreadsheettypes::TdxSpreadSheetAreaList* const AAreas)/* overload */;
	void __fastcall LoadFromStream(Cxvariants::TcxReader* AReader);
	void __fastcall SaveToStream(Cxvariants::TcxWriter* AWriter);
	__property System::Types::TRect Area = {read=GetArea, write=SetArea};
	__property Dxspreadsheettypes::TdxSpreadSheetAreaList* Areas = {read=FAreas, write=SetAreas};
	__property int Index = {read=GetIndex, write=SetIndex, nodefault};
	__property TdxSpreadSheetCustomConditionalFormatting* Owner = {read=FOwner};
private:
	void *__IcxStoredObject;	// Cxstorage::IcxStoredObject 
	
public:
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
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TdxSpreadSheetConditionalFormattingDataCacheAssignedValue : unsigned char { dcavMinMax, dcavAverage, dcavNumericValueCount, dcavStandardDeviation };

typedef System::Set<TdxSpreadSheetConditionalFormattingDataCacheAssignedValue, TdxSpreadSheetConditionalFormattingDataCacheAssignedValue::dcavMinMax, TdxSpreadSheetConditionalFormattingDataCacheAssignedValue::dcavStandardDeviation> TdxSpreadSheetConditionalFormattingDataCacheAssignedValues;

class PASCALIMPLEMENTATION TdxSpreadSheetConditionalFormattingAreaInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	static const int MaxInitialCapacity = int(0x186a0);
	
	Dxspreadsheettypes::TdxSpreadSheetAreaList* FAreas;
	TdxSpreadSheetConditionalFormattingDataCacheAssignedValues FAssignedValues;
	double FAverageValue;
	System::Generics::Collections::TList__1<double>* FBottomValues;
	int FBottomValuesRank;
	Cxvariants::TdxVariantSet* FDuplicates;
	double FMaxValue;
	double FMinValue;
	int FNumericValueCount;
	_di_IdxSpreadSheetConditionalFormattingOwner FOwner;
	System::Generics::Collections::TDictionary__2<int,double>* FPercentiles;
	double FStandardDeviation;
	System::Generics::Collections::TList__1<double>* FTopValues;
	int FTopValuesRank;
	void __fastcall CalculateAverageValue();
	bool __fastcall CalculateBoundValueForPercentile(int APercentile, /* out */ double &AValue);
	void __fastcall CalculateMinMaxValues();
	void __fastcall CalculateNumericValueCount();
	void __fastcall CalculateStandardDeviation();
	void __fastcall CalculateTopBottomValues();
	bool __fastcall CheckTopBottomValues(System::Generics::Collections::TList__1<double>* &AList, int &AListRank, int ATargetRank);
	void __fastcall EnumCells(const Dxspreadsheettypes::_di_TdxSpreadSheetViewForEachCellProc AProc);
	int __fastcall GetCellCountInAreas();
	bool __fastcall GetSortedNumericValuesInArea(/* out */ System::Generics::Collections::TList__1<double>* &AValues);
	void __fastcall PopulateDuplicateValues();
	double __fastcall GetAverageValue();
	double __fastcall GetMaxValue();
	double __fastcall GetMinValue();
	int __fastcall GetNumericValueCount();
	double __fastcall GetStandardDeviation();
	
public:
	__fastcall TdxSpreadSheetConditionalFormattingAreaInfo(const _di_IdxSpreadSheetConditionalFormattingOwner AOwner, Dxspreadsheettypes::TdxSpreadSheetAreaList* AAreas);
	__fastcall virtual ~TdxSpreadSheetConditionalFormattingAreaInfo();
	double __fastcall GetLimitValueForPercent(int APercent);
	double __fastcall GetLimitValueForPercentile(int APercentile);
	bool __fastcall IsBottomValue(const double AValue, int ARank);
	bool __fastcall IsTopValue(const double AValue, int ARank);
	bool __fastcall IsUniqueValue(const System::Variant &AValue);
	__property double AverageValue = {read=GetAverageValue};
	__property double MaxValue = {read=GetMaxValue};
	__property double MinValue = {read=GetMinValue};
	__property int NumericValueCount = {read=GetNumericValueCount, nodefault};
	__property double StandardDeviation = {read=GetStandardDeviation};
	__property Dxspreadsheettypes::TdxSpreadSheetAreaList* Areas = {read=FAreas};
};


typedef System::TMetaClass* TdxSpreadSheetConditionalFormattingCustomRuleClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetConditionalFormattingCustomRule : public TdxSpreadSheetCustomConditionalFormattingRule
{
	typedef TdxSpreadSheetCustomConditionalFormattingRule inherited;
	
private:
	TdxSpreadSheetConditionalFormattingAreaInfo* __fastcall GetAreaInfo();
	
protected:
	__property TdxSpreadSheetConditionalFormattingAreaInfo* AreaInfo = {read=GetAreaInfo};
public:
	/* TdxSpreadSheetCustomConditionalFormattingRule.Create */ inline __fastcall virtual TdxSpreadSheetConditionalFormattingCustomRule(TdxSpreadSheetCustomConditionalFormatting* AOwner)/* overload */ : TdxSpreadSheetCustomConditionalFormattingRule(AOwner) { }
	/* TdxSpreadSheetCustomConditionalFormattingRule.Create */ inline __fastcall TdxSpreadSheetConditionalFormattingCustomRule(TdxSpreadSheetCustomConditionalFormatting* AOwner, const System::Types::TRect &AArea)/* overload */ : TdxSpreadSheetCustomConditionalFormattingRule(AOwner, AArea) { }
	/* TdxSpreadSheetCustomConditionalFormattingRule.Destroy */ inline __fastcall virtual ~TdxSpreadSheetConditionalFormattingCustomRule() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpreadSheetConditionalFormattingStyleViewInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	static const System::Int8 AxisThickness = System::Int8(0x1);
	
	System::Uitypes::TColor FBackgroundColor;
	System::Types::TRect FDataBarAxisBounds;
	System::Types::TRect FDataBarBounds;
	System::Types::TRect FIconBounds;
	Cxgeometry::TdxScaleFactor* FScaleFactor;
	Dxspreadsheetstyles::TdxSpreadSheetCellDisplayStyle* FStyle;
	System::Types::TRect FTextRect;
	bool FUseRightToLeftLayout;
	Dxspreadsheetstyles::TdxSpreadSheetCellDataBar* __fastcall GetDataBar();
	
protected:
	virtual void __fastcall CalculateDataBarBounds(const System::Types::TRect &R);
	virtual void __fastcall CalculateIconBounds(System::Types::TRect &R);
	virtual Dxspreadsheetgraphics::TdxSpreadSheetDrawingStages __fastcall GetSupportedDrawingStages();
	
public:
	__fastcall virtual TdxSpreadSheetConditionalFormattingStyleViewInfo(Dxspreadsheetstyles::TdxSpreadSheetCellDisplayStyle* AStyle, Cxgeometry::TdxScaleFactor* AScaleFactor);
	void __fastcall Calculate(const System::Types::TRect &ABounds)/* overload */;
	virtual void __fastcall Calculate(const System::Types::TRect &ABounds, const System::Types::TRect &AContentBounds)/* overload */;
	void __fastcall Draw(Cxgraphics::TcxCanvas* ACanvas)/* overload */;
	virtual void __fastcall Draw(Cxgraphics::TcxCanvas* ACanvas, Dxspreadsheetgraphics::TdxSpreadSheetDrawingStage AStage)/* overload */;
	virtual void __fastcall Offset(const System::Types::TPoint &AOffset);
	__property System::Uitypes::TColor BackgroundColor = {read=FBackgroundColor, write=FBackgroundColor, nodefault};
	__property Dxspreadsheetstyles::TdxSpreadSheetCellDataBar* DataBar = {read=GetDataBar};
	__property System::Types::TRect DataBarAxisBounds = {read=FDataBarAxisBounds};
	__property System::Types::TRect DataBarBounds = {read=FDataBarBounds};
	__property System::Types::TRect IconBounds = {read=FIconBounds};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=FScaleFactor};
	__property Dxspreadsheetstyles::TdxSpreadSheetCellDisplayStyle* Style = {read=FStyle};
	__property System::Types::TRect TextRect = {read=FTextRect};
	__property Dxspreadsheetgraphics::TdxSpreadSheetDrawingStages SupportedDrawingStages = {read=GetSupportedDrawingStages, nodefault};
	__property bool UseRightToLeftLayout = {read=FUseRightToLeftLayout, write=FUseRightToLeftLayout, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSpreadSheetConditionalFormattingStyleViewInfo() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dxspreadsheetconditionalformatting */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXSPREADSHEETCONDITIONALFORMATTING)
using namespace Dxspreadsheetconditionalformatting;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxspreadsheetconditionalformattingHPP
