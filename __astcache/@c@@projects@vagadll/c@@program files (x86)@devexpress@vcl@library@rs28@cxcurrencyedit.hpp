// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxCurrencyEdit.pas' rev: 35.00 (Windows)

#ifndef CxcurrencyeditHPP
#define CxcurrencyeditHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Types.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Clipbrd.hpp>
#include <cxContainer.hpp>
#include <cxDataStorage.hpp>
#include <cxDataUtils.hpp>
#include <cxEdit.hpp>
#include <cxTextEdit.hpp>
#include <cxFilterControlUtils.hpp>
#include <cxControls.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxcurrencyedit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxCurrencyEditPropertiesValues;
class DELPHICLASS TcxCustomCurrencyEditProperties;
class DELPHICLASS TcxCurrencyEditProperties;
class DELPHICLASS TcxCustomCurrencyEdit;
class DELPHICLASS TcxCurrencyEdit;
class DELPHICLASS TcxFilterCurrencyEditHelper;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCurrencyEditPropertiesValues : public Cxtextedit::TcxTextEditPropertiesValues
{
	typedef Cxtextedit::TcxTextEditPropertiesValues inherited;
	
private:
	bool FDecimalPlaces;
	void __fastcall SetDecimalPlaces(bool Value);
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall RestoreDefaults();
	
__published:
	__property bool DecimalPlaces = {read=FDecimalPlaces, write=SetDecimalPlaces, stored=false, nodefault};
public:
	/* TcxCustomEditPropertiesValues.Create */ inline __fastcall virtual TcxCurrencyEditPropertiesValues(System::Classes::TPersistent* AOwner) : Cxtextedit::TcxTextEditPropertiesValues(AOwner) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxCurrencyEditPropertiesValues() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxCustomCurrencyEditProperties : public Cxtextedit::TcxCustomTextEditProperties
{
	typedef Cxtextedit::TcxCustomTextEditProperties inherited;
	
private:
	int FDecimalPlaces;
	bool FFormatChanging;
	bool FNullable;
	bool FUseThousandSeparator;
	HIDESBASE TcxCurrencyEditPropertiesValues* __fastcall GetAssignedValues();
	int __fastcall GetDecimalPlaces();
	bool __fastcall IsDecimalPlacesStored();
	HIDESBASE void __fastcall SetAssignedValues(TcxCurrencyEditPropertiesValues* Value);
	void __fastcall SetDecimalPlaces(int Value);
	void __fastcall SetNullable(bool Value);
	void __fastcall SetUseThousandSeparator(const bool Value);
	
protected:
	virtual void __fastcall DoAssign(Cxedit::TcxCustomEditProperties* AProperties);
	__classmethod virtual Cxedit::TcxCustomEditPropertiesValuesClass __fastcall GetAssignedValuesClass();
	virtual System::UnicodeString __fastcall GetDefaultDisplayFormat();
	virtual Cxedit::TcxEditDisplayFormatOptions __fastcall GetDisplayFormatOptions();
	virtual bool __fastcall HasDigitGrouping(bool AIsDisplayValueSynchronizing);
	virtual bool __fastcall IsEditValueNumeric();
	__property TcxCurrencyEditPropertiesValues* AssignedValues = {read=GetAssignedValues, write=SetAssignedValues};
	
public:
	__fastcall virtual TcxCustomCurrencyEditProperties(System::Classes::TPersistent* AOwner);
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	virtual Cxdatautils::TcxDataEditValueSource __fastcall GetEditValueSource(bool AEditFocused);
	virtual Cxedit::TcxEditSupportedOperations __fastcall GetSupportedOperations();
	virtual bool __fastcall IsDisplayValueValid(System::Variant &ADisplayValue, bool AEditFocused);
	virtual void __fastcall DoPrepareDisplayValue(const System::Variant &AEditValue, System::Variant &ADisplayValue, bool AEditFocused);
	virtual void __fastcall ValidateDisplayValue(System::Variant &ADisplayValue, Vcl::Controls::TCaption &AErrorText, bool &AError, Cxedit::TcxCustomEdit* AEdit);
	__property int DecimalPlaces = {read=GetDecimalPlaces, write=SetDecimalPlaces, stored=IsDecimalPlacesStored, nodefault};
	__property bool Nullable = {read=FNullable, write=SetNullable, default=1};
	__property ValidateOnEnter = {default=1};
	__property bool UseThousandSeparator = {read=FUseThousandSeparator, write=SetUseThousandSeparator, default=0};
public:
	/* TcxCustomTextEditProperties.Destroy */ inline __fastcall virtual ~TcxCustomCurrencyEditProperties() { }
	
};


class PASCALIMPLEMENTATION TcxCurrencyEditProperties : public TcxCustomCurrencyEditProperties
{
	typedef TcxCustomCurrencyEditProperties inherited;
	
__published:
	__property Alignment;
	__property AssignedValues;
	__property AutoSelect = {default=1};
	__property ClearKey = {default=0};
	__property DecimalPlaces;
	__property DisplayFormat = {default=0};
	__property EchoMode = {default=0};
	__property EditFormat = {default=0};
	__property HideSelection = {default=1};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property MaxLength;
	__property MaxValue = {default=0};
	__property MinValue = {default=0};
	__property Nullable = {default=1};
	__property Nullstring = {default=0};
	__property PasswordChar = {default=0};
	__property ReadOnly;
	__property UseDisplayFormatWhenEditing = {default=0};
	__property UseLeftAlignmentOnEditing;
	__property UseNullString = {default=0};
	__property UseThousandSeparator = {default=0};
	__property ValidateOnEnter = {default=1};
	__property ValidationErrorIconAlignment = {default=0};
	__property ValidationOptions = {default=1};
	__property OnChange;
	__property OnEditValueChanged;
	__property OnValidate;
public:
	/* TcxCustomCurrencyEditProperties.Create */ inline __fastcall virtual TcxCurrencyEditProperties(System::Classes::TPersistent* AOwner) : TcxCustomCurrencyEditProperties(AOwner) { }
	
public:
	/* TcxCustomTextEditProperties.Destroy */ inline __fastcall virtual ~TcxCurrencyEditProperties() { }
	
};


class PASCALIMPLEMENTATION TcxCustomCurrencyEdit : public Cxtextedit::TcxCustomTextEdit
{
	typedef Cxtextedit::TcxCustomTextEdit inherited;
	
private:
	HIDESBASE TcxCustomCurrencyEditProperties* __fastcall GetProperties();
	HIDESBASE TcxCustomCurrencyEditProperties* __fastcall GetActiveProperties();
	double __fastcall GetValue();
	HIDESBASE void __fastcall SetProperties(TcxCustomCurrencyEditProperties* Value);
	void __fastcall SetValue(double Value);
	
protected:
	virtual void __fastcall CheckEditorValueBounds();
	virtual void __fastcall Initialize();
	virtual System::Variant __fastcall InternalGetEditingValue();
	virtual bool __fastcall IsValidChar(System::WideChar Key);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall PropertiesChanged(System::TObject* Sender);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	virtual void __fastcall PasteFromClipboard();
	virtual void __fastcall PrepareEditValue(const System::Variant &ADisplayValue, /* out */ System::Variant &EditValue, bool AEditFocused);
	__property TcxCustomCurrencyEditProperties* ActiveProperties = {read=GetActiveProperties};
	__property TcxCustomCurrencyEditProperties* Properties = {read=GetProperties, write=SetProperties};
	__property double Value = {read=GetValue, write=SetValue, stored=false};
public:
	/* TcxCustomTextEdit.Create */ inline __fastcall virtual TcxCustomCurrencyEdit(System::Classes::TComponent* AOwner)/* overload */ : Cxtextedit::TcxCustomTextEdit(AOwner) { }
	/* TcxCustomTextEdit.Destroy */ inline __fastcall virtual ~TcxCustomCurrencyEdit() { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxCustomCurrencyEdit(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Cxtextedit::TcxCustomTextEdit(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomCurrencyEdit(HWND ParentWindow) : Cxtextedit::TcxCustomTextEdit(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxCurrencyEdit : public TcxCustomCurrencyEdit
{
	typedef TcxCustomCurrencyEdit inherited;
	
private:
	HIDESBASE TcxCurrencyEditProperties* __fastcall GetActiveProperties();
	HIDESBASE TcxCurrencyEditProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(TcxCurrencyEditProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TcxCurrencyEditProperties* ActiveProperties = {read=GetActiveProperties};
	
__published:
	__property Anchors = {default=3};
	__property AutoSize = {default=1};
	__property BeepOnEnter = {default=1};
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property EditValue = {default=0};
	__property Enabled = {default=1};
	__property ParentColor = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property TcxCurrencyEditProperties* Properties = {read=GetProperties, write=SetProperties};
	__property ShowHint;
	__property Style;
	__property StyleDisabled;
	__property StyleFocused;
	__property StyleHot;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TextHint = {default=0};
	__property Value = {default=0};
	__property Visible = {default=1};
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnEditing;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property BiDiMode;
	__property ParentBiDiMode = {default=1};
	__property OnEndDock;
	__property OnStartDock;
public:
	/* TcxCustomTextEdit.Create */ inline __fastcall virtual TcxCurrencyEdit(System::Classes::TComponent* AOwner)/* overload */ : TcxCustomCurrencyEdit(AOwner) { }
	/* TcxCustomTextEdit.Destroy */ inline __fastcall virtual ~TcxCurrencyEdit() { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxCurrencyEdit(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : TcxCustomCurrencyEdit(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCurrencyEdit(HWND ParentWindow) : TcxCustomCurrencyEdit(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxFilterCurrencyEditHelper : public Cxtextedit::TcxFilterTextEditHelper
{
	typedef Cxtextedit::TcxFilterTextEditHelper inherited;
	
public:
	__classmethod virtual Cxedit::TcxCustomEditClass __fastcall GetFilterEditClass();
	__classmethod virtual Cxfiltercontrolutils::TcxFilterControlOperators __fastcall GetSupportedFilterOperators(Cxedit::TcxCustomEditProperties* AProperties, Cxdatastorage::TcxValueTypeClass AValueTypeClass, bool AExtendedSet = false);
	__classmethod virtual void __fastcall InitializeProperties(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditProperties* AEditProperties, bool AHasButtons);
public:
	/* TObject.Create */ inline __fastcall TcxFilterCurrencyEditHelper() : Cxtextedit::TcxFilterTextEditHelper() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxFilterCurrencyEditHelper() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Cxcurrencyedit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXCURRENCYEDIT)
using namespace Cxcurrencyedit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxcurrencyeditHPP
