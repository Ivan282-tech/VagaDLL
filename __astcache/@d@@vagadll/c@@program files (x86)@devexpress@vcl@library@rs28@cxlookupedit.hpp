// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxLookupEdit.pas' rev: 35.00 (Windows)

#ifndef CxlookupeditHPP
#define CxlookupeditHPP

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
#include <Vcl.Forms.hpp>
#include <dxCoreClasses.hpp>
#include <cxClasses.hpp>
#include <cxGraphics.hpp>
#include <cxControls.hpp>
#include <cxContainer.hpp>
#include <cxLookAndFeels.hpp>
#include <cxEdit.hpp>
#include <cxTextEdit.hpp>
#include <cxDropDownEdit.hpp>
#include <cxDataUtils.hpp>
#include <cxCustomData.hpp>
#include <cxMaskEdit.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxlookupedit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxCustomLookupEditLookupData;
class DELPHICLASS TcxCustomLookupEditProperties;
class DELPHICLASS TcxCustomLookupEdit;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TcxLookupGridCloseUpEvent)(System::TObject* Sender, bool AAccept);

class PASCALIMPLEMENTATION TcxCustomLookupEditLookupData : public Dxcoreclasses::TcxInterfacedPersistent
{
	typedef Dxcoreclasses::TcxInterfacedPersistent inherited;
	
private:
	bool FVisible;
	System::Classes::TNotifyEvent FOnCurrentKeyChanged;
	System::Classes::TNotifyEvent FOnSelectItem;
	Cxcustomdata::TcxCustomDataController* __fastcall GetDataController();
	TcxCustomLookupEdit* __fastcall GetEdit();
	int __fastcall GetFocusedRecordIndex();
	int __fastcall GetListIndex();
	TcxCustomLookupEditProperties* __fastcall GetProperties();
	
protected:
	System::Variant FCurrentKey;
	virtual bool __fastcall CanResizeVisualArea(System::Types::TSize &NewSize, int AMaxHeight = 0x0, int AMaxWidth = 0x0);
	virtual void __fastcall CloseUp();
	virtual void __fastcall Deinitialize();
	virtual void __fastcall DropDown();
	virtual void __fastcall DroppedDown(const System::UnicodeString AFindStr);
	virtual bool __fastcall Find(const System::UnicodeString AText);
	Vcl::Controls::TControl* __fastcall GetActiveControl();
	virtual System::Variant __fastcall GetCurrentKey();
	virtual System::UnicodeString __fastcall GetDisplayText(const System::Variant &AKey);
	System::Classes::TNotifyEvent __fastcall GetOnCurrentKeyChanged();
	System::Classes::TNotifyEvent __fastcall GetOnSelectItem();
	virtual int __fastcall GetSelectedItem();
	System::Types::TSize __fastcall GetVisualAreaPreferredSize(int AMaxHeight, int AWidth = 0x0);
	virtual void __fastcall Go(Cxtextedit::TcxEditLookupDataGoDirection ADirection, bool ACircular);
	void __fastcall Initialize(Vcl::Controls::TWinControl* AVisualControlsParent);
	virtual bool __fastcall IsEmpty();
	bool __fastcall IsMouseOverList(const System::Types::TPoint &P);
	virtual bool __fastcall Locate(System::UnicodeString &AText, System::UnicodeString &ATail, bool ANext);
	void __fastcall PositionVisualArea(const System::Types::TRect &AClientRect);
	virtual void __fastcall PropertiesChanged();
	virtual void __fastcall SelectItem();
	virtual void __fastcall SetCurrentKey(const System::Variant &AKey);
	void __fastcall SetOnCurrentKeyChanged(System::Classes::TNotifyEvent Value);
	void __fastcall SetOnSelectItem(System::Classes::TNotifyEvent Value);
	virtual void __fastcall SetSelectedItem(int Value);
	virtual void __fastcall TextChanged();
	virtual void __fastcall DoCurrentKeyChanged();
	virtual int __fastcall DoFindRecordIndex();
	virtual void __fastcall DoSelectItem();
	virtual void __fastcall DoSetCurrentKey(int ARecordIndex);
	void __fastcall DoSetKeySelection(bool AKeySelected);
	virtual void __fastcall DoSyncGrid();
	int __fastcall FindRecordIndex();
	virtual void __fastcall GridClick(System::TObject* Sender);
	virtual void __fastcall GridCloseUp(System::TObject* Sender, bool AAccept);
	virtual void __fastcall GridFocusedRowChanged(System::TObject* Sender);
	bool __fastcall IsIncrementalFiltering();
	virtual bool __fastcall IsKeySelected();
	bool __fastcall IsLikeTypeFiltering();
	virtual bool __fastcall LocateText(const System::UnicodeString AText);
	virtual void __fastcall ResetIncrementalFilter();
	virtual void __fastcall SyncGrid();
	virtual void __fastcall SyncSelected();
	virtual void __fastcall UpdateDropDownCount();
	__property Cxcustomdata::TcxCustomDataController* DataController = {read=GetDataController};
	__property TcxCustomLookupEdit* Edit = {read=GetEdit};
	__property int FocusedRecordIndex = {read=GetFocusedRecordIndex, nodefault};
	__property TcxCustomLookupEditProperties* Properties = {read=GetProperties};
	
public:
	__fastcall virtual TcxCustomLookupEditLookupData(System::Classes::TPersistent* AOwner);
	void __fastcall DisableChanging();
	void __fastcall EnableChanging();
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxCustomLookupEditLookupData() { }
	
private:
	void *__IcxTextEditLookupData;	// Cxtextedit::IcxTextEditLookupData 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F49C5F08-7758-4362-A360-1DF02354E708}
	operator Cxtextedit::_di_IcxTextEditLookupData()
	{
		Cxtextedit::_di_IcxTextEditLookupData intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxtextedit::IcxTextEditLookupData*(void) { return (Cxtextedit::IcxTextEditLookupData*)&__IcxTextEditLookupData; }
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
	operator System::IInterface*(void) { return (System::IInterface*)&__IcxTextEditLookupData; }
	#endif
	
};


class PASCALIMPLEMENTATION TcxCustomLookupEditProperties : public Cxdropdownedit::TcxCustomComboBoxProperties
{
	typedef Cxdropdownedit::TcxCustomComboBoxProperties inherited;
	
private:
	int FDisplayColumnIndex;
	int FLockCount;
	bool FImmediateUpdateText;
	bool FInGridDataChanged;
	Cxcustomdata::TcxCustomDataController* __fastcall GetDataController();
	bool __fastcall GetDropDownAutoSize();
	int __fastcall GetDropDownHeight();
	HIDESBASE bool __fastcall GetDropDownSizeable();
	HIDESBASE int __fastcall GetDropDownWidth();
	void __fastcall SetDropDownAutoSize(bool Value);
	void __fastcall SetDropDownHeight(int Value);
	HIDESBASE void __fastcall SetDropDownSizeable(bool Value);
	HIDESBASE void __fastcall SetDropDownWidth(int Value);
	
protected:
	virtual void __fastcall DoAssign(Cxedit::TcxCustomEditProperties* AProperties);
	virtual Vcl::Controls::TWinControl* __fastcall GetLookupGridActiveControl();
	virtual bool __fastcall GetLookupGridCanResize();
	virtual int __fastcall GetLookupGridColumnCount();
	virtual Cxedit::TcxCustomEditProperties* __fastcall GetLookupGridColumnProperties(int AIndex);
	virtual Vcl::Controls::TWinControl* __fastcall GetLookupGridControl();
	virtual Cxcustomdata::TcxCustomDataController* __fastcall GetLookupGridDataController();
	virtual int __fastcall GetLookupGridVisualAreaPreferredWidth();
	virtual int __fastcall GetLookupGridNearestPopupHeight(int AHeight);
	virtual int __fastcall GetLookupGridPopupHeight(int ADropDownRowCount);
	virtual bool __fastcall IsLookupGridMouseOverList(const System::Types::TPoint &P);
	virtual void __fastcall LookupGridDeinitialize();
	virtual void __fastcall LookupGridDroppedDown(const System::UnicodeString AFindStr);
	virtual void __fastcall LookupGridInitEvents(System::Classes::TNotifyEvent AOnClick, System::Classes::TNotifyEvent AOnFocusedRowChanged, TcxLookupGridCloseUpEvent AOnCloseUp);
	virtual void __fastcall LookupGridInitialize();
	virtual void __fastcall LookupGridInitLookAndFeel(Cxlookandfeels::TcxLookAndFeel* ALookAndFeel, System::Uitypes::TColor AColor, Vcl::Graphics::TFont* AFont);
	virtual void __fastcall LookupGridLockMouseMove();
	virtual void __fastcall LookupGridMakeFocusedRowVisible();
	virtual void __fastcall LookupGridUnlockMouseMove();
	void __fastcall CheckDisplayColumnIndex();
	virtual void __fastcall DeinitializeDataController();
	virtual int __fastcall FindByText(int AItemIndex, const System::UnicodeString AText, bool APartialCompare);
	virtual bool __fastcall FindLookupText(const System::UnicodeString AText);
	virtual Cxtextedit::TcxTextEditIncrementalFilteringOptions __fastcall GetDefaultIncrementalFilteringOptions();
	virtual int __fastcall GetDisplayColumnIndex();
	virtual Cxedit::TcxEditDisplayFormatOptions __fastcall GetDisplayFormatOptions();
	virtual System::UnicodeString __fastcall GetDisplayLookupText(const System::Variant &AKey);
	virtual bool __fastcall GetIncrementalFiltering();
	virtual int __fastcall GetListIndex();
	__classmethod virtual Dxcoreclasses::TcxInterfacedPersistentClass __fastcall GetLookupDataClass();
	virtual System::Variant __fastcall GetNullKey();
	virtual void __fastcall GridDataChanged(System::TObject* Sender);
	virtual void __fastcall InitializeDataController();
	virtual bool __fastcall IsChangeLocked();
	virtual bool __fastcall IsDataChangedPostponed();
	virtual bool __fastcall IsEditValueConversionDependOnFocused();
	virtual bool __fastcall IsLookupEdit();
	virtual bool __fastcall IsPickMode();
	virtual bool __fastcall IsPopupKey(System::Word Key, System::Classes::TShiftState Shift);
	virtual void __fastcall LockDataChanged();
	virtual void __fastcall SetDisplayColumnIndex(int Value);
	virtual void __fastcall UnlockDataChanged();
	virtual void __fastcall UnlinkLookupGridControlParent();
	__property Cxcustomdata::TcxCustomDataController* DataController = {read=GetDataController};
	__property int DisplayColumnIndex = {read=GetDisplayColumnIndex, write=SetDisplayColumnIndex, default=0};
	__property bool ImmediateUpdateText = {read=FImmediateUpdateText, write=FImmediateUpdateText, default=0};
	
public:
	__fastcall virtual TcxCustomLookupEditProperties(System::Classes::TPersistent* AOwner);
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	virtual Cxdatautils::TcxDataEditValueSource __fastcall GetEditValueSource(bool AEditFocused);
	virtual Cxedit::TcxEditSupportedOperations __fastcall GetSupportedOperations();
	virtual bool __fastcall IsDefinedByLookup();
	virtual bool __fastcall IsEditValueValid(System::Variant &EditValue, bool AEditFocused);
	virtual bool __fastcall IsLookupField();
	virtual void __fastcall PrepareDisplayValue(const System::Variant &AEditValue, System::Variant &DisplayValue, bool AEditFocused);
	__property bool DropDownAutoSize = {read=GetDropDownAutoSize, write=SetDropDownAutoSize, default=0};
	__property int DropDownHeight = {read=GetDropDownHeight, write=SetDropDownHeight, default=0};
	__property DropDownListStyle = {default=0};
	__property bool DropDownSizeable = {read=GetDropDownSizeable, write=SetDropDownSizeable, default=0};
	__property int DropDownWidth = {read=GetDropDownWidth, write=SetDropDownWidth, default=0};
	__property IncrementalFiltering = {default=1};
public:
	/* TcxCustomDropDownEditProperties.Destroy */ inline __fastcall virtual ~TcxCustomLookupEditProperties() { }
	
};


class PASCALIMPLEMENTATION TcxCustomLookupEdit : public Cxdropdownedit::TcxCustomComboBox
{
	typedef Cxdropdownedit::TcxCustomComboBox inherited;
	
private:
	bool FIsTextChanging;
	HIDESBASE TcxCustomLookupEditLookupData* __fastcall GetLookupData();
	HIDESBASE TcxCustomLookupEditProperties* __fastcall GetProperties();
	HIDESBASE TcxCustomLookupEditProperties* __fastcall GetActiveProperties();
	void __fastcall SetLookupData(TcxCustomLookupEditLookupData* Value);
	HIDESBASE void __fastcall SetProperties(TcxCustomLookupEditProperties* Value);
	
protected:
	virtual void __fastcall AfterPosting();
	virtual void __fastcall BeforePosting();
	virtual void __fastcall ChangeHandler(System::TObject* Sender);
	virtual void __fastcall DoShowEdit();
	virtual void __fastcall DropDown();
	virtual void __fastcall Initialize();
	virtual System::Variant __fastcall InternalGetEditingValue();
	virtual bool __fastcall NeedResetInvalidTextWhenPropertiesChanged();
	virtual void __fastcall PrepareEditForInplaceActivation();
	virtual void __fastcall RepositoryItemAssigning();
	virtual bool __fastcall SupportsSpelling();
	virtual void __fastcall SynchronizeDisplayValue();
	__property TcxCustomLookupEditLookupData* LookupData = {read=GetLookupData, write=SetLookupData};
	__property bool IsTextChanging = {read=FIsTextChanging, nodefault};
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	virtual void __fastcall PrepareEditValue(const System::Variant &ADisplayValue, /* out */ System::Variant &EditValue, bool AEditFocused);
	__property TcxCustomLookupEditProperties* ActiveProperties = {read=GetActiveProperties};
	__property TcxCustomLookupEditProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxCustomDropDownEdit.Destroy */ inline __fastcall virtual ~TcxCustomLookupEdit() { }
	
public:
	/* TcxCustomMaskEdit.Create */ inline __fastcall virtual TcxCustomLookupEdit(System::Classes::TComponent* AOwner)/* overload */ : Cxdropdownedit::TcxCustomComboBox(AOwner) { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxCustomLookupEdit(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Cxdropdownedit::TcxCustomComboBox(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomLookupEdit(HWND ParentWindow) : Cxdropdownedit::TcxCustomComboBox(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Cxlookupedit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXLOOKUPEDIT)
using namespace Cxlookupedit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxlookupeditHPP
