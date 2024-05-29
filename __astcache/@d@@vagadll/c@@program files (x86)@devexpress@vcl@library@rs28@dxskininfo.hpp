// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxSkinInfo.pas' rev: 35.00 (Windows)

#ifndef DxskininfoHPP
#define DxskininfoHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <System.SysUtils.hpp>
#include <cxClasses.hpp>
#include <cxGraphics.hpp>
#include <cxLookAndFeels.hpp>
#include <cxGeometry.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <dxSkinsCore.hpp>
#include <dxSkinsStrs.hpp>
#include <dxCoreClasses.hpp>
#include <dxCoreGraphics.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxskininfo
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TdxSkinScrollInfo;
class DELPHICLASS TdxSkinElementHelper;
class DELPHICLASS TdxSkinInfo;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TdxSkinFormIcon : unsigned char { sfiMenu, sfiHelp, sfiMinimize, sfiMaximize, sfiRestore, sfiClose };

typedef System::Set<TdxSkinFormIcon, TdxSkinFormIcon::sfiMenu, TdxSkinFormIcon::sfiClose> TdxSkinFormIcons;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSkinScrollInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Dxskinscore::TdxSkinElement* FElement;
	int FImageIndex;
	
public:
	__fastcall TdxSkinScrollInfo(Dxskinscore::TdxSkinElement* AElement, int AImageIndex, Cxlookandfeelpainters::TcxScrollBarPart APart);
	bool __fastcall DrawScaled(HDC DC, const System::Types::TRect &R, int AImageIndex, Dxskinscore::TdxSkinElementState AState, Cxgeometry::TdxScaleFactor* AScaleFactor)/* overload */;
	bool __fastcall Draw(HDC DC, const System::Types::TRect &R, int AImageIndex, Dxskinscore::TdxSkinElementState AState)/* overload */;
	bool __fastcall DrawScaled(HDC DC, const System::Types::TRect &R, Dxskinscore::TdxSkinElementState AState, Cxgeometry::TdxScaleFactor* AScaleFactor)/* overload */;
	bool __fastcall Draw(HDC DC, const System::Types::TRect &R, Dxskinscore::TdxSkinElementState AState)/* overload */;
	__property Dxskinscore::TdxSkinElement* Element = {read=FElement};
	__property int ImageIndex = {read=FImageIndex, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSkinScrollInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSkinElementHelper : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod System::Types::TSize __fastcall CalculateCaptionButtonSize(int ACaptionHeight, Dxskinscore::TdxSkinElement* AElement);
	__classmethod bool __fastcall IsAlternateImageSetUsed(Dxskinscore::TdxSkinElement* AElement, int AImageIndex, Dxskinscore::TdxSkinElementState AState);
public:
	/* TObject.Create */ inline __fastcall TdxSkinElementHelper() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxSkinElementHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSkinInfo : public Dxcoreclasses::TcxIUnknownObject
{
	typedef Dxcoreclasses::TcxIUnknownObject inherited;
	
private:
	Dxskinscore::TdxSkin* FSkin;
	void __fastcall MarkObjectUsed(Dxskinscore::TdxSkinCustomObject* AObject);
	void __fastcall SetSkin(Dxskinscore::TdxSkin* ASkin);
	
protected:
	Dxskinscore::TdxSkinControlGroup* GroupBars;
	Dxskinscore::TdxSkinControlGroup* GroupCommon;
	Dxskinscore::TdxSkinControlGroup* GroupDocking;
	Dxskinscore::TdxSkinControlGroup* GroupEditors;
	Dxskinscore::TdxSkinControlGroup* GroupForm;
	Dxskinscore::TdxSkinControlGroup* GroupGantt;
	Dxskinscore::TdxSkinControlGroup* GroupGrid;
	Dxskinscore::TdxSkinControlGroup* GroupHamburgerMenu;
	Dxskinscore::TdxSkinControlGroup* GroupListView;
	Dxskinscore::TdxSkinControlGroup* GroupMapControl;
	Dxskinscore::TdxSkinControlGroup* GroupNavBar;
	Dxskinscore::TdxSkinControlGroup* GroupNavPane;
	Dxskinscore::TdxSkinControlGroup* GroupPDFViewer;
	Dxskinscore::TdxSkinControlGroup* GroupPrintingSystem;
	Dxskinscore::TdxSkinControlGroup* GroupRibbon;
	Dxskinscore::TdxSkinControlGroup* GroupRichEdit;
	Dxskinscore::TdxSkinControlGroup* GroupScheduler;
	Dxskinscore::TdxSkinControlGroup* GroupTabs;
	Dxskinscore::TdxSkinControlGroup* GroupTileControl;
	Dxskinscore::TdxSkinControlGroup* GroupVGrid;
	Dxskinscore::TdxSkinElement* CardViewSeparator;
	Dxskinscore::TdxSkinElement* CheckboxElement;
	System::StaticArray<Dxskinscore::TdxSkinElement*, 2> ClockElements;
	System::StaticArray<Dxskinscore::TdxSkinElement*, 2> EditButtonElements;
	System::StaticArray<Dxskinscore::TdxSkinElement*, 8> EditButtonGlyphs;
	bool EditButtonMergeBorders;
	Dxskinscore::TdxSkinElement* EditButtonSearchGlyph;
	Dxskinscore::TdxSkinAlphaColor* GridFixedColumnHighlightColor;
	Dxskinscore::TdxSkinElement* GridFixedLine;
	Dxskinscore::TdxSkinElement* GridGroupByBox;
	Dxskinscore::TdxSkinColor* GridGroupByBoxLineColor;
	Dxskinscore::TdxSkinElement* GridGroupRow;
	Dxskinscore::TdxSkinColor* GridGroupRowStyleOffice11ContentColor;
	Dxskinscore::TdxSkinColor* GridGroupRowStyleOffice11SeparatorColor;
	Dxskinscore::TdxSkinColor* GridGroupRowStyleOffice11TextColor;
	Dxskinscore::TdxSkinElement* GridLine;
	Dxskinscore::TdxSkinElement* GridWinExplorerViewGroup;
	Dxskinscore::TdxSkinElement* GridWinExplorerViewGroupCaptionLine;
	Dxskinscore::TdxSkinElement* GridWinExplorerViewGroupExpandButton;
	Dxskinscore::TdxSkinElement* GridWinExplorerViewRecord;
	Dxskinscore::TdxSkinElement* HighlightedItem;
	Dxskinscore::TdxSkinElement* IndicatorImages;
	Dxskinscore::TdxSkinElement* NavigatorButton;
	Dxskinscore::TdxSkinElement* NavigatorGlyphs;
	Dxskinscore::TdxSkinElement* NavigatorGlyphsVert;
	Dxskinscore::TdxSkinElement* NavigatorInfoPanel;
	Dxskinscore::TdxSkinElement* RadioGroupButton;
	Dxskinscore::TdxSkinElement* RangeTrackBarThumbBoth;
	Dxskinscore::TdxSkinElement* RangeTrackBarThumbLeft;
	Dxskinscore::TdxSkinElement* RangeTrackBarThumbRight;
	Dxskinscore::TdxSkinElement* RatingIndicator;
	System::StaticArray<Dxskinscore::TdxSkinElement*, 2> Splitter;
	System::StaticArray<System::StaticArray<Dxskinscore::TdxSkinElement*, 3>, 2> TrackBarThumb;
	Dxskinscore::TdxSkinColor* TrackBarTickColor;
	System::StaticArray<Dxskinscore::TdxSkinElement*, 2> TrackBarTrack;
	Dxskinscore::TdxSkinElement* VGridCategory;
	Dxskinscore::TdxSkinColor* VGridContentColor;
	System::StaticArray<Dxskinscore::TdxSkinElement*, 2> VGridLine;
	Dxskinscore::TdxSkinElement* VGridRowHeader;
	System::StaticArray<Dxskinscore::TdxSkinColor*, 28> CalcEditButtonTextColors;
	Dxskinscore::TdxSkinColor* ContentEvenColor;
	Dxskinscore::TdxSkinColor* ContentOddColor;
	Dxskinscore::TdxSkinColor* ContentTextColor;
	Dxskinscore::TdxSkinColor* HeaderBackgroundColor;
	Dxskinscore::TdxSkinColor* HeaderBackgroundTextColor;
	Dxskinscore::TdxSkinColor* SelectionColor;
	Dxskinscore::TdxSkinColor* SelectionTextColor;
	Dxskinscore::TdxSkinColor* SearchResultHighlightColor;
	Dxskinscore::TdxSkinColor* SearchResultHighlightTextColor;
	Dxskinscore::TdxSkinColor* TreeListGridLineColor;
	Dxskinscore::TdxSkinColor* TreeListTreeLineColor;
	Dxskinscore::TdxSkinElement* ExpandButton;
	Dxskinscore::TdxSkinElement* FooterCell;
	Dxskinscore::TdxSkinElement* FooterPanel;
	Dxskinscore::TdxSkinElement* Header;
	Dxskinscore::TdxSkinElement* HeaderSpecial;
	Dxskinscore::TdxSkinElement* SortGlyphs;
	System::StaticArray<Dxskinscore::TdxSkinElement*, 2> FilterButtons;
	Dxskinscore::TdxSkinElement* FilterPanel;
	Dxskinscore::TdxSkinElement* SmartFilterButton;
	Dxskinscore::TdxSkinElement* __fastcall CreateBlankElement(Dxskinscore::TdxSkinControlGroup* AGroup, const System::UnicodeString AName);
	Dxskinscore::TdxSkinControlGroup* __fastcall CreateBlankGroup(const System::UnicodeString AName);
	Dxcoregraphics::TdxAlphaColor __fastcall GetAlphaColorValueByName(Dxskinscore::TdxSkinPersistent* AElement, const System::UnicodeString AName);
	Dxskinscore::TdxSkinBooleanProperty* __fastcall GetBoolPropertyByName(Dxskinscore::TdxSkinPersistent* AElement, const System::UnicodeString AName);
	Dxskinscore::TdxSkinColor* __fastcall GetColorByName(Dxskinscore::TdxSkinPersistent* AElement, const System::UnicodeString AName)/* overload */;
	Dxskinscore::TdxSkinColor* __fastcall GetColorByName(const System::UnicodeString AName)/* overload */;
	System::Uitypes::TColor __fastcall GetColorValueByName(Dxskinscore::TdxSkinPersistent* AElement, const System::UnicodeString AName);
	Dxskinscore::TdxSkinElement* __fastcall GetElementByName(Dxskinscore::TdxSkinControlGroup* AGroup, const System::UnicodeString AName, bool ACreateIfAbsent = true);
	Dxskinscore::TdxSkinControlGroup* __fastcall GetGroupByName(const System::UnicodeString AName);
	Dxskinscore::TdxSkinIntegerProperty* __fastcall GetIntegerPropertyByName(Dxskinscore::TdxSkinPersistent* AElement, const System::UnicodeString AName);
	Dxskinscore::TdxSkinProperty* __fastcall GetPropertyByName(Dxskinscore::TdxSkinPersistent* AElement, const System::UnicodeString AName);
	void __fastcall FinalizeScrollBarElements();
	void __fastcall InitializeAlertWindowElements();
	void __fastcall InitializeBarElements();
	void __fastcall InitializeBreadcrumbEditElements();
	void __fastcall InitializeButtonElements();
	void __fastcall InitializeCalcEditColors();
	void __fastcall InitializeCalendarElements();
	void __fastcall InitializeCheckboxElements();
	void __fastcall InitializeClockElements();
	void __fastcall InitializeColors();
	void __fastcall InitializeDataRowLayoutElements();
	void __fastcall InitializeDockControlElements();
	void __fastcall InitializeEditButtonElements();
	void __fastcall InitializeFilterElements();
	void __fastcall InitializeFilterVisualCriteriaElements();
	void __fastcall InitializeFooterElements();
	void __fastcall InitializeFormElements();
	void __fastcall InitializeGalleryElements();
	void __fastcall InitializeGanttElements();
	void __fastcall InitializeGaugeElements();
	void __fastcall InitializeGridElements();
	void __fastcall InitializeGroupBoxElements();
	void __fastcall InitializeGroups();
	void __fastcall InitializeHamburgerMenuElements();
	void __fastcall InitializeHeaderElements();
	void __fastcall InitializeIndicatorImages();
	void __fastcall InitializeLayoutViewElements();
	void __fastcall InitializeListViewElements();
	void __fastcall InitializeMapControlElements();
	void __fastcall InitializeNavBarElements();
	void __fastcall InitializeNavigatorElements();
	void __fastcall InitializePageControlElements();
	void __fastcall InitializePDFViewerElements();
	void __fastcall InitializePrintingSystemElements();
	void __fastcall InitializeProgressBarElements();
	void __fastcall InitializeRadioGroupElements();
	void __fastcall InitializeRangeControlElements();
	void __fastcall InitializeRibbonColors();
	void __fastcall InitializeRibbonElements();
	void __fastcall InitializeRibbonProperties();
	void __fastcall InitializeRichEditElements();
	void __fastcall InitializeSchedulerElements();
	void __fastcall InitializeScrollBarElements();
	void __fastcall InitializeSizeGripElements();
	void __fastcall InitializeSplitterElements();
	void __fastcall InitializeTileControlElements();
	void __fastcall InitializeToggleSwitchElements();
	void __fastcall InitializeToolTipElements();
	void __fastcall InitializeTrackBarElements();
	virtual void __fastcall FinalizeSkinInfo();
	virtual void __fastcall InitializeSkinInfo();
	void __fastcall SetUseCache(Dxskinscore::TdxSkinElement* AElement, int ACapacity = 0xffffffff);
	Dxskinscore::TdxSkin* __fastcall GetSkin();
	virtual void __fastcall SkinChanged(Dxskinscore::TdxSkin* Sender);
	
public:
	Dxskinscore::TdxSkinElement* BackButton;
	System::StaticArray<Dxskinscore::TdxSkinElement*, 3> ButtonParts;
	Dxskinscore::TdxSkinElement* ClearButton;
	Dxskinscore::TdxSkinColor* ContainerBorderColor;
	Dxskinscore::TdxSkinColor* ContainerHighlightBorderColor;
	Dxskinscore::TdxSkinColor* ContentColor;
	System::StaticArray<Dxskinscore::TdxSkinColor*, 4> EditorBackgroundColors;
	System::StaticArray<Dxskinscore::TdxSkinColor*, 4> EditorTextColors;
	Dxskinscore::TdxSkinColor* HyperLinkTextColor;
	Dxskinscore::TdxSkinColor* InactiveColor;
	Dxskinscore::TdxSkinColor* InactiveTextColor;
	Dxskinscore::TdxSkinColor* SpreadSheetContentColor;
	Dxskinscore::TdxSkinColor* SpreadSheetContentTextColor;
	Dxskinscore::TdxSkinColor* SpreadSheetFrozenPaneSeparatorColor;
	Dxskinscore::TdxSkinColor* SpreadSheetGroupLineColor;
	Dxskinscore::TdxSkinColor* SpreadSheetSelectionColor;
	Dxskinscore::TdxSkinColor* GridLikeControlContentColor;
	Dxskinscore::TdxSkinColor* GridLikeControlContentEvenColor;
	Dxskinscore::TdxSkinColor* GridLikeControlContentOddColor;
	Dxskinscore::TdxSkinColor* GridLikeControlContentTextColor;
	Dxskinscore::TdxSkinColor* GridLikeControlBackgroundColor;
	Dxskinscore::TdxSkinColor* CriticalColor;
	Dxskinscore::TdxSkinColor* HotTrackedColor;
	Dxskinscore::TdxSkinColor* HotTrackedTextColor;
	Dxskinscore::TdxSkinColor* InformationColor;
	Dxskinscore::TdxSkinColor* QuestionColor;
	System::StaticArray<System::StaticArray<Dxskinscore::TdxSkinElement*, 4>, 2> ProgressBarParts;
	System::StaticArray<System::StaticArray<TdxSkinScrollInfo*, 6>, 2> ScrollBar_Elements;
	System::StaticArray<Dxskinscore::TdxSkinElement*, 2> LabelLine;
	Dxskinscore::TdxSkinColor* BevelShapeColor1;
	Dxskinscore::TdxSkinColor* BevelShapeColor2;
	Dxskinscore::TdxSkinElement* AlertWindow;
	Dxskinscore::TdxSkinElement* AlertWindowButton;
	Dxskinscore::TdxSkinElement* AlertWindowButtonGlyphs;
	Dxskinscore::TdxSkinElement* AlertWindowCaption;
	int AlertWindowCornerRadius;
	Dxskinscore::TdxSkinElement* AlertWindowNavigationPanel;
	Dxskinscore::TdxSkinElement* AlertWindowNavigationPanelButton;
	System::StaticArray<Dxskinscore::TdxSkinColor*, 4> BreadcrumbEditBackgroundColors;
	System::StaticArray<Dxskinscore::TdxSkinColor*, 4> BreadcrumbEditBordersColors;
	Dxskinscore::TdxSkinElement* BreadcrumbEditButton;
	bool BreadcrumbEditButtonMergeBorders;
	Dxskinscore::TdxSkinElement* BreadcrumbEditButtonsAreaSeparator;
	Dxskinscore::TdxSkinElement* BreadcrumbEditDropDownButton;
	Dxskinscore::TdxSkinElement* BreadcrumbEditNodeButton;
	Dxskinscore::TdxSkinElement* BreadcrumbEditNodeSplitButtonLeft;
	Dxskinscore::TdxSkinElement* BreadcrumbEditNodeSplitButtonRight;
	Dxskinscore::TdxSkinElement* BreadcrumbEditProgressChunk;
	Dxskinscore::TdxSkinElement* BreadcrumbEditProgressChunkOverlay;
	Dxskinscore::TdxSkinRectProperty* BreadcrumbEditProgressChunkPadding;
	System::StaticArray<Dxskinscore::TdxSkinElement*, 5> GroupBoxCaptionElements;
	System::StaticArray<Dxskinscore::TdxSkinIntegerProperty*, 5> GroupBoxCaptionTailSizes;
	System::StaticArray<Dxskinscore::TdxSkinIntegerProperty*, 5> GroupBoxCaptionTextPadding;
	Dxskinscore::TdxSkinElement* GroupBoxClient;
	System::StaticArray<Dxskinscore::TdxSkinElement*, 5> GroupBoxElements;
	Dxskinscore::TdxSkinElement* GroupButton;
	Dxskinscore::TdxSkinElement* GroupButtonExpandGlyph;
	Dxskinscore::TdxSkinElement* GroupSearchButton;
	Dxskinscore::TdxSkinElement* DockControlBorder;
	Dxskinscore::TdxSkinElement* DockControlCaption;
	System::Uitypes::TColor DockControlCaptionNonFocusedTextColor;
	Dxskinscore::TdxSkinElement* DockControlHideBar;
	Dxskinscore::TdxSkinElement* DockControlHideBarLeft;
	Dxskinscore::TdxSkinElement* DockControlHideBarRight;
	Dxskinscore::TdxSkinElement* DockControlHideBarBottom;
	Dxskinscore::TdxSkinElement* DockControlHideBarButtons;
	System::StaticArray<Dxskinscore::TdxSkinColor*, 2> DockControlHideBarTextColor;
	System::StaticArray<int, 3> DockControlIndents;
	Dxskinscore::TdxSkinElement* DockControlTabHeader;
	Dxskinscore::TdxSkinElement* DockControlTabButtonHorz;
	Dxskinscore::TdxSkinElement* DockControlTabButtonVert;
	Dxskinscore::TdxSkinElement* DockControlTabHeaderBackground;
	Dxskinscore::TdxSkinElement* DockControlTabHeaderCloseButton;
	Dxskinscore::TdxSkinElement* DockControlTabHeaderLine;
	Dxskinscore::TdxSkinColor* DockControlTabTextColor;
	Dxskinscore::TdxSkinColor* DockControlTabTextColorHot;
	Dxskinscore::TdxSkinColor* DockControlTabTextColorActive;
	Dxskinscore::TdxSkinColor* DockControlTabTextColorActiveHot;
	Dxskinscore::TdxSkinColor* DockControlTabTextColorDisabled;
	Dxskinscore::TdxSkinElement* DockControlWindowButton;
	Dxskinscore::TdxSkinElement* DockControlWindowButtonGlyphs;
	Dxskinscore::TdxSkinColor* DockSiteContentColor;
	Dxskinscore::TdxSkinColor* LayoutControlColor;
	System::StaticArray<Dxskinscore::TdxSkinRectProperty*, 6> LayoutViewElementPadding;
	System::StaticArray<Dxskinscore::TdxSkinRectProperty*, 6> LayoutViewElementSpacing;
	Dxskinscore::TdxSkinElement* LayoutViewItem;
	System::StaticArray<Dxskinscore::TdxSkinElement*, 5> LayoutViewRecordCaptionElements;
	System::StaticArray<Dxskinscore::TdxSkinIntegerProperty*, 5> LayoutViewRecordCaptionTailSizes;
	System::StaticArray<Dxskinscore::TdxSkinIntegerProperty*, 5> LayoutViewRecordCaptionTextPadding;
	System::StaticArray<Dxskinscore::TdxSkinElement*, 5> LayoutViewRecordElements;
	Dxskinscore::TdxSkinElement* LayoutViewRecordExpandButton;
	Dxskinscore::TdxSkinElement* PageControlButton;
	Dxskinscore::TdxSkinElement* PageControlButtonHorz;
	Dxskinscore::TdxSkinElement* PageControlButtonVert;
	Dxskinscore::TdxSkinElement* PageControlCloseButton;
	Dxskinscore::TdxSkinElement* PageControlHeader;
	Dxskinscore::TdxSkinElement* PageControlHeaderButton;
	System::StaticArray<int, 8> PageControlIndents;
	Dxskinscore::TdxSkinElement* PageControlPane;
	Dxskinscore::TdxSkinColor* TabTextColor;
	Dxskinscore::TdxSkinColor* TabTextColorActive;
	Dxskinscore::TdxSkinColor* TabTextColorActiveHot;
	Dxskinscore::TdxSkinColor* TabTextColorDisabled;
	Dxskinscore::TdxSkinColor* TabTextColorHot;
	Dxskinscore::TdxSkinElement* NavBarBackgroundColor;
	System::StaticArray<Dxskinscore::TdxSkinElement*, 2> NavBarGroupButtons;
	Dxskinscore::TdxSkinElement* NavBarGroupClient;
	Dxskinscore::TdxSkinElement* NavBarGroupHeader;
	Dxskinscore::TdxSkinElement* NavBarItem;
	Dxskinscore::TdxSkinElement* NavBarAccordionControlBackground;
	Dxskinscore::TdxSkinIntegerProperty* NavBarAccordionControlChildItemOffset;
	Dxskinscore::TdxSkinRectProperty* NavBarAccordionControlContentContainerPadding;
	Dxskinscore::TdxSkinIntegerProperty* NavBarAccordionControlDistanceBetweenRootGroups;
	Dxskinscore::TdxSkinElement* NavBarAccordionControlGroup;
	Dxskinscore::TdxSkinElement* NavBarAccordionControlGroupCloseButton;
	Dxskinscore::TdxSkinElement* NavBarAccordionControlGroupOpenButton;
	Dxskinscore::TdxSkinElement* NavBarAccordionControlItem;
	Dxskinscore::TdxSkinElement* NavBarAccordionControlRootGroup;
	Dxskinscore::TdxSkinElement* NavBarAccordionControlRootGroupCloseButton;
	Dxskinscore::TdxSkinElement* NavBarAccordionControlRootGroupOpenButton;
	Dxskinscore::TdxSkinElement* NavBarAccordionControlSearchButton;
	Dxskinscore::TdxSkinIntegerProperty* NavBarAccordionControlSearchButtonGlyphToTextIndent;
	Dxskinscore::TdxSkinElement* HamburgerMenuBackground;
	Dxskinscore::TdxSkinElement* HamburgerMenuHamburgerButton;
	Dxskinscore::TdxSkinElement* HamburgerMenuChildGroup;
	Dxskinscore::TdxSkinElement* HamburgerMenuChildGroupCloseButton;
	Dxskinscore::TdxSkinElement* HamburgerMenuChildGroupOpenButton;
	Dxskinscore::TdxSkinIntegerProperty* HamburgerMenuChildItemOffset;
	Dxskinscore::TdxSkinIntegerProperty* HamburgerMenuDistanceBetweenGroups;
	Dxskinscore::TdxSkinElement* HamburgerMenuGroup;
	Dxskinscore::TdxSkinElement* HamburgerMenuGroupCloseButton;
	Dxskinscore::TdxSkinElement* HamburgerMenuGroupOpenButton;
	Dxskinscore::TdxSkinElement* HamburgerMenuItem;
	Dxskinscore::TdxSkinElement* HamburgerMenuNavPaneBackground;
	Dxskinscore::TdxSkinElement* HamburgerMenuNavPaneExpandButton;
	Dxskinscore::TdxSkinElement* HamburgerMenuNavPaneItem;
	Dxskinscore::TdxSkinElement* HamburgerMenuScrollDownButton;
	Dxskinscore::TdxSkinElement* HamburgerMenuScrollUpButton;
	Dxskinscore::TdxSkinIntegerProperty* NavPaneCaptionFontSize;
	Dxskinscore::TdxSkinIntegerProperty* NavPaneCaptionHeight;
	Dxskinscore::TdxSkinElement* NavPaneCollapseButton;
	Dxskinscore::TdxSkinElement* NavPaneCollapsedGroupClient;
	Dxskinscore::TdxSkinElement* NavPaneExpandButton;
	Dxskinscore::TdxSkinElement* NavPaneFormBorder;
	Dxskinscore::TdxSkinElement* NavPaneFormSizeGrip;
	System::StaticArray<Dxskinscore::TdxSkinElement*, 2> NavPaneGroupButton;
	Dxskinscore::TdxSkinElement* NavPaneGroupCaption;
	Dxskinscore::TdxSkinElement* NavPaneGroupClient;
	Dxskinscore::TdxSkinElement* NavPaneItem;
	Dxskinscore::TdxSkinElement* NavPaneOfficeNavigationBar;
	Dxskinscore::TdxSkinElement* NavPaneOfficeNavigationBarItem;
	int NavPaneOfficeNavigationBarItemFontDelta;
	Dxskinscore::TdxSkinElement* NavPaneOfficeNavigationBarSkinningItem;
	int NavPaneOfficeNavigationBarSkinningItemFontDelta;
	Dxskinscore::TdxSkinBooleanProperty* NavPaneOffsetGroupBorders;
	Dxskinscore::TdxSkinElement* NavPaneOverflowPanel;
	Dxskinscore::TdxSkinElement* NavPaneOverflowPanelExpandedItem;
	Dxskinscore::TdxSkinElement* NavPaneOverflowPanelItem;
	System::StaticArray<Dxskinscore::TdxSkinElement*, 2> NavPaneScrollButtons;
	Dxskinscore::TdxSkinElement* NavPaneSelectedItem;
	Dxskinscore::TdxSkinElement* NavPaneSplitter;
	int FormCaptionFontDelta;
	Dxskinscore::TdxSkinBooleanProperty* FormCaptionFontIsBold;
	Dxskinscore::TdxSkinElement* FormContent;
	System::StaticArray<System::StaticArray<Dxskinscore::TdxSkinElement*, 4>, 2> FormFrames;
	System::StaticArray<System::StaticArray<Dxskinscore::TdxSkinElement*, 6>, 2> FormIcons;
	Dxskinscore::TdxSkinColor* FormInactiveColor;
	Dxskinscore::TdxSkinElement* FormStatusBar;
	Dxskinscore::TdxSkinBooleanProperty* FormSupportsNavigationControlExtensionToFormCaption;
	Dxskinscore::TdxSkinColor* FormTextShadowColor;
	Dxskinscore::TdxSkinElement* SizeGrip;
	System::StaticArray<Dxskinscore::TdxSkinElement*, 2> SchedulerAllDayArea;
	System::StaticArray<Dxskinscore::TdxSkinElement*, 2> SchedulerAppointment;
	Dxskinscore::TdxSkinColor* SchedulerAppointmentBorder;
	Dxskinscore::TdxSkinIntegerProperty* SchedulerAppointmentBorderSize;
	Dxskinscore::TdxSkinElement* SchedulerAppointmentMask;
	System::StaticArray<Dxskinscore::TdxSkinElement*, 2> SchedulerAppointmentShadow;
	Dxskinscore::TdxSkinElement* SchedulerCurrentTimeIndicator;
	Dxskinscore::TdxSkinElement* SchedulerGroup;
	Dxskinscore::TdxSkinElement* SchedulerMilestone;
	Dxskinscore::TdxSkinElement* SchedulerLabelCircle;
	Dxskinscore::TdxSkinElement* SchedulerMoreButton;
	System::StaticArray<Dxskinscore::TdxSkinElement*, 2> SchedulerNavigationButtons;
	System::StaticArray<Dxskinscore::TdxSkinElement*, 2> SchedulerNavigationButtonsArrow;
	Dxskinscore::TdxSkinColor* SchedulerNavigatorColor;
	System::StaticArray<Dxskinscore::TdxSkinColor*, 12> SchedulerResourceColors;
	Dxskinscore::TdxSkinElement* SchedulerTaskExpandButton;
	Dxskinscore::TdxSkinElement* SchedulerTimeGridCurrentTimeIndicator;
	System::StaticArray<Dxskinscore::TdxSkinElement*, 2> SchedulerTimeGridHeader;
	Dxskinscore::TdxSkinElement* SchedulerTimeLine;
	Dxskinscore::TdxSkinElement* SchedulerTimeRuler;
	Dxskinscore::TdxSkinElement* Bar;
	Dxskinscore::TdxSkinElement* BarCustomize;
	Dxskinscore::TdxSkinElement* BarCustomizeVertical;
	Dxskinscore::TdxSkinColor* BarDisabledTextColor;
	Dxskinscore::TdxSkinElement* BarDrag;
	Dxskinscore::TdxSkinElement* BarDragVertical;
	Dxskinscore::TdxSkinElement* BarMDIButtonClose;
	Dxskinscore::TdxSkinElement* BarMDIButtonMinimize;
	Dxskinscore::TdxSkinElement* BarMDIButtonRestore;
	Dxskinscore::TdxSkinElement* BarSeparator;
	Dxskinscore::TdxSkinElement* BarVertical;
	Dxskinscore::TdxSkinElement* BarVerticalSeparator;
	Dxskinscore::TdxSkinElement* Dock;
	Dxskinscore::TdxSkinElement* FloatingBar;
	Dxskinscore::TdxSkinElement* ItemSeparator;
	Dxskinscore::TdxSkinElement* LinkBorderPainter;
	Dxskinscore::TdxSkinElement* LinkSelected;
	Dxskinscore::TdxSkinElement* MainMenu;
	Dxskinscore::TdxSkinElement* MainMenuCustomize;
	Dxskinscore::TdxSkinElement* MainMenuDrag;
	Dxskinscore::TdxSkinElement* MainMenuLinkSelected;
	Dxskinscore::TdxSkinElement* MainMenuVertical;
	Dxskinscore::TdxSkinElement* PopupMenu;
	Dxskinscore::TdxSkinElement* PopupMenuCheck;
	Dxskinscore::TdxSkinElement* PopupMenuExpandButton;
	Dxskinscore::TdxSkinElement* PopupMenuLinkSelected;
	Dxskinscore::TdxSkinElement* PopupMenuSeparator;
	Dxskinscore::TdxSkinElement* PopupMenuSideStrip;
	Dxskinscore::TdxSkinElement* PopupMenuSideStripNonRecent;
	Dxskinscore::TdxSkinElement* PopupMenuSplitButton;
	Dxskinscore::TdxSkinElement* PopupMenuSplitButton2;
	Dxskinscore::TdxSkinColor* ScreenTipItem;
	Dxskinscore::TdxSkinElement* ScreenTipSeparator;
	Dxskinscore::TdxSkinColor* ScreenTipTitleItem;
	Dxskinscore::TdxSkinElement* ScreenTipWindow;
	Dxskinscore::TdxSkinColor* RadialMenuBackgroundColor;
	Dxskinscore::TdxSkinColor* RadialMenuBaseColor;
	Dxskinscore::TdxSkinElement* RibbonApplicationBackground;
	Dxskinscore::TdxSkinElement* RibbonApplicationButton;
	Dxskinscore::TdxSkinElement* RibbonApplicationButton2010;
	Dxskinscore::TdxSkinElement* RibbonApplicationFooterBackground;
	Dxskinscore::TdxSkinElement* RibbonApplicationHeaderBackground;
	Dxskinscore::TdxSkinElement* RibbonBackstageView;
	Dxskinscore::TdxSkinElement* RibbonBackstageViewBackButton;
	Dxskinscore::TdxSkinElement* RibbonBackstageViewImage;
	Dxskinscore::TdxSkinElement* RibbonBackstageViewMenu;
	Dxskinscore::TdxSkinElement* RibbonBackstageViewMenuButton;
	Dxskinscore::TdxSkinElement* RibbonBackstageViewMenuHeader;
	Dxskinscore::TdxSkinElement* RibbonBackstageViewMenuSeparator;
	Dxskinscore::TdxSkinElement* RibbonBackstageViewTab;
	Dxskinscore::TdxSkinElement* RibbonBackstageViewTabArrow;
	Dxskinscore::TdxSkinElement* RibbonButtonArrow;
	Dxskinscore::TdxSkinElement* RibbonButtonGroup;
	Dxskinscore::TdxSkinElement* RibbonButtonGroupButton;
	Dxskinscore::TdxSkinElement* RibbonButtonGroupSeparator;
	Dxskinscore::TdxSkinElement* RibbonButtonGroupSplitButtonLeft;
	Dxskinscore::TdxSkinElement* RibbonButtonGroupSplitButtonRight;
	System::Uitypes::TColor RibbonButtonDisabledTextColor;
	Dxskinscore::TdxSkinIntegerProperty* RibbonCaptionFontDelta;
	System::StaticArray<System::Uitypes::TColor, 2> RibbonCaptionText;
	Dxskinscore::TdxSkinElement* RibbonCollapsedToolBarBackground;
	Dxskinscore::TdxSkinElement* RibbonCollapsedToolBarGlyphBackground;
	Dxskinscore::TdxSkinElement* RibbonContextualTabHeader;
	System::StaticArray<System::Uitypes::TColor, 2> RibbonContextualTabHeaderText;
	System::Uitypes::TColor RibbonContextualTabHeaderTextHot;
	Dxskinscore::TdxSkinElement* RibbonContextualTabLabel;
	Dxskinscore::TdxSkinElement* RibbonContextualTabLabelOnGlass;
	Dxskinscore::TdxSkinColor* RibbonContextualTabLabelOnGlassShadowColor;
	Dxskinscore::TdxSkinColor* RibbonContextualTabLabelShadowColor;
	Dxskinscore::TdxSkinElement* RibbonContextualTabPanel;
	Dxskinscore::TdxSkinElement* RibbonContextualTabSeparator;
	System::StaticArray<System::Uitypes::TColor, 2> RibbonDocumentNameTextColor;
	Dxskinscore::TdxSkinColor* RibbonEditorBackground;
	Dxskinscore::TdxSkinElement* RibbonExtraPaneButton;
	Dxskinscore::TdxSkinColor* RibbonExtraPaneColor;
	Dxskinscore::TdxSkinColor* RibbonExtraPaneHeaderSeparator;
	Dxskinscore::TdxSkinElement* RibbonExtraPanePinButtonGlyph;
	System::StaticArray<Dxskinscore::TdxSkinElement*, 2> RibbonFormBottom;
	Dxskinscore::TdxSkinElement* RibbonFormButtonAutoHideModeShowUI;
	Dxskinscore::TdxSkinElement* RibbonFormButtonClose;
	Dxskinscore::TdxSkinElement* RibbonFormButtonDisplayOptions;
	Dxskinscore::TdxSkinElement* RibbonFormButtonHelp;
	Dxskinscore::TdxSkinElement* RibbonFormButtonMaximize;
	Dxskinscore::TdxSkinElement* RibbonFormButtonMinimize;
	Dxskinscore::TdxSkinElement* RibbonFormButtonRestore;
	Dxskinscore::TdxSkinElement* RibbonFormCaption;
	Dxskinscore::TdxSkinElement* RibbonFormCaptionRibbonHidden;
	Dxskinscore::TdxSkinElement* RibbonFormContent;
	System::StaticArray<Dxskinscore::TdxSkinElement*, 2> RibbonFormLeft;
	System::StaticArray<Dxskinscore::TdxSkinElement*, 2> RibbonFormRight;
	Dxskinscore::TdxSkinElement* RibbonGalleryBackground;
	Dxskinscore::TdxSkinElement* RibbonGalleryButtonDown;
	Dxskinscore::TdxSkinElement* RibbonGalleryButtonDropDown;
	Dxskinscore::TdxSkinElement* RibbonGalleryButtonUp;
	Dxskinscore::TdxSkinElement* RibbonGalleryGroupCaption;
	Dxskinscore::TdxSkinElement* RibbonGalleryPane;
	Dxskinscore::TdxSkinElement* RibbonGallerySizeGrips;
	Dxskinscore::TdxSkinElement* RibbonGallerySizingPanel;
	System::StaticArray<Dxskinscore::TdxSkinElement*, 2> RibbonGroupScroll;
	Dxskinscore::TdxSkinElement* RibbonHeaderBackground;
	Dxskinscore::TdxSkinElement* RibbonHeaderBackgroundOnGlass;
	Dxskinscore::TdxSkinElement* RibbonKeyTip;
	Dxskinscore::TdxSkinElement* RibbonLargeButton;
	Dxskinscore::TdxSkinElement* RibbonLargeSplitButtonBottom;
	Dxskinscore::TdxSkinElement* RibbonLargeSplitButtonTop;
	Dxskinscore::TdxSkinElement* RibbonMinimizeButtonGlyph;
	System::StaticArray<Dxskinscore::TdxSkinBooleanProperty*, 2> RibbonQATCustomizeButtonOutsizeQAT;
	System::StaticArray<Dxskinscore::TdxSkinIntegerProperty*, 2> RibbonQATIndentBeforeCustomizeButton;
	System::StaticArray<Dxskinscore::TdxSkinElement*, 2> RibbonQuickToolbar;
	Dxskinscore::TdxSkinElement* RibbonQuickToolbarBelow;
	Dxskinscore::TdxSkinElement* RibbonQuickToolbarButtonGlyph;
	Dxskinscore::TdxSkinElement* RibbonQuickToolbarDropDown;
	Dxskinscore::TdxSkinElement* RibbonQuickToolbarGlyph;
	Dxskinscore::TdxSkinElement* RibbonSmallButton;
	Dxskinscore::TdxSkinIntegerProperty* RibbonSpaceBetweenTabGroups;
	Dxskinscore::TdxSkinElement* RibbonSplitButtonLeft;
	Dxskinscore::TdxSkinElement* RibbonSplitButtonRight;
	Dxskinscore::TdxSkinElement* RibbonStatusBarBackground;
	Dxskinscore::TdxSkinElement* RibbonStatusBarButton;
	Dxskinscore::TdxSkinElement* RibbonStatusBarSeparator;
	System::Uitypes::TColor RibbonStatusBarTextSelected;
	Dxskinscore::TdxSkinElement* RibbonTab;
	Dxskinscore::TdxSkinBooleanProperty* RibbonTabAeroSupport;
	Dxskinscore::TdxSkinElement* RibbonTabGroup;
	Dxskinscore::TdxSkinElement* RibbonTabGroupHeader;
	Dxskinscore::TdxSkinElement* RibbonTabGroupItemsSeparator;
	Dxskinscore::TdxSkinIntegerProperty* RibbonTabHeaderDownGrowIndent;
	Dxskinscore::TdxSkinElement* RibbonTabPanel;
	Dxskinscore::TdxSkinIntegerProperty* RibbonTabPanelBottomIndent;
	Dxskinscore::TdxSkinElement* RibbonTabPanelGroupButton;
	Dxskinscore::TdxSkinElement* RibbonTabSeparatorLine;
	System::StaticArray<System::Uitypes::TColor, 2> RibbonTabText;
	System::Uitypes::TColor RibbonTabTextHot;
	Dxskinscore::TdxSkinBooleanProperty* RibbonUseRoundedWindowCorners;
	Dxskinscore::TdxSkinElement* RichEditCornerPanel;
	Dxskinscore::TdxSkinElement* RichEditRulerBackgroundHorz;
	Dxskinscore::TdxSkinElement* RichEditRulerBackgroundVert;
	Dxskinscore::TdxSkinElement* RichEditRulerColumnResizer;
	Dxskinscore::TdxSkinColor* RichEditRulerDefaultTabColor;
	Dxskinscore::TdxSkinElement* RichEditRulerIndent;
	Dxskinscore::TdxSkinElement* RichEditRulerIndentBottom;
	Dxskinscore::TdxSkinElement* RichEditRulerRightMargin;
	Dxskinscore::TdxSkinElement* RichEditRulerSection;
	Dxskinscore::TdxSkinElement* RichEditRulerTab;
	Dxskinscore::TdxSkinElement* RichEditRulerTabTypeBackground;
	Dxskinscore::TdxSkinColor* RichEditRulerTextColor;
	Dxskinscore::TdxSkinColor* CalendarDayTextColor;
	Dxskinscore::TdxSkinColor* CalendarHolidayTextColor;
	Dxskinscore::TdxSkinColor* CalendarInactiveDayTextColor;
	Dxskinscore::TdxSkinElement* CalendarNavigationButton;
	Dxskinscore::TdxSkinColor* CalendarSelectedDayColor;
	Dxskinscore::TdxSkinColor* CalendarSelectedDayTextColor;
	Dxskinscore::TdxSkinColor* CalendarSeparatorColor;
	Dxskinscore::TdxSkinColor* CalendarTodayFrameColor;
	Dxskinscore::TdxSkinColor* CalendarTodayTextColor;
	Dxskinscore::TdxSkinColor* CalendarWeekendDayTextColor;
	Dxskinscore::TdxSkinElement* PrintingPageBorder;
	Dxskinscore::TdxSkinElement* PrintingPreviewBackground;
	Dxskinscore::TdxSkinElement* GalleryBackground;
	Dxskinscore::TdxSkinElement* GalleryGroup;
	Dxskinscore::TdxSkinElement* GalleryItem;
	Dxskinscore::TdxSkinElement* GalleryItemGlyphFrame;
	Dxskinscore::TdxSkinElement* GaugeBackground;
	Dxskinscore::TdxSkinElement* ToggleSwitch;
	Dxskinscore::TdxSkinIntegerProperty* ToggleSwitchTextMargin;
	Dxskinscore::TdxSkinElement* ToggleSwitchThumb;
	Dxskinscore::TdxSkinElement* ZoomInButton;
	Dxskinscore::TdxSkinElement* ZoomOutButton;
	System::StaticArray<Dxskinscore::TdxSkinElement*, 4> SliderArrow;
	Dxskinscore::TdxSkinElement* TileControlActionBar;
	Dxskinscore::TdxSkinElement* TileControlBackground;
	Dxskinscore::TdxSkinElement* TileControlItem;
	Dxskinscore::TdxSkinElement* TileControlItemCheck;
	Dxskinscore::TdxSkinElement* TileControlGroupCaption;
	int TileControlGroupCaptionFontDelta;
	System::Uitypes::TColor TileControlSelectionFocusedColor;
	System::Uitypes::TColor TileControlSelectionHotColor;
	Dxskinscore::TdxSkinElement* TileControlTabHeader;
	int TileControlTabHeaderFontDelta;
	Dxskinscore::TdxSkinElement* TileControlTitle;
	int TileControlTitleFontDelta;
	Dxskinscore::TdxSkinElement* TileControlVirtualGroup;
	System::Uitypes::TColor MapControlBackColor;
	Dxskinscore::TdxSkinElement* MapControlCallout;
	System::Types::TPoint MapControlCalloutPointer;
	int MapControlCalloutPointerHeight;
	Dxcoregraphics::TdxAlphaColor MapControlCalloutTextGlowColor;
	Dxskinscore::TdxSkinElement* MapControlCustomElement;
	Dxcoregraphics::TdxAlphaColor MapControlCustomElementTextGlowColor;
	Dxcoregraphics::TdxAlphaColor MapControlPanelBackColor;
	Dxcoregraphics::TdxAlphaColor MapControlPanelHotTrackedTextColor;
	Dxcoregraphics::TdxAlphaColor MapControlPanelPressedTextColor;
	Dxcoregraphics::TdxAlphaColor MapControlPanelTextColor;
	Dxskinscore::TdxSkinElement* MapControlPushpin;
	System::Types::TPoint MapControlPushpinTextOrigin;
	Dxcoregraphics::TdxAlphaColor MapControlPushpinTextGlowColor;
	Dxcoregraphics::TdxAlphaColor MapControlSelectedRegionBackgroundColor;
	Dxcoregraphics::TdxAlphaColor MapControlSelectedRegionBorderColor;
	System::StaticArray<Dxcoregraphics::TdxAlphaColor, 5> MapControlShapeBorderColor;
	System::StaticArray<int, 5> MapControlShapeBorderWidth;
	System::StaticArray<Dxcoregraphics::TdxAlphaColor, 5> MapControlShapeColor;
	Dxcoregraphics::TdxAlphaColor RangeControlBackColor;
	Dxskinscore::TdxSkinElement* RangeControlBorder;
	Dxskinscore::TdxSkinColor* RangeControlDefaultElementColor;
	Dxskinscore::TdxSkinColor* RangeControlElementBaseColor;
	Dxskinscore::TdxSkinIntegerProperty* RangeControlElementFontSize;
	Dxskinscore::TdxSkinColor* RangeControlElementForeColor;
	Dxcoregraphics::TdxAlphaColor RangeControlInnerBorderColor;
	Dxskinscore::TdxSkinColor* RangeControlLabelColor;
	Dxskinscore::TdxSkinElement* RangeControlLeftThumb;
	Dxcoregraphics::TdxAlphaColor RangeControlOutOfRangeColorMask;
	Dxskinscore::TdxSkinColor* RangeControlRangePreviewColor;
	Dxskinscore::TdxSkinElement* RangeControlRightThumb;
	Dxcoregraphics::TdxAlphaColor RangeControlRuleColor;
	Dxskinscore::TdxSkinElement* RangeControlRulerHeader;
	Dxskinscore::TdxSkinColor* RangeControlScrollAreaColor;
	Dxskinscore::TdxSkinIntegerProperty* RangeControlScrollAreaHeight;
	Dxcoregraphics::TdxAlphaColor RangeControlSelectionBorderColor;
	Dxcoregraphics::TdxAlphaColor RangeControlSelectionColor;
	Dxskinscore::TdxSkinElement* RangeControlSizingGlyph;
	Dxskinscore::TdxSkinColor* RangeControlViewPortPreviewColor;
	Dxskinscore::TdxSkinElement* PDFViewerFindPanel;
	Dxskinscore::TdxSkinColor* PDFViewerSelectionColor;
	Dxskinscore::TdxSkinElement* PDFViewerNavigationPaneBackground;
	Dxskinscore::TdxSkinElement* PDFViewerNavigationPaneButton;
	Dxskinscore::TdxSkinElement* PDFViewerNavigationPaneButtonArrow;
	Dxskinscore::TdxSkinElement* PDFViewerNavigationPaneButtonMinimized;
	Dxskinscore::TdxSkinElement* PDFViewerNavigationPanePageBackground;
	Dxskinscore::TdxSkinElement* PDFViewerNavigationPanePageButton;
	Dxskinscore::TdxSkinElement* PDFViewerNavigationPanePageCaption;
	Dxskinscore::TdxSkinIntegerProperty* PDFViewerNavigationPaneSelectedPageExpandValue;
	Dxskinscore::TdxSkinIntegerProperty* PDFViewerNavigationPaneSelectedPageOverlapValue;
	Dxskinscore::TdxSkinElement* LoadingBig;
	Dxskinscore::TdxSkinElement* GanttDependencyEditPointLeft;
	Dxskinscore::TdxSkinElement* GanttDependencyEditPointRight;
	Dxskinscore::TdxSkinElement* GanttFocusedRow;
	Dxskinscore::TdxSkinElement* GanttMilestone;
	Dxskinscore::TdxSkinElement* GanttMilestoneBaseline;
	Dxskinscore::TdxSkinElement* GanttSummaryTask;
	Dxskinscore::TdxSkinElement* GanttSummaryTaskBaseline;
	Dxskinscore::TdxSkinElement* GanttSummaryTaskProgress;
	Dxskinscore::TdxSkinElement* GanttTask;
	Dxskinscore::TdxSkinElement* GanttTaskProgress;
	Dxskinscore::TdxSkinElement* GanttTaskBaseline;
	Dxskinscore::TdxSkinElement* GanttTaskTextLabel;
	Dxskinscore::TdxSkinIntegerProperty* GanttTaskTextLabelHorizontalIndent;
	Dxskinscore::TdxSkinElement* FilterAddButton;
	Dxskinscore::TdxSkinElement* FilterBoolOperatorBackground;
	Dxskinscore::TdxSkinColor* FilterControlBackColor;
	Dxskinscore::TdxSkinElement* FilterItemCaptionBackground;
	Dxskinscore::TdxSkinElement* FilterOperatorBackground;
	Dxskinscore::TdxSkinElement* FilterPanelBrackets;
	Dxskinscore::TdxSkinElement* FilterRemoveButton;
	Dxskinscore::TdxSkinElement* FilterValueBackground;
	Dxskinscore::TdxSkinElement* DataRowLayoutElement;
	Dxskinscore::TdxSkinElement* DataRowLayoutItem;
	Dxskinscore::TdxSkinElement* ListViewItem;
	Dxskinscore::TdxSkinElement* ListViewIcon;
	Dxskinscore::TdxSkinElement* ListViewGroup;
	Dxskinscore::TdxSkinElement* ListViewGroupLine;
	Dxskinscore::TdxSkinElement* ListViewGroupExpandButton;
	__fastcall virtual TdxSkinInfo(Dxskinscore::TdxSkin* ASkin)/* overload */;
	__fastcall virtual ~TdxSkinInfo();
	int __fastcall GetIntegerPropertyValue(Dxskinscore::TdxSkinPersistent* AObject, const System::UnicodeString APropertyName, int ADefaultValue = 0x0);
	__property Dxskinscore::TdxSkin* Skin = {read=FSkin, write=SetSkin};
private:
	void *__IdxSkinInfo;	// Dxskinscore::IdxSkinInfo 
	void *__IdxSkinChangeListener;	// Dxskinscore::IdxSkinChangeListener 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {97D85495-E631-413C-8DBC-BE7B784A9EA0}
	operator Dxskinscore::_di_IdxSkinInfo()
	{
		Dxskinscore::_di_IdxSkinInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxskinscore::IdxSkinInfo*(void) { return (Dxskinscore::IdxSkinInfo*)&__IdxSkinInfo; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {28681774-0475-43AE-8704-1C904D294742}
	operator Dxskinscore::_di_IdxSkinChangeListener()
	{
		Dxskinscore::_di_IdxSkinChangeListener intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxskinscore::IdxSkinChangeListener*(void) { return (Dxskinscore::IdxSkinChangeListener*)&__IdxSkinChangeListener; }
	#endif
	
};

#pragma pack(pop)

typedef System::TMetaClass* TdxSkinInfoClass;

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 dxSkinsSchedulerResourceColorsCount = System::Int8(0xc);
}	/* namespace Dxskininfo */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXSKININFO)
using namespace Dxskininfo;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxskininfoHPP
