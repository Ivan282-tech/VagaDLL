// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxImage.pas' rev: 35.00 (Windows)

#ifndef CximageHPP
#define CximageHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <System.Variants.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.ExtDlgs.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Clipbrd.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.StdCtrls.hpp>
#include <dxCore.hpp>
#include <dxCoreClasses.hpp>
#include <cxClasses.hpp>
#include <cxContainer.hpp>
#include <cxControls.hpp>
#include <cxGraphics.hpp>
#include <cxLookAndFeels.hpp>
#include <cxGeometry.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxDataUtils.hpp>
#include <cxVariants.hpp>
#include <dxTouch.hpp>
#include <dxSkinsCore.hpp>
#include <dxCoreGraphics.hpp>
#include <dxTypeHelpers.hpp>
#include <cxEdit.hpp>
#include <cxEditConsts.hpp>
#include <Vcl.ImgList.hpp>
#include <dxZoomTrackBar.hpp>
#include <cxTrackBar.hpp>
#include <dxGDIPlusAPI.hpp>
#include <dxGDIPlusClasses.hpp>
#include <dxScrollAnimation.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cximage
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxPopupMenuLayout;
class DELPHICLASS TcxImageViewInfo;
class DELPHICLASS TcxImageViewData;
class DELPHICLASS TcxCustomImageProperties;
class DELPHICLASS TcxImageProperties;
class DELPHICLASS TcxImageZoomingOptions;
class DELPHICLASS TcxImageAnimationOptions;
class DELPHICLASS TcxImageCustomScrollAnimationHelper;
class DELPHICLASS TcxImageVertScrollAnimationHelper;
class DELPHICLASS TcxImageHorzScrollAnimationHelper;
class DELPHICLASS TcxCustomImage;
class DELPHICLASS TcxImage;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TcxPopupMenuItem : unsigned char { pmiCut, pmiCopy, pmiPaste, pmiDelete, pmiLoad, pmiWebCam, pmiSave, pmiCustom };

typedef void __fastcall (__closure *TcxPopupMenuItemClick)(System::TObject* Sender, TcxPopupMenuItem MenuItem);

typedef System::Set<TcxPopupMenuItem, TcxPopupMenuItem::pmiCut, TcxPopupMenuItem::pmiCustom> TcxPopupMenuItems;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxPopupMenuLayout : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::UnicodeString FCustomMenuItemCaption;
	Vcl::Graphics::TBitmap* FCustomMenuItemGlyph;
	TcxCustomImage* FImage;
	TcxPopupMenuItems FMenuItems;
	virtual Vcl::Graphics::TBitmap* __fastcall GetCustomMenuItemGlyph();
	void __fastcall SetCustomMenuItemGlyph(Vcl::Graphics::TBitmap* Value);
	
public:
	__fastcall TcxPopupMenuLayout(TcxCustomImage* AImage);
	__fastcall virtual ~TcxPopupMenuLayout();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property TcxPopupMenuItems MenuItems = {read=FMenuItems, write=FMenuItems, default=127};
	__property System::UnicodeString CustomMenuItemCaption = {read=FCustomMenuItemCaption, write=FCustomMenuItemCaption};
	__property Vcl::Graphics::TBitmap* CustomMenuItemGlyph = {read=GetCustomMenuItemGlyph, write=SetCustomMenuItemGlyph};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxImageViewInfo : public Cxedit::TcxCustomEditViewInfo
{
	typedef Cxedit::TcxCustomEditViewInfo inherited;
	
private:
	bool FFreePicture;
	bool FUseRightToLeftScrollBar;
	Dxzoomtrackbar::TdxCustomZoomTrackBarViewInfo* FZoomTrackBarViewInfo;
	void __fastcall DrawTransparentBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R);
	
protected:
	Dxzoomtrackbar::TdxCustomZoomTrackBarViewInfo* __fastcall CreateZoomTrackBarViewInfo();
	virtual void __fastcall InternalPaint(Cxgraphics::TcxCanvas* ACanvas);
	virtual bool __fastcall IsRepaintOnStateChangingNeeded();
	bool __fastcall GetRealStretch();
	
public:
	bool ShowFocusRect;
	System::Types::TPoint TopLeft;
	System::UnicodeString Caption;
	bool Center;
	Vcl::Graphics::TPicture* Picture;
	Cxgraphics::TcxImageFitMode FitMode;
	int ZoomPercent;
	bool Scalable;
	bool ShowZoomTrackBar;
	__fastcall virtual TcxImageViewInfo();
	__fastcall virtual ~TcxImageViewInfo();
	__property Dxzoomtrackbar::TdxCustomZoomTrackBarViewInfo* ZoomTrackBarViewInfo = {read=FZoomTrackBarViewInfo};
};


class PASCALIMPLEMENTATION TcxImageViewData : public Cxedit::TcxCustomEditViewData
{
	typedef Cxedit::TcxCustomEditViewData inherited;
	
protected:
	void __fastcall CalculateZoomTrackBar(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TPoint &P, Cxcontainer::TcxMouseButton Button, System::Classes::TShiftState Shift, Cxedit::TcxCustomEditViewInfo* AViewInfo, bool AIsMouseEvent, int AZoomPercent);
	
public:
	virtual void __fastcall Calculate(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TPoint &P, Cxcontainer::TcxMouseButton Button, System::Classes::TShiftState Shift, Cxedit::TcxCustomEditViewInfo* AViewInfo, bool AIsMouseEvent);
	virtual void __fastcall EditValueToDrawValue(const System::Variant &AEditValue, Cxedit::TcxCustomEditViewInfo* AViewInfo);
	virtual System::Types::TSize __fastcall GetEditContentSize(Cxgraphics::TcxCanvas* ACanvas, const System::Variant &AEditValue, const Cxedit::TcxEditSizeProperties &AEditSizeProperties, Cxedit::TcxEditValidateInfo* AErrorData = (Cxedit::TcxEditValidateInfo*)(0x0));
public:
	/* TcxCustomEditViewData.Create */ inline __fastcall virtual TcxImageViewData(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditStyle* AStyle, bool AIsInplace) : Cxedit::TcxCustomEditViewData(AProperties, AStyle, AIsInplace) { }
	/* TcxCustomEditViewData.Destroy */ inline __fastcall virtual ~TcxImageViewData() { }
	
};


typedef void __fastcall (__closure *TcxImageAssignPictureEvent)(System::TObject* Sender, Vcl::Graphics::TPicture* const Picture);

typedef void __fastcall (__closure *TcxImageGraphicClassEvent)(System::TObject* AItem, int ARecordIndex, bool APastingFromClipboard, Vcl::Graphics::TGraphicClass &AGraphicClass);

typedef void __fastcall (__closure *TcxImageEditGraphicClassEvent)(System::TObject* Sender, bool APastingFromClipboard, Vcl::Graphics::TGraphicClass &AGraphicClass);

enum DECLSPEC_DENUM TcxImageTransparency : unsigned char { gtDefault, gtOpaque, gtTransparent };

class PASCALIMPLEMENTATION TcxCustomImageProperties : public Cxedit::TcxCustomEditProperties
{
	typedef Cxedit::TcxCustomEditProperties inherited;
	
private:
	System::UnicodeString FCaption;
	System::UnicodeString FCustomFilter;
	int FDefaultHeight;
	Vcl::Graphics::TGraphicClass FGraphicClass;
	TcxImageTransparency FGraphicTransparency;
	bool FNeedUpdateImage;
	TcxPopupMenuLayout* FPopupMenuLayout;
	bool FShowFocusRect;
	Dxzoomtrackbar::TdxCustomZoomTrackBarProperties* FZoomTrackBarProperties;
	bool FCenter;
	Cxgraphics::TcxImageFitMode FFitMode;
	TcxImageAssignPictureEvent FOnAssignPicture;
	System::Classes::TNotifyEvent FOnCustomClick;
	TcxImageGraphicClassEvent FOnGetGraphicClass;
	System::UnicodeString __fastcall GetGraphicClassName();
	bool __fastcall IsGraphicClassNameStored();
	void __fastcall ReadIsGraphicClassNameEmpty(System::Classes::TReader* Reader);
	void __fastcall SetCaption(const System::UnicodeString Value);
	void __fastcall SetGraphicClass(const Vcl::Graphics::TGraphicClass Value);
	void __fastcall SetGraphicClassName(const System::UnicodeString Value);
	void __fastcall SetGraphicTransparency(TcxImageTransparency Value);
	void __fastcall SetPopupMenuLayout(TcxPopupMenuLayout* Value);
	void __fastcall SetShowFocusRect(bool Value);
	void __fastcall WriteIsGraphicClassNameEmpty(System::Classes::TWriter* Writer);
	Cxgraphics::TcxImageFitMode __fastcall CalculateFitMode(bool AProportional, bool AStretch);
	bool __fastcall GetProportional();
	bool __fastcall GetStretch();
	void __fastcall SetCenter(bool AValue);
	void __fastcall SetProportional(bool AValue);
	void __fastcall SetStretch(bool AValue);
	void __fastcall SetFitMode(Cxgraphics::TcxImageFitMode AValue);
	void __fastcall SetZoomTrackBarProperties(Dxzoomtrackbar::TdxCustomZoomTrackBarProperties* AValue);
	
protected:
	virtual bool __fastcall CanValidate();
	virtual Dxzoomtrackbar::TdxCustomZoomTrackBarProperties* __fastcall CreateZoomBarProperties();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall DoAssign(Cxedit::TcxCustomEditProperties* AProperties);
	HIDESBASE bool __fastcall IsDesigning();
	virtual Vcl::Graphics::TGraphicClass __fastcall GetDefaultGraphicClass();
	bool __fastcall GetRealStretch(const System::Types::TSize &APictureSize, const System::Types::TSize &ABoundsSize);
	__classmethod virtual Cxedit::TcxCustomEditViewDataClass __fastcall GetViewDataClass();
	bool __fastcall IsScrollbarsNeeded(Vcl::Graphics::TPicture* APicture);
	__property int DefaultHeight = {read=FDefaultHeight, write=FDefaultHeight, default=15};
	__property Dxzoomtrackbar::TdxCustomZoomTrackBarProperties* ZoomTrackBarProperties = {read=FZoomTrackBarProperties, write=SetZoomTrackBarProperties};
	
public:
	__fastcall virtual TcxCustomImageProperties(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TcxCustomImageProperties();
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	virtual System::UnicodeString __fastcall GetDisplayText(const System::Variant &AEditValue, bool AFullText = false, bool AIsInplace = true);
	virtual Cxdatautils::TcxDataEditValueSource __fastcall GetEditValueSource(bool AEditFocused);
	virtual Vcl::Graphics::TGraphicClass __fastcall GetGraphicClass(System::TObject* AItem, int ARecordIndex, bool APastingFromClipboard = false);
	virtual Cxedit::TcxEditSpecialFeatures __fastcall GetSpecialFeatures();
	virtual Cxedit::TcxEditSupportedOperations __fastcall GetSupportedOperations();
	__classmethod virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
	virtual bool __fastcall IsResetEditClass();
	virtual void __fastcall ValidateDisplayValue(System::Variant &DisplayValue, Vcl::Controls::TCaption &ErrorText, bool &Error, Cxedit::TcxCustomEdit* AEdit);
	__property Vcl::Graphics::TGraphicClass GraphicClass = {read=FGraphicClass, write=SetGraphicClass};
	__property System::UnicodeString Caption = {read=FCaption, write=SetCaption};
	__property bool Center = {read=FCenter, write=SetCenter, default=1};
	__property System::UnicodeString CustomFilter = {read=FCustomFilter, write=FCustomFilter};
	__property Cxgraphics::TcxImageFitMode FitMode = {read=FFitMode, write=SetFitMode, default=3};
	__property System::UnicodeString GraphicClassName = {read=GetGraphicClassName, write=SetGraphicClassName, stored=IsGraphicClassNameStored};
	__property TcxImageTransparency GraphicTransparency = {read=FGraphicTransparency, write=SetGraphicTransparency, default=0};
	__property TcxPopupMenuLayout* PopupMenuLayout = {read=FPopupMenuLayout, write=SetPopupMenuLayout};
	__property bool ShowFocusRect = {read=FShowFocusRect, write=SetShowFocusRect, default=1};
	__property TcxImageAssignPictureEvent OnAssignPicture = {read=FOnAssignPicture, write=FOnAssignPicture};
	__property System::Classes::TNotifyEvent OnCustomClick = {read=FOnCustomClick, write=FOnCustomClick};
	__property TcxImageGraphicClassEvent OnGetGraphicClass = {read=FOnGetGraphicClass, write=FOnGetGraphicClass};
	__property bool Proportional = {read=GetProportional, write=SetProportional, stored=false, nodefault};
	__property bool Stretch = {read=GetStretch, write=SetStretch, stored=false, nodefault};
};


class PASCALIMPLEMENTATION TcxImageProperties : public TcxCustomImageProperties
{
	typedef TcxCustomImageProperties inherited;
	
__published:
	__property AssignedValues;
	__property Caption = {default=0};
	__property Center = {default=1};
	__property ClearKey = {default=0};
	__property CustomFilter = {default=0};
	__property FitMode = {default=3};
	__property GraphicClassName = {default=0};
	__property GraphicTransparency = {default=0};
	__property ImmediatePost = {default=0};
	__property PopupMenuLayout;
	__property Proportional;
	__property ReadOnly;
	__property ShowFocusRect = {default=1};
	__property Stretch;
	__property OnAssignPicture;
	__property OnChange;
	__property OnCustomClick;
	__property OnEditValueChanged;
	__property OnGetGraphicClass;
public:
	/* TcxCustomImageProperties.Create */ inline __fastcall virtual TcxImageProperties(System::Classes::TPersistent* AOwner) : TcxCustomImageProperties(AOwner) { }
	/* TcxCustomImageProperties.Destroy */ inline __fastcall virtual ~TcxImageProperties() { }
	
};


class PASCALIMPLEMENTATION TcxImageZoomingOptions : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	int FMaxZoom;
	int FMinZoom;
	int FZoomPercent;
	bool FShowZoomTrackBar;
	System::Classes::TNotifyEvent FOnChanged;
	void __fastcall SetMaxZoom(int AValue);
	void __fastcall SetMinZoom(int AValue);
	void __fastcall SetZoomPercent(int AValue);
	void __fastcall SetShowZoomTrackBar(bool AValue);
	
public:
	__fastcall virtual TcxImageZoomingOptions();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall Changed();
	__property System::Classes::TNotifyEvent OnChanged = {read=FOnChanged, write=FOnChanged};
	
__published:
	__property int MaxZoom = {read=FMaxZoom, write=SetMaxZoom, default=500};
	__property int MinZoom = {read=FMinZoom, write=SetMinZoom, default=0};
	__property int ZoomPercent = {read=FZoomPercent, write=SetZoomPercent, default=100};
	__property bool ShowZoomTrackBar = {read=FShowZoomTrackBar, write=SetShowZoomTrackBar, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxImageZoomingOptions() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxImageAnimationOptions : public Dxcoreclasses::TcxOwnedPersistent
{
	typedef Dxcoreclasses::TcxOwnedPersistent inherited;
	
private:
	Dxcore::TdxDefaultBoolean FAnimation;
	Dxcore::TdxDefaultBoolean FAnimationLoop;
	Dxgdiplusclasses::TdxGPImage* FGraphic;
	Dxgdiplusclasses::TdxGPImage* __fastcall GetGraphic();
	TcxCustomImage* __fastcall GetOwnerImage();
	void __fastcall SetAnimation(Dxcore::TdxDefaultBoolean AValue);
	void __fastcall SetAnimationLoop(Dxcore::TdxDefaultBoolean AValue);
	
protected:
	void __fastcall CheckGraphic();
	virtual void __fastcall Changed();
	__property Dxgdiplusclasses::TdxGPImage* Graphic = {read=GetGraphic};
	__property TcxCustomImage* Owner = {read=GetOwnerImage};
	
public:
	__fastcall virtual TcxImageAnimationOptions(System::Classes::TPersistent* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property Dxcore::TdxDefaultBoolean Animation = {read=FAnimation, write=SetAnimation, default=2};
	__property Dxcore::TdxDefaultBoolean AnimationLoop = {read=FAnimationLoop, write=SetAnimationLoop, default=2};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxImageAnimationOptions() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxImageCustomScrollAnimationHelper : public Dxscrollanimation::TdxScrollAnimationHelper
{
	typedef Dxscrollanimation::TdxScrollAnimationHelper inherited;
	
private:
	TcxCustomImage* FOwner;
	
protected:
	virtual void __fastcall DoUpdateOwnerPosition(int AValue) = 0 ;
	virtual void __fastcall UpdateOwnerPosition(int AValue);
	__property TcxCustomImage* Owner = {read=FOwner};
	
public:
	__fastcall virtual TcxImageCustomScrollAnimationHelper(TcxCustomImage* AOwner);
public:
	/* {dxScrollAnimation}TdxCustomScrollAnimationHelper<System_Integer>.Destroy */ inline __fastcall virtual ~TcxImageCustomScrollAnimationHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxImageVertScrollAnimationHelper : public TcxImageCustomScrollAnimationHelper
{
	typedef TcxImageCustomScrollAnimationHelper inherited;
	
protected:
	virtual void __fastcall CheckPosition(int &AValue);
	virtual void __fastcall DoUpdateOwnerPosition(int AValue);
	virtual int __fastcall GetOwnerPosition();
public:
	/* TcxImageCustomScrollAnimationHelper.Create */ inline __fastcall virtual TcxImageVertScrollAnimationHelper(TcxCustomImage* AOwner) : TcxImageCustomScrollAnimationHelper(AOwner) { }
	
public:
	/* {dxScrollAnimation}TdxCustomScrollAnimationHelper<System_Integer>.Destroy */ inline __fastcall virtual ~TcxImageVertScrollAnimationHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxImageHorzScrollAnimationHelper : public TcxImageCustomScrollAnimationHelper
{
	typedef TcxImageCustomScrollAnimationHelper inherited;
	
protected:
	virtual void __fastcall CheckPosition(int &AValue);
	virtual void __fastcall DoUpdateOwnerPosition(int AValue);
	virtual int __fastcall GetOwnerPosition();
public:
	/* TcxImageCustomScrollAnimationHelper.Create */ inline __fastcall virtual TcxImageHorzScrollAnimationHelper(TcxCustomImage* AOwner) : TcxImageCustomScrollAnimationHelper(AOwner) { }
	
public:
	/* {dxScrollAnimation}TdxCustomScrollAnimationHelper<System_Integer>.Destroy */ inline __fastcall virtual ~TcxImageHorzScrollAnimationHelper() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxCustomImage : public Cxedit::TcxCustomEdit
{
	typedef Cxedit::TcxCustomEdit inherited;
	
private:
	TcxImageAnimationOptions* FAnimationOptions;
	System::Word FClipboardFormat;
	TcxImageHorzScrollAnimationHelper* FHorzScrollAnimationHelper;
	Vcl::Menus::TPopupMenu* FInternalPopupMenu;
	bool FIsDialogShowed;
	System::Types::TPoint FLastDragPos;
	TcxImageEditGraphicClassEvent FOnGetGraphicClass;
	Vcl::Graphics::TPicture* FPicture;
	TcxImageVertScrollAnimationHelper* FVertScrollAnimationHelper;
	int FZoomPercent;
	TcxImageZoomingOptions* FZoomingOptions;
	Dxzoomtrackbar::TdxZoomTrackBarController* FZoomTrackBarController;
	bool FZoomTrackBarSliding;
	bool __fastcall AllowScaling();
	bool __fastcall CanZoomPercentByMouseWheel(System::Classes::TShiftState AShift, const System::Types::TPoint &AMousePos);
	void __fastcall DecZoomPercent();
	void __fastcall EditAndClear();
	void __fastcall EditPopupMenuClick(System::TObject* Sender);
	TcxCustomImageProperties* __fastcall GetProperties();
	HIDESBASE TcxImageViewInfo* __fastcall GetViewInfo();
	HIDESBASE TcxCustomImageProperties* __fastcall GetActiveProperties();
	void __fastcall IncZoomPercent();
	void __fastcall MenuItemClick(System::TObject* Sender, TcxPopupMenuItem MenuItem);
	void __fastcall PictureChanged(System::TObject* Sender);
	void __fastcall CheckZoomPercent();
	void __fastcall SetAnimationOptions(TcxImageAnimationOptions* Value);
	void __fastcall SetPicture(Vcl::Graphics::TPicture* Value);
	HIDESBASE void __fastcall SetProperties(TcxCustomImageProperties* const Value);
	
protected:
	DYNAMIC void __fastcall DoContextPopup(const System::Types::TPoint &MousePos, bool &Handled);
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall MouseEnter(Vcl::Controls::TControl* AControl);
	DYNAMIC void __fastcall MouseLeave(Vcl::Controls::TControl* AControl);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual bool __fastcall AllowPan(Vcl::Forms::TScrollBarKind AScrollKind);
	DYNAMIC void __fastcall BoundsChanged();
	virtual int __fastcall GetDefaultPanOptions();
	virtual bool __fastcall InternalMouseWheel(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	virtual bool __fastcall IsDefaultGesture(int AGestureID);
	virtual bool __fastcall IsMouseWheelHandleNeeded(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	virtual bool __fastcall IsPanArea(const System::Types::TPoint &APoint);
	virtual bool __fastcall CanAutoSize();
	virtual bool __fastcall CanAutoWidth();
	virtual void __fastcall Initialize();
	virtual System::Variant __fastcall GetEditValue();
	virtual void __fastcall InternalSetEditValue(const System::Variant &Value, bool AIsValueValid);
	virtual void __fastcall PropertiesChanged(System::TObject* Sender);
	int __fastcall GetLeftPos();
	void __fastcall SetLeftPos(int Value);
	int __fastcall GetTopPos();
	void __fastcall SetTopPos(int Value);
	System::Types::TSize __fastcall GetContentSize();
	System::Types::TSize __fastcall GetClientSize();
	Cxcontrols::TcxControl* __fastcall GetInstance();
	void __fastcall Zoom(int ADelta, bool &AHandled);
	int __fastcall GetZoomPercent();
	Cxtrackbar::TcxCustomTrackBarProperties* __fastcall GetZoomTrackBarActiveProperties();
	System::Types::TPoint __fastcall GetZoomTrackBarMouseDownPos();
	Cxtrackbar::TcxCustomTrackBarProperties* __fastcall GetZoomTrackBarProperties();
	Cxtrackbar::TcxCustomTrackBarViewInfo* __fastcall GetZoomTrackBarViewInfo();
	bool __fastcall IsZoomTrackBarInplace();
	void __fastcall InternalSetZoomPercent(int AValue);
	virtual bool __fastcall AllowHybridScrollbarMode();
	virtual bool __fastcall AllowTouchScrollUIMode();
	void __fastcall Centre();
	void __fastcall CheckScrollbars(bool AResetPosition = false);
	virtual void __fastcall DoScrollUIModeChanged();
	virtual void __fastcall InitScrollBarsParameters();
	bool __fastcall IsScrollbarsNeeded();
	virtual bool __fastcall NeedsScrollBars();
	virtual void __fastcall Scroll(Vcl::Forms::TScrollBarKind AScrollBarKind, System::Uitypes::TScrollCode AScrollCode, int &AScrollPos);
	TcxImageAnimationOptions* __fastcall CreateAnimationOptions();
	virtual TcxImageZoomingOptions* __fastcall CreateZoomingOptions();
	virtual Dxzoomtrackbar::TdxZoomTrackBarController* __fastcall CreateZoomTrackBarController();
	void __fastcall AssignFromWebCam();
	virtual bool __fastcall CanPasteFromClipboard();
	virtual void __fastcall CustomClick();
	void __fastcall DoOnAssignPicture();
	virtual void __fastcall DoPictureLoadedFromFile(System::UnicodeString AFileName);
	virtual Vcl::Graphics::TGraphicClass __fastcall GetGraphicClass(bool APastingFromClipboard = false);
	bool __fastcall IsAnimationNotification();
	void __fastcall PreparePopup();
	virtual void __fastcall ZoomingOptionsChangedHandler(System::TObject* Sender);
	virtual void __fastcall SetupZoomTrackBarProperties();
	__property AutoSize = {default=0};
	__property ParentColor = {default=0};
	__property TcxImageAnimationOptions* AnimationOptions = {read=FAnimationOptions, write=SetAnimationOptions};
	__property Vcl::Menus::TPopupMenu* InternalPopupMenu = {read=FInternalPopupMenu};
	__property bool IsDialogShowed = {read=FIsDialogShowed, nodefault};
	__property int ZoomPercent = {read=GetZoomPercent, write=FZoomPercent, nodefault};
	__property TcxImageZoomingOptions* ZoomingOptions = {read=FZoomingOptions, write=FZoomingOptions};
	__property TcxImageEditGraphicClassEvent OnGetGraphicClass = {read=FOnGetGraphicClass, write=FOnGetGraphicClass};
	
public:
	__fastcall virtual TcxCustomImage(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TcxCustomImage();
	virtual void __fastcall CopyToClipboard();
	virtual void __fastcall CutToClipboard();
	DYNAMIC bool __fastcall Focused();
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	void __fastcall LoadFromFile();
	virtual void __fastcall PasteFromClipboard();
	void __fastcall SaveToFile();
	__property TcxCustomImageProperties* ActiveProperties = {read=GetActiveProperties};
	__property System::Word ClipboardFormat = {read=FClipboardFormat, write=FClipboardFormat, nodefault};
	__property Vcl::Graphics::TPicture* Picture = {read=FPicture, write=SetPicture};
	__property TcxCustomImageProperties* Properties = {read=GetProperties, write=SetProperties};
	__property TcxImageViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxCustomImage(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Cxedit::TcxCustomEdit(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomImage(HWND ParentWindow) : Cxedit::TcxCustomEdit(ParentWindow) { }
	
private:
	void *__IcxTrackBar;	// Cxtrackbar::IcxTrackBar 
	void *__IdxZoomClient;	// Dxtouch::IdxZoomClient 
	void *__IdxScrollingControl;	// Cxcontrols::IdxScrollingControl 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {288974F4-38F0-4BED-AB6A-BB9A5476D8D0}
	operator Cxtrackbar::_di_IcxTrackBar()
	{
		Cxtrackbar::_di_IcxTrackBar intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxtrackbar::IcxTrackBar*(void) { return (Cxtrackbar::IcxTrackBar*)&__IcxTrackBar; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B3A0623E-D155-462F-B234-22E9CFC6BFBF}
	operator Dxtouch::_di_IdxZoomClient()
	{
		Dxtouch::_di_IdxZoomClient intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxtouch::IdxZoomClient*(void) { return (Dxtouch::IdxZoomClient*)&__IdxZoomClient; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7F141990-5975-4E6B-BFAF-03D378860F20}
	operator Cxcontrols::_di_IdxScrollingControl()
	{
		Cxcontrols::_di_IdxScrollingControl intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxcontrols::IdxScrollingControl*(void) { return (Cxcontrols::IdxScrollingControl*)&__IdxScrollingControl; }
	#endif
	
};


class PASCALIMPLEMENTATION TcxImage : public TcxCustomImage
{
	typedef TcxCustomImage inherited;
	
private:
	HIDESBASE TcxImageProperties* __fastcall GetActiveProperties();
	HIDESBASE TcxImageProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(TcxImageProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TcxImageProperties* ActiveProperties = {read=GetActiveProperties};
	
__published:
	__property Anchors = {default=3};
	__property AnimationOptions;
	__property AutoSize = {default=0};
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
	__property Picture;
	__property PopupMenu;
	__property TcxImageProperties* Properties = {read=GetProperties, write=SetProperties};
	__property ZoomingOptions;
	__property ShowHint;
	__property Style;
	__property StyleDisabled;
	__property StyleFocused;
	__property StyleHot;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Transparent = {default=0};
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
	__property OnGetGraphicClass;
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
	/* TcxCustomImage.Create */ inline __fastcall virtual TcxImage(System::Classes::TComponent* AOwner)/* overload */ : TcxCustomImage(AOwner) { }
	/* TcxCustomImage.Destroy */ inline __fastcall virtual ~TcxImage() { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxImage(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : TcxCustomImage(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxImage(HWND ParentWindow) : TcxCustomImage(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 cxImageDefaultInplaceHeight = System::Int8(0xf);
extern DELPHI_PACKAGE Vcl::Graphics::TGraphicClass __fastcall GetGraphicClassByName(const System::UnicodeString AClassName);
extern DELPHI_PACKAGE System::Classes::TList* __fastcall GetRegisteredGraphicClasses(void);
extern DELPHI_PACKAGE void __fastcall RegisterGraphicClass(Vcl::Graphics::TGraphicClass AGraphicClass);
extern DELPHI_PACKAGE void __fastcall UnRegisterGraphicClass(Vcl::Graphics::TGraphicClass AGraphicClass);
extern DELPHI_PACKAGE void __fastcall LoadPicture(Vcl::Graphics::TPicture* APicture, Vcl::Graphics::TGraphicClass AGraphicClass, const System::Variant &AValue);
extern DELPHI_PACKAGE void __fastcall SavePicture(Vcl::Graphics::TPicture* APicture, System::AnsiString &AValue)/* overload */;
extern DELPHI_PACKAGE void __fastcall SavePicture(Vcl::Graphics::TPicture* APicture, System::Variant &AValue)/* overload */;
}	/* namespace Cximage */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXIMAGE)
using namespace Cximage;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CximageHPP
