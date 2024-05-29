// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxCheckBox.pas' rev: 35.00 (Windows)

#ifndef CxcheckboxHPP
#define CxcheckboxHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.Windows.hpp>
#include <System.Types.hpp>
#include <System.Variants.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <System.SysUtils.hpp>
#include <dxCore.hpp>
#include <cxClasses.hpp>
#include <cxContainer.hpp>
#include <cxControls.hpp>
#include <cxDataStorage.hpp>
#include <dxGDIPlusClasses.hpp>
#include <cxGeometry.hpp>
#include <dxDPIAwareUtils.hpp>
#include <cxEdit.hpp>
#include <cxGraphics.hpp>
#include <cxLookAndFeels.hpp>
#include <cxTextEdit.hpp>
#include <cxDropDownEdit.hpp>
#include <cxVariants.hpp>
#include <cxFilterControlUtils.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <dxFading.hpp>
#include <cxAccessibility.hpp>
#include <dxCoreClasses.hpp>
#include <Vcl.ActnList.hpp>
#include <System.Actions.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxcheckbox
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IcxCheckItems;
typedef System::DelphiInterface<IcxCheckItems> _di_IcxCheckItems;
class DELPHICLASS TcxCaptionItem;
class DELPHICLASS TcxCaptionItems;
class DELPHICLASS TcxCustomCheckControlFadingHelper;
class DELPHICLASS TcxCheckBoxFadingHelper;
class DELPHICLASS TcxCustomCheckBoxViewInfo;
class DELPHICLASS TcxCustomCheckBoxViewData;
class DELPHICLASS TcxCheckBoxStyle;
class DELPHICLASS TcxCustomCheckBoxProperties;
class DELPHICLASS TcxCheckBoxProperties;
class DELPHICLASS TdxCheckBoxAccessibilityHelper;
class DELPHICLASS TcxCustomCheckBox;
class DELPHICLASS TcxCheckBox;
class DELPHICLASS TcxFilterCheckBoxHelper;
class DELPHICLASS TcxCheckBoxActionLink;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TcxCheckBoxNullValueShowingStyle : unsigned char { nssUnchecked, nssInactive, nssGrayedChecked };

enum DECLSPEC_DENUM TcxCheckStatesValueFormatEx : unsigned char { cvfCaptions, cvfIndices, cvfInteger, cvfStatesString, cvfCustom };

typedef TcxCheckStatesValueFormatEx TcxCheckStatesValueFormat;

typedef System::DynamicArray<Cxlookandfeelpainters::TcxCheckBoxState> TcxCheckStates;

typedef Cxedit::TcxEditBorderStyle TcxEditCheckBoxBorderStyle;

typedef void __fastcall (__closure *TcxCheckStatesToValueEvent)(System::TObject* Sender, const TcxCheckStates ACheckStates, /* out */ System::Variant &AValue);

typedef void __fastcall (__closure *TcxValueToCheckStatesEvent)(System::TObject* Sender, const System::Variant &AValue, TcxCheckStates &ACheckStates);

__interface  INTERFACE_UUID("{5BF13228-CF05-4741-9833-F2B8FBFD57ED}") IcxCheckItems  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetCaption(int Index) = 0 ;
	virtual int __fastcall GetCount() = 0 ;
	__property System::UnicodeString Captions[int Index] = {read=GetCaption};
	__property int Count = {read=GetCount};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCaptionItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	Vcl::Controls::TCaption FCaption;
	NativeInt FTag;
	bool __fastcall IsTagStored();
	void __fastcall SetCaption(Vcl::Controls::TCaption AValue);
	
protected:
	__property Vcl::Controls::TCaption Caption = {read=FCaption, write=SetCaption};
	__property NativeInt Tag = {read=FTag, write=FTag, stored=IsTagStored, nodefault};
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
public:
	/* TCollectionItem.Create */ inline __fastcall virtual TcxCaptionItem(System::Classes::TCollection* Collection) : System::Classes::TCollectionItem(Collection) { }
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TcxCaptionItem() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxCaptionItems : public Cxclasses::TcxOwnedInterfacedCollection
{
	typedef Cxclasses::TcxOwnedInterfacedCollection inherited;
	
public:
	TcxCaptionItem* operator[](int AIndex) { return this->Items[AIndex]; }
	
private:
	HIDESBASE TcxCaptionItem* __fastcall GetItem(int AIndex);
	HIDESBASE void __fastcall SetItem(int AIndex, TcxCaptionItem* AValue);
	
protected:
	virtual int __fastcall DoCompareItems(Cxclasses::TcxInterfacedCollectionItem* AItem1, Cxclasses::TcxInterfacedCollectionItem* AItem2);
	System::UnicodeString __fastcall GetCaption(int AIndex);
	HIDESBASE int __fastcall GetCount();
	
public:
	__property TcxCaptionItem* Items[int AIndex] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TcxOwnedInterfacedCollection.Destroy */ inline __fastcall virtual ~TcxCaptionItems() { }
	
public:
	/* TOwnedCollection.Create */ inline __fastcall TcxCaptionItems(System::Classes::TPersistent* AOwner, System::Classes::TCollectionItemClass ItemClass) : Cxclasses::TcxOwnedInterfacedCollection(AOwner, ItemClass) { }
	
private:
	void *__IcxCheckItems;	// IcxCheckItems 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {5BF13228-CF05-4741-9833-F2B8FBFD57ED}
	operator _di_IcxCheckItems()
	{
		_di_IcxCheckItems intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IcxCheckItems*(void) { return (IcxCheckItems*)&__IcxCheckItems; }
	#endif
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomCheckControlFadingHelper : public Cxedit::TcxCustomEditFadingHelper
{
	typedef Cxedit::TcxCustomEditFadingHelper inherited;
	
private:
	TcxCustomCheckBoxViewInfo* FViewInfo;
	Cxlookandfeelpainters::TcxEditCheckState FState;
	
protected:
	virtual bool __fastcall CanFade();
	virtual Cxedit::TcxCustomEditViewInfo* __fastcall GetEditViewInfo();
	
public:
	__fastcall virtual TcxCustomCheckControlFadingHelper(TcxCustomCheckBoxViewInfo* AViewInfo);
	void __fastcall UpdateState();
	__property Cxlookandfeelpainters::TcxEditCheckState State = {read=FState, nodefault};
	__property TcxCustomCheckBoxViewInfo* ViewInfo = {read=FViewInfo};
public:
	/* TdxFadingObjectHelper.Destroy */ inline __fastcall virtual ~TcxCustomCheckControlFadingHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCheckBoxFadingHelper : public TcxCustomCheckControlFadingHelper
{
	typedef TcxCustomCheckControlFadingHelper inherited;
	
protected:
	virtual void __fastcall GetFadingImages(/* out */ Cxgraphics::TcxBitmap* &AFadeOutImage, /* out */ Cxgraphics::TcxBitmap* &AFadeInImage);
	
public:
	virtual void __fastcall Invalidate()/* overload */;
public:
	/* TcxCustomCheckControlFadingHelper.Create */ inline __fastcall virtual TcxCheckBoxFadingHelper(TcxCustomCheckBoxViewInfo* AViewInfo) : TcxCustomCheckControlFadingHelper(AViewInfo) { }
	
public:
	/* TdxFadingObjectHelper.Destroy */ inline __fastcall virtual ~TcxCheckBoxFadingHelper() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Invalidate(const System::Types::TRect &R, bool AEraseBackground){ Cxedit::TcxCustomEditFadingHelper::Invalidate(R, AEraseBackground); }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCheckControlFadingHelperClass;

class PASCALIMPLEMENTATION TcxCustomCheckBoxViewInfo : public Cxedit::TcxCustomEditViewInfo
{
	typedef Cxedit::TcxCustomEditViewInfo inherited;
	
private:
	TcxCustomCheckBox* __fastcall GetEdit();
	
protected:
	System::Types::TRect __fastcall CalculateTextRect();
	virtual TcxCheckControlFadingHelperClass __fastcall GetCheckControlFadingHelperClass();
	virtual System::Uitypes::TColor __fastcall GetSkinnedTextColor(Cxlookandfeelpainters::TcxEditStateColorKind AKind);
	virtual void __fastcall InternalPaint(Cxgraphics::TcxCanvas* ACanvas);
	bool __fastcall IsCaptionVisible();
	bool __fastcall IsTextEnabled();
	virtual void __fastcall StoreLastState();
	__classmethod virtual bool __fastcall IsOldStyleSupported();
	__classmethod virtual System::Types::TRect __fastcall GetContentOffset(bool AIsInplace, bool AIsCaptionVisible, System::Classes::TLeftRight AItemAlignment, Cxgeometry::TdxScaleFactor* AScaleFactor);
	__classmethod virtual int __fastcall GetTextGap(bool AIsInplace, bool ANativeStyle, Cxgeometry::TdxScaleFactor* AScaleFactor);
	__classmethod System::Types::TRect __fastcall GetTextRect(const System::Types::TRect &ABounds, const System::Types::TRect &ACheckBoxRect, System::Classes::TAlignment AItemAlignment, bool AIsCaptionVisible, bool AIsInplace, bool ANativeStyle, Vcl::Graphics::TFont* AFont, Cxgeometry::TdxScaleFactor* AScaleFactor);
	
public:
	System::Classes::TAlignment Alignment;
	int CheckBorderOffset;
	Cxedit::TcxEditBorderStyle CheckBoxBorderStyle;
	Dxgdiplusclasses::TdxSmartGlyph* CheckBoxGlyph;
	int CheckBoxGlyphCount;
	Cxlookandfeelpainters::TcxEditCheckState CheckBoxLastState;
	System::Types::TRect CheckBoxRect;
	System::Types::TSize CheckBoxSize;
	Cxlookandfeelpainters::TcxEditCheckState CheckBoxState;
	int DrawCaptionFlags;
	TcxCustomCheckControlFadingHelper* FadingHelper;
	System::Types::TRect FocusRect;
	bool HasGlyph;
	bool IsTextColorAssigned;
	TcxCheckBoxNullValueShowingStyle NullValueShowingStyle;
	Cxlookandfeelpainters::TcxCheckBoxState State;
	System::UnicodeString Text;
	System::Types::TRect TextRect;
	unsigned DrawTextFlags;
	__fastcall virtual TcxCustomCheckBoxViewInfo();
	__fastcall virtual ~TcxCustomCheckBoxViewInfo();
	virtual void __fastcall Assign(System::TObject* Source);
	virtual Cxgraphics::TcxRegion* __fastcall GetUpdateRegion(Cxcontainer::TcxContainerViewInfo* AViewInfo);
	virtual bool __fastcall IsHotTrack()/* overload */;
	virtual bool __fastcall IsHotTrack(const System::Types::TPoint &P)/* overload */;
	virtual bool __fastcall NeedShowHint(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TPoint &P, const System::Types::TRect &AVisibleBounds, /* out */ Vcl::Controls::TCaption &AText, /* out */ bool &AIsMultiLine, /* out */ System::Types::TRect &ATextRect, int AMaxLineCount = 0x0);
	virtual void __fastcall Offset(int DX, int DY);
	virtual bool __fastcall Repaint(Vcl::Controls::TWinControl* AControl, const System::Types::TRect &AInnerEditRect, Cxcontainer::TcxContainerViewInfo* AViewInfo = (Cxcontainer::TcxContainerViewInfo*)(0x0))/* overload */;
	__property TcxCustomCheckBox* Edit = {read=GetEdit};
	/* Hoisted overloads: */
	
public:
	inline bool __fastcall  Repaint(Vcl::Controls::TWinControl* AControl, Cxcontainer::TcxContainerViewInfo* AViewInfo = (Cxcontainer::TcxContainerViewInfo*)(0x0)){ return Cxedit::TcxCustomEditViewInfo::Repaint(AControl, AViewInfo); }
	
};


class PASCALIMPLEMENTATION TcxCustomCheckBoxViewData : public Cxedit::TcxCustomEditViewData
{
	typedef Cxedit::TcxCustomEditViewData inherited;
	
private:
	System::Classes::TAlignment FAlignment;
	System::Classes::TAlignment __fastcall GetBiDiModeDependedAlignment();
	TcxCustomCheckBoxProperties* __fastcall GetProperties();
	int __fastcall GetTextFlags(bool ADraw);
	
protected:
	virtual System::Types::TSize __fastcall InternalGetEditConstantPartSize(Cxgraphics::TcxCanvas* ACanvas, bool AIsInplace, const Cxedit::TcxEditSizeProperties &AEditSizeProperties, System::Types::TSize &MinContentSize, Cxedit::TcxCustomEditViewInfo* AViewInfo);
	virtual void __fastcall Initialize();
	int __fastcall GetCalculateTextFlags();
	virtual int __fastcall GetDrawTextFlags();
	bool __fastcall IsCheckPressed();
	virtual System::Types::TRect __fastcall CalculateCheckBoxRect(TcxCustomCheckBoxViewInfo* AViewInfo);
	virtual Cxlookandfeelpainters::TcxEditCheckState __fastcall CalculateCheckBoxState(TcxCustomCheckBoxViewInfo* AViewInfo, const System::Types::TPoint &P, Cxcontainer::TcxMouseButton AButton, System::Classes::TShiftState AShift);
	virtual void __fastcall CalculateFocusRect(TcxCustomCheckBoxViewInfo* AViewInfo);
	virtual System::Types::TRect __fastcall CalculateTextRect(TcxCustomCheckBoxViewInfo* AViewInfo);
	__property System::Classes::TAlignment Alignment = {read=FAlignment, nodefault};
	__property System::Classes::TAlignment BiDiModeDependedAlignment = {read=GetBiDiModeDependedAlignment, nodefault};
	
public:
	virtual void __fastcall Calculate(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TPoint &P, Cxcontainer::TcxMouseButton Button, System::Classes::TShiftState Shift, Cxedit::TcxCustomEditViewInfo* AViewInfo, bool AIsMouseEvent);
	virtual void __fastcall EditValueToDrawValue(const System::Variant &AEditValue, Cxedit::TcxCustomEditViewInfo* AViewInfo);
	virtual Cxedit::TcxEditBorderStyle __fastcall GetBorderStyle();
	virtual int __fastcall GetTextGap(bool AIsInplace, bool ANativeStyle, Cxgeometry::TdxScaleFactor* AScaleFactor);
	virtual System::Types::TRect __fastcall GetContentOffset(bool AIsCaptionVisible);
	virtual System::Types::TSize __fastcall GetEditContentSize(Cxgraphics::TcxCanvas* ACanvas, const System::Variant &AEditValue, const Cxedit::TcxEditSizeProperties &AEditSizeProperties, Cxedit::TcxEditValidateInfo* AErrorData = (Cxedit::TcxEditValidateInfo*)(0x0));
	__property TcxCustomCheckBoxProperties* Properties = {read=GetProperties};
public:
	/* TcxCustomEditViewData.Create */ inline __fastcall virtual TcxCustomCheckBoxViewData(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditStyle* AStyle, bool AIsInplace) : Cxedit::TcxCustomEditViewData(AProperties, AStyle, AIsInplace) { }
	/* TcxCustomEditViewData.Destroy */ inline __fastcall virtual ~TcxCustomCheckBoxViewData() { }
	
};


class PASCALIMPLEMENTATION TcxCheckBoxStyle : public Cxedit::TcxEditStyle
{
	typedef Cxedit::TcxEditStyle inherited;
	
public:
	virtual bool __fastcall HasBorder();
public:
	/* TcxCustomEditStyle.Create */ inline __fastcall virtual TcxCheckBoxStyle(System::Classes::TPersistent* AOwner, bool ADirectAccessMode, Cxcontainer::TcxContainerStyle* AParentStyle, Cxcontainer::TcxContainerStateItem AState) : Cxedit::TcxEditStyle(AOwner, ADirectAccessMode, AParentStyle, AState) { }
	
public:
	/* TcxContainerStyle.Destroy */ inline __fastcall virtual ~TcxCheckBoxStyle() { }
	
};


class PASCALIMPLEMENTATION TcxCustomCheckBoxProperties : public Cxedit::TcxCustomEditProperties
{
	typedef Cxedit::TcxCustomEditProperties inherited;
	
	
private:
	typedef System::StaticArray<System::WideString, 3> _TcxCustomCheckBoxProperties__1;
	
	
private:
	bool FAllowGrayed;
	Vcl::Controls::TCaption FCaption;
	_TcxCustomCheckBoxProperties__1 FDisplayCheckState;
	bool FFullFocusRect;
	Dxgdiplusclasses::TdxSmartGlyph* FGlyph;
	int FGlyphCount;
	bool FIsCaptionAssigned;
	System::StaticArray<bool, 3> FIsDisplayCheckStateAssigned;
	bool FMultiLine;
	TcxCheckBoxNullValueShowingStyle FNullStyle;
	bool FShowEndEllipsis;
	bool FUseAlignmentWhenInplace;
	System::Variant FValueChecked;
	System::Variant FValueGrayed;
	System::Variant FValueUnchecked;
	System::Classes::TAlignment __fastcall GetAlignment();
	System::UnicodeString __fastcall GetDefaultDisplayCheckState(Cxlookandfeelpainters::TcxCheckBoxState AState);
	System::WideString __fastcall GetDisplayCheckState(const int Index);
	Dxgdiplusclasses::TdxSmartGlyph* __fastcall GetGlyph();
	Cxedit::TcxEditAlignment* __fastcall GetInternalAlignment();
	HIDESBASE bool __fastcall IsAlignmentStored();
	bool __fastcall IsDisplayCheckStateStored(int Index);
	bool __fastcall IsLoading();
	bool __fastcall IsValueCheckedStored();
	bool __fastcall IsValueGrayedStored();
	bool __fastcall IsValueUncheckedStored();
	void __fastcall ReadCaption(System::Classes::TReader* Reader);
	void __fastcall SetAlignment(System::Classes::TAlignment Value);
	void __fastcall SetCaption(const Vcl::Controls::TCaption Value);
	void __fastcall SetDisplayCheckState(const int Index, const System::WideString Value);
	void __fastcall SetFullFocusRect(bool Value);
	void __fastcall SetGlyph(Dxgdiplusclasses::TdxSmartGlyph* Value);
	void __fastcall SetGlyphCount(int Value);
	void __fastcall SetMultiLine(bool Value);
	void __fastcall SetNullStyle(TcxCheckBoxNullValueShowingStyle Value);
	void __fastcall SetShowEndEllipsis(bool Value);
	void __fastcall SetStateValues(const System::Variant &AValueChecked, const System::Variant &AValueGrayed, const System::Variant &AValueUnchecked);
	void __fastcall SetUseAlignmentWhenInplace(bool Value);
	void __fastcall SetValueChecked(const System::Variant &Value);
	void __fastcall SetValueGrayed(const System::Variant &Value);
	void __fastcall SetValueUnchecked(const System::Variant &Value);
	
protected:
	System::UnicodeString __fastcall GetStateCaption(int AIndex);
	int __fastcall GetGlyphCount();
	virtual bool __fastcall CanValidate();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall DoAssign(Cxedit::TcxCustomEditProperties* AProperties);
	__classmethod virtual Cxedit::TcxCustomEditViewDataClass __fastcall GetViewDataClass();
	virtual bool __fastcall HasDisplayValue();
	bool __fastcall CheckValue(const System::Variant &AValue);
	Cxlookandfeelpainters::TcxCheckBoxState __fastcall GetState(const System::Variant &AEditValue);
	virtual Dxgdiplusclasses::TdxSmartGlyph* __fastcall InternalGetGlyph();
	virtual bool __fastcall IsEmbeddedEdit();
	__property Cxedit::TcxEditAlignment* InternalAlignment = {read=GetInternalAlignment};
	
public:
	__fastcall virtual TcxCustomCheckBoxProperties(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TcxCustomCheckBoxProperties();
	virtual bool __fastcall CanCompareEditValue();
	virtual bool __fastcall CompareDisplayValues(const System::Variant &AEditValue1, const System::Variant &AEditValue2);
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	virtual System::UnicodeString __fastcall GetDisplayText(const System::Variant &AEditValue, bool AFullText = false, bool AIsInplace = true);
	__classmethod virtual Cxedit::TcxCustomEditStyleClass __fastcall GetStyleClass();
	virtual Cxedit::TcxEditSpecialFeatures __fastcall GetSpecialFeatures();
	virtual Cxedit::TcxEditSupportedOperations __fastcall GetSupportedOperations();
	__classmethod virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
	virtual bool __fastcall IsActivationKey(System::WideChar AKey);
	virtual bool __fastcall IsEditValueValid(System::Variant &EditValue, bool AEditFocused);
	virtual bool __fastcall IsResetEditClass();
	virtual void __fastcall PrepareDisplayValue(const System::Variant &AEditValue, System::Variant &DisplayValue, bool AEditFocused);
	__property System::Classes::TAlignment Alignment = {read=GetAlignment, write=SetAlignment, stored=IsAlignmentStored, nodefault};
	__property bool AllowGrayed = {read=FAllowGrayed, write=FAllowGrayed, default=0};
	__property Vcl::Controls::TCaption Caption = {read=FCaption, write=SetCaption, stored=false};
	__property System::WideString DisplayChecked = {read=GetDisplayCheckState, write=SetDisplayCheckState, stored=IsDisplayCheckStateStored, index=1};
	__property System::WideString DisplayGrayed = {read=GetDisplayCheckState, write=SetDisplayCheckState, stored=IsDisplayCheckStateStored, index=2};
	__property System::WideString DisplayUnchecked = {read=GetDisplayCheckState, write=SetDisplayCheckState, stored=IsDisplayCheckStateStored, index=0};
	__property bool FullFocusRect = {read=FFullFocusRect, write=SetFullFocusRect, default=0};
	__property Dxgdiplusclasses::TdxSmartGlyph* Glyph = {read=GetGlyph, write=SetGlyph};
	__property int GlyphCount = {read=FGlyphCount, write=SetGlyphCount, default=6};
	__property bool MultiLine = {read=FMultiLine, write=SetMultiLine, default=0};
	__property TcxCheckBoxNullValueShowingStyle NullStyle = {read=FNullStyle, write=SetNullStyle, default=2};
	__property bool ShowEndEllipsis = {read=FShowEndEllipsis, write=SetShowEndEllipsis, default=0};
	__property bool UseAlignmentWhenInplace = {read=FUseAlignmentWhenInplace, write=SetUseAlignmentWhenInplace, default=0};
	__property System::Variant ValueChecked = {read=FValueChecked, write=SetValueChecked, stored=IsValueCheckedStored};
	__property System::Variant ValueGrayed = {read=FValueGrayed, write=SetValueGrayed, stored=IsValueGrayedStored};
	__property System::Variant ValueUnchecked = {read=FValueUnchecked, write=SetValueUnchecked, stored=IsValueUncheckedStored};
private:
	void *__IdxMultiPartGlyphSupport;	// Cxgraphics::IdxMultiPartGlyphSupport 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {9F33E339-DEDD-422A-9908-5B44FDADEBD9}
	operator Cxgraphics::_di_IdxMultiPartGlyphSupport()
	{
		Cxgraphics::_di_IdxMultiPartGlyphSupport intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxgraphics::IdxMultiPartGlyphSupport*(void) { return (Cxgraphics::IdxMultiPartGlyphSupport*)&__IdxMultiPartGlyphSupport; }
	#endif
	
};


class PASCALIMPLEMENTATION TcxCheckBoxProperties : public TcxCustomCheckBoxProperties
{
	typedef TcxCustomCheckBoxProperties inherited;
	
__published:
	__property Alignment;
	__property AllowGrayed = {default=0};
	__property AssignedValues;
	__property Caption = {default=0};
	__property ClearKey = {default=0};
	__property DisplayChecked = {index=1, default=0};
	__property DisplayUnchecked = {index=0, default=0};
	__property DisplayGrayed = {index=2, default=0};
	__property FullFocusRect = {default=0};
	__property Glyph;
	__property GlyphCount = {default=6};
	__property ImmediatePost = {default=0};
	__property MultiLine = {default=0};
	__property NullStyle = {default=2};
	__property ReadOnly;
	__property ShowEndEllipsis = {default=0};
	__property UseAlignmentWhenInplace = {default=0};
	__property ValidationErrorIconAlignment = {default=0};
	__property ValidationOptions = {default=1};
	__property ValueChecked = {default=0};
	__property ValueGrayed = {default=0};
	__property ValueUnchecked = {default=0};
	__property OnChange;
	__property OnEditValueChanged;
	__property OnValidate;
public:
	/* TcxCustomCheckBoxProperties.Create */ inline __fastcall virtual TcxCheckBoxProperties(System::Classes::TPersistent* AOwner) : TcxCustomCheckBoxProperties(AOwner) { }
	/* TcxCustomCheckBoxProperties.Destroy */ inline __fastcall virtual ~TcxCheckBoxProperties() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCheckBoxAccessibilityHelper : public Cxedit::TdxEditAccessibilityHelper
{
	typedef Cxedit::TdxEditAccessibilityHelper inherited;
	
protected:
	virtual void __fastcall DoDefaultAction(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual System::UnicodeString __fastcall GetDefaultActionDescription(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetRole(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetState(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual Cxaccessibility::TcxAccessibleObjectProperties __fastcall GetSupportedProperties(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
public:
	/* TdxEditAccessibilityHelper.Create */ inline __fastcall virtual TdxCheckBoxAccessibilityHelper(System::TObject* AOwnerObject) : Cxedit::TdxEditAccessibilityHelper(AOwnerObject) { }
	/* TdxEditAccessibilityHelper.Destroy */ inline __fastcall virtual ~TdxCheckBoxAccessibilityHelper() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxCustomCheckBox : public Cxedit::TcxCustomEdit
{
	typedef Cxedit::TcxCustomEdit inherited;
	
private:
	bool FIsCheckPressed;
	bool FIsLoaded;
	bool FIsLoadingStateAssigned;
	Cxlookandfeelpainters::TcxCheckBoxState FLoadingState;
	bool __fastcall GetChecked();
	TcxCustomCheckBoxProperties* __fastcall GetProperties();
	HIDESBASE TcxCustomCheckBoxProperties* __fastcall GetActiveProperties();
	Cxlookandfeelpainters::TcxCheckBoxState __fastcall GetState();
	HIDESBASE TcxCheckBoxStyle* __fastcall GetStyle();
	HIDESBASE TcxCustomCheckBoxViewInfo* __fastcall GetViewInfo();
	bool __fastcall IsStateStored();
	void __fastcall SetChecked(bool Value);
	HIDESBASE void __fastcall SetProperties(TcxCustomCheckBoxProperties* Value);
	void __fastcall SetState(Cxlookandfeelpainters::TcxCheckBoxState Value);
	HIDESBASE void __fastcall SetStyle(TcxCheckBoxStyle* Value);
	HIDESBASE MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMParentColorChanged(Winapi::Messages::TMessage &Message);
	
protected:
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	DYNAMIC Vcl::Controls::TControlActionLinkClass __fastcall GetActionLinkClass();
	virtual void __fastcall Loaded();
	virtual bool __fastcall IsTransparentBackground();
	virtual System::Uitypes::TColor __fastcall GetDefaultSkinnedTextColor(bool AEnabled);
	virtual void __fastcall AcceleratorClick();
	virtual bool __fastcall CanAutoHeight();
	virtual bool __fastcall CanAutoWidth();
	virtual bool __fastcall IsHeightDependOnWidth();
	virtual bool __fastcall CanHaveTransparentBorder();
	virtual bool __fastcall DefaultParentColor();
	virtual void __fastcall DoEditKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall DoEditKeyPress(System::WideChar &Key);
	virtual void __fastcall DoEditKeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall DoExit();
	virtual void __fastcall DoProcessEventsOnViewInfoChanging();
	virtual void __fastcall PopulateSizeProperties(Cxedit::TcxEditSizeProperties &AEditSizeProperties);
	virtual Cxedit::TdxEditAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	virtual Cxlookandfeelpainters::TcxEditStateColorKind __fastcall GetEditStateColorKind();
	virtual System::Variant __fastcall GetDisplayValue();
	virtual System::Types::TRect __fastcall GetShadowBounds();
	virtual void __fastcall Initialize();
	virtual Cxcontainer::TcxContainerStyleValues __fastcall InternalGetNotPublishedStyleValues();
	virtual void __fastcall InternalSetEditValue(const System::Variant &Value, bool AValidateEditValue);
	virtual bool __fastcall IsClickEnabledDuringLoading();
	virtual bool __fastcall IsNativeBackground();
	virtual void __fastcall PropertiesChanged(System::TObject* Sender);
	DYNAMIC void __fastcall TextChanged();
	virtual void __fastcall SetInternalDisplayValue(const System::Variant &Value);
	void __fastcall InvalidateCheckRect();
	virtual void __fastcall Toggle();
	__property Caption = {default=0};
	__property bool Checked = {read=GetChecked, write=SetChecked, nodefault};
	__property TcxCustomCheckBoxViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	virtual void __fastcall Clear();
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	virtual void __fastcall PrepareEditValue(const System::Variant &ADisplayValue, /* out */ System::Variant &EditValue, bool AEditFocused);
	__property TcxCustomCheckBoxProperties* ActiveProperties = {read=GetActiveProperties};
	__property TcxCustomCheckBoxProperties* Properties = {read=GetProperties, write=SetProperties};
	__property Cxlookandfeelpainters::TcxCheckBoxState State = {read=GetState, write=SetState, stored=IsStateStored, default=0};
	__property TcxCheckBoxStyle* Style = {read=GetStyle, write=SetStyle};
	__property Transparent = {default=0};
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxCustomCheckBox(System::Classes::TComponent* AOwner)/* overload */ : Cxedit::TcxCustomEdit(AOwner) { }
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxCustomCheckBox(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Cxedit::TcxCustomEdit(AOwner, AIsInplace) { }
	/* TcxCustomEdit.Destroy */ inline __fastcall virtual ~TcxCustomCheckBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomCheckBox(HWND ParentWindow) : Cxedit::TcxCustomEdit(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxCheckBox : public TcxCustomCheckBox
{
	typedef TcxCustomCheckBox inherited;
	
private:
	HIDESBASE TcxCheckBoxProperties* __fastcall GetActiveProperties();
	HIDESBASE TcxCheckBoxProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(TcxCheckBoxProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TcxCheckBoxProperties* ActiveProperties = {read=GetActiveProperties};
	
__published:
	__property Action;
	__property Anchors = {default=3};
	__property AutoSize = {default=1};
	__property BiDiMode;
	__property Caption = {default=0};
	__property Checked = {stored=false};
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property ParentBackground = {default=1};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property TcxCheckBoxProperties* Properties = {read=GetProperties, write=SetProperties};
	__property ShowHint;
	__property State = {default=0};
	__property Style;
	__property StyleDisabled;
	__property StyleFocused;
	__property StyleHot;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Transparent = {default=0};
	__property Visible = {default=1};
	__property OnClick;
	__property OnContextPopup;
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
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxCheckBox(System::Classes::TComponent* AOwner)/* overload */ : TcxCustomCheckBox(AOwner) { }
	/* TcxCustomEdit.Create */ inline __fastcall virtual TcxCheckBox(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : TcxCustomCheckBox(AOwner, AIsInplace) { }
	/* TcxCustomEdit.Destroy */ inline __fastcall virtual ~TcxCheckBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCheckBox(HWND ParentWindow) : TcxCustomCheckBox(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxFilterCheckBoxHelper : public Cxdropdownedit::TcxFilterComboBoxHelper
{
	typedef Cxdropdownedit::TcxFilterComboBoxHelper inherited;
	
public:
	__classmethod virtual Cxfiltercontrolutils::TcxFilterDataType __fastcall GetFilterDataType(Cxdatastorage::TcxValueTypeClass AValueTypeClass);
	__classmethod virtual void __fastcall GetFilterValue(Cxedit::TcxCustomEdit* AEdit, Cxedit::TcxCustomEditProperties* AEditProperties, System::Variant &V, Vcl::Controls::TCaption &S);
	__classmethod virtual Cxfiltercontrolutils::TcxFilterControlOperators __fastcall GetSupportedFilterOperators(Cxedit::TcxCustomEditProperties* AProperties, Cxdatastorage::TcxValueTypeClass AValueTypeClass, bool AExtendedSet = false);
	__classmethod virtual void __fastcall InitializeProperties(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditProperties* AEditProperties, bool AHasButtons);
	__classmethod virtual void __fastcall SetFilterValue(Cxedit::TcxCustomEdit* AEdit, Cxedit::TcxCustomEditProperties* AEditProperties, const System::Variant &AValue);
	__classmethod virtual bool __fastcall UseDisplayValue();
public:
	/* TObject.Create */ inline __fastcall TcxFilterCheckBoxHelper() : Cxdropdownedit::TcxFilterComboBoxHelper() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxFilterCheckBoxHelper() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxCheckBoxActionLink : public Vcl::Controls::TWinControlActionLink
{
	typedef Vcl::Controls::TWinControlActionLink inherited;
	
protected:
	TcxCustomCheckBox* FClient;
	virtual void __fastcall AssignClient(System::TObject* AClient);
	virtual bool __fastcall IsCheckedLinked();
	virtual void __fastcall SetChecked(bool Value);
	void __fastcall InternalSetChecked(bool Value);
	virtual void __fastcall SetHint(const System::UnicodeString Value);
public:
	/* TBasicActionLink.Create */ inline __fastcall virtual TcxCheckBoxActionLink(System::TObject* AClient) : Vcl::Controls::TWinControlActionLink(AClient) { }
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TcxCheckBoxActionLink() { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const int cxEditCheckBoxSingleBorderDefaultColor = int(-16777200);
extern DELPHI_PACKAGE System::Variant __fastcall CalculateCheckStatesValue(const TcxCheckStates ACheckStates, _di_IcxCheckItems AItems, TcxCheckStatesValueFormat AValueFormat);
extern DELPHI_PACKAGE bool __fastcall CalculateCheckStates(const System::Variant &AValue, _di_IcxCheckItems AItems, TcxCheckStatesValueFormat AValueFormat, TcxCheckStates &ACheckStates);
extern DELPHI_PACKAGE void __fastcall DrawCheckBoxText(Cxgraphics::TcxCanvas* ACanvas, System::UnicodeString AText, Vcl::Graphics::TFont* AFont, System::Uitypes::TColor ATextColor, const System::Types::TRect &ATextRect, int ADrawTextFlags, bool AEnabled, bool APaintOnGlass = false);
extern DELPHI_PACKAGE void __fastcall DrawScaledEditCheck(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ACheckRect, Cxlookandfeelpainters::TcxEditCheckState ACheckState, TcxCustomCheckBoxViewInfo* AViewInfo, Cxgeometry::TdxScaleFactor* AScaleFactor)/* overload */;
extern DELPHI_PACKAGE void __fastcall DrawEditCheck(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ACheckRect, Cxlookandfeelpainters::TcxEditCheckState ACheckState, TcxCustomCheckBoxViewInfo* AViewInfo)/* overload */;
extern DELPHI_PACKAGE void __fastcall DrawScaledEditCheck(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ACheckRect, Cxlookandfeelpainters::TcxCheckBoxState AState, Cxlookandfeelpainters::TcxEditCheckState ACheckState, Dxgdiplusclasses::TdxSmartGlyph* AGlyph, int AGlyphCount, Cxedit::TcxEditBorderStyle ABorderStyle, bool ANativeStyle, System::Uitypes::TColor ABorderColor, System::Uitypes::TColor ABackgroundColor, bool ADrawBackground, bool AIsDesigning, bool AFocused, bool ASupportGrayed, Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* APainter, Cxgeometry::TdxScaleFactor* AScaleFactor, TcxCheckBoxNullValueShowingStyle AGrayedShowingStyle = (TcxCheckBoxNullValueShowingStyle)(0x2))/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetCheckBoxStateCaptionByGlyphIndex(int AIndex);
extern DELPHI_PACKAGE void __fastcall DrawEditCheck(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ACheckRect, Cxlookandfeelpainters::TcxCheckBoxState AState, Cxlookandfeelpainters::TcxEditCheckState ACheckState, Dxgdiplusclasses::TdxSmartGlyph* AGlyph, int AGlyphCount, Cxedit::TcxEditBorderStyle ABorderStyle, bool ANativeStyle, System::Uitypes::TColor ABorderColor, System::Uitypes::TColor ABackgroundColor, bool ADrawBackground, bool AIsDesigning, bool AFocused, bool ASupportGrayed, Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* APainter, TcxCheckBoxNullValueShowingStyle AGrayedShowingStyle = (TcxCheckBoxNullValueShowingStyle)(0x2))/* overload */;
extern DELPHI_PACKAGE int __fastcall GetEditCheckBorderOffset(Cxlookandfeelpainters::TcxContainerBorderStyle ACheckBorderStyle, bool ANativeStyle, bool AHasGlyph, Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* APainter)/* overload */;
extern DELPHI_PACKAGE int __fastcall GetEditCheckBorderOffset(Cxedit::TcxEditBorderStyle ACheckBorderStyle, bool ANativeStyle, bool AHasGlyph, Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* APainter)/* overload */;
extern DELPHI_PACKAGE int __fastcall GetEditCheckBorderOffset(Cxlookandfeels::TcxLookAndFeelKind ALookAndFeelKind, bool ANativeStyle, bool AHasGlyph, Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* APainter)/* overload */;
extern DELPHI_PACKAGE int __fastcall GetEditCheckGlyphIndex(Cxlookandfeelpainters::TcxCheckBoxState AState, Cxlookandfeelpainters::TcxEditCheckState ACheckState, bool ASupportGrayed, int AGlyphCount);
extern DELPHI_PACKAGE System::Types::TSize __fastcall GetScaledEditCheckSize(Cxgraphics::TcxCanvas* ACanvas, bool ANativeStyle, Dxgdiplusclasses::TdxSmartGlyph* AGlyph, int AGlyphCount, Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* APainter, Cxgeometry::TdxScaleFactor* AScaleFactor)/* overload */;
extern DELPHI_PACKAGE System::Types::TSize __fastcall GetEditCheckSize(Cxgraphics::TcxCanvas* ACanvas, bool ANativeStyle, Dxgdiplusclasses::TdxSmartGlyph* AGlyph, int AGlyphCount, Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* APainter)/* overload */;
}	/* namespace Cxcheckbox */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXCHECKBOX)
using namespace Cxcheckbox;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxcheckboxHPP
