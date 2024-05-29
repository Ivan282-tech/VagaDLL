// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxDateTimeWheelPicker.pas' rev: 35.00 (Windows)

#ifndef DxdatetimewheelpickerHPP
#define DxdatetimewheelpickerHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>
#include <System.SysUtils.hpp>
#include <System.Variants.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.Controls.hpp>
#include <cxGeometry.hpp>
#include <cxGraphics.hpp>
#include <dxGDIPlusClasses.hpp>
#include <dxCoreGraphics.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxFormats.hpp>
#include <cxContainer.hpp>
#include <cxEdit.hpp>
#include <cxEditConsts.hpp>
#include <cxFilterControlUtils.hpp>
#include <cxDateUtils.hpp>
#include <dxWheelPicker.hpp>
#include <dxNumericWheelPicker.hpp>
#include <cxAccessibility.hpp>
#include <cxControls.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxdatetimewheelpicker
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TdxDateTimeWheelPickerItemViewInfo;
class DELPHICLASS TdxDateTimeWheelPickerWheelAccessibilityHelper;
class DELPHICLASS TdxDateTimeWheelPickerWheelViewInfo;
class DELPHICLASS TdxDateTimeWheelPickerViewInfo;
class DELPHICLASS TdxDateTimeWheelPickerViewData;
class DELPHICLASS TcxDateTimeWheelPickerPropertiesValues;
class DELPHICLASS TdxDateTimeWheelPickerProperties;
class DELPHICLASS TdxCustomDateTimeWheelPicker;
class DELPHICLASS TdxDateTimeWheelPicker;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TdxDateTimePickerWheel : unsigned char { pwYear, pwMonth, pwDay, pwHour, pwMinute, pwSecond };

typedef System::Set<TdxDateTimePickerWheel, TdxDateTimePickerWheel::pwYear, TdxDateTimePickerWheel::pwSecond> TdxDateTimePickerWheels;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxDateTimeWheelPickerItemViewInfo : public Dxnumericwheelpicker::TdxCustomNumericWheelPickerItemViewInfo
{
	typedef Dxnumericwheelpicker::TdxCustomNumericWheelPickerItemViewInfo inherited;
	
private:
	Vcl::Graphics::TFont* FLowerFont;
	System::UnicodeString FLowerText;
	System::Types::TRect FLowerTextRect;
	System::Types::TSize FLowerTextSize;
	System::Types::TSize __fastcall GetLowerTextSize();
	
protected:
	virtual void __fastcall CalculateTextParameters();
	virtual void __fastcall CalculateTextRects();
	virtual void __fastcall DrawText(Dxgdiplusclasses::TdxGPCanvas* AGPCanvas);
	bool __fastcall HasLowerText();
	__property System::UnicodeString LowerText = {read=FLowerText};
	
public:
	__fastcall virtual TdxDateTimeWheelPickerItemViewInfo(Dxwheelpicker::TdxCustomWheelPickerViewInfo* AWheelPickerViewInfo);
	__fastcall virtual ~TdxDateTimeWheelPickerItemViewInfo();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxDateTimeWheelPickerWheelAccessibilityHelper : public Dxnumericwheelpicker::TdxNumericWheelPickerWheelAccessibilityHelper
{
	typedef Dxnumericwheelpicker::TdxNumericWheelPickerWheelAccessibilityHelper inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetName(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
public:
	/* TcxAccessibilityHelper.Create */ inline __fastcall virtual TdxDateTimeWheelPickerWheelAccessibilityHelper(System::TObject* AOwnerObject) : Dxnumericwheelpicker::TdxNumericWheelPickerWheelAccessibilityHelper(AOwnerObject) { }
	/* TcxAccessibilityHelper.Destroy */ inline __fastcall virtual ~TdxDateTimeWheelPickerWheelAccessibilityHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxDateTimeWheelPickerWheelViewInfo : public Dxnumericwheelpicker::TdxCustomNumericWheelPickerWheelViewInfo
{
	typedef Dxnumericwheelpicker::TdxCustomNumericWheelPickerWheelViewInfo inherited;
	
protected:
	Cxformats::TcxDateTimeFormatItemKind FKind;
	virtual Dxwheelpicker::TdxCustomWheelPickerWheelAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	__classmethod virtual Dxwheelpicker::TdxCustomWheelPickerItemViewInfoClass __fastcall GetWheelPickerItemViewInfoClass();
	virtual System::UnicodeString __fastcall GetItemText(int AItemIndex);
	virtual bool __fastcall CanTyping(int AValue);
	virtual bool __fastcall NeedProcessKey(System::Word AKey);
	System::UnicodeString __fastcall GetItemLowerText(const System::Types::TRect &ABounds, int AIndex);
	void __fastcall SetValueByDateTime(const Cxdateutils::TcxDateTime &ADateTime, bool AUse24HourFormat);
	void __fastcall SynchronizeDateTime(Cxdateutils::TcxDateTime &ADateTime, int &ATimeSuffix);
public:
	/* TdxCustomWheelPickerWheelViewInfo.Create */ inline __fastcall virtual TdxDateTimeWheelPickerWheelViewInfo(Dxwheelpicker::TdxCustomWheelPickerViewInfo* AWheelPickerViewInfo) : Dxnumericwheelpicker::TdxCustomNumericWheelPickerWheelViewInfo(AWheelPickerViewInfo) { }
	/* TdxCustomWheelPickerWheelViewInfo.Destroy */ inline __fastcall virtual ~TdxDateTimeWheelPickerWheelViewInfo() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxDateTimeWheelPickerViewInfo : public Dxnumericwheelpicker::TdxCustomNumericWheelPickerViewInfo
{
	typedef Dxnumericwheelpicker::TdxCustomNumericWheelPickerViewInfo inherited;
	
private:
	void __fastcall SetDateInValidRangeByDay();
	void __fastcall SetDateInValidRangeByMonth();
	void __fastcall SetDateInValidRangeByYear();
	
protected:
	Cxdateutils::TcxDateTime FDateTime;
	Cxdateutils::TcxDateTime FMaxDate;
	Cxdateutils::TcxDateTime FMinDate;
	bool FUse24HourFormat;
	__classmethod virtual Dxwheelpicker::TdxCustomWheelPickerWheelViewInfoClass __fastcall GetWheelPickerWheelViewInfoClass();
	virtual System::Variant __fastcall GetInternalValue();
	virtual void __fastcall SetInternalValue(const System::Variant &AValue);
	virtual void __fastcall SynchronizeWheelIndexes();
	int __fastcall GetDaysPerMonth();
	
public:
	virtual void __fastcall Assign(System::TObject* Source);
public:
	/* TdxCustomWheelPickerViewInfo.Create */ inline __fastcall virtual TdxDateTimeWheelPickerViewInfo() : Dxnumericwheelpicker::TdxCustomNumericWheelPickerViewInfo() { }
	/* TdxCustomWheelPickerViewInfo.Destroy */ inline __fastcall virtual ~TdxDateTimeWheelPickerViewInfo() { }
	
};


class PASCALIMPLEMENTATION TdxDateTimeWheelPickerViewData : public Dxnumericwheelpicker::TdxCustomNumericWheelPickerViewData
{
	typedef Dxnumericwheelpicker::TdxCustomNumericWheelPickerViewData inherited;
	
private:
	static System::StaticArray<TdxDateTimePickerWheel, 6> TimeFormatItemKindToDateTimePickerWheel;
	int FMaxSmallTextWidth;
	int FMonthNameMaxWidth;
	int FMonthWheelWidth;
	Cxdateutils::TcxDateTime __fastcall GetMaxDate();
	Cxdateutils::TcxDateTime __fastcall GetMinDate();
	int __fastcall GetMonthCount();
	HIDESBASE TdxDateTimeWheelPickerProperties* __fastcall GetProperties();
	Cxformats::TcxDateTimeFormatItemKind __fastcall GetRightToLeftConvertedWheelKind(Cxformats::TcxDateTimeFormatItemKind AWheelKind);
	Cxformats::TcxDateTimeFormatItemKind __fastcall GetWheelKind(int AIndex);
	int __fastcall GetYearCount();
	void __fastcall InitializeDayWheel(TdxDateTimeWheelPickerWheelViewInfo* AWheelViewInfo);
	void __fastcall InitializeHourWheel(TdxDateTimeWheelPickerWheelViewInfo* AWheelViewInfo);
	void __fastcall InitializeMinuteWheel(TdxDateTimeWheelPickerWheelViewInfo* AWheelViewInfo);
	void __fastcall InitializeMonthWheel(TdxDateTimeWheelPickerWheelViewInfo* AWheelViewInfo);
	void __fastcall InitializeSecondWheel(TdxDateTimeWheelPickerWheelViewInfo* AWheelViewInfo);
	void __fastcall InitializeTimeSuffixWheel(TdxDateTimeWheelPickerWheelViewInfo* AWheelViewInfo);
	void __fastcall InitializeYearWheel(TdxDateTimeWheelPickerWheelViewInfo* AWheelViewInfo);
	
protected:
	virtual System::UnicodeString __fastcall GetMaxText();
	virtual int __fastcall GetOptimalWidth();
	virtual int __fastcall GetWheelCount();
	virtual int __fastcall GetWheelWidth(int AIndex);
	virtual void __fastcall CalculateTextSize(Dxwheelpicker::TdxCustomWheelPickerViewInfo* AViewInfo);
	virtual void __fastcall CalculateWheelWidth(Dxwheelpicker::TdxCustomWheelPickerViewInfo* AViewInfo);
	virtual void __fastcall InitializeWheel(Dxwheelpicker::TdxCustomWheelPickerWheelViewInfo* AWheelViewInfo, int AIndex);
	__property Cxdateutils::TcxDateTime MaxDate = {read=GetMaxDate};
	__property Cxdateutils::TcxDateTime MinDate = {read=GetMinDate};
	
public:
	virtual void __fastcall Calculate(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TPoint &P, Cxcontainer::TcxMouseButton Button, System::Classes::TShiftState Shift, Cxedit::TcxCustomEditViewInfo* AViewInfo, bool AIsMouseEvent);
	__property TdxDateTimeWheelPickerProperties* Properties = {read=GetProperties};
public:
	/* TcxCustomEditViewData.Create */ inline __fastcall virtual TdxDateTimeWheelPickerViewData(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditStyle* AStyle, bool AIsInplace) : Dxnumericwheelpicker::TdxCustomNumericWheelPickerViewData(AProperties, AStyle, AIsInplace) { }
	/* TcxCustomEditViewData.Destroy */ inline __fastcall virtual ~TdxDateTimeWheelPickerViewData() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDateTimeWheelPickerPropertiesValues : public Cxedit::TcxCustomEditPropertiesValues
{
	typedef Cxedit::TcxCustomEditPropertiesValues inherited;
	
private:
	bool __fastcall GetMaxDate();
	bool __fastcall GetMinDate();
	bool __fastcall IsMaxDateStored();
	bool __fastcall IsMinDateStored();
	void __fastcall SetMaxDate(bool Value);
	void __fastcall SetMinDate(bool Value);
	
__published:
	__property bool MaxDate = {read=GetMaxDate, write=SetMaxDate, stored=IsMaxDateStored, nodefault};
	__property bool MinDate = {read=GetMinDate, write=SetMinDate, stored=IsMinDateStored, nodefault};
public:
	/* TcxCustomEditPropertiesValues.Create */ inline __fastcall virtual TcxDateTimeWheelPickerPropertiesValues(System::Classes::TPersistent* AOwner) : Cxedit::TcxCustomEditPropertiesValues(AOwner) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxDateTimeWheelPickerPropertiesValues() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxDateTimeWheelPickerProperties : public Dxnumericwheelpicker::TdxCustomNumericWheelPickerProperties
{
	typedef Dxnumericwheelpicker::TdxCustomNumericWheelPickerProperties inherited;
	
private:
	bool FUse24HourFormat;
	TdxDateTimePickerWheels FWheels;
	TcxDateTimeWheelPickerPropertiesValues* __fastcall GetAssignedValues();
	System::TDateTime __fastcall GetMaxDate();
	System::TDateTime __fastcall GetMinDate();
	HIDESBASE void __fastcall SetAssignedValues(TcxDateTimeWheelPickerPropertiesValues* AValue);
	void __fastcall SetMaxDate(System::TDateTime AValue);
	void __fastcall SetMinDate(System::TDateTime AValue);
	void __fastcall SetUse24HourFormat(bool AValue);
	void __fastcall SetWheels(TdxDateTimePickerWheels AValue);
	
protected:
	virtual void __fastcall DoAssign(Cxedit::TcxCustomEditProperties* AProperties);
	__classmethod virtual Cxedit::TcxCustomEditPropertiesValuesClass __fastcall GetAssignedValuesClass();
	__classmethod virtual Cxedit::TcxCustomEditViewDataClass __fastcall GetViewDataClass();
	virtual System::Variant __fastcall CorrectDateByRange(const System::Variant &AValue);
	virtual System::TDateTime __fastcall GetValidMaxDate();
	virtual System::TDateTime __fastcall GetValidMinDate();
	virtual bool __fastcall IsWheelsStored();
	
public:
	__fastcall virtual TdxDateTimeWheelPickerProperties(System::Classes::TPersistent* AOwner);
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	virtual System::UnicodeString __fastcall GetDisplayText(const System::Variant &AEditValue, bool AFullText = false, bool AIsInplace = true);
	__classmethod virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
	virtual void __fastcall PrepareDisplayValue(const System::Variant &AEditValue, System::Variant &DisplayValue, bool AEditFocused);
	
__published:
	__property TcxDateTimeWheelPickerPropertiesValues* AssignedValues = {read=GetAssignedValues, write=SetAssignedValues};
	__property ClearKey = {default=0};
	__property ImmediatePost = {default=0};
	__property System::TDateTime MaxDate = {read=GetMaxDate, write=SetMaxDate};
	__property System::TDateTime MinDate = {read=GetMinDate, write=SetMinDate};
	__property bool Use24HourFormat = {read=FUse24HourFormat, write=SetUse24HourFormat, default=1};
	__property ValidateOnEnter = {default=0};
	__property ValidationErrorIconAlignment = {default=0};
	__property ValidationOptions = {default=1};
	__property TdxDateTimePickerWheels Wheels = {read=FWheels, write=SetWheels, stored=IsWheelsStored, nodefault};
	__property LineCount = {default=0};
	__property OnChange;
	__property OnEditValueChanged;
	__property OnValidate;
public:
	/* TdxCustomWheelPickerProperties.Destroy */ inline __fastcall virtual ~TdxDateTimeWheelPickerProperties() { }
	
};


class PASCALIMPLEMENTATION TdxCustomDateTimeWheelPicker : public Dxnumericwheelpicker::TdxCustomNumericWheelPicker
{
	typedef Dxnumericwheelpicker::TdxCustomNumericWheelPicker inherited;
	
private:
	HIDESBASE TdxDateTimeWheelPickerProperties* __fastcall GetActiveProperties();
	HIDESBASE TdxDateTimeWheelPickerProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(TdxDateTimeWheelPickerProperties* AValue);
	HIDESBASE MESSAGE void __fastcall CMBiDiModeChanged(Winapi::Messages::TMessage &Message);
	
protected:
	virtual System::TDateTime __fastcall GetDateTime();
	virtual System::UnicodeString __fastcall GetDisplayText();
	void __fastcall SetDateTime(System::TDateTime AValue);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TdxDateTimeWheelPickerProperties* ActiveProperties = {read=GetActiveProperties};
	__property System::TDateTime DateTime = {read=GetDateTime, write=SetDateTime, stored=false};
	__property TdxDateTimeWheelPickerProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TdxCustomWheelPicker.Create */ inline __fastcall virtual TdxCustomDateTimeWheelPicker(System::Classes::TComponent* AOwner)/* overload */ : Dxnumericwheelpicker::TdxCustomNumericWheelPicker(AOwner) { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TdxCustomDateTimeWheelPicker(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Dxnumericwheelpicker::TdxCustomNumericWheelPicker(AOwner, AIsInplace) { }
	/* TcxCustomEdit.Destroy */ inline __fastcall virtual ~TdxCustomDateTimeWheelPicker() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxCustomDateTimeWheelPicker(HWND ParentWindow) : Dxnumericwheelpicker::TdxCustomNumericWheelPicker(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TdxDateTimeWheelPicker : public TdxCustomDateTimeWheelPicker
{
	typedef TdxCustomDateTimeWheelPicker inherited;
	
private:
	HIDESBASE TdxDateTimeWheelPickerProperties* __fastcall GetActiveProperties();
	HIDESBASE TdxDateTimeWheelPickerProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(TdxDateTimeWheelPickerProperties* AValue);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TdxDateTimeWheelPickerProperties* ActiveProperties = {read=GetActiveProperties};
	
__published:
	__property Anchors = {default=3};
	__property AutoSize = {default=0};
	__property BiDiMode;
	__property Constraints;
	__property DateTime = {default=0};
	__property EditValue = {default=0};
	__property Enabled = {default=1};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property TdxDateTimeWheelPickerProperties* Properties = {read=GetProperties, write=SetProperties};
	__property ShowHint;
	__property Style;
	__property StyleDisabled;
	__property StyleFocused;
	__property StyleHot;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Visible = {default=1};
	__property OnClick;
	__property OnContextPopup;
	__property OnEditing;
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
public:
	/* TdxCustomWheelPicker.Create */ inline __fastcall virtual TdxDateTimeWheelPicker(System::Classes::TComponent* AOwner)/* overload */ : TdxCustomDateTimeWheelPicker(AOwner) { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TdxDateTimeWheelPicker(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : TdxCustomDateTimeWheelPicker(AOwner, AIsInplace) { }
	/* TcxCustomEdit.Destroy */ inline __fastcall virtual ~TdxDateTimeWheelPicker() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxDateTimeWheelPicker(HWND ParentWindow) : TdxCustomDateTimeWheelPicker(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dxdatetimewheelpicker */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXDATETIMEWHEELPICKER)
using namespace Dxdatetimewheelpicker;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxdatetimewheelpickerHPP
