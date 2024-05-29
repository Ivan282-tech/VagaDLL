// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxUIElementPopupWindow.pas' rev: 35.00 (Windows)

#ifndef DxuielementpopupwindowHPP
#define DxuielementpopupwindowHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Vcl.Controls.hpp>
#include <System.Types.hpp>
#include <Winapi.MultiMon.hpp>
#include <cxControls.hpp>
#include <cxContainer.hpp>
#include <dxIncrementalFiltering.hpp>
#include <cxLookAndFeels.hpp>
#include <dxForms.hpp>
#include <Vcl.Forms.hpp>
#include <System.Classes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxuielementpopupwindow
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IdxUIElementPopupWindowOwner;
typedef System::DelphiInterface<IdxUIElementPopupWindowOwner> _di_IdxUIElementPopupWindowOwner;
class DELPHICLASS TdxUIElementPopupWindowViewInfo;
class DELPHICLASS TdxUIElementPopupWindow;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{ACF62D23-6871-4735-A4CE-3B0888DB8FC3}") IdxUIElementPopupWindowOwner  : public System::IInterface 
{
	virtual bool __fastcall ClosePopupWhenSetNil() = 0 ;
	virtual void __fastcall InitPopup(TdxUIElementPopupWindow* APopup) = 0 ;
	virtual void __fastcall PopupClosed() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxUIElementPopupWindowViewInfo : public Dxincrementalfiltering::TdxCustomIncrementalFilteringContainerViewInfo
{
	typedef Dxincrementalfiltering::TdxCustomIncrementalFilteringContainerViewInfo inherited;
	
public:
	/* TdxCustomIncrementalFilteringContainerViewInfo.Create */ inline __fastcall virtual TdxUIElementPopupWindowViewInfo() : Dxincrementalfiltering::TdxCustomIncrementalFilteringContainerViewInfo() { }
	/* TdxCustomIncrementalFilteringContainerViewInfo.Destroy */ inline __fastcall virtual ~TdxUIElementPopupWindowViewInfo() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxUIElementPopupWindow : public Dxincrementalfiltering::TdxCustomIncrementalFilteringPopupWindow
{
	typedef Dxincrementalfiltering::TdxCustomIncrementalFilteringPopupWindow inherited;
	
private:
	System::TObject* FOwner;
	_di_IdxUIElementPopupWindowOwner FOwnerIntf;
	int __fastcall GetClientMinWidth();
	Cxlookandfeels::TcxLookAndFeel* __fastcall GetLookAndFeel();
	HIDESBASE TdxUIElementPopupWindowViewInfo* __fastcall GetViewInfo();
	void __fastcall SetLookAndFeel(Cxlookandfeels::TcxLookAndFeel* ALookAndFeel);
	void __fastcall SetOwner(System::TObject* AValue);
	
protected:
	virtual void __fastcall InitPopup();
	virtual void __fastcall OwnerChanged();
	DYNAMIC void __fastcall Paint();
	virtual void __fastcall UpdateInnerControlsHeight(int &AClientHeight);
	DYNAMIC void __fastcall VisibleChanged();
	__property _di_IdxUIElementPopupWindowOwner OwnerIntf = {read=FOwnerIntf};
	
public:
	__fastcall virtual TdxUIElementPopupWindow(Vcl::Controls::TWinControl* AOwnerControl);
	virtual void __fastcall CorrectBoundsWithDesktopWorkArea(System::Types::TPoint &APosition, System::Types::TSize &ASize);
	virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
	HIDESBASE virtual void __fastcall Popup();
	__property BorderWidth = {default=0};
	__property int ClientMinWidth = {read=GetClientMinWidth, nodefault};
	__property Cxlookandfeels::TcxLookAndFeel* LookAndFeel = {read=GetLookAndFeel, write=SetLookAndFeel};
	__property System::TObject* Owner = {read=FOwner, write=SetOwner};
	__property TdxUIElementPopupWindowViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomPopupWindow.Destroy */ inline __fastcall virtual ~TdxUIElementPopupWindow() { }
	
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TdxUIElementPopupWindow(System::Classes::TComponent* AOwner, int Dummy) : Dxincrementalfiltering::TdxCustomIncrementalFilteringPopupWindow(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxUIElementPopupWindow(HWND ParentWindow) : Dxincrementalfiltering::TdxCustomIncrementalFilteringPopupWindow(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dxuielementpopupwindow */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXUIELEMENTPOPUPWINDOW)
using namespace Dxuielementpopupwindow;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxuielementpopupwindowHPP
