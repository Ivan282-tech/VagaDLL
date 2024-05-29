// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxBlobEdit.pas' rev: 35.00 (Windows)

#ifndef CxblobeditHPP
#define CxblobeditHPP

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
#include <Vcl.ExtDlgs.hpp>
#include <System.Types.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Clipbrd.hpp>
#include <cxClasses.hpp>
#include <cxControls.hpp>
#include <cxContainer.hpp>
#include <cxGraphics.hpp>
#include <cxDataStorage.hpp>
#include <cxDataUtils.hpp>
#include <cxEdit.hpp>
#include <cxDropDownEdit.hpp>
#include <cxEditConsts.hpp>
#include <cxTextEdit.hpp>
#include <cxButtons.hpp>
#include <cxImage.hpp>
#include <cxMemo.hpp>
#include <cxFilterControlUtils.hpp>
#include <dxUxTheme.hpp>
#include <dxGDIPlusClasses.hpp>
#include <cxMaskEdit.hpp>
#include <dxForms.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxblobedit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxBlobEditViewData;
class DELPHICLASS TcxBlobEditViewInfo;
class DELPHICLASS TcxCustomBlobEditProperties;
class DELPHICLASS TcxBlobEditProperties;
class DELPHICLASS TcxPopupMemo;
class DELPHICLASS TcxPopupImage;
class DELPHICLASS TcxCustomBlobEdit;
class DELPHICLASS TcxBlobEdit;
class DELPHICLASS TcxFilterBlobEditHelper;
class DELPHICLASS TcxBlobEditPopupWindow;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TcxBlobPaintStyle : unsigned char { bpsDefault, bpsIcon, bpsText };

enum DECLSPEC_DENUM TcxBlobEditKind : unsigned char { bekAuto, bekMemo, bekPict, bekOle, bekBlob };

class PASCALIMPLEMENTATION TcxBlobEditViewData : public Cxdropdownedit::TcxCustomDropDownEditViewData
{
	typedef Cxdropdownedit::TcxCustomDropDownEditViewData inherited;
	
protected:
	virtual System::Types::TSize __fastcall InternalGetEditConstantPartSize(Cxgraphics::TcxCanvas* ACanvas, bool AIsInplace, const Cxedit::TcxEditSizeProperties &AEditSizeProperties, System::Types::TSize &MinContentSize, Cxedit::TcxCustomEditViewInfo* AViewInfo);
	virtual System::UnicodeString __fastcall InternalEditValueToDisplayText(const System::Variant &AEditValue);
	virtual void __fastcall PrepareDrawTextFlags(Cxgraphics::TcxCanvas* ACanvas, Cxedit::TcxCustomEditViewInfo* AViewInfo);
	
public:
	virtual void __fastcall Calculate(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TPoint &P, Cxcontainer::TcxMouseButton Button, System::Classes::TShiftState Shift, Cxedit::TcxCustomEditViewInfo* AViewInfo, bool AIsMouseEvent);
	virtual void __fastcall EditValueToDrawValue(const System::Variant &AEditValue, Cxedit::TcxCustomEditViewInfo* AViewInfo);
public:
	/* TcxCustomEditViewData.Create */ inline __fastcall virtual TcxBlobEditViewData(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditStyle* AStyle, bool AIsInplace) : Cxdropdownedit::TcxCustomDropDownEditViewData(AProperties, AStyle, AIsInplace) { }
	/* TcxCustomEditViewData.Destroy */ inline __fastcall virtual ~TcxBlobEditViewData() { }
	
};


class PASCALIMPLEMENTATION TcxBlobEditViewInfo : public Cxtextedit::TcxCustomTextEditViewInfo
{
	typedef Cxtextedit::TcxCustomTextEditViewInfo inherited;
	
protected:
	virtual Cxedit::TcxEditBackgroundPaintingStyle __fastcall GetBackgroundPaintingStyle();
	virtual void __fastcall InternalPaint(Cxgraphics::TcxCanvas* ACanvas);
	
public:
	System::Types::TRect IconRect;
	System::Uitypes::TImageIndex ImageIndex;
	virtual bool __fastcall NeedShowHint(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TPoint &P, const System::Types::TRect &AVisibleBounds, /* out */ Vcl::Controls::TCaption &AText, /* out */ bool &AIsMultiLine, /* out */ System::Types::TRect &ATextRect, int AMaxLineCount = 0x0);
	virtual void __fastcall Offset(int DX, int DY);
public:
	/* TcxCustomTextEditViewInfo.Destroy */ inline __fastcall virtual ~TcxBlobEditViewInfo() { }
	
public:
	/* TcxCustomEditViewInfo.Create */ inline __fastcall virtual TcxBlobEditViewInfo() : Cxtextedit::TcxCustomTextEditViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCustomBlobEditProperties : public Cxdropdownedit::TcxCustomPopupEditProperties
{
	typedef Cxdropdownedit::TcxCustomPopupEditProperties inherited;
	
private:
	bool FAlwaysSaveData;
	bool FApplyStyleToButtons;
	TcxBlobEditKind FBlobEditKind;
	TcxBlobPaintStyle FBlobPaintStyle;
	bool FMemoAutoReplace;
	bool FMemoWantReturns;
	bool FMemoWantTabs;
	bool FMemoOEMConvert;
	bool FMemoWordWrap;
	int FMemoMaxLength;
	System::Uitypes::TEditCharCase FMemoCharCase;
	System::Uitypes::TScrollStyle FMemoScrollBars;
	bool FPictureAutoSize;
	System::Word FPictureClipboardFormat;
	System::UnicodeString FPictureFilter;
	Vcl::Graphics::TGraphicClass FPictureGraphicClass;
	Cximage::TcxImageTransparency FPictureTransparency;
	bool FShowExPopupItems;
	bool FShowPicturePopup;
	Cximage::TcxImageAssignPictureEvent FOnAssignPicture;
	Cximage::TcxImageGraphicClassEvent FOnGetGraphicClass;
	System::UnicodeString __fastcall GetPictureGraphicClassName();
	bool __fastcall IsPictureGraphicClassNameStored();
	void __fastcall ReadIsPictureGraphicClassNameEmpty(System::Classes::TReader* Reader);
	void __fastcall SetBlobEditKind(const TcxBlobEditKind Value);
	void __fastcall SetBlobPaintStyle(const TcxBlobPaintStyle Value);
	void __fastcall SetPictureGraphicClass(Vcl::Graphics::TGraphicClass Value);
	void __fastcall SetPictureGraphicClassName(const System::UnicodeString Value);
	void __fastcall WriteIsPictureGraphicClassNameEmpty(System::Classes::TWriter* Writer);
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual bool __fastcall CanValidate();
	virtual Cxedit::TcxEditButtonKind __fastcall DefaultButtonKind();
	virtual int __fastcall DropDownButtonVisibleIndex();
	virtual bool __fastcall DropDownOnClick();
	virtual Cxedit::TcxEditDisplayFormatOptions __fastcall GetDisplayFormatOptions();
	virtual bool __fastcall HasDisplayValue();
	__classmethod virtual Cxdropdownedit::TcxCustomEditPopupWindowClass __fastcall GetPopupWindowClass();
	__classmethod virtual Cxedit::TcxCustomEditViewDataClass __fastcall GetViewDataClass();
	void __fastcall CorrectBlobEditKind();
	virtual Vcl::Graphics::TGraphicClass __fastcall GetDefaultPictureGraphicClass();
	Vcl::Graphics::TGraphicClass __fastcall GetPictureGraphicClass(System::TObject* AItem, int ARecordIndex, bool APastingFromClipboard = false);
	__property bool ApplyStyleToButtons = {read=FApplyStyleToButtons, write=FApplyStyleToButtons, nodefault};
	__property System::Word PictureClipboardFormat = {read=FPictureClipboardFormat, write=FPictureClipboardFormat, nodefault};
	
public:
	__fastcall virtual TcxCustomBlobEditProperties(System::Classes::TPersistent* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual bool __fastcall CompareDisplayValues(const System::Variant &AEditValue1, const System::Variant &AEditValue2);
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	virtual System::UnicodeString __fastcall GetDisplayText(const System::Variant &AEditValue, bool AFullText = false, bool AIsInplace = true);
	virtual Cxdatautils::TcxDataEditValueSource __fastcall GetEditValueSource(bool AEditFocused);
	virtual Cxedit::TcxEditSpecialFeatures __fastcall GetSpecialFeatures();
	virtual Cxedit::TcxEditSupportedOperations __fastcall GetSupportedOperations();
	__classmethod virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
	virtual bool __fastcall IsEditValueValid(System::Variant &AEditValue, bool AEditFocused);
	__property Vcl::Graphics::TGraphicClass PictureGraphicClass = {read=FPictureGraphicClass, write=SetPictureGraphicClass};
	__property bool AlwaysSaveData = {read=FAlwaysSaveData, write=FAlwaysSaveData, default=1};
	__property TcxBlobEditKind BlobEditKind = {read=FBlobEditKind, write=SetBlobEditKind, default=0};
	__property TcxBlobPaintStyle BlobPaintStyle = {read=FBlobPaintStyle, write=SetBlobPaintStyle, default=1};
	__property ImmediateDropDownWhenActivated = {default=1};
	__property bool MemoAutoReplace = {read=FMemoAutoReplace, write=FMemoAutoReplace, default=0};
	__property System::Uitypes::TEditCharCase MemoCharCase = {read=FMemoCharCase, write=FMemoCharCase, default=0};
	__property int MemoMaxLength = {read=FMemoMaxLength, write=FMemoMaxLength, default=0};
	__property bool MemoOEMConvert = {read=FMemoOEMConvert, write=FMemoOEMConvert, default=0};
	__property System::Uitypes::TScrollStyle MemoScrollBars = {read=FMemoScrollBars, write=FMemoScrollBars, default=0};
	__property bool MemoWantReturns = {read=FMemoWantReturns, write=FMemoWantReturns, default=1};
	__property bool MemoWantTabs = {read=FMemoWantTabs, write=FMemoWantTabs, default=1};
	__property bool MemoWordWrap = {read=FMemoWordWrap, write=FMemoWordWrap, default=1};
	__property bool PictureAutoSize = {read=FPictureAutoSize, write=FPictureAutoSize, default=1};
	__property System::UnicodeString PictureFilter = {read=FPictureFilter, write=FPictureFilter};
	__property System::UnicodeString PictureGraphicClassName = {read=GetPictureGraphicClassName, write=SetPictureGraphicClassName, stored=IsPictureGraphicClassNameStored};
	__property Cximage::TcxImageTransparency PictureTransparency = {read=FPictureTransparency, write=FPictureTransparency, default=0};
	__property bool ShowExPopupItems = {read=FShowExPopupItems, write=FShowExPopupItems, default=1};
	__property bool ShowPicturePopup = {read=FShowPicturePopup, write=FShowPicturePopup, default=1};
	__property Cximage::TcxImageAssignPictureEvent OnAssignPicture = {read=FOnAssignPicture, write=FOnAssignPicture};
	__property Cximage::TcxImageGraphicClassEvent OnGetGraphicClass = {read=FOnGetGraphicClass, write=FOnGetGraphicClass};
public:
	/* TcxCustomDropDownEditProperties.Destroy */ inline __fastcall virtual ~TcxCustomBlobEditProperties() { }
	
};


class PASCALIMPLEMENTATION TcxBlobEditProperties : public TcxCustomBlobEditProperties
{
	typedef TcxCustomBlobEditProperties inherited;
	
__published:
	__property AlwaysSaveData = {default=1};
	__property AssignedValues;
	__property BlobEditKind = {default=0};
	__property BlobPaintStyle = {default=1};
	__property ClearKey = {default=0};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property ImmediateDropDownWhenActivated = {default=1};
	__property ImmediateDropDownWhenKeyPressed = {default=1};
	__property ImmediatePost = {default=0};
	__property MemoAutoReplace = {default=0};
	__property MemoCharCase = {default=0};
	__property MemoMaxLength = {default=0};
	__property MemoOEMConvert = {default=0};
	__property MemoScrollBars = {default=0};
	__property MemoWantReturns = {default=1};
	__property MemoWantTabs = {default=1};
	__property MemoWordWrap = {default=1};
	__property PictureAutoSize = {default=1};
	__property PictureFilter = {default=0};
	__property PictureGraphicClassName = {default=0};
	__property PictureTransparency = {default=0};
	__property PopupHeight = {default=200};
	__property PopupWidth = {default=250};
	__property ReadOnly;
	__property ShowExPopupItems = {default=1};
	__property ShowPicturePopup = {default=1};
	__property ValidationErrorIconAlignment = {default=0};
	__property ValidationOptions = {default=1};
	__property OnAssignPicture;
	__property OnButtonClick;
	__property OnChange;
	__property OnCloseQuery;
	__property OnCloseUp;
	__property OnEditValueChanged;
	__property OnGetGraphicClass;
	__property OnInitPopup;
	__property OnPopup;
	__property OnValidate;
public:
	/* TcxCustomBlobEditProperties.Create */ inline __fastcall virtual TcxBlobEditProperties(System::Classes::TPersistent* AOwner) : TcxCustomBlobEditProperties(AOwner) { }
	
public:
	/* TcxCustomDropDownEditProperties.Destroy */ inline __fastcall virtual ~TcxBlobEditProperties() { }
	
};


class PASCALIMPLEMENTATION TcxPopupMemo : public Cxmemo::TcxMemo
{
	typedef Cxmemo::TcxMemo inherited;
	
private:
	TcxCustomBlobEdit* FBlobEdit;
	
protected:
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall SpellCheckerSetValue(const System::Variant &AValue);
public:
	/* TcxCustomTextEdit.Create */ inline __fastcall virtual TcxPopupMemo(System::Classes::TComponent* AOwner)/* overload */ : Cxmemo::TcxMemo(AOwner) { }
	/* TcxCustomTextEdit.Destroy */ inline __fastcall virtual ~TcxPopupMemo() { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxPopupMemo(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Cxmemo::TcxMemo(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxPopupMemo(HWND ParentWindow) : Cxmemo::TcxMemo(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxPopupImage : public Cximage::TcxImage
{
	typedef Cximage::TcxImage inherited;
	
private:
	TcxCustomBlobEdit* FBlobEdit;
	
protected:
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
public:
	/* TcxCustomImage.Create */ inline __fastcall virtual TcxPopupImage(System::Classes::TComponent* AOwner)/* overload */ : Cximage::TcxImage(AOwner) { }
	/* TcxCustomImage.Destroy */ inline __fastcall virtual ~TcxPopupImage() { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxPopupImage(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Cximage::TcxImage(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxPopupImage(HWND ParentWindow) : Cximage::TcxImage(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxCustomBlobEdit : public Cxdropdownedit::TcxCustomPopupEdit
{
	typedef Cxdropdownedit::TcxCustomPopupEdit inherited;
	
private:
	int FButtonWidth;
	Cxbuttons::TcxButton* FCancelButton;
	Cxbuttons::TcxButton* FOkButton;
	Cxedit::TcxCustomEdit* FStorage;
	Cximage::TcxImageEditGraphicClassEvent FOnGetGraphicClass;
	void __fastcall DoPopupImageGetGraphicClass(System::TObject* Sender, bool APastingFromClipboard, Vcl::Graphics::TGraphicClass &AGraphicClass);
	void __fastcall DoPopupImagePropertiesGetGraphicClass(System::TObject* AItem, int ARecordIndex, bool APastingFromClipboard, Vcl::Graphics::TGraphicClass &AGraphicClass);
	HIDESBASE TcxCustomBlobEditProperties* __fastcall GetActiveProperties();
	HIDESBASE TcxCustomBlobEditProperties* __fastcall GetProperties();
	TcxPopupMemo* __fastcall GetStorageMemo();
	TcxPopupImage* __fastcall GetStorageImage();
	void __fastcall InternalChanged(System::TObject* Sender);
	void __fastcall PictureClosePopup(Cxcontrols::TcxControl* Sender, Cxedit::TcxEditCloseUpReason AReason);
	void __fastcall SaveStorage();
	HIDESBASE void __fastcall SetProperties(TcxCustomBlobEditProperties* Value);
	
protected:
	DYNAMIC void __fastcall ColorChanged();
	virtual void __fastcall DoInitPopup();
	virtual void __fastcall DoFinalizePopup();
	DYNAMIC void __fastcall FontChanged();
	virtual System::UnicodeString __fastcall GetDisplayText();
	virtual System::Variant __fastcall GetEditingValue();
	virtual Vcl::Controls::TWinControl* __fastcall GetPopupFocusedControl();
	virtual System::Types::TSize __fastcall GetPopupWindowClientPreferredSize();
	virtual void __fastcall Initialize();
	virtual System::UnicodeString __fastcall InternalGetText();
	virtual bool __fastcall InternalSetText(const System::UnicodeString Value);
	virtual void __fastcall InternalValidateDisplayValue(const System::Variant &ADisplayValue);
	DYNAMIC void __fastcall PopupWindowClosed(System::TObject* Sender);
	virtual void __fastcall PropertiesChanged(System::TObject* Sender);
	virtual void __fastcall SetEditingText(const Vcl::Controls::TCaption Value);
	virtual void __fastcall SetupPopupWindow();
	virtual void __fastcall SynchronizeDisplayValue();
	virtual void __fastcall SynchronizeEditValue();
	virtual void __fastcall CreatePopupControls();
	virtual void __fastcall DestroyPopupControls();
	void __fastcall DoAssignPicture();
	void __fastcall DoOnAssignPicture(Vcl::Graphics::TPicture* APicture);
	Vcl::Graphics::TGraphicClass __fastcall GetPictureGraphicClass(bool APastingFromClipboard = false);
	virtual void __fastcall StorageEditingHandler(System::TObject* Sender, bool &CanEdit);
	__property TcxPopupMemo* StorageMemo = {read=GetStorageMemo};
	__property TcxPopupImage* StorageImage = {read=GetStorageImage};
	__property TabStop = {default=1};
	__property Cximage::TcxImageEditGraphicClassEvent OnGetGraphicClass = {read=FOnGetGraphicClass, write=FOnGetGraphicClass};
	
public:
	__fastcall virtual ~TcxCustomBlobEdit();
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	virtual bool __fastcall IsEditClass();
	__property TcxCustomBlobEditProperties* ActiveProperties = {read=GetActiveProperties};
	__property TcxCustomBlobEditProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxCustomMaskEdit.Create */ inline __fastcall virtual TcxCustomBlobEdit(System::Classes::TComponent* AOwner)/* overload */ : Cxdropdownedit::TcxCustomPopupEdit(AOwner) { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxCustomBlobEdit(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Cxdropdownedit::TcxCustomPopupEdit(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomBlobEdit(HWND ParentWindow) : Cxdropdownedit::TcxCustomPopupEdit(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxBlobEdit : public TcxCustomBlobEdit
{
	typedef TcxCustomBlobEdit inherited;
	
private:
	HIDESBASE TcxBlobEditProperties* __fastcall GetActiveProperties();
	HIDESBASE TcxBlobEditProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(TcxBlobEditProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TcxBlobEditProperties* ActiveProperties = {read=GetActiveProperties};
	
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
	__property TcxBlobEditProperties* Properties = {read=GetProperties, write=SetProperties};
	__property ShowHint;
	__property Style;
	__property StyleDisabled;
	__property StyleFocused;
	__property StyleHot;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Text = {default=0};
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
	__property OnEndDock;
	__property OnStartDock;
public:
	/* TcxCustomBlobEdit.Destroy */ inline __fastcall virtual ~TcxBlobEdit() { }
	
public:
	/* TcxCustomMaskEdit.Create */ inline __fastcall virtual TcxBlobEdit(System::Classes::TComponent* AOwner)/* overload */ : TcxCustomBlobEdit(AOwner) { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxBlobEdit(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : TcxCustomBlobEdit(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxBlobEdit(HWND ParentWindow) : TcxCustomBlobEdit(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxFilterBlobEditHelper : public Cxtextedit::TcxFilterTextEditHelper
{
	typedef Cxtextedit::TcxFilterTextEditHelper inherited;
	
public:
	__classmethod virtual Cxfiltercontrolutils::TcxFilterControlOperators __fastcall GetSupportedFilterOperators(Cxedit::TcxCustomEditProperties* AProperties, Cxdatastorage::TcxValueTypeClass AValueTypeClass, bool AExtendedSet = false);
public:
	/* TObject.Create */ inline __fastcall TcxFilterBlobEditHelper() : Cxtextedit::TcxFilterTextEditHelper() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxFilterBlobEditHelper() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxBlobEditPopupWindow : public Cxdropdownedit::TcxPopupEditPopupWindow
{
	typedef Cxdropdownedit::TcxPopupEditPopupWindow inherited;
	
protected:
	virtual void __fastcall DoPopupControlKey(System::WideChar Key);
	virtual void __fastcall ModalCloseUp();
public:
	/* TcxCustomEditPopupWindow.Create */ inline __fastcall virtual TcxBlobEditPopupWindow(Vcl::Controls::TWinControl* AOwnerControl) : Cxdropdownedit::TcxPopupEditPopupWindow(AOwnerControl) { }
	/* TcxCustomEditPopupWindow.Destroy */ inline __fastcall virtual ~TcxBlobEditPopupWindow() { }
	
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TcxBlobEditPopupWindow(System::Classes::TComponent* AOwner, int Dummy) : Cxdropdownedit::TcxPopupEditPopupWindow(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxBlobEditPopupWindow(HWND ParentWindow) : Cxdropdownedit::TcxPopupEditPopupWindow(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Cxgraphics::TcxImageList* imgBlobImages;
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetBlobText(const System::Variant &Value, TcxCustomBlobEditProperties* AProperties, bool AFullText);
extern DELPHI_PACKAGE Cxgraphics::TcxImageList* __fastcall GetBlobImages(void);
}	/* namespace Cxblobedit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXBLOBEDIT)
using namespace Cxblobedit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxblobeditHPP
