// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxMemo.pas' rev: 35.00 (Windows)

#ifndef CxmemoHPP
#define CxmemoHPP

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
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.StdCtrls.hpp>
#include <System.SysUtils.hpp>
#include <dxCore.hpp>
#include <dxCoreClasses.hpp>
#include <cxClasses.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxContainer.hpp>
#include <cxControls.hpp>
#include <cxDataStorage.hpp>
#include <cxDataUtils.hpp>
#include <cxEdit.hpp>
#include <cxDrawTextUtils.hpp>
#include <cxGraphics.hpp>
#include <cxLookAndFeels.hpp>
#include <cxTextEdit.hpp>
#include <cxFilterControlUtils.hpp>
#include <cxGeometry.hpp>
#include <dxTypeHelpers.hpp>
#include <cxAccessibility.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxmemo
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IcxInnerMemo;
typedef System::DelphiInterface<IcxInnerMemo> _di_IcxInnerMemo;
class DELPHICLASS TcxCustomMemoViewInfo;
class DELPHICLASS TcxCustomMemoViewData;
class DELPHICLASS TcxCustomMemoProperties;
class DELPHICLASS TcxMemoProperties;
class DELPHICLASS TcxCustomMemo;
class DELPHICLASS TcxMemo;
class DELPHICLASS TcxFilterMemoHelper;
class DELPHICLASS TcxCustomInnerMemoHelper;
struct TcxMultiLineEditCharPosition;
struct TcxInnerMemoSelectionState;
class DELPHICLASS TdxCustomInnerMemoAccessibilityHelper;
class DELPHICLASS TcxCustomInnerMemo;
class DELPHICLASS TcxAutoHeightInplaceEditViewData;
class DELPHICLASS TcxAutoHeightInplaceEditViewInfo;
class DELPHICLASS TcxAutoHeightInplaceEditProperties;
class DELPHICLASS TcxAutoHeightInplaceEditInnerMemo;
class DELPHICLASS TcxAutoHeightInplaceEdit;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{9D0DFE35-58DC-4C0C-9C98-65C5AAD757C9}") IcxInnerMemo  : public Cxtextedit::IcxInnerTextEdit 
{
	virtual System::Types::TPoint __fastcall GetCaretPos() = 0 ;
	virtual System::Classes::TStrings* __fastcall GetLines() = 0 ;
	virtual System::Uitypes::TScrollStyle __fastcall GetScrollBars() = 0 ;
	virtual bool __fastcall GetWantReturns() = 0 ;
	virtual bool __fastcall GetWantTabs() = 0 ;
	virtual bool __fastcall GetWordWrap() = 0 ;
	virtual void __fastcall SetCaretPos(const System::Types::TPoint &Value) = 0 ;
	virtual void __fastcall SetScrollBars(System::Uitypes::TScrollStyle Value) = 0 ;
	virtual void __fastcall SetWantReturns(bool Value) = 0 ;
	virtual void __fastcall SetWantTabs(bool Value) = 0 ;
	virtual void __fastcall SetWordWrap(bool Value) = 0 ;
	__property System::Types::TPoint CaretPos = {read=GetCaretPos, write=SetCaretPos};
	__property System::Classes::TStrings* Lines = {read=GetLines};
	__property System::Uitypes::TScrollStyle ScrollBars = {read=GetScrollBars, write=SetScrollBars};
	__property bool WantReturns = {read=GetWantReturns, write=SetWantReturns};
	__property bool WantTabs = {read=GetWantTabs, write=SetWantTabs};
	__property bool WordWrap = {read=GetWordWrap, write=SetWordWrap};
};

class PASCALIMPLEMENTATION TcxCustomMemoViewInfo : public Cxtextedit::TcxCustomTextEditViewInfo
{
	typedef Cxtextedit::TcxCustomTextEditViewInfo inherited;
	
public:
	virtual void __fastcall DrawText(Cxgraphics::TcxCanvas* ACanvas);
public:
	/* TcxCustomTextEditViewInfo.Destroy */ inline __fastcall virtual ~TcxCustomMemoViewInfo() { }
	
public:
	/* TcxCustomEditViewInfo.Create */ inline __fastcall virtual TcxCustomMemoViewInfo() : Cxtextedit::TcxCustomTextEditViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCustomMemoViewData : public Cxtextedit::TcxCustomTextEditViewData
{
	typedef Cxtextedit::TcxCustomTextEditViewData inherited;
	
private:
	HIDESBASE TcxCustomMemoProperties* __fastcall GetProperties();
	
protected:
	virtual int __fastcall GetMaxLineCount();
	virtual System::Types::TSize __fastcall InternalGetEditConstantPartSize(Cxgraphics::TcxCanvas* ACanvas, bool AIsInplace, const Cxedit::TcxEditSizeProperties &AEditSizeProperties, System::Types::TSize &MinContentSize, Cxedit::TcxCustomEditViewInfo* AViewInfo);
	virtual System::Types::TSize __fastcall InternalGetEditContentSize(Cxgraphics::TcxCanvas* ACanvas, const System::Variant &AEditValue, const Cxedit::TcxEditSizeProperties &AEditSizeProperties);
	
public:
	virtual unsigned __fastcall GetDrawTextFlags();
	virtual System::Types::TRect __fastcall GetDrawTextOffset();
	virtual System::Types::TSize __fastcall GetEditContentSizeCorrection();
	virtual System::Types::TSize __fastcall GetEditingContentSize(Cxgraphics::TcxCanvas* ACanvas, const System::Variant &AEditValue, const Cxedit::TcxEditSizeProperties &AEditSizeProperties);
	__property TcxCustomMemoProperties* Properties = {read=GetProperties};
public:
	/* TcxCustomEditViewData.Create */ inline __fastcall virtual TcxCustomMemoViewData(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditStyle* AStyle, bool AIsInplace) : Cxtextedit::TcxCustomTextEditViewData(AProperties, AStyle, AIsInplace) { }
	/* TcxCustomEditViewData.Destroy */ inline __fastcall virtual ~TcxCustomMemoViewData() { }
	
};


class PASCALIMPLEMENTATION TcxCustomMemoProperties : public Cxtextedit::TcxCustomTextEditProperties
{
	typedef Cxtextedit::TcxCustomTextEditProperties inherited;
	
private:
	System::Uitypes::TScrollStyle FScrollBars;
	int FVisibleLineCount;
	bool FWantReturns;
	bool FWantTabs;
	bool FWordWrap;
	System::Classes::TAlignment __fastcall GetAlignment();
	HIDESBASE bool __fastcall IsAlignmentStored();
	void __fastcall SetAlignment(System::Classes::TAlignment Value);
	void __fastcall SetScrollBars(System::Uitypes::TScrollStyle Value);
	void __fastcall SetVisibleLineCount(int Value);
	void __fastcall SetWantReturns(bool Value);
	void __fastcall SetWantTabs(bool Value);
	void __fastcall SetWordWrap(bool Value);
	
protected:
	virtual void __fastcall DoAssign(Cxedit::TcxCustomEditProperties* AProperties);
	__classmethod virtual Cxedit::TcxCustomEditViewDataClass __fastcall GetViewDataClass();
	virtual bool __fastcall InnerEditNeedsTabs();
	virtual bool __fastcall IsMultiLine();
	
public:
	__fastcall virtual TcxCustomMemoProperties(System::Classes::TPersistent* AOwner);
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	virtual System::UnicodeString __fastcall GetDisplayText(const System::Variant &AEditValue, bool AFullText = false, bool AIsInplace = true);
	virtual Cxdatautils::TcxDataEditValueSource __fastcall GetEditValueSource(bool AEditFocused);
	virtual Cxedit::TcxEditSpecialFeatures __fastcall GetSpecialFeatures();
	virtual Cxedit::TcxEditSupportedOperations __fastcall GetSupportedOperations();
	__classmethod virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
	__property System::Classes::TAlignment Alignment = {read=GetAlignment, write=SetAlignment, stored=IsAlignmentStored, nodefault};
	__property AutoSelect = {default=0};
	__property System::Uitypes::TScrollStyle ScrollBars = {read=FScrollBars, write=SetScrollBars, default=0};
	__property int VisibleLineCount = {read=FVisibleLineCount, write=SetVisibleLineCount, default=0};
	__property bool WantReturns = {read=FWantReturns, write=SetWantReturns, default=1};
	__property bool WantTabs = {read=FWantTabs, write=SetWantTabs, default=0};
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, default=1};
public:
	/* TcxCustomTextEditProperties.Destroy */ inline __fastcall virtual ~TcxCustomMemoProperties() { }
	
};


class PASCALIMPLEMENTATION TcxMemoProperties : public TcxCustomMemoProperties
{
	typedef TcxCustomMemoProperties inherited;
	
__published:
	__property Alignment;
	__property AssignedValues;
	__property AutoSelect = {default=0};
	__property CharCase = {default=0};
	__property ClearKey = {default=0};
	__property HideSelection = {default=1};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property MaxLength;
	__property OEMConvert = {default=0};
	__property ReadOnly;
	__property ScrollBars = {default=0};
	__property ValidationErrorIconAlignment = {default=0};
	__property ValidationOptions = {default=1};
	__property VisibleLineCount = {default=0};
	__property WantReturns = {default=1};
	__property WantTabs = {default=0};
	__property WordWrap = {default=1};
	__property OnChange;
	__property OnEditValueChanged;
	__property OnValidate;
public:
	/* TcxCustomMemoProperties.Create */ inline __fastcall virtual TcxMemoProperties(System::Classes::TPersistent* AOwner) : TcxCustomMemoProperties(AOwner) { }
	
public:
	/* TcxCustomTextEditProperties.Destroy */ inline __fastcall virtual ~TcxMemoProperties() { }
	
};


class PASCALIMPLEMENTATION TcxCustomMemo : public Cxtextedit::TcxCustomTextEdit
{
	typedef Cxtextedit::TcxCustomTextEdit inherited;
	
private:
	bool FInternalAction;
	HIDESBASE TcxCustomMemoProperties* __fastcall GetActiveProperties();
	System::Types::TPoint __fastcall GetCaretPos();
	System::Classes::TStrings* __fastcall GetLines();
	_di_IcxInnerMemo __fastcall GetInnerMemo();
	HIDESBASE TcxCustomMemoProperties* __fastcall GetProperties();
	void __fastcall SetCaretPos(const System::Types::TPoint &Value);
	void __fastcall SetLines(System::Classes::TStrings* Value);
	HIDESBASE void __fastcall SetProperties(TcxCustomMemoProperties* Value);
	HIDESBASE MESSAGE void __fastcall WMCommand(Winapi::Messages::TWMCommand &Message);
	
protected:
	virtual void __fastcall AdjustInnerEdit();
	virtual void __fastcall AdjustInnerEditPosition();
	virtual bool __fastcall AllowTouchScrollUIMode();
	virtual bool __fastcall CanAutoSize();
	virtual bool __fastcall CanKeyPressModifyEdit(System::WideChar Key);
	virtual bool __fastcall CanScrollLineWithoutScrollBars(Cxclasses::TcxDirection ADirection);
	virtual void __fastcall ChangeHandler(System::TObject* Sender);
	virtual void __fastcall DoEditKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall EnabledChanged();
	DYNAMIC void __fastcall FontChanged();
	virtual Vcl::Controls::TControlClass __fastcall GetInnerEditClass();
	virtual void __fastcall Initialize();
	virtual void __fastcall InitializeViewData(Cxedit::TcxCustomEditViewData* AViewData);
	virtual bool __fastcall SupportsSpelling();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall LookAndFeelChanged(Cxlookandfeels::TcxLookAndFeel* Sender, Cxlookandfeels::TcxLookAndFeelValues AChangedValues);
	virtual bool __fastcall NeedsScrollBars();
	virtual void __fastcall PrepareForInplaceActivation();
	virtual void __fastcall PropertiesChanged(System::TObject* Sender);
	virtual void __fastcall ReadState(System::Classes::TReader* Reader);
	virtual void __fastcall Scroll(Vcl::Forms::TScrollBarKind AScrollBarKind, System::Uitypes::TScrollCode AScrollCode, int &AScrollPos);
	virtual bool __fastcall SendActivationKey(System::WideChar Key);
	virtual void __fastcall SetSelText(const Vcl::Controls::TCaption Value);
	virtual bool __fastcall TabsNeeded();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual bool __fastcall CanMemoKeyModifyEdit(System::Word Key, System::Classes::TShiftState Shift, bool AIsKeyPress);
	void __fastcall InternalSynchronizeEditValue();
	__property _di_IcxInnerMemo InnerMemo = {read=GetInnerMemo};
	
public:
	virtual void __fastcall ClearSelection();
	virtual void __fastcall CutToClipboard();
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	virtual bool __fastcall IsEditClass();
	__property TcxCustomMemoProperties* ActiveProperties = {read=GetActiveProperties};
	__property System::Types::TPoint CaretPos = {read=GetCaretPos, write=SetCaretPos};
	__property System::Classes::TStrings* Lines = {read=GetLines, write=SetLines};
	__property TcxCustomMemoProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxCustomTextEdit.Create */ inline __fastcall virtual TcxCustomMemo(System::Classes::TComponent* AOwner)/* overload */ : Cxtextedit::TcxCustomTextEdit(AOwner) { }
	/* TcxCustomTextEdit.Destroy */ inline __fastcall virtual ~TcxCustomMemo() { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxCustomMemo(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Cxtextedit::TcxCustomTextEdit(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomMemo(HWND ParentWindow) : Cxtextedit::TcxCustomTextEdit(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxMemo : public TcxCustomMemo
{
	typedef TcxCustomMemo inherited;
	
private:
	HIDESBASE TcxMemoProperties* __fastcall GetActiveProperties();
	HIDESBASE TcxMemoProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(TcxMemoProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TcxMemoProperties* ActiveProperties = {read=GetActiveProperties};
	
__published:
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Lines;
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property TcxMemoProperties* Properties = {read=GetProperties, write=SetProperties};
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
	/* TcxCustomTextEdit.Create */ inline __fastcall virtual TcxMemo(System::Classes::TComponent* AOwner)/* overload */ : TcxCustomMemo(AOwner) { }
	/* TcxCustomTextEdit.Destroy */ inline __fastcall virtual ~TcxMemo() { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxMemo(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : TcxCustomMemo(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxMemo(HWND ParentWindow) : TcxCustomMemo(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxFilterMemoHelper : public Cxtextedit::TcxFilterTextEditHelper
{
	typedef Cxtextedit::TcxFilterTextEditHelper inherited;
	
public:
	__classmethod virtual Cxfiltercontrolutils::TcxFilterControlOperators __fastcall GetSupportedFilterOperators(Cxedit::TcxCustomEditProperties* AProperties, Cxdatastorage::TcxValueTypeClass AValueTypeClass, bool AExtendedSet = false);
public:
	/* TObject.Create */ inline __fastcall TcxFilterMemoHelper() : Cxtextedit::TcxFilterTextEditHelper() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxFilterMemoHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomInnerMemoHelper : public Dxcoreclasses::TcxInterfacedPersistent
{
	typedef Dxcoreclasses::TcxInterfacedPersistent inherited;
	
private:
	TcxCustomInnerMemo* FEdit;
	
protected:
	__property TcxCustomInnerMemo* Edit = {read=FEdit};
	
public:
	__fastcall virtual TcxCustomInnerMemoHelper(TcxCustomInnerMemo* AEdit);
	Cxcontainer::TcxContainer* __fastcall GetControlContainer();
	Vcl::Controls::TWinControl* __fastcall GetControl();
	NativeInt __fastcall CallDefWndProc(unsigned AMsg, NativeUInt WParam, NativeInt LParam);
	bool __fastcall CanProcessClipboardMessages();
	System::Variant __fastcall GetEditValue();
	Cxaccessibility::_di_IcxAccessibilityHelper __fastcall GetIAccessibilityHelper();
	System::Classes::TNotifyEvent __fastcall GetOnChange();
	void __fastcall LockBounds(bool ALock);
	void __fastcall SafelySetFocus();
	void __fastcall SetEditValue(const System::Variant &AValue);
	void __fastcall SetParent(Vcl::Controls::TWinControl* Value);
	void __fastcall SetOnChange(System::Classes::TNotifyEvent Value);
	void __fastcall ClearSelection();
	void __fastcall CopyToClipboard();
	System::Classes::TAlignment __fastcall GetAlignment();
	bool __fastcall GetAutoSelect();
	System::Uitypes::TEditCharCase __fastcall GetCharCase();
	Cxtextedit::TcxEditEchoMode __fastcall GetEchoMode();
	int __fastcall GetFirstVisibleCharIndex();
	bool __fastcall GetHideSelection();
	System::WideChar __fastcall GetImeLastChar();
	Vcl::Controls::TImeMode __fastcall GetImeMode();
	Vcl::Controls::TImeName __fastcall GetImeName();
	bool __fastcall GetInternalUpdating();
	int __fastcall GetMaxLength();
	bool __fastcall GetMultiLine();
	bool __fastcall GetOEMConvert();
	System::Classes::TNotifyEvent __fastcall GetOnSelChange();
	System::WideChar __fastcall GetPasswordChar();
	bool __fastcall GetReadOnly();
	int __fastcall GetSelLength();
	int __fastcall GetSelStart();
	System::UnicodeString __fastcall GetSelText();
	bool __fastcall GetUseLeftAlignmentOnEditing();
	void __fastcall SelectAll();
	void __fastcall SetAlignment(System::Classes::TAlignment AValue);
	void __fastcall SetAutoSelect(bool AValue);
	void __fastcall SetCharCase(System::Uitypes::TEditCharCase AValue);
	void __fastcall SetEchoMode(Cxtextedit::TcxEditEchoMode AValue);
	void __fastcall SetHideSelection(bool AValue);
	void __fastcall SetImeMode(Vcl::Controls::TImeMode AValue);
	void __fastcall SetImeName(const Vcl::Controls::TImeName AValue);
	void __fastcall SetInternalUpdating(bool Value);
	void __fastcall SetMaxLength(int Value);
	void __fastcall SetOEMConvert(bool Value);
	void __fastcall SetOnSelChange(System::Classes::TNotifyEvent Value);
	void __fastcall SetPasswordChar(System::WideChar Value);
	void __fastcall SetReadOnly(bool Value);
	void __fastcall SetSelLength(int Value);
	void __fastcall SetSelStart(int AValue);
	void __fastcall SetSelText(System::UnicodeString Value);
	void __fastcall SetUseLeftAlignmentOnEditing(bool Value);
	System::UnicodeString __fastcall GetTextHint();
	void __fastcall SetTextHint(System::UnicodeString Value);
	System::Types::TPoint __fastcall GetCaretPos();
	System::Classes::TStrings* __fastcall GetLines();
	System::Uitypes::TScrollStyle __fastcall GetScrollBars();
	bool __fastcall GetWantReturns();
	bool __fastcall GetWantTabs();
	bool __fastcall GetWordWrap();
	void __fastcall SetCaretPos(const System::Types::TPoint &Value);
	void __fastcall SetScrollBars(System::Uitypes::TScrollStyle Value);
	void __fastcall SetWantReturns(bool Value);
	void __fastcall SetWantTabs(bool Value);
	void __fastcall SetWordWrap(bool Value);
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxCustomInnerMemoHelper() { }
	
private:
	void *__IcxInnerMemo;	// IcxInnerMemo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {9D0DFE35-58DC-4C0C-9C98-65C5AAD757C9}
	operator _di_IcxInnerMemo()
	{
		_di_IcxInnerMemo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IcxInnerMemo*(void) { return (IcxInnerMemo*)&__IcxInnerMemo; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {263EBB8D-1EA9-4CAC-8367-ADD74D2A9651}
	operator Cxtextedit::_di_IcxInnerTextEdit()
	{
		Cxtextedit::_di_IcxInnerTextEdit intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxtextedit::IcxInnerTextEdit*(void) { return (Cxtextedit::IcxInnerTextEdit*)&__IcxInnerMemo; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {468D21B5-48AA-4077-8ED5-4C6112D460B1}
	operator Cxedit::_di_IcxCustomInnerEdit()
	{
		Cxedit::_di_IcxCustomInnerEdit intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxedit::IcxCustomInnerEdit*(void) { return (Cxedit::IcxCustomInnerEdit*)&__IcxInnerMemo; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {1B111318-D9C9-4C35-9EFF-5D95793C0106}
	operator Cxcontainer::_di_IcxContainerInnerControl()
	{
		Cxcontainer::_di_IcxContainerInnerControl intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxcontainer::IcxContainerInnerControl*(void) { return (Cxcontainer::IcxContainerInnerControl*)&__IcxInnerMemo; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,1)
struct DECLSPEC_DRECORD TcxMultiLineEditCharPosition
{
public:
	int Line;
	int Col;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TcxInnerMemoSelectionState
{
public:
	TcxMultiLineEditCharPosition CursorPosition;
	TcxMultiLineEditCharPosition SelectionStart;
	TcxMultiLineEditCharPosition SelectionEnd;
};
#pragma pack(pop)


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomInnerMemoAccessibilityHelper : public Cxtextedit::TdxCustomInnerTextEditAccessibilityHelper
{
	typedef Cxtextedit::TdxCustomInnerTextEditAccessibilityHelper inherited;
	
public:
	/* TcxAccessibilityHelper.Create */ inline __fastcall virtual TdxCustomInnerMemoAccessibilityHelper(System::TObject* AOwnerObject) : Cxtextedit::TdxCustomInnerTextEditAccessibilityHelper(AOwnerObject) { }
	/* TcxAccessibilityHelper.Destroy */ inline __fastcall virtual ~TdxCustomInnerMemoAccessibilityHelper() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxCustomInnerMemo : public Vcl::Stdctrls::TMemo
{
	typedef Vcl::Stdctrls::TMemo inherited;
	
private:
	bool FAutoSelect;
	Cxtextedit::TcxEditEchoMode FEchoMode;
	bool FEscapePressed;
	TcxCustomInnerMemoHelper* FHelper;
	Cxaccessibility::_di_IcxAccessibilityHelper FIAccessibilityHelper;
	int FInternalTextSettingCount;
	bool FInternalUpdating;
	bool FIsCreating;
	int FLockBoundsCount;
	Cxcontrols::TdxTouchScrollUIActivityHelper* FScrollUIActivityHelper;
	System::Classes::TNotifyEvent FOnSelChange;
	void __fastcall BeginInternalTextSetting();
	void __fastcall EndInternalTextSetting();
	bool __fastcall IsInternalTextSetting();
	TcxCustomMemo* __fastcall GetContainer();
	Cxaccessibility::_di_IcxAccessibilityHelper __fastcall GetIAccessibilityHelper();
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CNKeyDown(Winapi::Messages::TWMKey &Message);
	MESSAGE void __fastcall EMReplaceSel(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall EMSetSel(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMClear(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	MESSAGE void __fastcall WMGetObject(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMIMEComposition(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMNCCalcSize(Winapi::Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TWMNCPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFont(Winapi::Messages::TWMSetFont &Message);
	MESSAGE void __fastcall WMSetText(Winapi::Messages::TWMSetText &Message);
	HIDESBASE MESSAGE void __fastcall WMHScroll(Winapi::Messages::TWMScroll &Message);
	HIDESBASE MESSAGE void __fastcall WMVScroll(Winapi::Messages::TWMScroll &Message);
	HIDESBASE MESSAGE void __fastcall WMWindowPosChanged(Winapi::Messages::TWMWindowPosMsg &Message);
	
protected:
	DYNAMIC void __fastcall Click();
	DYNAMIC void __fastcall DblClick();
	DYNAMIC void __fastcall DoEnter();
	virtual void __fastcall DoGetGestureOptions(Vcl::Controls::TInteractiveGestures &Gestures, Vcl::Controls::TInteractiveGestureOptions &Options);
	DYNAMIC void __fastcall DragOver(System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseLeave(Vcl::Controls::TControl* AControl);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall CreateHandle();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWindowHandle(const Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall UpdateEditMargins();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	HIDESBASE Vcl::Controls::TWinControl* __fastcall GetControl();
	Cxcontainer::TcxContainer* __fastcall GetControlContainer();
	Cxedit::_di_IcxCustomInnerEdit __fastcall GetHelper();
	bool __fastcall AllowDrawEdgesAndBorders();
	virtual Cxtextedit::TdxCustomInnerTextEditAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	__property bool AutoSelect = {read=FAutoSelect, write=FAutoSelect, default=0};
	__property TcxCustomMemo* Container = {read=GetContainer};
	__property TcxCustomInnerMemoHelper* Helper = {read=FHelper};
	__property Cxaccessibility::_di_IcxAccessibilityHelper IAccessibilityHelper = {read=GetIAccessibilityHelper};
	
public:
	__fastcall virtual TcxCustomInnerMemo(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TcxCustomInnerMemo();
	DYNAMIC void __fastcall DragDrop(System::TObject* Source, int X, int Y);
	DYNAMIC bool __fastcall ExecuteAction(System::Classes::TBasicAction* Action);
	virtual bool __fastcall UpdateAction(System::Classes::TBasicAction* Action);
	DYNAMIC bool __fastcall CanFocus();
	virtual void __fastcall DefaultHandler(void *Message);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	__property CharCase = {default=0};
	__property System::Classes::TNotifyEvent OnSelChange = {read=FOnSelChange, write=FOnSelChange};
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomInnerMemo(HWND ParentWindow) : Vcl::Stdctrls::TMemo(ParentWindow) { }
	
private:
	void *__IcxPaintControlsHelper;	// Cxgraphics::IcxPaintControlsHelper 
	void *__IcxInnerEditHelper;	// Cxedit::IcxInnerEditHelper 
	void *__IcxContainerInnerControl;	// Cxcontainer::IcxContainerInnerControl 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7EFAF634-E8D2-489D-9603-FCFC03ACA460}
	operator Cxgraphics::_di_IcxPaintControlsHelper()
	{
		Cxgraphics::_di_IcxPaintControlsHelper intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxgraphics::IcxPaintControlsHelper*(void) { return (Cxgraphics::IcxPaintControlsHelper*)&__IcxPaintControlsHelper; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {35667555-6DC8-40D5-B705-B08D5697C621}
	operator Cxedit::_di_IcxInnerEditHelper()
	{
		Cxedit::_di_IcxInnerEditHelper intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxedit::IcxInnerEditHelper*(void) { return (Cxedit::IcxInnerEditHelper*)&__IcxInnerEditHelper; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {1B111318-D9C9-4C35-9EFF-5D95793C0106}
	operator Cxcontainer::_di_IcxContainerInnerControl()
	{
		Cxcontainer::_di_IcxContainerInnerControl intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxcontainer::IcxContainerInnerControl*(void) { return (Cxcontainer::IcxContainerInnerControl*)&__IcxContainerInnerControl; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000000-0000-0000-C000-000000000046}
	operator System::_di_IInterface()
	{
		System::_di_IInterface intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator System::IInterface*(void) { return (System::IInterface*)&__IcxPaintControlsHelper; }
	#endif
	
};


class PASCALIMPLEMENTATION TcxAutoHeightInplaceEditViewData : public TcxCustomMemoViewData
{
	typedef TcxCustomMemoViewData inherited;
	
private:
	TcxAutoHeightInplaceEdit* __fastcall GetEdit();
	
public:
	virtual System::Types::TRect __fastcall GetClientExtent(Cxgraphics::TcxCanvas* ACanvas, Cxedit::TcxCustomEditViewInfo* AViewInfo);
	__property TcxAutoHeightInplaceEdit* Edit = {read=GetEdit};
public:
	/* TcxCustomEditViewData.Create */ inline __fastcall virtual TcxAutoHeightInplaceEditViewData(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditStyle* AStyle, bool AIsInplace) : TcxCustomMemoViewData(AProperties, AStyle, AIsInplace) { }
	/* TcxCustomEditViewData.Destroy */ inline __fastcall virtual ~TcxAutoHeightInplaceEditViewData() { }
	
};


class PASCALIMPLEMENTATION TcxAutoHeightInplaceEditViewInfo : public TcxCustomMemoViewInfo
{
	typedef TcxCustomMemoViewInfo inherited;
	
private:
	TcxAutoHeightInplaceEdit* __fastcall GetEdit();
	
protected:
	virtual void __fastcall DrawEditorBorder(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawParentFocusRect(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall InternalPaint(Cxgraphics::TcxCanvas* ACanvas);
	
public:
	__property TcxAutoHeightInplaceEdit* Edit = {read=GetEdit};
public:
	/* TcxCustomTextEditViewInfo.Destroy */ inline __fastcall virtual ~TcxAutoHeightInplaceEditViewInfo() { }
	
public:
	/* TcxCustomEditViewInfo.Create */ inline __fastcall virtual TcxAutoHeightInplaceEditViewInfo() : TcxCustomMemoViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxAutoHeightInplaceEditProperties : public TcxMemoProperties
{
	typedef TcxMemoProperties inherited;
	
public:
	__fastcall virtual TcxAutoHeightInplaceEditProperties(System::Classes::TPersistent* AOwner);
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	__classmethod virtual Cxedit::TcxCustomEditViewDataClass __fastcall GetViewDataClass();
	__classmethod virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
public:
	/* TcxCustomTextEditProperties.Destroy */ inline __fastcall virtual ~TcxAutoHeightInplaceEditProperties() { }
	
};


class PASCALIMPLEMENTATION TcxAutoHeightInplaceEditInnerMemo : public TcxCustomInnerMemo
{
	typedef TcxCustomInnerMemo inherited;
	
public:
	__fastcall virtual TcxAutoHeightInplaceEditInnerMemo(System::Classes::TComponent* AOwner);
public:
	/* TcxCustomInnerMemo.Destroy */ inline __fastcall virtual ~TcxAutoHeightInplaceEditInnerMemo() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxAutoHeightInplaceEditInnerMemo(HWND ParentWindow) : TcxCustomInnerMemo(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxAutoHeightInplaceEdit : public TcxMemo
{
	typedef TcxMemo inherited;
	
private:
	Cxedit::TcxInplaceEditAutoHeight FAutoHeight;
	System::Uitypes::TColor FBorderColor;
	Cxgeometry::TcxBorders FBorders;
	int FCalculatedHeight;
	Cxedit::TcxCustomEditingController* FEditingController;
	int FLineHeight;
	int FMaxLineCountTextHeight;
	int FPrevHeight;
	HIDESBASE MESSAGE void __fastcall WMCommand(Winapi::Messages::TWMCommand &Message);
	
protected:
	void __fastcall CalculateHeight();
	int __fastcall GetExtraEditHeight();
	virtual Vcl::Controls::TControlClass __fastcall GetInnerEditClass();
	__property int LineHeight = {read=FLineHeight, nodefault};
	__property int MaxLineCountTextHeight = {read=FMaxLineCountTextHeight, nodefault};
	
public:
	__fastcall virtual TcxAutoHeightInplaceEdit(Cxedit::TcxCustomEditingController* AEditingController);
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	void __fastcall SetEditingController(Cxedit::TcxCustomEditingController* AController);
	void __fastcall SetMaxLineCount(int AValue);
	__property Cxedit::TcxInplaceEditAutoHeight AutoHeight = {read=FAutoHeight, write=FAutoHeight, nodefault};
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=FBorderColor, nodefault};
	__property Cxgeometry::TcxBorders Borders = {read=FBorders, write=FBorders, nodefault};
	__property int CalculatedHeight = {read=FCalculatedHeight, nodefault};
	__property Cxedit::TcxCustomEditingController* EditingController = {read=FEditingController};
	__property int ExtraEditHeight = {read=GetExtraEditHeight, nodefault};
public:
	/* TcxCustomTextEdit.Destroy */ inline __fastcall virtual ~TcxAutoHeightInplaceEdit() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxAutoHeightInplaceEdit(HWND ParentWindow) : TcxMemo(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall ExtractFirstLine(System::UnicodeString &AText, int AMaxLength = 0x0);
extern DELPHI_PACKAGE void __fastcall SetMemoCaretPos(Vcl::Stdctrls::TCustomMemo* AMemo, const System::Types::TPoint &Value);
}	/* namespace Cxmemo */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXMEMO)
using namespace Cxmemo;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxmemoHPP
