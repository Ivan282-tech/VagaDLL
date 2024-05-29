// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxInplaceEditing.pas' rev: 35.00 (Windows)

#ifndef DxinplaceeditingHPP
#define DxinplaceeditingHPP

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
#include <Vcl.ImgList.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.ComCtrls.hpp>
#include <dxCoreClasses.hpp>
#include <cxControls.hpp>
#include <cxLookAndFeels.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxGraphics.hpp>
#include <cxGeometry.hpp>
#include <cxClasses.hpp>
#include <dxCoreGraphics.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxinplaceediting
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IdxInplaceEditContainer;
typedef System::DelphiInterface<IdxInplaceEditContainer> _di_IdxInplaceEditContainer;
__interface DELPHIINTERFACE IdxInplaceEdit;
typedef System::DelphiInterface<IdxInplaceEdit> _di_IdxInplaceEdit;
class DELPHICLASS TdxInplaceEditingController;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{4C60E56F-3DD3-498B-9156-155BF29217D2}") IdxInplaceEditContainer  : public System::IInterface 
{
	virtual bool __fastcall DoMouseWheel(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos) = 0 ;
	virtual void __fastcall FinishItemCaptionEditing(bool AAccept = true) = 0 ;
	virtual System::Types::TRect __fastcall GetClientBounds() = 0 ;
	virtual Vcl::Controls::TWinControl* __fastcall GetEditingControl() = 0 ;
	virtual Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor() = 0 ;
	virtual void __fastcall ValidatePasteText(System::UnicodeString &AText) = 0 ;
	__property System::Types::TRect ClientBounds = {read=GetClientBounds};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=GetScaleFactor};
};

__interface  INTERFACE_UUID("{526C0124-CA8D-43A7-B842-4262B36DBDB6}") IdxInplaceEdit  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetValue() = 0 ;
	virtual void __fastcall Hide() = 0 ;
	virtual bool __fastcall IsVisible() = 0 ;
	virtual void __fastcall Show(_di_IdxInplaceEditContainer AContainer, const System::Types::TRect &ABounds, const System::UnicodeString AText, Vcl::Graphics::TFont* AFont, int ASelStart, int ASelLength, int AMaxLength) = 0 ;
	__property System::UnicodeString Value = {read=GetValue};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxInplaceEditingController : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Cxclasses::TcxTimer* FEditingTimer;
	Vcl::Stdctrls::TCustomEdit* FInplaceEditImplementator;
	_di_IdxInplaceEdit __fastcall GetInplaceEdit();
	Vcl::Stdctrls::TCustomEdit* __fastcall CreateInplaceEditImplementator();
	void __fastcall StartEditing(System::TObject* Sender);
	
protected:
	void __fastcall DestroyEdit();
	void __fastcall DestroyTimer();
	virtual void __fastcall InplaceEditKeyPress(System::TObject* Sender, System::WideChar &AKey);
	virtual bool __fastcall IsReadOnly();
	virtual bool __fastcall IsMultiline();
	virtual void __fastcall StartItemCaptionEditing();
	
public:
	__fastcall virtual ~TdxInplaceEditingController();
	void __fastcall StartEditingTimer();
	__property _di_IdxInplaceEdit InplaceEdit = {read=GetInplaceEdit};
public:
	/* TObject.Create */ inline __fastcall TdxInplaceEditingController() : System::TObject() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dxinplaceediting */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXINPLACEEDITING)
using namespace Dxinplaceediting;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxinplaceeditingHPP
