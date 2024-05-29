// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxGroupBox.pas' rev: 35.00 (Windows)

#ifndef CxgroupboxHPP
#define CxgroupboxHPP

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
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Themes.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Generics.Collections.hpp>
#include <dxCore.hpp>
#include <dxMessages.hpp>
#include <cxControls.hpp>
#include <cxGraphics.hpp>
#include <cxClasses.hpp>
#include <cxLookAndFeels.hpp>
#include <dxFluentDesignFormInterfaces.hpp>
#include <cxContainer.hpp>
#include <cxEditPaintUtils.hpp>
#include <cxEdit.hpp>
#include <cxTextEdit.hpp>
#include <cxCheckBox.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <dxFading.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxgroupbox
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxGroupBoxButtonViewInfo;
class DELPHICLASS TcxGroupBoxViewInfo;
class DELPHICLASS TcxGroupBoxViewData;
struct TcxEditMetrics;
class DELPHICLASS TcxButtonGroupViewInfo;
class DELPHICLASS TcxButtonGroupButtonViewInfo;
class DELPHICLASS TcxButtonGroupButtonFadingHelper;
class DELPHICLASS TcxButtonGroupViewData;
class DELPHICLASS TcxCustomGroupBoxProperties;
class DELPHICLASS TcxButtonGroupItem;
class DELPHICLASS TcxButtonGroupItems;
class DELPHICLASS TcxCustomButtonGroupProperties;
class DELPHICLASS TcxPanelStyle;
class DELPHICLASS TcxCustomGroupBox;
class DELPHICLASS TcxGroupBox;
class DELPHICLASS TcxCustomButtonGroup;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TcxCaptionAlignment : unsigned char { alTopLeft, alTopCenter, alTopRight, alBottomLeft, alBottomCenter, alBottomRight, alLeftTop, alLeftCenter, alLeftBottom, alRightTop, alRightCenter, alRightBottom, alCenterCenter };

enum DECLSPEC_DENUM TcxPanelOffice11BackgroundKind : unsigned char { pobkGradient, pobkOffice11Color, pobkStyleColor };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGroupBoxButtonViewInfo : public Cxedit::TcxEditButtonViewInfo
{
	typedef Cxedit::TcxEditButtonViewInfo inherited;
	
public:
	System::UnicodeString Caption;
	bool Enabled;
	System::Uitypes::TColor TextColor;
	int Column;
	int Row;
	virtual System::Types::TRect __fastcall GetGlyphRect(const System::Types::TSize &AGlyphSize, System::Classes::TLeftRight AAlignment, bool AIsPaintCopy);
public:
	/* TcxEditButtonViewInfo.Destroy */ inline __fastcall virtual ~TcxGroupBoxButtonViewInfo() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxGroupBoxButtonViewInfo() : Cxedit::TcxEditButtonViewInfo() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxGroupBoxViewInfo : public Cxtextedit::TcxCustomTextEditViewInfo
{
	typedef Cxtextedit::TcxCustomTextEditViewInfo inherited;
	
private:
	bool FCheckBoxVisible;
	Cxlookandfeelpainters::TcxCheckBoxState FCheckBoxCheckState;
	Cxlookandfeelpainters::TcxEditCheckState FCheckBoxViewState;
	bool FCheckPressed;
	System::Types::TRect FCheckBoxRect;
	System::Types::TRect FFocusRect;
	System::Types::TRect FMouseFocusingRect;
	void __fastcall CalculateCheckBoxAndTextRects(const System::Types::TRect &ACombinedRect);
	void __fastcall InvalidateCheckBoxRect();
	bool __fastcall PointInCheckBox(int X, int Y);
	System::Types::TRect __fastcall GetCaptionRect(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect);
	System::Types::TRect __fastcall GetCaptionRectIndent();
	Cxlookandfeelpainters::TcxGroupBoxCaptionPosition __fastcall GetCaptionPosition();
	int __fastcall GetCaptionRectLeftBound();
	int __fastcall GetCheckBoxCaptionIndent();
	System::Types::TRect __fastcall GetCheckBoxRect(Cxgraphics::TcxCanvas* ACanvas);
	System::Types::TRect __fastcall GetControlRect();
	TcxCustomGroupBox* __fastcall GetEdit();
	System::Types::TRect __fastcall GetFrameBounds();
	System::Types::TRect __fastcall GetCombinedCaptionRect();
	System::Types::TRect __fastcall GetBoundsForPanel();
	System::Types::TRect __fastcall GetThemeBackgroundRect(Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall DrawCheckBox(Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall DrawHorizontalTextCaption(Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall DrawVerticalTextCaption(Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall DrawFrame(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R);
	void __fastcall DrawNativeBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ACaptionRect);
	void __fastcall DrawNativeGroupBoxBackground(Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall DrawNativePanelBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ACaptionRect);
	void __fastcall DrawOffice11PanelBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R);
	void __fastcall DrawParentBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R);
	void __fastcall DrawUsualBackground(Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall InternalDrawBackground(Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall InternalDrawBackgroundByPainter(Cxgraphics::TcxCanvas* ACanvas);
	
protected:
	virtual System::Uitypes::TColor __fastcall CalculateBorderColor(Cxcontainer::TcxContainerStyle* AStyle, bool AEnabled, bool AIsDesigning, Cxcontainer::TcxContainer* AContainer = (Cxcontainer::TcxContainer*)(0x0));
	void __fastcall CalculateFocusRect();
	void __fastcall CalculateRectsForPanel(Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall CalculateRectsForStandardPainter(Cxgraphics::TcxCanvas* ACanvas, int AShadowWidth);
	void __fastcall CalculateRectsForSkinPainter(Cxgraphics::TcxCanvas* ACanvas, bool AHasNonClientArea);
	virtual void __fastcall DrawCaption(Cxgraphics::TcxCanvas* ACanvas);
	Cxlookandfeelpainters::TcxGroupBoxCaptionPosition __fastcall GetBiDiModeCaptionPosition();
	virtual Cxedit::TcxEditButtonViewInfoClass __fastcall GetButtonViewInfoClass();
	virtual void __fastcall InternalPaint(Cxgraphics::TcxCanvas* ACanvas);
	bool __fastcall IsPanelStyle();
	__property Cxlookandfeelpainters::TcxGroupBoxCaptionPosition CaptionPosition = {read=GetCaptionPosition, nodefault};
	__property System::Types::TRect CaptionRectIndent = {read=GetCaptionRectIndent};
	__property bool CheckBoxVisible = {read=FCheckBoxVisible, write=FCheckBoxVisible, nodefault};
	__property System::Types::TRect ControlRect = {read=GetControlRect};
	__property System::Types::TRect FocusRect = {read=FFocusRect, write=FFocusRect};
	
public:
	System::Types::TRect CaptionRect;
	bool IsDesigning;
	System::Classes::TAlignment ItemAlignment;
	System::Types::TRect TextRect;
	__fastcall virtual TcxGroupBoxViewInfo();
	__fastcall virtual ~TcxGroupBoxViewInfo();
	void __fastcall InvalidateCaption();
	__property Cxlookandfeelpainters::TcxCheckBoxState CheckBoxCheckState = {read=FCheckBoxCheckState, write=FCheckBoxCheckState, nodefault};
	__property TcxCustomGroupBox* Edit = {read=GetEdit};
	__property System::Types::TRect MouseFocusingRect = {read=FMouseFocusingRect, write=FMouseFocusingRect};
};


class PASCALIMPLEMENTATION TcxGroupBoxViewData : public Cxedit::TcxCustomEditViewData
{
	typedef Cxedit::TcxCustomEditViewData inherited;
	
private:
	Cxlookandfeelpainters::TcxGroupBoxCaptionPosition __fastcall GetCaptionPosition();
	TcxCustomGroupBox* __fastcall GetEdit();
	int __fastcall GetShadowWidth();
	bool __fastcall HasNonClientArea();
	void __fastcall CalculateRects(Cxgraphics::TcxCanvas* ACanvas, TcxGroupBoxViewInfo* AEditViewInfo);
	
protected:
	virtual Cxcontainer::TcxContainerState __fastcall GetContainerState(const System::Types::TRect &ABounds, const System::Types::TPoint &P, Cxcontainer::TcxMouseButton Button, System::Classes::TShiftState Shift, bool AIsMouseEvent);
	System::Types::TRect __fastcall GetContentOffsetsByPainter(TcxGroupBoxViewInfo* AViewInfo);
	bool __fastcall IsPanelStyle();
	__property Cxlookandfeelpainters::TcxGroupBoxCaptionPosition CaptionPosition = {read=GetCaptionPosition, nodefault};
	
public:
	virtual void __fastcall Calculate(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TPoint &P, Cxcontainer::TcxMouseButton Button, System::Classes::TShiftState Shift, Cxedit::TcxCustomEditViewInfo* AViewInfo, bool AIsMouseEvent);
	virtual void __fastcall CalculateButtonsViewInfo(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TPoint &P, Cxcontainer::TcxMouseButton Button, System::Classes::TShiftState Shift, Cxedit::TcxCustomEditViewInfo* AViewInfo, bool AIsMouseEvent);
	virtual void __fastcall DoRightToLeftConversion(Cxedit::TcxCustomEditViewInfo* AViewInfo, const System::Types::TRect &ABounds);
	virtual System::Types::TRect __fastcall GetBorderExtent();
	virtual System::Types::TRect __fastcall GetClientExtent(Cxgraphics::TcxCanvas* ACanvas, Cxedit::TcxCustomEditViewInfo* AViewInfo);
	virtual bool __fastcall HasShadow();
	__classmethod virtual bool __fastcall IsNativeStyle(Cxlookandfeels::TcxLookAndFeel* ALookAndFeel);
	__property TcxCustomGroupBox* Edit = {read=GetEdit};
public:
	/* TcxCustomEditViewData.Create */ inline __fastcall virtual TcxGroupBoxViewData(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditStyle* AStyle, bool AIsInplace) : Cxedit::TcxCustomEditViewData(AProperties, AStyle, AIsInplace) { }
	/* TcxCustomEditViewData.Destroy */ inline __fastcall virtual ~TcxGroupBoxViewData() { }
	
};


struct DECLSPEC_DRECORD TcxEditMetrics
{
public:
	int AutoHeightColumnWidthCorrection;
	int AutoHeightWidthCorrection;
	int ColumnWidthCorrection;
	int WidthCorrection;
	int ClientLeftBoundCorrection;
	int ClientWidthCorrection;
	int ColumnOffset;
	System::Types::TSize ButtonSize;
};


class PASCALIMPLEMENTATION TcxButtonGroupViewInfo : public TcxGroupBoxViewInfo
{
	typedef TcxGroupBoxViewInfo inherited;
	
protected:
	virtual void __fastcall DrawEditButton(Cxgraphics::TcxCanvas* ACanvas, int AButtonVisibleIndex);
	virtual void __fastcall DrawButtonCaption(Cxgraphics::TcxCanvas* ACanvas, TcxGroupBoxButtonViewInfo* AButtonViewInfo, const System::Types::TRect &AGlyphRect) = 0 ;
	virtual void __fastcall DrawButtonGlyph(Cxgraphics::TcxCanvas* ACanvas, TcxGroupBoxButtonViewInfo* AButtonViewInfo, const System::Types::TRect &AGlyphRect) = 0 ;
	virtual Cxedit::TcxEditButtonViewInfoClass __fastcall GetButtonViewInfoClass();
	virtual System::Types::TSize __fastcall GetGlyphSize();
	virtual bool __fastcall IsButtonGlyphTransparent(TcxGroupBoxButtonViewInfo* AButtonViewInfo) = 0 ;
	
public:
	System::Types::TRect CaptionExtent;
	System::Types::TSize GlyphSize;
public:
	/* TcxGroupBoxViewInfo.Create */ inline __fastcall virtual TcxButtonGroupViewInfo() : TcxGroupBoxViewInfo() { }
	/* TcxGroupBoxViewInfo.Destroy */ inline __fastcall virtual ~TcxButtonGroupViewInfo() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxButtonGroupButtonViewInfo : public TcxGroupBoxButtonViewInfo
{
	typedef TcxGroupBoxButtonViewInfo inherited;
	
protected:
	virtual Cxedit::TcxEditButtonFadingHelper* __fastcall CreateFadingHelper();
public:
	/* TcxEditButtonViewInfo.Destroy */ inline __fastcall virtual ~TcxButtonGroupButtonViewInfo() { }
	
public:
	/* TObject.Create */ inline __fastcall TcxButtonGroupButtonViewInfo() : TcxGroupBoxButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxButtonGroupButtonFadingHelper : public Cxedit::TcxEditButtonFadingHelper
{
	typedef Cxedit::TcxEditButtonFadingHelper inherited;
	
private:
	TcxButtonGroupViewInfo* __fastcall InternalGetEditViewInfo();
	TcxButtonGroupButtonViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DrawButton(Cxgraphics::TcxCanvas* ACanvas);
	virtual System::Types::TRect __fastcall GetButtonRect();
	virtual Cxgraphics::TcxBitmap32* __fastcall PrepareFadingImage(Cxedit::TcxEditButtonState AState);
	
public:
	__property TcxButtonGroupViewInfo* EditViewInfo = {read=InternalGetEditViewInfo};
	__property TcxButtonGroupButtonViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxEditButtonFadingHelper.Create */ inline __fastcall virtual TcxButtonGroupButtonFadingHelper(Cxedit::TcxEditButtonViewInfo* AViewInfo) : Cxedit::TcxEditButtonFadingHelper(AViewInfo) { }
	
public:
	/* TdxFadingObjectHelper.Destroy */ inline __fastcall virtual ~TcxButtonGroupButtonFadingHelper() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxButtonGroupViewData : public TcxGroupBoxViewData
{
	typedef TcxGroupBoxViewData inherited;
	
private:
	TcxCustomButtonGroupProperties* __fastcall GetProperties();
	
protected:
	virtual void __fastcall CalculateButtonPositions(Cxgraphics::TcxCanvas* ACanvas, Cxedit::TcxCustomEditViewInfo* AViewInfo);
	virtual void __fastcall CalculateButtonViewInfos(Cxedit::TcxCustomEditViewInfo* AViewInfo);
	virtual int __fastcall GetDrawTextFlags();
	virtual void __fastcall GetEditMetrics(bool AAutoHeight, Cxgraphics::TcxCanvas* ACanvas, /* out */ TcxEditMetrics &AMetrics);
	virtual System::Types::TRect __fastcall GetCaptionRectExtent();
	System::Classes::TLeftRight __fastcall GetBiDiModeDependentAlignment(System::Classes::TLeftRight AAlignment);
	virtual System::Types::TSize __fastcall GetButtonSize();
	
public:
	virtual void __fastcall Calculate(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TPoint &P, Cxcontainer::TcxMouseButton Button, System::Classes::TShiftState Shift, Cxedit::TcxCustomEditViewInfo* AViewInfo, bool AIsMouseEvent);
	virtual void __fastcall CalculateButtonsViewInfo(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TPoint &P, Cxcontainer::TcxMouseButton Button, System::Classes::TShiftState Shift, Cxedit::TcxCustomEditViewInfo* AViewInfo, bool AIsMouseEvent);
	virtual System::Types::TSize __fastcall GetEditConstantPartSize(Cxgraphics::TcxCanvas* ACanvas, const Cxedit::TcxEditSizeProperties &AEditSizeProperties, System::Types::TSize &MinContentSize, Cxedit::TcxCustomEditViewInfo* AViewInfo = (Cxedit::TcxCustomEditViewInfo*)(0x0));
	__classmethod virtual bool __fastcall IsButtonNativeStyle(Cxlookandfeels::TcxLookAndFeel* ALookAndFeel);
	__property TcxCustomButtonGroupProperties* Properties = {read=GetProperties};
public:
	/* TcxCustomEditViewData.Create */ inline __fastcall virtual TcxButtonGroupViewData(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditStyle* AStyle, bool AIsInplace) : TcxGroupBoxViewData(AProperties, AStyle, AIsInplace) { }
	/* TcxCustomEditViewData.Destroy */ inline __fastcall virtual ~TcxButtonGroupViewData() { }
	
};


typedef System::TMetaClass* TcxButtonGroupViewDataClass;

class PASCALIMPLEMENTATION TcxCustomGroupBoxProperties : public Cxedit::TcxCustomEditProperties
{
	typedef Cxedit::TcxCustomEditProperties inherited;
	
protected:
	__classmethod virtual Cxedit::TcxCustomEditViewDataClass __fastcall GetViewDataClass();
	virtual bool __fastcall HasDisplayValue();
	
public:
	virtual bool __fastcall CanCompareEditValue();
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	__classmethod virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
public:
	/* TcxCustomEditProperties.Create */ inline __fastcall virtual TcxCustomGroupBoxProperties(System::Classes::TPersistent* AOwner) : Cxedit::TcxCustomEditProperties(AOwner) { }
	/* TcxCustomEditProperties.Destroy */ inline __fastcall virtual ~TcxCustomGroupBoxProperties() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxButtonGroupItem : public Cxcheckbox::TcxCaptionItem
{
	typedef Cxcheckbox::TcxCaptionItem inherited;
	
private:
	bool FEnabled;
	bool __fastcall GetIsCollectionDestroying();
	void __fastcall SetEnabled(bool Value);
	
protected:
	void __fastcall DoChanged(System::Classes::TCollection* ACollection, Cxclasses::TcxCollectionOperation ACollectionOperation, int AIndex = 0xffffffff);
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=1};
	__property bool IsCollectionDestroying = {read=GetIsCollectionDestroying, nodefault};
	
public:
	__fastcall virtual TcxButtonGroupItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TcxButtonGroupItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxButtonGroupItems : public Cxcheckbox::TcxCaptionItems
{
	typedef Cxcheckbox::TcxCaptionItems inherited;
	
public:
	TcxButtonGroupItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	int FChangedItemIndex;
	Cxclasses::TcxCollectionOperation FChangedItemOperation;
	bool FItemChanged;
	HIDESBASE TcxButtonGroupItem* __fastcall GetItem(int Index);
	Cxedit::TcxCustomEditProperties* __fastcall GetOwningProperties();
	HIDESBASE void __fastcall SetItem(int Index, TcxButtonGroupItem* Value);
	
protected:
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	__property int ChangedItemIndex = {read=FChangedItemIndex, nodefault};
	__property Cxclasses::TcxCollectionOperation ChangedItemOperation = {read=FChangedItemOperation, nodefault};
	__property bool ItemChanged = {read=FItemChanged, nodefault};
	__property Cxedit::TcxCustomEditProperties* OwningProperties = {read=GetOwningProperties};
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall InternalNotify(TcxButtonGroupItem* AItem, int AItemIndex, Cxclasses::TcxCollectionOperation AItemOperation);
	__property TcxButtonGroupItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TcxOwnedInterfacedCollection.Destroy */ inline __fastcall virtual ~TcxButtonGroupItems() { }
	
public:
	/* TOwnedCollection.Create */ inline __fastcall TcxButtonGroupItems(System::Classes::TPersistent* AOwner, System::Classes::TCollectionItemClass ItemClass) : Cxcheckbox::TcxCaptionItems(AOwner, ItemClass) { }
	
};


typedef System::TMetaClass* TcxButtonGroupItemsClass;

class PASCALIMPLEMENTATION TcxCustomButtonGroupProperties : public TcxCustomGroupBoxProperties
{
	typedef TcxCustomGroupBoxProperties inherited;
	
private:
	int FColumns;
	TcxButtonGroupItems* FItems;
	System::Classes::TAlignment FItemAlignment;
	bool FShowEndEllipsis;
	bool FWordWrap;
	void __fastcall SetColumns(int Value);
	void __fastcall SetItems(TcxButtonGroupItems* Value);
	void __fastcall SetItemAlignment(System::Classes::TLeftRight Value);
	void __fastcall SetShowEndEllipsis(bool Value);
	void __fastcall SetWordWrap(bool Value);
	
protected:
	virtual void __fastcall DoAssign(Cxedit::TcxCustomEditProperties* AProperties);
	__classmethod virtual Cxedit::TcxCustomEditViewDataClass __fastcall GetViewDataClass();
	virtual TcxButtonGroupItems* __fastcall CreateItems();
	int __fastcall GetButtonsPerColumn();
	virtual int __fastcall GetColumnCount();
	__property System::Classes::TLeftRight ItemAlignment = {read=FItemAlignment, write=SetItemAlignment, default=0};
	
public:
	__fastcall virtual TcxCustomButtonGroupProperties(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TcxCustomButtonGroupProperties();
	virtual Cxedit::TcxCustomEditProperties* __fastcall CreatePreviewProperties();
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	virtual Cxedit::TcxEditSpecialFeatures __fastcall GetSpecialFeatures();
	virtual Cxedit::TcxEditSupportedOperations __fastcall GetSupportedOperations();
	__classmethod virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
	__property int Columns = {read=FColumns, write=SetColumns, default=1};
	__property TcxButtonGroupItems* Items = {read=FItems, write=SetItems};
	__property bool ShowEndEllipsis = {read=FShowEndEllipsis, write=SetShowEndEllipsis, default=0};
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, default=0};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxPanelStyle : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FActive;
	Vcl::Controls::TBorderWidth FBorderWidth;
	int FCaptionIndent;
	TcxCustomGroupBox* FEdit;
	TcxPanelOffice11BackgroundKind FOfficeBackgroundKind;
	bool FWordWrap;
	void __fastcall ScaleFactorChangeHandler(System::TObject* Sender, int M, int D, bool IsLoading);
	void __fastcall SetActive(bool AValue);
	void __fastcall SetBorderWidth(Vcl::Controls::TBorderWidth AValue);
	void __fastcall SetCaptionIndent(int AValue);
	void __fastcall SetOfficeBackgroundKind(TcxPanelOffice11BackgroundKind AValue);
	void __fastcall SetWordWrap(bool AValue);
	
protected:
	virtual void __fastcall ChangeScale(int M, int D);
	void __fastcall Update();
	__property TcxCustomGroupBox* Edit = {read=FEdit};
	
public:
	__fastcall virtual TcxPanelStyle(TcxCustomGroupBox* AOwner);
	__fastcall virtual ~TcxPanelStyle();
	virtual void __fastcall Assign(System::Classes::TPersistent* ASource);
	
__published:
	__property bool Active = {read=FActive, write=SetActive, default=0};
	__property Vcl::Controls::TBorderWidth BorderWidth = {read=FBorderWidth, write=SetBorderWidth, default=0};
	__property int CaptionIndent = {read=FCaptionIndent, write=SetCaptionIndent, default=2};
	__property TcxPanelOffice11BackgroundKind OfficeBackgroundKind = {read=FOfficeBackgroundKind, write=SetOfficeBackgroundKind, default=1};
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, default=0};
};

#pragma pack(pop)

typedef void __fastcall (__closure *TcxGroupBoxCustomDrawEvent)(TcxCustomGroupBox* Sender, bool &ADone);

typedef void __fastcall (__closure *TcxGroupBoxMeasureCaptionHeightEvent)(TcxCustomGroupBox* Sender, Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* const APainter, int &ACaptionHeight);

typedef void __fastcall (__closure *TcxGroupBoxCustomDrawElementEvent)(TcxCustomGroupBox* Sender, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ABounds, Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* const APainter, bool &ADone);

class PASCALIMPLEMENTATION TcxCustomGroupBox : public Cxedit::TcxCustomEdit
{
	typedef Cxedit::TcxCustomEdit inherited;
	
	
private:
	struct DECLSPEC_DRECORD TdxCachedRect
	{
	public:
		int Hash;
		System::Types::TRect Rect;
	};
	
	
	
private:
	TcxCaptionAlignment FAlignment;
	System::Uitypes::TColor FCaptionBkColor;
	bool FContentExtentsUpdating;
	bool FIsAccelCharHandling;
	TcxPanelStyle* FPanelStyle;
	bool FRedrawOnResize;
	TcxGroupBoxCustomDrawEvent FOnCustomDraw;
	TcxGroupBoxCustomDrawElementEvent FOnCustomDrawCaption;
	TcxGroupBoxCustomDrawElementEvent FOnCustomDrawContentBackground;
	TcxGroupBoxMeasureCaptionHeightEvent FOnMeasureCaptionHeight;
	Cxlookandfeelpainters::TcxCheckBoxState __fastcall GetCheckBoxCheckState();
	Cxlookandfeelpainters::TcxEditCheckState __fastcall GetCheckBoxViewState();
	void __fastcall SetCheckBoxCheckState(Cxlookandfeelpainters::TcxCheckBoxState AValue);
	void __fastcall SetCheckBoxViewState(Cxlookandfeelpainters::TcxEditCheckState AValue);
	System::Uitypes::TColor __fastcall GetCaptionBkColor();
	System::Uitypes::TColor __fastcall GetColor();
	Vcl::Graphics::TFont* __fastcall GetFont();
	HIDESBASE TcxGroupBoxViewInfo* __fastcall GetViewInfo();
	bool __fastcall IsSkinAvailable();
	void __fastcall UpdateCaption();
	void __fastcall UpdateContentExtents();
	int __fastcall GetHorizontalCaptionIndent();
	unsigned __fastcall GetPanelStyleCaptionDrawingFlags();
	int __fastcall GetVerticalCaptionIndent();
	void __fastcall SetAlignment(TcxCaptionAlignment Value);
	void __fastcall SetCaptionBkColor(System::Uitypes::TColor Value);
	HIDESBASE void __fastcall SetColor(System::Uitypes::TColor Value);
	HIDESBASE void __fastcall SetFont(Vcl::Graphics::TFont* Value);
	void __fastcall SetPanelStyle(TcxPanelStyle* AValue);
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMTextChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMUpdateNonClientArea(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMNCCalcSize(Winapi::Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	HIDESBASE MESSAGE void __fastcall WMPRINT(Winapi::Messages::TMessage &Message);
	
protected:
	Vcl::Graphics::TFont* FCaptionFont;
	TdxCachedRect FTextRect;
	virtual void __fastcall AdjustClientRect(System::Types::TRect &Rect);
	virtual void __fastcall CalculateViewInfo(const System::Types::TPoint &P, Cxcontainer::TcxMouseButton Button, System::Classes::TShiftState Shift, bool AIsMouseEvent)/* overload */;
	virtual void __fastcall CreateHandle();
	virtual TcxPanelStyle* __fastcall CreatePanelStyle();
	virtual void __fastcall CreateWindowHandle(const Vcl::Controls::TCreateParams &Params);
	virtual bool __fastcall DefaultParentColor();
	virtual bool __fastcall FluentDesignContainerControlCanBeOpaque();
	virtual bool __fastcall GetCheckBoxVisible();
	virtual System::Types::TRect __fastcall GetClientOffsets();
	virtual Cxcontrols::TcxControlBackgroundStyle __fastcall GetBackgroundStyle();
	virtual void __fastcall Initialize();
	virtual Cxcontainer::TcxContainerStyle* __fastcall InternalGetActiveStyle();
	virtual Cxcontainer::TcxContainerStyleValues __fastcall InternalGetNotPublishedStyleValues();
	virtual bool __fastcall NeedAccessibilityHelper();
	bool __fastcall PointInCheckBox(const System::Types::TPoint &APoint);
	virtual void __fastcall ScaleFactorChanged();
	virtual void __fastcall ShortRefreshContainerOnWindowPosChanging();
	virtual void __fastcall DoEditKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall DoEditKeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall UpdateCheckBoxState(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseLeave(Vcl::Controls::TControl* AControl);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint();
	virtual void __fastcall PaintNonClientArea(Cxgraphics::TcxCanvas* ACanvas);
	virtual bool __fastcall PtInCaller(const System::Types::TPoint &P);
	virtual bool __fastcall CanAutoSize();
	virtual bool __fastcall CanFocusOnClick()/* overload */;
	virtual bool __fastcall CanHaveTransparentBorder();
	virtual bool __fastcall InternalCanFocusOnClick();
	virtual bool __fastcall IsContainerClass();
	virtual bool __fastcall IsNativeBackground();
	bool __fastcall IsPanelStyle();
	virtual bool __fastcall NeedRedrawOnResize();
	virtual bool __fastcall FadingCanFadeBackground();
	virtual void __fastcall ContainerStyleChanged(System::TObject* Sender);
	virtual void __fastcall LookAndFeelChanged(Cxlookandfeels::TcxLookAndFeel* Sender, Cxlookandfeels::TcxLookAndFeelValues AChangedValues);
	DYNAMIC void __fastcall TextChanged();
	virtual bool __fastcall HasShadow();
	virtual System::Types::TRect __fastcall GetShadowBounds();
	virtual System::Types::TRect __fastcall GetShadowBoundsExtent();
	virtual bool __fastcall DoCustomDrawCaption(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* APainter);
	virtual bool __fastcall DoCustomDrawContentBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* APainter);
	void __fastcall DoMeasureCaptionHeight(Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* APainter, int &ACaptionHeight);
	void __fastcall AdjustCanvasFontSettings(Cxgraphics::TcxCanvas* ACanvas);
	bool __fastcall DoCustomDraw();
	unsigned __fastcall GetCaptionDrawingFlags();
	virtual bool __fastcall HasNonClientArea();
	virtual bool __fastcall IsNonClientAreaSupported();
	bool __fastcall IsVerticalText();
	void __fastcall CalculateCaptionFont();
	void __fastcall RedrawNonClientArea();
	void __fastcall ResetCache();
	virtual void __fastcall Toggle();
	__property Cxlookandfeelpainters::TcxCheckBoxState CheckBoxCheckState = {read=GetCheckBoxCheckState, write=SetCheckBoxCheckState, nodefault};
	__property Cxlookandfeelpainters::TcxEditCheckState CheckBoxViewState = {read=GetCheckBoxViewState, write=SetCheckBoxViewState, nodefault};
	__property Ctl3D;
	__property TcxPanelStyle* PanelStyle = {read=FPanelStyle, write=SetPanelStyle};
	__property ParentBackground = {default=1};
	__property bool RedrawOnResize = {read=FRedrawOnResize, write=FRedrawOnResize, default=1};
	__property TabStop = {default=0};
	__property TcxGroupBoxViewInfo* ViewInfo = {read=GetViewInfo};
	__property TcxGroupBoxCustomDrawEvent OnCustomDraw = {read=FOnCustomDraw, write=FOnCustomDraw};
	__property TcxGroupBoxCustomDrawElementEvent OnCustomDrawCaption = {read=FOnCustomDrawCaption, write=FOnCustomDrawCaption};
	__property TcxGroupBoxCustomDrawElementEvent OnCustomDrawContentBackground = {read=FOnCustomDrawContentBackground, write=FOnCustomDrawContentBackground};
	__property TcxGroupBoxMeasureCaptionHeightEvent OnMeasureCaptionHeight = {read=FOnMeasureCaptionHeight, write=FOnMeasureCaptionHeight};
	
public:
	__fastcall virtual TcxCustomGroupBox(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TcxCustomGroupBox();
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	TcxCaptionAlignment __fastcall GetBiDiModeDependentAlignment();
	__property TcxCaptionAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property Transparent = {default=0};
	
__published:
	__property System::Uitypes::TColor CaptionBkColor = {read=GetCaptionBkColor, write=SetCaptionBkColor, stored=false, nodefault};
	__property System::Uitypes::TColor Color = {read=GetColor, write=SetColor, stored=false, nodefault};
	__property Vcl::Graphics::TFont* Font = {read=GetFont, write=SetFont, stored=false};
	__property LookAndFeel = {stored=false};
	__property StyleFocused = {stored=false};
	__property StyleHot = {stored=false};
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxCustomGroupBox(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Cxedit::TcxCustomEdit(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomGroupBox(HWND ParentWindow) : Cxedit::TcxCustomEdit(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  CalculateViewInfo(bool AIsMouseEvent){ Cxedit::TcxCustomEdit::CalculateViewInfo(AIsMouseEvent); }
	inline void __fastcall  CalculateViewInfo(Cxedit::TcxCustomEditViewInfo* AViewInfo, const System::Types::TPoint &P, Cxcontainer::TcxMouseButton Button, System::Classes::TShiftState Shift, bool AIsMouseEvent){ Cxedit::TcxCustomEdit::CalculateViewInfo(AViewInfo, P, Button, Shift, AIsMouseEvent); }
	inline bool __fastcall  CanFocusOnClick(int X, int Y){ return Cxcontrols::TcxControl::CanFocusOnClick(X, Y); }
	
};


class PASCALIMPLEMENTATION TcxGroupBox : public TcxCustomGroupBox
{
	typedef TcxCustomGroupBox inherited;
	
__published:
	__property Alignment = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Caption = {default=0};
	__property Constraints;
	__property Ctl3D;
	__property UseDockManager = {default=0};
	__property DockSite = {default=0};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property PanelStyle;
	__property ParentBackground = {default=1};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property RedrawOnResize = {default=1};
	__property ShowHint;
	__property Style;
	__property StyleDisabled;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Transparent = {default=0};
	__property Visible = {default=1};
	__property OnClick;
	__property OnContextPopup;
	__property OnCustomDraw;
	__property OnCustomDrawCaption;
	__property OnCustomDrawContentBackground;
	__property OnDblClick;
	__property OnDockDrop;
	__property OnDockOver;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGetSiteInfo;
	__property OnMeasureCaptionHeight;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnResize;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnUnDock;
public:
	/* TcxCustomGroupBox.Create */ inline __fastcall virtual TcxGroupBox(System::Classes::TComponent* AOwner)/* overload */ : TcxCustomGroupBox(AOwner) { }
	/* TcxCustomGroupBox.Destroy */ inline __fastcall virtual ~TcxGroupBox() { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxGroupBox(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : TcxCustomGroupBox(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxGroupBox(HWND ParentWindow) : TcxCustomGroupBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxCustomButtonGroup : public TcxCustomGroupBox
{
	typedef TcxCustomGroupBox inherited;
	
private:
	System::Classes::TList* FButtons;
	bool FIsButtonsUpdating;
	void __fastcall DoButtonDragDrop(System::TObject* Sender, System::TObject* Source, int X, int Y);
	void __fastcall DoButtonDragOver(System::TObject* Sender, System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	void __fastcall DoButtonKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall DoButtonKeyPress(System::TObject* Sender, System::WideChar &Key);
	void __fastcall DoButtonKeyUp(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall DoButtonMouseDown(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall DoButtonMouseMove(System::TObject* Sender, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall DoButtonMouseUp(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall DoButtonMouseWheel(System::TObject* Sender, System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos, bool &Handled);
	TcxCustomButtonGroupProperties* __fastcall GetProperties();
	HIDESBASE TcxCustomButtonGroupProperties* __fastcall GetActiveProperties();
	HIDESBASE void __fastcall SetProperties(TcxCustomButtonGroupProperties* Value);
	
protected:
	virtual void __fastcall CreateHandle();
	virtual bool __fastcall CanAutoSize();
	virtual void __fastcall ContainerStyleChanged(System::TObject* Sender);
	DYNAMIC void __fastcall CursorChanged();
	virtual void __fastcall DoEditKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall EnabledChanged();
	virtual void __fastcall Initialize();
	virtual bool __fastcall IsButtonDC(NativeUInt ADC);
	virtual bool __fastcall IsContainerClass();
	virtual bool __fastcall IsNonClientAreaSupported();
	virtual void __fastcall PropertiesChanged(System::TObject* Sender);
	virtual bool __fastcall DoRefreshContainer(const System::Types::TPoint &P, Cxcontainer::TcxMouseButton Button, System::Classes::TShiftState Shift, bool AIsMouseEvent);
	virtual void __fastcall ArrangeButtons();
	virtual NativeUInt __fastcall GetButtonDC(int AButtonIndex) = 0 ;
	int __fastcall GetButtonIndexAt(const System::Types::TPoint &P);
	virtual Vcl::Controls::TWinControl* __fastcall GetButtonInstance() = 0 ;
	int __fastcall GetFocusedButtonIndex();
	virtual void __fastcall InitButtonInstance(Vcl::Controls::TWinControl* AButton);
	virtual void __fastcall InternalUpdateButtons();
	virtual bool __fastcall NeedUpdateWindowRegion();
	virtual void __fastcall SetButtonCount(int Value);
	virtual void __fastcall SynchronizeButtonsStyle();
	void __fastcall UpdateButtons();
	__property System::Classes::TList* InternalButtons = {read=FButtons};
	__property TabStop = {default=1};
	
public:
	__fastcall virtual ~TcxCustomButtonGroup();
	virtual void __fastcall ActivateByMouse(System::Classes::TShiftState Shift, int X, int Y, Cxedit::TcxCustomEditData* &AEditData);
	DYNAMIC bool __fastcall Focused();
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	DYNAMIC void __fastcall GetTabOrderList(System::Classes::TList* List);
	bool __fastcall IsButtonNativeStyle();
	__property AutoSize = {default=0};
	__property TcxCustomButtonGroupProperties* ActiveProperties = {read=GetActiveProperties};
	__property TcxCustomButtonGroupProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxCustomGroupBox.Create */ inline __fastcall virtual TcxCustomButtonGroup(System::Classes::TComponent* AOwner)/* overload */ : TcxCustomGroupBox(AOwner) { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxCustomButtonGroup(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : TcxCustomGroupBox(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomButtonGroup(HWND ParentWindow) : TcxCustomGroupBox(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool cxGroupBox_SupportNonClientArea;
}	/* namespace Cxgroupbox */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXGROUPBOX)
using namespace Cxgroupbox;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxgroupboxHPP
