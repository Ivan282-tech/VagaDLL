// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxTokenEdit.pas' rev: 35.00 (Windows)

#ifndef DxtokeneditHPP
#define DxtokeneditHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Types.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <System.Math.hpp>
#include <System.Variants.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.ImgList.hpp>
#include <dxCore.hpp>
#include <dxCoreGraphics.hpp>
#include <dxCoreClasses.hpp>
#include <cxClasses.hpp>
#include <cxControls.hpp>
#include <cxGraphics.hpp>
#include <cxGeometry.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxContainer.hpp>
#include <cxEdit.hpp>
#include <cxTextEdit.hpp>
#include <cxGroupBox.hpp>
#include <dxAutoCompleteWindow.hpp>
#include <dxFading.hpp>
#include <dxSmartImage.hpp>
#include <dxGDIPlusClasses.hpp>
#include <cxListBox.hpp>
#include <cxDataUtils.hpp>
#include <cxAccessibility.hpp>
#include <System.UITypes.hpp>
#include <cxCheckBox.hpp>
#include <dxForms.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxtokenedit
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IdxInnerTokenEdit;
typedef System::DelphiInterface<IdxInnerTokenEdit> _di_IdxInnerTokenEdit;
class DELPHICLASS TdxTokenEditToken;
class DELPHICLASS TdxTokenEditTokens;
class DELPHICLASS TdxTokenEditPropertiesOptionsLookup;
class DELPHICLASS TdxTokenEditProperties;
class DELPHICLASS TdxTokenEditViewData;
class DELPHICLASS TdxTokenEditHitTest;
class DELPHICLASS TdxTokenEditCustomTokenAccessibilityHelper;
class DELPHICLASS TdxTokenEditCustomTokenViewInfo;
class DELPHICLASS TdxTokenEditTokenAccessibilityHelper;
class DELPHICLASS TdxTokenEditTokenViewInfo;
class DELPHICLASS TdxTokenEditTokenViewInfoList;
class DELPHICLASS TdxTokenEditMoreTokensViewInfo;
class DELPHICLASS TdxTokenEditViewInfo;
class DELPHICLASS TdxTokenEditController;
class DELPHICLASS TdxTokenEditInnerEdit;
class DELPHICLASS TdxTokenEditInnerEditHelper;
class DELPHICLASS TdxTokenEditAutoCompleteListBox;
class DELPHICLASS TdxTokenEditAutoCompleteWindow;
class DELPHICLASS TdxTokenEditAccessibilityHelper;
class DELPHICLASS TdxCustomTokenEdit;
class DELPHICLASS TdxTokenEdit;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{794E90E0-9825-4BD0-9FAF-C44A032507D7}") IdxInnerTokenEdit  : public Cxtextedit::IcxInnerTextEdit 
{
	virtual void __fastcall LockChanges(bool ALock) = 0 ;
	virtual void __fastcall PostToken() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTokenEditToken : public Cxgroupbox::TcxButtonGroupItem
{
	typedef Cxgroupbox::TcxButtonGroupItem inherited;
	
private:
	Dxgdiplusclasses::TdxSmartGlyph* FGlyph;
	System::UnicodeString FHint;
	System::Uitypes::TImageIndex FImageIndex;
	System::UnicodeString FText;
	System::UnicodeString __fastcall GetDisplayText();
	void __fastcall SetDisplayText(const System::UnicodeString Value);
	void __fastcall SetGlyph(Dxgdiplusclasses::TdxSmartGlyph* const Value);
	void __fastcall SetHint(const System::UnicodeString Value);
	void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value);
	void __fastcall SetText(const System::UnicodeString Value);
	
protected:
	HIDESBASE virtual void __fastcall Changed();
	virtual System::UnicodeString __fastcall GetDisplayName();
	virtual void __fastcall GlyphChangeHandler(System::TObject* Sender);
	
public:
	__fastcall virtual TdxTokenEditToken(System::Classes::TCollection* Collection);
	__fastcall virtual ~TdxTokenEditToken();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property System::UnicodeString DisplayText = {read=GetDisplayText, write=SetDisplayText};
	__property Dxgdiplusclasses::TdxSmartGlyph* Glyph = {read=FGlyph, write=SetGlyph};
	__property System::UnicodeString Hint = {read=FHint, write=SetHint};
	__property System::Uitypes::TImageIndex ImageIndex = {read=FImageIndex, write=SetImageIndex, default=-1};
	__property System::UnicodeString Text = {read=FText, write=SetText};
	__property Tag;
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxTokenEditTokens : public Cxgroupbox::TcxButtonGroupItems
{
	typedef Cxgroupbox::TcxButtonGroupItems inherited;
	
public:
	TdxTokenEditToken* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TdxTokenEditToken* __fastcall GetItem(int AIndex);
	HIDESBASE void __fastcall SetItem(int AIndex, TdxTokenEditToken* const AValue);
	
public:
	HIDESBASE TdxTokenEditToken* __fastcall Add()/* overload */;
	HIDESBASE TdxTokenEditToken* __fastcall Add(const System::UnicodeString AText, const System::UnicodeString ADisplayText = System::UnicodeString(), const System::UnicodeString AHint = System::UnicodeString(), Dxgdiplusclasses::TdxSmartGlyph* AGlyph = (Dxgdiplusclasses::TdxSmartGlyph*)(0x0), System::Uitypes::TImageIndex AImageIndex = (System::Uitypes::TImageIndex)(0xffffffff))/* overload */;
	TdxTokenEditToken* __fastcall FindByDisplayText(const System::UnicodeString AText);
	TdxTokenEditToken* __fastcall FindByText(const System::UnicodeString AText);
	__property TdxTokenEditToken* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TcxOwnedInterfacedCollection.Destroy */ inline __fastcall virtual ~TdxTokenEditTokens() { }
	
public:
	/* TOwnedCollection.Create */ inline __fastcall TdxTokenEditTokens(System::Classes::TPersistent* AOwner, System::Classes::TCollectionItemClass ItemClass) : Cxgroupbox::TcxButtonGroupItems(AOwner, ItemClass) { }
	
};


enum DECLSPEC_DENUM TdxTokenEditLookupFilterMode : unsigned char { tefmStartsWith, tefmContains };

enum DECLSPEC_DENUM TdxTokenEditLookupFilterSource : unsigned char { tefsText, tefsDisplayText };

typedef System::Set<TdxTokenEditLookupFilterSource, TdxTokenEditLookupFilterSource::tefsText, TdxTokenEditLookupFilterSource::tefsDisplayText> TdxTokenEditLookupFilterSources;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTokenEditPropertiesOptionsLookup : public Dxcoreclasses::TcxOwnedPersistent
{
	typedef Dxcoreclasses::TcxOwnedPersistent inherited;
	
private:
	bool FActive;
	int FDropDownRows;
	TdxTokenEditLookupFilterMode FFilterMode;
	TdxTokenEditLookupFilterSources FFilterSources;
	System::UnicodeString FDisplayMask;
	bool FSorted;
	void __fastcall SetActive(const bool Value);
	void __fastcall SetDropDownRows(int AValue);
	void __fastcall SetFilterMode(TdxTokenEditLookupFilterMode AValue);
	void __fastcall SetFilterSources(TdxTokenEditLookupFilterSources AValue);
	void __fastcall SetDisplayMask(const System::UnicodeString AValue);
	void __fastcall SetSorted(const bool Value);
	
protected:
	void __fastcall Changed();
	virtual void __fastcall DoAssign(System::Classes::TPersistent* Source);
	
public:
	__fastcall virtual TdxTokenEditPropertiesOptionsLookup(System::Classes::TPersistent* AOwner);
	
__published:
	__property bool Active = {read=FActive, write=SetActive, default=1};
	__property int DropDownRows = {read=FDropDownRows, write=SetDropDownRows, default=10};
	__property TdxTokenEditLookupFilterMode FilterMode = {read=FFilterMode, write=SetFilterMode, default=1};
	__property TdxTokenEditLookupFilterSources FilterSources = {read=FFilterSources, write=SetFilterSources, default=3};
	__property System::UnicodeString DisplayMask = {read=FDisplayMask, write=SetDisplayMask};
	__property bool Sorted = {read=FSorted, write=SetSorted, default=1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxTokenEditPropertiesOptionsLookup() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TdxTokenEditElementPosition : unsigned char { teepNone, teepLeft, teepRight };

typedef void __fastcall (__closure *TdxTokenEditCustomDrawTokenEvent)(System::TObject* Sender, Cxgraphics::TcxCanvas* ACanvas, TdxTokenEditCustomTokenViewInfo* AViewInfo, bool &AHandled);

typedef void __fastcall (__closure *TdxTokenEditTokenClickEvent)(System::TObject* Sender, const System::UnicodeString ATokenText, TdxTokenEditToken* AToken);

typedef void __fastcall (__closure *TdxTokenEditTokenCollectionChangingEvent)(System::TObject* Sender, const System::UnicodeString ATokenText, TdxTokenEditToken* AToken, bool &AAllow);

class PASCALIMPLEMENTATION TdxTokenEditProperties : public Cxtextedit::TcxCustomTextEditProperties
{
	typedef Cxtextedit::TcxCustomTextEditProperties inherited;
	
private:
	bool FAllowAddCustomTokens;
	TdxTokenEditElementPosition FCloseGlyphPosition;
	System::WideChar FEditValueDelimiter;
	int FFirstInvalidTokenIndex;
	TdxTokenEditElementPosition FGlyphPosition;
	System::UnicodeString FInputDelimiters;
	TdxTokenEditPropertiesOptionsLookup* FLookup;
	int FMaxLineCount;
	bool FPostEditValueOnFocusLeave;
	TdxTokenEditTokens* FTokens;
	TdxTokenEditCustomDrawTokenEvent FOnCustomDrawToken;
	TdxTokenEditTokenCollectionChangingEvent FOnTokenAdd;
	TdxTokenEditTokenClickEvent FOnTokenClick;
	TdxTokenEditTokenCollectionChangingEvent FOnTokenDelete;
	TdxTokenEditTokenClickEvent FOnTokenGlyphClick;
	bool __fastcall IsInputDelimitersStored();
	void __fastcall SetAllowAddCustomTokens(bool AValue);
	void __fastcall SetCloseGlyphPosition(const TdxTokenEditElementPosition AValue);
	void __fastcall SetEditValueDelimiter(const System::WideChar AValue);
	void __fastcall SetGlyphPosition(const TdxTokenEditElementPosition AValue);
	void __fastcall SetInputDelimiters(const System::UnicodeString Value);
	void __fastcall SetLookup(TdxTokenEditPropertiesOptionsLookup* AValue);
	void __fastcall SetMaxLineCount(int AValue);
	void __fastcall SetPostEditValueOnFocusLeave(const bool AValue);
	void __fastcall SetTokens(TdxTokenEditTokens* AValue);
	void __fastcall TokensChanged(System::TObject* Sender, System::Classes::TCollectionItem* AToken);
	
protected:
	virtual TdxTokenEditTokens* __fastcall CreateTokens();
	virtual void __fastcall DoAssign(Cxedit::TcxCustomEditProperties* AProperties);
	virtual System::Classes::TStrings* __fastcall EditValueToTokens(const System::UnicodeString AString, const System::UnicodeString ADelimiters)/* overload */;
	__classmethod virtual Cxedit::TcxCustomEditViewDataClass __fastcall GetViewDataClass();
	virtual void __fastcall ValidateTokens(System::Classes::TStrings* ATokens);
	virtual bool __fastcall UseLookupData();
	__property int FirstInvalidTokenIndex = {read=FFirstInvalidTokenIndex, nodefault};
	
public:
	__fastcall virtual TdxTokenEditProperties(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TdxTokenEditProperties();
	System::Classes::TStrings* __fastcall EditValueToTokens(const System::Variant &AEditValue)/* overload */;
	__classmethod virtual Cxcontainer::TcxContainerClass __fastcall GetContainerClass();
	__classmethod virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
	virtual Cxdatautils::TcxDataEditValueSource __fastcall GetEditValueSource(bool AEditFocused);
	virtual Cxedit::TcxEditSpecialFeatures __fastcall GetSpecialFeatures();
	virtual Cxedit::TcxEditSupportedOperations __fastcall GetSupportedOperations();
	virtual bool __fastcall IsResetEditClass();
	virtual void __fastcall PrepareDisplayValue(const System::Variant &AEditValue, System::Variant &DisplayValue, bool AEditFocused);
	virtual System::Variant __fastcall TokensToEditValue(System::Classes::TStrings* const ATokens);
	virtual void __fastcall ValidateDisplayValue(System::Variant &ADisplayValue, Vcl::Controls::TCaption &AErrorText, bool &AError, Cxedit::TcxCustomEdit* AEdit);
	
__published:
	__property bool AllowAddCustomTokens = {read=FAllowAddCustomTokens, write=SetAllowAddCustomTokens, default=1};
	__property AssignedValues;
	__property ClearKey = {default=0};
	__property TdxTokenEditElementPosition CloseGlyphPosition = {read=FCloseGlyphPosition, write=SetCloseGlyphPosition, default=2};
	__property System::WideChar EditValueDelimiter = {read=FEditValueDelimiter, write=SetEditValueDelimiter, default=59};
	__property TdxTokenEditElementPosition GlyphPosition = {read=FGlyphPosition, write=SetGlyphPosition, default=1};
	__property Images;
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property ImmediatePost = {default=0};
	__property System::UnicodeString InputDelimiters = {read=FInputDelimiters, write=SetInputDelimiters, stored=IsInputDelimitersStored};
	__property TdxTokenEditPropertiesOptionsLookup* Lookup = {read=FLookup, write=SetLookup};
	__property MaxLength;
	__property int MaxLineCount = {read=FMaxLineCount, write=SetMaxLineCount, default=0};
	__property bool PostEditValueOnFocusLeave = {read=FPostEditValueOnFocusLeave, write=SetPostEditValueOnFocusLeave, default=0};
	__property ReadOnly;
	__property TdxTokenEditTokens* Tokens = {read=FTokens, write=SetTokens};
	__property ValidateOnEnter = {default=0};
	__property ValidationErrorIconAlignment = {default=0};
	__property ValidationOptions = {default=1};
	__property OnChange;
	__property OnEditValueChanged;
	__property TdxTokenEditCustomDrawTokenEvent OnCustomDrawToken = {read=FOnCustomDrawToken, write=FOnCustomDrawToken};
	__property TdxTokenEditTokenCollectionChangingEvent OnTokenAdd = {read=FOnTokenAdd, write=FOnTokenAdd};
	__property TdxTokenEditTokenClickEvent OnTokenClick = {read=FOnTokenClick, write=FOnTokenClick};
	__property TdxTokenEditTokenCollectionChangingEvent OnTokenDelete = {read=FOnTokenDelete, write=FOnTokenDelete};
	__property TdxTokenEditTokenClickEvent OnTokenGlyphClick = {read=FOnTokenGlyphClick, write=FOnTokenGlyphClick};
	__property OnValidate;
};


class PASCALIMPLEMENTATION TdxTokenEditViewData : public Cxtextedit::TcxCustomTextEditViewData
{
	typedef Cxtextedit::TcxCustomTextEditViewData inherited;
	
private:
	HIDESBASE TdxTokenEditProperties* __fastcall GetProperties();
	
protected:
	virtual System::Types::TSize __fastcall InternalGetEditConstantPartSize(Cxgraphics::TcxCanvas* ACanvas, bool AIsInplace, const Cxedit::TcxEditSizeProperties &AEditSizeProperties, System::Types::TSize &MinContentSize, Cxedit::TcxCustomEditViewInfo* AViewInfo);
	virtual System::Types::TSize __fastcall InternalGetEditContentSize(Cxgraphics::TcxCanvas* ACanvas, const System::Variant &AEditValue, const Cxedit::TcxEditSizeProperties &AEditSizeProperties);
	virtual System::Classes::TStrings* __fastcall ParseEditValue(const System::Variant &AEditValue);
	
public:
	virtual void __fastcall Calculate(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::Types::TPoint &P, Cxcontainer::TcxMouseButton Button, System::Classes::TShiftState Shift, Cxedit::TcxCustomEditViewInfo* AViewInfo, bool AIsMouseEvent);
	virtual void __fastcall EditValueToDrawValue(const System::Variant &AEditValue, Cxedit::TcxCustomEditViewInfo* AViewInfo);
	virtual System::Types::TRect __fastcall GetClientExtent(Cxgraphics::TcxCanvas* Canvas, Cxedit::TcxCustomEditViewInfo* ViewInfo);
	__property TdxTokenEditProperties* Properties = {read=GetProperties};
public:
	/* TcxCustomEditViewData.Create */ inline __fastcall virtual TdxTokenEditViewData(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditStyle* AStyle, bool AIsInplace) : Cxtextedit::TcxCustomTextEditViewData(AProperties, AStyle, AIsInplace) { }
	/* TcxCustomEditViewData.Destroy */ inline __fastcall virtual ~TdxTokenEditViewData() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTokenEditHitTest : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	System::TObject* HitObject;
	int HitObjectPartID;
	System::Types::TPoint Point;
	void __fastcall Reset();
public:
	/* TObject.Create */ inline __fastcall TdxTokenEditHitTest() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxTokenEditHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTokenEditCustomTokenAccessibilityHelper : public Cxedit::TdxEditChildAccessibilityHelper
{
	typedef Cxedit::TdxEditChildAccessibilityHelper inherited;
	
private:
	TdxTokenEditCustomTokenViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual System::UnicodeString __fastcall GetDefaultActionDescription(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual System::UnicodeString __fastcall GetName(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual Cxaccessibility::TcxAccessibilityHelper* __fastcall GetParent();
	virtual int __fastcall GetRole(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetState(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual Cxaccessibility::TcxAccessibleObjectProperties __fastcall GetSupportedProperties(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual bool __fastcall IsExtended();
	__property TdxTokenEditCustomTokenViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	virtual System::Types::TRect __fastcall GetScreenBounds(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
public:
	/* TcxAccessibilityHelper.Create */ inline __fastcall virtual TdxTokenEditCustomTokenAccessibilityHelper(System::TObject* AOwnerObject) : Cxedit::TdxEditChildAccessibilityHelper(AOwnerObject) { }
	/* TcxAccessibilityHelper.Destroy */ inline __fastcall virtual ~TdxTokenEditCustomTokenAccessibilityHelper() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TdxTokenEditCustomTokenAccessibilityHelperClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTokenEditCustomTokenViewInfo : public Dxcoreclasses::TcxIUnknownObject
{
	typedef Dxcoreclasses::TcxIUnknownObject inherited;
	
private:
	System::Types::TRect FBounds;
	Cxaccessibility::_di_IcxAccessibilityHelper FIAccessibilityHelper;
	TdxTokenEditViewInfo* FOwner;
	Cxaccessibility::_di_IcxAccessibilityHelper __fastcall GetIAccessibilityHelper();
	Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetPainter();
	Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	
protected:
	System::Types::TRect FCaptionBounds;
	Cxlookandfeelpainters::TcxButtonState FState;
	virtual bool __fastcall DoCustomDraw(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawBackground(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawContent(Cxgraphics::TcxCanvas* ACanvas);
	virtual TdxTokenEditCustomTokenAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	virtual System::UnicodeString __fastcall GetCaption() = 0 ;
	virtual System::Classes::TAlignment __fastcall GetCaptionAlignment();
	virtual System::Types::TRect __fastcall GetContentOffsets();
	System::Uitypes::TColor __fastcall GetTextColor(const Cxlookandfeelpainters::TcxButtonState AState);
	__property Cxaccessibility::_di_IcxAccessibilityHelper IAccessibilityHelper = {read=GetIAccessibilityHelper};
	
public:
	__fastcall TdxTokenEditCustomTokenViewInfo(TdxTokenEditViewInfo* AOwner);
	__fastcall virtual ~TdxTokenEditCustomTokenViewInfo();
	virtual void __fastcall Calculate(const System::Types::TRect &ABounds)/* overload */;
	void __fastcall Calculate(const int ALeft, const int ATop, const int AWidth, const int AHeight)/* overload */;
	virtual bool __fastcall CalculateHitTest(TdxTokenEditHitTest* AHitTest);
	void __fastcall Draw(Cxgraphics::TcxCanvas* ACanvas);
	virtual bool __fastcall Equals(System::TObject* Obj);
	virtual System::UnicodeString __fastcall GetHint();
	bool __fastcall IsVisible();
	virtual System::Types::TSize __fastcall MeasureSize();
	virtual void __fastcall Offset(int DX, int DY);
	virtual void __fastcall UpdateState(TdxTokenEditController* AController);
	__property System::Types::TRect Bounds = {read=FBounds};
	__property System::UnicodeString Caption = {read=GetCaption};
	__property System::Classes::TAlignment CaptionAlignment = {read=GetCaptionAlignment, nodefault};
	__property System::Types::TRect CaptionBounds = {read=FCaptionBounds};
	__property TdxTokenEditViewInfo* Owner = {read=FOwner};
	__property Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* Painter = {read=GetPainter};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=GetScaleFactor};
	__property Cxlookandfeelpainters::TcxButtonState State = {read=FState, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTokenEditTokenAccessibilityHelper : public TdxTokenEditCustomTokenAccessibilityHelper
{
	typedef TdxTokenEditCustomTokenAccessibilityHelper inherited;
	
private:
	HIDESBASE TdxTokenEditTokenViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual bool __fastcall ChildIsSimpleElement(int AIndex);
	virtual void __fastcall DoDefaultAction(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetChildCount();
	virtual System::UnicodeString __fastcall GetName(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetRole(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	__property TdxTokenEditTokenViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	virtual System::Types::TRect __fastcall GetScreenBounds(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
public:
	/* TcxAccessibilityHelper.Create */ inline __fastcall virtual TdxTokenEditTokenAccessibilityHelper(System::TObject* AOwnerObject) : TdxTokenEditCustomTokenAccessibilityHelper(AOwnerObject) { }
	/* TcxAccessibilityHelper.Destroy */ inline __fastcall virtual ~TdxTokenEditTokenAccessibilityHelper() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TdxTokenEditTokenViewInfoClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTokenEditTokenViewInfo : public TdxTokenEditCustomTokenViewInfo
{
	typedef TdxTokenEditCustomTokenViewInfo inherited;
	
private:
	static const System::Int8 GlyphOffset = System::Int8(0x4);
	
	System::Types::TRect FCloseGlyphBounds;
	Cxlookandfeelpainters::TcxButtonState FCloseGlyphState;
	System::Types::TRect FGlyphBounds;
	TdxTokenEditToken* FItem;
	System::UnicodeString FText;
	int FTokenIndex;
	TdxTokenEditElementPosition __fastcall GetCloseGlyphPosition();
	TdxTokenEditElementPosition __fastcall GetGlyphPosition();
	Vcl::Imglist::TCustomImageList* __fastcall GetImages();
	
protected:
	virtual void __fastcall CalculateGlyphBounds(System::Types::TRect &ABounds, const System::Types::TSize &ASize, TdxTokenEditElementPosition APosition);
	virtual void __fastcall CalculateStates(TdxTokenEditController* AController, /* out */ Cxlookandfeelpainters::TcxButtonState &AState, /* out */ Cxlookandfeelpainters::TcxButtonState &ACloseGlyphState);
	virtual void __fastcall DrawBackground(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawContent(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawGlyph(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R);
	virtual TdxTokenEditCustomTokenAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	virtual System::UnicodeString __fastcall GetCaption();
	virtual System::Types::TSize __fastcall GetGlyphSize();
	virtual bool __fastcall IsCloseGlyphVisible();
	virtual bool __fastcall IsGlyphVisible();
	bool __fastcall CanFade();
	Cxgraphics::TcxBitmap32* __fastcall CreateFadeImage();
	void __fastcall GetFadingImages(/* out */ Cxgraphics::TcxBitmap* &AFadeOutImage, /* out */ Cxgraphics::TcxBitmap* &AFadeInImage);
	void __fastcall DrawFadeImage();
	__property System::UnicodeString Text = {read=FText};
	__property int TokenIndex = {read=FTokenIndex, nodefault};
	
public:
	__fastcall virtual TdxTokenEditTokenViewInfo(TdxTokenEditViewInfo* AOwner);
	__fastcall virtual ~TdxTokenEditTokenViewInfo();
	virtual void __fastcall Calculate(const System::Types::TRect &ABounds)/* overload */;
	virtual bool __fastcall CalculateHitTest(TdxTokenEditHitTest* AHitTest);
	TdxTokenEditTokenViewInfo* __fastcall Clone();
	virtual bool __fastcall Equals(System::TObject* Obj);
	void __fastcall Initialize(const System::UnicodeString AText, int ATokenIndex, TdxTokenEditToken* AItem);
	virtual System::UnicodeString __fastcall GetHint();
	virtual System::Types::TSize __fastcall MeasureSize();
	virtual void __fastcall Offset(int DX, int DY);
	virtual void __fastcall UpdateState(TdxTokenEditController* AController);
	__property System::Types::TRect CloseGlyphBounds = {read=FCloseGlyphBounds};
	__property TdxTokenEditElementPosition CloseGlyphPosition = {read=GetCloseGlyphPosition, nodefault};
	__property Cxlookandfeelpainters::TcxButtonState CloseGlyphState = {read=FCloseGlyphState, nodefault};
	__property System::Types::TRect GlyphBounds = {read=FGlyphBounds};
	__property TdxTokenEditElementPosition GlyphPosition = {read=GetGlyphPosition, nodefault};
	__property System::Types::TSize GlyphSize = {read=GetGlyphSize};
	__property Vcl::Imglist::TCustomImageList* Images = {read=GetImages};
	__property TdxTokenEditToken* Item = {read=FItem};
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Calculate(const int ALeft, const int ATop, const int AWidth, const int AHeight){ TdxTokenEditCustomTokenViewInfo::Calculate(ALeft, ATop, AWidth, AHeight); }
	
private:
	void *__IdxFadingObject;	// Dxfading::IdxFadingObject 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {73AB2A92-CDD9-4F13-965A-DC799DE837F9}
	operator Dxfading::_di_IdxFadingObject()
	{
		Dxfading::_di_IdxFadingObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxfading::IdxFadingObject*(void) { return (Dxfading::IdxFadingObject*)&__IdxFadingObject; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTokenEditTokenViewInfoList : public Dxcoreclasses::TdxFastObjectList
{
	typedef Dxcoreclasses::TdxFastObjectList inherited;
	
public:
	TdxTokenEditTokenViewInfo* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TdxTokenEditTokenViewInfo* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TdxTokenEditTokenViewInfo* AValue);
	
public:
	HIDESBASE void __fastcall Assign(TdxTokenEditTokenViewInfoList* ASource);
	virtual void __fastcall CalculateHitTest(TdxTokenEditHitTest* AHitTest);
	virtual bool __fastcall Equals(System::TObject* Obj);
	HIDESBASE int __fastcall IndexOf(TdxTokenEditToken* AToken);
	HIDESBASE TdxTokenEditTokenViewInfo* __fastcall First();
	HIDESBASE TdxTokenEditTokenViewInfo* __fastcall Last();
	TdxTokenEditTokenViewInfo* __fastcall LastVisible();
	__property TdxTokenEditTokenViewInfo* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TdxFastObjectList.Create */ inline __fastcall TdxTokenEditTokenViewInfoList(bool AOwnsObjects, int ACapacity) : Dxcoreclasses::TdxFastObjectList(AOwnsObjects, ACapacity) { }
	
public:
	/* TdxFastList.Destroy */ inline __fastcall virtual ~TdxTokenEditTokenViewInfoList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTokenEditMoreTokensViewInfo : public TdxTokenEditCustomTokenViewInfo
{
	typedef TdxTokenEditCustomTokenViewInfo inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetCaption();
	virtual System::Classes::TAlignment __fastcall GetCaptionAlignment();
	
public:
	virtual bool __fastcall CalculateHitTest(TdxTokenEditHitTest* AHitTest);
	virtual System::UnicodeString __fastcall GetHint();
public:
	/* TdxTokenEditCustomTokenViewInfo.Create */ inline __fastcall TdxTokenEditMoreTokensViewInfo(TdxTokenEditViewInfo* AOwner) : TdxTokenEditCustomTokenViewInfo(AOwner) { }
	/* TdxTokenEditCustomTokenViewInfo.Destroy */ inline __fastcall virtual ~TdxTokenEditMoreTokensViewInfo() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxTokenEditViewInfo : public Cxtextedit::TcxCustomTextEditViewInfo
{
	typedef Cxtextedit::TcxCustomTextEditViewInfo inherited;
	
private:
	static const System::Int8 Padding = System::Int8(0x1);
	
	System::Types::TPoint FContentOffset;
	System::Variant FEditValue;
	TdxTokenEditCustomTokenViewInfo* FMoreTokensItem;
	TdxTokenEditTokenViewInfoList* FTokens;
	System::Types::TSize __fastcall CalculateClientSize(const System::Types::TSize &AContentSize);
	System::Types::TRect __fastcall GetContentDisplayRect();
	System::Types::TSize __fastcall GetContentSize();
	TdxTokenEditProperties* __fastcall GetProperties();
	void __fastcall SetContentOffset(const System::Types::TPoint &Value);
	
protected:
	int EditingTokenIndex;
	int IndentBetweenItems;
	System::Types::TSize InnerEditSize;
	bool UseRightToLeftAlignment;
	bool UseRightToLeftReading;
	virtual System::Types::TSize __fastcall CalculateInnerEditSize();
	virtual void __fastcall CalculateLayout();
	virtual void __fastcall CalculateLayoutCore(const System::Types::TRect &AContentRect, int ARowHeight, int AMaxRowCount, int AMinItemSize);
	virtual void __fastcall CalculateMoreTokensItem(const System::Types::TRect &AContentRect, int ARowHeight, int AMinItemSize);
	virtual int __fastcall CalculateRowHeight();
	bool __fastcall CanGrowByHeight(int AMinItemWidth);
	bool __fastcall IsTooSmallForDisplay(const System::Types::TRect &R, const System::Types::TRect &AArea, int AMeasuredSize, int AMinSize);
	virtual void __fastcall DrawContent(Cxgraphics::TcxCanvas* ACanvas);
	virtual System::Types::TSize __fastcall GetDefaultTokenItemSize();
	virtual TdxTokenEditTokenViewInfoClass __fastcall GetTokenItemViewInfoClass();
	virtual void __fastcall InternalPaint(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall RefreshTokensViewInfo();
	
public:
	__fastcall virtual TdxTokenEditViewInfo();
	__fastcall virtual ~TdxTokenEditViewInfo();
	virtual void __fastcall Assign(System::TObject* Source);
	virtual void __fastcall Calculate();
	virtual System::Types::TSize __fastcall CalculateClientAutoSize();
	virtual System::Types::TSize __fastcall CalculateClientMinSize();
	virtual void __fastcall CalculateHitTest(TdxTokenEditHitTest* const AHitTest);
	virtual bool __fastcall Equals(System::TObject* Obj);
	virtual bool __fastcall IsHotTrack(const System::Types::TPoint &P)/* overload */;
	virtual bool __fastcall IsHotTrack()/* overload */;
	virtual System::UnicodeString __fastcall GetHintText(int APart);
	virtual bool __fastcall GetItemByPart(int APart, /* out */ TdxTokenEditCustomTokenViewInfo* &AItem);
	virtual int __fastcall GetPart(const System::Types::TPoint &P);
	virtual System::Types::TRect __fastcall GetPartRect(int APart);
	virtual bool __fastcall NeedShowHint(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TPoint &P, const System::Types::TRect &AVisibleBounds, /* out */ Vcl::Controls::TCaption &AText, /* out */ bool &AIsMultiLine, /* out */ System::Types::TRect &ATextRect, int AMaxLineCount = 0x0);
	virtual void __fastcall Offset(int DX, int DY);
	virtual bool __fastcall Repaint(Vcl::Controls::TWinControl* AControl, const System::Types::TRect &AInnerEditRect, Cxcontainer::TcxContainerViewInfo* AViewInfo = (Cxcontainer::TcxContainerViewInfo*)(0x0))/* overload */;
	bool __fastcall UpdateEditValue(const System::Variant &Value);
	virtual void __fastcall UpdateState(TdxTokenEditController* AController);
	__property System::Types::TRect ContentDisplayRect = {read=GetContentDisplayRect};
	__property System::Types::TPoint ContentOffset = {read=FContentOffset, write=SetContentOffset};
	__property System::Types::TSize ContentSize = {read=GetContentSize};
	__property System::Variant EditValue = {read=FEditValue};
	__property TdxTokenEditCustomTokenViewInfo* MoreTokensItem = {read=FMoreTokensItem};
	__property TdxTokenEditProperties* Properties = {read=GetProperties};
	__property TdxTokenEditTokenViewInfoList* Tokens = {read=FTokens};
	/* Hoisted overloads: */
	
public:
	inline bool __fastcall  Repaint(Vcl::Controls::TWinControl* AControl, Cxcontainer::TcxContainerViewInfo* AViewInfo = (Cxcontainer::TcxContainerViewInfo*)(0x0)){ return Cxedit::TcxCustomEditViewInfo::Repaint(AControl, AViewInfo); }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTokenEditController : public Dxcoreclasses::TcxIUnknownObject
{
	typedef Dxcoreclasses::TcxIUnknownObject inherited;
	
private:
	System::TObject* FFocusedObject;
	TdxTokenEditHitTest* FHitTest;
	System::TObject* FPressedObject;
	TdxTokenEditViewInfo* FViewInfo;
	TdxCustomTokenEdit* __fastcall GetEdit();
	int __fastcall GetEditingTokenIndex();
	_di_IdxInnerTokenEdit __fastcall GetInnerEdit();
	void __fastcall SetEditingTokenIndex(int AValue);
	void __fastcall SetFocusedObject(System::TObject* AValue);
	void __fastcall SetPressedObject(System::TObject* AValue);
	
protected:
	virtual void __fastcall DeleteToken(const int ATokenIndex);
	virtual void __fastcall ReplaceToken(const int ATokenIndex, const System::UnicodeString ATokenText);
	virtual bool __fastcall IsEditing();
	virtual void __fastcall StartEditing(int ATokenIndex);
	virtual void __fastcall StopEditing(bool APostToken);
	virtual void __fastcall ProcessClick();
	virtual void __fastcall ProcessDblClick();
	
public:
	__fastcall TdxTokenEditController(TdxTokenEditViewInfo* AViewInfo);
	__fastcall virtual ~TdxTokenEditController();
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseLeave();
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall UpdateHitTest(const System::Types::TPoint &P)/* overload */;
	void __fastcall UpdateHitTest()/* overload */;
	virtual void __fastcall UpdateStates();
	__property int EditingTokenIndex = {read=GetEditingTokenIndex, write=SetEditingTokenIndex, nodefault};
	__property System::TObject* FocusedObject = {read=FFocusedObject, write=SetFocusedObject};
	__property System::TObject* PressedObject = {read=FPressedObject, write=SetPressedObject};
	__property TdxCustomTokenEdit* Edit = {read=GetEdit};
	__property TdxTokenEditHitTest* HitTest = {read=FHitTest};
	__property _di_IdxInnerTokenEdit InnerEdit = {read=GetInnerEdit};
	__property TdxTokenEditViewInfo* ViewInfo = {read=FViewInfo};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxTokenEditInnerEdit : public Cxtextedit::TcxCustomInnerTextEdit
{
	typedef Cxtextedit::TcxCustomInnerTextEdit inherited;
	
private:
	Dxautocompletewindow::TdxCustomAutoCompleteWindow* FAutoCompleteWindow;
	System::Types::TSize FAutoCompleteWindowCustomSize;
	int FLockCount;
	void __fastcall AutoCompleteWindowSelectItemHandler(System::TObject* Sender);
	void __fastcall AutoCompleteWindowStoreSizeHandler(System::TObject* Sender);
	TdxTokenEditProperties* __fastcall GetActiveProperties();
	HIDESBASE TdxCustomTokenEdit* __fastcall GetContainer();
	TdxTokenEditController* __fastcall GetController();
	Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Message);
	
protected:
	virtual Cxtextedit::TcxCustomInnerTextEditHelper* __fastcall CreateHelper();
	DYNAMIC void __fastcall Change();
	void __fastcall DeletePrevToken();
	DYNAMIC void __fastcall DoExit();
	void __fastcall LockChanges(bool ALock);
	void __fastcall PostToken();
	bool __fastcall CheckShiftState(System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual bool __fastcall ProcessKeyBackspace(System::Classes::TShiftState Shift);
	virtual bool __fastcall ProcessKeyEscape(System::Classes::TShiftState Shift);
	virtual bool __fastcall ProcessKeyReturn(System::Classes::TShiftState Shift);
	virtual void __fastcall HideAutoCompleteWindow();
	bool __fastcall IsAutoCompleteWindowVisible();
	void __fastcall RefreshAutoCompleteSuggestions()/* overload */;
	void __fastcall RefreshAutoCompleteSuggestions(const System::UnicodeString ASearchText, const TdxTokenEditLookupFilterMode AMode, const TdxTokenEditLookupFilterSources ASources)/* overload */;
	virtual void __fastcall RefreshAutoCompleteWindow(System::Classes::TStrings* ASuggestions);
	__property TdxTokenEditProperties* ActiveProperties = {read=GetActiveProperties};
	__property TdxCustomTokenEdit* Container = {read=GetContainer};
	__property TdxTokenEditController* Controller = {read=GetController};
	
public:
	__fastcall virtual ~TdxTokenEditInnerEdit();
public:
	/* TcxCustomInnerTextEdit.Create */ inline __fastcall virtual TdxTokenEditInnerEdit(System::Classes::TComponent* AOwner) : Cxtextedit::TcxCustomInnerTextEdit(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxTokenEditInnerEdit(HWND ParentWindow) : Cxtextedit::TcxCustomInnerTextEdit(ParentWindow) { }
	
private:
	void *__IdxScaleFactor;	// Cxgeometry::IdxScaleFactor 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {367A805A-A84B-441A-83A3-6A7E489D3B6C}
	operator Cxgeometry::_di_IdxScaleFactor()
	{
		Cxgeometry::_di_IdxScaleFactor intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxgeometry::IdxScaleFactor*(void) { return (Cxgeometry::IdxScaleFactor*)&__IdxScaleFactor; }
	#endif
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTokenEditInnerEditHelper : public Cxtextedit::TcxCustomInnerTextEditHelper
{
	typedef Cxtextedit::TcxCustomInnerTextEditHelper inherited;
	
public:
	void __fastcall LockChanges(bool ALock);
	void __fastcall PostToken();
public:
	/* TcxCustomInnerTextEditHelper.Create */ inline __fastcall virtual TdxTokenEditInnerEditHelper(Cxtextedit::TcxCustomInnerTextEdit* AEdit) : Cxtextedit::TcxCustomInnerTextEditHelper(AEdit) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxTokenEditInnerEditHelper() { }
	
private:
	void *__IdxInnerTokenEdit;	// IdxInnerTokenEdit 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {794E90E0-9825-4BD0-9FAF-C44A032507D7}
	operator _di_IdxInnerTokenEdit()
	{
		_di_IdxInnerTokenEdit intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxInnerTokenEdit*(void) { return (IdxInnerTokenEdit*)&__IdxInnerTokenEdit; }
	#endif
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxTokenEditAutoCompleteListBox : public Dxautocompletewindow::TdxCustomAutoCompleteInnerListBox
{
	typedef Dxautocompletewindow::TdxCustomAutoCompleteInnerListBox inherited;
	
protected:
	virtual bool __fastcall IsItemWithText(Cxlistbox::TdxCustomListBoxItem* AItem, const System::UnicodeString AText);
public:
	/* TdxCustomListBox.Create */ inline __fastcall virtual TdxTokenEditAutoCompleteListBox(System::Classes::TComponent* AOwner) : Dxautocompletewindow::TdxCustomAutoCompleteInnerListBox(AOwner) { }
	/* TdxCustomListBox.Destroy */ inline __fastcall virtual ~TdxTokenEditAutoCompleteListBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxTokenEditAutoCompleteListBox(HWND ParentWindow) : Dxautocompletewindow::TdxCustomAutoCompleteInnerListBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TdxTokenEditAutoCompleteWindow : public Dxautocompletewindow::TdxCustomAutoCompleteWindow
{
	typedef Dxautocompletewindow::TdxCustomAutoCompleteWindow inherited;
	
protected:
	virtual System::Types::TSize __fastcall CalculateSize();
	virtual Dxautocompletewindow::TdxCustomAutoCompleteInnerListBox* __fastcall CreateInnerListBox();
	
public:
	__fastcall TdxTokenEditAutoCompleteWindow(TdxTokenEditInnerEdit* AInnerEdit);
public:
	/* TdxCustomAutoCompleteWindow.Destroy */ inline __fastcall virtual ~TdxTokenEditAutoCompleteWindow() { }
	
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TdxTokenEditAutoCompleteWindow(System::Classes::TComponent* AOwner, int Dummy) : Dxautocompletewindow::TdxCustomAutoCompleteWindow(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxTokenEditAutoCompleteWindow(HWND ParentWindow) : Dxautocompletewindow::TdxCustomAutoCompleteWindow(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTokenEditAccessibilityHelper : public Cxedit::TdxEditAccessibilityHelper
{
	typedef Cxedit::TdxEditAccessibilityHelper inherited;
	
private:
	TdxCustomTokenEdit* __fastcall GetTokenEdit();
	TdxTokenEditViewInfo* __fastcall GetTokenEditViewInfo();
	
protected:
	virtual int __fastcall GetChildCount();
	void __fastcall DoCloseButtonClick(const System::UnicodeString AText, TdxTokenEditToken* AToken);
	void __fastcall DoGlyphClick(const System::UnicodeString AText, TdxTokenEditToken* AToken);
	void __fastcall DoTokenClick(const System::UnicodeString AText, TdxTokenEditToken* AToken);
	__property TdxCustomTokenEdit* TokenEdit = {read=GetTokenEdit};
	__property TdxTokenEditViewInfo* TokenEditViewInfo = {read=GetTokenEditViewInfo};
public:
	/* TdxEditAccessibilityHelper.Create */ inline __fastcall virtual TdxTokenEditAccessibilityHelper(System::TObject* AOwnerObject) : Cxedit::TdxEditAccessibilityHelper(AOwnerObject) { }
	/* TdxEditAccessibilityHelper.Destroy */ inline __fastcall virtual ~TdxTokenEditAccessibilityHelper() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxCustomTokenEdit : public Cxtextedit::TcxCustomTextEdit
{
	typedef Cxtextedit::TcxCustomTextEdit inherited;
	
private:
	TdxTokenEditController* FController;
	HIDESBASE TdxTokenEditProperties* __fastcall GetActiveProperties();
	HIDESBASE TdxTokenEditProperties* __fastcall GetProperties();
	HIDESBASE TdxTokenEditViewInfo* __fastcall GetViewInfo();
	HIDESBASE void __fastcall SetProperties(TdxTokenEditProperties* Value);
	
protected:
	virtual void __fastcall AdjustInnerEditPosition();
	DYNAMIC void __fastcall BoundsChanged();
	virtual bool __fastcall CanAutoHeight();
	virtual TdxTokenEditController* __fastcall CreateController();
	virtual void __fastcall EnabledChanged();
	virtual void __fastcall DoFocusChanged();
	virtual void __fastcall DoHideEdit(bool AExit);
	virtual void __fastcall DoSetSize();
	virtual void __fastcall DoShowEdit();
	virtual System::UnicodeString __fastcall GetDisplayText();
	virtual System::UnicodeString __fastcall GetHintText(int APart);
	virtual Vcl::Controls::TControlClass __fastcall GetInnerEditClass();
	virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
	virtual void __fastcall Initialize();
	virtual bool __fastcall CanAddToken(TdxTokenEditProperties* AProperties, const System::UnicodeString ATokenText, TdxTokenEditToken* AToken);
	virtual bool __fastcall DoTokenAdd(const System::UnicodeString ATokenText, TdxTokenEditToken* AToken);
	virtual void __fastcall DoTokenClick(const System::UnicodeString ATokenText, TdxTokenEditToken* AToken);
	virtual bool __fastcall DoTokenDelete(const System::UnicodeString ATokenText, TdxTokenEditToken* AToken);
	virtual void __fastcall DoTokenGlyphClick(const System::UnicodeString ATokenText, TdxTokenEditToken* AToken);
	virtual void __fastcall InitScrollBarsParameters();
	virtual bool __fastcall NeedsScrollBars();
	virtual void __fastcall Scroll(Vcl::Forms::TScrollBarKind AScrollBarKind, System::Uitypes::TScrollCode AScrollCode, int &AScrollPos);
	virtual void __fastcall ScrollToInnerEdit();
	virtual bool __fastcall UseInnerControlScrollBarParameters();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseLeave(Vcl::Controls::TControl* AControl);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall ReplaceToken(const System::UnicodeString AText, int ATokenIndex = 0xffffffff);
	virtual void __fastcall UpdateEditValue(System::Classes::TStrings* ATokens);
	virtual Cxedit::TdxEditAccessibilityHelperClass __fastcall GetAccessibilityHelperClass();
	virtual System::Variant __fastcall InternalGetEditingValue();
	virtual bool __fastcall InternalSetText(const System::UnicodeString Value);
	virtual void __fastcall PopulateSizeProperties(Cxedit::TcxEditSizeProperties &AEditSizeProperties);
	virtual void __fastcall PropertiesChanged(System::TObject* Sender);
	virtual void __fastcall SetInternalDisplayValue(const System::Variant &Value);
	virtual bool __fastcall SupportsSpelling();
	virtual void __fastcall SynchronizeDisplayValue();
	virtual bool __fastcall TabsNeeded();
	virtual void __fastcall UpdateHitTest();
	void __fastcall UpdateInnerEditMaxLength();
	__property TdxTokenEditController* Controller = {read=FController};
	__property TdxTokenEditViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	__fastcall virtual TdxCustomTokenEdit(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TdxCustomTokenEdit();
	virtual void __fastcall ClearSelection();
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	virtual bool __fastcall HasPopupWindow();
	__property TdxTokenEditProperties* ActiveProperties = {read=GetActiveProperties};
	__property TdxTokenEditProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TdxCustomTokenEdit(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Cxtextedit::TcxCustomTextEdit(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxCustomTokenEdit(HWND ParentWindow) : Cxtextedit::TcxCustomTextEdit(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TdxTokenEdit : public TdxCustomTokenEdit
{
	typedef TdxCustomTokenEdit inherited;
	
__published:
	__property Anchors = {default=3};
	__property AutoSize = {default=1};
	__property BiDiMode;
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property Properties;
	__property ShowHint;
	__property Style;
	__property StyleDisabled;
	__property StyleFocused;
	__property StyleHot;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Text = {default=0};
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
	/* TdxCustomTokenEdit.Create */ inline __fastcall virtual TdxTokenEdit(System::Classes::TComponent* AOwner)/* overload */ : TdxCustomTokenEdit(AOwner) { }
	/* TdxCustomTokenEdit.Destroy */ inline __fastcall virtual ~TdxTokenEdit() { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TdxTokenEdit(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : TdxCustomTokenEdit(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxTokenEdit(HWND ParentWindow) : TdxCustomTokenEdit(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
#define dxTokenEditDefaultDisplayMaskDisplayText L"[DisplayText]"
#define dxTokenEditDefaultDisplayMaskText L"[Text]"
static const System::Int8 dxTokenEditDefaultDropDownRows = System::Int8(0xa);
static const System::WideChar dxTokenEditDefaultEditValueDelimiter = (System::WideChar)(0x3b);
extern DELPHI_PACKAGE int dxTokenEditDefaultFadeFrameCount;
extern DELPHI_PACKAGE int dxTokenEditDefaultInnerEditMinWidth;
#define dxTokenEditDefaultInputDelimiters L",;"
}	/* namespace Dxtokenedit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXTOKENEDIT)
using namespace Dxtokenedit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxtokeneditHPP
