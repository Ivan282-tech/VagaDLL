// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxNumericWheelPicker.pas' rev: 35.00 (Windows)

#ifndef DxnumericwheelpickerHPP
#define DxnumericwheelpickerHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Classes.hpp>
#include <cxGraphics.hpp>
#include <dxGDIPlusClasses.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxEdit.hpp>
#include <cxContainer.hpp>
#include <cxDataStorage.hpp>
#include <cxSpinEdit.hpp>
#include <cxFilterControlUtils.hpp>
#include <dxWheelPicker.hpp>
#include <cxAccessibility.hpp>
#include <cxControls.hpp>
#include <Vcl.Controls.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxnumericwheelpicker
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TdxCustomNumericWheelPickerItemViewInfo;
class DELPHICLASS TdxNumericWheelPickerWheelAccessibilityHelper;
class DELPHICLASS TdxCustomNumericWheelPickerWheelViewInfo;
class DELPHICLASS TdxCustomNumericWheelPickerViewInfo;
class DELPHICLASS TdxCustomNumericWheelPickerViewData;
class DELPHICLASS TdxCustomNumericWheelPickerProperties;
class DELPHICLASS TdxCustomNumericWheelPicker;
class DELPHICLASS TdxNumericWheelPickerProperties;
class DELPHICLASS TdxNumericWheelPicker;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomNumericWheelPickerItemViewInfo : public Dxwheelpicker::TdxCustomWheelPickerItemViewInfo
{
	typedef Dxwheelpicker::TdxCustomWheelPickerItemViewInfo inherited;
	
private:
	Vcl::Graphics::TFont* FFont;
	System::Types::TRect FTextRect;
	System::Types::TSize FTextSize;
	System::Types::TSize __fastcall GetTextSize();
	bool __fastcall HasText();
	
private:
	System::UnicodeString FText;
	
protected:
	virtual void __fastcall Calculate(const System::Types::TRect &ABounds);
	virtual void __fastcall DrawContent(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, Cxlookandfeelpainters::TcxButtonState AState);
	virtual void __fastcall Offset(int DX, int DY);
	virtual void __fastcall CalculateTextParameters();
	virtual void __fastcall CalculateTextRects();
	virtual void __fastcall DrawText(Dxgdiplusclasses::TdxGPCanvas* AGPCanvas);
	virtual System::Uitypes::TColor __fastcall GetTextColor();
	virtual void __fastcall InternalDrawContent(Dxgdiplusclasses::TdxGPCanvas* AGPCanvas);
	__property System::Types::TRect TextRect = {read=FTextRect};
	
public:
	__fastcall virtual TdxCustomNumericWheelPickerItemViewInfo(Dxwheelpicker::TdxCustomWheelPickerViewInfo* AWheelPickerViewInfo);
	__fastcall virtual ~TdxCustomNumericWheelPickerItemViewInfo();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNumericWheelPickerWheelAccessibilityHelper : public Dxwheelpicker::TdxCustomWheelPickerWheelAccessibilityHelper
{
	typedef Dxwheelpicker::TdxCustomWheelPickerWheelAccessibilityHelper inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetName(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
public:
	/* TcxAccessibilityHelper.Create */ inline __fastcall virtual TdxNumericWheelPickerWheelAccessibilityHelper(System::TObject* AOwnerObject) : Dxwheelpicker::TdxCustomWheelPickerWheelAccessibilityHelper(AOwnerObject) { }
	/* TcxAccessibilityHelper.Destroy */ inline __fastcall virtual ~TdxNumericWheelPickerWheelAccessibilityHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomNumericWheelPickerWheelViewInfo : public Dxwheelpicker::TdxCustomWheelPickerWheelViewInfo
{
	typedef Dxwheelpicker::TdxCustomWheelPickerWheelViewInfo inherited;
	
private:
	bool FCanContinueTyping;
	System::UnicodeString FTypingString;
	int __fastcall GetValue();
	void __fastcall SetValue(int AValue);
	int __fastcall GetMinValue();
	int __fastcall GetMaxValue();
	void __fastcall CalculateCyclic(const System::Types::TRect &ABounds);
	void __fastcall ResetTypingString();
	
protected:
	int FFirstItemValue;
	virtual Dxwheelpicker::TdxCustomWheelPickerWheelAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	__classmethod virtual Dxwheelpicker::TdxCustomWheelPickerItemViewInfoClass __fastcall GetWheelPickerItemViewInfoClass();
	virtual void __fastcall Calculate(const System::Types::TRect &ABounds);
	virtual void __fastcall ChangeSelectedState();
	virtual void __fastcall InitializeItem(Dxwheelpicker::TdxCustomWheelPickerItemViewInfo* AItem, int AIndex);
	virtual void __fastcall KeyDown(System::Word AKey);
	virtual void __fastcall MouseWheel(int ADelta);
	virtual System::UnicodeString __fastcall GetItemText(int AItemIndex);
	virtual bool __fastcall CanTyping(int AValue);
	virtual bool __fastcall NeedProcessKey(System::Word AKey);
	__property bool CanContinueTyping = {read=FCanContinueTyping, nodefault};
	__property int MaxValue = {read=GetMaxValue, nodefault};
	__property int MinValue = {read=GetMinValue, nodefault};
	__property System::UnicodeString TypingString = {read=FTypingString};
	__property int Value = {read=GetValue, write=SetValue, nodefault};
public:
	/* TdxCustomWheelPickerWheelViewInfo.Create */ inline __fastcall virtual TdxCustomNumericWheelPickerWheelViewInfo(Dxwheelpicker::TdxCustomWheelPickerViewInfo* AWheelPickerViewInfo) : Dxwheelpicker::TdxCustomWheelPickerWheelViewInfo(AWheelPickerViewInfo) { }
	/* TdxCustomWheelPickerWheelViewInfo.Destroy */ inline __fastcall virtual ~TdxCustomNumericWheelPickerWheelViewInfo() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxCustomNumericWheelPickerViewInfo : public Dxwheelpicker::TdxCustomWheelPickerViewInfo
{
	typedef Dxwheelpicker::TdxCustomWheelPickerViewInfo inherited;
	
protected:
	double FMaxValue;
	double FMinValue;
	int FItemIndex;
	System::Uitypes::TColor FFontColor;
	int FFontSize;
	bool FIsSmallItemSize;
	__classmethod virtual Dxwheelpicker::TdxCustomWheelPickerWheelViewInfoClass __fastcall GetWheelPickerWheelViewInfoClass();
	int __fastcall GetNullValueItemIndex();
	virtual System::Variant __fastcall GetInternalValue();
	virtual void __fastcall KeyDown(System::Word &AKey, System::Classes::TShiftState AShift);
	virtual void __fastcall SetInternalValue(const System::Variant &AValue);
	virtual void __fastcall SynchronizeWheelIndexes();
	
public:
	virtual void __fastcall Assign(System::TObject* Source);
public:
	/* TdxCustomWheelPickerViewInfo.Create */ inline __fastcall virtual TdxCustomNumericWheelPickerViewInfo() : Dxwheelpicker::TdxCustomWheelPickerViewInfo() { }
	/* TdxCustomWheelPickerViewInfo.Destroy */ inline __fastcall virtual ~TdxCustomNumericWheelPickerViewInfo() { }
	
};


class PASCALIMPLEMENTATION TdxCustomNumericWheelPickerViewData : public Dxwheelpicker::TdxCustomWheelPickerViewData
{
	typedef Dxwheelpicker::TdxCustomWheelPickerViewData inherited;
	
private:
	int __fastcall GetFontSize(TdxCustomNumericWheelPickerViewInfo* AViewInfo);
	int __fastcall GetRealMaxValue();
	int __fastcall GetRealMinValue();
	
protected:
	System::Types::TSize FMaxTextSize;
	int FWheelWidth;
	virtual System::Types::TSize __fastcall InternalGetEditConstantPartSize(Cxgraphics::TcxCanvas* ACanvas, bool AIsInplace, const Cxedit::TcxEditSizeProperties &AEditSizeProperties, System::Types::TSize &MinContentSize, Cxedit::TcxCustomEditViewInfo* AViewInfo);
	virtual int __fastcall GetOptimalRowHeight();
	virtual int __fastcall GetOptimalWidth();
	virtual int __fastcall GetWheelCount();
	virtual int __fastcall GetWheelWidth(int AIndex);
	virtual void __fastcall CalculateTextSize(Dxwheelpicker::TdxCustomWheelPickerViewInfo* AViewInfo);
	virtual void __fastcall CalculateWheels(Dxwheelpicker::TdxCustomWheelPickerViewInfo* AViewInfo);
	virtual void __fastcall InitializeWheel(Dxwheelpicker::TdxCustomWheelPickerWheelViewInfo* AWheelViewInfo, int AIndex);
	virtual System::UnicodeString __fastcall GetMaxText();
	virtual void __fastcall CalculateWheelWidth(Dxwheelpicker::TdxCustomWheelPickerViewInfo* AViewInfo);
	__property System::Types::TSize MaxTextSize = {read=FMaxTextSize};
public:
	/* TcxCustomEditViewData.Create */ inline __fastcall virtual TdxCustomNumericWheelPickerViewData(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditStyle* AStyle, bool AIsInplace) : Dxwheelpicker::TdxCustomWheelPickerViewData(AProperties, AStyle, AIsInplace) { }
	/* TcxCustomEditViewData.Destroy */ inline __fastcall virtual ~TdxCustomNumericWheelPickerViewData() { }
	
};


class PASCALIMPLEMENTATION TdxCustomNumericWheelPickerProperties : public Dxwheelpicker::TdxCustomWheelPickerProperties
{
	typedef Dxwheelpicker::TdxCustomWheelPickerProperties inherited;
	
protected:
	__classmethod virtual Cxedit::TcxCustomEditViewDataClass __fastcall GetViewDataClass();
	virtual bool __fastcall CanValidate();
	
public:
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	__classmethod virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
	virtual Cxedit::TcxEditSupportedOperations __fastcall GetSupportedOperations();
	virtual System::UnicodeString __fastcall GetDisplayText(const System::Variant &AEditValue, bool AFullText, bool AIsInplace);
	virtual void __fastcall PrepareDisplayValue(const System::Variant &AEditValue, System::Variant &DisplayValue, bool AEditFocused);
public:
	/* TdxCustomWheelPickerProperties.Create */ inline __fastcall virtual TdxCustomNumericWheelPickerProperties(System::Classes::TPersistent* AOwner) : Dxwheelpicker::TdxCustomWheelPickerProperties(AOwner) { }
	/* TdxCustomWheelPickerProperties.Destroy */ inline __fastcall virtual ~TdxCustomNumericWheelPickerProperties() { }
	
};


class PASCALIMPLEMENTATION TdxCustomNumericWheelPicker : public Dxwheelpicker::TdxCustomWheelPicker
{
	typedef Dxwheelpicker::TdxCustomWheelPicker inherited;
	
protected:
	virtual Cxlookandfeelpainters::TcxEditStateColorKind __fastcall GetEditStateColorKind();
	virtual System::UnicodeString __fastcall GetDisplayText();
	virtual void __fastcall PropertiesChanged(System::TObject* Sender);
	DYNAMIC void __fastcall TextChanged();
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
public:
	/* TdxCustomWheelPicker.Create */ inline __fastcall virtual TdxCustomNumericWheelPicker(System::Classes::TComponent* AOwner)/* overload */ : Dxwheelpicker::TdxCustomWheelPicker(AOwner) { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TdxCustomNumericWheelPicker(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Dxwheelpicker::TdxCustomWheelPicker(AOwner, AIsInplace) { }
	/* TcxCustomEdit.Destroy */ inline __fastcall virtual ~TdxCustomNumericWheelPicker() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxCustomNumericWheelPicker(HWND ParentWindow) : Dxwheelpicker::TdxCustomWheelPicker(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TdxNumericWheelPickerProperties : public TdxCustomNumericWheelPickerProperties
{
	typedef TdxCustomNumericWheelPickerProperties inherited;
	
private:
	int __fastcall GetMax();
	int __fastcall GetMin();
	void __fastcall SetMax(int AValue);
	void __fastcall SetMin(int AValue);
	
public:
	__fastcall virtual TdxNumericWheelPickerProperties(System::Classes::TPersistent* AOwner);
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	
__published:
	__property Cyclic = {default=0};
	__property ImmediatePost = {default=0};
	__property LineCount = {default=0};
	__property int Max = {read=GetMax, write=SetMax, default=10};
	__property int Min = {read=GetMin, write=SetMin, default=0};
	__property ValidateOnEnter = {default=0};
	__property ValidationErrorIconAlignment = {default=0};
	__property ValidationOptions = {default=1};
	__property OnChange;
	__property OnEditValueChanged;
	__property OnValidate;
public:
	/* TdxCustomWheelPickerProperties.Destroy */ inline __fastcall virtual ~TdxNumericWheelPickerProperties() { }
	
};


class PASCALIMPLEMENTATION TdxNumericWheelPicker : public TdxCustomNumericWheelPicker
{
	typedef TdxCustomNumericWheelPicker inherited;
	
private:
	HIDESBASE TdxNumericWheelPickerProperties* __fastcall GetActiveProperties();
	HIDESBASE TdxNumericWheelPickerProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(TdxNumericWheelPickerProperties* AValue);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TdxNumericWheelPickerProperties* ActiveProperties = {read=GetActiveProperties};
	
__published:
	__property TdxNumericWheelPickerProperties* Properties = {read=GetProperties, write=SetProperties};
	__property Anchors = {default=3};
	__property AutoSize = {default=0};
	__property BiDiMode;
	__property Constraints;
	__property EditValue = {default=0};
	__property Enabled = {default=1};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property Style;
	__property StyleDisabled;
	__property StyleFocused;
	__property StyleHot;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Visible = {default=1};
	__property OnClick;
	__property OnContextPopup;
	__property OnEditing;
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
public:
	/* TdxCustomWheelPicker.Create */ inline __fastcall virtual TdxNumericWheelPicker(System::Classes::TComponent* AOwner)/* overload */ : TdxCustomNumericWheelPicker(AOwner) { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TdxNumericWheelPicker(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : TdxCustomNumericWheelPicker(AOwner, AIsInplace) { }
	/* TcxCustomEdit.Destroy */ inline __fastcall virtual ~TdxNumericWheelPicker() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxNumericWheelPicker(HWND ParentWindow) : TdxCustomNumericWheelPicker(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::Types::TSize __fastcall dxGPGetTextSize(Dxgdiplusclasses::TdxGPGraphics* AGpCanvas, const System::UnicodeString AText, Vcl::Graphics::TFont* AFont)/* overload */;
extern DELPHI_PACKAGE System::Types::TSize __fastcall dxGPGetTextSize(const System::UnicodeString AText, Vcl::Graphics::TFont* AFont)/* overload */;
}	/* namespace Dxnumericwheelpicker */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXNUMERICWHEELPICKER)
using namespace Dxnumericwheelpicker;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxnumericwheelpickerHPP
