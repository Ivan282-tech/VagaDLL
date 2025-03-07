﻿// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxMRUEdit.pas' rev: 35.00 (Windows)

#ifndef CxmrueditHPP
#define CxmrueditHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Messages.hpp>
#include <System.Types.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <cxContainer.hpp>
#include <cxEdit.hpp>
#include <cxDropDownEdit.hpp>
#include <cxFilterControlUtils.hpp>
#include <cxMaskEdit.hpp>
#include <cxTextEdit.hpp>
#include <dxGDIPlusClasses.hpp>
#include <System.UITypes.hpp>
#include <cxControls.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxmruedit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxCustomMRUEditProperties;
class DELPHICLASS TcxMRUEditProperties;
class DELPHICLASS TcxCustomMRUEdit;
class DELPHICLASS TcxMRUEdit;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TcxMRUEditDeleteLookupItemEvent)(TcxCustomMRUEditProperties* AProperties, int AItemIndex);

class PASCALIMPLEMENTATION TcxCustomMRUEditProperties : public Cxdropdownedit::TcxCustomComboBoxProperties
{
	typedef Cxdropdownedit::TcxCustomComboBoxProperties inherited;
	
private:
	int FMaxItemCount;
	bool FShowEllipsis;
	System::Classes::TNotifyEvent FOnButtonClick;
	TcxMRUEditDeleteLookupItemEvent FOnDeleteLookupItem;
	void __fastcall CheckItemCount();
	void __fastcall SetMaxItemCount(int Value);
	void __fastcall SetShowEllipsis(bool Value);
	
protected:
	virtual void __fastcall DoAssign(Cxedit::TcxCustomEditProperties* AProperties);
	void __fastcall DoDeleteLookupItem(int AItemIndex);
	virtual void __fastcall DoOnNewLookupDisplayText(const System::UnicodeString AText);
	virtual void __fastcall InternalAddItem(const System::UnicodeString AItem, bool ARaiseOnNewLookupDisplayTextEvent);
	
public:
	__fastcall virtual TcxCustomMRUEditProperties(System::Classes::TPersistent* AOwner);
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	virtual void __fastcall DoUpdate(Cxedit::TcxCustomEditProperties* AProperties);
	void __fastcall AddItem(const System::UnicodeString AItem);
	__property int MaxItemCount = {read=FMaxItemCount, write=SetMaxItemCount, default=0};
	__property bool ShowEllipsis = {read=FShowEllipsis, write=SetShowEllipsis, default=1};
	__property System::Classes::TNotifyEvent OnButtonClick = {read=FOnButtonClick, write=FOnButtonClick};
	__property TcxMRUEditDeleteLookupItemEvent OnDeleteLookupItem = {read=FOnDeleteLookupItem, write=FOnDeleteLookupItem};
public:
	/* TcxCustomDropDownEditProperties.Destroy */ inline __fastcall virtual ~TcxCustomMRUEditProperties() { }
	
};


class PASCALIMPLEMENTATION TcxMRUEditProperties : public TcxCustomMRUEditProperties
{
	typedef TcxCustomMRUEditProperties inherited;
	
__published:
	__property Alignment;
	__property AssignedValues;
	__property AutoSelect = {default=1};
	__property BeepOnError = {default=0};
	__property ButtonGlyph;
	__property CaseInsensitive = {default=1};
	__property CharCase = {default=0};
	__property ClearKey = {default=0};
	__property ClickKey = {default=16397};
	__property DropDownAutoWidth = {default=1};
	__property DropDownListStyle = {default=1};
	__property DropDownRows = {default=8};
	__property DropDownSizeable = {default=0};
	__property DropDownWidth = {default=0};
	__property HideSelection = {default=1};
	__property IgnoreMaskBlank = {default=0};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property ImmediateDropDownWhenActivated = {default=0};
	__property ImmediateDropDownWhenKeyPressed = {default=1};
	__property ImmediatePost = {default=0};
	__property ImmediateUpdateText = {default=0};
	__property ItemHeight = {default=0};
	__property LookupItems;
	__property MaskKind = {default=0};
	__property EditMask = {default=0};
	__property MaxItemCount = {default=0};
	__property MaxLength;
	__property Nullstring = {default=0};
	__property OEMConvert = {default=0};
	__property PopupAlignment = {default=0};
	__property PostPopupValueOnTab = {default=0};
	__property ReadOnly;
	__property Revertable = {default=0};
	__property ShowEllipsis = {default=1};
	__property UseLeftAlignmentOnEditing;
	__property UseNullString = {default=0};
	__property ValidateOnEnter = {default=1};
	__property ValidationErrorIconAlignment = {default=0};
	__property ValidationOptions = {default=1};
	__property OnButtonClick;
	__property OnChange;
	__property OnCloseUp;
	__property OnDeleteLookupItem;
	__property OnDrawItem;
	__property OnEditValueChanged;
	__property OnInitPopup;
	__property OnMeasureItem;
	__property OnNewLookupDisplayText;
	__property OnPopup;
	__property OnValidate;
public:
	/* TcxCustomMRUEditProperties.Create */ inline __fastcall virtual TcxMRUEditProperties(System::Classes::TPersistent* AOwner) : TcxCustomMRUEditProperties(AOwner) { }
	
public:
	/* TcxCustomDropDownEditProperties.Destroy */ inline __fastcall virtual ~TcxMRUEditProperties() { }
	
};


class PASCALIMPLEMENTATION TcxCustomMRUEdit : public Cxdropdownedit::TcxCustomComboBox
{
	typedef Cxdropdownedit::TcxCustomComboBox inherited;
	
private:
	HIDESBASE TcxCustomMRUEditProperties* __fastcall GetProperties();
	HIDESBASE TcxCustomMRUEditProperties* __fastcall GetActiveProperties();
	HIDESBASE void __fastcall SetProperties(TcxCustomMRUEditProperties* Value);
	
protected:
	virtual void __fastcall DoButtonClick(int AButtonVisibleIndex);
	virtual void __fastcall DoEditKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall HandleSelectItem(System::TObject* Sender);
	virtual void __fastcall InternalValidateDisplayValue(const System::Variant &ADisplayValue);
	virtual bool __fastcall SupportsSpelling();
	
public:
	virtual void __fastcall AddItem(const System::UnicodeString Value);
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TcxCustomMRUEditProperties* ActiveProperties = {read=GetActiveProperties};
	__property TcxCustomMRUEditProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxCustomDropDownEdit.Destroy */ inline __fastcall virtual ~TcxCustomMRUEdit() { }
	
public:
	/* TcxCustomMaskEdit.Create */ inline __fastcall virtual TcxCustomMRUEdit(System::Classes::TComponent* AOwner)/* overload */ : Cxdropdownedit::TcxCustomComboBox(AOwner) { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxCustomMRUEdit(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Cxdropdownedit::TcxCustomComboBox(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomMRUEdit(HWND ParentWindow) : Cxdropdownedit::TcxCustomComboBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxMRUEdit : public TcxCustomMRUEdit
{
	typedef TcxCustomMRUEdit inherited;
	
private:
	HIDESBASE TcxMRUEditProperties* __fastcall GetActiveProperties();
	HIDESBASE TcxMRUEditProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(TcxMRUEditProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TcxMRUEditProperties* ActiveProperties = {read=GetActiveProperties};
	__property ItemIndex;
	
__published:
	__property Anchors = {default=3};
	__property AutoSize = {default=1};
	__property BeepOnEnter = {default=1};
	__property BiDiMode;
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property TcxMRUEditProperties* Properties = {read=GetProperties, write=SetProperties};
	__property ShowHint;
	__property Style;
	__property StyleDisabled;
	__property StyleFocused;
	__property StyleHot;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Text = {default=0};
	__property TextHint = {default=0};
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
	/* TcxCustomDropDownEdit.Destroy */ inline __fastcall virtual ~TcxMRUEdit() { }
	
public:
	/* TcxCustomMaskEdit.Create */ inline __fastcall virtual TcxMRUEdit(System::Classes::TComponent* AOwner)/* overload */ : TcxCustomMRUEdit(AOwner) { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxMRUEdit(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : TcxCustomMRUEdit(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxMRUEdit(HWND ParentWindow) : TcxCustomMRUEdit(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Cxmruedit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXMRUEDIT)
using namespace Cxmruedit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxmrueditHPP
