// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxButtonEdit.pas' rev: 35.00 (Windows)

#ifndef CxbuttoneditHPP
#define CxbuttoneditHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <cxContainer.hpp>
#include <cxEdit.hpp>
#include <cxMaskEdit.hpp>
#include <cxTextEdit.hpp>
#include <System.UITypes.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Controls.hpp>
#include <cxControls.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxbuttonedit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxCustomButtonEditProperties;
class DELPHICLASS TcxButtonEditProperties;
class DELPHICLASS TcxCustomButtonEdit;
class DELPHICLASS TcxButtonEdit;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TcxCustomButtonEditProperties : public Cxmaskedit::TcxCustomMaskEditProperties
{
	typedef Cxmaskedit::TcxCustomMaskEditProperties inherited;
	
public:
	__fastcall virtual TcxCustomButtonEditProperties(System::Classes::TPersistent* AOwner);
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
public:
	/* TcxCustomMaskEditProperties.Destroy */ inline __fastcall virtual ~TcxCustomButtonEditProperties() { }
	
};


class PASCALIMPLEMENTATION TcxButtonEditProperties : public TcxCustomButtonEditProperties
{
	typedef TcxCustomButtonEditProperties inherited;
	
__published:
	__property Alignment;
	__property AssignedValues;
	__property AutoSelect = {default=1};
	__property BeepOnError = {default=0};
	__property Buttons;
	__property CaseInsensitive = {default=1};
	__property CharCase = {default=0};
	__property ClearKey = {default=0};
	__property ClickKey = {default=16397};
	__property EchoMode = {default=0};
	__property HideCursor;
	__property HideSelection = {default=1};
	__property IgnoreMaskBlank = {default=0};
	__property Images;
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property IncrementalSearch = {default=1};
	__property LookupItems;
	__property LookupItemsSorted = {default=0};
	__property MaskKind = {default=0};
	__property Nullstring = {default=0};
	__property EditMask = {default=0};
	__property MaxLength;
	__property OEMConvert = {default=0};
	__property PasswordChar = {default=0};
	__property ReadOnly;
	__property UseLeftAlignmentOnEditing;
	__property UseNullString = {default=0};
	__property ValidateOnEnter = {default=1};
	__property ValidationErrorIconAlignment = {default=0};
	__property ValidationOptions = {default=1};
	__property ViewStyle = {default=0};
	__property OnButtonClick;
	__property OnChange;
	__property OnEditValueChanged;
	__property OnNewLookupDisplayText;
	__property OnValidate;
public:
	/* TcxCustomButtonEditProperties.Create */ inline __fastcall virtual TcxButtonEditProperties(System::Classes::TPersistent* AOwner) : TcxCustomButtonEditProperties(AOwner) { }
	
public:
	/* TcxCustomMaskEditProperties.Destroy */ inline __fastcall virtual ~TcxButtonEditProperties() { }
	
};


class PASCALIMPLEMENTATION TcxCustomButtonEdit : public Cxmaskedit::TcxCustomMaskEdit
{
	typedef Cxmaskedit::TcxCustomMaskEdit inherited;
	
private:
	HIDESBASE TcxCustomButtonEditProperties* __fastcall GetProperties();
	HIDESBASE TcxCustomButtonEditProperties* __fastcall GetActiveProperties();
	HIDESBASE void __fastcall SetProperties(TcxCustomButtonEditProperties* Value);
	
protected:
	virtual Cxcontainer::TcxContainerStyleValues __fastcall InternalGetNotPublishedStyleValues();
	virtual bool __fastcall SupportsSpelling();
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TcxCustomButtonEditProperties* ActiveProperties = {read=GetActiveProperties};
	__property TcxCustomButtonEditProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxCustomMaskEdit.Create */ inline __fastcall virtual TcxCustomButtonEdit(System::Classes::TComponent* AOwner)/* overload */ : Cxmaskedit::TcxCustomMaskEdit(AOwner) { }
	/* TcxCustomMaskEdit.Destroy */ inline __fastcall virtual ~TcxCustomButtonEdit() { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxCustomButtonEdit(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Cxmaskedit::TcxCustomMaskEdit(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomButtonEdit(HWND ParentWindow) : Cxmaskedit::TcxCustomMaskEdit(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxButtonEdit : public TcxCustomButtonEdit
{
	typedef TcxCustomButtonEdit inherited;
	
private:
	bool FAreButtonsLoaded;
	HIDESBASE TcxButtonEditProperties* __fastcall GetActiveProperties();
	HIDESBASE TcxButtonEditProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(TcxButtonEditProperties* Value);
	
protected:
	virtual void __fastcall ReadState(System::Classes::TReader* Reader);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TcxButtonEditProperties* ActiveProperties = {read=GetActiveProperties};
	
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
	__property TcxButtonEditProperties* Properties = {read=GetProperties, write=SetProperties};
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
	/* TcxCustomMaskEdit.Create */ inline __fastcall virtual TcxButtonEdit(System::Classes::TComponent* AOwner)/* overload */ : TcxCustomButtonEdit(AOwner) { }
	/* TcxCustomMaskEdit.Destroy */ inline __fastcall virtual ~TcxButtonEdit() { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxButtonEdit(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : TcxCustomButtonEdit(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxButtonEdit(HWND ParentWindow) : TcxCustomButtonEdit(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Cxbuttonedit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXBUTTONEDIT)
using namespace Cxbuttonedit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxbuttoneditHPP
