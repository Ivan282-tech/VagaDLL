// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxIncrementalFiltering.pas' rev: 35.00 (Windows)

#ifndef DxincrementalfilteringHPP
#define DxincrementalfilteringHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Classes.hpp>
#include <System.Types.hpp>
#include <Vcl.Controls.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.Windows.hpp>
#include <System.Math.hpp>
#include <Winapi.Messages.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxGeometry.hpp>
#include <cxGraphics.hpp>
#include <cxContainer.hpp>
#include <cxControls.hpp>
#include <cxEdit.hpp>
#include <cxTextEdit.hpp>
#include <dxForms.hpp>
#include <Vcl.Forms.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxincrementalfiltering
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TdxCustomIncrementalFilteringHelper;
class DELPHICLASS TdxCustomIncrementalFilteringContainerHelper;
class DELPHICLASS TdxIncrementalFilteringFilterPopupHelper;
class DELPHICLASS TdxCustomIncrementalFilteringContainerViewInfo;
class DELPHICLASS TdxCustomIncrementalFilteringPopupWindow;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomIncrementalFilteringHelper : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Cxtextedit::TcxCustomTextEdit* FSearchEdit;
	
protected:
	virtual void __fastcall CreateSearchEdit();
	virtual void __fastcall DestroySearchEdit();
	virtual void __fastcall DrawSearchEditButton(Cxedit::TcxEditButtonViewInfo* Sender, Cxgraphics::TcxCanvas* ACanvas, bool &AHandled);
	virtual Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetLookAndFeelPainter() = 0 ;
	virtual System::Types::TRect __fastcall GetSearchEditOffsets();
	virtual void __fastcall InitSearchEdit();
	virtual void __fastcall SearchEditKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift) = 0 ;
	virtual void __fastcall SearchEditKeyPress(System::TObject* Sender, System::WideChar &Key) = 0 ;
	virtual void __fastcall SearchEditMouseWheel(System::TObject* Sender, System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos, bool &Handled) = 0 ;
	virtual void __fastcall SearchEditValueChanged(System::TObject* Sender) = 0 ;
	__property Cxtextedit::TcxCustomTextEdit* SearchEdit = {read=FSearchEdit};
	
public:
	virtual System::UnicodeString __fastcall GetSearchText();
public:
	/* TObject.Create */ inline __fastcall TdxCustomIncrementalFilteringHelper() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxCustomIncrementalFilteringHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomIncrementalFilteringContainerHelper : public TdxCustomIncrementalFilteringHelper
{
	typedef TdxCustomIncrementalFilteringHelper inherited;
	
protected:
	virtual bool __fastcall IsActionKey(System::Word AKey);
	void __fastcall CheckSearchControl(Vcl::Controls::TWinControl* AParent);
	void __fastcall FocusSearchControl();
	virtual int __fastcall GetItemCount() = 0 ;
	virtual int __fastcall GetItemIndex() = 0 ;
	virtual int __fastcall GetVisibleItemCount() = 0 ;
	virtual void __fastcall ResetSearchText();
	virtual void __fastcall SearchEditKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall SearchEditKeyPress(System::TObject* Sender, System::WideChar &Key);
	virtual void __fastcall SetItemIndex(const int Value) = 0 ;
	__property int ItemIndex = {read=GetItemIndex, write=SetItemIndex, nodefault};
	
public:
	__fastcall virtual ~TdxCustomIncrementalFilteringContainerHelper();
public:
	/* TObject.Create */ inline __fastcall TdxCustomIncrementalFilteringContainerHelper() : TdxCustomIncrementalFilteringHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxIncrementalFilteringFilterPopupHelper : public TdxCustomIncrementalFilteringContainerHelper
{
	typedef TdxCustomIncrementalFilteringContainerHelper inherited;
	
protected:
	virtual void __fastcall DoKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual Cxcontainer::TcxCustomInnerListBox* __fastcall GetMouseWheelHandler();
	virtual bool __fastcall IsNavigationKey(System::Word AKey, System::Classes::TShiftState AShift);
	virtual void __fastcall SearchEditKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall SearchEditMouseWheel(System::TObject* Sender, System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos, bool &Handled);
public:
	/* TdxCustomIncrementalFilteringContainerHelper.Destroy */ inline __fastcall virtual ~TdxIncrementalFilteringFilterPopupHelper() { }
	
public:
	/* TObject.Create */ inline __fastcall TdxIncrementalFilteringFilterPopupHelper() : TdxCustomIncrementalFilteringContainerHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomIncrementalFilteringContainerViewInfo : public Cxcontainer::TcxContainerViewInfo
{
	typedef Cxcontainer::TcxContainerViewInfo inherited;
	
public:
	Cxgeometry::TdxOwnedScaleFactor* ScaleFactor;
	System::Types::TRect SearchInfoPanelBounds;
	int SearchInfoPanelHeight;
	bool ShowSearchInfoPanel;
	bool UseRightToLeftAlignment;
	__fastcall virtual TdxCustomIncrementalFilteringContainerViewInfo();
	__fastcall virtual ~TdxCustomIncrementalFilteringContainerViewInfo();
	virtual void __fastcall DrawSearchInfoPanel(Cxgraphics::TcxCanvas* ACanvas);
	virtual int __fastcall GetSearchInfoPanelDefaultHeight();
	virtual int __fastcall GetSearchInfoPanelHeight();
	virtual System::UnicodeString __fastcall GetSearchInfoPanelText();
	virtual unsigned __fastcall GetSearchInfoPanelTextDrawFlags();
	virtual int __fastcall GetSearchInfoPanelTextOffset();
	virtual int __fastcall GetSearchInfoPanelWidth();
	virtual bool __fastcall IsSearchInfoPanelVisible();
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxCustomIncrementalFilteringPopupWindow : public Cxcontainer::TcxCustomPopupWindow
{
	typedef Cxcontainer::TcxCustomPopupWindow inherited;
	
private:
	bool FShowSearchInfoPanel;
	TdxCustomIncrementalFilteringContainerViewInfo* __fastcall GetViewInfo();
	void __fastcall SetShowSearchInfoPanel(const bool Value);
	
public:
	__fastcall virtual TdxCustomIncrementalFilteringPopupWindow(Vcl::Controls::TWinControl* AOwnerControl);
	virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
	__property bool ShowSearchInfoPanel = {read=FShowSearchInfoPanel, write=SetShowSearchInfoPanel, nodefault};
	__property TdxCustomIncrementalFilteringContainerViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomPopupWindow.Destroy */ inline __fastcall virtual ~TdxCustomIncrementalFilteringPopupWindow() { }
	
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TdxCustomIncrementalFilteringPopupWindow(System::Classes::TComponent* AOwner, int Dummy) : Cxcontainer::TcxCustomPopupWindow(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxCustomIncrementalFilteringPopupWindow(HWND ParentWindow) : Cxcontainer::TcxCustomPopupWindow(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
#define dxIncrementalFilteringNavigationKeys (System::Set<System::Byte, 0, 255>() << 0x21 << 0x22 << 0x23 << 0x24 << 0x26 << 0x28 )
}	/* namespace Dxincrementalfiltering */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXINCREMENTALFILTERING)
using namespace Dxincrementalfiltering;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxincrementalfilteringHPP
