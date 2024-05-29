// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxLayoutLookAndFeels.pas' rev: 35.00 (Windows)

#ifndef DxlayoutlookandfeelsHPP
#define DxlayoutlookandfeelsHPP

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
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Contnrs.hpp>
#include <dxCore.hpp>
#include <cxGeometry.hpp>
#include <cxGraphics.hpp>
#include <cxClasses.hpp>
#include <cxLookAndFeels.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <dxLayoutCommon.hpp>
#include <dxCoreGraphics.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxlayoutlookandfeels
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IdxLayoutLookAndFeelUser;
typedef System::DelphiInterface<IdxLayoutLookAndFeelUser> _di_IdxLayoutLookAndFeelUser;
class DELPHICLASS TdxCustomLayoutLookAndFeelPart;
class DELPHICLASS TdxLayoutLookAndFeelCaptionOptions;
class DELPHICLASS TdxLayoutLookAndFeelPadding;
class DELPHICLASS TdxCustomLayoutLookAndFeelOptions;
class DELPHICLASS TdxLayoutLookAndFeelGroupOptions;
class DELPHICLASS TdxLayoutLookAndFeelItemOptions;
class DELPHICLASS TdxLayoutLookAndFeelOffsets;
class DELPHICLASS TdxCustomLayoutLookAndFeel;
class DELPHICLASS TdxLayoutStandardLookAndFeelGroupCaptionOptions;
class DELPHICLASS TdxLayoutStandardLookAndFeelGroupOptions;
class DELPHICLASS TdxLayoutStandardLookAndFeelItemCaptionOptions;
class DELPHICLASS TdxLayoutStandardLookAndFeelItemOptions;
class DELPHICLASS TdxLayoutStandardLookAndFeel;
class DELPHICLASS TdxLayoutOfficeLookAndFeel;
class DELPHICLASS TdxLayoutWebLookAndFeelGroupCaptionOptions;
class DELPHICLASS TdxLayoutWebLookAndFeelGroupOptions;
class DELPHICLASS TdxLayoutWebLookAndFeelItemCaptionOptions;
class DELPHICLASS TdxLayoutWebLookAndFeelItemOptions;
class DELPHICLASS TdxLayoutWebLookAndFeel;
class DELPHICLASS TdxLayoutCxLookAndFeelGroupOptions;
class DELPHICLASS TdxLayoutCxLookAndFeelGroupCaptionOptions;
class DELPHICLASS TdxLayoutCxLookAndFeelItemOptions;
class DELPHICLASS TdxLayoutCxLookAndFeelItemCaptionOptions;
class DELPHICLASS TdxLayoutCxLookAndFeel;
class DELPHICLASS TdxLayoutSkinLookAndFeel;
class DELPHICLASS TdxLayoutLookAndFeelList;
class DELPHICLASS TdxLayoutLookAndFeelDefs;
struct TdxLayoutTextMetric;
class DELPHICLASS TdxLayoutTextMetrics;
__interface DELPHIINTERFACE IdxLayoutLookAndFeelsDesigner;
typedef System::DelphiInterface<IdxLayoutLookAndFeelsDesigner> _di_IdxLayoutLookAndFeelsDesigner;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{651F19FE-CBCB-4C16-8615-BBD57ED7255A}") IdxLayoutLookAndFeelUser  : public System::IInterface 
{
	virtual void __stdcall BeginLookAndFeelDestroying() = 0 ;
	virtual void __stdcall EndLookAndFeelDestroying() = 0 ;
	virtual void __stdcall LookAndFeelChanged() = 0 ;
	virtual void __stdcall LookAndFeelDestroyed() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomLayoutLookAndFeelPart : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	int FLockCount;
	TdxCustomLayoutLookAndFeel* FLookAndFeel;
	
protected:
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	void __fastcall CancelUpdate();
	virtual void __fastcall Changed();
	void __fastcall ChangeScale(int M, int D);
	virtual void __fastcall ChangeScaleCore(int M, int D);
	__property TdxCustomLayoutLookAndFeel* LookAndFeel = {read=FLookAndFeel};
	
public:
	__fastcall virtual TdxCustomLayoutLookAndFeelPart(TdxCustomLayoutLookAndFeel* ALookAndFeel);
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxCustomLayoutLookAndFeelPart() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TdxLayoutHotTrackStyle : unsigned char { htsHandPoint, htsUnderlineCold, htsUnderlineHot };

typedef System::Set<TdxLayoutHotTrackStyle, TdxLayoutHotTrackStyle::htsHandPoint, TdxLayoutHotTrackStyle::htsUnderlineHot> TdxLayoutHotTrackStyles;

typedef System::TMetaClass* TdxLayoutLookAndFeelCaptionOptionsClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutLookAndFeelCaptionOptions : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	Vcl::Graphics::TFont* FFont;
	bool FHotTrack;
	TdxLayoutHotTrackStyles FHotTrackStyles;
	TdxCustomLayoutLookAndFeelOptions* FOptions;
	Vcl::Graphics::TFont* FScaledFont;
	System::Uitypes::TColor FTextColor;
	System::Uitypes::TColor FTextDisabledColor;
	System::Uitypes::TColor FTextHotColor;
	bool FUseDefaultFont;
	Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	void __fastcall SetFont(Vcl::Graphics::TFont* Value);
	void __fastcall SetHotTrack(bool Value);
	void __fastcall SetHotTrackStyles(TdxLayoutHotTrackStyles Value);
	void __fastcall SetTextColor(System::Uitypes::TColor Value);
	void __fastcall SetTextDisabledColor(System::Uitypes::TColor Value);
	void __fastcall SetTextHotColor(System::Uitypes::TColor Value);
	void __fastcall SetUseDefaultFont(bool Value);
	void __fastcall FontChanged(System::TObject* Sender);
	bool __fastcall IsFontStored();
	
protected:
	virtual void __fastcall Changed();
	virtual void __fastcall ChangeScale(int M, int D);
	virtual System::Uitypes::TColor __fastcall GetDefaultTextColor() = 0 ;
	virtual System::Uitypes::TColor __fastcall GetDefaultTextDisabledColor();
	virtual System::Uitypes::TColor __fastcall GetDefaultTextHotColor();
	virtual Vcl::Graphics::TFont* __fastcall GetDefaultFont(System::Classes::TComponent* AContainer);
	__property TdxCustomLayoutLookAndFeelOptions* Options = {read=FOptions};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=GetScaleFactor};
	
public:
	__fastcall virtual TdxLayoutLookAndFeelCaptionOptions(TdxCustomLayoutLookAndFeelOptions* AOptions);
	__fastcall virtual ~TdxLayoutLookAndFeelCaptionOptions();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual System::Uitypes::TColor __fastcall GetTextColor();
	virtual System::Uitypes::TColor __fastcall GetTextDisabledColor();
	virtual System::Uitypes::TColor __fastcall GetTextHotColor();
	virtual Vcl::Graphics::TFont* __fastcall GetFont(System::Classes::TComponent* AContainer);
	
__published:
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont, stored=IsFontStored};
	__property bool HotTrack = {read=FHotTrack, write=SetHotTrack, default=0};
	__property TdxLayoutHotTrackStyles HotTrackStyles = {read=FHotTrackStyles, write=SetHotTrackStyles, default=5};
	__property System::Uitypes::TColor TextColor = {read=FTextColor, write=SetTextColor, default=536870912};
	__property System::Uitypes::TColor TextDisabledColor = {read=FTextDisabledColor, write=SetTextDisabledColor, default=536870912};
	__property System::Uitypes::TColor TextHotColor = {read=FTextHotColor, write=SetTextHotColor, default=536870912};
	__property bool UseDefaultFont = {read=FUseDefaultFont, write=SetUseDefaultFont, default=1};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TdxLayoutPaddingAssignedValue : unsigned char { lpavBottom, lpavLeft, lpavRight, lpavTop };

typedef System::Set<TdxLayoutPaddingAssignedValue, TdxLayoutPaddingAssignedValue::lpavBottom, TdxLayoutPaddingAssignedValue::lpavTop> TdxLayoutPaddingAssignedValues;

typedef System::TMetaClass* TdxLayoutLookAndFeelPaddingClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutLookAndFeelPadding : public TdxCustomLayoutLookAndFeelPart
{
	typedef TdxCustomLayoutLookAndFeelPart inherited;
	
private:
	TdxLayoutPaddingAssignedValues FAssignedValues;
	int FBottom;
	int FLeft;
	int FRight;
	int FTop;
	Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	int __fastcall GetValue(int Index);
	bool __fastcall IsValueStored(int Index);
	void __fastcall SetAssignedValues(TdxLayoutPaddingAssignedValues Value);
	
protected:
	virtual void __fastcall ChangeScaleCore(int M, int D);
	virtual int __fastcall GetDefaultValue(int Index);
	virtual void __fastcall SetValue(int Index, int Value);
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=GetScaleFactor};
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	System::Types::TRect __fastcall GetPaddingRect()/* overload */;
	System::Types::TRect __fastcall GetPaddingRect(Cxgeometry::TdxScaleFactor* ATargetScaleFactor)/* overload */;
	
__published:
	__property TdxLayoutPaddingAssignedValues AssignedValues = {read=FAssignedValues, write=SetAssignedValues, default=0};
	__property int Bottom = {read=GetValue, write=SetValue, stored=IsValueStored, index=1, nodefault};
	__property int Left = {read=GetValue, write=SetValue, stored=IsValueStored, index=2, nodefault};
	__property int Right = {read=GetValue, write=SetValue, stored=IsValueStored, index=3, nodefault};
	__property int Top = {read=GetValue, write=SetValue, stored=IsValueStored, index=4, nodefault};
public:
	/* TdxCustomLayoutLookAndFeelPart.Create */ inline __fastcall virtual TdxLayoutLookAndFeelPadding(TdxCustomLayoutLookAndFeel* ALookAndFeel) : TdxCustomLayoutLookAndFeelPart(ALookAndFeel) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxLayoutLookAndFeelPadding() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomLayoutLookAndFeelOptions : public TdxCustomLayoutLookAndFeelPart
{
	typedef TdxCustomLayoutLookAndFeelPart inherited;
	
private:
	TdxLayoutLookAndFeelCaptionOptions* FCaptionOptions;
	TdxLayoutLookAndFeelPadding* FPadding;
	void __fastcall SetCaptionOptions(TdxLayoutLookAndFeelCaptionOptions* Value);
	void __fastcall SetPadding(TdxLayoutLookAndFeelPadding* const Value);
	
protected:
	virtual void __fastcall ChangeScaleCore(int M, int D);
	virtual TdxLayoutLookAndFeelCaptionOptionsClass __fastcall GetCaptionOptionsClass();
	virtual TdxLayoutLookAndFeelPaddingClass __fastcall GetPaddingClass();
	
public:
	__fastcall virtual TdxCustomLayoutLookAndFeelOptions(TdxCustomLayoutLookAndFeel* ALookAndFeel);
	__fastcall virtual ~TdxCustomLayoutLookAndFeelOptions();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property TdxLayoutLookAndFeelCaptionOptions* CaptionOptions = {read=FCaptionOptions, write=SetCaptionOptions};
	__property TdxLayoutLookAndFeelPadding* Padding = {read=FPadding, write=SetPadding};
};

#pragma pack(pop)

typedef System::TMetaClass* TdxLayoutLookAndFeelGroupOptionsClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutLookAndFeelGroupOptions : public TdxCustomLayoutLookAndFeelOptions
{
	typedef TdxCustomLayoutLookAndFeelOptions inherited;
	
private:
	System::Uitypes::TColor FColor;
	unsigned FSpaceBetweenButtons;
	void __fastcall SetColor(System::Uitypes::TColor Value);
	void __fastcall SetSpaceBetweenButtons(unsigned AValue);
	
protected:
	virtual void __fastcall ChangeScaleCore(int M, int D);
	virtual System::Uitypes::TColor __fastcall GetDefaultColor() = 0 ;
	
public:
	__fastcall virtual TdxLayoutLookAndFeelGroupOptions(TdxCustomLayoutLookAndFeel* ALookAndFeel);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual System::Uitypes::TColor __fastcall GetColor();
	
__published:
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=536870912};
	__property unsigned SpaceBetweenButtons = {read=FSpaceBetweenButtons, write=SetSpaceBetweenButtons, default=0};
public:
	/* TdxCustomLayoutLookAndFeelOptions.Destroy */ inline __fastcall virtual ~TdxLayoutLookAndFeelGroupOptions() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TdxLayoutBorderStyle : unsigned char { lbsNone, lbsSingle, lbsFlat, lbsStandard };

typedef System::TMetaClass* TdxLayoutLookAndFeelItemOptionsClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutLookAndFeelItemOptions : public TdxCustomLayoutLookAndFeelOptions
{
	typedef TdxCustomLayoutLookAndFeelOptions inherited;
	
private:
	System::Uitypes::TColor FControlBorderColor;
	TdxLayoutBorderStyle FControlBorderStyle;
	void __fastcall SetControlBorderColor(System::Uitypes::TColor Value);
	void __fastcall SetControlBorderStyle(TdxLayoutBorderStyle Value);
	
protected:
	virtual System::Uitypes::TColor __fastcall GetDefaultControlBorderColor();
	
public:
	__fastcall virtual TdxLayoutLookAndFeelItemOptions(TdxCustomLayoutLookAndFeel* ALookAndFeel);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual System::Uitypes::TColor __fastcall GetControlBorderColor();
	
__published:
	__property System::Uitypes::TColor ControlBorderColor = {read=FControlBorderColor, write=SetControlBorderColor, default=536870912};
	__property TdxLayoutBorderStyle ControlBorderStyle = {read=FControlBorderStyle, write=SetControlBorderStyle, default=3};
public:
	/* TdxCustomLayoutLookAndFeelOptions.Destroy */ inline __fastcall virtual ~TdxLayoutLookAndFeelItemOptions() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TdxLayoutLookAndFeelOffsetsClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutLookAndFeelOffsets : public TdxCustomLayoutLookAndFeelPart
{
	typedef TdxCustomLayoutLookAndFeelPart inherited;
	
private:
	static const System::Int8 FValuesCount = System::Int8(0x9);
	
	int FControlOffsetHorz;
	int FControlOffsetVert;
	int FItemOffset;
	int FItemsAreaOffsetHorz;
	int FItemsAreaOffsetVert;
	int FRootItemsAreaOffsetHorz;
	int FRootItemsAreaOffsetVert;
	int FTabSheetClientOffsetHorz;
	int FTabSheetClientOffsetVert;
	
protected:
	virtual void __fastcall ChangeScaleCore(int M, int D);
	virtual int __fastcall GetDefaultValue(int Index);
	virtual int __fastcall GetValue(int Index);
	bool __fastcall IsValueStored(int Index);
	virtual void __fastcall SetValue(int Index, int Value);
	
public:
	__fastcall virtual TdxLayoutLookAndFeelOffsets(TdxCustomLayoutLookAndFeel* ALookAndFeel);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property int ControlOffsetHorz = {read=GetValue, write=SetValue, stored=IsValueStored, index=0, nodefault};
	__property int ControlOffsetVert = {read=GetValue, write=SetValue, stored=IsValueStored, index=1, nodefault};
	__property int ItemOffset = {read=GetValue, write=SetValue, stored=IsValueStored, index=2, nodefault};
	__property int ItemsAreaOffsetHorz = {read=GetValue, write=SetValue, stored=IsValueStored, index=3, nodefault};
	__property int ItemsAreaOffsetVert = {read=GetValue, write=SetValue, stored=IsValueStored, index=4, nodefault};
	__property int RootItemsAreaOffsetHorz = {read=GetValue, write=SetValue, stored=IsValueStored, index=5, nodefault};
	__property int RootItemsAreaOffsetVert = {read=GetValue, write=SetValue, stored=IsValueStored, index=6, nodefault};
	__property int TabSheetContentOffsetHorz = {read=GetValue, write=SetValue, stored=IsValueStored, index=7, nodefault};
	__property int TabSheetContentOffsetVert = {read=GetValue, write=SetValue, stored=IsValueStored, index=8, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxLayoutLookAndFeelOffsets() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TdxCustomLayoutLookAndFeelClass;

class PASCALIMPLEMENTATION TdxCustomLayoutLookAndFeel : public Cxclasses::TcxScalableComponent
{
	typedef Cxclasses::TcxScalableComponent inherited;
	
private:
	TdxLayoutLookAndFeelGroupOptions* FGroupOptions;
	TdxLayoutLookAndFeelItemOptions* FItemOptions;
	TdxLayoutLookAndFeelList* FList;
	int FLockCount;
	bool FNotifyingAboutDestroying;
	TdxLayoutLookAndFeelOffsets* FOffsets;
	System::Classes::TList* FUsers;
	Cxlookandfeels::TcxLookAndFeel* FLookAndFeel;
	HIDESBASE bool __fastcall GetIsDesigning();
	_di_IdxLayoutLookAndFeelUser __fastcall GetUser(int Index);
	int __fastcall GetUserCount();
	void __fastcall SetGroupOptions(TdxLayoutLookAndFeelGroupOptions* Value);
	void __fastcall SetItemOptions(TdxLayoutLookAndFeelItemOptions* Value);
	void __fastcall SetLookAndFeel(Cxlookandfeels::TcxLookAndFeel* Value);
	void __fastcall SetOffsets(TdxLayoutLookAndFeelOffsets* Value);
	
protected:
	virtual void __fastcall ChangeScale(int M, int D);
	virtual void __fastcall SetName(const System::Classes::TComponentName Value);
	DYNAMIC void __fastcall SetParentComponent(System::Classes::TComponent* Value);
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	void __fastcall CancelUpdate();
	virtual void __fastcall Changed();
	__classmethod virtual System::UnicodeString __fastcall GetBaseName();
	void __fastcall GetTextMetric(Vcl::Graphics::TFont* AFont, tagTEXTMETRICW &ATextMetric);
	virtual int __fastcall GetFrameWidth(Dxlayoutcommon::TdxLayoutSide ASide, Dxlayoutcommon::TdxLayoutSide ACaptionSide);
	Vcl::Graphics::TFont* __fastcall GetGroupCaptionFont(System::Classes::TComponent* AContainer);
	Vcl::Graphics::TFont* __fastcall GetItemCaptionFont(System::Classes::TComponent* AContainer);
	virtual void __fastcall InitLookAndFeel();
	void __fastcall NotifyUsersAboutDestroying();
	virtual bool __fastcall CanDrawSpecificBackground();
	virtual bool __fastcall DoesCxLookAndFeelHavePriority();
	virtual bool __fastcall IsGroupTransparent(System::TObject* AViewInfo);
	virtual bool __fastcall IsNativeStyle();
	virtual bool __fastcall IsSkinPainterUsed();
	virtual TdxLayoutLookAndFeelGroupOptionsClass __fastcall GetGroupOptionsClass();
	virtual TdxLayoutLookAndFeelItemOptionsClass __fastcall GetItemOptionsClass();
	virtual TdxLayoutLookAndFeelOffsetsClass __fastcall GetOffsetsClass();
	__property bool IsDesigning = {read=GetIsDesigning, nodefault};
	__property Cxlookandfeels::TcxLookAndFeel* LookAndFeel = {read=FLookAndFeel, write=SetLookAndFeel};
	__property int UserCount = {read=GetUserCount, nodefault};
	__property _di_IdxLayoutLookAndFeelUser Users[int Index] = {read=GetUser};
	
public:
	__fastcall virtual TdxCustomLayoutLookAndFeel(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxCustomLayoutLookAndFeel();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	HIDESBASE void __fastcall AssignTo(TdxCustomLayoutLookAndFeel* &ALookAndFeel, int ATargetPPI = 0x0)/* overload */;
	DYNAMIC System::Classes::TComponent* __fastcall GetParentComponent();
	DYNAMIC bool __fastcall HasParent();
	virtual bool __fastcall NeedDoubleBuffered();
	virtual bool __fastcall NeedRedrawOnResize();
	virtual void __fastcall InitializeSubControlCxLookAndFeel(Cxlookandfeels::TcxLookAndFeel* AcxLookAndFeel);
	void __fastcall AddUser(System::Classes::TComponent* AUser);
	void __fastcall RemoveUser(System::Classes::TComponent* AUser);
	__classmethod virtual System::UnicodeString __fastcall Description();
	int __fastcall DLUToPixels(Vcl::Graphics::TFont* AFont, int ADLU);
	int __fastcall HDLUToPixels(Vcl::Graphics::TFont* AFont, int ADLU);
	int __fastcall VDLUToPixels(Vcl::Graphics::TFont* AFont, int ADLU);
	virtual System::TClass __fastcall GetGroupPainterClass() = 0 ;
	virtual System::TClass __fastcall GetBasicItemPainterClass();
	virtual System::TClass __fastcall GetEmptySpaceItemPainterClass();
	virtual System::TClass __fastcall GetItemPainterClass();
	virtual System::TClass __fastcall GetLabeledItemPainterClass();
	virtual System::TClass __fastcall GetSeparatorItemPainterClass();
	virtual System::TClass __fastcall GetSplitterItemPainterClass();
	virtual void __fastcall CorrectGroupButtonsAreaBounds(System::TObject* AViewInfo, System::Types::TRect &ABounds);
	virtual void __fastcall CorrectGroupCaptionAreaBounds(System::TObject* AViewInfo, System::Types::TRect &ABounds);
	virtual void __fastcall CorrectGroupMinVisibleSize(System::TObject* AViewInfo, int &ASize, Dxcore::TdxOrientation AOrientation);
	virtual void __fastcall CorrectGroupMinVisibleHeight(System::TObject* AViewInfo, int &AHeight);
	virtual void __fastcall CorrectGroupMinVisibleWidth(System::TObject* AViewInfo, int &AWidth);
	virtual void __fastcall CorrectGroupCaptionFont(System::TObject* AViewInfo, Vcl::Graphics::TFont* AFont);
	virtual void __fastcall CorrectGroupCaptionHeight(System::TObject* AViewInfo, int &AHeight);
	virtual void __fastcall CorrectGroupCaptionWidth(System::TObject* AViewInfo, int &AWidth);
	virtual int __fastcall GetElementOffsetHorz(System::Classes::TComponent* AContainer);
	virtual int __fastcall GetElementOffsetVert(System::Classes::TComponent* AContainer);
	virtual int __fastcall GetGroupButtonsOffset(System::TObject* AViewInfo);
	virtual int __fastcall GetGroupBorderOffset(System::Classes::TComponent* AContainer, Dxlayoutcommon::TdxLayoutSide ASide, Dxlayoutcommon::TdxLayoutSide ACaptionSide);
	virtual int __fastcall GetTabControlBorderOffset(System::Classes::TComponent* AContainer, Dxlayoutcommon::TdxLayoutSide ASide, Dxlayoutcommon::TdxLayoutSide ACaptionSide);
	virtual int __fastcall GetGroupBorderWidth(System::Classes::TComponent* AContainer, Dxlayoutcommon::TdxLayoutSide ASide, Dxlayoutcommon::TdxLayoutSide ACaptionSide, bool AHasCaption, bool AIsExpanded);
	virtual int __fastcall GetGroupCaptionOffset(System::TObject* AViewInfo);
	virtual System::Types::TRect __fastcall GetGroupCaptionContentOffsets(System::TObject* AViewInfo);
	virtual System::Types::TRect __fastcall GetGroupFrameBounds(System::TObject* AViewInfo);
	virtual System::Types::TRect __fastcall GetGroupRestSpaceBounds(System::TObject* AViewInfo);
	virtual System::Classes::TAlignment __fastcall GetGroupCaptionAlignHorz(System::TObject* AViewInfo);
	virtual Dxlayoutcommon::TdxAlignmentVert __fastcall GetGroupCaptionAlignVert(System::TObject* AViewInfo);
	virtual int __fastcall GetItemControlBorderWidth(Dxlayoutcommon::TdxLayoutSide ASide);
	virtual int __fastcall GetItemOffset(System::Classes::TComponent* AContainer);
	virtual int __fastcall GetItemsAreaOffsetHorz(System::Classes::TComponent* AContainer);
	virtual int __fastcall GetItemsAreaOffsetVert(System::Classes::TComponent* AContainer);
	virtual int __fastcall GetRootItemsAreaOffsetHorz(System::Classes::TComponent* AContainer);
	virtual int __fastcall GetRootItemsAreaOffsetVert(System::Classes::TComponent* AContainer);
	virtual int __fastcall GetTabSheetContentOffsetHorz(System::Classes::TComponent* AContainer);
	virtual int __fastcall GetTabSheetContentOffsetVert(System::Classes::TComponent* AContainer);
	virtual int __fastcall GetSeparatorItemMinWidth();
	virtual System::Types::TSize __fastcall GetSplitterItemMinSize();
	virtual bool __fastcall IsButtonHotTrack();
	virtual void __fastcall DrawLayoutControlBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R);
	virtual void __fastcall DrawItemControlBorder(Cxgraphics::TcxCanvas* ACanvas, TdxLayoutLookAndFeelItemOptions* AItemOptions, const System::Types::TRect &R);
	virtual System::Uitypes::TColor __fastcall GetEmptyAreaColor();
	virtual System::Uitypes::TColor __fastcall GetGroupCaptionColor(System::TObject* AViewInfo);
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall GetGroupButtonColorPalette(Cxlookandfeelpainters::TcxButtonState AState);
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall GetItemCaptionColorPalette();
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall GetTabbedGroupCaptionColorPalette(bool AIsActive);
	__property int FrameWidths[Dxlayoutcommon::TdxLayoutSide ASide][Dxlayoutcommon::TdxLayoutSide ACaptionSide] = {read=GetFrameWidth};
	__property int ItemControlBorderWidths[Dxlayoutcommon::TdxLayoutSide ASide] = {read=GetItemControlBorderWidth};
	__property TdxLayoutLookAndFeelList* List = {read=FList};
	
__published:
	__property TdxLayoutLookAndFeelGroupOptions* GroupOptions = {read=FGroupOptions, write=SetGroupOptions};
	__property TdxLayoutLookAndFeelItemOptions* ItemOptions = {read=FItemOptions, write=SetItemOptions};
	__property TdxLayoutLookAndFeelOffsets* Offsets = {read=FOffsets, write=SetOffsets};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutStandardLookAndFeelGroupCaptionOptions : public TdxLayoutLookAndFeelCaptionOptions
{
	typedef TdxLayoutLookAndFeelCaptionOptions inherited;
	
protected:
	virtual System::Uitypes::TColor __fastcall GetDefaultTextColor();
public:
	/* TdxLayoutLookAndFeelCaptionOptions.Create */ inline __fastcall virtual TdxLayoutStandardLookAndFeelGroupCaptionOptions(TdxCustomLayoutLookAndFeelOptions* AOptions) : TdxLayoutLookAndFeelCaptionOptions(AOptions) { }
	/* TdxLayoutLookAndFeelCaptionOptions.Destroy */ inline __fastcall virtual ~TdxLayoutStandardLookAndFeelGroupCaptionOptions() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutStandardLookAndFeelGroupOptions : public TdxLayoutLookAndFeelGroupOptions
{
	typedef TdxLayoutLookAndFeelGroupOptions inherited;
	
protected:
	virtual TdxLayoutLookAndFeelCaptionOptionsClass __fastcall GetCaptionOptionsClass();
	virtual System::Uitypes::TColor __fastcall GetDefaultColor();
public:
	/* TdxLayoutLookAndFeelGroupOptions.Create */ inline __fastcall virtual TdxLayoutStandardLookAndFeelGroupOptions(TdxCustomLayoutLookAndFeel* ALookAndFeel) : TdxLayoutLookAndFeelGroupOptions(ALookAndFeel) { }
	
public:
	/* TdxCustomLayoutLookAndFeelOptions.Destroy */ inline __fastcall virtual ~TdxLayoutStandardLookAndFeelGroupOptions() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutStandardLookAndFeelItemCaptionOptions : public TdxLayoutLookAndFeelCaptionOptions
{
	typedef TdxLayoutLookAndFeelCaptionOptions inherited;
	
protected:
	virtual System::Uitypes::TColor __fastcall GetDefaultTextColor();
public:
	/* TdxLayoutLookAndFeelCaptionOptions.Create */ inline __fastcall virtual TdxLayoutStandardLookAndFeelItemCaptionOptions(TdxCustomLayoutLookAndFeelOptions* AOptions) : TdxLayoutLookAndFeelCaptionOptions(AOptions) { }
	/* TdxLayoutLookAndFeelCaptionOptions.Destroy */ inline __fastcall virtual ~TdxLayoutStandardLookAndFeelItemCaptionOptions() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutStandardLookAndFeelItemOptions : public TdxLayoutLookAndFeelItemOptions
{
	typedef TdxLayoutLookAndFeelItemOptions inherited;
	
protected:
	virtual TdxLayoutLookAndFeelCaptionOptionsClass __fastcall GetCaptionOptionsClass();
public:
	/* TdxLayoutLookAndFeelItemOptions.Create */ inline __fastcall virtual TdxLayoutStandardLookAndFeelItemOptions(TdxCustomLayoutLookAndFeel* ALookAndFeel) : TdxLayoutLookAndFeelItemOptions(ALookAndFeel) { }
	
public:
	/* TdxCustomLayoutLookAndFeelOptions.Destroy */ inline __fastcall virtual ~TdxLayoutStandardLookAndFeelItemOptions() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxLayoutStandardLookAndFeel : public TdxCustomLayoutLookAndFeel
{
	typedef TdxCustomLayoutLookAndFeel inherited;
	
protected:
	virtual TdxLayoutLookAndFeelGroupOptionsClass __fastcall GetGroupOptionsClass();
	virtual TdxLayoutLookAndFeelItemOptionsClass __fastcall GetItemOptionsClass();
	virtual int __fastcall GetFrameWidth(Dxlayoutcommon::TdxLayoutSide ASide, Dxlayoutcommon::TdxLayoutSide ACaptionSide);
	virtual void __fastcall InitLookAndFeel();
	
public:
	__classmethod virtual System::UnicodeString __fastcall Description();
	virtual System::TClass __fastcall GetGroupPainterClass();
	virtual void __fastcall CorrectGroupMinVisibleSize(System::TObject* AViewInfo, int &ASize, Dxcore::TdxOrientation AOrientation);
	virtual int __fastcall GetGroupBorderWidth(System::Classes::TComponent* AContainer, Dxlayoutcommon::TdxLayoutSide ASide, Dxlayoutcommon::TdxLayoutSide ACaptionSide, bool AHasCaption, bool AIsExpanded);
	virtual int __fastcall GetGroupCaptionOffset(System::TObject* AViewInfo);
	virtual System::Types::TRect __fastcall GetGroupCaptionContentOffsets(System::TObject* AViewInfo);
	virtual System::Types::TRect __fastcall GetGroupFrameBounds(System::TObject* AViewInfo);
public:
	/* TdxCustomLayoutLookAndFeel.Create */ inline __fastcall virtual TdxLayoutStandardLookAndFeel(System::Classes::TComponent* AOwner) : TdxCustomLayoutLookAndFeel(AOwner) { }
	/* TdxCustomLayoutLookAndFeel.Destroy */ inline __fastcall virtual ~TdxLayoutStandardLookAndFeel() { }
	
};


class PASCALIMPLEMENTATION TdxLayoutOfficeLookAndFeel : public TdxLayoutStandardLookAndFeel
{
	typedef TdxLayoutStandardLookAndFeel inherited;
	
protected:
	virtual int __fastcall GetFrameWidth(Dxlayoutcommon::TdxLayoutSide ASide, Dxlayoutcommon::TdxLayoutSide ACaptionSide);
	virtual void __fastcall InitLookAndFeel();
	
public:
	__classmethod virtual System::UnicodeString __fastcall Description();
	virtual System::TClass __fastcall GetGroupPainterClass();
	virtual void __fastcall CorrectGroupMinVisibleSize(System::TObject* AViewInfo, int &ASize, Dxcore::TdxOrientation AOrientation);
	virtual int __fastcall GetGroupBorderWidth(System::Classes::TComponent* AContainer, Dxlayoutcommon::TdxLayoutSide ASide, Dxlayoutcommon::TdxLayoutSide ACaptionSide, bool AHasCaption, bool AIsExpanded);
	virtual int __fastcall GetGroupCaptionOffset(System::TObject* AViewInfo);
	virtual System::Types::TRect __fastcall GetGroupCaptionContentOffsets(System::TObject* AViewInfo);
	virtual System::Types::TRect __fastcall GetGroupFrameBounds(System::TObject* AViewInfo);
public:
	/* TdxCustomLayoutLookAndFeel.Create */ inline __fastcall virtual TdxLayoutOfficeLookAndFeel(System::Classes::TComponent* AOwner) : TdxLayoutStandardLookAndFeel(AOwner) { }
	/* TdxCustomLayoutLookAndFeel.Destroy */ inline __fastcall virtual ~TdxLayoutOfficeLookAndFeel() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutWebLookAndFeelGroupCaptionOptions : public TdxLayoutLookAndFeelCaptionOptions
{
	typedef TdxLayoutLookAndFeelCaptionOptions inherited;
	
private:
	System::Uitypes::TColor FColor;
	int FSeparatorWidth;
	TdxLayoutWebLookAndFeelGroupOptions* __fastcall GetOptions();
	void __fastcall SetColor(System::Uitypes::TColor Value);
	void __fastcall SetSeparatorWidth(int Value);
	
protected:
	virtual void __fastcall ChangeScale(int M, int D);
	virtual System::Uitypes::TColor __fastcall GetDefaultColor();
	virtual System::Uitypes::TColor __fastcall GetDefaultTextColor();
	virtual Vcl::Graphics::TFont* __fastcall GetDefaultFont(System::Classes::TComponent* AContainer);
	__property TdxLayoutWebLookAndFeelGroupOptions* Options = {read=GetOptions};
	
public:
	__fastcall virtual TdxLayoutWebLookAndFeelGroupCaptionOptions(TdxCustomLayoutLookAndFeelOptions* AOptions);
	virtual System::Uitypes::TColor __fastcall GetColor();
	
__published:
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=536870912};
	__property int SeparatorWidth = {read=FSeparatorWidth, write=SetSeparatorWidth, default=0};
public:
	/* TdxLayoutLookAndFeelCaptionOptions.Destroy */ inline __fastcall virtual ~TdxLayoutWebLookAndFeelGroupCaptionOptions() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutWebLookAndFeelGroupOptions : public TdxLayoutLookAndFeelGroupOptions
{
	typedef TdxLayoutLookAndFeelGroupOptions inherited;
	
private:
	System::Uitypes::TColor FFrameColor;
	int FFrameWidth;
	bool FOffsetCaption;
	bool FOffsetItems;
	TdxLayoutWebLookAndFeelGroupCaptionOptions* __fastcall GetCaptionOptions();
	HIDESBASE void __fastcall SetCaptionOptions(TdxLayoutWebLookAndFeelGroupCaptionOptions* Value);
	void __fastcall SetFrameColor(System::Uitypes::TColor Value);
	void __fastcall SetFrameWidth(int Value);
	void __fastcall SetOffsetCaption(bool Value);
	void __fastcall SetOffsetItems(bool Value);
	
protected:
	virtual void __fastcall ChangeScaleCore(int M, int D);
	virtual TdxLayoutLookAndFeelCaptionOptionsClass __fastcall GetCaptionOptionsClass();
	virtual System::Uitypes::TColor __fastcall GetDefaultColor();
	virtual System::Uitypes::TColor __fastcall GetDefaultFrameColor();
	
public:
	__fastcall virtual TdxLayoutWebLookAndFeelGroupOptions(TdxCustomLayoutLookAndFeel* ALookAndFeel);
	virtual System::Uitypes::TColor __fastcall GetFrameColor();
	bool __fastcall HasCaptionSeparator(bool AHasCaption);
	
__published:
	__property TdxLayoutWebLookAndFeelGroupCaptionOptions* CaptionOptions = {read=GetCaptionOptions, write=SetCaptionOptions};
	__property System::Uitypes::TColor FrameColor = {read=FFrameColor, write=SetFrameColor, default=536870912};
	__property int FrameWidth = {read=FFrameWidth, write=SetFrameWidth, default=1};
	__property bool OffsetCaption = {read=FOffsetCaption, write=SetOffsetCaption, default=1};
	__property bool OffsetItems = {read=FOffsetItems, write=SetOffsetItems, default=1};
public:
	/* TdxCustomLayoutLookAndFeelOptions.Destroy */ inline __fastcall virtual ~TdxLayoutWebLookAndFeelGroupOptions() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutWebLookAndFeelItemCaptionOptions : public TdxLayoutLookAndFeelCaptionOptions
{
	typedef TdxLayoutLookAndFeelCaptionOptions inherited;
	
protected:
	virtual System::Uitypes::TColor __fastcall GetDefaultTextColor();
public:
	/* TdxLayoutLookAndFeelCaptionOptions.Create */ inline __fastcall virtual TdxLayoutWebLookAndFeelItemCaptionOptions(TdxCustomLayoutLookAndFeelOptions* AOptions) : TdxLayoutLookAndFeelCaptionOptions(AOptions) { }
	/* TdxLayoutLookAndFeelCaptionOptions.Destroy */ inline __fastcall virtual ~TdxLayoutWebLookAndFeelItemCaptionOptions() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutWebLookAndFeelItemOptions : public TdxLayoutLookAndFeelItemOptions
{
	typedef TdxLayoutLookAndFeelItemOptions inherited;
	
protected:
	virtual TdxLayoutLookAndFeelCaptionOptionsClass __fastcall GetCaptionOptionsClass();
	
public:
	__fastcall virtual TdxLayoutWebLookAndFeelItemOptions(TdxCustomLayoutLookAndFeel* ALookAndFeel);
	
__published:
	__property ControlBorderStyle = {default=1};
public:
	/* TdxCustomLayoutLookAndFeelOptions.Destroy */ inline __fastcall virtual ~TdxLayoutWebLookAndFeelItemOptions() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxLayoutWebLookAndFeel : public TdxCustomLayoutLookAndFeel
{
	typedef TdxCustomLayoutLookAndFeel inherited;
	
private:
	TdxLayoutWebLookAndFeelGroupOptions* __fastcall GetGroupOptions();
	HIDESBASE void __fastcall SetGroupOptions(TdxLayoutWebLookAndFeelGroupOptions* Value);
	bool __fastcall HasCaptionSeparator(System::TObject* AViewInfo);
	
protected:
	virtual bool __fastcall CanDrawSpecificBackground();
	virtual TdxLayoutLookAndFeelGroupOptionsClass __fastcall GetGroupOptionsClass();
	virtual TdxLayoutLookAndFeelItemOptionsClass __fastcall GetItemOptionsClass();
	virtual void __fastcall InitLookAndFeel();
	
public:
	__classmethod virtual System::UnicodeString __fastcall Description();
	virtual System::TClass __fastcall GetGroupPainterClass();
	virtual void __fastcall CorrectGroupButtonsAreaBounds(System::TObject* AViewInfo, System::Types::TRect &ABounds);
	virtual void __fastcall CorrectGroupCaptionAreaBounds(System::TObject* AViewInfo, System::Types::TRect &ABounds);
	virtual void __fastcall CorrectGroupCaptionHeight(System::TObject* AViewInfo, int &AHeight);
	virtual void __fastcall CorrectGroupCaptionWidth(System::TObject* AViewInfo, int &AWidth);
	virtual void __fastcall CorrectGroupMinVisibleSize(System::TObject* AViewInfo, int &ASize, Dxcore::TdxOrientation AOrientation);
	virtual int __fastcall GetGroupBorderOffset(System::Classes::TComponent* AContainer, Dxlayoutcommon::TdxLayoutSide ASide, Dxlayoutcommon::TdxLayoutSide ACaptionSide);
	virtual int __fastcall GetGroupBorderWidth(System::Classes::TComponent* AContainer, Dxlayoutcommon::TdxLayoutSide ASide, Dxlayoutcommon::TdxLayoutSide ACaptionSide, bool AHasCaption, bool AIsExpanded);
	virtual System::Uitypes::TColor __fastcall GetGroupCaptionColor(System::TObject* AViewInfo);
	virtual int __fastcall GetGroupCaptionOffset(System::TObject* AViewInfo);
	System::Types::TRect __fastcall GetGroupCaptionSeparatorAreaBounds(System::TObject* AViewInfo);
	System::Types::TRect __fastcall GetGroupCaptionSeparatorBounds(System::TObject* AViewInfo);
	virtual System::Types::TRect __fastcall GetGroupRestSpaceBounds(System::TObject* AViewInfo);
	virtual System::Classes::TAlignment __fastcall GetGroupCaptionAlignHorz(System::TObject* AViewInfo);
	virtual Dxlayoutcommon::TdxAlignmentVert __fastcall GetGroupCaptionAlignVert(System::TObject* AViewInfo);
	
__published:
	__property TdxLayoutWebLookAndFeelGroupOptions* GroupOptions = {read=GetGroupOptions, write=SetGroupOptions};
public:
	/* TdxCustomLayoutLookAndFeel.Create */ inline __fastcall virtual TdxLayoutWebLookAndFeel(System::Classes::TComponent* AOwner) : TdxCustomLayoutLookAndFeel(AOwner) { }
	/* TdxCustomLayoutLookAndFeel.Destroy */ inline __fastcall virtual ~TdxLayoutWebLookAndFeel() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutCxLookAndFeelGroupOptions : public TdxLayoutStandardLookAndFeelGroupOptions
{
	typedef TdxLayoutStandardLookAndFeelGroupOptions inherited;
	
private:
	TdxLayoutCxLookAndFeel* __fastcall GetLookAndFeel();
	
protected:
	virtual System::Uitypes::TColor __fastcall GetDefaultColor();
	virtual TdxLayoutLookAndFeelCaptionOptionsClass __fastcall GetCaptionOptionsClass();
	__property TdxLayoutCxLookAndFeel* LookAndFeel = {read=GetLookAndFeel};
public:
	/* TdxLayoutLookAndFeelGroupOptions.Create */ inline __fastcall virtual TdxLayoutCxLookAndFeelGroupOptions(TdxCustomLayoutLookAndFeel* ALookAndFeel) : TdxLayoutStandardLookAndFeelGroupOptions(ALookAndFeel) { }
	
public:
	/* TdxCustomLayoutLookAndFeelOptions.Destroy */ inline __fastcall virtual ~TdxLayoutCxLookAndFeelGroupOptions() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutCxLookAndFeelGroupCaptionOptions : public TdxLayoutStandardLookAndFeelGroupCaptionOptions
{
	typedef TdxLayoutStandardLookAndFeelGroupCaptionOptions inherited;
	
private:
	TdxLayoutCxLookAndFeel* __fastcall GetLookAndFeel();
	
protected:
	virtual System::Uitypes::TColor __fastcall GetDefaultTextColor();
	virtual System::Uitypes::TColor __fastcall GetDefaultTextDisabledColor();
	virtual System::Uitypes::TColor __fastcall GetDefaultTextHotColor();
	__property TdxLayoutCxLookAndFeel* LookAndFeel = {read=GetLookAndFeel};
public:
	/* TdxLayoutLookAndFeelCaptionOptions.Create */ inline __fastcall virtual TdxLayoutCxLookAndFeelGroupCaptionOptions(TdxCustomLayoutLookAndFeelOptions* AOptions) : TdxLayoutStandardLookAndFeelGroupCaptionOptions(AOptions) { }
	/* TdxLayoutLookAndFeelCaptionOptions.Destroy */ inline __fastcall virtual ~TdxLayoutCxLookAndFeelGroupCaptionOptions() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutCxLookAndFeelItemOptions : public TdxLayoutLookAndFeelItemOptions
{
	typedef TdxLayoutLookAndFeelItemOptions inherited;
	
protected:
	virtual TdxLayoutLookAndFeelCaptionOptionsClass __fastcall GetCaptionOptionsClass();
public:
	/* TdxLayoutLookAndFeelItemOptions.Create */ inline __fastcall virtual TdxLayoutCxLookAndFeelItemOptions(TdxCustomLayoutLookAndFeel* ALookAndFeel) : TdxLayoutLookAndFeelItemOptions(ALookAndFeel) { }
	
public:
	/* TdxCustomLayoutLookAndFeelOptions.Destroy */ inline __fastcall virtual ~TdxLayoutCxLookAndFeelItemOptions() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutCxLookAndFeelItemCaptionOptions : public TdxLayoutLookAndFeelCaptionOptions
{
	typedef TdxLayoutLookAndFeelCaptionOptions inherited;
	
private:
	TdxLayoutCxLookAndFeel* __fastcall GetLookAndFeel();
	
protected:
	virtual System::Uitypes::TColor __fastcall GetDefaultTextColor();
	virtual System::Uitypes::TColor __fastcall GetDefaultTextDisabledColor();
	virtual System::Uitypes::TColor __fastcall GetDefaultTextHotColor();
	__property TdxLayoutCxLookAndFeel* LookAndFeel = {read=GetLookAndFeel};
public:
	/* TdxLayoutLookAndFeelCaptionOptions.Create */ inline __fastcall virtual TdxLayoutCxLookAndFeelItemCaptionOptions(TdxCustomLayoutLookAndFeelOptions* AOptions) : TdxLayoutLookAndFeelCaptionOptions(AOptions) { }
	/* TdxLayoutLookAndFeelCaptionOptions.Destroy */ inline __fastcall virtual ~TdxLayoutCxLookAndFeelItemCaptionOptions() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxLayoutCxLookAndFeel : public TdxLayoutStandardLookAndFeel
{
	typedef TdxLayoutStandardLookAndFeel inherited;
	
private:
	Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetLookAndFeelPainter();
	
protected:
	virtual bool __fastcall DoesCxLookAndFeelHavePriority();
	virtual bool __fastcall IsGroupTransparent(System::TObject* AViewInfo);
	virtual bool __fastcall IsSkinPainterUsed();
	virtual int __fastcall GetFrameWidth(Dxlayoutcommon::TdxLayoutSide ASide, Dxlayoutcommon::TdxLayoutSide ACaptionSide);
	virtual TdxLayoutLookAndFeelGroupOptionsClass __fastcall GetGroupOptionsClass();
	virtual TdxLayoutLookAndFeelItemOptionsClass __fastcall GetItemOptionsClass();
	virtual void __fastcall InitLookAndFeel();
	void __fastcall LookAndFeelChanged(Cxlookandfeels::TcxLookAndFeel* Sender, Cxlookandfeels::TcxLookAndFeelValues AChangedValues);
	Cxlookandfeels::TcxLookAndFeel* __fastcall GetLookAndFeel();
	
public:
	__fastcall virtual TdxLayoutCxLookAndFeel(System::Classes::TComponent* AOwner);
	__classmethod virtual System::UnicodeString __fastcall Description();
	virtual bool __fastcall NeedRedrawOnResize();
	HIDESBASE void __fastcall CorrectGroupCaptionFont(Dxlayoutcommon::TdxLayoutSide ACaptionSide, Vcl::Graphics::TFont* AFont)/* overload */;
	virtual void __fastcall CorrectGroupCaptionFont(System::TObject* AViewInfo, Vcl::Graphics::TFont* AFont)/* overload */;
	virtual int __fastcall GetGroupBorderWidth(System::Classes::TComponent* AContainer, Dxlayoutcommon::TdxLayoutSide ASide, Dxlayoutcommon::TdxLayoutSide ACaptionSide, bool AHasCaption, bool AIsExpanded);
	HIDESBASE System::Types::TRect __fastcall GetGroupCaptionContentOffsets(bool AIsVertical, Dxlayoutcommon::TdxLayoutSide ACaptionSide)/* overload */;
	virtual System::Types::TRect __fastcall GetGroupCaptionContentOffsets(System::TObject* AViewInfo)/* overload */;
	virtual int __fastcall GetGroupCaptionOffset(System::TObject* AViewInfo);
	virtual System::Types::TRect __fastcall GetGroupFrameBounds(System::TObject* AViewInfo);
	virtual int __fastcall GetItemControlBorderWidth(Dxlayoutcommon::TdxLayoutSide ASide);
	bool __fastcall IsGroupBoxCaptionTextDrawnOverBorder(Dxlayoutcommon::TdxLayoutSide ACaptionSide);
	virtual void __fastcall DrawLayoutControlBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R);
	virtual void __fastcall DrawItemControlBorder(Cxgraphics::TcxCanvas* ACanvas, TdxLayoutLookAndFeelItemOptions* AItemOptions, const System::Types::TRect &R);
	virtual System::Uitypes::TColor __fastcall GetEmptyAreaColor();
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall GetGroupButtonColorPalette(Cxlookandfeelpainters::TcxButtonState AState);
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall GetItemCaptionColorPalette();
	virtual Dxcoregraphics::_di_IdxColorPalette __fastcall GetTabbedGroupCaptionColorPalette(bool AIsActive);
	virtual System::TClass __fastcall GetGroupPainterClass();
	virtual System::TClass __fastcall GetItemPainterClass();
	__property Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* LookAndFeelPainter = {read=GetLookAndFeelPainter};
	
__published:
	__property LookAndFeel;
public:
	/* TdxCustomLayoutLookAndFeel.Destroy */ inline __fastcall virtual ~TdxLayoutCxLookAndFeel() { }
	
private:
	void *__IcxLookAndFeelContainer;	// Cxlookandfeels::IcxLookAndFeelContainer 
	void *__IdxSkinSupport;	// Cxlookandfeels::IdxSkinSupport 
	
public:
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
	
};


class PASCALIMPLEMENTATION TdxLayoutSkinLookAndFeel : public TdxLayoutCxLookAndFeel
{
	typedef TdxLayoutCxLookAndFeel inherited;
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	void __fastcall ReadSkinName(System::Classes::TReader* Reader);
	void __fastcall ReadSkinNameAssigned(System::Classes::TReader* Reader);
	
public:
	__classmethod virtual System::UnicodeString __fastcall Description();
public:
	/* TdxLayoutCxLookAndFeel.Create */ inline __fastcall virtual TdxLayoutSkinLookAndFeel(System::Classes::TComponent* AOwner) : TdxLayoutCxLookAndFeel(AOwner) { }
	
public:
	/* TdxCustomLayoutLookAndFeel.Destroy */ inline __fastcall virtual ~TdxLayoutSkinLookAndFeel() { }
	
};


class PASCALIMPLEMENTATION TdxLayoutLookAndFeelList : public Cxclasses::TcxCustomComponent
{
	typedef Cxclasses::TcxCustomComponent inherited;
	
public:
	TdxCustomLayoutLookAndFeel* operator[](int Index) { return this->Items[Index]; }
	
private:
	Cxclasses::TcxComponentList* FItems;
	int __fastcall GetCount();
	bool __fastcall GetIsDesigning();
	TdxCustomLayoutLookAndFeel* __fastcall GetItem(int Index);
	void __fastcall AddItem(TdxCustomLayoutLookAndFeel* AItem);
	void __fastcall RemoveItem(TdxCustomLayoutLookAndFeel* AItem);
	void __fastcall ItemListChanged(System::TObject* Sender, System::Classes::TComponent* AComponent, Cxclasses::TcxComponentCollectionNotification AAction);
	
protected:
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	void __fastcall Modified();
	virtual void __fastcall SetName(const System::Classes::TComponentName Value);
	__property bool IsDesigning = {read=GetIsDesigning, nodefault};
	
public:
	__fastcall virtual TdxLayoutLookAndFeelList(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxLayoutLookAndFeelList();
	TdxCustomLayoutLookAndFeel* __fastcall CreateItem(TdxCustomLayoutLookAndFeelClass AClass);
	__property int Count = {read=GetCount, nodefault};
	__property TdxCustomLayoutLookAndFeel* Items[int Index] = {read=GetItem/*, default*/};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutLookAndFeelDefs : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TdxCustomLayoutLookAndFeelClass operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TList* FItems;
	int __fastcall GetCount();
	TdxCustomLayoutLookAndFeelClass __fastcall GetItem(int Index);
	
public:
	__fastcall TdxLayoutLookAndFeelDefs();
	__fastcall virtual ~TdxLayoutLookAndFeelDefs();
	TdxCustomLayoutLookAndFeelClass __fastcall GetItemByDescription(const System::UnicodeString Value);
	void __fastcall Register(TdxCustomLayoutLookAndFeelClass AClass);
	void __fastcall Unregister(TdxCustomLayoutLookAndFeelClass AClass);
	__property int Count = {read=GetCount, nodefault};
	__property TdxCustomLayoutLookAndFeelClass Items[int Index] = {read=GetItem/*, default*/};
};

#pragma pack(pop)

typedef TdxLayoutTextMetric *PdxLayoutTextMetric;

struct DECLSPEC_DRECORD TdxLayoutTextMetric
{
public:
	Vcl::Graphics::TFont* Font;
	tagTEXTMETRICW TextMetric;
	System::Classes::TNotifyEvent PrevFontChangeHandler;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutTextMetrics : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Classes::TList* FItems;
	int __fastcall GetCount();
	PdxLayoutTextMetric __fastcall GetItem(int AIndex);
	void __fastcall DestroyItems();
	void __fastcall FontChangeHandler(System::TObject* Sender);
	
protected:
	void __fastcall CalculateItem(int AIndex);
	void __fastcall Delete(int AIndex);
	int __fastcall IndexOf(Vcl::Graphics::TFont* AFont);
	int __fastcall GetSameFontIndex(Vcl::Graphics::TFont* AFont);
	__property int Count = {read=GetCount, nodefault};
	__property PdxLayoutTextMetric Items[int AIndex] = {read=GetItem};
	
public:
	__fastcall TdxLayoutTextMetrics();
	__fastcall virtual ~TdxLayoutTextMetrics();
	void __fastcall Get(Vcl::Graphics::TFont* AFont, tagTEXTMETRICW &ATextMetric);
	void __fastcall Unregister(Vcl::Graphics::TFont* AFont);
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{EA24F329-D483-4D4F-A72C-1F67EC4F7E21}") IdxLayoutLookAndFeelsDesigner  : public System::IInterface 
{
	virtual void __fastcall ComponentNameChanged(TdxLayoutLookAndFeelList* ALookAndFeelList) = 0 ;
	virtual void __fastcall ItemsChanged(TdxLayoutLookAndFeelList* ALookAndFeelList) = 0 ;
	virtual void __fastcall Edit(TdxLayoutLookAndFeelList* ALookAndFeelList) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TdxLayoutTextMetrics* dxLayoutTextMetrics;
extern DELPHI_PACKAGE TdxLayoutLookAndFeelDefs* dxLayoutLookAndFeelDefs;
extern DELPHI_PACKAGE TdxCustomLayoutLookAndFeel* dxLayoutDefaultLookAndFeel;
extern DELPHI_PACKAGE _di_IdxLayoutLookAndFeelsDesigner dxLayoutLookAndFeelsDesigner;
extern DELPHI_PACKAGE TdxCustomLayoutLookAndFeelClass __fastcall dxLayoutDefaultLookAndFeelClass(void);
}	/* namespace Dxlayoutlookandfeels */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXLAYOUTLOOKANDFEELS)
using namespace Dxlayoutlookandfeels;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxlayoutlookandfeelsHPP
