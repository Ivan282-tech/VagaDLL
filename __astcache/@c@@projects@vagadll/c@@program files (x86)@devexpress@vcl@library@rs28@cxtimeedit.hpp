// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxTimeEdit.pas' rev: 35.00 (Windows)

#ifndef CxtimeeditHPP
#define CxtimeeditHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Variants.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <System.SysUtils.hpp>
#include <dxCore.hpp>
#include <cxClasses.hpp>
#include <cxContainer.hpp>
#include <cxDataUtils.hpp>
#include <cxDateUtils.hpp>
#include <cxDataStorage.hpp>
#include <cxEdit.hpp>
#include <cxFormats.hpp>
#include <cxMaskEdit.hpp>
#include <cxSpinEdit.hpp>
#include <cxVariants.hpp>
#include <cxFilterControlUtils.hpp>
#include <cxTextEdit.hpp>
#include <cxControls.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxtimeedit
{
//-- forward type declarations -----------------------------------------------
struct TcxTimeEditZoneInfo;
class DELPHICLASS TcxTimeEditMaskMode;
class DELPHICLASS TcxCustomTimeEditProperties;
class DELPHICLASS TcxTimeEditProperties;
class DELPHICLASS TcxCustomTimeEdit;
class DELPHICLASS TcxTimeEdit;
class DELPHICLASS TcxFilterTimeEditHelper;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TcxTimeEditZoneKind : unsigned char { tzHour, tzMin, tzSec, tzTimeSuffix };

struct DECLSPEC_DRECORD TcxTimeEditZoneInfo
{
public:
	TcxTimeEditZoneKind Kind;
	int Start;
	int Length;
	Cxformats::TcxTimeSuffixKind TimeSuffixKind;
	bool Use24HourFormat;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxTimeEditMaskMode : public Cxmaskedit::TcxMaskEditStandardMode
{
	typedef Cxmaskedit::TcxMaskEditStandardMode inherited;
	
protected:
	virtual System::WideChar __fastcall GetBlank(int APos);
public:
	/* TcxMaskEditStandardMode.Create */ inline __fastcall virtual TcxTimeEditMaskMode(Cxmaskedit::TcxCustomMaskEdit* AEdit, Cxmaskedit::TcxCustomMaskEditProperties* AProperties) : Cxmaskedit::TcxMaskEditStandardMode(AEdit, AProperties) { }
	/* TcxMaskEditStandardMode.Destroy */ inline __fastcall virtual ~TcxTimeEditMaskMode() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TcxTimeEditTimeFormat : unsigned char { tfHourMinSec, tfHourMin, tfHour };

class PASCALIMPLEMENTATION TcxCustomTimeEditProperties : public Cxspinedit::TcxCustomSpinEditProperties
{
	typedef Cxspinedit::TcxCustomSpinEditProperties inherited;
	
private:
	bool FAutoCorrectHours;
	bool FShowDate;
	TcxTimeEditTimeFormat FTimeFormat;
	bool FUse24HourFormat;
	bool FUseTimeFormatWhenUnfocused;
	void __fastcall SetAutoCorrectHours(bool Value);
	void __fastcall SetUse24HourFormat(bool Value);
	void __fastcall SetShowDate(bool Value);
	void __fastcall SetTimeFormat(TcxTimeEditTimeFormat Value);
	void __fastcall SetUseTimeFormatWhenUnfocused(bool Value);
	
protected:
	virtual System::Variant __fastcall DefaultFocusedDisplayValue();
	virtual bool __fastcall ExtendValueUpToBound();
	virtual void __fastcall FormatChanged();
	virtual Cxedit::TcxEditDisplayFormatOptions __fastcall GetDisplayFormatOptions();
	virtual Cxmaskedit::TcxMaskEditCustomModeClass __fastcall GetModeClass(Cxmaskedit::TcxEditMaskKind AMaskKind);
	virtual void __fastcall GetTimeZoneInfo(int APos, /* out */ TcxTimeEditZoneInfo &AInfo);
	virtual bool __fastcall IsDisplayValueNumeric();
	virtual bool __fastcall IsEditValueNumeric();
	virtual System::Variant __fastcall PrepareValue(const System::Variant &AValue);
	virtual bool __fastcall PreserveSelection();
	TcxTimeEditZoneKind __fastcall GetEditingPlace(int APos);
	virtual int __fastcall GetTimePartLength(TcxTimeEditZoneKind AKind);
	virtual int __fastcall GetTimePartPos(TcxTimeEditZoneKind AKind);
	virtual Cxformats::TcxTimeSuffixKind __fastcall GetTimeSuffixKind();
	void __fastcall UpdateEditMask();
	
public:
	__fastcall virtual TcxCustomTimeEditProperties(System::Classes::TPersistent* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	virtual Cxdatautils::TcxDataEditValueSource __fastcall GetEditValueSource(bool AEditFocused);
	virtual bool __fastcall IsDisplayValueValid(System::Variant &DisplayValue, bool AEditFocused);
	virtual bool __fastcall IsEditValueValid(System::Variant &EditValue, bool AEditFocused);
	virtual void __fastcall DoPrepareDisplayValue(const System::Variant &AEditValue, System::Variant &ADisplayValue, bool AEditFocused);
	virtual void __fastcall ValidateDisplayValue(System::Variant &ADisplayValue, Vcl::Controls::TCaption &AErrorText, bool &AError, Cxedit::TcxCustomEdit* AEdit);
	__property bool AutoCorrectHours = {read=FAutoCorrectHours, write=SetAutoCorrectHours, default=1};
	__property bool ShowDate = {read=FShowDate, write=SetShowDate, default=0};
	__property TcxTimeEditTimeFormat TimeFormat = {read=FTimeFormat, write=SetTimeFormat, default=0};
	__property bool Use24HourFormat = {read=FUse24HourFormat, write=SetUse24HourFormat, default=1};
	__property bool UseTimeFormatWhenUnfocused = {read=FUseTimeFormatWhenUnfocused, write=SetUseTimeFormatWhenUnfocused, default=1};
public:
	/* TcxCustomSpinEditProperties.Destroy */ inline __fastcall virtual ~TcxCustomTimeEditProperties() { }
	
};


class PASCALIMPLEMENTATION TcxTimeEditProperties : public TcxCustomTimeEditProperties
{
	typedef TcxCustomTimeEditProperties inherited;
	
__published:
	__property Alignment;
	__property AssignedValues;
	__property AutoCorrectHours = {default=1};
	__property AutoSelect = {default=1};
	__property BeepOnError = {default=0};
	__property Circular = {default=0};
	__property ClearKey = {default=0};
	__property HideSelection = {default=1};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property ImmediatePost = {default=0};
	__property Increment = {default=0};
	__property LargeIncrement = {default=0};
	__property Nullstring = {default=0};
	__property ReadOnly;
	__property ShowDate = {default=0};
	__property SpinButtons;
	__property TimeFormat = {default=0};
	__property UseCtrlIncrement = {default=0};
	__property UseLeftAlignmentOnEditing;
	__property UseNullString = {default=0};
	__property Use24HourFormat = {default=1};
	__property UseTimeFormatWhenUnfocused = {default=1};
	__property ValidateOnEnter = {default=1};
	__property ValidationErrorIconAlignment = {default=0};
	__property ValidationOptions = {default=1};
	__property OnChange;
	__property OnEditValueChanged;
	__property OnValidate;
public:
	/* TcxCustomTimeEditProperties.Create */ inline __fastcall virtual TcxTimeEditProperties(System::Classes::TPersistent* AOwner) : TcxCustomTimeEditProperties(AOwner) { }
	
public:
	/* TcxCustomSpinEditProperties.Destroy */ inline __fastcall virtual ~TcxTimeEditProperties() { }
	
};


class PASCALIMPLEMENTATION TcxCustomTimeEdit : public Cxspinedit::TcxCustomSpinEdit
{
	typedef Cxspinedit::TcxCustomSpinEdit inherited;
	
private:
	System::TDate FSavedDate;
	HIDESBASE TcxCustomTimeEditProperties* __fastcall GetProperties();
	HIDESBASE TcxCustomTimeEditProperties* __fastcall GetActiveProperties();
	System::TTime __fastcall GetTime();
	HIDESBASE void __fastcall SetProperties(TcxCustomTimeEditProperties* Value);
	void __fastcall SetTime(System::TTime Value);
	
protected:
	virtual double __fastcall GetIncrement(Cxspinedit::TcxSpinEditButton AButton);
	virtual System::Variant __fastcall GetValue();
	virtual System::UnicodeString __fastcall IncrementValueToStr(const System::Variant &AValue);
	virtual void __fastcall Initialize();
	virtual System::Variant __fastcall InternalGetEditingValue();
	virtual System::UnicodeString __fastcall InternalGetText();
	virtual void __fastcall InternalSetDisplayValue(const System::Variant &Value);
	virtual void __fastcall InternalSetEditValue(const System::Variant &Value, bool AValidateEditValue);
	virtual bool __fastcall InternalSetText(const System::UnicodeString Value);
	virtual bool __fastcall IsValidChar(System::WideChar AChar);
	virtual bool __fastcall IsCharValidForPos(System::WideChar &AChar, int APos);
	virtual void __fastcall PropertiesChanged(System::TObject* Sender);
	virtual void __fastcall SetValue(const System::Variant &Value);
	virtual void __fastcall UpdateTextFormatting();
	TcxTimeEditZoneKind __fastcall EditingPlace();
	
public:
	virtual void __fastcall Clear();
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	virtual bool __fastcall Increment(Cxspinedit::TcxSpinEditButton AButton);
	virtual void __fastcall PrepareEditValue(const System::Variant &ADisplayValue, /* out */ System::Variant &EditValue, bool AEditFocused);
	__property TcxCustomTimeEditProperties* ActiveProperties = {read=GetActiveProperties};
	__property TcxCustomTimeEditProperties* Properties = {read=GetProperties, write=SetProperties};
	__property System::TTime Time = {read=GetTime, write=SetTime, stored=false};
public:
	/* TcxCustomSpinEdit.Destroy */ inline __fastcall virtual ~TcxCustomTimeEdit() { }
	
public:
	/* TcxCustomMaskEdit.Create */ inline __fastcall virtual TcxCustomTimeEdit(System::Classes::TComponent* AOwner)/* overload */ : Cxspinedit::TcxCustomSpinEdit(AOwner) { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxCustomTimeEdit(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Cxspinedit::TcxCustomSpinEdit(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomTimeEdit(HWND ParentWindow) : Cxspinedit::TcxCustomSpinEdit(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxTimeEdit : public TcxCustomTimeEdit
{
	typedef TcxCustomTimeEdit inherited;
	
private:
	HIDESBASE TcxTimeEditProperties* __fastcall GetActiveProperties();
	HIDESBASE TcxTimeEditProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(TcxTimeEditProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TcxTimeEditProperties* ActiveProperties = {read=GetActiveProperties};
	
__published:
	__property Anchors = {default=3};
	__property AutoSize = {default=1};
	__property BeepOnEnter = {default=1};
	__property BiDiMode;
	__property Constraints;
	__property DragMode = {default=0};
	__property EditValue = {default=0};
	__property Enabled = {default=1};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property TcxTimeEditProperties* Properties = {read=GetProperties, write=SetProperties};
	__property ShowHint;
	__property Style;
	__property StyleDisabled;
	__property StyleFocused;
	__property StyleHot;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Time = {default=0};
	__property Visible = {default=1};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEditing;
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
	__property OnStartDrag;
	__property OnEndDock;
	__property OnStartDock;
public:
	/* TcxCustomSpinEdit.Destroy */ inline __fastcall virtual ~TcxTimeEdit() { }
	
public:
	/* TcxCustomMaskEdit.Create */ inline __fastcall virtual TcxTimeEdit(System::Classes::TComponent* AOwner)/* overload */ : TcxCustomTimeEdit(AOwner) { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxTimeEdit(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : TcxCustomTimeEdit(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxTimeEdit(HWND ParentWindow) : TcxCustomTimeEdit(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxFilterTimeEditHelper : public Cxspinedit::TcxFilterSpinEditHelper
{
	typedef Cxspinedit::TcxFilterSpinEditHelper inherited;
	
protected:
	__classmethod virtual void __fastcall InitializeEdit(Cxedit::TcxCustomEdit* AEdit, Cxedit::TcxCustomEditProperties* AEditProperties);
	
public:
	__classmethod virtual Cxfiltercontrolutils::TcxFilterDataType __fastcall GetFilterDataType(Cxdatastorage::TcxValueTypeClass AValueTypeClass);
	__classmethod virtual Cxedit::TcxCustomEditClass __fastcall GetFilterEditClass();
public:
	/* TObject.Create */ inline __fastcall TcxFilterTimeEditHelper() : Cxspinedit::TcxFilterSpinEditHelper() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxFilterTimeEditHelper() { }
	
};

#pragma pack(pop)

typedef System::StaticArray<System::StaticArray<System::StaticArray<System::UnicodeString, 2>, 2>, 3> Cxtimeedit__7;

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Cxtimeedit__7 cxTimeEditFormats;
extern DELPHI_PACKAGE bool __fastcall IsCharValidForTimeEdit(Cxmaskedit::TcxCustomMaskEdit* ATimeEdit, System::WideChar &AChar, int APos, const TcxTimeEditZoneInfo &ATimeZoneInfo);
}	/* namespace Cxtimeedit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXTIMEEDIT)
using namespace Cxtimeedit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxtimeeditHPP
