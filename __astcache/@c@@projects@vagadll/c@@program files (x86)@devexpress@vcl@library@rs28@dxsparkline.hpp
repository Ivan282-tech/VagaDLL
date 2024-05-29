// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxSparkline.pas' rev: 35.00 (Windows)

#ifndef DxsparklineHPP
#define DxsparklineHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <System.Variants.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Contnrs.hpp>
#include <Vcl.Controls.hpp>
#include <Winapi.Messages.hpp>
#include <dxCore.hpp>
#include <dxCoreGraphics.hpp>
#include <dxCoreClasses.hpp>
#include <cxGraphics.hpp>
#include <cxGeometry.hpp>
#include <dxGDIPlusAPI.hpp>
#include <dxGDIPlusClasses.hpp>
#include <cxClasses.hpp>
#include <cxContainer.hpp>
#include <cxCustomData.hpp>
#include <cxDataStorage.hpp>
#include <cxDataUtils.hpp>
#include <cxEdit.hpp>
#include <cxEditConsts.hpp>
#include <System.UITypes.hpp>
#include <cxControls.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxsparkline
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TdxSparklineItemDataBinding;
class DELPHICLASS TdxSparklineCategories;
class DELPHICLASS TdxSparklineSeries;
class DELPHICLASS TdxSparklineSeriesCollection;
class DELPHICLASS TdxSparklineProperties;
struct TdxChartPoint;
struct TdxValueRange;
struct TdxSeriesRange;
class DELPHICLASS TdxSparklineSeriesViewInfo;
class DELPHICLASS TdxSparklinePointSeriesViewInfo;
class DELPHICLASS TdxSparklineLineSeriesViewInfo;
class DELPHICLASS TdxSparklineAreaSeriesViewInfo;
class DELPHICLASS TdxSparklineBarSeriesViewInfo;
class DELPHICLASS TdxSparklineViewInfo;
class DELPHICLASS TdxSparklineViewData;
class DELPHICLASS TdxCustomSparklineEdit;
class DELPHICLASS TdxSparklineEdit;
//-- type declarations -------------------------------------------------------
typedef System::DynamicArray<System::Variant> TdxSparklineValues;

enum DECLSPEC_DENUM TdxSparklineSeriesType : unsigned char { stLine, stPoint, stArea, stBar };

enum DECLSPEC_DENUM TdxSparklineMinMaxRangeType : unsigned char { mmrtAuto, mmrtZeroBasedAuto, mmrtCustom };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSparklineItemDataBinding : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	int FDataIndex;
	Cxdatastorage::TcxValueTypeClass FDefaultValueTypeClass;
	System::Classes::TPersistent* FOwner;
	TdxSparklineProperties* FProperties;
	System::UnicodeString FValueType;
	Cxcustomdata::TcxCustomDataController* __fastcall GetDataController();
	System::UnicodeString __fastcall GetValueType();
	void __fastcall SetValueType(const System::UnicodeString AValue);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	virtual void __fastcall Initialize();
	virtual bool __fastcall IsBindingActive();
	virtual bool __fastcall IsValueTypeStored();
	__property Cxcustomdata::TcxCustomDataController* DataController = {read=GetDataController};
	__property Cxdatastorage::TcxValueTypeClass DefaultValueTypeClass = {read=FDefaultValueTypeClass, write=FDefaultValueTypeClass};
	__property System::Classes::TPersistent* Owner = {read=FOwner};
	
public:
	__fastcall virtual TdxSparklineItemDataBinding(System::Classes::TPersistent* AOwner, TdxSparklineProperties* AProperties, Cxdatastorage::TcxValueTypeClass ADefaultValueTypeClass);
	__fastcall virtual ~TdxSparklineItemDataBinding();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property int DataIndex = {read=FDataIndex, write=FDataIndex, nodefault};
	__property TdxSparklineProperties* Properties = {read=FProperties};
	
__published:
	__property System::UnicodeString ValueType = {read=GetValueType, write=SetValueType, stored=IsValueTypeStored};
};

#pragma pack(pop)

typedef System::TMetaClass* TdxSparklineItemDataBindingClass;

class PASCALIMPLEMENTATION TdxSparklineCategories : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TdxSparklineItemDataBinding* FDataBinding;
	double FMaxValue;
	TdxSparklineMinMaxRangeType FMinMaxRangeType;
	double FMinValue;
	TdxSparklineProperties* FOwner;
	Cxcustomdata::TcxCustomDataController* __fastcall GetDataController();
	int __fastcall GetDataIndex();
	System::Variant __fastcall GetValue(int AIndex);
	int __fastcall GetValueCount();
	bool __fastcall IsMaxValueStored();
	bool __fastcall IsMinValueStored();
	void __fastcall SetDataBinding(TdxSparklineItemDataBinding* AValue);
	void __fastcall SetMaxValue(double AValue);
	void __fastcall SetMinMaxRangeType(TdxSparklineMinMaxRangeType AValue);
	void __fastcall SetMinValue(double AValue);
	
protected:
	virtual TdxSparklineItemDataBinding* __fastcall CreateDataBinding();
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	__property Cxcustomdata::TcxCustomDataController* DataController = {read=GetDataController};
	
public:
	__fastcall virtual TdxSparklineCategories(TdxSparklineProperties* AOwner);
	__fastcall virtual ~TdxSparklineCategories();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property int DataIndex = {read=GetDataIndex, nodefault};
	__property TdxSparklineProperties* Owner = {read=FOwner};
	__property int ValueCount = {read=GetValueCount, nodefault};
	__property System::Variant Values[int Index] = {read=GetValue};
	
__published:
	__property TdxSparklineItemDataBinding* DataBinding = {read=FDataBinding, write=SetDataBinding};
	__property double MaxValue = {read=FMaxValue, write=SetMaxValue, stored=IsMaxValueStored};
	__property TdxSparklineMinMaxRangeType MinMaxRangeType = {read=FMinMaxRangeType, write=SetMinMaxRangeType, default=0};
	__property double MinValue = {read=FMinValue, write=SetMinValue, stored=IsMinValueStored};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSparklineSeries : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	TdxSparklineItemDataBinding* FDataBinding;
	TdxSparklineSeriesType FSeriesType;
	bool FVisible;
	System::Uitypes::TColor FColor;
	System::Uitypes::TColor FEndPointColor;
	System::Uitypes::TColor FMaxPointColor;
	System::Uitypes::TColor FMinPointColor;
	System::Uitypes::TColor FNegativePointColor;
	System::Uitypes::TColor FStartPointColor;
	System::Byte FAreaOpacity;
	int FLineWidth;
	System::Uitypes::TColor FMarkerColor;
	int FMarkerSize;
	Cxcustomdata::TcxCustomDataController* __fastcall GetDataController();
	int __fastcall GetDataIndex();
	TdxSparklineProperties* __fastcall GetOwnerProperties();
	Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	System::Variant __fastcall GetValue(int AIndex);
	int __fastcall GetValueCount();
	void __fastcall SetAreaOpacity(System::Byte AValue);
	void __fastcall SetColor(System::Uitypes::TColor AValue);
	void __fastcall SetDataBinding(TdxSparklineItemDataBinding* AValue);
	void __fastcall SetEndPointColor(System::Uitypes::TColor AValue);
	void __fastcall SetLineWidth(int AValue);
	void __fastcall SetMarkerColor(System::Uitypes::TColor AValue);
	void __fastcall SetMarkerSize(int AValue);
	void __fastcall SetMaxPointColor(System::Uitypes::TColor AValue);
	void __fastcall SetMinPointColor(System::Uitypes::TColor AValue);
	void __fastcall SetNegativePointColor(System::Uitypes::TColor AValue);
	void __fastcall SetSeriesType(TdxSparklineSeriesType AValue);
	void __fastcall SetStartPointColor(System::Uitypes::TColor AValue);
	void __fastcall SetVisible(bool AValue);
	
protected:
	virtual void __fastcall ChangeScale(int M, int D);
	virtual TdxSparklineItemDataBinding* __fastcall CreateDataBinding();
	virtual void __fastcall SetCollection(System::Classes::TCollection* Value);
	__property Cxcustomdata::TcxCustomDataController* DataController = {read=GetDataController};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=GetScaleFactor};
	
public:
	__fastcall virtual TdxSparklineSeries(System::Classes::TCollection* Collection);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property int DataIndex = {read=GetDataIndex, nodefault};
	__property TdxSparklineProperties* Owner = {read=GetOwnerProperties};
	__property int ValueCount = {read=GetValueCount, nodefault};
	__property System::Variant Values[int Index] = {read=GetValue};
	
__published:
	__property TdxSparklineItemDataBinding* DataBinding = {read=FDataBinding, write=SetDataBinding};
	__property System::Byte AreaOpacity = {read=FAreaOpacity, write=SetAreaOpacity, default=127};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=536870912};
	__property System::Uitypes::TColor EndPointColor = {read=FEndPointColor, write=SetEndPointColor, default=536870911};
	__property int LineWidth = {read=FLineWidth, write=SetLineWidth, default=1};
	__property System::Uitypes::TColor MarkerColor = {read=FMarkerColor, write=SetMarkerColor, default=536870911};
	__property int MarkerSize = {read=FMarkerSize, write=SetMarkerSize, default=3};
	__property System::Uitypes::TColor MaxPointColor = {read=FMaxPointColor, write=SetMaxPointColor, default=536870911};
	__property System::Uitypes::TColor MinPointColor = {read=FMinPointColor, write=SetMinPointColor, default=536870911};
	__property System::Uitypes::TColor NegativePointColor = {read=FNegativePointColor, write=SetNegativePointColor, default=536870911};
	__property TdxSparklineSeriesType SeriesType = {read=FSeriesType, write=SetSeriesType, default=0};
	__property System::Uitypes::TColor StartPointColor = {read=FStartPointColor, write=SetStartPointColor, default=536870911};
	__property bool Visible = {read=FVisible, write=SetVisible, default=1};
public:
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TdxSparklineSeries() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TdxSparklineSeriesClass;

class PASCALIMPLEMENTATION TdxSparklineSeriesCollection : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TdxSparklineSeries* operator[](int Index) { return this->Items[Index]; }
	
private:
	double FMaxValue;
	TdxSparklineMinMaxRangeType FMinMaxRangeType;
	double FMinValue;
	TdxSparklineProperties* FProperties;
	HIDESBASE TdxSparklineSeries* __fastcall GetItem(int AIndex);
	bool __fastcall IsMaxValueStored();
	bool __fastcall IsMinValueStored();
	HIDESBASE void __fastcall SetItem(int AIndex, TdxSparklineSeries* AValue);
	void __fastcall SetMaxValue(double AValue);
	void __fastcall SetMinMaxRangeType(TdxSparklineMinMaxRangeType AValue);
	void __fastcall SetMinValue(double AValue);
	
protected:
	void __fastcall ChangeScale(int M, int D);
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	__fastcall virtual TdxSparklineSeriesCollection(TdxSparklineProperties* AProperties);
	HIDESBASE TdxSparklineSeries* __fastcall Add();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property TdxSparklineProperties* Properties = {read=FProperties};
	__property TdxSparklineSeries* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	
__published:
	__property double MaxValue = {read=FMaxValue, write=SetMaxValue, stored=IsMaxValueStored};
	__property TdxSparklineMinMaxRangeType MinMaxRangeType = {read=FMinMaxRangeType, write=SetMinMaxRangeType, default=0};
	__property double MinValue = {read=FMinValue, write=SetMinValue, stored=IsMinValueStored};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TdxSparklineSeriesCollection() { }
	
};


class PASCALIMPLEMENTATION TdxSparklineProperties : public Cxedit::TcxCustomEditProperties
{
	typedef Cxedit::TcxCustomEditProperties inherited;
	
private:
	bool FAntialiasing;
	TdxSparklineCategories* FCategories;
	Cxclasses::TcxObjectList* FDataBindings;
	Cxcustomdata::TcxCustomDataController* FDataController;
	Cxgeometry::TcxMargin* FPadding;
	TdxSparklineSeriesCollection* FSeries;
	System::Variant __fastcall GetDataValue();
	void __fastcall SetAntialiasing(bool AValue);
	void __fastcall SetCategories(TdxSparklineCategories* AValue);
	void __fastcall SetPadding(Cxgeometry::TcxMargin* AValue);
	void __fastcall SetSeries(TdxSparklineSeriesCollection* AValue);
	
protected:
	virtual void __fastcall AddDataBinding(TdxSparklineItemDataBinding* ADataBinding);
	virtual void __fastcall RemoveDataBinding(TdxSparklineItemDataBinding* ADataBinding);
	virtual void __fastcall ChangeScale(int M, int D);
	virtual TdxSparklineCategories* __fastcall CreateCategories();
	virtual Cxcustomdata::TcxCustomDataController* __fastcall CreateDataController();
	virtual TdxSparklineSeriesCollection* __fastcall CreateSeriesCollection();
	virtual void __fastcall DoAssign(Cxedit::TcxCustomEditProperties* AProperties);
	virtual TdxSparklineItemDataBindingClass __fastcall GetItemsDataBindingClass();
	virtual TdxSparklineSeriesClass __fastcall GetSeriesClass();
	__classmethod virtual Cxedit::TcxCustomEditViewDataClass __fastcall GetViewDataClass();
	virtual bool __fastcall IsActive();
	virtual void __fastcall LoadRecords(const System::Variant &AEditValue, System::Classes::TList* AList);
	virtual void __fastcall UpdateControl(Cxcustomdata::TcxUpdateControlInfo* AInfo);
	void __fastcall UpdateItems();
	void __fastcall UpdateItemIndexes();
	__property Cxclasses::TcxObjectList* DataBindings = {read=FDataBindings};
	
public:
	__fastcall virtual TdxSparklineProperties(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TdxSparklineProperties();
	virtual void __fastcall DataChanged();
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	__classmethod virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
	__property Cxcustomdata::TcxCustomDataController* DataController = {read=FDataController};
	__property System::Variant DataValue = {read=GetDataValue};
	
__published:
	__property bool Antialiasing = {read=FAntialiasing, write=SetAntialiasing, default=1};
	__property TdxSparklineCategories* Categories = {read=FCategories, write=SetCategories};
	__property TdxSparklineSeriesCollection* Series = {read=FSeries, write=SetSeries};
	__property Cxgeometry::TcxMargin* Padding = {read=FPadding, write=SetPadding};
};


struct DECLSPEC_DRECORD TdxChartPoint
{
	
public:
	union
	{
		struct 
		{
			float X;
			float Y;
		};
		struct 
		{
			float Category;
			float Value;
		};
		
	};
};


struct DECLSPEC_DRECORD TdxValueRange
{
public:
	float Min;
	float Max;
};


struct DECLSPEC_DRECORD TdxSeriesRange
{
	
public:
	union
	{
		struct 
		{
			TdxValueRange X;
			TdxValueRange Y;
		};
		struct 
		{
			TdxValueRange Category;
			TdxValueRange Value;
		};
		
	};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSparklineSeriesViewInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TdxSparklineViewInfo* FOwner;
	Dxcore::TColors FPointColors;
	System::Uitypes::TColor FColor;
	System::Uitypes::TColor FEndPointColor;
	System::Uitypes::TColor FMaxPointColor;
	System::Uitypes::TColor FMinPointColor;
	System::Uitypes::TColor FNegativePointColor;
	System::Uitypes::TColor FStartPointColor;
	int __fastcall GetIndex();
	
protected:
	System::Uitypes::TColor __fastcall GetColorForDrawing(System::Uitypes::TColor AColor, int ATint = 0x0);
	virtual System::Uitypes::TColor __fastcall GetPointColor();
	virtual bool __fastcall HasData() = 0 ;
	virtual void __fastcall Offset(int DX, int DY);
	__property System::Uitypes::TColor Color = {read=FColor, nodefault};
	__property TdxSparklineViewInfo* Owner = {read=FOwner};
	__property Dxcore::TColors PointColors = {read=FPointColors};
	
public:
	__fastcall TdxSparklineSeriesViewInfo(TdxSparklineViewInfo* AOwner);
	virtual void __fastcall Calculate(const System::Variant *ACategories, const int ACategories_High, const System::Variant *AValues, const int AValues_High, const TdxSeriesRange &ADataRange, const TdxValueRange &AValueRange, const TdxChartPoint &AStep, const System::Types::TRect &ABounds);
	virtual void __fastcall Initialize(TdxSparklineSeries* ASeries);
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas) = 0 ;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSparklineSeriesViewInfo() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TdxSparklineSeriesViewInfoClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSparklinePointSeriesViewInfo : public TdxSparklineSeriesViewInfo
{
	typedef TdxSparklineSeriesViewInfo inherited;
	
private:
	System::Uitypes::TColor FMarkerColor;
	float FMarkerWidth;
	Cxgeometry::TdxPointsF FPointArray;
	
protected:
	virtual System::Uitypes::TColor __fastcall GetPointColor();
	virtual bool __fastcall HasData();
	virtual void __fastcall DoPaint(Dxgdiplusclasses::TdxGPCanvas* AGPCanvas);
	virtual void __fastcall Offset(int DX, int DY);
	__property float MarkerWidth = {read=FMarkerWidth};
	__property Cxgeometry::TdxPointsF PointArray = {read=FPointArray};
	
public:
	virtual void __fastcall Calculate(const System::Variant *ACategories, const int ACategories_High, const System::Variant *AValues, const int AValues_High, const TdxSeriesRange &ADataRange, const TdxValueRange &AValueRange, const TdxChartPoint &AStep, const System::Types::TRect &ABounds);
	virtual void __fastcall Initialize(TdxSparklineSeries* ASeries);
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
public:
	/* TdxSparklineSeriesViewInfo.Create */ inline __fastcall TdxSparklinePointSeriesViewInfo(TdxSparklineViewInfo* AOwner) : TdxSparklineSeriesViewInfo(AOwner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSparklinePointSeriesViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSparklineLineSeriesViewInfo : public TdxSparklinePointSeriesViewInfo
{
	typedef TdxSparklinePointSeriesViewInfo inherited;
	
private:
	int FLineWidth;
	
protected:
	virtual void __fastcall DoPaint(Dxgdiplusclasses::TdxGPCanvas* AGPCanvas);
	__property int LineWidth = {read=FLineWidth, write=FLineWidth, nodefault};
	
public:
	virtual void __fastcall Initialize(TdxSparklineSeries* ASeries);
public:
	/* TdxSparklineSeriesViewInfo.Create */ inline __fastcall TdxSparklineLineSeriesViewInfo(TdxSparklineViewInfo* AOwner) : TdxSparklinePointSeriesViewInfo(AOwner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSparklineLineSeriesViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSparklineAreaSeriesViewInfo : public TdxSparklineLineSeriesViewInfo
{
	typedef TdxSparklineLineSeriesViewInfo inherited;
	
private:
	Cxgeometry::TdxPointsF FPolygonPoints;
	System::Byte FOpacity;
	
protected:
	virtual void __fastcall DoPaint(Dxgdiplusclasses::TdxGPCanvas* AGPCanvas);
	virtual void __fastcall Offset(int DX, int DY);
	__property System::Byte Opacity = {read=FOpacity, write=FOpacity, nodefault};
	
public:
	virtual void __fastcall Calculate(const System::Variant *ACategories, const int ACategories_High, const System::Variant *AValues, const int AValues_High, const TdxSeriesRange &ADataRange, const TdxValueRange &AValueRange, const TdxChartPoint &AStep, const System::Types::TRect &ABounds);
	virtual void __fastcall Initialize(TdxSparklineSeries* ASeries);
public:
	/* TdxSparklineSeriesViewInfo.Create */ inline __fastcall TdxSparklineAreaSeriesViewInfo(TdxSparklineViewInfo* AOwner) : TdxSparklineLineSeriesViewInfo(AOwner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSparklineAreaSeriesViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSparklineBarSeriesViewInfo : public TdxSparklineSeriesViewInfo
{
	typedef TdxSparklineSeriesViewInfo inherited;
	
private:
	Cxgeometry::TdxRectsF FBarRectArray;
	int __fastcall GetBarIndex();
	
protected:
	virtual bool __fastcall HasData();
	virtual void __fastcall Offset(int DX, int DY);
	__property int BarIndex = {read=GetBarIndex, nodefault};
	
public:
	virtual void __fastcall Calculate(const System::Variant *ACategories, const int ACategories_High, const System::Variant *AValues, const int AValues_High, const TdxSeriesRange &ADataRange, const TdxValueRange &AValueRange, const TdxChartPoint &AStep, const System::Types::TRect &ABounds);
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
public:
	/* TdxSparklineSeriesViewInfo.Create */ inline __fastcall TdxSparklineBarSeriesViewInfo(TdxSparklineViewInfo* AOwner) : TdxSparklineSeriesViewInfo(AOwner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSparklineBarSeriesViewInfo() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxSparklineViewInfo : public Cxedit::TcxCustomEditViewInfo
{
	typedef Cxedit::TcxCustomEditViewInfo inherited;
	
private:
	System::Contnrs::TObjectList* FBarSeries;
	int FBarWidth;
	System::Contnrs::TObjectList* FSeries;
	Dxgdiplusclasses::TdxGPSmoothingMode FSmoothingMode;
	void __fastcall CalculateBarSeriesInfo(const TdxSeriesRange &AChartRange, const TdxChartPoint &AStep);
	int __fastcall GetBarSeriesCount();
	int __fastcall GetSeriesCount();
	
protected:
	void __fastcall AddSeries(TdxSparklineSeries* ASeries);
	void __fastcall CalculateSeriesViewInfo(const TdxSparklineValues ACategories, const TdxSparklineValues *AValues, const int AValues_High, const TdxSeriesRange &ADataRange, const TdxChartPoint &AStep);
	virtual void __fastcall Clear();
	virtual void __fastcall InternalPaint(Cxgraphics::TcxCanvas* ACanvas);
	__property System::Contnrs::TObjectList* BarSeries = {read=FBarSeries};
	__property int BarSeriesCount = {read=GetBarSeriesCount, nodefault};
	__property int BarWidth = {read=FBarWidth, nodefault};
	__property System::Contnrs::TObjectList* Series = {read=FSeries};
	__property int SeriesCount = {read=GetSeriesCount, nodefault};
	__property Dxgdiplusclasses::TdxGPSmoothingMode SmoothingMode = {read=FSmoothingMode, write=FSmoothingMode, nodefault};
	
public:
	__fastcall virtual TdxSparklineViewInfo();
	__fastcall virtual ~TdxSparklineViewInfo();
	virtual void __fastcall Offset(int DX, int DY);
};


class PASCALIMPLEMENTATION TdxSparklineViewData : public Cxedit::TcxCustomEditViewData
{
	typedef Cxedit::TcxCustomEditViewData inherited;
	
	
private:
	typedef System::DynamicArray<TdxSparklineValues> _TdxSparklineViewData__1;
	
	
private:
	TdxSparklineValues Categories;
	_TdxSparklineViewData__1 Values;
	TdxSeriesRange DataRange;
	TdxChartPoint Step;
	void __fastcall CalculateRange();
	void __fastcall CalculateStep();
	Cxcustomdata::TcxCustomDataController* __fastcall GetDataController();
	TdxSparklineProperties* __fastcall GetProperties();
	
protected:
	void __fastcall Clear();
	virtual void __fastcall PopulateValues(TdxSparklineViewInfo* AViewInfo, System::Classes::TList* ARecords);
	__property Cxcustomdata::TcxCustomDataController* DataController = {read=GetDataController};
	__property TdxSparklineProperties* Properties = {read=GetProperties};
	
public:
	virtual void __fastcall Calculate(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TPoint &P, Cxcontainer::TcxMouseButton Button, System::Classes::TShiftState Shift, Cxedit::TcxCustomEditViewInfo* AViewInfo, bool AIsMouseEvent);
	virtual void __fastcall EditValueToDrawValue(const System::Variant &AEditValue, Cxedit::TcxCustomEditViewInfo* AViewInfo);
	virtual System::Types::TRect __fastcall GetClientExtent(Cxgraphics::TcxCanvas* ACanvas, Cxedit::TcxCustomEditViewInfo* AViewInfo);
	virtual System::Types::TSize __fastcall GetEditContentSize(Cxgraphics::TcxCanvas* ACanvas, const System::Variant &AEditValue, const Cxedit::TcxEditSizeProperties &AEditSizeProperties, Cxedit::TcxEditValidateInfo* AErrorData = (Cxedit::TcxEditValidateInfo*)(0x0));
public:
	/* TcxCustomEditViewData.Create */ inline __fastcall virtual TdxSparklineViewData(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditStyle* AStyle, bool AIsInplace) : Cxedit::TcxCustomEditViewData(AProperties, AStyle, AIsInplace) { }
	/* TcxCustomEditViewData.Destroy */ inline __fastcall virtual ~TdxSparklineViewData() { }
	
};


class PASCALIMPLEMENTATION TdxCustomSparklineEdit : public Cxedit::TcxCustomEdit
{
	typedef Cxedit::TcxCustomEdit inherited;
	
private:
	HIDESBASE TdxSparklineProperties* __fastcall GetActiveProperties();
	TdxSparklineProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(TdxSparklineProperties* AValue);
	
protected:
	virtual void __fastcall Initialize();
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall PropertiesChanged(System::TObject* Sender);
	
public:
	DYNAMIC bool __fastcall CanFocus();
	virtual void __fastcall CopyToClipboard();
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	virtual void __fastcall InitializeViewData(Cxedit::TcxCustomEditViewData* AViewData);
	virtual void __fastcall InternalSetEditValue(const System::Variant &Value, bool AIsValueValid);
	__property TdxSparklineProperties* ActiveProperties = {read=GetActiveProperties};
	
__published:
	__property TdxSparklineProperties* Properties = {read=GetProperties, write=SetProperties};
	__property AutoSize = {default=0};
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TdxCustomSparklineEdit(System::Classes::TComponent* AOwner)/* overload */ : Cxedit::TcxCustomEdit(AOwner) { }
	/* TcxCustomEdit.Create */ inline __fastcall virtual TdxCustomSparklineEdit(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Cxedit::TcxCustomEdit(AOwner, AIsInplace) { }
	/* TcxCustomEdit.Destroy */ inline __fastcall virtual ~TdxCustomSparklineEdit() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxCustomSparklineEdit(HWND ParentWindow) : Cxedit::TcxCustomEdit(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TdxSparklineEdit : public TdxCustomSparklineEdit
{
	typedef TdxCustomSparklineEdit inherited;
	
protected:
	virtual System::Variant __fastcall GetEditValue();
	
__published:
	__property Anchors = {default=3};
	__property AutoSize = {default=0};
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property ParentColor = {default=0};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property Style;
	__property StyleDisabled;
	__property StyleFocused;
	__property StyleHot;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Transparent = {default=0};
	__property Visible = {default=1};
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEditing;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TdxSparklineEdit(System::Classes::TComponent* AOwner)/* overload */ : TdxCustomSparklineEdit(AOwner) { }
	/* TcxCustomEdit.Create */ inline __fastcall virtual TdxSparklineEdit(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : TdxCustomSparklineEdit(AOwner, AIsInplace) { }
	/* TcxCustomEdit.Destroy */ inline __fastcall virtual ~TdxSparklineEdit() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxSparklineEdit(HWND ParentWindow) : TdxCustomSparklineEdit(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dxsparkline */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXSPARKLINE)
using namespace Dxsparkline;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxsparklineHPP
