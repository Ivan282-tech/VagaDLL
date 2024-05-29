// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxCalc.pas' rev: 35.00 (Windows)

#ifndef CxcalcHPP
#define CxcalcHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Clipbrd.hpp>
#include <cxClasses.hpp>
#include <cxControls.hpp>
#include <cxContainer.hpp>
#include <cxGraphics.hpp>
#include <cxDataStorage.hpp>
#include <cxDataUtils.hpp>
#include <cxButtons.hpp>
#include <cxEdit.hpp>
#include <cxDropDownEdit.hpp>
#include <cxEditConsts.hpp>
#include <cxFormats.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxTextEdit.hpp>
#include <cxFilterControlUtils.hpp>
#include <dxFading.hpp>
#include <cxAccessibility.hpp>
#include <cxMaskEdit.hpp>
#include <dxGDIPlusClasses.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxcalc
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxCalcEditButtonViewInfo;
class DELPHICLASS TcxCalcEditButtonFadingHelper;
class DELPHICLASS TdxCalculatorAccessibilityHelper;
class DELPHICLASS TcxCustomCalculator;
class DELPHICLASS TcxPopupCalculator;
class DELPHICLASS TcxCalcEditPropertiesValues;
class DELPHICLASS TcxCustomCalcEditProperties;
class DELPHICLASS TcxCalcEditProperties;
class DELPHICLASS TcxCustomCalcEdit;
class DELPHICLASS TcxCalcEdit;
class DELPHICLASS TcxFilterCalcEditHelper;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TcxCalcState : unsigned char { csFirst, csValid, csError };

typedef System::StaticArray<System::UnicodeString, 27> Cxcalc__1;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCalcEditButtonViewInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool FDown;
	TcxCustomCalculator* FOwner;
	Cxlookandfeelpainters::TcxButtonState FState;
	bool FGrayed;
	bool __fastcall GetIsDefault();
	void __fastcall SetDown(bool AValue);
	void __fastcall SetState(const Cxlookandfeelpainters::TcxButtonState Value);
	void __fastcall SetGrayed(const bool Value);
	
protected:
	System::Types::TRect Bounds;
	TcxCalcEditButtonFadingHelper* FadingHelper;
	Cxlookandfeelpainters::TcxCalcButtonKind Kind;
	System::UnicodeString Text;
	Cxlookandfeelpainters::TcxButtonState __fastcall CalculateState();
	
public:
	__fastcall TcxCalcEditButtonViewInfo(TcxCustomCalculator* AOwner);
	__fastcall virtual ~TcxCalcEditButtonViewInfo();
	void __fastcall Invalidate();
	void __fastcall UpdateState();
	__property bool Down = {read=FDown, write=SetDown, nodefault};
	__property bool Grayed = {read=FGrayed, write=SetGrayed, nodefault};
	__property bool IsDefault = {read=GetIsDefault, nodefault};
	__property TcxCustomCalculator* Owner = {read=FOwner};
	__property Cxlookandfeelpainters::TcxButtonState State = {read=FState, write=SetState, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCalcEditButtonFadingHelper : public Dxfading::TdxFadingObjectHelper
{
	typedef Dxfading::TdxFadingObjectHelper inherited;
	
private:
	TcxCalcEditButtonViewInfo* FViewInfo;
	Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetPainter();
	
protected:
	virtual bool __fastcall CanFade();
	virtual void __fastcall DrawFadeImage();
	virtual void __fastcall GetFadingImages(/* out */ Cxgraphics::TcxBitmap* &AFadeOutImage, /* out */ Cxgraphics::TcxBitmap* &AFadeInImage);
	
public:
	__fastcall virtual TcxCalcEditButtonFadingHelper(TcxCalcEditButtonViewInfo* AViewInfo);
	__property Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* Painter = {read=GetPainter};
	__property TcxCalcEditButtonViewInfo* ViewInfo = {read=FViewInfo};
public:
	/* TdxFadingObjectHelper.Destroy */ inline __fastcall virtual ~TcxCalcEditButtonFadingHelper() { }
	
};

#pragma pack(pop)

typedef System::StaticArray<TcxCalcEditButtonViewInfo*, 28> TcxCalcEditButtonsViewInfo;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCalculatorAccessibilityHelper : public Cxaccessibility::TcxAccessibilityHelper
{
	typedef Cxaccessibility::TcxAccessibilityHelper inherited;
	
private:
	TcxCalcEditButtonViewInfo* __fastcall GetButtons(int AIndex);
	TcxCustomCalculator* __fastcall GetCalculator();
	
protected:
	virtual bool __fastcall ChildIsSimpleElement(int AIndex);
	virtual void __fastcall DoDefaultAction(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetChildCount();
	virtual System::UnicodeString __fastcall GetDefaultActionDescription(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual System::UnicodeString __fastcall GetName(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual HWND __fastcall GetOwnerObjectWindow();
	virtual int __fastcall GetRole(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetState(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual Cxaccessibility::TcxAccessibleObjectProperties __fastcall GetSupportedProperties(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual bool __fastcall IsExtended();
	__property TcxCalcEditButtonViewInfo* Buttons[int AIndex] = {read=GetButtons};
	__property TcxCustomCalculator* Calculator = {read=GetCalculator};
	
public:
	virtual System::Types::TRect __fastcall GetScreenBounds(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
public:
	/* TcxAccessibilityHelper.Create */ inline __fastcall virtual TdxCalculatorAccessibilityHelper(System::TObject* AOwnerObject) : Cxaccessibility::TcxAccessibilityHelper(AOwnerObject) { }
	/* TcxAccessibilityHelper.Destroy */ inline __fastcall virtual ~TdxCalculatorAccessibilityHelper() { }
	
};

#pragma pack(pop)

typedef void __fastcall (__closure *TcxCalcButtonClick)(System::TObject* Sender, Cxlookandfeelpainters::TcxCalcButtonKind &ButtonKind);

typedef void __fastcall (__closure *TcxCalcGetEditValue)(System::TObject* Sender, System::UnicodeString &Value);

typedef void __fastcall (__closure *TcxCalcSetEditValue)(System::TObject* Sender, const System::UnicodeString Value);

class PASCALIMPLEMENTATION TcxCustomCalculator : public Cxcontrols::TcxControl
{
	typedef Cxcontrols::TcxControl inherited;
	
private:
	bool FAutoFontSize;
	bool FBeepOnError;
	Vcl::Forms::TFormBorderStyle FBorderStyle;
	bool FFocusRectVisible;
	int FCalcFontSize;
	int FCalcBtnWidth;
	int FCalcBtnHeight;
	int FCalcLargeBtnWidth;
	int FCalcXOffset;
	int FCalcYOffset;
	int FCalcWidth;
	int FCalcHeight;
	System::Extended FMemory;
	Cxlookandfeelpainters::TcxCalcButtonKind FOperator;
	System::Extended FOperand;
	System::Byte FPrecision;
	TcxCalcState FStatus;
	Cxlookandfeelpainters::TcxCalcButtonKind FActiveButton;
	TcxCalcEditButtonsViewInfo FButtons;
	Cxlookandfeelpainters::TcxCalcButtonKind FDownButton;
	Cxaccessibility::_di_IcxAccessibilityHelper FIAccessibilityHelper;
	Cxlookandfeelpainters::TcxCalcButtonKind FPressedButton;
	bool FTracking;
	System::Classes::TNotifyEvent FOnDisplayChange;
	TcxCalcButtonClick FOnButtonClick;
	System::Classes::TNotifyEvent FOnResult;
	Cxedit::TcxEditClosePopupEvent FOnHidePopup;
	System::Extended __fastcall GetDisplay();
	System::Extended __fastcall GetMemory();
	void __fastcall SetDisplay(System::Extended Value);
	void __fastcall SetActiveButton(Cxlookandfeelpainters::TcxCalcButtonKind AValue);
	void __fastcall SetAutoFontSize(bool Value);
	HIDESBASE void __fastcall SetBorderStyle(Vcl::Forms::TBorderStyle Value);
	void __fastcall SetFocusRectVisible(bool Value);
	void __fastcall StopTracking();
	void __fastcall TrackButton(int X, int Y);
	void __fastcall DoButtonDown(Cxlookandfeelpainters::TcxCalcButtonKind ButtonKind);
	void __fastcall DoButtonUp(Cxlookandfeelpainters::TcxCalcButtonKind ButtonKind);
	void __fastcall Error();
	void __fastcall CheckFirst();
	void __fastcall Clear();
	void __fastcall CalcSize(int AWidth, int AHeight);
	Cxaccessibility::_di_IcxAccessibilityHelper __fastcall GetIAccessibilityHelper();
	void __fastcall UpdateMemoryButtons();
	void __fastcall InvalidateMemoryButtons();
	void __fastcall ResetOperands();
	MESSAGE void __fastcall WMGetObject(Winapi::Messages::TMessage &Message);
	
protected:
	bool IsPopupControl;
	virtual Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetPainter();
	virtual void __fastcall Paint();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	DYNAMIC void __fastcall FontChanged();
	DYNAMIC void __fastcall FocusChanged();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseLeave(Vcl::Controls::TControl* AControl);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall Resize();
	virtual void __fastcall SetEnabled(bool Value);
	void __fastcall CreateLayout();
	void __fastcall ButtonClick(Cxlookandfeelpainters::TcxCalcButtonKind ButtonKind);
	void __fastcall UpdateButtonsState();
	virtual void __fastcall DrawBackground(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawButton(Cxgraphics::TcxCanvas* ACanvas, TcxCalcEditButtonViewInfo* AButtonInfo);
	virtual void __fastcall DrawButtons(Cxgraphics::TcxCanvas* ACanvas);
	virtual System::UnicodeString __fastcall GetEditorValue();
	virtual void __fastcall SetEditorValue(const System::UnicodeString Value);
	virtual void __fastcall HidePopup(Cxcontrols::TcxControl* Sender, Cxedit::TcxEditCloseUpReason AReason);
	virtual void __fastcall LockChanges(bool ALock, bool AInvokeChangedOnUnlock = true);
	__property TcxCalcEditButtonsViewInfo Buttons = {read=FButtons};
	__property Color = {default=-16777201};
	__property Cxaccessibility::_di_IcxAccessibilityHelper IAccessibilityHelper = {read=GetIAccessibilityHelper};
	__property ParentColor = {default=0};
	__property Vcl::Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=0};
	__property Cxlookandfeelpainters::TcxCalcButtonKind ActiveButton = {read=FActiveButton, write=SetActiveButton, nodefault};
	__property bool AutoFontSize = {read=FAutoFontSize, write=SetAutoFontSize, default=1};
	__property bool BeepOnError = {read=FBeepOnError, write=FBeepOnError, default=1};
	__property bool ShowFocusRect = {read=FFocusRectVisible, write=SetFocusRectVisible, default=1};
	__property System::Byte Precision = {read=FPrecision, write=FPrecision, default=15};
	__property System::UnicodeString EditorValue = {read=GetEditorValue, write=SetEditorValue};
	__property Cxedit::TcxEditClosePopupEvent OnHidePopup = {read=FOnHidePopup, write=FOnHidePopup};
	__property System::Classes::TNotifyEvent OnDisplayChange = {read=FOnDisplayChange, write=FOnDisplayChange};
	__property TcxCalcButtonClick OnButtonClick = {read=FOnButtonClick, write=FOnButtonClick};
	__property System::Classes::TNotifyEvent OnResult = {read=FOnResult, write=FOnResult};
	
public:
	__fastcall virtual TcxCustomCalculator(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TcxCustomCalculator();
	Cxlookandfeelpainters::TcxCalcButtonKind __fastcall GetButtonKindAt(int X, int Y);
	Cxlookandfeelpainters::TcxCalcButtonKind __fastcall GetButtonKindChar(System::WideChar Ch);
	Cxlookandfeelpainters::TcxCalcButtonKind __fastcall GetButtonKindKey(System::Word Key, System::Classes::TShiftState Shift);
	void __fastcall CopyToClipboard();
	void __fastcall PasteFromClipboard();
	__property System::Extended Memory = {read=GetMemory};
	__property System::Extended Value = {read=GetDisplay, write=SetDisplay};
	
__published:
	__property TabStop = {default=1};
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomCalculator(HWND ParentWindow) : Cxcontrols::TcxControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxPopupCalculator : public TcxCustomCalculator
{
	typedef TcxCustomCalculator inherited;
	
private:
	TcxCustomCalcEdit* FEdit;
	
protected:
	virtual System::UnicodeString __fastcall GetEditorValue();
	virtual Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetPainter();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall SetEditorValue(const System::UnicodeString Value);
	virtual void __fastcall LockChanges(bool ALock, bool AInvokeChangedOnUnlock = true);
	__property TcxCustomCalcEdit* Edit = {read=FEdit, write=FEdit};
	
public:
	__fastcall virtual TcxPopupCalculator(System::Classes::TComponent* AOwner);
	virtual void __fastcall Init();
public:
	/* TcxCustomCalculator.Destroy */ inline __fastcall virtual ~TcxPopupCalculator() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxPopupCalculator(HWND ParentWindow) : TcxCustomCalculator(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCalcEditPropertiesValues : public Cxtextedit::TcxTextEditPropertiesValues
{
	typedef Cxtextedit::TcxTextEditPropertiesValues inherited;
	
private:
	bool FPrecision;
	void __fastcall SetPrecision(bool Value);
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall RestoreDefaults();
	
__published:
	__property bool Precision = {read=FPrecision, write=SetPrecision, stored=false, nodefault};
public:
	/* TcxCustomEditPropertiesValues.Create */ inline __fastcall virtual TcxCalcEditPropertiesValues(System::Classes::TPersistent* AOwner) : Cxtextedit::TcxTextEditPropertiesValues(AOwner) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxCalcEditPropertiesValues() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxCustomCalcEditProperties : public Cxdropdownedit::TcxCustomPopupEditProperties
{
	typedef Cxdropdownedit::TcxCustomPopupEditProperties inherited;
	
private:
	bool FBeepOnError;
	System::Byte FPrecision;
	bool FQuickClose;
	bool FScientificFormat;
	bool FUseThousandSeparator;
	HIDESBASE TcxCalcEditPropertiesValues* __fastcall GetAssignedValues();
	System::Byte __fastcall GetPrecision();
	System::Byte __fastcall GetRealPrecision();
	bool __fastcall IsPrecisionStored();
	HIDESBASE void __fastcall SetAssignedValues(TcxCalcEditPropertiesValues* Value);
	void __fastcall SetBeepOnError(bool Value);
	void __fastcall SetPrecision(System::Byte Value);
	void __fastcall SetQuickClose(bool Value);
	void __fastcall SetScientificFormat(bool Value);
	void __fastcall SetUseThousandSeparator(bool Value);
	
protected:
	virtual void __fastcall DoAssign(Cxedit::TcxCustomEditProperties* AProperties);
	virtual bool __fastcall GetAlwaysPostEditValue();
	__classmethod virtual Cxedit::TcxCustomEditPropertiesValuesClass __fastcall GetAssignedValuesClass();
	virtual bool __fastcall HasDigitGrouping(bool AIsDisplayValueSynchronizing);
	virtual bool __fastcall PopupWindowAcceptsAnySize();
	__property TcxCalcEditPropertiesValues* AssignedValues = {read=GetAssignedValues, write=SetAssignedValues};
	
public:
	__fastcall virtual TcxCustomCalcEditProperties(System::Classes::TPersistent* AOwner);
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	virtual Cxdatautils::TcxDataEditValueSource __fastcall GetEditValueSource(bool AEditFocused);
	virtual bool __fastcall IsDisplayValueValid(System::Variant &DisplayValue, bool AEditFocused);
	virtual bool __fastcall IsEditValueValid(System::Variant &AEditValue, bool AEditFocused);
	virtual void __fastcall DoPrepareDisplayValue(const System::Variant &AEditValue, System::Variant &ADisplayValue, bool AEditFocused);
	__property bool BeepOnError = {read=FBeepOnError, write=SetBeepOnError, default=1};
	__property ImmediateDropDownWhenKeyPressed = {default=0};
	__property System::Byte Precision = {read=GetPrecision, write=SetPrecision, stored=IsPrecisionStored, nodefault};
	__property bool QuickClose = {read=FQuickClose, write=SetQuickClose, default=0};
	__property bool ScientificFormat = {read=FScientificFormat, write=SetScientificFormat, default=0};
	__property bool UseThousandSeparator = {read=FUseThousandSeparator, write=SetUseThousandSeparator, default=0};
public:
	/* TcxCustomDropDownEditProperties.Destroy */ inline __fastcall virtual ~TcxCustomCalcEditProperties() { }
	
};


class PASCALIMPLEMENTATION TcxCalcEditProperties : public TcxCustomCalcEditProperties
{
	typedef TcxCustomCalcEditProperties inherited;
	
__published:
	__property Alignment;
	__property AssignedValues;
	__property AutoSelect = {default=1};
	__property BeepOnError = {default=1};
	__property ButtonGlyph;
	__property ClearKey = {default=0};
	__property DisplayFormat = {default=0};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property ImmediateDropDownWhenActivated = {default=0};
	__property ImmediateDropDownWhenKeyPressed = {default=0};
	__property ImmediatePost = {default=0};
	__property Nullstring = {default=0};
	__property Precision;
	__property ReadOnly;
	__property QuickClose = {default=0};
	__property ScientificFormat = {default=0};
	__property UseLeftAlignmentOnEditing;
	__property UseNullString = {default=0};
	__property UseThousandSeparator = {default=0};
	__property ValidateOnEnter = {default=1};
	__property ValidationErrorIconAlignment = {default=0};
	__property ValidationOptions = {default=1};
	__property OnChange;
	__property OnCloseUp;
	__property OnEditValueChanged;
	__property OnInitPopup;
	__property OnPopup;
	__property OnValidate;
public:
	/* TcxCustomCalcEditProperties.Create */ inline __fastcall virtual TcxCalcEditProperties(System::Classes::TPersistent* AOwner) : TcxCustomCalcEditProperties(AOwner) { }
	
public:
	/* TcxCustomDropDownEditProperties.Destroy */ inline __fastcall virtual ~TcxCalcEditProperties() { }
	
};


class PASCALIMPLEMENTATION TcxCustomCalcEdit : public Cxdropdownedit::TcxCustomPopupEdit
{
	typedef Cxdropdownedit::TcxCustomPopupEdit inherited;
	
private:
	TcxPopupCalculator* FCalculator;
	HIDESBASE TcxCustomCalcEditProperties* __fastcall GetProperties();
	HIDESBASE TcxCustomCalcEditProperties* __fastcall GetActiveProperties();
	double __fastcall GetValue();
	HIDESBASE void __fastcall SetProperties(TcxCustomCalcEditProperties* Value);
	void __fastcall SetValue(const double Value);
	
protected:
	virtual void __fastcall FormatChanged();
	virtual bool __fastcall CanDropDown();
	virtual void __fastcall CreatePopupWindow();
	DYNAMIC void __fastcall DoEnter();
	DYNAMIC void __fastcall DoExit();
	virtual void __fastcall DoInitPopup();
	virtual void __fastcall Initialize();
	virtual void __fastcall InitializePopupWindow();
	virtual System::Variant __fastcall InternalGetEditingValue();
	virtual bool __fastcall IsValidChar(System::WideChar Key);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall PopupWindowClosed(System::TObject* Sender);
	DYNAMIC void __fastcall PopupWindowShowed(System::TObject* Sender);
	virtual void __fastcall PropertiesChanged(System::TObject* Sender);
	bool __fastcall InternalPrepareEditValue(const System::UnicodeString ADisplayValue, /* out */ System::Variant &EditValue);
	__property TcxPopupCalculator* Calculator = {read=FCalculator};
	
public:
	__fastcall virtual ~TcxCustomCalcEdit();
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	virtual void __fastcall PasteFromClipboard();
	virtual void __fastcall PrepareEditValue(const System::Variant &ADisplayValue, /* out */ System::Variant &EditValue, bool AEditFocused);
	__property TcxCustomCalcEditProperties* ActiveProperties = {read=GetActiveProperties};
	__property TcxCustomCalcEditProperties* Properties = {read=GetProperties, write=SetProperties};
	__property double Value = {read=GetValue, write=SetValue, stored=false};
public:
	/* TcxCustomMaskEdit.Create */ inline __fastcall virtual TcxCustomCalcEdit(System::Classes::TComponent* AOwner)/* overload */ : Cxdropdownedit::TcxCustomPopupEdit(AOwner) { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxCustomCalcEdit(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Cxdropdownedit::TcxCustomPopupEdit(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomCalcEdit(HWND ParentWindow) : Cxdropdownedit::TcxCustomPopupEdit(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxCalcEdit : public TcxCustomCalcEdit
{
	typedef TcxCustomCalcEdit inherited;
	
private:
	HIDESBASE TcxCalcEditProperties* __fastcall GetActiveProperties();
	HIDESBASE TcxCalcEditProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(TcxCalcEditProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TcxCalcEditProperties* ActiveProperties = {read=GetActiveProperties};
	
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
	__property TcxCalcEditProperties* Properties = {read=GetProperties, write=SetProperties};
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
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDrag;
	__property BiDiMode;
	__property ParentBiDiMode = {default=1};
	__property OnEndDock;
	__property OnStartDock;
public:
	/* TcxCustomCalcEdit.Destroy */ inline __fastcall virtual ~TcxCalcEdit() { }
	
public:
	/* TcxCustomMaskEdit.Create */ inline __fastcall virtual TcxCalcEdit(System::Classes::TComponent* AOwner)/* overload */ : TcxCustomCalcEdit(AOwner) { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxCalcEdit(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : TcxCustomCalcEdit(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCalcEdit(HWND ParentWindow) : TcxCustomCalcEdit(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxFilterCalcEditHelper : public Cxdropdownedit::TcxFilterDropDownEditHelper
{
	typedef Cxdropdownedit::TcxFilterDropDownEditHelper inherited;
	
public:
	__classmethod virtual Cxedit::TcxCustomEditClass __fastcall GetFilterEditClass();
	__classmethod virtual Cxfiltercontrolutils::TcxFilterControlOperators __fastcall GetSupportedFilterOperators(Cxedit::TcxCustomEditProperties* AProperties, Cxdatastorage::TcxValueTypeClass AValueTypeClass, bool AExtendedSet = false);
	__classmethod virtual void __fastcall InitializeProperties(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditProperties* AEditProperties, bool AHasButtons);
public:
	/* TObject.Create */ inline __fastcall TcxFilterCalcEditHelper() : Cxdropdownedit::TcxFilterDropDownEditHelper() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxFilterCalcEditHelper() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 cxMaxCalcPrecision = System::Int8(0xf);
static const System::Int8 cxDefCalcPrecision = System::Int8(0xf);
static const System::Int8 cxMinCalcFontSize = System::Int8(0x8);
static const System::Int8 cxCalcMinBoldFontSize = System::Int8(0xa);
static const System::Int8 cxMinCalcBtnWidth = System::Int8(0x1c);
static const System::Int8 cxMinCalcBtnHeight = System::Int8(0x16);
static const int cxMinCalcLargeBtnWidth = int(47);
static const System::Int8 cxMinCalcXOfs = System::Int8(0x3);
static const System::Int8 cxMinCalcYOfs = System::Int8(0x3);
static const System::Byte cxMinCalcWidth = System::Byte(0xc6);
static const System::Byte cxMinCalcHeight = System::Byte(0x83);
extern DELPHI_PACKAGE Cxcalc__1 BtnCaptions;
}	/* namespace Cxcalc */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXCALC)
using namespace Cxcalc;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxcalcHPP
