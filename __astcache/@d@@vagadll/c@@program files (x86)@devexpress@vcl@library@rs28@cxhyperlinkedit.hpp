// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxHyperLinkEdit.pas' rev: 35.00 (Windows)

#ifndef CxhyperlinkeditHPP
#define CxhyperlinkeditHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.Windows.hpp>
#include <System.Types.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Menus.hpp>
#include <System.Math.hpp>
#include <dxCore.hpp>
#include <cxGraphics.hpp>
#include <cxContainer.hpp>
#include <cxControls.hpp>
#include <cxEdit.hpp>
#include <cxTextEdit.hpp>
#include <cxEditConsts.hpp>
#include <cxFilterControlUtils.hpp>
#include <dxCoreClasses.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxhyperlinkedit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxHyperLinkEditViewInfo;
class DELPHICLASS TcxHyperLinkEditViewData;
class DELPHICLASS TcxCustomHyperLinkEditProperties;
class DELPHICLASS TcxHyperLinkEditProperties;
class DELPHICLASS TcxHyperLinkStyle;
class DELPHICLASS TcxCustomHyperLinkEdit;
class DELPHICLASS TcxHyperLinkEdit;
class DELPHICLASS TcxFilterHyperLinkEditHelper;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TcxHyperLinkEditViewInfo : public Cxtextedit::TcxCustomTextEditViewInfo
{
	typedef Cxtextedit::TcxCustomTextEditViewInfo inherited;
	
private:
	bool FWasFocusedBeforeClick;
	bool FSingleClick;
	bool FIsStandardAlignment;
	void __fastcall CorrectTextBounds(System::Types::TRect &ATextBounds, const System::Classes::TAlignment AHorzAlignment, const System::Types::TRect &ARect);
	
protected:
	bool __fastcall CanOpenHyperLink(const System::Types::TPoint &P, bool AIsFirstClick);
	bool __fastcall CanHandPointCursor(const System::Types::TPoint &P);
	virtual System::Uitypes::TColor __fastcall CalculateTextColor(Cxcontainer::TcxContainerStyle* AStyle, bool AEnabled, Cxcontainer::TcxContainer* AContainer = (Cxcontainer::TcxContainer*)(0x0));
	System::Types::TRect __fastcall GetActuallyTextBounds();
	virtual System::Uitypes::TCursor __fastcall GetCurrentCursor(const System::Types::TPoint &AMousePos);
	virtual System::Uitypes::TColor __fastcall GetHyperLinkTextColor();
	virtual void __fastcall InplaceMouseDown(System::Uitypes::TMouseButton AButton, const System::Classes::TShiftState AShift, int X, int Y);
	bool __fastcall IsMouseHoveredOverText(const System::Types::TPoint &AMousePos);
	
public:
	virtual bool __fastcall IsHotTrack()/* overload */;
	virtual bool __fastcall IsHotTrack(const System::Types::TPoint &P)/* overload */;
	virtual void __fastcall PrepareCanvasFont(Vcl::Graphics::TCanvas* ACanvas);
public:
	/* TcxCustomTextEditViewInfo.Destroy */ inline __fastcall virtual ~TcxHyperLinkEditViewInfo() { }
	
public:
	/* TcxCustomEditViewInfo.Create */ inline __fastcall virtual TcxHyperLinkEditViewInfo() : Cxtextedit::TcxCustomTextEditViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxHyperLinkEditViewData : public Cxtextedit::TcxCustomTextEditViewData
{
	typedef Cxtextedit::TcxCustomTextEditViewData inherited;
	
public:
	virtual void __fastcall Calculate(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TPoint &P, Cxcontainer::TcxMouseButton Button, System::Classes::TShiftState Shift, Cxedit::TcxCustomEditViewInfo* AViewInfo, bool AIsMouseEvent);
public:
	/* TcxCustomEditViewData.Create */ inline __fastcall virtual TcxHyperLinkEditViewData(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditStyle* AStyle, bool AIsInplace) : Cxtextedit::TcxCustomTextEditViewData(AProperties, AStyle, AIsInplace) { }
	/* TcxCustomEditViewData.Destroy */ inline __fastcall virtual ~TcxHyperLinkEditViewData() { }
	
};


enum DECLSPEC_DENUM TcxHyperLinkEditUsePrefix : unsigned char { upAlways, upOnlyOnExecute, upNever };

class PASCALIMPLEMENTATION TcxCustomHyperLinkEditProperties : public Cxtextedit::TcxCustomTextEditProperties
{
	typedef Cxtextedit::TcxCustomTextEditProperties inherited;
	
private:
	bool FSingleClick;
	System::Uitypes::TColor FLinkColor;
	System::Classes::TNotifyEvent FOnStartClick;
	System::UnicodeString FPrefix;
	System::Classes::TShortCut FStartKey;
	TcxHyperLinkEditUsePrefix FUsePrefix;
	bool __fastcall GetAutoComplete();
	bool __fastcall GetPrefixStored();
	void __fastcall ReadPrefix(System::Classes::TReader* Reader);
	void __fastcall SetAutoComplete(bool Value);
	void __fastcall SetLinkColor(const System::Uitypes::TColor Value);
	void __fastcall SetSingleClick(bool Value);
	void __fastcall WritePrefix(System::Classes::TWriter* Writer);
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* AFiler);
	virtual void __fastcall DoAssign(Cxedit::TcxCustomEditProperties* AProperties);
	virtual System::UnicodeString __fastcall AddPrefixTo(const System::UnicodeString AStr);
	
public:
	__fastcall virtual TcxCustomHyperLinkEditProperties(System::Classes::TPersistent* AOwner);
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	__classmethod virtual Cxedit::TcxCustomEditStyleClass __fastcall GetStyleClass();
	virtual Cxedit::TcxEditSupportedOperations __fastcall GetSupportedOperations();
	__classmethod virtual Cxedit::TcxCustomEditViewDataClass __fastcall GetViewDataClass();
	__classmethod virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
	virtual void __fastcall ValidateDisplayValue(System::Variant &ADisplayValue, Vcl::Controls::TCaption &AErrorText, bool &Error, Cxedit::TcxCustomEdit* AEdit);
	__property bool AutoComplete = {read=GetAutoComplete, write=SetAutoComplete, stored=false, nodefault};
	__property AutoSelect = {default=0};
	__property System::Uitypes::TColor LinkColor = {read=FLinkColor, write=SetLinkColor, default=16711680};
	__property System::UnicodeString Prefix = {read=FPrefix, write=FPrefix, stored=false};
	__property bool SingleClick = {read=FSingleClick, write=SetSingleClick, default=0};
	__property System::Classes::TShortCut StartKey = {read=FStartKey, write=FStartKey, default=16397};
	__property TcxHyperLinkEditUsePrefix UsePrefix = {read=FUsePrefix, write=FUsePrefix, default=0};
	__property System::Classes::TNotifyEvent OnStartClick = {read=FOnStartClick, write=FOnStartClick};
public:
	/* TcxCustomTextEditProperties.Destroy */ inline __fastcall virtual ~TcxCustomHyperLinkEditProperties() { }
	
};


class PASCALIMPLEMENTATION TcxHyperLinkEditProperties : public TcxCustomHyperLinkEditProperties
{
	typedef TcxCustomHyperLinkEditProperties inherited;
	
__published:
	__property Alignment;
	__property AssignedValues;
	__property AutoComplete;
	__property AutoSelect = {default=0};
	__property ClearKey = {default=0};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property IncrementalSearch = {default=1};
	__property LinkColor = {default=16711680};
	__property LookupItems;
	__property LookupItemsSorted = {default=0};
	__property Nullstring = {default=0};
	__property Prefix = {default=0};
	__property ReadOnly;
	__property StartKey = {default=16397};
	__property SingleClick = {default=0};
	__property UseLeftAlignmentOnEditing;
	__property UseNullString = {default=0};
	__property UsePrefix = {default=0};
	__property ValidateOnEnter = {default=0};
	__property ValidationErrorIconAlignment = {default=0};
	__property ValidationOptions = {default=1};
	__property OnChange;
	__property OnEditValueChanged;
	__property OnStartClick;
	__property OnValidate;
public:
	/* TcxCustomHyperLinkEditProperties.Create */ inline __fastcall virtual TcxHyperLinkEditProperties(System::Classes::TPersistent* AOwner) : TcxCustomHyperLinkEditProperties(AOwner) { }
	
public:
	/* TcxCustomTextEditProperties.Destroy */ inline __fastcall virtual ~TcxHyperLinkEditProperties() { }
	
};


class PASCALIMPLEMENTATION TcxHyperLinkStyle : public Cxedit::TcxEditStyle
{
	typedef Cxedit::TcxEditStyle inherited;
	
protected:
	virtual System::Uitypes::TColor __fastcall GetTextColor();
	virtual System::Uitypes::TFontStyles __fastcall GetTextStyle();
public:
	/* TcxCustomEditStyle.Create */ inline __fastcall virtual TcxHyperLinkStyle(System::Classes::TPersistent* AOwner, bool ADirectAccessMode, Cxcontainer::TcxContainerStyle* AParentStyle, Cxcontainer::TcxContainerStateItem AState) : Cxedit::TcxEditStyle(AOwner, ADirectAccessMode, AParentStyle, AState) { }
	
public:
	/* TcxContainerStyle.Destroy */ inline __fastcall virtual ~TcxHyperLinkStyle() { }
	
};


class PASCALIMPLEMENTATION TcxCustomHyperLinkEdit : public Cxtextedit::TcxCustomTextEdit
{
	typedef Cxtextedit::TcxCustomTextEdit inherited;
	
private:
	HIDESBASE TcxCustomHyperLinkEditProperties* __fastcall GetActiveProperties();
	HIDESBASE TcxCustomHyperLinkEditProperties* __fastcall GetProperties();
	HIDESBASE TcxHyperLinkStyle* __fastcall GetStyle();
	HIDESBASE void __fastcall SetProperties(TcxCustomHyperLinkEditProperties* const Value);
	HIDESBASE void __fastcall SetStyle(TcxHyperLinkStyle* Value);
	
protected:
	__classmethod void __fastcall OpenHyperLink(const System::UnicodeString AHyperLink, TcxCustomHyperLinkEditProperties* AActiveProperties);
	bool __fastcall DoOnStartClick();
	virtual void __fastcall DoStart();
	virtual System::Uitypes::TCursor __fastcall GetCurrentCursor(int X, int Y);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall PropertiesChanged(System::TObject* Sender);
	
public:
	virtual void __fastcall ActivateByMouse(System::Classes::TShiftState Shift, int X, int Y, Cxedit::TcxCustomEditData* &AEditData);
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	virtual bool __fastcall InnerControlMenuHandler(Winapi::Messages::TMessage &Message);
	virtual void __fastcall SelectAll();
	__property TcxCustomHyperLinkEditProperties* ActiveProperties = {read=GetActiveProperties};
	__property TcxCustomHyperLinkEditProperties* Properties = {read=GetProperties, write=SetProperties};
	__property TcxHyperLinkStyle* Style = {read=GetStyle, write=SetStyle};
public:
	/* TcxCustomTextEdit.Create */ inline __fastcall virtual TcxCustomHyperLinkEdit(System::Classes::TComponent* AOwner)/* overload */ : Cxtextedit::TcxCustomTextEdit(AOwner) { }
	/* TcxCustomTextEdit.Destroy */ inline __fastcall virtual ~TcxCustomHyperLinkEdit() { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxCustomHyperLinkEdit(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Cxtextedit::TcxCustomTextEdit(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomHyperLinkEdit(HWND ParentWindow) : Cxtextedit::TcxCustomTextEdit(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxHyperLinkEdit : public TcxCustomHyperLinkEdit
{
	typedef TcxCustomHyperLinkEdit inherited;
	
private:
	HIDESBASE TcxHyperLinkEditProperties* __fastcall GetActiveProperties();
	HIDESBASE TcxHyperLinkEditProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(TcxHyperLinkEditProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TcxHyperLinkEditProperties* ActiveProperties = {read=GetActiveProperties};
	
__published:
	__property Anchors = {default=3};
	__property AutoSize = {default=1};
	__property BeepOnEnter = {default=1};
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property ParentColor = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property TcxHyperLinkEditProperties* Properties = {read=GetProperties, write=SetProperties};
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
	/* TcxCustomTextEdit.Create */ inline __fastcall virtual TcxHyperLinkEdit(System::Classes::TComponent* AOwner)/* overload */ : TcxCustomHyperLinkEdit(AOwner) { }
	/* TcxCustomTextEdit.Destroy */ inline __fastcall virtual ~TcxHyperLinkEdit() { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxHyperLinkEdit(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : TcxCustomHyperLinkEdit(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxHyperLinkEdit(HWND ParentWindow) : TcxCustomHyperLinkEdit(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxFilterHyperLinkEditHelper : public Cxtextedit::TcxFilterTextEditHelper
{
	typedef Cxtextedit::TcxFilterTextEditHelper inherited;
	
public:
	__classmethod virtual Cxedit::TcxCustomEditClass __fastcall GetFilterEditClass();
public:
	/* TObject.Create */ inline __fastcall TcxFilterHyperLinkEditHelper() : Cxtextedit::TcxFilterTextEditHelper() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxFilterHyperLinkEditHelper() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const int cxHyperLinkEditDefaultLinkColor = int(16711680);
}	/* namespace Cxhyperlinkedit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXHYPERLINKEDIT)
using namespace Cxhyperlinkedit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxhyperlinkeditHPP
