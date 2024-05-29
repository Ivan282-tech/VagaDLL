// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxImageComboBox.pas' rev: 35.00 (Windows)

#ifndef CximagecomboboxHPP
#define CximagecomboboxHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.ComCtrls.hpp>
#include <System.Types.hpp>
#include <System.Variants.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Clipbrd.hpp>
#include <Vcl.ImgList.hpp>
#include <dxCore.hpp>
#include <dxCoreClasses.hpp>
#include <cxVariants.hpp>
#include <cxClasses.hpp>
#include <cxGraphics.hpp>
#include <cxControls.hpp>
#include <cxContainer.hpp>
#include <cxDataStorage.hpp>
#include <cxDataUtils.hpp>
#include <cxEdit.hpp>
#include <cxDropDownEdit.hpp>
#include <cxTextEdit.hpp>
#include <cxFilterControlUtils.hpp>
#include <dxCoreGraphics.hpp>
#include <cxMaskEdit.hpp>
#include <dxGDIPlusClasses.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cximagecombobox
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxImageComboBoxItem;
class DELPHICLASS TcxImageComboBoxItems;
class DELPHICLASS TcxImageComboBoxListBox;
class DELPHICLASS TcxImageComboBoxLookupData;
class DELPHICLASS TcxImageComboBoxViewData;
class DELPHICLASS TcxImageComboBoxViewInfo;
class DELPHICLASS TcxCustomImageComboBoxProperties;
class DELPHICLASS TcxImageComboBoxProperties;
class DELPHICLASS TcxCustomImageComboBox;
class DELPHICLASS TcxImageComboBox;
class DELPHICLASS TcxFilterImageComboBoxHelper;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TcxImageComboBoxItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	Vcl::Controls::TCaption FDescription;
	System::Uitypes::TImageIndex FImageIndex;
	NativeInt FTag;
	System::Variant FValue;
	bool __fastcall IsStoredValue();
	bool __fastcall IsTagStored();
	void __fastcall SetDescription(const Vcl::Controls::TCaption Value);
	void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value);
	void __fastcall SetValue(const System::Variant &AValue);
	
public:
	__fastcall virtual TcxImageComboBoxItem(System::Classes::TCollection* Collection);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property Vcl::Controls::TCaption Description = {read=FDescription, write=SetDescription};
	__property System::Uitypes::TImageIndex ImageIndex = {read=FImageIndex, write=SetImageIndex, default=-1};
	__property NativeInt Tag = {read=FTag, write=FTag, stored=IsTagStored, nodefault};
	__property System::Variant Value = {read=FValue, write=SetValue, stored=IsStoredValue};
public:
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TcxImageComboBoxItem() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxImageComboBoxItems : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
public:
	TcxImageComboBoxItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	TcxImageComboBoxItem* __fastcall GetItems(int Index);
	void __fastcall SetItems(int Index, TcxImageComboBoxItem* const Value);
	
protected:
	void __fastcall InternalChanged();
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	__fastcall TcxImageComboBoxItems(System::Classes::TPersistent* AOwner);
	HIDESBASE TcxImageComboBoxItem* __fastcall Add();
	__property TcxImageComboBoxItem* Items[int Index] = {read=GetItems, write=SetItems/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TcxImageComboBoxItems() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxImageComboBoxListBox : public Cxdropdownedit::TcxComboBoxListBox
{
	typedef Cxdropdownedit::TcxComboBoxListBox inherited;
	
private:
	int FClientWidth;
	bool FHasScrollbar;
	HIDESBASE TcxCustomImageComboBox* __fastcall GetEdit();
	TcxCustomImageComboBoxProperties* __fastcall GetProperties();
	bool __fastcall IsDescriptionsAssigned();
	
protected:
	virtual void __fastcall DrawItem(int Index, const System::Types::TRect &Rect, Winapi::Windows::TOwnerDrawState State);
	virtual unsigned __fastcall GetDrawTextFlags();
	virtual void __fastcall MeasureItem(int Index, int &Height);
	virtual void __fastcall RecreateWindow();
	System::Types::TRect __fastcall GetImageRect(Vcl::Imglist::TCustomImageList* AImages, System::Types::TRect &R);
	Vcl::Imglist::TCustomImageList* __fastcall GetImages();
	virtual int __fastcall GetMaxItemWidth();
	__property TcxCustomImageComboBox* Edit = {read=GetEdit};
	__property TcxCustomImageComboBoxProperties* Properties = {read=GetProperties};
	
public:
	__fastcall virtual TcxImageComboBoxListBox(System::Classes::TComponent* AOwner);
	virtual int __fastcall GetHeight(int ARowCount, int AMaxHeight);
	virtual int __fastcall GetItemWidth(int AIndex);
public:
	/* TcxCustomEditListBox.Destroy */ inline __fastcall virtual ~TcxImageComboBoxListBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxImageComboBoxListBox(HWND ParentWindow) : Cxdropdownedit::TcxComboBoxListBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxImageComboBoxLookupData : public Cxdropdownedit::TcxComboBoxLookupData
{
	typedef Cxdropdownedit::TcxComboBoxLookupData inherited;
	
private:
	HIDESBASE TcxCustomImageComboBoxProperties* __fastcall GetActiveProperties();
	HIDESBASE TcxImageComboBoxItems* __fastcall GetItems();
	TcxImageComboBoxListBox* __fastcall GetList();
	
protected:
	virtual Cxtextedit::TcxCustomEditListBoxClass __fastcall GetListBoxClass();
	int __fastcall GetImageIndex(int Index);
	virtual System::UnicodeString __fastcall GetItem(int Index);
	virtual int __fastcall GetItemCount();
	__property TcxCustomImageComboBoxProperties* ActiveProperties = {read=GetActiveProperties};
	__property TcxImageComboBoxItems* Items = {read=GetItems};
	__property TcxImageComboBoxListBox* List = {read=GetList};
	
public:
	virtual void __fastcall TextChanged();
public:
	/* TcxComboBoxLookupData.Create */ inline __fastcall virtual TcxImageComboBoxLookupData(System::Classes::TPersistent* AOwner) : Cxdropdownedit::TcxComboBoxLookupData(AOwner) { }
	/* TcxComboBoxLookupData.Destroy */ inline __fastcall virtual ~TcxImageComboBoxLookupData() { }
	
};


class PASCALIMPLEMENTATION TcxImageComboBoxViewData : public Cxdropdownedit::TcxCustomDropDownEditViewData
{
	typedef Cxdropdownedit::TcxCustomDropDownEditViewData inherited;
	
private:
	HIDESBASE TcxCustomImageComboBoxProperties* __fastcall GetProperties();
	
protected:
	virtual System::UnicodeString __fastcall InternalEditValueToDisplayText(const System::Variant &AEditValue);
	virtual System::Types::TSize __fastcall InternalGetEditConstantPartSize(Cxgraphics::TcxCanvas* ACanvas, bool AIsInplace, const Cxedit::TcxEditSizeProperties &AEditSizeProperties, System::Types::TSize &MinContentSize, Cxedit::TcxCustomEditViewInfo* AViewInfo);
	virtual bool __fastcall IsComboBoxStyle();
	
public:
	virtual void __fastcall Calculate(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TPoint &P, Cxcontainer::TcxMouseButton Button, System::Classes::TShiftState Shift, Cxedit::TcxCustomEditViewInfo* ViewInfo, bool AIsMouseEvent);
	virtual void __fastcall DisplayValueToDrawValue(const System::Variant &ADisplayValue, Cxedit::TcxCustomEditViewInfo* AViewInfo);
	virtual void __fastcall EditValueToDrawValue(const System::Variant &AEditValue, Cxedit::TcxCustomEditViewInfo* AViewInfo);
	__property TcxCustomImageComboBoxProperties* Properties = {read=GetProperties};
public:
	/* TcxCustomEditViewData.Create */ inline __fastcall virtual TcxImageComboBoxViewData(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditStyle* AStyle, bool AIsInplace) : Cxdropdownedit::TcxCustomDropDownEditViewData(AProperties, AStyle, AIsInplace) { }
	/* TcxCustomEditViewData.Destroy */ inline __fastcall virtual ~TcxImageComboBoxViewData() { }
	
};


enum DECLSPEC_DENUM TcxImageAlign : unsigned char { iaLeft, iaRight };

class PASCALIMPLEMENTATION TcxImageComboBoxViewInfo : public Cxtextedit::TcxCustomTextEditViewInfo
{
	typedef Cxtextedit::TcxCustomTextEditViewInfo inherited;
	
protected:
	virtual void __fastcall InternalPaint(Cxgraphics::TcxCanvas* ACanvas);
	
public:
	System::Types::TRect ImageRect;
	bool ShowDescriptions;
	TcxImageAlign ImageAlign;
	System::Uitypes::TImageIndex ImageIndex;
	Vcl::Imglist::TCustomImageList* Images;
	virtual void __fastcall DrawText(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall Offset(int DX, int DY);
	Dxcoregraphics::_di_IdxColorPalette __fastcall GetImageColorPalette();
public:
	/* TcxCustomTextEditViewInfo.Destroy */ inline __fastcall virtual ~TcxImageComboBoxViewInfo() { }
	
public:
	/* TcxCustomEditViewInfo.Create */ inline __fastcall virtual TcxImageComboBoxViewInfo() : Cxtextedit::TcxCustomTextEditViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCustomImageComboBoxProperties : public Cxdropdownedit::TcxCustomComboBoxProperties
{
	typedef Cxdropdownedit::TcxCustomComboBoxProperties inherited;
	
private:
	System::UnicodeString FDefaultDescription;
	System::Uitypes::TImageIndex FDefaultImageIndex;
	TcxImageAlign FImageAlign;
	Vcl::Imglist::TCustomImageList* FImages;
	Vcl::Imglist::TChangeLink* FImagesChangeLink;
	TcxImageComboBoxItems* FItems;
	Vcl::Imglist::TCustomImageList* FLargeImages;
	Vcl::Imglist::TChangeLink* FLargeImagesChangeLink;
	bool FMultiLineText;
	bool FShowDescriptions;
	bool FShowImageIndexInsteadDescription;
	HIDESBASE TcxImageComboBoxItems* __fastcall GetItems();
	void __fastcall SetDefaultDescription(const System::UnicodeString Value);
	void __fastcall SetDefaultImageIndex(const System::Uitypes::TImageIndex Value);
	void __fastcall SetImageAlign(const TcxImageAlign Value);
	HIDESBASE void __fastcall SetImages(Vcl::Imglist::TCustomImageList* Value);
	HIDESBASE void __fastcall SetItems(TcxImageComboBoxItems* const Value);
	void __fastcall SetLargeImages(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetMultiLineText(const bool Value);
	void __fastcall SetShowDescriptions(const bool Value);
	void __fastcall SetShowImageIndexInsteadDescription(bool AValue);
	
protected:
	TcxImageComboBoxItem* __fastcall FindItemByText(const System::UnicodeString AText);
	virtual bool __fastcall FindLookupText(const System::UnicodeString AText);
	virtual void __fastcall DoAssign(Cxedit::TcxCustomEditProperties* AProperties);
	virtual void __fastcall FreeNotification(System::Classes::TComponent* Sender);
	virtual Cxedit::TcxEditDisplayFormatOptions __fastcall GetDisplayFormatOptions();
	System::UnicodeString __fastcall GetItemDescription(TcxImageComboBoxItem* AItem, int AImageIndex);
	__classmethod virtual Dxcoreclasses::TcxInterfacedPersistentClass __fastcall GetLookupDataClass();
	__classmethod virtual Cxedit::TcxCustomEditViewDataClass __fastcall GetViewDataClass();
	virtual bool __fastcall HasDisplayValue();
	virtual void __fastcall InternalGetImageComboBoxDisplayValue(TcxImageComboBoxItem* AItem, /* out */ System::UnicodeString &AText, /* out */ System::Uitypes::TImageIndex &AImageIndex, bool AAlwaysShowDescription = false);
	__property bool ShowImageIndexInsteadDescription = {read=FShowImageIndexInsteadDescription, write=SetShowImageIndexInsteadDescription, nodefault};
	
public:
	__fastcall virtual TcxCustomImageComboBoxProperties(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TcxCustomImageComboBoxProperties();
	virtual bool __fastcall CompareDisplayValues(const System::Variant &AEditValue1, const System::Variant &AEditValue2);
	TcxImageComboBoxItem* __fastcall FindItemByValue(const System::Variant &AValue);
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	virtual System::UnicodeString __fastcall GetDisplayText(const System::Variant &AEditValue, bool AFullText = false, bool AIsInplace = true);
	virtual Cxdatautils::TcxDataEditValueSource __fastcall GetEditValueSource(bool AEditFocused);
	void __fastcall GetImageComboBoxDisplayValue(const System::Variant &AEditValue, /* out */ System::UnicodeString &AText, /* out */ System::Uitypes::TImageIndex &AImageIndex);
	virtual Cxedit::TcxEditSupportedOperations __fastcall GetSupportedOperations();
	__classmethod virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
	virtual bool __fastcall IsEditValueValid(System::Variant &AEditValue, bool AEditFocused);
	virtual void __fastcall PrepareDisplayValue(const System::Variant &AEditValue, System::Variant &DisplayValue, bool AEditFocused);
	__property System::UnicodeString DefaultDescription = {read=FDefaultDescription, write=SetDefaultDescription};
	__property System::Uitypes::TImageIndex DefaultImageIndex = {read=FDefaultImageIndex, write=SetDefaultImageIndex, default=-1};
	__property TcxImageAlign ImageAlign = {read=FImageAlign, write=SetImageAlign, default=0};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property TcxImageComboBoxItems* Items = {read=GetItems, write=SetItems};
	__property Vcl::Imglist::TCustomImageList* LargeImages = {read=FLargeImages, write=SetLargeImages};
	__property bool MultiLineText = {read=FMultiLineText, write=SetMultiLineText, default=0};
	__property bool ShowDescriptions = {read=FShowDescriptions, write=SetShowDescriptions, default=1};
};


class PASCALIMPLEMENTATION TcxImageComboBoxProperties : public TcxCustomImageComboBoxProperties
{
	typedef TcxCustomImageComboBoxProperties inherited;
	
__published:
	__property Alignment;
	__property AssignedValues;
	__property ButtonGlyph;
	__property ClearKey = {default=0};
	__property DefaultDescription = {default=0};
	__property DefaultImageIndex = {default=-1};
	__property DropDownRows = {default=8};
	__property ImageAlign = {default=0};
	__property Images;
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property ImmediateDropDownWhenActivated = {default=0};
	__property ImmediateDropDownWhenKeyPressed = {default=1};
	__property ImmediatePost = {default=0};
	__property ImmediateUpdateText = {default=0};
	__property IncrementalFiltering = {default=0};
	__property IncrementalFilteringOptions = {default=3};
	__property Items;
	__property LargeImages;
	__property MultiLineText = {default=0};
	__property PopupAlignment = {default=0};
	__property PostPopupValueOnTab = {default=0};
	__property ReadOnly;
	__property Revertable = {default=0};
	__property ShowDescriptions = {default=1};
	__property ValidateOnEnter = {default=1};
	__property ValidationErrorIconAlignment = {default=0};
	__property ValidationOptions = {default=1};
	__property OnButtonClick;
	__property OnChange;
	__property OnCloseQuery;
	__property OnCloseUp;
	__property OnEditValueChanged;
	__property OnInitPopup;
	__property OnPopup;
	__property OnValidate;
public:
	/* TcxCustomImageComboBoxProperties.Create */ inline __fastcall virtual TcxImageComboBoxProperties(System::Classes::TPersistent* AOwner) : TcxCustomImageComboBoxProperties(AOwner) { }
	/* TcxCustomImageComboBoxProperties.Destroy */ inline __fastcall virtual ~TcxImageComboBoxProperties() { }
	
};


class PASCALIMPLEMENTATION TcxCustomImageComboBox : public Cxdropdownedit::TcxCustomComboBox
{
	typedef Cxdropdownedit::TcxCustomComboBox inherited;
	
private:
	HIDESBASE TcxCustomImageComboBoxProperties* __fastcall GetProperties();
	HIDESBASE TcxCustomImageComboBoxProperties* __fastcall GetActiveProperties();
	HIDESBASE TcxImageComboBoxLookupData* __fastcall GetLookupData();
	HIDESBASE void __fastcall SetProperties(TcxCustomImageComboBoxProperties* const Value);
	
protected:
	virtual System::TObject* __fastcall GetItemObject();
	virtual System::Types::TSize __fastcall GetPopupWindowClientPreferredSize();
	virtual System::Variant __fastcall InternalGetEditingValue();
	virtual bool __fastcall IsValidChar(System::WideChar AChar);
	virtual System::Variant __fastcall LookupKeyToEditValue(const System::Variant &AKey);
	virtual void __fastcall SynchronizeDisplayValue();
	virtual void __fastcall UpdateDrawValue();
	__property TcxImageComboBoxLookupData* LookupData = {read=GetLookupData};
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	virtual void __fastcall PrepareEditValue(const System::Variant &ADisplayValue, /* out */ System::Variant &EditValue, bool AEditFocused);
	__property TcxCustomImageComboBoxProperties* ActiveProperties = {read=GetActiveProperties};
	__property TcxCustomImageComboBoxProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxCustomDropDownEdit.Destroy */ inline __fastcall virtual ~TcxCustomImageComboBox() { }
	
public:
	/* TcxCustomMaskEdit.Create */ inline __fastcall virtual TcxCustomImageComboBox(System::Classes::TComponent* AOwner)/* overload */ : Cxdropdownedit::TcxCustomComboBox(AOwner) { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxCustomImageComboBox(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Cxdropdownedit::TcxCustomComboBox(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomImageComboBox(HWND ParentWindow) : Cxdropdownedit::TcxCustomComboBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxImageComboBox : public TcxCustomImageComboBox
{
	typedef TcxCustomImageComboBox inherited;
	
private:
	HIDESBASE TcxImageComboBoxProperties* __fastcall GetActiveProperties();
	HIDESBASE TcxImageComboBoxProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(TcxImageComboBoxProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TcxImageComboBoxProperties* ActiveProperties = {read=GetActiveProperties};
	
__published:
	__property Anchors = {default=3};
	__property AutoSize = {default=1};
	__property BeepOnEnter = {default=1};
	__property BiDiMode;
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property EditValue = {default=0};
	__property Enabled = {default=1};
	__property ItemIndex;
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property TcxImageComboBoxProperties* Properties = {read=GetProperties, write=SetProperties};
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
	/* TcxCustomDropDownEdit.Destroy */ inline __fastcall virtual ~TcxImageComboBox() { }
	
public:
	/* TcxCustomMaskEdit.Create */ inline __fastcall virtual TcxImageComboBox(System::Classes::TComponent* AOwner)/* overload */ : TcxCustomImageComboBox(AOwner) { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxImageComboBox(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : TcxCustomImageComboBox(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxImageComboBox(HWND ParentWindow) : TcxCustomImageComboBox(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxFilterImageComboBoxHelper : public Cxdropdownedit::TcxFilterComboBoxHelper
{
	typedef Cxdropdownedit::TcxFilterComboBoxHelper inherited;
	
public:
	__classmethod virtual Cxedit::TcxCustomEditClass __fastcall GetFilterEditClass();
	__classmethod virtual Cxfiltercontrolutils::TcxFilterControlOperators __fastcall GetSupportedFilterOperators(Cxedit::TcxCustomEditProperties* AProperties, Cxdatastorage::TcxValueTypeClass AValueTypeClass, bool AExtendedSet = false);
	__classmethod virtual void __fastcall InitializeProperties(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditProperties* AEditProperties, bool AHasButtons);
public:
	/* TObject.Create */ inline __fastcall TcxFilterImageComboBoxHelper() : Cxdropdownedit::TcxFilterComboBoxHelper() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxFilterImageComboBoxHelper() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Cximagecombobox */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXIMAGECOMBOBOX)
using namespace Cximagecombobox;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CximagecomboboxHPP
