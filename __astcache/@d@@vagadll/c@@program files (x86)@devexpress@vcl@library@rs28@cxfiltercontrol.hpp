// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxFilterControl.pas' rev: 35.00 (Windows)

#ifndef CxfiltercontrolHPP
#define CxfiltercontrolHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Types.hpp>
#include <System.Variants.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ImgList.hpp>
#include <cxFilter.hpp>
#include <cxEdit.hpp>
#include <cxClasses.hpp>
#include <cxContainer.hpp>
#include <cxControls.hpp>
#include <cxGraphics.hpp>
#include <cxCustomData.hpp>
#include <cxLookAndFeels.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxDropDownEdit.hpp>
#include <cxTextEdit.hpp>
#include <cxFilterControlUtils.hpp>
#include <dxCustomFunction.hpp>
#include <cxDataStorage.hpp>
#include <cxFormats.hpp>
#include <cxListBox.hpp>
#include <dxMessages.hpp>
#include <cxGeometry.hpp>
#include <dxCoreGraphics.hpp>
#include <dxCoreClasses.hpp>
#include <dxIncrementalSearch.hpp>
#include <dxForms.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxfiltercontrol
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IcxFilterControl;
typedef System::DelphiInterface<IcxFilterControl> _di_IcxFilterControl;
__interface DELPHIINTERFACE IcxFilterControlEx;
typedef System::DelphiInterface<IcxFilterControlEx> _di_IcxFilterControlEx;
__interface DELPHIINTERFACE IcxFilterControlDialog;
typedef System::DelphiInterface<IcxFilterControlDialog> _di_IcxFilterControlDialog;
class DELPHICLASS TcxFilterControlCriteriaItem;
class DELPHICLASS TcxFilterControlCriteria;
struct TcxFilterControlHitTestInfo;
class DELPHICLASS TcxCustomRowViewInfo;
class DELPHICLASS TcxGroupViewInfo;
class DELPHICLASS TcxValueInfo;
class DELPHICLASS TcxValuesViewInfo;
class DELPHICLASS TcxConditionViewInfo;
class DELPHICLASS TcxFilterControlImagesHelper;
class DELPHICLASS TcxFilterDropDownMenuInnerListBoxIncrementalSearchController;
class DELPHICLASS TcxFilterListBoxItem;
class DELPHICLASS TdxFilterListBoxItems;
class DELPHICLASS TcxFilterDropDownMenuInnerListBox;
class DELPHICLASS TcxFilterControlDropDownMenuInnerListBox;
class DELPHICLASS TcxFilterDropDownMenu;
class DELPHICLASS TcxFilterControlDropDownMenu;
class DELPHICLASS TcxCustomFilterControl;
class DELPHICLASS TcxFilterControlPainter;
class DELPHICLASS TcxFilterControlViewInfo;
class DELPHICLASS TcxFilterControl;
//-- type declarations -------------------------------------------------------
typedef System::TMetaClass* TcxCustomFilterControlClass;

typedef System::TMetaClass* TcxFilterControlViewInfoClass;

__interface  INTERFACE_UUID("{B9890E09-5400-428D-8F72-1FF8FD15937C}") IcxFilterControl  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetCaption(int Index) = 0 ;
	virtual int __fastcall GetCount() = 0 ;
	virtual Cxfilter::TcxFilterCriteria* __fastcall GetCriteria() = 0 ;
	virtual System::TObject* __fastcall GetItemLink(int Index) = 0 ;
	virtual int __fastcall GetItemLinkID(int Index) = 0 ;
	virtual System::UnicodeString __fastcall GetItemLinkName(int Index) = 0 ;
	virtual System::UnicodeString __fastcall GetFieldName(int Index) = 0 ;
	virtual Cxedit::TcxCustomEditProperties* __fastcall GetProperties(int Index) = 0 ;
	virtual Cxdatastorage::TcxValueTypeClass __fastcall GetValueType(int Index) = 0 ;
	__property System::UnicodeString Captions[int Index] = {read=GetCaption};
	__property int Count = {read=GetCount};
	__property Cxfilter::TcxFilterCriteria* Criteria = {read=GetCriteria};
	__property System::UnicodeString ItemLinkNames[int Index] = {read=GetItemLinkName};
	__property int ItemLinkIDs[int Index] = {read=GetItemLinkID};
	__property System::TObject* ItemLinks[int Index] = {read=GetItemLink};
	__property System::UnicodeString FieldNames[int Index] = {read=GetFieldName};
	__property Cxedit::TcxCustomEditProperties* Properties[int Index] = {read=GetProperties};
	__property Cxdatastorage::TcxValueTypeClass ValueTypes[int Index] = {read=GetValueType};
};

__interface  INTERFACE_UUID("{06029B36-8508-4613-9CA2-A7907BA76A02}") IcxFilterControlEx  : public System::IInterface 
{
	virtual bool __fastcall AllowExpressionEditing() = 0 ;
	virtual Cxcustomdata::TcxCustomExpressionProvider* __fastcall GetExpressionProvider() = 0 ;
	virtual void __fastcall RegisterListener(TcxCustomFilterControl* AListener) = 0 ;
	virtual void __fastcall UnregisterListener(TcxCustomFilterControl* AListener) = 0 ;
	virtual bool __fastcall UseTokens() = 0 ;
};

__interface  INTERFACE_UUID("{D2369F8D-3B22-41A8-881E-B01BEB624B7D}") IcxFilterControlDialog  : public System::IInterface 
{
	virtual void __fastcall SetDialogLinkComponent(System::Classes::TComponent* ALink) = 0 ;
};

class PASCALIMPLEMENTATION TcxFilterControlCriteriaItem : public Cxfilter::TcxFilterCriteriaItem
{
	typedef Cxfilter::TcxFilterCriteriaItem inherited;
	
private:
	static const System::WideChar InvariantExpressionFlag = (System::WideChar)(0x1);
	
	
private:
	TcxFilterControlCriteria* __fastcall GetFilterControlCriteria();
	_di_IcxFilterControl __fastcall GetFilter();
	int __fastcall GetItemIndex();
	bool __fastcall ValidItem();
	
protected:
	virtual System::Variant __fastcall GetDataValue(System::TObject* AData);
	virtual System::UnicodeString __fastcall GetFieldCaption();
	virtual System::UnicodeString __fastcall GetFieldName();
	virtual Cxfilter::TcxFilterOperatorClass __fastcall GetFilterOperatorClass()/* overload */;
	virtual System::UnicodeString __fastcall ReadExpression(System::Classes::TStream* AStream, bool AIsUnicode);
	virtual void __fastcall WriteExpression(System::Classes::TStream* AStream, const System::UnicodeString AExpression);
	__property int ItemIndex = {read=GetItemIndex, nodefault};
	
public:
	__property _di_IcxFilterControl Filter = {read=GetFilter};
	__property TcxFilterControlCriteria* Criteria = {read=GetFilterControlCriteria};
public:
	/* TcxFilterCriteriaItem.Create */ inline __fastcall virtual TcxFilterControlCriteriaItem(Cxfilter::TcxFilterCriteriaItemList* AOwner, System::TObject* AItemLink, Cxfilter::TcxFilterOperatorKind AOperatorKind, const System::Variant &AValue, const System::UnicodeString ADisplayValue) : Cxfilter::TcxFilterCriteriaItem(AOwner, AItemLink, AOperatorKind, AValue, ADisplayValue) { }
	/* TcxFilterCriteriaItem.Destroy */ inline __fastcall virtual ~TcxFilterControlCriteriaItem() { }
	
	/* Hoisted overloads: */
	
protected:
	inline Cxfilter::TcxFilterOperatorClass __fastcall  GetFilterOperatorClass(Cxfilter::TcxFilterOperatorKind AKind){ return Cxfilter::TcxFilterCriteriaItem::GetFilterOperatorClass(AKind); }
	
};


class PASCALIMPLEMENTATION TcxFilterControlCriteria : public Cxfilter::TcxFilterCriteria
{
	typedef Cxfilter::TcxFilterCriteria inherited;
	
private:
	TcxCustomFilterControl* FControl;
	
protected:
	virtual int __fastcall GetIDByItemLink(System::TObject* AItemLink);
	virtual Cxfilter::TcxFilterCriteriaItemClass __fastcall GetItemClass();
	virtual System::TObject* __fastcall GetItemLinkByID(int AID);
	virtual System::UnicodeString __fastcall GetNameByItemLink(System::TObject* AItemLink);
	virtual System::TObject* __fastcall GetItemLinkByName(const System::UnicodeString AName);
	__property TcxCustomFilterControl* Control = {read=FControl};
	
public:
	__fastcall virtual TcxFilterControlCriteria(TcxCustomFilterControl* AOwner);
	virtual void __fastcall AssignEvents(System::Classes::TPersistent* Source);
public:
	/* TcxFilterCriteria.Destroy */ inline __fastcall virtual ~TcxFilterControlCriteria() { }
	
};


typedef System::TMetaClass* TcxFilterControlCriteriaClass;

enum DECLSPEC_DENUM TcxFilterControlHitTest : unsigned char { fhtNone, fhtButton, fhtBoolOperator, fhtItem, fhtOperator, fhtValue, fhtAddCondition, fhtAddValue, fhtExpressionButton, fhtRemoveButton, fhtRowContent };

struct DECLSPEC_DRECORD TcxFilterControlHitTestInfo
{
public:
	TcxFilterControlHitTest HitTest;
	System::Types::TPoint Mouse;
	System::Classes::TShiftState Shift;
	TcxCustomRowViewInfo* Row;
	int ValueIndex;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomRowViewInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Cxlookandfeelpainters::TcxButtonState FButtonDrawState;
	System::Types::TRect FButtonGlyphRect;
	System::Types::TRect FButtonRect;
	Cxlookandfeelpainters::TcxButtonState FButtonState;
	System::UnicodeString FButtonText;
	System::Types::TRect FContentRect;
	TcxCustomFilterControl* FControl;
	Cxfilter::TcxCustomFilterCriteriaItem* FCriteriaItem;
	int FLevel;
	int FIndent;
	TcxCustomRowViewInfo* FParent;
	Cxlookandfeelpainters::TcxButtonState FRemoveButtonDrawState;
	System::Types::TRect FRemoveButtonGlyphRect;
	System::Types::TRect FRemoveButtonRect;
	Cxlookandfeelpainters::TcxButtonState FRemoveButtonState;
	System::Types::TRect FRowRect;
	TcxConditionViewInfo* __fastcall GetCondition();
	bool __fastcall GetFocused();
	TcxGroupViewInfo* __fastcall GetGroup();
	Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	
protected:
	void __fastcall CalculateButton();
	Cxlookandfeelpainters::TcxButtonState __fastcall CalculateButtonDrawState();
	System::Types::TRect __fastcall CalculateButtonGlyphRect();
	System::Types::TRect __fastcall CalculateButtonRect();
	Cxlookandfeelpainters::TcxButtonState __fastcall CalculateButtonState();
	System::UnicodeString __fastcall CalculateButtonText();
	bool __fastcall CanFocusButtonOnKeyNavigation();
	System::Types::TRect __fastcall GetButtonGlyphMargins();
	System::Types::TSize __fastcall GetButtonGlyphSize();
	virtual int __fastcall GetButtonStartBound();
	bool __fastcall HasButton();
	bool __fastcall IsButtonVisible();
	void __fastcall CalculateRemoveButton();
	Cxlookandfeelpainters::TcxButtonState __fastcall CalculateRemoveButtonDrawState();
	System::Types::TRect __fastcall CalculateRemoveButtonGlyphRect();
	System::Types::TRect __fastcall CalculateRemoveButtonRect();
	Cxlookandfeelpainters::TcxButtonState __fastcall CalculateRemoveButtonState();
	virtual int __fastcall GetRemoveButtonStartBound();
	bool __fastcall HasRemoveButton();
	bool __fastcall IsRemoveButtonVisible();
	void __fastcall CalculateContentRect();
	virtual int __fastcall GetContentFinishBound();
	int __fastcall GetContentStartBound();
	int __fastcall GetContentStartIndent();
	int __fastcall CalculateIndent();
	int __fastcall CalculateLevel();
	int __fastcall GetElementsIndent();
	virtual int __fastcall GetWidth();
	bool __fastcall IsLast();
	virtual void __fastcall ResetCalculatedInfo();
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=GetScaleFactor};
	
public:
	__fastcall virtual TcxCustomRowViewInfo(TcxCustomFilterControl* AControl, TcxCustomRowViewInfo* AParent, Cxfilter::TcxCustomFilterCriteriaItem* ACriteriaItem);
	__fastcall virtual ~TcxCustomRowViewInfo();
	virtual void __fastcall Calc(const System::Types::TRect &ARowRect);
	virtual void __fastcall GetHitTestInfo(const System::Types::TPoint &P, TcxFilterControlHitTestInfo &HitInfo);
	virtual bool __fastcall Ready();
	__property Cxlookandfeelpainters::TcxButtonState ButtonDrawState = {read=FButtonDrawState, nodefault};
	__property System::Types::TRect ButtonGlyphRect = {read=FButtonGlyphRect};
	__property System::Types::TRect ButtonRect = {read=FButtonRect, write=FButtonRect};
	__property Cxlookandfeelpainters::TcxButtonState ButtonState = {read=FButtonState, write=FButtonState, nodefault};
	__property System::UnicodeString ButtonText = {read=FButtonText, write=FButtonText};
	__property TcxConditionViewInfo* Condition = {read=GetCondition};
	__property System::Types::TRect ContentRect = {read=FContentRect};
	__property TcxCustomFilterControl* Control = {read=FControl};
	__property Cxfilter::TcxCustomFilterCriteriaItem* CriteriaItem = {read=FCriteriaItem};
	__property bool Focused = {read=GetFocused, nodefault};
	__property TcxGroupViewInfo* Group = {read=GetGroup};
	__property int Indent = {read=FIndent, nodefault};
	__property int Level = {read=FLevel, nodefault};
	__property TcxCustomRowViewInfo* Parent = {read=FParent};
	__property Cxlookandfeelpainters::TcxButtonState RemoveButtonDrawState = {read=FRemoveButtonDrawState, nodefault};
	__property System::Types::TRect RemoveButtonGlyphRect = {read=FRemoveButtonGlyphRect};
	__property System::Types::TRect RemoveButtonRect = {read=FRemoveButtonRect};
	__property Cxlookandfeelpainters::TcxButtonState RemoveButtonState = {read=FRemoveButtonState, nodefault};
	__property System::Types::TRect RowRect = {read=FRowRect, write=FRowRect};
	__property int Width = {read=GetWidth, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGroupViewInfo : public TcxCustomRowViewInfo
{
	typedef TcxCustomRowViewInfo inherited;
	
private:
	Cxfilter::TcxFilterBoolOperatorKind FBoolOperator;
	Cxlookandfeelpainters::TcxButtonState FBoolOperatorState;
	System::UnicodeString FBoolOperatorText;
	System::Types::TRect FBoolOperatorRect;
	System::UnicodeString FCaption;
	System::Types::TRect FCaptionRect;
	System::Classes::TList* FRows;
	TcxCustomRowViewInfo* __fastcall GetRow(int Index);
	int __fastcall GetRowCount();
	void __fastcall SetRow(int Index, TcxCustomRowViewInfo* const Value);
	
protected:
	void __fastcall CalculateBoolOperator();
	System::Types::TRect __fastcall CalculateBoolOperatorRect();
	Cxlookandfeelpainters::TcxButtonState __fastcall CalculateBoolOperatorState();
	int __fastcall GetBoolOperatorStartBound();
	void __fastcall CalculateCaption();
	System::Types::TRect __fastcall CalculateCaptionRect();
	int __fastcall GetCaptionStartBound();
	bool __fastcall HasCaption();
	virtual int __fastcall GetButtonStartBound();
	virtual int __fastcall GetContentFinishBound();
	virtual int __fastcall GetWidth();
	virtual void __fastcall ResetCalculatedInfo();
	
public:
	__fastcall virtual TcxGroupViewInfo(TcxCustomFilterControl* AControl, TcxCustomRowViewInfo* AParent, Cxfilter::TcxCustomFilterCriteriaItem* ACriteriaItem);
	__fastcall virtual ~TcxGroupViewInfo();
	void __fastcall Add(TcxCustomRowViewInfo* ARow);
	void __fastcall Remove(TcxCustomRowViewInfo* ARow);
	virtual void __fastcall Calc(const System::Types::TRect &ARowRect);
	virtual void __fastcall GetHitTestInfo(const System::Types::TPoint &P, TcxFilterControlHitTestInfo &HitInfo);
	__property Cxfilter::TcxFilterBoolOperatorKind BoolOperator = {read=FBoolOperator, write=FBoolOperator, nodefault};
	__property Cxlookandfeelpainters::TcxButtonState BoolOperatorState = {read=FBoolOperatorState, nodefault};
	__property System::UnicodeString BoolOperatorText = {read=FBoolOperatorText, write=FBoolOperatorText};
	__property System::Types::TRect BoolOperatorRect = {read=FBoolOperatorRect};
	__property System::UnicodeString Caption = {read=FCaption, write=FCaption};
	__property System::Types::TRect CaptionRect = {read=FCaptionRect};
	__property int RowCount = {read=GetRowCount, nodefault};
	__property TcxCustomRowViewInfo* Rows[int Index] = {read=GetRow, write=SetRow};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxValueInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Variant FValue;
	System::Types::TRect FValueContentRect;
	System::Types::TRect FValueRect;
	Cxlookandfeelpainters::TcxButtonState FValueState;
	Vcl::Controls::TCaption FValueText;
	Cxedit::TcxCustomEditViewInfo* FValueViewInfo;
	void __fastcall SetValueViewInfo(Cxedit::TcxCustomEditViewInfo* const Value);
	
public:
	__fastcall TcxValueInfo();
	__fastcall virtual ~TcxValueInfo();
	__property System::Variant Value = {read=FValue, write=FValue};
	__property System::Types::TRect ValueContentRect = {read=FValueContentRect, write=FValueContentRect};
	__property System::Types::TRect ValueRect = {read=FValueRect, write=FValueRect};
	__property Cxlookandfeelpainters::TcxButtonState ValueState = {read=FValueState, write=FValueState, nodefault};
	__property Vcl::Controls::TCaption ValueText = {read=FValueText, write=FValueText};
	__property Cxedit::TcxCustomEditViewInfo* ValueViewInfo = {read=FValueViewInfo, write=SetValueViewInfo};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxValuesViewInfo : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TcxValueInfo* operator[](int Index) { return this->Values[Index]; }
	
private:
	System::Types::TRect FAddButtonGlyphRect;
	System::Types::TRect FAddButtonRect;
	Cxlookandfeelpainters::TcxButtonState FAddButtonState;
	TcxConditionViewInfo* FCondition;
	System::Classes::TList* FList;
	System::UnicodeString FSeparator;
	TcxCustomFilterControl* __fastcall GetControl();
	TcxValueInfo* __fastcall GetValue(int Index);
	int __fastcall GetWidth();
	
protected:
	Cxlookandfeelpainters::TcxButtonState __fastcall CalculateValueState(int AIndex);
	int __fastcall GetCount();
	bool __fastcall HasAddButton();
	void __fastcall UpdateEditorStyle(Cxedit::TcxCustomEditStyle* AStyle, bool AHighlighted, bool AEnabled);
	
public:
	__fastcall TcxValuesViewInfo(TcxConditionViewInfo* ACondition);
	__fastcall virtual ~TcxValuesViewInfo();
	void __fastcall AddValue();
	void __fastcall Calc();
	void __fastcall Clear();
	virtual void __fastcall GetHitTestInfo(const System::Types::TPoint &P, TcxFilterControlHitTestInfo &HitInfo);
	void __fastcall RemoveValue(int AIndex);
	__property System::Types::TRect AddButtonGlyphRect = {read=FAddButtonGlyphRect};
	__property System::Types::TRect AddButtonRect = {read=FAddButtonRect};
	__property Cxlookandfeelpainters::TcxButtonState AddButtonState = {read=FAddButtonState, nodefault};
	__property TcxConditionViewInfo* Condition = {read=FCondition};
	__property TcxCustomFilterControl* Control = {read=GetControl};
	__property int Count = {read=GetCount, nodefault};
	__property System::UnicodeString Separator = {read=FSeparator};
	__property TcxValueInfo* Values[int Index] = {read=GetValue/*, default*/};
	__property int Width = {read=GetWidth, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxConditionViewInfo : public TcxCustomRowViewInfo
{
	typedef TcxCustomRowViewInfo inherited;
	
private:
	System::Classes::TStringList* FCustomFunctions;
	Dxcustomfunction::TdxCustomFunctionOperator* FCustomFunctionOperator;
	Cxfiltercontrolutils::TcxCustomFilterEditHelperClass FEditorHelper;
	Cxedit::TcxCustomEditProperties* FEditorProperties;
	System::UnicodeString FExpression;
	System::Types::TRect FExpressionRect;
	System::Types::TRect FExpressionButtonRect;
	Cxlookandfeelpainters::TcxButtonState FExpressionButtonState;
	int FItemIndex;
	System::TObject* FItemLink;
	System::Types::TRect FItemRect;
	Cxlookandfeelpainters::TcxButtonState FItemState;
	System::UnicodeString FItemText;
	Cxfiltercontrolutils::TcxFilterControlOperator FOperator;
	System::Types::TRect FOperatorRect;
	Cxlookandfeelpainters::TcxButtonState FOperatorState;
	System::UnicodeString FOperatorText;
	Cxedit::TcxCustomEditProperties* FProperties;
	Cxfiltercontrolutils::TcxFilterControlOperators FSupportedOperators;
	Cxdatastorage::TcxValueTypeClass FValueType;
	TcxValuesViewInfo* FValues;
	int __fastcall GetItemIndex();
	void __fastcall SetExpression(const System::UnicodeString AValue);
	void __fastcall SetItemText(const System::UnicodeString AValue);
	void __fastcall SetOperatorText(const System::UnicodeString Value);
	void __fastcall SetOperator(const Cxfiltercontrolutils::TcxFilterControlOperator Value);
	System::UnicodeString __fastcall GetCustomFunctionOperatorName();
	
protected:
	Cxedit::TcxCustomEditData* ValueEditorData;
	void __fastcall CalculateItem();
	System::Types::TRect __fastcall CalculateItemRect();
	Cxlookandfeelpainters::TcxButtonState __fastcall CalculateItemState();
	int __fastcall GetItemStartBound();
	void __fastcall CalculateOperator();
	int __fastcall GetOperatorIndent();
	System::Types::TRect __fastcall CalculateOperatorRect();
	Cxlookandfeelpainters::TcxButtonState __fastcall CalculateOperatorState();
	System::UnicodeString __fastcall CalculateOperatorText();
	int __fastcall GetOperatorStartBound();
	bool __fastcall NeedDrawOperatorAsImage();
	void __fastcall CalculateExpression();
	System::Types::TRect __fastcall CalculateExpressionRect();
	int __fastcall GetExpressionStartBound();
	virtual bool __fastcall IsExpressionVisible();
	void __fastcall CalculateExpressionButton();
	System::Types::TRect __fastcall CalculateExpressionButtonRect();
	Cxlookandfeelpainters::TcxButtonState __fastcall CalculateExpressionButtonState();
	bool __fastcall CanShowExpressionButton();
	int __fastcall GetExpressionButtonStartBound();
	virtual bool __fastcall HasExpressionButton();
	void __fastcall AddValue();
	virtual int __fastcall GetContentFinishBound();
	virtual int __fastcall GetRemoveButtonStartBound();
	virtual int __fastcall GetWidth();
	virtual bool __fastcall HasDisplayValues();
	void __fastcall InitValues(bool ASaveValue);
	virtual void __fastcall InternalInit();
	bool __fastcall IsOperatorSupportedForExpression()/* overload */;
	bool __fastcall IsOperatorSupportedForExpression(Cxfiltercontrolutils::TcxFilterControlOperator AOperator)/* overload */;
	virtual void __fastcall ResetCalculatedInfo();
	void __fastcall SetItem(int AIndex);
	void __fastcall SetItemLink(System::TObject* AItemLink);
	void __fastcall UpdateSupportedOperators();
	void __fastcall ValidateConditions();
	__property System::Classes::TStringList* CustomFunctions = {read=FCustomFunctions};
	__property Dxcustomfunction::TdxCustomFunctionOperator* CustomFunctionOperator = {read=FCustomFunctionOperator, write=FCustomFunctionOperator};
	__property System::UnicodeString CustomFunctionOperatorName = {read=GetCustomFunctionOperatorName};
	__property Cxedit::TcxCustomEditProperties* Properties = {read=FProperties};
	
public:
	__fastcall virtual TcxConditionViewInfo(TcxCustomFilterControl* AControl, TcxCustomRowViewInfo* AParent, Cxfilter::TcxCustomFilterCriteriaItem* ACriteriaItem);
	__fastcall virtual ~TcxConditionViewInfo();
	virtual void __fastcall Calc(const System::Types::TRect &ARowRect);
	virtual void __fastcall GetHitTestInfo(const System::Types::TPoint &P, TcxFilterControlHitTestInfo &HitInfo);
	Cxedit::TcxCustomEditProperties* __fastcall GetProperties();
	virtual bool __fastcall Ready();
	__property Cxfiltercontrolutils::TcxCustomFilterEditHelperClass EditorHelper = {read=FEditorHelper};
	__property Cxedit::TcxCustomEditProperties* EditorProperties = {read=FEditorProperties};
	__property System::UnicodeString Expression = {read=FExpression, write=SetExpression};
	__property System::Types::TRect ExpressionRect = {read=FExpressionRect};
	__property System::Types::TRect ExpressionButtonRect = {read=FExpressionButtonRect};
	__property Cxlookandfeelpainters::TcxButtonState ExpressionButtonState = {read=FExpressionButtonState, nodefault};
	__property System::TObject* ItemLink = {read=FItemLink};
	__property int ItemIndex = {read=FItemIndex, nodefault};
	__property System::Types::TRect ItemRect = {read=FItemRect};
	__property Cxlookandfeelpainters::TcxButtonState ItemState = {read=FItemState, nodefault};
	__property System::UnicodeString ItemText = {read=FItemText, write=SetItemText};
	__property Cxfiltercontrolutils::TcxFilterControlOperator Operator = {read=FOperator, write=SetOperator, nodefault};
	__property System::Types::TRect OperatorRect = {read=FOperatorRect};
	__property Cxlookandfeelpainters::TcxButtonState OperatorState = {read=FOperatorState, nodefault};
	__property System::UnicodeString OperatorText = {read=FOperatorText, write=SetOperatorText};
	__property Cxfiltercontrolutils::TcxFilterControlOperators SupportedOperators = {read=FSupportedOperators};
	__property Cxdatastorage::TcxValueTypeClass ValueType = {read=FValueType};
	__property TcxValuesViewInfo* Values = {read=FValues};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxFilterControlImagesHelper : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	static Cxgraphics::TcxImageList* FFilterControlImages;
	static Dxcoregraphics::_di_IdxColorPalette FColorProvider;
	static Cxgraphics::TcxImageList* __fastcall GetFilterControlImages();
	__classmethod void __fastcall LoadSvgImages(Cxgraphics::TcxImageList* AImageList, System::Classes::TStream* AStream);
	__classmethod void __fastcall LoadPngImages(Cxgraphics::TcxImageList* AImageList, System::Classes::TStream* AStream);
	
protected:
	__classmethod void __fastcall CreateImages();
	__classmethod void __fastcall DestroyImages();
	__classmethod void __fastcall DrawImage(Vcl::Graphics::TCanvas* ACanvas, int AIndex, const System::Types::TRect &ABounds, Dxcoregraphics::_di_IdxColorPalette APalette)/* overload */;
	__classmethod void __fastcall DrawImage(Vcl::Graphics::TCanvas* ACanvas, int AIndex, const System::Types::TRect &ABounds, Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* APainter, Dxcoregraphics::TdxAlphaColor AAccentColor)/* overload */;
	__classmethod int __fastcall GetOperatorImageIndex(Cxfiltercontrolutils::TcxFilterControlOperator AOperator);
	/* static */ __property Cxgraphics::TcxImageList* FilterControlImages = {read=GetFilterControlImages};
	
public:
	__classmethod void __fastcall DrawOperatorImage(Vcl::Graphics::TCanvas* ACanvas, Cxfiltercontrolutils::TcxFilterControlOperator AOperator, const System::Types::TRect &ABounds, Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* APainter, Dxcoregraphics::TdxAlphaColor AAccentColor);
	__classmethod System::Types::TSize __fastcall GetScaledSize(Cxgeometry::TdxScaleFactor* AScaleFactor);
	__classmethod System::Types::TSize __fastcall GetSize();
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
public:
	/* TObject.Create */ inline __fastcall TcxFilterControlImagesHelper() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxFilterControlImagesHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxFilterDropDownMenuInnerListBoxIncrementalSearchController : public Cxlistbox::TdxListBoxIncrementalSearchController
{
	typedef Cxlistbox::TdxListBoxIncrementalSearchController inherited;
	
private:
	TcxFilterDropDownMenuInnerListBox* __fastcall GetListBox();
	
protected:
	virtual bool __fastcall DoIncrementalSearch(System::WideChar &Key);
	virtual bool __fastcall IsIncSearchChar(System::WideChar AChar);
	virtual bool __fastcall ProcessKeyPress(System::WideChar &Key);
	__property TcxFilterDropDownMenuInnerListBox* ListBox = {read=GetListBox};
	
public:
	virtual void __fastcall ClearIncrementalSearch();
public:
	/* TdxListBoxIncrementalSearchController.Create */ inline __fastcall virtual TcxFilterDropDownMenuInnerListBoxIncrementalSearchController(Cxlistbox::TdxCustomListBox* AListBox) : Cxlistbox::TdxListBoxIncrementalSearchController(AListBox) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxFilterDropDownMenuInnerListBoxIncrementalSearchController() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxFilterListBoxItem : public Cxlistbox::TdxCustomListBoxItem
{
	typedef Cxlistbox::TdxCustomListBoxItem inherited;
	
public:
	Dxcustomfunction::TdxCustomFunctionOperator* CustomFunctionOperator;
public:
	/* TdxCustomListBoxItem.Create */ inline __fastcall virtual TcxFilterListBoxItem(Cxlistbox::TdxCustomListBoxItems* AOwner) : Cxlistbox::TdxCustomListBoxItem(AOwner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxFilterListBoxItem() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterListBoxItems : public Cxlistbox::TdxCustomListBoxItems
{
	typedef Cxlistbox::TdxCustomListBoxItems inherited;
	
protected:
	virtual Cxlistbox::TdxCustomListBoxItemClass __fastcall GetItemClass();
public:
	/* TdxCustomListBoxItems.Create */ inline __fastcall virtual TdxFilterListBoxItems(Cxlistbox::TdxCustomListBox* AOwnerControl) : Cxlistbox::TdxCustomListBoxItems(AOwnerControl) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TdxFilterListBoxItems() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxFilterDropDownMenuInnerListBox : public Cxlistbox::TdxCustomDropDownInnerListBox
{
	typedef Cxlistbox::TdxCustomDropDownInnerListBox inherited;
	
private:
	bool FShowShortCut;
	bool __fastcall CheckAccelerators(System::Word AKey);
	
protected:
	virtual Cxlistbox::TdxListBoxIncrementalSearchController* __fastcall CreateIncrementalSearchController();
	virtual void __fastcall DoKeyPress(System::WideChar &Key);
	virtual void __fastcall DrawItemImage(const System::Types::TRect &R, Cxlistbox::TdxCustomListBoxItem* AItem, Cxlookandfeelpainters::TcxButtonState AState);
	virtual void __fastcall DrawItemText(const System::Types::TRect &R, Cxlistbox::TdxCustomListBoxItem* AItem, Cxlookandfeelpainters::TcxButtonState AState);
	virtual Cxlistbox::TdxCustomListBoxItemsClass __fastcall GetItemsClass();
	virtual int __fastcall GetTextFlags();
	bool __fastcall IsIncSearch();
	virtual bool __fastcall ProcessNavigationKey(System::Word &Key, System::Classes::TShiftState Shift);
	
public:
	__property bool ShowShortCut = {read=FShowShortCut, write=FShowShortCut, nodefault};
public:
	/* TdxCustomDropDownInnerListBox.Create */ inline __fastcall virtual TcxFilterDropDownMenuInnerListBox(System::Classes::TComponent* AOwner) : Cxlistbox::TdxCustomDropDownInnerListBox(AOwner) { }
	
public:
	/* TdxCustomListBox.Destroy */ inline __fastcall virtual ~TcxFilterDropDownMenuInnerListBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxFilterDropDownMenuInnerListBox(HWND ParentWindow) : Cxlistbox::TdxCustomDropDownInnerListBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxFilterControlDropDownMenuInnerListBox : public TcxFilterDropDownMenuInnerListBox
{
	typedef TcxFilterDropDownMenuInnerListBox inherited;
	
public:
	/* TdxCustomDropDownInnerListBox.Create */ inline __fastcall virtual TcxFilterControlDropDownMenuInnerListBox(System::Classes::TComponent* AOwner) : TcxFilterDropDownMenuInnerListBox(AOwner) { }
	
public:
	/* TdxCustomListBox.Destroy */ inline __fastcall virtual ~TcxFilterControlDropDownMenuInnerListBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxFilterControlDropDownMenuInnerListBox(HWND ParentWindow) : TcxFilterDropDownMenuInnerListBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxFilterDropDownMenu : public Cxlistbox::TdxCustomDropDownListBox
{
	typedef Cxlistbox::TdxCustomDropDownListBox inherited;
	
private:
	TcxFilterDropDownMenuInnerListBox* __fastcall GetInnerListBox();
	
protected:
	virtual Cxlistbox::TdxCustomDropDownInnerListBox* __fastcall CreateInnerListBox();
	__property TcxFilterDropDownMenuInnerListBox* InnerListBox = {read=GetInnerListBox};
	
public:
	__fastcall virtual TcxFilterDropDownMenu(Cxcontrols::TcxControl* AControl);
	void __fastcall CreateConditionList(const Cxfiltercontrolutils::TcxFilterControlOperators &ASupportedOperators, System::Classes::TStringList* ACustomFunctions = (System::Classes::TStringList*)(0x0));
	HIDESBASE virtual void __fastcall Popup(const System::Types::TRect &AForBounds, const System::UnicodeString ACaption = System::UnicodeString(), System::WideChar AKey = (System::WideChar)(0x0));
public:
	/* TdxCustomDropDownListBox.CreateEx */ inline __fastcall TcxFilterDropDownMenu(Vcl::Controls::TWinControl* AOwnerControl, Cxcontrols::TcxControl* AOwnerParent) : Cxlistbox::TdxCustomDropDownListBox(AOwnerControl, AOwnerParent) { }
	/* TdxCustomDropDownListBox.Destroy */ inline __fastcall virtual ~TcxFilterDropDownMenu() { }
	
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TcxFilterDropDownMenu(System::Classes::TComponent* AOwner, int Dummy) : Cxlistbox::TdxCustomDropDownListBox(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxFilterDropDownMenu(HWND ParentWindow) : Cxlistbox::TdxCustomDropDownListBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxFilterControlDropDownMenu : public TcxFilterDropDownMenu
{
	typedef TcxFilterDropDownMenu inherited;
	
private:
	TcxCustomFilterControl* FControl;
	TcxFilterControlHitTestInfo FDroppedInfo;
	HIDESBASE TcxFilterControlDropDownMenuInnerListBox* __fastcall GetInnerListBox();
	void __fastcall SaveDroppedInfo();
	
protected:
	virtual Cxlistbox::TdxCustomDropDownInnerListBox* __fastcall CreateInnerListBox();
	virtual void __fastcall DoCloseUp(bool AClosedViaKeyboard);
	virtual void __fastcall DoSelectItem(Cxlistbox::TdxCustomListBoxItem* AItem, bool ASelectedViaKeyboard);
	void __fastcall ClearDroppedInfo();
	void __fastcall CreateActionMenu();
	void __fastcall CreateItemList(System::Classes::TStrings* AList);
	void __fastcall CreateBoolOperatorList();
	bool __fastcall IsSameDroppedInfo(const TcxFilterControlHitTestInfo &AInfo);
	__property TcxCustomFilterControl* Control = {read=FControl};
	__property TcxFilterControlDropDownMenuInnerListBox* InnerListBox = {read=GetInnerListBox};
	
public:
	__fastcall virtual TcxFilterControlDropDownMenu(TcxCustomFilterControl* AControl);
	virtual void __fastcall Popup(const System::Types::TRect &AForBounds, const System::UnicodeString ACaption = System::UnicodeString(), System::WideChar AKey = (System::WideChar)(0x0));
public:
	/* TdxCustomDropDownListBox.CreateEx */ inline __fastcall TcxFilterControlDropDownMenu(Vcl::Controls::TWinControl* AOwnerControl, Cxcontrols::TcxControl* AOwnerParent) : TcxFilterDropDownMenu(AOwnerControl, AOwnerParent) { }
	/* TdxCustomDropDownListBox.Destroy */ inline __fastcall virtual ~TcxFilterControlDropDownMenu() { }
	
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TcxFilterControlDropDownMenu(System::Classes::TComponent* AOwner, int Dummy) : TcxFilterDropDownMenu(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxFilterControlDropDownMenu(HWND ParentWindow) : TcxFilterDropDownMenu(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TFilterControlState : unsigned char { fcsNormal, fcsSelectingAction, fcsSelectingItem, fcsSelectingBoolOperator, fcsSelectingCondition, fcsSelectingValue };

enum DECLSPEC_DENUM TcxFilterControlFont : unsigned char { fcfBoolOperator, fcfItem, fcfCondition, fcfValue, fcfExpression };

typedef System::Set<TcxFilterControlFont, TcxFilterControlFont::fcfBoolOperator, TcxFilterControlFont::fcfExpression> TcxFilterControlFonts;

enum DECLSPEC_DENUM TcxActivateValueEditKind : unsigned char { aveEnter, aveKey, aveMouse };

class PASCALIMPLEMENTATION TcxCustomFilterControl : public Cxcontrols::TcxControl
{
	typedef Cxcontrols::TcxControl inherited;
	
private:
	TcxFilterControlFonts FAssignedFonts;
	TcxFilterControlCriteria* FCriteria;
	Cxfilter::TcxFilterCriteriaDisplayStyle FCriteriaDisplayStyle;
	TcxFilterControlDropDownMenu* FDropDownMenu;
	TcxFilterControlHitTestInfo FFocusedInfo;
	System::StaticArray<Vcl::Graphics::TFont*, 5> FFonts;
	TcxFilterControlHitTestInfo FHotTrack;
	Cxedit::TcxInplaceEditList* FInplaceEditors;
	bool FIsFontsChangedLocked;
	int FLeftOffset;
	int FLockCount;
	TcxCustomRowViewInfo* FRoot;
	System::Classes::TList* FRows;
	bool FSortItems;
	TFilterControlState FState;
	Cxtextedit::TcxTextEditProperties* FTextEditProperties;
	int FTopVisibleRow;
	Cxedit::TcxCustomEdit* FValueEditor;
	Cxedit::TcxCustomEditStyle* FValueEditorStyle;
	TcxFilterControlViewInfo* FViewInfo;
	bool FHotTrackOnUnfocused;
	System::UnicodeString FNullstring;
	bool FShowLevelLines;
	bool FWantTabs;
	bool FWasError;
	System::Classes::TNotifyEvent FOnApplyFilter;
	void __fastcall CreateFonts();
	void __fastcall DoFontChanged(System::TObject* Sender);
	Vcl::Graphics::TFont* __fastcall GetFont(int Index);
	HIDESBASE bool __fastcall IsFontStored(int Index);
	HIDESBASE void __fastcall SetFont(int Index, Vcl::Graphics::TFont* const Value);
	int __fastcall FocusedRowIndex();
	TcxCustomRowViewInfo* __fastcall GetRow(int Index);
	int __fastcall GetRowCount();
	TcxCustomRowViewInfo* __fastcall GetFocusedRow();
	System::Uitypes::TColor __fastcall GetValueEditorBackgroundColor();
	System::Types::TRect __fastcall GetValueEditorBounds();
	void __fastcall DropDownMenuItemClick(int AIndex);
	void __fastcall SetFocusedRow(TcxCustomRowViewInfo* ARow);
	void __fastcall ActionMenuClick(int AIndex);
	bool __fastcall IsNullstringStored();
	void __fastcall ProcessHitTest(TcxFilterControlHitTest AHitTest, System::WideChar AKey);
	void __fastcall ReadData(System::Classes::TStream* AStream);
	void __fastcall RecalcRows();
	void __fastcall RefreshFonts();
	void __fastcall SetAssignedFonts(const TcxFilterControlFonts Value);
	void __fastcall SetCriteriaDisplayStyle(const Cxfilter::TcxFilterCriteriaDisplayStyle AValue);
	void __fastcall SetLeftOffset(int Value);
	void __fastcall SetNullstring(const System::UnicodeString Value);
	void __fastcall SetTopVisibleRow(int Value);
	void __fastcall SetShowLevelLines(const bool Value);
	void __fastcall SetWantTabs(const bool Value);
	void __fastcall ValidateEditorPos(const System::Types::TRect &ABounds);
	void __fastcall ValueEditorInit();
	void __fastcall ValueEditorAfterKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall ValueEditorExit(System::TObject* Sender);
	void __fastcall ValueEditorKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall ValueEditorMouseLeave(System::TObject* ASender);
	void __fastcall ValueEditorMouseMove(System::TObject* Sender, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall WriteData(System::Classes::TStream* AStream);
	MESSAGE void __fastcall WMDropDownMenuClosed(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint();
	virtual void __fastcall SetEnabled(bool Value);
	virtual void __fastcall SetParent(Vcl::Controls::TWinControl* AParent);
	virtual void __fastcall BiDiModeChanged();
	DYNAMIC void __fastcall BoundsChanged();
	virtual void __fastcall ChangeScaleEx(int M, int D, bool isDpiChange);
	virtual void __fastcall DoLayoutChange();
	DYNAMIC void __fastcall FocusChanged();
	DYNAMIC void __fastcall FontChanged();
	virtual int __fastcall GetBorderSize();
	virtual void __fastcall InitControl();
	virtual void __fastcall InitScrollBarsParameters();
	virtual void __fastcall LookAndFeelChanged(Cxlookandfeels::TcxLookAndFeel* Sender, Cxlookandfeels::TcxLookAndFeelValues AChangedValues);
	DYNAMIC void __fastcall MouseEnter(Vcl::Controls::TControl* AControl);
	DYNAMIC void __fastcall MouseLeave(Vcl::Controls::TControl* AControl);
	virtual void __fastcall Scroll(Vcl::Forms::TScrollBarKind AScrollBarKind, System::Uitypes::TScrollCode AScrollCode, int &AScrollPos);
	void __fastcall AddCondition(TcxCustomRowViewInfo* ARow);
	void __fastcall AddGroup();
	void __fastcall AddValue();
	void __fastcall ClearRows();
	HIDESBASE void __fastcall Remove();
	void __fastcall RemoveRow();
	void __fastcall RemoveValue();
	void __fastcall FocusNext(bool ATab);
	void __fastcall FocusPrev(bool ATab);
	void __fastcall FocusUp(bool ATab);
	void __fastcall FocusDown(bool ATab);
	void __fastcall RowNavigate(TcxFilterControlHitTest AElement, int ACellIndex = 0xffffffff);
	void __fastcall ValueEditorHide(bool AAccept);
	void __fastcall Recalculate();
	void __fastcall EnsureRowVisible();
	void __fastcall RefreshProperties();
	virtual void __fastcall BuildFromCriteria();
	void __fastcall BuildFromRows();
	virtual void __fastcall CreateInternalControls();
	virtual void __fastcall DestroyInternalControls();
	virtual void __fastcall DoApplyFilter();
	virtual Cxedit::TcxCustomEditProperties* __fastcall GetDefaultProperties();
	Cxedit::TcxCustomEditViewInfo* __fastcall GetDefaultPropertiesViewInfo();
	virtual TcxFilterControlCriteriaClass __fastcall GetFilterControlCriteriaClass();
	virtual TcxFilterControlViewInfoClass __fastcall GetViewInfoClass();
	bool __fastcall HasFocus();
	bool __fastcall HasHotTrack();
	virtual void __fastcall FillFilterItemList(System::Classes::TStrings* AStrings);
	void __fastcall UpdateHotTrackInfo(System::Classes::TShiftState Shift, int X, int Y);
	bool __fastcall UseTokens();
	virtual void __fastcall ValidateConditions(Cxfiltercontrolutils::TcxFilterControlOperators &SupportedOperations);
	virtual void __fastcall CorrectOperatorClass(Cxfilter::TcxFilterOperatorClass &AOperatorClass);
	virtual System::UnicodeString __fastcall GetFilterCaption();
	virtual _di_IcxFilterControl __fastcall GetFilterLink();
	virtual _di_IcxFilterControlEx __fastcall GetFilterLinkEx();
	virtual System::UnicodeString __fastcall GetFilterText();
	virtual void __fastcall RemoveAction();
	virtual void __fastcall SelectAction();
	virtual void __fastcall SelectBoolOperator(System::WideChar AKey);
	virtual void __fastcall SelectCondition(System::WideChar AKey);
	virtual void __fastcall SelectExpression();
	virtual void __fastcall SelectItem(System::WideChar AKey);
	virtual void __fastcall SelectValue(TcxActivateValueEditKind AActivateKind, System::WideChar AKey);
	HIDESBASE void __fastcall DoMouseLeave();
	void __fastcall FormatChanged();
	__property TcxFilterControlCriteria* Criteria = {read=FCriteria};
	__property Cxfilter::TcxFilterCriteriaDisplayStyle CriteriaDisplayStyle = {read=FCriteriaDisplayStyle, write=SetCriteriaDisplayStyle, default=0};
	__property TcxFilterControlDropDownMenu* DropDownMenu = {read=FDropDownMenu};
	__property _di_IcxFilterControl FilterLink = {read=GetFilterLink};
	__property _di_IcxFilterControlEx FilterLinkEx = {read=GetFilterLinkEx};
	__property TcxFilterControlHitTestInfo FocusedInfo = {read=FFocusedInfo};
	__property TcxCustomRowViewInfo* FocusedRow = {read=GetFocusedRow, write=SetFocusedRow};
	__property Vcl::Graphics::TFont* FontExpression = {read=GetFont, write=SetFont, stored=IsFontStored, index=4};
	__property TcxFilterControlHitTestInfo HotTrack = {read=FHotTrack};
	__property int LeftOffset = {read=FLeftOffset, write=SetLeftOffset, nodefault};
	__property System::UnicodeString Nullstring = {read=FNullstring, write=SetNullstring, stored=IsNullstringStored};
	__property TcxCustomRowViewInfo* Root = {read=FRoot};
	__property int RowCount = {read=GetRowCount, nodefault};
	__property TcxCustomRowViewInfo* Rows[int Index] = {read=GetRow};
	__property TFilterControlState State = {read=FState, write=FState, nodefault};
	__property int TopVisibleRow = {read=FTopVisibleRow, write=SetTopVisibleRow, nodefault};
	__property Cxedit::TcxCustomEdit* ValueEditor = {read=FValueEditor};
	__property TcxFilterControlViewInfo* ViewInfo = {read=FViewInfo};
	
public:
	__fastcall virtual TcxCustomFilterControl(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TcxCustomFilterControl();
	void __fastcall ApplyFilter();
	void __fastcall BeginUpdate();
	virtual void __fastcall Clear();
	void __fastcall EndUpdate();
	bool __fastcall IsNeedSynchronize();
	virtual bool __fastcall IsValid();
	bool __fastcall HasItems();
	void __fastcall LayoutChanged();
	void __fastcall Localize();
	void __fastcall LoadFromStream(System::Classes::TStream* AStream);
	void __fastcall SaveToStream(System::Classes::TStream* AStream);
	void __fastcall LoadFromFile(const System::UnicodeString AFileName);
	void __fastcall SaveToFile(const System::UnicodeString AFileName);
	virtual void __fastcall TranslationChanged();
	__property TcxFilterControlFonts AssignedFonts = {read=FAssignedFonts, write=SetAssignedFonts, default=0};
	__property Color = {default=-16777201};
	__property System::UnicodeString FilterCaption = {read=GetFilterCaption};
	__property System::UnicodeString FilterText = {read=GetFilterText};
	__property Vcl::Graphics::TFont* FontBoolOperator = {read=GetFont, write=SetFont, stored=IsFontStored, index=0};
	__property Vcl::Graphics::TFont* FontCondition = {read=GetFont, write=SetFont, stored=IsFontStored, index=2};
	__property Vcl::Graphics::TFont* FontItem = {read=GetFont, write=SetFont, stored=IsFontStored, index=1};
	__property Vcl::Graphics::TFont* FontValue = {read=GetFont, write=SetFont, stored=IsFontStored, index=3};
	__property bool HotTrackOnUnfocused = {read=FHotTrackOnUnfocused, write=FHotTrackOnUnfocused, default=1};
	__property LookAndFeel;
	__property ParentColor = {default=0};
	__property bool ShowLevelLines = {read=FShowLevelLines, write=SetShowLevelLines, default=1};
	__property bool SortItems = {read=FSortItems, write=FSortItems, default=0};
	__property bool WantTabs = {read=FWantTabs, write=SetWantTabs, default=0};
	__property System::Classes::TNotifyEvent OnApplyFilter = {read=FOnApplyFilter, write=FOnApplyFilter};
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomFilterControl(HWND ParentWindow) : Cxcontrols::TcxControl(ParentWindow) { }
	
private:
	void *__IdxSkinSupport;	// Cxlookandfeels::IdxSkinSupport 
	void *__IcxFormatControllerListener;	// Cxformats::IcxFormatControllerListener 
	void *__IcxMouseTrackingCaller;	// Dxcoreclasses::IcxMouseTrackingCaller 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {EF3FF483-9B69-46DF-95A4-D3A3810F63A5}
	operator Cxlookandfeels::_di_IdxSkinSupport()
	{
		Cxlookandfeels::_di_IdxSkinSupport intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxlookandfeels::IdxSkinSupport*(void) { return (Cxlookandfeels::IdxSkinSupport*)&__IdxSkinSupport; }
	#endif
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
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {84A4BCBE-E001-4D60-B7A6-75E2B0DCD3E9}
	operator Dxcoreclasses::_di_IcxMouseTrackingCaller()
	{
		Dxcoreclasses::_di_IcxMouseTrackingCaller intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxcoreclasses::IcxMouseTrackingCaller*(void) { return (Dxcoreclasses::IcxMouseTrackingCaller*)&__IcxMouseTrackingCaller; }
	#endif
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxFilterControlPainter : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TcxCustomFilterControl* FControl;
	Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetPainter();
	TcxFilterControlViewInfo* __fastcall GetViewInfo();
	void __fastcall DrawGroup(TcxGroupViewInfo* ARow);
	void __fastcall DrawCondition(TcxConditionViewInfo* ARow);
	void __fastcall DrawExpression(TcxConditionViewInfo* ARow);
	void __fastcall DrawItemCaption(TcxConditionViewInfo* ARow);
	void __fastcall DrawOperator(TcxConditionViewInfo* ARow);
	void __fastcall DrawValues(TcxConditionViewInfo* ARow);
	
protected:
	virtual System::Uitypes::TColor __fastcall GetContentColor();
	void __fastcall DrawBorder();
	void __fastcall DrawDotLine(const System::Types::TRect &R);
	virtual void __fastcall DrawRow(TcxCustomRowViewInfo* ARow);
	void __fastcall TextDraw(int X, int Y, const System::UnicodeString AText);
	
public:
	__fastcall virtual TcxFilterControlPainter(TcxCustomFilterControl* AOwner);
	__property Cxgraphics::TcxCanvas* Canvas = {read=GetCanvas};
	__property System::Uitypes::TColor ContentColor = {read=GetContentColor, nodefault};
	__property TcxCustomFilterControl* Control = {read=FControl};
	__property Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* Painter = {read=GetPainter};
	__property TcxFilterControlViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxFilterControlPainter() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxFilterControlPainterClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxFilterControlViewInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TcxCustomFilterControl* FControl;
	System::Types::TRect FAddConditionRect;
	System::UnicodeString FAddConditionCaption;
	Vcl::Graphics::TBitmap* FBitmap;
	Cxgraphics::TcxCanvas* FBitmapCanvas;
	Cxlookandfeelpainters::TcxButtonState FButtonState;
	int FContentWidth;
	bool FEnabled;
	System::Types::TRect FFocusRect;
	bool FIsMinTokenPaddingValid;
	bool FIsTokenParamsValid;
	int FMaxRowWidth;
	TcxFilterControlPainter* FPainter;
	int FRowHeight;
	System::Types::TRect FMinTokenPadding;
	int FMinValueWidth;
	Cxlookandfeelpainters::TdxFilterTokenParams FTokenParams;
	void __fastcall AdjustTokenPadding(System::Types::TRect &APadding);
	void __fastcall CalcButtonState();
	void __fastcall CheckBitmap();
	Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	int __fastcall GetEditHeight();
	System::Types::TRect __fastcall GetMinTokenPadding();
	Cxlookandfeelpainters::TdxFilterTokenParams __fastcall GetTokenParams();
	
protected:
	virtual void __fastcall CalcFocusRect();
	virtual TcxFilterControlPainterClass __fastcall GetPainterClass();
	System::Types::TRect __fastcall GetRowMargins();
	System::Types::TRect __fastcall GetTextMargins(TcxFilterControlHitTest AItem);
	bool __fastcall HasAddConditionButton();
	void __fastcall InvalidateMinTokenPadding();
	void __fastcall InvalidateTokenParams();
	void __fastcall ResetContentWidth();
	__property System::Types::TRect MinTokenPadding = {read=GetMinTokenPadding};
	__property Cxlookandfeelpainters::TdxFilterTokenParams TokenParams = {read=GetTokenParams};
	
public:
	__fastcall virtual TcxFilterControlViewInfo(TcxCustomFilterControl* AOwner);
	__fastcall virtual ~TcxFilterControlViewInfo();
	void __fastcall Calc();
	virtual void __fastcall GetHitTestInfo(System::Classes::TShiftState AShift, const System::Types::TPoint &P, TcxFilterControlHitTestInfo &HitInfo);
	void __fastcall Paint();
	void __fastcall InvalidateRow(TcxCustomRowViewInfo* ARow);
	void __fastcall Update();
	__property System::UnicodeString AddConditionCaption = {read=FAddConditionCaption};
	__property System::Types::TRect AddConditionRect = {read=FAddConditionRect};
	__property Cxlookandfeelpainters::TcxButtonState ButtonState = {read=FButtonState, nodefault};
	__property Cxgraphics::TcxCanvas* Canvas = {read=GetCanvas};
	__property TcxCustomFilterControl* Control = {read=FControl};
	__property int ContentWidth = {read=FContentWidth, nodefault};
	__property bool Enabled = {read=FEnabled, nodefault};
	__property int MinValueWidth = {read=FMinValueWidth, nodefault};
	__property TcxFilterControlPainter* Painter = {read=FPainter};
	__property int RowHeight = {read=FRowHeight, nodefault};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxFilterControl : public TcxCustomFilterControl
{
	typedef TcxCustomFilterControl inherited;
	
private:
	System::Classes::TComponent* FLinkComponent;
	System::Classes::TComponent* __fastcall GetLinkComponent();
	void __fastcall RegisterLinkNotifications();
	void __fastcall SetLinkComponent(System::Classes::TComponent* Value);
	void __fastcall UnregisterLinkNotifications();
	
protected:
	virtual _di_IcxFilterControl __fastcall GetFilterLink();
	virtual _di_IcxFilterControlEx __fastcall GetFilterLinkEx();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	__fastcall virtual ~TcxFilterControl();
	void __fastcall UpdateFilter();
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property AssignedFonts = {default=0};
	__property BiDiMode;
	__property Color = {default=-16777201};
	__property CriteriaDisplayStyle = {default=0};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property FontBoolOperator;
	__property FontCondition;
	__property FontExpression;
	__property FontItem;
	__property FontValue;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint;
	__property HotTrackOnUnfocused = {default=1};
	__property System::Classes::TComponent* LinkComponent = {read=GetLinkComponent, write=SetLinkComponent};
	__property LookAndFeel;
	__property Nullstring = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property ShowLevelLines = {default=1};
	__property SortItems = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Visible = {default=1};
	__property WantTabs = {default=0};
	__property OnApplyFilter;
	__property OnClick;
	__property OnContextPopup;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TcxCustomFilterControl.Create */ inline __fastcall virtual TcxFilterControl(System::Classes::TComponent* AOwner) : TcxCustomFilterControl(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxFilterControl(HWND ParentWindow) : TcxCustomFilterControl(ParentWindow) { }
	
private:
	void *__IcxFilterControlDialog;	// IcxFilterControlDialog 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {D2369F8D-3B22-41A8-881E-B01BEB624B7D}
	operator _di_IcxFilterControlDialog()
	{
		_di_IcxFilterControlDialog intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IcxFilterControlDialog*(void) { return (IcxFilterControlDialog*)&__IcxFilterControlDialog; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 cxFilterControlMaxDropDownRows = System::Int8(0xc);
extern DELPHI_PACKAGE int cxFilterControlIncSearchDelay;
extern DELPHI_PACKAGE System::UnicodeString __fastcall cxGetConditionText(Cxfiltercontrolutils::TcxFilterControlOperator AOperator);
extern DELPHI_PACKAGE bool __fastcall IsSupportFiltering(Cxedit::TcxCustomEditPropertiesClass AClass);
extern DELPHI_PACKAGE System::Types::TRect __fastcall cxGetMinTokenPadding(Cxgeometry::TdxScaleFactor* AScaleFactor, bool AUseRightToLeftAlignment);
}	/* namespace Cxfiltercontrol */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXFILTERCONTROL)
using namespace Cxfiltercontrol;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxfiltercontrolHPP
