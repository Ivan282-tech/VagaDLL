// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxFilterPopupWindow.pas' rev: 35.00 (Windows)

#ifndef DxfilterpopupwindowHPP
#define DxfilterpopupwindowHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Controls.hpp>
#include <Winapi.Messages.hpp>
#include <cxControls.hpp>
#include <cxGraphics.hpp>
#include <cxListBox.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <dxCore.hpp>
#include <dxCoreClasses.hpp>
#include <cxContainer.hpp>
#include <dxIncrementalFiltering.hpp>
#include <cxFilter.hpp>
#include <cxButtons.hpp>
#include <cxClasses.hpp>
#include <cxTextEdit.hpp>
#include <dxUIElementPopupWindow.hpp>
#include <dxFilterValueContainer.hpp>
#include <System.Generics.Collections.hpp>
#include <cxGeometry.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <dxForms.hpp>
#include <Vcl.Forms.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxfilterpopupwindow
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IdxFilterPopupWindowOptions;
typedef System::DelphiInterface<IdxFilterPopupWindowOptions> _di_IdxFilterPopupWindowOptions;
__interface DELPHIINTERFACE IdxExcelFilterPopupWindowOptions;
typedef System::DelphiInterface<IdxExcelFilterPopupWindowOptions> _di_IdxExcelFilterPopupWindowOptions;
__interface DELPHIINTERFACE IdxFilterPopupWindowOwner;
typedef System::DelphiInterface<IdxFilterPopupWindowOwner> _di_IdxFilterPopupWindowOwner;
__interface DELPHIINTERFACE IdxFilterPopupWindowFilterValueContainer;
typedef System::DelphiInterface<IdxFilterPopupWindowFilterValueContainer> _di_IdxFilterPopupWindowFilterValueContainer;
class DELPHICLASS TdxFilterPopupWindowFilterValueContainerListBox;
class DELPHICLASS TdxFilterPopupWindowExcelFilterValueContainerListBox;
class DELPHICLASS TdxFilterPopupWindowFilterValueContainer;
class DELPHICLASS TdxFilterPopupWindowExcelFilterValueContainer;
class DELPHICLASS TdxFilterPopupWindowCustomItemViewInfo;
class DELPHICLASS TdxFilterPopupWindowSysPanelButtonViewInfo;
class DELPHICLASS TdxFilterPopupWindowSysPanelClearButtonViewInfo;
class DELPHICLASS TdxFilterPopupWindowSysPanelCloseButtonViewInfo;
class DELPHICLASS TdxFilterPopupWindowSysPanelCancelButtonViewInfo;
class DELPHICLASS TdxFilterPopupWindowSysPanelOkButtonViewInfo;
class DELPHICLASS TdxFilterPopupWindowSysPanelViewInfo;
class DELPHICLASS TdxFilterPopupWindowViewInfo;
class DELPHICLASS TdxFilterPopupWindow;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TdxFilterPopupWindowMode : unsigned char { fpmDefault, fpmClassic, fpmExcel };

typedef TdxFilterPopupWindowMode TdxFilterPopupWindowActualMode;

enum DECLSPEC_DENUM TdxFilterPopupWindowSysPanelType : unsigned char { sptNone, sptClearClose, sptClearOkCancel };

__interface  INTERFACE_UUID("{EF3A7F20-7A85-4AEB-9FE6-91D3A60CDBC7}") IdxFilterPopupWindowOptions  : public System::IInterface 
{
	virtual Dxfiltervaluecontainer::TdxFilterApplyChangesMode __fastcall GetApplyMode() = 0 ;
	virtual System::UnicodeString __fastcall GetButtonCaption() = 0 ;
	virtual bool __fastcall GetIncrementalFiltering() = 0 ;
	virtual Cxtextedit::TcxTextEditIncrementalFilteringOptions __fastcall GetIncrementalFilteringOptions() = 0 ;
	virtual int __fastcall GetVisibleItemCount() = 0 ;
	virtual bool __fastcall GetShowCheckBoxes() = 0 ;
	virtual int __fastcall GetWidth() = 0 ;
};

__interface  INTERFACE_UUID("{BC38A38C-8202-46C6-B5B3-3952577DE96B}") IdxExcelFilterPopupWindowOptions  : public System::IInterface 
{
	virtual Dxfiltervaluecontainer::TdxExcelFilterValueContainerApplyChangesMode __fastcall GetApplyChanges() = 0 ;
	virtual Dxfiltervaluecontainer::TdxExcelFilterValueContainerDateTimeValuesPageType __fastcall GetDateTimeValuesPageType() = 0 ;
	virtual Dxfiltervaluecontainer::TdxExcelFilterValueContainerDefaultPage __fastcall GetDefaultPage() = 0 ;
	virtual Dxfiltervaluecontainer::TdxExcelFilterValueContainerNumericValuesPageType __fastcall GetNumericValuesPageType() = 0 ;
};

__interface  INTERFACE_UUID("{973519A2-4DDB-4DF6-93E9-D23E89675977}") IdxFilterPopupWindowOwner  : public System::IInterface 
{
	virtual System::Classes::TComponent* __fastcall GetLinkComponent() = 0 ;
	virtual TdxFilterPopupWindowMode __fastcall GetMode() = 0 ;
	virtual System::TObject* __fastcall GetOptions() = 0 ;
};

__interface  INTERFACE_UUID("{F48DAC4E-2091-4D0A-A596-A19629D08B07}") IdxFilterPopupWindowFilterValueContainer  : public System::IInterface 
{
	virtual void __fastcall AssignOptions(System::TObject* AOptions) = 0 ;
	virtual void __fastcall Closed() = 0 ;
	virtual void __fastcall FocusStartControl() = 0 ;
	virtual void __fastcall SysPanelButtonAction(int AHitCode) = 0 ;
	virtual bool __fastcall SysPanelButtonEnabled(int AHitCode) = 0 ;
	virtual TdxFilterPopupWindowSysPanelType __fastcall SysPanelType() = 0 ;
};

class PASCALIMPLEMENTATION TdxFilterPopupWindowFilterValueContainerListBox : public Dxfiltervaluecontainer::TdxFilterValueContainerListBox
{
	typedef Dxfiltervaluecontainer::TdxFilterValueContainerListBox inherited;
	
private:
	HIDESBASE TdxFilterPopupWindowFilterValueContainer* __fastcall GetFilterValueContainer();
	
protected:
	virtual void __fastcall ApplyCheckAction(int AItemIndex);
	virtual void __fastcall ApplyClickAction(int AItemIndex);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	
public:
	__property TdxFilterPopupWindowFilterValueContainer* FilterValueContainer = {read=GetFilterValueContainer};
public:
	/* TdxCustomFilterValueContainerListBox.Create */ inline __fastcall virtual TdxFilterPopupWindowFilterValueContainerListBox(Dxfiltervaluecontainer::TdxCustomFilterValueContainer* AFilterValueContainer) : Dxfiltervaluecontainer::TdxFilterValueContainerListBox(AFilterValueContainer) { }
	
public:
	/* TdxCustomCheckListBox.Destroy */ inline __fastcall virtual ~TdxFilterPopupWindowFilterValueContainerListBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxFilterPopupWindowFilterValueContainerListBox(HWND ParentWindow) : Dxfiltervaluecontainer::TdxFilterValueContainerListBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TdxFilterPopupWindowExcelFilterValueContainerListBox : public Dxfiltervaluecontainer::TdxExcelFilterValueContainerListBox
{
	typedef Dxfiltervaluecontainer::TdxExcelFilterValueContainerListBox inherited;
	
private:
	TdxFilterPopupWindowExcelFilterValueContainer* __fastcall GetFilterValueContainer();
	
protected:
	virtual void __fastcall ApplyCheckAction(int AItemIndex);
	
public:
	__property TdxFilterPopupWindowExcelFilterValueContainer* FilterValueContainer = {read=GetFilterValueContainer};
public:
	/* TdxExcelFilterValueContainerListBox.Create */ inline __fastcall virtual TdxFilterPopupWindowExcelFilterValueContainerListBox(Dxfiltervaluecontainer::TdxCustomFilterValueContainer* AFilterValueContainer) : Dxfiltervaluecontainer::TdxExcelFilterValueContainerListBox(AFilterValueContainer) { }
	
public:
	/* TdxCustomCheckListBox.Destroy */ inline __fastcall virtual ~TdxFilterPopupWindowExcelFilterValueContainerListBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxFilterPopupWindowExcelFilterValueContainerListBox(HWND ParentWindow) : Dxfiltervaluecontainer::TdxExcelFilterValueContainerListBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TdxFilterPopupWindowFilterValueContainer : public Dxfiltervaluecontainer::TdxFilterValueContainer
{
	typedef Dxfiltervaluecontainer::TdxFilterValueContainer inherited;
	
private:
	TdxFilterPopupWindowFilterValueContainerListBox* __fastcall GetListBox();
	TdxFilterPopupWindow* __fastcall GetPopup();
	int __fastcall GetVisibleItemCount();
	int __fastcall GetVisibleWidth();
	void __fastcall SetVisibleItemCount(int AValue);
	void __fastcall SetVisibleWidth(int AValue);
	
protected:
	virtual void __fastcall AssignOptions(System::TObject* AOptions);
	virtual void __fastcall Closed();
	virtual void __fastcall FocusStartControl();
	virtual void __fastcall SysPanelButtonAction(int AHitCode);
	virtual bool __fastcall SysPanelButtonEnabled(int AHitCode);
	virtual TdxFilterPopupWindowSysPanelType __fastcall SysPanelType();
	DYNAMIC void __fastcall AdjustSize();
	virtual void __fastcall ApplyFilterOnButtonClick();
	DYNAMIC void __fastcall BoundsChanged();
	virtual Dxfiltervaluecontainer::TdxFilterValueContainerListBox* __fastcall CreateListBox();
	virtual void __fastcall LayoutChanged();
	__property TdxFilterPopupWindowFilterValueContainerListBox* ListBox = {read=GetListBox};
	__property TdxFilterPopupWindow* Popup = {read=GetPopup};
	__property int VisibleItemCount = {read=GetVisibleItemCount, write=SetVisibleItemCount, nodefault};
	__property int VisibleWidth = {read=GetVisibleWidth, write=SetVisibleWidth, nodefault};
public:
	/* TdxFilterValueContainer.Create */ inline __fastcall virtual TdxFilterPopupWindowFilterValueContainer(System::Classes::TComponent* AOwner) : Dxfiltervaluecontainer::TdxFilterValueContainer(AOwner) { }
	/* TdxFilterValueContainer.Destroy */ inline __fastcall virtual ~TdxFilterPopupWindowFilterValueContainer() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxFilterPopupWindowFilterValueContainer(HWND ParentWindow) : Dxfiltervaluecontainer::TdxFilterValueContainer(ParentWindow) { }
	
private:
	void *__IdxFilterPopupWindowFilterValueContainer;	// IdxFilterPopupWindowFilterValueContainer 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F48DAC4E-2091-4D0A-A596-A19629D08B07}
	operator _di_IdxFilterPopupWindowFilterValueContainer()
	{
		_di_IdxFilterPopupWindowFilterValueContainer intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxFilterPopupWindowFilterValueContainer*(void) { return (IdxFilterPopupWindowFilterValueContainer*)&__IdxFilterPopupWindowFilterValueContainer; }
	#endif
	
};


class PASCALIMPLEMENTATION TdxFilterPopupWindowExcelFilterValueContainer : public Dxfiltervaluecontainer::TdxExcelFilterValueContainer
{
	typedef Dxfiltervaluecontainer::TdxExcelFilterValueContainer inherited;
	
private:
	TdxFilterPopupWindow* __fastcall GetPopup();
	
protected:
	virtual void __fastcall AssignOptions(System::TObject* AOptions);
	virtual void __fastcall Closed();
	virtual void __fastcall FocusStartControl();
	virtual void __fastcall SysPanelButtonAction(int AHitCode);
	virtual bool __fastcall SysPanelButtonEnabled(int AHitCode);
	virtual TdxFilterPopupWindowSysPanelType __fastcall SysPanelType();
	virtual void __fastcall ApplyModeChanged();
	virtual Dxfiltervaluecontainer::TdxExcelFilterValueContainerListBoxClass __fastcall GetListBoxClass();
	virtual void __fastcall ModifiedChanged();
	virtual void __fastcall LayoutKeyDown(System::TObject* ASender, System::Word &Key, System::Classes::TShiftState Shift);
	__property TdxFilterPopupWindow* Popup = {read=GetPopup};
public:
	/* TdxExcelFilterValueContainer.Create */ inline __fastcall virtual TdxFilterPopupWindowExcelFilterValueContainer(System::Classes::TComponent* AOwner) : Dxfiltervaluecontainer::TdxExcelFilterValueContainer(AOwner) { }
	/* TdxExcelFilterValueContainer.Destroy */ inline __fastcall virtual ~TdxFilterPopupWindowExcelFilterValueContainer() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxFilterPopupWindowExcelFilterValueContainer(HWND ParentWindow) : Dxfiltervaluecontainer::TdxExcelFilterValueContainer(ParentWindow) { }
	
private:
	void *__IdxFilterPopupWindowFilterValueContainer;	// IdxFilterPopupWindowFilterValueContainer 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F48DAC4E-2091-4D0A-A596-A19629D08B07}
	operator _di_IdxFilterPopupWindowFilterValueContainer()
	{
		_di_IdxFilterPopupWindowFilterValueContainer intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxFilterPopupWindowFilterValueContainer*(void) { return (IdxFilterPopupWindowFilterValueContainer*)&__IdxFilterPopupWindowFilterValueContainer; }
	#endif
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterPopupWindowCustomItemViewInfo : public Dxcoreclasses::TcxIUnknownObject
{
	typedef Dxcoreclasses::TcxIUnknownObject inherited;
	
private:
	System::Types::TRect FBounds;
	TdxFilterPopupWindow* FFilterPopup;
	Cxlookandfeelpainters::TcxButtonState FState;
	Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetPainter();
	Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	Cxlookandfeelpainters::TcxButtonState __fastcall GetState();
	void __fastcall SetState(Cxlookandfeelpainters::TcxButtonState AValue);
	
protected:
	void __fastcall MouseLeave();
	bool __fastcall PtInCaller(const System::Types::TPoint &P);
	virtual bool __fastcall CanChangeState();
	virtual void __fastcall Click();
	virtual bool __fastcall GetEnabled();
	virtual int __fastcall GetHeight();
	virtual int __fastcall GetHitCode();
	virtual int __fastcall GetHitTest(const System::Types::TPoint &APoint);
	virtual int __fastcall GetWidth();
	virtual bool __fastcall HasPoint(const System::Types::TPoint &APoint);
	virtual void __fastcall Invalidate();
	virtual void __fastcall RightToLeftConversion(const System::Types::TRect &ABounds);
	virtual void __fastcall StateChanged();
	__property System::Types::TRect Bounds = {read=FBounds};
	__property TdxFilterPopupWindow* FilterPopup = {read=FFilterPopup};
	__property int Height = {read=GetHeight, nodefault};
	__property Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* Painter = {read=GetPainter};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=GetScaleFactor};
	__property Cxlookandfeelpainters::TcxButtonState State = {read=GetState, write=SetState, nodefault};
	__property int Width = {read=GetWidth, nodefault};
	
public:
	__fastcall virtual TdxFilterPopupWindowCustomItemViewInfo(TdxFilterPopupWindow* AFilterPopup);
	virtual void __fastcall Calculate(int ALeftBound, int ATopBound);
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxFilterPopupWindowCustomItemViewInfo() { }
	
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
class PASCALIMPLEMENTATION TdxFilterPopupWindowSysPanelButtonViewInfo : public TdxFilterPopupWindowCustomItemViewInfo
{
	typedef TdxFilterPopupWindowCustomItemViewInfo inherited;
	
protected:
	virtual bool __fastcall CanChangeState();
	virtual void __fastcall Click();
	virtual bool __fastcall GetEnabled();
	virtual System::Classes::TLeftRight __fastcall GetHorzAlign();
	virtual int __fastcall GetHeight();
	virtual int __fastcall GetMinHeight();
	virtual int __fastcall GetMinWidth();
	virtual System::UnicodeString __fastcall GetText();
	virtual int __fastcall GetTextOffset();
	virtual int __fastcall GetWidth();
	__property System::UnicodeString Text = {read=GetText};
	
public:
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
public:
	/* TdxFilterPopupWindowCustomItemViewInfo.Create */ inline __fastcall virtual TdxFilterPopupWindowSysPanelButtonViewInfo(TdxFilterPopupWindow* AFilterPopup) : TdxFilterPopupWindowCustomItemViewInfo(AFilterPopup) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxFilterPopupWindowSysPanelButtonViewInfo() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TdxFilterPopupWindowSysPanelButtonViewInfoClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterPopupWindowSysPanelClearButtonViewInfo : public TdxFilterPopupWindowSysPanelButtonViewInfo
{
	typedef TdxFilterPopupWindowSysPanelButtonViewInfo inherited;
	
protected:
	virtual int __fastcall GetHitCode();
	virtual System::Classes::TLeftRight __fastcall GetHorzAlign();
	virtual System::UnicodeString __fastcall GetText();
public:
	/* TdxFilterPopupWindowCustomItemViewInfo.Create */ inline __fastcall virtual TdxFilterPopupWindowSysPanelClearButtonViewInfo(TdxFilterPopupWindow* AFilterPopup) : TdxFilterPopupWindowSysPanelButtonViewInfo(AFilterPopup) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxFilterPopupWindowSysPanelClearButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterPopupWindowSysPanelCloseButtonViewInfo : public TdxFilterPopupWindowSysPanelButtonViewInfo
{
	typedef TdxFilterPopupWindowSysPanelButtonViewInfo inherited;
	
protected:
	virtual int __fastcall GetHitCode();
	virtual System::UnicodeString __fastcall GetText();
public:
	/* TdxFilterPopupWindowCustomItemViewInfo.Create */ inline __fastcall virtual TdxFilterPopupWindowSysPanelCloseButtonViewInfo(TdxFilterPopupWindow* AFilterPopup) : TdxFilterPopupWindowSysPanelButtonViewInfo(AFilterPopup) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxFilterPopupWindowSysPanelCloseButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterPopupWindowSysPanelCancelButtonViewInfo : public TdxFilterPopupWindowSysPanelCloseButtonViewInfo
{
	typedef TdxFilterPopupWindowSysPanelCloseButtonViewInfo inherited;
	
protected:
	virtual int __fastcall GetHitCode();
	virtual System::UnicodeString __fastcall GetText();
public:
	/* TdxFilterPopupWindowCustomItemViewInfo.Create */ inline __fastcall virtual TdxFilterPopupWindowSysPanelCancelButtonViewInfo(TdxFilterPopupWindow* AFilterPopup) : TdxFilterPopupWindowSysPanelCloseButtonViewInfo(AFilterPopup) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxFilterPopupWindowSysPanelCancelButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterPopupWindowSysPanelOkButtonViewInfo : public TdxFilterPopupWindowSysPanelButtonViewInfo
{
	typedef TdxFilterPopupWindowSysPanelButtonViewInfo inherited;
	
protected:
	virtual int __fastcall GetHitCode();
	virtual System::UnicodeString __fastcall GetText();
public:
	/* TdxFilterPopupWindowCustomItemViewInfo.Create */ inline __fastcall virtual TdxFilterPopupWindowSysPanelOkButtonViewInfo(TdxFilterPopupWindow* AFilterPopup) : TdxFilterPopupWindowSysPanelButtonViewInfo(AFilterPopup) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxFilterPopupWindowSysPanelOkButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterPopupWindowSysPanelViewInfo : public TdxFilterPopupWindowCustomItemViewInfo
{
	typedef TdxFilterPopupWindowCustomItemViewInfo inherited;
	
private:
	System::Generics::Collections::TObjectList__1<TdxFilterPopupWindowSysPanelButtonViewInfo*>* FButtons;
	System::Types::TRect FSeparatorBounds;
	System::Types::TRect FSizeGripBounds;
	int __fastcall GetSeparatorSize();
	int __fastcall GetSizeGripSize();
	
protected:
	void __fastcall AddButton(TdxFilterPopupWindowSysPanelButtonViewInfoClass AClass);
	virtual void __fastcall CalculateButtons();
	virtual System::Types::TRect __fastcall CalculateSeparatorBounds();
	virtual System::Types::TRect __fastcall CalculateSizeGripBounds();
	virtual void __fastcall DrawBackground(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawButtons(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawSeparator(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawSizeGrip(Cxgraphics::TcxCanvas* ACanvas);
	virtual int __fastcall GetButtonIndent();
	virtual int __fastcall GetContentIndent();
	virtual int __fastcall GetHeight();
	virtual TdxFilterPopupWindowSysPanelButtonViewInfo* __fastcall GetHitButton(const System::Types::TPoint &APoint);
	virtual int __fastcall GetHitCode();
	virtual int __fastcall GetHitTest(const System::Types::TPoint &APoint);
	virtual Dxcore::TdxCorner __fastcall GetSizeGripCorner();
	virtual int __fastcall GetWidth();
	virtual bool __fastcall IsCancelButtonVisible();
	virtual bool __fastcall IsClearButtonVisible();
	virtual bool __fastcall IsCloseButtonVisible();
	virtual bool __fastcall IsOkButtonVisible();
	virtual void __fastcall RightToLeftConversion(const System::Types::TRect &ABounds);
	__property System::Generics::Collections::TObjectList__1<TdxFilterPopupWindowSysPanelButtonViewInfo*>* Buttons = {read=FButtons};
	__property System::Types::TRect SeparatorBounds = {read=FSeparatorBounds};
	__property int SeparatorSize = {read=GetSeparatorSize, nodefault};
	__property System::Types::TRect SizeGripBounds = {read=FSizeGripBounds};
	__property int SizeGripSize = {read=GetSizeGripSize, nodefault};
	
public:
	__fastcall virtual TdxFilterPopupWindowSysPanelViewInfo(TdxFilterPopupWindow* AFilterPopup);
	__fastcall virtual ~TdxFilterPopupWindowSysPanelViewInfo();
	virtual void __fastcall Calculate(int ALeftBound, int ATopBound);
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterPopupWindowViewInfo : public Dxuielementpopupwindow::TdxUIElementPopupWindowViewInfo
{
	typedef Dxuielementpopupwindow::TdxUIElementPopupWindowViewInfo inherited;
	
public:
	/* TdxCustomIncrementalFilteringContainerViewInfo.Create */ inline __fastcall virtual TdxFilterPopupWindowViewInfo() : Dxuielementpopupwindow::TdxUIElementPopupWindowViewInfo() { }
	/* TdxCustomIncrementalFilteringContainerViewInfo.Destroy */ inline __fastcall virtual ~TdxFilterPopupWindowViewInfo() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxFilterPopupWindow : public Dxuielementpopupwindow::TdxUIElementPopupWindow
{
	typedef Dxuielementpopupwindow::TdxUIElementPopupWindow inherited;
	
private:
	TdxFilterPopupWindowMode FActualMode;
	bool FCaptureSizeGrip;
	_di_IdxFilterPopupWindowOwner FFilterOwnerIntf;
	Dxfiltervaluecontainer::TdxCustomFilterValueContainer* FFilterValueContainer;
	TdxFilterPopupWindowMode FMode;
	bool FNeedFilteringAppliedOnClose;
	TdxFilterPopupWindowSysPanelViewInfo* FSysPanelViewInfo;
	_di_IdxFilterPopupWindowFilterValueContainer __fastcall GetFilterValueContainerIntf();
	System::Classes::TComponent* __fastcall GetLinkComponent();
	HIDESBASE TdxFilterPopupWindowViewInfo* __fastcall GetViewInfo();
	void __fastcall SetActualMode(TdxFilterPopupWindowActualMode AValue);
	void __fastcall AfterFilterChangeHandler(System::TObject* ASender);
	void __fastcall BeforeFilterChangeHandler(System::TObject* ASender);
	HIDESBASE MESSAGE void __fastcall WMSetCursor(Winapi::Messages::TWMSetCursor &Message);
	
protected:
	virtual void __fastcall ActualModeChanged();
	virtual void __fastcall AdjustBounds();
	virtual void __fastcall AdjustableChanged();
	virtual void __fastcall BordersChanged();
	virtual void __fastcall BoundsChanged();
	virtual System::Types::TSize __fastcall CalculateSize();
	virtual void __fastcall CreateFilterValueContainer();
	virtual TdxFilterPopupWindowSysPanelViewInfo* __fastcall CreateSysPanelViewInfo();
	DYNAMIC void __fastcall Deactivate();
	virtual void __fastcall DoShowed();
	virtual void __fastcall DrawSysPanel();
	virtual System::Types::TRect __fastcall GetDefaultBounds();
	virtual Dxfiltervaluecontainer::TdxCustomFilterValueContainerClass __fastcall GetFilterValueContainerClass();
	virtual int __fastcall GetHitTest(const System::Types::TPoint &APoint);
	virtual System::Types::TSize __fastcall GetMinSize();
	virtual TdxFilterPopupWindowSysPanelType __fastcall GetSysPanelType();
	virtual bool __fastcall HasSysPanel();
	virtual void __fastcall InitFilterValueContainer();
	virtual void __fastcall InitPopup();
	virtual void __fastcall OwnerChanged();
	DYNAMIC void __fastcall Paint();
	void __fastcall RecreateFilterValueContainer();
	void __fastcall RecreateSysPanel();
	virtual void __fastcall ResetFilterValueContainerPosition();
	DYNAMIC void __fastcall Resize();
	virtual void __fastcall ResizeByDragging(int X, int Y);
	virtual bool __fastcall ShowSysPanel();
	virtual void __fastcall SetMode(TdxFilterPopupWindowMode AMode);
	virtual void __fastcall SysPanelButtonAction(int AHitCode);
	virtual bool __fastcall SysPanelButtonEnabled(int AHitCode);
	virtual void __fastcall UpdateFilterValueContainerByOwner();
	virtual void __fastcall UpdateLayout();
	__property TdxFilterPopupWindowActualMode ActualMode = {read=FActualMode, write=SetActualMode, nodefault};
	__property bool CaptureSizeGrip = {read=FCaptureSizeGrip, nodefault};
	__property _di_IdxFilterPopupWindowOwner FilterOwnerIntf = {read=FFilterOwnerIntf};
	__property Dxfiltervaluecontainer::TdxCustomFilterValueContainer* FilterValueContainer = {read=FFilterValueContainer};
	__property _di_IdxFilterPopupWindowFilterValueContainer FilterValueContainerIntf = {read=GetFilterValueContainerIntf};
	__property bool NeedFilteringAppliedOnClose = {read=FNeedFilteringAppliedOnClose, write=FNeedFilteringAppliedOnClose, nodefault};
	__property TdxFilterPopupWindowSysPanelViewInfo* SysPanelViewInfo = {read=FSysPanelViewInfo};
	
public:
	__fastcall virtual TdxFilterPopupWindow(Vcl::Controls::TWinControl* AOwnerControl);
	__fastcall virtual ~TdxFilterPopupWindow();
	virtual void __fastcall CloseUp();
	virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
	virtual void __fastcall Popup();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	__property System::Classes::TComponent* LinkComponent = {read=GetLinkComponent};
	__property TdxFilterPopupWindowMode Mode = {read=FMode, nodefault};
	__property TdxFilterPopupWindowViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TdxFilterPopupWindow(System::Classes::TComponent* AOwner, int Dummy) : Dxuielementpopupwindow::TdxUIElementPopupWindow(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxFilterPopupWindow(HWND ParentWindow) : Dxuielementpopupwindow::TdxUIElementPopupWindow(ParentWindow) { }
	
};


typedef System::TMetaClass* TdxFilterPopupWindowClass;

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TdxFilterPopupWindowMode dxDefaultFilterPopupWindowMode;
extern DELPHI_PACKAGE TdxFilterPopupWindowActualMode __fastcall dxGetFilterPopupActualMode(TdxFilterPopupWindowMode AMode);
}	/* namespace Dxfilterpopupwindow */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXFILTERPOPUPWINDOW)
using namespace Dxfilterpopupwindow;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxfilterpopupwindowHPP
