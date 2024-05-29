// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxBar.pas' rev: 35.00 (Windows)

#ifndef DxbarHPP
#define DxbarHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>
#include <System.SysUtils.hpp>
#include <System.TypInfo.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Controls.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Classes.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.StdCtrls.hpp>
#include <System.IniFiles.hpp>
#include <System.Contnrs.hpp>
#include <Winapi.MultiMon.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Generics.Collections.hpp>
#include <dxCore.hpp>
#include <dxCoreClasses.hpp>
#include <dxCoreGraphics.hpp>
#include <dxMessages.hpp>
#include <dxCommon.hpp>
#include <dxThemeManager.hpp>
#include <cxLookAndFeels.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <dxGDIPlusClasses.hpp>
#include <dxForms.hpp>
#include <cxControls.hpp>
#include <cxContainer.hpp>
#include <cxClasses.hpp>
#include <cxGraphics.hpp>
#include <cxStyles.hpp>
#include <dxFading.hpp>
#include <cxAccessibility.hpp>
#include <dxCustomHint.hpp>
#include <dxScreenTip.hpp>
#include <dxSkinsCore.hpp>
#include <dxShadowWindow.hpp>
#include <cxGeometry.hpp>
#include <System.Actions.hpp>
#include <cxCustomCanvas.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxbar
{
//-- forward type declarations -----------------------------------------------
struct TdxBarItemCachedWidthInfo;
struct TdxBarItemStyleData;
struct TdxBarItemSeparatorData;
__interface DELPHIINTERFACE IdxBarSelectableItem;
typedef System::DelphiInterface<IdxBarSelectableItem> _di_IdxBarSelectableItem;
__interface DELPHIINTERFACE IdxBarDesigner;
typedef System::DelphiInterface<IdxBarDesigner> _di_IdxBarDesigner;
__interface DELPHIINTERFACE IdxBarLinksOwner;
typedef System::DelphiInterface<IdxBarLinksOwner> _di_IdxBarLinksOwner;
__interface DELPHIINTERFACE IdxBarSubMenuOwner;
typedef System::DelphiInterface<IdxBarSubMenuOwner> _di_IdxBarSubMenuOwner;
__interface DELPHIINTERFACE IdxBarMultiColumnItemControlViewInfo;
typedef System::DelphiInterface<IdxBarMultiColumnItemControlViewInfo> _di_IdxBarMultiColumnItemControlViewInfo;
__interface DELPHIINTERFACE IdxBarItemControlViewInfo;
typedef System::DelphiInterface<IdxBarItemControlViewInfo> _di_IdxBarItemControlViewInfo;
__interface DELPHIINTERFACE IdxBarHintKeeper;
typedef System::DelphiInterface<IdxBarHintKeeper> _di_IdxBarHintKeeper;
__interface DELPHIINTERFACE IdxBarHintKeeper2;
typedef System::DelphiInterface<IdxBarHintKeeper2> _di_IdxBarHintKeeper2;
__interface DELPHIINTERFACE IdxBarKeyTipWindowsManager;
typedef System::DelphiInterface<IdxBarKeyTipWindowsManager> _di_IdxBarKeyTipWindowsManager;
__interface DELPHIINTERFACE IdxBarListener;
typedef System::DelphiInterface<IdxBarListener> _di_IdxBarListener;
__interface DELPHIINTERFACE IdxBarComponentListener;
typedef System::DelphiInterface<IdxBarComponentListener> _di_IdxBarComponentListener;
__interface DELPHIINTERFACE IdxBarManagerMergeOperationHandler;
typedef System::DelphiInterface<IdxBarManagerMergeOperationHandler> _di_IdxBarManagerMergeOperationHandler;
struct TdxBarKeyTipInfo;
class DELPHICLASS TdxBarKeyTipData;
__interface DELPHIINTERFACE IdxBarAccessibilityHelper;
typedef System::DelphiInterface<IdxBarAccessibilityHelper> _di_IdxBarAccessibilityHelper;
__interface DELPHIINTERFACE IdxBarAccessibleObject;
typedef System::DelphiInterface<IdxBarAccessibleObject> _di_IdxBarAccessibleObject;
__interface DELPHIINTERFACE IdxSkin;
typedef System::DelphiInterface<IdxSkin> _di_IdxSkin;
class DELPHICLASS TdxBarPersistent;
class DELPHICLASS TdxBarControlEditor;
class DELPHICLASS TdxAddSubItemEditor;
class DELPHICLASS TdxAddButtonEditor;
class DELPHICLASS TdxAddLargeButtonEditor;
class DELPHICLASS TdxAddSeparatorEditor;
class DELPHICLASS TdxItemsEditorEx;
class DELPHICLASS TdxBarDesignController;
class DELPHICLASS TdxBarComponent;
class DELPHICLASS TdxObjectList;
class DELPHICLASS TdxBarComponentList;
class DELPHICLASS TdxBarGroup;
class DELPHICLASS TdxBarPopupMenuLink;
class DELPHICLASS TdxBarPopupMenuLinks;
class DELPHICLASS TdxBarBackgrounds;
struct TdxBarItemSeparatorInfo;
struct TdxBarIniFileEventData;
struct TdxBarMDIStateChangeEventData;
class DELPHICLASS TCustomdxBarControlViewInfo;
class DELPHICLASS TdxBarDragInfo;
class DELPHICLASS TdxBarImageOptions;
class DELPHICLASS TdxBarManagerPostMergeOperationInfo;
class DELPHICLASS TdxBarManagerPostMergeOperationInfoList;
class DELPHICLASS TdxBarManagerMDIStateHelper;
class DELPHICLASS TdxBarManagerUpdateActionsListener;
class DELPHICLASS TdxBarManager;
class DELPHICLASS TdxBarManagerList;
class DELPHICLASS TdxBarCustomMergeData;
class DELPHICLASS TdxBarMergeData;
class DELPHICLASS TdxBarAccessibilityHelper;
class DELPHICLASS TdxBarCaptionButton;
class DELPHICLASS TdxBarCaptionButtons;
class DELPHICLASS TdxBar;
class DELPHICLASS TdxBars;
class DELPHICLASS TdxBarItemOptions;
class DELPHICLASS TdxBarItemLink;
class DELPHICLASS TdxBarItemLinks;
class DELPHICLASS TdxBarControlItemLinks;
class DELPHICLASS TdxBarSubMenuControlItemLinks;
class DELPHICLASS TdxBarInternalLinksOwner;
class DELPHICLASS TdxBarInternalItemLinks;
class DELPHICLASS TdxBarCustomPopupComponent;
class DELPHICLASS TdxBarCustomPopupMenuComponent;
class DELPHICLASS TdxBarCustomPopupMenu;
class DELPHICLASS TdxBarPopupMenu;
class DELPHICLASS TdxDockControl;
class DELPHICLASS TdxBarDockControl;
class DELPHICLASS TdxBarShadowPart;
class DELPHICLASS TdxBarShadow;
class DELPHICLASS TCustomdxBarControl;
__interface DELPHIINTERFACE IdxFadingPainterHelper;
typedef System::DelphiInterface<IdxFadingPainterHelper> _di_IdxFadingPainterHelper;
__interface DELPHIINTERFACE IdxFadingPainterHelper2;
typedef System::DelphiInterface<IdxFadingPainterHelper2> _di_IdxFadingPainterHelper2;
class DELPHICLASS TCustomdxBarControlDesignHelper;
class DELPHICLASS TdxBarControlDesignHelper;
class DELPHICLASS TdxBarSubMenuControlDesignHelper;
class DELPHICLASS TdxDockCol;
class DELPHICLASS TdxDockRow;
class DELPHICLASS TdxBarControlMarkFadingHelper;
class DELPHICLASS TdxBarControlMDIButtonFadingHelper;
class DELPHICLASS TdxBarDockedControl;
class DELPHICLASS TdxBarControl;
class DELPHICLASS TdxBarControlViewInfo;
class DELPHICLASS TdxBarSubMenuControl;
class DELPHICLASS TdxBarSubMenuControlViewInfo;
class DELPHICLASS TdxBarInternalSubMenuControl;
class DELPHICLASS TdxBarCustomizingPopup;
class DELPHICLASS TdxBarItemActionLink;
class DELPHICLASS TdxBarItemStylesData;
class DELPHICLASS TdxBarScreenTip;
class DELPHICLASS TdxBarScreenTipRepository;
class DELPHICLASS TdxBarCustomHintViewInfo;
class DELPHICLASS TdxBarHintViewInfoHelper;
class DELPHICLASS TdxBarHintViewInfo;
class DELPHICLASS TdxBarScreenTipPainter;
class DELPHICLASS TdxBarLikeHintScreenTipViewInfoHelper;
class DELPHICLASS TdxBarLikeHintScreenTipViewInfo;
class DELPHICLASS TdxBarScreenTipViewInfo;
class DELPHICLASS TdxBarHintWindow;
class DELPHICLASS TdxBarItem;
class DELPHICLASS TdxBarLabel;
class DELPHICLASS TdxBarSeparator;
class DELPHICLASS TdxBarWindowItem;
class DELPHICLASS TdxBarButtonLikeItem;
class DELPHICLASS TdxBarCustomButton;
class DELPHICLASS TdxBarButton;
class DELPHICLASS TdxBarLargeButton;
class DELPHICLASS TdxCustomBarEdit;
class DELPHICLASS TdxBarEdit;
class DELPHICLASS TCustomdxBarCombo;
class DELPHICLASS TdxBarCustomCombo;
class DELPHICLASS TdxBarCombo;
class DELPHICLASS TCustomdxBarSubItem;
class DELPHICLASS TdxBarSubItem;
class DELPHICLASS TCustomdxBarContainerItem;
class DELPHICLASS TdxBarListItem;
class DELPHICLASS TdxBarContainerItem;
class DELPHICLASS TdxBarSubMenuBackButton;
struct TdxBarSavedFont;
class DELPHICLASS TdxBarItemControlDrawParams;
class DELPHICLASS TdxBarButtonLikeControlDrawParams;
class DELPHICLASS TdxBarExtraMenuButtonControlDrawParams;
class DELPHICLASS TdxBarApplicationMenuButtonControlDrawParams;
class DELPHICLASS TdxBarEditLikeControlDrawParams;
class DELPHICLASS TdxBarStaticLikeControlDrawParams;
class DELPHICLASS TdxBarSeparatorControlDrawParams;
class DELPHICLASS TdxBarColorComboControlDrawParams;
class DELPHICLASS TdxBarSpinEditDrawParams;
class DELPHICLASS TdxBarProgressControlDrawParams;
class DELPHICLASS TdxBarInPlaceSubItemControlDrawParams;
class DELPHICLASS TdxBarItemControlViewInfo;
class DELPHICLASS TdxBarCachedImage;
class DELPHICLASS TdxBarItemControl;
class DELPHICLASS TdxBarCustomStaticControl;
class DELPHICLASS TdxBarSeparatorControl;
class DELPHICLASS TdxBarWinControl;
class DELPHICLASS TdxBarButtonLikeControl;
class DELPHICLASS TdxBarButtonControl;
class DELPHICLASS TdxBarLargeButtonControl;
class DELPHICLASS TdxBarApplicationMenuButtonControl;
class DELPHICLASS TdxBarCustomEditControl;
class DELPHICLASS TdxBarEditControl;
class DELPHICLASS TCustomdxBarComboControl;
class DELPHICLASS TdxBarComboControl;
class DELPHICLASS TdxBarSubItemControl;
class DELPHICLASS TdxBarContainerLinkData;
class DELPHICLASS TdxBarContainerItemSubMenuControl;
class DELPHICLASS TdxBarContainerItemControl;
class DELPHICLASS TdxBarSubMenuBackButtonControl;
class DELPHICLASS TdxBarPainter;
class DELPHICLASS TdxBarStandardPainter;
class DELPHICLASS TdxBarEnhancedPainter;
class DELPHICLASS TdxBarFlatPainter;
class DELPHICLASS TdxBarOffice11Painter;
class DELPHICLASS TdxBarXPPainter;
class DELPHICLASS TdxBarSkinnedPainter;
class DELPHICLASS TRegItemRecord;
class DELPHICLASS TdxBarItemList;
class DELPHICLASS TdxCustomQuickCustItemControl;
class DELPHICLASS TdxBarQuickCustItem;
class DELPHICLASS TdxBarQuickCustItemControl;
class DELPHICLASS TdxBarPopupControl;
class DELPHICLASS TdxBarQuickControl;
struct TdxBarKeyTipsShowingState;
class DELPHICLASS TdxBarNavigationController;
class DELPHICLASS EdxBarException;
class DELPHICLASS EdxBarCustomizationException;
class DELPHICLASS EdxBarMergeException;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TdxBarItemPosition : unsigned char { ipBeginsNewRow, ipBeginsNewColumn, ipContinuesRow };

typedef System::Set<System::Byte, 0, 255> TdxByteSet;

enum DECLSPEC_DENUM TdxBarItemViewLayout : unsigned char { ivlGlyphCaptionControl, ivlGlyphControlCaption };

enum DECLSPEC_DENUM TdxBarItemViewLevel : unsigned char { ivlLargeIconWithText, ivlLargeControlOnly, ivlSmallIconWithText, ivlSmallIcon, ivlControlOnly, ivlDefault };

typedef TdxBarItemViewLevel TdxBarItemRealViewLevel;

typedef System::Set<TdxBarItemRealViewLevel, TdxBarItemRealViewLevel::ivlLargeIconWithText, TdxBarItemRealViewLevel::ivlControlOnly> TdxBarItemViewLevels;

enum DECLSPEC_DENUM TdxBarButtonGroupPosition : unsigned char { bgpNone, bgpStart, bgpMember };

enum DECLSPEC_DENUM TdxBarButtonGroupRealPosition : unsigned char { bgrpNone, bgrpStart, bgrpMember, bgrpFinish, bgrpSingle };

enum DECLSPEC_DENUM TdxBarButtonStyle : unsigned char { bsDefault, bsChecked, bsDropDown, bsCheckedDropDown };

enum DECLSPEC_DENUM TdxBarItemAlign : unsigned char { iaLeft, iaCenter, iaRight, iaClient };

enum DECLSPEC_DENUM TdxBarGlyphLayout : unsigned char { glLeft, glRight, glTop, glBottom };

enum DECLSPEC_DENUM TdxBarMenuItemSize : unsigned char { misNormal, misLarge };

enum DECLSPEC_DENUM TdxBarPaintStyle : unsigned char { psStandard, psCaption, psCaptionInMenu, psCaptionGlyph };

enum DECLSPEC_DENUM TdxBarCloseUpReason : unsigned char { bcrUnknown, bcrCancel, bcrEnter, bcrEscape };

enum DECLSPEC_DENUM TdxBarBehaviorOption : unsigned char { bboAllowDetach, bboAllowSelectWindowItemsWithoutFocusing, bboAllowShowHints, bboClickItemsBySpaceKey, bboExtendItemWhenAlignedToClient, bboNeedsFocusWhenActive, bboMouseCantUnselectNavigationItem, bboUnmoved, bboItemCustomizePopup, bboSubMenuCaptureMouse, bboCanShowPopupMenuOnMouseClick };

typedef System::Set<TdxBarBehaviorOption, TdxBarBehaviorOption::bboAllowDetach, TdxBarBehaviorOption::bboCanShowPopupMenuOnMouseClick> TdxBarBehaviorOptions;

struct DECLSPEC_DRECORD TdxBarItemCachedWidthInfo
{
public:
	bool Calculated;
	int Width;
};


struct DECLSPEC_DRECORD TdxBarItemStyleData
{
public:
	Cxstyles::TcxStyleValues AssignedValues;
	System::Uitypes::TColor Color;
	Vcl::Graphics::TFontData FontData;
	System::Uitypes::TColor TextColor;
	Cxstyles::TcxStyle* Style;
};


enum DECLSPEC_DENUM TdxBarMouseWheelEventReceiver : unsigned char { mwrNone, mwrActiveBarControl, mwrFocusedItemControl, mwrWindow };

enum DECLSPEC_DENUM TdxBarMDIButton : unsigned char { mdibMinimize, mdibRestore, mdibClose };

typedef System::Set<TdxBarMDIButton, TdxBarMDIButton::mdibMinimize, TdxBarMDIButton::mdibClose> TdxBarMDIButtons;

enum DECLSPEC_DENUM TdxBarKind : unsigned char { bkBarControl, bkBarQuickControl, bkSubMenu };

typedef System::Set<TdxBarKind, TdxBarKind::bkBarControl, TdxBarKind::bkSubMenu> TdxBarKinds;

typedef System::TMetaClass* TCustomdxBarControlClass;

typedef System::TMetaClass* TCustomdxBarControlDesignHelperClass;

typedef System::TMetaClass* TCustomdxBarControlViewInfoClass;

typedef System::TMetaClass* TdxBarControlClass;

typedef System::TMetaClass* TdxBarPopupControlClass;

typedef System::TMetaClass* TdxBarDockControlClass;

typedef System::TMetaClass* TdxBarItemClass;

typedef System::TMetaClass* TdxBarItemControlClass;

typedef System::TMetaClass* TdxBarItemLinkClass;

typedef System::TMetaClass* TdxBarItemLinksClass;

typedef System::TMetaClass* TdxBarPainterClass;

typedef System::TMetaClass* TdxBarCustomHintViewInfoClass;

typedef System::TMetaClass* TdxBarHintWindowClass;

enum DECLSPEC_DENUM TdxBarItemSeparatorKind : unsigned char { skHorizontal, skVertical };

struct DECLSPEC_DRECORD TdxBarItemSeparatorData
{
public:
	System::TObject* AssociatedItemControl;
	System::Types::TRect Bounds;
	TdxBarItemSeparatorKind Kind;
};


enum DECLSPEC_DENUM TdxBarMergeOperation : unsigned char { bmoMerge, bmoUnmerge };

enum DECLSPEC_DENUM TdxBarSelectionStatus : unsigned char { ssUnselected, ssActiveSelected, ssInactiveSelected };

enum DECLSPEC_DENUM TdxBarSelectionOperation : unsigned char { soAdd, soExclude, soExclusive };

enum DECLSPEC_DENUM TdxBarCustomizationAction : unsigned char { caReset, caDelete, caDeleteItem, caDeleteLink, caSelectLink, caChangeCaption, caChangeButtonPaintStyle, caChangePosition, caChangeViewLevels, caChangeButtonGroup, caChangeDistributed, caChangeBeginGroup, caChangeVisible, caChangeRecentList };

typedef System::Set<TdxBarCustomizationAction, TdxBarCustomizationAction::caReset, TdxBarCustomizationAction::caChangeRecentList> TdxBarCustomizationActions;

__interface  INTERFACE_UUID("{6DCCAA42-48D0-4D7D-BEDF-1EADC2197131}") IdxBarSelectableItem  : public System::IInterface 
{
	virtual bool __fastcall CanDelete(bool ADestruction = false) = 0 ;
	virtual void __fastcall DeleteSelection(_di_IdxBarSelectableItem &AReference, bool ADestruction) = 0 ;
	virtual void __fastcall ExecuteCustomizationAction(TdxBarCustomizationAction ABasicAction) = 0 ;
	virtual TdxBarManager* __fastcall GetBarManager() = 0 ;
	virtual System::Classes::TPersistent* __fastcall GetInstance() = 0 ;
	virtual void __fastcall GetMasterObjects(TdxObjectList* AList) = 0 ;
	virtual _di_IdxBarSelectableItem __fastcall GetNextSelectableItem() = 0 ;
	virtual System::Classes::TPersistent* __fastcall GetSelectableParent() = 0 ;
	virtual TdxBarSelectionStatus __fastcall GetSelectionStatus() = 0 ;
	virtual TdxBarCustomizationActions __fastcall GetSupportedActions() = 0 ;
	virtual void __fastcall Invalidate() = 0 ;
	virtual bool __fastcall IsComplex() = 0 ;
	virtual bool __fastcall IsComponentSelected() = 0 ;
	virtual void __fastcall SelectComponent(TdxBarSelectionOperation ASelectionOperation = (TdxBarSelectionOperation)(0x2)) = 0 ;
	virtual bool __fastcall SelectParentComponent() = 0 ;
	virtual void __fastcall SelectionChanged() = 0 ;
};

__interface  INTERFACE_UUID("{B364658F-B4CE-46C3-83D5-D537F34B9482}") IdxBarDesigner  : public System::IInterface 
{
	virtual bool __fastcall CanDeleteComponent(System::Classes::TComponent* AComponent) = 0 ;
	virtual void __fastcall GetSelection(System::Classes::TList* AList) = 0 ;
	virtual TdxBarSelectionStatus __fastcall GetSelectionStatus(System::Classes::TPersistent* AComponent) = 0 ;
	virtual bool __fastcall IsComponentSelected(System::Classes::TPersistent* AComponent) = 0 ;
	virtual void __fastcall SelectComponent(System::Classes::TPersistent* AComponent, TdxBarSelectionOperation ASelectionOperation = (TdxBarSelectionOperation)(0x2)) = 0 ;
	virtual void __fastcall SetSelection(System::Classes::TList* AList) = 0 ;
	virtual void __fastcall ShowDefaultEventHandler(TdxBarItem* AItem) = 0 ;
	virtual System::UnicodeString __fastcall UniqueName(const System::UnicodeString BaseName) = 0 ;
};

__interface  INTERFACE_UUID("{1CB4E538-769E-45F4-9BE3-20814F440106}") IdxBarLinksOwner  : public System::IInterface 
{
	virtual bool __fastcall CanContainItem(TdxBarItem* AItem, /* out */ System::UnicodeString &AErrorText) = 0 ;
	virtual TCustomdxBarControl* __fastcall CreateBarControl() = 0 ;
	virtual TdxBarManager* __fastcall GetBarManager() = 0 ;
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetImages() = 0 ;
	virtual System::Classes::TComponent* __fastcall GetInstance() = 0 ;
	virtual TdxBarItemLinks* __fastcall GetItemLinks() = 0 ;
	virtual bool __fastcall IsLoading() = 0 ;
};

__interface  INTERFACE_UUID("{218A3250-D279-44EA-9E87-3D5443B3C0ED}") IdxBarSubMenuOwner  : public System::IInterface 
{
	virtual int __fastcall GetBarSize() = 0 ;
	virtual void __fastcall DoPaintBar(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &R) = 0 ;
	virtual void __fastcall DoCloseUp() = 0 ;
	virtual void __fastcall DoPopup() = 0 ;
};

__interface  INTERFACE_UUID("{B92D58D1-3251-4816-A43F-D4D4AF2F02EE}") IdxBarMultiColumnItemControlViewInfo  : public System::IInterface 
{
	virtual bool __fastcall CanCollapse() = 0 ;
	virtual bool __fastcall GetCollapsed() = 0 ;
	virtual int __fastcall GetColumnCount() = 0 ;
	virtual int __fastcall GetMaxColumnCount() = 0 ;
	virtual int __fastcall GetMinColumnCount() = 0 ;
	virtual int __fastcall GetWidthForColumnCount(int AColumnCount) = 0 ;
	virtual void __fastcall SetCollapsed(bool Value) = 0 ;
	virtual void __fastcall SetColumnCount(int Value) = 0 ;
};

__interface  INTERFACE_UUID("{99C4A703-E6D2-43AF-987E-F5DA81718295}") IdxBarItemControlViewInfo  : public System::IInterface 
{
	virtual void __fastcall CalculateFinalize() = 0 ;
	virtual TdxBarItemAlign __fastcall GetAlign() = 0 ;
	virtual TdxBarItemViewLevels __fastcall GetAllowedViewLevels() = 0 ;
	virtual System::Types::TRect __fastcall GetBounds() = 0 ;
	virtual int __fastcall GetColumnRowCount() = 0 ;
	virtual bool __fastcall GetDistributed() = 0 ;
	virtual TdxBarItemPosition __fastcall GetPosition() = 0 ;
	virtual TdxBarButtonGroupPosition __fastcall GetPositionInButtonGroup() = 0 ;
	virtual TdxBarButtonGroupRealPosition __fastcall GetRealPositionInButtonGroup() = 0 ;
	virtual int __fastcall GetRow() = 0 ;
	virtual TdxBarItemViewLevel __fastcall GetViewLevel() = 0 ;
	virtual TdxBarItemRealViewLevel __fastcall GetViewLevelForButtonGroup() = 0 ;
	virtual int __fastcall GetWidth(TdxBarItemRealViewLevel AViewLevel) = 0 ;
	virtual bool __fastcall HasSeparator() = 0 ;
	virtual bool __fastcall IsPrimaryForDistribution() = 0 ;
	virtual bool __fastcall IsMultiColumnItemControl(bool ACheckCollapsed, /* out */ _di_IdxBarMultiColumnItemControlViewInfo &AIMultiColumnItemControlViewInfo) = 0 ;
	virtual void __fastcall SetBounds(const System::Types::TRect &Value) = 0 ;
	virtual void __fastcall SetColumnRowCount(int Value) = 0 ;
	virtual void __fastcall SetDistributed(bool Value) = 0 ;
	virtual void __fastcall SetRealPositionInButtonGroup(TdxBarButtonGroupRealPosition Value) = 0 ;
	virtual void __fastcall SetRow(int Value) = 0 ;
	virtual void __fastcall SetViewLevel(TdxBarItemViewLevel Value) = 0 ;
};

__interface  INTERFACE_UUID("{587A00C4-A7E0-4032-98E5-4DB8F3918ADF}") IdxBarHintKeeper  : public System::IInterface 
{
	virtual bool __fastcall DoHint(bool &ANeedDeactivate, /* out */ System::UnicodeString &AHintText, /* out */ System::UnicodeString &AShortCut) = 0 ;
	virtual TdxBarCustomHintViewInfo* __fastcall CreateHintViewInfo(const System::UnicodeString AHintText, const System::UnicodeString AShortCut) = 0 ;
	virtual bool __fastcall GetEnabled() = 0 ;
	virtual System::Types::TPoint __fastcall GetHintPosition(const System::Types::TPoint &ACursorPos, int AHeight) = 0 ;
};

__interface  INTERFACE_UUID("{9BFA849B-BF7D-4D17-A95E-6C4A7456CC6F}") IdxBarHintKeeper2  : public System::IInterface 
{
	virtual Vcl::Controls::TControl* __fastcall GetHintedControl() = 0 ;
	virtual bool __fastcall IsCustomHintSupported() = 0 ;
};

__interface  INTERFACE_UUID("{ABA47F3E-5F8B-4A4B-863F-B70AC02F3C1D}") IdxBarKeyTipWindowsManager  : public System::IInterface 
{
	virtual void __fastcall Add(const System::UnicodeString ACaption, const System::Types::TPoint &ABasePoint, System::Classes::TAlignment AHorzAlign, Cxclasses::TcxAlignmentVert AVertAlign, bool AEnabled, /* out */ System::TObject* &AWindow) = 0 ;
	virtual void __fastcall Delete(System::TObject* AWindow) = 0 ;
	virtual void __fastcall Initialize() = 0 ;
	virtual void __fastcall Show() = 0 ;
};

__interface  INTERFACE_UUID("{57FC7998-D189-47D9-9780-B56B4AC36812}") IdxBarListener  : public System::IInterface 
{
	virtual void __fastcall BarVisibleChanged(TdxBar* ABar) = 0 ;
};

__interface  INTERFACE_UUID("{5E594B1F-C8BD-479B-8A22-E2E04545D354}") IdxBarComponentListener  : public System::IInterface 
{
	virtual void __fastcall Changed(TdxBarComponent* AComponent) = 0 ;
	virtual void __fastcall EnabledChanged(TdxBarComponent* AComponent) = 0 ;
};

__interface  INTERFACE_UUID("{B4B24468-7933-4935-B025-F7D4F21541CF}") IdxBarManagerMergeOperationHandler  : public System::IInterface 
{
	virtual void __fastcall ProcessMergeOperation(TdxBarManager* ABarManager, TdxBarMergeOperation AOperation, bool &AHandled) = 0 ;
};

struct DECLSPEC_DRECORD TdxBarKeyTipInfo
{
public:
	System::UnicodeString KeyTip;
	System::Types::TPoint BasePoint;
	System::Classes::TAlignment HorzAlign;
	Cxclasses::TcxAlignmentVert VertAlign;
	bool Visible;
	bool Enabled;
	System::Classes::TNotifyEvent OnExecute;
};


class PASCALIMPLEMENTATION TdxBarKeyTipData : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TdxBarKeyTipInfo FKeyTipInfo;
	System::TObject* FKeyTipWindow;
	System::UnicodeString __fastcall GetNormalizedKeyTip();
	
public:
	__fastcall TdxBarKeyTipData(const TdxBarKeyTipInfo &AKeyTipInfo);
	void __fastcall HideKeyTipWindow(_di_IdxBarKeyTipWindowsManager AKeyTipWindowsManager);
	void __fastcall ShowKeyTipWindow(_di_IdxBarKeyTipWindowsManager AKeyTipWindowsManager);
	__property System::Types::TPoint BasePoint = {read=FKeyTipInfo.BasePoint};
	__property bool Enabled = {read=FKeyTipInfo.Enabled, nodefault};
	__property System::Classes::TAlignment HorzAlign = {read=FKeyTipInfo.HorzAlign, nodefault};
	__property System::UnicodeString KeyTip = {read=FKeyTipInfo.KeyTip, write=FKeyTipInfo.KeyTip};
	__property System::UnicodeString NormalizedKeyTip = {read=GetNormalizedKeyTip};
	__property Cxclasses::TcxAlignmentVert VertAlign = {read=FKeyTipInfo.VertAlign, nodefault};
	__property bool Visible = {read=FKeyTipInfo.Visible, write=FKeyTipInfo.Visible, nodefault};
	__property System::Classes::TNotifyEvent OnExecute = {read=FKeyTipInfo.OnExecute};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarKeyTipData() { }
	
};


__interface  INTERFACE_UUID("{5AE17753-A04D-4496-B5A3-08B2CEDE40F7}") IdxBarAccessibilityHelper  : public Cxaccessibility::IcxAccessibilityHelper 
{
	virtual bool __fastcall AreKeyTipsSupported(/* out */ _di_IdxBarKeyTipWindowsManager &AKeyTipWindowsManager) = 0 ;
	virtual bool __fastcall CanNavigateToChildren(System::Word AKey) = 0 ;
	virtual bool __fastcall CanUnselectOnKeyDown(System::Word AKey, bool AKeyTipsWereHidden) = 0 ;
	virtual TdxBarAccessibilityHelper* __fastcall GetBarHelper() = 0 ;
	virtual TdxBarManager* __fastcall GetBarManager() = 0 ;
	virtual _di_IdxBarAccessibilityHelper __fastcall GetDefaultAccessibleObject() = 0 ;
	virtual _di_IdxBarAccessibilityHelper __fastcall GetNextAccessibleObject(Cxaccessibility::TcxAccessibilityNavigationDirection ADirection) = 0 ;
	virtual _di_IdxBarAccessibilityHelper __fastcall GetRootAccessibleObject() = 0 ;
	virtual bool __fastcall HandleNavigationKey(System::Word &AKey) = 0 ;
	virtual bool __fastcall IsNavigationKey(System::Word AKey) = 0 ;
	virtual bool __fastcall IsSelected() = 0 ;
	virtual _di_IdxBarAccessibilityHelper __fastcall LogicalNavigationGetNextAccessibleObject(System::Classes::TShiftState AShift) = 0 ;
	virtual void __fastcall Select(bool ASetFocus) = 0 ;
	virtual void __fastcall Unselect(_di_IdxBarAccessibilityHelper ANextSelectedObject) = 0 ;
};

__interface  INTERFACE_UUID("{6411B5B8-FFF8-42BD-BFD4-0B53151C97DC}") IdxBarAccessibleObject  : public System::IInterface 
{
	virtual _di_IdxBarAccessibilityHelper __fastcall GetAccessibilityHelper() = 0 ;
};

__interface  INTERFACE_UUID("{ABCD2B3A-5F77-45A1-ADE2-3C028D4DB64C}") IdxSkin  : public System::IInterface 
{
	virtual void __fastcall DrawBackground(HDC DC, const System::Types::TRect &ARect, int APart, int AState = 0x0) = 0 ;
	virtual void __fastcall DrawBackgroundEx(HDC DC, const System::Types::TRect &ARect, const System::Types::TRect &AContentRect, int APart, int AState = 0x0) = 0 ;
	virtual void __fastcall DrawCaption(HDC DC, const System::UnicodeString ACaption, const System::Types::TRect &ARect, int APart, int AState = 0x0) = 0 ;
	virtual Dxfading::TdxFadingOptions* __fastcall GetBarItemControlFadingOptions() = 0 ;
	virtual System::Types::TRect __fastcall GetCaptionRect(const System::Types::TRect &ARect, int APart) = 0 ;
	virtual System::Types::TRect __fastcall GetContentOffsets(int APart) = 0 ;
	virtual bool __fastcall GetIsAlphaUsed(int APart) = 0 ;
	virtual System::UnicodeString __fastcall GetName() = 0 ;
	virtual System::Uitypes::TColor __fastcall GetPartColor(int APart, int AState = 0x0) = 0 ;
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall GetPartColorPalette(int APart, int AState = 0x0) = 0 ;
	virtual int __fastcall GetPartSize(int APart) = 0 ;
	virtual bool __fastcall UseRoundedWindowCorners() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarPersistent : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TdxBarManager* FBarManager;
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall virtual TdxBarPersistent(TdxBarManager* ABarManager);
	__property TdxBarManager* BarManager = {read=FBarManager};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxBarPersistent() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TdxBarControlEditorClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarControlEditor : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	__classmethod virtual TdxBarItemClass __fastcall GetAddedItemClass(const System::UnicodeString AAddedItemName);
	__classmethod virtual System::UnicodeString __fastcall GetPopupItemCaption();
	__classmethod virtual void __fastcall InitializePopupItem(TdxBarItemLink* AItemLink);
	__classmethod virtual TdxBarItemClass __fastcall PopupItemClass();
	__classmethod void __fastcall AddItem(TdxBarButton* AClickedButton);
	__classmethod virtual void __fastcall InitializeAddedItem(TdxBarItemLink* AItemLink, System::UnicodeString AAddedItemName);
	__classmethod void __fastcall OnButtonClick(System::TObject* Sender);
	
public:
	__classmethod virtual void __fastcall InitCustomizationPopup(TdxBarItemLinks* AItemLinks);
public:
	/* TObject.Create */ inline __fastcall TdxBarControlEditor() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarControlEditor() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxAddSubItemEditor : public TdxBarControlEditor
{
	typedef TdxBarControlEditor inherited;
	
protected:
	__classmethod virtual TdxBarItemClass __fastcall GetAddedItemClass(const System::UnicodeString AAddedItemName);
	__classmethod virtual System::UnicodeString __fastcall GetPopupItemCaption();
	__classmethod virtual void __fastcall InitializePopupItem(TdxBarItemLink* AItemLink);
	__classmethod virtual TdxBarItemClass __fastcall PopupItemClass();
public:
	/* TObject.Create */ inline __fastcall TdxAddSubItemEditor() : TdxBarControlEditor() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxAddSubItemEditor() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxAddButtonEditor : public TdxAddSubItemEditor
{
	typedef TdxAddSubItemEditor inherited;
	
protected:
	__classmethod virtual TdxBarItemClass __fastcall GetAddedItemClass(const System::UnicodeString AAddedItemName);
	__classmethod virtual System::UnicodeString __fastcall GetPopupItemCaption();
public:
	/* TObject.Create */ inline __fastcall TdxAddButtonEditor() : TdxAddSubItemEditor() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxAddButtonEditor() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxAddLargeButtonEditor : public TdxAddSubItemEditor
{
	typedef TdxAddSubItemEditor inherited;
	
protected:
	__classmethod virtual TdxBarItemClass __fastcall GetAddedItemClass(const System::UnicodeString AAddedItemName);
	__classmethod virtual System::UnicodeString __fastcall GetPopupItemCaption();
public:
	/* TObject.Create */ inline __fastcall TdxAddLargeButtonEditor() : TdxAddSubItemEditor() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxAddLargeButtonEditor() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxAddSeparatorEditor : public TdxAddSubItemEditor
{
	typedef TdxAddSubItemEditor inherited;
	
protected:
	__classmethod virtual TdxBarItemClass __fastcall GetAddedItemClass(const System::UnicodeString AAddedItemName);
	__classmethod virtual System::UnicodeString __fastcall GetPopupItemCaption();
public:
	/* TObject.Create */ inline __fastcall TdxAddSeparatorEditor() : TdxAddSubItemEditor() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxAddSeparatorEditor() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxItemsEditorEx : public TdxBarControlEditor
{
	typedef TdxBarControlEditor inherited;
	
protected:
	__classmethod virtual void __fastcall InitSubItem(TdxBarItemLinks* AItemLinks);
	__classmethod virtual TdxBarItemClass __fastcall GetAddedItemClass(const System::UnicodeString AAddedItemName);
	__classmethod virtual System::UnicodeString __fastcall GetPopupItemCaption();
	__classmethod virtual void __fastcall InitializePopupItem(TdxBarItemLink* AItemLink);
	__classmethod virtual TdxBarItemClass __fastcall PopupItemClass();
public:
	/* TObject.Create */ inline __fastcall TdxItemsEditorEx() : TdxBarControlEditor() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxItemsEditorEx() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TdxChangeViewLevelAction : unsigned char { vlaChangeLargeIconWithText, vlaChangeLargeControlOnly, vlaChangeSmallIconWithText, vlaChangeSmallIcon, vlaChangeControl, vlaSetAll, vlaSetLargeIconWithTextOnly, vlaSetLargeControlOnly, vlaSetSmallIconWithTextOnly, vlaSetSmallIconOnly, vlaSetControlOnly };

enum DECLSPEC_DENUM TdxChangeButtonGroupAction : unsigned char { bgaNone, bgaStart, bgaMember, bgaGroup, bgaUngroup };

enum DECLSPEC_DENUM TdxDesignState : unsigned char { dsKeyAlreadyProcessed };

typedef System::Set<TdxDesignState, TdxDesignState::dsKeyAlreadyProcessed, TdxDesignState::dsKeyAlreadyProcessed> TdxDesignStates;

typedef void __fastcall (__closure *TInitPopupProc)(TdxBarItemLinks* AItemLinks);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarDesignController : public Cxcontrols::TcxDesignController
{
	typedef Cxcontrols::TcxDesignController inherited;
	
private:
	TCustomdxBarControl* FCustomizingBarControl;
	TdxBarManager* FCustomizingBarManager;
	TdxBarItemLink* FCustomizingItemLink;
	TdxBarItemLinks* FCustomizingItemLinks;
	System::Contnrs::TComponentList* FInternalItems;
	Cxclasses::TcxRegisteredClassList* FRegisteredBarControlDesignHelpers;
	System::Classes::TList* FRegisteredBarControlEditors;
	_di_IdxBarSelectableItem FLastSelectedItem;
	TdxBarInternalLinksOwner* FCustomizationPopup;
	TdxBarPopupControl* FQuickControl;
	TdxBarInternalLinksOwner* FToolbarsPopup;
	Dxcoreclasses::TcxFreeNotificator* FNotifyComponent;
	bool __fastcall CanDeleteSelectedObjects();
	void __fastcall GetSelection(TdxObjectList* ASelection);
	bool __fastcall IsObjectUnbound(System::TObject* AObject, TdxObjectList* AMasterObjects);
	void __fastcall RemoveIrrelevantObjectsForDelete(TdxObjectList* ASelection, bool ADestruction = false);
	void __fastcall ClearOwnedItems(TdxBarItemLinks* AItemLinks);
	void __fastcall CustomizeItemClick(System::TObject* Sender);
	void __fastcall TextItemChange(System::TObject* Sender);
	void __fastcall CustomizationPopupCloseUp(System::TObject* Sender, TdxBarCloseUpReason AReason);
	void __fastcall CustomizationPopupItemClick(System::TObject* Sender);
	TCustomdxBarControlDesignHelperClass __fastcall GetBarControlDesignHelperClass();
	void __fastcall InitCustomizationPopup(TdxBarItemLinks* AItemLinks);
	void __fastcall SynchronizeAction(TdxBarCustomizationAction ABasicAction);
	void __fastcall UpdateViewLevelsSubItemButtonStates(TdxBarItemLinks* AItemLinks);
	void __fastcall ToolbarsPopupClick(System::TObject* Sender);
	bool __fastcall CanCustomize(TdxBarManager* ABarManager, bool AIsKeyboardAction);
	void __fastcall FindCustomizingBarManager();
	void __fastcall SetLastSelectedItem(_di_IdxBarSelectableItem Value);
	void __fastcall FreeNotification(System::Classes::TComponent* AComponent);
	
protected:
	TdxDesignStates FDesignStates;
	void __fastcall AddButtonGroupMenu(TdxBarItemLinks* AItemLinks, const TdxBarButtonGroupPosition ASelectedButtonGroup);
	void __fastcall AddButtonPaintStyleMenu(TdxBarItemLinks* AItemLinks, const TdxBarPaintStyle ASelectedPaintStyle, const bool ACanChangePaintStyle);
	TdxBarButton* __fastcall AddCustomizationButton(TdxBarItemLinks* AItemLinks, const System::UnicodeString ACaption, const TdxBarCustomizationAction ABasicAction, const bool ABeginGroup = false, const TdxBarButtonStyle AButtonStyle = (TdxBarButtonStyle)(0x0), const bool AIsDown = false, const bool AEnabled = true, const int AGroupIndex = 0x0, const System::Word ADetailAction = (System::Word)(0x0));
	void __fastcall AddCustomizationEdit(TdxBarItemLinks* AItemLinks, const System::UnicodeString ACaption, const System::UnicodeString AText);
	TdxBarSubItem* __fastcall AddCustomizationSubItem(TdxBarItemLinks* AItemLinks, const System::UnicodeString ACaption, const bool ABeginGroup = false, const bool AEnabled = true);
	void __fastcall AddPositionMenu(TdxBarItemLinks* AItemLinks, const TdxBarItemPosition ASelectedPosition);
	void __fastcall AddViewLevelMenu(TdxBarItemLinks* AItemLinks, const bool AExclusiveViewLevelsOnly, const TdxBarItemViewLevels APossibleViewLevels);
	
public:
	__fastcall TdxBarDesignController();
	__fastcall virtual ~TdxBarDesignController();
	void __fastcall AddCustomizeItem(TdxBarItemLinks* AItemLinks, TdxBarItemClass AItemClass, bool ABeginGroup = true);
	TdxBarItemLink* __fastcall AddInternalItem(TdxBarItemLinks* AItemLinks, TdxBarItemClass AItemClass, System::UnicodeString ACaption, System::Classes::TNotifyEvent AOnClick = 0x0, NativeInt ATag = (NativeInt)(0x0), bool ABeginGroup = false)/* overload */;
	TdxBarItemLink* __fastcall AddInternalItem(TdxBarItemLinks* AItemLinks, TdxBarItemClass AItemClass, System::Classes::TComponent* AOwner, System::Classes::TList* AItemList)/* overload */;
	TdxBarItem* __fastcall AddInternalItem(TdxBarItemClass AItemClass, TdxBarManager* ABarManager, System::Classes::TComponent* AOwner, System::Classes::TList* AItemList)/* overload */;
	void __fastcall ClearInternalItems();
	TdxBarItemLink* __fastcall AddItem(TdxBarItemClass ABarItemClass);
	void __fastcall SelectItemLink(TdxBarItemLink* AItemLink);
	HIDESBASE void __fastcall DesignerModified()/* overload */;
	bool __fastcall IsCustomizedByPopup();
	void __fastcall RegisterBarControlDesignHelper(TCustomdxBarControlClass ABarControlClass, TCustomdxBarControlDesignHelperClass AHelperClass);
	void __fastcall RegisterBarControlEditor(TdxBarControlEditorClass AEditor);
	void __fastcall UnregisterBarControlDesignHelper(TCustomdxBarControlClass ABarControlClass, TCustomdxBarControlDesignHelperClass AHelperClass);
	void __fastcall UnregisterBarControlEditor(TdxBarControlEditorClass AEditor);
	void __fastcall DropSelection(_di_IdxBarSelectableItem ASelectableItem);
	bool __fastcall IsItemCustomized(_di_IdxBarSelectableItem ASelectableItem);
	bool __fastcall IsItemLastSelected(_di_IdxBarSelectableItem ASelectableItem);
	bool __fastcall IsItemLinkCustomized();
	bool __fastcall IsItemSingleSelected(_di_IdxBarSelectableItem ASelectableItem);
	bool __fastcall IsSelectionComplex(TdxBarManager* ABarManager);
	bool __fastcall IsSelectionSingle(TdxBarManager* ABarManager);
	bool __fastcall NeedDefaultSelection(_di_IdxBarSelectableItem ASelectableItem);
	void __fastcall SelectItem(_di_IdxBarSelectableItem ASelectableItem, TdxBarSelectionOperation ASelectionOperation = (TdxBarSelectionOperation)(0x2));
	void __fastcall SelectObject(System::Classes::TPersistent* AObject, TdxBarSelectionOperation ASelectionOperation = (TdxBarSelectionOperation)(0x2));
	void __fastcall SynchronizeLastSelectedItem();
	bool __fastcall DeleteSelectedObjects(bool ADestruction, bool AIsKeyboardAction);
	void __fastcall DeleteCustomizingItem();
	void __fastcall DeleteCustomizingItemLink();
	bool __fastcall SelectParentComponent();
	TdxBar* __fastcall AddInternalBar(TdxBarManager* ABarManager);
	void __fastcall ShowCustomCustomizePopup(TdxBarManager* ABarManager, TInitPopupProc AInitPopupProc, TdxBarPainter* APainter, const System::Types::TPoint &APopupPoint, TCustomdxBarControl* ACustomizingBarControl = (TCustomdxBarControl*)(0x0), TdxBarItemLink* ACustomizingItemLink = (TdxBarItemLink*)(0x0))/* overload */;
	void __fastcall ShowCustomCustomizePopup(TdxBarManager* ABarManager, TInitPopupProc AInitPopupProc, TdxBarPainter* APainter, TCustomdxBarControl* ACustomizingBarControl = (TCustomdxBarControl*)(0x0), TdxBarItemLink* ACustomizingItemLink = (TdxBarItemLink*)(0x0))/* overload */;
	void __fastcall ShowCustomizePopup(TCustomdxBarControl* ABarControl, TdxBarItemLink* ACustomizingItemLink);
	void __fastcall SetCustomizePopupTopMosts(bool AShow);
	void __fastcall InitToolBarPopup(TdxBarItemLinks* AItemLinks);
	void __fastcall ShowToolbarsPopup(TdxBarManager* ABarManager, TdxBarPainter* APainter);
	void __fastcall ShowQuickControl(TdxBarControl* ABarControl, const System::Types::TRect &AOwnerRect)/* overload */;
	void __fastcall ShowQuickControl(TdxBarPopupControl* AQuickControl, TdxBarPainter* APainter, const System::Types::TRect &ARect)/* overload */;
	__property TCustomdxBarControl* CustomizingBarControl = {read=FCustomizingBarControl};
	__property TdxBarItemLink* CustomizingItemLink = {read=FCustomizingItemLink};
	__property TdxBarManager* CustomizingBarManager = {read=FCustomizingBarManager};
	__property _di_IdxBarSelectableItem LastSelectedItem = {read=FLastSelectedItem, write=SetLastSelectedItem};
	__property TdxBarPopupControl* QuickControl = {read=FQuickControl};
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  DesignerModified(Vcl::Forms::TCustomForm* AForm){ Cxcontrols::TcxDesignController::DesignerModified(AForm); }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TdxBarItemVisible : unsigned char { ivNever, ivInCustomizing, ivAlways, ivNotInCustomizing };

class PASCALIMPLEMENTATION TdxBarComponent : public Cxclasses::TcxCustomComponent
{
	typedef Cxclasses::TcxCustomComponent inherited;
	
protected:
	TdxBarManager* FBarManager;
	System::Classes::TInterfaceList* FChangeNotifies;
	bool FEnabled;
	TdxBarItemVisible FVisible;
	void __fastcall AddChangeNotify(_di_IdxBarComponentListener AListener);
	void __fastcall RemoveChangeNotify(_di_IdxBarComponentListener AListener);
	virtual void __fastcall Changed(bool AllItems = false);
	virtual bool __fastcall GetEnabled();
	virtual TdxBarItemVisible __fastcall GetVisible();
	virtual void __fastcall SetBarManager(TdxBarManager* Value);
	virtual void __fastcall SetEnabled(bool Value);
	virtual void __fastcall SetVisible(TdxBarItemVisible Value);
	virtual bool __fastcall CanDelete(bool ADestruction = false);
	virtual void __fastcall DeleteSelection(_di_IdxBarSelectableItem &AReference, bool ADestruction);
	virtual void __fastcall ExecuteCustomizationAction(TdxBarCustomizationAction ABasicAction);
	virtual TdxBarManager* __fastcall GetBarManager();
	virtual void __fastcall GetMasterObjects(TdxObjectList* AList);
	virtual _di_IdxBarSelectableItem __fastcall GetNextSelectableItem();
	virtual System::Classes::TPersistent* __fastcall GetSelectableParent();
	virtual TdxBarSelectionStatus __fastcall GetSelectionStatus();
	virtual TdxBarCustomizationActions __fastcall GetSupportedActions();
	virtual void __fastcall Invalidate();
	virtual bool __fastcall IsComplex();
	virtual bool __fastcall IsComponentSelected();
	virtual void __fastcall SelectComponent(TdxBarSelectionOperation ASelectionOperation = (TdxBarSelectionOperation)(0x2));
	virtual bool __fastcall SelectParentComponent();
	virtual void __fastcall SelectionChanged();
	virtual System::Classes::TPersistent* __fastcall GetPersistentInstance();
	virtual System::Classes::TComponent* __fastcall GetComponentInstance();
	__property bool Enabled = {read=GetEnabled, write=SetEnabled, nodefault};
	__property TdxBarItemVisible Visible = {read=GetVisible, write=SetVisible, nodefault};
	
public:
	__fastcall virtual TdxBarComponent(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxBarComponent();
	__property TdxBarManager* BarManager = {read=GetBarManager, write=SetBarManager};
private:
	void *__IdxBarSelectableItem;	// IdxBarSelectableItem 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6DCCAA42-48D0-4D7D-BEDF-1EADC2197131}
	operator _di_IdxBarSelectableItem()
	{
		_di_IdxBarSelectableItem intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxBarSelectableItem*(void) { return (IdxBarSelectableItem*)&__IdxBarSelectableItem; }
	#endif
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxObjectList : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
private:
	void __fastcall AddFromList(System::Classes::TList* ASource, System::Classes::TList* AExcludedList);
	
protected:
	void __fastcall CopyList(System::Classes::TList* ASource, System::Classes::TList* ADestination);
	HIDESBASE System::TObject* __fastcall GetItem(int AIndex);
	
public:
	__fastcall TdxObjectList()/* overload */;
	HIDESBASE void __fastcall Add(System::TObject* AObject);
	void __fastcall AddList(System::Classes::TList* AObjects);
	void __fastcall CopyFrom(System::Classes::TList* ASource);
	void __fastcall CopyTo(System::Classes::TList* ADestination);
	void __fastcall XorList(System::Classes::TList* ASourceA, System::Classes::TList* ASourceB);
	HIDESBASE System::TObject* __fastcall First();
	HIDESBASE System::TObject* __fastcall Last();
public:
	/* TObjectList.Create */ inline __fastcall TdxObjectList(bool AOwnsObjects)/* overload */ : System::Contnrs::TObjectList(AOwnsObjects) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TdxObjectList() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxBarComponentList : public Cxclasses::TcxComponentList
{
	typedef Cxclasses::TcxComponentList inherited;
	
protected:
	virtual void __fastcall DoNotify(System::Classes::TComponent* AItem, System::Classes::TListNotification AAction);
	virtual System::TClass __fastcall GetItemClass();
	int __stdcall _AddRef();
	int __stdcall _Release();
	HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	void __fastcall BarComponentChanged(TdxBarComponent* AComponent);
	void __fastcall BarComponentEnabledChanged(TdxBarComponent* AComponent);
public:
	/* TcxComponentList.Create */ inline __fastcall TdxBarComponentList()/* overload */ : Cxclasses::TcxComponentList() { }
	/* TcxComponentList.Destroy */ inline __fastcall virtual ~TdxBarComponentList() { }
	
public:
	/* TComponentList.Create */ inline __fastcall TdxBarComponentList(bool AOwnsObjects)/* overload */ : Cxclasses::TcxComponentList(AOwnsObjects) { }
	
private:
	void *__IdxBarComponentListener;	// IdxBarComponentListener 
	void *__IInterface;	// System::IInterface 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {5E594B1F-C8BD-479B-8A22-E2E04545D354}
	operator _di_IdxBarComponentListener()
	{
		_di_IdxBarComponentListener intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxBarComponentListener*(void) { return (IdxBarComponentListener*)&__IdxBarComponentListener; }
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
	operator System::IInterface*(void) { return (System::IInterface*)&__IInterface; }
	#endif
	
};


class PASCALIMPLEMENTATION TdxBarGroup : public TdxBarComponent
{
	typedef TdxBarComponent inherited;
	
public:
	System::Classes::TComponent* operator[](int Index) { return this->Items[Index]; }
	
private:
	TdxBarComponentList* FItems;
	System::Classes::TStringList* FItemsNames;
	int __fastcall GetCount();
	int __fastcall GetIndex();
	System::Classes::TComponent* __fastcall GetItem(int Index);
	int __fastcall InternalGetCount();
	System::UnicodeString __fastcall InternalGetItemName(int Index);
	void __fastcall SetIndex(int Value);
	void __fastcall ReadItems(System::Classes::TReader* Reader);
	void __fastcall WriteItems(System::Classes::TWriter* Writer);
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall Loaded();
	virtual void __fastcall SetName(const System::Classes::TComponentName NewName);
	virtual void __fastcall SetEnabled(bool Value);
	virtual void __fastcall SetVisible(TdxBarItemVisible Value);
	__property TdxBarComponentList* ItemList = {read=FItems};
	
public:
	__fastcall virtual TdxBarGroup(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxBarGroup();
	DYNAMIC System::Classes::TComponent* __fastcall GetParentComponent();
	DYNAMIC bool __fastcall HasParent();
	DYNAMIC void __fastcall SetParentComponent(System::Classes::TComponent* AParent);
	void __fastcall Add(TdxBarComponent* AItem);
	void __fastcall Delete(int Index);
	int __fastcall IndexOf(TdxBarComponent* AItem);
	void __fastcall Move(int FromIndex, int ToIndex);
	HIDESBASE void __fastcall Remove(TdxBarComponent* AItem);
	__property int Count = {read=GetCount, nodefault};
	__property int Index = {read=GetIndex, write=SetIndex, nodefault};
	__property System::Classes::TComponent* Items[int Index] = {read=GetItem/*, default*/};
	
__published:
	__property Enabled = {default=1};
	__property Visible = {default=2};
};


typedef void __fastcall (__closure *TdxBarPopupMenuLinkActionEvent)(TdxBarPopupMenuLink* Sender, int &X, int &Y, bool ClickedByMouse, bool &AllowPopup);

class PASCALIMPLEMENTATION TdxBarPopupMenuLink : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	Vcl::Controls::TControl* FControl;
	TdxBarCustomPopupMenuComponent* FPopupMenu;
	bool FProcessChildren;
	Cxcontrols::TcxWindowProcLinkedObject* FWindowProcObject;
	TdxBarPopupMenuLinkActionEvent FOnAction;
	Vcl::Controls::TContextPopupEvent FPrevOnContextPopup;
	TdxBarManager* __fastcall GetBarManager();
	Vcl::Controls::TWinControl* __fastcall GetWinControl();
	void __fastcall SetControl(Vcl::Controls::TControl* Value);
	void __fastcall SetPopupMenu(TdxBarCustomPopupMenuComponent* Value);
	void __fastcall ContextPopup(System::TObject* Sender, const System::Types::TPoint &MousePos, bool &Handled);
	__property Vcl::Controls::TWinControl* WinControl = {read=GetWinControl};
	
protected:
	bool __fastcall DoAction(const System::Types::TPoint &AClientPopupPoint)/* overload */;
	bool __fastcall IsShortCut(System::Classes::TShortCut AShortCut);
	void __fastcall NewWndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TdxBarPopupMenuLink(System::Classes::TCollection* Collection);
	__fastcall virtual ~TdxBarPopupMenuLink();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	bool __fastcall DoAction(HWND Wnd, const System::Types::TPoint &P)/* overload */;
	__property TdxBarManager* BarManager = {read=GetBarManager};
	
__published:
	__property Vcl::Controls::TControl* Control = {read=FControl, write=SetControl};
	__property TdxBarCustomPopupMenuComponent* PopupMenu = {read=FPopupMenu, write=SetPopupMenu};
	__property bool ProcessChildren = {read=FProcessChildren, write=FProcessChildren, default=1};
	__property TdxBarPopupMenuLinkActionEvent OnAction = {read=FOnAction, write=FOnAction};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarPopupMenuLinks : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TdxBarPopupMenuLink* operator[](int Index) { return this->Items[Index]; }
	
private:
	TdxBarManager* FBarManager;
	HIDESBASE TdxBarPopupMenuLink* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TdxBarPopupMenuLink* Value);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	bool __fastcall IsShortCut(Vcl::Controls::TWinControl* AControl, System::Classes::TShortCut AShortCut);
	
public:
	__fastcall TdxBarPopupMenuLinks(TdxBarManager* ABarManager);
	HIDESBASE TdxBarPopupMenuLink* __fastcall Add();
	bool __fastcall DoAction(Vcl::Controls::TWinControl* AControl, HWND Wnd, const System::Types::TPoint &P);
	__property TdxBarManager* BarManager = {read=FBarManager};
	__property TdxBarPopupMenuLink* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TdxBarPopupMenuLinks() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarBackgrounds : public TdxBarPersistent
{
	typedef TdxBarPersistent inherited;
	
private:
	Vcl::Graphics::TBitmap* FBarBackgroundBitmap;
	Vcl::Graphics::TBitmap* FSubMenuBackgroundBitmap;
	void __fastcall BitmapChanged(System::TObject* Sender);
	void __fastcall SetBarBackgroundBitmap(Vcl::Graphics::TBitmap* Value);
	void __fastcall SetSubMenuBackgroundBitmap(Vcl::Graphics::TBitmap* Value);
	
protected:
	void __fastcall Changed();
	
public:
	__fastcall virtual TdxBarBackgrounds(TdxBarManager* ABarManager);
	__fastcall virtual ~TdxBarBackgrounds();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property Vcl::Graphics::TBitmap* Bar = {read=FBarBackgroundBitmap, write=SetBarBackgroundBitmap};
	__property Vcl::Graphics::TBitmap* SubMenu = {read=FSubMenuBackgroundBitmap, write=SetSubMenuBackgroundBitmap};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TdxBarDockingStyle : unsigned char { dsNone, dsLeft, dsTop, dsRight, dsBottom };

typedef System::Set<TdxBarDockingStyle, TdxBarDockingStyle::dsNone, TdxBarDockingStyle::dsBottom> TdxBarDockingStyles;

typedef TdxBarDockingStyle TdxBarDockedDockingStyle;

enum DECLSPEC_DENUM TdxBarManagerStyle : unsigned char { bmsStandard, bmsEnhanced, bmsFlat, bmsXP, bmsOffice11, bmsUseLookAndFeel };

enum DECLSPEC_DENUM TdxBarRealPaintStyle : unsigned char { rpsStandard, rpsEnhanced, rpsFlat, rpsXP, rpsOffice11, rpsSkin };

enum DECLSPEC_DENUM TdxBarMenuAnimations : unsigned char { maNone, maRandom, maUnfold, maSlide, maFade };

typedef void __fastcall (__closure *TdxBarEvent)(TdxBarManager* Sender, TdxBar* ABar);

typedef void __fastcall (__closure *TdxBarItemLinkEvent)(TdxBarManager* Sender, TdxBarItemLink* AItemLink);

typedef void __fastcall (__closure *TdxBarVisibleChangeEvent)(TdxBarManager* Sender, TdxBar* ABar);

typedef void __fastcall (__closure *TdxBarCanDockingEvent)(TdxBar* Sender, TdxBarDockingStyle Style, TdxDockControl* DockControl, bool &CanDocking);

typedef void __fastcall (__closure *TdxBarShowPopupEvent)(TdxBarManager* Sender, TdxBarItemLinks* PopupItemLinks);

typedef void __fastcall (__closure *TdxBarClickItemEvent)(TdxBarManager* Sender, TdxBarItem* ClickedItem);

typedef void __fastcall (__closure *TdxBarIniFileEvent)(System::TObject* Sender, System::Inifiles::TCustomIniFile* AIniFile, const System::UnicodeString ADelimiter, const System::UnicodeString ASection);

typedef void __fastcall (__closure *TdxBarCloseUpEvent)(System::TObject* Sender, TdxBarCloseUpReason AReason);

typedef void __fastcall (__closure *TdxBarHandleKeyEvent)(System::TObject* Sender, System::Word AKey, System::Classes::TShiftState AShift, bool &AHandled);

enum DECLSPEC_DENUM TdxBarItemMergeKind : unsigned char { mkAdd, mkMergeByCaption, mkNone };

enum DECLSPEC_DENUM TdxBarStoringKind : unsigned char { skIni, skReg };

typedef void __fastcall (__closure *TdxBarMergeEvent)(TdxBarManager* Sender, TdxBarManager* ChildBarManager, bool AddItems);

typedef TdxBarMergeEvent TdxBarMenuMergeEvent;

typedef void __fastcall (__closure *TdxBarMergeItemLinkEvent)(TdxBarManager* Sender, TdxBarItemLinks* ADstItemLinks, TdxBarItemLinks* ASrcItemLinks, TdxBarItemLink* ASrcItemLink, TdxBarItemMergeKind &AMergeKind, int &AMergeIndex);

enum DECLSPEC_DENUM TdxBarInternalState : unsigned char { bisAfterLoading, bisBarsLoading, bisCreating, bisHandleCreating, bisModalActivating, bisFormActivating, bisToolbarsVisibleChanging, bisWasActive, bisStateSaving, bisStyleChanging, bisLoadingFromIni };

typedef System::Set<TdxBarInternalState, TdxBarInternalState::bisAfterLoading, TdxBarInternalState::bisLoadingFromIni> TdxBarInternalStates;

enum DECLSPEC_DENUM TdxBarMDIStateChange : unsigned char { scChildActivated, scChildDeactivated, scMaximizedChanged };

enum DECLSPEC_DENUM TdxBarDraggingState : unsigned char { dsNoDrag, dsNoDrop, dsBeginGroup, dsCategory, dsCopy, dsDrag };

struct DECLSPEC_DRECORD TdxBarItemSeparatorInfo
{
public:
	System::Types::TRect Bounds;
	TdxBarItemSeparatorKind Kind;
};


struct DECLSPEC_DRECORD TdxBarIniFileEventData
{
public:
	System::Inifiles::TCustomIniFile* IniFile;
	TdxBarStoringKind StoringKind;
	System::UnicodeString BaseSection;
	System::UnicodeString Delimiter;
};


struct DECLSPEC_DRECORD TdxBarMDIStateChangeEventData
{
public:
	TdxBarMDIStateChange Change;
	HWND Wnd;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCustomdxBarControlViewInfo : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<TdxBarItemSeparatorData> _TCustomdxBarControlViewInfo__1;
	
	
private:
	System::Classes::TList* FItemControlViewInfos;
	_TCustomdxBarControlViewInfo__1 FSeparatorsData;
	int __fastcall GetItemControlCount();
	TdxBarItemControlViewInfo* __fastcall GetItemControlViewInfo(int AIndex);
	int __fastcall GetSeparatorCount();
	TdxBarItemSeparatorInfo __fastcall GetSeparatorInfo(int AIndex);
	void __fastcall SetSeparatorInfo(int AIndex, const TdxBarItemSeparatorInfo &Value);
	
protected:
	TCustomdxBarControl* FBarControl;
	void __fastcall AddItemControlViewInfo(TdxBarItemControlViewInfo* AViewInfo);
	void __fastcall AddSeparatorInfo(const System::Types::TRect &ARect, TdxBarItemSeparatorKind AKind, TdxBarItemControl* AAssociatedItemControl);
	virtual void __fastcall Clear();
	void __fastcall RemoveItemControlViewInfo(TdxBarItemControlViewInfo* AViewInfo);
	void __fastcall RemoveSeparatorInfos();
	
public:
	__fastcall virtual TCustomdxBarControlViewInfo(TCustomdxBarControl* ABarControl);
	__fastcall virtual ~TCustomdxBarControlViewInfo();
	virtual void __fastcall Calculate();
	int __fastcall GetItemControlIndex(TdxBarItemControl* AItemControl);
	bool __fastcall IsAssociatedWithSeparator(TdxBarItemControl* AItemControl, /* out */ int &ASeparatorIndex);
	bool __fastcall IsItemControlVisible(TdxBarItemControl* AItemControl);
	__property TCustomdxBarControl* BarControl = {read=FBarControl};
	__property int ItemControlCount = {read=GetItemControlCount, nodefault};
	__property TdxBarItemControlViewInfo* ItemControlViewInfos[int AIndex] = {read=GetItemControlViewInfo};
	__property int SeparatorCount = {read=GetSeparatorCount, nodefault};
	__property TdxBarItemSeparatorInfo SeparatorInfos[int AIndex] = {read=GetSeparatorInfo, write=SetSeparatorInfo};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarDragInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TdxBarManager* FBarManager;
	int FLockCount;
	bool FModified;
	HWND FCaptureWnd;
	System::Uitypes::TCursor FDefaultCursor;
	System::Types::TPoint FDragDownPoint;
	bool FDragLineVisible;
	Cxclasses::TcxObjectLink* FDragLineBarControlLink;
	bool FDragLineFirstPart;
	System::Types::TRect FDragLineRect;
	bool FDragLineVerticalDirection;
	TdxBarItem* FDraggingItem;
	TdxBarItemLink* FDraggingItemLink;
	HWND FDraggingItemLinkParentHandle;
	TdxBarDraggingState FDraggingState;
	bool FDragOverFirstPart;
	bool FDragOverBeginGroup;
	bool FDragOverVerticalDirection;
	Cxclasses::TcxObjectLink* FDragOverBarControlLink;
	TdxBarItemLink* FDragOverItemLink;
	void __fastcall CalcDragOverItemParameters(System::Types::TPoint &ACursorPos);
	Vcl::Stdctrls::TListBox* __fastcall CategoriesList();
	void __fastcall DragInfoChanged();
	void __fastcall DrawDraggingLine(bool AVisible);
	bool __fastcall HasTarget();
	bool __fastcall NoNeedDragLine();
	void __fastcall ChangeBeginGroup();
	void __fastcall CreateNewItemLink();
	void __fastcall DeleteDraggingItemLink();
	void __fastcall InternalDrawDraggingLine();
	void __fastcall MoveItemToAnotherCategory();
	TdxBarItemControl* __fastcall GetDraggingControl();
	TCustomdxBarControl* __fastcall GetDragLineBarControl();
	TCustomdxBarControl* __fastcall GetDragOverBarControl();
	TdxBarItemLinks* __fastcall GetDragOverBarItemLinks();
	TdxBarItemControl* __fastcall GetDragOverItemControl();
	void __fastcall SetDraggingState(TdxBarDraggingState Value);
	void __fastcall SetDragLineBarControl(TCustomdxBarControl* Value);
	void __fastcall SetDragOverBarControl(TCustomdxBarControl* Value);
	void __fastcall SetDragOverBeginGroup(bool Value);
	void __fastcall SetDragOverFirstPart(bool Value);
	void __fastcall SetDragOverVerticalDirection(bool Value);
	void __fastcall SetDragOverItemLink(TdxBarItemLink* Value);
	__property TCustomdxBarControl* DragLineBarControl = {read=GetDragLineBarControl, write=SetDragLineBarControl};
	
protected:
	virtual bool __fastcall IsDragCopy();
	
public:
	__fastcall TdxBarDragInfo(TdxBarManager* ABarManager);
	__fastcall virtual ~TdxBarDragInfo();
	void __fastcall BeginDrag(TdxBarItem* AItem, TdxBarItemLink* AItemLink);
	virtual void __fastcall DragDrop();
	void __fastcall EndDrag();
	void __fastcall HandleDragging();
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	__property TdxBarItemControl* DraggingControl = {read=GetDraggingControl};
	__property TdxBarItem* DraggingItem = {read=FDraggingItem, write=FDraggingItem};
	__property TdxBarItemLink* DraggingItemLink = {read=FDraggingItemLink, write=FDraggingItemLink};
	__property TdxBarDraggingState DraggingState = {read=FDraggingState, write=SetDraggingState, nodefault};
	__property bool DragOverBeginGroup = {read=FDragOverBeginGroup, write=SetDragOverBeginGroup, nodefault};
	__property bool DragOverFirstPart = {read=FDragOverFirstPart, write=SetDragOverFirstPart, nodefault};
	__property bool DragOverVerticalDirection = {read=FDragOverVerticalDirection, write=SetDragOverVerticalDirection, nodefault};
	__property TCustomdxBarControl* DragOverBarControl = {read=GetDragOverBarControl, write=SetDragOverBarControl};
	__property TdxBarItemLinks* DragOverBarItemLinks = {read=GetDragOverBarItemLinks};
	__property TdxBarItemControl* DragOverItemControl = {read=GetDragOverItemControl};
	__property TdxBarItemLink* DragOverItemLink = {read=FDragOverItemLink, write=SetDragOverItemLink};
	__property HWND DraggingItemLinkParentHandle = {read=FDraggingItemLinkParentHandle, write=FDraggingItemLinkParentHandle, nodefault};
};

#pragma pack(pop)

typedef System::TMetaClass* TdxBarImageOptionsClass;

class PASCALIMPLEMENTATION TdxBarImageOptions : public TdxBarPersistent
{
	typedef TdxBarPersistent inherited;
	
private:
	Vcl::Imglist::TCustomImageList* FDisabledImages;
	Vcl::Imglist::TCustomImageList* FDisabledLargeImages;
	Vcl::Imglist::TCustomImageList* FHotImages;
	Vcl::Imglist::TCustomImageList* FImages;
	Vcl::Imglist::TCustomImageList* FLargeImages;
	Vcl::Imglist::TChangeLink* FImagesChangeLink;
	Vcl::Imglist::TChangeLink* FLargeImagesChangeLink;
	Vcl::Imglist::TChangeLink* FHotImagesChangeLink;
	Vcl::Imglist::TChangeLink* FDisabledImagesChangeLink;
	Vcl::Imglist::TChangeLink* FDisabledLargeImagesChangeLink;
	bool FCacheGlyphs;
	int FGlyphSize;
	System::Uitypes::TColor FImageListBkColor;
	bool FLargeIcons;
	bool FMakeDisabledImagesFaded;
	bool FSmoothGlyphs;
	bool FStretchGlyphs;
	bool FUseLargeImagesForLargeIcons;
	bool FUseLeftBottomPixelAsTransparent;
	System::Classes::TNotifyEvent FOnImageOptionsChange;
	System::Classes::TNotifyEvent FOnLargeIconsChange;
	bool __fastcall GetIsLoading();
	void __fastcall SetImageList(Vcl::Imglist::TCustomImageList* &ANewValue, Vcl::Imglist::TCustomImageList* &AOldValue, Vcl::Imglist::TChangeLink* const AChangeLink);
	void __fastcall SetHotImages(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetImageListBkColor(System::Uitypes::TColor Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetDisabledImages(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetDisabledLargeImages(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetLargeIcons(bool Value);
	void __fastcall SetLargeImages(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetMakeDisabledImagesFaded(bool Value);
	void __fastcall SetUseLargeImagesForLargeIcons(bool Value);
	void __fastcall SetUseLeftBottomPixelAsTransparent(bool Value);
	void __fastcall CalcGlyphSize();
	bool __fastcall IsLargeImagesForLargeIcons();
	void __fastcall FreeNotification(System::Classes::TComponent* AComponent);
	
protected:
	Vcl::Imglist::TCustomImageList* __fastcall GetImages(bool AEnabled, Dxcore::TdxDefaultBoolean &ADrawImageEnabled);
	Vcl::Imglist::TCustomImageList* __fastcall GetImagesCore(bool AEnabled, Vcl::Imglist::TCustomImageList* AImages, Vcl::Imglist::TCustomImageList* ADisabledImages, Dxcore::TdxDefaultBoolean &ADrawImageEnabled);
	Vcl::Imglist::TCustomImageList* __fastcall GetLargeImages(bool AEnabled, Dxcore::TdxDefaultBoolean &ADrawImageEnabled);
	__property bool IsLoading = {read=GetIsLoading, nodefault};
	
public:
	__fastcall virtual TdxBarImageOptions(TdxBarManager* ABarManager);
	__fastcall virtual ~TdxBarImageOptions();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property int GlyphSize = {read=FGlyphSize, nodefault};
	
__published:
	__property bool CacheGlyphs = {read=FCacheGlyphs, write=FCacheGlyphs, default=1};
	__property Vcl::Imglist::TCustomImageList* DisabledImages = {read=FDisabledImages, write=SetDisabledImages};
	__property Vcl::Imglist::TCustomImageList* DisabledLargeImages = {read=FDisabledLargeImages, write=SetDisabledLargeImages};
	__property Vcl::Imglist::TCustomImageList* HotImages = {read=FHotImages, write=SetHotImages};
	__property System::Uitypes::TColor ImageListBkColor = {read=FImageListBkColor, write=SetImageListBkColor, default=16711935};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property Vcl::Imglist::TCustomImageList* LargeImages = {read=FLargeImages, write=SetLargeImages};
	__property bool LargeIcons = {read=FLargeIcons, write=SetLargeIcons, default=0};
	__property bool MakeDisabledImagesFaded = {read=FMakeDisabledImagesFaded, write=SetMakeDisabledImagesFaded, default=0};
	__property bool SmoothGlyphs = {read=FSmoothGlyphs, write=FSmoothGlyphs, default=0};
	__property bool StretchGlyphs = {read=FStretchGlyphs, write=FStretchGlyphs, default=1};
	__property bool UseLargeImagesForLargeIcons = {read=FUseLargeImagesForLargeIcons, write=SetUseLargeImagesForLargeIcons, default=0};
	__property bool UseLeftBottomPixelAsTransparent = {read=FUseLeftBottomPixelAsTransparent, write=SetUseLeftBottomPixelAsTransparent, default=1};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarManagerPostMergeOperationInfo : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TdxBarManager* ChildBarManager;
	TdxBarMergeOperation Operation;
public:
	/* TObject.Create */ inline __fastcall TdxBarManagerPostMergeOperationInfo() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarManagerPostMergeOperationInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarManagerPostMergeOperationInfoList : public Cxclasses::TcxObjectList
{
	typedef Cxclasses::TcxObjectList inherited;
	
public:
	TdxBarManagerPostMergeOperationInfo* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TdxBarManagerPostMergeOperationInfo* __fastcall GetItem(int AIndex);
	
public:
	void __fastcall AddOrSet(TdxBarManager* AChildBarManager, TdxBarMergeOperation AOperation);
	HIDESBASE bool __fastcall Extract(TdxBarManager* AChildBarManager, /* out */ TdxBarMergeOperation &AOperation);
	int __fastcall Find(TdxBarManager* AChildBarManager);
	__property TdxBarManagerPostMergeOperationInfo* Items[int Index] = {read=GetItem/*, default*/};
public:
	/* TcxObjectList.Create */ inline __fastcall TdxBarManagerPostMergeOperationInfoList(bool AOwnObjects) : Cxclasses::TcxObjectList(AOwnObjects) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TdxBarManagerPostMergeOperationInfoList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarManagerMDIStateHelper : public Cxcontrols::TcxMessageWindow
{
	typedef Cxcontrols::TcxMessageWindow inherited;
	
private:
	TdxBarManager* FBarManager;
	int FChildStateChangeLockCount;
	bool FMainFormLocked;
	TdxBarManagerPostMergeOperationInfoList* FPostMergeOperations;
	void __fastcall DoChildStateChanged(HWND AWnd, TdxBarMDIStateChange AChange);
	
protected:
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	bool __fastcall GetMergingParameters(HWND AChildWnd, TdxBarMDIStateChange AChildStateChange, /* out */ TdxBarMergeOperation &AMergeOperation, /* out */ TdxBarManager* &AChildBarManager);
	bool __fastcall NeedMergeMDIChild(TdxBarMDIStateChange AChange, bool AAlwaysMerge);
	bool __fastcall NeedUnmergeMDIChild(TdxBarMDIStateChange AChange);
	void __fastcall NotifyMDIStateChangedHandlers(TdxBarMDIStateChange AChange, HWND AWnd);
	void __fastcall UpdateSystemMenu(TdxBarMDIStateChange AChange, HWND AWnd);
	
public:
	__fastcall TdxBarManagerMDIStateHelper(TdxBarManager* ABarManager);
	__fastcall virtual ~TdxBarManagerMDIStateHelper();
	void __fastcall BeginChildStateChanging();
	void __fastcall CheckLockMainForm();
	void __fastcall EndChildStateChanging();
	void __fastcall DoActiveChildChanged(const HWND ANewActiveChild, const HWND AOldActiveChild);
	void __fastcall DoActiveChildMaximizedChanged(const HWND AActiveChild);
	__property TdxBarManager* BarManager = {read=FBarManager};
	__property TdxBarManagerPostMergeOperationInfoList* PostMergeOperations = {read=FPostMergeOperations};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxBarManagerUpdateActionsListener : public Vcl::Controls::TControl
{
	typedef Vcl::Controls::TControl inherited;
	
private:
	TdxBarManager* FBarManager;
	void __fastcall CorrectPosition();
	
public:
	__fastcall virtual TdxBarManagerUpdateActionsListener(System::Classes::TComponent* AOwner);
	virtual void __fastcall InitiateAction();
public:
	/* TControl.Destroy */ inline __fastcall virtual ~TdxBarManagerUpdateActionsListener() { }
	
};


typedef void __fastcall (__closure *TdxBarItemChangeProc)(TdxBarItem* AItem);

typedef void __fastcall (__closure *TdxBarResetEvent)(TdxBarManager* Sender, TdxBar* ABar, bool &AHandled, bool &AShowConfirmation);

class PASCALIMPLEMENTATION TdxBarManager : public Cxclasses::TcxScalableComponent
{
	typedef Cxclasses::TcxScalableComponent inherited;
	
private:
	System::Classes::TBiDiMode FBiDiMode;
	Cxcontrols::TcxWindowProcLinkedObject* FWindowProcObject;
	System::Classes::TBiDiMode __fastcall GetParentBidiMode();
	void __fastcall CheckBidiMode();
	void __fastcall OwnerWindowProc(Winapi::Messages::TMessage &Message);
	
private:
	bool FAllowCallFromAnotherForm;
	bool FAllowReset;
	bool FAlwaysMerge;
	bool FAlwaysSaveText;
	bool FAutoAlignBars;
	bool FAutoDockColor;
	bool FAutoHideEmptyBars;
	TdxBarBackgrounds* FBackgrounds;
	Vcl::Graphics::TFont* FBarCaptionFont;
	System::Classes::TList* FBarRestoringList;
	TdxBars* FBars;
	int FButtonArrowWidth;
	bool FCanCustomize;
	TdxBarSubMenuControl* FChangedSubMenuControl;
	System::Classes::TStrings* FCategories;
	bool FCustomHintSupported;
	TdxBarPainter* FDefaultPainter;
	bool FDesignerModifiedInvoked;
	bool FIgnoreKeyStroke;
	bool FReadingOldBars;
	System::Classes::TList* FDisabledToolBarsList;
	System::Uitypes::TColor FDockColor;
	System::Classes::TList* FDockControls;
	TdxBarDragInfo* FDragInfo;
	TdxBarImageOptions* FImageOptions;
	Vcl::Graphics::TFont* FEditFont;
	bool FFlatCloseButton;
	HBRUSH FFlatToolbarsBorderBrush;
	HBRUSH FFlatToolbarsBrush;
	HBRUSH FFlatToolbarsDownedBrush;
	HBRUSH FFlatToolbarsDownedSelBrush;
	HBRUSH FFlatToolbarsSelBrush;
	TCustomdxBarControl* FFocusedBarControl;
	Vcl::Graphics::TFont* FFont;
	Dxgdiplusclasses::TdxSmartGlyph* FHelpButtonGlyph;
	System::Classes::THelpContext FHelpContext;
	bool FHideFloatingBarsWhenInactive;
	System::TObject* FHintObject;
	System::UnicodeString FIniFileName;
	bool FInternalFontChange;
	TdxBarInternalStates FInternalState;
	bool FIsCustomizing;
	int FLargeButtonArrowWidth;
	int FLockDesignerModifiedCount;
	bool FLockUpdate;
	int FLockUpdateCount;
	Cxlookandfeels::TcxLookAndFeel* FLookAndFeel;
	bool FMainFormActive;
	TdxBar* FMainMenuBar;
	TdxBarMenuAnimations FMenuAnimations;
	bool FMenusShowRecentItemsFirst;
	bool FModified;
	System::Byte FMostRecentItemsPercents;
	int FMostRecentlyUsedUseCount;
	TCustomdxBarControl* FMouseTrackingBarControl;
	System::Classes::TStringList* FNewItems;
	TdxBarDockingStyles FNotDocking;
	int FReadStateCount;
	System::UnicodeString FRegistryPath;
	TdxBarManagerUpdateActionsListener* FUpdateActionsListener;
	TdxBarComponentList* FGroups;
	TdxBarComponentList* FItems;
	System::Contnrs::TComponentList* FMDIChildSystemMenuItems;
	System::Contnrs::TComponentList* FOwnedObjects;
	TdxBarPopupMenuLinks* FPopupMenuLinks;
	System::Contnrs::TComponentList* FPopupMenus;
	TdxBarItemControl* FSelectedItem;
	int FChangingFocusedItemControlLockCount;
	HWND FPrevFocusedControl;
	bool FShowCloseButton;
	bool FShowFullMenusAfterDelay;
	bool FShowHelpButton;
	bool FShowHint;
	bool FShowHintForDisabledItems;
	bool FShowShortCutInHint;
	System::UnicodeString FShortCut;
	bool FStoreInIniFile;
	bool FStoreInRegistry;
	System::Classes::TStream* FIniFileStream;
	TdxBarManagerStyle FStyle;
	bool FSunkenBorder;
	bool FThemeAvailable;
	Dxthememanager::TdxThemeChangedNotificator* FThemeChangedNotificator;
	HBRUSH FThemeToolbarsBrush;
	bool FUseBarHintWindow;
	bool FUseF10ForMenu;
	bool FUseFullReset;
	bool FUseSystemFont;
	int FWaitForDockingTime;
	bool FIsMDIMaximized;
	HWND FPrevActiveMDIChild;
	TdxBarManagerMDIStateHelper* FMDIStateHelper;
	System::Classes::TMemoryStream* FSavedState;
	TdxBarEvent FOnBarAdd;
	TdxBarEvent FOnBarAfterReset;
	TdxBarEvent FOnBarBeforeReset;
	TdxBarEvent FOnBarClose;
	TdxBarEvent FOnBarDelete;
	TdxBarEvent FOnBarDockingStyleChange;
	TdxBarResetEvent FOnBarReset;
	TdxBarVisibleChangeEvent FOnBarVisibleChange;
	TdxBarItemLinkEvent FOnItemLinkAdd;
	TdxBarItemLinkEvent FOnItemLinkChange;
	TdxBarItemLinkEvent FOnItemLinkDelete;
	System::Classes::TNotifyEvent FOnItemLinksChanged;
	TdxBarMergeEvent FOnAfterMerge;
	TdxBarMergeEvent FOnBeforeMerge;
	System::Classes::TNotifyEvent FOnCloseButtonClick;
	TdxBarCanDockingEvent FOnDocking;
	System::Classes::TNotifyEvent FOnHelpButtonClick;
	System::Classes::TNotifyEvent FOnHideCustomizingForm;
	TdxBarMergeEvent FOnMenuMerge;
	TdxBarMergeEvent FOnMerge;
	TdxBarMergeItemLinkEvent FOnMergeItemLink;
	System::Classes::TNotifyEvent FOnShowCustomizingForm;
	TdxBarShowPopupEvent FOnShowCustomizingPopup;
	TdxBarShowPopupEvent FOnShowToolbarsPopup;
	TdxBarClickItemEvent FOnClickItem;
	TdxBarHandleKeyEvent FOnHandleKey;
	Cxclasses::TcxEventHandlerCollection* FMDIStateChangedHandlers;
	System::Classes::TInterfaceList* FMergeOperationHandlers;
	Cxclasses::TcxEventHandlerCollection* FReadIniFileHandlers;
	Cxclasses::TcxEventHandlerCollection* FSystemFontChangedHandlers;
	Cxclasses::TcxEventHandlerCollection* FWriteIniFileHandlers;
	bool __fastcall GetBarControlFocused();
	bool __fastcall GetBarsLoading();
	bool __fastcall GetCanModifyDesigner();
	TdxBarItemVisible __fastcall GetCategoryItemsVisible(int AIndex);
	bool __fastcall GetCategoryVisible(int AIndex);
	bool __fastcall GetDesigning();
	System::Uitypes::TColor __fastcall GetDockColor();
	TdxDockControl* __fastcall GetDockControl(int Index);
	int __fastcall GetDockControlCount();
	bool __fastcall GetDragging();
	TdxBarItem* __fastcall GetDraggingItem();
	TdxBarItemLink* __fastcall GetDraggingItemLink();
	bool __fastcall GetFlat();
	System::Uitypes::TColor __fastcall GetFlatToolbarsBorderColor();
	System::Uitypes::TColor __fastcall GetFlatToolbarsColor();
	System::Uitypes::TColor __fastcall GetFlatToolbarsDownedColor();
	System::Uitypes::TColor __fastcall GetFlatToolbarsDownedSelColor();
	System::Uitypes::TColor __fastcall GetFlatToolbarsSelColor();
	TdxBarGroup* __fastcall GetGroup(int Index);
	int __fastcall GetGroupCount();
	TdxDockControl* __fastcall GetInternalDockControl(TdxBarDockedDockingStyle ADockingStyle);
	bool __fastcall GetIsCustomizing();
	HIDESBASE bool __fastcall GetIsDestroying();
	bool __fastcall GetIsHandleCreating();
	bool __fastcall GetIsInitializing();
	HIDESBASE bool __fastcall GetIsLoading();
	bool __fastcall GetIsPopupMenuShowed();
	bool __fastcall GetIsRecreating();
	bool __fastcall GetIsStateSaving();
	int __fastcall GetItemCount();
	TdxBarItem* __fastcall GetItem(int Index);
	TdxBarItemLink* __fastcall GetLastSelectedLinkAtDesign();
	Vcl::Forms::TCustomForm* __fastcall GetMainForm();
	TdxBarControl* __fastcall GetMainMenuControl();
	Vcl::Forms::TCustomForm* __fastcall GetMasterForm();
	TdxBarDockingStyles __fastcall GetNotDocking();
	TdxBarManager* __fastcall GetParentBarManager();
	Vcl::Controls::TWinControl* __fastcall GetParentedOwner();
	TdxBar* __fastcall GetRestoringListBar(int Index);
	int __fastcall GetRestoringListBarCount();
	bool __fastcall GetScaled();
	int __fastcall GetTabOrder();
	void __fastcall SetAutoAlignBars(bool Value);
	void __fastcall SetAutoDockColor(bool Value);
	void __fastcall SetAutoHideEmptyBars(bool Value);
	void __fastcall SetBackgrounds(TdxBarBackgrounds* Value);
	void __fastcall SetButtonArrowWidth(int Value);
	void __fastcall SetCategories(System::Classes::TStrings* Value);
	void __fastcall SetCategoryItemsVisible(int AIndex, TdxBarItemVisible Value);
	void __fastcall SetCategoryVisible(int AIndex, bool Value);
	void __fastcall SetDockColor(System::Uitypes::TColor Value);
	void __fastcall SetFlatCloseButton(bool Value);
	void __fastcall SetFont(Vcl::Graphics::TFont* Value);
	void __fastcall SetHelpButtonGlyph(Dxgdiplusclasses::TdxSmartGlyph* Value);
	void __fastcall SetHideFloatingBarsWhenInactive(bool Value);
	void __fastcall SetDraggingItem(TdxBarItem* Value);
	void __fastcall SetDraggingItemLink(TdxBarItemLink* Value);
	void __fastcall SetLargeButtonArrowWidth(int Value);
	void __fastcall SetLockUpdate(bool Value);
	void __fastcall SetLookAndFeel(Cxlookandfeels::TcxLookAndFeel* Value);
	void __fastcall SetMenuAnimations(TdxBarMenuAnimations Value);
	void __fastcall SetMenusShowRecentItemsFirst(bool Value);
	void __fastcall SetMostRecentItemsPercents(System::Byte Value);
	void __fastcall SetNotDocking(TdxBarDockingStyles Value);
	void __fastcall SetPopupMenuLinks(TdxBarPopupMenuLinks* Value);
	void __fastcall SetRegistryPath(System::UnicodeString Value);
	void __fastcall SetScaled(bool AValue);
	void __fastcall SetSelectedItem(TdxBarItemControl* Value);
	void __fastcall SetShowCloseButton(bool Value);
	void __fastcall SetShowFullMenusAfterDelay(bool Value);
	void __fastcall SetShowHelpButton(bool Value);
	void __fastcall SetShowHint(bool Value);
	void __fastcall SetShowShortCutInHint(bool Value);
	void __fastcall SetStyle(TdxBarManagerStyle Value);
	void __fastcall SetSunkenBorder(bool Value);
	void __fastcall SetTabOrder(int Value);
	void __fastcall SetUseSystemFont(bool Value);
	void __fastcall SetWaitForDockingTime(int Value);
	Vcl::Imglist::TCustomImageList* __fastcall GetDisabledImages();
	Vcl::Imglist::TCustomImageList* __fastcall GetDisabledLargeImages();
	Vcl::Imglist::TCustomImageList* __fastcall GetHotImages();
	System::Uitypes::TColor __fastcall GetImageListBkColor();
	Vcl::Imglist::TCustomImageList* __fastcall GetImages();
	Vcl::Imglist::TCustomImageList* __fastcall GetLargeImages();
	bool __fastcall GetLargeIcons();
	TdxBar* __fastcall GetMainMenuBar();
	bool __fastcall GetMakeDisabledImagesFaded();
	bool __fastcall GetStretchGlyphs();
	bool __fastcall GetUseLargeImagesForLargeIcons();
	void __fastcall SetDisabledImages(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetDisabledLargeImages(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetHotImages(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetImageListBkColor(System::Uitypes::TColor Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetLargeIcons(bool Value);
	void __fastcall SetLargeImages(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetMakeDisabledImagesFaded(bool Value);
	void __fastcall SetStretchGlyphs(bool Value);
	void __fastcall SetUseLargeImagesForLargeIcons(bool Value);
	void __fastcall DisabledImageListChange(System::TObject* Sender);
	void __fastcall DisabledLargeImageListChange(System::TObject* Sender);
	void __fastcall HotImageListChange(System::TObject* Sender);
	void __fastcall ImageListChange(System::TObject* Sender);
	void __fastcall ImageOptionsChange(System::TObject* Sender);
	void __fastcall LargeIconsChange(System::TObject* Sender);
	void __fastcall LargeImageListChange(System::TObject* Sender);
	TdxBar* __fastcall BarByNewName(const System::UnicodeString AName);
	void __fastcall FontChanged(System::TObject* Sender);
	void __fastcall CreateMDIChildSystemMenu(HWND AWnd);
	void __fastcall DestroyMDIChildSystemMenu();
	bool __fastcall IsMDIChildSystemMenuExist();
	void __fastcall CheckToolbarsVisibility();
	__classmethod bool __fastcall IsFormBroadcastMessage(unsigned AMsg);
	bool __fastcall IsOwnerMDIChild(bool ARecursive);
	void __fastcall MainFormClientWndProc(unsigned Msg, NativeUInt AWParam, NativeInt ALParam);
	void __fastcall OwnerWndProc(HWND AWnd, unsigned AMsg, NativeUInt AWParam, NativeInt ALParam);
	__classmethod void __fastcall SendFormBroadcastMessage(HWND AOwnerHandle, unsigned AMsg, NativeUInt AWParam, NativeInt ALParam);
	void __fastcall DisplayHint();
	void __fastcall DoActivateHint(bool AShow, const System::UnicodeString CustomHint, System::TObject* AHintObject = (System::TObject*)(0x0));
	int __fastcall GetHideHintTime();
	Vcl::Controls::THintWindowClass __fastcall GetHintWindowClass();
	int __fastcall GetShowHintTime();
	_di_IdxBarHintKeeper __fastcall GetHintKeeper();
	bool __fastcall IsHintActive();
	void __fastcall CalcMostRecentlyUsedUseCount();
	void __fastcall DestroyItems();
	void __fastcall HelpButtonGlyphChanged(System::TObject* Sender);
	void __fastcall InternalSetSelectedItem(TdxBarItemControl* Value);
	bool __fastcall ShowRecentItemsFirst();
	void __fastcall AddDockControl(TdxDockControl* ADockControl);
	void __fastcall RemoveDockControl(TdxDockControl* ADockControl);
	void __fastcall AddGroup(TdxBarGroup* AGroup);
	bool __fastcall CorrectRegistryPath(System::UnicodeString &APath);
	int __fastcall GetSavedBarIndex(System::Inifiles::TCustomIniFile* AState, const System::UnicodeString ABarName, const System::UnicodeString ABarCaption);
	void __fastcall IniFileCollectionCallMethods(Cxclasses::TcxEventHandlerCollection* ACollection, System::Inifiles::TCustomIniFile* AIniFile, TdxBarStoringKind AStoringKind, System::UnicodeString ASection);
	bool __fastcall IsDockColorStored();
	bool __fastcall IsStyleStored();
	void __fastcall LoadLinkItemNames();
	void __fastcall ReadBars(System::Classes::TReader* AReader);
	void __fastcall ReadDockControlHeights(System::Classes::TReader* Reader);
	void __fastcall WriteDockControlHeights(System::Classes::TWriter* Writer);
	void __fastcall CreateFlatToolbarsBrushes();
	void __fastcall DestroyFlatToolbarsBrushes();
	void __fastcall CreateThemeToolbarsBrushes();
	void __fastcall DestroyThemeToolbarsBrushes();
	void __fastcall DestroyToolbarsBrushes();
	void __fastcall CreateToolbarsBrushes();
	void __fastcall RecreateToolbarsBrushes();
	void __fastcall RefreshFloatingBarsShadows();
	void __fastcall ResetBackgrounds();
	void __fastcall InitPainter();
	TdxBarPainterClass __fastcall InternalGetPainterClass();
	void __fastcall InternalStyleChanged();
	void __fastcall ThemeChanged();
	void __fastcall LFChanged(Cxlookandfeels::TcxLookAndFeel* Sender, Cxlookandfeels::TcxLookAndFeelValues AChangedValues);
	void __fastcall DoActivate(System::Word AState, System::Word AMinimized, HWND AHandle, HWND AWndPrevious);
	void __fastcall DoActivateApp(bool AActivate, unsigned AThreadID);
	void __fastcall DoCreate();
	void __fastcall DoModalActivate();
	void __fastcall DoLockUpdate(bool ALock, bool ACheckBarsChanges, bool ACancelUpdate, bool ALockRedraw = true);
	void __fastcall DoBeginUpdate(bool ALockRedraw);
	void __fastcall DoCancelUpdate(bool ALockRedraw);
	void __fastcall DoEndUpdate(bool ACheckBarsChanges, bool ALockRedraw);
	bool __fastcall DoHandleKey(System::Word AKey, System::Classes::TShiftState AShift);
	
protected:
	_di_IdxBarDesigner FdxBarDesignHelper;
	virtual void __fastcall ChangeScale(int M, int D);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall GetAdornerTargetElements(System::Classes::TStrings* AList);
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	DYNAMIC System::Classes::TComponent* __fastcall GetChildOwner();
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall ReadState(System::Classes::TReader* Reader);
	DYNAMIC void __fastcall SetChildOrder(System::Classes::TComponent* Child, int Order);
	virtual void __fastcall SetName(const System::Classes::TComponentName NewName);
	bool __fastcall CanDeleteComponent(System::Classes::TComponent* AComponent);
	void __fastcall GetSelection(System::Classes::TList* AList);
	TdxBarSelectionStatus __fastcall GetSelectionStatus(System::Classes::TPersistent* AComponent);
	bool __fastcall IsComponentSelected(System::Classes::TPersistent* AComponent);
	void __fastcall SelectComponent(System::Classes::TPersistent* AComponent, TdxBarSelectionOperation ASelectionOperation = (TdxBarSelectionOperation)(0x2));
	void __fastcall SetSelection(System::Classes::TList* AList);
	void __fastcall ShowDefaultEventHandler(TdxBarItem* AItem);
	System::UnicodeString __fastcall UniqueName(const System::UnicodeString BaseName);
	void __fastcall GetActiveSelection(System::Classes::TList* AList);
	void __fastcall DesignerModified();
	void __fastcall LockDesignerModified(bool ALock, bool AInvokeDesignerModifiedOnUnlock = true);
	virtual void __fastcall VisualRefinementsListenerChanged();
	void __fastcall CreateBarRestoringList();
	void __fastcall DestroyBarRestoringList();
	bool __fastcall BarRestoringListExists();
	void __fastcall AddBarToRestoringList(TdxBar* ABar);
	void __fastcall RemoveBarFromRestoringList(TdxBar* ABar);
	void __fastcall ShowBarsFromRestoringList(TdxBarDockControl* ADockControl);
	int __fastcall GetBarIndexInRestoringList(TdxBar* ABar);
	__property int RestoringListBarCount = {read=GetRestoringListBarCount, nodefault};
	__property TdxBar* RestoringListBars[int Index] = {read=GetRestoringListBar};
	void __fastcall AssignFont();
	bool __fastcall CanReset();
	DYNAMIC void __fastcall DoBarAfterReset(TdxBar* ABar);
	DYNAMIC void __fastcall DoBarBeforeReset(TdxBar* ABar);
	DYNAMIC void __fastcall DoBarClose(TdxBar* ABar);
	DYNAMIC void __fastcall DoBarDockingStyleChanged(TdxBar* ABar);
	virtual void __fastcall DoClickItem(TdxBarItem* AItem);
	DYNAMIC void __fastcall DoCloseButtonClick();
	virtual bool __fastcall DoDocking(TdxBar* ABar, TdxBarDockingStyle AStyle, TdxDockControl* ADockControl);
	void __fastcall DoItemLinkAdd(TdxBarItemLink* AItemLink);
	void __fastcall DoItemLinkChange(TdxBarItemLink* AItemLink);
	void __fastcall DoItemLinkDelete(TdxBarItemLink* AItemLink);
	DYNAMIC void __fastcall DoHelpButtonClick();
	void __fastcall DoMergeItemLink(TdxBarItemLinks* ADstItemLinks, TdxBarItemLinks* ASrcItemLinks, TdxBarItemLink* ASrcItemLink, TdxBarItemMergeKind &AMergeKind, int &AMergeIndex);
	virtual bool __fastcall DoResetBar(TdxBar* ABar, bool &AShowConfirmation);
	DYNAMIC void __fastcall DoShowCustomizingPopup(TdxBarItemLinks* PopupItemLinks);
	DYNAMIC void __fastcall DoShowToolbarsPopup(TdxBarItemLinks* PopupItemLinks);
	void __fastcall DragAndDrop(TdxBarItem* AItem, TdxBarItemLink* AItemLink);
	TdxBarDockControl* __fastcall FindDockControl(System::UnicodeString APath);
	int __fastcall GetCategoryRealIndex(int AIndex);
	virtual TdxBarPainterClass __fastcall GetPainterClass();
	void __fastcall GetRealLookAndFeel(Cxlookandfeels::TcxLookAndFeel* ALookAndFeel);
	TdxBarRealPaintStyle __fastcall GetRealPaintStyle();
	HWND __fastcall GetWindowForMouseCapturing();
	virtual TdxBarImageOptionsClass __fastcall GetImageOptionsClass();
	void __fastcall CustomImagesChanged(TdxBarItemChangeProc AChangeProc);
	void __fastcall DisabledImagesChanged(TdxBarItem* AItem);
	void __fastcall DisabledLargeImagesChanged(TdxBarItem* AItem);
	void __fastcall HotImagesChanged(TdxBarItem* AItem);
	void __fastcall ImagesChanged(TdxBarItem* AItem);
	int __fastcall GetGlyphSize(Cxgeometry::TdxScaleFactor* AScaleFactor);
	bool __fastcall IsLargeImagesForLargeIcons();
	void __fastcall LargeImagesChanged(TdxBarItem* AItem);
	void __fastcall BarVisibleChanged(TdxBar* ABar);
	Cxlookandfeels::TcxLookAndFeel* __fastcall GetLookAndFeel();
	System::Classes::TBasicAction* __fastcall GetAction();
	Dxscreentip::TdxScreenTip* __fastcall GetScreenTip();
	System::UnicodeString __fastcall GetShortCut();
	Vcl::Forms::TCustomForm* __fastcall GetParentForm();
	void __fastcall SystemInfoChanged(unsigned AParameter);
	void __fastcall ActivateFloatToolbars(bool AActivate, bool AForceOperation, HWND AActiveWindow);
	void __fastcall DisableFloatToolBars();
	void __fastcall EnableFloatToolBars();
	bool __fastcall IsInternalDockControl(TdxDockControl* ADockControl);
	bool __fastcall IsUpdateLocked();
	void __fastcall ShowToolbars(bool AShow, bool AForceOperation, HWND AActiveWindow);
	void __fastcall UpdateControlByMouse(TCustomdxBarControl* ABarControl);
	void __fastcall CheckHintWindow();
	bool __fastcall IsCustomHintStyle();
	System::UnicodeString __fastcall GetBarManagerSection(const System::UnicodeString ABaseSection, TdxBarStoringKind AStoringKind);
	System::UnicodeString __fastcall GetBaseIniSection();
	void __fastcall LoadBarManager(System::Inifiles::TCustomIniFile* ASource, const System::UnicodeString ASection, TdxBarStoringKind AStoringKind);
	System::Inifiles::TMemIniFile* __fastcall ReadSavedState();
	void __fastcall SaveBarManager(System::Inifiles::TCustomIniFile* ADestination, const System::UnicodeString ASection, TdxBarStoringKind AStoringKind);
	void __fastcall SaveState();
	TdxBar* __fastcall CreateBarAsByMerging();
	void __fastcall DoAfterMerge(TdxBarManager* AChildBarManager, TdxBarMergeOperation AOperation);
	void __fastcall DoBeforeMerge(TdxBarManager* AChildBarManager, TdxBarMergeOperation AOperation);
	void __fastcall DoMenuMerging(TdxBarManager* AChildBarManager, TdxBarMergeOperation AOperation);
	void __fastcall DoMerge(TdxBarManager* AChildBarManager, TdxBarMergeOperation AOperation);
	bool __fastcall DoProcessMergeOperation(TdxBarManager* AChildBarManager, TdxBarMergeOperation AOperation);
	void __fastcall InternalUnmerge(TdxBarManager* ABarManager, bool AForCustomization);
	void __fastcall RestoreMergeState();
	void __fastcall BeginMouseTracking(TCustomdxBarControl* ABarControl);
	void __fastcall EndMouseTracking(TCustomdxBarControl* ABarControl);
	bool __fastcall IsMouseTracking(TCustomdxBarControl* ABarControl);
	__property bool BarControlFocused = {read=GetBarControlFocused, nodefault};
	__property TdxBarComponentList* GroupList = {read=FGroups};
	__property TdxBarInternalStates InternalState = {read=FInternalState, nodefault};
	__property TdxBarComponentList* ItemList = {read=FItems};
	__property TdxBarItemLink* LastSelectedLinkAtDesign = {read=GetLastSelectedLinkAtDesign};
	__property TdxBarManagerMDIStateHelper* MDIStateHelper = {read=FMDIStateHelper};
	__property TdxBarItem* DraggingItem = {read=GetDraggingItem, write=SetDraggingItem};
	__property TdxBarItemLink* DraggingItemLink = {read=GetDraggingItemLink, write=SetDraggingItemLink};
	__property bool Dragging = {read=GetDragging, nodefault};
	__property TdxBarDragInfo* DragInfo = {read=FDragInfo};
	bool __fastcall IsOwnerVisible();
	bool __fastcall IsParentFormAvailable();
	bool __fastcall IsUncustomizable();
	__property TCustomdxBarControl* FocusedBarControl = {read=FFocusedBarControl};
	__property bool IsDestroying = {read=GetIsDestroying, nodefault};
	__property bool IsHandleCreating = {read=GetIsHandleCreating, nodefault};
	__property bool IsInitializing = {read=GetIsInitializing, nodefault};
	__property bool IsLoading = {read=GetIsLoading, nodefault};
	__property bool IsPopupMenuShowed = {read=GetIsPopupMenuShowed, nodefault};
	__property bool IsRecreating = {read=GetIsRecreating, nodefault};
	__property bool IsStateSaving = {read=GetIsStateSaving, nodefault};
	__property bool MainFormActive = {read=FMainFormActive, nodefault};
	__property System::Classes::TMemoryStream* SavedState = {read=FSavedState};
	__property int TabOrder = {read=GetTabOrder, write=SetTabOrder, nodefault};
	__property bool ReadingOldBars = {read=FReadingOldBars, write=FReadingOldBars, nodefault};
	void __fastcall AddCreatedItem(TdxBarItem* AItem, System::Classes::TList* AItemList);
	bool __fastcall CanAddComponents();
	TdxBarItem* __fastcall CreateItem(TdxBarItemClass AClass, System::Classes::TComponent* AOwner, System::Classes::TList* AItemList);
	System::Uitypes::TColor __fastcall GetLightColor(int ABtnFaceColorPart, int AHighlightColorPart, int AWindowColorPart);
	__property Vcl::Graphics::TFont* BarCaptionFont = {read=FBarCaptionFont};
	__property bool CanModifyDesigner = {read=GetCanModifyDesigner, nodefault};
	__property bool Flat = {read=GetFlat, nodefault};
	__property HBRUSH FlatToolbarsBorderBrush = {read=FFlatToolbarsBorderBrush, nodefault};
	__property HBRUSH FlatToolbarsBrush = {read=FFlatToolbarsBrush, nodefault};
	__property HBRUSH FlatToolbarsDownedBrush = {read=FFlatToolbarsDownedBrush, nodefault};
	__property HBRUSH FlatToolbarsDownedSelBrush = {read=FFlatToolbarsDownedSelBrush, nodefault};
	__property HBRUSH FlatToolbarsSelBrush = {read=FFlatToolbarsSelBrush, nodefault};
	__property System::Uitypes::TColor FlatToolbarsBorderColor = {read=GetFlatToolbarsBorderColor, nodefault};
	__property System::Uitypes::TColor FlatToolbarsColor = {read=GetFlatToolbarsColor, nodefault};
	__property System::Uitypes::TColor FlatToolbarsDownedColor = {read=GetFlatToolbarsDownedColor, nodefault};
	__property System::Uitypes::TColor FlatToolbarsDownedSelColor = {read=GetFlatToolbarsDownedSelColor, nodefault};
	__property System::Uitypes::TColor FlatToolbarsSelColor = {read=GetFlatToolbarsSelColor, nodefault};
	__property HBRUSH ThemeToolbarsBrush = {read=FThemeToolbarsBrush, nodefault};
	__property System::Classes::TNotifyEvent OnItemLinksChanged = {read=FOnItemLinksChanged, write=FOnItemLinksChanged};
	
public:
	__fastcall virtual TdxBarManager(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxBarManager();
	void __fastcall ActivateHint(bool AShow, const System::UnicodeString CustomHint, System::TObject* AHintObject = (System::TObject*)(0x0));
	void __fastcall HideHint();
	HWND __fastcall ActiveMDIChild();
	void __fastcall DoMDIButtonCommand(TdxBarMDIButton AButton);
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate(bool ACheckBarsChanges = true);
	TdxBar* __fastcall BarByCaption(const System::UnicodeString ACaption);
	TdxBar* __fastcall BarByComponentName(const System::UnicodeString AName);
	TdxBar* __fastcall BarByOldName(const System::UnicodeString AName);
	System::UnicodeString __fastcall GetUniqueToolbarCaption(const System::UnicodeString ABaseName);
	System::UnicodeString __fastcall GetUniqueToolbarName(const System::UnicodeString ABaseName);
	int __fastcall GetAllItemsByCategory(int ACategory, System::Classes::TList* List);
	int __fastcall GetCountByCategory(int ACategory);
	TdxBarItem* __fastcall GetItemByCategory(int ACategory, int AIndex);
	TdxBarItem* __fastcall GetItemByName(const System::UnicodeString AName);
	int __fastcall GetItemsByCategory(int ACategory, System::Classes::TList* List);
	System::UnicodeString __fastcall GetUniqueItemName(TdxBarItemClass ABarItemClass);
	TdxBarButton* __fastcall AddButton();
	TdxBarItem* __fastcall AddItem(TdxBarItemClass AClass);
	TdxBarSubItem* __fastcall AddSubItem();
	TdxBar* __fastcall AddToolBar(bool AIsMainMenu = false, bool ANeedEditCaption = false);
	TdxBarGroup* __fastcall CreateGroup();
	void __fastcall DeleteToolBar(TdxBar* ABar, bool AConfirmation);
	void __fastcall ExchangeItems(int Index1, int Index2);
	void __fastcall MoveItem(int CurIndex, int NewIndex);
	void __fastcall RenameToolBar(TdxBar* ABar);
	void __fastcall ResetToolBar(TdxBar* ABar);
	void __fastcall Merge(TdxBarManager* ABarManager, bool ACanCreateNewBar = true);
	void __fastcall Unmerge(TdxBarManager* ABarManager = (TdxBarManager*)(0x0));
	void __fastcall Customizing(bool Show);
	void __fastcall HideAll();
	void __fastcall ResetUsageData();
	void __fastcall ResetUsageDataWithConfirmation();
	void __fastcall LoadFromRegistry(System::UnicodeString ARegistryPath);
	void __fastcall SaveToRegistry(System::UnicodeString ARegistryPath);
	void __fastcall LoadFromIniFile(const System::UnicodeString AFileName);
	void __fastcall SaveToIniFile(const System::UnicodeString AFileName);
	void __fastcall LoadFromStream(System::Classes::TStream* AStream);
	void __fastcall SaveToStream(System::Classes::TStream* AStream);
	bool __fastcall CanShowRecentItems();
	TdxBarManagerStyle __fastcall GetPaintStyle();
	void __fastcall IgnoreKeyStroke();
	bool __fastcall UseRightToLeftAlignment();
	__property TdxBars* Bars = {read=FBars};
	__property bool BarsLoading = {read=GetBarsLoading, nodefault};
	__property System::Classes::TBiDiMode BiDiMode = {read=FBiDiMode, nodefault};
	__property TdxBarItemVisible CategoryItemsVisible[int AIndex] = {read=GetCategoryItemsVisible, write=SetCategoryItemsVisible};
	__property bool CategoryVisible[int AIndex] = {read=GetCategoryVisible, write=SetCategoryVisible};
	__property TdxBarPainter* DefaultPainter = {read=FDefaultPainter};
	__property bool Designing = {read=GetDesigning, nodefault};
	__property int DockControlCount = {read=GetDockControlCount, nodefault};
	__property TdxDockControl* DockControls[int Index] = {read=GetDockControl};
	__property int GroupCount = {read=GetGroupCount, nodefault};
	__property TdxBarGroup* Groups[int Index] = {read=GetGroup};
	__property TdxDockControl* InternalDockControls[TdxBarDockedDockingStyle ADockingStyle] = {read=GetInternalDockControl};
	__property bool IsCustomizing = {read=GetIsCustomizing, nodefault};
	__property int ItemCount = {read=GetItemCount, nodefault};
	__property TdxBarItem* Items[int Index] = {read=GetItem};
	__property bool IsMDIMaximized = {read=FIsMDIMaximized, nodefault};
	__property bool LockUpdate = {read=FLockUpdate, write=SetLockUpdate, nodefault};
	__property Vcl::Forms::TCustomForm* MainForm = {read=GetParentForm};
	__property Vcl::Forms::TCustomForm* MasterForm = {read=GetMasterForm};
	__property TdxBarControl* MainMenuControl = {read=GetMainMenuControl};
	__property TdxBar* MainMenuBar = {read=GetMainMenuBar};
	__property bool Modified = {read=FModified, write=FModified, nodefault};
	__property Vcl::Controls::TWinControl* Owner = {read=GetParentedOwner};
	__property TdxBarPainterClass PainterClass = {read=InternalGetPainterClass};
	__property TdxBarManager* ParentBarManager = {read=GetParentBarManager};
	__property Vcl::Forms::TCustomForm* ParentForm = {read=GetParentForm};
	__property TdxBarItemControl* SelectedItem = {read=FSelectedItem, write=SetSelectedItem};
	__property Cxclasses::TcxEventHandlerCollection* MDIStateChangedHandlers = {read=FMDIStateChangedHandlers};
	__property System::Classes::TInterfaceList* MergeOperationHandlers = {read=FMergeOperationHandlers};
	__property Cxclasses::TcxEventHandlerCollection* ReadIniFileHandlers = {read=FReadIniFileHandlers};
	__property Cxclasses::TcxEventHandlerCollection* SystemFontChangedHandlers = {read=FSystemFontChangedHandlers};
	__property Cxclasses::TcxEventHandlerCollection* WriteIniFileHandlers = {read=FWriteIniFileHandlers};
	
__published:
	__property bool AllowCallFromAnotherForm = {read=FAllowCallFromAnotherForm, write=FAllowCallFromAnotherForm, default=0};
	__property bool AllowReset = {read=FAllowReset, write=FAllowReset, default=1};
	__property bool AlwaysMerge = {read=FAlwaysMerge, write=FAlwaysMerge, default=0};
	__property bool AlwaysSaveText = {read=FAlwaysSaveText, write=FAlwaysSaveText, default=0};
	__property bool AutoAlignBars = {read=FAutoAlignBars, write=SetAutoAlignBars, default=0};
	__property bool AutoDockColor = {read=FAutoDockColor, write=SetAutoDockColor, default=1};
	__property bool AutoHideEmptyBars = {read=FAutoHideEmptyBars, write=SetAutoHideEmptyBars, default=0};
	__property bool Scaled = {read=GetScaled, write=SetScaled, default=1};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property TdxBarBackgrounds* Backgrounds = {read=FBackgrounds, write=SetBackgrounds};
	__property int ButtonArrowWidth = {read=FButtonArrowWidth, write=SetButtonArrowWidth, default=11};
	__property bool CanCustomize = {read=FCanCustomize, write=FCanCustomize, default=1};
	__property System::Classes::TStrings* Categories = {read=FCategories, write=SetCategories};
	__property System::Uitypes::TColor DockColor = {read=GetDockColor, write=SetDockColor, stored=IsDockColorStored, nodefault};
	__property bool FlatCloseButton = {read=FFlatCloseButton, write=SetFlatCloseButton, default=0};
	__property Dxgdiplusclasses::TdxSmartGlyph* HelpButtonGlyph = {read=FHelpButtonGlyph, write=SetHelpButtonGlyph};
	__property System::Classes::THelpContext HelpContext = {read=FHelpContext, write=FHelpContext, default=0};
	__property bool HideFloatingBarsWhenInactive = {read=FHideFloatingBarsWhenInactive, write=SetHideFloatingBarsWhenInactive, default=1};
	__property TdxBarImageOptions* ImageOptions = {read=FImageOptions, write=FImageOptions};
	__property Vcl::Imglist::TCustomImageList* DisabledImages = {read=GetDisabledImages, write=SetDisabledImages, stored=false};
	__property Vcl::Imglist::TCustomImageList* DisabledLargeImages = {read=GetDisabledLargeImages, write=SetDisabledLargeImages, stored=false};
	__property Vcl::Imglist::TCustomImageList* HotImages = {read=GetHotImages, write=SetHotImages, stored=false};
	__property System::Uitypes::TColor ImageListBkColor = {read=GetImageListBkColor, write=SetImageListBkColor, stored=false, nodefault};
	__property Vcl::Imglist::TCustomImageList* Images = {read=GetImages, write=SetImages, stored=false};
	__property Vcl::Imglist::TCustomImageList* LargeImages = {read=GetLargeImages, write=SetLargeImages, stored=false};
	__property bool LargeIcons = {read=GetLargeIcons, write=SetLargeIcons, stored=false, nodefault};
	__property bool MakeDisabledImagesFaded = {read=GetMakeDisabledImagesFaded, write=SetMakeDisabledImagesFaded, stored=false, nodefault};
	__property bool StretchGlyphs = {read=GetStretchGlyphs, write=SetStretchGlyphs, stored=false, nodefault};
	__property bool UseLargeImagesForLargeIcons = {read=GetUseLargeImagesForLargeIcons, write=SetUseLargeImagesForLargeIcons, stored=false, nodefault};
	__property System::UnicodeString IniFileName = {read=FIniFileName, write=FIniFileName};
	__property int LargeButtonArrowWidth = {read=FLargeButtonArrowWidth, write=SetLargeButtonArrowWidth, default=13};
	__property Cxlookandfeels::TcxLookAndFeel* LookAndFeel = {read=FLookAndFeel, write=SetLookAndFeel};
	__property TdxBarMenuAnimations MenuAnimations = {read=FMenuAnimations, write=SetMenuAnimations, default=0};
	__property bool MenusShowRecentItemsFirst = {read=FMenusShowRecentItemsFirst, write=SetMenusShowRecentItemsFirst, default=1};
	__property System::Byte MostRecentItemsPercents = {read=FMostRecentItemsPercents, write=SetMostRecentItemsPercents, default=95};
	__property TdxBarDockingStyles NotDocking = {read=GetNotDocking, write=SetNotDocking, default=0};
	__property TdxBarPopupMenuLinks* PopupMenuLinks = {read=FPopupMenuLinks, write=SetPopupMenuLinks};
	__property System::UnicodeString RegistryPath = {read=FRegistryPath, write=SetRegistryPath};
	__property bool ShowCloseButton = {read=FShowCloseButton, write=SetShowCloseButton, default=0};
	__property bool ShowFullMenusAfterDelay = {read=FShowFullMenusAfterDelay, write=SetShowFullMenusAfterDelay, default=1};
	__property bool ShowHelpButton = {read=FShowHelpButton, write=SetShowHelpButton, default=0};
	__property bool ShowHint = {read=FShowHint, write=SetShowHint, default=1};
	__property bool ShowHintForDisabledItems = {read=FShowHintForDisabledItems, write=FShowHintForDisabledItems, default=1};
	__property bool ShowShortCutInHint = {read=FShowShortCutInHint, write=SetShowShortCutInHint, default=0};
	__property bool StoreInIniFile = {read=FStoreInIniFile, write=FStoreInIniFile, default=0};
	__property bool StoreInRegistry = {read=FStoreInRegistry, write=FStoreInRegistry, default=0};
	__property TdxBarManagerStyle Style = {read=FStyle, write=SetStyle, stored=IsStyleStored, nodefault};
	__property bool SunkenBorder = {read=FSunkenBorder, write=SetSunkenBorder, default=0};
	__property bool UseBarHintWindow = {read=FUseBarHintWindow, write=FUseBarHintWindow, default=1};
	__property bool UseF10ForMenu = {read=FUseF10ForMenu, write=FUseF10ForMenu, default=1};
	__property bool UseFullReset = {read=FUseFullReset, write=FUseFullReset, default=0};
	__property bool UseSystemFont = {read=FUseSystemFont, write=SetUseSystemFont, nodefault};
	__property int WaitForDockingTime = {read=FWaitForDockingTime, write=SetWaitForDockingTime, default=21};
	__property TdxBarEvent OnBarAdd = {read=FOnBarAdd, write=FOnBarAdd};
	__property TdxBarEvent OnBarAfterReset = {read=FOnBarAfterReset, write=FOnBarAfterReset};
	__property TdxBarEvent OnBarBeforeReset = {read=FOnBarBeforeReset, write=FOnBarBeforeReset};
	__property TdxBarEvent OnBarClose = {read=FOnBarClose, write=FOnBarClose};
	__property TdxBarEvent OnBarDelete = {read=FOnBarDelete, write=FOnBarDelete};
	__property TdxBarEvent OnBarDockingStyleChange = {read=FOnBarDockingStyleChange, write=FOnBarDockingStyleChange};
	__property TdxBarVisibleChangeEvent OnBarVisibleChange = {read=FOnBarVisibleChange, write=FOnBarVisibleChange};
	__property TdxBarItemLinkEvent OnItemLinkAdd = {read=FOnItemLinkAdd, write=FOnItemLinkAdd};
	__property TdxBarItemLinkEvent OnItemLinkChange = {read=FOnItemLinkChange, write=FOnItemLinkChange};
	__property TdxBarItemLinkEvent OnItemLinkDelete = {read=FOnItemLinkDelete, write=FOnItemLinkDelete};
	__property TdxBarMergeItemLinkEvent OnMergeItemLink = {read=FOnMergeItemLink, write=FOnMergeItemLink};
	__property TdxBarMergeEvent OnAfterMerge = {read=FOnAfterMerge, write=FOnAfterMerge};
	__property TdxBarMergeEvent OnBeforeMerge = {read=FOnBeforeMerge, write=FOnBeforeMerge};
	__property System::Classes::TNotifyEvent OnCloseButtonClick = {read=FOnCloseButtonClick, write=FOnCloseButtonClick};
	__property TdxBarCanDockingEvent OnDocking = {read=FOnDocking, write=FOnDocking};
	__property System::Classes::TNotifyEvent OnHelpButtonClick = {read=FOnHelpButtonClick, write=FOnHelpButtonClick};
	__property System::Classes::TNotifyEvent OnHideCustomizingForm = {read=FOnHideCustomizingForm, write=FOnHideCustomizingForm};
	__property TdxBarMergeEvent OnMenuMerge = {read=FOnMenuMerge, write=FOnMenuMerge};
	__property TdxBarMergeEvent OnMerge = {read=FOnMerge, write=FOnMerge};
	__property TdxBarResetEvent OnBarReset = {read=FOnBarReset, write=FOnBarReset};
	__property System::Classes::TNotifyEvent OnShowCustomizingForm = {read=FOnShowCustomizingForm, write=FOnShowCustomizingForm};
	__property TdxBarShowPopupEvent OnShowCustomizingPopup = {read=FOnShowCustomizingPopup, write=FOnShowCustomizingPopup};
	__property TdxBarShowPopupEvent OnShowToolbarsPopup = {read=FOnShowToolbarsPopup, write=FOnShowToolbarsPopup};
	__property TdxBarClickItemEvent OnClickItem = {read=FOnClickItem, write=FOnClickItem};
	__property TdxBarHandleKeyEvent OnHandleKey = {read=FOnHandleKey, write=FOnHandleKey};
private:
	void *__IdxVisualRefinementsListener;	// Cxlookandfeels::IdxVisualRefinementsListener 
	void *__IdxAdornerRootTargetElement;	// Cxclasses::IdxAdornerRootTargetElement 
	void *__IdxSystemInfoListener;	// Cxcontrols::IdxSystemInfoListener 
	void *__IdxSkinSupport;	// Cxlookandfeels::IdxSkinSupport 
	void *__IdxScreenTipProvider;	// Dxscreentip::IdxScreenTipProvider 
	void *__IdxManager;	// Cxclasses::IdxManager 
	void *__IdxBarListener;	// IdxBarListener 
	void *__IdxBarDesigner;	// IdxBarDesigner 
	void *__IcxLookAndFeelContainer;	// Cxlookandfeels::IcxLookAndFeelContainer 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {287BA6FB-1282-4933-AFDB-45DC4D2E3F65}
	operator Cxlookandfeels::_di_IdxVisualRefinementsListener()
	{
		Cxlookandfeels::_di_IdxVisualRefinementsListener intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxlookandfeels::IdxVisualRefinementsListener*(void) { return (Cxlookandfeels::IdxVisualRefinementsListener*)&__IdxVisualRefinementsListener; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {23C48E23-DCDF-43C2-B855-351ED49B1227}
	operator Cxclasses::_di_IdxAdornerRootTargetElement()
	{
		Cxclasses::_di_IdxAdornerRootTargetElement intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxclasses::IdxAdornerRootTargetElement*(void) { return (Cxclasses::IdxAdornerRootTargetElement*)&__IdxAdornerRootTargetElement; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F137963E-6165-47F9-A4C7-96BB4EB91AE0}
	operator Cxcontrols::_di_IdxSystemInfoListener()
	{
		Cxcontrols::_di_IdxSystemInfoListener intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxcontrols::IdxSystemInfoListener*(void) { return (Cxcontrols::IdxSystemInfoListener*)&__IdxSystemInfoListener; }
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
	// {1479340F-AA1B-4A8E-B136-87E3B5CA3D36}
	operator Dxscreentip::_di_IdxScreenTipProvider()
	{
		Dxscreentip::_di_IdxScreenTipProvider intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxscreentip::IdxScreenTipProvider*(void) { return (Dxscreentip::IdxScreenTipProvider*)&__IdxScreenTipProvider; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E82263AF-4C67-44BE-AD3E-3F8CEF246A3B}
	operator Cxclasses::_di_IdxManager()
	{
		Cxclasses::_di_IdxManager intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxclasses::IdxManager*(void) { return (Cxclasses::IdxManager*)&__IdxManager; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {57FC7998-D189-47D9-9780-B56B4AC36812}
	operator _di_IdxBarListener()
	{
		_di_IdxBarListener intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxBarListener*(void) { return (IdxBarListener*)&__IdxBarListener; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B364658F-B4CE-46C3-83D5-D537F34B9482}
	operator _di_IdxBarDesigner()
	{
		_di_IdxBarDesigner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxBarDesigner*(void) { return (IdxBarDesigner*)&__IdxBarDesigner; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6065B58B-C557-4464-A67D-64183FD13F25}
	operator Cxlookandfeels::_di_IcxLookAndFeelContainer()
	{
		Cxlookandfeels::_di_IcxLookAndFeelContainer intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxlookandfeels::IcxLookAndFeelContainer*(void) { return (Cxlookandfeels::IcxLookAndFeelContainer*)&__IcxLookAndFeelContainer; }
	#endif
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarManagerList : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TdxBarManager* operator[](int Index) { return this->BarManagers[Index]; }
	
private:
	TdxBarManager* __fastcall GetBarManager(int Index);
	TdxBarManager* __fastcall GetCustomizingBarManager();
	
public:
	__fastcall virtual ~TdxBarManagerList();
	TdxBarManager* __fastcall NextActive(TdxBarManager* ABarManager, bool AGoForward);
	__property TdxBarManager* BarManagers[int Index] = {read=GetBarManager/*, default*/};
	__property TdxBarManager* CustomizingBarManager = {read=GetCustomizingBarManager};
public:
	/* TObjectList.Create */ inline __fastcall TdxBarManagerList()/* overload */ : System::Contnrs::TObjectList() { }
	/* TObjectList.Create */ inline __fastcall TdxBarManagerList(bool AOwnsObjects)/* overload */ : System::Contnrs::TObjectList(AOwnsObjects) { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TdxBarBorderStyle : unsigned char { bbsNone, bbsSingle };

enum DECLSPEC_DENUM TdxBarStaticBorderStyle : unsigned char { sbsNone, sbsLowered, sbsRaised, sbsEtched, sbsBump };

enum DECLSPEC_DENUM TdxBarSpinEditButton : unsigned char { sbNone, sbUp, sbDown };

typedef System::Set<TdxBarSpinEditButton, TdxBarSpinEditButton::sbNone, TdxBarSpinEditButton::sbDown> TdxBarSpinEditButtons;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarCustomMergeData : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Dxcoreclasses::TcxFreeNotificator* FFreeNotificator;
	
protected:
	virtual void __fastcall FreeNotification(System::Classes::TComponent* Sender) = 0 ;
	__property Dxcoreclasses::TcxFreeNotificator* FreeNotificator = {read=FFreeNotificator};
	
public:
	bool CreatedByMerging;
	bool VisibleBeforeMerging;
	__fastcall virtual TdxBarCustomMergeData();
	__fastcall virtual ~TdxBarCustomMergeData();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarMergeData : public TdxBarCustomMergeData
{
	typedef TdxBarCustomMergeData inherited;
	
private:
	System::Classes::TList* FMergedBarList;
	System::Classes::TList* FSavedMergedBarList;
	TdxBar* __fastcall GetSavedMergedBar(int AIndex);
	int __fastcall GetSavedMergedBarListCount();
	void __fastcall SetFreeNotifications();
	
protected:
	virtual void __fastcall FreeNotification(System::Classes::TComponent* Sender);
	
public:
	bool CreatedByMergingBarVisibleBeforeCustomization;
	TdxBar* MergedWith;
	__fastcall virtual TdxBarMergeData();
	__fastcall virtual ~TdxBarMergeData();
	void __fastcall ClearSavedMergedBarList();
	void __fastcall SaveMergedBarList(System::Classes::TList* AList = (System::Classes::TList*)(0x0));
	__property System::Classes::TList* MergedBarList = {read=FMergedBarList};
	__property int SavedMergedBarCount = {read=GetSavedMergedBarListCount, nodefault};
	__property TdxBar* SavedMergedBars[int AIndex] = {read=GetSavedMergedBar};
};

#pragma pack(pop)

typedef System::TMetaClass* TdxBarAccessibilityHelperClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarAccessibilityHelper : public Cxaccessibility::TcxAccessibilityHelper
{
	typedef Cxaccessibility::TcxAccessibilityHelper inherited;
	
private:
	TdxBarAccessibilityHelper* __fastcall InternalGetChild(int AIndex);
	TdxBarAccessibilityHelper* __fastcall InternalGetParent();
	
protected:
	virtual void __fastcall OwnerObjectDestroyed();
	virtual bool __fastcall AreKeyTipsSupported(/* out */ _di_IdxBarKeyTipWindowsManager &AKeyTipWindowsManager);
	virtual bool __fastcall CanNavigateToChildren(System::Word AKey);
	virtual bool __fastcall CanUnselectOnKeyDown(System::Word AKey, bool AKeyTipsWereHidden);
	TdxBarAccessibilityHelper* __fastcall GetBarHelper();
	virtual TdxBarManager* __fastcall GetBarManager();
	virtual _di_IdxBarAccessibilityHelper __fastcall GetDefaultAccessibleObject();
	virtual _di_IdxBarAccessibilityHelper __fastcall GetNextAccessibleObject(Cxaccessibility::TcxAccessibilityNavigationDirection ADirection)/* overload */;
	_di_IdxBarAccessibilityHelper __fastcall GetRootAccessibleObject();
	virtual bool __fastcall HandleNavigationKey(System::Word &AKey);
	virtual bool __fastcall IsNavigationKey(System::Word AKey);
	bool __fastcall IsSelected();
	virtual _di_IdxBarAccessibilityHelper __fastcall LogicalNavigationGetNextAccessibleObject(System::Classes::TShiftState AShift);
	virtual void __fastcall Select(bool ASetFocus);
	virtual void __fastcall Unselect(_di_IdxBarAccessibilityHelper ANextSelectedObject);
	TCustomdxBarControl* __fastcall GetBarControl();
	void __fastcall GetChildrenForNavigation(TdxBarAccessibilityHelper* ASelectedObject, TdxBarAccessibilityHelper* AParentObject, const System::Types::TRect &ASelectedObjectScreenBounds, Cxaccessibility::TcxAccessibilityNavigationDirection ADirection, bool AAreOnlyNearObjectsAccepted, System::Classes::TList* AObjects);
	virtual System::UnicodeString __fastcall GetAssignedKeyTip() = 0 ;
	virtual System::UnicodeString __fastcall GetDefaultKeyTip() = 0 ;
	virtual System::UnicodeString __fastcall GetKeyTip();
	virtual TdxBarKeyTipData* __fastcall CreateKeyTipData();
	virtual void __fastcall GetKeyTipInfo(/* out */ TdxBarKeyTipInfo &AKeyTipInfo);
	virtual void __fastcall GetKeyTipData(System::Classes::TList* AKeyTipsData);
	virtual void __fastcall DoGetKeyTipsData(System::Classes::TList* AKeyTipsData);
	void __fastcall GetKeyTipsData(System::Classes::TList* AKeyTipsData);
	void __fastcall GenerateUniqueKeyTips(System::Classes::TList* AKeyTipsData);
	bool __fastcall CanFocused();
	virtual TdxBarAccessibilityHelper* __fastcall GetParentForKeyTip();
	virtual bool __fastcall IsParentForKeyTip();
	virtual bool __fastcall IsKeyTipContainer();
	virtual void __fastcall KeyTipHandler(System::TObject* Sender);
	virtual void __fastcall KeyTipsEscapeHandler();
	virtual TdxBarAccessibilityHelper* __fastcall LogicalNavigationGetChild(int AIndex);
	virtual int __fastcall LogicalNavigationGetChildCount();
	virtual int __fastcall LogicalNavigationGetChildIndex(TdxBarAccessibilityHelper* AChild);
	TdxBarAccessibilityHelper* __fastcall LogicalNavigationGetNextChild(int AChildIndex, bool AGoForward)/* overload */;
	virtual TdxBarAccessibilityHelper* __fastcall LogicalNavigationGetNextChild(int AChildIndex, System::Classes::TShiftState AShift)/* overload */;
	__property TdxBarAccessibilityHelper* ParentForKeyTip = {read=GetParentForKeyTip};
	
public:
	virtual _di_IdxBarAccessibilityHelper __fastcall GetDefaultSelectableObject(Cxaccessibility::TcxAccessibilityNavigationDirection ADirection);
	TdxBarAccessibilityHelper* __fastcall GetFirstSelectableObject();
	__property TdxBarManager* BarManager = {read=GetBarManager};
	__property TdxBarAccessibilityHelper* Childs[int AIndex] = {read=InternalGetChild};
	__property TdxBarAccessibilityHelper* Parent = {read=InternalGetParent};
public:
	/* TcxAccessibilityHelper.Create */ inline __fastcall virtual TdxBarAccessibilityHelper(System::TObject* AOwnerObject) : Cxaccessibility::TcxAccessibilityHelper(AOwnerObject) { }
	/* TcxAccessibilityHelper.Destroy */ inline __fastcall virtual ~TdxBarAccessibilityHelper() { }
	
private:
	void *__IdxBarAccessibilityHelper;	// IdxBarAccessibilityHelper 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {5AE17753-A04D-4496-B5A3-08B2CEDE40F7}
	operator _di_IdxBarAccessibilityHelper()
	{
		_di_IdxBarAccessibilityHelper intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxBarAccessibilityHelper*(void) { return (IdxBarAccessibilityHelper*)&__IdxBarAccessibilityHelper; }
	#endif
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxBarCaptionButton : public Cxclasses::TcxInterfacedCollectionItem
{
	typedef Cxclasses::TcxInterfacedCollectionItem inherited;
	
private:
	bool FEnabled;
	Vcl::Graphics::TBitmap* FGlyph;
	System::UnicodeString FHint;
	_di_IdxBarAccessibilityHelper FIAccessibilityHelper;
	System::UnicodeString FKeyTip;
	Dxcoreclasses::TcxFreeNotificator* FNotifyComponent;
	System::Types::TRect FRect;
	Dxscreentip::TdxScreenTip* FScreenTip;
	int FState;
	System::Classes::TNotifyEvent FOnClick;
	TdxBarCaptionButtons* __fastcall GetCollection();
	_di_IdxBarAccessibilityHelper __fastcall GetIAccessibilityHelper();
	TdxBarControl* __fastcall GetParent();
	void __fastcall GlyphChanged(System::TObject* Sender);
	void __fastcall SetEnabled(bool Value);
	void __fastcall SetGlyph(Vcl::Graphics::TBitmap* Value);
	void __fastcall SetScreenTip(Dxscreentip::TdxScreenTip* Value);
	void __fastcall SetState(int Value);
	void __fastcall SetOnClick(System::Classes::TNotifyEvent Value);
	void __fastcall FreeNotification(System::Classes::TComponent* AComponent);
	__property TdxBarControl* Parent = {read=GetParent};
	
protected:
	TdxBarCaptionButtons* FCreatedFromMergingWith;
	virtual TdxBarAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	virtual void __fastcall Merge(TdxBarCaptionButton* AButton);
	virtual void __fastcall Unmerge(TdxBarCaptionButtons* AButtons = (TdxBarCaptionButtons*)(0x0));
	bool __fastcall DoHint(bool &ANeedDeactivate, /* out */ System::UnicodeString &AHintText, /* out */ System::UnicodeString &AShortCut);
	TdxBarCustomHintViewInfo* __fastcall CreateHintViewInfo(const System::UnicodeString AHintText, const System::UnicodeString AShortCut);
	bool __fastcall GetEnabled();
	System::Types::TPoint __fastcall GetHintPosition(const System::Types::TPoint &ACursorPos, int AHeight);
	
public:
	__fastcall virtual TdxBarCaptionButton(System::Classes::TCollection* Collection);
	__fastcall virtual ~TdxBarCaptionButton();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall Click();
	__property TdxBarCaptionButtons* Collection = {read=GetCollection};
	__property Vcl::Graphics::TBitmap* Glyph = {read=FGlyph, write=SetGlyph};
	__property _di_IdxBarAccessibilityHelper IAccessibilityHelper = {read=GetIAccessibilityHelper};
	__property System::Types::TRect Rect = {read=FRect, write=FRect};
	__property int State = {read=FState, write=SetState, nodefault};
	
__published:
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=1};
	__property System::UnicodeString Hint = {read=FHint, write=FHint};
	__property System::UnicodeString KeyTip = {read=FKeyTip, write=FKeyTip};
	__property Dxscreentip::TdxScreenTip* ScreenTip = {read=FScreenTip, write=SetScreenTip};
	__property System::Classes::TNotifyEvent OnClick = {read=FOnClick, write=SetOnClick};
private:
	void *__IdxBarHintKeeper;	// IdxBarHintKeeper 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {587A00C4-A7E0-4032-98E5-4DB8F3918ADF}
	operator _di_IdxBarHintKeeper()
	{
		_di_IdxBarHintKeeper intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxBarHintKeeper*(void) { return (IdxBarHintKeeper*)&__IdxBarHintKeeper; }
	#endif
	
};


class PASCALIMPLEMENTATION TdxBarCaptionButtons : public Cxclasses::TcxOwnedInterfacedCollection
{
	typedef Cxclasses::TcxOwnedInterfacedCollection inherited;
	
public:
	TdxBarCaptionButton* operator[](int Index) { return this->Items[Index]; }
	
private:
	_di_IdxBarAccessibilityHelper FIAccessibilityHelper;
	TdxBar* __fastcall GetBar();
	_di_IdxBarAccessibilityHelper __fastcall GetIAccessibilityHelper();
	HIDESBASE TdxBarCaptionButton* __fastcall GetItem(int Index);
	System::Types::TRect __fastcall GetRect();
	HIDESBASE void __fastcall SetItem(int Index, TdxBarCaptionButton* Value);
	
protected:
	virtual TdxBarAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	int __fastcall GetButtonIndex(const System::Types::TPoint &APoint);
	virtual void __fastcall Merge(TdxBarCaptionButtons* AButtons);
	virtual void __fastcall Unmerge(TdxBarCaptionButtons* AButtons = (TdxBarCaptionButtons*)(0x0));
	
public:
	__fastcall TdxBarCaptionButtons(TdxBar* ABar);
	__fastcall virtual ~TdxBarCaptionButtons();
	HIDESBASE TdxBarCaptionButton* __fastcall Add();
	void __fastcall UpdateButtonStates(const System::Types::TPoint &AMousePos, bool AMousePressed = false);
	__property TdxBar* Bar = {read=GetBar};
	__property _di_IdxBarAccessibilityHelper IAccessibilityHelper = {read=GetIAccessibilityHelper};
	__property TdxBarCaptionButton* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property System::Types::TRect Rect = {read=GetRect};
};


class PASCALIMPLEMENTATION TdxBar : public Cxclasses::TcxComponentCollectionItem
{
	typedef Cxclasses::TcxComponentCollectionItem inherited;
	
private:
	bool FAllowClose;
	bool FAllowCustomizing;
	bool FAllowQuickCustomizing;
	bool FAllowReset;
	System::Byte FAlphaBlendValue;
	Vcl::Graphics::TBitmap* FBackgroundBitmap;
	TdxBarBorderStyle FBorderStyle;
	System::UnicodeString FCaption;
	TdxBarCaptionButtons* FCaptionButtons;
	bool FChanged;
	System::Uitypes::TColor FColor;
	bool FChangingDockingStyle;
	TdxBarDockControl* FDockControl;
	TdxBarDockControl* FDockedDockControl;
	TdxBarDockingStyle FDockedDockingStyle;
	int FDockedLeft;
	int FDockedTop;
	TdxBarDockingStyle FDockingStyle;
	TdxDockRow* FDockRow;
	Vcl::Graphics::TFont* FEditFont;
	int FFloatLeft;
	int FFloatTop;
	int FFloatClientWidth;
	int FFloatClientHeight;
	Vcl::Graphics::TFont* FFont;
	Dxgdiplusclasses::TdxSmartGlyph* FGlyph;
	bool FHidden;
	bool FInternalFontChange;
	bool FInternallyHidden;
	bool FIsMainMenu;
	bool FIsPredefined;
	TdxBarItemLinks* FItemLinks;
	System::UnicodeString FKeyTip;
	System::Classes::TInterfaceList* FListeners;
	TdxBarDockControl* FLoadedDockControl;
	TdxBarDockingStyle FLoadedDockingStyle;
	bool FLoadedVisible;
	bool FLockUpdate;
	TdxBarMergeData* FMergeData;
	bool FNeedUpdateControlPosition;
	TdxBarDockingStyles FNotDocking;
	bool FMultiLine;
	bool FOneOnRow;
	System::UnicodeString FOldName;
	bool FRotateWhenVertical;
	int FRow;
	Cxgeometry::TdxScaleFactor* FScaleFactor;
	bool FShouldNotBeDestroyedIfEmptyAfterUnmerge;
	bool FShowMark;
	bool FSizeGrip;
	bool FUseOwnFont;
	bool FUseRestSpace;
	bool FVisible;
	bool FWholeRow;
	System::Classes::TNotifyEvent FOnDestroy;
	TdxBars* __fastcall GetBars();
	TdxBarControl* __fastcall GetControl();
	TdxBarDockControl* __fastcall GetDockControl();
	TdxBarDockingStyle __fastcall GetDockedDockingStyle();
	TdxBarDockingStyle __fastcall GetDockingStyle();
	TdxBar* __fastcall GetNext();
	TdxBarDockingStyles __fastcall GetNotDocking();
	TdxBarPainter* __fastcall GetPainter();
	TdxDockControl* __fastcall GetRealDockControl();
	int __fastcall GetRow();
	bool __fastcall GetUseRecentItems();
	bool __fastcall GetVisible();
	void __fastcall SetAllowClose(bool Value);
	void __fastcall SetAllowQuickCustomizing(bool Value);
	void __fastcall SetAlphaBlendValue(System::Byte Value);
	void __fastcall SetBackgroundBitmap(Vcl::Graphics::TBitmap* Value);
	void __fastcall SetBorderStyle(TdxBarBorderStyle Value);
	void __fastcall SetCaption(System::UnicodeString Value);
	void __fastcall SetCaptionButtons(TdxBarCaptionButtons* Value);
	void __fastcall SetColor(System::Uitypes::TColor Value);
	void __fastcall SetDockControl(TdxBarDockControl* Value);
	void __fastcall SetDockedDockControl(TdxBarDockControl* Value);
	void __fastcall SetDockedValue(int Index, int Value);
	void __fastcall SetDockingStyle(TdxBarDockingStyle Value);
	void __fastcall SetDockRow(TdxDockRow* Value);
	void __fastcall SetFloatValue(int Index, int Value);
	void __fastcall SetFont(Vcl::Graphics::TFont* Value);
	void __fastcall SetGlyph(Dxgdiplusclasses::TdxSmartGlyph* Value);
	void __fastcall SetHidden(bool Value);
	void __fastcall SetIsMainMenu(bool Value);
	void __fastcall SetItemLinks(TdxBarItemLinks* Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* AImages);
	void __fastcall SetLockUpdate(bool Value);
	void __fastcall SetMultiLine(bool Value);
	void __fastcall SetNotDocking(TdxBarDockingStyles Value);
	void __fastcall SetOneOnRow(bool Value);
	void __fastcall SetRotateWhenVertical(bool Value);
	void __fastcall SetRow(int Value);
	void __fastcall SetShowMark(bool Value);
	void __fastcall SetSizeGrip(bool Value);
	void __fastcall SetUseOwnFont(bool Value);
	void __fastcall SetUseRecentItems(bool Value);
	void __fastcall SetUseRestSpace(bool Value);
	void __fastcall SetVisible(bool Value);
	void __fastcall SetWholeRow(bool Value);
	void __fastcall ReadPixelsPerInch(System::Classes::TReader* Reader);
	void __fastcall WritePixelsPerInch(System::Classes::TWriter* Writer);
	bool __fastcall IsDockedDockingStyleStored();
	bool __fastcall IsDockingStyleStored();
	void __fastcall BitmapChanged(System::TObject* Sender);
	void __fastcall GlyphChanged(System::TObject* Sender);
	void __fastcall FontChanged(System::TObject* Sender);
	void __fastcall UpdateControlPosition();
	void __fastcall UpdateFloatingControlPosition();
	void __fastcall RebuildBar();
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	void __fastcall DoReset();
	void __fastcall RemoveFromDockRow(bool ADestroyEmptyDockRow);
	virtual void __fastcall SetCollection(Cxclasses::TcxComponentCollection* AValue);
	virtual void __fastcall SetName(const System::Classes::TComponentName NewName);
	DYNAMIC void __fastcall Updated();
	DYNAMIC void __fastcall Updating();
	TdxBarControl* __fastcall CreateControl();
	virtual TdxBarControlClass __fastcall GetControlClass();
	void __fastcall ShowControl();
	__classmethod System::UnicodeString __fastcall GetIniSection(const System::UnicodeString ABaseSection, int ABarIndex);
	void __fastcall LoadFromIni(System::Inifiles::TCustomIniFile* ASource, const System::UnicodeString ABaseSection, int ABarIndex, TdxBarStoringKind AStoringKind, bool AFullLoad = true);
	void __fastcall LoadUsageData(System::Inifiles::TCustomIniFile* ASource, const System::UnicodeString ABaseSection, int ABarIndex);
	void __fastcall SaveToIni(System::Inifiles::TCustomIniFile* ADestination, const System::UnicodeString ABaseSection, int ABarIndex, TdxBarStoringKind AStoringKind);
	void __fastcall InternalAssignFont();
	void __fastcall InternalUpdateFont();
	void __fastcall InternalMerge(TdxBar* ABar, bool ASaveMergingBarVisibility);
	void __fastcall InternalUnmergeFromBar(TdxBar* ABar, bool ARestoreMergedBarsVisibility);
	void __fastcall InternalUnmergeFromBarManager(TdxBarManager* ABarManager, bool ARestoreMergedBarsVisibility);
	void __fastcall RestoreMergeState();
	void __fastcall SaveMergeState();
	void __fastcall SetVisibility(bool Value);
	virtual void __fastcall CaptionButtonsNotification(System::TObject* Sender, System::Classes::TCollectionItem* AItem);
	void __fastcall DoChanged();
	void __fastcall DoDestroy();
	void __fastcall DoVisibleChanged();
	void __fastcall NotifyListenersBarVisibilityChanged();
	int __fastcall BarNCSizeX(TdxBarDockingStyle AStyle);
	int __fastcall BarNCSizeY(TdxBarDockingStyle AStyle);
	bool __fastcall CanClose();
	bool __fastcall CanMoving();
	bool __fastcall CanReset();
	int __fastcall GetDockedPosition();
	bool __fastcall HasSizeGrip();
	bool __fastcall IsFloat();
	bool __fastcall IsShortCut(System::Classes::TShortCut AShortCut);
	bool __fastcall IsStatusBar();
	bool __fastcall CanDelete(bool ADestruction = false);
	void __fastcall DeleteSelection(_di_IdxBarSelectableItem &AReference, bool ADestruction);
	void __fastcall ExecuteCustomizationAction(TdxBarCustomizationAction ABasicAction);
	TdxBarManager* __fastcall GetBarManager();
	void __fastcall GetMasterObjects(TdxObjectList* AList);
	_di_IdxBarSelectableItem __fastcall GetNextSelectableItem();
	System::Classes::TPersistent* __fastcall GetSelectableParent();
	TdxBarSelectionStatus __fastcall GetSelectionStatus();
	TdxBarCustomizationActions __fastcall GetSupportedActions();
	void __fastcall Invalidate();
	bool __fastcall IsComplex();
	bool __fastcall IsComponentSelected();
	void __fastcall SelectComponent(TdxBarSelectionOperation ASelectionOperation = (TdxBarSelectionOperation)(0x2));
	bool __fastcall SelectParentComponent();
	void __fastcall SelectionChanged();
	Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	bool __fastcall CanContainItem(TdxBarItem* AItem, /* out */ System::UnicodeString &AErrorText);
	TCustomdxBarControl* __fastcall CreateBarControl();
	TdxBarItemLinks* __fastcall GetItemLinks();
	Vcl::Imglist::TCustomImageList* __fastcall GetImages();
	bool __fastcall IsLoading();
	void __fastcall ChangeScale(int M, int D);
	virtual void __fastcall GetAdornerTargetElements(System::Classes::TStrings* AList);
	System::Classes::TComponent* __fastcall GetComponentInstance();
	System::Classes::TPersistent* __fastcall GetPersistentInstance();
	__property TdxBarMergeData* MergeData = {read=FMergeData};
	__property TdxBarPainter* Painter = {read=GetPainter};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=FScaleFactor};
	__property bool ShouldNotBeDestroyedIfEmptyAfterUnmerge = {read=FShouldNotBeDestroyedIfEmptyAfterUnmerge, write=FShouldNotBeDestroyedIfEmptyAfterUnmerge, nodefault};
	__property System::Classes::TNotifyEvent OnDestroy = {read=FOnDestroy, write=FOnDestroy};
	
public:
	__fastcall virtual TdxBar(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxBar();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall ChangeDockingStyle(TdxBarDockingStyle AStyle, TdxDockControl* ADockControl);
	virtual Cxclasses::TcxComponentCollection* __fastcall GetCollectionFromParent(System::Classes::TComponent* AParent);
	bool __fastcall IsVertical();
	void __fastcall Move(int X, int Y)/* overload */;
	void __fastcall Move(TdxDockControl* ADockControl, int ARow, int APosition)/* overload */;
	void __fastcall Move(TdxBarDockedDockingStyle ADockingStyle, int ARow, int APosition)/* overload */;
	void __fastcall Move(TdxBar* ABar, bool AInsertAfter = true)/* overload */;
	void __fastcall Reset(bool AShowConfirmation = false);
	void __fastcall ResetWithConfirmation();
	DYNAMIC void __fastcall SetParentComponent(System::Classes::TComponent* AParent);
	void __fastcall AddListener(_di_IdxBarListener AListener);
	void __fastcall RemoveListener(_di_IdxBarListener AListener);
	bool __fastcall IsMerged();
	void __fastcall Merge(TdxBar* ABar);
	void __fastcall Unmerge(TdxBar* ABar = (TdxBar*)(0x0));
	__property TdxBarManager* BarManager = {read=GetBarManager};
	__property TdxBars* Bars = {read=GetBars};
	__property TdxBarControl* Control = {read=GetControl};
	__property TdxDockRow* DockRow = {read=FDockRow, write=SetDockRow};
	__property bool IsPredefined = {read=FIsPredefined, nodefault};
	__property bool LockUpdate = {read=FLockUpdate, write=SetLockUpdate, nodefault};
	__property TdxDockControl* RealDockControl = {read=GetRealDockControl};
	
__published:
	__property bool AllowClose = {read=FAllowClose, write=SetAllowClose, default=1};
	__property bool AllowCustomizing = {read=FAllowCustomizing, write=FAllowCustomizing, default=1};
	__property bool AllowQuickCustomizing = {read=FAllowQuickCustomizing, write=SetAllowQuickCustomizing, default=1};
	__property bool AllowReset = {read=FAllowReset, write=FAllowReset, default=1};
	__property TdxBarBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=1};
	__property System::UnicodeString Caption = {read=FCaption, write=SetCaption};
	__property TdxBarCaptionButtons* CaptionButtons = {read=FCaptionButtons, write=SetCaptionButtons};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=536870912};
	__property TdxBarDockControl* DockControl = {read=GetDockControl, write=SetDockControl};
	__property TdxBarDockControl* DockedDockControl = {read=FDockedDockControl, write=SetDockedDockControl};
	__property TdxBarDockingStyle DockedDockingStyle = {read=GetDockedDockingStyle, write=FDockedDockingStyle, stored=IsDockedDockingStyleStored, nodefault};
	__property int DockedLeft = {read=FDockedLeft, write=SetDockedValue, index=1, nodefault};
	__property int DockedTop = {read=FDockedTop, write=SetDockedValue, index=2, nodefault};
	__property TdxBarDockingStyle DockingStyle = {read=GetDockingStyle, write=SetDockingStyle, stored=IsDockingStyleStored, nodefault};
	__property int FloatLeft = {read=FFloatLeft, write=SetFloatValue, index=1, nodefault};
	__property int FloatTop = {read=FFloatTop, write=SetFloatValue, index=2, nodefault};
	__property int FloatClientWidth = {read=FFloatClientWidth, write=SetFloatValue, index=3, nodefault};
	__property int FloatClientHeight = {read=FFloatClientHeight, write=SetFloatValue, index=4, nodefault};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont, stored=FUseOwnFont};
	__property Dxgdiplusclasses::TdxSmartGlyph* Glyph = {read=FGlyph, write=SetGlyph};
	__property bool Hidden = {read=FHidden, write=SetHidden, default=0};
	__property Vcl::Imglist::TCustomImageList* Images = {read=GetImages, write=SetImages};
	__property bool IsMainMenu = {read=FIsMainMenu, write=SetIsMainMenu, default=0};
	__property TdxBarItemLinks* ItemLinks = {read=GetItemLinks, write=SetItemLinks};
	__property System::UnicodeString KeyTip = {read=FKeyTip, write=FKeyTip};
	__property bool MultiLine = {read=FMultiLine, write=SetMultiLine, default=0};
	__property TdxBarDockingStyles NotDocking = {read=GetNotDocking, write=SetNotDocking, default=0};
	__property System::UnicodeString OldName = {read=FOldName, write=FOldName};
	__property bool OneOnRow = {read=FOneOnRow, write=SetOneOnRow, nodefault};
	__property bool RotateWhenVertical = {read=FRotateWhenVertical, write=SetRotateWhenVertical, default=1};
	__property int Row = {read=GetRow, write=SetRow, nodefault};
	__property bool ShowMark = {read=FShowMark, write=SetShowMark, default=1};
	__property bool SizeGrip = {read=FSizeGrip, write=SetSizeGrip, default=1};
	__property bool UseOwnFont = {read=FUseOwnFont, write=SetUseOwnFont, nodefault};
	__property bool UseRecentItems = {read=GetUseRecentItems, write=SetUseRecentItems, default=1};
	__property bool UseRestSpace = {read=FUseRestSpace, write=SetUseRestSpace, default=0};
	__property bool Visible = {read=GetVisible, write=SetVisible, nodefault};
	__property bool WholeRow = {read=FWholeRow, write=SetWholeRow, nodefault};
	__property Vcl::Graphics::TBitmap* BackgroundBitmap = {read=FBackgroundBitmap, write=SetBackgroundBitmap};
	__property System::Byte AlphaBlendValue = {read=FAlphaBlendValue, write=SetAlphaBlendValue, default=255};
private:
	void *__IdxScaleFactor;	// Cxgeometry::IdxScaleFactor 
	void *__IdxBarLinksOwner;	// IdxBarLinksOwner 
	void *__IdxBarSelectableItem;	// IdxBarSelectableItem 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {367A805A-A84B-441A-83A3-6A7E489D3B6C}
	operator Cxgeometry::_di_IdxScaleFactor()
	{
		Cxgeometry::_di_IdxScaleFactor intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxgeometry::IdxScaleFactor*(void) { return (Cxgeometry::IdxScaleFactor*)&__IdxScaleFactor; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {1CB4E538-769E-45F4-9BE3-20814F440106}
	operator _di_IdxBarLinksOwner()
	{
		_di_IdxBarLinksOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxBarLinksOwner*(void) { return (IdxBarLinksOwner*)&__IdxBarLinksOwner; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6DCCAA42-48D0-4D7D-BEDF-1EADC2197131}
	operator _di_IdxBarSelectableItem()
	{
		_di_IdxBarSelectableItem intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxBarSelectableItem*(void) { return (IdxBarSelectableItem*)&__IdxBarSelectableItem; }
	#endif
	
};


typedef System::StaticArray<TdxDockControl*, 4> TdxDockControls;

class PASCALIMPLEMENTATION TdxBars : public Cxclasses::TcxComponentCollection
{
	typedef Cxclasses::TcxComponentCollection inherited;
	
public:
	TdxBar* operator[](int Index) { return this->Items[Index]; }
	
private:
	TdxBarManager* FBarManager;
	TdxDockControls FDockControls;
	bool FDocking;
	int FDockingZoneSize;
	bool FMoving;
	TdxBarControl* FMovingBarControl;
	TdxBarDockingStyle FMovingBarOriginalDockingStyle;
	System::Types::TPoint FMovingOffset;
	System::Types::TPoint FMovingStaticOffset;
	TdxDockControl* __fastcall GetDockControl(TdxBarDockingStyle Index);
	HIDESBASE TdxBar* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TdxBar* Value);
	
protected:
	void __fastcall CreateDockControls();
	bool __fastcall HasDockControls();
	void __fastcall RegInDock(TdxBarDockingStyle AStyle, TdxDockControl* ADockControl, TdxBarControl* ABarControl, const System::Types::TPoint &APos);
	void __fastcall UnregFromDock(TdxBarDockingStyle AStyle, TdxDockControl* ADockControl, TdxBarControl* ABarControl);
	void __fastcall ChangeBarControlPos(TdxBarControl* ABarControl, const System::Types::TPoint &APos);
	TdxBarDockingStyle __fastcall GetDockingStyleAtPos(TdxBar* Bar, const System::Types::TPoint &Pos, TdxDockControl* &DockControl);
	void __fastcall Moving(TdxBarControl* AMovingBarControl);
	void __fastcall Repaint();
	virtual void __fastcall SetItemName(Cxclasses::TcxComponentCollectionItem* AItem, int ABaseIndex = 0xffffffff);
	virtual void __fastcall Update(Cxclasses::TcxComponentCollectionItem* AItem, Cxclasses::TcxComponentCollectionNotification AAction);
	__property int DockingZoneSize = {read=FDockingZoneSize, write=FDockingZoneSize, nodefault};
	
public:
	__fastcall TdxBars(TdxBarManager* ABarManager);
	__fastcall virtual ~TdxBars();
	HIDESBASE TdxBar* __fastcall Add();
	System::UnicodeString __fastcall GetUniqueToolbarName(const System::UnicodeString ABaseName);
	HIDESBASE TdxBar* __fastcall Insert(int Index);
	__property TdxBarManager* BarManager = {read=FBarManager};
	__property TdxDockControl* DockControls[TdxBarDockingStyle Index] = {read=GetDockControl};
	__property bool IsMoving = {read=FMoving, nodefault};
	__property TdxBar* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
};


enum DECLSPEC_DENUM TdxBarUserDefine : unsigned char { udCaption, udGlyph, udPaintStyle, udWidth };

typedef System::Set<TdxBarUserDefine, TdxBarUserDefine::udCaption, TdxBarUserDefine::udWidth> TdxBarUserDefines;

enum DECLSPEC_DENUM TdxBarItemControlPart : unsigned char { cpIcon, cpText };

typedef System::Set<TdxBarItemControlPart, TdxBarItemControlPart::cpIcon, TdxBarItemControlPart::cpText> TdxBarItemControlViewStructure;

enum DECLSPEC_DENUM TdxBarItemControlViewSize : unsigned char { cvsSmall, cvsMedium, cvsLarge };

enum DECLSPEC_DENUM TdxBarItemOptionValue : unsigned char { ioShowDescriptions, ioShowShortCuts, ioSize };

typedef System::Set<TdxBarItemOptionValue, TdxBarItemOptionValue::ioShowDescriptions, TdxBarItemOptionValue::ioSize> TdxBarItemOptionValues;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarItemOptions : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TdxBarItemLinks* FItemLinks;
	TdxBarItemOptionValues FAssignedValues;
	bool FShowDescriptions;
	bool FShowShortCuts;
	TdxBarMenuItemSize FSize;
	bool __fastcall GetShowDescriptions();
	bool __fastcall GetShowShortCuts();
	TdxBarMenuItemSize __fastcall GetSize();
	void __fastcall SetAssignedValues(TdxBarItemOptionValues AValue);
	void __fastcall SetShowDescriptions(bool AValue);
	void __fastcall SetShowShortCuts(bool AValue);
	void __fastcall SetSize(TdxBarMenuItemSize AValue);
	
protected:
	int __fastcall GetDefaultValue(TdxBarItemOptionValue AOption);
	int __fastcall GetValue(TdxBarItemOptionValue AOption);
	bool __fastcall IsShowDescriptionsStored();
	bool __fastcall IsShowShortCutsStored();
	bool __fastcall IsSizeStored();
	bool __fastcall IsValueStored(TdxBarItemOptionValue AOption);
	
public:
	__fastcall TdxBarItemOptions(TdxBarItemLinks* AItemLinks);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property TdxBarItemOptionValues AssignedValues = {read=FAssignedValues, write=SetAssignedValues, stored=false, nodefault};
	__property bool ShowDescriptions = {read=GetShowDescriptions, write=SetShowDescriptions, stored=IsShowDescriptionsStored, nodefault};
	__property bool ShowShortCuts = {read=GetShowShortCuts, write=SetShowShortCuts, stored=IsShowShortCutsStored, nodefault};
	__property TdxBarMenuItemSize Size = {read=GetSize, write=SetSize, stored=IsSizeStored, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxBarItemOptions() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxBarItemLink : public Cxclasses::TcxInterfacedCollectionItem
{
	typedef Cxclasses::TcxInterfacedCollectionItem inherited;
	
private:
	bool FBeginGroup;
	TdxBarButtonGroupPosition FButtonGroup;
	TdxBarItemControl* FControl;
	TdxBar* FCreatedFromMergingWith;
	NativeInt FData;
	bool FDistributed;
	int FImageIndex;
	bool FIsMarkedForDeletion;
	TdxBarItem* FItem;
	System::Types::TRect FItemRect;
	System::UnicodeString FLoadedItemName;
	int FLoadedRecentIndex;
	int FLoadedUseCount;
	bool FLoadedVisible;
	bool FMostRecentlyUsed;
	TdxBarItemLink* FOriginalItemLink;
	TdxBarItemPosition FPosition;
	System::UnicodeString FPrevItemName;
	int FPrevRecentIndex;
	int FRowHeight;
	int FUseCount;
	System::UnicodeString FUserCaption;
	TdxBarUserDefines FUserDefine;
	Dxgdiplusclasses::TdxSmartGlyph* FUserGlyph;
	TdxBarPaintStyle FUserPaintStyle;
	int FUserWidth;
	TdxBarItemViewLayout FViewLayout;
	TdxBarItemViewLevels FViewLevels;
	bool FVisible;
	System::Classes::TNotifyEvent FOnViewLevelChanged;
	TdxBarItemViewLevels __fastcall GetAllowedViewLevels();
	int __fastcall GetAvailableIndex();
	TCustomdxBarControl* __fastcall GetBarControl();
	int __fastcall GetCanVisibleIndex();
	System::UnicodeString __fastcall GetCaption();
	TdxBarItemLinks* __fastcall GetCollection();
	Dxgdiplusclasses::TdxSmartGlyph* __fastcall GetGlyph();
	TdxBarItem* __fastcall GetItem();
	TdxBarItemLink* __fastcall GetNext();
	TdxBarItemLinks* __fastcall GetOwnerValue();
	TdxBarPaintStyle __fastcall GetPaintStyle();
	TdxBarUserDefines __fastcall GetUserDefine();
	int __fastcall GetVisibleIndex();
	int __fastcall GetWidth();
	void __fastcall ReadItemName(System::Classes::TReader* AReader);
	void __fastcall SetButtonGroup(TdxBarButtonGroupPosition Value);
	HIDESBASE virtual void __fastcall SetCollection(TdxBarItemLinks* Value);
	void __fastcall SetDistributed(const bool Value);
	void __fastcall SetDistributedByPrimaryLink(const bool Value);
	void __fastcall SetImageIndex(int Value);
	void __fastcall SetItem(TdxBarItem* Value);
	void __fastcall SetItemRect(const System::Types::TRect &Value);
	void __fastcall SetMostRecentlyUsed(bool Value);
	void __fastcall SetPosition(TdxBarItemPosition Value);
	void __fastcall ForceSetUserDefine(TdxBarUserDefine AValue);
	void __fastcall SetUserDefine(TdxBarUserDefines Value);
	void __fastcall SetUserCaption(const System::UnicodeString Value);
	void __fastcall SetUserGlyph(Dxgdiplusclasses::TdxSmartGlyph* Value);
	void __fastcall SetUserPaintStyle(TdxBarPaintStyle Value);
	void __fastcall SetUserWidth(int Value);
	void __fastcall SetViewLayout(TdxBarItemViewLayout Value);
	void __fastcall SetViewLevels(TdxBarItemViewLevels Value);
	void __fastcall SetVisible(bool Value);
	void __fastcall WriteItemName(System::Classes::TWriter* AWriter);
	void __fastcall AddToRecentList();
	void __fastcall RemoveFromRecentList();
	void __fastcall RestoreRecentIndex();
	void __fastcall SaveRecentIndex();
	void __fastcall InternalBringToTopInRecentList(bool IncCount);
	bool __fastcall IsPrimaryForDistribution();
	void __fastcall Synchronize(TdxBarItemLink* AItemLink);
	void __fastcall CheckMostRecentlyUsed();
	int __fastcall GetRecentIndex();
	void __fastcall SetRecentIndex(int Value);
	__property int RecentIndex = {read=GetRecentIndex, write=SetRecentIndex, nodefault};
	bool __fastcall CanVisible();
	TdxBarItemLink* __fastcall GetRealItemLink();
	void __fastcall OnUserGlyphChanged(System::TObject* Sender);
	
protected:
	virtual bool __fastcall GetBeginGroup();
	virtual void __fastcall SetBeginGroup(bool Value);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	void __fastcall LoadItemName();
	__classmethod System::UnicodeString __fastcall GetIniSection(const System::UnicodeString ABaseSection, int ALinkIndex, TdxBarStoringKind AStoringKind);
	virtual void __fastcall LoadFromIni(System::Inifiles::TCustomIniFile* ASource, const System::UnicodeString ABaseSection, int ALinkIndex, TdxBarStoringKind AStoringKind);
	void __fastcall LoadUsageData(System::Inifiles::TCustomIniFile* ASource, System::UnicodeString ABaseSection, int ALinkIndex);
	virtual void __fastcall SaveToIni(System::Inifiles::TCustomIniFile* ADestination, const System::UnicodeString ABaseSection, int ALinkIndex, TdxBarStoringKind AStoringKind);
	void __fastcall InitiateAction();
	bool __fastcall CanChangePaintStyle();
	void __fastcall ChangeScale(int M, int D);
	virtual void __fastcall DoCalculateDragLineParameters(const bool ADragOverBeginGroup, bool &ADragLineFirstPart, /* out */ System::Types::TRect &ADragLineRect);
	virtual bool __fastcall GetNeedDragLine(const bool ADragOverBeginGroup, const bool ADragOverFirstPart, TdxBarItemLink* ADragOverItemLink);
	bool __fastcall HasItem(TdxBarItem* AItem);
	bool __fastcall IsReferencedBy(_di_IdxBarLinksOwner ALinksOwner);
	bool __fastcall IsAccel(System::Word Key, System::Classes::TShiftState Shift);
	void __fastcall MoveBeginGroupItemIfNeeded();
	virtual void __fastcall PopulateCustomizationPopup(TdxBarItemLinks* AItemLinks, TdxBarCustomizationActions ASupportedActions);
	System::Types::TPoint __fastcall ScreenToClient(const System::Types::TPoint &AScreenPos);
	virtual void __fastcall UpdateByDragParameters(const bool ADragOverBeginGroup, const bool ADragOverFirstPart, TdxBarItemLink* ADragOverItemLink);
	virtual void __fastcall UserGlyphChanged();
	void __fastcall VisibleChanged();
	bool __fastcall CanDelete(bool ADestruction = false);
	void __fastcall DeleteSelection(_di_IdxBarSelectableItem &AReference, bool ADestruction);
	void __fastcall ExecuteCustomizationAction(TdxBarCustomizationAction ABasicAction);
	TdxBarManager* __fastcall GetBarManager();
	System::Classes::TPersistent* __fastcall GetInstance();
	void __fastcall GetMasterObjects(TdxObjectList* AList);
	_di_IdxBarSelectableItem __fastcall GetNextSelectableItem();
	System::Classes::TPersistent* __fastcall GetSelectableParent();
	TdxBarSelectionStatus __fastcall GetSelectionStatus();
	TdxBarCustomizationActions __fastcall GetSupportedActions();
	void __fastcall Invalidate();
	bool __fastcall IsComplex();
	bool __fastcall IsComponentSelected();
	void __fastcall SelectComponent(TdxBarSelectionOperation ASelectionOperation = (TdxBarSelectionOperation)(0x2));
	bool __fastcall SelectParentComponent();
	void __fastcall SelectionChanged();
	virtual Vcl::Controls::TWinControl* __fastcall GetAdornerTargetElementControl();
	virtual System::Types::TRect __fastcall GetAdornerTargetElementBounds();
	virtual bool __fastcall GetAdornerTargetElementVisible();
	__property TdxBar* CreatedFromMergingWith = {read=FCreatedFromMergingWith};
	__property bool IsMarkedForDeletion = {read=FIsMarkedForDeletion, nodefault};
	__property int RowHeight = {read=FRowHeight, write=FRowHeight, nodefault};
	
public:
	__fastcall virtual TdxBarItemLink(System::Classes::TCollection* Collection);
	__fastcall virtual ~TdxBarItemLink();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall BringToTopInRecentList(bool IncCount);
	void __fastcall CreateControl();
	void __fastcall DestroyControl();
	void __fastcall RecreateControl();
	void __fastcall SendToBottomInRecentList();
	__property int AvailableIndex = {read=GetAvailableIndex, nodefault};
	__property TCustomdxBarControl* BarControl = {read=GetBarControl};
	__property TdxBarManager* BarManager = {read=GetBarManager};
	__property int CanVisibleIndex = {read=GetCanVisibleIndex, nodefault};
	__property System::UnicodeString Caption = {read=GetCaption};
	__property TdxBarItemLinks* Collection = {read=GetCollection, write=SetCollection};
	__property TdxBarItemControl* Control = {read=FControl};
	__property NativeInt Data = {read=FData, write=FData, default=0};
	__property Dxgdiplusclasses::TdxSmartGlyph* Glyph = {read=GetGlyph};
	__property System::Types::TRect ItemRect = {read=FItemRect, write=SetItemRect};
	__property TdxBarItemLink* OriginalItemLink = {read=FOriginalItemLink};
	__property TdxBarItemLinks* Owner = {read=GetOwnerValue};
	__property TdxBarPaintStyle PaintStyle = {read=GetPaintStyle, nodefault};
	__property TdxBarItemLink* RealItemLink = {read=GetRealItemLink};
	__property int VisibleIndex = {read=GetVisibleIndex, nodefault};
	__property int Width = {read=GetWidth, nodefault};
	__property System::Classes::TNotifyEvent OnViewLevelChanged = {read=FOnViewLevelChanged, write=FOnViewLevelChanged};
	
__published:
	__property bool BeginGroup = {read=GetBeginGroup, write=SetBeginGroup, default=0};
	__property TdxBarButtonGroupPosition ButtonGroup = {read=FButtonGroup, write=SetButtonGroup, default=0};
	__property bool Distributed = {read=FDistributed, write=SetDistributed, default=1};
	__property int ImageIndex = {read=FImageIndex, write=SetImageIndex, default=-1};
	__property TdxBarItem* Item = {read=GetItem, write=SetItem, stored=false};
	__property bool MostRecentlyUsed = {read=FMostRecentlyUsed, write=SetMostRecentlyUsed, default=1};
	__property TdxBarItemPosition Position = {read=FPosition, write=SetPosition, default=0};
	__property System::UnicodeString UserCaption = {read=FUserCaption, write=SetUserCaption};
	__property TdxBarUserDefines UserDefine = {read=GetUserDefine, write=SetUserDefine, default=0};
	__property Dxgdiplusclasses::TdxSmartGlyph* UserGlyph = {read=FUserGlyph, write=SetUserGlyph};
	__property TdxBarPaintStyle UserPaintStyle = {read=FUserPaintStyle, write=SetUserPaintStyle, default=0};
	__property int UserWidth = {read=FUserWidth, write=SetUserWidth, default=0};
	__property TdxBarItemViewLayout ViewLayout = {read=FViewLayout, write=SetViewLayout, default=0};
	__property TdxBarItemViewLevels ViewLevels = {read=FViewLevels, write=SetViewLevels, default=31};
	__property bool Visible = {read=FVisible, write=SetVisible, nodefault};
private:
	void *__IdxAdornerTargetElement;	// Cxclasses::IdxAdornerTargetElement 
	void *__IdxBarSelectableItem;	// IdxBarSelectableItem 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {FF5950DC-2CE8-4206-BB6A-13635D78F551}
	operator Cxclasses::_di_IdxAdornerTargetElement()
	{
		Cxclasses::_di_IdxAdornerTargetElement intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxclasses::IdxAdornerTargetElement*(void) { return (Cxclasses::IdxAdornerTargetElement*)&__IdxAdornerTargetElement; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6DCCAA42-48D0-4D7D-BEDF-1EADC2197131}
	operator _di_IdxBarSelectableItem()
	{
		_di_IdxBarSelectableItem intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxBarSelectableItem*(void) { return (IdxBarSelectableItem*)&__IdxBarSelectableItem; }
	#endif
	
};


typedef void __fastcall (__closure *TdxBarIterationProc)(int Index, TdxBarItemLink* ItemLink, bool &Stop, void * &Data);

class PASCALIMPLEMENTATION TdxBarItemLinks : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TdxBarItemLink* operator[](int Index) { return this->Items[Index]; }
	
private:
	bool FAssigning;
	System::Classes::TList* FAvailableItems;
	TCustomdxBarControl* FBarControl;
	TdxBarManager* FBarManager;
	System::Classes::TList* FCanVisibleItems;
	bool FInternal;
	TdxBarItemOptions* FItemOptions;
	int FItemRectsLockCount;
	int FPrevRecentItemCount;
	System::Classes::TList* FPrimaryForDistributionItems;
	int FRecentItemCount;
	System::Classes::TList* FRecentItems;
	Cxgeometry::TdxScaleFactor* FScaleFactor;
	bool FUseRecentItems;
	System::Classes::TList* FVisibleItems;
	System::Classes::TNotifyEvent FOnChange;
	Dxcoreclasses::TcxFreeNotificator* FFreeNotificator;
	Vcl::Imglist::TCustomImageList* FImages;
	void __fastcall DesignerModified();
	TdxBarItemLink* __fastcall GetAvailableItem(int Index);
	int __fastcall GetAvailableItemCount();
	TdxBarItemLink* __fastcall GetCanVisibleItem(int Index);
	int __fastcall GetCanVisibleItemCount();
	int __fastcall GetIndexByItemName(const System::UnicodeString AItemName);
	HIDESBASE TdxBarItemLink* __fastcall GetItem(int Index);
	int __fastcall GetMostRecentItemCount();
	TdxBarItemLinks* __fastcall GetParentLinks();
	int __fastcall GetRealVisibleItemCount();
	bool __fastcall GetItemShowDescriptions();
	bool __fastcall GetItemShowShortCuts();
	TdxBarMenuItemSize __fastcall GetItemSize();
	TdxBarItemLink* __fastcall GetVisibleItem(int Index);
	int __fastcall GetVisibleItemCount();
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* AValue);
	HIDESBASE void __fastcall SetItem(int Index, TdxBarItemLink* Value);
	void __fastcall SetItemOptions(TdxBarItemOptions* AValue);
	void __fastcall SetRecentItemCount(int Value);
	bool __fastcall IsUpdateLocked();
	void __fastcall RefreshVisibilityLists();
	__property int MostRecentItemCount = {read=GetMostRecentItemCount, nodefault};
	void __fastcall RestoreRecentItemCount();
	__property int RecentItemCount = {read=FRecentItemCount, write=SetRecentItemCount, nodefault};
	void __fastcall Loaded(bool CheckVisible);
	void __fastcall CheckVisibleIntegrity();
	void __fastcall FreeNotification(System::Classes::TComponent* AComponent);
	
protected:
	_di_IdxBarLinksOwner FLinksOwner;
	void __fastcall EmptyItemRects();
	void __fastcall BeginCalcItemRects();
	void __fastcall EndCalcItemRects();
	bool __fastcall CanUseRecentItems();
	void __fastcall InitiateActions();
	bool __fastcall IsShortCut(System::Classes::TShortCut AShortCut);
	virtual bool __fastcall IsScrollable();
	virtual TdxBarItemLink* __fastcall DoFindItemWithAccel(System::Word AKey, System::Classes::TShiftState AShift, TdxBarItemLink* ACurrentLink);
	TdxBarItemLink* __fastcall FindItemWithAccel(System::Word AKey, System::Classes::TShiftState AShift, TdxBarItemLink* ACurrentLink);
	void __fastcall CheckLinks(System::Inifiles::TCustomIniFile* ASource, const System::UnicodeString ABaseSection);
	void __fastcall LoadFromIni(System::Inifiles::TCustomIniFile* ASource, const System::UnicodeString ASection, TdxBarStoringKind AStoringKind);
	void __fastcall LoadUsageData(System::Inifiles::TCustomIniFile* ASource, System::UnicodeString ASection);
	void __fastcall SaveToIni(System::Inifiles::TCustomIniFile* ADestination, const System::UnicodeString ASection, TdxBarStoringKind AStoringKind);
	void __fastcall ChangeScale(int M, int D);
	void __fastcall Merge(TdxBarItemLinks* AItemLinks);
	void __fastcall Unmerge(TdxBar* ABar);
	TdxBarItemLink* __fastcall AddItem(TdxBarItemClass AItemClass, System::Classes::TComponent* AOwner, System::Classes::TList* AItemList)/* overload */;
	virtual TdxBarItemLinkClass __fastcall GetItemLinkClass();
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	virtual System::Classes::TComponent* __fastcall GetOwnerComponent();
	void __fastcall LoadItemNames();
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	__property bool Internal = {read=FInternal, write=FInternal, nodefault};
	bool __fastcall IsLoading();
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetCurrentImages();
	virtual int __fastcall GetDefaultValue(TdxBarItemOptionValue AOption);
	virtual int __fastcall GetOptionsValue(TdxBarItemOptionValue AOption, TdxBarItemLinks* AItemLinks);
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property bool ItemShowDescriptions = {read=GetItemShowDescriptions, nodefault};
	__property bool ItemShowShortCuts = {read=GetItemShowShortCuts, nodefault};
	__property TdxBarMenuItemSize ItemSize = {read=GetItemSize, nodefault};
	__property _di_IdxBarLinksOwner LinksOwner = {read=FLinksOwner};
	__property TdxBarItemLinks* ParentLinks = {read=GetParentLinks};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=FScaleFactor};
	
public:
	TdxBarItemLink* __fastcall First();
	TdxBarItemLink* __fastcall Last();
	TdxBarItemLink* __fastcall Next(TdxBarItemLink* Current, bool AAnyone = false);
	TdxBarItemLink* __fastcall Prev(TdxBarItemLink* Current, bool AAnyone = false);
	__property int RealVisibleItemCount = {read=GetRealVisibleItemCount, nodefault};
	__fastcall virtual TdxBarItemLinks(TdxBarManager* ABarManager, _di_IdxBarLinksOwner ALinksOwner);
	__fastcall virtual ~TdxBarItemLinks();
	HIDESBASE TdxBarItemLink* __fastcall Add()/* overload */;
	HIDESBASE TdxBarItemLink* __fastcall Add(TdxBarItem* AItem)/* overload */;
	TdxBarItemLink* __fastcall AddItem(TdxBarItemClass AItemClass)/* overload */;
	TdxBarItemLink* __fastcall AddButton();
	TdxBarItemLink* __fastcall AddSubItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	int __fastcall AvailableIndexOf(TdxBarItemLink* Value);
	bool __fastcall CanContainItem(TdxBarItem* AItem)/* overload */;
	virtual bool __fastcall CanContainItem(TdxBarItem* AItem, /* out */ System::UnicodeString &AErrorText)/* overload */;
	int __fastcall CanVisibleIndexOf(TdxBarItemLink* Value);
	virtual void __fastcall CreateBarControl();
	void __fastcall DestroyBarControl();
	TdxBarItemLink* __fastcall FindByItem(TdxBarItem* AItem);
	void __fastcall FreeForeignItems(TdxBarManager* ForeignBarManager);
	bool __fastcall HasItem(TdxBarItem* AItem);
	bool __fastcall IsControlExists(TdxBarItemControl* AItem);
	bool __fastcall IsReferencedBy(_di_IdxBarLinksOwner ALinksOwner);
	int __fastcall IndexOf(TdxBarItemLink* Value);
	HIDESBASE TdxBarItemLink* __fastcall Insert(int AIndex);
	int __fastcall VisibleIndexOf(TdxBarItemLink* Value);
	void __fastcall Move(int ACurIndex, int ANewIndex);
	__property TdxBarItemLink* AvailableItems[int Index] = {read=GetAvailableItem};
	__property int AvailableItemCount = {read=GetAvailableItemCount, nodefault};
	__property TCustomdxBarControl* BarControl = {read=FBarControl, write=FBarControl};
	__property TdxBarManager* BarManager = {read=FBarManager};
	__property TdxBarItemLink* CanVisibleItems[int Index] = {read=GetCanVisibleItem};
	__property int CanVisibleItemCount = {read=GetCanVisibleItemCount, nodefault};
	__property TdxBarItemLink* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property TdxBarItemOptions* ItemOptions = {read=FItemOptions, write=SetItemOptions};
	__property TdxBarItemLink* VisibleItems[int Index] = {read=GetVisibleItem};
	__property int VisibleItemCount = {read=GetVisibleItemCount, nodefault};
	__property System::Classes::TComponent* Owner = {read=GetOwnerComponent};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
};


class PASCALIMPLEMENTATION TdxBarControlItemLinks : public TdxBarItemLinks
{
	typedef TdxBarItemLinks inherited;
	
protected:
	virtual TdxBarItemLink* __fastcall DoFindItemWithAccel(System::Word AKey, System::Classes::TShiftState AShift, TdxBarItemLink* ACurrentLink);
public:
	/* TdxBarItemLinks.Create */ inline __fastcall virtual TdxBarControlItemLinks(TdxBarManager* ABarManager, _di_IdxBarLinksOwner ALinksOwner) : TdxBarItemLinks(ABarManager, ALinksOwner) { }
	/* TdxBarItemLinks.Destroy */ inline __fastcall virtual ~TdxBarControlItemLinks() { }
	
};


class PASCALIMPLEMENTATION TdxBarSubMenuControlItemLinks : public TdxBarItemLinks
{
	typedef TdxBarItemLinks inherited;
	
protected:
	virtual bool __fastcall IsScrollable();
public:
	/* TdxBarItemLinks.Create */ inline __fastcall virtual TdxBarSubMenuControlItemLinks(TdxBarManager* ABarManager, _di_IdxBarLinksOwner ALinksOwner) : TdxBarItemLinks(ABarManager, ALinksOwner) { }
	/* TdxBarItemLinks.Destroy */ inline __fastcall virtual ~TdxBarSubMenuControlItemLinks() { }
	
};


class PASCALIMPLEMENTATION TdxBarInternalLinksOwner : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	TdxBarManager* FBarManager;
	TCustomdxBarControlClass FBarControlClass;
	TdxBarItemLinks* FItemLinks;
	TCustomdxBarControl* __fastcall GetBarControl();
	bool __fastcall CanContainItem(TdxBarItem* AItem, /* out */ System::UnicodeString &AErrorText);
	TCustomdxBarControl* __fastcall CreateBarControl();
	TdxBarManager* __fastcall GetBarManager();
	System::Classes::TComponent* __fastcall GetInstance();
	TdxBarItemLinks* __fastcall GetItemLinks();
	Vcl::Imglist::TCustomImageList* __fastcall GetImages();
	bool __fastcall IsLoading();
	
public:
	__fastcall TdxBarInternalLinksOwner(TdxBarManager* ABarManager, TCustomdxBarControlClass ABarControlClass);
	__fastcall virtual ~TdxBarInternalLinksOwner();
	__property TdxBarItemLinks* ItemLinks = {read=FItemLinks};
	__property TCustomdxBarControl* BarControl = {read=GetBarControl};
private:
	void *__IdxBarLinksOwner;	// IdxBarLinksOwner 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {1CB4E538-769E-45F4-9BE3-20814F440106}
	operator _di_IdxBarLinksOwner()
	{
		_di_IdxBarLinksOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxBarLinksOwner*(void) { return (IdxBarLinksOwner*)&__IdxBarLinksOwner; }
	#endif
	
};


class PASCALIMPLEMENTATION TdxBarInternalItemLinks : public TdxBarItemLinks
{
	typedef TdxBarItemLinks inherited;
	
public:
	__fastcall virtual TdxBarInternalItemLinks(TdxBarManager* ABarManager, _di_IdxBarLinksOwner ALinksOwner);
public:
	/* TdxBarItemLinks.Destroy */ inline __fastcall virtual ~TdxBarInternalItemLinks() { }
	
};


typedef void __fastcall (__closure *TdxBarPaintSubMenuBarEvent)(System::TObject* Sender, Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R);

class PASCALIMPLEMENTATION TdxBarCustomPopupComponent : public TdxBarComponent
{
	typedef TdxBarComponent inherited;
	
private:
	TdxBarItemLinks* FItemLinks;
	Cxgeometry::TdxScaleFactor* FScaleFactor;
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* AImages);
	void __fastcall SetItemLinks(TdxBarItemLinks* Value);
	void __fastcall ReadPixelsPerInch(System::Classes::TReader* Reader);
	void __fastcall WritePixelsPerInch(System::Classes::TWriter* Writer);
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall SetBarManager(TdxBarManager* Value);
	virtual TCustomdxBarControlClass __fastcall GetControlClass();
	virtual TdxBarItemLinksClass __fastcall GetItemLinksClass();
	void __fastcall CreateItemLinks();
	virtual void __fastcall CreateSubClasses();
	virtual void __fastcall Initialize();
	virtual bool __fastcall NeedAssignBarManagerOnInitialize();
	void __fastcall ChangeScale(int M, int D);
	virtual void __fastcall ChangeScaleCore(int M, int D);
	void __fastcall ScaleForPPI(int TargetPPI);
	Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	bool __fastcall CanContainItem(TdxBarItem* AItem, /* out */ System::UnicodeString &AErrorText);
	virtual TCustomdxBarControl* __fastcall CreateBarControl();
	TdxBarItemLinks* __fastcall GetItemLinks();
	Vcl::Imglist::TCustomImageList* __fastcall GetImages();
	bool __fastcall IsLoading();
	__property Vcl::Imglist::TCustomImageList* Images = {read=GetImages, write=SetImages};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=FScaleFactor};
	
public:
	__fastcall virtual TdxBarCustomPopupComponent(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxBarCustomPopupComponent();
	__property TdxBarItemLinks* ItemLinks = {read=GetItemLinks, write=SetItemLinks};
private:
	void *__IdxBarLinksOwner;	// IdxBarLinksOwner 
	void *__IdxScaleFactor;	// Cxgeometry::IdxScaleFactor 
	void *__IcxScalableComponent;	// Cxclasses::IcxScalableComponent 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {1CB4E538-769E-45F4-9BE3-20814F440106}
	operator _di_IdxBarLinksOwner()
	{
		_di_IdxBarLinksOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxBarLinksOwner*(void) { return (IdxBarLinksOwner*)&__IdxBarLinksOwner; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {367A805A-A84B-441A-83A3-6A7E489D3B6C}
	operator Cxgeometry::_di_IdxScaleFactor()
	{
		Cxgeometry::_di_IdxScaleFactor intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxgeometry::IdxScaleFactor*(void) { return (Cxgeometry::IdxScaleFactor*)&__IdxScaleFactor; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {70931963-6520-4B20-A9FD-06EE20C9EEF1}
	operator Cxclasses::_di_IcxScalableComponent()
	{
		Cxclasses::_di_IcxScalableComponent intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxclasses::IcxScalableComponent*(void) { return (Cxclasses::IcxScalableComponent*)&__IcxScalableComponent; }
	#endif
	
};


class PASCALIMPLEMENTATION TdxBarCustomPopupMenuComponent : public TdxBarCustomPopupComponent
{
	typedef TdxBarCustomPopupComponent inherited;
	
private:
	Vcl::Graphics::TFont* FFont;
	bool FInternalFontChange;
	bool FUseOwnFont;
	void __fastcall OwnerDesignerModified();
	void __fastcall SetFont(Vcl::Graphics::TFont* Value);
	void __fastcall SetUseOwnFont(bool Value);
	
protected:
	virtual void __fastcall ChangeScaleCore(int M, int D);
	virtual void __fastcall CreateSubClasses();
	virtual void __fastcall FontChanged(System::TObject* Sender);
	virtual void __fastcall InternalAssignFont();
	void __fastcall InternalUpdateFont();
	virtual void __fastcall SetBarManager(TdxBarManager* Value);
	
public:
	__fastcall virtual ~TdxBarCustomPopupMenuComponent();
	virtual bool __fastcall IsShortCut(System::Classes::TShortCut AShortCut);
	virtual bool __fastcall IsShortCutKey(Winapi::Messages::TWMKey &Message);
	virtual void __fastcall Popup(int X, int Y) = 0 ;
	void __fastcall PopupFromCursorPos();
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont, stored=FUseOwnFont};
	__property bool UseOwnFont = {read=FUseOwnFont, write=SetUseOwnFont, nodefault};
public:
	/* TdxBarCustomPopupComponent.Create */ inline __fastcall virtual TdxBarCustomPopupMenuComponent(System::Classes::TComponent* AOwner) : TdxBarCustomPopupComponent(AOwner) { }
	
private:
	void *__IcxPopupMenu;	// Cxcontrols::IcxPopupMenu 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {61EEDA7D-88CC-45BF-8A00-5C25174D6501}
	operator Cxcontrols::_di_IcxPopupMenu()
	{
		Cxcontrols::_di_IcxPopupMenu intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxcontrols::IcxPopupMenu*(void) { return (Cxcontrols::IcxPopupMenu*)&__IcxPopupMenu; }
	#endif
	
};


typedef System::TMetaClass* TdxBarCustomPopupMenuClass;

class PASCALIMPLEMENTATION TdxBarCustomPopupMenu : public TdxBarCustomPopupMenuComponent
{
	typedef TdxBarCustomPopupMenuComponent inherited;
	
private:
	Vcl::Graphics::TBitmap* FBackgroundBitmap;
	int FBarSize;
	Vcl::Graphics::TFont* FEditFont;
	System::Types::TRect *FOwnerBounds;
	Vcl::Controls::TWinControl* FOwnerControl;
	TdxBarItemControl* FOwnerItemControl;
	int FOwnerWidth;
	int FOwnerHeight;
	Vcl::Menus::TPopupAlignment FPopupAlignment;
	bool FPopupMenuVisible;
	bool FShowAnimation;
	System::Classes::TNotifyEvent FOnCloseUp;
	TdxBarCloseUpEvent FOnCloseUpEx;
	TdxBarPaintSubMenuBarEvent FOnPaintBar;
	System::Classes::TNotifyEvent FOnPopup;
	System::Classes::TNotifyEvent FOnShow;
	TdxBarItemOptions* __fastcall GetItemOptions();
	TdxBarSubMenuControl* __fastcall GetSubMenuControl();
	bool __fastcall GetUseRecentItems();
	void __fastcall SetBackgroundBitmap(Vcl::Graphics::TBitmap* Value);
	void __fastcall SetBarSize(int Value);
	void __fastcall SetItemOptions(TdxBarItemOptions* Value);
	void __fastcall SetUseRecentItems(bool Value);
	void __fastcall SubMenuCloseUp(System::TObject* Sender, TdxBarCloseUpReason AReason);
	void __fastcall SubMenuPopup(System::TObject* Sender);
	void __fastcall SubMenuShow(System::TObject* Sender);
	void __fastcall InternalPopup(int X, int Y, const System::Types::TRect &AOwnerBounds, Vcl::Menus::TPopupAlignment APopupAlignment);
	
protected:
	int FMinWidth;
	bool FUseOwnMessageLoop;
	virtual void __fastcall CreateSubClasses();
	virtual void __fastcall DoShow();
	virtual bool __fastcall GetEnabled();
	virtual void __fastcall FontChanged(System::TObject* Sender);
	virtual void __fastcall InternalAssignFont();
	virtual void __fastcall SetBarManager(TdxBarManager* Value);
	int __fastcall GetBarSize();
	virtual void __fastcall DoPaintBar(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R);
	virtual void __fastcall DoPopup();
	virtual void __fastcall DoCloseUp();
	__property TdxBarItemOptions* ItemOptions = {read=GetItemOptions, write=SetItemOptions};
	__property Vcl::Menus::TPopupAlignment PopupAlignment = {read=FPopupAlignment, write=FPopupAlignment, default=0};
	__property TdxBarCloseUpEvent OnCloseUpEx = {read=FOnCloseUpEx, write=FOnCloseUpEx};
	
public:
	__fastcall virtual TdxBarCustomPopupMenu(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxBarCustomPopupMenu();
	virtual void __fastcall Popup(int X, int Y);
	void __fastcall PopupEx(int X, int Y, int AOwnerWidth, int AOwnerHeight, bool AShowAnimation, System::Types::PRect AOwnerBounds, bool AUseOwnMessageLoop = true, Vcl::Controls::TWinControl* AOwnerControl = (Vcl::Controls::TWinControl*)(0x0));
	__property Vcl::Graphics::TBitmap* BackgroundBitmap = {read=FBackgroundBitmap, write=SetBackgroundBitmap};
	__property int BarSize = {read=GetBarSize, write=SetBarSize, default=0};
	__property TdxBarSubMenuControl* SubMenuControl = {read=GetSubMenuControl};
	__property bool UseRecentItems = {read=GetUseRecentItems, write=SetUseRecentItems, default=0};
	__property bool Visible = {read=FPopupMenuVisible, nodefault};
	__property System::Classes::TNotifyEvent OnCloseUp = {read=FOnCloseUp, write=FOnCloseUp};
	__property TdxBarPaintSubMenuBarEvent OnPaintBar = {read=FOnPaintBar, write=FOnPaintBar};
	__property System::Classes::TNotifyEvent OnPopup = {read=FOnPopup, write=FOnPopup};
	__property System::Classes::TNotifyEvent OnShow = {read=FOnShow, write=FOnShow};
private:
	void *__IdxBarSubMenuOwner;	// IdxBarSubMenuOwner 
	void *__IcxPopupMenu2;	// Cxcontrols::IcxPopupMenu2 
	void *__IcxPopupMenu;	// Cxcontrols::IcxPopupMenu 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {218A3250-D279-44EA-9E87-3D5443B3C0ED}
	operator _di_IdxBarSubMenuOwner()
	{
		_di_IdxBarSubMenuOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxBarSubMenuOwner*(void) { return (IdxBarSubMenuOwner*)&__IdxBarSubMenuOwner; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E6DC09CE-3252-457B-B6D2-09D8335C2DED}
	operator Cxcontrols::_di_IcxPopupMenu2()
	{
		Cxcontrols::_di_IcxPopupMenu2 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxcontrols::IcxPopupMenu2*(void) { return (Cxcontrols::IcxPopupMenu2*)&__IcxPopupMenu2; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {61EEDA7D-88CC-45BF-8A00-5C25174D6501}
	operator Cxcontrols::_di_IcxPopupMenu()
	{
		Cxcontrols::_di_IcxPopupMenu intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxcontrols::IcxPopupMenu*(void) { return (Cxcontrols::IcxPopupMenu*)&__IcxPopupMenu; }
	#endif
	
};


class PASCALIMPLEMENTATION TdxBarPopupMenu : public TdxBarCustomPopupMenu
{
	typedef TdxBarCustomPopupMenu inherited;
	
__published:
	__property BackgroundBitmap;
	__property BarManager;
	__property BarSize = {default=0};
	__property Font;
	__property Images;
	__property ItemLinks;
	__property ItemOptions;
	__property PopupAlignment = {default=0};
	__property UseOwnFont;
	__property UseRecentItems = {default=0};
	__property OnCloseUp;
	__property OnPaintBar;
	__property OnPopup;
	__property OnShow;
public:
	/* TdxBarCustomPopupMenu.Create */ inline __fastcall virtual TdxBarPopupMenu(System::Classes::TComponent* AOwner) : TdxBarCustomPopupMenu(AOwner) { }
	/* TdxBarCustomPopupMenu.Destroy */ inline __fastcall virtual ~TdxBarPopupMenu() { }
	
};


class PASCALIMPLEMENTATION TdxDockControl : public Cxcontrols::TcxCustomControl
{
	typedef Cxcontrols::TcxCustomControl inherited;
	
private:
	bool FAllowDocking;
	Vcl::Graphics::TBitmap* FBackgroundBitmap;
	Cxgraphics::TcxBitmap* FBackgroundTempBitmap;
	TdxBarManager* FBarManager;
	TdxBarDockingStyle FDockingStyle;
	_di_IdxBarAccessibilityHelper FIAccessibilityHelper;
	bool FIsBarHandleDestroying;
	int FLockCount;
	System::Classes::TList* FRowList;
	int FRowMarginSize;
	void __fastcall BitmapChanged(System::TObject* Sender);
	TdxBars* __fastcall GetBars();
	bool __fastcall GetHorizontal();
	_di_IdxBarAccessibilityHelper __fastcall GetIAccessibilityHelper();
	bool __fastcall GetIsDesigning();
	bool __fastcall GetIsInternal();
	bool __fastcall GetIsLoading();
	bool __fastcall GetMain();
	TdxDockRow* __fastcall GetRow(int Index);
	int __fastcall GetRowCount();
	bool __fastcall GetTopLeft();
	bool __fastcall GetVertical();
	void __fastcall SetBarManager(TdxBarManager* Value);
	void __fastcall SetBackgroundBitmap(Vcl::Graphics::TBitmap* Value);
	HIDESBASE MESSAGE void __fastcall CMBiDiModeChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMSysColorChange(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall DXMScaleChanging(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMDestroy(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	MESSAGE void __fastcall WMGetObject(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMMouseActivate(Winapi::Messages::TWMMouseActivate &Message);
	HIDESBASE MESSAGE void __fastcall WMNCCalcSize(Winapi::Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TWMNCPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMRButtonDown(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMWindowPosChanged(Winapi::Messages::TWMWindowPosMsg &Message);
	
protected:
	virtual void __fastcall AlignControls(Vcl::Controls::TControl* AControl, System::Types::TRect &Rect);
	virtual void __fastcall ChangeScaleEx(int M, int D, bool isDpiChange);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall DestroyHandle();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall RequestAlign();
	void __fastcall AddBarControl(TdxBarControl* ABarControl, const System::Types::TPoint &APos, bool ANeedUpdate);
	void __fastcall DeleteBarControl(TdxBarControl* ABarControl, System::TObject* ADockCol, bool Update);
	void __fastcall MoveBarControl(TdxBarControl* ABarControl, const System::Types::TPoint &APos);
	void __fastcall AssignPositions();
	virtual void __fastcall BarManagerChanged();
	virtual void __fastcall CalcLayout();
	virtual void __fastcall CalcRowToolbarPositions(int ARowIndex, int AClientSize);
	virtual bool __fastcall CanCustomize();
	virtual bool __fastcall CanDocking(TdxBar* Bar);
	virtual void __fastcall ColorChanged();
	int __fastcall GetBarControlPos(int AControlPos, int AControlWidth);
	System::Types::TRect __fastcall GetDockZoneBounds();
	void __fastcall GetDockZoneMargins(int Row, int ZoneNumber, int &M1, int &M2);
	System::Types::TRect __fastcall GetRectForRow(int ARow);
	virtual int __fastcall GetClientSize();
	int __fastcall GetSize();
	int __fastcall GetRowAtPos(const System::Types::TPoint &APos, /* out */ bool &ANeedInsert);
	int __fastcall GetColAtPos(int ARow, const System::Types::TPoint &APos);
	void __fastcall GetPosForRow(int Row, bool OneOnRow, System::Types::TPoint &P);
	virtual bool __fastcall GetSunkenBorder();
	Vcl::Forms::TCustomForm* __fastcall GetMainForm();
	Vcl::Forms::TCustomForm* __fastcall GetMasterForm();
	Vcl::Forms::TCustomForm* __fastcall GetParentForm();
	virtual bool __fastcall IsMultiRow();
	void __fastcall NCChanged();
	void __fastcall PaintBarControls();
	virtual void __fastcall SetSize();
	virtual void __fastcall ShowCustomizePopup();
	void __fastcall UpdateDock();
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	bool __fastcall IsUpdateLocked();
	virtual TdxBarAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	virtual TdxBarControlClass __fastcall GetDockedBarControlClass();
	virtual TdxBarDockingStyle __fastcall GetDockingStyle();
	virtual TdxBarPainter* __fastcall GetPainter();
	virtual void __fastcall FillBackground(HDC DC, const System::Types::TRect &ADestR, const System::Types::TRect &ASourceR, HBRUSH ABrush, System::Uitypes::TColor AColor);
	virtual bool __fastcall IsBackgroundBitmap();
	bool __fastcall IsBarManagerValid();
	virtual bool __fastcall IsDrawDesignBorder();
	virtual bool __fastcall IsTransparent();
	virtual void __fastcall RepaintBarControls();
	virtual void __fastcall ResetBackground();
	virtual void __fastcall UpdateDoubleBuffered();
	__property Cxgraphics::TcxBitmap* BackgroundTempBitmap = {read=FBackgroundTempBitmap};
	__property bool AllowDocking = {read=FAllowDocking, write=FAllowDocking, default=1};
	__property Vcl::Graphics::TBitmap* BackgroundBitmap = {read=FBackgroundBitmap, write=SetBackgroundBitmap};
	__property bool Horizontal = {read=GetHorizontal, nodefault};
	__property bool IsBarHandleDestroying = {read=FIsBarHandleDestroying, write=FIsBarHandleDestroying, nodefault};
	__property bool IsDesigning = {read=GetIsDesigning, nodefault};
	__property bool IsInternal = {read=GetIsInternal, nodefault};
	__property bool IsLoading = {read=GetIsLoading, nodefault};
	__property bool Main = {read=GetMain, nodefault};
	__property Vcl::Forms::TCustomForm* MainForm = {read=GetMainForm};
	__property Vcl::Forms::TCustomForm* MasterForm = {read=GetMasterForm};
	__property TdxBarPainter* Painter = {read=GetPainter};
	__property Vcl::Forms::TCustomForm* ParentForm = {read=GetParentForm};
	__property int RowMarginSize = {read=FRowMarginSize, write=FRowMarginSize, nodefault};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=GetScaleFactor};
	__property bool SunkenBorder = {read=GetSunkenBorder, nodefault};
	__property bool TopLeft = {read=GetTopLeft, nodefault};
	__property bool Vertical = {read=GetVertical, nodefault};
	
public:
	__fastcall virtual TdxDockControl(System::Classes::TComponent* AOwner);
	__fastcall TdxDockControl(System::Classes::TComponent* AOwner, TdxBarManager* ABarManager, TdxBarDockingStyle ADockStyle);
	__fastcall virtual ~TdxDockControl();
	virtual void __fastcall InitiateAction();
	__property TdxBarManager* BarManager = {read=FBarManager, write=SetBarManager};
	__property TdxBars* Bars = {read=GetBars};
	__property TdxBarDockingStyle DockingStyle = {read=GetDockingStyle, nodefault};
	__property _di_IdxBarAccessibilityHelper IAccessibilityHelper = {read=GetIAccessibilityHelper};
	__property int RowCount = {read=GetRowCount, nodefault};
	__property System::Classes::TList* RowList = {read=FRowList};
	__property TdxDockRow* Rows[int Index] = {read=GetRow};
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxDockControl(HWND ParentWindow) : Cxcontrols::TcxCustomControl(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TdxBarDockAlign : unsigned char { dalNone, dalTop, dalBottom, dalLeft, dalRight };

class PASCALIMPLEMENTATION TdxBarDockControl : public TdxDockControl
{
	typedef TdxDockControl inherited;
	
private:
	bool FAllowZeroSizeInDesignTime;
	bool FSunkenBorder;
	bool FUseOwnColor;
	bool FUseOwnSunkenBorder;
	TdxBarDockAlign __fastcall GetAlign();
	System::Uitypes::TColor __fastcall GetColor();
	HIDESBASE bool __fastcall GetIsLoading();
	bool __fastcall GetParentColor();
	HIDESBASE void __fastcall SetAlign(TdxBarDockAlign Value);
	void __fastcall SetAllowZeroSizeInDesignTime(bool Value);
	HIDESBASE void __fastcall SetColor(System::Uitypes::TColor Value);
	HIDESBASE void __fastcall SetParentColor(bool Value);
	void __fastcall SetSunkenBorder(bool Value);
	void __fastcall SetUseOwnColor(bool Value);
	void __fastcall SetUseOwnSunkenBorder(bool Value);
	void __fastcall SetMinSize();
	HIDESBASE bool __fastcall IsColorStored();
	bool __fastcall IsWidthStored();
	bool __fastcall IsHeightStored();
	MESSAGE void __fastcall WMCreate(Winapi::Messages::TWMCreate &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	
protected:
	virtual bool __fastcall AllowUndockWhenLoadFromIni();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall Paint();
	virtual void __fastcall BarManagerChanged();
	virtual bool __fastcall CanDocking(TdxBar* Bar);
	virtual void __fastcall ColorChanged();
	virtual int __fastcall GetClientSize();
	virtual int __fastcall GetMinSize();
	virtual bool __fastcall GetSunkenBorder();
	__property bool IsLoading = {read=GetIsLoading, nodefault};
	
public:
	__fastcall virtual TdxBarDockControl(System::Classes::TComponent* AOwner);
	virtual void __fastcall AfterConstruction();
	
__published:
	__property TdxBarDockAlign Align = {read=GetAlign, write=SetAlign, nodefault};
	__property AllowDocking = {default=1};
	__property bool AllowZeroSizeInDesignTime = {read=FAllowZeroSizeInDesignTime, write=SetAllowZeroSizeInDesignTime, default=0};
	__property Anchors = {default=3};
	__property BarManager;
	__property Color = {read=GetColor, write=SetColor, stored=IsColorStored, default=-16777211};
	__property bool ParentColor = {read=GetParentColor, write=SetParentColor, stored=IsColorStored, nodefault};
	__property bool SunkenBorder = {read=GetSunkenBorder, write=SetSunkenBorder, stored=FUseOwnSunkenBorder, nodefault};
	__property bool UseOwnColor = {read=FUseOwnColor, write=SetUseOwnColor, default=0};
	__property bool UseOwnSunkenBorder = {read=FUseOwnSunkenBorder, write=SetUseOwnSunkenBorder, default=0};
	__property Visible = {default=1};
	__property BackgroundBitmap;
	__property Width = {stored=IsWidthStored};
	__property Height = {stored=IsHeightStored};
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnResize;
public:
	/* TdxDockControl.CreateEx */ inline __fastcall TdxBarDockControl(System::Classes::TComponent* AOwner, TdxBarManager* ABarManager, TdxBarDockingStyle ADockStyle) : TdxDockControl(AOwner, ABarManager, ADockStyle) { }
	/* TdxDockControl.Destroy */ inline __fastcall virtual ~TdxBarDockControl() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxBarDockControl(HWND ParentWindow) : TdxDockControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TdxBarShadowPart : public Dxshadowwindow::TdxCustomShadowWindow
{
	typedef Dxshadowwindow::TdxCustomShadowWindow inherited;
	
private:
	TdxBarShadow* FOwner;
	
public:
	__fastcall TdxBarShadowPart(TdxBarShadow* AOwner);
	HIDESBASE void __fastcall UpdateBounds(const System::Types::TRect &ABounds);
public:
	/* TdxCustomShadowWindow.Create */ inline __fastcall virtual TdxBarShadowPart(Vcl::Controls::TWinControl* AOwnerWindow) : Dxshadowwindow::TdxCustomShadowWindow(AOwnerWindow) { }
	/* TdxCustomShadowWindow.Destroy */ inline __fastcall virtual ~TdxBarShadowPart() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxBarShadowPart(HWND ParentWindow) : Dxshadowwindow::TdxCustomShadowWindow(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarShadow : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Types::TRect FBarBounds;
	System::Types::TRect FParentBarBounds;
	bool FHorizontal;
	Vcl::Controls::TWinControl* FOwner;
	System::StaticArray<TdxBarShadowPart*, 2> FShadowPart;
	bool FVisible;
	int __fastcall GetShadowSize();
	void __fastcall SetVisible(bool Value);
	
protected:
	void __fastcall CreateParts();
	void __fastcall DestroyParts();
	void __fastcall Hide();
	void __fastcall Show();
	
public:
	__fastcall TdxBarShadow(Vcl::Controls::TWinControl* AOwner);
	__fastcall virtual ~TdxBarShadow();
	void __fastcall Refresh();
	void __fastcall SetOwnerBounds(const System::Types::TRect &AR1, const System::Types::TRect &AR2);
	__property bool Horizontal = {read=FHorizontal, nodefault};
	__property Vcl::Controls::TWinControl* Owner = {read=FOwner};
	__property int ShadowSize = {read=GetShadowSize, nodefault};
	__property bool Visible = {read=FVisible, write=SetVisible, nodefault};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TdxBarMarkState : unsigned char { msNone, msSelected, msPressed };

enum DECLSPEC_DENUM TdxBarItemControlParentKind : unsigned char { pkBar, pkSubItemOrPopupMenu };

enum DECLSPEC_DENUM TdxBarPaintType : unsigned char { ptHorz, ptMenu, ptVert };

enum DECLSPEC_DENUM TdxBarState : unsigned char { bsCreatingControls, bsCreatingWindow, bsDestroyingControls, bsDestroyWindowHandle, bsDestroyWindow, bsDestroying, bsDestroyed, bsHideAll, bsPaintItem, bsRepaintBar, bsUpdatingCanvasFont };

typedef System::Set<TdxBarState, TdxBarState::bsCreatingControls, TdxBarState::bsUpdatingCanvasFont> TdxBarStates;

enum DECLSPEC_DENUM TdxBarViewState : unsigned char { bvsNormal, bvsHot };

class PASCALIMPLEMENTATION TCustomdxBarControl : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	Cxgraphics::TcxCanvas* FActiveCanvas;
	Cxgraphics::TcxBitmap* FBackgroundTempBitmap;
	HBRUSH FBkBrush;
	Cxgraphics::TcxCanvas* FCanvas;
	TCustomdxBarControl* FChildBar;
	TdxBarCloseUpReason FCloseUpReason;
	Winapi::Messages::TMessage FCurrentMessage;
	TdxDockControl* FDockControl;
	TdxBarDockingStyle FDockingStyle;
	bool FDragDown;
	System::Types::TPoint FDragPoint;
	System::Classes::TList* FExpandedItemLinks;
	_di_IdxBarAccessibilityHelper FIAccessibilityHelper;
	bool FIgnoreMouseClick;
	bool FIsActive;
	bool FIsDowned;
	TdxBarItemLinks* FItemLinks;
	int FLockCount;
	bool FMovingChanging;
	System::Types::TRect FOwnerBounds;
	Vcl::Controls::TWinControl* FOwnerControl;
	TCustomdxBarControl* FParentBar;
	TCustomdxBarControl* FPrevActiveBarControl;
	TdxBarItemLink* FPrevTrackedLink;
	TdxBarItemControl* FClickedControl;
	Cxclasses::TcxTimer* FButtonPressTimer;
	TdxBarItemLink* FSelectedLink;
	TdxBarShadow* FShadow;
	int FTextSize;
	int FEditTextSize;
	int FMarkSize;
	int FMenuArrowHeight;
	int FMenuArrowWidth;
	int FComboBoxArrowWidth;
	int FIconAreaSize;
	double FRatio;
	System::Classes::TNotifyEvent FOnDestroy;
	void __fastcall MouseDownNotifyControls(TdxBarItemLink* ALinkAtPos, const System::Types::TPoint &AMousePos, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift);
	void __fastcall MouseNotifyControls(TdxBarItemLink* ALinkAtPos, const System::Types::TPoint &AMousePos, System::Classes::TShiftState Shift);
	void __fastcall MouseUpNotifyControls(TdxBarItemLink* ALinkAtPos, const System::Types::TPoint &AMousePos, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift);
	Cxgraphics::TcxCanvas* __fastcall GetActiveCanvas();
	HBRUSH __fastcall GetBarControlOwnerBrush();
	TdxBarManager* __fastcall GetBarManager();
	Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	bool __fastcall GetFlat();
	_di_IdxBarAccessibilityHelper __fastcall GetIAccessibilityHelper();
	bool __fastcall GetIsDestroying();
	System::Types::TRect __fastcall GetOwnerLinkBounds(bool AOwnerPart);
	TdxBarPainterClass __fastcall GetPainterClass();
	TdxBarItemControl* __fastcall GetSelectedControlAtDesign();
	TdxBarItemControl* __fastcall GetSelectedControl();
	TdxBarItemControl* __fastcall ItemAtMousePos();
	void __fastcall SetChildBar(TCustomdxBarControl* Value);
	void __fastcall SetDockControl(TdxDockControl* Value);
	void __fastcall SetIsActive(bool Value);
	void __fastcall SetParentBar(TCustomdxBarControl* Value);
	void __fastcall SetViewState(TdxBarViewState Value);
	HIDESBASE MESSAGE void __fastcall CMBiDiModeChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMCaptureChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMClose(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMDestroy(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMMouseActivate(Winapi::Messages::TWMMouseActivate &Message);
	HIDESBASE MESSAGE void __fastcall WMMouseMove(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMGetObject(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	MESSAGE void __fastcall WMPrint(Winapi::Messages::TWMPrint &Message);
	MESSAGE void __fastcall WMRepaintBar(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSetCursor(Winapi::Messages::TWMSetCursor &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMWindowPosChanged(Winapi::Messages::TWMWindowPosMsg &Message);
	MESSAGE void __fastcall DXMHideAll(Winapi::Messages::TMessage &Message);
	
protected:
	System::Generics::Collections::TList__1<Cxaccessibility::TcxAccessibilityHelper*>* FAccessibleObjects;
	System::Types::TRect FItemsRect;
	System::Types::TPoint FLastMousePos;
	TdxBarMarkState FMarkState;
	TdxBarPainter* FPainter;
	TdxBarStates FState;
	TCustomdxBarControlViewInfo* FViewInfo;
	TdxBarViewState FViewState;
	System::Types::TRect FVisibleItemsRect;
	DYNAMIC void __fastcall AdjustSize();
	virtual void __fastcall CreateHandle();
	virtual void __fastcall CreateWindowHandle(const Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	virtual void __fastcall DestroyWindowHandle();
	virtual void __fastcall WindowPosChanged(Winapi::Messages::TWMWindowPosMsg &Message);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall AfterMouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseLeave();
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual bool __fastcall NeedsMouseWheel();
	virtual void __fastcall ProcessMouseDownMessageForMeaningParent(HWND AWnd, unsigned AMsg, const System::Types::TPoint &AMousePos);
	bool __fastcall PtInCaller(const System::Types::TPoint &P);
	__classmethod virtual void __fastcall AdjustInnerItemPadding(Cxlookandfeels::TdxPadding &APadding);
	virtual void __fastcall AdjustVisualRefinementsPadding(Cxlookandfeels::TdxPadding &APadding);
	void __fastcall BeginUpdate();
	void __fastcall CancelUpdate();
	void __fastcall EndUpdate();
	virtual bool __fastcall CalcChildBarBounds(/* out */ System::Types::TRect &ARect);
	virtual void __fastcall CalcControlsPositions();
	virtual void __fastcall CalcDragOverParameters(const System::Types::TPoint &ACursorPos, TdxBarItemLink* &ADragOverItemLink, bool &AIsBeginGroup, bool &AIsFirstPart, bool &AIsVerticalDirection);
	virtual void __fastcall CalcDrawingConsts();
	virtual void __fastcall CalcItemsRect();
	virtual System::Types::TRect __fastcall CalcColumnItemRect(TdxBarItemLink* AItemLink, const System::Types::TRect &AItemsRect);
	virtual void __fastcall CalcColumnItemRects(int ATopIndex, /* out */ int &ALastItemBottom);
	virtual void __fastcall CalcRowItemRects();
	virtual void __fastcall CalcItemRects(TdxBarPaintType APaintStyle, int ATopIndex = 0x0);
	virtual void __fastcall CalcLayout();
	virtual void __fastcall AdjustHintWindowPosition(System::Types::TPoint &APos, const System::Types::TRect &ABoundsRect, int AHeight);
	virtual void __fastcall AfterControlEscape(TdxBarItemControl* AControl);
	virtual bool __fastcall IsResizing();
	DYNAMIC void __fastcall Resize();
	void __fastcall BeforeDestroyHandle();
	virtual void __fastcall CreateControls();
	virtual void __fastcall DestroyControls();
	void __fastcall ExpandContainerItems();
	void __fastcall CollapseContainerItems();
	virtual void __fastcall LayoutChanged();
	void __fastcall RecreateControls();
	HIDESBASE virtual void __fastcall DoKeyDown(Winapi::Messages::TWMKey &Message);
	virtual void __fastcall DoLButtonUp(Winapi::Messages::TWMMouse &Message);
	virtual bool __fastcall CanActiveChange();
	virtual bool __fastcall CanAlignControl(TdxBarItemControl* AControl);
	virtual bool __fastcall CanCallInheritedNCCalcSize();
	virtual bool __fastcall CanControlPaint(TdxBarItemControl* AControl);
	virtual bool __fastcall CanCustomizing();
	virtual bool __fastcall CanDeactivate(TdxBarManager* ABarManager, HWND AActiveWindow);
	virtual bool __fastcall CanDrawClippedItem(const System::Types::TRect &AItemRect);
	bool __fastcall CanHideOnDeactivate();
	virtual bool __fastcall CanProcessMouseMessage();
	virtual bool __fastcall CanSetMouseSelectedItem(const System::Types::TPoint &P, TdxBarItemControl* AItemControl);
	virtual bool __fastcall CanShowHint();
	virtual bool __fastcall CanShowPopupMenuOnMouseClick(bool AMousePressed);
	virtual bool __fastcall CheckLockUpdate();
	virtual bool __fastcall ChildrenHaveShadows();
	virtual void __fastcall CorrectVisibleItemsRectTop();
	virtual void __fastcall CorrectVisibleItemsRectBottom();
	virtual void __fastcall CustomizePrepare(const System::Types::TPoint &APoint, bool ASecondClick);
	DYNAMIC void __fastcall DblClickOnItem(TdxBarItemControl* AItemControl);
	virtual void __fastcall DoBarGetFocus(TdxBarItemControl* ASelectedItem);
	virtual void __fastcall DoBarLostFocus();
	virtual void __fastcall DoBarMouseEnter(System::Classes::TShiftState Shift, const System::Types::TPoint &APoint, TdxBarItemControl* AItemControl);
	virtual void __fastcall DoBarMouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, const System::Types::TPoint &APoint, TdxBarItemControl* AItemControl, bool APointInClientRect);
	virtual void __fastcall DoBarMouseLeave();
	virtual void __fastcall DoBarMouseMove(System::Classes::TShiftState Shift, const System::Types::TPoint &APoint, TdxBarItemControl* AItemControl);
	virtual void __fastcall DoBarMouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, const System::Types::TPoint &APoint, TdxBarItemControl* AItemControl, bool APointInClientRect);
	virtual void __fastcall DoBarMouseLeftButtonDown(System::Classes::TShiftState Shift, const System::Types::TPoint &APoint, TdxBarItemControl* AItemControl, TdxBarItemControl* APrevSelectedControl, bool APointInClientRect);
	virtual void __fastcall DoBarMouseRightButtonDown(System::Classes::TShiftState Shift, const System::Types::TPoint &APoint, TdxBarItemControl* AItemControl, TdxBarItemControl* APrevSelectedControl, bool APointInClientRect);
	virtual void __fastcall DoCreateControls();
	virtual void __fastcall DoDestroy();
	virtual void __fastcall DoDestroyControls();
	virtual void __fastcall DoDropFocus();
	virtual void __fastcall DoHideAll(TdxBarCloseUpReason AReason);
	virtual void __fastcall DoPaintItem(TdxBarItemControl* AControl, Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &AItemRect);
	virtual void __fastcall DoRepaintBar(bool ARecreateControls);
	virtual void __fastcall DoSetIsActive(bool AValue);
	virtual void __fastcall DrawItems();
	void __fastcall DrawSelectedItem(HDC ADC, TdxBarItemControl* AControl, const System::Types::TRect &AItemRect);
	HIDESBASE virtual void __fastcall DragOver(int X, int Y, bool &Accept);
	virtual TdxBarItemLink* __fastcall DoFindLinkWithAccel(System::Word AKey, System::Classes::TShiftState AShift, TdxBarItemLink* ACurrentLink);
	virtual TdxBarItemLink* __fastcall FindLinkWithAccel(System::Word AKey, System::Classes::TShiftState AShift, TdxBarItemLink* ACurrentLink, /* out */ bool &ADuplicate);
	virtual void __fastcall FocusItemControl(TdxBarItemControl* AItemControl);
	void __fastcall FocusNextBarControl(bool AForward);
	virtual void __fastcall NavigationHandler(System::Word &ACharCode, System::Classes::TShiftState AShiftState);
	virtual TdxBarAccessibilityHelperClass __fastcall GetAccessibilityHelperClass() = 0 ;
	virtual Vcl::Graphics::TGraphic* __fastcall GetBackgroundBitmap() = 0 ;
	virtual int __fastcall GetBeginGroupSize() = 0 ;
	virtual TdxBarBehaviorOptions __fastcall GetBehaviorOptions();
	System::Types::TPoint __fastcall GetClientOffset();
	Vcl::Imglist::TCustomImageList* __fastcall GetCurrentImages();
	virtual System::Uitypes::TCursor __fastcall GetCurrentCursor(const System::Types::TPoint &AMousePos);
	virtual int __fastcall GetDefaultItemHeight(TdxBarItemControl* AItem);
	virtual Dxgdiplusclasses::TdxSmartGlyph* __fastcall GetDefaultItemGlyph();
	virtual Vcl::Graphics::TFont* __fastcall GetEditFont();
	HFONT __fastcall GetEditFontHandle();
	TCustomdxBarControl* __fastcall GetEquivalentParentBar();
	virtual Dxfading::TdxFader* __fastcall GetFader();
	virtual System::Types::TRect __fastcall GetFullItemRect(TdxBarItemControl* Item);
	virtual System::UnicodeString __fastcall GetHintItemText();
	virtual bool __fastcall GetIsCustomizing();
	virtual bool __fastcall GetIsFadingAvailable();
	bool __fastcall GetIsFocused();
	virtual bool __fastcall GetIsMainMenu() = 0 ;
	virtual bool __fastcall GetIsShadowVisible();
	virtual bool __fastcall GetIsStatusBar() = 0 ;
	virtual Vcl::Forms::TCustomForm* __fastcall GetParentForm();
	virtual TdxBarItemViewLevel __fastcall GetItemControlDefaultViewLevel(TdxBarItemControl* AItemControl);
	virtual int __fastcall GetItemControlOffset(TdxBarItemLink* AItemLink);
	virtual System::Types::TRect __fastcall GetItemRectEx(TdxBarItemControl* Item, bool IsBeginGroup);
	virtual HRGN __fastcall GetItemRegion(TdxBarItemControl* Item);
	System::Types::TRect __fastcall GetItemScreenRect(TdxBarItemControl* Item);
	virtual System::Types::TRect __fastcall GetItemsRectOffset();
	virtual TdxBarMarkState __fastcall GetMarkDrawState();
	virtual int __fastcall GetMarkSize();
	virtual TdxBarControl* __fastcall GetNextBarControl(bool AForward);
	virtual int __fastcall GetNormalItemHeight();
	virtual Vcl::Controls::TWinControl* __fastcall GetOwnerControl();
	virtual TdxBarPainter* __fastcall GetPainter();
	virtual TdxBarPaintType __fastcall GetPaintType();
	virtual System::Classes::TPersistent* __fastcall GetSelectableObject();
	TdxBarSelectionOperation __fastcall GetSelectionOperation(System::Uitypes::TMouseButton AButton, System::Classes::TShiftState AShift, _di_IdxBarSelectableItem ASelectableItem);
	virtual HBRUSH __fastcall GetToolbarBrush();
	virtual HBRUSH __fastcall GetToolbarDownedBrush();
	virtual HBRUSH __fastcall GetToolbarDownedSelBrush();
	virtual HBRUSH __fastcall GetToolbarSelBrush();
	virtual TCustomdxBarControlViewInfoClass __fastcall GetViewInfoClass() = 0 ;
	void __fastcall RepaintBarEx(bool ARecreateControls);
	virtual void __fastcall SetControlVisible(TdxBarItemControl* AControl);
	virtual void __fastcall SetItemLinks(TdxBarItemLinks* Value);
	virtual HDC __fastcall GetNCDrawingDC(HRGN AUpdatedRgn);
	virtual void __fastcall ReleaseNCDrawingDC(HDC ADC);
	virtual int __fastcall GetBorderSize();
	virtual int __fastcall GetIconAreaSize();
	virtual int __fastcall GetTextSize();
	System::Types::TRect __fastcall GetClientBounds();
	virtual System::Types::TRect __fastcall GetMouseTrackingBounds();
	System::Types::TRect __fastcall GetNCRect();
	System::Types::TRect __fastcall GetWindowRect();
	System::Types::TPoint __fastcall GetWindowPoint(const System::Types::TPoint &AClientPoint);
	virtual void __fastcall MakeItemControlFullyVisible(TdxBarItemControl* AItemControl);
	virtual bool __fastcall MarkExists();
	virtual System::Types::TRect __fastcall MarkRect();
	bool __fastcall MouseOnMark(const System::Types::TPoint &AMousePos)/* overload */;
	bool __fastcall MouseOnMark()/* overload */;
	virtual void __fastcall SetMarkState(TdxBarMarkState Value);
	void __fastcall ActivateHint()/* overload */;
	void __fastcall ActivateHint(bool AShow, const System::UnicodeString ACustomHint, System::TObject* AHintObject = (System::TObject*)(0x0))/* overload */;
	TdxBarCustomHintViewInfo* __fastcall CreateHintViewInfo(const System::UnicodeString AHintText, const System::UnicodeString AShortCut, Dxscreentip::TdxScreenTip* AScreenTip)/* overload */;
	System::Types::TPoint __fastcall GetHintPosition(const System::Types::TRect &AItemBounds, const System::Types::TPoint &ACursorPos, int AHeight)/* overload */;
	void __fastcall SynchronizeHints();
	void __fastcall ResizeShadow();
	void __fastcall SetCursorForMoving(bool AMoving);
	virtual void __fastcall SetDockingStyle(TdxBarDockingStyle Value);
	HIDESBASE virtual void __fastcall SetFont() = 0 ;
	virtual void __fastcall SetLayeredAttributes();
	bool __fastcall SelectedItemWantsKey(System::Word Key);
	virtual void __fastcall SelectItemControl(TdxBarItemControl* AItemControl, System::Uitypes::TMouseButton AButton, System::Classes::TShiftState AShift);
	virtual void __fastcall SetAccelSelectedItem(TdxBarItemLink* AItemLink, bool ADuplicate);
	virtual void __fastcall SetKeySelectedItem(TdxBarItemControl* Value);
	virtual void __fastcall SetMouseSelectedItem(TdxBarItemControl* Value);
	virtual void __fastcall SetSelectedControl(TdxBarItemControl* Value);
	void __fastcall UpdateCanvasFont();
	void __fastcall UpdateControlStyle();
	virtual void __fastcall UpdateItem(TdxBarItemControl* AControl) = 0 ;
	virtual void __fastcall UpdateParentItemControl();
	virtual void __fastcall ViewStateChanged(TdxBarViewState APrevValue);
	void __fastcall DoShowPopup(TdxBarItemControl* ASelectedControl);
	virtual void __fastcall InitCustomizationPopup(TdxBarItemLinks* AItemLinks);
	virtual void __fastcall ShowPopup(TdxBarItemControl* AItem);
	virtual bool __fastcall AllowNCPaint();
	virtual bool __fastcall AllowSeparators();
	virtual void __fastcall FillBackground(HDC DC, const System::Types::TRect &ARect, HBRUSH ABrush, System::Uitypes::TColor AColor, bool AIsClientArea) = 0 ;
	virtual void __fastcall FillBackgroundRgn(HDC DC, HRGN ARgn, HBRUSH ABrush, bool AIsClientArea);
	void __fastcall FullInvalidate();
	void __fastcall FullRepaint();
	virtual void __fastcall PaintItem(Cxgraphics::TcxCanvas* ACanvas, TdxBarItemControl* AControl);
	virtual void __fastcall ResetBackground();
	virtual void __fastcall UpdateDoubleBuffered();
	void __fastcall InvalidateNCRect(const System::Types::TRect &ARect);
	virtual System::Types::TPoint __fastcall NCOffset();
	virtual void __fastcall NCPaint(HDC ADC);
	virtual bool __fastcall AllowSelectionFrame();
	virtual bool __fastcall AllowFade();
	virtual bool __fastcall HasShadow();
	virtual bool __fastcall IsBackgroundBitmap();
	virtual bool __fastcall IsChildBar(TCustomdxBarControl* Value);
	virtual bool __fastcall IsChildWindow(HWND AWnd);
	virtual bool __fastcall IsControlExists(TdxBarItemControl* ABarItemControl);
	virtual bool __fastcall IsDoubleBufferedNeeded();
	virtual bool __fastcall IsInternal();
	virtual bool __fastcall IsLinkedToOwner();
	virtual bool __fastcall IsMeaningParent(HWND AWnd);
	virtual bool __fastcall IsPopup();
	virtual bool __fastcall IsTransparent();
	virtual bool __fastcall IsVerticalDirection();
	virtual bool __fastcall IsWindowEnabled();
	bool __fastcall NeedBufferedOnGlass(TdxBarItemControl* AControl);
	virtual bool __fastcall NeedHideOnClick();
	virtual bool __fastcall NeedHideOnKeyPress();
	virtual bool __fastcall NeedsKey(System::Word AKey, System::Classes::TShiftState AShift);
	virtual bool __fastcall PreProcessKey(System::Word AKey, System::Classes::TShiftState AShift);
	virtual bool __fastcall NeedShowGlyphAndCheckForItem();
	virtual bool __fastcall NotHandleMouseMove(bool ACheckLastMousePos = true);
	bool __fastcall WantMouse();
	virtual Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	System::Types::TPoint __fastcall PointBarToDock(const System::Types::TPoint &APoint);
	virtual void __fastcall Initialize();
	virtual void __fastcall Finalize();
	__property Cxgraphics::TcxBitmap* BackgroundTempBitmap = {read=FBackgroundTempBitmap};
	__property TCustomdxBarControl* ChildBar = {read=FChildBar, write=SetChildBar};
	__property TdxBarCloseUpReason CloseUpReason = {read=FCloseUpReason, nodefault};
	__property TdxDockControl* DockControl = {read=FDockControl, write=SetDockControl};
	__property TdxBarDockingStyle DockingStyle = {read=FDockingStyle, write=SetDockingStyle, nodefault};
	__property bool Flat = {read=GetFlat, nodefault};
	__property bool IgnoreMouseClick = {read=FIgnoreMouseClick, write=FIgnoreMouseClick, nodefault};
	__property bool IsDestroying = {read=GetIsDestroying, nodefault};
	__property bool IsDowned = {read=FIsDowned, write=FIsDowned, nodefault};
	__property bool IsFadingAvailable = {read=GetIsFadingAvailable, nodefault};
	__property bool IsMainMenu = {read=GetIsMainMenu, nodefault};
	__property bool IsShadowVisible = {read=GetIsShadowVisible, nodefault};
	__property bool IsStatusBar = {read=GetIsStatusBar, nodefault};
	__property int MarkSize = {read=FMarkSize, nodefault};
	__property TdxBarMarkState MarkState = {read=FMarkState, write=SetMarkState, nodefault};
	__property TdxBarMarkState MarkDrawState = {read=GetMarkDrawState, nodefault};
	__property TdxBarItemControl* SelectedControlAtDesign = {read=GetSelectedControlAtDesign};
	__property TdxBarItemControl* SelectedControl = {read=GetSelectedControl, write=SetSelectedControl};
	__property TdxBarItemLink* SelectedLink = {read=FSelectedLink, write=FSelectedLink};
	__property TdxBarShadow* Shadow = {read=FShadow};
	__property TdxBarViewState ViewState = {read=FViewState, write=SetViewState, nodefault};
	__property int IconAreaSize = {read=FIconAreaSize, nodefault};
	__property int BeginGroupSize = {read=GetBeginGroupSize, nodefault};
	__property System::Types::TRect OwnerBounds = {read=FOwnerBounds, write=FOwnerBounds};
	__property Vcl::Controls::TWinControl* OwnerControl = {read=GetOwnerControl, write=FOwnerControl};
	__property System::Types::TRect OwnerLinkBounds[bool AOwnerPart] = {read=GetOwnerLinkBounds};
	__property Vcl::Controls::TWinControl* RealOwnerControl = {read=FOwnerControl};
	__property HBRUSH BarControlOwnerBrush = {read=GetBarControlOwnerBrush, nodefault};
	__property Vcl::Graphics::TFont* EditFont = {read=GetEditFont};
	__property TdxBarPainter* Painter = {read=GetPainter};
	__property TdxBarPainterClass PainterClass = {read=GetPainterClass};
	__property HBRUSH ToolbarBrush = {read=GetToolbarBrush, nodefault};
	__property HBRUSH ToolbarDownedBrush = {read=GetToolbarDownedBrush, nodefault};
	__property HBRUSH ToolbarDownedSelBrush = {read=GetToolbarDownedSelBrush, nodefault};
	__property HBRUSH ToolbarSelBrush = {read=GetToolbarSelBrush, nodefault};
	__property System::Types::TRect ItemsRect = {read=FItemsRect};
	__property System::Types::TRect NCRect = {read=GetNCRect};
	__property System::Types::TRect VisibleItemsRect = {read=FVisibleItemsRect};
	__property System::Types::TRect WindowRect = {read=GetWindowRect};
	__property Cxgraphics::TcxCanvas* ActiveCanvas = {read=GetActiveCanvas};
	__property double Ratio = {read=FRatio};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=GetScaleFactor};
	
public:
	__fastcall virtual TCustomdxBarControl(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomdxBarControl();
	void __fastcall BarGetFocus(TdxBarItemControl* ASelectedItem);
	void __fastcall BarLostFocus();
	virtual void __fastcall BeforeDestruction();
	System::Types::TRect __fastcall GetItemRect(TdxBarItemControl* Item);
	HIDESBASE virtual void __fastcall Hide() = 0 ;
	virtual void __fastcall HideByEscape();
	virtual void __fastcall HideAll(TdxBarCloseUpReason AReason = (TdxBarCloseUpReason)(0x1));
	virtual void __fastcall HideAllByEscape();
	void __fastcall PostponedHideAll(TdxBarCloseUpReason AReason = (TdxBarCloseUpReason)(0x1));
	HIDESBASE virtual void __fastcall Show();
	virtual void __fastcall RepaintBar();
	virtual bool __fastcall IsOnGlass();
	virtual bool __fastcall IsRealVertical();
	virtual bool __fastcall IsVertical();
	TdxBarItemControl* __fastcall ItemAtPos(const System::Types::TPoint &APos);
	virtual TdxBarKind __fastcall Kind() = 0 ;
	virtual bool __fastcall DoHint(bool &ANeedDeactivate, /* out */ System::UnicodeString &AHintText, /* out */ System::UnicodeString &AShortCut);
	TdxBarCustomHintViewInfo* __fastcall CreateHintViewInfo(const System::UnicodeString AHintText, const System::UnicodeString AShortCut)/* overload */;
	bool __fastcall GetHintKeeperEnabled();
	System::Types::TPoint __fastcall GetHintPosition(const System::Types::TPoint &ACursorPos, int AHeight)/* overload */;
	Vcl::Controls::TControl* __fastcall GetHintedControl();
	bool __fastcall IsCustomHintSupported();
	Cxclasses::_di_IdxManager __fastcall GetManager();
	__property TdxBarManager* BarManager = {read=GetBarManager};
	__property HBRUSH BkBrush = {read=FBkBrush, nodefault};
	__property TdxBarBehaviorOptions BehaviorOptions = {read=GetBehaviorOptions, nodefault};
	__property Cxgraphics::TcxCanvas* Canvas = {read=GetCanvas};
	__property System::Types::TRect ClientBounds = {read=GetClientBounds};
	__property int ComboBoxArrowWidth = {read=FComboBoxArrowWidth, nodefault};
	__property HFONT EditFontHandle = {read=GetEditFontHandle, nodefault};
	__property int EditTextSize = {read=FEditTextSize, nodefault};
	__property Font;
	__property _di_IdxBarAccessibilityHelper IAccessibilityHelper = {read=GetIAccessibilityHelper};
	__property bool IsActive = {read=FIsActive, write=SetIsActive, nodefault};
	__property bool IsCustomizing = {read=GetIsCustomizing, nodefault};
	__property bool IsFocused = {read=GetIsFocused, nodefault};
	__property TdxBarItemLinks* ItemLinks = {read=FItemLinks, write=SetItemLinks};
	__property int MenuArrowHeight = {read=FMenuArrowHeight, nodefault};
	__property int MenuArrowWidth = {read=FMenuArrowWidth, nodefault};
	__property TCustomdxBarControl* ParentBar = {read=FParentBar, write=SetParentBar};
	__property int TextSize = {read=FTextSize, nodefault};
	__property TCustomdxBarControlViewInfo* ViewInfo = {read=FViewInfo};
	__property System::Classes::TNotifyEvent OnDestroy = {read=FOnDestroy, write=FOnDestroy};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomdxBarControl(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
private:
	void *__IdxVisualRefinementsTuner;	// Cxlookandfeels::IdxVisualRefinementsTuner 
	void *__IdxManagedObject;	// Cxclasses::IdxManagedObject 
	void *__IdxScaleFactor;	// Cxgeometry::IdxScaleFactor 
	void *__IdxBarHintKeeper2;	// IdxBarHintKeeper2 
	void *__IdxBarHintKeeper;	// IdxBarHintKeeper 
	void *__IcxMouseTrackingCaller2;	// Dxcoreclasses::IcxMouseTrackingCaller2 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {DE887152-048A-4051-9A61-0884AB7626E3}
	operator Cxlookandfeels::_di_IdxVisualRefinementsTuner()
	{
		Cxlookandfeels::_di_IdxVisualRefinementsTuner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxlookandfeels::IdxVisualRefinementsTuner*(void) { return (Cxlookandfeels::IdxVisualRefinementsTuner*)&__IdxVisualRefinementsTuner; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {AB78C3D2-400B-407F-A988-C015DDCEFED3}
	operator Cxclasses::_di_IdxManagedObject()
	{
		Cxclasses::_di_IdxManagedObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxclasses::IdxManagedObject*(void) { return (Cxclasses::IdxManagedObject*)&__IdxManagedObject; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {367A805A-A84B-441A-83A3-6A7E489D3B6C}
	operator Cxgeometry::_di_IdxScaleFactor()
	{
		Cxgeometry::_di_IdxScaleFactor intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxgeometry::IdxScaleFactor*(void) { return (Cxgeometry::IdxScaleFactor*)&__IdxScaleFactor; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {9BFA849B-BF7D-4D17-A95E-6C4A7456CC6F}
	operator _di_IdxBarHintKeeper2()
	{
		_di_IdxBarHintKeeper2 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxBarHintKeeper2*(void) { return (IdxBarHintKeeper2*)&__IdxBarHintKeeper2; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {587A00C4-A7E0-4032-98E5-4DB8F3918ADF}
	operator _di_IdxBarHintKeeper()
	{
		_di_IdxBarHintKeeper intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxBarHintKeeper*(void) { return (IdxBarHintKeeper*)&__IdxBarHintKeeper; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3A5D973B-F016-4F22-80B6-1D35668D7743}
	operator Dxcoreclasses::_di_IcxMouseTrackingCaller2()
	{
		Dxcoreclasses::_di_IcxMouseTrackingCaller2 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxcoreclasses::IcxMouseTrackingCaller2*(void) { return (Dxcoreclasses::IcxMouseTrackingCaller2*)&__IcxMouseTrackingCaller2; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {84A4BCBE-E001-4D60-B7A6-75E2B0DCD3E9}
	operator Dxcoreclasses::_di_IcxMouseTrackingCaller()
	{
		Dxcoreclasses::_di_IcxMouseTrackingCaller intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxcoreclasses::IcxMouseTrackingCaller*(void) { return (Dxcoreclasses::IcxMouseTrackingCaller*)&__IcxMouseTrackingCaller2; }
	#endif
	
};


__interface  INTERFACE_UUID("{B97FA518-6C2E-4219-9430-19546EF91A1F}") IdxFadingPainterHelper  : public System::IInterface 
{
	virtual bool __fastcall BarMarkIsOpaque() = 0 ;
	virtual void __fastcall DrawBarMarkState(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &R, TdxBarMarkState AState) = 0 ;
	virtual void __fastcall DrawButtonBackground(TdxBarButtonLikeControlDrawParams* const ADrawParams) = 0 ;
};

__interface  INTERFACE_UUID("{7697DA35-139F-4247-964C-B8A4C38362E5}") IdxFadingPainterHelper2  : public System::IInterface 
{
	virtual int __fastcall GetButtonPartState(TdxBarButtonLikeControlDrawParams* const ADrawParams, int AControlPart) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCustomdxBarControlDesignHelper : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod virtual bool __fastcall CanDynamicallyChangeViewLevels();
	__classmethod virtual void __fastcall FilterItemActions(TdxBarCustomizationActions &ASupportedActions);
	__classmethod virtual void __fastcall GetEditors(System::Classes::TList* AEditors);
	__classmethod virtual TdxBarCustomizationActions __fastcall GetForbiddenActions();
public:
	/* TObject.Create */ inline __fastcall TCustomdxBarControlDesignHelper() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomdxBarControlDesignHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarControlDesignHelper : public TCustomdxBarControlDesignHelper
{
	typedef TCustomdxBarControlDesignHelper inherited;
	
public:
	__classmethod virtual TdxBarCustomizationActions __fastcall GetForbiddenActions();
public:
	/* TObject.Create */ inline __fastcall TdxBarControlDesignHelper() : TCustomdxBarControlDesignHelper() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarControlDesignHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarSubMenuControlDesignHelper : public TCustomdxBarControlDesignHelper
{
	typedef TCustomdxBarControlDesignHelper inherited;
	
public:
	__classmethod virtual void __fastcall GetEditors(System::Classes::TList* AEditors);
	__classmethod virtual TdxBarCustomizationActions __fastcall GetForbiddenActions();
public:
	/* TObject.Create */ inline __fastcall TdxBarSubMenuControlDesignHelper() : TCustomdxBarControlDesignHelper() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarSubMenuControlDesignHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxDockCol : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TdxBarControl* FBarControl;
	TdxDockRow* FDockRow;
	System::Types::TPoint FPos;
	
public:
	__fastcall TdxDockCol(TdxDockRow* ADockRow, TdxBarControl* ABarControl);
	void __fastcall AssignPosition();
	__property TdxBarControl* BarControl = {read=FBarControl};
	__property TdxDockRow* DockRow = {read=FDockRow};
	__property System::Types::TPoint Pos = {read=FPos, write=FPos};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxDockCol() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxDockRow : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::Classes::TList* FBars;
	System::Classes::TList* FColList;
	TdxDockControl* FDockControl;
	void __fastcall AddBar(TdxBar* ABar);
	void __fastcall DeleteBar(TdxBar* ABar, bool ADestroyEmptyDockRow);
	TdxDockCol* __fastcall GetCol(int Index);
	int __fastcall GetColCount();
	bool __fastcall GetVisible();
	void __fastcall UpdateOneOnRows();
	
public:
	__fastcall TdxDockRow(TdxDockControl* ADockControl);
	__fastcall virtual ~TdxDockRow();
	TdxDockCol* __fastcall AddCol(TdxBarControl* ABarControl);
	void __fastcall DeleteCol(TdxBarControl* ABarControl)/* overload */;
	void __fastcall DeleteCol(int AIndex)/* overload */;
	__property int ColCount = {read=GetColCount, nodefault};
	__property System::Classes::TList* ColList = {read=FColList};
	__property TdxDockCol* Cols[int Index] = {read=GetCol};
	__property TdxDockControl* DockControl = {read=FDockControl};
	__property bool Visible = {read=GetVisible, nodefault};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TXDirection : unsigned char { xdLeft, xdRight };

enum DECLSPEC_DENUM TYDirection : unsigned char { ydTop, ydBottom };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarControlMarkFadingHelper : public Dxfading::TdxFadingObjectHelper
{
	typedef Dxfading::TdxFadingObjectHelper inherited;
	
private:
	TdxBarControl* FOwner;
	
protected:
	virtual bool __fastcall CanFade();
	virtual void __fastcall DrawFadeImage();
	virtual void __fastcall GetFadingImages(/* out */ Cxgraphics::TcxBitmap* &AFadeOutImage, /* out */ Cxgraphics::TcxBitmap* &AFadeInImage);
	
public:
	__fastcall virtual TdxBarControlMarkFadingHelper(TdxBarControl* AOwner);
	__fastcall virtual ~TdxBarControlMarkFadingHelper();
	__property TdxBarControl* Owner = {read=FOwner};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarControlMDIButtonFadingHelper : public Dxfading::TdxFadingObjectHelper
{
	typedef Dxfading::TdxFadingObjectHelper inherited;
	
private:
	TdxBarMDIButton FMDIButton;
	TdxBarControl* FOwner;
	
protected:
	virtual bool __fastcall CanFade();
	virtual void __fastcall DrawFadeImage();
	virtual void __fastcall GetFadingImages(/* out */ Cxgraphics::TcxBitmap* &AFadeOutImage, /* out */ Cxgraphics::TcxBitmap* &AFadeInImage);
	
public:
	__fastcall virtual TdxBarControlMDIButtonFadingHelper(TdxBarControl* AOwner, TdxBarMDIButton AMDIButton);
	__fastcall virtual ~TdxBarControlMDIButtonFadingHelper();
	HIDESBASE void __fastcall FadeIn();
	HIDESBASE void __fastcall FadeOut();
	__property TdxBarControl* Owner = {read=FOwner};
	__property TdxBarMDIButton MDIButton = {read=FMDIButton, nodefault};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxBarDockedControl : public TCustomdxBarControl
{
	typedef TCustomdxBarControl inherited;
	
private:
	TdxBar* FBar;
	HWND FBeforeBarGetFocusFocusedWnd;
	int FHitTest;
	int FInternalLockCount;
	bool FIsItemResizing;
	bool __fastcall CanResizeSelectedLink(const System::Types::TPoint &APoint);
	HIDESBASE MESSAGE void __fastcall WMCaptureChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMNCLButtonDown(Winapi::Messages::TWMNCHitMessage &Message);
	
protected:
	virtual System::Uitypes::TCursor __fastcall GetCurrentCursor(const System::Types::TPoint &AMousePos);
	DYNAMIC void __fastcall Resize();
	virtual void __fastcall InitializeForDock(TdxBar* ABar);
	void __fastcall BeginInternal();
	void __fastcall EndInternal();
	bool __fastcall GetInternallyLocked();
	__property bool InternallyLocked = {read=GetInternallyLocked, nodefault};
	virtual void __fastcall CustomizePrepare(const System::Types::TPoint &APoint, bool ASecondClick);
	virtual void __fastcall DoBarMouseMove(System::Classes::TShiftState Shift, const System::Types::TPoint &APoint, TdxBarItemControl* AItemControl);
	virtual void __fastcall DoBarMouseLeave();
	virtual int __fastcall GetCaptionButtonIndex(const System::Types::TPoint &APoint);
	TdxBarCaptionButtons* __fastcall GetCaptionButtons();
	virtual bool __fastcall HasCaptionButtons();
	bool __fastcall NeedActivateOwnerOnCaptionButtonClick();
	virtual bool __fastcall NeedHideOnNCMouseClick();
	virtual void __fastcall DoBeforeCaptionButtonClick();
	virtual void __fastcall CaptionButtonClick(int AIndex);
	virtual void __fastcall UpdateCaptionButtons(const System::Types::TPoint &AMousePos, bool AMousePressed = false, int AActiveButtonIndex = 0xffffffff);
	virtual void __fastcall UpdateCaptionButton(TdxBarCaptionButton* ACaptionButton);
	__property TdxBarCaptionButtons* CaptionButtons = {read=GetCaptionButtons};
	virtual TdxBar* __fastcall GetMasterBar();
	__property int HitTest = {read=FHitTest, write=FHitTest, nodefault};
	__property TdxBar* MasterBar = {read=GetMasterBar};
	
public:
	__property TdxBar* Bar = {read=FBar, write=FBar};
public:
	/* TCustomdxBarControl.Create */ inline __fastcall virtual TdxBarDockedControl(System::Classes::TComponent* AOwner) : TCustomdxBarControl(AOwner) { }
	/* TCustomdxBarControl.Destroy */ inline __fastcall virtual ~TdxBarDockedControl() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxBarDockedControl(HWND ParentWindow) : TCustomdxBarControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TdxBarControl : public TdxBarDockedControl
{
	typedef TdxBarDockedControl inherited;
	
private:
	TdxBarMarkState FCloseButtonState;
	HWND FDockedHandle;
	Vcl::Graphics::TBitmap* FDrawBitmap;
	HWND FFloatingHandle;
	bool FHasSizeGrip;
	_di_IdxBarAccessibilityHelper FCloseButtonIAccessibilityHelper;
	TdxBarControlMarkFadingHelper* FMarkFadingHelper;
	_di_IdxBarAccessibilityHelper FMarkIAccessibilityHelper;
	TdxBarPopupControl* FQuickPopup;
	System::StaticArray<TdxBarControlMDIButtonFadingHelper*, 3> FMDIButtonFadingHelper;
	int FMDIButtonWidth;
	int FMDIButtonHeight;
	bool FIsScaleChanging;
	int FMaxSize;
	int FMinSize;
	NativeUInt FMoreButtonsHintTimer;
	bool FMoving;
	bool FPosSaving;
	Cxgraphics::TcxRegion* FPrevClipRgn;
	Cxclasses::TcxObjectLink* FPrevFocusedBarControlLink;
	bool FTruncated;
	int NewLeft;
	int NewTop;
	int NewWidth;
	int NewHeight;
	System::Types::TPoint RX;
	System::Types::TPoint RY;
	System::Uitypes::TColor __fastcall GetCaptionBkColor();
	System::Uitypes::TColor __fastcall GetCaptionColor();
	bool __fastcall GetHorizontal();
	_di_IdxBarAccessibilityHelper __fastcall GetCloseButtonIAccessibilityHelper();
	_di_IdxBarAccessibilityHelper __fastcall GetMarkIAccessibilityHelper();
	bool __fastcall GetVertical();
	void __fastcall SetCloseButtonState(TdxBarMarkState Value);
	void __fastcall SetNewBounds();
	void __fastcall SetMoving(bool Value);
	void __fastcall ChangeStyleWinTo(TdxBarDockingStyle AStyle, TdxDockControl* ADockControl);
	System::Types::TPoint __fastcall GetDragPointOffset(TdxBarDockingStyle Style);
	System::Types::TRect __fastcall GetCaptionNCRect();
	void __fastcall HideBar();
	bool __fastcall NeedHideBarOnDestroyHandle();
	void __fastcall DrawCloseButton(HDC DC);
	void __fastcall DrawMark(HDC DC);
	void __fastcall DrawMDIButton(TdxBarMDIButton AButton, bool ASelected, bool APressed);
	System::Types::TSize __fastcall GetMDIAreaSize();
	int __fastcall GetMDIWidth();
	int __fastcall GetMDIHeight();
	System::Types::TRect __fastcall RectMDI(TdxBarMDIButton Button);
	bool __fastcall MDIButtonsOnBar();
	bool __fastcall MDIButtonEnabled(TdxBarMDIButton AButton, int State);
	void __fastcall StartMoreButtonsHintTimer();
	void __fastcall FinishMoreButtonsHintTimer();
	HIDESBASE MESSAGE void __fastcall WMDestroy(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMDpiChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	MESSAGE void __fastcall WMGetMinMaxInfo(Winapi::Messages::TWMGetMinMaxInfo &Message);
	HIDESBASE MESSAGE void __fastcall WMMouseActivate(Winapi::Messages::TWMMouseActivate &Message);
	HIDESBASE MESSAGE void __fastcall WMNCCalcSize(Winapi::Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	MESSAGE void __fastcall WMSizing(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMWindowPosChanging(Winapi::Messages::TWMWindowPosMsg &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	virtual void __fastcall Paint();
	virtual void __fastcall WindowPosChanged(Winapi::Messages::TWMWindowPosMsg &Message);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall LayoutChanged();
	virtual void __fastcall DoKeyDown(Winapi::Messages::TWMKey &Message);
	virtual void __fastcall DoLButtonUp(Winapi::Messages::TWMMouse &Message);
	virtual void __fastcall CalcControlsPositions();
	virtual void __fastcall CalcRowItemRects();
	virtual void __fastcall CalcDrawingConsts();
	virtual void __fastcall CalcDragOverParameters(const System::Types::TPoint &ACursorPos, TdxBarItemLink* &ADragOverItemLink, bool &AIsBeginGroup, bool &AIsFirstPart, bool &AIsVerticalDirection);
	virtual bool __fastcall CanAlignControl(TdxBarItemControl* AControl);
	virtual bool __fastcall CanCallInheritedNCCalcSize();
	virtual bool __fastcall CanCustomizing();
	virtual bool __fastcall CanHideAllItemsInSingleLine();
	virtual bool __fastcall CanMoving();
	bool __fastcall CanBeFocused();
	virtual bool __fastcall CanProcessShortCut();
	virtual bool __fastcall CanSetMouseSelectedItem(const System::Types::TPoint &P, TdxBarItemControl* AItemControl);
	virtual bool __fastcall CanUpdateControlByMouseOnLostFocus();
	virtual bool __fastcall CheckLockUpdate();
	virtual void __fastcall DoBarGetFocus(TdxBarItemControl* ASelectedItem);
	virtual void __fastcall DoBarLostFocus();
	virtual void __fastcall DoBarMouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, const System::Types::TPoint &APoint, TdxBarItemControl* AItemControl, bool APointInClientRect);
	virtual void __fastcall DoBarMouseLeave();
	virtual void __fastcall DoBarMouseMove(System::Classes::TShiftState Shift, const System::Types::TPoint &APoint, TdxBarItemControl* AItemControl);
	virtual void __fastcall DoHideAll(TdxBarCloseUpReason AReason);
	virtual void __fastcall DoRepaintBar(bool ARecreateControls);
	virtual void __fastcall DoSetIsActive(bool AValue);
	virtual void __fastcall FocusItemControl(TdxBarItemControl* AItemControl);
	virtual TdxBarAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	virtual int __fastcall GetCaptionButtonIndex(const System::Types::TPoint &APoint);
	virtual void __fastcall CaptionButtonClick(int AIndex);
	virtual void __fastcall UpdateCaptionButtons(const System::Types::TPoint &AMousePos, bool AMousePressed = false, int AActiveButtonID = 0xffffffff);
	System::Types::TRect __fastcall GetCaptionRect();
	void __fastcall CheckMarkState(const System::Types::TPoint &P);
	System::Types::TRect __fastcall CloseButtonRect();
	System::Types::TRect __fastcall CloseButtonRectNC();
	System::Byte __fastcall GetAlphaBlendValue();
	virtual Vcl::Graphics::TGraphic* __fastcall GetBackgroundBitmap();
	virtual int __fastcall GetBeginGroupSize();
	virtual TdxBarAccessibilityHelperClass __fastcall GetCloseButtonAccessibilityHelperClass();
	int __fastcall GetCol();
	TdxDockCol* __fastcall GetDockCol();
	virtual System::Uitypes::TCursor __fastcall GetCurrentCursor(const System::Types::TPoint &AMousePos);
	virtual System::UnicodeString __fastcall GetHintItemText();
	virtual bool __fastcall GetIsFadingAvailable();
	virtual bool __fastcall GetIsMainMenu();
	virtual bool __fastcall GetIsStatusBar();
	virtual TdxBarAccessibilityHelperClass __fastcall GetMarkAccessibilityHelperClass();
	virtual TdxBarMarkState __fastcall GetMarkDrawState();
	virtual System::UnicodeString __fastcall GetMoreButtonsHint();
	virtual bool __fastcall GetMultiLine();
	virtual TdxBarPopupControlClass __fastcall GetQuickControlClass();
	int __fastcall GetRow();
	virtual TCustomdxBarControlViewInfoClass __fastcall GetViewInfoClass();
	virtual HDC __fastcall GetNCDrawingDC(HRGN AUpdatedRgn);
	virtual void __fastcall ReleaseNCDrawingDC(HDC ADC);
	Vcl::Forms::TCustomForm* __fastcall GetMasterForm();
	virtual Vcl::Forms::TCustomForm* __fastcall GetParentForm();
	virtual System::Classes::TPersistent* __fastcall GetSelectableObject();
	virtual bool __fastcall AllowQuickCustomizing();
	void __fastcall HandleQuickAccessSubItemPopup(System::TObject* Sender);
	virtual void __fastcall InitQuickControl(TdxBarPopupControl* AQuickControl);
	virtual void __fastcall InitQuickCustomizeItemLinks(TdxBarPopupControl* AQuickControl);
	virtual void __fastcall InitAddRemoveSubItemPopup(TdxBarItemLinks* AItemLinks);
	void __fastcall ResetToolbarClick(System::TObject* Sender);
	virtual int __fastcall GetMinWidth(TdxBarDockingStyle AStyle);
	virtual int __fastcall GetMinHeight(TdxBarDockingStyle AStyle);
	int __fastcall GetMaxSize(TdxBarDockingStyle ADockingStyle, bool AOrdinate);
	virtual int __fastcall GetMaxWidth(TdxBarDockingStyle AStyle);
	virtual int __fastcall GetMaxHeight(TdxBarDockingStyle AStyle);
	System::Types::TSize __fastcall CalculateSize(int ACurrentSize, bool AOrdinate, /* out */ bool &ALackSize);
	void __fastcall GetMultiLineBarWidth(TdxBarDockingStyle ADockingStyle, int AWishedWidth, System::Types::TSize &Result);
	System::Types::TSize __fastcall GetMultilineSize(TdxBarDockingStyle ADockingStyle, int AWishedSize, bool AOptimal, bool AOrdinate);
	virtual System::Types::TRect __fastcall GetSizeAllCursorBounds();
	System::Types::TSize __fastcall GetSizeForBounds(TdxBarDockingStyle ADockingStyle, int AWishedSize, bool AOrdinate);
	virtual System::Types::TSize __fastcall GetSizeForWidth(TdxBarDockingStyle AStyle, int AWishedWidth);
	System::Types::TSize __fastcall GetSizeForHeight(TdxBarDockingStyle AStyle, int AWishedHeight, bool AOptimal = false);
	System::Types::TSize __fastcall GetTrackSize(TdxBarDockingStyle AStyle);
	virtual bool __fastcall HasCaption();
	virtual bool __fastcall HasCloseButton();
	void __fastcall InvalidateMark();
	bool __fastcall IsMarkAccessible();
	virtual System::Types::TRect __fastcall GetMouseTrackingBounds();
	virtual bool __fastcall MarkExists();
	System::Types::TRect __fastcall MarkNCRect();
	virtual System::Types::TRect __fastcall MarkRect();
	System::Types::TRect __fastcall MarkScreenRect();
	virtual void __fastcall SetMarkState(TdxBarMarkState Value);
	virtual bool __fastcall RealMDIButtonsOnBar();
	virtual Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	virtual void __fastcall SelectItemControl(TdxBarItemControl* AItemControl, System::Uitypes::TMouseButton AButton, System::Classes::TShiftState AShift);
	virtual void __fastcall ShowPopup(TdxBarItemControl* AItem);
	System::Types::TRect __fastcall SizeGripRect();
	virtual void __fastcall UpdateItem(TdxBarItemControl* AControl);
	virtual bool __fastcall AllowNCPaint();
	void __fastcall BarManagerStyleChanged();
	virtual void __fastcall CaptionChanged();
	virtual void __fastcall DoDrawBeginGroup(const System::Types::TRect &ASeparatorRect, bool AHorz);
	virtual void __fastcall DoNCPaint(HDC DC);
	virtual void __fastcall DoPaint();
	void __fastcall DrawBeginGroups();
	virtual void __fastcall DrawContentBackground();
	void __fastcall DrawMarks();
	void __fastcall DrawMDIButtons(TdxBarMDIButtons AButtons, bool AExcludeClipRect = false);
	void __fastcall DrawSelection(HDC ADC);
	virtual void __fastcall FillBackground(HDC ADC, const System::Types::TRect &ARect, HBRUSH ABrush, System::Uitypes::TColor AColor, bool AIsClientArea);
	void __fastcall FrameChanged();
	virtual Vcl::Controls::TCaption __fastcall GetCaption();
	virtual Vcl::Graphics::TFont* __fastcall GetEditFont();
	virtual Vcl::Graphics::TFont* __fastcall GetFont();
	virtual System::Types::TRect __fastcall GetFullItemRect(TdxBarItemControl* Item);
	virtual HRGN __fastcall GetItemRegion(TdxBarItemControl* Item);
	virtual HBRUSH __fastcall GetToolbarBrush();
	virtual void __fastcall GlyphChanged();
	virtual bool __fastcall IsBackgroundBitmap();
	virtual bool __fastcall IsTransparent();
	virtual System::Types::TPoint __fastcall NCOffset();
	virtual void __fastcall NCPaint(HDC ADC);
	virtual bool __fastcall NotHandleMouseMove(bool ACheckLastMousePos = true);
	void __fastcall RebuildBar();
	void __fastcall RefreshShadow();
	void __fastcall RepaintMDIButtons();
	void __fastcall SavePos();
	virtual void __fastcall SetFont();
	virtual void __fastcall SetDockingStyle(TdxBarDockingStyle Value);
	virtual void __fastcall SetKeySelectedItem(TdxBarItemControl* Value);
	virtual void __fastcall SetLayeredAttributes();
	__property TdxBarPopupControl* QuickPopup = {read=FQuickPopup};
	__property System::Uitypes::TColor CaptionBkColor = {read=GetCaptionBkColor, nodefault};
	__property System::Uitypes::TColor CaptionColor = {read=GetCaptionColor, nodefault};
	__property TdxBarMarkState CloseButtonState = {read=FCloseButtonState, write=SetCloseButtonState, nodefault};
	__property bool Horizontal = {read=GetHorizontal, nodefault};
	__property bool Moving = {read=FMoving, write=SetMoving, nodefault};
	__property bool MultiLine = {read=GetMultiLine, nodefault};
	__property bool Truncated = {read=FTruncated, write=FTruncated, nodefault};
	__property bool Vertical = {read=GetVertical, nodefault};
	__property int MDIButtonWidth = {read=FMDIButtonWidth, nodefault};
	__property int MDIButtonHeight = {read=FMDIButtonHeight, nodefault};
	__property Dxfading::TdxFader* Fader = {read=GetFader};
	__property TdxBarControlMarkFadingHelper* MarkFadingHelper = {read=FMarkFadingHelper};
	__property Vcl::Forms::TCustomForm* MasterForm = {read=GetMasterForm};
	__property Vcl::Forms::TCustomForm* ParentForm = {read=GetParentForm};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=GetScaleFactor};
	
public:
	__fastcall virtual TdxBarControl(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxBarControl();
	HIDESBASE System::Types::TPoint __fastcall ClientToScreen(const System::Types::TPoint &APoint);
	virtual void __fastcall Hide();
	virtual bool __fastcall IsRealVertical();
	virtual bool __fastcall IsVertical();
	virtual TdxBarKind __fastcall Kind();
	virtual void __fastcall Repaint();
	virtual void __fastcall ScaleForPPI(int NewPPI);
	void __fastcall UpdateFont();
	__property DockControl;
	__property _di_IdxBarAccessibilityHelper CloseButtonIAccessibilityHelper = {read=GetCloseButtonIAccessibilityHelper};
	__property _di_IdxBarAccessibilityHelper MarkIAccessibilityHelper = {read=GetMarkIAccessibilityHelper};
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxBarControl(HWND ParentWindow) : TdxBarDockedControl(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarControlViewInfo : public TCustomdxBarControlViewInfo
{
	typedef TCustomdxBarControlViewInfo inherited;
	
private:
	TdxBarControl* __fastcall GetBarControl();
	
protected:
	virtual void __fastcall CalcSeparatorInfo(TdxBarItemLink* AItemLink);
	virtual bool __fastcall CanShowButtonGroups();
	virtual void __fastcall DoCalcSeparatorInfo(TdxBarItemLink* AItemLink, const System::Types::TRect &AItemRect);
	virtual bool __fastcall IsLastVisibleItemControl(TdxBarItemControl* AItemControl);
	
public:
	virtual void __fastcall Calculate();
	__property TdxBarControl* BarControl = {read=GetBarControl};
public:
	/* TCustomdxBarControlViewInfo.Create */ inline __fastcall virtual TdxBarControlViewInfo(TCustomdxBarControl* ABarControl) : TCustomdxBarControlViewInfo(ABarControl) { }
	/* TCustomdxBarControlViewInfo.Destroy */ inline __fastcall virtual ~TdxBarControlViewInfo() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxBarSubMenuControl : public TCustomdxBarControl
{
	typedef TCustomdxBarControl inherited;
	
private:
	System::Classes::TThread* FAnimationThread;
	bool FDetachCaptionSelected;
	bool FExpandingMenu;
	NativeUInt FExpandMenuTimer;
	HBRUSH FLightBrush;
	HPALETTE FLightPalette;
	bool FLockChangeSizeByChildItemControl;
	TdxBarMenuAnimations FMenuAnimations;
	bool FNonRecent;
	NativeUInt FScrollTimerID;
	bool FShowAnimation;
	int FTopIndex;
	TXDirection FXDirection;
	TYDirection FYDirection;
	int FOnShowLeft;
	int FOnShowTop;
	int FOwnerWidth;
	int FOwnerHeight;
	int FMinWidth;
	int FStoredHeight;
	int FStoredWidth;
	TdxBarButtonControl* FDropDownButton;
	TdxBarSubItemControl* FSubItem;
	TdxBarCloseUpEvent FOnCloseUp;
	System::Classes::TNotifyEvent FOnPopup;
	System::Classes::TNotifyEvent FOnShow;
	int __fastcall GetBandSize();
	int __fastcall GetBarSize();
	System::Types::TRect __fastcall GetBarRect();
	int __fastcall GetBottomVisibleItemIndex();
	System::Types::TRect __fastcall GetContentRect();
	int __fastcall GetDetachCaptionSize();
	int __fastcall GetMaxVisibleCount();
	TdxBarItemControl* __fastcall GetParentItemControl();
	_di_IdxBarSubMenuOwner __fastcall GetSubMenuOwner();
	HBRUSH __fastcall GetToolbarItemsBrush();
	int __fastcall GetTopVisibleItemIndex();
	void __fastcall SetDetachCaptionSelected(bool AValue);
	void __fastcall SetTopIndex(int AValue);
	void __fastcall CalcBounds(/* out */ System::Types::TSize &ASize);
	void __fastcall CalcSize(/* out */ System::Types::TSize &ASize);
	void __fastcall CreateLightBrush();
	void __fastcall DestroyLightBrush();
	void __fastcall PreparePalette(HDC DC);
	void __fastcall UnpreparePalette(HDC DC);
	void __fastcall ExpandMenu();
	bool __fastcall ExtendedView();
	void __fastcall InvalidateItemsRect();
	void __fastcall InvalidateDetachCaption();
	bool __fastcall MouseOnArrow(Cxgraphics::TcxArrowDirection AArrowDirection);
	bool __fastcall MouseOnUpArrow();
	bool __fastcall MouseOnDownArrow();
	void __fastcall SetExpandMenuTimer(unsigned Time, bool ExpandAfterDelay);
	void __fastcall KillExpandMenuTimer();
	void __fastcall KillScrollTimer();
	bool __fastcall IsAnimationRunning();
	void __fastcall OnTerminateAnimation(System::TObject* Sender);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMNCCalcSize(Winapi::Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	HIDESBASE MESSAGE void __fastcall WMPrint(Winapi::Messages::TWMPrint &Message);
	HIDESBASE MESSAGE void __fastcall WMRButtonDown(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMRButtonUp(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMTimer(Winapi::Messages::TWMTimer &Message);
	
protected:
	System::Types::TPoint FMousePosOnPopup;
	HWND FParentWnd;
	Vcl::Menus::TPopupAlignment FPopupAlignment;
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	virtual void __fastcall DestroyWindowHandle();
	virtual void __fastcall DestroyWnd();
	DYNAMIC void __fastcall DoCloseUp();
	DYNAMIC void __fastcall DoPopup();
	virtual void __fastcall Paint();
	virtual void __fastcall NCPaint(HDC ADC);
	virtual void __fastcall DoKeyDown(Winapi::Messages::TWMKey &Message);
	virtual void __fastcall CalcControlsPositions();
	virtual void __fastcall CalcDrawingConsts();
	virtual void __fastcall CalcDragOverParameters(const System::Types::TPoint &ACursorPos, TdxBarItemLink* &ADragOverItemLink, bool &AIsBeginGroup, bool &AIsFirstPart, bool &AIsVerticalDirection);
	virtual void __fastcall CalcItemsRect();
	virtual bool __fastcall CanActiveChange();
	virtual bool __fastcall CanCustomizing();
	virtual bool __fastcall CanDrawClippedItem(const System::Types::TRect &AItemRect);
	virtual bool __fastcall CanShowHint();
	virtual bool __fastcall CheckLockUpdate();
	virtual bool __fastcall ChildrenHaveShadows();
	virtual void __fastcall CorrectVisibleItemsRectBottom();
	virtual void __fastcall CorrectVisibleItemsRectTop();
	virtual void __fastcall DoCreateControls();
	virtual void __fastcall DoDestroyControls();
	virtual void __fastcall DoBarMouseLeave();
	virtual void __fastcall DoBarMouseMove(System::Classes::TShiftState Shift, const System::Types::TPoint &APoint, TdxBarItemControl* AItemControl);
	virtual void __fastcall DoDropFocus();
	virtual void __fastcall DoNCPaint(HDC DC, const System::Types::TRect &ARect);
	virtual void __fastcall DoHideAll(TdxBarCloseUpReason AReason);
	virtual void __fastcall DoPaintItem(TdxBarItemControl* AControl, Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &AItemRect);
	virtual void __fastcall DoRepaintBar(bool ARecreateControls);
	virtual void __fastcall DoSetIsActive(bool AValue);
	virtual void __fastcall DragOver(int X, int Y, bool &Accept);
	virtual bool __fastcall AllowSelectionFrame();
	virtual bool __fastcall ChangeSizeByChildItemControl(/* out */ System::Types::TSize &ASize);
	virtual TdxBarAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	virtual int __fastcall GetBeginGroupSize();
	virtual TdxBarBehaviorOptions __fastcall GetBehaviorOptions();
	TdxBarItemControl* __fastcall GetBottomItemControl();
	virtual int __fastcall GetDefaultItemHeight(TdxBarItemControl* AItem);
	virtual Vcl::Graphics::TFont* __fastcall GetEditFont();
	virtual bool __fastcall GetIsContextMenu();
	virtual bool __fastcall GetIsCustomizing();
	virtual bool __fastcall GetIsMainMenu();
	virtual bool __fastcall GetIsStatusBar();
	virtual bool __fastcall GetIsShadowVisible();
	virtual int __fastcall GetItemControlOffset(TdxBarItemLink* AItemLink);
	virtual System::Types::TRect __fastcall GetItemRectEx(TdxBarItemControl* Item, bool IsBeginGroup);
	virtual System::Types::TSize __fastcall GetItemsPaneSize();
	virtual System::UnicodeString __fastcall GetHintItemText();
	virtual TdxBarPaintType __fastcall GetPaintType();
	virtual Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	virtual System::Classes::TPersistent* __fastcall GetSelectableObject();
	virtual int __fastcall GetTextSize();
	TdxBarItemControl* __fastcall GetTopItemControl();
	virtual TCustomdxBarControlViewInfoClass __fastcall GetViewInfoClass();
	virtual bool __fastcall HasBackground();
	virtual bool __fastcall IsInternal();
	virtual bool __fastcall IsMeaningParent(HWND AWnd);
	virtual bool __fastcall IsPopup();
	virtual bool __fastcall IsVerticalDirection();
	virtual bool __fastcall MustFitInWorkAreaWidth();
	bool __fastcall NeedBufferedRepaint();
	virtual bool __fastcall NeedHideOnClick();
	virtual bool __fastcall NeedsSelectFirstItemOnDropDownByKey();
	virtual void __fastcall SetFont();
	void __fastcall SetRecentItemCount();
	virtual void __fastcall SetAccelSelectedItem(TdxBarItemLink* AItemLink, bool ADuplicate);
	virtual void __fastcall SetControlVisible(TdxBarItemControl* AControl);
	virtual void __fastcall SetSelectedControl(TdxBarItemControl* Value);
	void __fastcall SetSizeAndCheckBounds(const System::Types::TSize &APredefinedSize, /* out */ bool &AChangeXDirection, /* out */ bool &AChangeYDirection);
	void __fastcall TerminateAnimation(bool ANeedFinish);
	virtual void __fastcall UpdateItem(TdxBarItemControl* AControl);
	virtual void __fastcall UpdateParentItemControl();
	virtual void __fastcall InitCustomizationPopup(TdxBarItemLinks* AItemLinks);
	virtual void __fastcall ShowPopup(TdxBarItemControl* AItem);
	bool __fastcall CanDetach();
	bool __fastcall Detachable();
	int __fastcall DetachCaptionAreaSize();
	System::Types::TRect __fastcall DetachCaptionRect();
	bool __fastcall MouseOnDetachCaption();
	virtual bool __fastcall NotHandleMouseMove(bool ACheckLastMousePos = true);
	void __fastcall DoDetachMenu();
	int __fastcall MarkArrowSize();
	virtual bool __fastcall MarkExists();
	virtual System::Types::TRect __fastcall MarkRect();
	virtual void __fastcall SetMarkState(TdxBarMarkState Value);
	bool __fastcall DownArrowExists();
	virtual int __fastcall GetScrollTime();
	bool __fastcall UpArrowExists();
	bool __fastcall UseScrollButtons();
	virtual void __fastcall DoCalcSize(/* out */ System::Types::TSize &ASize);
	void __fastcall DoCorrectSize(System::Types::TSize &ASize);
	virtual void __fastcall DoShow();
	virtual void __fastcall RestoreSize();
	virtual void __fastcall StoreAndReduceSize();
	void __fastcall DrawBar();
	virtual void __fastcall DrawContent();
	virtual void __fastcall DrawItems();
	void __fastcall DrawScrollArea();
	virtual void __fastcall FillBackground(HDC DC, const System::Types::TRect &ARect, HBRUSH ABrush, System::Uitypes::TColor AColor, bool AIsClientArea);
	virtual void __fastcall DoFillBackgroundEx(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, HBRUSH ABrush, System::Uitypes::TColor AColor, bool AIsClientArea);
	void __fastcall FillBackgroundEx(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, HBRUSH ABrush, System::Uitypes::TColor AColor, bool AIsClientArea);
	virtual Vcl::Graphics::TGraphic* __fastcall GetBackgroundBitmap();
	virtual int __fastcall GetBorderSize();
	HIDESBASE virtual System::Types::TRect __fastcall GetClientOffset(bool AIncludeDetachCaption = true);
	int __fastcall GetIndent1();
	int __fastcall GetIndent2();
	virtual System::Types::TRect __fastcall GetItemsRectOffset();
	virtual bool __fastcall IsDoubleBufferedNeeded();
	virtual bool __fastcall IsTransparent();
	virtual System::Types::TRect __fastcall GetMouseTrackingBounds();
	__property int BandSize = {read=GetBandSize, nodefault};
	__property int BarSize = {read=GetBarSize, nodefault};
	__property int BorderSize = {read=GetBorderSize, nodefault};
	__property bool DetachCaptionSelected = {read=FDetachCaptionSelected, write=SetDetachCaptionSelected, nodefault};
	__property int DetachCaptionSize = {read=GetDetachCaptionSize, nodefault};
	__property System::Types::TRect BarRect = {read=GetBarRect};
	__property System::Types::TRect ContentRect = {read=GetContentRect};
	__property HBRUSH ToolbarItemsBrush = {read=GetToolbarItemsBrush, nodefault};
	__property TdxBarItemControl* BottomItemControl = {read=GetBottomItemControl};
	__property int BottomVisibleItemIndex = {read=GetBottomVisibleItemIndex, nodefault};
	__property bool IsContextMenu = {read=GetIsContextMenu, nodefault};
	__property int MaxVisibleCount = {read=GetMaxVisibleCount, nodefault};
	__property bool NonRecent = {read=FNonRecent, nodefault};
	__property int TopIndex = {read=FTopIndex, write=SetTopIndex, nodefault};
	__property TdxBarItemControl* TopItemControl = {read=GetTopItemControl};
	__property int TopVisibleItemIndex = {read=GetTopVisibleItemIndex, nodefault};
	__property int OnShowLeft = {read=FOnShowLeft, nodefault};
	__property int OnShowTop = {read=FOnShowTop, nodefault};
	__property TdxBarCloseUpEvent OnCloseUp = {read=FOnCloseUp, write=FOnCloseUp};
	__property System::Classes::TNotifyEvent OnPopup = {read=FOnPopup, write=FOnPopup};
	__property System::Classes::TNotifyEvent OnShow = {read=FOnShow, write=FOnShow};
	
public:
	__fastcall virtual TdxBarSubMenuControl(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxBarSubMenuControl();
	virtual TdxBarKind __fastcall Kind();
	virtual void __fastcall Hide();
	virtual void __fastcall Show();
	__property int OwnerWidth = {read=FOwnerWidth, write=FOwnerWidth, nodefault};
	__property int OwnerHeight = {read=FOwnerHeight, write=FOwnerHeight, nodefault};
	__property TdxBarItemControl* ParentItemControl = {read=GetParentItemControl};
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxBarSubMenuControl(HWND ParentWindow) : TCustomdxBarControl(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarSubMenuControlViewInfo : public TCustomdxBarControlViewInfo
{
	typedef TCustomdxBarControlViewInfo inherited;
	
private:
	TdxBarSubMenuControl* __fastcall GetBarControl();
	
public:
	virtual void __fastcall Calculate();
	__property TdxBarSubMenuControl* BarControl = {read=GetBarControl};
public:
	/* TCustomdxBarControlViewInfo.Create */ inline __fastcall virtual TdxBarSubMenuControlViewInfo(TCustomdxBarControl* ABarControl) : TCustomdxBarControlViewInfo(ABarControl) { }
	/* TCustomdxBarControlViewInfo.Destroy */ inline __fastcall virtual ~TdxBarSubMenuControlViewInfo() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxBarInternalSubMenuControl : public TdxBarSubMenuControl
{
	typedef TdxBarSubMenuControl inherited;
	
private:
	Cxgeometry::TdxScaleFactor* FScaleFactor;
	
protected:
	virtual Vcl::Graphics::TFont* __fastcall GetEditFont();
	virtual bool __fastcall GetIsCustomizing();
	virtual Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	virtual bool __fastcall IsInternal();
	virtual void __fastcall SetFont();
	
public:
	__fastcall virtual TdxBarInternalSubMenuControl(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxBarInternalSubMenuControl();
	virtual void __fastcall ScaleForPPI(int NewPPI);
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxBarInternalSubMenuControl(HWND ParentWindow) : TdxBarSubMenuControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TdxBarCustomizingPopup : public TdxBarInternalSubMenuControl
{
	typedef TdxBarInternalSubMenuControl inherited;
	
public:
	__fastcall virtual TdxBarCustomizingPopup(System::Classes::TComponent* AOwner);
public:
	/* TdxBarInternalSubMenuControl.Destroy */ inline __fastcall virtual ~TdxBarCustomizingPopup() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxBarCustomizingPopup(HWND ParentWindow) : TdxBarInternalSubMenuControl(ParentWindow) { }
	
};


typedef System::TMetaClass* TdxBarItemActionLinkClass;

class PASCALIMPLEMENTATION TdxBarItemActionLink : public Vcl::Actnlist::TActionLink
{
	typedef Vcl::Actnlist::TActionLink inherited;
	
protected:
	TdxBarItem* FClient;
	virtual void __fastcall AssignClient(System::TObject* AClient);
	virtual bool __fastcall IsCaptionLinked();
	virtual bool __fastcall IsCheckedLinked();
	virtual bool __fastcall IsEnabledLinked();
	virtual bool __fastcall IsHelpContextLinked();
	virtual bool __fastcall IsHintLinked();
	virtual bool __fastcall IsImageIndexLinked();
	virtual bool __fastcall IsShortCutLinked();
	virtual bool __fastcall IsVisibleLinked();
	virtual bool __fastcall IsOnExecuteLinked();
	virtual void __fastcall SetCaption(const System::UnicodeString Value);
	virtual void __fastcall SetChecked(bool Value);
	virtual void __fastcall SetEnabled(bool Value);
	virtual void __fastcall SetHelpContext(System::Classes::THelpContext Value);
	virtual void __fastcall SetHint(const System::UnicodeString Value);
	virtual void __fastcall SetImageIndex(int Value);
	virtual void __fastcall SetShortCut(System::Classes::TShortCut Value);
	virtual void __fastcall SetVisible(bool Value);
	virtual void __fastcall SetOnExecute(System::Classes::TNotifyEvent Value);
public:
	/* TBasicActionLink.Create */ inline __fastcall virtual TdxBarItemActionLink(System::TObject* AClient) : Vcl::Actnlist::TActionLink(AClient) { }
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TdxBarItemActionLink() { }
	
};


enum DECLSPEC_DENUM TdxBarItemStyleChangeKind : unsigned char { sckDrawing, sckStructure, sckNone };

typedef void __fastcall (__closure *TdxBarItemStylesDataChangeEvent)(TdxBarItemStyleChangeKind AChangeKind);

class PASCALIMPLEMENTATION TdxBarItemStylesData : public Dxcoreclasses::TcxInterfacedPersistent
{
	typedef Dxcoreclasses::TcxInterfacedPersistent inherited;
	
	
private:
	typedef System::DynamicArray<TdxBarItemStyleData> _TdxBarItemStylesData__1;
	
	
private:
	int FChangeEventLockCount;
	TdxBarItemStyleChangeKind FChangeKind;
	bool FIsDestroying;
	TdxBarItemStylesDataChangeEvent FOnChange;
	int FStyleCount;
	_TdxBarItemStylesData__1 FStylesData;
	void __fastcall StyleChanged(Cxstyles::TcxCustomStyle* AStyle);
	void __fastcall StyleRemoved(Cxstyles::TcxCustomStyle* AStyle);
	void __fastcall DoChange(TdxBarItemStyleChangeKind AChangeKind);
	Cxstyles::TcxStyle* __fastcall GetStyle(int AIndex);
	int __fastcall GetStyleReferenceCount(Cxstyles::TcxStyle* AStyle);
	void __fastcall InternalSetStyle(int AIndex, Cxstyles::TcxStyle* Value);
	void __fastcall InternalStyleChanged(int AIndex)/* overload */;
	void __fastcall InternalStyleChanged(Cxstyles::TcxStyle* AStyle)/* overload */;
	void __fastcall InternalStyleRemoved(Cxstyles::TcxStyle* AStyle);
	bool __fastcall IsChangeEventLocked();
	void __fastcall LockChangeEvent(bool ALock);
	void __fastcall SetStyle(int AIndex, Cxstyles::TcxStyle* Value);
	
protected:
	__property bool IsDestroying = {read=FIsDestroying, nodefault};
	__property int StyleCount = {read=FStyleCount, nodefault};
	
public:
	__fastcall TdxBarItemStylesData(int AStyleCount);
	__fastcall virtual ~TdxBarItemStylesData();
	__property Cxstyles::TcxStyle* Styles[int AIndex] = {read=GetStyle, write=SetStyle};
	__property TdxBarItemStylesDataChangeEvent OnChange = {read=FOnChange, write=FOnChange};
private:
	void *__IcxStyleChangeListener;	// Cxstyles::IcxStyleChangeListener 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E25A5395-C1E8-4311-A281-9575F79DE862}
	operator Cxstyles::_di_IcxStyleChangeListener()
	{
		Cxstyles::_di_IcxStyleChangeListener intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxstyles::IcxStyleChangeListener*(void) { return (Cxstyles::IcxStyleChangeListener*)&__IcxStyleChangeListener; }
	#endif
	
};


class PASCALIMPLEMENTATION TdxBarScreenTip : public Dxscreentip::TdxScreenTip
{
	typedef Dxscreentip::TdxScreenTip inherited;
	
public:
	/* TdxScreenTip.Create */ inline __fastcall virtual TdxBarScreenTip(System::Classes::TComponent* AOwner) : Dxscreentip::TdxScreenTip(AOwner) { }
	/* TdxScreenTip.Destroy */ inline __fastcall virtual ~TdxBarScreenTip() { }
	
};


class PASCALIMPLEMENTATION TdxBarScreenTipRepository : public Dxscreentip::TdxScreenTipRepository
{
	typedef Dxscreentip::TdxScreenTipRepository inherited;
	
public:
	/* TdxScreenTipRepository.Create */ inline __fastcall virtual TdxBarScreenTipRepository(System::Classes::TComponent* AOwner) : Dxscreentip::TdxScreenTipRepository(AOwner) { }
	/* TdxScreenTipRepository.Destroy */ inline __fastcall virtual ~TdxBarScreenTipRepository() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarCustomHintViewInfo : public Dxcustomhint::TdxCustomHintViewInfo
{
	typedef Dxcustomhint::TdxCustomHintViewInfo inherited;
	
protected:
	virtual bool __fastcall IsScreenTip();
	virtual void __fastcall SetWindowDrawParams(TdxBarHintWindow* AWindow);
public:
	/* TdxCustomHintViewInfo.Create */ inline __fastcall TdxBarCustomHintViewInfo() : Dxcustomhint::TdxCustomHintViewInfo() { }
	/* TdxCustomHintViewInfo.Destroy */ inline __fastcall virtual ~TdxBarCustomHintViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarHintViewInfoHelper : public Dxcustomhint::TdxHintViewInfoHelper
{
	typedef Dxcustomhint::TdxHintViewInfoHelper inherited;
	
private:
	TdxBarManager* FBarManager;
	
protected:
	virtual Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	virtual void __fastcall PrepareCanvasFont(Vcl::Graphics::TCanvas* ACanvas);
	
public:
	__fastcall TdxBarHintViewInfoHelper(TdxBarManager* ABarManager, const System::UnicodeString AHint, const System::UnicodeString AShortCut, const System::Types::TPoint &ACursorPos);
public:
	/* TdxHintViewInfoHelper.Destroy */ inline __fastcall virtual ~TdxBarHintViewInfoHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarHintViewInfo : public TdxBarCustomHintViewInfo
{
	typedef TdxBarCustomHintViewInfo inherited;
	
private:
	TdxBarManager* FBarManager;
	System::Types::TPoint FCursorPos;
	System::UnicodeString FHint;
	System::UnicodeString FShortCut;
	
protected:
	virtual void __fastcall CreateHelper();
	virtual void __fastcall SetWindowDrawParams(TdxBarHintWindow* AWindow);
	
public:
	__fastcall TdxBarHintViewInfo(TdxBarManager* ABarManager, const System::UnicodeString AHint, const System::UnicodeString AShortCut, const System::Types::TPoint &ACursorPos);
public:
	/* TdxCustomHintViewInfo.Destroy */ inline __fastcall virtual ~TdxBarHintViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarScreenTipPainter : public Dxscreentip::TdxScreenTipPainter
{
	typedef Dxscreentip::TdxScreenTipPainter inherited;
	
private:
	TdxBarPainter* FPainter;
	
public:
	__fastcall TdxBarScreenTipPainter(TdxBarPainter* APainter);
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall GetColorPalette();
	virtual System::Uitypes::TColor __fastcall GetDescriptionTextColor();
	virtual int __fastcall GetFooterLineSize();
	virtual System::Uitypes::TColor __fastcall GetTitleTextColor();
	virtual void __fastcall DrawBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect);
	virtual void __fastcall DrawFooterLine(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarScreenTipPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarLikeHintScreenTipViewInfoHelper : public Dxscreentip::TdxScreenTipLikeHintViewInfoHelper
{
	typedef Dxscreentip::TdxScreenTipLikeHintViewInfoHelper inherited;
	
private:
	TdxBarManager* FBarManager;
	
protected:
	virtual Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	virtual void __fastcall PrepareCanvasFont(Vcl::Graphics::TCanvas* ACanvas);
	
public:
	__fastcall TdxBarLikeHintScreenTipViewInfoHelper(TdxBarManager* ABarManager, Dxscreentip::TdxScreenTipPainter* APainter, const System::UnicodeString AHint, const System::UnicodeString AShortCut, const System::Types::TPoint &ACursorPos);
public:
	/* TdxHintViewInfoHelper.Destroy */ inline __fastcall virtual ~TdxBarLikeHintScreenTipViewInfoHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarLikeHintScreenTipViewInfo : public TdxBarHintViewInfo
{
	typedef TdxBarHintViewInfo inherited;
	
private:
	Dxscreentip::TdxScreenTipPainter* FPainter;
	
protected:
	virtual void __fastcall CreateHelper();
	virtual void __fastcall DestroyHelper();
	virtual bool __fastcall IsScreenTip();
	
public:
	__fastcall TdxBarLikeHintScreenTipViewInfo(TdxBarManager* ABarManager, TdxBarPainter* APainter, const System::UnicodeString AHint, const System::UnicodeString AShortCut, const System::Types::TPoint &ACursorPos);
public:
	/* TdxCustomHintViewInfo.Destroy */ inline __fastcall virtual ~TdxBarLikeHintScreenTipViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarScreenTipViewInfo : public TdxBarCustomHintViewInfo
{
	typedef TdxBarCustomHintViewInfo inherited;
	
private:
	System::UnicodeString FHint;
	Dxscreentip::TdxScreenTipPainter* FPainter;
	Dxscreentip::TdxScreenTip* FScreenTip;
	System::UnicodeString FShortCut;
	
protected:
	virtual void __fastcall CreateHelper();
	virtual void __fastcall DestroyHelper();
	virtual bool __fastcall IsScreenTip();
	
public:
	__fastcall TdxBarScreenTipViewInfo(Dxscreentip::TdxScreenTip* AScreenTip, TdxBarPainter* APainter, const System::UnicodeString AHintText, System::UnicodeString AShortCut);
public:
	/* TdxCustomHintViewInfo.Destroy */ inline __fastcall virtual ~TdxBarScreenTipViewInfo() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxBarHintWindow : public Dxcustomhint::TcxBaseHintWindow
{
	typedef Dxcustomhint::TcxBaseHintWindow inherited;
	
private:
	bool FIsScreenTipWindow;
	TdxBarCustomHintViewInfo* FViewInfo;
	MESSAGE void __fastcall WMShowWindow(Winapi::Messages::TWMShowWindow &Message);
	
protected:
	virtual void __fastcall AdjustActivateRect(System::Types::TRect &ARect);
	virtual void __fastcall EnableRegion();
	virtual bool __fastcall HasWindowRegion();
	virtual int __fastcall GetHideHintTime();
	virtual int __fastcall GetShowHintTime();
	virtual void __fastcall Paint();
	
public:
	__fastcall virtual TdxBarHintWindow(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxBarHintWindow();
	virtual System::Types::TRect __fastcall CalcHintRect(int MaxWidth, const System::UnicodeString AHint, void * AData);
	__property int ShowHintTime = {read=GetShowHintTime, nodefault};
	__property int HideHintTime = {read=GetHideHintTime, nodefault};
	__property bool IsScreenTipWindow = {read=FIsScreenTipWindow, write=FIsScreenTipWindow, nodefault};
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxBarHintWindow(HWND ParentWindow) : Dxcustomhint::TcxBaseHintWindow(ParentWindow) { }
	
};


typedef bool __fastcall (__closure *TdxBarIsChildWindowEvent)(TdxBarItem* Sender, NativeUInt AWindowHandle);

class PASCALIMPLEMENTATION TdxBarItem : public TdxBarComponent
{
	typedef TdxBarComponent inherited;
	
private:
	TdxBarItemActionLink* FActionLink;
	TdxBarItemAlign FAlign;
	bool FCanHaveOnlyOneLink;
	bool FCanSelect;
	System::UnicodeString FCaption;
	int FCategory;
	bool FCheckDefaults;
	TdxBarItemLink* FClickItemLink;
	System::TObject* FData;
	System::UnicodeString FDescription;
	Dxgdiplusclasses::TdxSmartGlyph* FGlyph;
	System::Classes::THelpContext FHelpContext;
	System::UnicodeString FHint;
	int FImageIndex;
	bool FIsPredefined;
	System::UnicodeString FKeyTip;
	Dxgdiplusclasses::TdxSmartGlyph* FLargeGlyph;
	int FLargeImageIndex;
	System::Classes::TList* FLinks;
	TdxBarItemMergeKind FMergeKind;
	int FMergeOrder;
	TdxBarPaintStyle FPaintStyle;
	System::Classes::TShortCut FShortCut;
	TdxBarItemStylesData* FStylesData;
	Dxscreentip::TdxScreenTip* FScreenTip;
	bool FUnclickAfterDoing;
	int FWidth;
	System::Classes::TNotifyEvent FOnClick;
	System::Classes::TNotifyEvent FOnCreate;
	System::Classes::TNotifyEvent FOnDestroy;
	TdxBarIsChildWindowEvent FOnIsChildWindow;
	Dxscreentip::TdxOnGetScreenTip FOnGetScreenTip;
	System::Classes::TBasicAction* __fastcall GetAction();
	TdxBarItemLink* __fastcall GetActiveLink();
	bool __fastcall GetActuallyVisible();
	TdxBarItemLink* __fastcall GetCurItemLink();
	bool __fastcall GetFlat();
	int __fastcall GetIndex();
	bool __fastcall GetIsDesigning();
	bool __fastcall GetIsDestroying();
	bool __fastcall GetIsLoading();
	int __fastcall GetLinkCount();
	TdxBarItemLink* __fastcall GetLinks(int Index);
	TdxBarPainterClass __fastcall GetPainterClass();
	bool __fastcall GetVisibleForCustomization();
	bool __fastcall GetVisibleForUser();
	void __fastcall SetAction(System::Classes::TBasicAction* Value);
	void __fastcall SetAlign(TdxBarItemAlign Value);
	void __fastcall SetCategory(int Value);
	void __fastcall SetDescription(System::UnicodeString Value);
	void __fastcall SetIndex(int Value);
	void __fastcall SetLargeGlyph(Dxgdiplusclasses::TdxSmartGlyph* Value);
	void __fastcall SetMergeOrder(int Value);
	void __fastcall SetPaintStyle(TdxBarPaintStyle Value);
	void __fastcall SetShowCaption(bool Value);
	void __fastcall SetShortCut(System::Classes::TShortCut Value);
	void __fastcall DestroyLinks();
	void __fastcall DoActionChange(System::TObject* Sender);
	bool __fastcall IsEnabledStored();
	bool __fastcall IsHelpContextStored();
	bool __fastcall IsImageIndexStored();
	bool __fastcall IsShortCutStored();
	bool __fastcall IsVisibleStored();
	bool __fastcall IsOnClickStored();
	void __fastcall OnGlyphChanged(System::TObject* Sender);
	void __fastcall OnLargeGlyphChanged(System::TObject* Sender);
	
protected:
	bool FShowCaption;
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	virtual void __fastcall ChangeScale(int M, int D);
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall ReadState(System::Classes::TReader* Reader);
	virtual void __fastcall SelectionChanged();
	virtual bool __fastcall GetEnabled();
	virtual void __fastcall SetName(const System::Classes::TComponentName NewName);
	virtual void __fastcall SetEnabled(bool Value);
	virtual void __fastcall SetVisible(TdxBarItemVisible Value);
	void __fastcall SetWidth(int Value);
	virtual bool __fastcall CanDelete(bool ADestruction = false);
	virtual void __fastcall ExecuteCustomizationAction(TdxBarCustomizationAction ABasicAction);
	virtual void __fastcall GetMasterObjects(TdxObjectList* AList);
	virtual _di_IdxBarSelectableItem __fastcall GetNextSelectableItem();
	virtual System::Classes::TPersistent* __fastcall GetSelectableParent();
	virtual TdxBarCustomizationActions __fastcall GetSupportedActions();
	virtual void __fastcall DeleteSelection(_di_IdxBarSelectableItem &AReference, bool ADestruction);
	virtual void __fastcall Invalidate();
	virtual bool __fastcall IsComplex();
	virtual bool __fastcall SelectParentComponent();
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	virtual bool __fastcall CanBePlacedOn(TdxBarItemControlParentKind AParentKind, TdxBar* AToolbar, /* out */ System::UnicodeString &AErrorText);
	virtual bool __fastcall CanChangePaintStyle();
	virtual bool __fastcall CanClicked();
	bool __fastcall CanMergeWith(TdxBarItem* AItem);
	__property bool CanHaveOnlyOneLink = {read=FCanHaveOnlyOneLink, nodefault};
	__property bool CanSelect = {read=FCanSelect, write=FCanSelect, default=1};
	bool __fastcall CurImageIndexLinked();
	virtual void __fastcall DrawCustomizingImage(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState AState);
	virtual void __fastcall DrawCustomizingImageContent(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool ASelected);
	DYNAMIC TdxBarItemActionLinkClass __fastcall GetActionLinkClass();
	virtual int __fastcall GetActionImageIndex();
	virtual void __fastcall SetActionImageIndex(int Value);
	virtual TdxBarItemControlClass __fastcall GetControlClass(bool AIsVertical);
	virtual bool __fastcall GetHidden();
	System::UnicodeString __fastcall GetHintFromCaption();
	virtual TdxBarItemLinks* __fastcall GetItemLinks();
	__classmethod virtual int __fastcall GetStyleCount();
	Cxstyles::TcxStyle* __fastcall GetStyleValue(int AIndex);
	virtual bool __fastcall HasAccel(TdxBarItemLink* AItemLink);
	bool __fastcall HasControls();
	virtual void __fastcall HideControl(TdxBarItemControl* AControl);
	virtual bool __fastcall InternalActuallyVisible();
	virtual bool __fastcall InternalCanMergeWith(TdxBarItem* AItem);
	bool __fastcall IsHintFromCaption();
	virtual bool __fastcall IsShortCut(System::Classes::TShortCut AShortCut);
	virtual bool __fastcall IsStyleColorSupported();
	virtual bool __fastcall NeedToBeHidden();
	virtual void __fastcall Recalculate();
	void __fastcall ShowDefaultEventHandler();
	virtual void __fastcall Update();
	virtual void __fastcall UpdateActionLink();
	virtual void __fastcall UpdateEx(TdxBarKinds AParentKinds = (TdxBarKinds() << TdxBarKind::bkBarControl << TdxBarKind::bkBarQuickControl << TdxBarKind::bkSubMenu ));
	virtual bool __fastcall UseHotImages();
	virtual bool __fastcall UseLargeImages();
	bool __fastcall DoIsChildWindow(NativeUInt AWindowHandle);
	Dxscreentip::TdxScreenTip* __fastcall DoGetScreenTip();
	virtual System::UnicodeString __fastcall GetCaption();
	virtual Dxgdiplusclasses::TdxSmartGlyph* __fastcall GetGlyph();
	virtual System::UnicodeString __fastcall GetHint();
	virtual int __fastcall GetImageIndex();
	virtual Dxscreentip::TdxScreenTip* __fastcall GetScreenTip();
	virtual bool __fastcall IsCaptionStored();
	virtual bool __fastcall IsHintStored();
	virtual void __fastcall SetCaption(const System::UnicodeString Value);
	virtual void __fastcall SetGlyph(Dxgdiplusclasses::TdxSmartGlyph* Value);
	virtual void __fastcall SetHint(System::UnicodeString Value);
	virtual void __fastcall SetImageIndex(int Value);
	virtual void __fastcall SetLargeImageIndex(int Value);
	virtual void __fastcall SetScreenTip(Dxscreentip::TdxScreenTip* Value);
	void __fastcall SetStyleValue(int AIndex, Cxstyles::TcxStyle* Value);
	virtual void __fastcall CaptionChanged();
	virtual void __fastcall EnabledChanged();
	virtual void __fastcall GlyphChanged();
	virtual void __fastcall HotGlyphChanged();
	void __fastcall InternalStyleChanged(TdxBarItemStyleChangeKind AChangeKind);
	virtual void __fastcall LargeGlyphChanged();
	virtual void __fastcall PaintStyleChanged();
	virtual void __fastcall ShortCutChanged();
	void __fastcall VisibleChanged();
	virtual void __fastcall WidthChanged();
	virtual void __fastcall CheckLinks(System::Inifiles::TCustomIniFile* ASource, const System::UnicodeString ABaseSection);
	virtual System::UnicodeString __fastcall GetIniSection(const System::UnicodeString ABaseSection);
	virtual void __fastcall LoadFromIni(System::Inifiles::TCustomIniFile* ASource, const System::UnicodeString ABaseSection, TdxBarStoringKind AStoringKind);
	virtual void __fastcall LoadUsageData(System::Inifiles::TCustomIniFile* ASource, const System::UnicodeString ABaseSection);
	virtual void __fastcall SaveToIni(System::Inifiles::TCustomIniFile* ADestination, const System::UnicodeString ABaseSection, TdxBarStoringKind AStoringKind);
	void __fastcall GetTextViewParams(/* out */ Cxgraphics::TcxViewParams &AViewParams);
	void __fastcall GetViewParams(Cxstyles::TcxStyle* AStyle, /* out */ Cxgraphics::TcxViewParams &AViewParams);
	__classmethod virtual System::UnicodeString __fastcall GetNewCaption();
	__property TdxBarItemActionLink* ActionLink = {read=FActionLink, write=FActionLink};
	__property int ActionImageIndex = {read=GetActionImageIndex, write=SetActionImageIndex, nodefault};
	__property bool Flat = {read=GetFlat, nodefault};
	__property bool Hidden = {read=GetHidden, nodefault};
	__property bool IsDesigning = {read=GetIsDesigning, nodefault};
	__property bool IsDestroying = {read=GetIsDestroying, nodefault};
	__property bool IsLoading = {read=GetIsLoading, nodefault};
	__property TdxBarPainterClass PainterClass = {read=GetPainterClass};
	__property TdxBarPaintStyle PaintStyle = {read=FPaintStyle, write=SetPaintStyle, default=0};
	__property bool ShowCaption = {read=FShowCaption, write=SetShowCaption, nodefault};
	__property TdxBarItemStylesData* StylesData = {read=FStylesData};
	__property int Width = {read=FWidth, write=SetWidth, nodefault};
	__property System::Classes::TNotifyEvent OnCreate = {read=FOnCreate, write=FOnCreate};
	__property TdxBarIsChildWindowEvent OnIsChildWindow = {read=FOnIsChildWindow, write=FOnIsChildWindow};
	
public:
	__fastcall virtual TdxBarItem(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxBarItem();
	virtual void __fastcall AfterConstruction();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall BeforeDestruction();
	DYNAMIC void __fastcall Click();
	DYNAMIC void __fastcall DirectClick();
	DYNAMIC void __fastcall DoClick();
	virtual System::UnicodeString __fastcall GetAddMessageName();
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetCurrentImages();
	DYNAMIC System::Classes::TComponent* __fastcall GetParentComponent();
	DYNAMIC bool __fastcall HasParent();
	DYNAMIC void __fastcall SetParentComponent(System::Classes::TComponent* AParent);
	__property bool ActuallyVisible = {read=GetActuallyVisible, nodefault};
	__property TdxBarItemLink* ClickItemLink = {read=FClickItemLink};
	__property TdxBarItemLink* CurItemLink = {read=GetCurItemLink};
	__property System::TObject* Data = {read=FData, write=FData};
	__property Dxgdiplusclasses::TdxSmartGlyph* Glyph = {read=GetGlyph, write=SetGlyph};
	__property int ImageIndex = {read=GetImageIndex, write=SetImageIndex, stored=IsImageIndexStored, default=-1};
	__property int Index = {read=GetIndex, write=SetIndex, nodefault};
	__property bool IsPredefined = {read=FIsPredefined, nodefault};
	__property Dxgdiplusclasses::TdxSmartGlyph* LargeGlyph = {read=FLargeGlyph, write=SetLargeGlyph};
	__property int LargeImageIndex = {read=FLargeImageIndex, write=SetLargeImageIndex, default=-1};
	__property int LinkCount = {read=GetLinkCount, nodefault};
	__property TdxBarItemLink* Links[int Index] = {read=GetLinks};
	__property System::Classes::TShortCut ShortCut = {read=FShortCut, write=SetShortCut, stored=IsShortCutStored, default=0};
	__property bool UnclickAfterDoing = {read=FUnclickAfterDoing, write=FUnclickAfterDoing, default=0};
	__property bool VisibleForCustomization = {read=GetVisibleForCustomization, nodefault};
	__property bool VisibleForUser = {read=GetVisibleForUser, nodefault};
	__property System::Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick, stored=IsOnClickStored};
	
__published:
	__property System::Classes::TBasicAction* Action = {read=GetAction, write=SetAction};
	__property TdxBarItemAlign Align = {read=FAlign, write=SetAlign, default=0};
	__property System::UnicodeString Caption = {read=GetCaption, write=SetCaption, stored=IsCaptionStored};
	__property int Category = {read=FCategory, write=SetCategory, nodefault};
	__property System::UnicodeString Description = {read=FDescription, write=SetDescription};
	__property Enabled = {stored=IsEnabledStored, default=1};
	__property System::Classes::THelpContext HelpContext = {read=FHelpContext, write=FHelpContext, stored=IsHelpContextStored, default=0};
	__property System::UnicodeString Hint = {read=GetHint, write=SetHint, stored=IsHintStored};
	__property System::UnicodeString KeyTip = {read=FKeyTip, write=FKeyTip};
	__property TdxBarItemMergeKind MergeKind = {read=FMergeKind, write=FMergeKind, default=0};
	__property int MergeOrder = {read=FMergeOrder, write=SetMergeOrder, default=0};
	__property Cxstyles::TcxStyle* Style = {read=GetStyleValue, write=SetStyleValue, index=0};
	__property Dxscreentip::TdxScreenTip* ScreenTip = {read=GetScreenTip, write=SetScreenTip};
	__property Visible = {stored=IsVisibleStored};
	__property System::Classes::TNotifyEvent OnDestroy = {read=FOnDestroy, write=FOnDestroy};
	__property Dxscreentip::TdxOnGetScreenTip OnGetScreenTip = {read=FOnGetScreenTip, write=FOnGetScreenTip};
};


class PASCALIMPLEMENTATION TdxBarLabel : public TdxBarItem
{
	typedef TdxBarItem inherited;
	
public:
	__fastcall virtual TdxBarLabel(System::Classes::TComponent* AOwner);
public:
	/* TdxBarItem.Destroy */ inline __fastcall virtual ~TdxBarLabel() { }
	
};


class PASCALIMPLEMENTATION TdxBarSeparator : public TdxBarLabel
{
	typedef TdxBarLabel inherited;
	
protected:
	virtual bool __fastcall CanBePlacedOn(TdxBarItemControlParentKind AParentKind, TdxBar* AToolbar, /* out */ System::UnicodeString &AErrorText);
	__classmethod virtual System::UnicodeString __fastcall GetNewCaption();
	virtual TdxBarCustomizationActions __fastcall GetSupportedActions();
	
__published:
	__property ShowCaption = {default=1};
public:
	/* TdxBarLabel.Create */ inline __fastcall virtual TdxBarSeparator(System::Classes::TComponent* AOwner) : TdxBarLabel(AOwner) { }
	
public:
	/* TdxBarItem.Destroy */ inline __fastcall virtual ~TdxBarSeparator() { }
	
};


class PASCALIMPLEMENTATION TdxBarWindowItem : public TdxBarItem
{
	typedef TdxBarItem inherited;
	
private:
	bool FEmptyWindow;
	System::UnicodeString FText;
	System::Classes::TNotifyEvent FOnChange;
	System::Classes::TNotifyEvent FOnCurChange;
	System::Classes::TNotifyEvent FOnEnter;
	System::Classes::TNotifyEvent FOnExit;
	Vcl::Controls::TKeyEvent FOnKeyDown;
	Vcl::Controls::TKeyPressEvent FOnKeyPress;
	Vcl::Controls::TKeyEvent FOnKeyUp;
	System::UnicodeString __fastcall GetCurText();
	TdxBarItemLink* __fastcall GetFocusedItemLink();
	void __fastcall SetCurText(System::UnicodeString Value);
	
protected:
	virtual bool __fastcall CanClicked();
	DYNAMIC void __fastcall Change();
	DYNAMIC void __fastcall CurChange();
	DYNAMIC void __fastcall DoEnter();
	DYNAMIC void __fastcall DoExit();
	virtual TdxBarItemControlClass __fastcall GetControlClass(bool AIsVertical);
	virtual System::UnicodeString __fastcall GetText();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall SetText(System::UnicodeString Value);
	__property System::UnicodeString CurText = {read=GetCurText, write=SetCurText};
	__property bool EmptyWindow = {read=FEmptyWindow, write=FEmptyWindow, nodefault};
	__property System::UnicodeString Text = {read=GetText, write=SetText};
	
public:
	virtual void __fastcall SetFocus(bool ACheckBarControlVisibility = false);
	__property TdxBarItemLink* FocusedItemLink = {read=GetFocusedItemLink};
	
__published:
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property System::Classes::TNotifyEvent OnCurChange = {read=FOnCurChange, write=FOnCurChange};
	__property System::Classes::TNotifyEvent OnEnter = {read=FOnEnter, write=FOnEnter};
	__property System::Classes::TNotifyEvent OnExit = {read=FOnExit, write=FOnExit};
	__property Vcl::Controls::TKeyEvent OnKeyDown = {read=FOnKeyDown, write=FOnKeyDown};
	__property Vcl::Controls::TKeyPressEvent OnKeyPress = {read=FOnKeyPress, write=FOnKeyPress};
	__property Vcl::Controls::TKeyEvent OnKeyUp = {read=FOnKeyUp, write=FOnKeyUp};
public:
	/* TdxBarItem.Create */ inline __fastcall virtual TdxBarWindowItem(System::Classes::TComponent* AOwner) : TdxBarItem(AOwner) { }
	/* TdxBarItem.Destroy */ inline __fastcall virtual ~TdxBarWindowItem() { }
	
};


enum DECLSPEC_DENUM TdxBarButtonState : unsigned char { bstChecked, bstDropDown };

typedef System::Set<TdxBarButtonState, TdxBarButtonState::bstChecked, TdxBarButtonState::bstDropDown> TdxBarButtonStates;

class PASCALIMPLEMENTATION TdxBarButtonLikeItem : public TdxBarItem
{
	typedef TdxBarItem inherited;
	
private:
	TdxBarGlyphLayout FGlyphLayout;
	void __fastcall SetGlyphLayout(TdxBarGlyphLayout Value);
	
protected:
	virtual void __fastcall CheckLinks(System::Inifiles::TCustomIniFile* ASource, const System::UnicodeString ABaseSection);
	virtual void __fastcall LoadFromIni(System::Inifiles::TCustomIniFile* ASource, const System::UnicodeString ABaseSection, TdxBarStoringKind AStoringKind);
	virtual void __fastcall LoadUsageData(System::Inifiles::TCustomIniFile* ASource, const System::UnicodeString ABaseSection);
	virtual void __fastcall SaveToIni(System::Inifiles::TCustomIniFile* ADestination, const System::UnicodeString ABaseSection, TdxBarStoringKind AStoringKind);
	__property TdxBarGlyphLayout GlyphLayout = {read=FGlyphLayout, write=SetGlyphLayout, nodefault};
public:
	/* TdxBarItem.Create */ inline __fastcall virtual TdxBarButtonLikeItem(System::Classes::TComponent* AOwner) : TdxBarItem(AOwner) { }
	/* TdxBarItem.Destroy */ inline __fastcall virtual ~TdxBarButtonLikeItem() { }
	
};


class PASCALIMPLEMENTATION TdxBarCustomButton : public TdxBarButtonLikeItem
{
	typedef TdxBarButtonLikeItem inherited;
	
private:
	bool FAllowAllUp;
	bool FCloseSubMenuOnClick;
	bool FDown;
	bool FDropDownEnabled;
	TdxBarCustomPopupMenu* FDropDownMenu;
	int FGroupIndex;
	TdxBarButtonStates FInternalStates;
	bool FLowered;
	bool FRepeatClick;
	TdxBarButtonStyle __fastcall GetButtonStyle();
	void __fastcall SetAllowAllUp(bool Value);
	void __fastcall SetButtonStyle(TdxBarButtonStyle Value);
	void __fastcall SetDown(bool Value);
	void __fastcall SetDropDownEnabled(bool Value);
	void __fastcall SetDropDownMenu(TdxBarCustomPopupMenu* Value);
	void __fastcall SetGroupIndex(int Value);
	void __fastcall SetLowered(bool Value);
	bool __fastcall IsDownStored();
	
protected:
	virtual bool __fastcall CanChangePaintStyle();
	DYNAMIC void __fastcall DoDropDown(TdxBarButtonControl* AControl, int X, int Y, bool ByMouse);
	virtual bool __fastcall HasAccel(TdxBarItemLink* AItemLink);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall PaintStyleChanged();
	virtual System::UnicodeString __fastcall GetIniSection(const System::UnicodeString ABaseSection);
	bool __fastcall CanContainItem(TdxBarItem* AItem, /* out */ System::UnicodeString &AErrorText);
	TCustomdxBarControl* __fastcall CreateBarControl();
	virtual TdxBarItemLinks* __fastcall GetItemLinks();
	Vcl::Imglist::TCustomImageList* __fastcall GetImages();
	HIDESBASE bool __fastcall IsLoading();
	virtual TdxBarCustomizationActions __fastcall GetSupportedActions();
	__classmethod virtual System::UnicodeString __fastcall GetNewCaption();
	
public:
	__fastcall virtual TdxBarCustomButton(System::Classes::TComponent* AOwner);
	DYNAMIC void __fastcall Click();
	void __fastcall DropDown(bool AByMouse = false);
	__property bool AllowAllUp = {read=FAllowAllUp, write=SetAllowAllUp, default=0};
	__property TdxBarButtonStyle ButtonStyle = {read=GetButtonStyle, write=SetButtonStyle, default=0};
	__property bool CloseSubMenuOnClick = {read=FCloseSubMenuOnClick, write=FCloseSubMenuOnClick, default=1};
	__property bool DropDownEnabled = {read=FDropDownEnabled, write=SetDropDownEnabled, default=1};
	__property int GroupIndex = {read=FGroupIndex, write=SetGroupIndex, default=0};
	__property bool Down = {read=FDown, write=SetDown, stored=IsDownStored, default=0};
	__property TdxBarCustomPopupMenu* DropDownMenu = {read=FDropDownMenu, write=SetDropDownMenu};
	__property bool Lowered = {read=FLowered, write=SetLowered, default=0};
	__property bool RepeatClick = {read=FRepeatClick, write=FRepeatClick, default=0};
	__property UnclickAfterDoing = {default=1};
public:
	/* TdxBarItem.Destroy */ inline __fastcall virtual ~TdxBarCustomButton() { }
	
private:
	void *__IdxBarLinksOwner;	// IdxBarLinksOwner 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {1CB4E538-769E-45F4-9BE3-20814F440106}
	operator _di_IdxBarLinksOwner()
	{
		_di_IdxBarLinksOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxBarLinksOwner*(void) { return (IdxBarLinksOwner*)&__IdxBarLinksOwner; }
	#endif
	
};


typedef System::TMetaClass* TdxBarButtonClass;

class PASCALIMPLEMENTATION TdxBarButton : public TdxBarCustomButton
{
	typedef TdxBarCustomButton inherited;
	
__published:
	__property AllowAllUp = {default=0};
	__property ButtonStyle = {default=0};
	__property CloseSubMenuOnClick = {default=1};
	__property DropDownEnabled = {default=1};
	__property GroupIndex = {default=0};
	__property Down = {default=0};
	__property DropDownMenu;
	__property Glyph;
	__property ImageIndex = {default=-1};
	__property LargeGlyph;
	__property LargeImageIndex = {default=-1};
	__property Lowered = {default=0};
	__property PaintStyle = {default=0};
	__property RepeatClick = {default=0};
	__property ShortCut = {default=0};
	__property UnclickAfterDoing = {default=1};
	__property OnClick;
public:
	/* TdxBarCustomButton.Create */ inline __fastcall virtual TdxBarButton(System::Classes::TComponent* AOwner) : TdxBarCustomButton(AOwner) { }
	
public:
	/* TdxBarItem.Destroy */ inline __fastcall virtual ~TdxBarButton() { }
	
};


class PASCALIMPLEMENTATION TdxBarLargeButton : public TdxBarCustomButton
{
	typedef TdxBarCustomButton inherited;
	
private:
	bool FAutoGrayScale;
	int FHeight;
	int FHotImageIndex;
	bool FInSyncImageIndex;
	Dxgdiplusclasses::TdxSmartGlyph* FHotGlyph;
	bool FSyncImageIndex;
	bool FSetImageIndex;
	bool FSetLargeImageIndex;
	bool FSetSyncImageIndex;
	HIDESBASE bool __fastcall IsImageIndexStored();
	bool __fastcall IsLargeImageIndexStored();
	void __fastcall SetAutoGrayScale(bool Value);
	void __fastcall SetHeight(int Value);
	void __fastcall SetHotGlyph(Dxgdiplusclasses::TdxSmartGlyph* Value);
	void __fastcall SetHotImageIndex(int Value);
	void __fastcall SetSyncImageIndex(bool Value);
	void __fastcall OnHotGlyphChanged(System::TObject* Sender);
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall Loaded();
	void __fastcall ReadImageIndex(System::Classes::TReader* Reader);
	void __fastcall WriteImageIndex(System::Classes::TWriter* Writer);
	virtual int __fastcall GetActionImageIndex();
	virtual void __fastcall SetActionImageIndex(int Value);
	virtual bool __fastcall HasAccel(TdxBarItemLink* AItemLink);
	virtual void __fastcall HotGlyphChanged();
	bool __fastcall IsHotImageLinked();
	bool __fastcall IsLargeImageLinked();
	virtual void __fastcall LargeGlyphChanged();
	virtual void __fastcall SetImageIndex(int Value);
	virtual void __fastcall SetLargeImageIndex(int Value);
	virtual bool __fastcall UseHotImages();
	virtual bool __fastcall UseLargeImages();
	virtual void __fastcall WidthChanged();
	virtual TdxBarCustomizationActions __fastcall GetSupportedActions();
	
public:
	__fastcall virtual TdxBarLargeButton(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxBarLargeButton();
	
__published:
	__property AllowAllUp = {default=0};
	__property ButtonStyle = {default=0};
	__property CloseSubMenuOnClick = {default=1};
	__property DropDownEnabled = {default=1};
	__property GroupIndex = {default=0};
	__property Down = {default=0};
	__property DropDownMenu;
	__property Glyph;
	__property LargeGlyph;
	__property Lowered = {default=0};
	__property PaintStyle = {default=0};
	__property RepeatClick = {default=0};
	__property ShortCut = {default=0};
	__property UnclickAfterDoing = {default=1};
	__property OnClick;
	__property bool AutoGrayScale = {read=FAutoGrayScale, write=SetAutoGrayScale, default=1};
	__property GlyphLayout = {default=2};
	__property int Height = {read=FHeight, write=SetHeight, default=0};
	__property Dxgdiplusclasses::TdxSmartGlyph* HotGlyph = {read=FHotGlyph, write=SetHotGlyph};
	__property int HotImageIndex = {read=FHotImageIndex, write=SetHotImageIndex, default=-1};
	__property LargeImageIndex = {stored=IsLargeImageIndexStored, default=-1};
	__property ShowCaption = {default=1};
	__property Width = {default=0};
	__property ImageIndex = {stored=false, default=-1};
	__property bool SyncImageIndex = {read=FSyncImageIndex, write=SetSyncImageIndex, default=1};
};


class PASCALIMPLEMENTATION TdxCustomBarEdit : public TdxBarWindowItem
{
	typedef TdxBarWindowItem inherited;
	
private:
	bool FGlyphLoaded;
	
protected:
	virtual void __fastcall ReadState(System::Classes::TReader* Reader);
	virtual void __fastcall DrawCustomizingImage(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState AState);
	void __fastcall GetEditViewParams(/* out */ Cxgraphics::TcxViewParams &AViewParams);
	__classmethod virtual int __fastcall GetStyleCount();
	virtual bool __fastcall HasAccel(TdxBarItemLink* AItemLink);
	__property Cxstyles::TcxStyle* StyleEdit = {read=GetStyleValue, write=SetStyleValue, index=1};
	
public:
	__fastcall virtual TdxCustomBarEdit(System::Classes::TComponent* AOwner);
	
__published:
	__property Glyph;
	__property ImageIndex = {default=-1};
	__property ShowCaption = {default=0};
	__property Width = {default=100};
	__property OnClick;
public:
	/* TdxBarItem.Destroy */ inline __fastcall virtual ~TdxCustomBarEdit() { }
	
};


class PASCALIMPLEMENTATION TdxBarEdit : public TdxCustomBarEdit
{
	typedef TdxCustomBarEdit inherited;
	
private:
	int FMaxLength;
	bool FReadOnly;
	void __fastcall SetMaxLength(int Value);
	
protected:
	virtual void __fastcall DrawInterior(TdxBarEditControl* ABarEditControl, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &R, TdxBarItemLink* ItemLink);
	
public:
	__property CurText = {default=0};
	
__published:
	__property int MaxLength = {read=FMaxLength, write=SetMaxLength, default=0};
	__property bool ReadOnly = {read=FReadOnly, write=FReadOnly, default=0};
	__property StyleEdit;
	__property Text = {default=0};
public:
	/* TdxCustomBarEdit.Create */ inline __fastcall virtual TdxBarEdit(System::Classes::TComponent* AOwner) : TdxCustomBarEdit(AOwner) { }
	
public:
	/* TdxBarItem.Destroy */ inline __fastcall virtual ~TdxBarEdit() { }
	
};


typedef void __fastcall (__closure *TdxBarCheckKeyForDropDownWindowEvent)(TCustomdxBarCombo* Sender, System::Word Key, System::Classes::TShiftState Shift, bool &AcceptKey);

typedef void __fastcall (__closure *TdxBarGetDropDownWindowEvent)(TCustomdxBarCombo* Sender, HWND &Window);

class PASCALIMPLEMENTATION TCustomdxBarCombo : public TdxBarEdit
{
	typedef TdxBarEdit inherited;
	
private:
	TdxBarCheckKeyForDropDownWindowEvent FOnCheckKeyForDropDownWindow;
	System::Classes::TNotifyEvent FOnCloseUp;
	System::Classes::TNotifyEvent FOnDropDown;
	TdxBarGetDropDownWindowEvent FOnGetDropDownWindow;
	bool __fastcall GetDroppedDown();
	bool __fastcall GetShowEditor();
	void __fastcall SetDroppedDown(bool Value);
	void __fastcall SetShowEditor(bool Value);
	
protected:
	DYNAMIC void __fastcall AfterDropDown();
	virtual void __fastcall CheckDropDownPoint(int &X, int &Y);
	virtual bool __fastcall CheckKeyForDropDownWindow(System::Word Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall CloseUp();
	virtual void __fastcall DrawCustomizingImage(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState AState);
	DYNAMIC void __fastcall DropDown(int X, int Y);
	virtual HWND __fastcall GetDropDownWindow();
	virtual void __fastcall InitDropDownWindow();
	void __fastcall InternalInitDropDownWindow(Vcl::Controls::TWinControl* ADropDownWindow);
	
public:
	__property HWND DropDownWindow = {read=GetDropDownWindow, nodefault};
	__property bool DroppedDown = {read=GetDroppedDown, write=SetDroppedDown, nodefault};
	
__published:
	__property bool ShowEditor = {read=GetShowEditor, write=SetShowEditor, default=1};
	__property TdxBarCheckKeyForDropDownWindowEvent OnCheckKeyForDropDownWindow = {read=FOnCheckKeyForDropDownWindow, write=FOnCheckKeyForDropDownWindow};
	__property System::Classes::TNotifyEvent OnCloseUp = {read=FOnCloseUp, write=FOnCloseUp};
	__property System::Classes::TNotifyEvent OnDropDown = {read=FOnDropDown, write=FOnDropDown};
	__property TdxBarGetDropDownWindowEvent OnGetDropDownWindow = {read=FOnGetDropDownWindow, write=FOnGetDropDownWindow};
public:
	/* TdxCustomBarEdit.Create */ inline __fastcall virtual TCustomdxBarCombo(System::Classes::TComponent* AOwner) : TdxBarEdit(AOwner) { }
	
public:
	/* TdxBarItem.Destroy */ inline __fastcall virtual ~TCustomdxBarCombo() { }
	
};


typedef void __fastcall (__closure *TdxBarDrawItemEvent)(TdxBarCustomCombo* Sender, int AIndex, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState AState);

typedef void __fastcall (__closure *TdxBarMeasureItemEvent)(TdxBarCustomCombo* Sender, int AIndex, int &AHeight);

class PASCALIMPLEMENTATION TdxBarCustomCombo : public TCustomdxBarCombo
{
	typedef TCustomdxBarCombo inherited;
	
private:
	int FDropDownCount;
	int FDropDownWidth;
	bool FInteriorIsDrawing;
	int FItemHeight;
	int FItemIndex;
	System::Classes::TStrings* FItems;
	Vcl::Stdctrls::TCustomListBox* FListBox;
	bool FSorted;
	TdxBarDrawItemEvent FOnDrawItem;
	TdxBarMeasureItemEvent FOnMeasureItem;
	int __fastcall GetCurItemIndex();
	int __fastcall GetItemsHeight(int Index);
	void __fastcall SetCurItemIndex(int Value);
	void __fastcall SetItemIndex(int Value);
	void __fastcall SetItems(System::Classes::TStrings* Value);
	void __fastcall SetSorted(bool Value);
	void __fastcall CheckLocalPos();
	void __fastcall ItemsChanged(System::TObject* Sender);
	void __fastcall ListBoxDrawItem(Vcl::Controls::TWinControl* Control, int Index, const System::Types::TRect &Rect, Winapi::Windows::TOwnerDrawState State);
	void __fastcall ListBoxMeasureItem(Vcl::Controls::TWinControl* Control, int Index, int &Height);
	
protected:
	Vcl::Graphics::TCanvas* FCanvas;
	DYNAMIC void __fastcall AfterDropDown();
	virtual bool __fastcall CheckKeyForDropDownWindow(System::Word Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall CloseUp();
	DYNAMIC void __fastcall CurChange();
	virtual void __fastcall DrawInterior(TdxBarEditControl* ABarEditControl, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &R, TdxBarItemLink* ItemLink);
	DYNAMIC void __fastcall DropDown(int X, int Y);
	virtual HWND __fastcall GetDropDownWindow();
	virtual void __fastcall InitDropDownWindow();
	virtual void __fastcall SetText(System::UnicodeString Value);
	virtual void __fastcall DrawItem(TdxBarPainter* APainter, int AIndex, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState AState);
	virtual Vcl::Graphics::TCanvas* __fastcall GetCanvas();
	virtual int __fastcall GetDropDownWidth();
	int __fastcall GetNearestItemIndex(System::UnicodeString AText);
	int __fastcall FindItemIndex(const System::UnicodeString AText);
	virtual void __fastcall MeasureItem(int AIndex, int &AHeight);
	virtual void __fastcall MeasureItemWidth(int AIndex, int &AWidth);
	__property Vcl::Stdctrls::TCustomListBox* ListBox = {read=FListBox};
	
public:
	__fastcall virtual TdxBarCustomCombo(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxBarCustomCombo();
	__property Vcl::Graphics::TCanvas* Canvas = {read=GetCanvas};
	__property int CurItemIndex = {read=GetCurItemIndex, write=SetCurItemIndex, nodefault};
	__property int ItemHeight = {read=FItemHeight, write=FItemHeight, default=0};
	__property System::Classes::TStrings* Items = {read=FItems, write=SetItems};
	__property int ItemsHeight[int Index] = {read=GetItemsHeight};
	__property bool Sorted = {read=FSorted, write=SetSorted, default=0};
	__property int ItemIndex = {read=FItemIndex, write=SetItemIndex, nodefault};
	
__published:
	__property int DropDownCount = {read=FDropDownCount, write=FDropDownCount, default=8};
	__property int DropDownWidth = {read=FDropDownWidth, write=FDropDownWidth, default=0};
	__property TdxBarDrawItemEvent OnDrawItem = {read=FOnDrawItem, write=FOnDrawItem};
	__property TdxBarMeasureItemEvent OnMeasureItem = {read=FOnMeasureItem, write=FOnMeasureItem};
};


class PASCALIMPLEMENTATION TdxBarCombo : public TdxBarCustomCombo
{
	typedef TdxBarCustomCombo inherited;
	
__published:
	__property ItemHeight = {default=0};
	__property Items;
	__property Sorted = {default=0};
	__property ItemIndex;
public:
	/* TdxBarCustomCombo.Create */ inline __fastcall virtual TdxBarCombo(System::Classes::TComponent* AOwner) : TdxBarCustomCombo(AOwner) { }
	/* TdxBarCustomCombo.Destroy */ inline __fastcall virtual ~TdxBarCombo() { }
	
};


class PASCALIMPLEMENTATION TCustomdxBarSubItem : public TdxBarButtonLikeItem
{
	typedef TdxBarButtonLikeItem inherited;
	
private:
	int FBarSize;
	bool FDetachable;
	TdxBar* FDetachingBar;
	bool FIsInternal;
	TdxBarItemLinks* FItemLinks;
	System::Classes::TNotifyEvent FOnCloseUp;
	System::Classes::TNotifyEvent FOnDetaching;
	TdxBarPaintSubMenuBarEvent FOnPaintBar;
	System::Classes::TNotifyEvent FOnPopup;
	int __fastcall GetDetachingBarIndex();
	TdxBarItemOptions* __fastcall GetItemOptions();
	void __fastcall SetBarSize(int Value);
	void __fastcall SetDetachingBar(int Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* AImages);
	void __fastcall SetIsInternal(bool Value);
	void __fastcall SetItemLinks(TdxBarItemLinks* Value);
	void __fastcall SetItemOptions(TdxBarItemOptions* Value);
	
protected:
	virtual bool __fastcall CanClicked();
	virtual void __fastcall ChangeScale(int M, int D);
	DYNAMIC void __fastcall DoDetaching();
	virtual TdxBarItemLinksClass __fastcall GetItemLinksClass();
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall SetBarManager(TdxBarManager* Value);
	virtual System::UnicodeString __fastcall GetIniSection(const System::UnicodeString ABaseSection);
	virtual void __fastcall LoadFromIni(System::Inifiles::TCustomIniFile* ASource, const System::UnicodeString ABaseSection, TdxBarStoringKind AStoringKind);
	virtual void __fastcall SaveToIni(System::Inifiles::TCustomIniFile* ADestination, const System::UnicodeString ABaseSection, TdxBarStoringKind AStoringKind);
	bool __fastcall CanContainItem(TdxBarItem* AItem, /* out */ System::UnicodeString &AErrorText);
	virtual TCustomdxBarControl* __fastcall CreateBarControl();
	virtual TdxBarItemLinks* __fastcall GetItemLinks();
	Vcl::Imglist::TCustomImageList* __fastcall GetImages();
	HIDESBASE bool __fastcall IsLoading();
	virtual TdxBarCustomizationActions __fastcall GetSupportedActions();
	int __fastcall GetBarSize();
	virtual void __fastcall DoPaintBar(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R);
	DYNAMIC void __fastcall DoPopup();
	DYNAMIC void __fastcall DoCloseUp();
	__property Vcl::Imglist::TCustomImageList* Images = {read=GetImages, write=SetImages};
	__property bool IsInternal = {read=FIsInternal, write=SetIsInternal, nodefault};
	__property TdxBarItemOptions* ItemOptions = {read=GetItemOptions, write=SetItemOptions};
	__property System::Classes::TNotifyEvent OnCloseUp = {read=FOnCloseUp, write=FOnCloseUp};
	__property System::Classes::TNotifyEvent OnPopup = {read=FOnPopup, write=FOnPopup};
	
public:
	__fastcall virtual TCustomdxBarSubItem(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomdxBarSubItem();
	TdxBar* __fastcall GetDetachingBar();
	void __fastcall DropDown(bool AByMouse = false);
	__property int BarSize = {read=GetBarSize, write=SetBarSize, default=0};
	__property bool Detachable = {read=FDetachable, write=FDetachable, default=0};
	__property int DetachingBar = {read=GetDetachingBarIndex, write=SetDetachingBar, default=-1};
	__property TdxBarItemLinks* ItemLinks = {read=GetItemLinks, write=SetItemLinks};
	__property System::Classes::TNotifyEvent OnDetaching = {read=FOnDetaching, write=FOnDetaching};
	__property TdxBarPaintSubMenuBarEvent OnPaintBar = {read=FOnPaintBar, write=FOnPaintBar};
private:
	void *__IdxBarSubMenuOwner;	// IdxBarSubMenuOwner 
	void *__IdxBarLinksOwner;	// IdxBarLinksOwner 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {218A3250-D279-44EA-9E87-3D5443B3C0ED}
	operator _di_IdxBarSubMenuOwner()
	{
		_di_IdxBarSubMenuOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxBarSubMenuOwner*(void) { return (IdxBarSubMenuOwner*)&__IdxBarSubMenuOwner; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {1CB4E538-769E-45F4-9BE3-20814F440106}
	operator _di_IdxBarLinksOwner()
	{
		_di_IdxBarLinksOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxBarLinksOwner*(void) { return (IdxBarLinksOwner*)&__IdxBarLinksOwner; }
	#endif
	
};


class PASCALIMPLEMENTATION TdxBarSubItem : public TCustomdxBarSubItem
{
	typedef TCustomdxBarSubItem inherited;
	
private:
	bool FAllowCustomizing;
	
protected:
	__classmethod virtual System::UnicodeString __fastcall GetNewCaption();
	virtual bool __fastcall InternalCanMergeWith(TdxBarItem* AItem);
	
public:
	__fastcall virtual TdxBarSubItem(System::Classes::TComponent* AOwner);
	
__published:
	__property BarSize = {default=0};
	__property Detachable = {default=0};
	__property DetachingBar = {default=-1};
	__property Glyph;
	__property ImageIndex = {default=-1};
	__property LargeGlyph;
	__property LargeImageIndex = {default=-1};
	__property ShowCaption = {default=1};
	__property OnClick;
	__property OnDetaching;
	__property OnPaintBar;
	__property bool AllowCustomizing = {read=FAllowCustomizing, write=FAllowCustomizing, default=1};
	__property Images;
	__property ItemLinks;
	__property ItemOptions;
	__property OnCloseUp;
	__property OnPopup;
public:
	/* TCustomdxBarSubItem.Destroy */ inline __fastcall virtual ~TdxBarSubItem() { }
	
};


class PASCALIMPLEMENTATION TCustomdxBarContainerItem : public TCustomdxBarSubItem
{
	typedef TCustomdxBarSubItem inherited;
	
private:
	bool FIsListPopulation;
	bool FNeedClearItemList;
	System::Classes::TNotifyEvent FOnGetData;
	int FItemsPopulationCount;
	
protected:
	virtual bool __fastcall InternalActuallyVisible();
	virtual TdxBarItemLink* __fastcall AddListedItemLink(TdxBarItemLinks* AItemLinks, System::TObject* ALinkData, int AIndex, TdxBarItem* AItem);
	void __fastcall AddListedItemLinks(TdxBarItemLinks* AItemLinks, System::TObject* ALinkData, int AIndex);
	virtual void __fastcall DeleteListedItemLinks(System::TObject* ALinkData);
	virtual void __fastcall ClearItemList();
	virtual bool __fastcall HideWhenRun();
	void __fastcall NeedClearItemList();
	virtual void __fastcall PopulateListedItemLinks(TdxBarItemLinks* AItemLinks, System::TObject* ALinkData, int AIndex);
	virtual void __fastcall PrepareListedItemLinks();
	virtual bool __fastcall AllowProcessItemsChanged(System::TObject* AItemLinks);
	void __fastcall ItemsChanged(System::TObject* AItemLinks);
	
__published:
	__property BarSize = {default=0};
	__property Detachable = {default=0};
	__property DetachingBar = {default=-1};
	__property Glyph;
	__property ImageIndex = {default=-1};
	__property LargeGlyph;
	__property LargeImageIndex = {default=-1};
	__property ShowCaption = {default=1};
	__property OnClick;
	__property OnDetaching;
	__property OnPaintBar;
	__property System::Classes::TNotifyEvent OnGetData = {read=FOnGetData, write=FOnGetData};
public:
	/* TCustomdxBarSubItem.Create */ inline __fastcall virtual TCustomdxBarContainerItem(System::Classes::TComponent* AOwner) : TCustomdxBarSubItem(AOwner) { }
	/* TCustomdxBarSubItem.Destroy */ inline __fastcall virtual ~TCustomdxBarContainerItem() { }
	
};


class PASCALIMPLEMENTATION TdxBarListItem : public TCustomdxBarContainerItem
{
	typedef TCustomdxBarContainerItem inherited;
	
private:
	int FItemIndex;
	System::Contnrs::TObjectList* FItemList;
	System::Classes::TStrings* FItems;
	bool FShowCheck;
	bool FShowNumbers;
	int __fastcall GetDataIndex();
	System::Classes::TList* __fastcall GetItemList();
	void __fastcall SetDataIndex(int Value);
	void __fastcall SetItems(System::Classes::TStrings* Value);
	void __fastcall ClickItem(System::TObject* Sender);
	
protected:
	virtual void __fastcall ClearItemList();
	virtual TdxBarButton* __fastcall CreateItem(int AIndex, int ACurIndex);
	virtual System::UnicodeString __fastcall GetDisplayHint(const System::UnicodeString AText);
	virtual System::UnicodeString __fastcall GetDisplayNumber(int AIndex);
	virtual System::UnicodeString __fastcall GetDisplayText(int AItemIndex)/* overload */;
	virtual System::UnicodeString __fastcall GetDisplayText(const System::UnicodeString AText)/* overload */;
	virtual TdxBarButtonClass __fastcall GetItemClass();
	virtual bool __fastcall InternalActuallyVisible();
	virtual void __fastcall PopulateListedItemLinks(TdxBarItemLinks* AItemLinks, System::TObject* ALinkData, int AIndex);
	
public:
	__fastcall virtual TdxBarListItem(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxBarListItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	DYNAMIC void __fastcall DirectClick();
	__property System::Classes::TList* ItemList = {read=GetItemList};
	
__published:
	__property int DataIndex = {read=GetDataIndex, write=SetDataIndex, stored=false, nodefault};
	__property int ItemIndex = {read=FItemIndex, write=FItemIndex, default=-1};
	__property System::Classes::TStrings* Items = {read=FItems, write=SetItems};
	__property LargeGlyph;
	__property LargeImageIndex = {default=-1};
	__property bool ShowCheck = {read=FShowCheck, write=FShowCheck, default=0};
	__property bool ShowNumbers = {read=FShowNumbers, write=FShowNumbers, default=1};
};


class PASCALIMPLEMENTATION TdxBarContainerItem : public TCustomdxBarContainerItem
{
	typedef TCustomdxBarContainerItem inherited;
	
protected:
	virtual bool __fastcall InternalActuallyVisible();
	virtual bool __fastcall InternalCanMergeWith(TdxBarItem* AItem);
	virtual bool __fastcall AllowProcessItemsChanged(System::TObject* AItemLinks);
	virtual bool __fastcall IsItemsExist();
	virtual void __fastcall PopulateListedItemLinks(TdxBarItemLinks* AItemLinks, System::TObject* ALinkData, int AIndex);
	
public:
	__fastcall virtual TdxBarContainerItem(System::Classes::TComponent* AOwner);
	
__published:
	__property ItemLinks;
public:
	/* TCustomdxBarSubItem.Destroy */ inline __fastcall virtual ~TdxBarContainerItem() { }
	
};


class PASCALIMPLEMENTATION TdxBarSubMenuBackButton : public TdxBarButton
{
	typedef TdxBarButton inherited;
	
public:
	__fastcall virtual TdxBarSubMenuBackButton(System::Classes::TComponent* AOwner);
public:
	/* TdxBarItem.Destroy */ inline __fastcall virtual ~TdxBarSubMenuBackButton() { }
	
};


struct DECLSPEC_DRECORD TdxBarSavedFont
{
public:
	tagLOGFONTW LogFont;
	bool Saved;
};


typedef System::TMetaClass* TdxBarItemControlDrawParamsClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarItemControlDrawParams : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TdxBarItemControl* FBarItemControl;
	TdxBarItemControlViewSize FViewSize;
	bool __fastcall GetUseRightToLeftAlignment();
	void __fastcall SetViewSize(TdxBarItemControlViewSize Value);
	
protected:
	System::Types::TRect FCaptionRect;
	virtual Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	
public:
	bool CanSelect;
	Cxgraphics::TcxCanvas* Canvas;
	System::UnicodeString Caption;
	System::Types::TSize DefaultButtonSize;
	System::UnicodeString Description;
	bool DrawSelected;
	bool DroppedDown;
	bool Enabled;
	int HotPartIndex;
	bool IsCustomizing;
	bool IsDropDown;
	bool IsPressed;
	TdxBarPaintType PaintType;
	bool SelectedByKey;
	System::UnicodeString ShortCut;
	TdxBarItemControlViewStructure ViewStructure;
	__fastcall TdxBarItemControlDrawParams(TdxBarItemControl* ABarItemControl);
	bool __fastcall HasIcon();
	virtual void __fastcall ResetCachedValues();
	__property TdxBarItemControl* BarItemControl = {read=FBarItemControl};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=GetScaleFactor};
	__property bool UseRightToLeftAlignment = {read=GetUseRightToLeftAlignment, nodefault};
	__property TdxBarItemControlViewSize ViewSize = {read=FViewSize, write=SetViewSize, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarItemControlDrawParams() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarButtonLikeControlDrawParams : public TdxBarItemControlDrawParams
{
	typedef TdxBarItemControlDrawParams inherited;
	
public:
	System::Types::TSize ArrowSize;
	TdxBarButtonGroupRealPosition ButtonGroup;
	System::Types::TRect ContentOffset;
	bool Downed;
	bool DrawDowned;
	bool DropDownEnabled;
	bool DroppedDownFlat;
	bool GrayScale;
	bool IsFlatText;
	bool IsLowered;
	bool IsMenuItem;
	bool IsTextSelected;
	bool SplitDropDown;
public:
	/* TdxBarItemControlDrawParams.Create */ inline __fastcall TdxBarButtonLikeControlDrawParams(TdxBarItemControl* ABarItemControl) : TdxBarItemControlDrawParams(ABarItemControl) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarButtonLikeControlDrawParams() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarExtraMenuButtonControlDrawParams : public TdxBarButtonLikeControlDrawParams
{
	typedef TdxBarButtonLikeControlDrawParams inherited;
	
public:
	bool Pin;
public:
	/* TdxBarItemControlDrawParams.Create */ inline __fastcall TdxBarExtraMenuButtonControlDrawParams(TdxBarItemControl* ABarItemControl) : TdxBarButtonLikeControlDrawParams(ABarItemControl) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarExtraMenuButtonControlDrawParams() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarApplicationMenuButtonControlDrawParams : public TdxBarButtonLikeControlDrawParams
{
	typedef TdxBarButtonLikeControlDrawParams inherited;
	
public:
	int ContentWidth;
public:
	/* TdxBarItemControlDrawParams.Create */ inline __fastcall TdxBarApplicationMenuButtonControlDrawParams(TdxBarItemControl* ABarItemControl) : TdxBarButtonLikeControlDrawParams(ABarItemControl) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarApplicationMenuButtonControlDrawParams() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarEditLikeControlDrawParams : public TdxBarItemControlDrawParams
{
	typedef TdxBarItemControlDrawParams inherited;
	
private:
	TdxBarEditControl* __fastcall GetBarEditControl();
	
public:
	bool Focused;
	bool IsTransparent;
	TdxBarItemViewLayout ViewLayout;
	__property TdxBarEditControl* BarEditControl = {read=GetBarEditControl};
public:
	/* TdxBarItemControlDrawParams.Create */ inline __fastcall TdxBarEditLikeControlDrawParams(TdxBarItemControl* ABarItemControl) : TdxBarItemControlDrawParams(ABarItemControl) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarEditLikeControlDrawParams() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarStaticLikeControlDrawParams : public TdxBarItemControlDrawParams
{
	typedef TdxBarItemControlDrawParams inherited;
	
private:
	TdxBarCustomStaticControl* __fastcall GetBarStaticControl();
	
public:
	System::Classes::TAlignment Alignment;
	bool AllowCenter;
	System::Types::TRect BorderOffsets;
	TdxBarStaticBorderStyle BorderStyle;
	__property TdxBarCustomStaticControl* BarStaticControl = {read=GetBarStaticControl};
public:
	/* TdxBarItemControlDrawParams.Create */ inline __fastcall TdxBarStaticLikeControlDrawParams(TdxBarItemControl* ABarItemControl) : TdxBarItemControlDrawParams(ABarItemControl) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarStaticLikeControlDrawParams() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarSeparatorControlDrawParams : public TdxBarStaticLikeControlDrawParams
{
	typedef TdxBarStaticLikeControlDrawParams inherited;
	
public:
	bool IsTop;
public:
	/* TdxBarItemControlDrawParams.Create */ inline __fastcall TdxBarSeparatorControlDrawParams(TdxBarItemControl* ABarItemControl) : TdxBarStaticLikeControlDrawParams(ABarItemControl) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarSeparatorControlDrawParams() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarColorComboControlDrawParams : public TdxBarEditLikeControlDrawParams
{
	typedef TdxBarEditLikeControlDrawParams inherited;
	
public:
	bool IsShowCustomColorButton;
public:
	/* TdxBarItemControlDrawParams.Create */ inline __fastcall TdxBarColorComboControlDrawParams(TdxBarItemControl* ABarItemControl) : TdxBarEditLikeControlDrawParams(ABarItemControl) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarColorComboControlDrawParams() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarSpinEditDrawParams : public TdxBarEditLikeControlDrawParams
{
	typedef TdxBarEditLikeControlDrawParams inherited;
	
public:
	System::Types::TSize ArrowSize;
	int ActiveButtonIndex;
public:
	/* TdxBarItemControlDrawParams.Create */ inline __fastcall TdxBarSpinEditDrawParams(TdxBarItemControl* ABarItemControl) : TdxBarEditLikeControlDrawParams(ABarItemControl) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarSpinEditDrawParams() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarProgressControlDrawParams : public TdxBarStaticLikeControlDrawParams
{
	typedef TdxBarStaticLikeControlDrawParams inherited;
	
public:
	bool Smooth;
	int Position;
	int Min;
	int Max;
public:
	/* TdxBarItemControlDrawParams.Create */ inline __fastcall TdxBarProgressControlDrawParams(TdxBarItemControl* ABarItemControl) : TdxBarStaticLikeControlDrawParams(ABarItemControl) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarProgressControlDrawParams() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarInPlaceSubItemControlDrawParams : public TdxBarButtonLikeControlDrawParams
{
	typedef TdxBarButtonLikeControlDrawParams inherited;
	
public:
	bool IsExpanded;
public:
	/* TdxBarItemControlDrawParams.Create */ inline __fastcall TdxBarInPlaceSubItemControlDrawParams(TdxBarItemControl* ABarItemControl) : TdxBarButtonLikeControlDrawParams(ABarItemControl) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarInPlaceSubItemControlDrawParams() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TdxBarItemControlViewInfoClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarItemControlViewInfo : public Dxcoreclasses::TcxInterfacedPersistent
{
	typedef Dxcoreclasses::TcxInterfacedPersistent inherited;
	
private:
	TdxBarItemViewLevels FAllowedViewLevels;
	System::Types::TRect FBounds;
	int FColumnRowCount;
	System::Types::TRect FImageBounds;
	TdxBarItemViewLevel FMinPossibleViewLevel;
	TdxBarButtonGroupRealPosition FRealPositionInButtonGroup;
	int FRow;
	TdxBarItemViewLevel FViewLevel;
	TdxBarItemViewLevel FViewLevelForButtonGroup;
	System::StaticArray<TdxBarItemCachedWidthInfo, 5> FViewLevelInfos;
	
protected:
	TdxBarItemControl* FControl;
	void __fastcall CalculateFinalize();
	TdxBarItemAlign __fastcall GetAlign();
	TdxBarItemViewLevels __fastcall GetAllowedViewLevels();
	System::Types::TRect __fastcall GetBounds();
	int __fastcall GetColumnRowCount();
	bool __fastcall GetDistributed();
	TdxBarItemPosition __fastcall GetPosition();
	TdxBarButtonGroupPosition __fastcall GetPositionInButtonGroup();
	TdxBarButtonGroupRealPosition __fastcall GetRealPositionInButtonGroup();
	int __fastcall GetRow();
	TdxBarItemViewLevel __fastcall GetViewLevel();
	TdxBarItemRealViewLevel __fastcall GetViewLevelForButtonGroup();
	int __fastcall GetWidth(TdxBarItemRealViewLevel AViewLevel);
	bool __fastcall HasSeparator();
	bool __fastcall IsPrimaryForDistribution();
	bool __fastcall IsMultiColumnItemControl(bool ACheckCollapsed, /* out */ _di_IdxBarMultiColumnItemControlViewInfo &AIMultiColumnItemControlViewInfo);
	void __fastcall SetBounds(const System::Types::TRect &Value);
	void __fastcall SetColumnRowCount(int Value);
	void __fastcall SetDistributed(bool Value);
	void __fastcall SetRealPositionInButtonGroup(TdxBarButtonGroupRealPosition Value);
	void __fastcall SetRow(int Value);
	void __fastcall SetViewLevel(TdxBarItemViewLevel Value);
	virtual void __fastcall BoundsCalculated();
	
public:
	__fastcall virtual TdxBarItemControlViewInfo(TdxBarItemControl* AControl);
	__fastcall virtual ~TdxBarItemControlViewInfo();
	virtual void __fastcall ResetCachedValues();
	__property System::Types::TRect Bounds = {read=GetBounds};
	__property TdxBarItemControl* Control = {read=FControl};
	__property System::Types::TRect ImageBounds = {read=FImageBounds, write=FImageBounds};
	__property TdxBarItemRealViewLevel MinPossibleViewLevel = {read=FMinPossibleViewLevel, nodefault};
	__property TdxBarButtonGroupRealPosition RealPositionInButtonGroup = {read=FRealPositionInButtonGroup, nodefault};
	__property TdxBarItemViewLevel ViewLevel = {read=GetViewLevel, nodefault};
private:
	void *__IdxBarItemControlViewInfo;	// IdxBarItemControlViewInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {99C4A703-E6D2-43AF-987E-F5DA81718295}
	operator _di_IdxBarItemControlViewInfo()
	{
		_di_IdxBarItemControlViewInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxBarItemControlViewInfo*(void) { return (IdxBarItemControlViewInfo*)&__IdxBarItemControlViewInfo; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarCachedImage : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Dxgdiplusclasses::TdxGPImage* FCachedImage;
	Cxgraphics::TdxDrawImageCacheID FCachedImageID;
	
public:
	__fastcall TdxBarCachedImage();
	__fastcall virtual ~TdxBarCachedImage();
	void __fastcall Draw(HDC DC, const System::Types::TRect &ARect);
	void __fastcall Reset();
	void __fastcall Update(const System::Types::TRect &ARect, Vcl::Graphics::TGraphic* AGlyph, Vcl::Imglist::TCustomImageList* AImages, int AImageIndex, Cxcustomcanvas::TcxImageDrawMode ADrawMode, System::Uitypes::TColor ATransparentColor, bool ASmoothImage, bool AUseLeftBottomPixelAsTransparent, Dxcoregraphics::_di_IdxColorPalette AColorPalette = Dxcoregraphics::_di_IdxColorPalette(), HBRUSH ABrushHandle = (HBRUSH)(0x0));
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarItemControl : public Dxcoreclasses::TcxIUnknownObject
{
	typedef Dxcoreclasses::TcxIUnknownObject inherited;
	
	
private:
	typedef System::DynamicArray<System::Types::TRect> _TdxBarItemControl__1;
	
	
private:
	Cxgraphics::TcxCanvas* FActiveCanvas;
	HBRUSH FBkBrush;
	bool FBreakingRow;
	bool FChangeRecentGroup;
	_di_IdxBarAccessibilityHelper FIAccessibilityHelper;
	bool FIsActive;
	bool FIsDestroying;
	bool FIsRightToLeftConverted;
	TdxBarItemLink* FItemLink;
	bool FLastInRow;
	bool FNonRecent;
	TCustomdxBarControl* FParent;
	bool FPressed;
	Cxgeometry::TdxScaleFactor* FScaleFactor;
	int FTextSize;
	TdxBarCachedImage* FGlyphCache;
	Dxcore::TdxDefaultBoolean FIconAssigned;
	TdxBarItemControlViewSize FIconAssignedViewSize;
	int __fastcall FindPartAtPos(const System::Types::TPoint &APoint);
	TdxBarItemAlign __fastcall GetAlign();
	TdxBarManager* __fastcall GetBarManager();
	HBRUSH __fastcall GetBkBrush();
	Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	bool __fastcall GetFlat();
	_di_IdxBarAccessibilityHelper __fastcall GetIAccessibilityHelper();
	bool __fastcall GetIsFadingAvailable();
	bool __fastcall GetIsSelected();
	TdxBarItem* __fastcall GetItem();
	TdxBarManager* __fastcall GetItemBarManager();
	System::Types::TRect __fastcall GetItemBounds();
	TdxBarPainterClass __fastcall GetPainterClass();
	bool __fastcall GetShowDescription();
	TdxBarSubMenuControl* __fastcall GetSubMenuParent();
	bool __fastcall GetUnclickAfterDoing();
	TdxBarItemViewLevels __fastcall InternalGetPossibleViewLevels();
	void __fastcall SetHotPartIndex(int AValue);
	void __fastcall SetPressed(bool Value);
	int __fastcall GetRealHeight();
	int __fastcall GetRealWidth();
	System::Types::TSize __fastcall GetRealSize()/* overload */;
	void __fastcall GetRealSize(System::PInteger AWidth, System::PInteger AHeight)/* overload */;
	
protected:
	TdxBarItemControlDrawParams* FDrawParams;
	int FHotPartIndex;
	_TdxBarItemControl__1 FParts;
	TdxBarItemControlViewInfo* FViewInfo;
	bool FSelectedByMouse;
	virtual bool __fastcall CanFade();
	virtual void __fastcall DrawFadeImage();
	virtual void __fastcall GetFadingImages(/* out */ Cxgraphics::TcxBitmap* &AFadeOutImage, /* out */ Cxgraphics::TcxBitmap* &AFadeInImage);
	Dxfading::TdxFadingOptions* __fastcall GetFadingOptions();
	Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	virtual bool __fastcall DoHint(bool &ANeedDeactivate, /* out */ System::UnicodeString &AHintText, /* out */ System::UnicodeString &AShortCut);
	virtual TdxBarCustomHintViewInfo* __fastcall CreateHintViewInfo(const System::UnicodeString AHintText, const System::UnicodeString AShortCut);
	virtual bool __fastcall GetEnabled();
	virtual System::Types::TPoint __fastcall GetHintPosition(const System::Types::TPoint &ACursorPos, int AHeight);
	Vcl::Controls::TControl* __fastcall GetHintedControl();
	virtual bool __fastcall IsCustomHintSupported();
	System::Classes::TBasicAction* __fastcall GetAction();
	Dxscreentip::TdxScreenTip* __fastcall GetScreenTip();
	System::UnicodeString __fastcall GetShortCutAsString();
	virtual bool __fastcall FadingDrawSelected();
	virtual Dxfading::TdxFader* __fastcall GetFader();
	virtual void __fastcall BeginGroupChanged();
	virtual void __fastcall CaptionChanged();
	virtual void __fastcall EnabledChanged();
	virtual void __fastcall GlyphChanged();
	virtual void __fastcall HotGlyphChanged();
	virtual void __fastcall HotPartChanged();
	virtual void __fastcall LargeGlyphChanged();
	virtual void __fastcall PaintStyleChanged();
	virtual void __fastcall ParentVisibleChange(bool AIsShowing);
	virtual void __fastcall PartsChanged();
	virtual void __fastcall PressedChanged();
	virtual void __fastcall RealVisibleChanging(bool AVisible);
	virtual void __fastcall ResetCachedValues(bool AFull);
	virtual void __fastcall VisibleChanged();
	virtual void __fastcall WidthChanged();
	bool __fastcall UseLargeIcons();
	bool __fastcall UseLargeImageSource(TdxBarItemControlViewSize AViewSize);
	virtual void __fastcall BeforeDestroyParentHandle();
	virtual bool __fastcall CanBePartOfButtonGroup();
	virtual bool __fastcall CanClicked();
	virtual bool __fastcall CanCustomize();
	virtual bool __fastcall CanDeselect(TdxBarManager* ABarManager);
	virtual bool __fastcall CanHide();
	virtual bool __fastcall CanMouseSelect();
	virtual bool __fastcall CanSelect();
	bool __fastcall CanShowShortCut();
	bool __fastcall CanVisuallyPressed();
	virtual void __fastcall CheckHotTrack(const System::Types::TPoint &APoint);
	virtual void __fastcall AcceleratorClick();
	virtual void __fastcall Click(bool AByMouse, System::WideChar AKey = (System::WideChar)(0x0));
	virtual void __fastcall ControlActivate(bool AImmediately, bool AByMouse);
	virtual void __fastcall ControlInactivate(bool Immediately);
	virtual void __fastcall ControlClick(bool AByMouse, System::WideChar AKey = (System::WideChar)(0x0));
	virtual void __fastcall ControlUnclick(bool AByMouse);
	virtual void __fastcall ControlGetFocus(bool AIsSelected, bool &AProcessed);
	DYNAMIC void __fastcall DblClick();
	virtual bool __fastcall DrawSelected();
	System::Classes::TPersistent* __fastcall GetSelectableObject();
	virtual bool __fastcall ShowCustomPopupMenu();
	DYNAMIC bool __fastcall WantsDblClick();
	virtual System::Uitypes::TCursor __fastcall GetCurrentCursor(const System::Types::TPoint &AMousePos);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseEnter(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseLeave();
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual bool __fastcall WantsKey(System::Word Key);
	virtual TdxBarAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	virtual TdxBarItemViewLevels __fastcall GetPossibleViewLevels();
	TdxBarItemViewLevels __fastcall GetViewLevels();
	virtual TdxBarItemControlViewStructure __fastcall GetViewStructure();
	virtual TdxBarItemControlViewStructure __fastcall GetDefaultViewStructure();
	virtual TdxBarItemControlViewSize __fastcall GetViewSize();
	virtual TdxBarItemControlViewSize __fastcall GetDefaultViewSize();
	virtual TdxBarPaintType __fastcall GetPaintType();
	virtual int __fastcall GetPartCount();
	virtual TdxBarItemControlViewInfoClass __fastcall GetViewInfoClass();
	virtual bool __fastcall GrayScale();
	bool __fastcall IconAssigned()/* overload */;
	bool __fastcall IconAssigned(TdxBarItemControlViewSize AViewSize)/* overload */;
	void __fastcall FrameAndFillRect(HDC DC, System::Types::TRect &R, bool Enabled, bool Selected, bool Pressed);
	virtual System::UnicodeString __fastcall GetCaption();
	virtual Vcl::Controls::TControl* __fastcall GetControl();
	virtual void __fastcall GetDefaultTextColors(bool AEnabled, bool ASelected, bool AFlat, System::Uitypes::TColor &AColor1, System::Uitypes::TColor &AColor2);
	virtual TdxBarItemControlDrawParamsClass __fastcall GetDrawParamsClass();
	virtual bool __fastcall GetFocused();
	virtual System::UnicodeString __fastcall GetHint();
	virtual void __fastcall GetHintParams(/* out */ System::UnicodeString &AHintText, /* out */ System::UnicodeString &AShortCut);
	virtual TdxBarMenuItemSize __fastcall GetMenuItemSize();
	TdxBarPainter* __fastcall GetPainter();
	virtual System::Classes::TShortCut __fastcall GetShortCut();
	virtual int __fastcall GetTextAreaOffset();
	virtual void __fastcall GetTextColors(bool AEnabled, bool ASelected, bool AFlat, System::Uitypes::TColor &AColor1, System::Uitypes::TColor &AColor2);
	virtual void __fastcall SetFocused(bool AValue);
	virtual Dxgdiplusclasses::TdxSmartGlyph* __fastcall GetGlyph();
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetHotImages();
	virtual int __fastcall GetImageIndex();
	Vcl::Imglist::TCustomImageList* __fastcall GetImages(bool AEnabled, Dxcore::TdxDefaultBoolean &ADrawImageEnabled);
	virtual Dxgdiplusclasses::TdxSmartGlyph* __fastcall GetLargeGlyph();
	virtual int __fastcall GetLargeImageIndex();
	Vcl::Imglist::TCustomImageList* __fastcall GetLargeImages(bool AEnabled, Dxcore::TdxDefaultBoolean &ADrawImageEnabled);
	virtual void __fastcall CalcDrawParams(bool AFull = true);
	virtual void __fastcall CalcParts();
	virtual void __fastcall CalcDrawingConsts();
	virtual void __fastcall DoCalcDrawingConsts();
	virtual void __fastcall DoPaint(const System::Types::TRect &ARect, TdxBarPaintType PaintType);
	virtual bool __fastcall IsTransparentOnGlass();
	void __fastcall CheckDrawParams();
	virtual void __fastcall PrepareCanvasFont(HFONT ABaseFont, Cxstyles::TcxStyle* AStyle, /* out */ TdxBarSavedFont &ASavedFont);
	virtual void __fastcall RestoreCanvasFont(const TdxBarSavedFont &ASavedFont);
	virtual TCustomdxBarControl* __fastcall GetOwnedBarControl();
	virtual System::Types::TRect __fastcall GetNonBufferedRect();
	virtual int __fastcall GetCaptionWidth();
	virtual bool __fastcall GetCurrentImage(TdxBarItemControlViewSize AViewSize, bool ASelected, /* out */ Dxgdiplusclasses::TdxSmartGlyph* &AGlyph, /* out */ Vcl::Imglist::TCustomImageList* &AImages, /* out */ int &AImageIndex, /* out */ Dxcore::TdxDefaultBoolean &ADrawImageEnabled);
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetCurrentImages(bool AEnabled, bool AUseLargeImages, Dxcore::TdxDefaultBoolean &ADrawImageEnabled);
	System::Types::TSize __fastcall GetDefaultGlyphSize(TdxBarItemControlViewSize AViewSize);
	System::Types::TSize __fastcall GetGlyphSize(TdxBarItemControlViewSize AViewSize, bool ASelected = false)/* overload */;
	System::Types::TSize __fastcall GetGlyphSize(TdxBarItemControlViewSize AViewSize, Dxgdiplusclasses::TdxSmartGlyph* AGlyph, Vcl::Imglist::TCustomImageList* AImages, int AImageIndex)/* overload */;
	virtual System::Types::TRect __fastcall GetIndents(TdxBarItemControlPart ADrawAreaType);
	int __fastcall GetRotationDependentHeight(const System::Types::TSize &ASourceSize);
	int __fastcall GetRotationDependentWidth(const System::Types::TSize &ASourceSize);
	System::Types::TSize __fastcall GetTextExtent(const System::UnicodeString AText);
	int __fastcall GetTextHeight();
	int __fastcall GetTextSize();
	int __fastcall GetTextWidth(const System::UnicodeString AText);
	virtual int __fastcall GetCaptionAreaWidth();
	virtual int __fastcall GetControlAreaWidth();
	virtual int __fastcall GetGlyphAreaWidth();
	virtual void __fastcall AdjustDefaultHeightToTouchableSize(int &ASize);
	virtual int __fastcall GetControlCaptionOffset();
	virtual int __fastcall GetDefaultHeight();
	virtual int __fastcall GetDefaultLargeWidth();
	virtual int __fastcall GetDefaultSmallWidth();
	virtual int __fastcall GetDefaultWidth();
	virtual int __fastcall GetDefaultHeightInSubMenu();
	virtual int __fastcall GetDefaultWidthInSubMenu();
	virtual int __fastcall GetLargeHeight();
	virtual int __fastcall GetMinHeight();
	virtual int __fastcall GetMinWidth();
	virtual int __fastcall GetSmallHeight();
	int __fastcall GetWidthByViewLevel(TdxBarItemRealViewLevel AViewLevel);
	virtual int __fastcall InternalGetDefaultHeight();
	virtual int __fastcall InternalGetDefaultWidth();
	virtual bool __fastcall AllowSelectWithoutFocusing();
	virtual bool __fastcall HasHint();
	virtual bool __fastcall HasShadow();
	virtual bool __fastcall HotPartWantMouse();
	bool __fastcall IsBkColorAssigned();
	virtual bool __fastcall IsChildWindow(HWND AWnd);
	virtual bool __fastcall CanDestroyOnClick();
	virtual bool __fastcall IsDropDown();
	virtual bool __fastcall IsEditTransparent();
	virtual bool __fastcall IsExpandable();
	virtual bool __fastcall IsHiddenForCustomization();
	virtual bool __fastcall IsInvertTextColor();
	virtual bool __fastcall IsMenuItem();
	virtual bool __fastcall IsRotated();
	bool __fastcall IsSelectionForbidden();
	bool __fastcall MousePressed();
	virtual bool __fastcall NeedBufferedRepaint();
	virtual bool __fastcall NeedCaptureMouse();
	virtual bool __fastcall NeedUpdateWhenResize();
	bool __fastcall WantMouse();
	void __fastcall CheckNonRecent();
	void __fastcall UncheckNonRecent();
	virtual void __fastcall BeginResize(const System::Types::TPoint &APoint);
	virtual bool __fastcall CanResize(const System::Types::TPoint &APoint);
	virtual void __fastcall EndResize(bool AAllowResize);
	virtual void __fastcall Resizing(const System::Types::TPoint &APoint);
	void __fastcall DoCalculateParts();
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	void __fastcall InternalCalculateParts();
	__property TdxBarItemAlign Align = {read=GetAlign, nodefault};
	__property HBRUSH BkBrush = {read=GetBkBrush, nodefault};
	__property Cxgraphics::TcxCanvas* Canvas = {read=GetCanvas};
	__property System::UnicodeString Caption = {read=GetCaption};
	__property Vcl::Controls::TControl* Control = {read=GetControl};
	__property bool IsDestroying = {read=FIsDestroying, write=FIsDestroying, nodefault};
	__property TdxBarItemControlDrawParams* DrawParams = {read=FDrawParams};
	__property Dxfading::TdxFader* Fader = {read=GetFader};
	__property bool Flat = {read=GetFlat, nodefault};
	__property Dxgdiplusclasses::TdxSmartGlyph* Glyph = {read=GetGlyph};
	__property int Height = {read=GetRealHeight, nodefault};
	__property System::UnicodeString Hint = {read=GetHint};
	__property Vcl::Imglist::TCustomImageList* HotImages = {read=GetHotImages};
	__property int HotPartIndex = {read=FHotPartIndex, write=SetHotPartIndex, nodefault};
	__property int ImageIndex = {read=GetImageIndex, nodefault};
	__property bool IsFadingAvailable = {read=GetIsFadingAvailable, nodefault};
	__property Dxgdiplusclasses::TdxSmartGlyph* LargeGlyph = {read=GetLargeGlyph};
	__property int LargeImageIndex = {read=GetLargeImageIndex, nodefault};
	__property bool LastInRow = {read=FLastInRow, write=FLastInRow, nodefault};
	__property TdxBarMenuItemSize MenuItemSize = {read=GetMenuItemSize, nodefault};
	__property int MinHeight = {read=GetMinHeight, nodefault};
	__property int MinWidth = {read=GetMinWidth, nodefault};
	__property bool NonRecent = {read=FNonRecent, nodefault};
	__property TCustomdxBarControl* OwnedBarControl = {read=GetOwnedBarControl};
	__property TdxBarItemViewLevels PossibleViewLevels = {read=InternalGetPossibleViewLevels, nodefault};
	__property bool Pressed = {read=FPressed, write=SetPressed, nodefault};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=FScaleFactor};
	__property System::Classes::TShortCut ShortCut = {read=GetShortCut, nodefault};
	__property bool ShowDescription = {read=GetShowDescription, nodefault};
	__property TdxBarSubMenuControl* SubMenuParent = {read=GetSubMenuParent};
	__property int TextAreaOffset = {read=GetTextAreaOffset, nodefault};
	__property bool UnclickAfterDoing = {read=GetUnclickAfterDoing, nodefault};
	__property TdxBarItemViewLevels ViewLevels = {read=GetViewLevels, nodefault};
	__property int Width = {read=GetRealWidth, nodefault};
	
public:
	__fastcall virtual TdxBarItemControl(TdxBarItemLink* AItemLink);
	__fastcall virtual ~TdxBarItemControl();
	virtual void __fastcall BeforeDestruction();
	virtual bool __fastcall HasWindow();
	virtual bool __fastcall IsDroppedDown();
	void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, TdxBarPaintType PaintType);
	virtual void __fastcall Repaint();
	void __fastcall Update()/* overload */;
	virtual void __fastcall Update(const System::Types::TRect &R)/* overload */;
	bool __fastcall UseRightToLeftAlignment();
	bool __fastcall UseRightToLeftReading();
	bool __fastcall UseRightToLeftScrollbar();
	__property TdxBarManager* BarManager = {read=GetBarManager};
	__property bool Enabled = {read=GetEnabled, nodefault};
	__property bool Focused = {read=GetFocused, write=SetFocused, nodefault};
	__property _di_IdxBarAccessibilityHelper IAccessibilityHelper = {read=GetIAccessibilityHelper};
	__property bool IsActive = {read=FIsActive, nodefault};
	__property bool IsSelected = {read=GetIsSelected, nodefault};
	__property TdxBarItem* Item = {read=GetItem};
	__property System::Types::TRect ItemBounds = {read=GetItemBounds};
	__property TdxBarItemLink* ItemLink = {read=FItemLink};
	__property TdxBarPainter* Painter = {read=GetPainter};
	__property TdxBarPainterClass PainterClass = {read=GetPainterClass};
	__property TCustomdxBarControl* Parent = {read=FParent};
	__property TdxBarItemControlViewInfo* ViewInfo = {read=FViewInfo};
private:
	void *__IdxScreenTipProvider;	// Dxscreentip::IdxScreenTipProvider 
	void *__IdxScaleFactor;	// Cxgeometry::IdxScaleFactor 
	void *__IdxFadingObjectFadingOptions;	// Dxfading::IdxFadingObjectFadingOptions 
	void *__IdxFadingObject;	// Dxfading::IdxFadingObject 
	void *__IdxBarHintKeeper2;	// IdxBarHintKeeper2 
	void *__IdxBarHintKeeper;	// IdxBarHintKeeper 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {1479340F-AA1B-4A8E-B136-87E3B5CA3D36}
	operator Dxscreentip::_di_IdxScreenTipProvider()
	{
		Dxscreentip::_di_IdxScreenTipProvider intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxscreentip::IdxScreenTipProvider*(void) { return (Dxscreentip::IdxScreenTipProvider*)&__IdxScreenTipProvider; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {367A805A-A84B-441A-83A3-6A7E489D3B6C}
	operator Cxgeometry::_di_IdxScaleFactor()
	{
		Cxgeometry::_di_IdxScaleFactor intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxgeometry::IdxScaleFactor*(void) { return (Cxgeometry::IdxScaleFactor*)&__IdxScaleFactor; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {FAAAF4F8-7F10-42CD-9368-2BB5A1F1482B}
	operator Dxfading::_di_IdxFadingObjectFadingOptions()
	{
		Dxfading::_di_IdxFadingObjectFadingOptions intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxfading::IdxFadingObjectFadingOptions*(void) { return (Dxfading::IdxFadingObjectFadingOptions*)&__IdxFadingObjectFadingOptions; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {73AB2A92-CDD9-4F13-965A-DC799DE837F9}
	operator Dxfading::_di_IdxFadingObject()
	{
		Dxfading::_di_IdxFadingObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxfading::IdxFadingObject*(void) { return (Dxfading::IdxFadingObject*)&__IdxFadingObject; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {9BFA849B-BF7D-4D17-A95E-6C4A7456CC6F}
	operator _di_IdxBarHintKeeper2()
	{
		_di_IdxBarHintKeeper2 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxBarHintKeeper2*(void) { return (IdxBarHintKeeper2*)&__IdxBarHintKeeper2; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {587A00C4-A7E0-4032-98E5-4DB8F3918ADF}
	operator _di_IdxBarHintKeeper()
	{
		_di_IdxBarHintKeeper intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxBarHintKeeper*(void) { return (IdxBarHintKeeper*)&__IdxBarHintKeeper; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarCustomStaticControl : public TdxBarItemControl
{
	typedef TdxBarItemControl inherited;
	
private:
	TdxBarStaticLikeControlDrawParams* __fastcall GetDrawParams();
	
protected:
	virtual bool __fastcall CanClicked();
	virtual bool __fastcall CanSelect();
	virtual void __fastcall DoPaint(const System::Types::TRect &ARect, TdxBarPaintType PaintType);
	virtual void __fastcall DrawInterior(const System::Types::TRect &ARect) = 0 ;
	virtual TdxBarItemControlViewStructure __fastcall GetDefaultViewStructure();
	virtual TdxBarItemControlDrawParamsClass __fastcall GetDrawParamsClass();
	__property TdxBarStaticLikeControlDrawParams* DrawParams = {read=GetDrawParams};
public:
	/* TdxBarItemControl.Create */ inline __fastcall virtual TdxBarCustomStaticControl(TdxBarItemLink* AItemLink) : TdxBarItemControl(AItemLink) { }
	/* TdxBarItemControl.Destroy */ inline __fastcall virtual ~TdxBarCustomStaticControl() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarSeparatorControl : public TdxBarCustomStaticControl
{
	typedef TdxBarCustomStaticControl inherited;
	
private:
	HIDESBASE TdxBarSeparatorControlDrawParams* __fastcall GetDrawParams();
	
protected:
	virtual void __fastcall CalcDrawParams(bool AFull = true);
	virtual void __fastcall DoPaint(const System::Types::TRect &ARect, TdxBarPaintType PaintType);
	virtual void __fastcall GetDefaultTextColors(bool AEnabled, bool ASelected, bool AFlat, System::Uitypes::TColor &AColor1, System::Uitypes::TColor &AColor2);
	virtual System::Types::TRect __fastcall GetIndents(TdxBarItemControlPart ADrawAreaType);
	virtual TdxBarMenuItemSize __fastcall GetMenuItemSize();
	virtual int __fastcall GetGlyphAreaWidth();
	virtual void __fastcall AdjustDefaultHeightToTouchableSize(int &ASize);
	virtual int __fastcall GetDefaultHeightInSubMenu();
	virtual int __fastcall GetDefaultWidthInSubMenu();
	virtual int __fastcall GetMinWidth();
	virtual int __fastcall InternalGetDefaultHeight();
	virtual int __fastcall InternalGetDefaultWidth();
	virtual void __fastcall PrepareCanvasFont(HFONT ABaseFont, Cxstyles::TcxStyle* AStyle, /* out */ TdxBarSavedFont &ASavedFont);
	virtual void __fastcall RestoreCanvasFont(const TdxBarSavedFont &ASavedFont);
	virtual TdxBarItemControlViewStructure __fastcall GetDefaultViewStructure();
	virtual TdxBarItemControlDrawParamsClass __fastcall GetDrawParamsClass();
	__property TdxBarSeparatorControlDrawParams* DrawParams = {read=GetDrawParams};
public:
	/* TdxBarItemControl.Create */ inline __fastcall virtual TdxBarSeparatorControl(TdxBarItemLink* AItemLink) : TdxBarCustomStaticControl(AItemLink) { }
	/* TdxBarItemControl.Destroy */ inline __fastcall virtual ~TdxBarSeparatorControl() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarWinControl : public TdxBarItemControl
{
	typedef TdxBarItemControl inherited;
	
private:
	bool FInnerControlBufferedPaint;
	bool FFocused;
	bool FFocusing;
	int FKeyPressedInside;
	bool FOnGlass;
	Cxcontrols::TcxWindowProcLinkedObject* FWindowProcObject;
	System::Types::TRect FWindowRect;
	bool __fastcall DoCallKeyboardHook(NativeUInt AWParam, NativeInt ALParam);
	HIDESBASE TdxBarWindowItem* __fastcall GetItem();
	System::Types::TRect __fastcall GetWindowRect();
	void __fastcall SetWindowRect(const System::Types::TRect &Value);
	
protected:
	virtual bool __fastcall CanClicked();
	virtual bool __fastcall CanDeselect(TdxBarManager* ABarManager);
	virtual bool __fastcall CanSelect();
	virtual void __fastcall ControlInactivate(bool Immediately);
	virtual void __fastcall ControlClick(bool AByMouse, System::WideChar AKey = (System::WideChar)(0x0));
	virtual void __fastcall ControlGetFocus(bool AIsSelected, bool &AProcessed);
	virtual void __fastcall EnabledChanged();
	virtual TdxBarAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	virtual bool __fastcall GetFocused();
	virtual bool __fastcall IsChildWindow(HWND AWnd);
	virtual bool __fastcall CanDestroyOnClick();
	bool __fastcall IsWindowEnabled();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	System::Types::TPoint __fastcall ClientToParent(const System::Types::TPoint &APoint);
	System::Types::TPoint __fastcall ParentToClient(const System::Types::TPoint &APoint);
	virtual void __fastcall CreateInnerEdit();
	virtual void __fastcall DestroyInnerEdit(bool AFullDestroy = true);
	void __fastcall DoEnter();
	void __fastcall DoEscape();
	void __fastcall DoNavigation(System::Classes::TShiftState AShift);
	bool __fastcall DoKeyDown(Winapi::Messages::TWMKey &Message);
	bool __fastcall DoKeyPress(Winapi::Messages::TWMKey &Message);
	bool __fastcall DoKeyUp(Winapi::Messages::TWMKey &Message);
	void __fastcall DoKillFocus(Winapi::Messages::TMessage &Message);
	void __fastcall DoMouseDown(Winapi::Messages::TWMMouse &Message, System::Uitypes::TMouseButton AButton, System::Classes::TShiftState AShift);
	virtual void __fastcall Show();
	virtual void __fastcall Hide(bool AStoreDisplayValue) = 0 ;
	virtual void __fastcall ActivateEdit(bool AByMouse, System::WideChar AKey = (System::WideChar)(0x0));
	virtual HWND __fastcall GetHandle() = 0 ;
	virtual System::UnicodeString __fastcall GetText();
	virtual bool __fastcall IsSysKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual bool __fastcall IsSysKeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KillFocus(NativeUInt AHandle);
	void __fastcall MainWndProc(Winapi::Messages::TMessage &Message);
	virtual bool __fastcall NeedFocusOnClick();
	virtual void __fastcall PrepareEditWnd();
	virtual void __fastcall RestoreDisplayValue();
	virtual void __fastcall SetFocused(bool Value);
	virtual void __fastcall SetText(System::UnicodeString Value);
	virtual void __fastcall StoreDisplayValue();
	virtual void __fastcall SysKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall SysKeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall TransferMessage(HWND AFromWindow, const Winapi::Messages::TMessage &Message);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	__property bool InnerControlBufferedPaint = {read=FInnerControlBufferedPaint, write=FInnerControlBufferedPaint, nodefault};
	
public:
	virtual void __fastcall DefaultHandler(void *Message);
	virtual bool __fastcall HasWindow();
	bool __fastcall HandleAllocated();
	__property HWND Handle = {read=GetHandle, nodefault};
	__property TdxBarWindowItem* Item = {read=GetItem};
	__property bool OnGlass = {read=FOnGlass, nodefault};
	__property System::UnicodeString Text = {read=GetText, write=SetText};
	__property System::Types::TRect WindowRect = {read=GetWindowRect, write=SetWindowRect};
public:
	/* TdxBarItemControl.Create */ inline __fastcall virtual TdxBarWinControl(TdxBarItemLink* AItemLink) : TdxBarItemControl(AItemLink) { }
	/* TdxBarItemControl.Destroy */ inline __fastcall virtual ~TdxBarWinControl() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarButtonLikeControl : public TdxBarItemControl
{
	typedef TdxBarItemControl inherited;
	
private:
	bool FShowAnimation;
	TdxBarButtonLikeControlDrawParams* __fastcall GetDrawParams();
	TdxBarGlyphLayout __fastcall GetGlyphLayout();
	
protected:
	virtual bool __fastcall CanFade();
	virtual bool __fastcall FadingDrawSelected();
	virtual void __fastcall GetFadingImages(/* out */ Cxgraphics::TcxBitmap* &AFadeOutImage, /* out */ Cxgraphics::TcxBitmap* &AFadeInImage);
	virtual int __fastcall ArrowWidth();
	virtual void __fastcall CalcDrawParams(bool AFull = true);
	virtual bool __fastcall CanActivate();
	virtual bool __fastcall CanBePartOfButtonGroup();
	virtual void __fastcall ControlActivate(bool AImmediately, bool AByMouse);
	virtual void __fastcall ControlInactivate(bool Immediately);
	virtual void __fastcall ControlGetFocus(bool AIsSelected, bool &AProcessed);
	virtual void __fastcall DoPaint(const System::Types::TRect &ARect, TdxBarPaintType PaintType);
	virtual void __fastcall DropDown(bool AByMouse);
	virtual TdxBarAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	virtual int __fastcall GetDefaultLargeWidth();
	virtual TdxBarItemControlDrawParamsClass __fastcall GetDrawParamsClass();
	virtual int __fastcall GetLargeHeight();
	virtual TdxBarSubMenuControl* __fastcall GetSubMenuControl();
	virtual bool __fastcall IsFlatText();
	virtual bool __fastcall IsTextSelected();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual bool __fastcall WantsKey(System::Word Key);
	void __fastcall FinishSubMenuTracking();
	void __fastcall StartSubMenuTracking(bool AActivation);
	DYNAMIC void __fastcall DoCloseUp(bool AHadSubMenuControl);
	DYNAMIC void __fastcall DoDropDown(bool AByMouse) = 0 ;
	__property TdxBarButtonLikeControlDrawParams* DrawParams = {read=GetDrawParams};
	
public:
	__fastcall virtual ~TdxBarButtonLikeControl();
	__property TdxBarSubMenuControl* SubMenuControl = {read=GetSubMenuControl};
public:
	/* TdxBarItemControl.Create */ inline __fastcall virtual TdxBarButtonLikeControl(TdxBarItemLink* AItemLink) : TdxBarItemControl(AItemLink) { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TdxBarButtonControlKind : unsigned char { bbckStandard, bbckDropDown, bbckDropDownButton };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarButtonControl : public TdxBarButtonLikeControl
{
	typedef TdxBarButtonLikeControl inherited;
	
private:
	bool FDroppedDown;
	TdxBarCustomButton* __fastcall GetButtonItem();
	bool __fastcall GetDown();
	bool __fastcall GetDropDownEnabled();
	bool __fastcall GetDroppedDownFlat();
	int __fastcall GetGroupIndex();
	TdxBarButtonStates __fastcall GetInternalStates();
	bool __fastcall GetLowered();
	void __fastcall DoButtonPressTimer(System::TObject* Sender);
	bool __fastcall MouseOverArrow();
	
protected:
	virtual void __fastcall CalcDrawParams(bool AFull = true);
	virtual void __fastcall CalcParts();
	virtual void __fastcall ControlClick(bool AByMouse, System::WideChar AKey = (System::WideChar)(0x0));
	virtual void __fastcall ControlUnclick(bool ByMouse);
	virtual void __fastcall ControlGetFocus(bool AIsSelected, bool &AProcessed);
	DYNAMIC void __fastcall DoCloseUp(bool AHadSubMenuControl);
	DYNAMIC void __fastcall DoDropDown(bool AByMouse);
	virtual bool __fastcall DrawSelected();
	virtual void __fastcall DropDown(bool AByMouse);
	virtual bool __fastcall FadingDrawSelected();
	virtual TdxBarSubMenuControl* __fastcall GetSubMenuControl();
	virtual bool __fastcall IsFlatText();
	virtual bool __fastcall IsTextSelected();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual int __fastcall GetDefaultHeight();
	virtual int __fastcall GetDefaultWidth();
	virtual int __fastcall GetSmallHeight();
	virtual bool __fastcall CanDestroyOnClick();
	virtual TdxBarAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	virtual TdxBarItemControlViewStructure __fastcall GetDefaultViewStructure();
	virtual TdxBarButtonControlKind __fastcall GetKind();
	virtual TCustomdxBarControl* __fastcall GetOwnedBarControl();
	virtual TdxBarPaintStyle __fastcall GetPaintStyle();
	virtual int __fastcall GetPartCount();
	virtual TdxBarItemControlViewStructure __fastcall GetViewStructure();
	virtual bool __fastcall IsDropDown();
	bool __fastcall IsPressed();
	virtual bool __fastcall NeedCaptureMouse();
	virtual void __fastcall PaintStyleChanged();
	virtual void __fastcall PreparePaintStyleOnBar(TdxBarPaintStyle &APaintStyle);
	__property bool Down = {read=GetDown, nodefault};
	__property bool DropDownEnabled = {read=GetDropDownEnabled, nodefault};
	__property bool DroppedDown = {read=FDroppedDown, nodefault};
	__property bool DroppedDownFlat = {read=GetDroppedDownFlat, nodefault};
	__property int GroupIndex = {read=GetGroupIndex, nodefault};
	__property TdxBarButtonStates InternalStates = {read=GetInternalStates, nodefault};
	__property TdxBarButtonControlKind Kind = {read=GetKind, nodefault};
	__property bool Lowered = {read=GetLowered, nodefault};
	__property TdxBarPaintStyle PaintStyle = {read=GetPaintStyle, nodefault};
	
public:
	__fastcall virtual ~TdxBarButtonControl();
	virtual bool __fastcall IsDroppedDown();
	__property TdxBarCustomButton* ButtonItem = {read=GetButtonItem};
public:
	/* TdxBarItemControl.Create */ inline __fastcall virtual TdxBarButtonControl(TdxBarItemLink* AItemLink) : TdxBarButtonLikeControl(AItemLink) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarLargeButtonControl : public TdxBarButtonControl
{
	typedef TdxBarButtonControl inherited;
	
private:
	Dxgdiplusclasses::TdxSmartGlyph* __fastcall GetHotGlyph();
	HIDESBASE TdxBarLargeButton* __fastcall GetItem();
	bool __fastcall IsInheritedBehaviour();
	bool __fastcall IsSizeAssigned();
	
protected:
	virtual int __fastcall ArrowWidth();
	virtual void __fastcall HotGlyphChanged();
	virtual void __fastcall LargeGlyphChanged();
	virtual bool __fastcall GetCurrentImage(TdxBarItemControlViewSize AViewSize, bool ASelected, /* out */ Dxgdiplusclasses::TdxSmartGlyph* &AGlyph, /* out */ Vcl::Imglist::TCustomImageList* &AImages, /* out */ int &AImageIndex, /* out */ Dxcore::TdxDefaultBoolean &ADrawImageEnabled);
	virtual TdxBarItemControlViewStructure __fastcall GetDefaultViewStructure();
	virtual TdxBarItemControlViewSize __fastcall GetDefaultViewSize();
	virtual TdxBarItemViewLevels __fastcall GetPossibleViewLevels();
	virtual bool __fastcall GrayScale();
	virtual int __fastcall InternalGetDefaultHeight();
	virtual int __fastcall InternalGetDefaultWidth();
	virtual bool __fastcall IsRotated();
	virtual void __fastcall PreparePaintStyleOnBar(TdxBarPaintStyle &APaintStyle);
	__property Dxgdiplusclasses::TdxSmartGlyph* HotGlyph = {read=GetHotGlyph};
	
public:
	__property TdxBarLargeButton* Item = {read=GetItem};
public:
	/* TdxBarButtonControl.Destroy */ inline __fastcall virtual ~TdxBarLargeButtonControl() { }
	
public:
	/* TdxBarItemControl.Create */ inline __fastcall virtual TdxBarLargeButtonControl(TdxBarItemLink* AItemLink) : TdxBarButtonControl(AItemLink) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarApplicationMenuButtonControl : public TdxBarButtonLikeControl
{
	typedef TdxBarButtonLikeControl inherited;
	
private:
	HIDESBASE TdxBarApplicationMenuButtonControlDrawParams* __fastcall GetDrawParams();
	
protected:
	virtual void __fastcall CalcDrawParams(bool AFull = false);
	virtual void __fastcall DoPaint(const System::Types::TRect &ARect, TdxBarPaintType PaintType);
	virtual void __fastcall GetDefaultTextColors(bool AEnabled, bool ASelected, bool AFlat, System::Uitypes::TColor &AColor1, System::Uitypes::TColor &AColor2);
	virtual TdxBarItemControlViewStructure __fastcall GetDefaultViewStructure();
	virtual TdxBarItemControlDrawParamsClass __fastcall GetDrawParamsClass();
	virtual TdxBarPaintType __fastcall GetPaintType();
	virtual int __fastcall InternalGetDefaultWidth();
	virtual void __fastcall CaptionChanged();
	virtual void __fastcall GlyphChanged();
	virtual void __fastcall VisibleChanged();
	virtual void __fastcall WidthChanged();
	__property TdxBarApplicationMenuButtonControlDrawParams* DrawParams = {read=GetDrawParams};
public:
	/* TdxBarButtonLikeControl.Destroy */ inline __fastcall virtual ~TdxBarApplicationMenuButtonControl() { }
	
public:
	/* TdxBarItemControl.Create */ inline __fastcall virtual TdxBarApplicationMenuButtonControl(TdxBarItemLink* AItemLink) : TdxBarButtonLikeControl(AItemLink) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarCustomEditControl : public TdxBarWinControl
{
	typedef TdxBarWinControl inherited;
	
	
private:
	typedef System::DynamicArray<System::Types::TRect> _TdxBarCustomEditControl__1;
	
	
private:
	Vcl::Graphics::TBrush* FBkBrush;
	int FEditTextSize;
	int FSizingEditWidth;
	bool FRightBorderSizing;
	HBRUSH __fastcall GetCaptionBkBrush();
	TdxBarEditLikeControlDrawParams* __fastcall GetDrawParams();
	HBRUSH __fastcall GetEditBkBrush();
	Vcl::Graphics::TFont* __fastcall GetEditFont();
	HIDESBASE TdxCustomBarEdit* __fastcall GetItem();
	System::Types::TRect __fastcall LeftSizingRect();
	System::Types::TRect __fastcall RightSizingRect();
	
protected:
	_TdxBarCustomEditControl__1 FAreaParts;
	virtual void __fastcall CalcParts();
	virtual void __fastcall CalcDrawParams(bool AFull = true);
	virtual void __fastcall CorrectFrameRect(System::Types::TRect &ARect);
	virtual void __fastcall DoCalcDrawingConsts();
	virtual void __fastcall DoPaint(const System::Types::TRect &ARect, TdxBarPaintType PaintType);
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	virtual void __fastcall DrawFrame();
	virtual void __fastcall DrawTextField() = 0 ;
	void __fastcall DrawEditSizingFrame(int AWidth);
	virtual bool __fastcall DrawSelected();
	virtual TdxBarItemControlViewStructure __fastcall GetDefaultViewStructure();
	virtual TdxBarItemControlDrawParamsClass __fastcall GetDrawParamsClass();
	virtual int __fastcall GetPartCount();
	virtual TdxBarItemViewLevels __fastcall GetPossibleViewLevels();
	virtual int __fastcall GetCaptionAreaWidth();
	virtual int __fastcall GetControlAreaWidth();
	virtual int __fastcall GetGlyphAreaWidth();
	virtual void __fastcall CalculateAreaParts();
	virtual int __fastcall GetDefaultHeight();
	virtual int __fastcall GetDefaultWidth();
	int __fastcall GetEditOffset();
	virtual System::Types::TRect __fastcall GetEditRect();
	int __fastcall GetEditTextSize();
	virtual System::Types::TRect __fastcall GetIndents(TdxBarItemControlPart ADrawAreaType);
	virtual int __fastcall GetMinEditorWidth() = 0 ;
	virtual int __fastcall GetMinWidth();
	virtual bool __fastcall GetShowCaption();
	TdxBarItemViewLayout __fastcall GetViewLayout();
	virtual void __fastcall InitEdit() = 0 ;
	virtual void __fastcall Show();
	virtual void __fastcall BeginResize(const System::Types::TPoint &APoint);
	virtual bool __fastcall CanResize(const System::Types::TPoint &APoint);
	virtual void __fastcall EndResize(bool AAllowResize);
	virtual void __fastcall Resizing(const System::Types::TPoint &APoint);
	virtual bool __fastcall HotPartWantMouse();
	virtual void __fastcall RefreshBkBrush(HBRUSH &AHandle);
	__property HBRUSH CaptionBkBrush = {read=GetCaptionBkBrush, nodefault};
	__property TdxBarEditLikeControlDrawParams* DrawParams = {read=GetDrawParams};
	__property HBRUSH EditBkBrush = {read=GetEditBkBrush, nodefault};
	__property Vcl::Graphics::TFont* EditFont = {read=GetEditFont};
	__property bool ShowCaption = {read=GetShowCaption, nodefault};
	
public:
	__fastcall virtual ~TdxBarCustomEditControl();
	__property TdxCustomBarEdit* Item = {read=GetItem};
public:
	/* TdxBarItemControl.Create */ inline __fastcall virtual TdxBarCustomEditControl(TdxBarItemLink* AItemLink) : TdxBarWinControl(AItemLink) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarEditControl : public TdxBarCustomEditControl
{
	typedef TdxBarCustomEditControl inherited;
	
private:
	HWND FHandle;
	HIDESBASE TdxBarEdit* __fastcall GetItem();
	int __fastcall GetMaxLength();
	bool __fastcall GetReadOnly();
	void __fastcall SetLimitText();
	
protected:
	virtual void __fastcall CreateWindowHandle();
	virtual void __fastcall DestroyWindowHandle(bool ADestroyWindow = true);
	virtual unsigned __fastcall getWindowStyle();
	virtual bool __fastcall CanDrawEditor();
	virtual void __fastcall ControlClick(bool AByMouse, System::WideChar AKey = (System::WideChar)(0x0));
	virtual void __fastcall Hide(bool AStoreDisplayValue);
	virtual void __fastcall Show();
	virtual void __fastcall CreateInnerEdit();
	virtual void __fastcall DestroyInnerEdit(bool AFullDestroy = true);
	virtual void __fastcall DrawTextField();
	virtual HWND __fastcall GetHandle();
	virtual int __fastcall GetMinEditorWidth();
	virtual System::Types::TRect __fastcall GetNonBufferedRect();
	virtual void __fastcall InitEdit();
	virtual bool __fastcall IsTransparentOnGlass();
	virtual void __fastcall PrepareEditWnd();
	virtual void __fastcall SetFocused(bool Value);
	virtual void __fastcall SetText(System::UnicodeString Value);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	__property int MaxLength = {read=GetMaxLength, nodefault};
	__property bool ReadOnly = {read=GetReadOnly, nodefault};
	
public:
	__fastcall virtual TdxBarEditControl(TdxBarItemLink* AItemLink);
	__fastcall virtual ~TdxBarEditControl();
	__property TdxBarEdit* Item = {read=GetItem};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCustomdxBarComboControl : public TdxBarEditControl
{
	typedef TdxBarEditControl inherited;
	
private:
	bool FOnPressDroppedDown;
	bool FDroppedDown;
	HWND __fastcall GetDropDownWindow();
	HIDESBASE TCustomdxBarCombo* __fastcall GetItem();
	bool __fastcall IsSpecialKey(System::Word &Key, System::Classes::TShiftState Shift);
	
protected:
	virtual void __fastcall CalcDrawParams(bool AFull = true);
	virtual void __fastcall CalcParts();
	virtual bool __fastcall CanDrawEditor();
	virtual void __fastcall ControlInactivate(bool Immediately);
	virtual void __fastcall CorrectFrameRect(System::Types::TRect &ARect);
	virtual void __fastcall DrawTextField();
	virtual void __fastcall EnabledChanged();
	virtual int __fastcall GetPartCount();
	virtual bool __fastcall IsChildWindow(HWND AWnd);
	virtual bool __fastcall IsSysKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual bool __fastcall IsSysKeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall SysKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall SysKeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall CalcDropDownPos(/* out */ System::Types::TPoint &APoint);
	virtual void __fastcall SetDroppedDown(bool Value);
	__property HWND DropDownWindow = {read=GetDropDownWindow, nodefault};
	
public:
	__fastcall virtual ~TCustomdxBarComboControl();
	virtual bool __fastcall IsDroppedDown();
	__property bool DroppedDown = {read=FDroppedDown, write=SetDroppedDown, nodefault};
	__property TCustomdxBarCombo* Item = {read=GetItem};
public:
	/* TdxBarEditControl.Create */ inline __fastcall virtual TCustomdxBarComboControl(TdxBarItemLink* AItemLink) : TdxBarEditControl(AItemLink) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarComboControl : public TCustomdxBarComboControl
{
	typedef TCustomdxBarComboControl inherited;
	
private:
	int FLocalItemIndex;
	HIDESBASE TdxBarCustomCombo* __fastcall GetItem();
	int __fastcall GetItemIndex();
	System::Classes::TStrings* __fastcall GetItems();
	bool __fastcall GetSorted();
	void __fastcall SetLocalItemIndex(int Value);
	
protected:
	virtual void __fastcall RestoreDisplayValue();
	virtual void __fastcall SetFocused(bool Value);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	__property int ItemIndex = {read=GetItemIndex, nodefault};
	__property System::Classes::TStrings* Items = {read=GetItems};
	__property bool Sorted = {read=GetSorted, nodefault};
	
public:
	__property TdxBarCustomCombo* Item = {read=GetItem};
	__property int LocalItemIndex = {read=FLocalItemIndex, write=SetLocalItemIndex, nodefault};
public:
	/* TCustomdxBarComboControl.Destroy */ inline __fastcall virtual ~TdxBarComboControl() { }
	
public:
	/* TdxBarEditControl.Create */ inline __fastcall virtual TdxBarComboControl(TdxBarItemLink* AItemLink) : TCustomdxBarComboControl(AItemLink) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarSubItemControl : public TdxBarButtonLikeControl
{
	typedef TdxBarButtonLikeControl inherited;
	
private:
	int __fastcall GetCaptionOffset();
	HIDESBASE TCustomdxBarSubItem* __fastcall GetItem();
	
protected:
	virtual TdxBarSubMenuControl* __fastcall GetSubMenuControl();
	virtual void __fastcall CalcDrawParams(bool AFull = true);
	virtual bool __fastcall CanActivate();
	virtual bool __fastcall CanClicked();
	virtual void __fastcall ControlActivate(bool AImmediately, bool AByMouse);
	virtual void __fastcall ControlInactivate(bool Immediately);
	virtual void __fastcall ControlClick(bool AByMouse, System::WideChar AKey = (System::WideChar)(0x0));
	virtual void __fastcall CreateSubMenuControl();
	virtual void __fastcall DoCreateSubMenuControl();
	DYNAMIC void __fastcall DoCloseUp(bool AHadSubMenuControl);
	DYNAMIC void __fastcall DoDropDown(bool AByMouse);
	virtual void __fastcall DropDown(bool AByMouse);
	virtual bool __fastcall GetCollapsed();
	virtual void __fastcall GetSubMenuControlPositionParams(/* out */ System::Types::TPoint &P, /* out */ int &AOwnerWidth, /* out */ int &AOwnerHeight);
	virtual void __fastcall GetSubMenuControlSingleMenuPositionParams(/* out */ System::Types::TPoint &P, /* out */ int &AOwnerWidth, /* out */ int &AOwnerHeight);
	virtual bool __fastcall IsFlatText();
	virtual bool __fastcall IsTextSelected();
	void __fastcall ShowSubMenuControl();
	virtual int __fastcall GetCaptionAreaWidth();
	virtual int __fastcall GetControlCaptionOffset();
	virtual TdxBarAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	virtual TCustomdxBarControl* __fastcall GetOwnedBarControl();
	virtual bool __fastcall HasSubMenu();
	virtual bool __fastcall CanDestroyOnClick();
	virtual bool __fastcall IsDropDown();
	virtual bool __fastcall IsExpandable();
	virtual bool __fastcall IsMenuItem();
	bool __fastcall IsPressed();
	DYNAMIC bool __fastcall WantsDblClick();
	virtual bool __fastcall WantsKey(System::Word Key);
	virtual TdxBarItemViewLevels __fastcall GetPossibleViewLevels();
	virtual TdxBarItemControlViewStructure __fastcall GetDefaultViewStructure();
	__property int CaptionOffset = {read=GetCaptionOffset, nodefault};
	
public:
	__fastcall virtual ~TdxBarSubItemControl();
	virtual bool __fastcall IsDroppedDown();
	__property TCustomdxBarSubItem* Item = {read=GetItem};
public:
	/* TdxBarItemControl.Create */ inline __fastcall virtual TdxBarSubItemControl(TdxBarItemLink* AItemLink) : TdxBarButtonLikeControl(AItemLink) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarContainerLinkData : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TCustomdxBarContainerItem* FItem;
	TdxBarItemLink* FItemLink;
	int FItemIndex;
	System::Contnrs::TObjectList* FExpandedItems;
	
public:
	__fastcall TdxBarContainerLinkData();
	__fastcall virtual ~TdxBarContainerLinkData();
};

#pragma pack(pop)

typedef System::TMetaClass* TdxBarContainerItemSubMenuControlClass;

class PASCALIMPLEMENTATION TdxBarContainerItemSubMenuControl : public TdxBarSubMenuControl
{
	typedef TdxBarSubMenuControl inherited;
	
private:
	TCustomdxBarContainerItem* FContainerItem;
	TdxBarContainerLinkData* FContainerLinkData;
	
protected:
	DYNAMIC void __fastcall DoCloseUp();
	virtual bool __fastcall GetIsCustomizing();
	
public:
	__fastcall virtual TdxBarContainerItemSubMenuControl(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxBarContainerItemSubMenuControl();
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxBarContainerItemSubMenuControl(HWND ParentWindow) : TdxBarSubMenuControl(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarContainerItemControl : public TdxBarSubItemControl
{
	typedef TdxBarSubItemControl inherited;
	
private:
	HIDESBASE TCustomdxBarContainerItem* __fastcall GetItem();
	
protected:
	virtual void __fastcall CreateSubMenuControl();
	virtual void __fastcall DoPaint(const System::Types::TRect &ARect, TdxBarPaintType PaintType);
	virtual bool __fastcall DrawSelected();
	virtual System::UnicodeString __fastcall GetCaption();
	virtual TdxBarContainerItemSubMenuControlClass __fastcall GetSubMenuControlClass();
	virtual bool __fastcall IsExpandable();
	bool __fastcall ShowRealCaption();
	
public:
	__property TCustomdxBarContainerItem* Item = {read=GetItem};
public:
	/* TdxBarSubItemControl.Destroy */ inline __fastcall virtual ~TdxBarContainerItemControl() { }
	
public:
	/* TdxBarItemControl.Create */ inline __fastcall virtual TdxBarContainerItemControl(TdxBarItemLink* AItemLink) : TdxBarSubItemControl(AItemLink) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarSubMenuBackButtonControl : public TdxBarButtonControl
{
	typedef TdxBarButtonControl inherited;
	
protected:
	virtual void __fastcall ControlUnclick(bool ByMouse);
	virtual void __fastcall DoPaint(const System::Types::TRect &ARect, TdxBarPaintType PaintType);
	virtual void __fastcall GetDefaultTextColors(bool AEnabled, bool ASelected, bool AFlat, System::Uitypes::TColor &AColor1, System::Uitypes::TColor &AColor2);
	virtual void __fastcall PrepareCanvasFont(HFONT ABaseFont, Cxstyles::TcxStyle* AStyle, /* out */ TdxBarSavedFont &ASavedFont);
	virtual void __fastcall RestoreCanvasFont(const TdxBarSavedFont &ASavedFont);
public:
	/* TdxBarButtonControl.Destroy */ inline __fastcall virtual ~TdxBarSubMenuBackButtonControl() { }
	
public:
	/* TdxBarItemControl.Create */ inline __fastcall virtual TdxBarSubMenuBackButtonControl(TdxBarItemLink* AItemLink) : TdxBarButtonControl(AItemLink) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarPainter : public Dxcoreclasses::TcxIUnknownObject
{
	typedef Dxcoreclasses::TcxIUnknownObject inherited;
	
private:
	void __fastcall InternalCalculateComboParts(TdxBarEditLikeControlDrawParams* const ADrawParams, System::Types::TRect *AParts, const int AParts_High);
	void __fastcall InternalDrawBarSizeGrip(HDC DC, const System::Types::TRect &R, bool AIsRightToLeftLayout);
	
protected:
	virtual void __fastcall DrawToolbarContentPart(TdxBarControl* ABarControl, Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawToolbarNonContentPart(TdxBarControl* ABarControl, HDC DC);
	virtual System::Types::TRect __fastcall GetToolbarCaptionRect(TdxBarControl* ABarControl, const System::Types::TRect &ARect);
	__classmethod virtual bool __fastcall IsCompoundPainting();
	__classmethod virtual bool __fastcall NeedDoubleBuffer();
	virtual bool __fastcall AllowLargeIcons();
	virtual void __fastcall DoDrawText(HDC ADC, const System::UnicodeString AText, System::Types::TRect &ARect, unsigned AFormat);
	virtual void __fastcall DrawGlyphBorder(TdxBarItemControl* ABarItemControl, HDC DC, HBRUSH ABrush, bool NeedBorder, const System::Types::TRect &R, TdxBarPaintType PaintType, bool IsGlyphEmpty, bool Selected, bool Down, bool DrawDowned, bool ADroppedDown, bool IsSplit);
	virtual void __fastcall DrawGlyphCheckMark(TdxBarItemControl* ABarItemControl, HDC DC, int X, int Y, int DoubleSize);
	virtual void __fastcall DrawGlyphEmptyImage(TdxBarItemControl* ABarItemControl, HDC DC, const System::Types::TRect &R, TdxBarPaintType APaintType, bool ADown);
	__classmethod virtual void __fastcall DrawItemArrow(HDC DC, const System::Types::TRect &R, Cxgeometry::TdxScaleFactor* AScaleFactor, Cxgraphics::TcxArrowDirection ArrowType, bool Enabled, bool Selected, bool Flat, System::Uitypes::TColor AColor = (System::Uitypes::TColor)(0x20000000));
	virtual void __fastcall DrawLargeItemArrow(HDC DC, const System::Types::TRect &R, Cxgraphics::TcxArrowDirection ArrowType, int Size, bool Selected, bool Enabled, bool Flat, System::Uitypes::TColor AColor = (System::Uitypes::TColor)(0x20000000));
	__classmethod virtual void __fastcall FrameFlatSelRect(HDC DC, const System::Types::TRect &R);
	virtual System::Uitypes::TColor __fastcall GetDefaultEnabledTextColor(TdxBarItemControl* ABarItemControl, bool ASelected, bool AFlat);
	virtual void __fastcall GetDefaultTextColors(TdxBarItemControl* ABarItemControl, bool AEnabled, bool ASelected, bool AFlat, System::Uitypes::TColor &AColor1, System::Uitypes::TColor &AColor2);
	virtual void __fastcall GetDisabledTextColors(TdxBarItemControl* ABarItemControl, bool ASelected, bool AFlat, System::Uitypes::TColor &AColor1, System::Uitypes::TColor &AColor2);
	virtual System::Uitypes::TColor __fastcall GetEnabledTextColor(TdxBarItemControl* ABarItemControl, bool ASelected, bool AFlat);
	virtual System::Uitypes::TColor __fastcall GetItemArrowColor(TdxBarButtonLikeControlDrawParams* const ADrawParams);
	__classmethod virtual bool __fastcall GetFaded(TCustomdxBarControl* ABarControl);
	__classmethod virtual bool __fastcall IgnoreGlyphOpaque();
	__classmethod virtual bool __fastcall IgnoreNonRecentColor();
	__classmethod virtual bool __fastcall IsMenuItem(TdxBarItemControl* ABarItemControl);
	__classmethod virtual bool __fastcall UseTextColorForItemArrow();
	__classmethod virtual System::Types::TPoint __fastcall GetBarItemControlHintPosition(TCustomdxBarControl* ABarControl, const System::Types::TRect &AItemBounds, const System::Types::TPoint &ACursorPos, int AHeight);
	virtual TdxBarCustomHintViewInfo* __fastcall CreateHintViewInfo(TdxBarManager* ABarManager, System::UnicodeString AHintText, const System::UnicodeString AShortCut, Dxscreentip::TdxScreenTip* AScreenTip);
	virtual bool __fastcall IsCustomHintSupported();
	__classmethod virtual bool __fastcall BarIsBarSmall(TdxBarControl* ABarControl, const System::Types::TRect &R);
	__classmethod virtual System::Uitypes::TColor __fastcall BarCaptionBkColor(TdxBarControl* ABarControl, bool AMainFormActive);
	virtual System::Uitypes::TColor __fastcall BarCaptionColor(TdxBarControl* ABarControl);
	__classmethod virtual System::Uitypes::TColor __fastcall BarMarkArrowColor(TdxBarControl* ABarControl, TdxBarMarkState AState);
	virtual void __fastcall BarDrawGrip(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &R, HBRUSH AToolbarBrush);
	virtual void __fastcall BarDrawMarkArrow(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &MarkR);
	__classmethod virtual void __fastcall BarDrawMarkAtPos(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &ItemRect, int Offset);
	virtual void __fastcall BarDrawMarkBackground(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &ItemRect, HBRUSH AToolbarBrush);
	virtual void __fastcall BarDrawMarkElements(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &ItemRect);
	__classmethod virtual void __fastcall BarOffsetFloatingBarCaption(TdxBarControl* ABarControl, int &X, System::Types::TRect &R);
	__classmethod virtual int __fastcall GetDrawMarkElementColor(TdxBarControl* ABarControl);
	virtual void __fastcall ButtonLikeControlCorrectCaptionParams(TdxBarButtonLikeControlDrawParams* const ADrawParams, System::Types::TRect &ATextBounds, const System::Types::TRect &AImageBounds, /* out */ unsigned &ATextAlignment, /* out */ unsigned &AFormat);
	virtual void __fastcall ButtonLikeControlDrawCaption(TdxBarButtonLikeControlDrawParams* const ADrawParams, const System::Types::TRect &ATextBounds, unsigned ATextAlignment, unsigned AFormat = (unsigned)(0x0));
	__classmethod virtual System::Types::TRect __fastcall GetControlTextIndents();
	__classmethod System::Types::TRect __fastcall GetControlCaptionRect(TdxBarItemControlDrawParams* const ADrawParams);
	__classmethod virtual System::Types::TRect __fastcall GetControlCaptionRectCore(TdxBarItemControlDrawParams* const ADrawParams);
	__classmethod virtual TdxBarGlyphLayout __fastcall GetGlyphLayout(TdxBarButtonLikeControlDrawParams* const ADrawParams);
	virtual void __fastcall InflateSizeForArrow(TdxBarButtonLikeControlDrawParams* const ADrawParams, int &ASize);
	virtual void __fastcall DrawDot(TdxBarEditLikeControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	virtual void __fastcall DrawDots(TdxBarEditLikeControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	__classmethod virtual void __fastcall ComboControlDrawArrow(TdxBarEditLikeControlDrawParams* const ADrawParams, const System::Types::TRect &ARect, int ASize, System::Uitypes::TColor AColor);
	virtual void __fastcall SubMenuControlFillScrollArrow(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, System::Uitypes::TColor AColor);
	virtual void __fastcall SubMenuControlDrawScrollArrow(TdxBarSubMenuControl* ABarSubMenuControl, Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &AArrowRect, System::Uitypes::TColor AColor, Cxgraphics::TcxArrowDirection AArrowDirection);
	virtual void __fastcall SubMenuControlDrawScrollBand(TdxBarSubMenuControl* ABarSubMenuControl, Cxgraphics::TcxCanvas* ACanvas, Cxgraphics::TcxArrowDirection AArrowDirection);
	virtual void __fastcall SubMenuControlDrawScrollBandBackground(TdxBarSubMenuControl* ABarSubMenuControl, Cxgraphics::TcxCanvas* ACanvas, Cxgraphics::TcxArrowDirection AArrowDirection);
	virtual void __fastcall SubMenuControlDrawNonRecentGroupSeparator(TdxBarSubMenuControl* ABarSubMenuControl, Cxgraphics::TcxCanvas* ACanvas, Cxgraphics::TcxArrowDirection AArrowDirection);
	virtual System::Types::TRect __fastcall SubMenuControlGetScrollBandBounds(TdxBarSubMenuControl* ABarSubMenuControl, Cxgraphics::TcxArrowDirection AArrowDirection);
	virtual int __fastcall SubMenuControlGetScrollBandSize(TdxBarSubMenuControl* ABarSubMenuControl);
	__classmethod virtual int __fastcall SubMenuControlGetScrollArrowSize(int ATextSize);
	virtual void __fastcall SubMenuControlDrawMarkContent(TdxBarSubMenuControl* ABarSubMenuControl, HDC DC, const System::Types::TRect &R, bool ASelected);
	virtual void __fastcall SubMenuControlDrawMarkBand(TdxBarSubMenuControl* ABarSubMenuControl, const System::Types::TRect &AMarkRect, bool ASelected);
	virtual void __fastcall SubMenuControlDrawMarkSelection(TdxBarSubMenuControl* ABarSubMenuControl, HDC ADC, const System::Types::TRect &AMarkRect);
	__classmethod virtual bool __fastcall SubMenuControlUseScrollButtons();
	virtual bool __fastcall SubMenuControlUseSingleMenuWindowMode();
	__classmethod virtual void __fastcall EditOffsetInteriorRect(TdxBarCustomEditControl* ABarEditControl, System::Types::TRect &R);
	virtual void __fastcall DrawSpinEditArrow(TdxBarSpinEditDrawParams* const ADrawParams, const System::Types::TPoint &AArrowPos, int AButtonIndex);
	__classmethod void __fastcall SpinEditControlDrawArrowByPoints(TdxBarSpinEditDrawParams* const ADrawParams, const System::Types::TPoint &AStartPoint, int AColorIndex, int AButtonIndex);
	__classmethod virtual System::Uitypes::TColor __fastcall GetSysPanelBorderColor();
	virtual Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetLookAndFeelPainter();
	__classmethod virtual void __fastcall DateNavigatorDrawButtonCaption(HDC DC, const System::Types::TRect &R, int AOffset, const System::UnicodeString ACaption, bool AOpaque);
	virtual void __fastcall DropDownGalleryDrawVerticalSizeGrip(HDC DC, const System::Types::TRect &R);
	System::Types::TRect __fastcall DropDownGalleryGetSizeGripRect(const System::Types::TRect &ABandRect, Dxcore::TdxCorner ACorner);
	
public:
	__fastcall virtual TdxBarPainter(NativeUInt AData);
	virtual void __fastcall CalculateExtraMenuButtonParts(TdxBarExtraMenuButtonControlDrawParams* const ADrawParams, System::Types::TRect *AParts, const int AParts_High, const System::Types::TRect &AItemRect);
	virtual void __fastcall CalculateButtonParts(TdxBarButtonLikeControlDrawParams* const ADrawParams, System::Types::TRect *AParts, const int AParts_High, const System::Types::TRect &AItemRect);
	virtual void __fastcall CalculateColorComboParts(TdxBarColorComboControlDrawParams* const ADrawParams, System::Types::TRect *AParts, const int AParts_High, System::Types::TRect *AAreaParts, const int AAreaParts_High);
	virtual void __fastcall CalculateComboParts(TdxBarEditLikeControlDrawParams* const ADrawParams, System::Types::TRect *AParts, const int AParts_High, System::Types::TRect *AAreaParts, const int AAreaParts_High);
	virtual void __fastcall CalculateEditParts(TdxBarEditLikeControlDrawParams* const ADrawParams, System::Types::TRect *AParts, const int AParts_High, System::Types::TRect *AAreaParts, const int AAreaParts_High);
	virtual void __fastcall CalculateSpinEditParts(TdxBarSpinEditDrawParams* const ADrawParams, System::Types::TRect *AParts, const int AParts_High, System::Types::TRect *AAreaParts, const int AAreaParts_High);
	__classmethod void __fastcall CalculateArrowPoints(const System::Types::TRect &ARect, int AArrowSize, Cxgraphics::TcxArrowDirection AArrowDirection, /* out */ Cxgraphics::TcxArrowPoints &P);
	__classmethod System::Types::TRect __fastcall GetArrowRectByPoints(const Cxgraphics::TcxArrowPoints &P, Cxgraphics::TcxArrowDirection AArrowDirection);
	__classmethod void __fastcall SetArrowRegion(Cxgraphics::TcxCanvas* ACanvas, Cxgraphics::TcxArrowDirection AArrowDirection, const Cxgraphics::TcxArrowPoints &P, Cxgraphics::TcxRegionOperation AOperation);
	__classmethod virtual bool __fastcall IsFadingAvailable();
	virtual Dxfading::TdxFadingOptions* __fastcall GetBarItemControlFadingOptions();
	virtual System::Types::TRect __fastcall GetToolbarContentOffsets(TdxBar* ABar, TdxBarDockingStyle ADockingStyle, Cxgeometry::TdxScaleFactor* AScaleFactor, bool AHasSizeGrip);
	virtual int __fastcall GetToolbarsOffsetForAutoAlign();
	virtual int __fastcall GetBorderSize();
	virtual int __fastcall GetIconAreaSize(TCustomdxBarControl* ABarControl);
	__classmethod virtual int __fastcall GetControlCaptionOffset(TdxBarItemControl* ABarItemControl);
	__classmethod virtual int __fastcall GetDefaultTextSize(Cxgraphics::TcxCanvas* ACanvas, Cxgeometry::TdxScaleFactor* AScaleFactor);
	__classmethod virtual int __fastcall GetPopupWindowBorderWidth();
	int __fastcall GetSmallIconSize(Cxgeometry::TdxScaleFactor* AScaleFactor);
	void __fastcall GetImageParams(TdxBarItemControl* AItemControl, const System::Types::TRect &ADrawRect, TdxBarPaintType APaintType, TdxBarItemControlViewStructure AViewStructure, TdxBarItemControlViewSize AViewSize, bool ACenter, bool ASelected, bool ADowned, bool ADrawDowned, bool &AGlyphEmpty, /* out */ Dxgdiplusclasses::TdxSmartGlyph* &AGlyph, /* out */ Vcl::Imglist::TCustomImageList* &AImages, /* out */ int &AImageIndex, /* out */ bool &ADrawImageEnabled, /* out */ System::Types::TRect &AImageBounds);
	virtual System::Types::TRect __fastcall GetLargeImageBounds(TdxBarItemControl* AItemControl, const System::Types::TSize &AImageSize, const System::Types::TRect &ADrawRect, TdxBarPaintType APaintType, TdxBarItemControlViewStructure AViewStructure);
	__classmethod System::Types::TRect __fastcall GetSmallImageBounds(TdxBarItemControl* AItemControl, const System::Types::TSize &AImageSize, const System::Types::TRect &ADrawRect, TdxBarPaintType APaintType, TdxBarItemControlViewStructure AViewStructure, bool ACenter, bool AGlyphEmpty, bool AStretchGlyph, bool ADowned, bool ADrawDowned);
	__classmethod virtual void __fastcall DrawBackground(TdxBarItemControl* ABarItemControl, HDC DC, const System::Types::TRect &R, HBRUSH ABrush, bool AOpaque);
	__classmethod virtual void __fastcall DrawBackgroundFrameRect(TdxBarItemControl* ABarItemControl, HDC DC, const System::Types::TRect &R, HBRUSH ABrush, bool AOpaque);
	__classmethod virtual void __fastcall DrawDisabledShadowRect(TdxBarItemControl* ABarItemControl, HDC DC, const System::Types::TRect &R);
	virtual void __fastcall DrawItemBackground(TdxBarItemControl* ABarItemControl, Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ASourceRect, HBRUSH ABrush);
	void __fastcall DrawGlyph(TdxBarItemControl* ABarItemControl, HDC ADC, const System::Types::TRect &ADrawRect, const System::Types::TRect &AFullBounds, TdxBarPaintType APaintType, bool AGlyphEmpty, bool ASelected, bool ADowned, bool ADrawDowned, bool ADroppedDown, bool ACenter, bool AForceUseBkBrush, bool AIsSplit)/* overload */;
	virtual void __fastcall DrawGlyph(TdxBarItemControl* ABarItemControl, HDC ADC, const System::Types::TRect &ADrawRect, const System::Types::TRect &AFullBounds, /* out */ System::Types::TRect &AImageBounds, TdxBarPaintType APaintType, TdxBarItemControlViewStructure AViewStructure, TdxBarItemControlViewSize AViewSize, bool AGlyphEmpty, bool ASelected, bool ADowned, bool ADrawDowned, bool ADroppedDown, bool ACenter, bool AForceUseBkBrush, bool AGrayScale, bool AIsSplit)/* overload */;
	virtual void __fastcall DrawGlyphAndBkgnd(TdxBarItemControl* ABarItemControl, HDC ADC, const System::Types::TRect &R, const System::Types::TRect &AGlyphRect, TdxBarPaintType APaintType, Dxgdiplusclasses::TdxSmartGlyph* AGlyph, Vcl::Imglist::TCustomImageList* AImages, int AImageIndex, bool AGlyphEmpty, bool ASelected, bool ADowned, bool ADrawDowned, bool ADroppedDown, bool AForceUseBkBrush, bool AGrayScale, bool AIsSplit, bool AEnabled, Dxcoregraphics::_di_IdxColorPalette AColorPalette);
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall GetGlyphColorPalette(TdxBarItemControl* ABarItemControl, TdxBarPaintType APaintType, bool ASelected, bool ADowned, bool ADrawDowned, bool ADroppedDown, bool AIsSplit);
	void __fastcall DrawGlyphAndTextInSubMenu(TdxBarButtonLikeControlDrawParams* const ADrawParams, const System::Types::TRect &R);
	virtual void __fastcall DrawItemBackgroundInSubMenu(TdxBarButtonLikeControlDrawParams* const ADrawParams, const System::Types::TRect &R);
	void __fastcall DrawItemMultilineText(TdxBarItemControlDrawParams* const ADrawParams, const System::UnicodeString AText, const System::Types::TRect &ATextRect, unsigned AAlignment, int AMaxLineCount);
	virtual void __fastcall DrawItemText(TdxBarItemControl* ABarItemControl, HDC ADC, System::UnicodeString S, const System::Types::TRect &APaintRect, unsigned AAlignment, bool AEnabled, bool ASelected, bool ARotated, bool AClipped, bool AFlatText, unsigned AFormat = (unsigned)(0x20));
	void __fastcall DrawItemTextInSubMenu(TdxBarButtonLikeControlDrawParams* const ADrawParams, const System::Types::TRect &R);
	__classmethod virtual void __fastcall DrawLowered(HDC DC, System::Types::TRect &R);
	__classmethod virtual void __fastcall FrameAndFillRect(TdxBarItemControl* ABarItemControl, HDC DC, System::Types::TRect &R, bool Enabled, bool Selected, bool Pressed);
	__classmethod virtual System::Types::TRect __fastcall GetCaptionOffsets();
	__classmethod virtual HBRUSH __fastcall GlyphBkgndBrush(TdxBarItemControl* ABarItemControl, TdxBarPaintType APaintType, bool AGlyphEmpty, bool ASelected, bool ADowned, bool ADrawDowned, bool ADroppedDown, bool AForceUseBkBrush, bool AGrayScale);
	__classmethod virtual int __fastcall GlyphDownShift(TdxBarItemControl* ABarItemControl);
	__classmethod virtual int __fastcall GlyphDrawDownedShift(TdxBarItemControl* ABarItemControl, bool ADown);
	__classmethod virtual bool __fastcall IsFlatGlyphImage();
	__classmethod virtual bool __fastcall IsFlatItemText();
	__classmethod virtual bool __fastcall IsFlatItemTextForMenu();
	virtual bool __fastcall IsCustomSelectedTextColorExists(TdxBarItemControl* ABarItemControl);
	__classmethod virtual bool __fastcall IsGlyphImageBackgroundOpaque(TdxBarItemControl* ABarItemControl, bool ADown, bool ADrawDowned, bool ASelected, bool AGlyphEmpty);
	__classmethod virtual bool __fastcall IsGlyphImageHasShadow();
	__classmethod virtual bool __fastcall IsGlyphImageTransparent(TdxBarItemControl* ABarItemControl);
	__classmethod virtual bool __fastcall IsItemTextSelectedInverted();
	__classmethod virtual int __fastcall LoweredBorderSize(TdxBarItemControl* ABarItemControl);
	__classmethod virtual int __fastcall TextAreaOffset(TdxBarItemControl* ABarItemControl);
	int __fastcall BarFingersSize(TdxBar* ABar);
	virtual int __fastcall BeforeFingersSize();
	__classmethod virtual int __fastcall BorderSizeX(Cxgeometry::TdxScaleFactor* AScaleFactor);
	__classmethod virtual int __fastcall BorderSizeY(Cxgeometry::TdxScaleFactor* AScaleFactor);
	__classmethod virtual int __fastcall EmptyFingersSize();
	virtual int __fastcall FingersSize(TdxBarControl* ABarControl);
	virtual int __fastcall GripperSize(TdxBarControl* ABarControl);
	__classmethod virtual int __fastcall RealButtonArrowWidth(TdxBarManager* ABarManager);
	__classmethod virtual int __fastcall RealLargeButtonArrowWidth(TdxBarManager* ABarManager);
	__classmethod virtual int __fastcall SubMenuBeginGroupIndent();
	virtual void __fastcall DockControlFillBackground(TdxDockControl* ADockControl, HDC DC, const System::Types::TRect &ADestR, const System::Types::TRect &ASourceR, const System::Types::TRect &AWholeR, HBRUSH ABrush, System::Uitypes::TColor AColor);
	__classmethod virtual bool __fastcall IsNativeBackground();
	__classmethod virtual bool __fastcall BarChildrenHaveShadows(TCustomdxBarControl* ABarControl);
	virtual bool __fastcall BarHasShadow(TCustomdxBarControl* ABarControl);
	virtual bool __fastcall BarLinkedOwnerHasShadow(TCustomdxBarControl* ABarControl);
	__classmethod virtual HBRUSH __fastcall BarControlOwnerBrush(TdxBarManager* ABarManager);
	__classmethod virtual int __fastcall BarDockedGetRowIndent();
	virtual void __fastcall BarDrawDockedBackground(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &ADestR, const System::Types::TRect &ASourceR, HBRUSH ABrush, System::Uitypes::TColor AColor);
	virtual void __fastcall BarDrawFloatingBackground(TCustomdxBarControl* ABarControl, HDC DC, const System::Types::TRect &ADestR, const System::Types::TRect &ASourceR, HBRUSH ABrush, System::Uitypes::TColor AColor);
	__classmethod virtual void __fastcall BarDrawOwnerLink(TCustomdxBarControl* ABarControl, HDC DC);
	void __fastcall BarFillParentBackground(TCustomdxBarControl* ABarControl, HDC DC, const System::Types::TRect &ADestR, const System::Types::TRect &ASourceR, HBRUSH ABrush, System::Uitypes::TColor AColor);
	__classmethod virtual HBRUSH __fastcall BarToolbarBrush(TCustomdxBarControl* ABarControl);
	__classmethod virtual HBRUSH __fastcall BarToolbarBrushEx(TdxBarControl* ABarControl);
	__classmethod virtual HBRUSH __fastcall BarToolbarDownedBrush(TCustomdxBarControl* ABarControl);
	__classmethod virtual HBRUSH __fastcall BarToolbarDownedSelBrush(TCustomdxBarControl* ABarControl);
	__classmethod virtual HBRUSH __fastcall BarToolbarSelBrush(TCustomdxBarControl* ABarControl);
	virtual int __fastcall ComboBoxArrowWidth(TCustomdxBarControl* ABarControl, int cX);
	__classmethod virtual int __fastcall EditTextSize(TCustomdxBarControl* ABarControl, int cY);
	__classmethod void __fastcall GetEditTextParams(/* out */ System::Types::TRect &AOffsets, /* out */ int &AHeightCorrection);
	__classmethod virtual void __fastcall GetEditTextVerticalOffsets(/* out */ int &ATop, /* out */ int &ABottom);
	virtual void __fastcall SetWindowRgn(NativeUInt AHandle, const System::Types::TRect &AWindowRect, bool ARedraw = false);
	__classmethod virtual bool __fastcall BarAllowHotTrack();
	__classmethod virtual bool __fastcall BarAllowQuickCustomizing();
	virtual int __fastcall BarBeginGroupSideSize();
	virtual int __fastcall BarBeginGroupSize();
	virtual void __fastcall BarBorderPaintSizes(TdxBarControl* ABarControl, System::Types::TRect &R);
	__classmethod virtual int __fastcall BarBorderSize();
	virtual void __fastcall BarBorderSizes(TdxBar* ABar, TdxBarDockingStyle AStyle, System::Types::TRect &R);
	__classmethod virtual int __fastcall BarCaptionAreaSize(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall BarCaptionFillBackground(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &R, HBRUSH AToolbarBrush);
	__classmethod virtual int __fastcall BarCaptionSize(Cxgeometry::TdxScaleFactor* AScaleFactor);
	__classmethod virtual bool __fastcall BarCaptionTransparent();
	__classmethod virtual System::Types::TSize __fastcall BarCloseButtonSize(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall BarDrawBackground(TdxBarControl* ABarControl, HDC ADC, const System::Types::TRect &ADestRect, const System::Types::TRect &ASourceRect, HBRUSH ABrush, System::Uitypes::TColor AColor);
	virtual void __fastcall BarDrawBeginGroup(TCustomdxBarControl* ABarControl, HDC DC, const System::Types::TRect &ABeginGroupRect, HBRUSH AToolbarBrush, bool AHorz);
	__classmethod virtual void __fastcall BarDrawCaptionElement(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &R, TdxBarMarkState AState);
	virtual void __fastcall BarDrawCloseButton(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &R);
	virtual void __fastcall BarDrawDockedBarBorder(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &R, HBRUSH AToolbarBrush);
	virtual void __fastcall BarDrawFloatingBarBorder(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &R, const System::Types::TRect &CR, HBRUSH AToolbarBrush);
	virtual void __fastcall BarDrawFloatingBarCaption(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &R, const System::Types::TRect &CR, HBRUSH AToolbarBrush, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall BarDrawMark(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &MarkR);
	virtual void __fastcall BarDrawMarks(TdxBarControl* ABarControl, Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &AItemRect, HBRUSH AToolbarBrush);
	virtual void __fastcall BarDrawMDIButton(TdxBarControl* ABarControl, TdxBarMDIButton AButton, int AState, HDC DC, const System::Types::TRect &R);
	virtual void __fastcall BarDrawStatusBarGrip(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &R, HBRUSH AToolbarBrush);
	virtual void __fastcall BarDrawStatusBarBorder(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &R, HBRUSH AToolbarBrush);
	__classmethod virtual int __fastcall BarHorSize();
	virtual System::Types::TRect __fastcall BarMarkRect(TdxBarControl* ABarControl);
	virtual System::Types::TRect __fastcall BarMarkItemRect(TdxBarControl* ABarControl);
	virtual void __fastcall BarMarkRectInvalidate(TdxBarControl* ABarControl);
	__classmethod virtual int __fastcall BarTopSize();
	__classmethod virtual int __fastcall BarBottomSize();
	__classmethod virtual bool __fastcall BarUseSystemClose();
	__classmethod virtual bool __fastcall BarUseSystemNCBorder();
	virtual int __fastcall MarkSizeX(TdxBarControl* ABarControl);
	virtual void __fastcall StatusBarFillBackground(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &ADestR, const System::Types::TRect &ASourceR, const System::Types::TRect &AWholeR, HBRUSH ABrush, System::Uitypes::TColor AColor);
	virtual System::Types::TRect __fastcall StatusBarBorderOffsets();
	__classmethod virtual int __fastcall StatusBarTopBorderSize();
	virtual System::Types::TSize __fastcall StatusBarGripSize(TdxBarManager* ABarManager, Cxgeometry::TdxScaleFactor* AScaleFactor);
	__classmethod virtual HBRUSH __fastcall BarToolbarBrushEx2(TdxBarControl* ABarControl);
	__classmethod virtual void __fastcall DrawQuickCustItemFrame(TdxBarItemControl* ABarItemControl, HDC DC, System::Types::TRect &R, System::Types::TRect &ARect, bool Selected);
	__classmethod virtual void __fastcall DrawQuickCustItemFrameSelected(TdxBarItemControl* ABarItemControl, HDC DC, const System::Types::TRect &WholeR, const System::Types::TRect &R, bool Selected);
	__classmethod virtual bool __fastcall IsQuickControlPopupOnRight();
	__classmethod virtual int __fastcall GetTailAreaSize(TdxBarItemControlDrawParams* const ADrawParams);
	__classmethod virtual System::Types::TRect __fastcall ItemControlGetIndents(TdxBarItemControlDrawParams* const ADrawParams, TdxBarItemControlPart ADrawAreaType);
	virtual HBRUSH __fastcall ButtonControlArrowBrush(TdxBarItemControlDrawParams* const ADrawParams);
	virtual bool __fastcall IsButtonControlArrowBackgroundOpaque(TdxBarButtonLikeControlDrawParams* const ADrawParams);
	virtual bool __fastcall IsButtonControlArrowDrawSelected(TdxBarButtonLikeControlDrawParams* const ADrawParams);
	virtual bool __fastcall IsButtonControlArrowFlat();
	virtual bool __fastcall IsDropDownRepaintNeeded();
	virtual int __fastcall GetButtonBorderHeight(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual int __fastcall GetButtonBorderWidth(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual int __fastcall GetButtonHeight(int AIconSize, int ATextSize, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual int __fastcall GetButtonWidth(int AIconSize, int ATextSize, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Types::TSize __fastcall GetButtonSize(int AIconSize, int ATextSize, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual int __fastcall GetLargeButtonBorderHeight();
	virtual int __fastcall GetLargeButtonBorderWidth();
	__classmethod virtual System::Types::TSize __fastcall GetDefaultArrowSignSize(Cxgeometry::TdxScaleFactor* AScaleFactor);
	__classmethod virtual void __fastcall CorrectButtonControlDefaultHeight(int &DefaultHeight);
	__classmethod virtual void __fastcall CorrectButtonControlDefaultWidth(int &DefaultWidth);
	virtual void __fastcall OffsetCaptionBounds(bool ADowned, bool ADrawDowned, System::Types::TRect &R);
	__classmethod virtual void __fastcall OffsetEllipsisBounds(bool APressed, System::Types::TRect &R);
	virtual void __fastcall DrawBackButtonControl(TdxBarButtonLikeControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	virtual void __fastcall DrawBackButtonControlArrow(TdxBarButtonLikeControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	virtual void __fastcall DrawBackButtonControlBackground(TdxBarButtonLikeControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	virtual void __fastcall DrawButtonLikeControl(TdxBarButtonLikeControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	virtual void __fastcall DrawButtonLikeControlCaption(TdxBarButtonLikeControlDrawParams* const ADrawParams, const System::Types::TRect &ARect, const System::Types::TRect &AImageBounds);
	virtual void __fastcall DrawButtonControlArrow(TdxBarButtonLikeControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	virtual void __fastcall DrawButtonControlArrowBackground(TdxBarButtonLikeControlDrawParams* const ADrawParams, System::Types::TRect &R1, HBRUSH ABrush);
	virtual void __fastcall DrawSplitControlArrow(TdxBarButtonLikeControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	virtual void __fastcall DrawAssociateControlArrow(TdxBarButtonLikeControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	virtual System::Uitypes::TColor __fastcall ComboControlArrowColor(TdxBarItemControlDrawParams* ADrawParams);
	virtual HBRUSH __fastcall ComboControlButtonBrush(TdxBarItemControlDrawParams* const ADrawParams);
	__classmethod virtual int __fastcall ComboControlArrowOffset();
	__classmethod virtual System::Types::TRect __fastcall ComboControlButtonOffsets(TdxBarPaintType APaintType);
	virtual void __fastcall ComboControlDrawArrowButton(TdxBarEditLikeControlDrawParams* const ADrawParams, const System::Types::TRect &ARect, bool AInClientArea);
	__classmethod virtual void __fastcall ComboControlDrawSimpleButton(TdxBarEditLikeControlDrawParams* const ADrawParams, System::Types::TRect &ARect, HBRUSH ABrush);
	__classmethod virtual int __fastcall DropDownListBoxBorderSize();
	virtual void __fastcall DropDownListBoxDrawBorder(HDC DC, System::Uitypes::TColor AColor, const System::Types::TRect &ARect);
	__classmethod virtual bool __fastcall SubMenuControlHasBand();
	__classmethod virtual bool __fastcall SubMenuControlIsOffsetRecentGroupNeeded();
	__classmethod virtual int __fastcall SubMenuControlArrowsOffset();
	__classmethod virtual int __fastcall SubMenuControlArrowWidth(int ATextSize);
	virtual int __fastcall SubMenuControlBeginGroupSize();
	__classmethod virtual int __fastcall SubMenuControlBorderSize();
	__classmethod virtual int __fastcall SubMenuControlNCBorderSize();
	__classmethod virtual int __fastcall SubMenuControlClientBorderSize();
	virtual void __fastcall SubMenuControlCalcDrawingConsts(Cxgraphics::TcxCanvas* ACanvas, int ATextSize, Cxgeometry::TdxScaleFactor* AScaleFactor, /* out */ int &AMenuArrowWidth, /* out */ int &AMarkSize);
	__classmethod virtual System::Types::TRect __fastcall SubMenuControlContentRectOffset(TdxBarSubMenuControl* ABarSubMenuControl);
	__classmethod virtual int __fastcall SubMenuControlDetachCaptionAreaSize(TdxBarSubMenuControl* ABarSubMenuControl);
	__classmethod virtual int __fastcall SubMenuControlGetBandSize(TdxBarSubMenuControl* ABarSubMenuControl);
	__classmethod virtual int __fastcall SubMenuControlGetControlContentIndent(TdxBarSubMenuControl* ABarSubMenuControl);
	__classmethod virtual int __fastcall SubMenuControlInternalBorderSize();
	__classmethod virtual int __fastcall SubMenuControlInternalBorderOffset();
	__classmethod virtual int __fastcall SubMenuControlMarkArrowSize(int AMarkSize);
	__classmethod virtual int __fastcall SubMenuControlNormalItemHeight(Cxgeometry::TdxScaleFactor* AScaleFactor);
	__classmethod System::Types::TRect __fastcall SubMenuControlGetItemIconRealRect(const System::Types::TRect &AItemRect, int AIconAreaSize, bool AIsRightToLeft);
	__classmethod virtual System::Types::TRect __fastcall SubMenuControlGetItemIconRect(const System::Types::TRect &AItemRect, int AIconAreaSize);
	__classmethod System::Types::TRect __fastcall SubMenuControlGetItemTextRealRect(TdxBarButtonLikeControlDrawParams* const ADrawParams, const System::Types::TRect &AItemRect);
	__classmethod virtual System::Types::TRect __fastcall SubMenuControlGetItemTextRect(TdxBarButtonLikeControlDrawParams* const ADrawParams, const System::Types::TRect &AItemRect);
	__classmethod virtual int __fastcall SubMenuControlGetItemTextIndent(TdxBarItemControlDrawParams* const ADrawParams);
	virtual System::Types::TRect __fastcall SubMenuControlBeginGroupRect(TdxBarSubMenuControl* ABarSubMenuControl, TdxBarItemControl* AControl, const System::Types::TRect &AItemRect);
	__classmethod virtual void __fastcall SubMenuControlOffsetDetachCaptionRect(TdxBarSubMenuControl* ABarSubMenuControl, System::Types::TRect &R);
	virtual void __fastcall SubMenuControlDrawScrollButton(TdxBarSubMenuControl* ABarSubMenuControl, Cxgraphics::TcxCanvas* ACanvas, Cxgraphics::TcxArrowDirection AArrowDirection);
	virtual void __fastcall SubMenuControlDrawBackground(TdxBarSubMenuControl* ABarSubMenuControl, Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, HBRUSH ABrush, System::Uitypes::TColor AColor);
	virtual void __fastcall SubMenuControlDrawBorder(TdxBarSubMenuControl* ABarSubMenuControl, HDC DC, const System::Types::TRect &R);
	virtual void __fastcall SubMenuControlDrawClientBorder(TdxBarSubMenuControl* ABarSubMenuControl, HDC DC, const System::Types::TRect &R, HBRUSH ABrush);
	virtual void __fastcall SubMenuControlDrawDetachCaption(TdxBarSubMenuControl* ABarSubMenuControl, HDC DC, const System::Types::TRect &R);
	virtual void __fastcall SubMenuControlDrawBeginGroup(TdxBarSubMenuControl* ABarSubMenuControl, TdxBarItemControl* AControl, Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABeginGroupRect);
	__classmethod virtual void __fastcall SubMenuControlDrawItemFrame(TdxBarSubMenuControl* ABarSubMenuControl, TdxBarItemControl* AControl, HDC DC, const System::Types::TRect &AItemRect, int AIndex);
	virtual void __fastcall SubMenuControlDrawSeparator(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect);
	__classmethod virtual void __fastcall SubMenuControlPrepareBkBrush(TdxBarSubMenuControl* ABarSubMenuControl, HBRUSH &ABkBrush);
	__classmethod virtual int __fastcall SubMenuControlTextSize(Cxgraphics::TcxCanvas* ACanvas, Cxgeometry::TdxScaleFactor* AScaleFactor);
	__classmethod virtual HBRUSH __fastcall SubMenuControlToolbarItemsBrush(TdxBarSubMenuControl* ABarSubMenuControl);
	virtual System::Types::TRect __fastcall ApplicationMenuContentButtonOffsets();
	virtual void __fastcall ApplicationMenuDrawBackground(TdxBarSubMenuControl* ABarSubMenuControl, Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, const System::Types::TRect &AItemsArea);
	virtual void __fastcall ApplicationMenuDrawButton(TdxBarApplicationMenuButtonControlDrawParams* const ADrawParams, System::Types::TRect &R);
	virtual System::Uitypes::TColor __fastcall ApplicationMenuButtonTextColor(bool AEnabled, bool ASelected);
	virtual System::Types::TRect __fastcall ApplicationMenuGetFrameSizes();
	virtual System::Uitypes::TColor __fastcall ExtraMenuButtonTextColor(bool AEnabled, bool ASelected);
	virtual void __fastcall ExtraMenuControlDrawBackground(TCustomdxBarControl* AExtraMenuControl, Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, HBRUSH ABrush, System::Uitypes::TColor AColor);
	virtual void __fastcall ExtraMenuControlDrawBeginGroup(TCustomdxBarControl* AExtraMenuControl, Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABeginGroupRect, HBRUSH AToolbarBrush, bool AHorz);
	virtual void __fastcall ExtraMenuDrawButton(TdxBarExtraMenuButtonControlDrawParams* ADrawParams, const System::Types::TRect &ARect);
	virtual System::Uitypes::TColor __fastcall ExtraMenuHeaderTextColor();
	virtual int __fastcall ExtraMenuPinButtonSize();
	virtual int __fastcall ExtraMenuSeparatorSize();
	__classmethod virtual void __fastcall EditDrawInterior(TdxBarEditControl* ABarEditControl, TdxBarEdit* ABarEdit, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &R, TdxBarItemLink* ItemLink);
	virtual void __fastcall EditGetRealLookAndFeel(TdxBarManager* ABarManager, Cxlookandfeels::TcxLookAndFeel* ALookAndFeel);
	virtual System::Uitypes::TColor __fastcall EditGetEnabledBkColor(TdxBarCustomEditControl* ABarItemControl);
	virtual System::Uitypes::TColor __fastcall EditGetDisabledBkColor(TdxBarCustomEditControl* ABarItemControl);
	virtual System::Uitypes::TColor __fastcall EditGetBkColor(TdxBarEditLikeControlDrawParams* const ADrawParams);
	virtual System::Uitypes::TColor __fastcall EditGetEnabledTextColor();
	virtual System::Uitypes::TColor __fastcall EditGetDisabledTextColor();
	virtual System::Uitypes::TColor __fastcall EditGetTextColor(TdxBarCustomEditControl* ABarItemControl);
	virtual bool __fastcall EditButtonAllowOffsetContent();
	virtual bool __fastcall EditButtonAllowCompositeFrame();
	__classmethod virtual bool __fastcall EditButtonAllowHotTrack(TdxBarItemControlDrawParams* const ADrawParams);
	virtual bool __fastcall EditButtonIsCustomBorder();
	virtual bool __fastcall EditButtonIsCustomBackground(int AState);
	virtual void __fastcall EditButtonCorrectDefaultWidth(int &ADefaultWidth);
	virtual void __fastcall EditButtonDrawBackground(TdxBarEditLikeControlDrawParams* const ADrawParams, int AState, const System::Types::TRect &ARect, HBRUSH ABrush);
	virtual void __fastcall EditButtonDrawBorder(TdxBarItemControlDrawParams* const ADrawParams, int AState, System::Types::TRect &ADrawRect, /* out */ System::Types::TRect &AContentRect);
	__classmethod virtual void __fastcall CustomComboDrawItem(TdxBarCustomCombo* ABarCustomCombo, Vcl::Graphics::TCanvas* ACanvas, int AIndex, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState AState, bool AInteriorIsDrawing);
	virtual void __fastcall DrawEditLikeControl(TdxBarEditLikeControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	__classmethod virtual System::Types::TRect __fastcall EditControlBorderOffsets(TdxBarPaintType APaintType);
	virtual void __fastcall EditControlDrawBackground(TdxBarEditLikeControlDrawParams* const ADrawParams);
	virtual void __fastcall EditControlDrawBorder(TdxBarEditLikeControlDrawParams* const ADrawParams, System::Types::TRect &ARect);
	virtual void __fastcall EditControlDrawCaption(TdxBarEditLikeControlDrawParams* const ADrawParams);
	virtual void __fastcall EditControlDrawSelectionFrame(TdxBarEditLikeControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	virtual void __fastcall EditControlDrawGlyph(TdxBarEditLikeControlDrawParams* const ADrawParams);
	__classmethod virtual bool __fastcall EditControlCaptionBackgroundIsOpaque(TdxBarEditLikeControlDrawParams* const ADrawParams);
	__classmethod virtual bool __fastcall EditControlCaptionRightIndentIsOpaque(TdxBarEditLikeControlDrawParams* const ADrawParams);
	virtual void __fastcall EditControlDrawTextField(TdxBarEditControl* ABarEditControl, Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect);
	virtual System::Uitypes::TColor __fastcall EditControlGetBackgroundColor(TdxBarItemControlDrawParams* const ADrawParams);
	System::Types::TRect __fastcall EditControlGetContentRect(TdxBarPaintType APaintType, const System::Types::TRect &ARect);
	virtual System::Uitypes::TColor __fastcall EditControlGetTextColor(TdxBarItemControlDrawParams* const ADrawParams);
	__classmethod virtual bool __fastcall EditControlShowIconDefault(TdxBarEditLikeControlDrawParams* const ADrawParams);
	__classmethod virtual System::Types::TRect __fastcall EditControlIndents(TdxBarEditLikeControlDrawParams* const ADrawParams, TdxBarItemControlPart ADrawAreaType);
	__classmethod int __fastcall EditControlCaptionLeftIndent(TdxBarEditLikeControlDrawParams* const ADrawParams);
	__classmethod int __fastcall EditControlCaptionRightIndent(TdxBarEditLikeControlDrawParams* const ADrawParams);
	__classmethod virtual int __fastcall EditControlCaptionSubMenuIndent(TdxBarEditLikeControlDrawParams* const ADrawParams);
	__classmethod virtual int __fastcall EditControlCaptionSimpleIndent(TdxBarEditLikeControlDrawParams* const ADrawParams);
	__classmethod virtual int __fastcall EditControlCaptionComplexIndent(TdxBarEditLikeControlDrawParams* const ADrawParams);
	__classmethod virtual System::Types::TRect __fastcall EditControlSubMenuGlyphIndents(TdxBarEditLikeControlDrawParams* const ADrawParams);
	__classmethod virtual HBRUSH __fastcall EditControlGetRightCaptionIndentBrush(TdxBarCustomEditControl* ABarEditControl);
	__classmethod virtual bool __fastcall EditControlGlyphIsDrawSelected(TdxBarCustomEditControl* ABarEditControl);
	__classmethod virtual void __fastcall EditControlUpdateWndText(TdxBarEditControl* ABarEditControl, HWND AHandle, bool ANotEqual);
	__classmethod virtual bool __fastcall HasEditControlExternalFrame(TdxBarPaintType APaintType, bool ASelected);
	virtual bool __fastcall ColorComboHasCompleteFrame();
	virtual bool __fastcall IsCustomColorButtonVisible(TdxBarColorComboControlDrawParams* const ADrawParams);
	virtual void __fastcall ColorComboCorrectFrameRect(TdxBarColorComboControlDrawParams* const ADrawParams, System::Types::TRect &ARect);
	virtual int __fastcall GetDotSpaceAfter(int ADotWidth);
	virtual System::Types::TRect __fastcall GetCustomColorButtonBounds(TdxBarColorComboControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	virtual int __fastcall GetCustomColorButtonWidth(TdxBarPaintType APaintType, const System::Types::TRect &ARect);
	virtual System::Types::TRect __fastcall GetCustomColorButtonIndents(TdxBarPaintType APaintType);
	virtual void __fastcall ColorComboDrawCustomButton(TdxBarColorComboControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	virtual void __fastcall ColorComboDrawCustomButtonAdjacentZone(TdxBarColorComboControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	virtual void __fastcall SysPanelCalcSize(System::Types::TRect &AClientRect, System::Types::TRect &AGripRect, System::Types::TRect &ACloseButtonRect, Dxcore::TdxCorner &Corner, TdxBarItem* Combo, bool AllowResizing, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall SysPanelDraw(HWND AHandle, bool AllowResizing, bool MouseAboveCloseButton, bool CloseButtonIsTracking, const System::Types::TRect &CloseButtonRect, const System::Types::TRect &GripRect, Dxcore::TdxCorner Corner, Cxgeometry::TdxScaleFactor* AScaleFactor);
	__classmethod virtual bool __fastcall IsDateNavigatorFlat();
	virtual void __fastcall DateNavigatorDrawButton(TdxBarItem* ABarItem, HDC DC, const System::Types::TRect &R, const System::UnicodeString ACaption, bool APressed, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Uitypes::TColor __fastcall DateNavigatorHeaderColor();
	virtual System::Types::TPoint __fastcall GetSpinEditArrowPos(TdxBarSpinEditDrawParams* const ADrawParams, const System::Types::TRect &ARect, int AButtonIndex);
	virtual void __fastcall SpinEditCorrectFrameRect(TdxBarItemControlDrawParams* const ADrawParams, System::Types::TRect &ARect);
	virtual System::Types::TSize __fastcall GetSpinEditArrowSize(int AHeight);
	virtual System::Types::TRect __fastcall GetSpinEditButtonBounds(TdxBarSpinEditDrawParams* const ADrawParams, const System::Types::TRect &ARect, TdxBarSpinEditButton AButton);
	virtual System::Types::TRect __fastcall GetSpinEditButtonIndents(TdxBarPaintType APaintType);
	virtual int __fastcall GetSpinEditButtonWidth(TdxBarPaintType APaintType, const System::Types::TRect &ARect);
	virtual Cxlookandfeelpainters::TcxButtonState __fastcall GetSpinEditButtonState(TdxBarSpinEditDrawParams* const ADrawParams, int AButtonIndex);
	virtual void __fastcall SpinEditControlDrawButton(TdxBarSpinEditDrawParams* const ADrawParams, const System::Types::TRect &ARect, int AButtonIndex);
	virtual void __fastcall SpinEditControlDrawButtonsAdjacentZone(TdxBarSpinEditDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	__classmethod virtual System::Uitypes::TColor __fastcall ProgressControlBarBrushColor();
	virtual bool __fastcall CanUpdateBarPartly();
	virtual int __fastcall ProgressControlBarHeight(TdxBarItemControl* ABarItemControl);
	__classmethod virtual int __fastcall ProgressControlIndent(TdxBarItemControlDrawParams* const ADrawParams);
	virtual void __fastcall ProgressControlDrawBar(TdxBarProgressControlDrawParams* const ADrawParams, const System::Types::TRect &BarR, System::Uitypes::TColor ABarBrushColor);
	virtual void __fastcall ProgressControlDrawBackground(TdxBarItemControlDrawParams* const ADrawParams, System::Types::TRect &BarR);
	virtual void __fastcall ProgressControlDrawChunks(TdxBarItemControlDrawParams* const ADrawParams, const System::Types::TRect &BarR, HBRUSH ABarBrush);
	virtual void __fastcall ProgressControlFillContent(TdxBarItemControlDrawParams* const ADrawParams, const System::Types::TRect &R, HBRUSH ABarBrush);
	virtual void __fastcall ProgressControlFillDiscreteContent(TdxBarItemControlDrawParams* const ADrawParams, const System::Types::TRect &R, HBRUSH ABarBrush);
	__classmethod virtual int __fastcall ContainerControlSubMenuOffset();
	__classmethod virtual HBRUSH __fastcall InPlaceSubItemControlBrush();
	__classmethod virtual int __fastcall InPlaceSubItemGetArrowWidth(TdxBarInPlaceSubItemControlDrawParams* const ADrawParams);
	__classmethod virtual int __fastcall InPlaceSubItemGetTextIndent();
	virtual bool __fastcall InPlaceSubItemControlIsFlatItemText(TdxBarInPlaceSubItemControlDrawParams* const ADrawParams);
	virtual bool __fastcall InPlaceSubItemControlIsArrowSelected(TdxBarInPlaceSubItemControlDrawParams* const ADrawParams);
	virtual void __fastcall InPlaceSubItemControlDrawArrow(TdxBarInPlaceSubItemControlDrawParams* const ADrawParams, Cxgraphics::TcxArrowDirection ADirection, const System::Types::TRect &ARect);
	virtual void __fastcall InPlaceSubItemControlDrawBackground(TdxBarInPlaceSubItemControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	virtual void __fastcall InPlaceSubItemControlDrawInMenu(TdxBarInPlaceSubItemControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	virtual void __fastcall DrawStaticBackground(TdxBarStaticLikeControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	virtual void __fastcall DrawStaticBorder(TdxBarStaticLikeControlDrawParams* const ADrawParams, System::Types::TRect &ARect);
	virtual void __fastcall DrawStaticGlyphAndCaption(TdxBarStaticLikeControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	virtual void __fastcall DrawStaticLikeControl(TdxBarStaticLikeControlDrawParams* const ADrawParams, System::Types::TRect &ARect, const System::Types::TRect &AIndentsRect);
	__classmethod virtual bool __fastcall StaticBackgroundIsOpaque(TdxBarItemControlDrawParams* const ADrawParams);
	virtual System::Types::TRect __fastcall StaticControlGetBorderOffsets(TCustomdxBarControl* AParent, TdxBarStaticBorderStyle ABorderStyle);
	__classmethod virtual System::Types::TRect __fastcall SeparatorControlGetIndents(TdxBarSeparatorControlDrawParams* const ADrawParams, TdxBarItemControlPart ADrawAreaType);
	virtual void __fastcall SeparatorControlGetTextColors(TdxBarItemControl* ABarItemControl, bool AEnabled, bool ASelected, bool AFlat, System::Uitypes::TColor &AColor1, System::Uitypes::TColor &AColor2);
	virtual int __fastcall SeparatorControlSeparatorSize();
	virtual int __fastcall SubMenuGetSeparatorSize();
	virtual void __fastcall DrawSeparatorGlyphAndCaption(TdxBarSeparatorControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	virtual void __fastcall DrawSeparatorControl(TdxBarSeparatorControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	virtual void __fastcall DrawSeparatorControlLine(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R);
	virtual void __fastcall DropDownGalleryDrawBackground(HDC DC, const System::Types::TRect &R);
	virtual void __fastcall DropDownGalleryDrawBorder(TdxBarSubMenuControl* ABarSubMenuControl, HDC DC, const System::Types::TRect &R);
	virtual void __fastcall DropDownGalleryDrawBottomSizeGrip(HDC DC, const System::Types::TRect &R);
	virtual void __fastcall DropDownGalleryDrawBottomSizeGripEx(TdxBarSubMenuControl* ABarSubMenuControl, HDC DC, const System::Types::TRect &R);
	virtual void __fastcall DropDownGalleryDrawBottomSizingBand(HDC DC, const System::Types::TRect &R);
	virtual void __fastcall DropDownGalleryDrawBottomVerticalSizeGrip(HDC DC, const System::Types::TRect &R);
	virtual void __fastcall DropDownGalleryDrawFilterBand(HDC DC, const System::Types::TRect &R);
	virtual void __fastcall DropDownGalleryDrawGroupHeaderBackground(HDC DC, const System::Types::TRect &R);
	virtual void __fastcall DropDownGalleryDrawItem(HDC DC, const System::Types::TRect &R, int AState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DropDownGalleryDrawScrollBarBackgroundEx(TdxBarSubItemControl* ABarSubItemControl, HDC DC, const System::Types::TRect &R, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DropDownGalleryDrawScrollBarBackground(HDC DC, const System::Types::TRect &R, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DropDownGalleryDrawScrollBarPart(HDC DC, const System::Types::TRect &R, Cxlookandfeelpainters::TcxScrollBarPart APart, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DropDownGalleryDrawScrollBarPartEx(TdxBarSubItemControl* ABarSubItemControl, HDC DC, const System::Types::TRect &R, Cxlookandfeelpainters::TcxScrollBarPart APart, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DropDownGalleryDrawSelectionFrame(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, int AState);
	virtual void __fastcall DropDownGalleryDrawTopSizeGrip(HDC DC, const System::Types::TRect &R);
	virtual void __fastcall DropDownGalleryDrawTopSizeGripEx(TdxBarSubMenuControl* ABarSubMenuControl, HDC DC, const System::Types::TRect &R);
	virtual void __fastcall DropDownGalleryDrawTopSizingBand(HDC DC, const System::Types::TRect &R);
	virtual void __fastcall DropDownGalleryDrawTopVerticalSizeGrip(HDC DC, const System::Types::TRect &R);
	virtual int __fastcall DropDownGalleryGetClientBorderSize();
	virtual System::Types::TRect __fastcall DropDownGalleryGetContentOffsets(int APart);
	virtual System::Uitypes::TColor __fastcall DropDownGalleryGetFilterBandSeparatorColor();
	virtual System::Uitypes::TColor __fastcall DropDownGalleryGetFilterBandTextColor(int AState);
	virtual System::Uitypes::TColor __fastcall DropDownGalleryGetGroupHeaderTextColor();
	virtual System::UnicodeString __fastcall DropDownGalleryGetName();
	virtual int __fastcall DropDownGalleryGetNCBorderSize();
	virtual int __fastcall DropDownGalleryGetScrollBarWidth(int AControlHeight, const System::Types::TRect &AControlMargins);
	virtual int __fastcall DropDownGalleryGetSizingBandHeight(int AIconSize, int ATextSize, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DropDownGalleryItemGetTextColors(TdxBarItemControl* ABarItemControl, bool AEnabled, bool ASelected, bool AFlat, System::Uitypes::TColor &AColor1, System::Uitypes::TColor &AColor2);
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall ScreenTipGetColorPalette();
	virtual System::Uitypes::TColor __fastcall ScreenTipGetDescriptionTextColor();
	virtual System::Uitypes::TColor __fastcall ScreenTipGetTitleTextColor();
	virtual int __fastcall ScreenTipGetFooterLineSize();
	virtual void __fastcall ScreenTipDrawBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect);
	virtual void __fastcall ScreenTipDrawFooterLine(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarStandardPainter : public TdxBarPainter
{
	typedef TdxBarPainter inherited;
	
protected:
	virtual void __fastcall DrawGlyphBorder(TdxBarItemControl* ABarItemControl, HDC DC, HBRUSH ABrush, bool NeedBorder, const System::Types::TRect &R, TdxBarPaintType PaintType, bool IsGlyphEmpty, bool Selected, bool Down, bool DrawDowned, bool ADroppedDown, bool IsSplit);
	virtual void __fastcall DrawGlyphCheckMark(TdxBarItemControl* ABarItemControl, HDC DC, int X, int Y, int DoubleSize);
	__classmethod virtual bool __fastcall IgnoreGlyphOpaque();
	__classmethod virtual bool __fastcall BarIsBarSmall(TdxBarControl* ABarControl, const System::Types::TRect &R);
	__classmethod virtual void __fastcall BarDrawMarkAtPos(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &ItemRect, int Offset);
	virtual void __fastcall BarDrawMarkBackground(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &ItemRect, HBRUSH AToolbarBrush);
	virtual Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetLookAndFeelPainter();
	
public:
	virtual int __fastcall GetBorderSize();
	__classmethod virtual System::Types::TRect __fastcall GetCaptionOffsets();
	__classmethod virtual int __fastcall GlyphDownShift(TdxBarItemControl* ABarItemControl);
	__classmethod virtual int __fastcall GlyphDrawDownedShift(TdxBarItemControl* ABarItemControl, bool ADown);
	__classmethod virtual int __fastcall LoweredBorderSize(TdxBarItemControl* ABarItemControl);
	__classmethod virtual void __fastcall DrawDisabledShadowRect(TdxBarItemControl* ABarItemControl, HDC DC, const System::Types::TRect &R);
	virtual void __fastcall DrawItemBackgroundInSubMenu(TdxBarButtonLikeControlDrawParams* const ADrawParams, const System::Types::TRect &R);
	__classmethod virtual void __fastcall FrameAndFillRect(TdxBarItemControl* ABarItemControl, HDC DC, System::Types::TRect &R, bool Enabled, bool Selected, bool Pressed);
	__classmethod virtual HBRUSH __fastcall GlyphBkgndBrush(TdxBarItemControl* ABarItemControl, TdxBarPaintType APaintType, bool AGlyphEmpty, bool ASelected, bool ADowned, bool ADrawDowned, bool ADroppedDown, bool AForceUseBkBrush, bool AGrayScale);
	virtual int __fastcall BeforeFingersSize();
	virtual int __fastcall FingersSize(TdxBarControl* ABarControl);
	__classmethod virtual int __fastcall SubMenuBeginGroupIndent();
	__classmethod virtual void __fastcall GetEditTextVerticalOffsets(/* out */ int &ATop, /* out */ int &ABottom);
	__classmethod virtual bool __fastcall BarAllowHotTrack();
	__classmethod virtual bool __fastcall BarAllowQuickCustomizing();
	virtual void __fastcall BarDrawCloseButton(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &R);
	virtual void __fastcall BarDrawDockedBarBorder(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &R, HBRUSH AToolbarBrush);
	virtual void __fastcall BarDrawFloatingBarBorder(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &R, const System::Types::TRect &CR, HBRUSH AToolbarBrush);
	virtual void __fastcall BarDrawMDIButton(TdxBarControl* ABarControl, TdxBarMDIButton AButton, int AState, HDC DC, const System::Types::TRect &R);
	__classmethod virtual int __fastcall BarHorSize();
	virtual System::Types::TRect __fastcall BarMarkItemRect(TdxBarControl* ABarControl);
	__classmethod virtual int __fastcall BarTopSize();
	__classmethod virtual int __fastcall BarBottomSize();
	__classmethod virtual bool __fastcall BarUseSystemClose();
	__classmethod virtual bool __fastcall BarUseSystemNCBorder();
	virtual void __fastcall DrawButtonControlArrowBackground(TdxBarButtonLikeControlDrawParams* const ADrawParams, System::Types::TRect &R1, HBRUSH ABrush);
	__classmethod virtual void __fastcall ComboControlDrawSimpleButton(TdxBarEditLikeControlDrawParams* const ADrawParams, System::Types::TRect &ARect, HBRUSH ABrush);
	virtual void __fastcall DropDownListBoxDrawBorder(HDC DC, System::Uitypes::TColor AColor, const System::Types::TRect &ARect);
	__classmethod virtual void __fastcall SubMenuControlDrawItemFrame(TdxBarSubMenuControl* ABarSubMenuControl, TdxBarItemControl* AControl, HDC DC, const System::Types::TRect &AItemRect, int AIndex);
	__classmethod virtual bool __fastcall SubMenuControlIsOffsetRecentGroupNeeded();
	__classmethod virtual System::Types::TRect __fastcall SubMenuControlContentRectOffset(TdxBarSubMenuControl* ABarSubMenuControl);
	__classmethod virtual int __fastcall SubMenuControlClientBorderSize();
	virtual bool __fastcall CanUpdateBarPartly();
public:
	/* TdxBarPainter.Create */ inline __fastcall virtual TdxBarStandardPainter(NativeUInt AData) : TdxBarPainter(AData) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarStandardPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarEnhancedPainter : public TdxBarStandardPainter
{
	typedef TdxBarStandardPainter inherited;
	
protected:
	__classmethod virtual void __fastcall BarDrawMarkAtPos(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &ItemRect, int Offset);
	virtual void __fastcall BarDrawMarkBackground(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &ItemRect, HBRUSH AToolbarBrush);
	
public:
	virtual int __fastcall BeforeFingersSize();
	virtual int __fastcall FingersSize(TdxBarControl* ABarControl);
	__classmethod virtual int __fastcall SubMenuBeginGroupIndent();
	__classmethod virtual bool __fastcall BarAllowQuickCustomizing();
	virtual void __fastcall BarDrawDockedBarBorder(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &R, HBRUSH AToolbarBrush);
public:
	/* TdxBarPainter.Create */ inline __fastcall virtual TdxBarEnhancedPainter(NativeUInt AData) : TdxBarStandardPainter(AData) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarEnhancedPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarFlatPainter : public TdxBarPainter
{
	typedef TdxBarPainter inherited;
	
protected:
	virtual void __fastcall DrawGlyphBorder(TdxBarItemControl* ABarItemControl, HDC ADC, HBRUSH ABrush, bool ANeedBorder, const System::Types::TRect &R, TdxBarPaintType APaintType, bool AGlyphEmpty, bool ASelected, bool ADowned, bool ADrawDowned, bool ADroppedDown, bool AIsSplit);
	virtual void __fastcall DrawGlyphCheckMark(TdxBarItemControl* ABarItemControl, HDC DC, int X, int Y, int DoubleSize);
	__classmethod virtual void __fastcall DrawFrameRect(TdxBarItemControl* ABarItemControl, HDC ADC, const System::Types::TRect &ARect, HBRUSH ABrush, TdxBarPaintType APaintType, bool ASelected, bool ADowned);
	__classmethod virtual void __fastcall FrameFlatSelRect(HDC DC, const System::Types::TRect &R);
	__classmethod virtual HBRUSH __fastcall GetToolbarBrush(TdxBarItemControl* ABarItemControl);
	__classmethod virtual System::Uitypes::TColor __fastcall BarCaptionBkColor(TdxBarControl* ABarControl, bool AMainFormActive);
	__classmethod virtual System::Uitypes::TColor __fastcall BarMarkArrowColor(TdxBarControl* ABarControl, TdxBarMarkState AState);
	virtual void __fastcall BarDrawMarkBackground(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &ItemRect, HBRUSH AToolbarBrush);
	__classmethod virtual void __fastcall BarOffsetFloatingBarCaption(TdxBarControl* ABarControl, int &X, System::Types::TRect &R);
	__classmethod virtual int __fastcall GetDrawMarkElementColor(TdxBarControl* ABarControl);
	virtual void __fastcall SubMenuControlDrawNonRecentGroupSeparator(TdxBarSubMenuControl* ABarSubMenuControl, Cxgraphics::TcxCanvas* ACanvas, Cxgraphics::TcxArrowDirection AArrowDirection);
	virtual void __fastcall SubMenuControlDrawMarkSelection(TdxBarSubMenuControl* ABarSubMenuControl, HDC ADC, const System::Types::TRect &AMarkRect);
	virtual void __fastcall DrawSpinEditArrow(TdxBarSpinEditDrawParams* const ADrawParams, const System::Types::TPoint &AArrowPos, int AButtonIndex);
	__classmethod virtual System::Uitypes::TColor __fastcall GetSysPanelBorderColor();
	virtual Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetLookAndFeelPainter();
	
public:
	virtual void __fastcall CalculateSpinEditParts(TdxBarSpinEditDrawParams* const ADrawParams, System::Types::TRect *AParts, const int AParts_High, System::Types::TRect *AAreaParts, const int AAreaParts_High);
	virtual int __fastcall GetBorderSize();
	__classmethod virtual int __fastcall GetControlCaptionOffset(TdxBarItemControl* ABarItemControl);
	virtual void __fastcall DrawItemBackgroundInSubMenu(TdxBarButtonLikeControlDrawParams* const ADrawParams, const System::Types::TRect &R);
	__classmethod virtual void __fastcall DrawLowered(HDC DC, System::Types::TRect &R);
	virtual void __fastcall DrawStaticBorder(TdxBarStaticLikeControlDrawParams* const ADrawParams, System::Types::TRect &ARect);
	__classmethod virtual void __fastcall FrameAndFillRect(TdxBarItemControl* ABarItemControl, HDC DC, System::Types::TRect &R, bool Enabled, bool Selected, bool Pressed);
	__classmethod virtual HBRUSH __fastcall GlyphBkgndBrush(TdxBarItemControl* ABarItemControl, TdxBarPaintType APaintType, bool AGlyphEmpty, bool ASelected, bool ADowned, bool ADrawDowned, bool ADroppedDown, bool AForceUseBkBrush, bool AGrayScale);
	__classmethod virtual bool __fastcall IsFlatGlyphImage();
	__classmethod virtual bool __fastcall IsFlatItemText();
	__classmethod virtual bool __fastcall IsGlyphImageBackgroundOpaque(TdxBarItemControl* ABarItemControl, bool ADown, bool ADrawDowned, bool ASelected, bool AGlyphEmpty);
	__classmethod virtual bool __fastcall IsGlyphImageHasShadow();
	__classmethod virtual int __fastcall LoweredBorderSize(TdxBarItemControl* ABarItemControl);
	__classmethod virtual HBRUSH __fastcall StaticBorderBrush(TdxBarItemControl* ABarItemControl, TdxBarStaticBorderStyle ABorderStyle);
	__classmethod virtual int __fastcall TextAreaOffset(TdxBarItemControl* ABarItemControl);
	virtual int __fastcall BeforeFingersSize();
	virtual int __fastcall FingersSize(TdxBarControl* ABarControl);
	__classmethod virtual int __fastcall RealButtonArrowWidth(TdxBarManager* ABarManager);
	__classmethod virtual int __fastcall RealLargeButtonArrowWidth(TdxBarManager* ABarManager);
	__classmethod virtual int __fastcall SubMenuBeginGroupIndent();
	__classmethod virtual bool __fastcall BarChildrenHaveShadows(TCustomdxBarControl* ABarControl);
	__classmethod virtual void __fastcall BarDrawBarControlOwner(TCustomdxBarControl* ACustomBarControl, HDC DC, const System::Types::TRect &R, TCustomdxBarControl* ABarControl);
	__classmethod virtual void __fastcall BarDrawBarControlOwnerBorder(TCustomdxBarControl* ACustomBarControl, HDC DC, const System::Types::TRect &R, TdxBarItemControl* ABarItemControl, TCustomdxBarControl* ABarControl);
	__classmethod virtual void __fastcall BarDrawBarControlOwnerFrame(TCustomdxBarControl* ACustomBarControl, HDC DC, const System::Types::TRect &R);
	__classmethod virtual void __fastcall BarDrawBarControlOwnerLink(TCustomdxBarControl* ACustomBarControl, HDC DC, const System::Types::TRect &R, const System::Types::TRect &ALinkR, TdxBarItemControl* ABarItemControl);
	__classmethod virtual HBRUSH __fastcall BarToolbarBrush(TCustomdxBarControl* ABarControl);
	__classmethod virtual HBRUSH __fastcall BarToolbarBrushEx(TdxBarControl* ABarControl);
	__classmethod virtual HBRUSH __fastcall BarToolbarDownedBrush(TCustomdxBarControl* ABarControl);
	__classmethod virtual HBRUSH __fastcall BarToolbarDownedSelBrush(TCustomdxBarControl* ABarControl);
	__classmethod virtual HBRUSH __fastcall BarToolbarSelBrush(TCustomdxBarControl* ABarControl);
	virtual int __fastcall BarBeginGroupSideSize();
	virtual int __fastcall BarBeginGroupSize();
	virtual void __fastcall BarDrawBeginGroup(TCustomdxBarControl* ABarControl, HDC DC, const System::Types::TRect &ABeginGroupRect, HBRUSH AToolbarBrush, bool AHorz);
	virtual void __fastcall BarDrawCloseButton(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &R);
	virtual void __fastcall BarDrawDockedBarBorder(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &R, HBRUSH AToolbarBrush);
	virtual void __fastcall BarDrawFloatingBarBorder(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &R, const System::Types::TRect &CR, HBRUSH AToolbarBrush);
	virtual void __fastcall BarDrawMark(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &MarkR);
	virtual void __fastcall BarDrawMDIButton(TdxBarControl* ABarControl, TdxBarMDIButton AButton, int AState, HDC DC, const System::Types::TRect &R);
	__classmethod virtual HBRUSH __fastcall BarToolbarBrushEx2(TdxBarControl* ABarControl);
	__classmethod virtual void __fastcall DrawQuickCustItemFrame(TdxBarItemControl* ABarItemControl, HDC DC, System::Types::TRect &R, System::Types::TRect &ARect, bool Selected);
	__classmethod virtual void __fastcall DrawQuickCustItemFrameSelected(TdxBarItemControl* ABarItemControl, HDC DC, const System::Types::TRect &WholeR, const System::Types::TRect &R, bool Selected);
	__classmethod virtual bool __fastcall IsQuickControlPopupOnRight();
	virtual HBRUSH __fastcall ButtonControlArrowBrush(TdxBarItemControlDrawParams* const ADrawParams);
	__classmethod virtual void __fastcall CorrectButtonControlDefaultHeight(int &DefaultHeight);
	__classmethod virtual void __fastcall CorrectButtonControlDefaultWidth(int &DefaultWidth);
	virtual void __fastcall DrawButtonControlArrowBackground(TdxBarButtonLikeControlDrawParams* const ADrawParams, System::Types::TRect &R1, HBRUSH ABrush);
	virtual System::Uitypes::TColor __fastcall ComboControlArrowColor(TdxBarItemControlDrawParams* ADrawParams);
	virtual HBRUSH __fastcall ComboControlButtonBrush(TdxBarItemControlDrawParams* const ADrawParams);
	__classmethod virtual void __fastcall ComboControlDrawSimpleButton(TdxBarEditLikeControlDrawParams* const ADrawParams, System::Types::TRect &ARect, HBRUSH ABrush);
	__classmethod virtual int __fastcall SubMenuControlArrowsOffset();
	virtual System::Types::TRect __fastcall SubMenuControlBeginGroupRect(TdxBarSubMenuControl* ABarSubMenuControl, TdxBarItemControl* AControl, const System::Types::TRect &AItemRect);
	virtual int __fastcall SubMenuControlBeginGroupSize();
	virtual void __fastcall SubMenuControlCalcDrawingConsts(Cxgraphics::TcxCanvas* ACanvas, int ATextSize, Cxgeometry::TdxScaleFactor* AScaleFactor, /* out */ int &AMenuArrowWidth, /* out */ int &AMarkSize);
	__classmethod virtual int __fastcall SubMenuControlDetachCaptionAreaSize(TdxBarSubMenuControl* ABarSubMenuControl);
	__classmethod virtual System::Types::TRect __fastcall SubMenuControlGetItemIconRect(const System::Types::TRect &AItemRect, int AIconAreaSize);
	__classmethod virtual System::Types::TRect __fastcall SubMenuControlGetItemTextRect(TdxBarButtonLikeControlDrawParams* const ADrawParams, const System::Types::TRect &AItemRect);
	__classmethod virtual int __fastcall SubMenuControlGetItemTextIndent(TdxBarItemControlDrawParams* const ADrawParams);
	virtual void __fastcall SubMenuControlDrawBorder(TdxBarSubMenuControl* ABarSubMenuControl, HDC DC, const System::Types::TRect &R);
	virtual void __fastcall SubMenuControlDrawClientBorder(TdxBarSubMenuControl* ABarSubMenuControl, HDC DC, const System::Types::TRect &R, HBRUSH ABrush);
	virtual void __fastcall SubMenuControlDrawDetachCaption(TdxBarSubMenuControl* ABarSubMenuControl, HDC DC, const System::Types::TRect &R);
	virtual void __fastcall SubMenuControlDrawBeginGroup(TdxBarSubMenuControl* ABarSubMenuControl, TdxBarItemControl* AControl, Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABeginGroupRect);
	virtual void __fastcall SubMenuControlDrawSeparator(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect);
	__classmethod virtual System::Uitypes::TColor __fastcall SubMenuControlGetSeparatorColor();
	__classmethod virtual int __fastcall SubMenuControlMarkArrowSize(int AMarkSize);
	__classmethod virtual int __fastcall SubMenuControlNormalItemHeight(Cxgeometry::TdxScaleFactor* AScaleFactor);
	__classmethod virtual void __fastcall SubMenuControlOffsetDetachCaptionRect(TdxBarSubMenuControl* ABarSubMenuControl, System::Types::TRect &R);
	__classmethod virtual int __fastcall SubMenuControlTextSize(Cxgraphics::TcxCanvas* ACanvas, Cxgeometry::TdxScaleFactor* AScaleFactor);
	__classmethod virtual HBRUSH __fastcall SubMenuControlToolbarItemsBrush(TdxBarSubMenuControl* ABarSubMenuControl);
	__classmethod virtual void __fastcall CustomComboDrawItem(TdxBarCustomCombo* ABarCustomCombo, Vcl::Graphics::TCanvas* ACanvas, int AIndex, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState AState, bool AInteriorIsDrawing);
	__classmethod virtual System::Types::TRect __fastcall EditControlBorderOffsets(TdxBarPaintType APaintType);
	virtual void __fastcall EditControlDrawBorder(TdxBarEditLikeControlDrawParams* const ADrawParams, System::Types::TRect &ARect);
	virtual void __fastcall EditControlDrawSelectionFrame(TdxBarEditLikeControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	__classmethod virtual bool __fastcall EditControlCaptionRightIndentIsOpaque(TdxBarEditLikeControlDrawParams* const ADrawParams);
	__classmethod virtual int __fastcall EditControlCaptionSubMenuIndent(TdxBarEditLikeControlDrawParams* const ADrawParams);
	__classmethod virtual int __fastcall EditControlCaptionSimpleIndent(TdxBarEditLikeControlDrawParams* const ADrawParams);
	__classmethod virtual int __fastcall EditControlCaptionComplexIndent(TdxBarEditLikeControlDrawParams* const ADrawParams);
	__classmethod virtual System::Types::TRect __fastcall EditControlSubMenuGlyphIndents(TdxBarEditLikeControlDrawParams* const ADrawParams);
	__classmethod virtual HBRUSH __fastcall EditControlGetRightCaptionIndentBrush(TdxBarCustomEditControl* ABarEditControl);
	__classmethod virtual bool __fastcall EditControlGlyphIsDrawSelected(TdxBarCustomEditControl* ABarEditControl);
	__classmethod virtual bool __fastcall HasEditControlExternalFrame(TdxBarPaintType APaintType, bool ASelected);
	virtual bool __fastcall CanUpdateBarPartly();
	__classmethod virtual bool __fastcall IsDateNavigatorFlat();
	virtual void __fastcall DateNavigatorDrawButton(TdxBarItem* ABarItem, HDC DC, const System::Types::TRect &R, const System::UnicodeString ACaption, bool APressed, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall SpinEditControlDrawButton(TdxBarSpinEditDrawParams* const ADrawParams, const System::Types::TRect &ARect, int AButtonIndex);
	__classmethod virtual int __fastcall ContainerControlSubMenuOffset();
	virtual bool __fastcall InPlaceSubItemControlIsFlatItemText(TdxBarInPlaceSubItemControlDrawParams* const ADrawParams);
	virtual bool __fastcall InPlaceSubItemControlIsArrowSelected(TdxBarInPlaceSubItemControlDrawParams* const ADrawParams);
public:
	/* TdxBarPainter.Create */ inline __fastcall virtual TdxBarFlatPainter(NativeUInt AData) : TdxBarPainter(AData) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarFlatPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarOffice11Painter : public TdxBarFlatPainter
{
	typedef TdxBarFlatPainter inherited;
	
protected:
	virtual void __fastcall DrawGlyphBorder(TdxBarItemControl* ABarItemControl, HDC DC, HBRUSH ABrush, bool NeedBorder, const System::Types::TRect &R, TdxBarPaintType PaintType, bool IsGlyphEmpty, bool Selected, bool Down, bool DrawDowned, bool ADroppedDown, bool IsSplit);
	__classmethod virtual void __fastcall DrawItemArrow(HDC DC, const System::Types::TRect &R, Cxgeometry::TdxScaleFactor* AScaleFactor, Cxgraphics::TcxArrowDirection ArrowType, bool Enabled, bool Selected, bool Flat, System::Uitypes::TColor AColor = (System::Uitypes::TColor)(0x20000000));
	virtual void __fastcall DrawLargeItemArrow(HDC DC, const System::Types::TRect &R, Cxgraphics::TcxArrowDirection ArrowType, int Size, bool Selected, bool Enabled, bool Flat, System::Uitypes::TColor AColor = (System::Uitypes::TColor)(0x20000000));
	__classmethod virtual void __fastcall DrawFrameRect(TdxBarItemControl* ABarItemControl, HDC ADC, const System::Types::TRect &ARect, HBRUSH ABrush, TdxBarPaintType APaintType, bool ASelected, bool ADowned);
	__classmethod virtual void __fastcall FrameFlatSelRect(HDC DC, const System::Types::TRect &R);
	__classmethod System::Types::TRect __fastcall GetBarGradientRect(TCustomdxBarControl* ABarControl);
	__classmethod void __fastcall GetDockColors(TdxDockControl* ADockControl, System::Uitypes::TColor &AColor1, System::Uitypes::TColor &AColor2);
	__classmethod void __fastcall GetMarkColors(TdxBarControl* ABarControl, System::Uitypes::TColor &AMarkColor1, System::Uitypes::TColor &AMarkColor2, System::Uitypes::TColor &AColor6, System::Uitypes::TColor &AColor9);
	__classmethod void __fastcall GetSelectedColors(TdxBarItemControl* ABarItemControl, bool ADown, bool ASelected, System::Uitypes::TColor &AColor1, System::Uitypes::TColor &AColor2);
	__classmethod virtual HBRUSH __fastcall GetToolbarBrush(TdxBarItemControl* ABarItemControl);
	virtual System::Uitypes::TColor __fastcall GetDefaultEnabledTextColor(TdxBarItemControl* ABarItemControl, bool ASelected, bool AFlat);
	virtual void __fastcall GetDisabledTextColors(TdxBarItemControl* ABarItemControl, bool ASelected, bool AFlat, System::Uitypes::TColor &AColor1, System::Uitypes::TColor &AColor2);
	__classmethod virtual bool __fastcall GetFaded(TCustomdxBarControl* ABarControl);
	__classmethod virtual bool __fastcall IgnoreNonRecentColor();
	__classmethod bool __fastcall IsMenuGradient(TdxBarItemControl* ABarItemControl);
	__classmethod bool __fastcall IsSimpleMark(TdxBarControl* ABarControl);
	__classmethod virtual System::Uitypes::TColor __fastcall BarCaptionBkColor(TdxBarControl* ABarControl, bool AMainFormActive);
	virtual System::Uitypes::TColor __fastcall BarCaptionColor(TdxBarControl* ABarControl);
	__classmethod virtual System::Uitypes::TColor __fastcall BarMarkArrowColor(TdxBarControl* ABarControl, TdxBarMarkState AState);
	__classmethod virtual void __fastcall BarDrawFingerElements(TCustomdxBarControl* ABarControl, HDC DC, const System::Types::TRect &ARect, bool AHorizontal);
	virtual void __fastcall BarDrawMarkBackground(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &ItemRect, HBRUSH AToolbarBrush);
	virtual void __fastcall BarDrawMarkElements(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &ItemRect);
	int __fastcall SubMenuControlMarkBorderSize();
	System::Types::TRect __fastcall SubMenuControlMarkContentRect(const System::Types::TRect &ADrawRect);
	virtual void __fastcall SubMenuControlDrawMarkContent(TdxBarSubMenuControl* ABarSubMenuControl, HDC DC, const System::Types::TRect &R, bool ASelected);
	virtual Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetLookAndFeelPainter();
	
public:
	virtual void __fastcall DrawItemBackgroundInSubMenu(TdxBarButtonLikeControlDrawParams* const ADrawParams, const System::Types::TRect &R);
	__classmethod virtual void __fastcall FrameAndFillRect(TdxBarItemControl* ABarItemControl, HDC DC, System::Types::TRect &R, bool Enabled, bool Selected, bool Pressed);
	__classmethod virtual bool __fastcall IsFlatGlyphImage();
	__classmethod virtual bool __fastcall IsGlyphImageHasShadow();
	__classmethod virtual bool __fastcall IsItemTextSelectedInverted();
	__classmethod virtual HBRUSH __fastcall StaticBorderBrush(TdxBarItemControl* ABarItemControl, TdxBarStaticBorderStyle ABorderStyle);
	virtual int __fastcall BeforeFingersSize();
	__classmethod virtual int __fastcall BorderSizeX(Cxgeometry::TdxScaleFactor* AScaleFactor);
	__classmethod virtual int __fastcall BorderSizeY(Cxgeometry::TdxScaleFactor* AScaleFactor);
	__classmethod virtual int __fastcall EmptyFingersSize();
	virtual void __fastcall DockControlFillBackground(TdxDockControl* ADockControl, HDC DC, const System::Types::TRect &ADestR, const System::Types::TRect &ASourceR, const System::Types::TRect &AWholeR, HBRUSH ABrush, System::Uitypes::TColor AColor);
	__classmethod virtual bool __fastcall IsNativeBackground();
	__classmethod virtual HBRUSH __fastcall BarControlOwnerBrush(TdxBarManager* ABarManager);
	__classmethod virtual void __fastcall BarDrawBarControlOwnerFrame(TCustomdxBarControl* ACustomBarControl, HDC DC, const System::Types::TRect &R);
	__classmethod virtual void __fastcall BarDrawBarControlOwnerLink(TCustomdxBarControl* ACustomBarControl, HDC DC, const System::Types::TRect &R, const System::Types::TRect &ALinkR, TdxBarItemControl* ABarItemControl);
	virtual void __fastcall BarDrawDockedBackground(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &ADestR, const System::Types::TRect &ASourceR, HBRUSH ABrush, System::Uitypes::TColor AColor);
	virtual void __fastcall BarDrawFloatingBackground(TCustomdxBarControl* ABarControl, HDC DC, const System::Types::TRect &ADestR, const System::Types::TRect &ASourceR, HBRUSH ABrush, System::Uitypes::TColor AColor);
	__classmethod virtual void __fastcall BarDrawOwnerLink(TCustomdxBarControl* ABarControl, HDC DC);
	virtual bool __fastcall BarHasShadow(TCustomdxBarControl* ABarControl);
	__classmethod virtual HBRUSH __fastcall BarToolbarBrush(TCustomdxBarControl* ABarControl);
	__classmethod virtual HBRUSH __fastcall BarToolbarBrushEx(TdxBarControl* ABarControl);
	__classmethod virtual HBRUSH __fastcall BarToolbarDownedBrush(TCustomdxBarControl* ABarControl);
	__classmethod virtual HBRUSH __fastcall BarToolbarDownedSelBrush(TCustomdxBarControl* ABarControl);
	__classmethod virtual HBRUSH __fastcall BarToolbarSelBrush(TCustomdxBarControl* ABarControl);
	virtual int __fastcall ComboBoxArrowWidth(TCustomdxBarControl* ABarControl, int cX);
	__classmethod virtual int __fastcall BarBeforeFingersIndent();
	virtual void __fastcall BarBorderPaintSizes(TdxBarControl* ABarControl, System::Types::TRect &R);
	virtual void __fastcall BarBorderSizes(TdxBar* ABar, TdxBarDockingStyle AStyle, System::Types::TRect &R);
	virtual void __fastcall BarDrawBeginGroup(TCustomdxBarControl* ABarControl, HDC DC, const System::Types::TRect &ABeginGroupRect, HBRUSH AToolbarBrush, bool AHorz);
	__classmethod virtual void __fastcall BarDrawCaptionElement(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &R, TdxBarMarkState AState);
	virtual void __fastcall BarDrawDockedBarBorder(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &R, HBRUSH AToolbarBrush);
	virtual void __fastcall BarDrawFloatingBarBorder(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &R, const System::Types::TRect &CR, HBRUSH AToolbarBrush);
	virtual void __fastcall BarDrawFloatingBarCaption(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &R, const System::Types::TRect &CR, HBRUSH AToolbarBrush, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Types::TRect __fastcall BarMarkRect(TdxBarControl* ABarControl);
	virtual void __fastcall BarMarkRectInvalidate(TdxBarControl* ABarControl);
	__classmethod virtual System::Uitypes::TColor __fastcall SubMenuControlGetSeparatorColor();
	__classmethod virtual HBRUSH __fastcall SubMenuControlToolbarItemsBrush(TdxBarSubMenuControl* ABarSubMenuControl);
	__classmethod virtual bool __fastcall SubMenuControlHasBand();
	__classmethod bool __fastcall SubMenuControlIsSingleMenuBorder(TdxBarSubMenuControl* ABarSubMenuControl);
	__classmethod virtual void __fastcall SubMenuControlOffsetDetachCaptionRect(TdxBarSubMenuControl* ABarSubMenuControl, System::Types::TRect &R);
	virtual void __fastcall SubMenuControlCalcDrawingConsts(Cxgraphics::TcxCanvas* ACanvas, int ATextSize, Cxgeometry::TdxScaleFactor* AScaleFactor, /* out */ int &AMenuArrowWidth, /* out */ int &AMarkSize);
	__classmethod virtual int __fastcall SubMenuControlDetachCaptionAreaSize(TdxBarSubMenuControl* ABarSubMenuControl);
	virtual void __fastcall SubMenuControlDrawBackground(TdxBarSubMenuControl* ABarSubMenuControl, Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, HBRUSH ABrush, System::Uitypes::TColor AColor);
	virtual void __fastcall SubMenuControlDrawBorder(TdxBarSubMenuControl* ABarSubMenuControl, HDC DC, const System::Types::TRect &R);
	virtual void __fastcall SubMenuControlDrawClientBorder(TdxBarSubMenuControl* ABarSubMenuControl, HDC DC, const System::Types::TRect &R, HBRUSH ABrush);
	virtual void __fastcall SubMenuControlDrawDetachCaption(TdxBarSubMenuControl* ABarSubMenuControl, HDC DC, const System::Types::TRect &R);
	virtual void __fastcall DropDownListBoxDrawBorder(HDC DC, System::Uitypes::TColor AColor, const System::Types::TRect &ARect);
	__classmethod virtual HBRUSH __fastcall BarToolbarBrushEx2(TdxBarControl* ABarControl);
	__classmethod virtual void __fastcall DrawQuickCustItemFrameSelected(TdxBarItemControl* ABarItemControl, HDC DC, const System::Types::TRect &WholeR, const System::Types::TRect &R, bool Selected);
	virtual HBRUSH __fastcall ButtonControlArrowBrush(TdxBarItemControlDrawParams* const ADrawParams);
	virtual bool __fastcall EditButtonIsCustomBackground(int AState);
	virtual void __fastcall EditButtonDrawBackground(TdxBarEditLikeControlDrawParams* const ADrawParams, int AState, const System::Types::TRect &ARect, HBRUSH ABrush);
	__classmethod virtual System::Types::TRect __fastcall EditControlBorderOffsets(TdxBarPaintType APaintType);
	virtual void __fastcall EditControlDrawBorder(TdxBarEditLikeControlDrawParams* const ADrawParams, System::Types::TRect &ARect);
	__classmethod virtual bool __fastcall EditControlCaptionBackgroundIsOpaque(TdxBarEditLikeControlDrawParams* const ADrawParams);
	__classmethod virtual int __fastcall EditControlCaptionSimpleIndent(TdxBarEditLikeControlDrawParams* const ADrawParams);
	__classmethod virtual System::Types::TRect __fastcall EditControlSubMenuGlyphIndents(TdxBarEditLikeControlDrawParams* const ADrawParams);
	__classmethod virtual bool __fastcall EditControlCaptionRightIndentIsOpaque(TdxBarEditLikeControlDrawParams* const ADrawParams);
	__classmethod virtual bool __fastcall EditControlShowIconDefault(TdxBarEditLikeControlDrawParams* const ADrawParams);
	virtual System::Uitypes::TColor __fastcall ComboControlArrowColor(TdxBarItemControlDrawParams* ADrawParams);
	virtual HBRUSH __fastcall ComboControlButtonBrush(TdxBarItemControlDrawParams* const ADrawParams);
	__classmethod virtual void __fastcall ComboControlDrawSimpleButton(TdxBarEditLikeControlDrawParams* const ADrawParams, System::Types::TRect &ARect, HBRUSH ABrush);
	__classmethod virtual int __fastcall ProgressControlIndent(TdxBarItemControlDrawParams* const ADrawParams);
	virtual void __fastcall DateNavigatorDrawButton(TdxBarItem* ABarItem, HDC DC, const System::Types::TRect &R, const System::UnicodeString ACaption, bool APressed, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Uitypes::TColor __fastcall DateNavigatorHeaderColor();
	__classmethod virtual HBRUSH __fastcall InPlaceSubItemControlBrush();
	virtual System::Uitypes::TColor __fastcall EditGetDisabledBkColor(TdxBarCustomEditControl* ABarItemControl);
	virtual System::Uitypes::TColor __fastcall EditGetDisabledTextColor();
	virtual void __fastcall DrawSeparatorGlyphAndCaption(TdxBarSeparatorControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
public:
	/* TdxBarPainter.Create */ inline __fastcall virtual TdxBarOffice11Painter(NativeUInt AData) : TdxBarFlatPainter(AData) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarOffice11Painter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarXPPainter : public TdxBarPainter
{
	typedef TdxBarPainter inherited;
	
private:
	static HBRUSH FSelectedItemBrush;
	void __fastcall BarBeginGroupSizeInit();
	void __fastcall BarCloseButtonSizeInit();
	void __fastcall ButtonBorderHeightInit();
	void __fastcall ComboBoxArrowWidthInit();
	void __fastcall EditControlBorderOffsetsInit();
	__classmethod HBRUSH __fastcall GetSelectedItemBrush();
	void __fastcall InitParams();
	void __fastcall ProgressControlBarHeightInit();
	void __fastcall SubMenuControlBeginGroupSizeInit();
	__classmethod void __fastcall InternalDrawBarGripSize(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, Cxgeometry::TdxScaleFactor* AScaleFactor);
	__classmethod bool __fastcall IsArrowButtonDowned(TdxBarPaintType APaintStyle, bool AIsPressed);
	
protected:
	__classmethod virtual bool __fastcall NeedDoubleBuffer();
	bool __fastcall BarMarkIsOpaque();
	void __fastcall DrawBarMarkState(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &R, TdxBarMarkState AState);
	void __fastcall DrawButtonBackground(TdxBarButtonLikeControlDrawParams* const ADrawParams);
	virtual void __fastcall DrawGlyphBorder(TdxBarItemControl* ABarItemControl, HDC DC, HBRUSH ABrush, bool NeedBorder, const System::Types::TRect &R, TdxBarPaintType PaintType, bool IsGlyphEmpty, bool Selected, bool Down, bool DrawDowned, bool ADroppedDown, bool IsSplit);
	virtual void __fastcall DrawGlyphCheckMark(TdxBarItemControl* ABarItemControl, HDC DC, int X, int Y, int DoubleSize);
	__classmethod virtual bool __fastcall GetFaded(TCustomdxBarControl* ABarControl);
	__classmethod virtual bool __fastcall IsMenuItem(TdxBarItemControl* ABarItemControl);
	__classmethod void __fastcall BarDrawNativeGrip(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &R, HBRUSH AToolbarBrush);
	virtual void __fastcall BarDrawMarkBackground(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &ItemRect, HBRUSH AToolbarBrush);
	__classmethod virtual void __fastcall BarOffsetFloatingBarCaption(TdxBarControl* ABarControl, int &X, System::Types::TRect &R);
	virtual void __fastcall DrawDot(TdxBarEditLikeControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	virtual System::Uitypes::TColor __fastcall GetDefaultEnabledTextColor(TdxBarItemControl* ABarItemControl, bool ASelected, bool AFlat);
	virtual void __fastcall GetDisabledTextColors(TdxBarItemControl* ABarItemControl, bool ASelected, bool AFlat, System::Uitypes::TColor &AColor1, System::Uitypes::TColor &AColor2);
	virtual Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetLookAndFeelPainter();
	
public:
	__fastcall virtual TdxBarXPPainter(NativeUInt AData);
	
private:
	// __classmethod void __fastcall Finalize@();
	
public:
	virtual void __fastcall DrawItemBackgroundInSubMenu(TdxBarButtonLikeControlDrawParams* const ADrawParams, const System::Types::TRect &R);
	__classmethod virtual HBRUSH __fastcall GlyphBkgndBrush(TdxBarItemControl* ABarItemControl, TdxBarPaintType APaintType, bool AGlyphEmpty, bool ASelected, bool ADowned, bool ADrawDowned, bool ADroppedDown, bool AForceUseBkBrush, bool AGrayScale);
	__classmethod virtual int __fastcall GlyphDownShift(TdxBarItemControl* ABarItemControl);
	__classmethod virtual int __fastcall GlyphDrawDownedShift(TdxBarItemControl* ABarItemControl, bool ADown);
	__classmethod virtual bool __fastcall IsFlatGlyphImage();
	virtual int __fastcall BeforeFingersSize();
	virtual int __fastcall FingersSize(TdxBarControl* ABarControl);
	virtual int __fastcall GripperSize(TdxBarControl* ABarControl);
	__classmethod virtual int __fastcall RealButtonArrowWidth(TdxBarManager* ABarManager);
	__classmethod virtual int __fastcall RealLargeButtonArrowWidth(TdxBarManager* ABarManager);
	virtual void __fastcall DockControlFillBackground(TdxDockControl* ADockControl, HDC DC, const System::Types::TRect &ADestR, const System::Types::TRect &ASourceR, const System::Types::TRect &AWholeR, HBRUSH ABrush, System::Uitypes::TColor AColor);
	__classmethod virtual bool __fastcall IsNativeBackground();
	__classmethod virtual HBRUSH __fastcall BarToolbarBrush(TCustomdxBarControl* ABarControl);
	__classmethod virtual HBRUSH __fastcall BarToolbarBrushEx(TdxBarControl* ABarControl);
	__classmethod virtual HBRUSH __fastcall BarToolbarDownedBrush(TCustomdxBarControl* ABarControl);
	__classmethod virtual HBRUSH __fastcall BarToolbarDownedSelBrush(TCustomdxBarControl* ABarControl);
	__classmethod virtual HBRUSH __fastcall BarToolbarSelBrush(TCustomdxBarControl* ABarControl);
	virtual int __fastcall ComboBoxArrowWidth(TCustomdxBarControl* ABarControl, int cX);
	virtual int __fastcall BarBeginGroupSideSize();
	virtual int __fastcall BarBeginGroupSize();
	__classmethod virtual int __fastcall BarBorderSize();
	virtual void __fastcall BarCaptionFillBackground(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &R, HBRUSH AToolbarBrush);
	__classmethod virtual bool __fastcall BarCaptionTransparent();
	__classmethod virtual System::Types::TSize __fastcall BarCloseButtonSize(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall BarDrawBeginGroup(TCustomdxBarControl* ABarControl, HDC DC, const System::Types::TRect &ABeginGroupRect, HBRUSH AToolbarBrush, bool AHorz);
	virtual void __fastcall BarDrawCloseButton(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &R);
	virtual void __fastcall BarDrawDockedBarBorder(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &R, HBRUSH AToolbarBrush);
	virtual void __fastcall BarDrawFloatingBarBorder(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &R, const System::Types::TRect &CR, HBRUSH AToolbarBrush);
	virtual void __fastcall BarDrawMDIButton(TdxBarControl* ABarControl, TdxBarMDIButton AButton, int AState, HDC DC, const System::Types::TRect &R);
	__classmethod void __fastcall StatusBarFillNativeBackground(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &ADestR, const System::Types::TRect &ASourceR, const System::Types::TRect &AWholeR, HBRUSH ABrush, System::Uitypes::TColor AColor);
	__classmethod System::Types::TSize __fastcall StatusBarNativeGripSize(TdxBarManager* ABarManager);
	__classmethod virtual bool __fastcall IsQuickControlPopupOnRight();
	virtual bool __fastcall IsButtonControlArrowFlat();
	virtual int __fastcall GetButtonBorderHeight(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual int __fastcall GetButtonBorderWidth(Cxgeometry::TdxScaleFactor* AScaleFactor);
	__classmethod virtual void __fastcall CorrectButtonControlDefaultHeight(int &DefaultHeight);
	virtual void __fastcall DrawButtonControlArrow(TdxBarButtonLikeControlDrawParams* const ADrawParams, const System::Types::TRect &R1);
	virtual void __fastcall DrawButtonControlArrowBackground(TdxBarButtonLikeControlDrawParams* const ADrawParams, System::Types::TRect &R1, HBRUSH ABrush);
	__classmethod virtual System::Types::TRect __fastcall EditControlBorderOffsets(TdxBarPaintType APaintType);
	virtual void __fastcall EditControlDrawBorder(TdxBarEditLikeControlDrawParams* const ADrawParams, System::Types::TRect &ARect);
	__classmethod virtual bool __fastcall EditControlCaptionRightIndentIsOpaque(TdxBarEditLikeControlDrawParams* const ADrawParams);
	__classmethod virtual int __fastcall EditControlCaptionSimpleIndent(TdxBarEditLikeControlDrawParams* const ADrawParams);
	__classmethod virtual int __fastcall EditControlCaptionComplexIndent(TdxBarEditLikeControlDrawParams* const ADrawParams);
	__classmethod virtual System::Types::TRect __fastcall EditControlSubMenuGlyphIndents(TdxBarEditLikeControlDrawParams* const ADrawParams);
	__classmethod virtual HBRUSH __fastcall EditControlGetRightCaptionIndentBrush(TdxBarCustomEditControl* ABarEditControl);
	__classmethod virtual void __fastcall CustomComboDrawItem(TdxBarCustomCombo* ABarCustomCombo, Vcl::Graphics::TCanvas* ACanvas, int AIndex, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState AState, bool AInteriorIsDrawing);
	__classmethod virtual int __fastcall ComboControlArrowOffset();
	virtual void __fastcall ComboControlDrawArrowButton(TdxBarEditLikeControlDrawParams* const ADrawParams, const System::Types::TRect &ARect, bool AInClientArea);
	__classmethod virtual int __fastcall SubMenuControlArrowsOffset();
	virtual System::Types::TRect __fastcall SubMenuControlBeginGroupRect(TdxBarSubMenuControl* ABarSubMenuControl, TdxBarItemControl* AControl, const System::Types::TRect &AItemRect);
	virtual int __fastcall SubMenuControlBeginGroupSize();
	__classmethod virtual int __fastcall SubMenuControlDetachCaptionAreaSize(TdxBarSubMenuControl* ABarSubMenuControl);
	virtual void __fastcall SubMenuControlDrawBeginGroup(TdxBarSubMenuControl* ABarSubMenuControl, TdxBarItemControl* AControl, Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABeginGroupRect);
	virtual void __fastcall SubMenuControlDrawSeparator(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect);
	virtual void __fastcall SubMenuControlDrawBorder(TdxBarSubMenuControl* ABarSubMenuControl, HDC DC, const System::Types::TRect &R);
	virtual void __fastcall SubMenuControlDrawClientBorder(TdxBarSubMenuControl* ABarSubMenuControl, HDC DC, const System::Types::TRect &R, HBRUSH ABrush);
	__classmethod virtual void __fastcall SubMenuControlOffsetDetachCaptionRect(TdxBarSubMenuControl* ABarSubMenuControl, System::Types::TRect &R);
	__classmethod virtual HBRUSH __fastcall SubMenuControlToolbarItemsBrush(TdxBarSubMenuControl* ABarSubMenuControl);
	virtual int __fastcall GetDotSpaceAfter(int ADotWidth);
	virtual System::Types::TRect __fastcall GetCustomColorButtonIndents(TdxBarPaintType APaintType);
	virtual void __fastcall ColorComboDrawCustomButton(TdxBarColorComboControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	virtual void __fastcall ColorComboDrawCustomButtonAdjacentZone(TdxBarColorComboControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	__classmethod virtual bool __fastcall IsDateNavigatorFlat();
	__classmethod void __fastcall DateNavigatorDrawNativeButton(TdxBarItem* ABarItem, HDC DC, const System::Types::TRect &R, const System::UnicodeString ACaption, bool APressed);
	virtual void __fastcall DateNavigatorDrawButton(TdxBarItem* ABarItem, HDC DC, const System::Types::TRect &R, const System::UnicodeString ACaption, bool APressed, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall SpinEditControlDrawButton(TdxBarSpinEditDrawParams* const ADrawParams, const System::Types::TRect &ARect, int AButtonIndex);
	virtual System::Types::TRect __fastcall GetSpinEditButtonIndents(TdxBarPaintType APaintType);
	__classmethod virtual System::Uitypes::TColor __fastcall ProgressControlBarBrushColor();
	virtual int __fastcall ProgressControlBarHeight(TdxBarItemControl* ABarItemControl);
	virtual void __fastcall ProgressControlDrawBackground(TdxBarItemControlDrawParams* const ADrawParams, System::Types::TRect &BarR);
	virtual void __fastcall ProgressControlDrawChunks(TdxBarItemControlDrawParams* const ADrawParams, const System::Types::TRect &BarR, HBRUSH ABarBrush);
	virtual System::Uitypes::TColor __fastcall EditGetEnabledBkColor(TdxBarCustomEditControl* ABarItemControl);
	virtual System::Uitypes::TColor __fastcall EditGetDisabledBkColor(TdxBarCustomEditControl* ABarItemControl);
	virtual System::Uitypes::TColor __fastcall EditGetEnabledTextColor();
	virtual System::Uitypes::TColor __fastcall EditGetDisabledTextColor();
	virtual int __fastcall SubMenuGetSeparatorSize();
	
private:
	// __classmethod void __fastcall Create@();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarXPPainter() { }
	
private:
	void *__IdxFadingPainterHelper;	// IdxFadingPainterHelper 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B97FA518-6C2E-4219-9430-19546EF91A1F}
	operator _di_IdxFadingPainterHelper()
	{
		_di_IdxFadingPainterHelper intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxFadingPainterHelper*(void) { return (IdxFadingPainterHelper*)&__IdxFadingPainterHelper; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarSkinnedPainter : public TdxBarOffice11Painter
{
	typedef TdxBarOffice11Painter inherited;
	
private:
	System::TObject* FSkinnedObject;
	_di_IdxSkin __fastcall GetSkin();
	System::Types::TRect __fastcall GetArrowRect(TdxBarButtonLikeControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	int __fastcall GetMenuButtonState(bool AEnabled, bool ASelected);
	__classmethod System::UnicodeString __fastcall GetTextInsteadArrow(TdxBarItemControlDrawParams* const ADrawParams);
	__classmethod int __fastcall GetMaxLineCount();
	void __fastcall InternalDrawEditButton(TdxBarEditLikeControlDrawParams* const ADrawParams, int APartIndex, const System::Types::TRect &ARect);
	
protected:
	bool __fastcall BarMarkIsOpaque();
	virtual void __fastcall DrawBarMarkState(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &R, TdxBarMarkState AState);
	virtual void __fastcall DrawButtonBackground(TdxBarButtonLikeControlDrawParams* const ADrawParams);
	virtual bool __fastcall AllowLargeIcons();
	virtual void __fastcall BarDrawMarkElements(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &ItemRect);
	virtual void __fastcall DrawToolbarContentPart(TdxBarControl* ABarControl, Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawToolbarNonContentPart(TdxBarControl* ABarControl, HDC DC);
	virtual void __fastcall DrawToolbarNonContentPartCaption(TdxBarControl* ABarControl, HDC DC);
	__classmethod virtual System::Types::TRect __fastcall GetControlTextIndents();
	__classmethod virtual System::Types::TRect __fastcall GetControlCaptionRectCore(TdxBarItemControlDrawParams* const ADrawParams);
	virtual int __fastcall SkinGetArrowID();
	virtual int __fastcall SkinGetMarkArrowID();
	virtual int __fastcall SkinGetTruncateMarkID();
	virtual System::Uitypes::TColor __fastcall GetDefaultEnabledTextColor(TdxBarItemControl* ABarItemControl, bool ASelected, bool AFlat);
	virtual void __fastcall GetDisabledTextColors(TdxBarItemControl* ABarItemControl, bool ASelected, bool AFlat, System::Uitypes::TColor &AColor1, System::Uitypes::TColor &AColor2);
	virtual System::Types::TRect __fastcall GetToolbarCaptionRect(TdxBarControl* ABarControl, const System::Types::TRect &ARect);
	virtual int __fastcall GetToolbarSkinPart(TdxBarControl* ABarControl);
	virtual void __fastcall InflateSizeForArrow(TdxBarButtonLikeControlDrawParams* const ADrawParams, int &ASize);
	__classmethod virtual bool __fastcall IsCompoundPainting();
	virtual int __fastcall GetButtonPartState(TdxBarButtonLikeControlDrawParams* const ADrawParams, int AControlPart);
	__classmethod int __fastcall GetEditPartState(TdxBarEditLikeControlDrawParams* const ADrawParams, int AControlPart);
	__classmethod int __fastcall GetSpinEditPartState(TdxBarSpinEditDrawParams* const ADrawParams, int AControlPart);
	__classmethod int __fastcall GetPartState(TdxBarItemControlDrawParams* const ADrawParams, int AControlPart);
	__classmethod int __fastcall GetTextPartState(TdxBarItemControlDrawParams* const ADrawParams);
	int __fastcall GetBarControlState(TdxBarControl* ABarControl);
	virtual TdxBarCustomHintViewInfo* __fastcall CreateHintViewInfo(TdxBarManager* ABarManager, System::UnicodeString AHintText, const System::UnicodeString AShortCut, Dxscreentip::TdxScreenTip* AScreenTip);
	virtual bool __fastcall IsCustomHintSupported();
	void __fastcall DrawMultilineCaption(TdxBarItemControlDrawParams* const ADrawParams, const System::Types::TRect &ATextRect);
	virtual void __fastcall ButtonLikeControlCorrectCaptionParams(TdxBarButtonLikeControlDrawParams* const ADrawParams, System::Types::TRect &ATextBounds, const System::Types::TRect &AImageBounds, /* out */ unsigned &ATextAlignment, /* out */ unsigned &AFormat);
	virtual void __fastcall ButtonLikeControlDrawCaption(TdxBarButtonLikeControlDrawParams* const ADrawParams, const System::Types::TRect &ATextBounds, unsigned ATextAlignment, unsigned AFormat = (unsigned)(0x0));
	void __fastcall ButtonLikeControlDrawMenuArrow(TdxBarButtonLikeControlDrawParams* const ADrawParams, Cxgraphics::TcxArrowDirection ADirection, const System::Types::TRect &ARect);
	__classmethod virtual TdxBarGlyphLayout __fastcall GetGlyphLayout(TdxBarButtonLikeControlDrawParams* const ADrawParams);
	virtual void __fastcall DrawSpinEditArrow(TdxBarSpinEditDrawParams* const ADrawParams, const System::Types::TPoint &AArrowPos, int AButtonIndex);
	virtual void __fastcall SubMenuControlDrawMarkContent(TdxBarSubMenuControl* ABarSubMenuControl, HDC DC, const System::Types::TRect &R, bool ASelected);
	virtual void __fastcall SubMenuControlDrawMarkSelection(TdxBarSubMenuControl* ABarSubMenuControl, HDC ADC, const System::Types::TRect &AMarkRect);
	virtual void __fastcall SubMenuControlFillScrollArrow(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, System::Uitypes::TColor AColor);
	virtual int __fastcall SubMenuControlGetScrollBandSize(TdxBarSubMenuControl* ABarSubMenuControl);
	__classmethod virtual int __fastcall SubMenuControlGetScrollArrowSize(int ATextSize);
	
public:
	__fastcall virtual TdxBarSkinnedPainter(NativeUInt AData);
	virtual void __fastcall CalculateButtonParts(TdxBarButtonLikeControlDrawParams* const ADrawParams, System::Types::TRect *AParts, const int AParts_High, const System::Types::TRect &AItemRect);
	virtual void __fastcall CalculateSpinEditParts(TdxBarSpinEditDrawParams* const ADrawParams, System::Types::TRect *AParts, const int AParts_High, System::Types::TRect *AAreaParts, const int AAreaParts_High);
	virtual void __fastcall DrawArrow(HDC ADC, const System::Types::TRect &ARect, int AArrowState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual int __fastcall GetGlyphState(TdxBarItemControl* ABarItemControl, bool ASelected, bool ADowned, bool ADrawDowned, bool ADroppedDown);
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall GetGlyphColorPalette(TdxBarItemControl* ABarItemControl, TdxBarPaintType APaintType, bool ASelected, bool ADowned, bool ADrawDowned, bool ADroppedDown, bool AIsSplit)/* overload */ _FINAL_ATTRIBUTE;
	HIDESBASE virtual Dxcoregraphics::_di_IdxColorPalette __fastcall GetGlyphColorPalette(TdxBarItemControl* ABarItemControl, TdxBarPaintType APaintType, int AState)/* overload */;
	virtual int __fastcall GetBorderSize();
	virtual int __fastcall GetIconAreaSize(TCustomdxBarControl* ABarControl);
	__classmethod virtual int __fastcall GetDefaultTextSize(Cxgraphics::TcxCanvas* ACanvas, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Types::TRect __fastcall GetLargeImageBounds(TdxBarItemControl* AItemControl, const System::Types::TSize &AImageSize, const System::Types::TRect &ADrawRect, TdxBarPaintType APaintType, TdxBarItemControlViewStructure AViewStructure);
	virtual void __fastcall DrawItemBackgroundInSubMenu(TdxBarButtonLikeControlDrawParams* const ADrawParams, const System::Types::TRect &R);
	virtual void __fastcall DrawGlyphAndBkgnd(TdxBarItemControl* ABarItemControl, HDC ADC, const System::Types::TRect &R, const System::Types::TRect &AGlyphRect, TdxBarPaintType APaintType, Dxgdiplusclasses::TdxSmartGlyph* AGlyph, Vcl::Imglist::TCustomImageList* AImages, int AImageIndex, bool AGlyphEmpty, bool ASelected, bool ADowned, bool ADrawDowned, bool ADroppedDown, bool AForceUseBkBrush, bool AGrayScale, bool AIsSplit, bool AEnabled, Dxcoregraphics::_di_IdxColorPalette AColorPalette);
	virtual System::Types::TRect __fastcall GetToolbarContentOffsets(TdxBar* ABar, TdxBarDockingStyle ADockingStyle, Cxgeometry::TdxScaleFactor* AScaleFactor, bool AHasSizeGrip);
	virtual int __fastcall GetToolbarsOffsetForAutoAlign();
	__classmethod virtual int __fastcall RealButtonArrowWidth(TdxBarManager* ABarManager);
	__classmethod virtual int __fastcall LoweredBorderSize(TdxBarItemControl* ABarItemControl);
	virtual Dxfading::TdxFadingOptions* __fastcall GetBarItemControlFadingOptions();
	virtual bool __fastcall BarLinkedOwnerHasShadow(TCustomdxBarControl* ABarControl);
	virtual void __fastcall BarDrawBackground(TdxBarControl* ABarControl, HDC ADC, const System::Types::TRect &ADestRect, const System::Types::TRect &ASourceRect, HBRUSH ABrush, System::Uitypes::TColor AColor);
	virtual void __fastcall BarDrawDockedBackground(TdxBarControl* ABarControl, HDC DC, const System::Types::TRect &ADestR, const System::Types::TRect &ASourceR, HBRUSH ABrush, System::Uitypes::TColor AColor);
	virtual int __fastcall ComboBoxArrowWidth(TCustomdxBarControl* ABarControl, int cX);
	virtual void __fastcall SetWindowRgn(NativeUInt AHandle, const System::Types::TRect &AWindowRect, bool ARedraw = false);
	virtual void __fastcall BarDrawBeginGroup(TCustomdxBarControl* ABarControl, HDC DC, const System::Types::TRect &ABeginGroupRect, HBRUSH AToolbarBrush, bool AHorz);
	__classmethod virtual int __fastcall GetTailAreaSize(TdxBarItemControlDrawParams* const ADrawParams);
	__classmethod virtual System::Types::TSize __fastcall GetDefaultArrowSignSize(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual int __fastcall GetButtonBorderHeight(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual int __fastcall GetButtonBorderWidth(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual int __fastcall GetButtonHeight(int AIconSize, int ATextSize, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual int __fastcall GetButtonWidth(int AIconSize, int ATextSize, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual int __fastcall GetLargeButtonBorderHeight();
	virtual int __fastcall GetLargeButtonBorderWidth();
	__classmethod virtual void __fastcall CorrectButtonControlDefaultHeight(int &DefaultHeight);
	virtual void __fastcall DrawBackButtonControlArrow(TdxBarButtonLikeControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	virtual void __fastcall DrawButtonLikeControl(TdxBarButtonLikeControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	virtual void __fastcall DrawButtonControlArrow(TdxBarButtonLikeControlDrawParams* const ADrawParams, const System::Types::TRect &R1);
	virtual void __fastcall DrawSplitControlArrow(TdxBarButtonLikeControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	virtual void __fastcall DrawAssociateControlArrow(TdxBarButtonLikeControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	virtual void __fastcall DropDownListBoxDrawBorder(HDC DC, System::Uitypes::TColor AColor, const System::Types::TRect &ARect);
	__classmethod virtual bool __fastcall SubMenuControlHasBand();
	__classmethod virtual int __fastcall SubMenuControlArrowWidth(int ATextSize);
	virtual int __fastcall SubMenuControlBeginGroupSize();
	__classmethod virtual int __fastcall SubMenuControlNCBorderSize();
	__classmethod virtual int __fastcall SubMenuControlClientBorderSize();
	__classmethod virtual int __fastcall SubMenuControlDetachCaptionAreaSize(TdxBarSubMenuControl* ABarSubMenuControl);
	__classmethod virtual int __fastcall SubMenuControlGetBandSize(TdxBarSubMenuControl* ABarSubMenuControl);
	__classmethod virtual int __fastcall SubMenuControlNormalItemHeight(Cxgeometry::TdxScaleFactor* AScaleFactor);
	__classmethod int __fastcall SubMenuControlTextIndent();
	__classmethod virtual int __fastcall SubMenuControlInternalBorderSize();
	__classmethod virtual int __fastcall SubMenuControlInternalBorderOffset();
	__classmethod virtual int __fastcall SubMenuControlTextSize(Cxgraphics::TcxCanvas* ACanvas, Cxgeometry::TdxScaleFactor* AScaleFactor);
	__classmethod virtual System::Types::TRect __fastcall SubMenuControlGetItemIconRect(const System::Types::TRect &AItemRect, int AIconAreaSize);
	__classmethod virtual int __fastcall SubMenuControlGetItemTextIndent(TdxBarItemControlDrawParams* const ADrawParams);
	virtual void __fastcall SubMenuControlDrawScrollBandBackground(TdxBarSubMenuControl* ABarSubMenuControl, Cxgraphics::TcxCanvas* ACanvas, Cxgraphics::TcxArrowDirection AArrowDirection);
	virtual void __fastcall SubMenuControlDrawScrollButton(TdxBarSubMenuControl* ABarSubMenuControl, Cxgraphics::TcxCanvas* ACanvas, Cxgraphics::TcxArrowDirection AArrowDirection);
	virtual void __fastcall SubMenuControlDrawBackground(TdxBarSubMenuControl* ABarSubMenuControl, Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, HBRUSH ABrush, System::Uitypes::TColor AColor);
	virtual void __fastcall SubMenuControlDrawBeginGroup(TdxBarSubMenuControl* ABarSubMenuControl, TdxBarItemControl* AControl, Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABeginGroupRect);
	virtual void __fastcall SubMenuControlDrawSeparator(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect);
	virtual void __fastcall SubMenuControlDrawBorder(TdxBarSubMenuControl* ABarSubMenuControl, HDC DC, const System::Types::TRect &R);
	virtual void __fastcall SubMenuControlDrawClientBorder(TdxBarSubMenuControl* ABarSubMenuControl, HDC DC, const System::Types::TRect &R, HBRUSH ABrush);
	virtual void __fastcall SubMenuControlDrawDetachCaption(TdxBarSubMenuControl* ABarSubMenuControl, HDC DC, const System::Types::TRect &R);
	void __fastcall SubMenuControlDrawItemBackground(TdxBarSubMenuControl* ABarSubMenuControl, Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &AItemRect);
	virtual System::Uitypes::TColor __fastcall ApplicationMenuButtonTextColor(bool AEnabled, bool ASelected);
	virtual System::Types::TRect __fastcall ApplicationMenuContentButtonOffsets();
	virtual System::Types::TRect __fastcall ApplicationMenuGetFrameSizes();
	virtual void __fastcall ApplicationMenuDrawBackground(TdxBarSubMenuControl* ABarSubMenuControl, Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, const System::Types::TRect &AItemsArea);
	virtual void __fastcall ApplicationMenuDrawButton(TdxBarApplicationMenuButtonControlDrawParams* const ADrawParams, System::Types::TRect &R);
	virtual System::Uitypes::TColor __fastcall ExtraMenuButtonTextColor(bool AEnabled, bool ASelected);
	virtual void __fastcall ExtraMenuControlDrawBackground(TCustomdxBarControl* AExtraMenuControl, Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, HBRUSH ABrush, System::Uitypes::TColor AColor);
	virtual void __fastcall ExtraMenuControlDrawBeginGroup(TCustomdxBarControl* AExtraMenuControl, Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABeginGroupRect, HBRUSH AToolbarBrush, bool AHorz);
	void __fastcall ExtraMenuControlDrawItemBackground(TCustomdxBarControl* AExtraMenuControl, Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &AItemRect);
	virtual void __fastcall ExtraMenuDrawButton(TdxBarExtraMenuButtonControlDrawParams* ADrawParams, const System::Types::TRect &ARect);
	virtual void __fastcall ExtraMenuDrawPinButton(TdxBarExtraMenuButtonControlDrawParams* ADrawParams, const System::Types::TRect &ARect);
	virtual System::Uitypes::TColor __fastcall ExtraMenuHeaderTextColor();
	virtual int __fastcall ExtraMenuPinButtonSize();
	virtual bool __fastcall EditButtonAllowOffsetContent();
	virtual bool __fastcall EditButtonAllowCompositeFrame();
	__classmethod virtual bool __fastcall EditButtonAllowHotTrack(TdxBarItemControlDrawParams* const ADrawParams);
	virtual bool __fastcall EditButtonIsCustomBorder();
	virtual bool __fastcall EditButtonIsCustomBackground(int AState);
	virtual void __fastcall EditButtonCorrectDefaultWidth(int &ADefaultWidth);
	virtual void __fastcall EditButtonDrawBackground(TdxBarEditLikeControlDrawParams* const ADrawParams, int AState, const System::Types::TRect &ARect, HBRUSH ABrush);
	virtual void __fastcall EditButtonDrawBorder(TdxBarItemControlDrawParams* const ADrawParams, int AState, System::Types::TRect &ADrawRect, /* out */ System::Types::TRect &AContentRect);
	__classmethod virtual bool __fastcall EditControlCaptionBackgroundIsOpaque(TdxBarEditLikeControlDrawParams* const ADrawParams);
	__classmethod virtual bool __fastcall EditControlCaptionRightIndentIsOpaque(TdxBarEditLikeControlDrawParams* const ADrawParams);
	virtual void __fastcall EditControlDrawBorder(TdxBarEditLikeControlDrawParams* const ADrawParams, System::Types::TRect &ARect);
	virtual void __fastcall EditControlDrawCaption(TdxBarEditLikeControlDrawParams* const ADrawParams);
	virtual void __fastcall EditControlDrawSelectionFrame(TdxBarEditLikeControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	virtual void __fastcall EditControlDrawBackground(TdxBarEditLikeControlDrawParams* const ADrawParams);
	virtual System::Uitypes::TColor __fastcall EditGetEnabledTextColor();
	virtual System::Uitypes::TColor __fastcall EditGetDisabledTextColor();
	virtual System::Uitypes::TColor __fastcall EditGetBkColor(TdxBarEditLikeControlDrawParams* const ADrawParams);
	virtual void __fastcall EditGetRealLookAndFeel(TdxBarManager* ABarManager, Cxlookandfeels::TcxLookAndFeel* ALookAndFeel);
	__classmethod virtual bool __fastcall EditControlShowIconDefault(TdxBarEditLikeControlDrawParams* const ADrawParams);
	__classmethod virtual int __fastcall ComboControlArrowOffset();
	__classmethod virtual System::Types::TRect __fastcall ComboControlButtonOffsets(TdxBarPaintType APaintType);
	virtual void __fastcall ComboControlDrawArrowButton(TdxBarEditLikeControlDrawParams* const ADrawParams, const System::Types::TRect &ARect, bool AInClientArea);
	virtual bool __fastcall ColorComboHasCompleteFrame();
	virtual int __fastcall GetCustomColorButtonWidth(TdxBarPaintType APaintType, const System::Types::TRect &ARect);
	virtual System::Types::TRect __fastcall GetCustomColorButtonIndents(TdxBarPaintType APaintType);
	virtual void __fastcall ColorComboDrawCustomButton(TdxBarColorComboControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	virtual void __fastcall ColorComboDrawCustomButtonAdjacentZone(TdxBarColorComboControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	virtual System::Uitypes::TColor __fastcall DateNavigatorHeaderColor();
	__classmethod virtual int __fastcall InPlaceSubItemGetArrowWidth(TdxBarInPlaceSubItemControlDrawParams* const ADrawParams);
	virtual void __fastcall InPlaceSubItemControlDrawArrow(TdxBarInPlaceSubItemControlDrawParams* const ADrawParams, Cxgraphics::TcxArrowDirection ADirection, const System::Types::TRect &ARect);
	virtual void __fastcall InPlaceSubItemControlDrawBackground(TdxBarInPlaceSubItemControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	virtual bool __fastcall CanUpdateBarPartly();
	virtual void __fastcall ProgressControlDrawBackground(TdxBarItemControlDrawParams* const ADrawParams, System::Types::TRect &R);
	virtual void __fastcall ProgressControlFillContent(TdxBarItemControlDrawParams* const ADrawParams, const System::Types::TRect &R, HBRUSH ABarBrush);
	virtual void __fastcall ProgressControlFillDiscreteContent(TdxBarItemControlDrawParams* const ADrawParams, const System::Types::TRect &R, HBRUSH ABarBrush);
	virtual System::Types::TPoint __fastcall GetSpinEditArrowPos(TdxBarSpinEditDrawParams* const ADrawParams, const System::Types::TRect &ARect, int AButtonIndex);
	virtual void __fastcall SpinEditCorrectFrameRect(TdxBarItemControlDrawParams* const ADrawParams, System::Types::TRect &ARect);
	virtual System::Types::TSize __fastcall GetSpinEditArrowSize(int AHeight);
	virtual System::Types::TRect __fastcall GetSpinEditButtonBounds(TdxBarSpinEditDrawParams* const ADrawParams, const System::Types::TRect &ARect, TdxBarSpinEditButton AButton);
	virtual void __fastcall SpinEditControlDrawButton(TdxBarSpinEditDrawParams* const ADrawParams, const System::Types::TRect &ARect, int AButtonIndex);
	virtual void __fastcall SpinEditControlDrawButtonsAdjacentZone(TdxBarSpinEditDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	void __fastcall SpinEditControlDrawButtonsExternalFrame(TdxBarSpinEditDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	virtual System::Types::TRect __fastcall GetSpinEditButtonIndents(TdxBarPaintType APaintType);
	virtual int __fastcall GetSpinEditButtonWidth(TdxBarPaintType APaintType, const System::Types::TRect &ARect);
	virtual void __fastcall DrawStaticBorder(TdxBarStaticLikeControlDrawParams* const ADrawParams, System::Types::TRect &ARect);
	__classmethod virtual bool __fastcall StaticBackgroundIsOpaque(TdxBarItemControlDrawParams* const ADrawParams);
	virtual void __fastcall SeparatorControlGetTextColors(TdxBarItemControl* ABarItemControl, bool AEnabled, bool ASelected, bool AFlat, System::Uitypes::TColor &AColor1, System::Uitypes::TColor &AColor2);
	virtual int __fastcall SeparatorControlSeparatorSize();
	virtual void __fastcall DrawSeparatorControlLine(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R);
	virtual void __fastcall DrawSeparatorGlyphAndCaption(TdxBarSeparatorControlDrawParams* const ADrawParams, const System::Types::TRect &ARect);
	virtual void __fastcall DropDownGalleryDrawBackground(HDC DC, const System::Types::TRect &R);
	virtual void __fastcall DropDownGalleryDrawBorder(TdxBarSubMenuControl* ABarSubMenuControl, HDC DC, const System::Types::TRect &R);
	virtual void __fastcall DropDownGalleryDrawBottomSizeGrip(HDC DC, const System::Types::TRect &R);
	virtual void __fastcall DropDownGalleryDrawBottomSizeGripEx(TdxBarSubMenuControl* ABarSubMenuControl, HDC DC, const System::Types::TRect &R);
	virtual void __fastcall DropDownGalleryDrawBottomSizingBand(HDC DC, const System::Types::TRect &R);
	virtual void __fastcall DropDownGalleryDrawBottomVerticalSizeGrip(HDC DC, const System::Types::TRect &R);
	virtual void __fastcall DropDownGalleryDrawFilterBand(HDC DC, const System::Types::TRect &R);
	virtual void __fastcall DropDownGalleryDrawGroupHeaderBackground(HDC DC, const System::Types::TRect &R);
	virtual void __fastcall DropDownGalleryDrawItem(HDC DC, const System::Types::TRect &R, int AState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DropDownGalleryDrawScrollBarBackground(HDC DC, const System::Types::TRect &R, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DropDownGalleryDrawScrollBarBackgroundEx(TdxBarSubItemControl* ABarSubItemControl, HDC DC, const System::Types::TRect &R, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DropDownGalleryDrawScrollBarPartEx(TdxBarSubItemControl* ABarSubItemControl, HDC DC, const System::Types::TRect &R, Cxlookandfeelpainters::TcxScrollBarPart APart, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DropDownGalleryDrawSelectionFrame(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, int AState);
	virtual void __fastcall DropDownGalleryDrawTopSizeGrip(HDC DC, const System::Types::TRect &R);
	virtual void __fastcall DropDownGalleryDrawTopSizeGripEx(TdxBarSubMenuControl* ABarSubMenuControl, HDC DC, const System::Types::TRect &R);
	virtual void __fastcall DropDownGalleryDrawTopSizingBand(HDC DC, const System::Types::TRect &R);
	virtual void __fastcall DropDownGalleryDrawTopVerticalSizeGrip(HDC DC, const System::Types::TRect &R);
	virtual void __fastcall DropDownGalleryItemGetTextColors(TdxBarItemControl* ABarItemControl, bool AEnabled, bool ASelected, bool AFlat, System::Uitypes::TColor &AColor1, System::Uitypes::TColor &AColor2);
	virtual int __fastcall DropDownGalleryGetClientBorderSize();
	virtual System::Types::TRect __fastcall DropDownGalleryGetContentOffsets(int APart);
	virtual System::Uitypes::TColor __fastcall DropDownGalleryGetFilterBandSeparatorColor();
	virtual System::Uitypes::TColor __fastcall DropDownGalleryGetFilterBandTextColor(int AState);
	virtual System::Uitypes::TColor __fastcall DropDownGalleryGetGroupHeaderTextColor();
	virtual System::UnicodeString __fastcall DropDownGalleryGetName();
	virtual int __fastcall DropDownGalleryGetNCBorderSize();
	virtual System::Uitypes::TColor __fastcall ScreenTipGetDescriptionTextColor();
	virtual System::Uitypes::TColor __fastcall ScreenTipGetTitleTextColor();
	virtual void __fastcall ScreenTipDrawBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect);
	virtual void __fastcall ScreenTipDrawFooterLine(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect);
	__property _di_IdxSkin Skin = {read=GetSkin};
	__property System::TObject* SkinnedObject = {read=FSkinnedObject};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarSkinnedPainter() { }
	
private:
	void *__IdxFadingPainterHelper2;	// IdxFadingPainterHelper2 
	void *__IdxFadingPainterHelper;	// IdxFadingPainterHelper 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7697DA35-139F-4247-964C-B8A4C38362E5}
	operator _di_IdxFadingPainterHelper2()
	{
		_di_IdxFadingPainterHelper2 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxFadingPainterHelper2*(void) { return (IdxFadingPainterHelper2*)&__IdxFadingPainterHelper2; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B97FA518-6C2E-4219-9430-19546EF91A1F}
	operator _di_IdxFadingPainterHelper()
	{
		_di_IdxFadingPainterHelper intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxFadingPainterHelper*(void) { return (IdxFadingPainterHelper*)&__IdxFadingPainterHelper; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRegItemRecord : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TdxBarItemClass FItemClass;
	TdxBarItemControlClass FItemControlClass;
	bool FVisible;
	__fastcall TRegItemRecord(TdxBarItemClass AItemClass, TdxBarItemControlClass AItemControlClass, bool AVisible);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRegItemRecord() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarItemList : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
public:
	TRegItemRecord* operator[](int Index) { return this->Items[Index]; }
	
private:
	TRegItemRecord* __fastcall GetItem(int Index);
	TdxBarItemClass __fastcall GetItemClass(int Index);
	int __fastcall GetVisibleItemCount();
	TdxBarItemClass __fastcall GetVisibleItemClass(int Index);
	
protected:
	void __fastcall Register(TdxBarItemClass AItemClass, TdxBarItemControlClass AItemControlClass, bool AVisible);
	void __fastcall Unregister(TdxBarItemClass AItemClass)/* overload */;
	void __fastcall Unregister(int Index)/* overload */;
	
public:
	__fastcall virtual ~TdxBarItemList();
	__property TRegItemRecord* Items[int Index] = {read=GetItem/*, default*/};
	__property TdxBarItemClass ItemClass[int Index] = {read=GetItemClass};
	__property int VisibleItemCount = {read=GetVisibleItemCount, nodefault};
	__property TdxBarItemClass VisibleItemClass[int Index] = {read=GetVisibleItemClass};
public:
	/* TObject.Create */ inline __fastcall TdxBarItemList() : System::Classes::TList() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TdxBarManagerFormKind : unsigned char { fkMain, fkMainOrMDIChild, fkAny };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomQuickCustItemControl : public TdxBarButtonControl
{
	typedef TdxBarButtonControl inherited;
	
protected:
	virtual void __fastcall DoPaint(const System::Types::TRect &ARect, TdxBarPaintType PaintType);
	virtual int __fastcall GetDefaultWidth();
	virtual bool __fastcall IsDowned() = 0 ;
public:
	/* TdxBarButtonControl.Destroy */ inline __fastcall virtual ~TdxCustomQuickCustItemControl() { }
	
public:
	/* TdxBarItemControl.Create */ inline __fastcall virtual TdxCustomQuickCustItemControl(TdxBarItemLink* AItemLink) : TdxBarButtonControl(AItemLink) { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxBarQuickCustItem : public TdxBarCustomButton
{
	typedef TdxBarCustomButton inherited;
	
public:
	DYNAMIC void __fastcall DoClick();
public:
	/* TdxBarCustomButton.Create */ inline __fastcall virtual TdxBarQuickCustItem(System::Classes::TComponent* AOwner) : TdxBarCustomButton(AOwner) { }
	
public:
	/* TdxBarItem.Destroy */ inline __fastcall virtual ~TdxBarQuickCustItem() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarQuickCustItemControl : public TdxCustomQuickCustItemControl
{
	typedef TdxCustomQuickCustItemControl inherited;
	
private:
	TdxBarItemLink* __fastcall GetLinkedItemLink();
	
protected:
	virtual void __fastcall ControlUnclick(bool ByMouse);
	virtual System::UnicodeString __fastcall GetCaption();
	virtual Dxgdiplusclasses::TdxSmartGlyph* __fastcall GetGlyph();
	virtual int __fastcall GetImageIndex();
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetCurrentImages(bool AEnabled, bool AUseLargeImages, Dxcore::TdxDefaultBoolean &ADrawImageEnabled);
	virtual Dxgdiplusclasses::TdxSmartGlyph* __fastcall GetLargeGlyph();
	virtual int __fastcall GetLargeImageIndex();
	virtual bool __fastcall IsDowned();
	virtual System::UnicodeString __fastcall GetHint();
	virtual System::Classes::TShortCut __fastcall GetShortCut();
	virtual bool __fastcall CanDestroyOnClick();
	__property TdxBarItemLink* LinkedItemLink = {read=GetLinkedItemLink};
public:
	/* TdxBarButtonControl.Destroy */ inline __fastcall virtual ~TdxBarQuickCustItemControl() { }
	
public:
	/* TdxBarItemControl.Create */ inline __fastcall virtual TdxBarQuickCustItemControl(TdxBarItemLink* AItemLink) : TdxCustomQuickCustItemControl(AItemLink) { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxBarPopupControl : public TdxBarControl
{
	typedef TdxBarControl inherited;
	
private:
	TdxBar* FInternalBar;
	TdxBar* FMasterBar;
	Cxclasses::TcxTimer* FHidingTimer;
	System::Classes::TList* FInternalItems;
	System::Classes::TNotifyEvent FOnCloseUp;
	void __fastcall HidingTimerHandler(System::TObject* Sender);
	HIDESBASE MESSAGE void __fastcall WMDpiChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	
protected:
	virtual void __fastcall WindowPosChanged(Winapi::Messages::TWMWindowPosMsg &Message);
	virtual bool __fastcall CanMoving();
	virtual TdxBar* __fastcall GetMasterBar();
	virtual void __fastcall DoBeforeCaptionButtonClick();
	virtual void __fastcall DoHideAll(TdxBarCloseUpReason AReason);
	virtual bool __fastcall IsInternal();
	virtual bool __fastcall IsPopup();
	virtual bool __fastcall HasCloseButton();
	virtual bool __fastcall NeedHideOnClick();
	virtual void __fastcall SetLayeredAttributes();
	virtual void __fastcall InitializeForPopup(TdxBarControl* AParentBarControl, TdxBar* ABar);
	virtual bool __fastcall AllowResize();
	virtual System::Types::TSize __fastcall GetPopupSize();
	virtual System::Types::TPoint __fastcall GetPopupPosition(const System::Types::TSize &ASize, const System::Types::TRect &AOwnerRect, TXDirection APopupDirection);
	virtual void __fastcall CorrectPopupPosition(System::Types::TPoint &APosition, const System::Types::TSize &ASize, const System::Types::TRect &AOwnerRect, const System::Types::TRect &AWorkArea);
	virtual bool __fastcall LockHotTrackWhenPopup();
	virtual bool __fastcall NeedActivateOnPopup();
	virtual System::Types::TRect __fastcall IgnoreClickAreaWhenHidePopup();
	virtual bool __fastcall AlwaysTrackMouse();
	virtual void __fastcall TrackMouse();
	__property System::Classes::TList* InternalItems = {read=FInternalItems};
	__property System::Classes::TNotifyEvent OnCloseUp = {read=FOnCloseUp, write=FOnCloseUp};
	
public:
	__fastcall virtual TdxBarPopupControl(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxBarPopupControl();
	virtual void __fastcall Hide();
	virtual void __fastcall CloseUp();
	virtual void __fastcall Popup(const System::Types::TRect &AOwnerRect);
	void __fastcall PopupEx(const System::Types::TRect &AOwnerRect, TXDirection APopupDirection);
	void __fastcall StartHidingTimer();
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxBarPopupControl(HWND ParentWindow) : TdxBarControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TdxBarQuickControl : public TdxBarPopupControl
{
	typedef TdxBarPopupControl inherited;
	
private:
	TdxBarControl* __fastcall GetParentBar();
	HIDESBASE void __fastcall SetParentBar(TdxBarControl* Value);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMRButtonDown(Winapi::Messages::TWMMouse &Message);
	
protected:
	virtual bool __fastcall CanShowHint();
	virtual void __fastcall InitializeForPopup(TdxBarControl* AParentBarControl, TdxBar* ABar);
	virtual void __fastcall Paint();
	virtual Vcl::Forms::TCustomForm* __fastcall GetParentForm();
	virtual System::Types::TSize __fastcall GetPopupSize();
	virtual System::Types::TPoint __fastcall GetPopupPosition(const System::Types::TSize &ASize, const System::Types::TRect &AOwnerRect, TXDirection APopupDirection);
	virtual void __fastcall CorrectPopupPosition(System::Types::TPoint &APosition, const System::Types::TSize &ASize, const System::Types::TRect &AOwnerRect, const System::Types::TRect &AWorkArea);
	virtual HBRUSH __fastcall GetToolbarBrush();
	virtual bool __fastcall HasCaption();
	virtual bool __fastcall IsLinkedToOwner();
	virtual bool __fastcall IsPopup();
	virtual bool __fastcall LockHotTrackWhenPopup();
	virtual bool __fastcall NeedShowGlyphAndCheckForItem();
	virtual Vcl::Controls::TWinControl* __fastcall GetOwnerControl();
	__property TdxBarControl* ParentBar = {read=GetParentBar, write=SetParentBar};
	
public:
	virtual TdxBarKind __fastcall Kind();
	virtual void __fastcall Popup(const System::Types::TRect &AOwnerRect);
public:
	/* TdxBarPopupControl.Create */ inline __fastcall virtual TdxBarQuickControl(System::Classes::TComponent* AOwner) : TdxBarPopupControl(AOwner) { }
	/* TdxBarPopupControl.Destroy */ inline __fastcall virtual ~TdxBarQuickControl() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxBarQuickControl(HWND ParentWindow) : TdxBarPopupControl(ParentWindow) { }
	
};


struct DECLSPEC_DRECORD TdxBarKeyTipsShowingState
{
public:
	_di_IdxBarAccessibilityHelper ActiveContainer;
	TdxObjectList* KeyTipsData;
	System::UnicodeString TypingString;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarNavigationController : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool FHandleKey;
	TdxBarKeyTipsShowingState FKeyTipsShowingState;
	_di_IdxBarAccessibilityHelper FKeyTipsWaitingRootObject;
	Cxclasses::TcxTimer* FKeyTipsWaitingTimer;
	bool FNavigationMode;
	_di_IdxBarAccessibilityHelper FSelectedObject;
	_di_IdxBarAccessibilityHelper FSelectedObjectParent;
	TdxBarItem* FSingleMenuBackButton;
	TdxBarItem* FSingleMenuCaption;
	void __fastcall DestroyKeyTipsWaitingTimer();
	TCustomdxBarControl* __fastcall GetActiveBarControl();
	System::UnicodeString __fastcall GetKeyFromKeyCode(System::Word AKey);
	bool __fastcall GetKeyTipsHandlingMode();
	_di_IdxBarAccessibilityHelper __fastcall GetSelectedObject();
	_di_IdxBarAccessibilityHelper __fastcall GetSelectedObjectParent();
	void __fastcall HandleKeyTipKey(System::Word AKey, System::Classes::TShiftState AShift);
	bool __fastcall IsKeyTipsKey(System::Word AKey, System::Classes::TShiftState AShift, /* out */ bool &AIsKeyAcceptable, /* out */ System::Classes::TNotifyEvent &AOnExecute)/* overload */;
	bool __fastcall IsKeyTipsKey(System::Word AKey, System::Classes::TShiftState AShift, /* out */ bool &AIsKeyAcceptable)/* overload */;
	bool __fastcall IsNavigationControllerKey(System::Word AKey);
	void __fastcall KeyTipsEscapeHandler();
	void __fastcall KeyTipsWaitingTimerHandler(System::TObject* Sender);
	void __fastcall StopKeyTipsHandlingMode();
	
protected:
	void __fastcall ResetNavigationMode();
	
public:
	__fastcall virtual ~TdxBarNavigationController();
	void __fastcall BeginKeyTipsWaiting(_di_IdxBarAccessibilityHelper ARootObject);
	void __fastcall ChangeSelectedObject(bool ASetFocus, _di_IdxBarAccessibilityHelper ANewSelectedObject, _di_IdxBarAccessibilityHelper APrevSelectedObject = _di_IdxBarAccessibilityHelper());
	void __fastcall EndKeyTipsWaiting(bool AShowKeyTipWindows);
	void __fastcall HandleKey(System::Word AKey, System::Classes::TShiftState AShift, _di_IdxBarAccessibilityHelper ASelectedObjectParent = _di_IdxBarAccessibilityHelper(), _di_IdxBarAccessibilityHelper ASelectedObject = _di_IdxBarAccessibilityHelper());
	bool __fastcall IsKeyTipsKey(System::Word AKey, System::Classes::TShiftState AShift)/* overload */;
	bool __fastcall IsKeyTipsWaiting();
	bool __fastcall IsNavigationBarControl(TCustomdxBarControl* ABarControl);
	bool __fastcall IsNavigationKey(System::Word AKey);
	bool __fastcall NeedsKey(System::Word AKey, System::Classes::TShiftState AShift);
	void __fastcall PrepareNewSingleMenuLevel(TdxBarItemLinks* AItemLinks, const TdxBarKind AParentKind);
	void __fastcall RestorePreviousSingleMenuLevel(TdxBarItemControl* AParentItemControl, const TdxBarKind AParentKind);
	void __fastcall SelectDefaultObject(_di_IdxBarAccessibilityHelper ARootObject);
	void __fastcall SetKeyTipsShowingState(_di_IdxBarAccessibilityHelper AActiveKeyTipContainer, const System::UnicodeString AKeyTipsTypingString);
	void __fastcall StopKeyboardHandling(TdxBarManager* ABarManager = (TdxBarManager*)(0x0));
	void __fastcall UnassignObject(_di_IdxBarAccessibilityHelper AObject);
	void __fastcall UnselectAssignedSelectedObject();
	bool __fastcall UseSingleMenuWindowMode(TdxBarItemControl* AItemControl);
	__property _di_IdxBarAccessibilityHelper ActiveKeyTipContainer = {read=FKeyTipsShowingState.ActiveContainer};
	__property _di_IdxBarAccessibilityHelper AssignedSelectedObject = {read=FSelectedObject};
	__property _di_IdxBarAccessibilityHelper AssignedSelectedObjectParent = {read=FSelectedObjectParent};
	__property bool KeyTipsHandlingMode = {read=GetKeyTipsHandlingMode, nodefault};
	__property bool NavigationMode = {read=FNavigationMode, nodefault};
	__property _di_IdxBarAccessibilityHelper SelectedObject = {read=GetSelectedObject, write=FSelectedObject};
	__property _di_IdxBarAccessibilityHelper SelectedObjectParent = {read=GetSelectedObjectParent, write=FSelectedObjectParent};
public:
	/* TObject.Create */ inline __fastcall TdxBarNavigationController() : System::TObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EdxBarException : public Dxcore::EdxException
{
	typedef Dxcore::EdxException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EdxBarException(const System::UnicodeString Msg) : Dxcore::EdxException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EdxBarException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Dxcore::EdxException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EdxBarException(NativeUInt Ident)/* overload */ : Dxcore::EdxException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EdxBarException(System::PResStringRec ResStringRec)/* overload */ : Dxcore::EdxException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EdxBarException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Dxcore::EdxException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EdxBarException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Dxcore::EdxException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EdxBarException(const System::UnicodeString Msg, int AHelpContext) : Dxcore::EdxException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EdxBarException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Dxcore::EdxException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EdxBarException(NativeUInt Ident, int AHelpContext)/* overload */ : Dxcore::EdxException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EdxBarException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Dxcore::EdxException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EdxBarException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Dxcore::EdxException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EdxBarException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Dxcore::EdxException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EdxBarException() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EdxBarCustomizationException : public EdxBarException
{
	typedef EdxBarException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EdxBarCustomizationException(const System::UnicodeString Msg) : EdxBarException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EdxBarCustomizationException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EdxBarException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EdxBarCustomizationException(NativeUInt Ident)/* overload */ : EdxBarException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EdxBarCustomizationException(System::PResStringRec ResStringRec)/* overload */ : EdxBarException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EdxBarCustomizationException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EdxBarException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EdxBarCustomizationException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EdxBarException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EdxBarCustomizationException(const System::UnicodeString Msg, int AHelpContext) : EdxBarException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EdxBarCustomizationException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EdxBarException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EdxBarCustomizationException(NativeUInt Ident, int AHelpContext)/* overload */ : EdxBarException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EdxBarCustomizationException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EdxBarException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EdxBarCustomizationException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EdxBarException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EdxBarCustomizationException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EdxBarException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EdxBarCustomizationException() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EdxBarMergeException : public EdxBarException
{
	typedef EdxBarException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EdxBarMergeException(const System::UnicodeString Msg) : EdxBarException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EdxBarMergeException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EdxBarException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EdxBarMergeException(NativeUInt Ident)/* overload */ : EdxBarException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EdxBarMergeException(System::PResStringRec ResStringRec)/* overload */ : EdxBarException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EdxBarMergeException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EdxBarException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EdxBarMergeException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EdxBarException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EdxBarMergeException(const System::UnicodeString Msg, int AHelpContext) : EdxBarException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EdxBarMergeException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EdxBarException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EdxBarMergeException(NativeUInt Ident, int AHelpContext)/* overload */ : EdxBarException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EdxBarMergeException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EdxBarException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EdxBarMergeException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EdxBarException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EdxBarMergeException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EdxBarException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EdxBarMergeException() { }
	
};

#pragma pack(pop)

typedef _di_IdxBarAccessibilityHelper __fastcall (*TdxBarGetRootAccessibleObjectFunc)(HWND AParentWnd);

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 dxBarDefaultButtonArrowWidth = System::Int8(0xb);
static const System::Int8 dxBarDefaultLargeButtonArrowWidth = System::Int8(0xd);
static const System::Int8 dxBarTransparentShadowSize = System::Int8(0x4);
extern DELPHI_PACKAGE System::Types::TSize DropDownGalleryVerticalSizeGripBitmapSize;
#define dxBarItemAllViewLevels (System::Set<TdxBarItemViewLevel, TdxBarItemViewLevel::ivlLargeIconWithText, TdxBarItemViewLevel::ivlDefault>() << TdxBarItemViewLevel::ivlLargeIconWithText << TdxBarItemViewLevel::ivlLargeControlOnly << TdxBarItemViewLevel::ivlSmallIconWithText << TdxBarItemViewLevel::ivlSmallIcon << TdxBarItemViewLevel::ivlControlOnly )
static const TdxBarItemPosition dxBarItemDefaultPosition = (TdxBarItemPosition)(0);
extern DELPHI_PACKAGE System::StaticArray<int, 3> MDIButtonCommands;
#define dxBarKindAny (System::Set<TdxBarKind, TdxBarKind::bkBarControl, TdxBarKind::bkSubMenu>() << TdxBarKind::bkBarControl << TdxBarKind::bkBarQuickControl << TdxBarKind::bkSubMenu )
extern DELPHI_PACKAGE TdxBarGetRootAccessibleObjectFunc dxBarGetRootAccessibleObject;
extern DELPHI_PACKAGE _di_IdxBarHintKeeper dxBarHintKeeper;
extern DELPHI_PACKAGE TdxBarHintWindowClass dxBarHintWindowClass;
extern DELPHI_PACKAGE bool dxBarLockMainFormOnMergingMDIChildForm;
extern DELPHI_PACKAGE bool dxBarMakeInactiveImagesDingy;
extern DELPHI_PACKAGE TdxBarManagerList* dxBarManagerList;
extern DELPHI_PACKAGE bool dxBarPlaySound;
extern DELPHI_PACKAGE TdxBarPainterClass dxBarSkinPainterClass;
extern DELPHI_PACKAGE Vcl::Controls::THintWindow* FHintWindow;
extern DELPHI_PACKAGE Cxclasses::TcxNotifyProcedure FOnRegisterBarManager;
extern DELPHI_PACKAGE Cxclasses::TcxNotifyProcedure FOnUnregisterBarManager;
extern DELPHI_PACKAGE HBRUSH PatternBrush;
static const short dxBarManagerTempCategoryIndex = short(-1000);
static const short dxBarCustomizingPopupPaintStyleGroupIndex = short(-1000);
extern DELPHI_PACKAGE int dxBarNonRecentlyUsedItemsColorDelta;
extern DELPHI_PACKAGE int dxBarFlatToolbarsColorDelta;
extern DELPHI_PACKAGE int dxBarWaitForSubMenuTime;
static const System::Int8 icpNone = System::Int8(-1);
static const System::Int8 icpNonClient = System::Int8(0x64);
static const System::Int8 icpControl = System::Int8(0x0);
static const System::Int8 ecpEdit = System::Int8(0x0);
static const System::Int8 ecpIcon = System::Int8(0x1);
static const System::Int8 ecpText = System::Int8(0x2);
#define ecpHeaderParts (System::Set<System::Byte, 0, 255>() << 0x1 << 0x2 << 0x64 )
static const System::Int8 ccpDropButton = System::Int8(0x3);
static const System::Int8 clcpCustomColorButton = System::Int8(0x4);
static const System::Int8 bcpButton = System::Int8(0x0);
static const System::Int8 bcpDropButton = System::Int8(0x1);
static const System::Int8 secButtonUp = System::Int8(0x3);
static const System::Int8 secButtonDown = System::Int8(0x4);
static const System::Int8 epbcpButton = System::Int8(0x0);
static const System::Int8 epbcpPinButton = System::Int8(0x1);
static const TdxBarManagerStyle dxBarDefaultStyle = (TdxBarManagerStyle)(5);
extern DELPHI_PACKAGE void __fastcall BarAccessibilityHelperOwnerObjectDestroyed(_di_IdxBarAccessibilityHelper &AIHelper);
extern DELPHI_PACKAGE _di_IdxBarAccessibilityHelper __fastcall GetAccessibilityHelper(System::TObject* AObject);
extern DELPHI_PACKAGE _di_IdxBarAccessibilityHelper __fastcall GetKeyTipContainerParent(_di_IdxBarAccessibilityHelper AContainer);
extern DELPHI_PACKAGE TdxBarAccessibilityHelper* __fastcall GetNextAccessibleObject(TdxBarAccessibilityHelper* ASelectedObject, System::Classes::TList* AObjects, Cxaccessibility::TcxAccessibilityNavigationDirection ADirection, bool ACycleHorizontally);
extern DELPHI_PACKAGE _di_IdxBarAccessibilityHelper __fastcall GetRootAccessibleObject(HWND AParentWnd);
extern DELPHI_PACKAGE bool __fastcall IsAncestorComponentDifferencesDetection(System::Classes::TComponent* AComponent);
extern DELPHI_PACKAGE TdxBarNavigationController* __fastcall BarNavigationController(void);
extern DELPHI_PACKAGE TdxBarControlClass __fastcall GetBarControlClass(TdxBar* AToolbar);
extern DELPHI_PACKAGE TdxBarManager* __fastcall GetBarManagerByComponent(System::Classes::TComponent* AComponent);
extern DELPHI_PACKAGE TdxBarManager* __fastcall GetBarManagerByForm(Vcl::Forms::TCustomForm* AForm);
extern DELPHI_PACKAGE TdxBarManager* __fastcall GetBarManagerForComponent(System::Classes::TComponent* AComponent);
extern DELPHI_PACKAGE Vcl::Forms::TCustomForm* __fastcall dxBarGetControlForm(Vcl::Controls::TWinControl* AControl, TdxBarManagerFormKind AFormKind);
extern DELPHI_PACKAGE Cxcontainer::TcxCustomPopupWindow* __fastcall dxBarGetParentPopupWindow(Vcl::Controls::TWinControl* AControl, bool ACheckParentBars);
extern DELPHI_PACKAGE TdxBarDesignController* __fastcall BarDesignController(void);
extern DELPHI_PACKAGE TdxBarItemList* __fastcall RegdxItemList(void);
extern DELPHI_PACKAGE void __fastcall dxBarRegisterItem(TdxBarItemClass AItemClass, TdxBarItemControlClass AItemControlClass, bool AVisible);
extern DELPHI_PACKAGE void __fastcall dxBarUnregisterItem(TdxBarItemClass AItemClass);
extern DELPHI_PACKAGE void __fastcall dxBarDesignerModified(TdxBarManager* ABarManager);
extern DELPHI_PACKAGE TdxBarCustomHintViewInfo* __fastcall dxBarCreateScreenTipViewInfo(TdxBarManager* ABarManager, System::UnicodeString AHintText, const System::UnicodeString AShortCut, Dxscreentip::TdxScreenTip* AScreenTip, TdxBarPainter* APainter);
extern DELPHI_PACKAGE TdxBarFlatPainter* __fastcall dxBarFlatPainter(void);
extern DELPHI_PACKAGE TCustomdxBarControl* __fastcall ActiveBarControl(void);
extern DELPHI_PACKAGE TdxBarItemVisible __fastcall VisibleTodxBarVisible(bool Value);
extern DELPHI_PACKAGE TCustomdxBarControl* __fastcall GetParentBarForBar(TCustomdxBarControl* Value);
extern DELPHI_PACKAGE int __fastcall GetAccelPos(System::UnicodeString &AText, bool AModifyString = false);
extern DELPHI_PACKAGE Vcl::Controls::TWinControl* __fastcall dxFindVCLControl(HWND Wnd);
extern DELPHI_PACKAGE bool __fastcall dxHasAsParent(HWND Wnd, HWND ParentWnd);
extern DELPHI_PACKAGE bool __fastcall dxBarHasPopupWindowAbove(TCustomdxBarControl* ABarControl, bool AIgnoreSelectedControl);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetTextOf(const System::UnicodeString S);
extern DELPHI_PACKAGE void __fastcall DrawItemArrow(HDC DC, const System::Types::TRect &R, Cxgraphics::TcxArrowDirection AArrowType, bool AEnabled, bool ASelected, bool AFlat, System::Uitypes::TColor AColor = (System::Uitypes::TColor)(0x20000000))/* overload */;
extern DELPHI_PACKAGE void __fastcall DrawItemArrow(HDC DC, const System::Types::TRect &R, Cxgraphics::TcxArrowDirection AArrowType, Cxgeometry::TdxScaleFactor* AScaleFactor, bool AEnabled, bool ASelected, bool AFlat, System::Uitypes::TColor AColor = (System::Uitypes::TColor)(0x20000000))/* overload */;
extern DELPHI_PACKAGE void __fastcall DrawItemArrow(HDC ADC, const System::Types::TRect &R, bool ADownArrow, bool AEnabled, bool ASelected, bool AFlat, System::Uitypes::TColor AColor = (System::Uitypes::TColor)(0x20000000))/* overload */;
extern DELPHI_PACKAGE void __fastcall DrawItemArrow(HDC ADC, const System::Types::TRect &R, Cxgeometry::TdxScaleFactor* AScaleFactor, bool ADownArrow, bool AEnabled, bool ASelected, bool AFlat, System::Uitypes::TColor AColor = (System::Uitypes::TColor)(0x20000000))/* overload */;
extern DELPHI_PACKAGE void __fastcall DrawLargeItemArrow(HDC DC, const System::Types::TRect &R, Cxgraphics::TcxArrowDirection AArrowType, int ASize, bool ASelected, bool AEnabled, bool AFlat, System::Uitypes::TColor AColor = (System::Uitypes::TColor)(0x20000000));
extern DELPHI_PACKAGE void __fastcall FrameFlatSelRect(HDC DC, const System::Types::TRect &R);
extern DELPHI_PACKAGE void __fastcall DrawVerticalGradient(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, System::Byte FromR, System::Byte ToR, System::Byte FromG, System::Byte ToG, System::Byte FromB, System::Byte ToB);
extern DELPHI_PACKAGE void __fastcall TransparentDraw(HDC DrawDC, const System::Types::TRect &R, Vcl::Graphics::TGraphic* AGlyph, bool AEnabled = true)/* overload */;
extern DELPHI_PACKAGE void __fastcall TransparentDraw(HDC DrawDC, HBRUSH Brush, const System::Types::TRect &FullRect, const System::Types::TRect &R, Vcl::Graphics::TGraphic* AGlyph, Vcl::Imglist::TCustomImageList* AImages, int AImageIndex, System::Uitypes::TColor AImageListBkColor, bool AEnabled, bool AGrayScale, bool AFlat, bool ASelected, bool ADown, bool APressed, bool AShadow, bool AFaded, bool ASmoothImage = false, bool AUseLeftBottomPixelAsTransparent = true, Dxcoregraphics::_di_IdxColorPalette AColorPalette = Dxcoregraphics::_di_IdxColorPalette())/* overload */;
extern DELPHI_PACKAGE void __fastcall TransparentDraw(TdxBarItemControl* ABarItemControl, HDC DrawDC, HBRUSH Brush, const System::Types::TRect &FullRect, const System::Types::TRect &R, Vcl::Graphics::TGraphic* AGlyph, Vcl::Imglist::TCustomImageList* AImages, int AImageIndex, System::Uitypes::TColor AImageListBkColor, bool AEnabled, bool AGrayScale, bool AFlat, bool ASelected, bool ADown, bool APressed, bool AShadow, bool AFaded, bool ASmoothImage = false, bool AUseLeftBottomPixelAsTransparent = true, Dxcoregraphics::_di_IdxColorPalette AColorPalette = Dxcoregraphics::_di_IdxColorPalette())/* overload */;
extern DELPHI_PACKAGE void __fastcall ProcessMouseMessages(void);
extern DELPHI_PACKAGE void __fastcall ProcessPaintMessages(void);
extern DELPHI_PACKAGE HFONT __fastcall CloneFont(HFONT AFontHandle);
extern DELPHI_PACKAGE void __fastcall RestoreClipRgn(HDC DC, HRGN &AClipRgn, bool &AClipRgnExists);
extern DELPHI_PACKAGE void __fastcall SaveClipRgn(HDC DC, HRGN &AClipRgn, bool &AClipRgnExists);
extern DELPHI_PACKAGE void __fastcall FillRectByBitmap(HDC DC, const System::Types::TRect &ADestR, const System::Types::TRect &ASourceR, Vcl::Graphics::TBitmap* ABitmap);
extern DELPHI_PACKAGE void __fastcall AfterDrawBackground(HDC ADC, const System::Types::TPoint &APrevWindowOrg);
extern DELPHI_PACKAGE System::Types::TPoint __fastcall BeforeDrawBackground(Vcl::Controls::TWinControl* ASourceControl, Vcl::Controls::TWinControl* ADestinationControl, HDC ADC, System::Types::TRect &ARect, /* out */ System::Types::TPoint &APrevWindowOrg);
extern DELPHI_PACKAGE bool __fastcall LeftButtonPressed(void);
extern DELPHI_PACKAGE bool __fastcall RightButtonPressed(void);
extern DELPHI_PACKAGE bool __fastcall IsApplicationActive(void);
extern DELPHI_PACKAGE int __fastcall dxBarMessageBox(const System::UnicodeString AText, int AFlags);
extern DELPHI_PACKAGE void __fastcall dxBarFrameRect(HDC ADC, const System::Types::TRect &ARect, int AColor);
extern DELPHI_PACKAGE void __fastcall dxBarFocusRect(HDC ADC, const System::Types::TRect &ARect);
extern DELPHI_PACKAGE bool __fastcall IsSelectableItem(System::TObject* AObject)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsSelectableItem(System::TObject* AObject, /* out */ _di_IdxBarSelectableItem &ASelectableItem)/* overload */;
extern DELPHI_PACKAGE _di_IdxBarSelectableItem __fastcall GetSelectableItem(System::TObject* AObject);
extern DELPHI_PACKAGE void __fastcall CleanSelectableItems(TdxObjectList* AItems);
extern DELPHI_PACKAGE TdxBarItemRealViewLevel __fastcall GetMaxViewLevel(TdxBarItemViewLevels AViewLevels);
extern DELPHI_PACKAGE TdxBarItemRealViewLevel __fastcall GetMinViewLevel(TdxBarItemViewLevels AViewLevels);
extern DELPHI_PACKAGE TdxBarItemRealViewLevel __fastcall GetNextViewLevel(TdxBarItemViewLevels AViewLevels, TdxBarItemRealViewLevel AViewLevel);
extern DELPHI_PACKAGE void __fastcall BarDrawSizeGrip(HDC DC, const System::Types::TRect &R);
extern DELPHI_PACKAGE void __fastcall dxBarPopup(Vcl::Menus::TPopupMenu* APopup, Vcl::Controls::TWinControl* AOwner, int X, int Y);
extern DELPHI_PACKAGE TdxBarMouseWheelEventReceiver __fastcall BarGetMouseWheelReceiver(void);
}	/* namespace Dxbar */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXBAR)
using namespace Dxbar;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxbarHPP
