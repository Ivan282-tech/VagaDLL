// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxSkinsLookAndFeelPainter.pas' rev: 35.00 (Windows)

#ifndef DxskinslookandfeelpainterHPP
#define DxskinslookandfeelpainterHPP

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
#include <Vcl.ImgList.hpp>
#include <cxLookAndFeels.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <dxCore.hpp>
#include <dxCoreGraphics.hpp>
#include <cxGraphics.hpp>
#include <cxGeometry.hpp>
#include <cxClasses.hpp>
#include <dxGDIPlusAPI.hpp>
#include <dxSkinsCore.hpp>
#include <dxSkinInfo.hpp>
#include <dxSkinsStrs.hpp>
#include <cxCustomCanvas.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxskinslookandfeelpainter
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TdxSkinLookAndFeelPainterInfo;
class DELPHICLASS TdxSkinLookAndFeelPainter;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSkinLookAndFeelPainterInfo : public Dxskininfo::TdxSkinInfo
{
	typedef Dxskininfo::TdxSkinInfo inherited;
	
public:
	/* TdxSkinInfo.Create */ inline __fastcall virtual TdxSkinLookAndFeelPainterInfo(Dxskinscore::TdxSkin* ASkin)/* overload */ : Dxskininfo::TdxSkinInfo(ASkin) { }
	/* TdxSkinInfo.Destroy */ inline __fastcall virtual ~TdxSkinLookAndFeelPainterInfo() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TdxSkinLookAndFeelPainterInfoClass;

typedef System::TMetaClass* TdxSkinLookAndFeelPainterClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxSkinLookAndFeelPainter : public Cxlookandfeelpainters::TcxOffice11LookAndFeelPainter
{
	typedef Cxlookandfeelpainters::TcxOffice11LookAndFeelPainter inherited;
	
private:
	static System::StaticArray<Cxlookandfeelpainters::TcxButtonState, 8> CalendarElementStateToButtonState;
	static System::StaticArray<Dxskinscore::TdxSkinElementState, 8> CalendarElementStateToSkinElementState;
	static System::StaticArray<Dxskinscore::TdxSkinElementState, 5> LayoutViewRecordState;
	static System::StaticArray<Dxskinscore::TdxSkinElementState, 5> FilterElementStatesMap;
	static System::StaticArray<Dxskinscore::TdxSkinElementState, 5> BreadcrumbButtonStateToElementState;
	static System::StaticArray<Dxskinscore::TdxSkinElementState, 5> ButtonStateToSkinState;
	static System::StaticArray<Dxskinscore::TdxSkinElementState, 5> CheckStateToSkinState;
	static System::StaticArray<Dxskinscore::TdxSkinElementState, 3> RatingControlIndicatorStateToSkinState;
	Dxcore::TdxDefaultBoolean FHeaderHotTrack;
	TdxSkinLookAndFeelPainterInfo* FSkinInfo;
	NativeUInt FSkinResInstance;
	System::UnicodeString FSkinResName;
	System::Types::TRect __fastcall AdjustHeaderBounds(const System::Types::TRect &ABounds, Cxgeometry::TcxBorders ABorders);
	void __fastcall DrawSkinElementRotated(Cxgraphics::TcxCanvas* ACanvas, Dxskinscore::TdxSkinElement* ASkinElement, const System::Types::TRect &ARect, Dxskinscore::TdxSkinElementState AState, Cxcustomcanvas::TcxRotationAngle AAngle, bool AFlipVertically = false, Cxgeometry::TdxScaleFactor* AScaleFactor = (Cxgeometry::TdxScaleFactor*)(0x0));
	int __fastcall GetDateCellSelectionImageIndex(Cxlookandfeelpainters::TcxCalendarElementStates AStates);
	Dxskinscore::TdxSkinElement* __fastcall GetSchedulerTaskExpandButton();
	System::Types::TRect __fastcall GetSkinElementBordersWidth(Dxskinscore::TdxSkinElement* AElement);
	Dxcoregraphics::_di_IdxColorPalette __fastcall GetSkinElementColorPalette(Dxskinscore::TdxSkinElement* AElement, Dxskinscore::TdxSkinElementState AState);
	System::Types::TSize __fastcall GetSkinElementMinSize(Dxskinscore::TdxSkinElement* AElement);
	Dxskinscore::TdxSkinDetails* __fastcall GetSkinDetails();
	TdxSkinLookAndFeelPainterInfo* __fastcall GetSkinInfo();
	bool __fastcall IsAlphaUsed(Dxskinscore::TdxSkinElement* AElement);
	bool __fastcall IsFontBold(Dxskinscore::TdxSkinElement* AElement);
	bool __fastcall IsHotTrackUsed(Dxskinscore::TdxSkinElement* AElement);
	bool __fastcall TryGetSkinColorPalette(Dxskinscore::TdxSkinElementState AState, /* out */ Dxcoregraphics::_di_IdxColorPalette &APalette);
	
protected:
	virtual System::TObject* __fastcall CreateLookAndFeelPainterDetails();
	System::Uitypes::TColor __fastcall GetHighlightedItemTextColor(int AStateIndex);
	virtual System::TObject* __fastcall GetLookAndFeelPainterDetails();
	virtual void __fastcall DoDrawScaledButtonCaption(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, const System::UnicodeString ACaption, Cxlookandfeelpainters::TcxButtonState AState, System::Uitypes::TColor ATextColor, bool ADrawBorder, bool AIsToolButton, bool AWordWrap, Cxgeometry::TdxScaleFactor* AScaleFactor, Cxlookandfeelpainters::TcxButtonPart APart);
	virtual void __fastcall DrawContent(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TRect &ATextAreaBounds, Cxlookandfeelpainters::TcxButtonState AState, System::Classes::TAlignment AAlignmentHorz, Cxclasses::TcxAlignmentVert AAlignmentVert, bool AMultiLine, bool AShowEndEllipsis, const System::UnicodeString AText, Vcl::Graphics::TFont* AFont, System::Uitypes::TColor ATextColor, System::Uitypes::TColor ABkColor, Cxlookandfeelpainters::TcxDrawBackgroundEvent AOnDrawBackground, bool AIsFooter);
	virtual void __fastcall DrawContentBackground(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState, System::Uitypes::TColor ABackgroundColor, bool AIsFooter);
	virtual void __fastcall DrawGroupCaption(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ACaptionRect, const System::Types::TRect &ATextRect, Dxskinscore::TdxSkinElement* AElement, Dxskinscore::TdxSkinIntegerProperty* ATextPadding, Dxskinscore::TdxSkinElementState AState);
	virtual void __fastcall DrawSchedulerNavigationButtonContent(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, const System::Types::TRect &AArrowRect, bool AIsNextButton, Cxlookandfeelpainters::TcxButtonState AState, const bool AIsVertical = true);
	bool __fastcall DrawRightToLeftDependentSkinElement(Dxskinscore::TdxSkinElement* AElement, Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R, Cxgeometry::TdxScaleFactor* AScaleFactor, Dxskinscore::TdxSkinElementState AState = (Dxskinscore::TdxSkinElementState)(0x0), int AImageIndex = 0x0)/* overload */;
	bool __fastcall DrawSkinElement(Dxskinscore::TdxSkinElement* AElement, Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R, Dxskinscore::TdxSkinElementState AState = (Dxskinscore::TdxSkinElementState)(0x0), int AImageIndex = 0x0)/* overload */;
	bool __fastcall DrawSkinElement(Dxskinscore::TdxSkinElement* AElement, Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R, Cxgeometry::TdxScaleFactor* AScaleFactor, Dxskinscore::TdxSkinElementState AState = (Dxskinscore::TdxSkinElementState)(0x0), int AImageIndex = 0x0)/* overload */;
	virtual Dxcoregraphics::TdxAlphaColor __fastcall GetFilterAddButtonColor(Cxlookandfeelpainters::TcxButtonState AState);
	virtual Dxcoregraphics::TdxAlphaColor __fastcall GetFilterRemoveButtonColor(Cxlookandfeelpainters::TcxButtonState AState);
	virtual void __fastcall DoDrawDataRowLayoutContent(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds);
	virtual System::Uitypes::TColor __fastcall GetDataRowLayoutContentColor();
	virtual System::Types::TRect __fastcall GetDataRowLayoutContentMargins();
	virtual System::Types::TRect __fastcall GetDataRowLayoutItemMargins(Cxlookandfeelpainters::TcxButtonState AState);
	Cxlookandfeelpainters::TcxButtonState __fastcall GalleryStateToButtonState(const Cxlookandfeelpainters::TdxGalleryItemViewState &AState);
	virtual TdxSkinLookAndFeelPainterInfoClass __fastcall GetSkinInfoClass();
	bool __fastcall IsSkinElementColorAssigned(Dxskinscore::TdxSkinElement* AElement);
	bool __fastcall IsSkinElementTextColorAssigned(Dxskinscore::TdxSkinElement* AElement);
	
public:
	__fastcall virtual TdxSkinLookAndFeelPainter(const System::UnicodeString ASkinResName, NativeUInt ASkinResInstance);
	__fastcall virtual ~TdxSkinLookAndFeelPainter();
	virtual bool __fastcall GetPainterData(void *AData);
	virtual bool __fastcall GetPainterDetails(void *ADetails);
	virtual System::UnicodeString __fastcall LookAndFeelName();
	virtual Cxlookandfeelpainters::TcxLookAndFeelStyle __fastcall LookAndFeelStyle();
	virtual void __fastcall ResetLookAndFeelSettings();
	virtual System::Uitypes::TColor __fastcall DefaultChartDiagramValueCaptionTextColor();
	virtual System::Uitypes::TColor __fastcall DefaultChartHistogramAxisColor();
	virtual System::Uitypes::TColor __fastcall DefaultChartHistogramGridLineColor();
	virtual System::Uitypes::TColor __fastcall DefaultChartHistogramPlotColor();
	virtual System::Uitypes::TColor __fastcall DefaultChartToolBoxDataLevelInfoBorderColor();
	virtual System::Uitypes::TColor __fastcall DefaultChartToolBoxItemSeparatorColor();
	virtual System::Uitypes::TColor __fastcall DefaultContentColor();
	virtual System::Uitypes::TColor __fastcall DefaultContentEvenColor();
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall DefaultContentGlyphColorPalette(Cxlookandfeelpainters::TcxButtonState AState);
	virtual System::Uitypes::TColor __fastcall DefaultContentOddColor();
	virtual System::Uitypes::TColor __fastcall DefaultContentTextColor();
	virtual System::Uitypes::TColor __fastcall DefaultControlColor();
	virtual System::Uitypes::TColor __fastcall DefaultControlTextColor();
	virtual System::Uitypes::TColor __fastcall DefaultEditorBackgroundColorEx(Cxlookandfeelpainters::TcxEditStateColorKind AKind);
	virtual System::Uitypes::TColor __fastcall DefaultEditorTextColorEx(Cxlookandfeelpainters::TcxEditStateColorKind AKind);
	virtual Dxcoregraphics::TdxAlphaColor __fastcall DefaultErrorScrollbarAnnotationColor();
	virtual System::Uitypes::TColor __fastcall DefaultFilterBoxTextColor();
	virtual Dxcoregraphics::TdxAlphaColor __fastcall DefaultFixedColumnHighlightColor();
	virtual System::Uitypes::TColor __fastcall DefaultFixedSeparatorColor();
	virtual Dxcoregraphics::TdxAlphaColor __fastcall DefaultFocusedScrollbarAnnotationColor();
	virtual System::Uitypes::TColor __fastcall DefaultFooterColor();
	virtual System::Uitypes::TColor __fastcall DefaultFooterTextColor();
	virtual System::Uitypes::TColor __fastcall DefaultGridDetailsSiteColor();
	virtual System::Uitypes::TColor __fastcall DefaultGridLineColor();
	virtual System::Uitypes::TColor __fastcall DefaultGroupByBoxLineColor();
	virtual System::Uitypes::TColor __fastcall DefaultGroupByBoxTextColor();
	virtual System::Uitypes::TColor __fastcall DefaultGroupColor();
	virtual System::Types::TRect __fastcall DefaultGroupContentOffsets(Cxgeometry::TdxScaleFactor* AScaleFactor = (Cxgeometry::TdxScaleFactor*)(0x0));
	virtual System::Uitypes::TColor __fastcall DefaultGroupTextColor();
	virtual System::Uitypes::TColor __fastcall DefaultHeaderBackgroundColor();
	virtual System::Uitypes::TColor __fastcall DefaultHeaderBackgroundTextColor();
	virtual System::Uitypes::TColor __fastcall DefaultHeaderColor();
	virtual System::Uitypes::TColor __fastcall DefaultHeaderTextColor();
	virtual System::Uitypes::TColor __fastcall DefaultHotTrackColor();
	virtual System::Uitypes::TColor __fastcall DefaultHotTrackTextColor();
	virtual System::Uitypes::TColor __fastcall DefaultHyperlinkTextColor();
	virtual System::Uitypes::TColor __fastcall DefaultInactiveColor();
	virtual System::Uitypes::TColor __fastcall DefaultInactiveTextColor();
	virtual System::Uitypes::TColor __fastcall DefaultLabelTextColorEx(Cxlookandfeelpainters::TcxEditStateColorKind AKind);
	virtual System::Uitypes::TColor __fastcall DefaultPreviewTextColor();
	virtual System::Uitypes::TColor __fastcall DefaultRecordSeparatorColor();
	virtual System::Uitypes::TColor __fastcall DefaultSearchResultHighlightColor();
	virtual System::Uitypes::TColor __fastcall DefaultSearchResultHighlightTextColor();
	virtual System::Uitypes::TColor __fastcall DefaultSelectionColor();
	virtual System::Uitypes::TColor __fastcall DefaultSelectionTextColor();
	virtual System::Uitypes::TColor __fastcall DefaultSeparatorColor();
	virtual System::Uitypes::TColor __fastcall DefaultSizeGripAreaColor();
	virtual System::Uitypes::TColor __fastcall DefaultTabTextColor();
	virtual System::Uitypes::TColor __fastcall DefaultTimeGridMajorScaleTextColor();
	virtual System::Uitypes::TColor __fastcall DefaultTimeGridMinorScaleTextColor();
	virtual System::Uitypes::TColor __fastcall DefaultGridOptionsTreeViewCategoryColor(bool ASelected);
	virtual System::Uitypes::TColor __fastcall DefaultGridOptionsTreeViewCategoryTextColor(bool ASelected);
	virtual System::Uitypes::TColor __fastcall DefaultSchedulerBackgroundColor();
	virtual System::Uitypes::TColor __fastcall DefaultSchedulerBorderColor();
	virtual System::Uitypes::TColor __fastcall DefaultSchedulerContentColor(int AResourceIndex);
	virtual System::Uitypes::TColor __fastcall DefaultSchedulerControlColor();
	virtual System::Uitypes::TColor __fastcall DefaultSchedulerDateNavigatorArrowColor(bool AIsHighlight);
	virtual System::Uitypes::TColor __fastcall DefaultSchedulerDayHeaderColor();
	virtual System::Uitypes::TColor __fastcall DefaultSchedulerDayHeaderTextColor();
	virtual System::Uitypes::TColor __fastcall DefaultSchedulerEventColor(bool AIsAllDayEvent);
	virtual System::Uitypes::TColor __fastcall DefaultSchedulerEventColorClassic(bool AIsAllDayEvent);
	virtual System::Uitypes::TColor __fastcall DefaultSchedulerHeaderContainerTextColor(bool ASelected);
	virtual System::Uitypes::TColor __fastcall DefaultSchedulerNavigatorColor();
	virtual System::Uitypes::TColor __fastcall DefaultSchedulerTimeRulerColor();
	virtual System::Uitypes::TColor __fastcall DefaultSchedulerTimeRulerTextColorClassic();
	virtual System::Uitypes::TColor __fastcall DefaultSchedulerViewContentColor();
	virtual System::Uitypes::TColor __fastcall DefaultSchedulerViewContentColorClassic();
	virtual System::Uitypes::TColor __fastcall DefaultSchedulerViewSelectedTextColor();
	virtual System::Uitypes::TColor __fastcall DefaultSchedulerViewTextColor();
	virtual System::Uitypes::TColor __fastcall DefaultSchedulerYearViewUnusedContentColor(bool AIsWorkTime);
	virtual System::Uitypes::TColor __fastcall DefaultTreeListGridLineColor();
	virtual System::Uitypes::TColor __fastcall DefaultTreeListTreeLineColor();
	virtual System::Uitypes::TColor __fastcall DefaultLayoutViewCaptionTextColor(Cxlookandfeelpainters::TcxGroupBoxCaptionPosition ACaptionPosition, Cxlookandfeelpainters::TcxButtonState AState);
	virtual System::Uitypes::TColor __fastcall DefaultLayoutViewContentTextColor(Cxlookandfeelpainters::TcxButtonState AState);
	virtual System::Uitypes::TColor __fastcall DefaultDateNavigatorHeaderColor();
	virtual System::Uitypes::TColor __fastcall DefaultDateNavigatorHeaderTextColor(bool AIsHighlight);
	virtual System::Uitypes::TColor __fastcall DefaultDateNavigatorHolydayTextColor();
	virtual System::Uitypes::TColor __fastcall DefaultDateNavigatorInactiveTextColor();
	virtual System::Uitypes::TColor __fastcall DefaultDateNavigatorSelectionColor();
	virtual System::Uitypes::TColor __fastcall DefaultDateNavigatorSelectionTextColor();
	virtual System::Uitypes::TColor __fastcall DefaultDateNavigatorSeparator1Color();
	virtual System::Uitypes::TColor __fastcall DefaultDateNavigatorSeparator2Color();
	virtual System::Uitypes::TColor __fastcall DefaultDateNavigatorTextColor();
	virtual System::Uitypes::TColor __fastcall DefaultDateNavigatorTodayFrameColor();
	virtual System::Uitypes::TColor __fastcall DefaultDateNavigatorTodayTextColor(bool ASelected);
	virtual System::Uitypes::TColor __fastcall DefaultDateNavigatorWeekendTextColor();
	virtual System::Uitypes::TColor __fastcall DefaultVGridBandLineColor();
	virtual System::Uitypes::TColor __fastcall DefaultVGridCategoryColor();
	virtual System::Uitypes::TColor __fastcall DefaultVGridCategoryTextColor();
	virtual System::Uitypes::TColor __fastcall DefaultVGridContentColor();
	virtual System::Uitypes::TColor __fastcall DefaultVGridContentEvenColor();
	virtual System::Uitypes::TColor __fastcall DefaultVGridContentOddColor();
	virtual System::Uitypes::TColor __fastcall DefaultVGridHeaderColor();
	virtual System::Uitypes::TColor __fastcall DefaultVGridHeaderTextColor();
	virtual System::Uitypes::TColor __fastcall DefaultVGridLineColor();
	virtual int __fastcall SeparatorSize();
	virtual void __fastcall DrawBorder(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R);
	virtual void __fastcall DrawContainerBorder(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxContainerBorderStyle AStyle, int AWidth, System::Uitypes::TColor AColor, Cxgeometry::TcxBorders ABorders);
	virtual void __fastcall DoDrawSeparator(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R, bool AIsVertical);
	virtual int __fastcall ButtonBorderSize(Cxlookandfeelpainters::TcxButtonState AState = (Cxlookandfeelpainters::TcxButtonState)(0x1));
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall ButtonColorPalette(Cxlookandfeelpainters::TcxButtonState AState, Cxlookandfeelpainters::TcxButtonPart APart = (Cxlookandfeelpainters::TcxButtonPart)(0x0));
	virtual System::Uitypes::TColor __fastcall ButtonDescriptionTextColor(Cxlookandfeelpainters::TcxButtonState AState, System::Uitypes::TColor ADefaultColor = (System::Uitypes::TColor)(0x20000000), Cxlookandfeelpainters::TcxButtonPart APart = (Cxlookandfeelpainters::TcxButtonPart)(0x0));
	virtual System::Uitypes::TColor __fastcall ButtonSymbolColor(Cxlookandfeelpainters::TcxButtonState AState, System::Uitypes::TColor ADefaultColor = (System::Uitypes::TColor)(0x20000000), Cxlookandfeelpainters::TcxButtonPart APart = (Cxlookandfeelpainters::TcxButtonPart)(0x0));
	virtual void __fastcall DrawScaledButton(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor, bool ADrawBorder = true, bool AIsToolButton = false, Cxlookandfeelpainters::TcxButtonPart APart = (Cxlookandfeelpainters::TcxButtonPart)(0x0), System::Uitypes::TColor AColor = (System::Uitypes::TColor)(0x20000000))/* overload */;
	virtual void __fastcall DrawScaledClearButtonGlyph(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawScaledDropDownButtonArrow(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor, System::Uitypes::TColor AColor = (System::Uitypes::TColor)(0x20000000));
	virtual void __fastcall DrawScaledSearchEditButtonGlyph(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	System::Uitypes::TColor __fastcall GetButtonTextColor(Cxlookandfeelpainters::TcxButtonState AState, Cxlookandfeelpainters::TcxButtonPart APart, const System::UnicodeString ASuffix = System::UnicodeString());
	virtual System::Types::TSize __fastcall GetScaledClearButtonGlyphSize(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual int __fastcall GetScaledDropDownButtonRightPartSize(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawScaledExpandButton(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R, bool AExpanded, Cxgeometry::TdxScaleFactor* AScaleFactor, System::Uitypes::TColor AColor = (System::Uitypes::TColor)(0x20000000), Cxlookandfeelpainters::TcxExpandButtonState AState = (Cxlookandfeelpainters::TcxExpandButtonState)(0x0))/* overload */;
	virtual void __fastcall DrawScaledExpandButtonEx(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState, bool AExpanded, Cxgeometry::TdxScaleFactor* AScaleFactor, Cxcustomcanvas::TcxRotationAngle ARotationAngle = (Cxcustomcanvas::TcxRotationAngle)(0x0))/* overload */;
	virtual void __fastcall DrawScaledSmallExpandButton(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, bool AExpanded, System::Uitypes::TColor ABorderColor, Cxgeometry::TdxScaleFactor* AScaleFactor, System::Uitypes::TColor AColor = (System::Uitypes::TColor)(0x20000000));
	virtual int __fastcall ScaledExpandButtonSize(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual int __fastcall ScaledScrollBarMinimalThumbSize(bool AVertical, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawScaledScrollBarBackground(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R, bool AHorizontal, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawScaledScrollBarPart(Cxcustomcanvas::TcxCustomCanvas* ACanvas, bool AHorizontal, const System::Types::TRect &R, Cxlookandfeelpainters::TcxScrollBarPart APart, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawScaledScrollBarSplitter(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawLabelLine(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, System::Uitypes::TColor AOuterColor, System::Uitypes::TColor AInnerColor, bool AIsVertical);
	virtual int __fastcall LabelLineHeight();
	virtual System::Types::TSize __fastcall ScaledSizeGripSize(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DoDrawSizeGrip(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, Cxgeometry::TdxScaleFactor* AScaleFactor)/* overload */;
	virtual System::Types::TSize __fastcall ScaledSliderButtonSize(Cxgraphics::TcxArrowDirection ADirection, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawScaledSliderButton(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &ARect, Cxgraphics::TcxArrowDirection ADirection, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Types::TSize __fastcall DoGetSmallCloseButtonSize();
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall GetSmallButtonColorPalette(Cxlookandfeelpainters::TcxButtonState AState);
	virtual void __fastcall DrawScaledSmallButton(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawScaledSmallCloseButton(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawScaledRadioButton(Cxgraphics::TcxCanvas* ACanvas, int X, int Y, Cxlookandfeelpainters::TcxButtonState AButtonState, bool AChecked, bool AFocused, System::Uitypes::TColor ABrushColor, Cxgeometry::TdxScaleFactor* AScaleFactor, bool AIsDesigning = false)/* overload */;
	virtual System::Types::TSize __fastcall ScaledRadioButtonSize(Cxgeometry::TdxScaleFactor* AScaleFactor)/* overload */;
	virtual System::Types::TSize __fastcall ScaledCheckButtonSize(Cxgeometry::TdxScaleFactor* AScaleFactor)/* overload */;
	virtual void __fastcall DrawScaledCheckButton(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState, Cxlookandfeelpainters::TcxCheckBoxState ACheckState, Cxgeometry::TdxScaleFactor* AScaleFactor, bool ADrawBackground)/* overload */;
	virtual void __fastcall DrawScaledToggleSwitchState(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, Cxlookandfeelpainters::TcxButtonState AState, bool AChecked, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawScaledToggleSwitchThumb(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall GetToggleSwitchColorPalette();
	virtual int __fastcall GetToggleSwitchThumbPercentsWidth();
	virtual System::Uitypes::TColor __fastcall GetToggleSwitchTextColor();
	virtual void __fastcall DrawScaledEditorButton(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, Cxlookandfeelpainters::TcxEditBtnKind AButtonKind, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor, Cxlookandfeelpainters::TcxEditBtnPosition APosition = (Cxlookandfeelpainters::TcxEditBtnPosition)(0x1));
	virtual void __fastcall DrawScaledEditorButtonGlyph(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, Cxlookandfeelpainters::TcxEditBtnKind AButtonKind, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor, Cxlookandfeelpainters::TcxEditBtnPosition APosition = (Cxlookandfeelpainters::TcxEditBtnPosition)(0x1));
	virtual void __fastcall EditButtonAdjustRect(System::Types::TRect &R, Cxlookandfeelpainters::TcxEditBtnPosition APosition = (Cxlookandfeelpainters::TcxEditBtnPosition)(0x1));
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall EditButtonColorPalette(Cxlookandfeelpainters::TcxButtonState AState);
	virtual System::Types::TSize __fastcall EditButtonSize();
	virtual System::Uitypes::TColor __fastcall EditButtonTextColor(Cxlookandfeelpainters::TcxButtonState AState);
	virtual int __fastcall EditButtonTextOffset();
	virtual System::Uitypes::TColor __fastcall GetContainerBorderColor(bool AIsHighlightBorder);
	virtual int __fastcall GetContainerBorderWidth(Cxlookandfeelpainters::TcxContainerBorderStyle ABorderStyle);
	virtual System::Types::TSize __fastcall ScaledClockSize(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawScaledClock(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, System::TDateTime ADateTime, System::Uitypes::TColor ABackgroundColor, Cxgeometry::TdxScaleFactor* AScaleFactor)/* overload */;
	virtual void __fastcall DrawScaledZoomInButton(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawScaledZoomOutButton(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Types::TSize __fastcall GetScaledZoomInButtonSize(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Types::TSize __fastcall GetScaledZoomOutButtonSize(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawNavigatorBorder(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R, bool ASelected);
	virtual void __fastcall DrawNavigatorInfoPanel(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, const Cxgraphics::TcxViewParams &AViewParams);
	virtual void __fastcall DrawNavigatorScaledButton(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState, System::Uitypes::TColor ABackgroundColor, Cxgeometry::TdxScaleFactor* AScaleFactor)/* overload */;
	virtual void __fastcall DrawNavigatorScaledButtonGlyph(Cxgraphics::TcxCanvas* ACanvas, Vcl::Imglist::TCustomImageList* AImageList, System::Uitypes::TImageIndex AImageIndex, const System::Types::TRect &AGlyphRect, bool AEnabled, bool AUserGlyphs, Cxgeometry::TdxScaleFactor* AScaleFactor)/* overload */;
	virtual bool __fastcall NavigatorBorderOverlap();
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall NavigatorButtonColorPalette(bool AEnabled);
	virtual System::Types::TPoint __fastcall NavigatorButtonPressedGlyphOffset();
	virtual System::Uitypes::TColor __fastcall NavigatorButtonTextColor(Cxlookandfeelpainters::TcxButtonState AState);
	virtual System::Types::TRect __fastcall NavigatorScaledButtonGlyphPadding(Cxgeometry::TdxScaleFactor* AScaleFactor)/* overload */;
	virtual System::Types::TSize __fastcall NavigatorScaledButtonGlyphSize(Cxgeometry::TdxScaleFactor* AScaleFactor)/* overload */;
	virtual System::Types::TRect __fastcall NavigatorInfoPanelContentOffsets(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Uitypes::TColor __fastcall NavigatorInfoPanelTextColor();
	virtual void __fastcall DrawProgressBarPart(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TRect &ABarBounds, bool AVertical, Cxgeometry::TdxScaleFactor* AScaleFactor, Cxlookandfeelpainters::TcxProgressBarPart APart);
	virtual System::Types::TRect __fastcall ProgressBarBorderSize(bool AVertical);
	virtual System::Uitypes::TColor __fastcall ProgressBarTextColor(Cxlookandfeelpainters::TcxProgressBarPart APart = (Cxlookandfeelpainters::TcxProgressBarPart)(0x0));
	virtual void __fastcall DrawGroupBoxBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TRect &ARect);
	virtual void __fastcall DrawGroupBoxCaption(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ACaptionRect, const System::Types::TRect &ATextRect, Cxlookandfeelpainters::TcxGroupBoxCaptionPosition ACaptionPosition);
	virtual void __fastcall DrawGroupBoxContent(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABorderRect, Cxlookandfeelpainters::TcxGroupBoxCaptionPosition ACaptionPosition, Cxgeometry::TcxBorders ABorders = (Cxgeometry::TcxBorders() << Cxgeometry::TcxBorder::bLeft << Cxgeometry::TcxBorder::bTop << Cxgeometry::TcxBorder::bRight << Cxgeometry::TcxBorder::bBottom ));
	virtual void __fastcall DrawGroupBoxScaledExpandButton(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState, bool AExpanded, Cxgeometry::TdxScaleFactor* AScaleFactor, Cxcustomcanvas::TcxRotationAngle ARotationAngle = (Cxcustomcanvas::TcxRotationAngle)(0x0))/* overload */;
	virtual void __fastcall DrawGroupBoxScaledButton(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor)/* overload */;
	virtual void __fastcall DrawGroupBoxScaledExpandGlyph(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState, bool AExpanded, Cxgeometry::TdxScaleFactor* AScaleFactor)/* overload */;
	virtual System::Types::TRect __fastcall GroupBoxBorderSize(bool ACaption, Cxlookandfeelpainters::TcxGroupBoxCaptionPosition ACaptionPosition);
	virtual void __fastcall DrawGroupBoxFrame(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, bool AEnabled, Cxlookandfeelpainters::TcxGroupBoxCaptionPosition ACaptionPosition, Cxgeometry::TcxBorders ABorders = (Cxgeometry::TcxBorders() << Cxgeometry::TcxBorder::bLeft << Cxgeometry::TcxBorder::bTop << Cxgeometry::TcxBorder::bRight << Cxgeometry::TcxBorder::bBottom ));
	virtual void __fastcall GroupBoxAdjustCaptionFont(Vcl::Graphics::TFont* ACaptionFont, Cxlookandfeelpainters::TcxGroupBoxCaptionPosition ACaptionPosition);
	virtual int __fastcall GroupBoxCaptionTailSize(Cxlookandfeelpainters::TcxGroupBoxCaptionPosition ACaptionPosition);
	virtual System::Uitypes::TColor __fastcall GroupBoxTextColor(bool AEnabled, Cxlookandfeelpainters::TcxGroupBoxCaptionPosition ACaptionPosition);
	virtual bool __fastcall IsGroupBoxCaptionTextDrawnOverBorder(Cxlookandfeelpainters::TcxGroupBoxCaptionPosition ACaptionPosition);
	virtual bool __fastcall IsGroupBoxTransparent(Cxlookandfeelpainters::TcxGroupBoxCaptionPosition ACaptionPosition);
	virtual void __fastcall DrawHeaderBorder(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxNeighbors ANeighbors, Cxgeometry::TcxBorders ABorders);
	virtual void __fastcall DrawScaledHeader(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &ABounds, Cxlookandfeelpainters::TcxButtonState AState, Cxlookandfeelpainters::TcxNeighbors ANeighbors, Cxgeometry::TcxBorders ABorders, Cxgeometry::TdxScaleFactor* AScaleFactor, bool AIsLast = false, bool AIsGroup = false)/* overload */;
	virtual void __fastcall DrawScaledHeader(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TRect &ATextAreaBounds, Cxlookandfeelpainters::TcxNeighbors ANeighbors, Cxgeometry::TcxBorders ABorders, Cxlookandfeelpainters::TcxButtonState AState, System::Classes::TAlignment AAlignmentHorz, Cxclasses::TcxAlignmentVert AAlignmentVert, bool AMultiLine, bool AShowEndEllipsis, const System::UnicodeString AText, Vcl::Graphics::TFont* AFont, System::Uitypes::TColor ATextColor, System::Uitypes::TColor ABkColor, Cxgeometry::TdxScaleFactor* AScaleFactor, Cxlookandfeelpainters::TcxDrawBackgroundEvent AOnDrawBackground = 0x0, bool AIsLast = false, bool AIsGroup = false)/* overload */;
	virtual void __fastcall DrawScaledHeaderEx(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TRect &ATextAreaBounds, Cxlookandfeelpainters::TcxNeighbors ANeighbors, Cxgeometry::TcxBorders ABorders, Cxlookandfeelpainters::TcxButtonState AState, System::Classes::TAlignment AAlignmentHorz, Cxclasses::TcxAlignmentVert AAlignmentVert, bool AMultiLine, bool AShowEndEllipsis, const System::UnicodeString AText, Vcl::Graphics::TFont* AFont, System::Uitypes::TColor ATextColor, System::Uitypes::TColor ABkColor, Cxgeometry::TdxScaleFactor* AScaleFactor, Cxlookandfeelpainters::TcxDrawBackgroundEvent AOnDrawBackground = 0x0)/* overload */;
	virtual void __fastcall DrawScaledHeaderControlSection(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TRect &ATextAreaBounds, Cxlookandfeelpainters::TcxNeighbors ANeighbors, Cxgeometry::TcxBorders ABorders, Cxlookandfeelpainters::TcxButtonState AState, System::Classes::TAlignment AAlignmentHorz, Cxclasses::TcxAlignmentVert AAlignmentVert, bool AMultiLine, bool AShowEndEllipsis, const System::UnicodeString AText, Vcl::Graphics::TFont* AFont, System::Uitypes::TColor ATextColor, System::Uitypes::TColor ABkColor, Cxgeometry::TdxScaleFactor* AScaleFactor)/* overload */;
	virtual void __fastcall DrawHeaderSeparator(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, int AIndentSize, System::Uitypes::TColor AColor, const Cxgraphics::TcxViewParams &AViewParams);
	virtual void __fastcall DrawHeaderPressed(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds);
	virtual void __fastcall DrawScaledSortingMark(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, bool AAscendingSorting, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawScaledSummarySortingMark(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, bool AAscendingSorting, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawScaledSummaryValueSortingMark(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, bool AAscendingSorting, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual Cxgeometry::TcxBorders __fastcall HeaderBorders(Cxlookandfeelpainters::TcxNeighbors ANeighbors);
	virtual System::Types::TRect __fastcall HeaderContentOffsets(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual bool __fastcall HeaderDrawCellsFirst();
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall HeaderGlyphColorPalette(Cxlookandfeelpainters::TcxButtonState AState);
	virtual bool __fastcall IsHeaderHotTrack();
	virtual System::Types::TPoint __fastcall ScaledSummarySortingMarkSize(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Types::TPoint __fastcall ScaledSummaryValueSortingMarkSize(Cxgeometry::TdxScaleFactor* AScaleFactor)/* overload */;
	virtual void __fastcall OfficeNavigationBarDrawBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect);
	virtual void __fastcall OfficeNavigationBarDrawScaledButtonItemBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, Cxlookandfeelpainters::TcxCalendarElementState AState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall OfficeNavigationBarDrawScaledItemBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, Cxlookandfeelpainters::TcxCalendarElementState AState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Uitypes::TColor __fastcall OfficeNavigationBarButtonItemTextColor(Cxlookandfeelpainters::TcxCalendarElementState AState);
	virtual System::Uitypes::TColor __fastcall OfficeNavigationBarItemTextColor(Cxlookandfeelpainters::TcxCalendarElementState AState);
	virtual System::Types::TRect __fastcall OfficeNavigationBarScaledButtonItemContentOffsets(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual int __fastcall OfficeNavigationBarScaledButtonItemFontSize(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Types::TRect __fastcall OfficeNavigationBarScaledContentOffsets(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Types::TRect __fastcall OfficeNavigationBarScaledItemContentOffsets(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual int __fastcall OfficeNavigationBarScaledItemFontSize(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall PDFViewerNavigationPaneButtonColorPalette(Cxlookandfeelpainters::TcxButtonState AState);
	virtual System::Types::TRect __fastcall PDFViewerNavigationPaneButtonContentOffsets(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Types::TPoint __fastcall PDFViewerNavigationPaneButtonOverlay(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Types::TSize __fastcall PDFViewerNavigationPaneButtonSize(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Types::TRect __fastcall PDFViewerNavigationPaneContentOffsets(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Types::TRect __fastcall PDFViewerNavigationPanePageCaptionContentOffsets(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Uitypes::TColor __fastcall PDFViewerNavigationPanePageCaptionTextColor();
	virtual System::Types::TRect __fastcall PDFViewerNavigationPanePageContentOffsets(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Types::TRect __fastcall PDFViewerNavigationPanePageToolbarContentOffsets(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Uitypes::TColor __fastcall PDFViewerSelectionColor();
	virtual void __fastcall PDFViewerDrawNavigationPaneBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall PDFViewerDrawNavigationPaneButton(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor, bool AMinimized, bool ASelected, bool AIsFirst);
	virtual void __fastcall PDFViewerDrawNavigationPanePageBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect);
	virtual void __fastcall PDFViewerDrawNavigationPanePageButton(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall PDFViewerDrawNavigationPanePageCaptionBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect);
	virtual void __fastcall PDFViewerDrawNavigationPanePageToolbarBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect);
	virtual void __fastcall PDFViewerDrawFindPanelBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxgeometry::TcxBorders ABorders);
	virtual void __fastcall PDFViewerDrawPageThumbnailPreviewBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect);
	virtual void __fastcall DrawSpreadSheetScaledGroupExpandButton(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor)/* overload */;
	virtual void __fastcall DrawSpreadSheetScaledGroupExpandButtonGlyph(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState, bool AExpanded, Cxgeometry::TdxScaleFactor* AScaleFactor, Vcl::Imglist::TCustomImageList* ADefaultGlyphs = (Vcl::Imglist::TCustomImageList*)(0x0))/* overload */;
	virtual void __fastcall DrawSpreadSheetScaledHeader(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxNeighbors ANeighbors, Cxgeometry::TcxBorders ABorders, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Uitypes::TColor __fastcall SpreadSheetContentColor();
	virtual System::Uitypes::TColor __fastcall SpreadSheetContentTextColor();
	virtual System::Uitypes::TColor __fastcall SpreadSheetFrozenPaneSeparatorColor();
	virtual System::Types::TRect __fastcall SpreadSheetScaledGroupExpandButtonContentOffsets(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Uitypes::TColor __fastcall SpreadSheetGroupExpandButtonTextColor(Cxlookandfeelpainters::TcxButtonState AState);
	virtual System::Uitypes::TColor __fastcall SpreadSheetGroupLineColor();
	virtual System::Uitypes::TColor __fastcall SpreadSheetSelectionColor();
	virtual void __fastcall DrawSpreadSheetFormulaBarScaledExpandButton(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState, bool AExpanded, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawSpreadSheetFormulaBarScaledSeparator(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawFilterRowSeparator(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, System::Uitypes::TColor ABackgroundColor);
	virtual void __fastcall DrawGroupByBox(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, bool ATransparent, System::Uitypes::TColor ABackgroundColor, Vcl::Graphics::TBitmap* const ABackgroundBitmap);
	virtual int __fastcall GridBordersOverlapSize();
	virtual bool __fastcall GridDrawHeaderCellsFirst();
	virtual System::Uitypes::TColor __fastcall GridGroupRowStyleOffice11ContentColor(bool AHasData);
	virtual System::Uitypes::TColor __fastcall GridGroupRowStyleOffice11SeparatorColor();
	virtual System::Uitypes::TColor __fastcall GridGroupRowStyleOffice11TextColor();
	virtual System::Uitypes::TColor __fastcall PivotGridHeadersAreaColor();
	virtual System::Uitypes::TColor __fastcall PivotGridHeadersAreaTextColor();
	virtual System::Uitypes::TColor __fastcall GridLikeControlContentColor();
	virtual System::Uitypes::TColor __fastcall GridLikeControlContentEvenColor();
	virtual System::Uitypes::TColor __fastcall GridLikeControlContentOddColor();
	virtual System::Uitypes::TColor __fastcall GridLikeControlContentTextColor();
	virtual System::Uitypes::TColor __fastcall GridLikeControlBackgroundColor();
	virtual void __fastcall LayoutViewDrawRecordCaption(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TRect &ATextRect, Cxlookandfeelpainters::TcxGroupBoxCaptionPosition APosition, Cxlookandfeelpainters::TcxButtonState AState, System::Uitypes::TColor AColor = (System::Uitypes::TColor)(0x20000000), Vcl::Graphics::TBitmap* const ABitmap = (Vcl::Graphics::TBitmap*)(0x0));
	virtual void __fastcall LayoutViewDrawRecordContent(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, Cxlookandfeelpainters::TcxGroupBoxCaptionPosition ACaptionPosition, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TcxBorders ABorders = (Cxgeometry::TcxBorders() << Cxgeometry::TcxBorder::bLeft << Cxgeometry::TcxBorder::bTop << Cxgeometry::TcxBorder::bRight << Cxgeometry::TcxBorder::bBottom ));
	virtual void __fastcall LayoutViewDrawScaledRecordExpandButton(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, Cxlookandfeelpainters::TcxButtonState AState, bool AExpanded, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall LayoutViewDrawItem(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TcxBorders ABorders = Cxgeometry::TcxBorders() );
	virtual System::Types::TRect __fastcall LayoutViewGetPadding(Cxlookandfeelpainters::TcxLayoutElement AElement);
	virtual System::Types::TRect __fastcall LayoutViewGetSpacing(Cxlookandfeelpainters::TcxLayoutElement AElement);
	virtual int __fastcall LayoutViewRecordCaptionTailSize(Cxlookandfeelpainters::TcxGroupBoxCaptionPosition ACaptionPosition);
	virtual bool __fastcall LayoutViewRecordCaptionTextBold();
	virtual System::Uitypes::TColor __fastcall DefaultDataRowLayoutContentTextColor(Cxlookandfeelpainters::TcxButtonState AState);
	virtual void __fastcall DrawDataRowLayoutItem(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, Cxlookandfeelpainters::TcxButtonState AState);
	virtual void __fastcall WinExplorerViewDrawGroup(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, Cxlookandfeelpainters::TcxButtonState AState, System::Uitypes::TColor AColor = (System::Uitypes::TColor)(0x20000000), Vcl::Graphics::TBitmap* const ABitmap = (Vcl::Graphics::TBitmap*)(0x0));
	virtual void __fastcall WinExplorerViewDrawGroupCaptionLine(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds);
	virtual void __fastcall WinExplorerViewDrawRecord(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, Cxlookandfeelpainters::TcxButtonState AState, System::Uitypes::TColor AColor = (System::Uitypes::TColor)(0x20000000), Vcl::Graphics::TBitmap* const ABitmap = (Vcl::Graphics::TBitmap*)(0x0));
	virtual void __fastcall WinExplorerViewDrawScaledRecordExpandButton(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &ABounds, Cxlookandfeelpainters::TcxButtonState AState, bool AExpanded, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual int __fastcall WinExplorerViewGroupCaptionLineHeight();
	virtual bool __fastcall WinExplorerViewGroupTextBold();
	virtual System::Uitypes::TColor __fastcall WinExplorerViewGroupTextColor(Cxlookandfeelpainters::TcxButtonState AState);
	virtual System::Uitypes::TColor __fastcall WinExplorerViewRecordTextColor(Cxlookandfeelpainters::TcxButtonState AState);
	virtual void __fastcall DrawFooterBorderEx(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxgeometry::TcxBorders ABorders);
	virtual void __fastcall DrawFooterCellBorder(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R);
	virtual void __fastcall DrawFooterCellContent(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, System::Classes::TAlignment AAlignmentHorz, Cxclasses::TcxAlignmentVert AAlignmentVert, bool AMultiLine, const System::UnicodeString AText, Vcl::Graphics::TFont* AFont, System::Uitypes::TColor ATextColor, System::Uitypes::TColor ABkColor, Cxlookandfeelpainters::TcxDrawBackgroundEvent AOnDrawBackground = 0x0);
	virtual void __fastcall DrawFooterContent(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, const Cxgraphics::TcxViewParams &AViewParams);
	virtual int __fastcall FooterCellBorderSize();
	virtual bool __fastcall FooterDrawCellsFirst();
	virtual System::Uitypes::TColor __fastcall FooterSeparatorColor();
	virtual System::Types::TPoint __fastcall ScaledFilterActivateButtonSize(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Types::TPoint __fastcall ScaledFilterCloseButtonSize(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Types::TSize __fastcall ScaledFilterSmartTagSize(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawScaledFilterCloseButton(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawScaledFilterDropDownButton(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState, bool AIsFilterActive, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawFilterPanel(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, bool ATransparent, System::Uitypes::TColor ABackgroundColor, Vcl::Graphics::TGraphic* const ABackgroundBitmap);
	virtual void __fastcall DrawScaledFilterSmartTag(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxFilterSmartTagState AState, bool AIsFilterActive, Cxgeometry::TdxScaleFactor* AScaleFactor)/* overload */;
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall FilterControlMenuGetColorPalette();
	virtual void __fastcall DrawScaledFilterBoolOperatorBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawScaledFilterItemCaptionBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawScaledFilterOperatorBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawScaledFilterPanelBrackets(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawScaledFilterValueBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall GetScaledFilterTokenParams(/* out */ Cxlookandfeelpainters::TdxFilterTokenParams &AParams, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Uitypes::TColor __fastcall GaugeControlBackgroundColor();
	virtual void __fastcall DrawGaugeControlBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, bool ATransparent, System::Uitypes::TColor ABackgroundColor);
	virtual System::Uitypes::TColor __fastcall MapControlBackgroundColor();
	virtual Dxcoregraphics::TdxAlphaColor __fastcall MapControlPanelBackColor();
	virtual Dxcoregraphics::TdxAlphaColor __fastcall MapControlPanelHotTrackedTextColor();
	virtual Dxcoregraphics::TdxAlphaColor __fastcall MapControlPanelPressedTextColor();
	virtual Dxcoregraphics::TdxAlphaColor __fastcall MapControlPanelTextColor();
	virtual System::Types::TSize __fastcall MapControlGetMapPushpinSize(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Types::TPoint __fastcall MapControlGetMapPushpinTextOrigin(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Types::TRect __fastcall MapControlMapCustomElementSelectionOffset(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual Dxcoregraphics::TdxAlphaColor __fastcall MapControlMapCustomElementTextColor();
	virtual Dxcoregraphics::TdxAlphaColor __fastcall MapControlMapCustomElementTextGlowColor();
	virtual Dxcoregraphics::TdxAlphaColor __fastcall MapControlMapPushpinTextColor();
	virtual Dxcoregraphics::TdxAlphaColor __fastcall MapControlMapPushpinTextGlowColor();
	virtual Dxcoregraphics::TdxAlphaColor __fastcall MapControlSelectedRegionBackgroundColor();
	virtual Dxcoregraphics::TdxAlphaColor __fastcall MapControlSelectedRegionBorderColor();
	virtual Dxcoregraphics::TdxAlphaColor __fastcall MapControlShapeColor();
	virtual Dxcoregraphics::TdxAlphaColor __fastcall MapControlShapeBorderColor();
	virtual int __fastcall MapControlShapeBorderWidth(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual Dxcoregraphics::TdxAlphaColor __fastcall MapControlShapeHighlightedColor();
	virtual Dxcoregraphics::TdxAlphaColor __fastcall MapControlShapeBorderHighlightedColor();
	virtual int __fastcall MapControlShapeBorderHighlightedWidth(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual Dxcoregraphics::TdxAlphaColor __fastcall MapControlShapeSelectedColor();
	virtual Dxcoregraphics::TdxAlphaColor __fastcall MapControlShapeBorderSelectedColor();
	virtual int __fastcall MapControlShapeBorderSelectedWidth(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawMapCustomElementBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, Cxlookandfeelpainters::TdxMapControlElementState AState);
	virtual void __fastcall DrawMapPushpin(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, Cxlookandfeelpainters::TdxMapControlElementState AState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawPanelBorders(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABorderRect);
	virtual void __fastcall DrawPanelContent(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &ARect);
	virtual System::Types::TRect __fastcall PanelBorderSize();
	virtual System::Uitypes::TColor __fastcall PanelTextColor();
	virtual void __fastcall DrawTrackBarScaledTrack(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, const System::Types::TRect &ASelection, bool AShowSelection, bool AEnabled, bool AHorizontal, System::Uitypes::TColor ATrackColor, Cxgeometry::TdxScaleFactor* AScaleFactor)/* overload */;
	virtual void __fastcall DrawTrackBarScaledThumb(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, Cxlookandfeelpainters::TcxButtonState AState, bool AHorizontal, Cxlookandfeelpainters::TcxTrackBarTicksAlign ATicks, System::Uitypes::TColor AThumbColor, Cxgeometry::TdxScaleFactor* AScaleFactor)/* overload */;
	virtual System::Types::TSize __fastcall TrackBarScaledThumbSize(bool AHorizontal, Cxgeometry::TdxScaleFactor* AScaleFactor)/* overload */;
	virtual int __fastcall TrackBarScaledTrackSize(Cxgeometry::TdxScaleFactor* AScaleFactor)/* overload */;
	virtual System::Uitypes::TColor __fastcall TrackBarTicksColor(bool AText);
	virtual void __fastcall DrawRangeControlScaledLeftThumb(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, System::Uitypes::TColor AColor, Dxcoregraphics::TdxAlphaColor ABorderColor, Cxgeometry::TdxScaleFactor* AScaleFactor)/* overload */;
	virtual void __fastcall DrawRangeControlScaledRightThumb(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, System::Uitypes::TColor AColor, Dxcoregraphics::TdxAlphaColor ABorderColor, Cxgeometry::TdxScaleFactor* AScaleFactor)/* overload */;
	virtual void __fastcall DrawRangeControlScaledRulerHeader(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, bool AIsHot, Dxcoregraphics::TdxAlphaColor AColor, Dxcoregraphics::TdxAlphaColor ABorderColor, Cxgeometry::TdxScaleFactor* AScaleFactor)/* overload */;
	virtual void __fastcall DrawRangeControlScaledSizingGlyph(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, Dxcoregraphics::TdxAlphaColor ABorderColor, Cxgeometry::TdxScaleFactor* AScaleFactor)/* overload */;
	virtual System::Uitypes::TColor __fastcall GetRangeControlBackColor();
	virtual System::Uitypes::TColor __fastcall GetRangeControlBorderColor();
	virtual System::Uitypes::TColor __fastcall GetRangeControlDefaultElementColor();
	virtual System::Uitypes::TColor __fastcall GetRangeControlElementForeColor();
	virtual Dxcoregraphics::TdxAlphaColor __fastcall GetRangeControlElementsBorderColor();
	virtual System::Uitypes::TColor __fastcall GetRangeControlLabelColor();
	virtual Dxcoregraphics::TdxAlphaColor __fastcall GetRangeControlOutOfRangeColor();
	virtual System::Uitypes::TColor __fastcall GetRangeControlRangePreviewColor();
	virtual Dxcoregraphics::TdxAlphaColor __fastcall GetRangeControlRulerColor();
	virtual int __fastcall GetRangeControlScaledScrollAreaHeight(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Types::TSize __fastcall GetRangeControlScaledSizingGlyphSize(Cxgeometry::TdxScaleFactor* AScaleFactor)/* overload */;
	virtual System::Uitypes::TColor __fastcall GetRangeControlScrollAreaColor();
	virtual Dxcoregraphics::TdxAlphaColor __fastcall GetRangeControlSelectedRegionBackgroundColor();
	virtual Dxcoregraphics::TdxAlphaColor __fastcall GetRangeControlSelectedRegionBorderColor();
	virtual System::Types::TSize __fastcall GetRangeControlScaledThumbSize(Cxgeometry::TdxScaleFactor* AScaleFactor)/* overload */;
	virtual System::Uitypes::TColor __fastcall GetRangeControlViewPortPreviewColor();
	Dxskinscore::TdxSkinElement* __fastcall GetRangeTrackBarLeftThumbSkinElement(bool AHorizontal, Cxlookandfeelpainters::TcxTrackBarTicksAlign ATicks);
	Dxskinscore::TdxSkinElement* __fastcall GetRangeTrackBarRightThumbSkinElement(bool AHorizontal, Cxlookandfeelpainters::TcxTrackBarTicksAlign ATicks);
	virtual System::Types::TSize __fastcall RangeTrackBarScaledLeftThumbSize(bool AHorizontal, Cxlookandfeelpainters::TcxTrackBarTicksAlign ATicks, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Types::TSize __fastcall RangeTrackBarScaledRightThumbSize(bool AHorizontal, Cxlookandfeelpainters::TcxTrackBarTicksAlign ATicks, Cxgeometry::TdxScaleFactor* AScaleFactor);
	void __fastcall DrawRangeTrackBarScaledThumbSkinElement(Cxgraphics::TcxCanvas* ACanvas, Dxskinscore::TdxSkinElement* ASkinElement, const System::Types::TRect &ARect, Cxlookandfeelpainters::TcxButtonState AState, bool AHorizontal, Cxlookandfeelpainters::TcxTrackBarTicksAlign ATicks, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawRangeTrackBarScaledLeftThumb(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, Cxlookandfeelpainters::TcxButtonState AState, bool AHorizontal, Cxlookandfeelpainters::TcxTrackBarTicksAlign ATicks, System::Uitypes::TColor AThumbColor, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawRangeTrackBarScaledRightThumb(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, Cxlookandfeelpainters::TcxButtonState AState, bool AHorizontal, Cxlookandfeelpainters::TcxTrackBarTicksAlign ATicks, System::Uitypes::TColor AThumbColor, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawScaledSplitter(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &ARect, bool AHighlighted, bool AClicked, bool AHorizontal, Cxgeometry::TdxScaleFactor* AScaleFactor, bool AHasCloseMark = false, Cxgraphics::TcxArrowDirection AArrowDirection = (Cxgraphics::TcxArrowDirection)(0x2));
	virtual System::Types::TSize __fastcall GetScaledSplitterSize(bool AHorizontal, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Uitypes::TColor __fastcall GetHintBorderColor();
	virtual void __fastcall DrawHintBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, System::Uitypes::TColor AColor = (System::Uitypes::TColor)(0x20000000));
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall ScreenTipGetColorPalette();
	virtual System::Uitypes::TColor __fastcall ScreenTipGetDescriptionTextColor();
	virtual System::Uitypes::TColor __fastcall ScreenTipGetTitleTextColor();
	virtual int __fastcall ScreenTipGetFooterLineSize();
	virtual void __fastcall ScreenTipDrawBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect);
	virtual void __fastcall ScreenTipDrawFooterLine(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect);
	virtual void __fastcall DrawScaledIndicatorImage(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxIndicatorKind AKind, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawScaledIndicatorItem(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, const System::Types::TRect &AImageAreaBounds, Cxlookandfeelpainters::TcxIndicatorKind AKind, System::Uitypes::TColor AColor, Cxgeometry::TdxScaleFactor* AScaleFactor, Cxlookandfeelpainters::TcxDrawBackgroundEvent AOnDrawBackground = 0x0, Cxlookandfeelpainters::TcxNeighbors ANeighbors = (Cxlookandfeelpainters::TcxNeighbors() << Cxlookandfeelpainters::TcxNeighbor::nTop << Cxlookandfeelpainters::TcxNeighbor::nBottom ))/* overload */;
	virtual void __fastcall DrawScaledIndicatorItemEx(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxIndicatorKind AKind, System::Uitypes::TColor AColor, Cxgeometry::TdxScaleFactor* AScaleFactor, Cxlookandfeelpainters::TcxDrawBackgroundEvent AOnDrawBackground = 0x0);
	virtual void __fastcall DrawScaledIndicatorCustomizationMark(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R, System::Uitypes::TColor AColor, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual bool __fastcall IndicatorDrawItemsFirst();
	virtual void __fastcall DrawScaledMonthHeader(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::UnicodeString AText, Cxlookandfeelpainters::TcxNeighbors ANeighbors, const Cxgraphics::TcxViewParams &AViewParams, Cxgraphics::TcxArrowDirections AArrows, int ASideWidth, Cxgeometry::TdxScaleFactor* AScaleFactor, Cxlookandfeelpainters::TcxDrawBackgroundEvent AOnDrawBackground = 0x0);
	virtual void __fastcall CalculateSchedulerNavigationButtonRects(bool AIsNextButton, bool ACollapsed, const System::Types::TSize &APrevButtonTextSize, const System::Types::TSize &ANextButtonTextSize, System::Types::TRect &ABounds, /* out */ System::Types::TRect &ATextRect, /* out */ System::Types::TRect &AArrowRect, Cxgeometry::TdxScaleFactor* AScaleFactor, const bool AIsVertical = true)/* overload */;
	virtual void __fastcall DrawSchedulerDayHeader(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TRect &ATextAreaBounds, Cxlookandfeelpainters::TcxNeighbors ANeighbors, Cxgeometry::TcxBorders ABorders, Cxlookandfeelpainters::TcxButtonState AState, System::Classes::TAlignment AAlignmentHorz, Cxclasses::TcxAlignmentVert AAlignmentVert, bool AMultiLine, bool AShowEndEllipsis, const System::UnicodeString AText, Vcl::Graphics::TFont* AFont, System::Uitypes::TColor ATextColor, System::Uitypes::TColor ABkColor, Cxgeometry::TdxScaleFactor* AScaleFactor, Cxlookandfeelpainters::TcxDrawBackgroundEvent AOnDrawBackground = 0x0, bool AIsLast = false, bool AIsGroup = false);
	virtual void __fastcall DrawSchedulerScaledEventProgress(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TRect &AProgress, const Cxgraphics::TcxViewParams &AViewParams, bool ATransparent, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawSchedulerGroup(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, System::Uitypes::TColor AColor = (System::Uitypes::TColor)(0x20000000));
	virtual void __fastcall DrawSchedulerScaledGroupSeparator(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, System::Uitypes::TColor ABackgroundColor, Cxgeometry::TdxScaleFactor* AScaleFactor, Cxlookandfeelpainters::TcxDrawBackgroundEvent AOnDrawBackground);
	virtual void __fastcall DrawSchedulerMilestone(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R);
	virtual void __fastcall DrawSchedulerScaledNavigatorButton(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawSchedulerTaskExpandButton(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, bool AExpanded, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Types::TRect __fastcall SchedulerEventProgressOffsets();
	virtual System::Uitypes::TColor __fastcall SchedulerNavigationButtonTextColor(bool AIsNextButton, Cxlookandfeelpainters::TcxButtonState AState, System::Uitypes::TColor ADefaultColor = (System::Uitypes::TColor)(0x20000000));
	virtual void __fastcall SchedulerNavigationButtonSizes(bool AIsNextButton, System::Types::TRect &ABorders, System::Types::TSize &AArrowSize, bool &AHasTextArea, Cxgeometry::TdxScaleFactor* AScaleFactor, const bool AIsVertical = true)/* overload */;
	virtual System::Types::TSize __fastcall SchedulerTaskExpandButtonSize(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Uitypes::TColor __fastcall LayoutControlEmptyAreaColor();
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall LayoutControlGetColorPaletteForGroupButton(Cxlookandfeelpainters::TcxButtonState AState);
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall LayoutControlGetColorPaletteForItemCaption();
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall LayoutControlGetColorPaletteForTabbedGroupCaption(bool AIsActive);
	virtual void __fastcall DrawLayoutControlBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R);
	virtual void __fastcall DrawScrollBoxBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, System::Uitypes::TColor AColor);
	virtual void __fastcall DrawEditPopupWindowBorder(Cxgraphics::TcxCanvas* ACanvas, System::Types::TRect &R, Cxlookandfeelpainters::TcxEditPopupBorderStyle ABorderStyle, bool AClientEdge);
	virtual int __fastcall GetEditPopupWindowBorderWidth(Cxlookandfeelpainters::TcxEditPopupBorderStyle AStyle);
	virtual int __fastcall GetEditPopupWindowClientEdgeWidth(Cxlookandfeelpainters::TcxEditPopupBorderStyle AStyle);
	virtual System::Uitypes::TColor __fastcall GetWindowContentTextColor();
	virtual void __fastcall DrawWindowContent(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect);
	virtual System::Uitypes::TColor __fastcall PrintPreviewBackgroundTextColor();
	virtual System::Types::TRect __fastcall PrintPreviewPageBordersScaledWidth(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawPrintPreviewScaledBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawPrintPreviewPageScaledBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABorderRect, const System::Types::TRect &AContentRect, bool ASelected, bool ADrawContent, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawDateNavigatorCellSelection(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, System::Uitypes::TColor AColor);
	virtual void __fastcall DrawDateNavigatorDateHeader(Cxgraphics::TcxCanvas* ACanvas, System::Types::TRect &R);
	virtual void __fastcall DrawDateNavigatorTodayCellSelection(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R);
	virtual System::Uitypes::TColor __fastcall CalcEditButtonTextColor(Cxlookandfeelpainters::TcxCalcButtonKind AButtonKind);
	virtual System::Uitypes::TColor __fastcall GetCustomizationFormListBackgroundColor();
	virtual System::Uitypes::TColor __fastcall BreadcrumbEditBackgroundColor(Cxlookandfeelpainters::TdxBreadcrumbEditState AState);
	virtual System::Uitypes::TColor __fastcall BreadcrumbEditBordersColor(Cxlookandfeelpainters::TdxBreadcrumbEditState AState);
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall BreadcrumbEditButtonColorPalette(Cxlookandfeelpainters::TdxBreadcrumbEditButtonState AState);
	virtual bool __fastcall BreadcrumbEditIsFadingSupports();
	virtual System::Uitypes::TColor __fastcall BreadcrumbEditNodeTextColor(Cxlookandfeelpainters::TdxBreadcrumbEditButtonState AState);
	virtual System::Uitypes::TColor __fastcall BreadcrumbEditProgressChunkTextColor();
	virtual int __fastcall BreadcrumbEditScaledButtonAreaSeparatorSize(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Types::TRect __fastcall BreadcrumbEditScaledButtonContentOffsets(bool AIsFirst, bool AIsLast, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual int __fastcall BreadcrumbEditScaledDropDownButtonWidth(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Types::TRect __fastcall BreadcrumbEditScaledNodeTextOffsets(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Types::TSize __fastcall BreadcrumbEditScaledProgressChunkOverlaySize(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Types::TRect __fastcall BreadcrumbEditScaledProgressChunkPadding(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawBreadcrumbEditBorders(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, Cxgeometry::TcxBorders ABorders, Cxlookandfeelpainters::TdxBreadcrumbEditState AState);
	virtual void __fastcall DrawBreadcrumbEditScaledButton(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, Cxlookandfeelpainters::TdxBreadcrumbEditButtonState AState, bool AIsFirst, bool AIsLast, Cxgeometry::TdxScaleFactor* AScaleFactor);
	void __fastcall DrawBreadcrumbEditScaledButtonCore(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, Dxskinscore::TdxSkinElement* AButtonElement, Cxlookandfeelpainters::TdxBreadcrumbEditButtonState AState, bool AIsFirst, bool AIsLast, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawBreadcrumbEditScaledButtonAreaSeparator(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, Cxlookandfeelpainters::TdxBreadcrumbEditState AState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawBreadcrumbEditScaledDropDownButton(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, Cxlookandfeelpainters::TdxBreadcrumbEditButtonState AState, bool AIsInEditor, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawBreadcrumbEditScaledDropDownButtonGlyph(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, Cxlookandfeelpainters::TdxBreadcrumbEditButtonState AState, bool AIsInEditor, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawBreadcrumbEditScaledNode(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TdxBreadcrumbEditButtonState AState, bool AHasDelimiter, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawBreadcrumbEditScaledNodeDelimiter(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TdxBreadcrumbEditButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawBreadcrumbEditScaledNodeMoreButtonGlyph(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TdxBreadcrumbEditButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor, System::Uitypes::TColor ATextColor = (System::Uitypes::TColor)(0x20000000));
	virtual void __fastcall DrawBreadcrumbEditScaledNodeDelimiterGlyph(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TdxBreadcrumbEditButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor, System::Uitypes::TColor ATextColor = (System::Uitypes::TColor)(0x20000000));
	virtual void __fastcall DrawBreadcrumbEditScaledProgressChunk(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawBreadcrumbEditScaledProgressChunkOverlay(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual int __fastcall DropDownListBoxBordersSize();
	virtual System::Uitypes::TColor __fastcall DropDownListBoxItemTextColor(bool ASelected);
	virtual System::Types::TRect __fastcall DropDownListBoxScaledItemImageOffsets(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Types::TRect __fastcall DropDownListBoxScaledItemTextOffsets(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual int __fastcall DropDownListBoxScaledSeparatorSize(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawDropDownListBoxBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, bool AHasBorders);
	virtual void __fastcall DrawDropDownListBoxScaledGutterBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawDropDownListBoxScaledSelection(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, const System::Types::TRect &AGutterRect, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawDropDownListBoxScaledSeparator(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, const System::Types::TRect &AGutterRect, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Types::TRect __fastcall AlertWindowScaledButtonContentOffsets(Cxlookandfeelpainters::TdxAlertWindowButtonKind AKind, Cxgeometry::TdxScaleFactor* AScaleFactor);
	Dxskinscore::TdxSkinElement* __fastcall AlertWindowButtonElement(Cxlookandfeelpainters::TdxAlertWindowButtonKind AKind);
	virtual System::Types::TRect __fastcall AlertWindowScaledContentOffsets(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual int __fastcall AlertWindowCornerRadius();
	virtual System::Uitypes::TColor __fastcall AlertWindowNavigationPanelTextColor();
	virtual System::Uitypes::TColor __fastcall AlertWindowTextColor();
	virtual void __fastcall DrawAlertWindowBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, Cxgeometry::TdxScaleFactor* AScaleFactor = (Cxgeometry::TdxScaleFactor*)(0x0));
	virtual void __fastcall DrawAlertWindowScaledButton(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, Cxlookandfeelpainters::TcxButtonState AState, Cxlookandfeelpainters::TdxAlertWindowButtonKind AKind, Cxgeometry::TdxScaleFactor* AScaleFactor, bool ADown);
	virtual void __fastcall DrawAlertWindowNavigationPanel(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds);
	virtual System::Types::TSize __fastcall GetBevelMinimalShapeSize(Cxlookandfeelpainters::TdxBevelShape AShape);
	virtual void __fastcall GetBevelShapeColors(/* out */ System::Uitypes::TColor &AColor1, /* out */ System::Uitypes::TColor &AColor2);
	virtual void __fastcall DrawGalleryBackground(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &ABounds);
	virtual void __fastcall DrawGalleryGroupHeader(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &ABounds);
	virtual void __fastcall DrawGalleryItemImageFrame(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R);
	virtual void __fastcall DrawGalleryItemSelection(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R, const Cxlookandfeelpainters::TdxGalleryItemViewState &AViewState);
	virtual bool __fastcall DrawGalleryItemSelectionFirst();
	virtual System::Uitypes::TColor __fastcall GetGalleryDropTargetSelectionColor();
	virtual System::Uitypes::TColor __fastcall GetGalleryGroupTextColor();
	virtual System::Uitypes::TColor __fastcall GetGalleryItemCaptionTextColor(const Cxlookandfeelpainters::TdxGalleryItemViewState &AState);
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall GetGalleryItemColorPalette(const Cxlookandfeelpainters::TdxGalleryItemViewState &AState);
	virtual System::Uitypes::TColor __fastcall GetGalleryItemDescriptionTextColor(const Cxlookandfeelpainters::TdxGalleryItemViewState &AState);
	System::Uitypes::TColor __fastcall GetGalleryItemTextColor(Cxlookandfeelpainters::TcxButtonState AState, const System::UnicodeString ANameSuffix);
	virtual System::Types::TRect __fastcall GetGalleryScaledGroupHeaderContentOffsets(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Uitypes::TColor __fastcall GetColorGalleryGlyphFrameColor();
	virtual System::Types::TSize __fastcall GetScaledBackButtonSize(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawScaledBackButton(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawCalendarDateCellSelection(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, Cxlookandfeelpainters::TcxCalendarElementStates AStates);
	virtual void __fastcall DrawModernCalendarDateCellSelection(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, Cxlookandfeelpainters::TcxCalendarElementStates AStates);
	virtual void __fastcall DrawModernCalendarDateHeaderSelection(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, Cxlookandfeelpainters::TcxCalendarElementStates AStates);
	virtual void __fastcall DrawModernCalendarHeaderSelection(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, Cxlookandfeelpainters::TcxCalendarElementStates AStates);
	virtual System::Uitypes::TColor __fastcall GetModernCalendarCellTextColor(Cxlookandfeelpainters::TcxCalendarElementStates AStates);
	virtual System::Uitypes::TColor __fastcall GetModernCalendarDateHeaderTextColor(Cxlookandfeelpainters::TcxCalendarElementStates AStates);
	virtual System::Uitypes::TColor __fastcall GetModernCalendarHeaderTextColor(Cxlookandfeelpainters::TcxCalendarElementStates AStates);
	virtual System::Types::TRect __fastcall GetModernCalendarHeaderTextOffsets();
	virtual void __fastcall DrawScaledModernCalendarArrow(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, Cxgraphics::TcxArrowDirection ADirection, Cxlookandfeelpainters::TcxCalendarElementState AState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall GetRatingControlIndicatorColorPalette(Cxlookandfeelpainters::TdxRatingControlIndicatorState AState);
	virtual System::Types::TSize __fastcall GetRatingControlScaledIndicatorSize(Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawRatingControlScaledIndicator(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, Cxlookandfeelpainters::TdxRatingControlIndicatorState AState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawWheelPickerItem(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, Cxlookandfeelpainters::TcxButtonState AState);
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall GetWheelPickerColorPalette(Cxlookandfeelpainters::TcxButtonState AState);
	virtual System::Uitypes::TColor __fastcall RichEditControlHeaderFooterLineColor();
	virtual System::Uitypes::TColor __fastcall RichEditControlHeaderFooterMarkBackColor();
	virtual System::Uitypes::TColor __fastcall RichEditControlHeaderFooterMarkTextColor();
	virtual System::Uitypes::TColor __fastcall RichEditRulerDefaultTabColor();
	virtual System::Uitypes::TColor __fastcall RichEditRulerTextColor();
	virtual void __fastcall DrawScaledTokenBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall GetTokenColorPalette(Cxlookandfeelpainters::TcxButtonState AState);
	virtual System::Uitypes::TColor __fastcall GetTokenTextColor(Cxlookandfeelpainters::TcxButtonState AState);
	bool __fastcall DoDrawGanttColorableElement(Dxskinscore::TdxSkinElement* AElement, Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R, const System::Uitypes::TColor AColor = (System::Uitypes::TColor)(0x20000000));
	virtual void __fastcall DoDrawGanttSummaryTaskProgress(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R, Cxgeometry::TdxScaleFactor* AScaleFactor, const System::Uitypes::TColor AColor = (System::Uitypes::TColor)(0x20000000));
	virtual void __fastcall DoDrawGanttTaskProgress(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R, const System::Uitypes::TColor AColor = (System::Uitypes::TColor)(0x20000000));
	virtual void __fastcall DrawGanttBaselineMilestone(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R, Cxgeometry::TdxScaleFactor* AScaleFactor, const System::Uitypes::TColor AColor = (System::Uitypes::TColor)(0x20000000));
	virtual void __fastcall DrawGanttBaselineSummaryTask(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R, Cxgeometry::TdxScaleFactor* AScaleFactor, const System::Uitypes::TColor AColor = (System::Uitypes::TColor)(0x20000000));
	virtual void __fastcall DrawGanttBaselineTask(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R, const System::Uitypes::TColor AColor = (System::Uitypes::TColor)(0x20000000));
	virtual void __fastcall DrawGanttDependencyEditPoint(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R, const Cxlookandfeelpainters::TcxButtonState AState, const bool AIsLeft);
	virtual void __fastcall DrawGanttFocusedRow(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R, const bool AIsActive = true);
	virtual void __fastcall DrawGanttMilestone(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R, Cxgeometry::TdxScaleFactor* AScaleFactor, const System::Uitypes::TColor AColor = (System::Uitypes::TColor)(0x20000000));
	virtual void __fastcall DrawGanttSummaryTask(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R, Cxgeometry::TdxScaleFactor* AScaleFactor, const System::Uitypes::TColor AColor = (System::Uitypes::TColor)(0x20000000));
	virtual void __fastcall DrawGanttTask(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R, const System::Uitypes::TColor AColor = (System::Uitypes::TColor)(0x20000000));
	virtual void __fastcall DrawGanttTaskTextLabel(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R);
	virtual System::Types::TSize __fastcall GetGanttBaselineMilestoneSize();
	System::Types::TSize __fastcall GetGanttBaselineSize(Dxskinscore::TdxSkinElement* AElement);
	virtual int __fastcall GetGanttBaselineSummaryTaskHeight();
	virtual int __fastcall GetGanttBaselineTaskHeight();
	virtual System::Types::TSize __fastcall GetGanttDependencyEditPointSize(const bool AIsLeft);
	virtual System::Uitypes::TColor __fastcall GetGanttMilestoneColor();
	virtual System::Types::TSize __fastcall GetGanttMilestoneSize();
	virtual System::Uitypes::TColor __fastcall GetGanttSummaryTaskColor();
	virtual int __fastcall GetGanttSummaryTaskHeight();
	virtual System::Uitypes::TColor __fastcall GetGanttTaskColor(bool AManualSchedule);
	virtual int __fastcall GetGanttTaskHeight();
	virtual int __fastcall GetGanttTaskTextLabelHeight();
	virtual int __fastcall GetGanttTaskTextLabelOffset();
	virtual bool __fastcall GetGanttTaskTextLabelTextBold();
	virtual System::Uitypes::TColor __fastcall GetGanttTaskTextLabelTextColor();
	virtual void __fastcall DrawListViewGroupExpandButton(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &ABounds, Cxlookandfeelpainters::TcxButtonState AState, bool AExpanded, bool AExplorerStyle, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawListViewGroupHeaderBackground(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &ABounds, Cxlookandfeelpainters::TdxListViewGroupHeaderStates AState, bool AExplorerStyle, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual void __fastcall DrawListViewGroupHeaderLine(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &ABounds);
	virtual void __fastcall DrawListViewItemBackground(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &ABounds, Cxlookandfeelpainters::TdxListViewItemStates AState, bool AExplorerStyle);
	virtual void __fastcall DrawListViewSortingMark(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R, bool AAscendingSorting, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall GetListViewColumnHeaderColorPalette(Cxlookandfeelpainters::TcxButtonState AState);
	virtual System::Types::TRect __fastcall GetListViewColumnHeaderContentOffsets(bool AExplorerStyle, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall GetListViewGroupHeaderColorPalette(Cxlookandfeelpainters::TdxListViewGroupHeaderStates AState);
	virtual System::Uitypes::TColor __fastcall GetListViewGroupTextColor(Cxlookandfeelpainters::TdxListViewGroupTextKind AKind, Cxlookandfeelpainters::TdxListViewGroupHeaderStates AState, bool AExplorerStyle);
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall GetListViewItemColorPalette(Cxlookandfeelpainters::TdxListViewItemStates AState);
	virtual System::Types::TRect __fastcall GetListViewItemContentPadding();
	virtual System::Uitypes::TColor __fastcall GetListViewItemTextColor(Cxlookandfeelpainters::TdxListViewItemStates AState, bool AExplorerStyle);
	Dxskinscore::TdxSkinElementState __fastcall ListViewStateToElementState(Cxlookandfeelpainters::TdxListViewGroupHeaderStates AState)/* overload */;
	Dxskinscore::TdxSkinElementState __fastcall ListViewStateToElementState(Cxlookandfeelpainters::TdxListViewItemStates AState)/* overload */;
	__property Dxskinscore::TdxSkinDetails* SkinDetails = {read=GetSkinDetails};
	__property TdxSkinLookAndFeelPainterInfo* SkinInfo = {read=GetSkinInfo};
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  DrawScaledButton(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor, Cxlookandfeelpainters::TcxButtonPart APart, System::Uitypes::TColor AColor = (System::Uitypes::TColor)(0x20000000)){ Cxlookandfeelpainters::TcxCustomLookAndFeelPainter::DrawScaledButton(ACanvas, R, AState, AScaleFactor, APart, AColor); }
	inline void __fastcall  DrawScaledButton(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, const System::UnicodeString ACaption, Cxlookandfeelpainters::TcxButtonState AState, Cxgeometry::TdxScaleFactor* AScaleFactor, bool ADrawBorder = true, System::Uitypes::TColor AColor = (System::Uitypes::TColor)(0x20000000), System::Uitypes::TColor ATextColor = (System::Uitypes::TColor)(0x20000000), bool AWordWrap = false, bool AIsToolButton = false, Cxlookandfeelpainters::TcxButtonPart APart = (Cxlookandfeelpainters::TcxButtonPart)(0x0)){ Cxlookandfeelpainters::TcxCustomLookAndFeelPainter::DrawScaledButton(ACanvas, R, ACaption, AState, AScaleFactor, ADrawBorder, AColor, ATextColor, AWordWrap, AIsToolButton, APart); }
	inline void __fastcall  DrawScaledExpandButton(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, bool AExpanded, Cxgeometry::TdxScaleFactor* AScaleFactor, System::Uitypes::TColor AColor = (System::Uitypes::TColor)(0x20000000), Cxlookandfeelpainters::TcxExpandButtonState AState = (Cxlookandfeelpainters::TcxExpandButtonState)(0x0)){ Cxlookandfeelpainters::TcxCustomLookAndFeelPainter::DrawScaledExpandButton(ACanvas, R, AExpanded, AScaleFactor, AColor, AState); }
	inline void __fastcall  DoDrawSizeGrip(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect){ Cxlookandfeelpainters::TcxCustomLookAndFeelPainter::DoDrawSizeGrip(ACanvas, ARect); }
	inline void __fastcall  DrawScaledCheckButton(Cxcustomcanvas::TcxCustomCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState, bool AChecked, Cxgeometry::TdxScaleFactor* AScaleFactor, bool ADrawBackground){ Cxlookandfeelpainters::TcxCustomLookAndFeelPainter::DrawScaledCheckButton(ACanvas, R, AState, AChecked, AScaleFactor, ADrawBackground); }
	inline void __fastcall  DrawScaledCheckButton(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState, bool AChecked, Cxgeometry::TdxScaleFactor* AScaleFactor){ Cxlookandfeelpainters::TcxCustomLookAndFeelPainter::DrawScaledCheckButton(ACanvas, R, AState, AChecked, AScaleFactor); }
	inline void __fastcall  DrawScaledCheckButton(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState, Cxlookandfeelpainters::TcxCheckBoxState ACheckState, Cxgeometry::TdxScaleFactor* AScaleFactor){ Cxlookandfeelpainters::TcxCustomLookAndFeelPainter::DrawScaledCheckButton(ACanvas, R, AState, ACheckState, AScaleFactor); }
	inline void __fastcall  DrawScaledIndicatorItem(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxIndicatorKind AKind, System::Uitypes::TColor AColor, Cxgeometry::TdxScaleFactor* AScaleFactor, Cxlookandfeelpainters::TcxDrawBackgroundEvent AOnDrawBackground = 0x0){ Cxlookandfeelpainters::TcxCustomLookAndFeelPainter::DrawScaledIndicatorItem(ACanvas, R, AKind, AColor, AScaleFactor, AOnDrawBackground); }
	inline void __fastcall  CalculateSchedulerNavigationButtonRects(bool AIsNextButton, bool ACollapsed, const System::Types::TSize &APrevButtonTextSize, const System::Types::TSize &ANextButtonTextSize, System::Types::TRect &ABounds, /* out */ System::Types::TRect &ATextRect, /* out */ System::Types::TRect &AArrowRect, const bool AIsVertical = true){ Cxlookandfeelpainters::TcxCustomLookAndFeelPainter::CalculateSchedulerNavigationButtonRects(AIsNextButton, ACollapsed, APrevButtonTextSize, ANextButtonTextSize, ABounds, ATextRect, AArrowRect, AIsVertical); }
	inline void __fastcall  SchedulerNavigationButtonSizes(bool AIsNextButton, System::Types::TRect &ABorders, System::Types::TSize &AArrowSize, bool &AHasTextArea, const bool AIsVertical = true){ Cxlookandfeelpainters::TcxCustomLookAndFeelPainter::SchedulerNavigationButtonSizes(AIsNextButton, ABorders, AArrowSize, AHasTextArea, AIsVertical); }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dxskinslookandfeelpainter */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXSKINSLOOKANDFEELPAINTER)
using namespace Dxskinslookandfeelpainter;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxskinslookandfeelpainterHPP
