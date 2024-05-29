// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxDBLookupComboBox.pas' rev: 35.00 (Windows)

#ifndef CxdblookupcomboboxHPP
#define CxdblookupcomboboxHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Variants.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBCtrls.hpp>
#include <cxClasses.hpp>
#include <cxContainer.hpp>
#include <cxCustomData.hpp>
#include <cxDataStorage.hpp>
#include <cxDB.hpp>
#include <cxDBData.hpp>
#include <cxLookAndFeels.hpp>
#include <cxEdit.hpp>
#include <cxDBEdit.hpp>
#include <cxEditConsts.hpp>
#include <cxDropDownEdit.hpp>
#include <cxLookupEdit.hpp>
#include <cxDBLookupEdit.hpp>
#include <cxLookupGrid.hpp>
#include <cxLookupDBGrid.hpp>
#include <cxFilterControlUtils.hpp>
#include <cxTextEdit.hpp>
#include <cxMaskEdit.hpp>
#include <dxGDIPlusClasses.hpp>
#include <System.UITypes.hpp>
#include <cxControls.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxdblookupcombobox
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxLookupComboBoxProperties;
class DELPHICLASS TcxCustomLookupComboBox;
class DELPHICLASS TcxLookupComboBox;
class DELPHICLASS TcxDBLookupComboBox;
class DELPHICLASS TcxFilterLookupComboBoxHelper;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TcxLookupComboBoxProperties : public Cxdblookupedit::TcxCustomDBLookupEditProperties
{
	typedef Cxdblookupedit::TcxCustomDBLookupEditProperties inherited;
	
private:
	Cxlookupdbgrid::TcxCustomLookupDBGrid* FGrid;
	Cxlookupdbgrid::TcxCustomLookupDBGrid* __fastcall GetGrid();
	bool __fastcall GetGridMode();
	Cxlookupdbgrid::TcxLookupDBGridColumns* __fastcall GetListColumns();
	Cxlookupdbgrid::TcxLookupDBGridOptions* __fastcall GetListOptions();
	Data::Db::TDataSource* __fastcall GetListSource();
	System::Classes::TNotifyEvent __fastcall GetOnSortingChanged();
	void __fastcall SetGridMode(bool Value);
	void __fastcall SetListColumns(Cxlookupdbgrid::TcxLookupDBGridColumns* Value);
	void __fastcall SetListOptions(Cxlookupdbgrid::TcxLookupDBGridOptions* Value);
	void __fastcall SetListSource(Data::Db::TDataSource* Value);
	void __fastcall SetOnSortingChanged(System::Classes::TNotifyEvent Value);
	
protected:
	virtual Cxlookupdbgrid::TcxCustomLookupDBGridClass __fastcall GetLookupGridClass();
	virtual void __fastcall ListOptionsChanged(System::TObject* Sender);
	virtual void __fastcall SetIncrementalFilteringOptions(Cxtextedit::TcxTextEditIncrementalFilteringOptions Value);
	virtual int __fastcall GetLookupGridColumnCount();
	virtual Cxedit::TcxCustomEditProperties* __fastcall GetLookupGridColumnProperties(int AIndex);
	virtual Vcl::Controls::TWinControl* __fastcall GetLookupGridControl();
	virtual Cxcustomdata::TcxCustomDataController* __fastcall GetLookupGridDataController();
	virtual int __fastcall GetLookupGridVisualAreaPreferredWidth();
	virtual int __fastcall GetLookupGridNearestPopupHeight(int AHeight);
	virtual int __fastcall GetLookupGridPopupHeight(int ADropDownRowCount);
	virtual bool __fastcall IsLookupGridMouseOverList(const System::Types::TPoint &P);
	virtual void __fastcall LookupGridInitEvents(System::Classes::TNotifyEvent AOnClick, System::Classes::TNotifyEvent AOnFocusedRowChanged, Cxlookupedit::TcxLookupGridCloseUpEvent AOnCloseUp);
	virtual void __fastcall LookupGridInitLookAndFeel(Cxlookandfeels::TcxLookAndFeel* ALookAndFeel, System::Uitypes::TColor AColor, Vcl::Graphics::TFont* AFont);
	virtual void __fastcall LookupGridLockMouseMove();
	virtual void __fastcall LookupGridMakeFocusedRowVisible();
	virtual void __fastcall LookupGridUnlockMouseMove();
	virtual void __fastcall DBLookupGridBeginUpdate();
	virtual void __fastcall DBLookupGridCheckColumnByFieldName(const System::UnicodeString AFieldName);
	virtual void __fastcall DBLookupGridCreateColumnsByFieldNames(const System::UnicodeString AFieldNames);
	virtual void __fastcall DBLookupGridEndUpdate();
	virtual Data::Db::TField* __fastcall GetDBLookupGridColumnField(int AIndex);
	virtual System::UnicodeString __fastcall GetDBLookupGridColumnFieldName(int AIndex);
	virtual int __fastcall GetDBLookupGridColumnIndexByFieldName(const System::UnicodeString AFieldName);
	virtual Cxdbdata::TcxDBDataController* __fastcall GetDBLookupGridDataController();
	
public:
	__fastcall virtual TcxLookupComboBoxProperties(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TcxLookupComboBoxProperties();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	__property Cxlookupdbgrid::TcxCustomLookupDBGrid* Grid = {read=GetGrid};
	
__published:
	__property Alignment;
	__property AutoSelect = {default=1};
	__property AssignedValues;
	__property ButtonGlyph;
	__property CaseSensitiveSearch = {default=0};
	__property CharCase = {default=0};
	__property ClearKey = {default=0};
	__property DropDownAutoSize = {default=0};
	__property DropDownHeight = {default=0};
	__property DropDownListStyle = {default=0};
	__property DropDownRows = {default=8};
	__property DropDownSizeable = {default=0};
	__property DropDownWidth = {default=0};
	__property bool GridMode = {read=GetGridMode, write=SetGridMode, default=0};
	__property HideSelection = {default=1};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property ImmediateDropDownWhenActivated = {default=0};
	__property ImmediateDropDownWhenKeyPressed = {default=1};
	__property ImmediatePost = {default=0};
	__property IncrementalFiltering = {default=1};
	__property IncrementalFilteringOptions = {default=0};
	__property KeyFieldNames = {default=0};
	__property Cxlookupdbgrid::TcxLookupDBGridColumns* ListColumns = {read=GetListColumns, write=SetListColumns};
	__property ListFieldNames = {default=0};
	__property ListFieldIndex = {default=0};
	__property Cxlookupdbgrid::TcxLookupDBGridOptions* ListOptions = {read=GetListOptions, write=SetListOptions};
	__property Data::Db::TDataSource* ListSource = {read=GetListSource, write=SetListSource};
	__property MaxLength;
	__property OEMConvert = {default=0};
	__property PopupAlignment = {default=0};
	__property PostPopupValueOnTab = {default=0};
	__property ReadOnly;
	__property Revertable = {default=0};
	__property UseLeftAlignmentOnEditing;
	__property ValidateOnEnter = {default=1};
	__property ValidationErrorIconAlignment = {default=0};
	__property ValidationOptions = {default=1};
	__property OnChange;
	__property OnCloseUp;
	__property OnEditValueChanged;
	__property OnInitPopup;
	__property OnNewLookupDisplayText;
	__property OnPopup;
	__property System::Classes::TNotifyEvent OnSortingChanged = {read=GetOnSortingChanged, write=SetOnSortingChanged};
	__property OnValidate;
};


class PASCALIMPLEMENTATION TcxCustomLookupComboBox : public Cxdblookupedit::TcxCustomDBLookupEdit
{
	typedef Cxdblookupedit::TcxCustomDBLookupEdit inherited;
	
private:
	HIDESBASE TcxLookupComboBoxProperties* __fastcall GetProperties();
	HIDESBASE TcxLookupComboBoxProperties* __fastcall GetActiveProperties();
	HIDESBASE void __fastcall SetProperties(TcxLookupComboBoxProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TcxLookupComboBoxProperties* ActiveProperties = {read=GetActiveProperties};
	__property EditValue = {default=0};
	__property TcxLookupComboBoxProperties* Properties = {read=GetProperties, write=SetProperties};
	__property Text = {default=0};
public:
	/* TcxCustomDropDownEdit.Destroy */ inline __fastcall virtual ~TcxCustomLookupComboBox() { }
	
public:
	/* TcxCustomMaskEdit.Create */ inline __fastcall virtual TcxCustomLookupComboBox(System::Classes::TComponent* AOwner)/* overload */ : Cxdblookupedit::TcxCustomDBLookupEdit(AOwner) { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxCustomLookupComboBox(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Cxdblookupedit::TcxCustomDBLookupEdit(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomLookupComboBox(HWND ParentWindow) : Cxdblookupedit::TcxCustomDBLookupEdit(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxLookupComboBox : public TcxCustomLookupComboBox
{
	typedef TcxCustomLookupComboBox inherited;
	
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
	__property Properties;
	__property EditValue = {default=0};
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
	__property OnEditing;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
public:
	/* TcxCustomDropDownEdit.Destroy */ inline __fastcall virtual ~TcxLookupComboBox() { }
	
public:
	/* TcxCustomMaskEdit.Create */ inline __fastcall virtual TcxLookupComboBox(System::Classes::TComponent* AOwner)/* overload */ : TcxCustomLookupComboBox(AOwner) { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxLookupComboBox(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : TcxCustomLookupComboBox(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxLookupComboBox(HWND ParentWindow) : TcxCustomLookupComboBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxDBLookupComboBox : public TcxCustomLookupComboBox
{
	typedef TcxCustomLookupComboBox inherited;
	
private:
	Cxdbedit::TcxDBTextEditDataBinding* __fastcall GetDataBinding();
	HIDESBASE void __fastcall SetDataBinding(Cxdbedit::TcxDBTextEditDataBinding* Value);
	MESSAGE void __fastcall CMGetDataLink(Winapi::Messages::TMessage &Message);
	
protected:
	__classmethod virtual Cxedit::TcxEditDataBindingClass __fastcall GetDataBindingClass();
	
__published:
	__property Anchors = {default=3};
	__property AutoSize = {default=1};
	__property BeepOnEnter = {default=1};
	__property BiDiMode;
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property Cxdbedit::TcxDBTextEditDataBinding* DataBinding = {read=GetDataBinding, write=SetDataBinding};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property Properties;
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
	__property OnEditing;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
public:
	/* TcxCustomDropDownEdit.Destroy */ inline __fastcall virtual ~TcxDBLookupComboBox() { }
	
public:
	/* TcxCustomMaskEdit.Create */ inline __fastcall virtual TcxDBLookupComboBox(System::Classes::TComponent* AOwner)/* overload */ : TcxCustomLookupComboBox(AOwner) { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxDBLookupComboBox(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : TcxCustomLookupComboBox(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxDBLookupComboBox(HWND ParentWindow) : TcxCustomLookupComboBox(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxFilterLookupComboBoxHelper : public Cxdropdownedit::TcxFilterComboBoxHelper
{
	typedef Cxdropdownedit::TcxFilterComboBoxHelper inherited;
	
protected:
	__classmethod virtual bool __fastcall IsIDefaultValuesProviderNeeded(Cxedit::TcxCustomEditProperties* AEditProperties);
	
public:
	__classmethod virtual Cxfiltercontrolutils::TcxFilterDataType __fastcall GetFilterDataType(Cxdatastorage::TcxValueTypeClass AValueTypeClass);
	__classmethod virtual Cxedit::TcxCustomEditClass __fastcall GetFilterEditClass();
	__classmethod virtual void __fastcall GetFilterValue(Cxedit::TcxCustomEdit* AEdit, Cxedit::TcxCustomEditProperties* AEditProperties, System::Variant &V, Vcl::Controls::TCaption &S);
	__classmethod virtual Cxfiltercontrolutils::TcxFilterControlOperators __fastcall GetSupportedFilterOperators(Cxedit::TcxCustomEditProperties* AProperties, Cxdatastorage::TcxValueTypeClass AValueTypeClass, bool AExtendedSet = false);
	__classmethod virtual void __fastcall InitializeProperties(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditProperties* AEditProperties, bool AHasButtons);
	__classmethod virtual bool __fastcall IsValueValid(Cxdatastorage::TcxValueTypeClass AValueTypeClass, System::Variant &Value);
public:
	/* TObject.Create */ inline __fastcall TcxFilterLookupComboBoxHelper() : Cxdropdownedit::TcxFilterComboBoxHelper() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxFilterLookupComboBoxHelper() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Cxdblookupcombobox */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXDBLOOKUPCOMBOBOX)
using namespace Cxdblookupcombobox;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxdblookupcomboboxHPP
