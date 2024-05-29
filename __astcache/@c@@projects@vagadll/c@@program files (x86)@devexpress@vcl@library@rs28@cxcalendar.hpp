// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxCalendar.pas' rev: 35.00 (Windows)

#ifndef CxcalendarHPP
#define CxcalendarHPP

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
#include <System.DateUtils.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Clipbrd.hpp>
#include <System.RTLConsts.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Generics.Collections.hpp>
#include <dxCore.hpp>
#include <dxCoreClasses.hpp>
#include <cxClasses.hpp>
#include <cxGraphics.hpp>
#include <cxControls.hpp>
#include <cxContainer.hpp>
#include <cxDataStorage.hpp>
#include <cxDataUtils.hpp>
#include <cxGeometry.hpp>
#include <cxEdit.hpp>
#include <cxDropDownEdit.hpp>
#include <cxTextEdit.hpp>
#include <cxMaskEdit.hpp>
#include <cxButtons.hpp>
#include <cxDateUtils.hpp>
#include <dxCalendarUtils.hpp>
#include <dxGDIPlusClasses.hpp>
#include <cxEditConsts.hpp>
#include <cxFormats.hpp>
#include <cxTimeEdit.hpp>
#include <cxFilterControlUtils.hpp>
#include <cxLookAndFeels.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <dxAnimation.hpp>
#include <dxFading.hpp>
#include <dxDateTimeWheelPicker.hpp>
#include <dxTypeHelpers.hpp>
#include <cxAccessibility.hpp>
#include <dxForms.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxcalendar
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxClock;
class DELPHICLASS TcxMonthListBox;
class DELPHICLASS TcxCalendarElementFadingHelper;
class DELPHICLASS TdxCalendarElementAccessibilityHelper;
class DELPHICLASS TdxCalendarButtonAccessibilityHelper;
class DELPHICLASS TcxCalendarElementViewInfo;
class DELPHICLASS TdxCalendarArrowAccessibilityHelper;
class DELPHICLASS TcxCalendarArrowViewInfo;
class DELPHICLASS TcxCalendarModernArrowViewInfo;
class DELPHICLASS TdxCalendarDateCellSelectionItemProvider;
class DELPHICLASS TdxCalendarDateCellAccessibilityHelper;
class DELPHICLASS TcxCalendarDateCellViewInfo;
class DELPHICLASS TcxCalendarDayCellViewInfo;
class DELPHICLASS TcxCalendarModernDayCellViewInfo;
class DELPHICLASS TcxCalendarModernLargeCellViewInfo;
class DELPHICLASS TcxCalendarModernMonthCellViewInfo;
class DELPHICLASS TcxCalendarModernYearCellViewInfo;
class DELPHICLASS TcxCalendarModernDecadeCellViewInfo;
class DELPHICLASS TcxCalendarDateTableViewInfo;
class DELPHICLASS TcxCalendarMonthTableViewInfo;
class DELPHICLASS TcxCalendarModernMonthTableViewInfo;
class DELPHICLASS TcxCalendarModernLargeCellTableViewInfo;
class DELPHICLASS TcxCalendarModernYearTableViewInfo;
class DELPHICLASS TcxCalendarModernDecadeTableViewInfo;
class DELPHICLASS TcxCalendarModernCenturyTableViewInfo;
class DELPHICLASS TdxCalendarDateHeaderCellAccessibilityHelper;
class DELPHICLASS TcxCalendarDateHeaderCellViewInfo;
class DELPHICLASS TcxCalendarYearDateHeaderCellViewInfo;
class DELPHICLASS TcxCalendarMonthDateHeaderCellViewInfo;
class DELPHICLASS TcxCalendarModernDateHeaderCellViewInfo;
class DELPHICLASS TcxCalendarDateHeaderViewInfo;
class DELPHICLASS TcxCalendarMonthDateHeaderViewInfo;
class DELPHICLASS TcxCalendarModernMonthDateHeaderViewInfo;
class DELPHICLASS TcxCalendarYearDateHeaderViewInfo;
class DELPHICLASS TcxCalendarDateHeadersViewInfo;
class DELPHICLASS TcxCalendarClassicDateHeadersViewInfo;
class DELPHICLASS TcxCalendarModernDateHeadersViewInfo;
class DELPHICLASS TcxCalendarDateViewInfo;
struct TcxCalendarAnimatedImageState;
class DELPHICLASS TcxCalendarAnimatedImageInfo;
class DELPHICLASS TcxCalendarModernDateViewAnimationController;
class DELPHICLASS TcxCalendarModernDateViewInfo;
class DELPHICLASS TdxCalendarHeaderAccessibilityHelper;
class DELPHICLASS TcxCalendarHeaderViewInfo;
class DELPHICLASS TcxCalendarModernHeaderViewInfo;
class DELPHICLASS TdxCalendarClockAccessibilityHelper;
class DELPHICLASS TcxCalendarClockViewInfo;
class DELPHICLASS TcxCalendarTimeEditViewInfo;
class DELPHICLASS TcxCalendarTimeViewInfo;
class DELPHICLASS TcxCalendarModernClockViewInfo;
class DELPHICLASS TcxCalendarModernTimeViewInfo;
class DELPHICLASS TcxCalendarButtonViewInfo;
class DELPHICLASS TcxCalendarButtonsViewInfo;
class DELPHICLASS TcxCalendarModernButtonsViewInfo;
class DELPHICLASS TcxCalendarTouchUIButtonsViewInfo;
class DELPHICLASS TcxCalendarViewInfo;
class DELPHICLASS TcxCalendarClassicViewInfo;
class DELPHICLASS TcxCalendarModernViewInfo;
class DELPHICLASS TcxCalendarTouchUIViewInfo;
class DELPHICLASS TcxCalendarHitTest;
class DELPHICLASS TcxCalendarController;
class DELPHICLASS TcxCalendarClassicController;
class DELPHICLASS TcxCalendarModernController;
class DELPHICLASS TcxCalendarTouchUIController;
class DELPHICLASS TcxCalendarPainter;
class DELPHICLASS TcxCalendarModernPainter;
class DELPHICLASS TcxCalendarTouchUIPainter;
class DELPHICLASS TcxCustomCalendar;
class DELPHICLASS TcxPopupCalendar;
class DELPHICLASS TcxDateEditPropertiesValues;
class DELPHICLASS TcxCustomDateEditProperties;
class DELPHICLASS TcxDateEditProperties;
class DELPHICLASS TcxDateEditPopupWindow;
class DELPHICLASS TcxDateEditMaskStandardMode;
class DELPHICLASS TcxCustomDateEdit;
class DELPHICLASS TcxDateEdit;
class DELPHICLASS TcxFilterDateEditHelper;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TCalendarButton : unsigned char { btnClear, btnNow, btnToday, btnOk, btnCancel };

typedef TCalendarButton TDateButton;

typedef System::Set<TDateButton, TDateButton::btnClear, TDateButton::btnToday> TDateButtons;

enum DECLSPEC_DENUM TcxCalendarArrow : unsigned char { caPrevMonth, caNextMonth, caPrevYear, caNextYear, caPrevDecade, caNextDecade, caPrevCentury, caNextCentury };

enum DECLSPEC_DENUM TcxCalendarKind : unsigned char { ckDate, ckDateTime };

class PASCALIMPLEMENTATION TcxClock : public Cxcontrols::TcxControl
{
	typedef Cxcontrols::TcxControl inherited;
	
private:
	System::TTime FTime;
	System::Uitypes::TColor __fastcall GetBackgroundColor();
	void __fastcall SetTime(System::TTime Value);
	
protected:
	virtual bool __fastcall CanAutoSize(int &ANewWidth, int &ANewHeight);
	virtual void __fastcall Paint();
	virtual void __fastcall LookAndFeelChanged(Cxlookandfeels::TcxLookAndFeel* Sender, Cxlookandfeels::TcxLookAndFeelValues AChangedValues);
	__property System::Uitypes::TColor BackgroundColor = {read=GetBackgroundColor, nodefault};
	
public:
	__fastcall virtual TcxClock(System::Classes::TComponent* AOwner);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	
__published:
	__property AutoSize = {default=0};
	__property Color = {default=-16777211};
	__property LookAndFeel;
	__property ParentColor = {default=1};
	__property System::TTime Time = {read=FTime, write=SetTime};
	__property Transparent = {default=0};
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
public:
	/* TcxControl.Destroy */ inline __fastcall virtual ~TcxClock() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxClock(HWND ParentWindow) : Cxcontrols::TcxControl(ParentWindow) { }
	
private:
	void *__IdxSkinSupport;	// Cxlookandfeels::IdxSkinSupport 
	
public:
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


class PASCALIMPLEMENTATION TcxMonthListBox : public Cxcontainer::TcxCustomPopupWindow
{
	typedef Cxcontainer::TcxCustomPopupWindow inherited;
	
private:
	Cxdateutils::TcxDateTime FCurrentDate;
	System::Types::TPoint FOrigin;
	int FTopMonthDelta;
	int FItemHeight;
	int FItemIndex;
	int FItemCount;
	int FSign;
	bool FShowYears;
	Cxclasses::TcxTimer* FTimer;
	void __fastcall DoTimer(System::TObject* Sender);
	TcxCustomCalendar* __fastcall GetCalendar();
	Cxdateutils::TcxCustomCalendarTable* __fastcall GetCalendarTable();
	TcxCalendarClassicViewInfo* __fastcall GetCalendarViewInfo();
	System::TDateTime __fastcall GetDate();
	void __fastcall SetItemIndex(int Value);
	void __fastcall SetShowYears(const bool Value);
	void __fastcall SetTopMonthDelta(int Value);
	
protected:
	virtual System::Types::TPoint __fastcall CalculatePosition(const System::Types::TSize &ASize);
	DYNAMIC void __fastcall Click();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall DoShowed();
	HIDESBASE void __fastcall FontChanged();
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall Paint();
	__property TcxCustomCalendar* Calendar = {read=GetCalendar};
	__property Cxdateutils::TcxCustomCalendarTable* CalendarTable = {read=GetCalendarTable};
	__property int ItemHeight = {read=FItemHeight, nodefault};
	__property int ItemIndex = {read=FItemIndex, write=SetItemIndex, nodefault};
	__property bool ShowYears = {read=FShowYears, write=SetShowYears, nodefault};
	__property int TopMonthDelta = {read=FTopMonthDelta, write=SetTopMonthDelta, nodefault};
	
public:
	__fastcall virtual TcxMonthListBox(Vcl::Controls::TWinControl* AOwnerControl);
	__fastcall virtual ~TcxMonthListBox();
	virtual void __fastcall CloseUp();
	virtual void __fastcall Popup(Vcl::Controls::TWinControl* AFocusedControl);
	__property System::TDateTime Date = {read=GetDate};
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TcxMonthListBox(System::Classes::TComponent* AOwner, int Dummy) : Cxcontainer::TcxCustomPopupWindow(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxMonthListBox(HWND ParentWindow) : Cxcontainer::TcxCustomPopupWindow(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCalendarElementFadingHelper : public Dxfading::TdxFadingObjectHelper
{
	typedef Dxfading::TdxFadingObjectHelper inherited;
	
private:
	TcxCalendarElementViewInfo* FOwner;
	
protected:
	virtual bool __fastcall CanFade();
	virtual void __fastcall DrawFadeImage();
	virtual void __fastcall GetFadingImages(/* out */ Cxgraphics::TcxBitmap* &AFadeOutImage, /* out */ Cxgraphics::TcxBitmap* &AFadeInImage);
	
public:
	__fastcall TcxCalendarElementFadingHelper(TcxCalendarElementViewInfo* AOwner);
	__property TcxCalendarElementViewInfo* Owner = {read=FOwner};
public:
	/* TdxFadingObjectHelper.Destroy */ inline __fastcall virtual ~TcxCalendarElementFadingHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCalendarElementAccessibilityHelper : public Cxaccessibility::TcxAccessibilityHelper
{
	typedef Cxaccessibility::TcxAccessibilityHelper inherited;
	
private:
	System::Classes::TInterfaceList* FIAccessibilityChildren;
	Cxaccessibility::TcxAccessibilityHelper* FParent;
	TcxCalendarElementViewInfo* __fastcall GetViewInfo();
	
protected:
	int FLocalId;
	virtual bool __fastcall ChildIsSimpleElement(int AIndex);
	virtual void __fastcall DoDefaultAction(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual Cxaccessibility::TcxAccessibilityHelper* __fastcall GetChild(int AIndex);
	virtual int __fastcall GetChildCount();
	virtual int __fastcall GetLocalId(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID = (Cxaccessibility::TcxAccessibleSimpleChildElementID)(0x0));
	virtual HWND __fastcall GetOwnerObjectWindow();
	virtual Cxaccessibility::TcxAccessibilityHelper* __fastcall GetParent();
	virtual int __fastcall GetRole(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetState(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual Cxaccessibility::TcxAccessibleObjectProperties __fastcall GetSupportedProperties(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual bool __fastcall IsExtended();
	virtual void __fastcall OwnerObjectDestroyed();
	__property TcxCalendarElementViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	__fastcall virtual TdxCalendarElementAccessibilityHelper(System::TObject* AOwnerObject, Cxaccessibility::TcxAccessibilityHelper* AParent);
	__fastcall virtual ~TdxCalendarElementAccessibilityHelper();
	virtual System::Types::TRect __fastcall GetScreenBounds(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCalendarButtonAccessibilityHelper : public TdxCalendarElementAccessibilityHelper
{
	typedef TdxCalendarElementAccessibilityHelper inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetDefaultActionDescription(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetRole(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual Cxaccessibility::TcxAccessibleObjectProperties __fastcall GetSupportedProperties(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
public:
	/* TdxCalendarElementAccessibilityHelper.Create */ inline __fastcall virtual TdxCalendarButtonAccessibilityHelper(System::TObject* AOwnerObject, Cxaccessibility::TcxAccessibilityHelper* AParent) : TdxCalendarElementAccessibilityHelper(AOwnerObject, AParent) { }
	/* TdxCalendarElementAccessibilityHelper.Destroy */ inline __fastcall virtual ~TdxCalendarButtonAccessibilityHelper() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TdxCalendarElementAccessibilityHelperClass;

class PASCALIMPLEMENTATION TcxCalendarElementViewInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Types::TRect FBounds;
	TcxCustomCalendar* FCalendar;
	Dxcoreclasses::TdxFastObjectList* FHandleNeededElements;
	TcxCalendarElementFadingHelper* FFadingHelper;
	bool FIsRightToLeftConverted;
	TcxCalendarPainter* FPainter;
	System::Types::TSize FSize;
	Cxlookandfeelpainters::TcxCalendarElementState FState;
	Dxcoreclasses::TdxFastObjectList* FVisibleElements;
	System::Classes::TNotifyEvent FOnClick;
	TcxCalendarController* __fastcall GetController();
	Vcl::Graphics::TFont* __fastcall GetFont();
	Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetLookAndFeelPainter();
	TcxCalendarViewInfo* __fastcall GetViewInfo();
	int __fastcall GetVisibleElementsCount();
	void __fastcall SetState(const Cxlookandfeelpainters::TcxCalendarElementState Value);
	
protected:
	Cxaccessibility::_di_IcxAccessibilityHelper FIAccessibilityHelper;
	void __fastcall Add(TcxCalendarElementViewInfo* AElement);
	void __fastcall AddHandleNeededElement(TcxCalendarElementViewInfo* AElement);
	virtual void __fastcall AddVisibleElements();
	virtual void __fastcall CalculateBounds();
	virtual void __fastcall CalculateChildSizes();
	virtual void __fastcall CalculateSize();
	virtual void __fastcall ClearVisibleElements();
	virtual void __fastcall Click();
	virtual void __fastcall CreateElements();
	virtual void __fastcall DblClick();
	virtual void __fastcall DestroyElements();
	virtual System::Types::TSize __fastcall DoCalculateSize();
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	virtual TdxCalendarElementAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	virtual Cxlookandfeelpainters::TcxCalendarElementStates __fastcall GetForbiddenStates();
	virtual bool __fastcall GetHitTest(System::TObject* AHitTest);
	virtual int __fastcall GetHitTestIndex();
	virtual Cxaccessibility::_di_IcxAccessibilityHelper __fastcall GetIAccessibilityHelper();
	virtual void __fastcall InitControls();
	virtual void __fastcall Initialize();
	virtual void __fastcall InitializeVisibleElements();
	virtual void __fastcall Invalidate();
	virtual void __fastcall KeyDown(System::Word &AKey, System::Classes::TShiftState AShift);
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall PaintChildren(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall PopulateIAccessibilityChildren(System::Classes::TInterfaceList* IAccessibilityChildren);
	virtual bool __fastcall PtInElement(const System::Types::TPoint &APoint);
	void __fastcall Remove(TcxCalendarElementViewInfo* AElement);
	void __fastcall RightToLeftConversion(const System::Types::TRect &ABounds);
	virtual void __fastcall SetHitTest(System::TObject* AHitTest);
	virtual void __fastcall TranslationChanged();
	virtual bool __fastcall CanFade();
	virtual void __fastcall DrawFadeImage(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawFadePart(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall UpdateFader(const Cxlookandfeelpainters::TcxCalendarElementState Value);
	__property TcxCustomCalendar* Calendar = {read=FCalendar};
	__property TcxCalendarController* Controller = {read=GetController};
	__property TcxCalendarElementFadingHelper* FadingHelper = {read=FFadingHelper};
	__property Cxaccessibility::_di_IcxAccessibilityHelper IAccessibilityHelper = {read=GetIAccessibilityHelper};
	__property Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* LookAndFeelPainter = {read=GetLookAndFeelPainter};
	__property TcxCalendarPainter* Painter = {read=FPainter};
	__property bool IsRightToLeftConverted = {read=FIsRightToLeftConverted, nodefault};
	__property TcxCalendarViewInfo* ViewInfo = {read=GetViewInfo};
	__property Dxcoreclasses::TdxFastObjectList* VisibleElements = {read=FVisibleElements};
	__property int VisibleElementsCount = {read=GetVisibleElementsCount, nodefault};
	__property System::Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick};
	
public:
	__fastcall virtual TcxCalendarElementViewInfo(TcxCustomCalendar* ACalendar);
	__fastcall virtual ~TcxCalendarElementViewInfo();
	__property System::Types::TRect Bounds = {read=FBounds, write=FBounds};
	__property Vcl::Graphics::TFont* Font = {read=GetFont};
	__property System::Types::TSize Size = {read=FSize};
	__property Cxlookandfeelpainters::TcxCalendarElementState State = {read=FState, write=SetState, nodefault};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCalendarArrowAccessibilityHelper : public TdxCalendarButtonAccessibilityHelper
{
	typedef TdxCalendarButtonAccessibilityHelper inherited;
	
protected:
	virtual void __fastcall DoDefaultAction(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual System::UnicodeString __fastcall GetName(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
public:
	/* TdxCalendarElementAccessibilityHelper.Create */ inline __fastcall virtual TdxCalendarArrowAccessibilityHelper(System::TObject* AOwnerObject, Cxaccessibility::TcxAccessibilityHelper* AParent) : TdxCalendarButtonAccessibilityHelper(AOwnerObject, AParent) { }
	/* TdxCalendarElementAccessibilityHelper.Destroy */ inline __fastcall virtual ~TdxCalendarArrowAccessibilityHelper() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxCalendarArrowViewInfo : public TcxCalendarElementViewInfo
{
	typedef TcxCalendarElementViewInfo inherited;
	
private:
	Cxgraphics::TcxArrowDirection FDirection;
	
protected:
	virtual void __fastcall DoAction();
	virtual System::Types::TSize __fastcall DoCalculateSize();
	virtual TdxCalendarElementAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	virtual TcxCalendarArrow __fastcall GetArrowType();
	virtual int __fastcall GetHitTestIndex();
	Cxgraphics::TcxArrowDirection __fastcall GetRealDirection();
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
	
public:
	__fastcall virtual TcxCalendarArrowViewInfo(TcxCustomCalendar* ACalendar, Cxgraphics::TcxArrowDirection ADirection);
	__property Cxgraphics::TcxArrowDirection Direction = {read=FDirection, nodefault};
public:
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarArrowViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarModernArrowViewInfo : public TcxCalendarArrowViewInfo
{
	typedef TcxCalendarArrowViewInfo inherited;
	
protected:
	virtual TcxCalendarArrow __fastcall GetArrowType();
public:
	/* TcxCalendarArrowViewInfo.Create */ inline __fastcall virtual TcxCalendarModernArrowViewInfo(TcxCustomCalendar* ACalendar, Cxgraphics::TcxArrowDirection ADirection) : TcxCalendarArrowViewInfo(ACalendar, ADirection) { }
	
public:
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarModernArrowViewInfo() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCalendarDateCellSelectionItemProvider : public Cxaccessibility::TdxSelectionItemProvider
{
	typedef Cxaccessibility::TdxSelectionItemProvider inherited;
	
private:
	TcxCalendarDateCellViewInfo* FViewInfo;
	
protected:
	virtual void __fastcall DoSelect();
	virtual bool __fastcall IsSelected();
	
public:
	__fastcall TdxCalendarDateCellSelectionItemProvider(TcxCalendarDateCellViewInfo* AViewInfo);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxCalendarDateCellSelectionItemProvider() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCalendarDateCellAccessibilityHelper : public TdxCalendarElementAccessibilityHelper
{
	typedef TdxCalendarElementAccessibilityHelper inherited;
	
private:
	TdxCalendarDateCellSelectionItemProvider* FSelectionItemProvider;
	
protected:
	virtual void __fastcall DoDefaultAction(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual void __fastcall DoSelect(int AFlags, Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual System::UnicodeString __fastcall GetDefaultActionDescription(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual System::UnicodeString __fastcall GetName(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetRole(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetState(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual Cxaccessibility::TcxAccessibleObjectProperties __fastcall GetSupportedProperties(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual bool __fastcall IsSupportedPattern(int APatternID, /* out */ System::_di_IInterface &AProvider, Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID = (Cxaccessibility::TcxAccessibleSimpleChildElementID)(0x0));
	
public:
	__fastcall virtual TdxCalendarDateCellAccessibilityHelper(System::TObject* AOwnerObject, Cxaccessibility::TcxAccessibilityHelper* AParent);
	__fastcall virtual ~TdxCalendarDateCellAccessibilityHelper();
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxCalendarDateCellViewInfo : public TcxCalendarElementViewInfo
{
	typedef TcxCalendarElementViewInfo inherited;
	
private:
	int FColumn;
	System::Classes::TAlignment FHorzAlignment;
	int FIndex;
	int FRow;
	System::Types::TRect FTextRect;
	double FValue;
	System::Uitypes::TColor __fastcall GetBrushColor(Cxlookandfeelpainters::TcxCalendarElementStates AStates);
	
protected:
	virtual void __fastcall CalculateBounds();
	virtual System::Types::TRect __fastcall CalculateTextRect();
	virtual System::Types::TSize __fastcall DoCalculateSize();
	virtual double __fastcall DoCalculateValue();
	virtual void __fastcall DoCustomDraw(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	virtual TdxCalendarElementAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	virtual System::Types::TRect __fastcall GetContentOffset();
	virtual Cxlookandfeelpainters::TcxCalendarElementStates __fastcall GetDrawStates();
	virtual int __fastcall GetHitTestIndex();
	virtual System::Types::TSize __fastcall GetMinSize();
	virtual System::UnicodeString __fastcall GetText();
	System::Classes::TAlignment __fastcall GetRealHorzAlignment();
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
	System::TDateTime __fastcall GetSelectDate();
	virtual void __fastcall Initialize();
	virtual bool __fastcall IsEnabled();
	virtual bool __fastcall IsSelected();
	virtual void __fastcall Select();
	void __fastcall SetPosition(int X, int Y, int AIndex);
	virtual bool __fastcall CanFade();
	virtual void __fastcall DrawFadeImage(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall UpdateFader(const Cxlookandfeelpainters::TcxCalendarElementState Value);
	__property int Column = {read=FColumn, nodefault};
	__property System::Classes::TAlignment HorzAlignment = {read=GetRealHorzAlignment, nodefault};
	__property int Index = {read=FIndex, nodefault};
	__property int Row = {read=FRow, nodefault};
	__property System::Types::TRect TextRect = {read=FTextRect};
	__property double Value = {read=FValue};
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarDateCellViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarElementViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarDateCellViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarDayCellViewInfo : public TcxCalendarDateCellViewInfo
{
	typedef TcxCalendarDateCellViewInfo inherited;
	
private:
	System::TDateTime FDate;
	
protected:
	virtual System::Types::TRect __fastcall CalculateTextRect();
	virtual void __fastcall DblClick();
	virtual double __fastcall DoCalculateValue();
	virtual void __fastcall DoCustomDraw(Cxgraphics::TcxCanvas* ACanvas);
	virtual Cxlookandfeelpainters::TcxCalendarElementStates __fastcall GetDrawStates();
	virtual Cxlookandfeelpainters::TcxCalendarElementStates __fastcall GetForbiddenStates();
	virtual System::Types::TSize __fastcall GetMinSize();
	virtual System::UnicodeString __fastcall GetText();
	virtual void __fastcall Initialize();
	virtual bool __fastcall IsEnabled();
	virtual bool __fastcall IsSelected();
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarDayCellViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarDateCellViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarDayCellViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarModernDayCellViewInfo : public TcxCalendarDayCellViewInfo
{
	typedef TcxCalendarDayCellViewInfo inherited;
	
protected:
	virtual System::Types::TRect __fastcall CalculateTextRect();
	virtual System::Types::TRect __fastcall GetContentOffset();
	virtual Cxlookandfeelpainters::TcxCalendarElementStates __fastcall GetForbiddenStates();
	virtual System::Types::TSize __fastcall GetMinSize();
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarModernDayCellViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarDayCellViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarModernDayCellViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarModernLargeCellViewInfo : public TcxCalendarDateCellViewInfo
{
	typedef TcxCalendarDateCellViewInfo inherited;
	
protected:
	virtual System::Types::TRect __fastcall CalculateTextRect();
	virtual bool __fastcall IsEnabled();
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarModernLargeCellViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarDateCellViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarModernLargeCellViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarModernMonthCellViewInfo : public TcxCalendarModernLargeCellViewInfo
{
	typedef TcxCalendarModernLargeCellViewInfo inherited;
	
private:
	System::Word FMonth;
	
protected:
	virtual System::Types::TSize __fastcall DoCalculateSize();
	virtual double __fastcall DoCalculateValue();
	virtual System::Types::TSize __fastcall GetMinSize();
	virtual System::UnicodeString __fastcall GetText();
	virtual bool __fastcall IsEnabled();
	virtual bool __fastcall IsSelected();
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarModernMonthCellViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarModernLargeCellViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarModernMonthCellViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarModernYearCellViewInfo : public TcxCalendarModernLargeCellViewInfo
{
	typedef TcxCalendarModernLargeCellViewInfo inherited;
	
private:
	System::Word FYear;
	
protected:
	virtual System::Types::TSize __fastcall DoCalculateSize();
	virtual double __fastcall DoCalculateValue();
	virtual System::Types::TSize __fastcall GetMinSize();
	virtual System::UnicodeString __fastcall GetText();
	virtual bool __fastcall IsSelected();
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarModernYearCellViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarModernLargeCellViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarModernYearCellViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarModernDecadeCellViewInfo : public TcxCalendarModernLargeCellViewInfo
{
	typedef TcxCalendarModernLargeCellViewInfo inherited;
	
private:
	System::Word FEndYear;
	System::Word FStartYear;
	
protected:
	virtual System::Types::TSize __fastcall DoCalculateSize();
	virtual double __fastcall DoCalculateValue();
	virtual System::Types::TSize __fastcall GetMinSize();
	System::Word __fastcall GetSelectedYear();
	virtual System::UnicodeString __fastcall GetText();
	virtual bool __fastcall IsSelected();
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarModernDecadeCellViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarModernLargeCellViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarModernDecadeCellViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarDateTableViewInfo : public TcxCalendarElementViewInfo
{
	typedef TcxCalendarElementViewInfo inherited;
	
private:
	Dxcoreclasses::TdxFastObjectList* FDateCells;
	System::Types::TSize FCellSize;
	TcxCalendarDateCellViewInfo* __fastcall GetDateCells(int Index);
	
protected:
	virtual void __fastcall AddVisibleElements();
	virtual TcxCalendarDateCellViewInfo* __fastcall CreateDateCell();
	virtual void __fastcall CreateElements();
	virtual void __fastcall DestroyElements();
	virtual System::Types::TSize __fastcall DoCalculateSize();
	virtual bool __fastcall IsDateEnabled(System::TDateTime ADate);
	virtual System::Types::TSize __fastcall GetMinSize();
	virtual TcxCalendarDateCellViewInfo* __fastcall GetSelectedCell();
	virtual System::Types::TSize __fastcall GetTableSize();
	virtual void __fastcall KeyDown(System::Word &AKey, System::Classes::TShiftState AShift);
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
	virtual System::TDateTime __fastcall GetDateInNextRow(System::TDateTime ASelectDate);
	virtual System::TDateTime __fastcall GetDateInPreviousRow(System::TDateTime ASelectDate);
	virtual System::TDateTime __fastcall GetFirstDate(System::TDateTime ASelectDate);
	virtual System::TDateTime __fastcall GetFirstDateInRow(System::TDateTime ASelectDate);
	virtual System::TDateTime __fastcall GetLastDate(System::TDateTime ASelectDate);
	virtual System::TDateTime __fastcall GetLastDateInRow(System::TDateTime ASelectDate);
	virtual System::TDateTime __fastcall GetNextDate(System::TDateTime ADate);
	virtual System::TDateTime __fastcall GetNextPageDate(System::TDateTime ADate);
	virtual System::TDateTime __fastcall GetPreviousDate(System::TDateTime ADate);
	virtual System::TDateTime __fastcall GetPreviousPageDate(System::TDateTime ADate);
	__property System::Types::TSize CellSize = {read=FCellSize, write=FCellSize};
	__property TcxCalendarDateCellViewInfo* DateCells[int Index] = {read=GetDateCells};
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarDateTableViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarElementViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarDateTableViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarMonthTableViewInfo : public TcxCalendarDateTableViewInfo
{
	typedef TcxCalendarDateTableViewInfo inherited;
	
private:
	int FWeekNumberWidth;
	int FDaysOfWeekHeight;
	
protected:
	virtual void __fastcall CalculateBounds();
	virtual TcxCalendarDateCellViewInfo* __fastcall CreateDateCell();
	virtual void __fastcall DrawDelimeters(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawWeekDays(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawWeekNumbers(Cxgraphics::TcxCanvas* ACanvas);
	virtual System::UnicodeString __fastcall GetDayOfWeekName(Cxdateutils::TDay ADay, System::Uitypes::TFontCharset AFontCharset);
	virtual System::Types::TSize __fastcall GetMinSize();
	System::Types::TRect __fastcall GetNextWeekDayTextRect(const System::Types::TRect &ATextRect);
	int __fastcall GetWeekNumbersRegionWidth();
	virtual void __fastcall InitializeVisibleElements();
	virtual bool __fastcall IsDateEnabled(System::TDateTime ADate);
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
	virtual System::TDateTime __fastcall GetDateInNextRow(System::TDateTime ASelectDate);
	virtual System::TDateTime __fastcall GetDateInPreviousRow(System::TDateTime ASelectDate);
	virtual System::TDateTime __fastcall GetFirstDate(System::TDateTime ASelectDate);
	virtual System::TDateTime __fastcall GetFirstDateInRow(System::TDateTime ASelectDate);
	virtual System::TDateTime __fastcall GetLastDate(System::TDateTime ASelectDate);
	virtual System::TDateTime __fastcall GetLastDateInRow(System::TDateTime ASelectDate);
	virtual System::TDateTime __fastcall GetNextDate(System::TDateTime ADate);
	virtual System::TDateTime __fastcall GetNextPageDate(System::TDateTime ADate);
	virtual System::TDateTime __fastcall GetPreviousDate(System::TDateTime ADate);
	virtual System::TDateTime __fastcall GetPreviousPageDate(System::TDateTime ADate);
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarMonthTableViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarDateTableViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarMonthTableViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarModernMonthTableViewInfo : public TcxCalendarMonthTableViewInfo
{
	typedef TcxCalendarMonthTableViewInfo inherited;
	
protected:
	virtual void __fastcall CalculateBounds();
	virtual TcxCalendarDateCellViewInfo* __fastcall CreateDateCell();
	virtual void __fastcall DrawDelimeters(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawWeekDays(Cxgraphics::TcxCanvas* ACanvas);
	virtual System::UnicodeString __fastcall GetDayOfWeekName(Cxdateutils::TDay ADay, System::Uitypes::TFontCharset AFontCharset);
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarModernMonthTableViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarMonthTableViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarModernMonthTableViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarModernLargeCellTableViewInfo : public TcxCalendarDateTableViewInfo
{
	typedef TcxCalendarDateTableViewInfo inherited;
	
protected:
	virtual void __fastcall CalculateBounds();
	virtual void __fastcall CalculateChildSizes();
	virtual System::Types::TSize __fastcall DoCalculateSize();
	virtual System::Types::TSize __fastcall GetTableSize();
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarModernLargeCellTableViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarDateTableViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarModernLargeCellTableViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarModernYearTableViewInfo : public TcxCalendarModernLargeCellTableViewInfo
{
	typedef TcxCalendarModernLargeCellTableViewInfo inherited;
	
protected:
	virtual TcxCalendarDateCellViewInfo* __fastcall CreateDateCell();
	virtual bool __fastcall IsDateEnabled(System::TDateTime ADate);
	virtual System::TDateTime __fastcall GetDateInNextRow(System::TDateTime ASelectDate);
	virtual System::TDateTime __fastcall GetDateInPreviousRow(System::TDateTime ASelectDate);
	virtual System::TDateTime __fastcall GetFirstDate(System::TDateTime ASelectDate);
	virtual System::TDateTime __fastcall GetFirstDateInRow(System::TDateTime ASelectDate);
	virtual System::TDateTime __fastcall GetLastDate(System::TDateTime ASelectDate);
	virtual System::TDateTime __fastcall GetLastDateInRow(System::TDateTime ASelectDate);
	virtual System::TDateTime __fastcall GetNextDate(System::TDateTime ADate);
	virtual System::TDateTime __fastcall GetNextPageDate(System::TDateTime ADate);
	virtual System::TDateTime __fastcall GetPreviousDate(System::TDateTime ADate);
	virtual System::TDateTime __fastcall GetPreviousPageDate(System::TDateTime ADate);
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarModernYearTableViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarModernLargeCellTableViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarModernYearTableViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarModernDecadeTableViewInfo : public TcxCalendarModernLargeCellTableViewInfo
{
	typedef TcxCalendarModernLargeCellTableViewInfo inherited;
	
protected:
	virtual TcxCalendarDateCellViewInfo* __fastcall CreateDateCell();
	virtual bool __fastcall IsDateEnabled(System::TDateTime ADate);
	virtual System::TDateTime __fastcall GetDateInNextRow(System::TDateTime ASelectDate);
	virtual System::TDateTime __fastcall GetDateInPreviousRow(System::TDateTime ASelectDate);
	virtual System::TDateTime __fastcall GetFirstDate(System::TDateTime ASelectDate);
	virtual System::TDateTime __fastcall GetFirstDateInRow(System::TDateTime ASelectDate);
	virtual System::TDateTime __fastcall GetLastDate(System::TDateTime ASelectDate);
	virtual System::TDateTime __fastcall GetLastDateInRow(System::TDateTime ASelectDate);
	virtual System::TDateTime __fastcall GetNextDate(System::TDateTime ADate);
	virtual System::TDateTime __fastcall GetNextPageDate(System::TDateTime ADate);
	virtual System::TDateTime __fastcall GetPreviousDate(System::TDateTime ADate);
	virtual System::TDateTime __fastcall GetPreviousPageDate(System::TDateTime ADate);
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarModernDecadeTableViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarModernLargeCellTableViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarModernDecadeTableViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarModernCenturyTableViewInfo : public TcxCalendarModernLargeCellTableViewInfo
{
	typedef TcxCalendarModernLargeCellTableViewInfo inherited;
	
protected:
	virtual TcxCalendarDateCellViewInfo* __fastcall CreateDateCell();
	virtual bool __fastcall IsDateEnabled(System::TDateTime ADate);
	virtual System::TDateTime __fastcall GetDateInNextRow(System::TDateTime ASelectDate);
	virtual System::TDateTime __fastcall GetDateInPreviousRow(System::TDateTime ASelectDate);
	virtual System::TDateTime __fastcall GetFirstDate(System::TDateTime ASelectDate);
	virtual System::TDateTime __fastcall GetFirstDateInRow(System::TDateTime ASelectDate);
	virtual System::TDateTime __fastcall GetLastDate(System::TDateTime ASelectDate);
	virtual System::TDateTime __fastcall GetLastDateInRow(System::TDateTime ASelectDate);
	virtual System::TDateTime __fastcall GetNextDate(System::TDateTime ADate);
	virtual System::TDateTime __fastcall GetNextPageDate(System::TDateTime ADate);
	virtual System::TDateTime __fastcall GetPreviousDate(System::TDateTime ADate);
	virtual System::TDateTime __fastcall GetPreviousPageDate(System::TDateTime ADate);
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarModernCenturyTableViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarModernLargeCellTableViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarModernCenturyTableViewInfo() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCalendarDateHeaderCellAccessibilityHelper : public TdxCalendarButtonAccessibilityHelper
{
	typedef TdxCalendarButtonAccessibilityHelper inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetName(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetState(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
public:
	/* TdxCalendarElementAccessibilityHelper.Create */ inline __fastcall virtual TdxCalendarDateHeaderCellAccessibilityHelper(System::TObject* AOwnerObject, Cxaccessibility::TcxAccessibilityHelper* AParent) : TdxCalendarButtonAccessibilityHelper(AOwnerObject, AParent) { }
	/* TdxCalendarElementAccessibilityHelper.Destroy */ inline __fastcall virtual ~TdxCalendarDateHeaderCellAccessibilityHelper() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxCalendarDateHeaderCellViewInfo : public TcxCalendarElementViewInfo
{
	typedef TcxCalendarElementViewInfo inherited;
	
private:
	System::Types::TRect FTextRect;
	
protected:
	virtual void __fastcall CalculateBounds();
	virtual System::Types::TSize __fastcall DoCalculateSize();
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	virtual TdxCalendarElementAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	virtual Cxlookandfeelpainters::TcxCalendarElementStates __fastcall GetDrawStates();
	virtual int __fastcall GetHitTestIndex();
	virtual System::UnicodeString __fastcall GetText();
	virtual bool __fastcall IsEnabled();
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
	__property System::Types::TRect TextRect = {read=FTextRect};
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarDateHeaderCellViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarElementViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarDateHeaderCellViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarYearDateHeaderCellViewInfo : public TcxCalendarDateHeaderCellViewInfo
{
	typedef TcxCalendarDateHeaderCellViewInfo inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetText();
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarYearDateHeaderCellViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarDateHeaderCellViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarYearDateHeaderCellViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarMonthDateHeaderCellViewInfo : public TcxCalendarDateHeaderCellViewInfo
{
	typedef TcxCalendarDateHeaderCellViewInfo inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetText();
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarMonthDateHeaderCellViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarDateHeaderCellViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarMonthDateHeaderCellViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarModernDateHeaderCellViewInfo : public TcxCalendarDateHeaderCellViewInfo
{
	typedef TcxCalendarDateHeaderCellViewInfo inherited;
	
private:
	System::UnicodeString FText;
	
protected:
	virtual bool __fastcall CanFade();
	virtual void __fastcall Click();
	virtual void __fastcall DrawFadeImage(Cxgraphics::TcxCanvas* ACanvas);
	virtual System::UnicodeString __fastcall GetText();
	virtual void __fastcall Initialize();
	virtual bool __fastcall IsEnabled();
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarModernDateHeaderCellViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarDateHeaderCellViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarModernDateHeaderCellViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarDateHeaderViewInfo : public TcxCalendarElementViewInfo
{
	typedef TcxCalendarElementViewInfo inherited;
	
private:
	System::StaticArray<TcxCalendarArrowViewInfo*, 2> FArrowsViewInfo;
	TcxCalendarDateHeaderCellViewInfo* FTextCellViewInfo;
	
protected:
	virtual void __fastcall AddVisibleElements();
	virtual void __fastcall CalculateBounds();
	virtual TcxCalendarArrowViewInfo* __fastcall CreateArrowViewInfo(Cxgraphics::TcxArrowDirection ADirection);
	virtual void __fastcall CreateElements();
	virtual TcxCalendarDateHeaderCellViewInfo* __fastcall CreateTextCellViewInfo();
	virtual void __fastcall DestroyElements();
	__property TcxCalendarDateHeaderCellViewInfo* TextCellViewInfo = {read=FTextCellViewInfo};
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarDateHeaderViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarElementViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarDateHeaderViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarMonthDateHeaderViewInfo : public TcxCalendarDateHeaderViewInfo
{
	typedef TcxCalendarDateHeaderViewInfo inherited;
	
protected:
	virtual int __fastcall GetHitTestIndex();
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarMonthDateHeaderViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarDateHeaderViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarMonthDateHeaderViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarModernMonthDateHeaderViewInfo : public TcxCalendarMonthDateHeaderViewInfo
{
	typedef TcxCalendarMonthDateHeaderViewInfo inherited;
	
protected:
	virtual TcxCalendarArrowViewInfo* __fastcall CreateArrowViewInfo(Cxgraphics::TcxArrowDirection ADirection);
	virtual TcxCalendarDateHeaderCellViewInfo* __fastcall CreateTextCellViewInfo();
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarModernMonthDateHeaderViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarMonthDateHeaderViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarModernMonthDateHeaderViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarYearDateHeaderViewInfo : public TcxCalendarDateHeaderViewInfo
{
	typedef TcxCalendarDateHeaderViewInfo inherited;
	
protected:
	virtual TcxCalendarDateHeaderCellViewInfo* __fastcall CreateTextCellViewInfo();
	virtual int __fastcall GetHitTestIndex();
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarYearDateHeaderViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarDateHeaderViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarYearDateHeaderViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarDateHeadersViewInfo : public TcxCalendarElementViewInfo
{
	typedef TcxCalendarElementViewInfo inherited;
	
private:
	TcxCalendarMonthDateHeaderViewInfo* FMonthHeaderViewInfo;
	
protected:
	virtual void __fastcall AddVisibleElements();
	virtual void __fastcall CalculateBounds();
	virtual void __fastcall CreateElements();
	virtual TcxCalendarMonthDateHeaderViewInfo* __fastcall CreateMonthHeaderViewInfo();
	virtual void __fastcall DestroyElements();
	virtual void __fastcall DoCalculateBounds();
	virtual System::Types::TSize __fastcall DoCalculateSize();
	
public:
	__property TcxCalendarMonthDateHeaderViewInfo* MonthHeaderViewInfo = {read=FMonthHeaderViewInfo};
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarDateHeadersViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarElementViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarDateHeadersViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarClassicDateHeadersViewInfo : public TcxCalendarDateHeadersViewInfo
{
	typedef TcxCalendarDateHeadersViewInfo inherited;
	
private:
	TcxCalendarYearDateHeaderViewInfo* FYearHeaderViewInfo;
	void __fastcall CalculateMaxYearAndMonthNameLengths(int &AMaxYearNameWidth, int &AMaxMonthNameWidth);
	
protected:
	virtual void __fastcall AddVisibleElements();
	virtual void __fastcall CreateElements();
	virtual void __fastcall DestroyElements();
	virtual void __fastcall DoCalculateBounds();
	bool __fastcall IsYearHeaderVisible();
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
	
public:
	__property TcxCalendarYearDateHeaderViewInfo* YearHeaderViewInfo = {read=FYearHeaderViewInfo};
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarClassicDateHeadersViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarDateHeadersViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarClassicDateHeadersViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarModernDateHeadersViewInfo : public TcxCalendarDateHeadersViewInfo
{
	typedef TcxCalendarDateHeadersViewInfo inherited;
	
protected:
	virtual TcxCalendarMonthDateHeaderViewInfo* __fastcall CreateMonthHeaderViewInfo();
	virtual System::Types::TSize __fastcall DoCalculateSize();
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarModernDateHeadersViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarDateHeadersViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarModernDateHeadersViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarDateViewInfo : public TcxCalendarElementViewInfo
{
	typedef TcxCalendarElementViewInfo inherited;
	
private:
	TcxCalendarDateHeadersViewInfo* FHeadersViewInfo;
	TcxCalendarMonthTableViewInfo* FMonthTableViewInfo;
	int FSideWidth;
	
protected:
	virtual void __fastcall AddVisibleElements();
	virtual void __fastcall CalculateBounds();
	virtual void __fastcall CalculateHeadersBounds();
	virtual void __fastcall CalculateTableBounds();
	void __fastcall ChangeSelectedAccesibleObject();
	virtual void __fastcall CreateElements();
	virtual void __fastcall DestroyElements();
	virtual System::Types::TSize __fastcall DoCalculateSize();
	virtual TcxCalendarDateTableViewInfo* __fastcall GetCurrentTableViewInfo();
	virtual System::Types::TRect __fastcall GetTableOffsets();
	virtual void __fastcall Initialize();
	virtual void __fastcall KeyDown(System::Word &AKey, System::Classes::TShiftState AShift);
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall SynchronizeFirstDate();
	virtual void __fastcall SynchronizeSelectDate();
	
public:
	virtual void __fastcall ChangeFirstDate(double Value, bool AAnimated);
	virtual void __fastcall ChangeSelectDate(double AValue, bool ARepositionVisibleDates, bool AAnimated);
	__property TcxCalendarMonthTableViewInfo* MonthTableViewInfo = {read=FMonthTableViewInfo};
	__property TcxCalendarDateHeadersViewInfo* HeadersViewInfo = {read=FHeadersViewInfo};
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarDateViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarElementViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarDateViewInfo() { }
	
};


enum DECLSPEC_DENUM TcxCalendarModernDateViewStyle : unsigned char { cvdsMonth, cvdsYear, cvdsDecade, cvdsCentury };

struct DECLSPEC_DRECORD TcxCalendarAnimatedImageState
{
public:
	System::Byte Alpha;
	Cxgeometry::TdxSizeF Scale;
	Cxgeometry::TdxPointF Offset;
};


class PASCALIMPLEMENTATION TcxCalendarAnimatedImageInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Dxgdiplusclasses::TdxSmartImage* FImage;
	TcxCalendarAnimatedImageState FStartState;
	TcxCalendarAnimatedImageState FEndState;
	System::Types::TRect FDestBounds;
	System::Types::TRect FSourceBounds;
	System::Types::TRect FClipRect;
	System::Types::TRect FCurrentDestBounds;
	System::Byte FCurrentAlphaValue;
	Cxgeometry::TdxSizeF FScaleCoefficient;
	Cxgeometry::TdxPointF FOffsetCoefficient;
	double FAlphaCoefficient;
	void __fastcall SetImage(Dxgdiplusclasses::TdxSmartImage* const Value);
	
public:
	__fastcall TcxCalendarAnimatedImageInfo();
	__fastcall virtual ~TcxCalendarAnimatedImageInfo();
	void __fastcall Calculate(int APosition);
	void __fastcall Initialize(int ALength);
	void __fastcall Paint(Dxgdiplusclasses::TdxGPCanvas* AGpCanvas);
	__property System::Types::TRect SourceBounds = {read=FSourceBounds, write=FSourceBounds};
	__property System::Types::TRect DestBounds = {read=FDestBounds, write=FDestBounds};
	__property System::Types::TRect ClipRect = {read=FClipRect, write=FClipRect};
	__property Dxgdiplusclasses::TdxSmartImage* Image = {read=FImage, write=SetImage};
	__property TcxCalendarAnimatedImageState StartState = {read=FStartState, write=FStartState};
	__property TcxCalendarAnimatedImageState EndState = {read=FEndState, write=FEndState};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCalendarModernDateViewAnimationController : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Dxanimation::TdxAnimationTransition* FAnimation;
	TcxCalendarModernDateViewInfo* FDateViewInfo;
	Dxcoreclasses::TdxFastObjectList* FImageInfos;
	bool FIsActive;
	void __fastcall DoOnAnimation(Dxanimation::TdxAnimationTransition* Sender, int &APosition, bool &AFinished);
	TcxCalendarAnimatedImageInfo* __fastcall GetImageInfo(int AIndex);
	
protected:
	__property TcxCalendarAnimatedImageInfo* ImageInfo[int AIndex] = {read=GetImageInfo};
	
public:
	__fastcall TcxCalendarModernDateViewAnimationController(TcxCalendarModernDateViewInfo* ADateViewInfo);
	__fastcall virtual ~TcxCalendarModernDateViewAnimationController();
	TcxCalendarAnimatedImageInfo* __fastcall AddImage();
	void __fastcall ClearImages();
	void __fastcall DrawImages(Dxgdiplusclasses::TdxGPCanvas* AGpCanvas);
	bool __fastcall IsActive();
	void __fastcall Start();
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxCalendarModernDateViewInfo : public TcxCalendarDateViewInfo
{
	typedef TcxCalendarDateViewInfo inherited;
	
private:
	TcxCalendarModernDateViewAnimationController* FAnimationController;
	Dxgdiplusclasses::TdxSmartImage* FStartImage;
	Dxgdiplusclasses::TdxSmartImage* FEndImage;
	System::Types::TRect FPrevSelectCellBounds;
	System::Types::TRect FNextSelectCellBounds;
	Cxclasses::TcxDirection FDirection;
	System::Types::TSize FMaxTableSize;
	System::Types::TRect FTableAreaBounds;
	TcxCalendarModernCenturyTableViewInfo* FCenturyTableViewInfo;
	TcxCalendarModernDecadeTableViewInfo* FDecadeTableViewInfo;
	TcxCalendarModernYearTableViewInfo* FYearTableViewInfo;
	TcxCalendarModernDateViewStyle FViewStyle;
	void __fastcall AddHeaderAnimationImages();
	void __fastcall AddNextDateAnimationImages();
	void __fastcall AddNextViewAnimationImages();
	System::Types::TRect __fastcall GetAnimationBounds();
	TcxCalendarDateTableViewInfo* __fastcall GetTableViewInfo(TcxCalendarModernDateViewStyle AViewStyle);
	void __fastcall DoChangeDateAnimation();
	void __fastcall DoChangeViewStyleAnimation();
	void __fastcall InternalSetViewStyle(TcxCalendarModernDateViewStyle AValue);
	void __fastcall Recalculate();
	void __fastcall RecreateImage(Dxgdiplusclasses::TdxSmartImage* &AImage);
	void __fastcall SetViewStyle(TcxCalendarModernDateViewStyle Value);
	
protected:
	virtual void __fastcall AddVisibleElements();
	virtual void __fastcall CalculateChildSizes();
	virtual void __fastcall CalculateTableBounds();
	virtual void __fastcall CreateElements();
	virtual void __fastcall DestroyElements();
	virtual System::Types::TSize __fastcall DoCalculateSize();
	virtual TcxCalendarDateTableViewInfo* __fastcall GetCurrentTableViewInfo();
	Cxclasses::TcxDirection __fastcall GetHorizontalAnimationDirection(bool ARight);
	virtual System::Types::TRect __fastcall GetTableOffsets();
	virtual void __fastcall KeyDown(System::Word &AKey, System::Classes::TShiftState AShift);
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall SynchronizeSelectDate();
	void __fastcall NextViewStyle();
	void __fastcall PreviousViewStyle();
	__property System::Types::TSize MaxTableSize = {read=FMaxTableSize};
	__property TcxCalendarModernDateViewStyle ViewStyle = {read=FViewStyle, write=SetViewStyle, nodefault};
	
public:
	__fastcall virtual TcxCalendarModernDateViewInfo(TcxCustomCalendar* ACalendar);
	__fastcall virtual ~TcxCalendarModernDateViewInfo();
	virtual void __fastcall ChangeFirstDate(double Value, bool AAnimated);
	void __fastcall ChangeViewStyle(TcxCalendarModernDateViewStyle AValue, bool AAnimated);
	virtual void __fastcall ChangeSelectDate(double AValue, bool ARepositionVisibleDates, bool AAnimated);
	__property TcxCalendarDateTableViewInfo* TableViewInfo[TcxCalendarModernDateViewStyle AView] = {read=GetTableViewInfo};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCalendarHeaderAccessibilityHelper : public TdxCalendarElementAccessibilityHelper
{
	typedef TdxCalendarElementAccessibilityHelper inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetName(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetRole(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual Cxaccessibility::TcxAccessibleObjectProperties __fastcall GetSupportedProperties(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
public:
	/* TdxCalendarElementAccessibilityHelper.Create */ inline __fastcall virtual TdxCalendarHeaderAccessibilityHelper(System::TObject* AOwnerObject, Cxaccessibility::TcxAccessibilityHelper* AParent) : TdxCalendarElementAccessibilityHelper(AOwnerObject, AParent) { }
	/* TdxCalendarElementAccessibilityHelper.Destroy */ inline __fastcall virtual ~TdxCalendarHeaderAccessibilityHelper() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxCalendarHeaderViewInfo : public TcxCalendarElementViewInfo
{
	typedef TcxCalendarElementViewInfo inherited;
	
private:
	System::Types::TRect FTextOffsets;
	System::Types::TRect FTextRect;
	System::Types::TSize FTextSize;
	
protected:
	virtual void __fastcall CalculateBounds();
	virtual System::Types::TSize __fastcall DoCalculateSize();
	virtual void __fastcall DrawFadeImage(Cxgraphics::TcxCanvas* ACanvas);
	virtual System::UnicodeString __fastcall GetText();
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
	virtual TdxCalendarElementAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	__property System::Types::TRect TextOffsets = {read=FTextOffsets};
	__property System::Types::TRect TextRect = {read=FTextRect};
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarHeaderViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarElementViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarHeaderViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarModernHeaderViewInfo : public TcxCalendarHeaderViewInfo
{
	typedef TcxCalendarHeaderViewInfo inherited;
	
protected:
	virtual void __fastcall CalculateBounds();
	virtual bool __fastcall CanFade();
	virtual void __fastcall Click();
	virtual System::Types::TSize __fastcall DoCalculateSize();
	virtual int __fastcall GetHitTestIndex();
	virtual System::UnicodeString __fastcall GetText();
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarModernHeaderViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarHeaderViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarModernHeaderViewInfo() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCalendarClockAccessibilityHelper : public TdxCalendarElementAccessibilityHelper
{
	typedef TdxCalendarElementAccessibilityHelper inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetName(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
public:
	/* TdxCalendarElementAccessibilityHelper.Create */ inline __fastcall virtual TdxCalendarClockAccessibilityHelper(System::TObject* AOwnerObject, Cxaccessibility::TcxAccessibilityHelper* AParent) : TdxCalendarElementAccessibilityHelper(AOwnerObject, AParent) { }
	/* TdxCalendarElementAccessibilityHelper.Destroy */ inline __fastcall virtual ~TdxCalendarClockAccessibilityHelper() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxCalendarClockViewInfo : public TcxCalendarElementViewInfo
{
	typedef TcxCalendarElementViewInfo inherited;
	
private:
	TcxClock* FClock;
	System::Types::TSize FClockSize;
	
protected:
	virtual void __fastcall CalculateBounds();
	virtual void __fastcall ClearVisibleElements();
	virtual System::Types::TSize __fastcall DoCalculateSize();
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	virtual TdxCalendarElementAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	virtual void __fastcall InitControls();
	virtual void __fastcall InitializeVisibleElements();
	__property System::Types::TSize ClockSize = {read=FClockSize, write=FClockSize};
	
public:
	__fastcall virtual TcxCalendarClockViewInfo(TcxCustomCalendar* ACalendar);
	__fastcall virtual ~TcxCalendarClockViewInfo();
};


class PASCALIMPLEMENTATION TcxCalendarTimeEditViewInfo : public TcxCalendarElementViewInfo
{
	typedef TcxCalendarElementViewInfo inherited;
	
private:
	Cxtimeedit::TcxTimeEdit* FTimeEdit;
	int __fastcall GetTimeEditWidth();
	
protected:
	virtual void __fastcall CalculateBounds();
	virtual void __fastcall ClearVisibleElements();
	virtual System::Types::TSize __fastcall DoCalculateSize();
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	virtual Cxaccessibility::_di_IcxAccessibilityHelper __fastcall GetIAccessibilityHelper();
	virtual void __fastcall InitControls();
	virtual void __fastcall InitializeVisibleElements();
	
public:
	__fastcall virtual TcxCalendarTimeEditViewInfo(TcxCustomCalendar* ACalendar);
	__fastcall virtual ~TcxCalendarTimeEditViewInfo();
};


class PASCALIMPLEMENTATION TcxCalendarTimeViewInfo : public TcxCalendarElementViewInfo
{
	typedef TcxCalendarElementViewInfo inherited;
	
private:
	TcxCalendarClockViewInfo* FClockInfo;
	int FHeight;
	TcxCalendarTimeEditViewInfo* FTimeEditInfo;
	
protected:
	virtual void __fastcall AddVisibleElements();
	virtual void __fastcall CalculateChildSizes();
	virtual void __fastcall CalculateBounds();
	virtual void __fastcall ClearVisibleElements();
	virtual TcxCalendarClockViewInfo* __fastcall CreateClockViewInfo();
	virtual void __fastcall CreateElements();
	virtual TcxCalendarTimeEditViewInfo* __fastcall CreateTimeEditViewInfo();
	virtual void __fastcall DestroyElements();
	virtual void __fastcall DoCalculateBounds();
	virtual System::Types::TSize __fastcall DoCalculateSize();
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
	__property int Height = {read=FHeight, write=FHeight, nodefault};
	__property TcxCalendarTimeEditViewInfo* TimeEditInfo = {read=FTimeEditInfo};
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarTimeViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarElementViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarTimeViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarModernClockViewInfo : public TcxCalendarClockViewInfo
{
	typedef TcxCalendarClockViewInfo inherited;
	
protected:
	virtual System::Types::TSize __fastcall DoCalculateSize();
	
public:
	__fastcall virtual TcxCalendarModernClockViewInfo(TcxCustomCalendar* ACalendar);
public:
	/* TcxCalendarClockViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarModernClockViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarModernTimeViewInfo : public TcxCalendarTimeViewInfo
{
	typedef TcxCalendarTimeViewInfo inherited;
	
protected:
	virtual TcxCalendarClockViewInfo* __fastcall CreateClockViewInfo();
	virtual void __fastcall DoCalculateBounds();
	virtual System::Types::TSize __fastcall DoCalculateSize();
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarModernTimeViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarTimeViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarModernTimeViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarButtonViewInfo : public TcxCalendarElementViewInfo
{
	typedef TcxCalendarElementViewInfo inherited;
	
private:
	Cxbuttons::TcxButton* FButton;
	TCalendarButton FType;
	
protected:
	virtual void __fastcall CalculateBounds();
	virtual void __fastcall ClearVisibleElements();
	virtual System::Types::TSize __fastcall DoCalculateSize();
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	int __fastcall GetCaptionWidth();
	virtual Cxaccessibility::_di_IcxAccessibilityHelper __fastcall GetIAccessibilityHelper();
	virtual void __fastcall InitControls();
	virtual void __fastcall InitializeVisibleElements();
	void __fastcall UpdateCaption();
	
public:
	__fastcall virtual TcxCalendarButtonViewInfo(TcxCustomCalendar* ACalendar, TCalendarButton AType);
	__fastcall virtual ~TcxCalendarButtonViewInfo();
};


class PASCALIMPLEMENTATION TcxCalendarButtonsViewInfo : public TcxCalendarElementViewInfo
{
	typedef TcxCalendarElementViewInfo inherited;
	
private:
	System::StaticArray<TcxCalendarButtonViewInfo*, 5> FButtons;
	int FMaxButtonWidth;
	void __fastcall UpdateCalendarButtonCaptions();
	
protected:
	virtual void __fastcall AddVisibleElements();
	virtual void __fastcall CalculateBounds();
	virtual void __fastcall CreateElements();
	virtual void __fastcall DestroyElements();
	virtual void __fastcall DoCalculateBounds();
	virtual System::Types::TSize __fastcall DoCalculateSize();
	bool __fastcall IsNative();
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall TranslationChanged();
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarButtonsViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarElementViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarButtonsViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarModernButtonsViewInfo : public TcxCalendarButtonsViewInfo
{
	typedef TcxCalendarButtonsViewInfo inherited;
	
protected:
	virtual void __fastcall DoCalculateBounds();
	virtual System::Types::TSize __fastcall DoCalculateSize();
	virtual int __fastcall GetButtonsOffset();
	virtual System::Classes::TAlignment __fastcall GetHorzAlign();
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
	__property System::Classes::TAlignment HorzAlign = {read=GetHorzAlign, nodefault};
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarModernButtonsViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarButtonsViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarModernButtonsViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarTouchUIButtonsViewInfo : public TcxCalendarModernButtonsViewInfo
{
	typedef TcxCalendarModernButtonsViewInfo inherited;
	
protected:
	virtual void __fastcall DoCalculateBounds();
	virtual System::Types::TSize __fastcall DoCalculateSize();
	virtual System::Classes::TAlignment __fastcall GetHorzAlign();
public:
	/* TcxCalendarElementViewInfo.Create */ inline __fastcall virtual TcxCalendarTouchUIButtonsViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarModernButtonsViewInfo(ACalendar) { }
	/* TcxCalendarElementViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarTouchUIButtonsViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarViewInfo : public TcxCalendarElementViewInfo
{
	typedef TcxCalendarElementViewInfo inherited;
	
private:
	TcxCalendarButtonsViewInfo* FButtonsViewInfo;
	TcxCalendarHeaderViewInfo* FHeaderViewInfo;
	TcxCalendarDateViewInfo* FDateViewInfo;
	TcxCalendarTimeViewInfo* FTimeViewInfo;
	int FButtonsHeight;
	int FButtonsOffset;
	int FButtonsAreaHeight;
	int FColWidth;
	int FFontSize;
	int FHeaderHeight;
	int FRowHeight;
	int FSpaceWidth;
	int __fastcall GetHeaderBorderWidth();
	HIDESBASE Vcl::Graphics::TFont* __fastcall GetFont();
	TcxCalendarKind __fastcall GetKind();
	HIDESBASE Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetLookAndFeelPainter();
	bool __fastcall IsButtonsVisible();
	bool __fastcall IsTimeVisible();
	
protected:
	System::Generics::Collections::TList__1<TdxCalendarElementAccessibilityHelper*>* FAccessibleObjects;
	virtual void __fastcall AddVisibleElements();
	virtual void __fastcall CalculateButtonsAreaBounds();
	virtual void __fastcall CalculateChildSizes();
	virtual void __fastcall CreateElements();
	virtual void __fastcall DestroyElements();
	virtual System::Types::TSize __fastcall DoCalculateSize();
	virtual int __fastcall GetHitTestIndex();
	virtual Cxaccessibility::_di_IcxAccessibilityHelper __fastcall GetIAccessibilityHelper();
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual TcxCalendarButtonsViewInfo* __fastcall CreateButtonsViewInfo();
	virtual TcxCalendarHeaderViewInfo* __fastcall CreateHeaderViewInfo();
	virtual TcxCalendarDateViewInfo* __fastcall CreateDateViewInfo();
	virtual TcxCalendarTimeViewInfo* __fastcall CreateTimeViewInfo();
	virtual bool __fastcall AllowHidePopupOnMouseUp();
	virtual void __fastcall DoCalculateBounds();
	virtual void __fastcall DoSetFirstDate(double Value, bool AAnimated);
	virtual void __fastcall DoSetSelectDate(double AValue, bool ARepositionVisibleDates, bool AAnimated);
	virtual System::Types::TSize __fastcall GetArrowSize();
	virtual int __fastcall GetButtonSpace();
	virtual System::Types::TRect __fastcall GetDateInfoOffsets();
	virtual System::UnicodeString __fastcall GetMonthDateHeaderText();
	virtual bool __fastcall IsButtonsTabStop();
	virtual bool __fastcall IsButtonVisible(TCalendarButton AType);
	virtual bool __fastcall IsDateHeaderTransparent();
	virtual bool __fastcall IsHeaderVisible();
	virtual bool __fastcall IsYearDateHeaderVisible();
	virtual void __fastcall Reset();
	virtual void __fastcall SetFirstDate(double Value, bool AAnimated);
	virtual void __fastcall SetSelectDate(double AValue, bool ARepositionVisibleDates, bool AAnimated);
	void __fastcall TimeChanged(System::TObject* Sender);
	__property int HeaderHeight = {read=FHeaderHeight, nodefault};
	__property Vcl::Graphics::TFont* Font = {read=GetFont};
	__property TcxCalendarKind Kind = {read=GetKind, nodefault};
	__property Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* LookAndFeelPainter = {read=GetLookAndFeelPainter};
	
public:
	__fastcall virtual TcxCalendarViewInfo(TcxCustomCalendar* ACalendar);
	__fastcall virtual ~TcxCalendarViewInfo();
	virtual void __fastcall CalculateBounds();
	virtual void __fastcall Initialize();
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
	__property TcxCalendarDateViewInfo* DateViewInfo = {read=FDateViewInfo};
	__property TcxCalendarHeaderViewInfo* HeaderViewInfo = {read=FHeaderViewInfo};
};


class PASCALIMPLEMENTATION TcxCalendarClassicViewInfo : public TcxCalendarViewInfo
{
	typedef TcxCalendarViewInfo inherited;
	
private:
	TcxMonthListBox* FMonthListBox;
	void __fastcall CreateMonthListBox();
	
protected:
	virtual TcxCalendarButtonsViewInfo* __fastcall CreateButtonsViewInfo();
	virtual TcxCalendarHeaderViewInfo* __fastcall CreateHeaderViewInfo();
	virtual TcxCalendarDateViewInfo* __fastcall CreateDateViewInfo();
	virtual TcxCalendarTimeViewInfo* __fastcall CreateTimeViewInfo();
	virtual System::Types::TRect __fastcall GetMonthListBoxOwnerBounds();
	
public:
	__fastcall virtual TcxCalendarClassicViewInfo(TcxCustomCalendar* ACalendar);
	__fastcall virtual ~TcxCalendarClassicViewInfo();
	virtual void __fastcall Initialize();
};


class PASCALIMPLEMENTATION TcxCalendarModernViewInfo : public TcxCalendarViewInfo
{
	typedef TcxCalendarViewInfo inherited;
	
private:
	System::Types::TSize FMaxDayOfWeekNameSize;
	TcxCalendarModernDateViewInfo* __fastcall GetDateViewInfo();
	TcxCalendarModernHeaderViewInfo* __fastcall GetHeaderViewInfo();
	
protected:
	virtual TcxCalendarButtonsViewInfo* __fastcall CreateButtonsViewInfo();
	virtual TcxCalendarHeaderViewInfo* __fastcall CreateHeaderViewInfo();
	virtual TcxCalendarDateViewInfo* __fastcall CreateDateViewInfo();
	virtual TcxCalendarTimeViewInfo* __fastcall CreateTimeViewInfo();
	virtual bool __fastcall AllowHidePopupOnMouseUp();
	virtual bool __fastcall CanFade();
	virtual void __fastcall DoCalculateBounds();
	virtual System::Types::TSize __fastcall DoCalculateSize();
	virtual System::Types::TSize __fastcall GetArrowSize();
	virtual System::Types::TRect __fastcall GetDateInfoOffsets();
	virtual int __fastcall GetDateTimeInfoOffset();
	virtual int __fastcall GetHeaderOffset();
	virtual System::UnicodeString __fastcall GetMonthDateHeaderText();
	virtual bool __fastcall IsDateHeaderTransparent();
	virtual bool __fastcall IsHeaderVisible();
	virtual bool __fastcall IsYearDateHeaderVisible();
	virtual void __fastcall Reset();
	
public:
	virtual void __fastcall Initialize();
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
	__property TcxCalendarModernDateViewInfo* DateViewInfo = {read=GetDateViewInfo};
	__property TcxCalendarModernHeaderViewInfo* HeaderViewInfo = {read=GetHeaderViewInfo};
public:
	/* TcxCalendarViewInfo.Create */ inline __fastcall virtual TcxCalendarModernViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarViewInfo(ACalendar) { }
	/* TcxCalendarViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarModernViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarTouchUIViewInfo : public TcxCalendarViewInfo
{
	typedef TcxCalendarViewInfo inherited;
	
private:
	Dxdatetimewheelpicker::TdxDateTimeWheelPicker* FDateTimeWheelPicker;
	void __fastcall DatePickerValueChanged(System::TObject* ASender);
	double __fastcall GetDateTime();
	
protected:
	virtual void __fastcall AddVisibleElements();
	virtual bool __fastcall AllowHidePopupOnMouseUp();
	virtual TcxCalendarButtonsViewInfo* __fastcall CreateButtonsViewInfo();
	virtual void __fastcall CreateElements();
	virtual void __fastcall DestroyElements();
	virtual void __fastcall DoCalculateBounds();
	virtual System::Types::TSize __fastcall DoCalculateSize();
	virtual void __fastcall DoSetFirstDate(double Value, bool AAnimated);
	virtual void __fastcall DoSetSelectDate(double AValue, bool ARepositionVisibleDates, bool AAnimated);
	virtual void __fastcall InitControls();
	virtual void __fastcall InitializeVisibleElements();
	virtual bool __fastcall IsButtonsTabStop();
	virtual bool __fastcall IsButtonVisible(TCalendarButton AType);
	virtual bool __fastcall IsHeaderVisible();
	
public:
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
public:
	/* TcxCalendarViewInfo.Create */ inline __fastcall virtual TcxCalendarTouchUIViewInfo(TcxCustomCalendar* ACalendar) : TcxCalendarViewInfo(ACalendar) { }
	/* TcxCalendarViewInfo.Destroy */ inline __fastcall virtual ~TcxCalendarTouchUIViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxCalendarHitTest : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TcxCalendarController* FController;
	TcxCalendarElementViewInfo* FHitObject;
	__int64 FFlags;
	System::Types::TPoint FHitPoint;
	bool __fastcall GetBitState(int AIndex);
	
public:
	__fastcall TcxCalendarHitTest(TcxCalendarController* AOwner);
	void __fastcall Clear();
	void __fastcall Recalculate();
	void __fastcall SetBitState(int AIndex, bool AValue);
	virtual void __fastcall Calculate(const System::Types::TPoint &APoint);
	__property bool HitAtBackground = {read=GetBitState, index=7, nodefault};
	__property bool HitAtDateHeaderArrow = {read=GetBitState, index=4, nodefault};
	__property bool HitAtDateTableCell = {read=GetBitState, index=5, nodefault};
	__property bool HitAtHeader = {read=GetBitState, index=6, nodefault};
	__property bool HitAtMonthDateHeader = {read=GetBitState, index=1, nodefault};
	__property bool HitAtYearDateHeader = {read=GetBitState, index=2, nodefault};
	__property TcxCalendarElementViewInfo* HitObject = {read=FHitObject, write=FHitObject};
	__property System::Types::TPoint HitPoint = {read=FHitPoint};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCalendarHitTest() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCalendarController : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TcxCalendarHitTest* FHitTest;
	TcxCalendarElementViewInfo* FHotElement;
	TcxCustomCalendar* FCalendar;
	TcxCalendarElementViewInfo* FPressedElement;
	Cxclasses::TcxTimer* FTimer;
	void __fastcall CheckHotElement(System::Classes::TShiftState AShift, const System::Types::TPoint &APoint);
	void __fastcall DoScrollArrow(System::TObject* Sender);
	TcxCalendarViewInfo* __fastcall GetViewInfo();
	void __fastcall SetHotElement(TcxCalendarElementViewInfo* AValue);
	void __fastcall SetPressedElement(TcxCalendarElementViewInfo* AValue);
	
protected:
	virtual TcxCalendarHitTest* __fastcall CreateHitTestController();
	virtual bool __fastcall DoCanFocus();
	virtual void __fastcall DoDblClick();
	virtual void __fastcall DoKeyDown(System::Word &AKey, System::Classes::TShiftState AShift);
	virtual void __fastcall DoMouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall DoMouseLeave();
	virtual void __fastcall DoMouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall DoMouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual bool __fastcall DoMouseWheel(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	virtual bool __fastcall IsMouseWheelHandleNeeded(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	__property TcxCalendarElementViewInfo* HotElement = {read=FHotElement, write=SetHotElement};
	__property TcxCalendarElementViewInfo* PressedElement = {read=FPressedElement, write=SetPressedElement};
	
public:
	__fastcall TcxCalendarController(TcxCustomCalendar* ACalendar);
	__fastcall virtual ~TcxCalendarController();
	bool __fastcall CanFocus();
	void __fastcall DblClick();
	virtual void __fastcall HidePopup(Cxcontrols::TcxControl* Sender, Cxedit::TcxEditCloseUpReason AReason);
	void __fastcall KeyDown(System::Word &AKey, System::Classes::TShiftState AShift);
	void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall MouseLeave();
	void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	bool __fastcall MouseWheel(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	__property TcxCalendarHitTest* HitTest = {read=FHitTest};
	__property TcxCalendarViewInfo* ViewInfo = {read=GetViewInfo};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCalendarClassicController : public TcxCalendarController
{
	typedef TcxCalendarController inherited;
	
private:
	HIDESBASE TcxCalendarClassicViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DoKeyDown(System::Word &AKey, System::Classes::TShiftState AShift);
	virtual bool __fastcall IsMouseWheelHandleNeeded(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	
public:
	virtual void __fastcall HidePopup(Cxcontrols::TcxControl* Sender, Cxedit::TcxEditCloseUpReason AReason);
	__property TcxCalendarClassicViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCalendarController.Create */ inline __fastcall TcxCalendarClassicController(TcxCustomCalendar* ACalendar) : TcxCalendarController(ACalendar) { }
	/* TcxCalendarController.Destroy */ inline __fastcall virtual ~TcxCalendarClassicController() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCalendarModernController : public TcxCalendarController
{
	typedef TcxCalendarController inherited;
	
private:
	HIDESBASE TcxCalendarModernViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DoKeyDown(System::Word &AKey, System::Classes::TShiftState AShift);
	virtual bool __fastcall DoMouseWheel(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	virtual bool __fastcall IsMouseWheelHandleNeeded(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	
public:
	__property TcxCalendarModernViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCalendarController.Create */ inline __fastcall TcxCalendarModernController(TcxCustomCalendar* ACalendar) : TcxCalendarController(ACalendar) { }
	/* TcxCalendarController.Destroy */ inline __fastcall virtual ~TcxCalendarModernController() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCalendarTouchUIController : public TcxCalendarController
{
	typedef TcxCalendarController inherited;
	
protected:
	virtual bool __fastcall DoCanFocus();
	virtual void __fastcall DoKeyDown(System::Word &AKey, System::Classes::TShiftState AShift);
	virtual bool __fastcall IsMouseWheelHandleNeeded(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
public:
	/* TcxCalendarController.Create */ inline __fastcall TcxCalendarTouchUIController(TcxCustomCalendar* ACalendar) : TcxCalendarController(ACalendar) { }
	/* TcxCalendarController.Destroy */ inline __fastcall virtual ~TcxCalendarTouchUIController() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCalendarPainter : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TcxCustomCalendar* FCalendar;
	Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetLookAndFeelPainter();
	
protected:
	virtual void __fastcall DrawArrow(Cxgraphics::TcxCanvas* ACanvas, TcxCalendarArrowViewInfo* AViewInfo);
	virtual void __fastcall DrawButtonsBackground(Cxgraphics::TcxCanvas* ACanvas, TcxCalendarButtonsViewInfo* AViewInfo);
	virtual void __fastcall DrawDateCellText(Cxgraphics::TcxCanvas* ACanvas, TcxCalendarDateCellViewInfo* AViewInfo);
	virtual void __fastcall DrawDateCellBackground(Cxgraphics::TcxCanvas* ACanvas, TcxCalendarDateCellViewInfo* AViewInfo);
	virtual void __fastcall DrawDateCellSelection(Cxgraphics::TcxCanvas* ACanvas, TcxCalendarDateCellViewInfo* AViewInfo);
	virtual void __fastcall DrawDateHeaderCell(Cxgraphics::TcxCanvas* ACanvas, TcxCalendarDateHeaderCellViewInfo* AViewInfo);
	virtual void __fastcall DrawDateHeaderCellText(Cxgraphics::TcxCanvas* ACanvas, TcxCalendarDateHeaderCellViewInfo* AViewInfo);
	virtual void __fastcall DrawHeader(Cxgraphics::TcxCanvas* ACanvas, TcxCalendarHeaderViewInfo* AViewInfo);
	virtual void __fastcall DrawHeaderText(Cxgraphics::TcxCanvas* ACanvas, TcxCalendarHeaderViewInfo* AViewInfo);
	virtual System::Uitypes::TColor __fastcall GetCellTextColor(Cxlookandfeelpainters::TcxCalendarElementStates ADrawStates);
	__property Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* LookAndFeelPainter = {read=GetLookAndFeelPainter};
	
public:
	__fastcall virtual TcxCalendarPainter(TcxCustomCalendar* ACalendar);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCalendarPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCalendarModernPainter : public TcxCalendarPainter
{
	typedef TcxCalendarPainter inherited;
	
protected:
	virtual void __fastcall DrawArrow(Cxgraphics::TcxCanvas* ACanvas, TcxCalendarArrowViewInfo* AViewInfo);
	virtual void __fastcall DrawDateCellBackground(Cxgraphics::TcxCanvas* ACanvas, TcxCalendarDateCellViewInfo* AViewInfo);
	virtual void __fastcall DrawDateCellSelection(Cxgraphics::TcxCanvas* ACanvas, TcxCalendarDateCellViewInfo* AViewInfo);
	virtual void __fastcall DrawDateHeaderCell(Cxgraphics::TcxCanvas* ACanvas, TcxCalendarDateHeaderCellViewInfo* AViewInfo);
	virtual void __fastcall DrawDateHeaderCellText(Cxgraphics::TcxCanvas* ACanvas, TcxCalendarDateHeaderCellViewInfo* AViewInfo);
	virtual void __fastcall DrawHeader(Cxgraphics::TcxCanvas* ACanvas, TcxCalendarHeaderViewInfo* AViewInfo);
	virtual void __fastcall DrawHeaderText(Cxgraphics::TcxCanvas* ACanvas, TcxCalendarHeaderViewInfo* AViewInfo);
	virtual System::Uitypes::TColor __fastcall GetCellTextColor(Cxlookandfeelpainters::TcxCalendarElementStates ADrawStates);
public:
	/* TcxCalendarPainter.Create */ inline __fastcall virtual TcxCalendarModernPainter(TcxCustomCalendar* ACalendar) : TcxCalendarPainter(ACalendar) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCalendarModernPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCalendarTouchUIPainter : public TcxCalendarPainter
{
	typedef TcxCalendarPainter inherited;
	
public:
	/* TcxCalendarPainter.Create */ inline __fastcall virtual TcxCalendarTouchUIPainter(TcxCustomCalendar* ACalendar) : TcxCalendarPainter(ACalendar) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCalendarTouchUIPainter() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TcxCalendarView : unsigned char { cavDefault, cavClassic, cavModern, cavTouchUI };

typedef void __fastcall (__closure *TcxCalendarGetDayOfWeekStateEvent)(System::TObject* Sender, Cxdateutils::TDay ADayOfWeek, Vcl::Comctrls::TCustomDrawState AState, Vcl::Graphics::TFont* AFont, System::Uitypes::TColor &ABackgroundColor);

typedef void __fastcall (__closure *TcxCalendarGetDayStateEvent)(System::TObject* Sender, System::TDateTime ADate, Vcl::Comctrls::TCustomDrawState AState, Vcl::Graphics::TFont* AFont, System::Uitypes::TColor &ABackgroundColor);

class PASCALIMPLEMENTATION TcxCustomCalendar : public Cxcontrols::TcxControl
{
	typedef Cxcontrols::TcxControl inherited;
	
private:
	bool FAnimation;
	bool FArrowsForYear;
	TDateButtons FCalendarButtons;
	TcxCalendarController* FController;
	double FFirstDate;
	bool FFlat;
	bool FIsViewInfoDirty;
	bool FIsSizeCalculated;
	TcxCalendarKind FKind;
	int FLockCount;
	double FMaxDate;
	double FMinDate;
	TcxCalendarPainter* FPainter;
	TcxCalendarView FRealView;
	double FSelectDate;
	bool FShowOnlyValidDates;
	bool FShowToday;
	System::TTime FTime;
	Cxtimeedit::TcxTimeEditTimeFormat FTimeFormat;
	bool FUse24HourFormat;
	TcxCalendarView FView;
	TcxCalendarViewInfo* FViewInfo;
	bool FWeekNumbers;
	bool FYearsInMonthList;
	System::Classes::TNotifyEvent FOnDateTimeChanged;
	TcxCalendarGetDayOfWeekStateEvent FOnGetDayOfWeekState;
	TcxCalendarGetDayStateEvent FOnGetDayState;
	void __fastcall ButtonClick(System::TObject* Sender);
	bool __fastcall CanShowDate(double ADate);
	bool __fastcall CanShowMonth(double ADate);
	bool __fastcall CanShowYear(double ADate);
	void __fastcall CheckChanges();
	void __fastcall CheckRealView();
	void __fastcall CreateSubclasses();
	void __fastcall CorrectHeaderTextRect(System::Types::TRect &R);
	void __fastcall DestroySubclasses();
	void __fastcall DoDateTimeChanged();
	System::Uitypes::TColor __fastcall GetBackgroundColor();
	Cxdateutils::TcxCustomCalendarTable* __fastcall GetCalendarTable();
	System::Uitypes::TColor __fastcall GetContainerBorderColor();
	double __fastcall GetDateFromCell(int X, int Y);
	System::Uitypes::TColor __fastcall GetDateHeaderFrameColor();
	System::Uitypes::TColor __fastcall GetDateTimeHeaderFrameColor();
	System::Uitypes::TColor __fastcall GetHeaderColor();
	System::Types::TRect __fastcall GetHeaderOffset();
	Cxaccessibility::_di_IcxAccessibilityHelper __fastcall GetIAccessibilityHelper();
	bool __fastcall IsDateInRange(double ADate);
	bool __fastcall IsMonthInRange(double ADate);
	bool __fastcall IsYearInRange(double ADate);
	void __fastcall RecreateView();
	void __fastcall SetArrowsForYear(bool Value);
	void __fastcall SetCalendarButtons(TDateButtons Value);
	void __fastcall SetFlat(bool Value);
	void __fastcall SetKind(TcxCalendarKind Value);
	void __fastcall SetMaxDate(double Value);
	void __fastcall SetMinDate(double Value);
	void __fastcall SetShowToday(const bool Value);
	void __fastcall SetTime(const System::TTime Value);
	void __fastcall SetTimeFormat(Cxtimeedit::TcxTimeEditTimeFormat Value);
	void __fastcall SetUse24HourFormat(bool Value);
	void __fastcall SetView(const TcxCalendarView Value);
	void __fastcall SetWeekNumbers(bool Value);
	MESSAGE void __fastcall WMGetObject(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall InitControl();
	DYNAMIC void __fastcall DblClick();
	virtual bool __fastcall InternalMouseWheel(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	virtual bool __fastcall IsMouseWheelHandleNeeded(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall LookAndFeelChanged(Cxlookandfeels::TcxLookAndFeel* Sender, Cxlookandfeels::TcxLookAndFeelValues AChangedValues);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseEnter(Vcl::Controls::TControl* AControl);
	DYNAMIC void __fastcall MouseLeave(Vcl::Controls::TControl* AControl);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall FocusChanged();
	DYNAMIC void __fastcall FontChanged();
	virtual bool __fastcall IsDoubleBufferedNeeded();
	virtual bool __fastcall HasBackground();
	virtual void __fastcall DrawOpaqueBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect);
	virtual void __fastcall Paint();
	virtual bool __fastcall CanResize(int &NewWidth, int &NewHeight);
	virtual bool __fastcall NeedsScrollBars();
	HIDESBASE void __fastcall Changed();
	virtual TcxCalendarController* __fastcall CreateController();
	virtual TcxCalendarPainter* __fastcall CreatePainter();
	virtual TcxCalendarViewInfo* __fastcall CreateViewInfo();
	void __fastcall DoStep(TcxCalendarArrow AArrow);
	virtual int __fastcall GetButtonsRegionOffset();
	virtual double __fastcall GetLastDate();
	virtual System::Types::TPoint __fastcall GetMonthCalendarOffset();
	virtual double __fastcall GetRealFirstDate();
	virtual double __fastcall GetRealLastDate();
	virtual TcxCalendarView __fastcall GetRealView();
	virtual System::Types::TSize __fastcall GetSize();
	double __fastcall GetValidSelectDate();
	HIDESBASE void __fastcall Hide(Cxedit::TcxEditCloseUpReason AReason);
	virtual void __fastcall HidePopup(Cxcontrols::TcxControl* Sender, Cxedit::TcxEditCloseUpReason AReason);
	void __fastcall InternalSetFirstDate(double Value);
	void __fastcall InternalSetSelectDate(double Value)/* overload */;
	void __fastcall InternalSetSelectDate(double Value, bool ARepositionVisibleDates)/* overload */;
	void __fastcall InternalSetTime(const System::TTime Value);
	virtual void __fastcall SetFirstDate(double Value);
	virtual void __fastcall SetSelectDate(double Value);
	void __fastcall StepToFuture();
	void __fastcall StepToPast();
	virtual void __fastcall Calculate();
	double __fastcall CalculateNextDate(double ADate, TcxCalendarArrow AArrow);
	bool __fastcall CanAnimate();
	bool __fastcall IsLocked();
	virtual bool __fastcall IsPopup();
	bool __fastcall IsShowOnlyValidDates();
	void __fastcall MouseTrackingMouseLeave();
	bool __fastcall PtInCaller(const System::Types::TPoint &P);
	bool __fastcall IsCaptureMouse();
	__property System::Uitypes::TColor BackgroundColor = {read=GetBackgroundColor, nodefault};
	__property System::Uitypes::TColor ContainerBorderColor = {read=GetContainerBorderColor, nodefault};
	__property Cxdateutils::TcxCustomCalendarTable* CalendarTable = {read=GetCalendarTable};
	__property TcxCalendarController* Controller = {read=FController};
	__property Cxaccessibility::_di_IcxAccessibilityHelper IAccessibilityHelper = {read=GetIAccessibilityHelper};
	__property bool ShowOnlyValidDates = {read=FShowOnlyValidDates, write=FShowOnlyValidDates, nodefault};
	__property double MaxDate = {read=FMaxDate, write=SetMaxDate};
	__property double MinDate = {read=FMinDate, write=SetMinDate};
	__property TcxCalendarPainter* Painter = {read=FPainter};
	__property System::TTime Time = {read=FTime, write=SetTime};
	__property TcxCalendarViewInfo* ViewInfo = {read=FViewInfo};
	
public:
	__fastcall virtual TcxCustomCalendar(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TcxCustomCalendar();
	void __fastcall BeginUpdate();
	DYNAMIC bool __fastcall CanFocus();
	void __fastcall EndUpdate();
	virtual void __fastcall TranslationChanged();
	__property bool Animation = {read=FAnimation, write=FAnimation, default=1};
	__property bool ArrowsForYear = {read=FArrowsForYear, write=SetArrowsForYear, default=1};
	__property TDateButtons CalendarButtons = {read=FCalendarButtons, write=SetCalendarButtons, nodefault};
	__property double FirstDate = {read=FFirstDate, write=SetFirstDate};
	__property bool Flat = {read=FFlat, write=SetFlat, default=1};
	__property Font;
	__property TcxCalendarKind Kind = {read=FKind, write=SetKind, default=0};
	__property double SelectDate = {read=FSelectDate, write=SetSelectDate};
	__property bool ShowToday = {read=FShowToday, write=SetShowToday, nodefault};
	__property Cxtimeedit::TcxTimeEditTimeFormat TimeFormat = {read=FTimeFormat, write=SetTimeFormat, default=0};
	__property TcxCalendarView View = {read=FView, write=SetView, nodefault};
	__property bool Use24HourFormat = {read=FUse24HourFormat, write=SetUse24HourFormat, default=1};
	__property bool WeekNumbers = {read=FWeekNumbers, write=SetWeekNumbers, default=0};
	__property bool YearsInMonthList = {read=FYearsInMonthList, write=FYearsInMonthList, default=1};
	__property System::Classes::TNotifyEvent OnDateTimeChanged = {read=FOnDateTimeChanged, write=FOnDateTimeChanged};
	__property TcxCalendarGetDayOfWeekStateEvent OnGetDayOfWeekState = {read=FOnGetDayOfWeekState, write=FOnGetDayOfWeekState};
	__property TcxCalendarGetDayStateEvent OnGetDayState = {read=FOnGetDayState, write=FOnGetDayState};
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomCalendar(HWND ParentWindow) : Cxcontrols::TcxControl(ParentWindow) { }
	
private:
	void *__IcxMouseTrackingCaller3;	// Dxcoreclasses::IcxMouseTrackingCaller3 
	void *__IcxMouseTrackingCaller2;	// Dxcoreclasses::IcxMouseTrackingCaller2 
	void *__IcxMouseTrackingCaller;	// Dxcoreclasses::IcxMouseTrackingCaller 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {94877AC7-D2D8-4F2B-8396-DF3CB45E01DF}
	operator Dxcoreclasses::_di_IcxMouseTrackingCaller3()
	{
		Dxcoreclasses::_di_IcxMouseTrackingCaller3 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxcoreclasses::IcxMouseTrackingCaller3*(void) { return (Dxcoreclasses::IcxMouseTrackingCaller3*)&__IcxMouseTrackingCaller3; }
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
	operator Dxcoreclasses::IcxMouseTrackingCaller*(void) { return (Dxcoreclasses::IcxMouseTrackingCaller*)&__IcxMouseTrackingCaller; }
	#endif
	
};


class PASCALIMPLEMENTATION TcxPopupCalendar : public TcxCustomCalendar
{
	typedef TcxCustomCalendar inherited;
	
private:
	TcxCustomDateEdit* FEdit;
	Cxedit::TcxEditClosePopupEvent FOnHidePopup;
	
protected:
	virtual void __fastcall HidePopup(Cxcontrols::TcxControl* Sender, Cxedit::TcxEditCloseUpReason AReason);
	void __fastcall Initialize();
	virtual bool __fastcall IsPopup();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	
public:
	__property TcxCustomDateEdit* Edit = {read=FEdit, write=FEdit};
	__property Cxedit::TcxEditClosePopupEvent OnHidePopup = {read=FOnHidePopup, write=FOnHidePopup};
public:
	/* TcxCustomCalendar.Create */ inline __fastcall virtual TcxPopupCalendar(System::Classes::TComponent* AOwner) : TcxCustomCalendar(AOwner) { }
	/* TcxCustomCalendar.Destroy */ inline __fastcall virtual ~TcxPopupCalendar() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxPopupCalendar(HWND ParentWindow) : TcxCustomCalendar(ParentWindow) { }
	
};


typedef System::TMetaClass* TcxPopupCalendarClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDateEditPropertiesValues : public Cxtextedit::TcxTextEditPropertiesValues
{
	typedef Cxtextedit::TcxTextEditPropertiesValues inherited;
	
private:
	bool FDateButtons;
	bool FInputKind;
	bool __fastcall GetMaxDate();
	bool __fastcall GetMinDate();
	bool __fastcall IsMaxDateStored();
	bool __fastcall IsMinDateStored();
	void __fastcall SetDateButtons(bool Value);
	void __fastcall SetInputKind(bool Value);
	void __fastcall SetMaxDate(bool Value);
	void __fastcall SetMinDate(bool Value);
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall RestoreDefaults();
	
__published:
	__property bool DateButtons = {read=FDateButtons, write=SetDateButtons, stored=false, nodefault};
	__property bool InputKind = {read=FInputKind, write=SetInputKind, stored=false, nodefault};
	__property bool MaxDate = {read=GetMaxDate, write=SetMaxDate, stored=IsMaxDateStored, nodefault};
	__property bool MinDate = {read=GetMinDate, write=SetMinDate, stored=IsMinDateStored, nodefault};
public:
	/* TcxCustomEditPropertiesValues.Create */ inline __fastcall virtual TcxDateEditPropertiesValues(System::Classes::TPersistent* AOwner) : Cxtextedit::TcxTextEditPropertiesValues(AOwner) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxDateEditPropertiesValues() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TDateOnError : unsigned char { deNoChange, deToday, deNull };

enum DECLSPEC_DENUM TcxInputKind : unsigned char { ikStandard, ikMask, ikRegExpr };

class PASCALIMPLEMENTATION TcxCustomDateEditProperties : public Cxdropdownedit::TcxCustomPopupEditProperties
{
	typedef Cxdropdownedit::TcxCustomPopupEditProperties inherited;
	
private:
	bool FAnimation;
	bool FArrowsForYear;
	TDateButtons FDateButtons;
	TDateOnError FDateOnError;
	TcxInputKind FInputKind;
	TcxCalendarKind FKind;
	bool FSaveTime;
	bool FShowOnlyValidDates;
	bool FShowTime;
	bool FShowToday;
	TcxCalendarView FView;
	bool FWeekNumbers;
	bool FYearsInMonthList;
	TcxCalendarGetDayOfWeekStateEvent FOnGetDayOfWeekState;
	TcxCalendarGetDayStateEvent FOnGetDayState;
	void __fastcall BuildEditMask();
	HIDESBASE TcxDateEditPropertiesValues* __fastcall GetAssignedValues();
	TDateButtons __fastcall GetDateButtons();
	TDateButtons __fastcall GetDefaultDateButtons();
	TcxInputKind __fastcall GetDefaultInputKind();
	TcxInputKind __fastcall GetInputKind();
	System::TDateTime __fastcall GetMaxDate();
	System::TDateTime __fastcall GetMinDate();
	void __fastcall CalendarGetDayOfWeekStateEventHandler(System::TObject* Sender, Cxdateutils::TDay ADayOfWeek, Vcl::Comctrls::TCustomDrawState AState, Vcl::Graphics::TFont* AFont, System::Uitypes::TColor &ABackgroundColor);
	void __fastcall CalendarGetDayStateEventHandler(System::TObject* Sender, System::TDateTime ADate, Vcl::Comctrls::TCustomDrawState AState, Vcl::Graphics::TFont* AFont, System::Uitypes::TColor &ABackgroundColor);
	bool __fastcall IsDateButtonsStored();
	bool __fastcall IsInputKindStored();
	bool __fastcall NeedShowTime(System::TDateTime ADate, bool AIsFocused);
	void __fastcall SetAnimation(bool Value);
	void __fastcall SetArrowsForYear(bool Value);
	HIDESBASE void __fastcall SetAssignedValues(TcxDateEditPropertiesValues* Value);
	void __fastcall SetDateButtons(TDateButtons Value);
	void __fastcall SetDateOnError(TDateOnError Value);
	void __fastcall SetInputKind(TcxInputKind Value);
	void __fastcall SetKind(TcxCalendarKind Value);
	void __fastcall SetMaxDate(System::TDateTime Value);
	void __fastcall SetMinDate(System::TDateTime Value);
	void __fastcall SetSaveTime(bool Value);
	void __fastcall SetShowTime(bool Value);
	void __fastcall SetShowToday(const bool Value);
	void __fastcall SetView(const TcxCalendarView Value);
	void __fastcall SetWeekNumbers(bool Value);
	void __fastcall SetYearsInMonthList(bool Value);
	
protected:
	virtual void __fastcall DoAssign(Cxedit::TcxCustomEditProperties* AProperties);
	virtual void __fastcall DoChanged();
	virtual bool __fastcall GetAlwaysPostEditValue();
	__classmethod virtual Cxedit::TcxCustomEditPropertiesValuesClass __fastcall GetAssignedValuesClass();
	virtual Cxedit::TcxEditDisplayFormatOptions __fastcall GetDisplayFormatOptions();
	virtual Cxmaskedit::TcxMaskEditCustomModeClass __fastcall GetModeClass(Cxmaskedit::TcxEditMaskKind AMaskKind);
	__classmethod virtual Cxdropdownedit::TcxCustomEditPopupWindowClass __fastcall GetPopupWindowClass();
	virtual bool __fastcall IsEditValueEmpty(const System::Variant &AEditValue);
	virtual bool __fastcall IsEditValueNumeric();
	virtual bool __fastcall IsValueBoundDefined(Cxtextedit::TcxEditValueBound ABound);
	virtual bool __fastcall IsValueBoundsDefined();
	virtual bool __fastcall PopupWindowAcceptsAnySize();
	System::UnicodeString __fastcall GetEmptyDisplayValue(bool AEditFocused);
	virtual System::WideChar __fastcall GetStandardMaskBlank(int APos);
	virtual bool __fastcall GetTimeZoneInfo(int APos, /* out */ Cxtimeedit::TcxTimeEditZoneInfo &AInfo);
	void __fastcall InternalPrepareEditValue(System::UnicodeString ADisplayValue, /* out */ System::Variant &AEditValue);
	__property TcxDateEditPropertiesValues* AssignedValues = {read=GetAssignedValues, write=SetAssignedValues};
	
public:
	__fastcall virtual TcxCustomDateEditProperties(System::Classes::TPersistent* AOwner);
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	virtual Cxdatautils::TcxDataEditValueSource __fastcall GetEditValueSource(bool AEditFocused);
	virtual bool __fastcall IsDisplayValueValid(System::Variant &DisplayValue, bool AEditFocused);
	virtual bool __fastcall IsEditValueValid(System::Variant &EditValue, bool AEditFocused);
	virtual bool __fastcall IsValueFormattedByProperties();
	virtual void __fastcall DoPrepareDisplayValue(const System::Variant &AEditValue, System::Variant &ADisplayValue, bool AEditFocused);
	virtual void __fastcall ValidateDisplayValue(System::Variant &ADisplayValue, Vcl::Controls::TCaption &AErrorText, bool &AError, Cxedit::TcxCustomEdit* AEdit);
	__property bool Animation = {read=FAnimation, write=SetAnimation, default=1};
	__property bool ArrowsForYear = {read=FArrowsForYear, write=SetArrowsForYear, default=1};
	__property TDateButtons DateButtons = {read=GetDateButtons, write=SetDateButtons, stored=IsDateButtonsStored, nodefault};
	__property TDateOnError DateOnError = {read=FDateOnError, write=SetDateOnError, default=0};
	__property ImmediateDropDownWhenKeyPressed = {default=0};
	__property TcxInputKind InputKind = {read=GetInputKind, write=SetInputKind, stored=IsInputKindStored, nodefault};
	__property TcxCalendarKind Kind = {read=FKind, write=SetKind, default=0};
	__property System::TDateTime MaxDate = {read=GetMaxDate, write=SetMaxDate};
	__property System::TDateTime MinDate = {read=GetMinDate, write=SetMinDate};
	__property bool SaveTime = {read=FSaveTime, write=SetSaveTime, default=1};
	__property bool ShowOnlyValidDates = {read=FShowOnlyValidDates, write=FShowOnlyValidDates, default=0};
	__property TcxCalendarView View = {read=FView, write=SetView, default=0};
	__property bool ShowTime = {read=FShowTime, write=SetShowTime, default=1};
	__property bool ShowToday = {read=FShowToday, write=SetShowToday, default=1};
	__property bool WeekNumbers = {read=FWeekNumbers, write=SetWeekNumbers, default=0};
	__property bool YearsInMonthList = {read=FYearsInMonthList, write=SetYearsInMonthList, default=1};
	__property TcxCalendarGetDayOfWeekStateEvent OnGetDayOfWeekState = {read=FOnGetDayOfWeekState, write=FOnGetDayOfWeekState};
	__property TcxCalendarGetDayStateEvent OnGetDayState = {read=FOnGetDayState, write=FOnGetDayState};
public:
	/* TcxCustomDropDownEditProperties.Destroy */ inline __fastcall virtual ~TcxCustomDateEditProperties() { }
	
};


class PASCALIMPLEMENTATION TcxDateEditProperties : public TcxCustomDateEditProperties
{
	typedef TcxCustomDateEditProperties inherited;
	
__published:
	__property Alignment;
	__property Animation = {default=1};
	__property ArrowsForYear = {default=1};
	__property AssignedValues;
	__property AutoSelect = {default=1};
	__property ButtonGlyph;
	__property ClearKey = {default=0};
	__property DateButtons;
	__property DateOnError = {default=0};
	__property DisplayFormat = {default=0};
	__property EditFormat = {default=0};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property ImmediateDropDownWhenActivated = {default=0};
	__property ImmediateDropDownWhenKeyPressed = {default=0};
	__property ImmediatePost = {default=0};
	__property InputKind;
	__property Kind = {default=0};
	__property MaxDate = {default=0};
	__property MinDate = {default=0};
	__property Nullstring = {default=0};
	__property PostPopupValueOnTab = {default=0};
	__property ReadOnly;
	__property SaveTime = {default=1};
	__property ShowOnlyValidDates = {default=0};
	__property ShowTime = {default=1};
	__property ShowToday = {default=1};
	__property UseLeftAlignmentOnEditing;
	__property UseNullString = {default=0};
	__property ValidateOnEnter = {default=1};
	__property ValidationErrorIconAlignment = {default=0};
	__property ValidationOptions = {default=1};
	__property View = {default=0};
	__property WeekNumbers = {default=0};
	__property YearsInMonthList = {default=1};
	__property OnChange;
	__property OnCloseUp;
	__property OnEditValueChanged;
	__property OnGetDayOfWeekState;
	__property OnGetDayState;
	__property OnInitPopup;
	__property OnPopup;
	__property OnValidate;
public:
	/* TcxCustomDateEditProperties.Create */ inline __fastcall virtual TcxDateEditProperties(System::Classes::TPersistent* AOwner) : TcxCustomDateEditProperties(AOwner) { }
	
public:
	/* TcxCustomDropDownEditProperties.Destroy */ inline __fastcall virtual ~TcxDateEditProperties() { }
	
};


class PASCALIMPLEMENTATION TcxDateEditPopupWindow : public Cxdropdownedit::TcxPopupEditPopupWindow
{
	typedef Cxdropdownedit::TcxPopupEditPopupWindow inherited;
	
protected:
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual bool __fastcall IsPopupCalendarKey(System::Word Key, System::Classes::TShiftState Shift);
	
public:
	__fastcall virtual TcxDateEditPopupWindow(Vcl::Controls::TWinControl* AOwnerControl);
public:
	/* TcxCustomEditPopupWindow.Destroy */ inline __fastcall virtual ~TcxDateEditPopupWindow() { }
	
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TcxDateEditPopupWindow(System::Classes::TComponent* AOwner, int Dummy) : Cxdropdownedit::TcxPopupEditPopupWindow(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxDateEditPopupWindow(HWND ParentWindow) : Cxdropdownedit::TcxPopupEditPopupWindow(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDateEditMaskStandardMode : public Cxmaskedit::TcxMaskEditStandardMode
{
	typedef Cxmaskedit::TcxMaskEditStandardMode inherited;
	
protected:
	virtual System::WideChar __fastcall GetBlank(int APos);
public:
	/* TcxMaskEditStandardMode.Create */ inline __fastcall virtual TcxDateEditMaskStandardMode(Cxmaskedit::TcxCustomMaskEdit* AEdit, Cxmaskedit::TcxCustomMaskEditProperties* AProperties) : Cxmaskedit::TcxMaskEditStandardMode(AEdit, AProperties) { }
	/* TcxMaskEditStandardMode.Destroy */ inline __fastcall virtual ~TcxDateEditMaskStandardMode() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxCustomDateEdit : public Cxdropdownedit::TcxCustomPopupEdit
{
	typedef Cxdropdownedit::TcxCustomPopupEdit inherited;
	
private:
	System::TDateTime FDateDropDown;
	System::TDateTime FSavedTime;
	HIDESBASE TcxCustomDateEditProperties* __fastcall GetActiveProperties();
	System::TDateTime __fastcall GetCurrentDate();
	HIDESBASE TcxCustomDateEditProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(TcxCustomDateEditProperties* Value);
	
protected:
	TcxPopupCalendar* FCalendar;
	virtual bool __fastcall CanSynchronizeModeText();
	virtual void __fastcall CheckEditorValueBounds();
	virtual void __fastcall CreatePopupWindow();
	virtual void __fastcall DropDown();
	virtual void __fastcall Initialize();
	virtual void __fastcall InitializePopupWindow();
	virtual System::Variant __fastcall InternalGetEditingValue();
	virtual System::UnicodeString __fastcall InternalGetText();
	virtual System::Variant __fastcall InternalGetValueToValidate();
	virtual void __fastcall InternalSetEditValue(const System::Variant &Value, bool AValidateEditValue);
	virtual bool __fastcall InternalSetText(const System::UnicodeString Value);
	virtual void __fastcall InternalValidateDisplayValue(const System::Variant &ADisplayValue);
	virtual bool __fastcall IsCharValidForPos(System::WideChar &AChar, int APos);
	DYNAMIC void __fastcall PopupWindowClosed(System::TObject* Sender);
	DYNAMIC void __fastcall PopupWindowShowed(System::TObject* Sender);
	virtual void __fastcall SetupPopupWindow();
	virtual void __fastcall UpdateTextFormatting();
	virtual void __fastcall CreateCalendar();
	virtual void __fastcall DateChange(System::TObject* Sender);
	virtual TcxPopupCalendarClass __fastcall GetCalendarClass();
	virtual System::TDateTime __fastcall GetDate();
	System::TDateTime __fastcall GetDateFromStr(const System::UnicodeString S);
	virtual System::Variant __fastcall GetRecognizableDisplayValue(System::TDateTime ADate);
	virtual void __fastcall SetDate(System::TDateTime Value);
	__property TcxPopupCalendar* Calendar = {read=FCalendar};
	
public:
	__fastcall virtual ~TcxCustomDateEdit();
	virtual void __fastcall Clear();
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	virtual void __fastcall PrepareEditValue(const System::Variant &ADisplayValue, /* out */ System::Variant &EditValue, bool AEditFocused);
	__property TcxCustomDateEditProperties* ActiveProperties = {read=GetActiveProperties};
	__property System::TDateTime CurrentDate = {read=GetCurrentDate};
	__property System::TDateTime Date = {read=GetDate, write=SetDate, stored=false};
	__property TcxCustomDateEditProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxCustomMaskEdit.Create */ inline __fastcall virtual TcxCustomDateEdit(System::Classes::TComponent* AOwner)/* overload */ : Cxdropdownedit::TcxCustomPopupEdit(AOwner) { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxCustomDateEdit(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Cxdropdownedit::TcxCustomPopupEdit(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomDateEdit(HWND ParentWindow) : Cxdropdownedit::TcxCustomPopupEdit(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxDateEdit : public TcxCustomDateEdit
{
	typedef TcxCustomDateEdit inherited;
	
private:
	HIDESBASE TcxDateEditProperties* __fastcall GetActiveProperties();
	HIDESBASE TcxDateEditProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(TcxDateEditProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TcxDateEditProperties* ActiveProperties = {read=GetActiveProperties};
	
__published:
	__property Anchors = {default=3};
	__property AutoSize = {default=1};
	__property BeepOnEnter = {default=1};
	__property BiDiMode;
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property Date = {default=0};
	__property DragMode = {default=0};
	__property EditValue = {default=0};
	__property Enabled = {default=1};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property TcxDateEditProperties* Properties = {read=GetProperties, write=SetProperties};
	__property ShowHint;
	__property Style;
	__property StyleDisabled;
	__property StyleFocused;
	__property StyleHot;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TextHint = {default=0};
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
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDrag;
	__property OnStartDock;
public:
	/* TcxCustomDateEdit.Destroy */ inline __fastcall virtual ~TcxDateEdit() { }
	
public:
	/* TcxCustomMaskEdit.Create */ inline __fastcall virtual TcxDateEdit(System::Classes::TComponent* AOwner)/* overload */ : TcxCustomDateEdit(AOwner) { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxDateEdit(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : TcxCustomDateEdit(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxDateEdit(HWND ParentWindow) : TcxCustomDateEdit(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxFilterDateEditHelper : public Cxdropdownedit::TcxFilterDropDownEditHelper
{
	typedef Cxdropdownedit::TcxFilterDropDownEditHelper inherited;
	
public:
	__classmethod virtual Cxfiltercontrolutils::TcxFilterDataType __fastcall GetFilterDataType(Cxdatastorage::TcxValueTypeClass AValueTypeClass);
	__classmethod virtual Cxedit::TcxCustomEditClass __fastcall GetFilterEditClass();
	__classmethod virtual Cxfiltercontrolutils::TcxFilterControlOperators __fastcall GetSupportedFilterOperators(Cxedit::TcxCustomEditProperties* AProperties, Cxdatastorage::TcxValueTypeClass AValueTypeClass, bool AExtendedSet = false);
	__classmethod virtual void __fastcall InitializeProperties(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditProperties* AEditProperties, bool AHasButtons);
public:
	/* TObject.Create */ inline __fastcall TcxFilterDateEditHelper() : Cxdropdownedit::TcxFilterDropDownEditHelper() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxFilterDateEditHelper() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 cchtNone = System::Int8(0x0);
static const System::Int8 cchtMonthHeader = System::Int8(0x1);
static const System::Int8 cchtYearHeader = System::Int8(0x2);
static const System::Int8 cchtDateHeaderText = System::Int8(0x3);
static const System::Int8 cchtDateHeaderArrow = System::Int8(0x4);
static const System::Int8 cchtDateTableCell = System::Int8(0x5);
static const System::Int8 cchtHeader = System::Int8(0x6);
static const System::Int8 cchtBackground = System::Int8(0x7);
extern DELPHI_PACKAGE bool cxCalendarUseClassicViewAsDefault;
extern DELPHI_PACKAGE bool __fastcall VarIsNullDate(const System::Variant &AValue);
}	/* namespace Cxcalendar */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXCALENDAR)
using namespace Cxcalendar;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxcalendarHPP
