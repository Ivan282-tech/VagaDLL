// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxLayoutControl.pas' rev: 35.00 (Windows)

#ifndef DxlayoutcontrolHPP
#define DxlayoutcontrolHPP

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
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.IniFiles.hpp>
#include <System.Contnrs.hpp>
#include <Vcl.ImgList.hpp>
#include <dxCore.hpp>
#include <dxCoreClasses.hpp>
#include <dxMessages.hpp>
#include <cxClasses.hpp>
#include <cxGeometry.hpp>
#include <cxGraphics.hpp>
#include <cxControls.hpp>
#include <cxLookAndFeels.hpp>
#include <cxLibraryConsts.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxEdit.hpp>
#include <cxPC.hpp>
#include <dxFluentDesignFormInterfaces.hpp>
#include <dxLayoutLookAndFeels.hpp>
#include <dxLayoutCommon.hpp>
#include <dxLayoutSelection.hpp>
#include <dxLayoutContainer.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxlayoutcontrol
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TdxLayoutControlPersistent;
class DELPHICLASS TdxLayoutControlContainerPainter;
class DELPHICLASS TdxLayoutControlContainerViewInfo;
class DELPHICLASS TdxLayoutControlContainer;
class DELPHICLASS TdxStoringOptions;
class DELPHICLASS TdxLayoutItemOptions;
class DELPHICLASS TdxCustomLayoutControlHandler;
class DELPHICLASS TdxCustomLayoutControl;
class DELPHICLASS TdxLayoutControl;
class DELPHICLASS TdxLayoutControlPainter;
class DELPHICLASS TdxLayoutControlViewInfo;
class DELPHICLASS TdxDesignCustomizationHelper;
//-- type declarations -------------------------------------------------------
typedef System::TMetaClass* TdxLayoutControlPainterClass;

typedef System::TMetaClass* TdxLayoutControlViewInfoClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutControlPersistent : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TdxCustomLayoutControl* FControl;
	
protected:
	virtual void __fastcall Changed();
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall virtual TdxLayoutControlPersistent(TdxCustomLayoutControl* AControl);
	__property TdxCustomLayoutControl* Control = {read=FControl};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxLayoutControlPersistent() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutControlContainerPainter : public Dxlayoutcontainer::TdxLayoutContainerPainter
{
	typedef Dxlayoutcontainer::TdxLayoutContainerPainter inherited;
	
public:
	/* TdxLayoutContainerPainter.Create */ inline __fastcall virtual TdxLayoutControlContainerPainter(Dxlayoutcontainer::TdxLayoutContainerViewInfo* AViewInfo) : Dxlayoutcontainer::TdxLayoutContainerPainter(AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxLayoutControlContainerPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutControlContainerViewInfo : public Dxlayoutcontainer::TdxLayoutContainerViewInfo
{
	typedef Dxlayoutcontainer::TdxLayoutContainerViewInfo inherited;
	
public:
	/* TdxLayoutContainerViewInfo.Create */ inline __fastcall virtual TdxLayoutControlContainerViewInfo(Dxlayoutcontainer::TdxLayoutContainer* AContainer) : Dxlayoutcontainer::TdxLayoutContainerViewInfo(AContainer) { }
	/* TdxLayoutContainerViewInfo.Destroy */ inline __fastcall virtual ~TdxLayoutControlContainerViewInfo() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxLayoutControlContainer : public Dxlayoutcontainer::TdxLayoutContainer
{
	typedef Dxlayoutcontainer::TdxLayoutContainer inherited;
	
private:
	TdxCustomLayoutControl* FControl;
	TdxLayoutControlContainerPainter* __fastcall GetPainter();
	TdxLayoutControlContainerViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	virtual void __fastcall ScaleForPPI(int ATargetPPI);
	virtual void __fastcall SetDefaultItemName(Dxlayoutcontainer::TdxCustomLayoutItem* AItem);
	virtual Dxlayoutcontainer::TdxLayoutCustomizeFormMenuItems __fastcall DoGetCustomizationMenuItems(System::Classes::TList* const ASelectedItems);
	virtual Dxlayoutcontainer::TdxLayoutContainerPainterClass __fastcall GetPainterClass();
	virtual Dxlayoutcontainer::TdxLayoutContainerViewInfoClass __fastcall GetViewInfoClass();
	virtual bool __fastcall GetStoredProperties(System::Classes::TStrings* AProperties);
	virtual void __fastcall DoSetStoredPropertyValue(const System::UnicodeString AName, const System::Variant &AValue);
	virtual void __fastcall DoGetStoredPropertyValue(const System::UnicodeString AName, System::Variant &AValue);
	virtual void __fastcall GetItemStoredProperties(Dxlayoutcontainer::TdxCustomLayoutItem* AItem, System::Classes::TStrings* AProperties);
	virtual void __fastcall DoGetItemStoredPropertyValue(Dxlayoutcontainer::TdxCustomLayoutItem* AItem, const System::UnicodeString AName, System::Variant &AValue);
	virtual void __fastcall DoSetItemStoredPropertyValue(Dxlayoutcontainer::TdxCustomLayoutItem* AItem, const System::UnicodeString AName, const System::Variant &AValue);
	virtual bool __fastcall CanGetHitTest(const System::Types::TPoint &P);
	virtual bool __fastcall CanRestore();
	virtual void __fastcall Restore();
	virtual void __fastcall SizeAdjustment();
	virtual void __fastcall Store();
	virtual bool __fastcall StoringSupports();
	virtual Cxcontrols::TdxControlsDesignSelectorHelper* __fastcall CreateItemSelectorHelper(Dxlayoutcontainer::TdxLayoutItem* AItem);
	virtual void __fastcall CustomizationChanged();
	virtual void __fastcall CustomizeFormPostUpdate(Dxlayoutcontainer::TdxLayoutCustomizeFormUpdateTypes AUpdateTypes);
	virtual void __fastcall PostBuildSelectionLayer();
	virtual void __fastcall PostInvalidateSelectionLayer(const System::Types::TRect &R);
	virtual void __fastcall PostLayoutChanged(Cxcontrols::TdxChangeType AType = (Cxcontrols::TdxChangeType)(0x2));
	virtual void __fastcall PostPlaceControls();
	virtual bool __fastcall IsFloatingSupported();
	virtual bool __fastcall AllowFloatingDragImage();
	virtual bool __fastcall AllowFloatingGroups();
	virtual Dxlayoutcontainer::TdxLayoutCustomFloatForm* __fastcall CreateFloatForm();
	virtual void __fastcall InitializeFloatForm(Dxlayoutcontainer::TdxCustomLayoutItem* AItem);
	virtual Dxlayoutcontainer::TdxLayoutGroup* __fastcall GetFloatDock(Dxlayoutcontainer::TdxCustomLayoutItem* AItem);
	virtual bool __fastcall AllowWrapItems();
	virtual bool __fastcall CanProcessKeyboard();
	virtual bool __fastcall CanUpdate();
	virtual Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	virtual System::Types::TRect __fastcall GetClientBounds();
	virtual System::Types::TRect __fastcall GetClientRect();
	virtual System::Classes::TComponent* __fastcall GetItemsOwner();
	virtual System::Classes::TComponent* __fastcall GetItemsParentComponent();
	virtual Cxcontrols::TcxControl* __fastcall GetItemsParentControl();
	virtual System::Types::TPoint __fastcall GetScrollOffset();
	virtual Dxlayoutselection::TdxLayoutRunTimeSelectionHelperClass __fastcall GetSelectionHelperClass();
	virtual bool __fastcall IsTransparent();
	virtual bool __fastcall IsTransparentBackground();
	virtual bool __fastcall IsAutoControlAlignment();
	virtual bool __fastcall IsAutoControlTabOrders();
	virtual bool __fastcall IsFocusControlOnItemCaptionClick();
	virtual bool __fastcall IsShowLockedGroupChildren();
	virtual bool __fastcall IsSizableHorz();
	virtual bool __fastcall IsSizableVert();
	virtual void __fastcall MakeVisible(const System::Types::TRect &ARect, bool AFully);
	virtual Vcl::Graphics::TFont* __fastcall GetBoldFont();
	virtual Vcl::Graphics::TFont* __fastcall GetDefaultFont();
	virtual void __fastcall InitializeSubControlsCxLookAndFeel();
	virtual void __stdcall LayoutLookAndFeelUserChanged();
	__property TdxLayoutControlContainerPainter* Painter = {read=GetPainter};
	
public:
	__fastcall virtual TdxLayoutControlContainer(TdxCustomLayoutControl* AControl);
	virtual void __fastcall BeginDragAndDrop();
	virtual bool __fastcall CanDragAndDrop();
	virtual void __fastcall FinishDragAndDrop(bool Accepted);
	virtual void __fastcall Modified();
	__property TdxCustomLayoutControl* Control = {read=FControl};
	__property TdxLayoutControlContainerViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TdxLayoutContainer.Destroy */ inline __fastcall virtual ~TdxLayoutControlContainer() { }
	
};


typedef System::TMetaClass* TdxLayoutControlContainerClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxStoringOptions : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::UnicodeString FIniFileName;
	System::UnicodeString FRegistryPath;
	bool FStoreToIniFile;
	bool FStoreToRegistry;
	
protected:
	bool __fastcall CanStoreToIniFile();
	bool __fastcall CanStoreToRegistry();
	bool __fastcall CanRestoreFromIniFile();
	bool __fastcall CanRestoreFromRegistry();
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property System::UnicodeString IniFileName = {read=FIniFileName, write=FIniFileName};
	__property System::UnicodeString RegistryPath = {read=FRegistryPath, write=FRegistryPath};
	__property bool StoreToIniFile = {read=FStoreToIniFile, write=FStoreToIniFile, default=0};
	__property bool StoreToRegistry = {read=FStoreToRegistry, write=FStoreToRegistry, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxStoringOptions() { }
	
public:
	/* TObject.Create */ inline __fastcall TdxStoringOptions() : System::Classes::TPersistent() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutItemOptions : public TdxLayoutControlPersistent
{
	typedef TdxLayoutControlPersistent inherited;
	
private:
	bool FAllowFloatingDragImage;
	bool FAllowFloatingGroups;
	bool FAutoControlAreaAlignment;
	bool FAutoControlTabOrders;
	bool FFocusControlOnItemCaptionClick;
	bool FShowLockedGroupChildren;
	bool FSizableHorz;
	bool FSizableVert;
	void __fastcall SetAutoControlAreaAlignment(bool Value);
	void __fastcall SetAutoControlTabOrders(bool Value);
	void __fastcall SetShowLockedGroupChildren(bool Value);
	bool __fastcall GetShowQuickCustomizationToolbar();
	void __fastcall SetShowQuickCustomizationToolbar(bool Value);
	bool __fastcall GetAllowGroupWrapItems();
	bool __fastcall GetAllowQuickCustomize();
	bool __fastcall GetAllowRename();
	void __fastcall SetAllowQuickCustomize(bool Value);
	void __fastcall SetAllowGroupWrapItems(bool Value);
	void __fastcall SetAllowRename(bool Value);
	
protected:
	virtual void __fastcall Changed();
	__property bool AllowFloatingDragImage = {read=FAllowFloatingDragImage, write=FAllowFloatingDragImage, default=1};
	
public:
	__fastcall virtual TdxLayoutItemOptions(TdxCustomLayoutControl* AControl);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property bool AllowFloatingGroups = {read=FAllowFloatingGroups, write=FAllowFloatingGroups, default=0};
	__property bool AllowQuickCustomize = {read=GetAllowQuickCustomize, write=SetAllowQuickCustomize, stored=false, default=0};
	__property bool AllowGroupWrapItems = {read=GetAllowGroupWrapItems, write=SetAllowGroupWrapItems, default=0};
	__property bool AllowRename = {read=GetAllowRename, write=SetAllowRename, default=1};
	__property bool AutoControlAreaAlignment = {read=FAutoControlAreaAlignment, write=SetAutoControlAreaAlignment, default=1};
	__property bool AutoControlTabOrders = {read=FAutoControlTabOrders, write=SetAutoControlTabOrders, default=1};
	__property bool FocusControlOnItemCaptionClick = {read=FFocusControlOnItemCaptionClick, write=FFocusControlOnItemCaptionClick, default=0};
	__property bool ShowLockedGroupChildren = {read=FShowLockedGroupChildren, write=SetShowLockedGroupChildren, default=1};
	__property bool ShowQuickCustomizationToolbar = {read=GetShowQuickCustomizationToolbar, write=SetShowQuickCustomizationToolbar, default=1};
	__property bool SizableHorz = {read=FSizableHorz, write=FSizableHorz, default=0};
	__property bool SizableVert = {read=FSizableVert, write=FSizableVert, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxLayoutItemOptions() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TdxLayoutAutoContentSize : unsigned char { acsWidth, acsHeight };

typedef System::Set<TdxLayoutAutoContentSize, TdxLayoutAutoContentSize::acsWidth, TdxLayoutAutoContentSize::acsHeight> TdxLayoutAutoContentSizes;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomLayoutControlHandler : public Dxcoreclasses::TcxIUnknownObject
{
	typedef Dxcoreclasses::TcxIUnknownObject inherited;
	
private:
	TdxCustomLayoutControl* FControl;
	TdxLayoutControlViewInfo* __fastcall GetViewInfo();
	
protected:
	__property TdxCustomLayoutControl* Control = {read=FControl};
	__property TdxLayoutControlViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	__fastcall virtual TdxCustomLayoutControlHandler(TdxCustomLayoutControl* AControl);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxCustomLayoutControlHandler() { }
	
};

#pragma pack(pop)

typedef void __fastcall (__closure *TdxLayoutControlGetItemStoredPropertiesEvent)(TdxCustomLayoutControl* Sender, Dxlayoutcontainer::TdxCustomLayoutItem* AItem, System::Classes::TStrings* AProperties);

typedef void __fastcall (__closure *TdxLayoutControlGetItemStoredPropertyValueEvent)(TdxCustomLayoutControl* Sender, Dxlayoutcontainer::TdxCustomLayoutItem* AItem, const System::UnicodeString AName, System::Variant &AValue);

typedef void __fastcall (__closure *TdxLayoutControlSetItemStoredPropertyValueEvent)(TdxCustomLayoutControl* Sender, Dxlayoutcontainer::TdxCustomLayoutItem* AItem, const System::UnicodeString AName, const System::Variant &AValue);

typedef void __fastcall (__closure *TdxLayoutControlGetStoredPropertiesEvent)(TdxCustomLayoutControl* Sender, System::Classes::TStrings* AProperties);

typedef void __fastcall (__closure *TdxLayoutControlGetStoredPropertyValueEvent)(TdxCustomLayoutControl* Sender, const System::UnicodeString AName, System::Variant &AValue);

typedef void __fastcall (__closure *TdxLayoutControlSetStoredPropertyValueEvent)(TdxCustomLayoutControl* Sender, const System::UnicodeString AName, const System::Variant &AValue);

typedef void __fastcall (__closure *TdxLayoutGetCustomizationMenuItemsEvent)(System::TObject* Sender, System::Classes::TList* const ASelectedItems, Dxlayoutcontainer::TdxLayoutCustomizeFormMenuItems &AMenuItems);

class PASCALIMPLEMENTATION TdxCustomLayoutControl : public Cxcontrols::TcxScrollingControl
{
	typedef Cxcontrols::TcxScrollingControl inherited;
	
private:
	Vcl::Graphics::TFont* FBoldFont;
	TdxLayoutControlContainer* FContainer;
	Dxlayoutcontainer::TdxCustomLayoutHitTest* FDragDropHitTest;
	Dxlayoutcontainer::TdxLayoutAutoAligns FLoadedAutoAligns;
	Cxgraphics::TcxBitmap* FLockedStateImage;
	TdxLayoutControlPainter* FPainter;
	TdxLayoutControlViewInfo* FViewInfo;
	System::Classes::TMemoryStream* FStoredStream;
	System::Classes::TList* FStoredItems;
	TdxLayoutItemOptions* FOptionsItem;
	TdxStoringOptions* FOptionsStoring;
	bool FRedrawOnResize;
	bool FBestFitApplying;
	bool FJustLoaded;
	bool FIsSizeSet;
	bool FIsPrinting;
	int FScrollChangeCount;
	bool FRightButtonPressed;
	int FLockModifiedCount;
	bool FIsPopupShown;
	System::Classes::TNotifyEvent FOnCustomization;
	TdxLayoutGetCustomizationMenuItemsEvent FOnGetCustomizationMenuItems;
	TdxLayoutControlGetItemStoredPropertiesEvent FOnGetItemStoredProperties;
	TdxLayoutControlGetItemStoredPropertyValueEvent FOnGetItemStoredPropertyValue;
	TdxLayoutControlSetItemStoredPropertyValueEvent FOnSetItemStoredPropertyValue;
	TdxLayoutControlGetStoredPropertiesEvent FOnGetStoredProperties;
	TdxLayoutControlGetStoredPropertyValueEvent FOnGetStoredPropertyValue;
	TdxLayoutControlSetStoredPropertyValueEvent FOnSetStoredPropertyValue;
	TdxLayoutAutoContentSizes __fastcall GetAutoContentSizes();
	Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	System::Types::TRect __fastcall GetContentBounds();
	bool __fastcall GetCustomization();
	Dxlayoutcontainer::TdxLayoutAvailableItemsViewKind __fastcall GetCustomizeAvailableItemsViewKind();
	Dxlayoutcontainer::TdxLayoutControlCustomCustomizeForm* __fastcall GetCustomizeForm();
	System::Types::TRect __fastcall GetCustomizeFormBounds();
	Dxlayoutcontainer::TdxLayoutControlCustomCustomizeFormClass __fastcall GetCustomizeFormClass();
	bool __fastcall GetCustomizeFormTabbedView();
	System::Types::TRect __fastcall GetDesignSelectorRect();
	Dxlayoutcontainer::TdxLayoutDragDropMode __fastcall GetDragDropMode();
	bool __fastcall GetHighlightRoot();
	Dxlayoutcontainer::TdxLayoutGroup* __fastcall GetItems();
	Dxlayoutcontainer::TdxLayoutDirection __fastcall GetLayoutDirection();
	Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* __fastcall GetLayoutLookAndFeel();
	Dxlayoutcontainer::TdxLayoutCustomizeFormMenuItems __fastcall GetMenuItems();
	int __fastcall GetOccupiedClientHeight();
	int __fastcall GetOccupiedClientWidth();
	Dxlayoutcontainer::TdxLayoutImageOptions* __fastcall GetOptionsImage();
	bool __fastcall GetShowDesignSelectors();
	Dxlayoutcontainer::TdxUndoRedoManager* __fastcall GetUndoRedoManager();
	void __fastcall SetAutoContentSizes(TdxLayoutAutoContentSizes Value);
	void __fastcall SetCustomization(bool Value);
	void __fastcall SetCustomizeAvailableItemsViewKind(Dxlayoutcontainer::TdxLayoutAvailableItemsViewKind Value);
	void __fastcall SetCustomizeFormBounds(const System::Types::TRect &AValue);
	void __fastcall SetCustomizeFormClass(Dxlayoutcontainer::TdxLayoutControlCustomCustomizeFormClass AValue);
	void __fastcall SetCustomizeFormTabbedView(bool Value);
	void __fastcall SetDragDropMode(Dxlayoutcontainer::TdxLayoutDragDropMode Value);
	void __fastcall SetHighlightRoot(bool Value);
	void __fastcall SetLayoutDirection(Dxlayoutcontainer::TdxLayoutDirection Value);
	void __fastcall SetLayoutLookAndFeel(Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* Value);
	void __fastcall SetMenuItems(Dxlayoutcontainer::TdxLayoutCustomizeFormMenuItems Value);
	void __fastcall SetOptionsImage(Dxlayoutcontainer::TdxLayoutImageOptions* Value);
	void __fastcall SetOptionsItem(TdxLayoutItemOptions* Value);
	void __fastcall SetShowDesignSelectors(bool Value);
	bool __fastcall GetAutoControlAlignment();
	bool __fastcall GetAutoControlTabOrders();
	Dxlayoutcontainer::TdxCustomLayoutItem* __fastcall GetAbsoluteItem(int Index);
	int __fastcall GetAbsoluteItemCount();
	Dxlayoutcontainer::TdxLayoutAlignmentConstraint* __fastcall GetAlignmentConstraint(int Index);
	int __fastcall GetAlignmentConstraintCount();
	Dxlayoutcontainer::TdxCustomLayoutItem* __fastcall GetAvailableItem(int Index);
	int __fastcall GetAvailableItemCount();
	void __fastcall SetAutoControlAlignment(bool Value);
	void __fastcall SetAutoControlTabOrders(bool Value);
	void __fastcall SetOptionsStoring(TdxStoringOptions* Value);
	System::UnicodeString __fastcall GetIniFileName();
	System::UnicodeString __fastcall GetRegistryPath();
	bool __fastcall GetStoreInIniFile();
	bool __fastcall GetStoreInRegistry();
	void __fastcall SetIniFileName(const System::UnicodeString Value);
	void __fastcall SetRegistryPath(const System::UnicodeString Value);
	void __fastcall SetStoreInIniFile(const bool Value);
	void __fastcall SetStoreInRegistry(const bool Value);
	void __fastcall PostPlaceControls();
	void __fastcall SizeAdjustment();
	void __fastcall CreateHandlers();
	void __fastcall DestroyHandlers();
	void __fastcall ContainerChangedHandler(System::TObject* Sender);
	void __fastcall ContainerSelectionChangedHandler(System::TObject* Sender);
	void __fastcall InitializeSubControlsCxLookAndFeel();
	void __fastcall MasterLookAndFeelBeginChangeHandler(System::TObject* Sender);
	void __fastcall MasterLookAndFeelEndChangeHandler(System::TObject* Sender);
	void __fastcall RefreshBoldFont();
	HIDESBASE MESSAGE void __fastcall WMContextMenu(Winapi::Messages::TWMContextMenu &Message);
	HIDESBASE MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall CMChildKey(Vcl::Controls::TCMChildKey &Message);
	MESSAGE void __fastcall CMControlChange(Vcl::Controls::TCMControlChange &Message);
	HIDESBASE MESSAGE void __fastcall CMControlListChange(Vcl::Controls::TCMControlListChange &Message);
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMDialogKey(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMHintShow(Vcl::Controls::TCMHintShow &Message);
	MESSAGE void __fastcall CMTabStopChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall DXMPlaceControls(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall DXMLayoutChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall DXMBuildSelectionLayer(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall DXMInvalidateSelectionLayer(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall DXMCustomizeFormUpdate(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall DXMUpdateScrollPos(Winapi::Messages::TMessage &Message);
	
protected:
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	virtual void __fastcall AlignControls(Vcl::Controls::TControl* AControl, System::Types::TRect &Rect);
	virtual void __fastcall BiDiModeChanged();
	virtual void __fastcall CreateHandle();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWindowHandle(const Vcl::Controls::TCreateParams &Params);
	virtual bool __fastcall FluentDesignContainerControlCanBeOpaque();
	virtual System::Uitypes::TCursor __fastcall GetCurrentCursor(int X, int Y);
	DYNAMIC void __fastcall DoEnter();
	DYNAMIC void __fastcall DoExit();
	virtual void __fastcall DoGetCustomizationMenuItems(System::Classes::TList* const ASelectedItems, Dxlayoutcontainer::TdxLayoutCustomizeFormMenuItems &AMenuItems);
	virtual bool __fastcall DoShowPopupMenu(System::Classes::TComponent* AMenu, int X, int Y);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall Loaded();
	virtual void __fastcall Modified();
	virtual void __fastcall Paint();
	virtual void __fastcall ScrollPosChanged(const System::Types::TPoint &AOffset);
	virtual void __fastcall SetBiDiMode(System::Classes::TBiDiMode Value);
	virtual void __fastcall SetName(const System::Classes::TComponentName Value);
	virtual void __fastcall SetParentBackground(bool Value);
	virtual void __fastcall WriteState(System::Classes::TWriter* Writer);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	void __stdcall SelectionChanged();
	virtual bool __fastcall CanProcessChildren();
	Dxlayoutcontainer::TdxLayoutContainer* __fastcall GetContainer();
	bool __fastcall CreateFieldControls(int X, int Y, System::TObject* ADataSource, System::Classes::TList* AFieldList);
	void __fastcall DoCreateFieldControl(Vcl::Controls::TControl* AControl, System::TObject* AField);
	bool __fastcall NeedCreateCaption();
	void __fastcall AcrylicHostControlChanged(Dxfluentdesignforminterfaces::_di_IdxAcrylicHostControl AValue, bool AHasAcrylicParent);
	virtual void __fastcall ChangeScaleEx(int M, int D, bool IsDpiChange);
	virtual void __fastcall ScaleFactorChanging();
	virtual void __fastcall ScaleFactorChanged();
	bool __fastcall CanAutoHeight();
	bool __fastcall CanAutoWidth();
	virtual bool __fastcall CanAutoSize(int &NewWidth, int &NewHeight);
	virtual bool __fastcall CanFocusOnClick(int X, int Y)/* overload */;
	bool __fastcall CanGetHitTest(const System::Types::TPoint &P);
	virtual bool __fastcall CanMultiSelect();
	bool __fastcall CanProcessKeyboard();
	virtual bool __fastcall CanShowSelection();
	virtual bool __fastcall HasBackground();
	bool __fastcall IsContainerReady();
	virtual bool __fastcall IsInternalControl(Vcl::Controls::TControl* AControl);
	bool __fastcall IsFocusControlOnItemCaptionClick();
	bool __fastcall IsLayoutLoading();
	bool __fastcall IsShowLockedGroupChildren();
	bool __fastcall IsSizableHorz();
	bool __fastcall IsSizableVert();
	bool __fastcall IsToolSelected();
	virtual bool __fastcall IsTransparentBackground();
	bool __fastcall IsUpdateLocked();
	virtual bool __fastcall NeedRedrawOnResize();
	DYNAMIC void __fastcall BoundsChanged();
	DYNAMIC void __fastcall FontChanged();
	virtual void __fastcall LayoutChanged(Cxcontrols::TdxChangeType AType = (Cxcontrols::TdxChangeType)(0x2));
	void __fastcall PostLayoutChanged(Cxcontrols::TdxChangeType AType = (Cxcontrols::TdxChangeType)(0x2));
	DYNAMIC void __fastcall DblClick();
	DYNAMIC bool __fastcall GetDesignHitTest(int X, int Y, System::Classes::TShiftState Shift);
	virtual System::UnicodeString __fastcall GetStatusHint(const System::Types::TPoint &APoint);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseLeave(Vcl::Controls::TControl* AControl);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual bool __fastcall AllowTouchScrollUIMode();
	virtual void __fastcall DoCreateScrollBars();
	virtual bool __fastcall InternalMouseWheel(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	virtual bool __fastcall IsMouseWheelHandleNeeded(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	virtual bool __fastcall IsScrollDataValid();
	virtual bool __fastcall IsPopupScrollBars();
	virtual System::Types::TSize __fastcall GetContentSize();
	virtual Cxlookandfeels::TcxLookAndFeel* __fastcall GetScrollBarLookAndFeel();
	System::Types::TPoint __fastcall GetScrollOffset();
	virtual Cxcontrols::_di_IdxTouchScrollUIOwner __fastcall GetTouchScrollUIOwner(const System::Types::TPoint &APoint);
	virtual bool __fastcall NeedsToBringInternalControlsToFront();
	virtual void __fastcall ScrollBarVisibilityChanged(Cxcontrols::TScrollBarKinds AScrollBars);
	virtual bool __fastcall AllowAutoDragAndDropAtDesignTime(int X, int Y, System::Classes::TShiftState Shift);
	DYNAMIC bool __fastcall AllowDragAndDropWithoutFocus();
	DYNAMIC bool __fastcall CanDrag(int X, int Y);
	bool __fastcall CanDragAndDrop();
	virtual bool __fastcall CanStartDragAndDrop(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual Cxcontrols::TcxDragAndDropObjectClass __fastcall GetDragAndDropObjectClass();
	DYNAMIC bool __fastcall StartDragAndDrop(const System::Types::TPoint &P);
	DYNAMIC void __fastcall EndDragAndDrop(bool Accepted);
	Cxlookandfeels::TcxLookAndFeel* __fastcall GetCxLookAndFeel();
	virtual TdxLayoutControlPainterClass __fastcall GetPainterClass();
	virtual TdxLayoutControlViewInfoClass __fastcall GetViewInfoClass();
	virtual void __fastcall PostBuildSelectionLayer();
	virtual void __fastcall PostInvalidateSelectionLayer(const System::Types::TRect &R);
	virtual void __fastcall DoGetItemStoredProperties(Dxlayoutcontainer::TdxCustomLayoutItem* AItem, System::Classes::TStrings* AProperties);
	virtual void __fastcall DoGetItemStoredPropertyValue(Dxlayoutcontainer::TdxCustomLayoutItem* AItem, const System::UnicodeString AName, System::Variant &AValue);
	virtual void __fastcall DoSetItemStoredPropertyValue(Dxlayoutcontainer::TdxCustomLayoutItem* AItem, const System::UnicodeString AName, const System::Variant &AValue);
	virtual void __fastcall DoGetStoredProperties(System::Classes::TStrings* AProperties);
	virtual void __fastcall DoGetStoredPropertyValue(const System::UnicodeString AName, System::Variant &AValue);
	virtual void __fastcall DoSetStoredPropertyValue(const System::UnicodeString AName, const System::Variant &AValue);
	bool __fastcall OldLoadFromIniFile(const System::UnicodeString AFileName);
	bool __fastcall OldLoadFromRegistry(const System::UnicodeString ARegistryPath);
	bool __fastcall OldLoadFromStream(System::Classes::TStream* AStream);
	void __fastcall CancelLastUndo();
	void __fastcall SaveToUndo();
	void __fastcall CreateBoldFont();
	void __fastcall CreateContainer();
	void __fastcall CreateOptions();
	virtual Dxlayoutcontainer::TdxLayoutAlignmentConstraintClass __fastcall GetAlignmentConstraintClass();
	virtual TdxLayoutControlContainerClass __fastcall GetContainerClass();
	void __fastcall DestroyBoldFont();
	void __fastcall DestroyContainer();
	void __fastcall DestroyOptions();
	void __fastcall CustomizeFormPostUpdate(Dxlayoutcontainer::TdxLayoutCustomizeFormUpdateTypes AUpdateTypes);
	virtual void __fastcall DoCustomization();
	void __fastcall BeginPrint(const System::Types::TRect &APrintBounds);
	void __fastcall EndPrint();
	__property Vcl::Graphics::TFont* BoldFont = {read=FBoldFont};
	__property Cxlookandfeels::TcxLookAndFeel* cxLookAndFeel = {read=GetCxLookAndFeel};
	__property Dxlayoutcontainer::TdxLayoutDragDropMode DragDropMode = {read=GetDragDropMode, write=SetDragDropMode, nodefault};
	__property Dxlayoutcontainer::TdxLayoutCustomizeFormMenuItems MenuItems = {read=GetMenuItems, write=SetMenuItems, nodefault};
	
public:
	__fastcall virtual TdxCustomLayoutControl(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxCustomLayoutControl();
	DYNAMIC void __fastcall BeginDragAndDrop();
	DYNAMIC void __fastcall GetTabOrderList(System::Classes::TList* List);
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	virtual void __fastcall InitiateAction();
	virtual void __fastcall ScaleForPPI(int NewPPI);
	void __fastcall Clear();
	Dxlayoutcontainer::TdxLayoutAlignmentConstraint* __fastcall CreateAlignmentConstraint();
	Dxlayoutcontainer::TdxLayoutItem* __fastcall FindItem(Vcl::Controls::TControl* AControl)/* overload */;
	Dxlayoutcontainer::TdxLayoutItem* __fastcall FindItem(NativeUInt AControlHandle)/* overload */;
	Dxlayoutcontainer::TdxCustomLayoutItem* __fastcall FindItem(const System::UnicodeString AName)/* overload */;
	Dxlayoutcontainer::TdxCustomLayoutHitTest* __fastcall GetHitTest(const System::Types::TPoint &P)/* overload */;
	Dxlayoutcontainer::TdxCustomLayoutHitTest* __fastcall GetHitTest(int X, int Y)/* overload */;
	void __fastcall BeginUpdate();
	void __fastcall CancelUpdate();
	void __fastcall EndUpdate(bool ANeedPack = true);
	void __fastcall BeginTranslation();
	void __fastcall EndTranslation();
	Dxlayoutcontainer::TdxLayoutGroup* __fastcall CreateGroup()/* overload */;
	Dxlayoutcontainer::TdxCustomLayoutGroup* __fastcall CreateGroup(Dxlayoutcontainer::TdxLayoutGroupClass AGroupClass, Dxlayoutcontainer::TdxCustomLayoutGroup* AParent = (Dxlayoutcontainer::TdxCustomLayoutGroup*)(0x0))/* overload */;
	Dxlayoutcontainer::TdxCustomLayoutItem* __fastcall CreateItem(Dxlayoutcontainer::TdxCustomLayoutItemClass AItemClass = 0x0, Dxlayoutcontainer::TdxCustomLayoutGroup* AParent = (Dxlayoutcontainer::TdxCustomLayoutGroup*)(0x0));
	Dxlayoutcontainer::TdxLayoutItem* __fastcall CreateItemForControl(Vcl::Controls::TControl* AControl, Dxlayoutcontainer::TdxCustomLayoutGroup* AParent = (Dxlayoutcontainer::TdxCustomLayoutGroup*)(0x0));
	bool __fastcall CanRestore();
	void __fastcall Restore();
	void __fastcall Store();
	void __fastcall LoadFromIniFile(const System::UnicodeString AFileName);
	void __fastcall LoadFromRegistry(const System::UnicodeString ARegistryPath);
	void __fastcall LoadFromStream(System::Classes::TStream* AStream);
	void __fastcall SaveToIniFile(const System::UnicodeString AFileName, bool ARecreate = true);
	void __fastcall SaveToRegistry(const System::UnicodeString ARegistryPath, bool ARecreate = true);
	void __fastcall SaveToStream(System::Classes::TStream* AStream);
	void __fastcall ApplyBestFit();
	__property AutoSize = {default=0};
	__property LeftPos;
	__property TopPos;
	__property TdxLayoutAutoContentSizes AutoContentSizes = {read=GetAutoContentSizes, write=SetAutoContentSizes, nodefault};
	__property TdxLayoutControlContainer* Container = {read=FContainer};
	__property Dxlayoutcontainer::TdxLayoutDirection LayoutDirection = {read=GetLayoutDirection, write=SetLayoutDirection, nodefault};
	__property Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* LookAndFeel = {read=GetLayoutLookAndFeel, write=SetLayoutLookAndFeel};
	__property Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* LayoutLookAndFeel = {read=GetLayoutLookAndFeel, write=SetLayoutLookAndFeel};
	__property bool RedrawOnResize = {read=FRedrawOnResize, write=FRedrawOnResize, nodefault};
	__property bool Customization = {read=GetCustomization, write=SetCustomization, nodefault};
	__property Dxlayoutcontainer::TdxLayoutAvailableItemsViewKind CustomizeAvailableItemsViewKind = {read=GetCustomizeAvailableItemsViewKind, write=SetCustomizeAvailableItemsViewKind, nodefault};
	__property Dxlayoutcontainer::TdxLayoutControlCustomCustomizeForm* CustomizeForm = {read=GetCustomizeForm};
	__property System::Types::TRect CustomizeFormBounds = {read=GetCustomizeFormBounds, write=SetCustomizeFormBounds};
	__property Dxlayoutcontainer::TdxLayoutControlCustomCustomizeFormClass CustomizeFormClass = {read=GetCustomizeFormClass, write=SetCustomizeFormClass};
	__property bool CustomizeFormTabbedView = {read=GetCustomizeFormTabbedView, write=SetCustomizeFormTabbedView, nodefault};
	__property bool ShowDesignSelectors = {read=GetShowDesignSelectors, write=SetShowDesignSelectors, nodefault};
	__property bool HighlightRoot = {read=GetHighlightRoot, write=SetHighlightRoot, nodefault};
	__property System::Types::TRect ContentBounds = {read=GetContentBounds};
	__property int OccupiedClientWidth = {read=GetOccupiedClientWidth, nodefault};
	__property int OccupiedClientHeight = {read=GetOccupiedClientHeight, nodefault};
	__property Dxlayoutcontainer::TdxLayoutImageOptions* OptionsImage = {read=GetOptionsImage, write=SetOptionsImage};
	__property TdxLayoutItemOptions* OptionsItem = {read=FOptionsItem, write=SetOptionsItem};
	__property bool AutoControlAlignment = {read=GetAutoControlAlignment, write=SetAutoControlAlignment, default=1};
	__property bool AutoControlTabOrders = {read=GetAutoControlTabOrders, write=SetAutoControlTabOrders, default=1};
	__property int AbsoluteItemCount = {read=GetAbsoluteItemCount, nodefault};
	__property Dxlayoutcontainer::TdxCustomLayoutItem* AbsoluteItems[int Index] = {read=GetAbsoluteItem};
	__property int AvailableItemCount = {read=GetAvailableItemCount, nodefault};
	__property Dxlayoutcontainer::TdxCustomLayoutItem* AvailableItems[int Index] = {read=GetAvailableItem};
	__property int AlignmentConstraintCount = {read=GetAlignmentConstraintCount, nodefault};
	__property Dxlayoutcontainer::TdxLayoutAlignmentConstraint* AlignmentConstraints[int Index] = {read=GetAlignmentConstraint};
	__property Dxlayoutcontainer::TdxLayoutGroup* Items = {read=GetItems};
	__property TdxStoringOptions* OptionsStoring = {read=FOptionsStoring, write=SetOptionsStoring};
	__property System::UnicodeString IniFileName = {read=GetIniFileName, write=SetIniFileName};
	__property System::UnicodeString RegistryPath = {read=GetRegistryPath, write=SetRegistryPath};
	__property bool StoreInIniFile = {read=GetStoreInIniFile, write=SetStoreInIniFile, nodefault};
	__property bool StoreInRegistry = {read=GetStoreInRegistry, write=SetStoreInRegistry, nodefault};
	__property Dxlayoutcontainer::TdxUndoRedoManager* UndoRedoManager = {read=GetUndoRedoManager};
	__property TdxLayoutControlPainter* Painter = {read=FPainter};
	__property TdxLayoutControlViewInfo* ViewInfo = {read=FViewInfo};
	__property System::Classes::TNotifyEvent OnCustomization = {read=FOnCustomization, write=FOnCustomization};
	__property TdxLayoutGetCustomizationMenuItemsEvent OnGetCustomizationMenuItems = {read=FOnGetCustomizationMenuItems, write=FOnGetCustomizationMenuItems};
	__property TdxLayoutControlGetItemStoredPropertiesEvent OnGetItemStoredProperties = {read=FOnGetItemStoredProperties, write=FOnGetItemStoredProperties};
	__property TdxLayoutControlGetItemStoredPropertyValueEvent OnGetItemStoredPropertyValue = {read=FOnGetItemStoredPropertyValue, write=FOnGetItemStoredPropertyValue};
	__property TdxLayoutControlSetItemStoredPropertyValueEvent OnSetItemStoredPropertyValue = {read=FOnSetItemStoredPropertyValue, write=FOnSetItemStoredPropertyValue};
	__property TdxLayoutControlGetStoredPropertiesEvent OnGetStoredProperties = {read=FOnGetStoredProperties, write=FOnGetStoredProperties};
	__property TdxLayoutControlGetStoredPropertyValueEvent OnGetStoredPropertyValue = {read=FOnGetStoredPropertyValue, write=FOnGetStoredPropertyValue};
	__property TdxLayoutControlSetStoredPropertyValueEvent OnSetStoredPropertyValue = {read=FOnSetStoredPropertyValue, write=FOnSetStoredPropertyValue};
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxCustomLayoutControl(HWND ParentWindow) : Cxcontrols::TcxScrollingControl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	inline bool __fastcall  CanFocusOnClick(){ return Cxcontrols::TcxControl::CanFocusOnClick(); }
	
private:
	void *__IdxAcrylicHostControlListener;	// Dxfluentdesignforminterfaces::IdxAcrylicHostControlListener 
	void *__IdxLayoutContainerOwner;	// Dxlayoutcontainer::IdxLayoutContainerOwner 
	void *__IcxEditorFieldLink2;	// Cxedit::IcxEditorFieldLink2 
	void *__IdxCustomizeControlsHelper;	// Cxcontrols::IdxCustomizeControlsHelper 
	void *__IdxSkinSupport;	// Cxlookandfeels::IdxSkinSupport 
	void *__IdxLayoutComponent;	// Dxlayoutcommon::IdxLayoutComponent 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {76D7B1B4-101D-4A67-A93C-6D04868790F4}
	operator Dxfluentdesignforminterfaces::_di_IdxAcrylicHostControlListener()
	{
		Dxfluentdesignforminterfaces::_di_IdxAcrylicHostControlListener intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxfluentdesignforminterfaces::IdxAcrylicHostControlListener*(void) { return (Dxfluentdesignforminterfaces::IdxAcrylicHostControlListener*)&__IdxAcrylicHostControlListener; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {85310BD8-3D7A-454F-A54B-9898C0AA55A2}
	operator Dxlayoutcontainer::_di_IdxLayoutContainerOwner()
	{
		Dxlayoutcontainer::_di_IdxLayoutContainerOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxlayoutcontainer::IdxLayoutContainerOwner*(void) { return (Dxlayoutcontainer::IdxLayoutContainerOwner*)&__IdxLayoutContainerOwner; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {4A1B4837-FF36-4408-AF91-D195D16F2BA0}
	operator Cxedit::_di_IcxEditorFieldLink2()
	{
		Cxedit::_di_IcxEditorFieldLink2 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxedit::IcxEditorFieldLink2*(void) { return (Cxedit::IcxEditorFieldLink2*)&__IcxEditorFieldLink2; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {AD2130FB-EDA5-4034-A551-9C26A8DAAE41}
	operator Cxcontrols::_di_IdxCustomizeControlsHelper()
	{
		Cxcontrols::_di_IdxCustomizeControlsHelper intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxcontrols::IdxCustomizeControlsHelper*(void) { return (Cxcontrols::IdxCustomizeControlsHelper*)&__IdxCustomizeControlsHelper; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {EF3FF483-9B69-46DF-95A4-D3A3810F63A5}
	operator Cxlookandfeels::_di_IdxSkinSupport()
	{
		Cxlookandfeels::_di_IdxSkinSupport intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxlookandfeels::IdxSkinSupport*(void) { return (Cxlookandfeels::IdxSkinSupport*)&__IdxSkinSupport; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F31C9078-5732-44D8-9347-3EA7B93837E3}
	operator Dxlayoutcommon::_di_IdxLayoutComponent()
	{
		Dxlayoutcommon::_di_IdxLayoutComponent intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxlayoutcommon::IdxLayoutComponent*(void) { return (Dxlayoutcommon::IdxLayoutComponent*)&__IdxLayoutComponent; }
	#endif
	
};


class PASCALIMPLEMENTATION TdxLayoutControl : public TdxCustomLayoutControl
{
	typedef TdxCustomLayoutControl inherited;
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelKind = {default=0};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderWidth = {default=0};
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property FocusOnClick = {default=1};
	__property Font;
	__property MenuItems = {default=2047};
	__property ParentBackground = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Transparent = {default=0};
	__property Visible = {default=1};
	__property AutoContentSizes = {stored=false};
	__property AutoControlAlignment = {stored=false, default=1};
	__property AutoControlTabOrders = {stored=false, default=1};
	__property AutoSize = {default=0};
	__property LookAndFeel = {stored=false};
	__property LayoutLookAndFeel;
	__property RedrawOnResize = {default=1};
	__property CustomizeFormTabbedView = {default=0};
	__property DragDropMode = {default=0};
	__property ShowDesignSelectors = {default=1};
	__property HighlightRoot = {default=1};
	__property OptionsImage;
	__property OptionsItem;
	__property OptionsStoring;
	__property IniFileName = {stored=false, default=0};
	__property RegistryPath = {stored=false, default=0};
	__property StoreInIniFile = {stored=false};
	__property StoreInRegistry = {stored=false};
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
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
	__property OnMouseWheel;
	__property OnMouseWheelDown;
	__property OnMouseWheelUp;
	__property OnResize;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnCustomization;
	__property OnGetCustomizationMenuItems;
	__property OnGetItemStoredProperties;
	__property OnGetItemStoredPropertyValue;
	__property OnSetItemStoredPropertyValue;
	__property OnGetStoredProperties;
	__property OnGetStoredPropertyValue;
	__property OnSetStoredPropertyValue;
public:
	/* TdxCustomLayoutControl.Create */ inline __fastcall virtual TdxLayoutControl(System::Classes::TComponent* AOwner) : TdxCustomLayoutControl(AOwner) { }
	/* TdxCustomLayoutControl.Destroy */ inline __fastcall virtual ~TdxLayoutControl() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxLayoutControl(HWND ParentWindow) : TdxCustomLayoutControl(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutControlPainter : public TdxCustomLayoutControlHandler
{
	typedef TdxCustomLayoutControlHandler inherited;
	
protected:
	virtual Cxgraphics::TcxCanvas* __fastcall GetInternalCanvas();
	void __fastcall MakeCanvasClipped(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawBackground(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawContent(Cxgraphics::TcxCanvas* ACanvas);
	__property Cxgraphics::TcxCanvas* InternalCanvas = {read=GetInternalCanvas};
	
public:
	virtual Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	virtual void __fastcall Paint();
public:
	/* TdxCustomLayoutControlHandler.Create */ inline __fastcall virtual TdxLayoutControlPainter(TdxCustomLayoutControl* AControl) : TdxCustomLayoutControlHandler(AControl) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxLayoutControlPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutControlViewInfo : public TdxCustomLayoutControlHandler
{
	typedef TdxCustomLayoutControlHandler inherited;
	
private:
	Cxgraphics::TcxCanvas* FCanvas;
	int __fastcall GetClientHeight();
	int __fastcall GetClientWidth();
	TdxLayoutControlContainerViewInfo* __fastcall GetContainerViewInfo();
	int __fastcall GetContentHeight();
	int __fastcall GetContentWidth();
	Dxlayoutcontainer::TdxLayoutGroupViewInfo* __fastcall GetItemsViewInfo();
	Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* __fastcall GetLayoutLookAndFeel();
	bool __fastcall GetIsValid();
	
protected:
	virtual void __fastcall CreateViewInfos();
	virtual void __fastcall DestroyViewInfos();
	void __fastcall RecreateViewInfos();
	virtual void __fastcall AlignItems();
	virtual void __fastcall AutoAlignControls();
	virtual void __fastcall CalculateItemsViewInfo();
	virtual bool __fastcall GetIsTransparent();
	void __fastcall InvalidateRect(const System::Types::TRect &R, bool EraseBackground);
	bool __fastcall IsCustomization();
	virtual void __fastcall PrepareData();
	virtual Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	virtual System::Types::TRect __fastcall GetClientBounds();
	virtual System::Types::TRect __fastcall GetContentBounds();
	__property Cxgraphics::TcxCanvas* Canvas = {read=GetCanvas};
	__property TdxLayoutControlContainerViewInfo* ContainerViewInfo = {read=GetContainerViewInfo};
	__property bool IsTransparent = {read=GetIsTransparent, nodefault};
	__property bool IsValid = {read=GetIsValid, nodefault};
	
public:
	__fastcall virtual TdxLayoutControlViewInfo(TdxCustomLayoutControl* AControl);
	__fastcall virtual ~TdxLayoutControlViewInfo();
	virtual void __fastcall Calculate();
	Dxlayoutcontainer::TdxCustomLayoutItem* __fastcall GetItemWithMouse(const System::Types::TPoint &P);
	__property System::Types::TRect ClientBounds = {read=GetClientBounds};
	__property int ClientHeight = {read=GetClientHeight, nodefault};
	__property int ClientWidth = {read=GetClientWidth, nodefault};
	__property System::Types::TRect ContentBounds = {read=GetContentBounds};
	__property int ContentHeight = {read=GetContentHeight, nodefault};
	__property int ContentWidth = {read=GetContentWidth, nodefault};
	__property Dxlayoutcontainer::TdxLayoutGroupViewInfo* ItemsViewInfo = {read=GetItemsViewInfo};
	__property Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* LayoutLookAndFeel = {read=GetLayoutLookAndFeel};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxDesignCustomizationHelper : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Cxclasses::TcxComponentList* FLayoutControls;
	int __fastcall GetCount();
	TdxCustomLayoutControl* __fastcall GetItem(int AIndex);
	
protected:
	bool __fastcall FindActiveDesigner(/* out */ Dxlayoutselection::_di_IdxLayoutDesignerHelper &ADesigner);
	
public:
	__fastcall TdxDesignCustomizationHelper();
	__fastcall virtual ~TdxDesignCustomizationHelper();
	virtual void __fastcall AddLayout(TdxCustomLayoutControl* ALayout);
	virtual void __fastcall RemoveLayout(TdxCustomLayoutControl* ALayout);
	__property int Count = {read=GetCount, nodefault};
	__property TdxCustomLayoutControl* Items[int AIndex] = {read=GetItem};
};

#pragma pack(pop)

typedef System::TMetaClass* TdxDesignCustomizationHelperClass;

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Dxlayoutselection::TdxLayoutRunTimeSelectionHelperClass dxLayoutDesignTimeSelectionHelperClass;
extern DELPHI_PACKAGE TdxDesignCustomizationHelperClass dxLayoutDesignCustomizationHelperClass;
}	/* namespace Dxlayoutcontrol */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXLAYOUTCONTROL)
using namespace Dxlayoutcontrol;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxlayoutcontrolHPP
