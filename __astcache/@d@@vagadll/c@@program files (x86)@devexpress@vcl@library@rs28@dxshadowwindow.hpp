// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxShadowWindow.pas' rev: 35.00 (Windows)

#ifndef DxshadowwindowHPP
#define DxshadowwindowHPP

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
#include <Winapi.Messages.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>
#include <dxCore.hpp>
#include <dxMessages.hpp>
#include <cxClasses.hpp>
#include <cxControls.hpp>
#include <cxGraphics.hpp>
#include <cxGeometry.hpp>
#include <dxSkinsCore.hpp>
#include <dxGDIPlusClasses.hpp>
#include <System.Classes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxshadowwindow
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TdxCustomShadowWindow;
class DELPHICLASS TdxShadowWindow;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TdxCustomShadowWindow : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	int FCornerRadius;
	System::Byte FIntensity;
	Cxgraphics::TcxBitmap32* FOutputBuffer;
	Vcl::Controls::TWinControl* FOwnerWindow;
	System::Uitypes::TColor FShadowColor;
	System::Types::TRect FShadowOffsets;
	void __fastcall CheckOutputBufferSize(int AWidth, int AHeight);
	int __fastcall GetMaxShadowSize();
	bool __fastcall GetVisible();
	void __fastcall SetCornerRadius(int AValue);
	void __fastcall SetIntensity(System::Byte AValue);
	void __fastcall SetShadowColor(System::Uitypes::TColor AValue);
	void __fastcall SetShadowOffsets(const System::Types::TRect &AValue);
	HIDESBASE void __fastcall SetVisible(bool AValue);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall DrawShadow(Dxgdiplusclasses::TdxGPCanvas* ACanvas);
	void __fastcall DrawShadowCore(Dxgdiplusclasses::TdxGPCanvas* ACanvas, int ARadius);
	virtual System::Byte __fastcall GetAlphaBlendValue();
	virtual void __fastcall Paint();
	DYNAMIC void __fastcall Resize();
	virtual void __fastcall ShadowOffsetsChanged();
	void __fastcall UpdateLayer();
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	
public:
	__fastcall virtual TdxCustomShadowWindow(Vcl::Controls::TWinControl* AOwnerWindow);
	__fastcall virtual ~TdxCustomShadowWindow();
	HIDESBASE virtual void __fastcall Hide();
	HIDESBASE virtual void __fastcall Refresh();
	HIDESBASE virtual void __fastcall Show();
	__property Vcl::Controls::TWinControl* OwnerWindow = {read=FOwnerWindow};
	__property int CornerRadius = {read=FCornerRadius, write=SetCornerRadius, nodefault};
	__property System::Byte Intensity = {read=FIntensity, write=SetIntensity, nodefault};
	__property System::Uitypes::TColor ShadowColor = {read=FShadowColor, write=SetShadowColor, nodefault};
	__property System::Types::TRect ShadowOffsets = {read=FShadowOffsets, write=SetShadowOffsets};
	__property bool Visible = {read=GetVisible, write=SetVisible, nodefault};
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxCustomShadowWindow(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


typedef System::TMetaClass* TdxShadowWindowClass;

class PASCALIMPLEMENTATION TdxShadowWindow : public TdxCustomShadowWindow
{
	typedef TdxCustomShadowWindow inherited;
	
private:
	static const System::Byte CMS_ANIMATION = System::Byte(0xfa);
	
	bool FActivating;
	bool FAnimatedShowing;
	Cxclasses::TcxTimer* FAnimatedShowingDelayTimer;
	bool FMergeWithNativeShadow;
	bool FOwnerWindowIsActive;
	Cxcontrols::TcxWindowProcLinkedObject* FOwnerWindowWndProcObject;
	HWND FPrevFocusedWindow;
	bool FResizeOwnerWindowUsingShadow;
	void __fastcall HandlerDelayedShow(System::TObject* Sender);
	Cxgraphics::TcxRegion* __fastcall GetOwnerWindowRegion();
	bool __fastcall IsAnimatedShowingUsed(HWND AWndHandle);
	void __fastcall SetResizeOwnerWindowUsingShadow(const bool AValue);
	
protected:
	virtual bool __fastcall CalculateVisibility();
	virtual bool __fastcall CanUseShadows();
	virtual void __fastcall DrawShadow(Dxgdiplusclasses::TdxGPCanvas* ACanvas);
	virtual System::Byte __fastcall GetAlphaBlendValue();
	virtual void __fastcall OwnerWindowWndProc(Winapi::Messages::TMessage &AMessage);
	virtual void __fastcall ShadowOffsetsChanged();
	void __fastcall UpdateZOrder();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMActivate(Winapi::Messages::TWMActivate &Message);
	MESSAGE void __fastcall WMExitSizeMove(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMMouseActivate(Winapi::Messages::TWMMouseActivate &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Message);
	MESSAGE void __fastcall WMSizing(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMWindowPosChanged(Winapi::Messages::TWMWindowPosMsg &Message);
	__property bool Activating = {read=FActivating, nodefault};
	__property bool OwnerWindowIsActive = {read=FOwnerWindowIsActive, nodefault};
	__property Cxcontrols::TcxWindowProcLinkedObject* OwnerWindowWndProcObject = {read=FOwnerWindowWndProcObject};
	
public:
	__fastcall virtual TdxShadowWindow(Vcl::Controls::TWinControl* AOwnerWindow);
	__fastcall virtual ~TdxShadowWindow();
	virtual void __fastcall Refresh();
	virtual void __fastcall Show();
	HIDESBASE void __fastcall UpdateBounds();
	void __fastcall UpdateVisibility();
	__property bool ResizeOwnerWindowUsingShadow = {read=FResizeOwnerWindowUsingShadow, write=SetResizeOwnerWindowUsingShadow, nodefault};
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxShadowWindow(HWND ParentWindow) : TdxCustomShadowWindow(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::Types::TRect dxShadowDefaultOffsets;
static const System::Int8 dxShadowWindowThinBorderSize = System::Int8(0x2);
extern DELPHI_PACKAGE bool __fastcall dxCanUseShadows(void);
extern DELPHI_PACKAGE bool __fastcall dxCanUseTransparentShadows(void);
}	/* namespace Dxshadowwindow */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXSHADOWWINDOW)
using namespace Dxshadowwindow;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxshadowwindowHPP
