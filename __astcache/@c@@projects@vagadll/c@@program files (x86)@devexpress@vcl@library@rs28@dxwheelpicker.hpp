// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxWheelPicker.pas' rev: 35.00 (Windows)

#ifndef DxwheelpickerHPP
#define DxwheelpickerHPP

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
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <dxCore.hpp>
#include <dxCoreClasses.hpp>
#include <cxClasses.hpp>
#include <cxGraphics.hpp>
#include <dxTouch.hpp>
#include <dxGDIPlusClasses.hpp>
#include <cxLookAndFeels.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxControls.hpp>
#include <cxContainer.hpp>
#include <Vcl.ImgList.hpp>
#include <cxEdit.hpp>
#include <dxAnimation.hpp>
#include <dxGallery.hpp>
#include <cxGeometry.hpp>
#include <cxFormats.hpp>
#include <cxAccessibility.hpp>
#include <dxFading.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxwheelpicker
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TdxWheelPickerWheelFadingHelper;
class DELPHICLASS TdxCustomWheelPickerPartViewInfo;
class DELPHICLASS TdxCustomWheelPickerItemViewInfo;
class DELPHICLASS TdxCustomWheelPickerWheelViewInfoAnimationHelper;
class DELPHICLASS TdxCustomWheelPickerWheelAccessibilityHelper;
class DELPHICLASS TdxCustomWheelPickerWheelViewInfo;
class DELPHICLASS TdxCustomWheelPickerViewInfo;
class DELPHICLASS TdxCustomWheelPickerViewData;
class DELPHICLASS TdxCustomWheelPickerProperties;
class DELPHICLASS TdxWheelPickerDragAndDropObject;
class DELPHICLASS TdxWheelPickerAccessibilityHelper;
class DELPHICLASS TdxCustomWheelPicker;
class DELPHICLASS TdxWheelPickerItemViewInfo;
class DELPHICLASS TdxWheelPickerWheelAccessibilityHelper;
class DELPHICLASS TdxWheelPickerWheelViewInfo;
class DELPHICLASS TdxWheelPickerViewInfo;
class DELPHICLASS TdxWheelPickerViewData;
class DELPHICLASS TdxWheelPickerItem;
class DELPHICLASS TdxWheelPickerItems;
class DELPHICLASS TdxWheelPickerWheel;
class DELPHICLASS TdxWheelPickerWheels;
class DELPHICLASS TdxWheelPickerProperties;
class DELPHICLASS TdxWheelPicker;
//-- type declarations -------------------------------------------------------
typedef System::TMetaClass* TdxCustomWheelPickerItemViewInfoClass;

typedef System::TMetaClass* TdxCustomWheelPickerWheelViewInfoClass;

typedef System::DynamicArray<int> TdxWheelPickerItemIndexes;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxWheelPickerWheelFadingHelper : public Cxedit::TcxCustomEditFadingHelper
{
	typedef Cxedit::TcxCustomEditFadingHelper inherited;
	
private:
	TdxCustomWheelPickerWheelViewInfo* FWheelViewInfo;
	
protected:
	virtual void __fastcall DrawItem(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState);
	virtual Cxedit::TcxCustomEditViewInfo* __fastcall GetEditViewInfo();
	virtual void __fastcall GetFadingImages(/* out */ Cxgraphics::TcxBitmap* &AFadeOutImage, /* out */ Cxgraphics::TcxBitmap* &AFadeInImage);
	virtual System::Types::TRect __fastcall GetBounds();
	
public:
	__fastcall virtual TdxWheelPickerWheelFadingHelper(TdxCustomWheelPickerWheelViewInfo* AWheelViewInfo);
	virtual void __fastcall Invalidate()/* overload */;
	__property System::Types::TRect Bounds = {read=GetBounds};
	__property TdxCustomWheelPickerWheelViewInfo* WheelViewInfo = {read=FWheelViewInfo};
public:
	/* TdxFadingObjectHelper.Destroy */ inline __fastcall virtual ~TdxWheelPickerWheelFadingHelper() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Invalidate(const System::Types::TRect &R, bool AEraseBackground){ Cxedit::TcxCustomEditFadingHelper::Invalidate(R, AEraseBackground); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomWheelPickerPartViewInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Types::TRect FBounds;
	TdxCustomWheelPickerViewInfo* FWheelPickerViewInfo;
	Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	
protected:
	int FIndex;
	virtual void __fastcall Calculate(const System::Types::TRect &ABounds);
	virtual void __fastcall Draw(Cxgraphics::TcxCanvas* ACanvas);
	virtual TdxCustomWheelPickerPartViewInfo* __fastcall GetHitTest(const System::Types::TPoint &APoint);
	virtual int __fastcall GetRowHeight();
	virtual Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetPainter();
	virtual void __fastcall Offset(int DX, int DY);
	virtual void __fastcall SetPressedState();
	
public:
	__fastcall virtual TdxCustomWheelPickerPartViewInfo(TdxCustomWheelPickerViewInfo* AWheelPickerViewInfo);
	__property System::Types::TRect Bounds = {read=FBounds};
	__property int RowHeight = {read=GetRowHeight, nodefault};
	__property Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* Painter = {read=GetPainter};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=GetScaleFactor};
	__property TdxCustomWheelPickerViewInfo* WheelPickerViewInfo = {read=FWheelPickerViewInfo};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxCustomWheelPickerPartViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomWheelPickerItemViewInfo : public TdxCustomWheelPickerPartViewInfo
{
	typedef TdxCustomWheelPickerPartViewInfo inherited;
	
private:
	Cxgraphics::TcxBitmap32* FBitmap;
	System::Types::TRect FContentBounds;
	System::Types::TRect FContentRect;
	TdxCustomWheelPickerWheelViewInfo* FWheelViewInfo;
	
protected:
	bool FIsRecalculate;
	virtual void __fastcall Calculate(const System::Types::TRect &ABounds);
	virtual void __fastcall Draw(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall Offset(int DX, int DY);
	virtual void __fastcall SetPressedState();
	virtual void __fastcall DoDraw(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, Cxlookandfeelpainters::TcxButtonState AState);
	virtual void __fastcall DrawContent(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, Cxlookandfeelpainters::TcxButtonState AState);
	virtual Cxlookandfeelpainters::TcxButtonState __fastcall GetState();
	virtual bool __fastcall IsItemSelected();
	virtual void __fastcall Recalculate();
	__property Cxgraphics::TcxBitmap32* Bitmap = {read=FBitmap};
	__property System::Types::TRect ContentBounds = {read=FContentBounds};
	__property System::Types::TRect ContentRect = {read=FContentRect};
	__property TdxCustomWheelPickerWheelViewInfo* WheelViewInfo = {read=FWheelViewInfo};
	
public:
	__fastcall virtual TdxCustomWheelPickerItemViewInfo(TdxCustomWheelPickerViewInfo* AWheelPickerViewInfo);
	__fastcall virtual ~TdxCustomWheelPickerItemViewInfo();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomWheelPickerWheelViewInfoAnimationHelper : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Dxanimation::TdxAnimationTransition* FAnimation;
	int FAnimationOffset;
	int FAnimationStep;
	TdxCustomWheelPickerWheelViewInfo* FWheelViewInfo;
	
protected:
	virtual void __fastcall DoAnimation(Dxanimation::TdxAnimationTransition* Sender, int &APosition, bool &AFinished);
	virtual void __fastcall DoAnimationTerminate(System::TObject* Sender);
	virtual int __fastcall GetStepCount();
	virtual int __fastcall GetTime();
	void __fastcall StartAnimation(int ADelta);
	void __fastcall StopAnimation();
	__property int AnimationOffset = {read=FAnimationOffset, nodefault};
	
public:
	__fastcall virtual TdxCustomWheelPickerWheelViewInfoAnimationHelper(TdxCustomWheelPickerWheelViewInfo* AWheelViewInfo);
	__fastcall virtual ~TdxCustomWheelPickerWheelViewInfoAnimationHelper();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomWheelPickerWheelAccessibilityHelper : public Cxedit::TdxEditChildAccessibilityHelper
{
	typedef Cxedit::TdxEditChildAccessibilityHelper inherited;
	
private:
	TdxCustomWheelPickerWheelViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual bool __fastcall ChildIsSimpleElement(int AIndex);
	virtual void __fastcall DoDefaultAction(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetChildCount();
	virtual System::UnicodeString __fastcall GetDefaultActionDescription(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual Cxaccessibility::TcxAccessibilityHelper* __fastcall GetParent();
	virtual int __fastcall GetRole(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetState(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual Cxaccessibility::TcxAccessibleObjectProperties __fastcall GetSupportedProperties(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual bool __fastcall IsExtended();
	__property TdxCustomWheelPickerWheelViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	virtual System::Types::TRect __fastcall GetScreenBounds(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
public:
	/* TcxAccessibilityHelper.Create */ inline __fastcall virtual TdxCustomWheelPickerWheelAccessibilityHelper(System::TObject* AOwnerObject) : Cxedit::TdxEditChildAccessibilityHelper(AOwnerObject) { }
	/* TcxAccessibilityHelper.Destroy */ inline __fastcall virtual ~TdxCustomWheelPickerWheelAccessibilityHelper() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TdxCustomWheelPickerWheelAccessibilityHelperClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomWheelPickerWheelViewInfo : public TdxCustomWheelPickerPartViewInfo
{
	typedef TdxCustomWheelPickerPartViewInfo inherited;
	
private:
	TdxCustomWheelPickerWheelViewInfoAnimationHelper* FAnimationHelper;
	TdxWheelPickerWheelFadingHelper* FFadingHelper;
	Cxaccessibility::_di_IcxAccessibilityHelper FIAccessibilityHelper;
	System::Types::TRect FItemBoundsRect;
	Cxclasses::TcxObjectList* FItems;
	int FItemIndex;
	Cxaccessibility::_di_IcxAccessibilityHelper __fastcall GetIAccessibilityHelper();
	
protected:
	System::Types::TRect FCentralRowRect;
	bool FCyclic;
	Cxedit::TcxEditButtonViewInfo* FEditButtonViewInfo;
	bool FEnabled;
	int FWheelItemCount;
	int FMovingOffset;
	virtual void __fastcall Calculate(const System::Types::TRect &ABounds);
	virtual void __fastcall Draw(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall Offset(int DX, int DY);
	virtual void __fastcall SetPressedState();
	virtual void __fastcall AddItem(const System::Types::TRect &ABounds, int AWheelItemIndex);
	virtual void __fastcall CalculateItems();
	virtual void __fastcall ChangeSelectedState();
	virtual void __fastcall DrawItemBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, Cxlookandfeelpainters::TcxButtonState AState);
	virtual TdxCustomWheelPickerWheelAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	virtual int __fastcall GetAnimationOffset();
	TdxCustomWheelPickerItemViewInfo* __fastcall GetItem(int AIndex);
	int __fastcall GetItemCount();
	virtual TdxCustomWheelPickerPartViewInfo* __fastcall GetHitTest(const System::Types::TPoint &APoint);
	virtual System::Types::TRect __fastcall GetCentralRowRect();
	virtual Cxlookandfeelpainters::TcxButtonState __fastcall GetState();
	__classmethod virtual TdxCustomWheelPickerItemViewInfoClass __fastcall GetWheelPickerItemViewInfoClass();
	virtual void __fastcall InitializeItem(TdxCustomWheelPickerItemViewInfo* AItem, int AIndex);
	void __fastcall Invalidate();
	virtual void __fastcall KeyDown(System::Word AKey);
	virtual void __fastcall MouseWheel(int ADelta);
	virtual void __fastcall RefreshItems();
	void __fastcall Recalculate();
	void __fastcall SetItemIndex(int AValue);
	virtual void __fastcall StartAnimation(int ADelta);
	virtual void __fastcall StopAnimation();
	bool __fastcall IsAnimating();
	virtual bool __fastcall IsDragged();
	virtual bool __fastcall IsSelected();
	void __fastcall BeginMoving();
	void __fastcall EndMoving();
	void __fastcall Moving(int ADelta);
	__property int AnimationOffset = {read=GetAnimationOffset, nodefault};
	__property TdxWheelPickerWheelFadingHelper* FadingHelper = {read=FFadingHelper};
	__property Cxaccessibility::_di_IcxAccessibilityHelper IAccessibilityHelper = {read=GetIAccessibilityHelper};
	__property System::Types::TRect ItemBoundsRect = {read=FItemBoundsRect};
	__property int ItemIndex = {read=FItemIndex, write=SetItemIndex, nodefault};
	__property int ItemCount = {read=GetItemCount, nodefault};
	__property TdxCustomWheelPickerItemViewInfo* Items[int Index] = {read=GetItem};
	
public:
	__fastcall virtual TdxCustomWheelPickerWheelViewInfo(TdxCustomWheelPickerViewInfo* AWheelPickerViewInfo);
	__fastcall virtual ~TdxCustomWheelPickerWheelViewInfo();
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxCustomWheelPickerViewInfo : public Cxedit::TcxCustomEditViewInfo
{
	typedef Cxedit::TcxCustomEditViewInfo inherited;
	
private:
	TdxCustomWheelPickerWheelViewInfo* FDraggedWheel;
	TdxCustomWheelPickerWheelViewInfo* FPressedWheel;
	TdxCustomWheelPickerWheelViewInfo* FSelectedWheel;
	TdxCustomWheelPickerWheelViewInfo* __fastcall AddWheel();
	TdxCustomWheelPickerWheelViewInfo* __fastcall GetWheel(int AIndex);
	void __fastcall SetWheelCount(int ACount);
	void __fastcall SetDraggedWheel(TdxCustomWheelPickerWheelViewInfo* AValue);
	void __fastcall SetPressedWheel(TdxCustomWheelPickerWheelViewInfo* AValue);
	void __fastcall SetSelectedWheel(TdxCustomWheelPickerWheelViewInfo* AValue);
	
protected:
	bool FIsDirty;
	int FRowHeight;
	bool FIsNullEditValue;
	TdxCustomWheelPickerItemViewInfo* FPressedItemViewInfo;
	bool FUseRightToLeftReading;
	Cxclasses::TcxObjectList* FWheels;
	virtual void __fastcall InternalPaint(Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall BeginDragging();
	void __fastcall BeginGestureScroll(const System::Types::TPoint &APos);
	void __fastcall EndDragging();
	void __fastcall EndGestureScroll();
	virtual void __fastcall SelectNextWheel(int AIncrement);
	virtual TdxCustomWheelPickerPartViewInfo* __fastcall GetHitTest(const System::Types::TPoint &APoint);
	__classmethod virtual TdxCustomWheelPickerWheelViewInfoClass __fastcall GetWheelPickerWheelViewInfoClass();
	virtual void __fastcall FocusChanged(bool AFocused);
	virtual void __fastcall KeyDown(System::Word &AKey, System::Classes::TShiftState AShift);
	virtual void __fastcall MouseClick(const System::Types::TPoint &APoint);
	virtual void __fastcall MouseWheel(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	virtual System::Variant __fastcall GetInternalValue();
	virtual void __fastcall SetInternalValue(const System::Variant &AValue);
	virtual void __fastcall SynchronizeWheelIndexes();
	virtual void __fastcall SetPressedElements(const System::Types::TPoint &APoint);
	
public:
	__fastcall virtual TdxCustomWheelPickerViewInfo();
	__fastcall virtual ~TdxCustomWheelPickerViewInfo();
	virtual void __fastcall Assign(System::TObject* Source);
	virtual void __fastcall Offset(int DX, int DY);
	__property TdxCustomWheelPickerWheelViewInfo* DraggedWheel = {read=FDraggedWheel, write=SetDraggedWheel};
	__property TdxCustomWheelPickerWheelViewInfo* PressedWheel = {read=FPressedWheel, write=SetPressedWheel};
	__property TdxCustomWheelPickerWheelViewInfo* SelectedWheel = {read=FSelectedWheel, write=SetSelectedWheel};
	__property bool UseRightToLeftReading = {read=FUseRightToLeftReading, nodefault};
};


class PASCALIMPLEMENTATION TdxCustomWheelPickerViewData : public Cxedit::TcxCustomEditViewData
{
	typedef Cxedit::TcxCustomEditViewData inherited;
	
private:
	TdxCustomWheelPickerProperties* __fastcall GetProperties();
	
protected:
	virtual void __fastcall CalculateRowHeight(TdxCustomWheelPickerViewInfo* AViewInfo);
	virtual void __fastcall CalculateTextSize(TdxCustomWheelPickerViewInfo* AViewInfo);
	virtual void __fastcall CalculateWheels(TdxCustomWheelPickerViewInfo* AViewInfo);
	virtual int __fastcall GetOptimalRowHeight();
	virtual int __fastcall GetOptimalWidth();
	virtual int __fastcall GetWheelCount();
	virtual int __fastcall GetWheelWidth(int AIndex);
	virtual int __fastcall GetWheelsHeight(TdxCustomWheelPickerViewInfo* AViewInfo);
	virtual int __fastcall GetWheelIndent();
	virtual void __fastcall InitializeWheel(TdxCustomWheelPickerWheelViewInfo* AWheelViewInfo, int AIndex);
	virtual System::Types::TSize __fastcall InternalGetEditConstantPartSize(Cxgraphics::TcxCanvas* ACanvas, bool AIsInplace, const Cxedit::TcxEditSizeProperties &AEditSizeProperties, System::Types::TSize &MinContentSize, Cxedit::TcxCustomEditViewInfo* AViewInfo);
	virtual bool __fastcall IsWheelAutoSize(int AIndex);
	
public:
	virtual void __fastcall Calculate(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TPoint &P, Cxcontainer::TcxMouseButton Button, System::Classes::TShiftState Shift, Cxedit::TcxCustomEditViewInfo* AViewInfo, bool AIsMouseEvent);
	virtual void __fastcall EditValueToDrawValue(const System::Variant &AEditValue, Cxedit::TcxCustomEditViewInfo* AViewInfo);
	__property TdxCustomWheelPickerProperties* Properties = {read=GetProperties};
public:
	/* TcxCustomEditViewData.Create */ inline __fastcall virtual TdxCustomWheelPickerViewData(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditStyle* AStyle, bool AIsInplace) : Cxedit::TcxCustomEditViewData(AProperties, AStyle, AIsInplace) { }
	/* TcxCustomEditViewData.Destroy */ inline __fastcall virtual ~TdxCustomWheelPickerViewData() { }
	
};


class PASCALIMPLEMENTATION TdxCustomWheelPickerProperties : public Cxedit::TcxCustomEditProperties
{
	typedef Cxedit::TcxCustomEditProperties inherited;
	
private:
	bool FCyclic;
	int FLineCount;
	void __fastcall SetCyclic(bool AValue);
	void __fastcall SetLineCount(int AValue);
	
protected:
	virtual void __fastcall DoAssign(Cxedit::TcxCustomEditProperties* AProperties);
	virtual void __fastcall FormatChanged();
	__classmethod virtual Cxedit::TcxCustomEditViewDataClass __fastcall GetViewDataClass();
	virtual bool __fastcall HasDisplayValue();
	virtual void __fastcall InternalPrepareValue(System::Variant &AEditValue);
	__property bool Cyclic = {read=FCyclic, write=SetCyclic, nodefault};
	
public:
	__fastcall virtual TdxCustomWheelPickerProperties(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TdxCustomWheelPickerProperties();
	virtual bool __fastcall CanCompareEditValue();
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	virtual Cxedit::TcxEditSpecialFeatures __fastcall GetSpecialFeatures();
	__classmethod virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
	virtual bool __fastcall IsResetEditClass();
	__property int LineCount = {read=FLineCount, write=SetLineCount, default=0};
private:
	void *__IcxFormatControllerListener;	// Cxformats::IcxFormatControllerListener 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {A7F2F6D3-1A7D-4295-A6E6-9297BD83D0DE}
	operator Cxformats::_di_IcxFormatControllerListener()
	{
		Cxformats::_di_IcxFormatControllerListener intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxformats::IcxFormatControllerListener*(void) { return (Cxformats::IcxFormatControllerListener*)&__IcxFormatControllerListener; }
	#endif
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxWheelPickerDragAndDropObject : public Cxcontrols::TcxDragAndDropObject
{
	typedef Cxcontrols::TcxDragAndDropObject inherited;
	
protected:
	virtual System::Uitypes::TCursor __fastcall GetDragAndDropCursor(bool Accepted);
public:
	/* TcxDragAndDropObject.Create */ inline __fastcall virtual TdxWheelPickerDragAndDropObject(Cxcontrols::TcxControl* AControl) : Cxcontrols::TcxDragAndDropObject(AControl) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxWheelPickerDragAndDropObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxWheelPickerAccessibilityHelper : public Cxedit::TdxEditAccessibilityHelper
{
	typedef Cxedit::TdxEditAccessibilityHelper inherited;
	
private:
	TdxCustomWheelPicker* __fastcall GetWheelPicker();
	HIDESBASE TdxCustomWheelPickerViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual int __fastcall GetChildCount();
	virtual int __fastcall GetRole(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	__property TdxCustomWheelPicker* WheelPicker = {read=GetWheelPicker};
	__property TdxCustomWheelPickerViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TdxEditAccessibilityHelper.Create */ inline __fastcall virtual TdxWheelPickerAccessibilityHelper(System::TObject* AOwnerObject) : Cxedit::TdxEditAccessibilityHelper(AOwnerObject) { }
	/* TdxEditAccessibilityHelper.Destroy */ inline __fastcall virtual ~TdxWheelPickerAccessibilityHelper() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxCustomWheelPicker : public Cxedit::TcxCustomEdit
{
	typedef Cxedit::TcxCustomEdit inherited;
	
private:
	int FDraggingPosY;
	HIDESBASE TdxCustomWheelPickerProperties* __fastcall GetActiveProperties();
	TdxCustomWheelPickerProperties* __fastcall GetProperties();
	HIDESBASE TdxCustomWheelPickerViewInfo* __fastcall GetViewInfo();
	HIDESBASE void __fastcall SetProperties(TdxCustomWheelPickerProperties* AValue);
	HIDESBASE MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	
protected:
	virtual bool __fastcall AllowGesture(int AGestureId);
	virtual bool __fastcall AllowPan(Vcl::Forms::TScrollBarKind AScrollKind);
	virtual void __fastcall BeginGestureScroll(const System::Types::TPoint &APos);
	virtual void __fastcall EndGestureScroll();
	virtual void __fastcall GestureScroll(int ADeltaX, int ADeltaY);
	virtual int __fastcall GetPanOptions();
	virtual bool __fastcall IsPanArea(const System::Types::TPoint &APoint);
	virtual bool __fastcall NeedPanningFeedback(Vcl::Forms::TScrollBarKind AScrollKind);
	virtual void __fastcall BiDiModeChanged();
	virtual bool __fastcall CanAutoWidth();
	virtual void __fastcall ContainerStyleChanged(System::TObject* Sender);
	virtual void __fastcall DoFocusChanged();
	virtual Cxedit::TdxEditAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	virtual void __fastcall Initialize();
	virtual bool __fastcall InternalMouseWheel(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	virtual bool __fastcall IsDoubleBufferedNeeded();
	virtual void __fastcall Loaded();
	virtual void __fastcall PropertiesChanged(System::TObject* Sender);
	virtual void __fastcall SynchronizeDisplayValue();
	virtual bool __fastcall WantNavigationKeys();
	virtual bool __fastcall IsMouseWheelHandleNeeded(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseEnter(Vcl::Controls::TControl* AControl);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual Cxcontrols::TcxDragAndDropObjectClass __fastcall GetDragAndDropObjectClass();
	DYNAMIC void __fastcall DragAndDrop(const System::Types::TPoint &P, bool &Accepted);
	DYNAMIC void __fastcall EndDragAndDrop(bool Accepted);
	DYNAMIC bool __fastcall StartDragAndDrop(const System::Types::TPoint &P);
	void __fastcall InternalSetSelectedValue(const System::Variant &ASelectedValue);
	__property TdxCustomWheelPickerProperties* ActiveProperties = {read=GetActiveProperties};
	__property AutoSize = {default=0};
	__property TdxCustomWheelPickerProperties* Properties = {read=GetProperties, write=SetProperties};
	__property TdxCustomWheelPickerViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	__fastcall virtual TdxCustomWheelPicker(System::Classes::TComponent* AOwner)/* overload */;
	DYNAMIC void __fastcall BeginDragAndDrop();
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TdxCustomWheelPicker(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Cxedit::TcxCustomEdit(AOwner, AIsInplace) { }
	/* TcxCustomEdit.Destroy */ inline __fastcall virtual ~TdxCustomWheelPicker() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxCustomWheelPicker(HWND ParentWindow) : Cxedit::TcxCustomEdit(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxWheelPickerItemViewInfo : public TdxCustomWheelPickerItemViewInfo
{
	typedef TdxCustomWheelPickerItemViewInfo inherited;
	
private:
	System::Types::TRect FImageRect;
	System::Types::TSize FImageSize;
	int FTextFlags;
	System::Types::TRect FTextRect;
	System::Types::TSize FTextSize;
	void __fastcall CalculateBottomAlignment(System::Types::TRect &ATextRect, System::Types::TRect &AImageRect);
	void __fastcall CalculateCenterHorizontallyAlignment(System::Types::TRect &ATextRect, System::Types::TRect &AImageRect);
	void __fastcall CalculateCenterVerticallyAlignment(System::Types::TRect &ATextRect, System::Types::TRect &AImageRect);
	void __fastcall CalculateLeftAlignment(System::Types::TRect &ATextRect, System::Types::TRect &AImageRect);
	void __fastcall CalculateRightAlignment(System::Types::TRect &ATextRect, System::Types::TRect &AImageRect);
	void __fastcall CalculateTopAlignment(System::Types::TRect &ATextRect, System::Types::TRect &AImageRect);
	TdxWheelPickerViewInfo* __fastcall GetWheelPickerViewInfo();
	
protected:
	Dxgdiplusclasses::TdxSmartImage* FGlyph;
	System::Uitypes::TImageIndex FImageIndex;
	System::Classes::TAlignment FItemContentAlignHorz;
	Cxclasses::TcxAlignmentVert FItemContentAlignVert;
	Vcl::Buttons::TButtonLayout FLayout;
	System::UnicodeString FText;
	virtual void __fastcall Calculate(const System::Types::TRect &ABounds);
	virtual void __fastcall CalculateContentLayout(/* out */ System::Types::TRect &ATextRect, /* out */ System::Types::TRect &AImageRect);
	virtual void __fastcall DrawContent(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, Cxlookandfeelpainters::TcxButtonState AState);
	virtual void __fastcall DrawGlyph(Cxgraphics::TcxCanvas* ACanvas, Cxlookandfeelpainters::TcxButtonState AState);
	virtual void __fastcall DrawText(Cxgraphics::TcxCanvas* ACanvas);
	Vcl::Buttons::TButtonLayout __fastcall GetActualLayout();
	virtual System::Types::TSize __fastcall GetImageSize();
	virtual int __fastcall GetTextFlags();
	virtual System::Types::TSize __fastcall GetTextSize();
	virtual bool __fastcall HasGlyph();
	virtual bool __fastcall HasText();
	virtual void __fastcall InitializeByItem(TdxWheelPickerItem* AItem);
	__property Vcl::Buttons::TButtonLayout ActualLayout = {read=GetActualLayout, nodefault};
	
public:
	__property TdxWheelPickerViewInfo* WheelPickerViewInfo = {read=GetWheelPickerViewInfo};
public:
	/* TdxCustomWheelPickerItemViewInfo.Create */ inline __fastcall virtual TdxWheelPickerItemViewInfo(TdxCustomWheelPickerViewInfo* AWheelPickerViewInfo) : TdxCustomWheelPickerItemViewInfo(AWheelPickerViewInfo) { }
	/* TdxCustomWheelPickerItemViewInfo.Destroy */ inline __fastcall virtual ~TdxWheelPickerItemViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxWheelPickerWheelAccessibilityHelper : public TdxCustomWheelPickerWheelAccessibilityHelper
{
	typedef TdxCustomWheelPickerWheelAccessibilityHelper inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetName(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
public:
	/* TcxAccessibilityHelper.Create */ inline __fastcall virtual TdxWheelPickerWheelAccessibilityHelper(System::TObject* AOwnerObject) : TdxCustomWheelPickerWheelAccessibilityHelper(AOwnerObject) { }
	/* TcxAccessibilityHelper.Destroy */ inline __fastcall virtual ~TdxWheelPickerWheelAccessibilityHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxWheelPickerWheelViewInfo : public TdxCustomWheelPickerWheelViewInfo
{
	typedef TdxCustomWheelPickerWheelViewInfo inherited;
	
protected:
	TdxWheelPickerWheel* FWheel;
	virtual TdxCustomWheelPickerWheelAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	__classmethod virtual TdxCustomWheelPickerItemViewInfoClass __fastcall GetWheelPickerItemViewInfoClass();
	virtual void __fastcall InitializeItem(TdxCustomWheelPickerItemViewInfo* AItem, int AIndex);
public:
	/* TdxCustomWheelPickerWheelViewInfo.Create */ inline __fastcall virtual TdxWheelPickerWheelViewInfo(TdxCustomWheelPickerViewInfo* AWheelPickerViewInfo) : TdxCustomWheelPickerWheelViewInfo(AWheelPickerViewInfo) { }
	/* TdxCustomWheelPickerWheelViewInfo.Destroy */ inline __fastcall virtual ~TdxWheelPickerWheelViewInfo() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxWheelPickerViewInfo : public TdxCustomWheelPickerViewInfo
{
	typedef TdxCustomWheelPickerViewInfo inherited;
	
protected:
	Vcl::Imglist::TCustomImageList* FImages;
	TdxWheelPickerItemIndexes FItemIndexes;
	__classmethod virtual TdxCustomWheelPickerWheelViewInfoClass __fastcall GetWheelPickerWheelViewInfoClass();
	virtual void __fastcall SetInternalValue(const System::Variant &AValue);
	virtual void __fastcall SynchronizeWheelIndexes();
public:
	/* TdxCustomWheelPickerViewInfo.Create */ inline __fastcall virtual TdxWheelPickerViewInfo() : TdxCustomWheelPickerViewInfo() { }
	/* TdxCustomWheelPickerViewInfo.Destroy */ inline __fastcall virtual ~TdxWheelPickerViewInfo() { }
	
};


class PASCALIMPLEMENTATION TdxWheelPickerViewData : public TdxCustomWheelPickerViewData
{
	typedef TdxCustomWheelPickerViewData inherited;
	
private:
	HIDESBASE TdxWheelPickerProperties* __fastcall GetProperties();
	int __fastcall CalculateMaxLineHight();
	
protected:
	virtual void __fastcall CalculateRowHeight(TdxCustomWheelPickerViewInfo* AViewInfo);
	virtual void __fastcall InitializeWheel(TdxCustomWheelPickerWheelViewInfo* AWheelViewInfo, int AIndex);
	virtual int __fastcall GetOptimalRowHeight();
	virtual int __fastcall GetOptimalWidth();
	virtual int __fastcall GetWheelCount();
	virtual int __fastcall GetWheelWidth(int AIndex);
	virtual bool __fastcall IsWheelAutoSize(int AIndex);
	
public:
	virtual void __fastcall Calculate(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TPoint &P, Cxcontainer::TcxMouseButton Button, System::Classes::TShiftState Shift, Cxedit::TcxCustomEditViewInfo* AViewInfo, bool AIsMouseEvent);
	__property TdxWheelPickerProperties* Properties = {read=GetProperties};
public:
	/* TcxCustomEditViewData.Create */ inline __fastcall virtual TdxWheelPickerViewData(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditStyle* AStyle, bool AIsInplace) : TdxCustomWheelPickerViewData(AProperties, AStyle, AIsInplace) { }
	/* TcxCustomEditViewData.Destroy */ inline __fastcall virtual ~TdxWheelPickerViewData() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxWheelPickerItem : public Cxclasses::TcxInterfacedCollectionItem
{
	typedef Cxclasses::TcxInterfacedCollectionItem inherited;
	
private:
	Dxgdiplusclasses::TdxSmartGlyph* FGlyph;
	System::Uitypes::TImageIndex FImageIndex;
	NativeInt FTag;
	System::UnicodeString FText;
	void __fastcall SetGlyph(Dxgdiplusclasses::TdxSmartGlyph* AValue);
	void __fastcall SetImageIndex(System::Uitypes::TImageIndex AValue);
	void __fastcall SetText(const System::UnicodeString AValue);
	System::UnicodeString __fastcall GetCaption();
	HIDESBASE int __fastcall GetIndex();
	System::TObject* __fastcall GetInstance();
	void __fastcall SetCaption(const System::UnicodeString AValue);
	Dxgallery::_di_IdxGalleryItems __fastcall GetGalleryItems();
	void __fastcall SetGalleryItems(Dxgallery::_di_IdxGalleryItems AItems);
	
protected:
	virtual TdxWheelPickerItems* __fastcall GetCollection();
	virtual void __fastcall GlyphChangeHandler(System::TObject* Sender);
	__property TdxWheelPickerItems* Collection = {read=GetCollection};
	
public:
	__fastcall virtual TdxWheelPickerItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TdxWheelPickerItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property Dxgdiplusclasses::TdxSmartGlyph* Glyph = {read=FGlyph, write=SetGlyph};
	__property System::Uitypes::TImageIndex ImageIndex = {read=FImageIndex, write=SetImageIndex, default=-1};
	__property NativeInt Tag = {read=FTag, write=FTag, default=0};
	__property System::UnicodeString Text = {read=FText, write=SetText};
private:
	void *__IdxGalleryItem;	// Dxgallery::IdxGalleryItem 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B30DECAE-EDCD-4221-B404-5E811A866DA6}
	operator Dxgallery::_di_IdxGalleryItem()
	{
		Dxgallery::_di_IdxGalleryItem intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxgallery::IdxGalleryItem*(void) { return (Dxgallery::IdxGalleryItem*)&__IdxGalleryItem; }
	#endif
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxWheelPickerItems : public Cxclasses::TcxOwnedInterfacedCollection
{
	typedef Cxclasses::TcxOwnedInterfacedCollection inherited;
	
public:
	TdxWheelPickerItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	Cxclasses::TcxAlignment* FAlignment;
	Vcl::Buttons::TButtonLayout FLayout;
	void __fastcall AlignmentChangeHandler(System::TObject* Sender);
	HIDESBASE TdxWheelPickerItem* __fastcall GetItem(int AIndex);
	void __fastcall SetAlignment(Cxclasses::TcxAlignment* AValue);
	HIDESBASE void __fastcall SetItem(int Index, TdxWheelPickerItem* AValue);
	void __fastcall SetLayout(Vcl::Buttons::TButtonLayout AValue);
	System::TObject* __fastcall GetInstance();
	Dxgallery::_di_IdxGalleryItem __fastcall AddGalleryItem();
	int __fastcall GetGalleryItemCount();
	Dxgallery::_di_IdxGalleryItem __fastcall GetGalleryItem(int AIndex);
	Dxgallery::_di_IdxGalleryItem __fastcall InsertGalleryItem(int AIndex);
	
protected:
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	__property Cxclasses::TcxAlignment* Alignment = {read=FAlignment, write=SetAlignment};
	
public:
	__fastcall virtual TdxWheelPickerItems(System::Classes::TPersistent* AOwner, System::Classes::TCollectionItemClass ItemClass);
	__fastcall virtual ~TdxWheelPickerItems();
	HIDESBASE TdxWheelPickerItem* __fastcall Add();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property TdxWheelPickerItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	
__published:
	__property Vcl::Buttons::TButtonLayout Layout = {read=FLayout, write=SetLayout, default=2};
private:
	void *__IdxGalleryItems;	// Dxgallery::IdxGalleryItems 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B695ABB2-86B7-403E-AF57-B0EBAABBA0FA}
	operator Dxgallery::_di_IdxGalleryItems()
	{
		Dxgallery::_di_IdxGalleryItems intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxgallery::IdxGalleryItems*(void) { return (Dxgallery::IdxGalleryItems*)&__IdxGalleryItems; }
	#endif
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxWheelPickerWheel : public Cxclasses::TcxInterfacedCollectionItem
{
	typedef Cxclasses::TcxInterfacedCollectionItem inherited;
	
private:
	TdxWheelPickerItems* FItems;
	bool FCyclic;
	NativeInt FTag;
	int FWidth;
	void __fastcall SetItems(TdxWheelPickerItems* AValue);
	void __fastcall SetCyclic(bool AValue);
	void __fastcall SetWidth(int AValue);
	System::TObject* __fastcall GetInstance();
	System::UnicodeString __fastcall GetGalleryGroupCaption();
	Dxgallery::_di_IdxGalleryGroups __fastcall GetGalleryGroupCollection();
	int __fastcall GetGalleryGroupIndex();
	Dxgallery::_di_IdxGalleryItems __fastcall GetGalleryGroupItems();
	void __fastcall SetGalleryGroupCaption(const System::UnicodeString AValue);
	
protected:
	HIDESBASE virtual void __fastcall Changed();
	virtual void __fastcall ChangeScale(int M, int D);
	virtual TdxWheelPickerItems* __fastcall CreateItems();
	virtual TdxWheelPickerWheels* __fastcall GetCollection();
	virtual int __fastcall GetItemCount();
	__property TdxWheelPickerWheels* Collection = {read=GetCollection};
	
public:
	__fastcall virtual TdxWheelPickerWheel(System::Classes::TCollection* ACollection);
	__fastcall virtual ~TdxWheelPickerWheel();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property int ItemCount = {read=GetItemCount, nodefault};
	
__published:
	__property bool Cyclic = {read=FCyclic, write=SetCyclic, default=0};
	__property TdxWheelPickerItems* Items = {read=FItems, write=SetItems};
	__property NativeInt Tag = {read=FTag, write=FTag, default=0};
	__property int Width = {read=FWidth, write=SetWidth, default=75};
private:
	void *__IdxGalleryGroup;	// Dxgallery::IdxGalleryGroup 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {250CA14D-1229-45EB-938F-E2C6FED13645}
	operator Dxgallery::_di_IdxGalleryGroup()
	{
		Dxgallery::_di_IdxGalleryGroup intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxgallery::IdxGalleryGroup*(void) { return (Dxgallery::IdxGalleryGroup*)&__IdxGalleryGroup; }
	#endif
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxWheelPickerWheels : public Cxclasses::TcxOwnedInterfacedCollection
{
	typedef Cxclasses::TcxOwnedInterfacedCollection inherited;
	
public:
	TdxWheelPickerWheel* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TdxWheelPickerWheel* __fastcall GetItem(int AIndex);
	HIDESBASE void __fastcall SetItem(int Index, TdxWheelPickerWheel* AValue);
	System::TObject* __fastcall GetInstance();
	Dxgallery::_di_IdxGalleryGroup __fastcall AddGalleryGroup();
	int __fastcall GetGalleryGroupCount();
	System::UnicodeString __fastcall GetGalleryGroupDisplayName();
	Dxgallery::_di_IdxGalleryGroup __fastcall GetGalleryGroup(int AIndex);
	Dxgallery::_di_IdxGalleryGroup __fastcall InsertGalleryGroup(int AIndex);
	
protected:
	virtual void __fastcall ChangeScale(int M, int D);
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	HIDESBASE TdxWheelPickerWheel* __fastcall Add();
	__property TdxWheelPickerWheel* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TcxOwnedInterfacedCollection.Destroy */ inline __fastcall virtual ~TdxWheelPickerWheels() { }
	
public:
	/* TOwnedCollection.Create */ inline __fastcall TdxWheelPickerWheels(System::Classes::TPersistent* AOwner, System::Classes::TCollectionItemClass ItemClass) : Cxclasses::TcxOwnedInterfacedCollection(AOwner, ItemClass) { }
	
private:
	void *__IdxGalleryGroups;	// Dxgallery::IdxGalleryGroups 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {C853A9B6-66EF-4397-BEEF-5A5F8CA74EDD}
	operator Dxgallery::_di_IdxGalleryGroups()
	{
		Dxgallery::_di_IdxGalleryGroups intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxgallery::IdxGalleryGroups*(void) { return (Dxgallery::IdxGalleryGroups*)&__IdxGalleryGroups; }
	#endif
	
};


class PASCALIMPLEMENTATION TdxWheelPickerProperties : public TdxCustomWheelPickerProperties
{
	typedef TdxCustomWheelPickerProperties inherited;
	
private:
	bool FLineAutoHeight;
	int FLineHeight;
	bool FWheelAutoWidth;
	TdxWheelPickerWheels* FWheels;
	void __fastcall SetLineAutoHeight(bool AValue);
	void __fastcall SetLineHeight(int AValue);
	void __fastcall SetWheelAutoWidth(bool AValue);
	void __fastcall SetWheels(TdxWheelPickerWheels* AValue);
	
protected:
	virtual System::Variant __fastcall CalculateEditValueByItemIndexes(const TdxWheelPickerItemIndexes AItemIndexes);
	virtual void __fastcall ChangeScale(int M, int D);
	virtual TdxWheelPickerWheels* __fastcall CreateWheels();
	virtual void __fastcall DoAssign(Cxedit::TcxCustomEditProperties* AProperties);
	virtual int __fastcall GetMaxContentItemHeight();
	__classmethod virtual Cxedit::TcxCustomEditViewDataClass __fastcall GetViewDataClass();
	virtual void __fastcall InternalPrepareValue(System::Variant &AEditValue);
	virtual void __fastcall WheelsChanged();
	
public:
	__fastcall virtual TdxWheelPickerProperties(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TdxWheelPickerProperties();
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	__classmethod virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
	virtual void __fastcall PrepareDisplayValue(const System::Variant &AEditValue, System::Variant &DisplayValue, bool AEditFocused);
	
__published:
	__property ClearKey = {default=0};
	__property Images;
	__property ImmediatePost = {default=0};
	__property bool LineAutoHeight = {read=FLineAutoHeight, write=SetLineAutoHeight, default=0};
	__property LineCount = {default=0};
	__property int LineHeight = {read=FLineHeight, write=SetLineHeight, default=20};
	__property bool WheelAutoWidth = {read=FWheelAutoWidth, write=SetWheelAutoWidth, default=0};
	__property TdxWheelPickerWheels* Wheels = {read=FWheels, write=SetWheels};
	__property OnChange;
	__property OnEditValueChanged;
};


class PASCALIMPLEMENTATION TdxWheelPicker : public TdxCustomWheelPicker
{
	typedef TdxCustomWheelPicker inherited;
	
private:
	System::UnicodeString FItemIndex;
	TdxWheelPickerItemIndexes FItemIndexes;
	HIDESBASE TdxWheelPickerProperties* __fastcall GetActiveProperties();
	HIDESBASE TdxWheelPickerProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(TdxWheelPickerProperties* AValue);
	
protected:
	int __fastcall GetItemIndex(int AIndex);
	void __fastcall SetItemIndex(int AIndex, int AItemIndex);
	virtual void __fastcall SynchronizeEditValue();
	Dxgallery::TdxGalleryCustomizationActions __fastcall GetAllowedCustomizationActions();
	Dxgallery::_di_IdxGalleryGroups __fastcall GetGroups();
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TdxWheelPickerProperties* ActiveProperties = {read=GetActiveProperties};
	__property int ItemIndexes[int AIndex] = {read=GetItemIndex, write=SetItemIndex};
	
__published:
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
	__property System::UnicodeString ItemIndex = {read=FItemIndex, write=FItemIndex, stored=false};
	__property PopupMenu;
	__property TdxWheelPickerProperties* Properties = {read=GetProperties, write=SetProperties};
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
	/* TdxCustomWheelPicker.Create */ inline __fastcall virtual TdxWheelPicker(System::Classes::TComponent* AOwner)/* overload */ : TdxCustomWheelPicker(AOwner) { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TdxWheelPicker(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : TdxCustomWheelPicker(AOwner, AIsInplace) { }
	/* TcxCustomEdit.Destroy */ inline __fastcall virtual ~TdxWheelPicker() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxWheelPicker(HWND ParentWindow) : TdxCustomWheelPicker(ParentWindow) { }
	
private:
	void *__IdxGallery;	// Dxgallery::IdxGallery 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B652EE21-71B8-4C82-9D33-BA53365A3627}
	operator Dxgallery::_di_IdxGallery()
	{
		Dxgallery::_di_IdxGallery intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxgallery::IdxGallery*(void) { return (Dxgallery::IdxGallery*)&__IdxGallery; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE int dxWheelPickerItemContentMargin;
}	/* namespace Dxwheelpicker */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXWHEELPICKER)
using namespace Dxwheelpicker;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxwheelpickerHPP
