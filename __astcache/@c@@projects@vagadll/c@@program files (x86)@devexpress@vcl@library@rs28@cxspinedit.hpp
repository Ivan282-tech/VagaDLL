// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxSpinEdit.pas' rev: 35.00 (Windows)

#ifndef CxspineditHPP
#define CxspineditHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <Winapi.Windows.hpp>
#include <System.Variants.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <System.SysUtils.hpp>
#include <cxClasses.hpp>
#include <cxContainer.hpp>
#include <cxControls.hpp>
#include <cxDataStorage.hpp>
#include <cxDataUtils.hpp>
#include <cxEdit.hpp>
#include <cxGraphics.hpp>
#include <cxMaskEdit.hpp>
#include <cxTextEdit.hpp>
#include <cxVariants.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxFilterControlUtils.hpp>
#include <dxUxTheme.hpp>
#include <cxAccessibility.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxspinedit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxSpinEditViewInfo;
class DELPHICLASS TcxSpinEditViewData;
class DELPHICLASS TcxSpinEditButtons;
class DELPHICLASS TcxSpinEditPropertiesValues;
class DELPHICLASS TcxCustomSpinEditProperties;
class DELPHICLASS TcxSpinEditProperties;
class DELPHICLASS TdxSpinEditAccessibilityHelper;
class DELPHICLASS TcxCustomSpinEdit;
class DELPHICLASS TcxSpinEdit;
class DELPHICLASS TcxFilterSpinEditHelper;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TcxSpinBoundsCheckingKind : unsigned char { bckDoNotExceed, bckExtendToBound, bckCircular };

enum DECLSPEC_DENUM TcxSpinEditButtonsPosition : unsigned char { sbpHorzLeftRight, sbpHorzRight, sbpVert };

enum DECLSPEC_DENUM TcxSpinEditButton : unsigned char { sebBackward, sebForward, sebFastBackward, sebFastForward };

class PASCALIMPLEMENTATION TcxSpinEditViewInfo : public Cxtextedit::TcxCustomTextEditViewInfo
{
	typedef Cxtextedit::TcxCustomTextEditViewInfo inherited;
	
private:
	static System::StaticArray<System::StaticArray<Cxlookandfeelpainters::TcxEditBtnKind, 4>, 2> SpinButtonToEditBtnKind;
	
protected:
	virtual void __fastcall DrawHotFlatButtonBorder(Cxgraphics::TcxCanvas* ACanvas, Cxedit::TcxEditButtonViewInfo* AButtonViewInfo, System::Types::TRect &ARect, /* out */ System::Types::TRect &AContentRect, System::Uitypes::TColor &APenColor, System::Uitypes::TColor &ABrushColor);
	virtual void __fastcall DrawNativeButtonBorder(Cxgraphics::TcxCanvas* ACanvas, Cxedit::TcxEditButtonViewInfo* AButtonViewInfo, System::Types::TRect &ARect, /* out */ System::Types::TRect &AContentRect, System::Uitypes::TColor &APenColor, System::Uitypes::TColor &ABrushColor);
	virtual void __fastcall DrawUltraFlatButtonBorder(Cxgraphics::TcxCanvas* ACanvas, Cxedit::TcxEditButtonViewInfo* AButtonViewInfo, bool AIsOffice11Style, System::Types::TRect &ARect, System::Types::TRect &AContentRect, /* out */ System::Uitypes::TColor &APenColor, /* out */ System::Uitypes::TColor &ABrushColor);
	virtual void __fastcall DrawLookAndFeelButtonBackground(Cxgraphics::TcxCanvas* ACanvas, Cxedit::TcxEditButtonViewInfo* AButtonViewInfo, const System::Types::TRect &ARect);
	virtual void __fastcall DrawNativeButtonBackground(Cxgraphics::TcxCanvas* ACanvas, Cxedit::TcxEditButtonViewInfo* AButtonViewInfo, const System::Types::TRect &ARect);
	virtual void __fastcall InternalPaint(Cxgraphics::TcxCanvas* ACanvas);
	
public:
	int ArrowSize;
	TcxSpinEditButtonsPosition ButtonsPosition;
	System::StaticArray<System::Types::TPoint, 2> DelimiterLine;
	virtual void __fastcall DrawButtonContent(Cxgraphics::TcxCanvas* ACanvas, Cxedit::TcxEditButtonViewInfo* AViewInfo, const System::Types::TRect &AContentRect, System::Uitypes::TColor APenColor, System::Uitypes::TColor ABrushColor, bool ANeedOffsetContent);
public:
	/* TcxCustomTextEditViewInfo.Destroy */ inline __fastcall virtual ~TcxSpinEditViewInfo() { }
	
public:
	/* TcxCustomEditViewInfo.Create */ inline __fastcall virtual TcxSpinEditViewInfo() : Cxtextedit::TcxCustomTextEditViewInfo() { }
	
};


enum DECLSPEC_DENUM TcxSpinEditPressedState : unsigned char { epsNone, epsDown, epsUp, epsFastDown, epsFastUp };

class PASCALIMPLEMENTATION TcxSpinEditViewData : public Cxtextedit::TcxCustomTextEditViewData
{
	typedef Cxtextedit::TcxCustomTextEditViewData inherited;
	
private:
	HIDESBASE TcxCustomSpinEditProperties* __fastcall GetProperties();
	
protected:
	virtual bool __fastcall CanPressButton(Cxedit::TcxCustomEditViewInfo* AViewInfo, int AButtonVisibleIndex);
	virtual void __fastcall CalculateButtonNativePartInfo(NativeUInt ATheme, Cxedit::TcxEditButtonViewInfo* AButtonViewInfo);
	virtual void __fastcall CalculateButtonsBounds(Cxgraphics::TcxCanvas* ACanvas, Cxedit::TcxCustomEditViewInfo* AViewInfo, System::Types::TRect &ButtonsRect);
	virtual NativeUInt __fastcall GetButtonNativeTheme(Cxedit::TcxEditButtonViewInfo* AButtonViewInfo);
	virtual bool __fastcall IsButtonPressed(Cxedit::TcxCustomEditViewInfo* AViewInfo, int AButtonVisibleIndex);
	
public:
	TcxSpinEditPressedState PressedState;
	virtual void __fastcall Calculate(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TPoint &P, Cxcontainer::TcxMouseButton Button, System::Classes::TShiftState Shift, Cxedit::TcxCustomEditViewInfo* ViewInfo, bool AIsMouseEvent);
	virtual void __fastcall CalculateButtonViewInfo(Cxgraphics::TcxCanvas* ACanvas, Cxedit::TcxCustomEditViewInfo* AViewInfo, int AButtonVisibleIndex, System::Types::TRect &ButtonsRect);
	virtual void __fastcall CheckButtonsOnly(Cxedit::TcxCustomEditViewInfo* AViewInfo, int APrevButtonsWidth, int AButtonsWidth);
	virtual void __fastcall DoCalculateButtonViewInfos(Cxgraphics::TcxCanvas* ACanvas, System::Types::TRect &AButtonsRect, Cxedit::TcxCustomEditViewInfo* AViewInfo);
	virtual bool __fastcall IgnoreButtonWhileStretching(int AButtonVisibleIndex);
	virtual bool __fastcall IsButtonLeftAligned(Cxedit::TcxCustomEditViewInfo* AViewInfo, int AButtonVisibleIndex);
	__property TcxCustomSpinEditProperties* Properties = {read=GetProperties};
public:
	/* TcxCustomEditViewData.Create */ inline __fastcall virtual TcxSpinEditViewData(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditStyle* AStyle, bool AIsInplace) : Cxtextedit::TcxCustomTextEditViewData(AProperties, AStyle, AIsInplace) { }
	/* TcxCustomEditViewData.Destroy */ inline __fastcall virtual ~TcxSpinEditViewData() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxSpinEditButtons : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Classes::TPersistent* FOwner;
	TcxSpinEditButtonsPosition FPosition;
	bool FShowFastButtons;
	bool FVisible;
	TcxCustomSpinEditProperties* __fastcall GetProperties();
	void __fastcall SetPosition(TcxSpinEditButtonsPosition AValue);
	void __fastcall SetShowFastButtons(bool AValue);
	void __fastcall SetVisible(bool AValue);
	
protected:
	void __fastcall Changed();
	__property TcxCustomSpinEditProperties* Properties = {read=GetProperties};
	
public:
	__fastcall virtual TcxSpinEditButtons(System::Classes::TPersistent* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property TcxSpinEditButtonsPosition Position = {read=FPosition, write=SetPosition, default=2};
	__property bool ShowFastButtons = {read=FShowFastButtons, write=SetShowFastButtons, default=0};
	__property bool Visible = {read=FVisible, write=SetVisible, default=1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxSpinEditButtons() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxSpinEditPropertiesValues : public Cxtextedit::TcxTextEditPropertiesValues
{
	typedef Cxtextedit::TcxTextEditPropertiesValues inherited;
	
private:
	bool FValueType;
	void __fastcall SetValueType(bool AValue);
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall RestoreDefaults();
	
__published:
	__property bool ValueType = {read=FValueType, write=SetValueType, stored=false, nodefault};
public:
	/* TcxCustomEditPropertiesValues.Create */ inline __fastcall virtual TcxSpinEditPropertiesValues(System::Classes::TPersistent* AOwner) : Cxtextedit::TcxTextEditPropertiesValues(AOwner) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxSpinEditPropertiesValues() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TcxSpinEditValueType : unsigned char { vtInt, vtFloat };

typedef void __fastcall (__closure *TcxSpinEditGetValueEvent)(System::TObject* Sender, const Vcl::Controls::TCaption AText, /* out */ System::Variant &AValue, Vcl::Controls::TCaption &ErrorText, bool &Error);

class PASCALIMPLEMENTATION TcxCustomSpinEditProperties : public Cxmaskedit::TcxCustomMaskEditProperties
{
	typedef Cxmaskedit::TcxCustomMaskEditProperties inherited;
	
private:
	TcxSpinEditButtons* FSpinButtons;
	bool FCanEdit;
	bool FCircular;
	double FIncrement;
	double FLargeIncrement;
	bool FExceptionOnInvalidInput;
	bool FUseCtrlIncrement;
	TcxSpinEditValueType FValueType;
	TcxSpinEditGetValueEvent FOnGetValue;
	double __fastcall DoubleAsValueType(double AValue, TcxSpinEditValueType AValueType);
	HIDESBASE TcxSpinEditPropertiesValues* __fastcall GetAssignedValues();
	TcxSpinEditValueType __fastcall GetValueType();
	bool __fastcall InternalTryTextToValue(System::UnicodeString S, /* out */ System::Variant &AValue);
	bool __fastcall IsIncrementStored();
	bool __fastcall IsLargeIncrementStored();
	bool __fastcall IsValueTypeStored();
	void __fastcall ReadZeroIncrement(System::Classes::TReader* Reader);
	void __fastcall ReadZeroLargeIncrement(System::Classes::TReader* Reader);
	HIDESBASE void __fastcall SetAssignedValues(TcxSpinEditPropertiesValues* AValue);
	void __fastcall SetCircular(bool AValue);
	void __fastcall SetSpinButtons(TcxSpinEditButtons* AValue);
	void __fastcall SetValueType(TcxSpinEditValueType AValue);
	System::UnicodeString __fastcall TryExtractDisplayFormat(const System::UnicodeString S);
	System::Variant __fastcall VarToCurrentValueType(const System::Variant &AValue);
	void __fastcall WriteZeroIncrement(System::Classes::TWriter* Writer);
	void __fastcall WriteZeroLargeIncrement(System::Classes::TWriter* Writer);
	
protected:
	virtual System::Variant __fastcall DefaultFocusedDisplayValue();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall DoAssign(Cxedit::TcxCustomEditProperties* AProperties);
	virtual void __fastcall DoChanged();
	__classmethod virtual Cxedit::TcxCustomEditPropertiesValuesClass __fastcall GetAssignedValuesClass();
	__classmethod virtual Cxedit::TcxCustomEditViewDataClass __fastcall GetViewDataClass();
	virtual bool __fastcall IsEditValueNumeric();
	virtual System::Variant __fastcall CheckValueBounds(const System::Variant &AValue);
	virtual bool __fastcall ExtendValueUpToBound();
	virtual TcxSpinBoundsCheckingKind __fastcall GetBoundsCheckingKind();
	double __fastcall GetIncrement(TcxSpinEditButton AButton);
	System::Variant __fastcall GetMaxMinValueForCurrentValueType(bool AMinValue = true);
	virtual System::Variant __fastcall InternalMaxValue();
	virtual System::Variant __fastcall InternalMinValue();
	virtual bool __fastcall IsDisplayValueNumeric();
	bool __fastcall IsValueBoundsValid(double AValue);
	virtual System::Variant __fastcall PrepareValue(const System::Variant &AValue);
	virtual bool __fastcall PreserveSelection();
	System::Variant __fastcall SetVariantType(const System::Variant &AValue);
	bool __fastcall TryTextToValue(System::UnicodeString S, /* out */ System::Variant &AValue);
	__property TcxSpinEditPropertiesValues* AssignedValues = {read=GetAssignedValues, write=SetAssignedValues};
	
public:
	__fastcall virtual TcxCustomSpinEditProperties(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TcxCustomSpinEditProperties();
	virtual Cxedit::TcxCustomEditViewData* __fastcall CreateViewData(Cxedit::TcxCustomEditStyle* AStyle, bool AIsInplace, bool APreviewMode = false);
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	virtual Cxdatautils::TcxDataEditValueSource __fastcall GetEditValueSource(bool AEditFocused);
	__classmethod virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
	virtual bool __fastcall IsDisplayValueValid(System::Variant &ADisplayValue, bool AEditFocused);
	virtual bool __fastcall IsEditValueValid(System::Variant &AEditValue, bool AEditFocused);
	virtual void __fastcall ValidateDisplayValue(System::Variant &ADisplayValue, Vcl::Controls::TCaption &AErrorText, bool &AError, Cxedit::TcxCustomEdit* AEdit);
	__property bool CanEdit = {read=FCanEdit, write=FCanEdit, default=1};
	__property bool Circular = {read=FCircular, write=SetCircular, default=0};
	__property bool ExceptionOnInvalidInput = {read=FExceptionOnInvalidInput, write=FExceptionOnInvalidInput, default=0};
	__property double Increment = {read=FIncrement, write=FIncrement, stored=IsIncrementStored};
	__property double LargeIncrement = {read=FLargeIncrement, write=FLargeIncrement, stored=IsLargeIncrementStored};
	__property TcxSpinEditButtons* SpinButtons = {read=FSpinButtons, write=SetSpinButtons};
	__property bool UseCtrlIncrement = {read=FUseCtrlIncrement, write=FUseCtrlIncrement, default=0};
	__property TcxSpinEditValueType ValueType = {read=GetValueType, write=SetValueType, stored=IsValueTypeStored, nodefault};
	__property TcxSpinEditGetValueEvent OnGetValue = {read=FOnGetValue, write=FOnGetValue};
};


class PASCALIMPLEMENTATION TcxSpinEditProperties : public TcxCustomSpinEditProperties
{
	typedef TcxCustomSpinEditProperties inherited;
	
__published:
	__property Alignment;
	__property AssignedValues;
	__property AutoSelect = {default=1};
	__property BeepOnError = {default=0};
	__property CanEdit = {default=1};
	__property ClearKey = {default=0};
	__property DisplayFormat = {default=0};
	__property EchoMode = {default=0};
	__property EditFormat = {default=0};
	__property ExceptionOnInvalidInput = {default=0};
	__property HideSelection = {default=1};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property ImmediatePost = {default=0};
	__property Increment = {default=0};
	__property LargeIncrement = {default=0};
	__property MaxValue = {default=0};
	__property MinValue = {default=0};
	__property Nullstring = {default=0};
	__property PasswordChar = {default=0};
	__property ReadOnly;
	__property SpinButtons;
	__property UseCtrlIncrement = {default=0};
	__property UseDisplayFormatWhenEditing = {default=0};
	__property UseLeftAlignmentOnEditing;
	__property UseNullString = {default=0};
	__property ValidateOnEnter = {default=1};
	__property ValidationErrorIconAlignment = {default=0};
	__property ValidationOptions = {default=1};
	__property ValueType;
	__property OnChange;
	__property OnEditValueChanged;
	__property OnGetValue;
	__property OnValidate;
public:
	/* TcxCustomSpinEditProperties.Create */ inline __fastcall virtual TcxSpinEditProperties(System::Classes::TPersistent* AOwner) : TcxCustomSpinEditProperties(AOwner) { }
	/* TcxCustomSpinEditProperties.Destroy */ inline __fastcall virtual ~TcxSpinEditProperties() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSpinEditAccessibilityHelper : public Cxedit::TdxEditAccessibilityHelper
{
	typedef Cxedit::TdxEditAccessibilityHelper inherited;
	
protected:
	virtual int __fastcall GetRole(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetState(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual System::UnicodeString __fastcall GetValue(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
public:
	/* TdxEditAccessibilityHelper.Create */ inline __fastcall virtual TdxSpinEditAccessibilityHelper(System::TObject* AOwnerObject) : Cxedit::TdxEditAccessibilityHelper(AOwnerObject) { }
	/* TdxEditAccessibilityHelper.Destroy */ inline __fastcall virtual ~TdxSpinEditAccessibilityHelper() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxCustomSpinEdit : public Cxmaskedit::TcxCustomMaskEdit
{
	typedef Cxmaskedit::TcxCustomMaskEdit inherited;
	
private:
	System::Variant FInternalValue;
	bool FIsCustomText;
	bool FIsCustomTextAction;
	TcxSpinEditPressedState FPressedState;
	Cxclasses::TcxTimer* FTimer;
	HIDESBASE TcxCustomSpinEditProperties* __fastcall GetProperties();
	HIDESBASE TcxCustomSpinEditProperties* __fastcall GetActiveProperties();
	void __fastcall HandleTimer(System::TObject* Sender);
	bool __fastcall IsValueStored();
	void __fastcall SetPressedState(TcxSpinEditPressedState AValue);
	HIDESBASE void __fastcall SetProperties(TcxCustomSpinEditProperties* AValue);
	void __fastcall StopTracking();
	
protected:
	virtual void __fastcall ChangeHandler(System::TObject* Sender);
	virtual void __fastcall CheckEditorValueBounds();
	virtual void __fastcall DoButtonDown(int AButtonVisibleIndex);
	virtual void __fastcall DoEditKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall DoEditKeyPress(System::WideChar &Key);
	virtual void __fastcall DoEditKeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC bool __fastcall DoMouseWheelDown(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	DYNAMIC bool __fastcall DoMouseWheelUp(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	virtual Cxedit::TdxEditAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	virtual bool __fastcall GetNewValue(TcxSpinEditButton AButton, /* out */ System::Variant &AValue);
	DYNAMIC void __fastcall FocusChanged();
	virtual void __fastcall Initialize();
	virtual System::Variant __fastcall InternalGetEditingValue();
	virtual Cxcontainer::TcxContainerStyleValues __fastcall InternalGetNotPublishedStyleValues();
	virtual bool __fastcall InternalIncrement(System::Variant &AValue, const System::Variant &AIncrement);
	virtual void __fastcall InternalStoreEditValue(const System::Variant &AValue);
	virtual bool __fastcall IsEditValueStored();
	virtual bool __fastcall IsValidChar(System::WideChar AChar);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall PropertiesChanged(System::TObject* Sender);
	virtual bool __fastcall DoRefreshContainer(const System::Types::TPoint &P, Cxcontainer::TcxMouseButton Button, System::Classes::TShiftState Shift, bool AIsMouseEvent);
	void __fastcall SetInternalValue(const System::Variant &AValue);
	virtual void __fastcall SynchronizeDisplayValue();
	void __fastcall DoOnGetValue(const Vcl::Controls::TCaption AText, /* out */ System::Variant &AValue, Vcl::Controls::TCaption &ErrorText, bool &Error);
	virtual double __fastcall GetIncrement(TcxSpinEditButton AButton);
	virtual System::Variant __fastcall GetValue();
	virtual System::UnicodeString __fastcall IncrementValueToStr(const System::Variant &AValue);
	bool __fastcall InternalPrepareEditValue(const System::Variant &ADisplayValue, bool ARaiseException, /* out */ System::Variant &AEditValue, /* out */ Vcl::Controls::TCaption &AErrorText);
	bool __fastcall IsOnGetValueEventAssigned();
	virtual void __fastcall SetValue(const System::Variant &AValue);
	__property System::Variant InternalValue = {read=FInternalValue};
	__property TcxSpinEditPressedState PressedState = {read=FPressedState, write=SetPressedState, nodefault};
	__property System::Variant Value = {read=GetValue, write=SetValue, stored=IsValueStored};
	
public:
	__fastcall virtual ~TcxCustomSpinEdit();
	virtual void __fastcall ClearSelection();
	virtual void __fastcall CutToClipboard();
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	virtual bool __fastcall Increment(TcxSpinEditButton AButton);
	virtual void __fastcall PasteFromClipboard();
	virtual void __fastcall PrepareEditValue(const System::Variant &ADisplayValue, /* out */ System::Variant &AEditValue, bool AEditFocused);
	__property TcxCustomSpinEditProperties* ActiveProperties = {read=GetActiveProperties};
	__property TcxCustomSpinEditProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxCustomMaskEdit.Create */ inline __fastcall virtual TcxCustomSpinEdit(System::Classes::TComponent* AOwner)/* overload */ : Cxmaskedit::TcxCustomMaskEdit(AOwner) { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxCustomSpinEdit(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Cxmaskedit::TcxCustomMaskEdit(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomSpinEdit(HWND ParentWindow) : Cxmaskedit::TcxCustomMaskEdit(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxSpinEdit : public TcxCustomSpinEdit
{
	typedef TcxCustomSpinEdit inherited;
	
private:
	HIDESBASE TcxSpinEditProperties* __fastcall GetActiveProperties();
	HIDESBASE TcxSpinEditProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(TcxSpinEditProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TcxSpinEditProperties* ActiveProperties = {read=GetActiveProperties};
	
__published:
	__property Anchors = {default=3};
	__property AutoSize = {default=1};
	__property BeepOnEnter = {default=1};
	__property BiDiMode;
	__property Constraints;
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property TcxSpinEditProperties* Properties = {read=GetProperties, write=SetProperties};
	__property ShowHint;
	__property Style;
	__property StyleDisabled;
	__property StyleFocused;
	__property StyleHot;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Value = {default=0};
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
	/* TcxCustomSpinEdit.Destroy */ inline __fastcall virtual ~TcxSpinEdit() { }
	
public:
	/* TcxCustomMaskEdit.Create */ inline __fastcall virtual TcxSpinEdit(System::Classes::TComponent* AOwner)/* overload */ : TcxCustomSpinEdit(AOwner) { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxSpinEdit(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : TcxCustomSpinEdit(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxSpinEdit(HWND ParentWindow) : TcxCustomSpinEdit(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxFilterSpinEditHelper : public Cxmaskedit::TcxFilterMaskEditHelper
{
	typedef Cxmaskedit::TcxFilterMaskEditHelper inherited;
	
public:
	__classmethod virtual bool __fastcall EditPropertiesHasButtons();
	__classmethod virtual Cxfiltercontrolutils::TcxFilterDataType __fastcall GetFilterDataType(Cxdatastorage::TcxValueTypeClass AValueTypeClass);
	__classmethod virtual Cxedit::TcxCustomEditClass __fastcall GetFilterEditClass();
	__classmethod virtual Cxfiltercontrolutils::TcxFilterControlOperators __fastcall GetSupportedFilterOperators(Cxedit::TcxCustomEditProperties* AProperties, Cxdatastorage::TcxValueTypeClass AValueTypeClass, bool AExtendedSet = false);
	__classmethod virtual void __fastcall InitializeProperties(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditProperties* AEditProperties, bool AHasButtons);
public:
	/* TObject.Create */ inline __fastcall TcxFilterSpinEditHelper() : Cxmaskedit::TcxFilterMaskEditHelper() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxFilterSpinEditHelper() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 cxSpinBackwardButtonIndex = System::Int8(0x0);
static const System::Int8 cxSpinForwardButtonIndex = System::Int8(0x1);
static const System::Int8 cxSpinFastBackwardButtonIndex = System::Int8(0x2);
static const System::Int8 cxSpinFastForwardButtonIndex = System::Int8(0x3);
}	/* namespace Cxspinedit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXSPINEDIT)
using namespace Cxspinedit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxspineditHPP
