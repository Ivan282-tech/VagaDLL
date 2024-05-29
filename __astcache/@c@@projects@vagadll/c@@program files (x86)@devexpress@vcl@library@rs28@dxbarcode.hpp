// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxBarCode.pas' rev: 35.00 (Windows)

#ifndef DxbarcodeHPP
#define DxbarcodeHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>
#include <System.Variants.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Clipbrd.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <dxCore.hpp>
#include <dxCoreClasses.hpp>
#include <cxClasses.hpp>
#include <cxContainer.hpp>
#include <cxControls.hpp>
#include <cxGraphics.hpp>
#include <cxLookAndFeels.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxDataUtils.hpp>
#include <cxVariants.hpp>
#include <dxTouch.hpp>
#include <dxSkinsCore.hpp>
#include <dxCoreGraphics.hpp>
#include <cxEdit.hpp>
#include <cxEditConsts.hpp>
#include <dxBarCodeUtils.hpp>
#include <cxCustomCanvas.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxbarcode
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TdxCustomBarCodeSymbologyAccess;
class DELPHICLASS TdxBarCodeViewInfo;
class DELPHICLASS TdxBarCodeViewData;
class DELPHICLASS TdxCustomBarCodeProperties;
class DELPHICLASS TdxBarCodeProperties;
class DELPHICLASS TdxCustomBarCode;
class DELPHICLASS TdxBarCode;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TdxCustomBarCodeSymbologyAccess : public Dxbarcodeutils::TdxCustomBarCodeSymbology
{
	typedef Dxbarcodeutils::TdxCustomBarCodeSymbology inherited;
	
public:
	/* TdxCustomBarCodeSymbology.Create */ inline __fastcall virtual TdxCustomBarCodeSymbologyAccess() : Dxbarcodeutils::TdxCustomBarCodeSymbology() { }
	/* TdxCustomBarCodeSymbology.Destroy */ inline __fastcall virtual ~TdxCustomBarCodeSymbologyAccess() { }
	
};


class PASCALIMPLEMENTATION TdxBarCodeViewInfo : public Cxedit::TcxCustomEditViewInfo
{
	typedef Cxedit::TcxCustomEditViewInfo inherited;
	
private:
	tagXFORM __fastcall GetTransformMatrix();
	
protected:
	virtual void __fastcall InternalPaint(Cxgraphics::TcxCanvas* ACanvas);
	
public:
	Dxbarcodeutils::TdxBarCodeErrorType BarCodeErrorType;
	bool Center;
	Cxgraphics::TcxImageFitMode FitMode;
	System::Uitypes::TColor ModuleColor;
	int ModuleWidth;
	Cxcustomcanvas::TcxRotationAngle RotationAngle;
	bool ShowText;
	Dxbarcodeutils::TdxCustomBarCodeSymbology* Symbology;
	System::Variant Value;
	System::Types::TPoint TopLeft;
public:
	/* TcxCustomEditViewInfo.Create */ inline __fastcall virtual TdxBarCodeViewInfo() : Cxedit::TcxCustomEditViewInfo() { }
	/* TcxCustomEditViewInfo.Destroy */ inline __fastcall virtual ~TdxBarCodeViewInfo() { }
	
};


class PASCALIMPLEMENTATION TdxBarCodeViewData : public Cxedit::TcxCustomEditViewData
{
	typedef Cxedit::TcxCustomEditViewData inherited;
	
public:
	virtual void __fastcall Calculate(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TPoint &P, Cxcontainer::TcxMouseButton Button, System::Classes::TShiftState Shift, Cxedit::TcxCustomEditViewInfo* AViewInfo, bool AIsMouseEvent);
	virtual void __fastcall EditValueToDrawValue(const System::Variant &AEditValue, Cxedit::TcxCustomEditViewInfo* AViewInfo);
	virtual System::Types::TSize __fastcall GetEditContentSize(Cxgraphics::TcxCanvas* ACanvas, const System::Variant &AEditValue, const Cxedit::TcxEditSizeProperties &AEditSizeProperties, Cxedit::TcxEditValidateInfo* AErrorData = (Cxedit::TcxEditValidateInfo*)(0x0));
public:
	/* TcxCustomEditViewData.Create */ inline __fastcall virtual TdxBarCodeViewData(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditStyle* AStyle, bool AIsInplace) : Cxedit::TcxCustomEditViewData(AProperties, AStyle, AIsInplace) { }
	/* TcxCustomEditViewData.Destroy */ inline __fastcall virtual ~TdxBarCodeViewData() { }
	
};


class PASCALIMPLEMENTATION TdxCustomBarCodeProperties : public Cxedit::TcxCustomEditProperties
{
	typedef Cxedit::TcxCustomEditProperties inherited;
	
private:
	Dxbarcodeutils::TdxCustomBarCodeSymbologyClass FBarCodeSymbologyClass;
	Cxgraphics::TcxImageFitMode FFitMode;
	System::Uitypes::TColor FModuleColor;
	int FModuleWidth;
	bool FShowText;
	Dxbarcodeutils::TdxCustomBarCodeSymbology* FSymbology;
	Cxcustomcanvas::TcxRotationAngle FRotationAngle;
	System::UnicodeString __fastcall GetBarCodeSymbologyClassName();
	void __fastcall SetBarCodeSymbologyClass(Dxbarcodeutils::TdxCustomBarCodeSymbologyClass AValue);
	void __fastcall SetBarCodeSymbologyClassName(System::UnicodeString AValue);
	void __fastcall SetFitMode(Dxbarcodeutils::TdxBarCodeFitMode AValue);
	void __fastcall SetModuleColor(System::Uitypes::TColor AValue);
	void __fastcall SetModuleWidth(int AValue);
	void __fastcall SetShowText(bool AValue);
	void __fastcall SetSymbology(Dxbarcodeutils::TdxCustomBarCodeSymbology* AValue);
	void __fastcall SetRotationAngle(Cxcustomcanvas::TcxRotationAngle AValue);
	
protected:
	virtual void __fastcall ChangeScale(int M, int D);
	virtual void __fastcall DoAssign(Cxedit::TcxCustomEditProperties* AProperties);
	__classmethod virtual Cxedit::TcxCustomEditViewDataClass __fastcall GetViewDataClass();
	virtual void __fastcall BarCodeSymbologyChangedHandler(System::TObject* Sender);
	HIDESBASE bool __fastcall IsDesigning();
	
public:
	__fastcall virtual TdxCustomBarCodeProperties(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TdxCustomBarCodeProperties();
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	__classmethod virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
	virtual Cxedit::TcxEditSpecialFeatures __fastcall GetSpecialFeatures();
	virtual Cxedit::TcxEditSupportedOperations __fastcall GetSupportedOperations();
	__property Dxbarcodeutils::TdxCustomBarCodeSymbologyClass BarCodeSymbologyClass = {read=FBarCodeSymbologyClass, write=SetBarCodeSymbologyClass};
	__property System::UnicodeString BarCodeSymbologyClassName = {read=GetBarCodeSymbologyClassName, write=SetBarCodeSymbologyClassName};
	__property Dxbarcodeutils::TdxBarCodeFitMode FitMode = {read=FFitMode, write=SetFitMode, nodefault};
	__property System::Uitypes::TColor ModuleColor = {read=FModuleColor, write=SetModuleColor, nodefault};
	__property int ModuleWidth = {read=FModuleWidth, write=SetModuleWidth, nodefault};
	__property Cxcustomcanvas::TcxRotationAngle RotationAngle = {read=FRotationAngle, write=SetRotationAngle, nodefault};
	__property bool ShowText = {read=FShowText, write=SetShowText, default=1};
	__property Dxbarcodeutils::TdxCustomBarCodeSymbology* Symbology = {read=FSymbology, write=SetSymbology};
};


class PASCALIMPLEMENTATION TdxBarCodeProperties : public TdxCustomBarCodeProperties
{
	typedef TdxCustomBarCodeProperties inherited;
	
public:
	__fastcall virtual TdxBarCodeProperties(System::Classes::TPersistent* AOwner);
	
__published:
	__property BarCodeSymbologyClassName = {default=0};
	__property Symbology;
	__property FitMode = {default=0};
	__property ModuleColor = {default=0};
	__property ModuleWidth = {default=2};
	__property RotationAngle = {default=0};
	__property ShowText = {default=1};
public:
	/* TdxCustomBarCodeProperties.Destroy */ inline __fastcall virtual ~TdxBarCodeProperties() { }
	
};


class PASCALIMPLEMENTATION TdxCustomBarCode : public Cxedit::TcxCustomEdit
{
	typedef Cxedit::TcxCustomEdit inherited;
	
private:
	HIDESBASE System::UnicodeString __fastcall GetText();
	TdxBarCodeProperties* __fastcall GetProperties();
	HIDESBASE TdxBarCodeViewInfo* __fastcall GetViewInfo();
	HIDESBASE TdxBarCodeProperties* __fastcall GetActiveProperties();
	HIDESBASE void __fastcall SetText(System::UnicodeString AValue);
	HIDESBASE void __fastcall SetProperties(TdxBarCodeProperties* const Value);
	
protected:
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	virtual bool __fastcall CanAutoWidth();
	virtual Cxcontrols::TcxControlBackgroundStyle __fastcall GetBackgroundStyle();
	virtual void __fastcall Initialize();
	virtual void __fastcall InitializeViewData(Cxedit::TcxCustomEditViewData* AViewData);
	virtual void __fastcall InternalSetEditValue(const System::Variant &Value, bool AValidateEditValue);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	__property TdxBarCodeViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	DYNAMIC bool __fastcall CanFocus();
	virtual void __fastcall CopyToClipboard();
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TdxBarCodeProperties* ActiveProperties = {read=GetActiveProperties};
	__property System::UnicodeString Text = {read=GetText, write=SetText};
	__property TdxBarCodeProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TdxCustomBarCode(System::Classes::TComponent* AOwner)/* overload */ : Cxedit::TcxCustomEdit(AOwner) { }
	/* TcxCustomEdit.Create */ inline __fastcall virtual TdxCustomBarCode(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Cxedit::TcxCustomEdit(AOwner, AIsInplace) { }
	/* TcxCustomEdit.Destroy */ inline __fastcall virtual ~TdxCustomBarCode() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxCustomBarCode(HWND ParentWindow) : Cxedit::TcxCustomEdit(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TdxBarCode : public TdxCustomBarCode
{
	typedef TdxCustomBarCode inherited;
	
public:
	__fastcall virtual TdxBarCode(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */;
	
__published:
	__property Anchors = {default=3};
	__property AutoSize = {default=1};
	__property Text;
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property ParentColor = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property Properties;
	__property ShowHint;
	__property Style;
	__property StyleDisabled;
	__property StyleHot;
	__property Transparent = {default=0};
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
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TdxBarCode(System::Classes::TComponent* AOwner)/* overload */ : TdxCustomBarCode(AOwner) { }
	/* TcxCustomEdit.Destroy */ inline __fastcall virtual ~TdxBarCode() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxBarCode(HWND ParentWindow) : TdxCustomBarCode(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 dxBarCodeDefaultInplaceHeight = System::Int8(0xf);
}	/* namespace Dxbarcode */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXBARCODE)
using namespace Dxbarcode;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxbarcodeHPP
