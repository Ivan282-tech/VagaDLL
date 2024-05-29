// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxFilterBox.pas' rev: 35.00 (Windows)

#ifndef DxfilterboxHPP
#define DxfilterboxHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Graphics.hpp>
#include <cxClasses.hpp>
#include <dxCore.hpp>
#include <dxCoreClasses.hpp>
#include <cxGeometry.hpp>
#include <cxGraphics.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxFilter.hpp>
#include <cxCustomData.hpp>
#include <dxUIElementPopupWindow.hpp>
#include <cxListBox.hpp>
#include <cxControls.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Generics.Collections.hpp>
#include <System.SysUtils.hpp>
#include <cxContainer.hpp>
#include <dxForms.hpp>
#include <Vcl.Forms.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxfilterbox
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IdxFilterBoxTokenCriteriaOptions;
typedef System::DelphiInterface<IdxFilterBoxTokenCriteriaOptions> _di_IdxFilterBoxTokenCriteriaOptions;
__interface DELPHIINTERFACE IdxFilterBoxTokenCriteriaViewInfoOwner;
typedef System::DelphiInterface<IdxFilterBoxTokenCriteriaViewInfoOwner> _di_IdxFilterBoxTokenCriteriaViewInfoOwner;
class DELPHICLASS TdxFilterBoxMRUItem;
class DELPHICLASS TdxFilterBoxMRUItems;
class DELPHICLASS TdxFilterBoxMRUItemsPopupListBox;
class DELPHICLASS TdxFilterBoxMRUItemsPopup;
class DELPHICLASS TdxFilterBoxTokenCriteriaOptions;
class DELPHICLASS TdxFilterBoxTokenCriteriaCustomElementViewInfo;
class DELPHICLASS TdxFilterBoxTokenCriteriaElementViewInfo;
class DELPHICLASS TdxFilterBoxTokenCriteriaIndentViewInfo;
class DELPHICLASS TdxFilterBoxTokenCriteriaCustomItemElementViewInfo;
class DELPHICLASS TdxFilterBoxTokenCriteriaRemoveButtonViewInfo;
class DELPHICLASS TdxFilterBoxTokenCriteriaRemoveButtonAreaViewInfo;
class DELPHICLASS TdxFilterBoxTokenCriteriaItemElementViewInfo;
class DELPHICLASS TdxFilterBoxTokenCriteriaItemCaptionViewInfo;
class DELPHICLASS TdxFilterBoxTokenCriteriaItemCustomOperatorViewInfo;
class DELPHICLASS TdxFilterBoxTokenCriteriaItemOperatorViewInfo;
class DELPHICLASS TdxFilterBoxTokenCriteriaItemAndOperatorViewInfo;
class DELPHICLASS TdxFilterBoxTokenCriteriaItemToOperatorViewInfo;
class DELPHICLASS TdxFilterBoxTokenCriteriaItemDisplayValueViewInfo;
class DELPHICLASS TdxFilterBoxTokenCriteriaListElementViewInfo;
class DELPHICLASS TdxFilterBoxTokenCriteriaListCustomBoolOperatorViewInfo;
class DELPHICLASS TdxFilterBoxTokenCriteriaListNotOperatorViewInfo;
class DELPHICLASS TdxFilterBoxTokenCriteriaListBoolOperatorViewInfo;
class DELPHICLASS TdxFilterBoxTokenCriteriaCollectionViewInfo;
class DELPHICLASS TdxFilterBoxTokenCriteriaCustomItemViewInfo;
class DELPHICLASS TdxFilterBoxTokenCriteriaItemViewInfo;
class DELPHICLASS TdxFilterBoxTokenCriteriaListViewInfo;
class DELPHICLASS TdxFilterBoxTokenCriteriaViewInfo;
class DELPHICLASS TdxFilterBoxTokenCriteriaFromToOperator;
class DELPHICLASS TdxFilterBoxTokenCriteriaDateListOperator;
class DELPHICLASS TdxFilterBoxTokenCriteriaItemSubOperator;
class DELPHICLASS TdxFilterBoxTokenCriteriaItemSubOperators;
class DELPHICLASS TdxFilterBoxTokenCriteriaItem;
class DELPHICLASS TdxFilterBoxTokenCriteriaCustomMerger;
class DELPHICLASS TdxFilterBoxTokenCriteriaListMerger;
class DELPHICLASS TdxFilterBoxTokenCriteriaItemMergeInfo;
class DELPHICLASS TdxFilterBoxTokenCriteriaItemMergeInfos;
class DELPHICLASS TdxFilterBoxTokenCriteriaItemMerger;
class DELPHICLASS TdxFilterBoxTokenCriteriaSimplificator;
class DELPHICLASS TdxFilterBoxTokenCriteria;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TcxFilterBoxPosition : unsigned char { fpTop, fpBottom };

enum DECLSPEC_DENUM TcxFilterBoxButtonAlignment : unsigned char { fbaLeft, fbaRight };

enum DECLSPEC_DENUM TcxFilterBoxVisible : unsigned char { fvNever, fvNonEmpty, fvAlways };

enum DECLSPEC_DENUM TdxFilterBoxTokenCriteriaExtOperatorKind : unsigned char { eokNone, eokDateList, eokFromTo };

__interface  INTERFACE_UUID("{B9930D9B-B4B4-4713-BAFC-487E59D71E61}") IdxFilterBoxTokenCriteriaOptions  : public System::IInterface 
{
	virtual bool __fastcall GetItemRemoval() = 0 ;
	__property bool ItemRemoval = {read=GetItemRemoval};
};

__interface  INTERFACE_UUID("{DD64CF3F-2CBF-4EFA-8C12-5507EE5B29C2}") IdxFilterBoxTokenCriteriaViewInfoOwner  : public System::IInterface 
{
	virtual Cxcontrols::TcxControl* __fastcall GetControl() = 0 ;
	virtual TdxFilterBoxTokenCriteria* __fastcall GetCriteria() = 0 ;
	virtual _di_IdxFilterBoxTokenCriteriaOptions __fastcall GetOptions() = 0 ;
	virtual void __fastcall GetViewParams(Cxgraphics::TcxViewParams &AParams) = 0 ;
	__property Cxcontrols::TcxControl* Control = {read=GetControl};
	__property TdxFilterBoxTokenCriteria* Criteria = {read=GetCriteria};
	__property _di_IdxFilterBoxTokenCriteriaOptions Options = {read=GetOptions};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxMRUItem : public Cxclasses::TcxMRUItem
{
	typedef Cxclasses::TcxMRUItem inherited;
	
private:
	Cxcustomdata::TcxDataFilterCriteria* FFilter;
	System::UnicodeString __fastcall GetCaption();
	System::Classes::TMemoryStream* __fastcall GetFilterStream(Cxcustomdata::TcxDataFilterCriteria* AFilter);
	
protected:
	bool __fastcall StreamEquals(System::Classes::TMemoryStream* AStream);
	
public:
	__fastcall TdxFilterBoxMRUItem(Cxcustomdata::TcxDataFilterCriteria* AFilter);
	__fastcall virtual ~TdxFilterBoxMRUItem();
	void __fastcall AssignTo(Cxcustomdata::TcxDataFilterCriteria* AFilter);
	virtual bool __fastcall Equals(Cxclasses::TcxMRUItem* AItem);
	bool __fastcall FilterEquals(Cxcustomdata::TcxDataFilterCriteria* AFilter);
	System::Classes::TMemoryStream* __fastcall GetStream();
	__property System::UnicodeString Caption = {read=GetCaption};
	__property Cxcustomdata::TcxDataFilterCriteria* Filter = {read=FFilter};
};

#pragma pack(pop)

typedef System::TMetaClass* TdxFilterBoxMRUItemClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxMRUItems : public Cxclasses::TcxMRUItems
{
	typedef Cxclasses::TcxMRUItems inherited;
	
public:
	TdxFilterBoxMRUItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	Dxcoreclasses::TdxFastList* FVisibleItems;
	HIDESBASE TdxFilterBoxMRUItem* __fastcall GetItem(int Index);
	int __fastcall GetVisibleCount();
	TdxFilterBoxMRUItem* __fastcall GetVisibleItem(int Index);
	
protected:
	virtual void __fastcall AddCurrentFilter();
	virtual Cxcustomdata::TcxDataFilterCriteria* __fastcall GetCurrentFilter();
	virtual TdxFilterBoxMRUItemClass __fastcall GetItemClass();
	virtual void __fastcall DeleteEmptyItems();
	virtual void __fastcall FilterChanged();
	virtual void __fastcall RefreshVisibleItemsList();
	HIDESBASE virtual void __fastcall SetMaxCount(int AMaxCount);
	virtual void __fastcall VisibleCountChanged(int APrevVisibleCount);
	__property Cxcustomdata::TcxDataFilterCriteria* CurrentFilter = {read=GetCurrentFilter};
	
public:
	__fastcall virtual TdxFilterBoxMRUItems();
	__fastcall virtual ~TdxFilterBoxMRUItems();
	HIDESBASE void __fastcall Add(Cxcustomdata::TcxDataFilterCriteria* AFilter);
	__property TdxFilterBoxMRUItem* Items[int Index] = {read=GetItem/*, default*/};
	__property int VisibleCount = {read=GetVisibleCount, nodefault};
	__property TdxFilterBoxMRUItem* VisibleItems[int Index] = {read=GetVisibleItem};
};

#pragma pack(pop)

typedef System::TMetaClass* TdxFilterBoxMRUItemsClass;

class PASCALIMPLEMENTATION TdxFilterBoxMRUItemsPopupListBox : public Cxlistbox::TdxCustomCheckListBox
{
	typedef Cxlistbox::TdxCustomCheckListBox inherited;
	
private:
	TdxFilterBoxMRUItemsPopup* __fastcall GetPopup();
	
protected:
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual bool __fastcall NeedHotTrack();
	
public:
	__fastcall virtual TdxFilterBoxMRUItemsPopupListBox(TdxFilterBoxMRUItemsPopup* APopup);
	__property TdxFilterBoxMRUItemsPopup* Popup = {read=GetPopup};
public:
	/* TdxCustomCheckListBox.Destroy */ inline __fastcall virtual ~TdxFilterBoxMRUItemsPopupListBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxFilterBoxMRUItemsPopupListBox(HWND ParentWindow) : Cxlistbox::TdxCustomCheckListBox(ParentWindow) { }
	
};


typedef System::TMetaClass* TdxFilterBoxMRUItemsPopupListBoxClass;

class PASCALIMPLEMENTATION TdxFilterBoxMRUItemsPopup : public Dxuielementpopupwindow::TdxUIElementPopupWindow
{
	typedef Dxuielementpopupwindow::TdxUIElementPopupWindow inherited;
	
private:
	TdxFilterBoxMRUItemsPopupListBox* FListBox;
	void __fastcall ListBoxAction(Cxlistbox::TdxCustomListBox* Sender, int AItemIndex);
	
protected:
	virtual void __fastcall ApplyFilter(int AItemIndex);
	virtual void __fastcall AddFilterMRUItems();
	virtual void __fastcall ApplyFilterMRUItem(int AItemIndex);
	virtual TdxFilterBoxMRUItemsPopupListBoxClass __fastcall GetListBoxClass();
	virtual int __fastcall GetMRUItemCount();
	virtual TdxFilterBoxMRUItems* __fastcall GetMRUItems();
	virtual int __fastcall GetTextOffsetHorz();
	virtual void __fastcall InitListBox();
	virtual void __fastcall InitPopup();
	virtual void __fastcall UpdateInnerControlsHeight(int &AClientHeight);
	__property TdxFilterBoxMRUItemsPopupListBox* ListBox = {read=FListBox};
	__property TdxFilterBoxMRUItems* MRUItems = {read=GetMRUItems};
	
public:
	__fastcall virtual TdxFilterBoxMRUItemsPopup(Vcl::Controls::TWinControl* AOwnerControl);
	__property int TextOffsetHorz = {read=GetTextOffsetHorz, nodefault};
public:
	/* TcxCustomPopupWindow.Destroy */ inline __fastcall virtual ~TdxFilterBoxMRUItemsPopup() { }
	
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TdxFilterBoxMRUItemsPopup(System::Classes::TComponent* AOwner, int Dummy) : Dxuielementpopupwindow::TdxUIElementPopupWindow(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxFilterBoxMRUItemsPopup(HWND ParentWindow) : Dxuielementpopupwindow::TdxUIElementPopupWindow(ParentWindow) { }
	
};


typedef System::TMetaClass* TdxFilterBoxMRUItemsPopupClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaOptions : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool FItemRemoval;
	
public:
	__fastcall virtual TdxFilterBoxTokenCriteriaOptions(_di_IdxFilterBoxTokenCriteriaOptions AOptions);
	__property bool ItemRemoval = {read=FItemRemoval, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxFilterBoxTokenCriteriaOptions() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaCustomElementViewInfo : public System::Classes::TInterfacedPersistent
{
	typedef System::Classes::TInterfacedPersistent inherited;
	
private:
	System::Types::TRect FBounds;
	int FHeight;
	bool FIsHeightCalculated;
	bool FIsRightToLeftConverted;
	bool FIsViewParamsCalculated;
	bool FIsWidthCalculated;
	Cxgraphics::TcxViewParams FViewParams;
	int FWidth;
	Cxgraphics::TcxViewParams __fastcall GetViewParams();
	
protected:
	virtual void __fastcall Calculate(int ALeftBound, int ATopBound, int AWidth = 0xffffffff, int AHeight = 0xffffffff)/* overload */;
	virtual int __fastcall CalculateHeight() = 0 ;
	virtual Cxgraphics::TcxViewParams __fastcall CalculateViewParams() = 0 ;
	virtual int __fastcall CalculateWidth() = 0 ;
	virtual void __fastcall DoPaint(Cxgraphics::TcxCanvas* ACanvas) = 0 ;
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	virtual Cxcontrols::TcxControl* __fastcall GetControl() = 0 ;
	virtual TdxFilterBoxTokenCriteria* __fastcall GetCriteria() = 0 ;
	virtual int __fastcall GetHeight();
	virtual Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetPainter() = 0 ;
	virtual Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor() = 0 ;
	virtual int __fastcall GetWidth();
	bool __fastcall HasPoint(const System::Types::TPoint &APoint);
	void __fastcall Invalidate()/* overload */;
	void __fastcall Invalidate(const System::Types::TRect &ARect)/* overload */;
	virtual bool __fastcall IsVisibleForPainting();
	__property System::Types::TRect Bounds = {read=FBounds};
	__property Cxcontrols::TcxControl* Control = {read=GetControl};
	__property int Height = {read=GetHeight, nodefault};
	__property Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* Painter = {read=GetPainter};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=GetScaleFactor};
	__property Cxgraphics::TcxViewParams ViewParams = {read=GetViewParams};
	__property int Width = {read=GetWidth, nodefault};
	
public:
	void __fastcall Calculate(const System::Types::TRect &ABounds)/* overload */;
	void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall RightToLeftConversion(const System::Types::TRect &ABounds);
	__property TdxFilterBoxTokenCriteria* Criteria = {read=GetCriteria};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxFilterBoxTokenCriteriaCustomElementViewInfo() { }
	
public:
	/* TObject.Create */ inline __fastcall TdxFilterBoxTokenCriteriaCustomElementViewInfo() : System::Classes::TInterfacedPersistent() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaElementViewInfo : public TdxFilterBoxTokenCriteriaCustomElementViewInfo
{
	typedef TdxFilterBoxTokenCriteriaCustomElementViewInfo inherited;
	
private:
	System::Types::TRect FBackgroundBounds;
	TdxFilterBoxTokenCriteriaViewInfo* FCriteriaViewInfo;
	bool FIsTextAssigned;
	bool FIsTextSizeCalculated;
	Cxlookandfeelpainters::TcxButtonState FState;
	System::UnicodeString FText;
	System::Types::TRect FTextBounds;
	System::Types::TSize FTextSize;
	System::Types::TSize __fastcall CalculateTextSize();
	unsigned __fastcall GetTextFormat();
	System::Types::TSize __fastcall GetTextSize();
	System::UnicodeString __fastcall GetTextValue();
	bool __fastcall PtInCaller(const System::Types::TPoint &P);
	
protected:
	virtual void __fastcall Calculate(int ALeftBound, int ATopBound, int AWidth = 0xffffffff, int AHeight = 0xffffffff)/* overload */;
	virtual System::Types::TRect __fastcall CalculateBackgroundBounds();
	virtual int __fastcall CalculateHeight();
	virtual System::Types::TRect __fastcall CalculateTextBounds();
	virtual Cxgraphics::TcxViewParams __fastcall CalculateViewParams();
	virtual int __fastcall CalculateWidth();
	virtual void __fastcall Click();
	virtual void __fastcall DrawBackground(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DoPaint(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	virtual void __fastcall DrawText(Cxgraphics::TcxCanvas* ACanvas);
	virtual Cxcontrols::TcxControl* __fastcall GetControl();
	virtual TdxFilterBoxTokenCriteria* __fastcall GetCriteria();
	virtual TdxFilterBoxTokenCriteriaElementViewInfo* __fastcall GetHitInfo(const System::Types::TPoint &APoint);
	virtual Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetPainter();
	virtual Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	virtual Cxlookandfeelpainters::TcxButtonState __fastcall GetState();
	virtual System::UnicodeString __fastcall GetText();
	virtual System::Types::TRect __fastcall GetTextMargins();
	virtual bool __fastcall HasHitInfo();
	virtual void __fastcall InvalidateOnStateChanged();
	virtual void __fastcall MouseLeave();
	virtual bool __fastcall NeedDrawBackground();
	virtual bool __fastcall NeedInvalidateOnStateChanged();
	virtual void __fastcall StateChanged();
	virtual void __fastcall UpdateState();
	__property System::Types::TRect BackgroundBounds = {read=FBackgroundBounds};
	__property TdxFilterBoxTokenCriteriaViewInfo* CriteriaViewInfo = {read=FCriteriaViewInfo};
	__property Cxlookandfeelpainters::TcxButtonState State = {read=FState, nodefault};
	__property System::UnicodeString Text = {read=GetTextValue};
	__property System::Types::TRect TextBounds = {read=FTextBounds};
	__property unsigned TextFormat = {read=GetTextFormat, nodefault};
	__property System::Types::TRect TextMargins = {read=GetTextMargins};
	__property System::Types::TSize TextSize = {read=GetTextSize};
	
public:
	__fastcall virtual TdxFilterBoxTokenCriteriaElementViewInfo(TdxFilterBoxTokenCriteriaViewInfo* ACriteriaViewInfo);
	__fastcall virtual ~TdxFilterBoxTokenCriteriaElementViewInfo();
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Calculate(const System::Types::TRect &ABounds){ TdxFilterBoxTokenCriteriaCustomElementViewInfo::Calculate(ABounds); }
	
private:
	void *__IcxMouseTrackingCaller2;	// Dxcoreclasses::IcxMouseTrackingCaller2 
	
public:
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

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaIndentViewInfo : public TdxFilterBoxTokenCriteriaElementViewInfo
{
	typedef TdxFilterBoxTokenCriteriaElementViewInfo inherited;
	
private:
	int FWidth;
	
protected:
	virtual int __fastcall CalculateHeight();
	virtual int __fastcall CalculateWidth();
	
public:
	__fastcall virtual TdxFilterBoxTokenCriteriaIndentViewInfo(TdxFilterBoxTokenCriteriaViewInfo* ACriteriaViewInfo, int AWidth);
public:
	/* TdxFilterBoxTokenCriteriaElementViewInfo.Destroy */ inline __fastcall virtual ~TdxFilterBoxTokenCriteriaIndentViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaCustomItemElementViewInfo : public TdxFilterBoxTokenCriteriaElementViewInfo
{
	typedef TdxFilterBoxTokenCriteriaElementViewInfo inherited;
	
private:
	TdxFilterBoxTokenCriteriaCustomItemViewInfo* FCriteriaItemViewInfo;
	
protected:
	__property TdxFilterBoxTokenCriteriaCustomItemViewInfo* CriteriaItemViewInfo = {read=FCriteriaItemViewInfo};
	
public:
	__fastcall virtual TdxFilterBoxTokenCriteriaCustomItemElementViewInfo(TdxFilterBoxTokenCriteriaCustomItemViewInfo* ACriteriaItemViewInfo);
public:
	/* TdxFilterBoxTokenCriteriaElementViewInfo.Destroy */ inline __fastcall virtual ~TdxFilterBoxTokenCriteriaCustomItemElementViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaRemoveButtonViewInfo : public TdxFilterBoxTokenCriteriaElementViewInfo
{
	typedef TdxFilterBoxTokenCriteriaElementViewInfo inherited;
	
private:
	TdxFilterBoxTokenCriteriaRemoveButtonAreaViewInfo* FAreaViewInfo;
	System::Types::TRect FImageBounds;
	Cxlookandfeelpainters::TcxButtonState __fastcall GetDrawState();
	System::Types::TRect __fastcall GetImageMargin();
	System::Types::TSize __fastcall GetImageSize();
	
protected:
	virtual void __fastcall Calculate(int ALeftBound, int ATopBound, int AWidth = 0xffffffff, int AHeight = 0xffffffff)/* overload */;
	virtual void __fastcall Click();
	virtual void __fastcall DoPaint(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	virtual int __fastcall GetHeight();
	virtual int __fastcall GetWidth();
	virtual bool __fastcall HasHitInfo();
	virtual bool __fastcall IsVisibleForPainting();
	virtual bool __fastcall NeedInvalidateOnStateChanged();
	virtual void __fastcall StateChanged();
	__property TdxFilterBoxTokenCriteriaRemoveButtonAreaViewInfo* AreaViewInfo = {read=FAreaViewInfo};
	__property Cxlookandfeelpainters::TcxButtonState DrawState = {read=GetDrawState, nodefault};
	__property System::Types::TRect ImageBounds = {read=FImageBounds};
	__property System::Types::TRect ImageMargin = {read=GetImageMargin};
	__property System::Types::TSize ImageSize = {read=GetImageSize};
	
public:
	__fastcall virtual TdxFilterBoxTokenCriteriaRemoveButtonViewInfo(TdxFilterBoxTokenCriteriaRemoveButtonAreaViewInfo* AAreaViewInfo);
public:
	/* TdxFilterBoxTokenCriteriaElementViewInfo.Destroy */ inline __fastcall virtual ~TdxFilterBoxTokenCriteriaRemoveButtonViewInfo() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Calculate(const System::Types::TRect &ABounds){ TdxFilterBoxTokenCriteriaCustomElementViewInfo::Calculate(ABounds); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaRemoveButtonAreaViewInfo : public TdxFilterBoxTokenCriteriaCustomItemElementViewInfo
{
	typedef TdxFilterBoxTokenCriteriaCustomItemElementViewInfo inherited;
	
private:
	TdxFilterBoxTokenCriteriaRemoveButtonViewInfo* FButton;
	
protected:
	virtual void __fastcall Calculate(int ALeftBound, int ATopBound, int AWidth = 0xffffffff, int AHeight = 0xffffffff)/* overload */;
	virtual void __fastcall CalculateButton();
	virtual int __fastcall CalculateHeight();
	virtual int __fastcall CalculateWidth();
	virtual TdxFilterBoxTokenCriteriaRemoveButtonViewInfo* __fastcall CreateButton();
	virtual void __fastcall DoPaint(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	virtual TdxFilterBoxTokenCriteriaElementViewInfo* __fastcall GetHitInfo(const System::Types::TPoint &APoint);
	virtual bool __fastcall HasHitInfo();
	virtual bool __fastcall NeedInvalidateOnStateChanged();
	__property TdxFilterBoxTokenCriteriaRemoveButtonViewInfo* Button = {read=FButton};
	
public:
	__fastcall virtual TdxFilterBoxTokenCriteriaRemoveButtonAreaViewInfo(TdxFilterBoxTokenCriteriaCustomItemViewInfo* ACriteriaItemViewInfo, bool ANeedBindWithItem);
	__fastcall virtual ~TdxFilterBoxTokenCriteriaRemoveButtonAreaViewInfo();
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Calculate(const System::Types::TRect &ABounds){ TdxFilterBoxTokenCriteriaCustomElementViewInfo::Calculate(ABounds); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaItemElementViewInfo : public TdxFilterBoxTokenCriteriaCustomItemElementViewInfo
{
	typedef TdxFilterBoxTokenCriteriaCustomItemElementViewInfo inherited;
	
private:
	TdxFilterBoxTokenCriteriaItemViewInfo* __fastcall GetCriteriaItemViewInfo();
	
protected:
	__property TdxFilterBoxTokenCriteriaItemViewInfo* CriteriaItemViewInfo = {read=GetCriteriaItemViewInfo};
public:
	/* TdxFilterBoxTokenCriteriaCustomItemElementViewInfo.Create */ inline __fastcall virtual TdxFilterBoxTokenCriteriaItemElementViewInfo(TdxFilterBoxTokenCriteriaCustomItemViewInfo* ACriteriaItemViewInfo) : TdxFilterBoxTokenCriteriaCustomItemElementViewInfo(ACriteriaItemViewInfo) { }
	
public:
	/* TdxFilterBoxTokenCriteriaElementViewInfo.Destroy */ inline __fastcall virtual ~TdxFilterBoxTokenCriteriaItemElementViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaItemCaptionViewInfo : public TdxFilterBoxTokenCriteriaItemElementViewInfo
{
	typedef TdxFilterBoxTokenCriteriaItemElementViewInfo inherited;
	
protected:
	virtual Cxgraphics::TcxViewParams __fastcall CalculateViewParams();
	virtual void __fastcall DrawBackground(Cxgraphics::TcxCanvas* ACanvas);
	virtual System::UnicodeString __fastcall GetText();
	virtual System::Types::TRect __fastcall GetTextMargins();
	virtual bool __fastcall NeedDrawBackground();
public:
	/* TdxFilterBoxTokenCriteriaCustomItemElementViewInfo.Create */ inline __fastcall virtual TdxFilterBoxTokenCriteriaItemCaptionViewInfo(TdxFilterBoxTokenCriteriaCustomItemViewInfo* ACriteriaItemViewInfo) : TdxFilterBoxTokenCriteriaItemElementViewInfo(ACriteriaItemViewInfo) { }
	
public:
	/* TdxFilterBoxTokenCriteriaElementViewInfo.Destroy */ inline __fastcall virtual ~TdxFilterBoxTokenCriteriaItemCaptionViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaItemCustomOperatorViewInfo : public TdxFilterBoxTokenCriteriaItemElementViewInfo
{
	typedef TdxFilterBoxTokenCriteriaItemElementViewInfo inherited;
	
protected:
	virtual Cxgraphics::TcxViewParams __fastcall CalculateViewParams();
	virtual System::Types::TRect __fastcall GetTextMargins();
public:
	/* TdxFilterBoxTokenCriteriaCustomItemElementViewInfo.Create */ inline __fastcall virtual TdxFilterBoxTokenCriteriaItemCustomOperatorViewInfo(TdxFilterBoxTokenCriteriaCustomItemViewInfo* ACriteriaItemViewInfo) : TdxFilterBoxTokenCriteriaItemElementViewInfo(ACriteriaItemViewInfo) { }
	
public:
	/* TdxFilterBoxTokenCriteriaElementViewInfo.Destroy */ inline __fastcall virtual ~TdxFilterBoxTokenCriteriaItemCustomOperatorViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaItemOperatorViewInfo : public TdxFilterBoxTokenCriteriaItemCustomOperatorViewInfo
{
	typedef TdxFilterBoxTokenCriteriaItemCustomOperatorViewInfo inherited;
	
private:
	System::Types::TSize FImageSize;
	bool FIsImageSizeCalculated;
	int FSubIndex;
	System::Types::TSize __fastcall GetImageSize();
	Cxfilter::TcxFilterOperatorKind __fastcall GetKind();
	Cxfilter::TcxFilterOperator* __fastcall GetOperator();
	
protected:
	virtual int __fastcall CalculateHeight();
	virtual System::Types::TSize __fastcall CalculateImageSize();
	virtual int __fastcall CalculateWidth();
	virtual void __fastcall DoPaint(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawBackground(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawImage(Cxgraphics::TcxCanvas* ACanvas);
	virtual System::UnicodeString __fastcall GetText();
	virtual bool __fastcall NeedDrawAsImage();
	virtual bool __fastcall NeedDrawBackground();
	__property System::Types::TSize ImageSize = {read=GetImageSize};
	__property Cxfilter::TcxFilterOperatorKind Kind = {read=GetKind, nodefault};
	__property Cxfilter::TcxFilterOperator* Operator = {read=GetOperator};
	__property int SubIndex = {read=FSubIndex, write=FSubIndex, nodefault};
	
public:
	__fastcall virtual TdxFilterBoxTokenCriteriaItemOperatorViewInfo(TdxFilterBoxTokenCriteriaCustomItemViewInfo* ACriteriaItemViewInfo);
public:
	/* TdxFilterBoxTokenCriteriaElementViewInfo.Destroy */ inline __fastcall virtual ~TdxFilterBoxTokenCriteriaItemOperatorViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaItemAndOperatorViewInfo : public TdxFilterBoxTokenCriteriaItemCustomOperatorViewInfo
{
	typedef TdxFilterBoxTokenCriteriaItemCustomOperatorViewInfo inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetText();
public:
	/* TdxFilterBoxTokenCriteriaCustomItemElementViewInfo.Create */ inline __fastcall virtual TdxFilterBoxTokenCriteriaItemAndOperatorViewInfo(TdxFilterBoxTokenCriteriaCustomItemViewInfo* ACriteriaItemViewInfo) : TdxFilterBoxTokenCriteriaItemCustomOperatorViewInfo(ACriteriaItemViewInfo) { }
	
public:
	/* TdxFilterBoxTokenCriteriaElementViewInfo.Destroy */ inline __fastcall virtual ~TdxFilterBoxTokenCriteriaItemAndOperatorViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaItemToOperatorViewInfo : public TdxFilterBoxTokenCriteriaItemCustomOperatorViewInfo
{
	typedef TdxFilterBoxTokenCriteriaItemCustomOperatorViewInfo inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetText();
public:
	/* TdxFilterBoxTokenCriteriaCustomItemElementViewInfo.Create */ inline __fastcall virtual TdxFilterBoxTokenCriteriaItemToOperatorViewInfo(TdxFilterBoxTokenCriteriaCustomItemViewInfo* ACriteriaItemViewInfo) : TdxFilterBoxTokenCriteriaItemCustomOperatorViewInfo(ACriteriaItemViewInfo) { }
	
public:
	/* TdxFilterBoxTokenCriteriaElementViewInfo.Destroy */ inline __fastcall virtual ~TdxFilterBoxTokenCriteriaItemToOperatorViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaItemDisplayValueViewInfo : public TdxFilterBoxTokenCriteriaItemElementViewInfo
{
	typedef TdxFilterBoxTokenCriteriaItemElementViewInfo inherited;
	
private:
	System::UnicodeString FDisplayValue;
	
protected:
	virtual Cxgraphics::TcxViewParams __fastcall CalculateViewParams();
	virtual void __fastcall DrawBackground(Cxgraphics::TcxCanvas* ACanvas);
	virtual System::UnicodeString __fastcall GetText();
	virtual System::Types::TRect __fastcall GetTextMargins();
	virtual bool __fastcall NeedDrawBackground();
	
public:
	__fastcall virtual TdxFilterBoxTokenCriteriaItemDisplayValueViewInfo(TdxFilterBoxTokenCriteriaItemViewInfo* ACriteriaItemViewInfo, const System::UnicodeString ADisplayValue);
public:
	/* TdxFilterBoxTokenCriteriaElementViewInfo.Destroy */ inline __fastcall virtual ~TdxFilterBoxTokenCriteriaItemDisplayValueViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaListElementViewInfo : public TdxFilterBoxTokenCriteriaCustomItemElementViewInfo
{
	typedef TdxFilterBoxTokenCriteriaCustomItemElementViewInfo inherited;
	
private:
	TdxFilterBoxTokenCriteriaListViewInfo* __fastcall GetCriteriaItemViewInfo();
	
protected:
	__property TdxFilterBoxTokenCriteriaListViewInfo* CriteriaItemViewInfo = {read=GetCriteriaItemViewInfo};
public:
	/* TdxFilterBoxTokenCriteriaCustomItemElementViewInfo.Create */ inline __fastcall virtual TdxFilterBoxTokenCriteriaListElementViewInfo(TdxFilterBoxTokenCriteriaCustomItemViewInfo* ACriteriaItemViewInfo) : TdxFilterBoxTokenCriteriaCustomItemElementViewInfo(ACriteriaItemViewInfo) { }
	
public:
	/* TdxFilterBoxTokenCriteriaElementViewInfo.Destroy */ inline __fastcall virtual ~TdxFilterBoxTokenCriteriaListElementViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaListCustomBoolOperatorViewInfo : public TdxFilterBoxTokenCriteriaListElementViewInfo
{
	typedef TdxFilterBoxTokenCriteriaListElementViewInfo inherited;
	
protected:
	virtual Cxgraphics::TcxViewParams __fastcall CalculateViewParams();
public:
	/* TdxFilterBoxTokenCriteriaCustomItemElementViewInfo.Create */ inline __fastcall virtual TdxFilterBoxTokenCriteriaListCustomBoolOperatorViewInfo(TdxFilterBoxTokenCriteriaCustomItemViewInfo* ACriteriaItemViewInfo) : TdxFilterBoxTokenCriteriaListElementViewInfo(ACriteriaItemViewInfo) { }
	
public:
	/* TdxFilterBoxTokenCriteriaElementViewInfo.Destroy */ inline __fastcall virtual ~TdxFilterBoxTokenCriteriaListCustomBoolOperatorViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaListNotOperatorViewInfo : public TdxFilterBoxTokenCriteriaListCustomBoolOperatorViewInfo
{
	typedef TdxFilterBoxTokenCriteriaListCustomBoolOperatorViewInfo inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetText();
public:
	/* TdxFilterBoxTokenCriteriaCustomItemElementViewInfo.Create */ inline __fastcall virtual TdxFilterBoxTokenCriteriaListNotOperatorViewInfo(TdxFilterBoxTokenCriteriaCustomItemViewInfo* ACriteriaItemViewInfo) : TdxFilterBoxTokenCriteriaListCustomBoolOperatorViewInfo(ACriteriaItemViewInfo) { }
	
public:
	/* TdxFilterBoxTokenCriteriaElementViewInfo.Destroy */ inline __fastcall virtual ~TdxFilterBoxTokenCriteriaListNotOperatorViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaListBoolOperatorViewInfo : public TdxFilterBoxTokenCriteriaListCustomBoolOperatorViewInfo
{
	typedef TdxFilterBoxTokenCriteriaListCustomBoolOperatorViewInfo inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetText();
public:
	/* TdxFilterBoxTokenCriteriaCustomItemElementViewInfo.Create */ inline __fastcall virtual TdxFilterBoxTokenCriteriaListBoolOperatorViewInfo(TdxFilterBoxTokenCriteriaCustomItemViewInfo* ACriteriaItemViewInfo) : TdxFilterBoxTokenCriteriaListCustomBoolOperatorViewInfo(ACriteriaItemViewInfo) { }
	
public:
	/* TdxFilterBoxTokenCriteriaElementViewInfo.Destroy */ inline __fastcall virtual ~TdxFilterBoxTokenCriteriaListBoolOperatorViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaCollectionViewInfo : public TdxFilterBoxTokenCriteriaElementViewInfo
{
	typedef TdxFilterBoxTokenCriteriaElementViewInfo inherited;
	
private:
	System::Types::TRect FContentBounds;
	System::Generics::Collections::TObjectList__1<TdxFilterBoxTokenCriteriaElementViewInfo*>* FElements;
	System::Types::TRect __fastcall GetContentMargins();
	
protected:
	virtual void __fastcall Calculate(int ALeftBound, int ATopBound, int AWidth = 0xffffffff, int AHeight = 0xffffffff)/* overload */;
	virtual System::Types::TRect __fastcall CalculateContentBounds();
	virtual void __fastcall CalculateElements();
	virtual int __fastcall CalculateHeight();
	virtual int __fastcall CalculateWidth();
	virtual System::Types::TRect __fastcall DoGetContentMargins();
	virtual void __fastcall DoPaint(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	virtual TdxFilterBoxTokenCriteriaElementViewInfo* __fastcall GetHitInfo(const System::Types::TPoint &APoint);
	virtual void __fastcall Populate();
	__property System::Types::TRect ContentBounds = {read=FContentBounds};
	__property System::Types::TRect ContentMargins = {read=GetContentMargins};
	__property System::Generics::Collections::TObjectList__1<TdxFilterBoxTokenCriteriaElementViewInfo*>* Elements = {read=FElements};
	
public:
	__fastcall virtual TdxFilterBoxTokenCriteriaCollectionViewInfo(TdxFilterBoxTokenCriteriaViewInfo* ACriteriaViewInfo);
	__fastcall virtual ~TdxFilterBoxTokenCriteriaCollectionViewInfo();
	virtual void __fastcall AfterConstruction();
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Calculate(const System::Types::TRect &ABounds){ TdxFilterBoxTokenCriteriaCustomElementViewInfo::Calculate(ABounds); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaCustomItemViewInfo : public TdxFilterBoxTokenCriteriaCollectionViewInfo
{
	typedef TdxFilterBoxTokenCriteriaCollectionViewInfo inherited;
	
	
private:
	enum DECLSPEC_DENUM TBordersType : unsigned char { None, Brackets, RemovingArea };
	
	
private:
	Cxfilter::TcxCustomFilterCriteriaItem* FCriteriaItem;
	TdxFilterBoxTokenCriteriaRemoveButtonAreaViewInfo* FRemoveButton;
	TBordersType __fastcall GetBordersType();
	int __fastcall GetElementsIndent();
	
protected:
	virtual void __fastcall AddCloseBracketIndent();
	virtual void __fastcall AddIndent(int AWidth);
	virtual void __fastcall AddOpenBracketIndent();
	virtual void __fastcall BindRemoveButton(TdxFilterBoxTokenCriteriaRemoveButtonAreaViewInfo* AButton);
	virtual System::Types::TRect __fastcall DoGetContentMargins();
	virtual void __fastcall DoPaint(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawBorders(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawBrackets(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawRemovingArea(Cxgraphics::TcxCanvas* ACanvas);
	virtual bool __fastcall HasBrackets();
	virtual bool __fastcall HasHitInfo();
	virtual bool __fastcall HasRemoveButton();
	virtual void __fastcall InvalidateOnStateChanged();
	virtual bool __fastcall NeedRemoveButton();
	virtual bool __fastcall NeedInvalidateOnStateChanged();
	virtual void __fastcall Populate();
	virtual void __fastcall PopulateContent();
	__property TBordersType BordersType = {read=GetBordersType, nodefault};
	__property Cxfilter::TcxCustomFilterCriteriaItem* CriteriaItem = {read=FCriteriaItem};
	__property int ElementsIndent = {read=GetElementsIndent, nodefault};
	
public:
	__fastcall virtual TdxFilterBoxTokenCriteriaCustomItemViewInfo(TdxFilterBoxTokenCriteriaViewInfo* ACriteriaViewInfo, Cxfilter::TcxCustomFilterCriteriaItem* ACriteriaItem);
public:
	/* TdxFilterBoxTokenCriteriaCollectionViewInfo.Destroy */ inline __fastcall virtual ~TdxFilterBoxTokenCriteriaCustomItemViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaItemViewInfo : public TdxFilterBoxTokenCriteriaCustomItemViewInfo
{
	typedef TdxFilterBoxTokenCriteriaCustomItemViewInfo inherited;
	
private:
	System::UnicodeString __fastcall GetCaption();
	TdxFilterBoxTokenCriteriaItem* __fastcall GetCriteriaItem();
	
protected:
	virtual void __fastcall AddAndOperator();
	virtual void __fastcall AddDisplayValue(const System::UnicodeString ADisplayValue);
	virtual void __fastcall AddDisplayValues();
	virtual void __fastcall AddDisplayValueSeparator();
	virtual void __fastcall AddItemCaption();
	virtual TdxFilterBoxTokenCriteriaItemOperatorViewInfo* __fastcall AddOperator(int ASubIndex = 0xffffffff);
	virtual void __fastcall AddToOperator();
	virtual bool __fastcall HasManyDisplayValues();
	virtual void __fastcall PopulateContent();
	__property System::UnicodeString Caption = {read=GetCaption};
	__property TdxFilterBoxTokenCriteriaItem* CriteriaItem = {read=GetCriteriaItem};
public:
	/* TdxFilterBoxTokenCriteriaCustomItemViewInfo.Create */ inline __fastcall virtual TdxFilterBoxTokenCriteriaItemViewInfo(TdxFilterBoxTokenCriteriaViewInfo* ACriteriaViewInfo, Cxfilter::TcxCustomFilterCriteriaItem* ACriteriaItem) : TdxFilterBoxTokenCriteriaCustomItemViewInfo(ACriteriaViewInfo, ACriteriaItem) { }
	
public:
	/* TdxFilterBoxTokenCriteriaCollectionViewInfo.Destroy */ inline __fastcall virtual ~TdxFilterBoxTokenCriteriaItemViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaListViewInfo : public TdxFilterBoxTokenCriteriaCustomItemViewInfo
{
	typedef TdxFilterBoxTokenCriteriaCustomItemViewInfo inherited;
	
private:
	bool FAuxiliary;
	int FRemoveButtonWidth;
	bool FRemoveButtonWidthCalculated;
	Cxfilter::TcxFilterCriteriaItemList* __fastcall GetCriteriaItem();
	int __fastcall GetNotOperatorLeftIndent();
	int __fastcall GetNotOperatorRightIndent();
	int __fastcall GetRemoveButtonWidth();
	
protected:
	virtual void __fastcall AddBoolOperator();
	virtual void __fastcall AddCloseBracketIndent();
	virtual void __fastcall AddRemoveButton(TdxFilterBoxTokenCriteriaCustomItemViewInfo* ACriteriaItemViewInfo);
	virtual TdxFilterBoxTokenCriteriaItemViewInfo* __fastcall AddItem(TdxFilterBoxTokenCriteriaItem* ACriteriaItem);
	virtual TdxFilterBoxTokenCriteriaListViewInfo* __fastcall AddItemList(Cxfilter::TcxFilterCriteriaItemList* ACriteriaItem, bool AAuxiliary = false);
	virtual void __fastcall AddNotOperator();
	virtual void __fastcall AddOpenBracketIndent();
	virtual bool __fastcall ContainsNotOperator();
	virtual TdxFilterBoxTokenCriteriaRemoveButtonAreaViewInfo* __fastcall CreateRemoveButton(TdxFilterBoxTokenCriteriaCustomItemViewInfo* ACriteriaItemViewInfo, bool ANeedBindWithItem = true);
	virtual System::UnicodeString __fastcall GetText();
	virtual System::Types::TRect __fastcall GetTextMargins();
	virtual bool __fastcall HasBrackets();
	virtual void __fastcall PopulateAuxiliaryItemList();
	virtual void __fastcall PopulateContent();
	__property bool Auxiliary = {read=FAuxiliary, nodefault};
	__property Cxfilter::TcxFilterCriteriaItemList* CriteriaItem = {read=GetCriteriaItem};
	__property int NotOperatorLeftIndent = {read=GetNotOperatorLeftIndent, nodefault};
	__property int NotOperatorRightIndent = {read=GetNotOperatorRightIndent, nodefault};
	__property int RemoveButtonWidth = {read=GetRemoveButtonWidth, nodefault};
	
public:
	__fastcall virtual TdxFilterBoxTokenCriteriaListViewInfo(TdxFilterBoxTokenCriteriaViewInfo* ACriteriaViewInfo, Cxfilter::TcxFilterCriteriaItemList* AItemList, bool AAuxiliary);
public:
	/* TdxFilterBoxTokenCriteriaCollectionViewInfo.Destroy */ inline __fastcall virtual ~TdxFilterBoxTokenCriteriaListViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaViewInfo : public TdxFilterBoxTokenCriteriaCustomElementViewInfo
{
	typedef TdxFilterBoxTokenCriteriaCustomElementViewInfo inherited;
	
private:
	Cxcontrols::TcxControl* FControl;
	TdxFilterBoxTokenCriteria* FCriteria;
	TdxFilterBoxTokenCriteriaElementViewInfo* FHotElement;
	TdxFilterBoxTokenCriteriaOptions* FOptions;
	_di_IdxFilterBoxTokenCriteriaViewInfoOwner FOwner;
	Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* FPainter;
	Cxlookandfeelpainters::TdxFilterTokenParams FPainterParams;
	bool FPainterParamsCalculated;
	TdxFilterBoxTokenCriteriaElementViewInfo* FPressedElement;
	TdxFilterBoxTokenCriteriaListViewInfo* FRootViewInfo;
	Cxgeometry::TdxScaleFactor* FScaleFactor;
	void __fastcall AdjustTokenPadding(System::Types::TRect &APadding);
	int __fastcall GetContentHeight();
	System::Types::TRect __fastcall GetContentMargins();
	int __fastcall GetContentWidth();
	Cxlookandfeelpainters::TdxFilterTokenParams __fastcall GetPainterParams();
	void __fastcall SetHotElement(TdxFilterBoxTokenCriteriaElementViewInfo* AValue);
	void __fastcall SetPressedElement(TdxFilterBoxTokenCriteriaElementViewInfo* AValue);
	
protected:
	virtual void __fastcall Calculate(int ALeftBound, int ATopBound, int AWidth = 0xffffffff, int AHeight = 0xffffffff)/* overload */;
	virtual int __fastcall CalculateHeight();
	virtual void __fastcall CalculateRootViewInfo();
	virtual Cxgraphics::TcxViewParams __fastcall CalculateViewParams();
	virtual int __fastcall CalculateWidth();
	virtual void __fastcall DoPaint(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	virtual Cxcontrols::TcxControl* __fastcall GetControl();
	virtual TdxFilterBoxTokenCriteria* __fastcall GetCriteria();
	virtual int __fastcall GetHeight();
	virtual Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetPainter();
	virtual Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	virtual int __fastcall GetWidth();
	virtual void __fastcall MouseLeave();
	__property System::Types::TRect ContentMargins = {read=GetContentMargins};
	__property TdxFilterBoxTokenCriteriaElementViewInfo* HotElement = {read=FHotElement, write=SetHotElement};
	__property TdxFilterBoxTokenCriteriaOptions* Options = {read=FOptions};
	__property _di_IdxFilterBoxTokenCriteriaViewInfoOwner Owner = {read=FOwner};
	__property Cxlookandfeelpainters::TdxFilterTokenParams PainterParams = {read=GetPainterParams};
	__property TdxFilterBoxTokenCriteriaElementViewInfo* PressedElement = {read=FPressedElement, write=SetPressedElement};
	__property TdxFilterBoxTokenCriteriaListViewInfo* RootViewInfo = {read=FRootViewInfo};
	
public:
	__fastcall virtual TdxFilterBoxTokenCriteriaViewInfo(_di_IdxFilterBoxTokenCriteriaViewInfoOwner AOwner);
	__fastcall virtual ~TdxFilterBoxTokenCriteriaViewInfo();
	bool __fastcall HasMouse(const System::Types::TPoint &APoint);
	virtual void __fastcall MouseDown(const System::Types::TPoint &APoint);
	virtual void __fastcall MouseMove(const System::Types::TPoint &APoint);
	virtual void __fastcall MouseUp(const System::Types::TPoint &APoint);
	__property int ContentHeight = {read=GetContentHeight, nodefault};
	__property int ContentWidth = {read=GetContentWidth, nodefault};
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Calculate(const System::Types::TRect &ABounds){ TdxFilterBoxTokenCriteriaCustomElementViewInfo::Calculate(ABounds); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaFromToOperator : public Cxfilter::TcxFilterOperator
{
	typedef Cxfilter::TcxFilterOperator inherited;
	
public:
	virtual System::UnicodeString __fastcall DisplayText();
public:
	/* TcxFilterOperator.Create */ inline __fastcall virtual TdxFilterBoxTokenCriteriaFromToOperator(Cxfilter::TcxFilterCriteriaItem* ACriteriaItem) : Cxfilter::TcxFilterOperator(ACriteriaItem) { }
	/* TcxFilterOperator.Destroy */ inline __fastcall virtual ~TdxFilterBoxTokenCriteriaFromToOperator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaDateListOperator : public Cxfilter::TcxFilterOperator
{
	typedef Cxfilter::TcxFilterOperator inherited;
	
public:
	virtual System::UnicodeString __fastcall DisplayText();
	virtual bool __fastcall IsUnary();
public:
	/* TcxFilterOperator.Create */ inline __fastcall virtual TdxFilterBoxTokenCriteriaDateListOperator(Cxfilter::TcxFilterCriteriaItem* ACriteriaItem) : Cxfilter::TcxFilterOperator(ACriteriaItem) { }
	/* TcxFilterOperator.Destroy */ inline __fastcall virtual ~TdxFilterBoxTokenCriteriaDateListOperator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaItemSubOperator : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Cxfilter::TcxFilterOperatorKind FKind;
	Cxfilter::TcxFilterOperator* FOperator;
	TdxFilterBoxTokenCriteriaItemSubOperators* FOwner;
	
protected:
	virtual Cxfilter::TcxFilterOperator* __fastcall CreateOperator();
	__property TdxFilterBoxTokenCriteriaItemSubOperators* Owner = {read=FOwner};
	
public:
	__fastcall TdxFilterBoxTokenCriteriaItemSubOperator(TdxFilterBoxTokenCriteriaItemSubOperators* AOwner, Cxfilter::TcxFilterOperatorKind AKind);
	__fastcall virtual ~TdxFilterBoxTokenCriteriaItemSubOperator();
	Cxfilter::TcxFilterOperatorKind __fastcall Kind();
	Cxfilter::TcxFilterOperator* __fastcall Operator();
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaItemSubOperators : public System::Generics::Collections::TObjectList__1<TdxFilterBoxTokenCriteriaItemSubOperator*>
{
	typedef System::Generics::Collections::TObjectList__1<TdxFilterBoxTokenCriteriaItemSubOperator*> inherited;
	
private:
	TdxFilterBoxTokenCriteriaItem* FItem;
	
protected:
	virtual TdxFilterBoxTokenCriteriaItemSubOperator* __fastcall CreateSubOperator(Cxfilter::TcxFilterOperatorKind AKind);
	__property TdxFilterBoxTokenCriteriaItem* Item = {read=FItem};
	
public:
	__fastcall virtual TdxFilterBoxTokenCriteriaItemSubOperators(TdxFilterBoxTokenCriteriaItem* AItem);
	HIDESBASE void __fastcall Add(Cxfilter::TcxFilterOperatorKind AKind);
	HIDESBASE bool __fastcall Contains(Cxfilter::TcxFilterOperatorKind AKind);
public:
	/* {System_Generics_Collections}TObjectList<dxFilterBox_TdxFilterBoxTokenCriteriaItemSubOperator>.Destroy */ inline __fastcall virtual ~TdxFilterBoxTokenCriteriaItemSubOperators() { }
	
};


class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaItem : public Cxcustomdata::TcxDataFilterCriteriaItem
{
	typedef Cxcustomdata::TcxDataFilterCriteriaItem inherited;
	
private:
	TdxFilterBoxTokenCriteriaExtOperatorKind FExtOperatorKind;
	TdxFilterBoxTokenCriteriaItemSubOperators* FSubOperators;
	void __fastcall SetExtOperatorKind(TdxFilterBoxTokenCriteriaExtOperatorKind AValue);
	
protected:
	void __fastcall AddSubOperator(Cxfilter::TcxFilterOperatorKind AKind);
	virtual void __fastcall AssignSubOperators(TdxFilterBoxTokenCriteriaItemSubOperators* ASource);
	virtual Cxfilter::TcxFilterOperatorClass __fastcall GetFilterOperatorClass()/* overload */;
	__property TdxFilterBoxTokenCriteriaExtOperatorKind ExtOperatorKind = {read=FExtOperatorKind, write=SetExtOperatorKind, nodefault};
	__property TdxFilterBoxTokenCriteriaItemSubOperators* SubOperators = {read=FSubOperators};
	
public:
	__fastcall virtual TdxFilterBoxTokenCriteriaItem(Cxfilter::TcxFilterCriteriaItemList* AOwner, System::TObject* AItemLink, Cxfilter::TcxFilterOperatorKind AOperatorKind, const System::Variant &AValue, const System::UnicodeString ADisplayValue);
	__fastcall virtual ~TdxFilterBoxTokenCriteriaItem();
	/* Hoisted overloads: */
	
protected:
	inline Cxfilter::TcxFilterOperatorClass __fastcall  GetFilterOperatorClass(Cxfilter::TcxFilterOperatorKind AKind){ return Cxfilter::TcxFilterCriteriaItem::GetFilterOperatorClass(AKind); }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaCustomMerger : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void __fastcall LoadCriteria(TdxFilterBoxTokenCriteria* ACriteria, TdxFilterBoxTokenCriteria* ASourceCriteria);
	void __fastcall LoadList(Cxfilter::TcxFilterCriteriaItemList* AList, Cxfilter::TcxFilterCriteriaItemList* ASourceList);
	
protected:
	Cxfilter::TcxFilterCriteriaItem* __fastcall CloneExpressionItem(Cxfilter::TcxFilterCriteriaItem* AItem, Cxfilter::TcxFilterCriteriaItemList* AParent);
	TdxFilterBoxTokenCriteriaItem* __fastcall CloneItem(TdxFilterBoxTokenCriteriaItem* AItem, Cxfilter::TcxFilterCriteriaItemList* AParent);
	Cxfilter::TcxFilterCriteriaItemList* __fastcall CloneList(Cxfilter::TcxFilterCriteriaItemList* AList, Cxfilter::TcxFilterCriteriaItemList* AParent);
	virtual void __fastcall PopulateMergedCriteria(TdxFilterBoxTokenCriteria* ACriteria, TdxFilterBoxTokenCriteria* ASourceCriteria, /* out */ bool &AHasMerge);
	virtual void __fastcall PopulateMergedList(Cxfilter::TcxFilterCriteriaItemList* AList, Cxfilter::TcxFilterCriteriaItemList* ASourceList, /* out */ bool &AHasMerge) = 0 ;
	
public:
	bool __fastcall Merge(TdxFilterBoxTokenCriteria* ACriteria);
public:
	/* TObject.Create */ inline __fastcall TdxFilterBoxTokenCriteriaCustomMerger() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxFilterBoxTokenCriteriaCustomMerger() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TdxFilterBoxTokenCriteriaCustomMergerClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaListMerger : public TdxFilterBoxTokenCriteriaCustomMerger
{
	typedef TdxFilterBoxTokenCriteriaCustomMerger inherited;
	
private:
	bool __fastcall NeedMerge(Cxfilter::TcxFilterCriteriaItemList* AList, Cxfilter::TcxFilterCriteriaItemList* AParentList);
	
protected:
	virtual void __fastcall PopulateMergedCriteria(TdxFilterBoxTokenCriteria* ACriteria, TdxFilterBoxTokenCriteria* ASourceCriteria, /* out */ bool &AHasMerge);
	virtual void __fastcall PopulateMergedList(Cxfilter::TcxFilterCriteriaItemList* AList, Cxfilter::TcxFilterCriteriaItemList* ASourceList, /* out */ bool &AHasMerge);
public:
	/* TObject.Create */ inline __fastcall TdxFilterBoxTokenCriteriaListMerger() : TdxFilterBoxTokenCriteriaCustomMerger() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxFilterBoxTokenCriteriaListMerger() { }
	
};

#pragma pack(pop)

typedef void __fastcall (__closure *TdxFilterBoxTokenCriteriaItemMergeProc)(TdxFilterBoxTokenCriteriaItem* AItem, TdxFilterBoxTokenCriteriaItem* AMergeItem);

typedef bool __fastcall (__closure *TdxFilterBoxTokenCriteriaItemSupportsMergeFunc)(TdxFilterBoxTokenCriteriaItem* AItem, TdxFilterBoxTokenCriteriaItem* AMergeItem);

class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaItemMergeInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Generics::Collections::TDictionary__2<System::TObject*,TdxFilterBoxTokenCriteriaItem*>* FMergedItems;
	TdxFilterBoxTokenCriteriaItemMergeProc FMergeProc;
	TdxFilterBoxTokenCriteriaItemSupportsMergeFunc FSupportsMergeFunc;
	
protected:
	__property System::Generics::Collections::TDictionary__2<System::TObject*,TdxFilterBoxTokenCriteriaItem*>* MergedItems = {read=FMergedItems};
	__property TdxFilterBoxTokenCriteriaItemMergeProc MergeProc = {read=FMergeProc};
	__property TdxFilterBoxTokenCriteriaItemSupportsMergeFunc SupportsMergeFunc = {read=FSupportsMergeFunc};
	
public:
	__fastcall TdxFilterBoxTokenCriteriaItemMergeInfo(TdxFilterBoxTokenCriteriaItemMergeProc AMergeProc, TdxFilterBoxTokenCriteriaItemSupportsMergeFunc ASupportsMergeFunc);
	__fastcall virtual ~TdxFilterBoxTokenCriteriaItemMergeInfo();
	bool __fastcall Merge(TdxFilterBoxTokenCriteriaItem* AItem);
	void __fastcall RegisterMergedItem(TdxFilterBoxTokenCriteriaItem* AItem);
	bool __fastcall SupportsMerge(TdxFilterBoxTokenCriteriaItem* AItem);
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaItemMergeInfos : public Dxcoreclasses::TdxFastObjectList
{
	typedef Dxcoreclasses::TdxFastObjectList inherited;
	
public:
	TdxFilterBoxTokenCriteriaItemMergeInfo* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TdxFilterBoxTokenCriteriaItemMergeInfo* __fastcall GetItem(int AIndex);
	
public:
	HIDESBASE void __fastcall Add(TdxFilterBoxTokenCriteriaItemMergeProc AMergeProc, TdxFilterBoxTokenCriteriaItemSupportsMergeFunc AIsItemSupportedFunc);
	TdxFilterBoxTokenCriteriaItemMergeInfo* __fastcall Find(TdxFilterBoxTokenCriteriaItem* AItem);
	__property TdxFilterBoxTokenCriteriaItemMergeInfo* Items[int Index] = {read=GetItem/*, default*/};
public:
	/* TdxFastObjectList.Create */ inline __fastcall TdxFilterBoxTokenCriteriaItemMergeInfos(bool AOwnsObjects, int ACapacity) : Dxcoreclasses::TdxFastObjectList(AOwnsObjects, ACapacity) { }
	
public:
	/* TdxFastList.Destroy */ inline __fastcall virtual ~TdxFilterBoxTokenCriteriaItemMergeInfos() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaItemMerger : public TdxFilterBoxTokenCriteriaCustomMerger
{
	typedef TdxFilterBoxTokenCriteriaCustomMerger inherited;
	
protected:
	virtual TdxFilterBoxTokenCriteriaItemMergeInfos* __fastcall CreateInfos();
	virtual void __fastcall PopulateInfos(TdxFilterBoxTokenCriteriaItemMergeInfos* AInfos);
	virtual void __fastcall PopulateMergedList(Cxfilter::TcxFilterCriteriaItemList* AList, Cxfilter::TcxFilterCriteriaItemList* ASourceList, /* out */ bool &AHasMerge);
	virtual void __fastcall MergeDateProc(TdxFilterBoxTokenCriteriaItem* AItem, TdxFilterBoxTokenCriteriaItem* AMergeItem);
	virtual void __fastcall MergeFromToProc(TdxFilterBoxTokenCriteriaItem* AItem, TdxFilterBoxTokenCriteriaItem* AMergeItem);
	virtual void __fastcall MergeInListProc(TdxFilterBoxTokenCriteriaItem* AItem, TdxFilterBoxTokenCriteriaItem* AMergeItem);
	virtual void __fastcall MergeNotInListProc(TdxFilterBoxTokenCriteriaItem* AItem, TdxFilterBoxTokenCriteriaItem* AMergeItem);
	virtual bool __fastcall SupportsMergeDate(TdxFilterBoxTokenCriteriaItem* AItem, TdxFilterBoxTokenCriteriaItem* AMergeItem);
	virtual bool __fastcall SupportsMergeFromTo(TdxFilterBoxTokenCriteriaItem* AItem, TdxFilterBoxTokenCriteriaItem* AMergeItem);
	virtual bool __fastcall SupportsMergeInList(TdxFilterBoxTokenCriteriaItem* AItem, TdxFilterBoxTokenCriteriaItem* AMergeItem);
	virtual bool __fastcall SupportsMergeNotInList(TdxFilterBoxTokenCriteriaItem* AItem, TdxFilterBoxTokenCriteriaItem* AMergeItem);
public:
	/* TObject.Create */ inline __fastcall TdxFilterBoxTokenCriteriaItemMerger() : TdxFilterBoxTokenCriteriaCustomMerger() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxFilterBoxTokenCriteriaItemMerger() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteriaSimplificator : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TdxFilterBoxTokenCriteria* FCriteria;
	void __fastcall Merge();
	bool __fastcall MergeItems();
	bool __fastcall MergeLists();
	void __fastcall RemoveEmptyItems(Cxfilter::TcxFilterCriteriaItemList* AList = (Cxfilter::TcxFilterCriteriaItemList*)(0x0));
	
protected:
	virtual bool __fastcall DoMerge(TdxFilterBoxTokenCriteriaCustomMergerClass AMergerClass);
	__property TdxFilterBoxTokenCriteria* Criteria = {read=FCriteria};
	
public:
	__fastcall virtual TdxFilterBoxTokenCriteriaSimplificator(TdxFilterBoxTokenCriteria* ACriteria);
	virtual void __fastcall Simplify();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxFilterBoxTokenCriteriaSimplificator() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxFilterBoxTokenCriteria : public Cxcustomdata::TcxDataFilterCriteria
{
	typedef Cxcustomdata::TcxDataFilterCriteria inherited;
	
private:
	Cxcustomdata::TcxDataFilterCriteria* FSourceCriteria;
	
protected:
	virtual void __fastcall CloneItemToSourceCriteria(TdxFilterBoxTokenCriteriaItem* AItem, Cxfilter::TcxFilterCriteriaItemList* AParent);
	virtual TdxFilterBoxTokenCriteriaSimplificator* __fastcall CreateSimplificator();
	virtual System::UnicodeString __fastcall GetFilterCaption();
	virtual Cxfilter::TcxFilterCriteriaItemClass __fastcall GetItemClass();
	virtual bool __fastcall IsInternal();
	virtual void __fastcall PopulateSourceCriteria();
	virtual void __fastcall PopulateSourceCriteriaList(Cxfilter::TcxFilterCriteriaItemList* AList, Cxfilter::TcxFilterCriteriaItemList* AOriginalList);
	__property Cxcustomdata::TcxDataFilterCriteria* SourceCriteria = {read=FSourceCriteria};
	
public:
	__fastcall virtual TdxFilterBoxTokenCriteria(Cxcustomdata::TcxDataFilterCriteria* ASourceCriteria);
	void __fastcall Simplify();
	void __fastcall UpdateBySourceCriteria();
	void __fastcall UpdateSourceCriteria();
public:
	/* TcxDataFilterCriteria.Destroy */ inline __fastcall virtual ~TdxFilterBoxTokenCriteria() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dxfilterbox */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXFILTERBOX)
using namespace Dxfilterbox;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxfilterboxHPP
