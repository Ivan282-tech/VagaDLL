// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxFilterValueContainer.pas' rev: 35.00 (Windows)

#ifndef DxfiltervaluecontainerHPP
#define DxfiltervaluecontainerHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <System.Classes.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <cxContainer.hpp>
#include <cxControls.hpp>
#include <cxListBox.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <dxCore.hpp>
#include <dxCoreClasses.hpp>
#include <cxCurrencyEdit.hpp>
#include <dxIncrementalFiltering.hpp>
#include <cxFilter.hpp>
#include <cxButtons.hpp>
#include <cxClasses.hpp>
#include <cxTextEdit.hpp>
#include <dxLayoutControl.hpp>
#include <dxLayoutContainer.hpp>
#include <dxLayoutLookAndFeels.hpp>
#include <dxRangeTrackBar.hpp>
#include <cxDropDownEdit.hpp>
#include <cxSpinEdit.hpp>
#include <cxRadioGroup.hpp>
#include <cxButtonEdit.hpp>
#include <cxCheckBox.hpp>
#include <cxDataStorage.hpp>
#include <cxCalendar.hpp>
#include <cxEdit.hpp>
#include <dxUIElementPopupWindow.hpp>
#include <cxGraphics.hpp>
#include <dxTreeView.hpp>
#include <System.Generics.Collections.hpp>
#include <cxFilterControlUtils.hpp>
#include <dxCustomTree.hpp>
#include <cxMaskEdit.hpp>
#include <dxCustomFunction.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxfiltervaluecontainer
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IdxFilterableComponent;
typedef System::DelphiInterface<IdxFilterableComponent> _di_IdxFilterableComponent;
__interface DELPHIINTERFACE IdxExcelFilterableComponent;
typedef System::DelphiInterface<IdxExcelFilterableComponent> _di_IdxExcelFilterableComponent;
__interface DELPHIINTERFACE IdxCustomFunctionFilterableComponent;
typedef System::DelphiInterface<IdxCustomFunctionFilterableComponent> _di_IdxCustomFunctionFilterableComponent;
class DELPHICLASS TdxExcelFilterValueContainerValueInfo;
class DELPHICLASS TdxFilterValueContainerIncrementalFilteringHelper;
class DELPHICLASS TdxCustomFilterValueContainerListBox;
class DELPHICLASS TdxFilterValueContainerListBox;
class DELPHICLASS TdxExcelFilterValueContainerListBox;
class DELPHICLASS TdxFilterValueContainerViewInfo;
class DELPHICLASS TdxCustomFilterValueContainer;
class DELPHICLASS TdxFilterValueContainer;
class DELPHICLASS TdxExcelFilterValueContainerSearchEditViewInfo;
class DELPHICLASS TdxExcelFilterValueContainerSearchEdit;
class DELPHICLASS TdxDateTimeTreeViewNode;
class DELPHICLASS TdxExcelFilterValueContainerCustomDateTimeTreeView;
class DELPHICLASS TdxExcelFilterValueContainerTimeTreeView;
class DELPHICLASS TdxExcelFilterValueContainerDateTimeTreeView;
class DELPHICLASS TdxExcelFilterValueContainerComboBox;
class DELPHICLASS TdxExcelFilterValueContainerValuesComboBoxProperties;
class DELPHICLASS TdxExcelFilterValueContainerValuesComboBox;
class DELPHICLASS TdxExcelFilterValueContainerDateEditProperties;
class DELPHICLASS TdxExcelFilterValueContainerDateValuesComboBoxProperties;
class DELPHICLASS TdxExcelFilterValueContainerDateValuesComboBox;
class DELPHICLASS TdxExcelFilterValueContainerCustomValuesComboBoxProvider;
class DELPHICLASS TdxExcelFilterValueContainerValuesComboBoxProvider;
class DELPHICLASS TdxExcelFilterValueContainerDateValuesComboBoxProvider;
class DELPHICLASS TdxExcelFilterValueContainerImageValuesComboBoxProvider;
class DELPHICLASS TdxExcelFilterValueContainerConditionTypesComboBox;
class DELPHICLASS TdxExcelFilterValueContainerCustomItem;
class DELPHICLASS TdxExcelFilterValueContainerCondition;
class DELPHICLASS TdxExcelFilterValueContainerAverageCondition;
class DELPHICLASS TdxExcelFilterValueContainerEditableCondition;
class DELPHICLASS TdxExcelFilterValueContainerTextEditCondition;
class DELPHICLASS TdxExcelFilterValueContainerComboBoxCondition;
class DELPHICLASS TdxExcelFilterValueContainerBetweenCondition;
class DELPHICLASS TdxExcelFilterValueContainerCounterCondition;
class DELPHICLASS TdxExcelFilterValueContainerSpecificDatePeriodsConditionPeriod;
class DELPHICLASS TdxExcelFilterValueContainerSpecificDatePeriodsCondition;
class DELPHICLASS TdxExcelFilterValueContainerCustomFunctionCondition;
class DELPHICLASS TdxExcelFilterValueContainerPredefinedFiltersCondition;
class DELPHICLASS TdxExcelFilterValueContainerCustomFilterConditionAndOr;
class DELPHICLASS TdxExcelFilterValueContainerCustomFilterCondition;
class DELPHICLASS TdxExcelFilterValueContainerConditionContainer;
class DELPHICLASS TdxExcelFilterValueContainerCustomFilterConditionContainer;
class DELPHICLASS TdxExcelFilterValueContainerRangeModeValuesPageBetween;
class DELPHICLASS TdxExcelFilterValueContainerCustomPage;
class DELPHICLASS TdxExcelFilterValueContainerCustomValuesPage;
class DELPHICLASS TdxExcelFilterValueContainerSearchableValuesPage;
class DELPHICLASS TdxExcelFilterValueContainerListBoxModeValuesPage;
class DELPHICLASS TdxExcelFilterValueContainerCustomDateTimeTreeViewModeValuesPage;
class DELPHICLASS TdxExcelFilterValueContainerDateTreeViewModeValuesPage;
class DELPHICLASS TdxExcelFilterValueContainerTimeTreeViewModeValuesPage;
class DELPHICLASS TdxExcelFilterValueContainerRangeModeValuesPage;
class DELPHICLASS TdxExcelFilterValueContainerFiltersPage;
class DELPHICLASS TdxExcelFilterValueContainerLayout;
class DELPHICLASS TdxExcelFilterValueContainerCustomValuesLayout;
class DELPHICLASS TdxExcelFilterValueContainerCustomValuesAndFiltersLayout;
class DELPHICLASS TdxExcelFilterValueContainerCheckModeLayout;
class DELPHICLASS TdxExcelFilterValueContainerLookupModeLayout;
class DELPHICLASS TdxExcelFilterValueContainerDateTreeViewModeLayout;
class DELPHICLASS TdxExcelFilterValueContainerTimeTreeViewModeLayout;
class DELPHICLASS TdxExcelFilterValueContainerListBoxModeLayout;
class DELPHICLASS TdxExcelFilterValueContainerRangeModeLayout;
class DELPHICLASS TdxExcelFilterValueContainer;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TdxExcelFilterValueContainerApplyChangesMode : unsigned char { efacDefault, efacImmediately, efacOnTabOrOKButtonClick };

enum DECLSPEC_DENUM TdxExcelFilterValueContainerNumericValuesPageType : unsigned char { nvptDefault, nvptRange, nvptList };

enum DECLSPEC_DENUM TdxExcelFilterValueContainerDateTimeValuesPageType : unsigned char { dvptDefault, dvptTree, dvptList };

enum DECLSPEC_DENUM TdxExcelFilterValueContainerDefaultPage : unsigned char { dpDefault, dpValues, dpFilters };

enum DECLSPEC_DENUM TdxFilterApplyChangesMode : unsigned char { fpacImmediately, fpacOnButtonClick };

enum DECLSPEC_DENUM TdxExcelFilterValueContainerType : unsigned char { ctListBox, ctRange, ctDateTreeView, ctTimeTreeView, ctLookup, ctCheck };

enum DECLSPEC_DENUM TdxExcelFilterValueContainerConditionType : unsigned char { ctSpecificDatePeriods, ctEquals, ctDoesNotEqual, ctBeginsWith, ctEndsWith, ctContains, ctDoesNotContain, ctIsBlank, ctIsNotBlank, ctBetween, ctGreaterThan, ctGreaterThanOrEqualTo, ctLessThan, ctLessEqualThanOrEqualTo, ctTopN, ctBottomN, ctAboveAverage, ctBelowAverage, ctBefore, ctAfter, ctYesterday, ctToday, ctTomorrow, ctLastWeek, ctThisWeek, ctNextWeek, ctLastMonth, ctThisMonth, ctNextMonth, ctLastYear, ctThisYear, ctNextYear, ctCustomFilter };

typedef System::Set<TdxExcelFilterValueContainerConditionType, TdxExcelFilterValueContainerConditionType::ctSpecificDatePeriods, TdxExcelFilterValueContainerConditionType::ctCustomFilter> TdxExcelFilterValueContainerConditionTypes;

__interface  INTERFACE_UUID("{019D17DA-5693-46B5-8DA9-764E8AEA77C9}") IdxFilterableComponent  : public System::IInterface 
{
	virtual void __fastcall FilteringApplied() = 0 ;
	virtual Cxfilter::TcxFilterCriteria* __fastcall GetFilter() = 0 ;
	virtual void __fastcall GetFilterActiveValueIndexes(Cxfilter::TcxFilterValueList* AValues, Cxclasses::TdxIntegerIndexes &AIndexes) = 0 ;
	virtual int __fastcall GetFilterSelectedValueIndex(Cxfilter::TcxFilterValueList* AValues) = 0 ;
	virtual Cxfilter::TcxFilterValueListClass __fastcall GetFilterValuesClass() = 0 ;
	virtual void __fastcall PopulateFilterValues(Cxfilter::TcxFilterValueList* AValues, System::Classes::TStrings* ADisplayValues, bool AValuesOnly, bool AUniqueOnly) = 0 ;
	virtual void __fastcall SetFilterActiveValueIndex(Cxfilter::TcxFilterValueList* AValueList, int AIndex, Cxfilter::TcxFilterCriteriaItemList* AFilterList, bool AReplaceExistent, bool AAddToMRUItemsList) = 0 ;
	virtual void __fastcall SetFilterActiveValueIndexes(Cxfilter::TcxFilterValueList* AValues, const Cxclasses::TdxIntegerIndexes AIndexes, bool AAddToMRUItemsList = false) = 0 ;
};

__interface  INTERFACE_UUID("{C38F02A1-09C0-4F71-ADE9-A27215899C2E}") IdxExcelFilterableComponent  : public IdxFilterableComponent 
{
	virtual System::TObject* __fastcall GetFilterItemLink() = 0 ;
	virtual Cxedit::TcxCustomEditProperties* __fastcall GetFilterProperties() = 0 ;
	virtual Cxdatastorage::TcxValueTypeClass __fastcall GetFilterValueTypeClass() = 0 ;
	virtual void __fastcall SetFilterActiveValue(Cxfilter::TcxFilterOperatorKind AOperatorKind, const System::Variant &AValue, const System::UnicodeString ADisplayText) = 0 ;
	virtual void __fastcall SetFilterActiveValues(Dxcoreclasses::TdxFastObjectList* AValueInfos, Cxfilter::TcxFilterBoolOperatorKind ABoolOperator) = 0 ;
};

__interface  INTERFACE_UUID("{08C58A7D-777D-4216-A2C0-4783FCA0626E}") IdxCustomFunctionFilterableComponent  : public Dxcustomfunction::IdxCustomFunctionContainer 
{
	virtual void __fastcall SetFilterActiveCustomFunction(const System::UnicodeString ACustomFunctionName, const System::Variant &AValue, const System::UnicodeString ADisplayText) = 0 ;
};

class PASCALIMPLEMENTATION TdxExcelFilterValueContainerValueInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FCustomFunctionName;
	System::UnicodeString FDisplayText;
	Cxfilter::TcxFilterOperatorKind FOperatorKind;
	System::Variant FValue;
	
public:
	__fastcall TdxExcelFilterValueContainerValueInfo(const System::Variant &AValue, System::UnicodeString ADisplayText, Cxfilter::TcxFilterOperatorKind AOperatorKind, const System::UnicodeString ACustomFunctionName);
	__property System::UnicodeString CustomFunctionName = {read=FCustomFunctionName};
	__property System::UnicodeString DisplayText = {read=FDisplayText};
	__property Cxfilter::TcxFilterOperatorKind OperatorKind = {read=FOperatorKind, nodefault};
	__property System::Variant Value = {read=FValue};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxExcelFilterValueContainerValueInfo() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterValueContainerIncrementalFilteringHelper : public Dxincrementalfiltering::TdxCustomIncrementalFilteringContainerHelper
{
	typedef Dxincrementalfiltering::TdxCustomIncrementalFilteringContainerHelper inherited;
	
private:
	TdxFilterValueContainer* FOwner;
	TdxFilterValueContainerListBox* __fastcall GetListBox();
	
protected:
	virtual int __fastcall GetItemCount();
	virtual int __fastcall GetItemIndex();
	virtual Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetLookAndFeelPainter();
	virtual int __fastcall GetVisibleItemCount();
	virtual void __fastcall SearchEditKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall SearchEditMouseWheel(System::TObject* Sender, System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos, bool &Handled);
	virtual void __fastcall SearchEditValueChanged(System::TObject* Sender);
	virtual void __fastcall SetItemIndex(const int Value);
	__property TdxFilterValueContainerListBox* ListBox = {read=GetListBox};
	__property TdxFilterValueContainer* Owner = {read=FOwner};
	
public:
	__fastcall TdxFilterValueContainerIncrementalFilteringHelper(TdxFilterValueContainer* AOwner);
public:
	/* TdxCustomIncrementalFilteringContainerHelper.Destroy */ inline __fastcall virtual ~TdxFilterValueContainerIncrementalFilteringHelper() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxCustomFilterValueContainerListBox : public Cxlistbox::TdxCustomCheckListBox
{
	typedef Cxlistbox::TdxCustomCheckListBox inherited;
	
private:
	TdxCustomFilterValueContainer* FFilterValueContainer;
	System::UnicodeString FIncrementalFilteringText;
	
protected:
	virtual void __fastcall ApplyCheckAction(int AItemIndex);
	virtual void __fastcall ApplyClickAction(int AItemIndex);
	virtual void __fastcall ApplyFilter();
	virtual bool __fastcall CanFocusIndex(int AItemIndex);
	virtual void __fastcall DoUpdateItems();
	virtual void __fastcall DrawItem(const System::Types::TRect &R, Cxlistbox::TdxCustomListBoxItem* AItem, Cxlookandfeelpainters::TcxButtonState AState);
	virtual void __fastcall DrawItemText(const System::Types::TRect &ARect, Cxlistbox::TdxCustomListBoxItem* AItem, Cxlookandfeelpainters::TcxButtonState AState);
	virtual void __fastcall FilterValuesChanged();
	virtual Cxclasses::TdxIntegerIndexes __fastcall GetCheckedItemIndexes();
	virtual int __fastcall GetItemIndexByFilterValueIndex(int AIndex);
	virtual Cxfilter::TcxFilterValueItem* __fastcall GetFilterValue(int AItemIndex);
	virtual int __fastcall GetFilterValueIndexByItemIndex(int AItemIndex);
	virtual bool __fastcall HasCheckBox(int AItemIndex);
	virtual bool __fastcall HasIncrementalFiltering();
	virtual bool __fastcall IsCheck(int AItemIndex);
	virtual bool __fastcall IsFilterValueVisible(Cxfilter::TcxFilterValueItem* AFilterValue, System::UnicodeString ACaption);
	virtual bool __fastcall IsMRUSeparatorItem(int AItemIndex);
	virtual bool __fastcall IsFilterValueCheck(Cxfilter::TcxFilterValueItem* AValue);
	virtual void __fastcall DoItemAction(int AItemIndex);
	virtual bool __fastcall NeedHighlightIncrementalFilteringText();
	virtual void __fastcall UpdateCheckedFilterValueIndexes(int AItemIndex);
	void __fastcall UpdateItems();
	virtual void __fastcall UpdateItemStates();
	virtual bool __fastcall UseContainsIncrementalFiltering();
	__property System::UnicodeString IncrementalFilteringText = {read=FIncrementalFilteringText, write=FIncrementalFilteringText};
	
public:
	__fastcall virtual TdxCustomFilterValueContainerListBox(TdxCustomFilterValueContainer* AFilterValueContainer);
	__property TdxCustomFilterValueContainer* FilterValueContainer = {read=FFilterValueContainer};
public:
	/* TdxCustomCheckListBox.Destroy */ inline __fastcall virtual ~TdxCustomFilterValueContainerListBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxCustomFilterValueContainerListBox(HWND ParentWindow) : Cxlistbox::TdxCustomCheckListBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TdxFilterValueContainerListBox : public TdxCustomFilterValueContainerListBox
{
	typedef TdxCustomFilterValueContainerListBox inherited;
	
private:
	TdxFilterValueContainer* __fastcall GetFilterValueContainer();
	
protected:
	virtual void __fastcall ApplyClickAction(int AItemIndex);
	virtual void __fastcall DoClick();
	virtual bool __fastcall IsFilterValueVisible(Cxfilter::TcxFilterValueItem* AFilterValue, System::UnicodeString ACaption);
	virtual bool __fastcall NeedHighlightIncrementalFilteringText();
	virtual bool __fastcall NeedHotTrack();
	virtual bool __fastcall NeedUseSelectionColor(Cxlistbox::TdxCustomListBoxItem* AItem, Cxlookandfeelpainters::TcxButtonState AState);
	virtual void __fastcall UpdateItemStates();
	virtual bool __fastcall UseContainsIncrementalFiltering();
	
public:
	DYNAMIC bool __fastcall CanFocus();
	__property TdxFilterValueContainer* FilterValueContainer = {read=GetFilterValueContainer};
public:
	/* TdxCustomFilterValueContainerListBox.Create */ inline __fastcall virtual TdxFilterValueContainerListBox(TdxCustomFilterValueContainer* AFilterValueContainer) : TdxCustomFilterValueContainerListBox(AFilterValueContainer) { }
	
public:
	/* TdxCustomCheckListBox.Destroy */ inline __fastcall virtual ~TdxFilterValueContainerListBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxFilterValueContainerListBox(HWND ParentWindow) : TdxCustomFilterValueContainerListBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TdxExcelFilterValueContainerListBox : public TdxCustomFilterValueContainerListBox
{
	typedef TdxCustomFilterValueContainerListBox inherited;
	
private:
	static const System::Int8 dxAllItemIndex = System::Int8(0x0);
	
	
protected:
	virtual void __fastcall ApplyAllItemAction(bool AChecked);
	virtual void __fastcall ApplyCheckAction(int AItemIndex);
	virtual void __fastcall DoUpdateItems();
	virtual Cxlistbox::TdxCustomCheckListBoxItem* __fastcall GetAllItem();
	virtual System::Types::TRect __fastcall GetDefaultBounds();
	virtual bool __fastcall IsFilterValueCheck(Cxfilter::TcxFilterValueItem* AValue);
	virtual bool __fastcall NeedHandleClick();
	virtual void __fastcall UpdateAllItemState();
	virtual void __fastcall UpdateCheckedFilterValueIndexes(int AItemIndex);
	virtual void __fastcall UpdateItemStates();
	
public:
	__fastcall virtual TdxExcelFilterValueContainerListBox(TdxCustomFilterValueContainer* AFilterValueContainer);
public:
	/* TdxCustomCheckListBox.Destroy */ inline __fastcall virtual ~TdxExcelFilterValueContainerListBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxExcelFilterValueContainerListBox(HWND ParentWindow) : TdxCustomFilterValueContainerListBox(ParentWindow) { }
	
};


typedef System::TMetaClass* TdxExcelFilterValueContainerListBoxClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxFilterValueContainerViewInfo : public Dxincrementalfiltering::TdxCustomIncrementalFilteringContainerViewInfo
{
	typedef Dxincrementalfiltering::TdxCustomIncrementalFilteringContainerViewInfo inherited;
	
private:
	TdxFilterValueContainer* __fastcall GetFilterValueContainer();
	
public:
	virtual bool __fastcall IsSearchInfoPanelVisible();
	__property TdxFilterValueContainer* FilterValueContainer = {read=GetFilterValueContainer};
public:
	/* TdxCustomIncrementalFilteringContainerViewInfo.Create */ inline __fastcall virtual TdxFilterValueContainerViewInfo() : Dxincrementalfiltering::TdxCustomIncrementalFilteringContainerViewInfo() { }
	/* TdxCustomIncrementalFilteringContainerViewInfo.Destroy */ inline __fastcall virtual ~TdxFilterValueContainerViewInfo() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxCustomFilterValueContainer : public Cxcontainer::TcxContainer
{
	typedef Cxcontainer::TcxContainer inherited;
	
private:
	Cxclasses::TdxIntegerIndexes FCheckedValueIndexes;
	System::Classes::TStringList* FDisplayValues;
	Cxfilter::TcxFilterCriteria* FFilter;
	_di_IdxFilterableComponent FFilterableComponent;
	bool FIsModified;
	Cxfilter::TcxFilterValueListClass FFilterValuesClass;
	System::Classes::TComponent* FLinkComponent;
	int FLockCount;
	Cxfilter::TcxFilterValueList* FValues;
	System::Classes::TNotifyEvent FOnAfterFilterChange;
	System::Classes::TNotifyEvent FOnBeforeFilterChange;
	void __fastcall SetIsModified(bool AValue);
	void __fastcall SetLinkComponent(System::Classes::TComponent* AValue);
	
protected:
	virtual void __fastcall AddCheckedIndex(int AIndex);
	virtual void __fastcall AfterFilterChange();
	virtual void __fastcall BeforeFilterChange();
	virtual System::Classes::TStringList* __fastcall CreateDisplayValues();
	virtual Cxfilter::TcxFilterValueList* __fastcall CreateValues();
	virtual void __fastcall DataChanged();
	virtual void __fastcall DeleteCheckedIndex(int AIndex);
	virtual bool __fastcall DoRefreshContainer(const System::Types::TPoint &P, Cxcontainer::TcxMouseButton Button, System::Classes::TShiftState Shift, bool AIsMouseEvent);
	virtual void __fastcall DoUpdateFiltering();
	virtual void __fastcall DoUpdateLayout();
	virtual void __fastcall ModifiedChanged();
	virtual System::Types::TRect __fastcall GetDefaultBounds();
	virtual bool __fastcall NeedImmediateApply();
	virtual bool __fastcall IsChildFocused();
	virtual bool __fastcall IsContainerClass();
	virtual bool __fastcall IsContainerFocused();
	virtual bool __fastcall IsLinkComponentSupported(System::Classes::TComponent* AValue);
	virtual bool __fastcall IsValueCheck(Cxfilter::TcxFilterValueItem* AValue);
	virtual void __fastcall LayoutChanged();
	virtual void __fastcall LinkComponentChanged();
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall PopulateCheckedValueIndexes();
	virtual void __fastcall PopulateValues();
	virtual void __fastcall ResetCheckedValueIndexes();
	virtual void __fastcall SetActiveValueIndex(int AFilterValueIndex);
	virtual void __fastcall SetActiveValueIndexes();
	virtual void __fastcall SetAllCheckedValueIndexes();
	virtual void __fastcall SetChildFocus();
	void __fastcall UpdateFiltering();
	void __fastcall UpdateLayout();
	virtual void __fastcall UpdateValues();
	__property Cxclasses::TdxIntegerIndexes CheckedValueIndexes = {read=FCheckedValueIndexes};
	__property System::Classes::TStringList* DisplayValues = {read=FDisplayValues};
	__property Cxfilter::TcxFilterCriteria* Filter = {read=FFilter};
	__property _di_IdxFilterableComponent FilterableComponent = {read=FFilterableComponent};
	__property bool IsModified = {read=FIsModified, write=SetIsModified, nodefault};
	__property Cxfilter::TcxFilterValueListClass FilterValuesClass = {read=FFilterValuesClass};
	__property Cxfilter::TcxFilterValueList* Values = {read=FValues};
	
public:
	__fastcall virtual TdxCustomFilterValueContainer(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxCustomFilterValueContainer();
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	bool __fastcall IsLocked();
	DYNAMIC bool __fastcall Focused();
	DYNAMIC void __fastcall GetTabOrderList(System::Classes::TList* List);
	virtual void __fastcall SetFocus();
	virtual void __fastcall ApplyFilter();
	virtual void __fastcall FilteringApplied();
	__property System::Classes::TComponent* LinkComponent = {read=FLinkComponent, write=SetLinkComponent};
	__property Style;
	__property System::Classes::TNotifyEvent OnAfterFilterChange = {read=FOnAfterFilterChange, write=FOnAfterFilterChange};
	__property System::Classes::TNotifyEvent OnBeforeFilterChange = {read=FOnBeforeFilterChange, write=FOnBeforeFilterChange};
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxCustomFilterValueContainer(HWND ParentWindow) : Cxcontainer::TcxContainer(ParentWindow) { }
	
};


typedef System::TMetaClass* TdxCustomFilterValueContainerClass;

class PASCALIMPLEMENTATION TdxFilterValueContainer : public TdxCustomFilterValueContainer
{
	typedef TdxCustomFilterValueContainer inherited;
	
private:
	TdxFilterApplyChangesMode FApplyMode;
	Cxbuttons::TcxButton* FButton;
	TdxFilterValueContainerIncrementalFilteringHelper* FIncHelper;
	bool FIncrementalFiltering;
	Cxtextedit::TcxTextEditIncrementalFilteringOptions FIncrementalFilteringOptions;
	TdxFilterValueContainerListBox* FListBox;
	bool FShowCheckBoxes;
	System::UnicodeString __fastcall GetButtonCaption();
	Cxtextedit::TcxCustomTextEdit* __fastcall GetSearchEdit();
	System::Types::TRect __fastcall GetSearchEditOffsets();
	System::UnicodeString __fastcall GetSearchText();
	int __fastcall GetSelectedValueIndex();
	TdxFilterValueContainerViewInfo* __fastcall GetViewInfo();
	void __fastcall SetApplyMode(const TdxFilterApplyChangesMode AValue);
	void __fastcall SetButtonCaption(const System::UnicodeString AValue);
	void __fastcall SetIncrementalFiltering(const bool AValue);
	void __fastcall SetIncrementalFilteringOptions(const Cxtextedit::TcxTextEditIncrementalFilteringOptions AValue);
	void __fastcall SetShowCheckBoxes(const bool AValue);
	void __fastcall ButtonClickHandler(System::TObject* Sender);
	
protected:
	virtual void __fastcall ApplyFilterOnButtonClick();
	virtual Cxbuttons::TcxButton* __fastcall CreateButton();
	virtual TdxFilterValueContainerIncrementalFilteringHelper* __fastcall CreateIncHelper();
	virtual TdxFilterValueContainerListBox* __fastcall CreateListBox();
	virtual void __fastcall DoUpdateLayout();
	virtual void __fastcall ModifiedChanged();
	virtual void __fastcall FocusSearchEdit();
	virtual System::UnicodeString __fastcall GetDefaultButtonCaption();
	virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
	virtual bool __fastcall NeedImmediateApply();
	virtual bool __fastcall HasIncrementalFiltering();
	virtual void __fastcall InitButton();
	virtual void __fastcall InitIncHelper();
	virtual void __fastcall InitListBox();
	virtual bool __fastcall IsButtonCaptionStored();
	virtual bool __fastcall IsButtonVisible();
	virtual bool __fastcall IsChildFocused();
	virtual bool __fastcall IsSearchInfoPanelVisible();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall RefreshChildFocus();
	virtual void __fastcall ResetSearchText();
	virtual void __fastcall SetChildFocus();
	virtual void __fastcall UpdateButtonEnabled();
	virtual void __fastcall UpdateButtonPosition();
	virtual void __fastcall UpdateValues();
	virtual void __fastcall UpdateListBoxIndexes();
	virtual void __fastcall UpdateListBoxItems();
	virtual void __fastcall UpdateListBoxPosition();
	virtual void __fastcall UpdateSearchEditPosition();
	virtual void __fastcall UpdateSearchInfoPanelPosition();
	__property Cxbuttons::TcxButton* Button = {read=FButton};
	__property System::UnicodeString DefaultButtonCaption = {read=GetDefaultButtonCaption};
	__property TdxFilterValueContainerIncrementalFilteringHelper* IncHelper = {read=FIncHelper};
	__property TdxFilterValueContainerListBox* ListBox = {read=FListBox};
	__property Cxtextedit::TcxCustomTextEdit* SearchEdit = {read=GetSearchEdit};
	__property System::Types::TRect SearchEditOffsets = {read=GetSearchEditOffsets};
	__property System::UnicodeString SearchText = {read=GetSearchText};
	__property int SelectedValueIndex = {read=GetSelectedValueIndex, nodefault};
	__property TdxFilterValueContainerViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	__fastcall virtual TdxFilterValueContainer(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxFilterValueContainer();
	virtual void __fastcall ApplyFilter();
	__property TdxFilterApplyChangesMode ApplyMode = {read=FApplyMode, write=SetApplyMode, default=0};
	__property System::UnicodeString ButtonCaption = {read=GetButtonCaption, write=SetButtonCaption, stored=IsButtonCaptionStored};
	__property bool IncrementalFiltering = {read=FIncrementalFiltering, write=SetIncrementalFiltering, default=0};
	__property Cxtextedit::TcxTextEditIncrementalFilteringOptions IncrementalFilteringOptions = {read=FIncrementalFilteringOptions, write=SetIncrementalFilteringOptions, default=3};
	__property bool ShowCheckBoxes = {read=FShowCheckBoxes, write=SetShowCheckBoxes, default=1};
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxFilterValueContainer(HWND ParentWindow) : TdxCustomFilterValueContainer(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TdxExcelFilterValueContainerSearchEditViewInfo : public Cxtextedit::TcxCustomTextEditViewInfo
{
	typedef Cxtextedit::TcxCustomTextEditViewInfo inherited;
	
private:
	Cxedit::TcxEditButtonViewInfo* __fastcall GetSearchButtonInfo();
	
protected:
	virtual void __fastcall DrawEditButton(Cxgraphics::TcxCanvas* ACanvas, int AButtonVisibleIndex);
	__property Cxedit::TcxEditButtonViewInfo* SearchButtonInfo = {read=GetSearchButtonInfo};
public:
	/* TcxCustomTextEditViewInfo.Destroy */ inline __fastcall virtual ~TdxExcelFilterValueContainerSearchEditViewInfo() { }
	
public:
	/* TcxCustomEditViewInfo.Create */ inline __fastcall virtual TdxExcelFilterValueContainerSearchEditViewInfo() : Cxtextedit::TcxCustomTextEditViewInfo() { }
	
};


class PASCALIMPLEMENTATION TdxExcelFilterValueContainerSearchEdit : public Cxbuttonedit::TcxCustomButtonEdit
{
	typedef Cxbuttonedit::TcxCustomButtonEdit inherited;
	
protected:
	virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
	
public:
	__fastcall virtual TdxExcelFilterValueContainerSearchEdit(System::Classes::TComponent* AOwner)/* overload */;
public:
	/* TcxCustomMaskEdit.Destroy */ inline __fastcall virtual ~TdxExcelFilterValueContainerSearchEdit() { }
	
public:
	/* TcxCustomEdit.Create */ inline __fastcall virtual TdxExcelFilterValueContainerSearchEdit(System::Classes::TComponent* AOwner, bool AIsInplace)/* overload */ : Cxbuttonedit::TcxCustomButtonEdit(AOwner, AIsInplace) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxExcelFilterValueContainerSearchEdit(HWND ParentWindow) : Cxbuttonedit::TcxCustomButtonEdit(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxDateTimeTreeViewNode : public Dxtreeview::TdxTreeViewNode
{
	typedef Dxtreeview::TdxTreeViewNode inherited;
	
private:
	bool FIsStateValid;
	HIDESBASE TdxDateTimeTreeViewNode* __fastcall GetFirst();
	HIDESBASE TdxDateTimeTreeViewNode* __fastcall GetNext();
	HIDESBASE TdxDateTimeTreeViewNode* __fastcall GetParent();
	HIDESBASE TdxExcelFilterValueContainerCustomDateTimeTreeView* __fastcall GetTreeView();
	
protected:
	bool __fastcall IsAll();
	bool __fastcall IsBlank();
	bool __fastcall IsGroup();
	bool __fastcall IsValue();
	__property bool IsStateValid = {read=FIsStateValid, write=FIsStateValid, nodefault};
	
public:
	__property TdxDateTimeTreeViewNode* First = {read=GetFirst};
	__property TdxDateTimeTreeViewNode* Next = {read=GetNext};
	__property TdxDateTimeTreeViewNode* Parent = {read=GetParent};
	__property TdxExcelFilterValueContainerCustomDateTimeTreeView* TreeView = {read=GetTreeView};
public:
	/* TdxTreeViewNode.Create */ inline __fastcall virtual TdxDateTimeTreeViewNode(Dxcustomtree::_di_IdxTreeOwner AOwner) : Dxtreeview::TdxTreeViewNode(AOwner) { }
	/* TdxTreeViewNode.Destroy */ inline __fastcall virtual ~TdxDateTimeTreeViewNode() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxExcelFilterValueContainerCustomDateTimeTreeView : public Dxtreeview::TdxCustomTreeView
{
	typedef Dxtreeview::TdxCustomTreeView inherited;
	
private:
	TdxExcelFilterValueContainer* FFilterValueContainer;
	System::UnicodeString FIncrementalFilteringText;
	bool FIsNodeStatesLoading;
	int FNodeStatesUpdateCount;
	int __fastcall GetLastLevel();
	TdxDateTimeTreeViewNode* __fastcall GetRoot();
	void __fastcall SetIncrementalFilteringText(const System::UnicodeString AValue);
	bool __fastcall LoadNodeStateProc(Dxcustomtree::TdxTreeCustomNode* ANode, void * AData);
	
protected:
	virtual void __fastcall ApplyFilter();
	virtual void __fastcall CorrectCheckedIndexes(TdxDateTimeTreeViewNode* ANode);
	virtual void __fastcall DoPopulateNodes();
	virtual void __fastcall FilterValuesChanged();
	virtual System::Uitypes::TScrollStyle __fastcall GetDefaultScrollbarsValue();
	virtual int __fastcall GetFilterValueIndexByNode(Dxtreeview::TdxTreeViewNode* ANode);
	virtual System::UnicodeString __fastcall GetValueTextByLvl(Cxfilter::TcxFilterValueItem* AFilterValue, int ALvl);
	virtual int __fastcall GetLevelCount();
	virtual Dxtreeview::TdxTreeViewNodeClass __fastcall GetNodeClass()/* overload */;
	virtual bool __fastcall HasIncrementalFiltering();
	virtual bool __fastcall IsFilterValueVisible(Cxfilter::TcxFilterValueItem* AFilterValue, System::UnicodeString AText);
	virtual bool __fastcall IsTextVisible(System::UnicodeString AText);
	virtual void __fastcall LoadNodeStates();
	virtual void __fastcall NodeStateChanged(Dxtreeview::TdxTreeViewNode* ANode);
	virtual void __fastcall PopulateNodes();
	virtual void __fastcall UpdateNodes();
	virtual void __fastcall UpdateNodeStateByChildState(TdxDateTimeTreeViewNode* ANode, Cxlookandfeelpainters::TcxCheckBoxState AChildState);
	virtual bool __fastcall IsNodeStatesUpdating();
	virtual void __fastcall BeginUpdateNodeStates();
	virtual void __fastcall EndUpdateNodeStates();
	__property TdxExcelFilterValueContainer* FilterValueContainer = {read=FFilterValueContainer};
	__property System::UnicodeString IncrementalFilteringText = {read=FIncrementalFilteringText, write=SetIncrementalFilteringText};
	__property bool IsNodeStatesLoading = {read=FIsNodeStatesLoading, nodefault};
	__property int LastLevel = {read=GetLastLevel, nodefault};
	__property int LevelCount = {read=GetLevelCount, nodefault};
	
public:
	__fastcall virtual TdxExcelFilterValueContainerCustomDateTimeTreeView(TdxExcelFilterValueContainer* AFilterValueContainer);
	__property TdxDateTimeTreeViewNode* Root = {read=GetRoot};
public:
	/* TdxCustomTreeView.Destroy */ inline __fastcall virtual ~TdxExcelFilterValueContainerCustomDateTimeTreeView() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxExcelFilterValueContainerCustomDateTimeTreeView(HWND ParentWindow) : Dxtreeview::TdxCustomTreeView(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	inline Dxcustomtree::TdxTreeCustomNodeClass __fastcall  GetNodeClass(Dxcustomtree::TdxTreeCustomNode* ARelativeNode){ return Dxtreeview::TdxCustomTreeView::GetNodeClass(ARelativeNode); }
	
};


class PASCALIMPLEMENTATION TdxExcelFilterValueContainerTimeTreeView : public TdxExcelFilterValueContainerCustomDateTimeTreeView
{
	typedef TdxExcelFilterValueContainerCustomDateTimeTreeView inherited;
	
private:
	System::UnicodeString FHourFormat;
	
protected:
	virtual System::UnicodeString __fastcall GetHourFormat();
	virtual System::UnicodeString __fastcall GetValueTextByLvl(Cxfilter::TcxFilterValueItem* AFilterValue, int ALvl);
	__property System::UnicodeString HourFormat = {read=FHourFormat};
	
public:
	__fastcall virtual TdxExcelFilterValueContainerTimeTreeView(TdxExcelFilterValueContainer* AFilterValueContainer);
public:
	/* TdxCustomTreeView.Destroy */ inline __fastcall virtual ~TdxExcelFilterValueContainerTimeTreeView() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxExcelFilterValueContainerTimeTreeView(HWND ParentWindow) : TdxExcelFilterValueContainerCustomDateTimeTreeView(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TdxExcelFilterValueContainerDateTimeTreeView : public TdxExcelFilterValueContainerCustomDateTimeTreeView
{
	typedef TdxExcelFilterValueContainerCustomDateTimeTreeView inherited;
	
private:
	bool FHasTime;
	bool FHasTimeAssigned;
	bool __fastcall GetHasTime();
	
protected:
	virtual System::UnicodeString __fastcall GetValueTextByLvl(Cxfilter::TcxFilterValueItem* AFilterValue, int ALvl);
	virtual bool __fastcall Use24HourFormat();
	__property bool HasTime = {read=GetHasTime, nodefault};
public:
	/* TdxExcelFilterValueContainerCustomDateTimeTreeView.Create */ inline __fastcall virtual TdxExcelFilterValueContainerDateTimeTreeView(TdxExcelFilterValueContainer* AFilterValueContainer) : TdxExcelFilterValueContainerCustomDateTimeTreeView(AFilterValueContainer) { }
	
public:
	/* TdxCustomTreeView.Destroy */ inline __fastcall virtual ~TdxExcelFilterValueContainerDateTimeTreeView() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxExcelFilterValueContainerDateTimeTreeView(HWND ParentWindow) : TdxExcelFilterValueContainerCustomDateTimeTreeView(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TdxExcelFilterValueContainerComboBox : public Cxdropdownedit::TcxComboBox
{
	typedef Cxdropdownedit::TcxComboBox inherited;
	
private:
	TdxExcelFilterValueContainer* FFilterValueContainer;
	
protected:
	virtual void __fastcall PopulateItems();
	virtual void __fastcall UpdateItems();
	__property TdxExcelFilterValueContainer* FilterValueContainer = {read=FFilterValueContainer};
	
public:
	__fastcall virtual TdxExcelFilterValueContainerComboBox(TdxExcelFilterValueContainer* AFilterValueContainer);
public:
	/* TcxCustomDropDownEdit.Destroy */ inline __fastcall virtual ~TdxExcelFilterValueContainerComboBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxExcelFilterValueContainerComboBox(HWND ParentWindow) : Cxdropdownedit::TcxComboBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TdxExcelFilterValueContainerValuesComboBoxProperties : public Cxdropdownedit::TcxComboBoxProperties
{
	typedef Cxdropdownedit::TcxComboBoxProperties inherited;
	
private:
	bool FIsEditValueNumeric;
	
protected:
	virtual bool __fastcall IsEditValueNumeric();
	virtual void __fastcall SetEditValueNumeric(bool AValue);
public:
	/* TcxCustomComboBoxProperties.Create */ inline __fastcall virtual TdxExcelFilterValueContainerValuesComboBoxProperties(System::Classes::TPersistent* AOwner) : Cxdropdownedit::TcxComboBoxProperties(AOwner) { }
	
public:
	/* TcxCustomDropDownEditProperties.Destroy */ inline __fastcall virtual ~TdxExcelFilterValueContainerValuesComboBoxProperties() { }
	
};


class PASCALIMPLEMENTATION TdxExcelFilterValueContainerValuesComboBox : public TdxExcelFilterValueContainerComboBox
{
	typedef TdxExcelFilterValueContainerComboBox inherited;
	
private:
	HIDESBASE TdxExcelFilterValueContainerValuesComboBoxProperties* __fastcall GetProperties();
	void __fastcall ValidateHandler(System::TObject* ASender, System::Variant &ADisplayValue, Vcl::Controls::TCaption &AErrorText, bool &AError);
	
protected:
	virtual System::UnicodeString __fastcall GetFilterDisplayText();
	virtual System::Variant __fastcall GetFilterValue();
	virtual Cxedit::TcxCustomEditProperties* __fastcall GetSourceProperties();
	HIDESBASE virtual System::UnicodeString __fastcall GetTextHint();
	virtual void __fastcall Initialize();
	virtual void __fastcall InitProperties();
	virtual void __fastcall InitPropertiesFormat();
	virtual void __fastcall InitPropertiesMask();
	virtual bool __fastcall IsEditValueNumeric();
	virtual bool __fastcall IsEmpty();
	virtual void __fastcall PopulateItem(Cxfilter::TcxFilterValueItem* AItem);
	virtual void __fastcall PopulateItems();
	__property Cxedit::TcxCustomEditProperties* SourceProperties = {read=GetSourceProperties};
	
public:
	__fastcall virtual TdxExcelFilterValueContainerValuesComboBox(TdxExcelFilterValueContainer* AFilterValueContainer);
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TdxExcelFilterValueContainerValuesComboBoxProperties* Properties = {read=GetProperties};
public:
	/* TcxCustomDropDownEdit.Destroy */ inline __fastcall virtual ~TdxExcelFilterValueContainerValuesComboBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxExcelFilterValueContainerValuesComboBox(HWND ParentWindow) : TdxExcelFilterValueContainerComboBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TdxExcelFilterValueContainerDateEditProperties : public Cxcalendar::TcxDateEditProperties
{
	typedef Cxcalendar::TcxDateEditProperties inherited;
	
private:
	TdxExcelFilterValueContainerDateValuesComboBoxProperties* FComboBoxProperties;
	
protected:
	virtual System::UnicodeString __fastcall GetEmptyString();
	
public:
	__fastcall virtual TdxExcelFilterValueContainerDateEditProperties(TdxExcelFilterValueContainerDateValuesComboBoxProperties* AComboBoxProperties);
public:
	/* TcxCustomDropDownEditProperties.Destroy */ inline __fastcall virtual ~TdxExcelFilterValueContainerDateEditProperties() { }
	
};


class PASCALIMPLEMENTATION TdxExcelFilterValueContainerDateValuesComboBoxProperties : public TdxExcelFilterValueContainerValuesComboBoxProperties
{
	typedef TdxExcelFilterValueContainerValuesComboBoxProperties inherited;
	
private:
	TdxExcelFilterValueContainerDateEditProperties* FDateEditProperties;
	
protected:
	virtual Cxmaskedit::TcxMaskEditCustomModeClass __fastcall GetModeClass(Cxmaskedit::TcxEditMaskKind AMaskKind);
	virtual System::WideChar __fastcall GetStandardMaskBlank(int APos);
	virtual void __fastcall InitDateEditProperties(Cxedit::TcxCustomEditProperties* ASourceProperties);
	virtual void __fastcall PrepareEditValue(System::UnicodeString ADisplayValue, /* out */ System::Variant &AEditValue);
	__property TdxExcelFilterValueContainerDateEditProperties* DateEditProperties = {read=FDateEditProperties};
	
public:
	__fastcall virtual TdxExcelFilterValueContainerDateValuesComboBoxProperties(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TdxExcelFilterValueContainerDateValuesComboBoxProperties();
	virtual void __fastcall DoPrepareDisplayValue(const System::Variant &AEditValue, System::Variant &ADisplayValue, bool AEditFocused);
	virtual void __fastcall ValidateDisplayValue(System::Variant &ADisplayValue, Vcl::Controls::TCaption &AErrorText, bool &AError, Cxedit::TcxCustomEdit* AEdit);
};


class PASCALIMPLEMENTATION TdxExcelFilterValueContainerDateValuesComboBox : public TdxExcelFilterValueContainerValuesComboBox
{
	typedef TdxExcelFilterValueContainerValuesComboBox inherited;
	
private:
	static const System::Int8 CalendarButtonGlyphHeight = System::Int8(0x10);
	
	static const System::Int8 CalendarButtonGlyphWidth = System::Int8(0x10);
	
	Cxcalendar::TcxCustomCalendar* FCalendar;
	Cxedit::TcxEditButton* FCalendarButton;
	Dxuielementpopupwindow::TdxUIElementPopupWindow* FCalendarPopup;
	HIDESBASE TdxExcelFilterValueContainerDateValuesComboBoxProperties* __fastcall GetProperties();
	void __fastcall ButtonClickHandler(System::TObject* Sender, int AButtonIndex);
	void __fastcall DateTimeChangedHandler(System::TObject* Sender);
	
protected:
	virtual void __fastcall AddCalendar();
	virtual void __fastcall AddCalendarButton();
	virtual void __fastcall CalendarButtonClick();
	virtual void __fastcall CalendarDropDown();
	virtual Cxcalendar::TcxCustomCalendar* __fastcall CreateCalendar();
	virtual Dxuielementpopupwindow::TdxUIElementPopupWindow* __fastcall CreateCalendarPopup();
	virtual System::Variant __fastcall GetFilterValue();
	virtual Cxedit::TcxCustomEditProperties* __fastcall GetSourceProperties();
	virtual System::UnicodeString __fastcall GetTextHint();
	virtual void __fastcall InitProperties();
	virtual System::Variant __fastcall InternalGetEditingValue();
	virtual void __fastcall InternalValidateDisplayValue(const System::Variant &ADisplayValue);
	virtual bool __fastcall IsEditValueNumeric();
	virtual void __fastcall PopulateItem(Cxfilter::TcxFilterValueItem* AItem);
	__property Cxcalendar::TcxCustomCalendar* Calendar = {read=FCalendar};
	__property Cxedit::TcxEditButton* CalendarButton = {read=FCalendarButton};
	__property Dxuielementpopupwindow::TdxUIElementPopupWindow* CalendarPopup = {read=FCalendarPopup};
	
public:
	__fastcall virtual TdxExcelFilterValueContainerDateValuesComboBox(TdxExcelFilterValueContainer* AFilterValueContainer);
	__fastcall virtual ~TdxExcelFilterValueContainerDateValuesComboBox();
	virtual void __fastcall PrepareEditValue(const System::Variant &ADisplayValue, /* out */ System::Variant &EditValue, bool AEditFocused);
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	__property TdxExcelFilterValueContainerDateValuesComboBoxProperties* Properties = {read=GetProperties};
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxExcelFilterValueContainerDateValuesComboBox(HWND ParentWindow) : TdxExcelFilterValueContainerValuesComboBox(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerCustomValuesComboBoxProvider : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Cxdropdownedit::TcxCustomComboBox* FComboBox;
	TdxExcelFilterValueContainer* FFilterValueContainer;
	
protected:
	virtual Cxdropdownedit::TcxCustomComboBox* __fastcall CreateComboBox() = 0 ;
	virtual System::UnicodeString __fastcall GetComboBoxFilterDisplayText();
	virtual System::Variant __fastcall GetComboBoxFilterValue();
	virtual bool __fastcall IsComboBoxEmpty();
	virtual void __fastcall UpdateComboBoxItems();
	__property Cxdropdownedit::TcxCustomComboBox* ComboBox = {read=FComboBox};
	__property TdxExcelFilterValueContainer* FilterValueContainer = {read=FFilterValueContainer};
	
public:
	__fastcall virtual TdxExcelFilterValueContainerCustomValuesComboBoxProvider(TdxExcelFilterValueContainer* AFilterValueContainer);
	__fastcall virtual ~TdxExcelFilterValueContainerCustomValuesComboBoxProvider();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerValuesComboBoxProvider : public TdxExcelFilterValueContainerCustomValuesComboBoxProvider
{
	typedef TdxExcelFilterValueContainerCustomValuesComboBoxProvider inherited;
	
private:
	TdxExcelFilterValueContainerValuesComboBox* __fastcall GetComboBox();
	
protected:
	virtual Cxdropdownedit::TcxCustomComboBox* __fastcall CreateComboBox();
	virtual System::UnicodeString __fastcall GetComboBoxFilterDisplayText();
	virtual System::Variant __fastcall GetComboBoxFilterValue();
	virtual bool __fastcall IsComboBoxEmpty();
	virtual void __fastcall UpdateComboBoxItems();
	__property TdxExcelFilterValueContainerValuesComboBox* ComboBox = {read=GetComboBox};
public:
	/* TdxExcelFilterValueContainerCustomValuesComboBoxProvider.Create */ inline __fastcall virtual TdxExcelFilterValueContainerValuesComboBoxProvider(TdxExcelFilterValueContainer* AFilterValueContainer) : TdxExcelFilterValueContainerCustomValuesComboBoxProvider(AFilterValueContainer) { }
	/* TdxExcelFilterValueContainerCustomValuesComboBoxProvider.Destroy */ inline __fastcall virtual ~TdxExcelFilterValueContainerValuesComboBoxProvider() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerDateValuesComboBoxProvider : public TdxExcelFilterValueContainerValuesComboBoxProvider
{
	typedef TdxExcelFilterValueContainerValuesComboBoxProvider inherited;
	
protected:
	virtual Cxdropdownedit::TcxCustomComboBox* __fastcall CreateComboBox();
public:
	/* TdxExcelFilterValueContainerCustomValuesComboBoxProvider.Create */ inline __fastcall virtual TdxExcelFilterValueContainerDateValuesComboBoxProvider(TdxExcelFilterValueContainer* AFilterValueContainer) : TdxExcelFilterValueContainerValuesComboBoxProvider(AFilterValueContainer) { }
	/* TdxExcelFilterValueContainerCustomValuesComboBoxProvider.Destroy */ inline __fastcall virtual ~TdxExcelFilterValueContainerDateValuesComboBoxProvider() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerImageValuesComboBoxProvider : public TdxExcelFilterValueContainerCustomValuesComboBoxProvider
{
	typedef TdxExcelFilterValueContainerCustomValuesComboBoxProvider inherited;
	
protected:
	virtual Cxdropdownedit::TcxCustomComboBox* __fastcall CreateComboBox();
public:
	/* TdxExcelFilterValueContainerCustomValuesComboBoxProvider.Create */ inline __fastcall virtual TdxExcelFilterValueContainerImageValuesComboBoxProvider(TdxExcelFilterValueContainer* AFilterValueContainer) : TdxExcelFilterValueContainerCustomValuesComboBoxProvider(AFilterValueContainer) { }
	/* TdxExcelFilterValueContainerCustomValuesComboBoxProvider.Destroy */ inline __fastcall virtual ~TdxExcelFilterValueContainerImageValuesComboBoxProvider() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxExcelFilterValueContainerConditionTypesComboBox : public TdxExcelFilterValueContainerComboBox
{
	typedef TdxExcelFilterValueContainerComboBox inherited;
	
private:
	TdxExcelFilterValueContainerConditionTypes FSupportedConditionTypes;
	
protected:
	virtual void __fastcall PopulateItems();
	__property TdxExcelFilterValueContainerConditionTypes SupportedConditionTypes = {read=FSupportedConditionTypes, write=FSupportedConditionTypes};
	
public:
	__fastcall virtual TdxExcelFilterValueContainerConditionTypesComboBox(TdxExcelFilterValueContainer* AFilterValueContainer);
public:
	/* TcxCustomDropDownEdit.Destroy */ inline __fastcall virtual ~TdxExcelFilterValueContainerConditionTypesComboBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxExcelFilterValueContainerConditionTypesComboBox(HWND ParentWindow) : TdxExcelFilterValueContainerComboBox(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerCustomItem : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TdxExcelFilterValueContainer* FFilterValueContainer;
	Dxlayoutcontainer::TdxLayoutGroup* FParentGroup;
	
protected:
	virtual void __fastcall DoGenerate(Dxlayoutcontainer::TdxLayoutGroup* AParentGroup);
	virtual void __fastcall KeyDownHandler(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall UpdateData();
	__property TdxExcelFilterValueContainer* FilterValueContainer = {read=FFilterValueContainer};
	__property Dxlayoutcontainer::TdxLayoutGroup* ParentGroup = {read=FParentGroup};
	
public:
	__fastcall virtual TdxExcelFilterValueContainerCustomItem(TdxExcelFilterValueContainer* AFilterValueContainer);
	void __fastcall Generate(Dxlayoutcontainer::TdxLayoutGroup* AParentGroup);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxExcelFilterValueContainerCustomItem() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerCondition : public TdxExcelFilterValueContainerCustomItem
{
	typedef TdxExcelFilterValueContainerCustomItem inherited;
	
private:
	TdxExcelFilterValueContainerConditionContainer* FOwner;
	
protected:
	virtual void __fastcall Apply();
	virtual Cxfilter::TcxFilterBoolOperatorKind __fastcall GetBoolOperator();
	virtual System::UnicodeString __fastcall GetCustomFunctionName();
	virtual System::UnicodeString __fastcall GetDisplayText();
	virtual Cxfilter::TcxFilterOperatorKind __fastcall GetOperator();
	virtual System::Variant __fastcall GetValue();
	virtual bool __fastcall IsAppliedOnChoosing();
	virtual bool __fastcall IsComplex();
	virtual bool __fastcall IsEditable();
	virtual bool __fastcall IsEmpty();
	virtual bool __fastcall IsPresentInFilter();
	virtual void __fastcall PopulateValueInfos(Dxcoreclasses::TdxFastObjectList* AList);
	virtual void __fastcall SetCaption(System::UnicodeString AValue);
	__property Cxfilter::TcxFilterBoolOperatorKind BoolOperator = {read=GetBoolOperator, nodefault};
	__property System::UnicodeString CustomFunctionName = {read=GetCustomFunctionName};
	__property System::UnicodeString DisplayText = {read=GetDisplayText};
	__property Cxfilter::TcxFilterOperatorKind Operator = {read=GetOperator, nodefault};
	__property TdxExcelFilterValueContainerConditionContainer* Owner = {read=FOwner};
	__property System::Variant Value = {read=GetValue};
	
public:
	__fastcall virtual TdxExcelFilterValueContainerCondition(TdxExcelFilterValueContainer* AFilterValueContainer, TdxExcelFilterValueContainerConditionContainer* AOwner);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxExcelFilterValueContainerCondition() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TdxExcelFilterValueContainerConditionClass;

class PASCALIMPLEMENTATION TdxExcelFilterValueContainerAverageCondition : public TdxExcelFilterValueContainerCondition
{
	typedef TdxExcelFilterValueContainerCondition inherited;
	
private:
	System::Variant FAverageValue;
	
protected:
	virtual void __fastcall CalculateAverageValue();
	virtual System::UnicodeString __fastcall GetDisplayText();
	virtual System::Variant __fastcall GetValue();
	virtual bool __fastcall IsEmpty();
	virtual void __fastcall UpdateData();
public:
	/* TdxExcelFilterValueContainerCondition.Create */ inline __fastcall virtual TdxExcelFilterValueContainerAverageCondition(TdxExcelFilterValueContainer* AFilterValueContainer, TdxExcelFilterValueContainerConditionContainer* AOwner) : TdxExcelFilterValueContainerCondition(AFilterValueContainer, AOwner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxExcelFilterValueContainerAverageCondition() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerEditableCondition : public TdxExcelFilterValueContainerCondition
{
	typedef TdxExcelFilterValueContainerCondition inherited;
	
protected:
	virtual void __fastcall EditChangeHandler(System::TObject* ASender);
	virtual bool __fastcall IsEditable();
	virtual void __fastcall UpdateData();
	virtual void __fastcall UpdateValues();
	virtual void __fastcall ValueChanged();
public:
	/* TdxExcelFilterValueContainerCondition.Create */ inline __fastcall virtual TdxExcelFilterValueContainerEditableCondition(TdxExcelFilterValueContainer* AFilterValueContainer, TdxExcelFilterValueContainerConditionContainer* AOwner) : TdxExcelFilterValueContainerCondition(AFilterValueContainer, AOwner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxExcelFilterValueContainerEditableCondition() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerTextEditCondition : public TdxExcelFilterValueContainerEditableCondition
{
	typedef TdxExcelFilterValueContainerEditableCondition inherited;
	
private:
	Cxtextedit::TcxTextEdit* FTextEdit;
	Dxlayoutcontainer::TdxLayoutItem* FTextEditLayoutItem;
	
protected:
	virtual void __fastcall DoGenerate(Dxlayoutcontainer::TdxLayoutGroup* AParentGroup);
	virtual void __fastcall GenerateTextEdit();
	virtual System::UnicodeString __fastcall GetDisplayText();
	virtual System::Variant __fastcall GetValue();
	virtual bool __fastcall IsEmpty();
	virtual void __fastcall SetCaption(System::UnicodeString AValue);
	virtual void __fastcall UpdateValues();
	__property Cxtextedit::TcxTextEdit* TextEdit = {read=FTextEdit};
	__property Dxlayoutcontainer::TdxLayoutItem* TextEditLayoutItem = {read=FTextEditLayoutItem};
	
public:
	__fastcall virtual ~TdxExcelFilterValueContainerTextEditCondition();
public:
	/* TdxExcelFilterValueContainerCondition.Create */ inline __fastcall virtual TdxExcelFilterValueContainerTextEditCondition(TdxExcelFilterValueContainer* AFilterValueContainer, TdxExcelFilterValueContainerConditionContainer* AOwner) : TdxExcelFilterValueContainerEditableCondition(AFilterValueContainer, AOwner) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerComboBoxCondition : public TdxExcelFilterValueContainerEditableCondition
{
	typedef TdxExcelFilterValueContainerEditableCondition inherited;
	
private:
	TdxExcelFilterValueContainerCustomValuesComboBoxProvider* FComboBoxProvider;
	Dxlayoutcontainer::TdxLayoutItem* FComboBoxLayoutItem;
	
protected:
	virtual void __fastcall DoGenerate(Dxlayoutcontainer::TdxLayoutGroup* AParentGroup);
	virtual void __fastcall GenerateComboBox();
	virtual System::UnicodeString __fastcall GetDisplayText();
	virtual System::Variant __fastcall GetValue();
	virtual bool __fastcall IsEmpty();
	virtual void __fastcall SetCaption(System::UnicodeString AValue);
	virtual void __fastcall UpdateData();
	virtual void __fastcall UpdateValues();
	__property TdxExcelFilterValueContainerCustomValuesComboBoxProvider* ComboBoxProvider = {read=FComboBoxProvider};
	__property Dxlayoutcontainer::TdxLayoutItem* ComboBoxLayoutItem = {read=FComboBoxLayoutItem};
	
public:
	__fastcall virtual ~TdxExcelFilterValueContainerComboBoxCondition();
public:
	/* TdxExcelFilterValueContainerCondition.Create */ inline __fastcall virtual TdxExcelFilterValueContainerComboBoxCondition(TdxExcelFilterValueContainer* AFilterValueContainer, TdxExcelFilterValueContainerConditionContainer* AOwner) : TdxExcelFilterValueContainerEditableCondition(AFilterValueContainer, AOwner) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerBetweenCondition : public TdxExcelFilterValueContainerEditableCondition
{
	typedef TdxExcelFilterValueContainerEditableCondition inherited;
	
private:
	TdxExcelFilterValueContainerCustomValuesComboBoxProvider* FFromComboBoxProvider;
	TdxExcelFilterValueContainerCustomValuesComboBoxProvider* FToComboBoxProvider;
	
protected:
	virtual void __fastcall DoGenerate(Dxlayoutcontainer::TdxLayoutGroup* AParentGroup);
	virtual void __fastcall GenerateFromComboBox();
	virtual void __fastcall GenerateToComboBox();
	virtual System::UnicodeString __fastcall GetDisplayText();
	virtual Cxfilter::TcxFilterOperatorKind __fastcall GetOperator();
	virtual System::Variant __fastcall GetValue();
	virtual System::Variant __fastcall GetValueFrom();
	virtual System::Variant __fastcall GetValueTo();
	virtual bool __fastcall IsEmpty();
	virtual void __fastcall UpdateData();
	virtual void __fastcall UpdateValues();
	__property TdxExcelFilterValueContainerCustomValuesComboBoxProvider* FromComboBoxProvider = {read=FFromComboBoxProvider};
	__property TdxExcelFilterValueContainerCustomValuesComboBoxProvider* ToComboBoxProvider = {read=FToComboBoxProvider};
	
public:
	__fastcall virtual ~TdxExcelFilterValueContainerBetweenCondition();
public:
	/* TdxExcelFilterValueContainerCondition.Create */ inline __fastcall virtual TdxExcelFilterValueContainerBetweenCondition(TdxExcelFilterValueContainer* AFilterValueContainer, TdxExcelFilterValueContainerConditionContainer* AOwner) : TdxExcelFilterValueContainerEditableCondition(AFilterValueContainer, AOwner) { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxExcelFilterValueContainerCounterCondition : public TdxExcelFilterValueContainerEditableCondition
{
	typedef TdxExcelFilterValueContainerEditableCondition inherited;
	
private:
	System::UnicodeString FDisplayText;
	int FFilterValueItemCount;
	System::Variant FValue;
	Cxspinedit::TcxSpinEdit* FValueSpinEdit;
	Cxdropdownedit::TcxComboBox* FValueTypeComboBox;
	void __fastcall ValueTypeChangedHandler(System::TObject* ASender);
	
protected:
	virtual bool __fastcall IsAppliedOnChoosing();
	virtual void __fastcall CalculateFilterValueItemCount();
	virtual void __fastcall CalculateValues();
	virtual void __fastcall DoGenerate(Dxlayoutcontainer::TdxLayoutGroup* AParentGroup);
	virtual void __fastcall GenerateValueSpinEdit();
	virtual void __fastcall GenerateValueTypeComboBox();
	virtual System::UnicodeString __fastcall GetDisplayText();
	virtual Cxfilter::TcxFilterOperatorKind __fastcall GetOperator();
	virtual int __fastcall GetValueSpinEditMaxCount();
	virtual System::Variant __fastcall GetValue();
	virtual bool __fastcall IsEmpty();
	virtual void __fastcall UpdateData();
	virtual void __fastcall UpdateValueSpinEditMinMax();
	virtual void __fastcall ValueChanged();
	__property int FilterValueItemCount = {read=FFilterValueItemCount, nodefault};
	__property Cxspinedit::TcxSpinEdit* ValueSpinEdit = {read=FValueSpinEdit};
	__property Cxdropdownedit::TcxComboBox* ValueTypeComboBox = {read=FValueTypeComboBox};
	
public:
	__fastcall virtual ~TdxExcelFilterValueContainerCounterCondition();
public:
	/* TdxExcelFilterValueContainerCondition.Create */ inline __fastcall virtual TdxExcelFilterValueContainerCounterCondition(TdxExcelFilterValueContainer* AFilterValueContainer, TdxExcelFilterValueContainerConditionContainer* AOwner) : TdxExcelFilterValueContainerEditableCondition(AFilterValueContainer, AOwner) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerSpecificDatePeriodsConditionPeriod : public TdxExcelFilterValueContainerCustomItem
{
	typedef TdxExcelFilterValueContainerCustomItem inherited;
	
private:
	Dxcoreclasses::TdxFastObjectList* FCheckBoxList;
	Dxlayoutcontainer::TdxLayoutGroup* FGroup;
	Cxcheckbox::TcxCheckBox* __fastcall GetCheckBox(int AIndex);
	int __fastcall GetCheckBoxCount();
	
protected:
	virtual Cxcheckbox::TcxCheckBox* __fastcall AddCheckBox(Cxfilter::TcxFilterOperatorKind AOperator);
	virtual void __fastcall DoGenerate(Dxlayoutcontainer::TdxLayoutGroup* AParentGroup);
	virtual void __fastcall GenerateGroup();
	virtual void __fastcall GenerateLayoutItems();
	virtual int __fastcall GetCheckedCount();
	virtual void __fastcall UpdateCheckBoxStates(const Cxfilter::TcxFilterOperatorKinds &AOperators);
	__property Cxcheckbox::TcxCheckBox* CheckBoxes[int AIndex] = {read=GetCheckBox};
	__property int CheckBoxCount = {read=GetCheckBoxCount, nodefault};
	__property Dxcoreclasses::TdxFastObjectList* CheckBoxList = {read=FCheckBoxList};
	__property Dxlayoutcontainer::TdxLayoutGroup* Group = {read=FGroup};
	
public:
	__fastcall virtual TdxExcelFilterValueContainerSpecificDatePeriodsConditionPeriod(TdxExcelFilterValueContainer* AFilterValueContainer);
	__fastcall virtual ~TdxExcelFilterValueContainerSpecificDatePeriodsConditionPeriod();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerSpecificDatePeriodsCondition : public TdxExcelFilterValueContainerEditableCondition
{
	typedef TdxExcelFilterValueContainerEditableCondition inherited;
	
private:
	Dxlayoutcontainer::TdxLayoutGroup* FDayWeekPeriodsGroup;
	Dxlayoutcontainer::TdxLayoutGroup* FPeriodsGroup;
	Dxcoreclasses::TdxFastObjectList* FPeriodList;
	Dxlayoutcontainer::TdxLayoutGroup* FMonthYearPeriodsGroup;
	TdxExcelFilterValueContainerSpecificDatePeriodsConditionPeriod* __fastcall GetPeriod(int AIndex);
	int __fastcall GetPeriodCount();
	
protected:
	virtual TdxExcelFilterValueContainerSpecificDatePeriodsConditionPeriod* __fastcall AddPeriod();
	virtual void __fastcall AddPeriodCheckBox(TdxExcelFilterValueContainerSpecificDatePeriodsConditionPeriod* APeriod, Cxfilter::TcxFilterOperatorKind AOperator);
	virtual TdxExcelFilterValueContainerSpecificDatePeriodsConditionPeriod* __fastcall CreatePeriod();
	virtual void __fastcall DoGenerate(Dxlayoutcontainer::TdxLayoutGroup* AParentGroup);
	virtual void __fastcall GenerateGroups();
	virtual void __fastcall GeneratePeriods();
	virtual Cxfilter::TcxFilterBoolOperatorKind __fastcall GetBoolOperator();
	virtual int __fastcall GetCheckedCount();
	virtual Cxfilter::TcxFilterOperatorKind __fastcall GetOperator();
	virtual bool __fastcall IsComplex();
	virtual bool __fastcall IsEmpty();
	virtual void __fastcall PopulateValueInfos(Dxcoreclasses::TdxFastObjectList* AList);
	virtual void __fastcall UpdatePeriodCheckBoxStates(const Cxfilter::TcxFilterOperatorKinds &AOperators);
	virtual void __fastcall UpdateValues();
	__property Dxlayoutcontainer::TdxLayoutGroup* DayWeekPeriodsGroup = {read=FDayWeekPeriodsGroup};
	__property int PeriodCount = {read=GetPeriodCount, nodefault};
	__property Dxcoreclasses::TdxFastObjectList* PeriodList = {read=FPeriodList};
	__property TdxExcelFilterValueContainerSpecificDatePeriodsConditionPeriod* Periods[int AIndex] = {read=GetPeriod};
	__property Dxlayoutcontainer::TdxLayoutGroup* PeriodsGroup = {read=FPeriodsGroup};
	__property Dxlayoutcontainer::TdxLayoutGroup* MonthYearsPeriodsGroup = {read=FMonthYearPeriodsGroup};
	
public:
	__fastcall virtual ~TdxExcelFilterValueContainerSpecificDatePeriodsCondition();
public:
	/* TdxExcelFilterValueContainerCondition.Create */ inline __fastcall virtual TdxExcelFilterValueContainerSpecificDatePeriodsCondition(TdxExcelFilterValueContainer* AFilterValueContainer, TdxExcelFilterValueContainerConditionContainer* AOwner) : TdxExcelFilterValueContainerEditableCondition(AFilterValueContainer, AOwner) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerCustomFunctionCondition : public TdxExcelFilterValueContainerEditableCondition
{
	typedef TdxExcelFilterValueContainerEditableCondition inherited;
	
private:
	Dxlayoutcontainer::TdxLayoutCheckBoxItem* FCheckBox;
	System::UnicodeString FCustomFunctionName;
	Dxcustomfunction::TdxCustomFunctionOperator* FFunctionOperator;
	Cxclasses::TcxObjectList* FTextEdits;
	Cxclasses::TcxObjectList* FLayoutItems;
	TdxExcelFilterValueContainerPredefinedFiltersCondition* FOwner;
	Cxtextedit::TcxTextEdit* __fastcall GetTextEdit(int AIndex);
	int __fastcall GetTextEditCount();
	
protected:
	virtual void __fastcall CheckBoxClickHandler(System::TObject* Sender);
	virtual void __fastcall CheckTextEditStates();
	virtual void __fastcall DoGenerate(Dxlayoutcontainer::TdxLayoutGroup* AParentGroup);
	virtual Cxtextedit::TcxTextEdit* __fastcall GenerateTextEdit();
	virtual void __fastcall GenerateTextEdits(Dxcustomfunction::TdxCustomFunctionOperatorBrowsable* AFunctionOperator);
	virtual System::UnicodeString __fastcall GetCustomFunctionName();
	virtual System::UnicodeString __fastcall GetDisplayText();
	virtual System::Variant __fastcall GetValue();
	virtual bool __fastcall IsEmpty();
	virtual void __fastcall UpdateData();
	virtual void __fastcall ValueChanged();
	__property Dxlayoutcontainer::TdxLayoutCheckBoxItem* CheckBox = {read=FCheckBox};
	__property Dxcustomfunction::TdxCustomFunctionOperator* FunctionOperator = {read=FFunctionOperator};
	__property TdxExcelFilterValueContainerPredefinedFiltersCondition* Owner = {read=FOwner};
	__property int TextEditCount = {read=GetTextEditCount, nodefault};
	__property Cxtextedit::TcxTextEdit* TextEdits[int AIndex] = {read=GetTextEdit};
	
public:
	__fastcall virtual TdxExcelFilterValueContainerCustomFunctionCondition(TdxExcelFilterValueContainer* AFilterValueContainer, TdxExcelFilterValueContainerPredefinedFiltersCondition* AOwner, const System::UnicodeString ACustomFunctionName);
	__fastcall virtual ~TdxExcelFilterValueContainerCustomFunctionCondition();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerPredefinedFiltersCondition : public TdxExcelFilterValueContainerEditableCondition
{
	typedef TdxExcelFilterValueContainerEditableCondition inherited;
	
private:
	Dxcoreclasses::TdxFastObjectList* FConditions;
	Dxcoreclasses::TdxFastObjectList* FGroups;
	TdxExcelFilterValueContainerCustomFunctionCondition* __fastcall GetCondition(int AIndex);
	int __fastcall GetConditionCount();
	
protected:
	virtual void __fastcall DoGenerate(Dxlayoutcontainer::TdxLayoutGroup* AParentGroup);
	virtual Cxfilter::TcxFilterBoolOperatorKind __fastcall GetBoolOperator();
	virtual System::UnicodeString __fastcall GetCustomFunctionName();
	virtual void __fastcall GenerateConditions();
	virtual TdxExcelFilterValueContainerCustomFunctionCondition* __fastcall GenerateCondition(const System::UnicodeString ACustomFunctionName);
	virtual System::UnicodeString __fastcall GetDisplayText();
	virtual System::Variant __fastcall GetValue();
	virtual bool __fastcall IsComplex();
	virtual bool __fastcall IsEmpty();
	virtual void __fastcall PopulateValueInfos(Dxcoreclasses::TdxFastObjectList* AList);
	virtual void __fastcall UpdateData();
	__property int ConditionCount = {read=GetConditionCount, nodefault};
	__property TdxExcelFilterValueContainerCustomFunctionCondition* Conditions[int AIndex] = {read=GetCondition};
	
public:
	__fastcall virtual ~TdxExcelFilterValueContainerPredefinedFiltersCondition();
public:
	/* TdxExcelFilterValueContainerCondition.Create */ inline __fastcall virtual TdxExcelFilterValueContainerPredefinedFiltersCondition(TdxExcelFilterValueContainer* AFilterValueContainer, TdxExcelFilterValueContainerConditionContainer* AOwner) : TdxExcelFilterValueContainerEditableCondition(AFilterValueContainer, AOwner) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerCustomFilterConditionAndOr : public TdxExcelFilterValueContainerCustomItem
{
	typedef TdxExcelFilterValueContainerCustomItem inherited;
	
private:
	Cxradiogroup::TcxRadioButton* FAndRadioButton;
	Cxradiogroup::TcxRadioButton* FOrRadioButton;
	
protected:
	virtual void __fastcall DoGenerate(Dxlayoutcontainer::TdxLayoutGroup* AParentGroup);
	virtual void __fastcall GenerateAndRadioButton();
	virtual void __fastcall GenerateOrRadioButton();
	__property Cxradiogroup::TcxRadioButton* AndRadioButton = {read=FAndRadioButton};
	__property Cxradiogroup::TcxRadioButton* OrRadioButton = {read=FOrRadioButton};
	
public:
	__fastcall virtual ~TdxExcelFilterValueContainerCustomFilterConditionAndOr();
public:
	/* TdxExcelFilterValueContainerCustomItem.Create */ inline __fastcall virtual TdxExcelFilterValueContainerCustomFilterConditionAndOr(TdxExcelFilterValueContainer* AFilterValueContainer) : TdxExcelFilterValueContainerCustomItem(AFilterValueContainer) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerCustomFilterCondition : public TdxExcelFilterValueContainerEditableCondition
{
	typedef TdxExcelFilterValueContainerEditableCondition inherited;
	
private:
	TdxExcelFilterValueContainerCustomFilterConditionAndOr* FAndOr;
	Dxlayoutcontainer::TdxLayoutGroup* FAndOrGroup;
	TdxExcelFilterValueContainerCustomFilterConditionContainer* FConditionContainer1;
	TdxExcelFilterValueContainerCustomFilterConditionContainer* FConditionContainer2;
	TdxExcelFilterValueContainerCondition* __fastcall GetCondition1();
	TdxExcelFilterValueContainerCondition* __fastcall GetCondition2();
	
protected:
	virtual void __fastcall AndOrClickHandler(System::TObject* ASender);
	virtual TdxExcelFilterValueContainerCustomFilterConditionContainer* __fastcall CreateConditionContainer();
	virtual void __fastcall DoGenerate(Dxlayoutcontainer::TdxLayoutGroup* AParentGroup);
	virtual void __fastcall GenerateAndOr();
	virtual void __fastcall GenerateConditionContainer1();
	virtual void __fastcall GenerateConditionContainer2();
	virtual Cxfilter::TcxFilterBoolOperatorKind __fastcall GetBoolOperator();
	virtual System::UnicodeString __fastcall GetDisplayText();
	virtual Cxfilter::TcxFilterOperatorKind __fastcall GetOperator();
	virtual TdxExcelFilterValueContainerConditionTypes __fastcall GetSupportedConditionTypes();
	virtual System::Variant __fastcall GetValue();
	virtual bool __fastcall IsComplex();
	virtual bool __fastcall IsEmpty();
	virtual void __fastcall PopulateActiveCriteriaItems(TdxExcelFilterValueContainerCustomFilterConditionContainer* AContainer);
	virtual void __fastcall PopulateValueInfos(Dxcoreclasses::TdxFastObjectList* AList);
	virtual void __fastcall SetAndOrClickHandler(System::Classes::TNotifyEvent AEvent);
	virtual void __fastcall SetAndOrKeyDownHandler(Vcl::Controls::TKeyEvent AEvent);
	virtual void __fastcall UpdateData();
	virtual void __fastcall UpdateValues();
	__property TdxExcelFilterValueContainerCustomFilterConditionAndOr* AndOr = {read=FAndOr};
	__property Dxlayoutcontainer::TdxLayoutGroup* AndOrGroup = {read=FAndOrGroup};
	__property TdxExcelFilterValueContainerCondition* Condition1 = {read=GetCondition1};
	__property TdxExcelFilterValueContainerCondition* Condition2 = {read=GetCondition2};
	__property TdxExcelFilterValueContainerCustomFilterConditionContainer* ConditionContainer1 = {read=FConditionContainer1};
	__property TdxExcelFilterValueContainerCustomFilterConditionContainer* ConditionContainer2 = {read=FConditionContainer2};
	
public:
	__fastcall virtual ~TdxExcelFilterValueContainerCustomFilterCondition();
public:
	/* TdxExcelFilterValueContainerCondition.Create */ inline __fastcall virtual TdxExcelFilterValueContainerCustomFilterCondition(TdxExcelFilterValueContainer* AFilterValueContainer, TdxExcelFilterValueContainerConditionContainer* AOwner) : TdxExcelFilterValueContainerEditableCondition(AFilterValueContainer, AOwner) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerConditionContainer : public TdxExcelFilterValueContainerCustomItem
{
	typedef TdxExcelFilterValueContainerCustomItem inherited;
	
private:
	Cxfilter::TcxFilterBoolOperatorKind FActiveBoolOperator;
	System::Generics::Collections::TList__1<Cxfilter::TcxFilterCriteriaItem*>* FActiveCriteriaItems;
	TdxExcelFilterValueContainerCondition* FCondition;
	TdxExcelFilterValueContainerConditionTypesComboBox* FConditionTypeComboBox;
	Dxlayoutcontainer::TdxLayoutItem* FConditionTypeLayoutItem;
	TdxExcelFilterValueContainerConditionClass FCustomFilterConditionClass;
	Dxlayoutcontainer::TdxLayoutGroup* FLayoutGroup;
	bool FNeedUpdateConditionTypeItems;
	bool FNeedUpdateConditionDataOnConditionTypeChanged;
	TdxExcelFilterValueContainerConditionTypes FSupportedConditionTypes;
	void __fastcall ConditionTypeChangedHandler(System::TObject* Sender);
	bool __fastcall PopulateActiveCriteriaItemsByAndItemList(Cxfilter::TcxFilterCriteriaItemList* AItemList);
	bool __fastcall PopulateActiveCriteriaItemsByOrItemList(Cxfilter::TcxFilterCriteriaItemList* AItemList);
	void __fastcall SetSupportedConditionTypes(const TdxExcelFilterValueContainerConditionTypes &AValue);
	
protected:
	virtual void __fastcall ApplyFilter();
	virtual void __fastcall ConditionChanged();
	virtual void __fastcall DoGenerate(Dxlayoutcontainer::TdxLayoutGroup* AParentGroup);
	virtual void __fastcall FilterValuesChanged();
	virtual void __fastcall FocusMainItem();
	virtual void __fastcall GenerateCondition();
	virtual void __fastcall GenerateConditionTypeComboBox();
	virtual void __fastcall GenerateLayoutGroup();
	virtual TdxExcelFilterValueContainerConditionType __fastcall GetActiveConditionType(/* out */ bool &AHasActiveCondition);
	virtual TdxExcelFilterValueContainerConditionType __fastcall GetConditionType();
	virtual int __fastcall GetConditionTypeItemIndex(TdxExcelFilterValueContainerConditionType AConditionType);
	virtual int __fastcall GetDefaultConditionTypeIndex();
	virtual bool __fastcall HasSelectedConditionType();
	virtual bool __fastcall IsActiveCriteriaItemsContainBetweenCondition();
	virtual bool __fastcall IsConditionPresentInFilter();
	virtual void __fastcall KeyDownHandler(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	virtual bool __fastcall PopulateActiveCriteriaItems(Cxfilter::TcxFilterCriteriaItemList* AItemList);
	virtual void __fastcall RegenerateCondition();
	virtual void __fastcall SetCaption(System::UnicodeString AValue);
	virtual void __fastcall UpdateActiveCriteriaItems();
	virtual void __fastcall UpdateConditionCaption();
	virtual void __fastcall UpdateConditionType();
	virtual void __fastcall UpdateData();
	__property Cxfilter::TcxFilterBoolOperatorKind ActiveBoolOperator = {read=FActiveBoolOperator, nodefault};
	__property System::Generics::Collections::TList__1<Cxfilter::TcxFilterCriteriaItem*>* ActiveCriteriaItems = {read=FActiveCriteriaItems};
	__property TdxExcelFilterValueContainerCondition* Condition = {read=FCondition};
	__property TdxExcelFilterValueContainerConditionTypesComboBox* ConditionTypeComboBox = {read=FConditionTypeComboBox};
	__property Dxlayoutcontainer::TdxLayoutItem* ConditionTypeLayoutItem = {read=FConditionTypeLayoutItem};
	__property TdxExcelFilterValueContainerConditionClass CustomFilterConditionClass = {read=FCustomFilterConditionClass, write=FCustomFilterConditionClass};
	__property Dxlayoutcontainer::TdxLayoutGroup* LayoutGroup = {read=FLayoutGroup};
	__property bool NeedUpdateConditionDataOnConditionTypeChanged = {read=FNeedUpdateConditionDataOnConditionTypeChanged, nodefault};
	__property bool NeedUpdateConditionTypeItems = {read=FNeedUpdateConditionTypeItems, nodefault};
	__property TdxExcelFilterValueContainerConditionTypes SupportedConditionTypes = {read=FSupportedConditionTypes, write=SetSupportedConditionTypes};
	
public:
	__fastcall virtual TdxExcelFilterValueContainerConditionContainer(TdxExcelFilterValueContainer* AFilterValueContainer);
	__fastcall virtual ~TdxExcelFilterValueContainerConditionContainer();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerCustomFilterConditionContainer : public TdxExcelFilterValueContainerConditionContainer
{
	typedef TdxExcelFilterValueContainerConditionContainer inherited;
	
private:
	TdxExcelFilterValueContainerCustomFilterCondition* FCustomFilterCondition;
	
protected:
	virtual void __fastcall ApplyFilter();
	virtual bool __fastcall PopulateActiveCriteriaItems(Cxfilter::TcxFilterCriteriaItemList* AItemList);
	__property TdxExcelFilterValueContainerCustomFilterCondition* CustomFilterCondition = {read=FCustomFilterCondition};
	
public:
	__fastcall virtual TdxExcelFilterValueContainerCustomFilterConditionContainer(TdxExcelFilterValueContainer* AFilterValueContainer, TdxExcelFilterValueContainerCustomFilterCondition* ACustomFilterCondition);
public:
	/* TdxExcelFilterValueContainerConditionContainer.Destroy */ inline __fastcall virtual ~TdxExcelFilterValueContainerCustomFilterConditionContainer() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxExcelFilterValueContainerRangeModeValuesPageBetween : public TdxExcelFilterValueContainerCustomItem
{
	typedef TdxExcelFilterValueContainerCustomItem inherited;
	
private:
	Cxedit::TcxCustomEdit* FFromEdit;
	System::Variant FFromValue;
	TdxExcelFilterValueContainerRangeModeValuesPage* FOwner;
	Cxedit::TcxCustomEdit* FToEdit;
	System::Variant FToValue;
	void __fastcall FromEditChangeHandler(System::TObject* ASender);
	void __fastcall FromEditValidateHandler(System::TObject* ASender, System::Variant &ADisplayValue, Vcl::Controls::TCaption &AErrorText, bool &AError);
	void __fastcall ToEditChangeHandler(System::TObject* ASender);
	void __fastcall ToEditValidateHandler(System::TObject* ASender, System::Variant &ADisplayValue, Vcl::Controls::TCaption &AErrorText, bool &AError);
	
protected:
	virtual Cxedit::TcxCustomEdit* __fastcall CreateEdit();
	virtual void __fastcall DoGenerate(Dxlayoutcontainer::TdxLayoutGroup* AParentGroup);
	virtual void __fastcall FocusMainItem();
	virtual void __fastcall GenerateFromEdit();
	virtual void __fastcall GenerateToEdit();
	virtual void __fastcall UpdateData();
	virtual void __fastcall UpdateEditValue(Cxedit::TcxCustomEdit* AEdit, const System::Variant &AValue);
	virtual void __fastcall ValueChanged();
	__property Cxedit::TcxCustomEdit* FromEdit = {read=FFromEdit};
	__property System::Variant FromValue = {read=FFromValue};
	__property TdxExcelFilterValueContainerRangeModeValuesPage* Owner = {read=FOwner};
	__property Cxedit::TcxCustomEdit* ToEdit = {read=FToEdit};
	__property System::Variant ToValue = {read=FToValue};
	
public:
	__fastcall virtual TdxExcelFilterValueContainerRangeModeValuesPageBetween(TdxExcelFilterValueContainer* AFilterValueContainer, TdxExcelFilterValueContainerRangeModeValuesPage* AOwner);
	__fastcall virtual ~TdxExcelFilterValueContainerRangeModeValuesPageBetween();
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerCustomPage : public TdxExcelFilterValueContainerCustomItem
{
	typedef TdxExcelFilterValueContainerCustomItem inherited;
	
protected:
	virtual void __fastcall ApplyFilter();
	virtual void __fastcall FocusMainItem();
public:
	/* TdxExcelFilterValueContainerCustomItem.Create */ inline __fastcall virtual TdxExcelFilterValueContainerCustomPage(TdxExcelFilterValueContainer* AFilterValueContainer) : TdxExcelFilterValueContainerCustomItem(AFilterValueContainer) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxExcelFilterValueContainerCustomPage() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerCustomValuesPage : public TdxExcelFilterValueContainerCustomPage
{
	typedef TdxExcelFilterValueContainerCustomPage inherited;
	
public:
	/* TdxExcelFilterValueContainerCustomItem.Create */ inline __fastcall virtual TdxExcelFilterValueContainerCustomValuesPage(TdxExcelFilterValueContainer* AFilterValueContainer) : TdxExcelFilterValueContainerCustomPage(AFilterValueContainer) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxExcelFilterValueContainerCustomValuesPage() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerSearchableValuesPage : public TdxExcelFilterValueContainerCustomValuesPage
{
	typedef TdxExcelFilterValueContainerCustomValuesPage inherited;
	
private:
	Cxclasses::TcxTimer* FDelayedTimer;
	TdxExcelFilterValueContainerSearchEdit* FSearchEdit;
	System::UnicodeString FSearchText;
	void __fastcall CreateTimer();
	void __fastcall DestroyTimer();
	void __fastcall OnDelayedSearchTimer(System::TObject* Sender);
	
protected:
	virtual void __fastcall DoGenerate(Dxlayoutcontainer::TdxLayoutGroup* AParentGroup);
	virtual void __fastcall FocusMainItem();
	virtual void __fastcall GenerateSearchEdit();
	virtual void __fastcall KeyDownHandler(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall SearchEditKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall SearchEditValueChanged(System::TObject* ASender);
	virtual void __fastcall SearchTextChanged();
	virtual void __fastcall StartDelayedSearch();
	virtual void __fastcall UpdateData();
	virtual void __fastcall UpdateValues();
	__property TdxExcelFilterValueContainerSearchEdit* SearchEdit = {read=FSearchEdit};
	__property System::UnicodeString SearchText = {read=FSearchText};
	
public:
	__fastcall virtual ~TdxExcelFilterValueContainerSearchableValuesPage();
public:
	/* TdxExcelFilterValueContainerCustomItem.Create */ inline __fastcall virtual TdxExcelFilterValueContainerSearchableValuesPage(TdxExcelFilterValueContainer* AFilterValueContainer) : TdxExcelFilterValueContainerCustomValuesPage(AFilterValueContainer) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerListBoxModeValuesPage : public TdxExcelFilterValueContainerSearchableValuesPage
{
	typedef TdxExcelFilterValueContainerSearchableValuesPage inherited;
	
private:
	TdxExcelFilterValueContainerListBox* FListBox;
	
protected:
	virtual void __fastcall ApplyFilter();
	virtual void __fastcall DoGenerate(Dxlayoutcontainer::TdxLayoutGroup* AParentGroup);
	virtual void __fastcall FocusMainItem();
	virtual void __fastcall GenerateListBox();
	virtual void __fastcall UpdateValues();
	__property TdxExcelFilterValueContainerListBox* ListBox = {read=FListBox};
	
public:
	__fastcall virtual ~TdxExcelFilterValueContainerListBoxModeValuesPage();
public:
	/* TdxExcelFilterValueContainerCustomItem.Create */ inline __fastcall virtual TdxExcelFilterValueContainerListBoxModeValuesPage(TdxExcelFilterValueContainer* AFilterValueContainer) : TdxExcelFilterValueContainerSearchableValuesPage(AFilterValueContainer) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerCustomDateTimeTreeViewModeValuesPage : public TdxExcelFilterValueContainerSearchableValuesPage
{
	typedef TdxExcelFilterValueContainerSearchableValuesPage inherited;
	
private:
	TdxExcelFilterValueContainerCustomDateTimeTreeView* FTreeView;
	
protected:
	virtual void __fastcall ApplyFilter();
	virtual TdxExcelFilterValueContainerCustomDateTimeTreeView* __fastcall CreateTreeView();
	virtual void __fastcall DoGenerate(Dxlayoutcontainer::TdxLayoutGroup* AParentGroup);
	virtual void __fastcall FocusMainItem();
	virtual void __fastcall GenerateTreeView();
	virtual void __fastcall UpdateValues();
	__property TdxExcelFilterValueContainerCustomDateTimeTreeView* TreeView = {read=FTreeView};
	
public:
	__fastcall virtual ~TdxExcelFilterValueContainerCustomDateTimeTreeViewModeValuesPage();
public:
	/* TdxExcelFilterValueContainerCustomItem.Create */ inline __fastcall virtual TdxExcelFilterValueContainerCustomDateTimeTreeViewModeValuesPage(TdxExcelFilterValueContainer* AFilterValueContainer) : TdxExcelFilterValueContainerSearchableValuesPage(AFilterValueContainer) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerDateTreeViewModeValuesPage : public TdxExcelFilterValueContainerCustomDateTimeTreeViewModeValuesPage
{
	typedef TdxExcelFilterValueContainerCustomDateTimeTreeViewModeValuesPage inherited;
	
protected:
	virtual TdxExcelFilterValueContainerCustomDateTimeTreeView* __fastcall CreateTreeView();
public:
	/* TdxExcelFilterValueContainerCustomDateTimeTreeViewModeValuesPage.Destroy */ inline __fastcall virtual ~TdxExcelFilterValueContainerDateTreeViewModeValuesPage() { }
	
public:
	/* TdxExcelFilterValueContainerCustomItem.Create */ inline __fastcall virtual TdxExcelFilterValueContainerDateTreeViewModeValuesPage(TdxExcelFilterValueContainer* AFilterValueContainer) : TdxExcelFilterValueContainerCustomDateTimeTreeViewModeValuesPage(AFilterValueContainer) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerTimeTreeViewModeValuesPage : public TdxExcelFilterValueContainerCustomDateTimeTreeViewModeValuesPage
{
	typedef TdxExcelFilterValueContainerCustomDateTimeTreeViewModeValuesPage inherited;
	
protected:
	virtual TdxExcelFilterValueContainerCustomDateTimeTreeView* __fastcall CreateTreeView();
public:
	/* TdxExcelFilterValueContainerCustomDateTimeTreeViewModeValuesPage.Destroy */ inline __fastcall virtual ~TdxExcelFilterValueContainerTimeTreeViewModeValuesPage() { }
	
public:
	/* TdxExcelFilterValueContainerCustomItem.Create */ inline __fastcall virtual TdxExcelFilterValueContainerTimeTreeViewModeValuesPage(TdxExcelFilterValueContainer* AFilterValueContainer) : TdxExcelFilterValueContainerCustomDateTimeTreeViewModeValuesPage(AFilterValueContainer) { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxExcelFilterValueContainerRangeModeValuesPage : public TdxExcelFilterValueContainerCustomValuesPage
{
	typedef TdxExcelFilterValueContainerCustomValuesPage inherited;
	
private:
	Dxlayoutcontainer::TdxLayoutGroup* FBetweenGroup;
	TdxExcelFilterValueContainerRangeModeValuesPageBetween* FBetweenValues;
	System::Variant FFromValue;
	bool FTracking;
	System::Variant FMaxValue;
	System::Variant FMinValue;
	System::Variant FToValue;
	Dxrangetrackbar::TdxRangeTrackBar* FRangeTrackBar;
	void __fastcall BeginTracking();
	void __fastcall EndTracking();
	void __fastcall RangeTrackBarGetPositionHintHandler(System::TObject* Sender, const int AMinPosition, const int AMaxPosition, System::UnicodeString &AHintText, bool &ACanShow, bool &AIsHintMultiLine);
	void __fastcall RangeTrackBarMouseDownHandler(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall RangeTrackBarMouseUpHandler(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall RangeTrackBarValueChangedHandler(System::TObject* AValue);
	
protected:
	virtual void __fastcall ApplyFilter();
	virtual void __fastcall DoGenerate(Dxlayoutcontainer::TdxLayoutGroup* AParentGroup);
	virtual void __fastcall FilterValuesChanged();
	virtual void __fastcall FocusMainItem();
	virtual void __fastcall GenerateFromToGroup();
	virtual void __fastcall GenerateFromToValues();
	virtual void __fastcall GenerateRangeTrackBar();
	virtual System::UnicodeString __fastcall GetDisplayTextByValue(const System::Variant &AValue);
	virtual int __fastcall GetRangeTrackBarFrequency();
	virtual System::Variant __fastcall GetRangeTrackBarMax();
	virtual System::Variant __fastcall GetRangeTrackBarMin();
	virtual int __fastcall GetRangeTrackBarRangeMax();
	virtual int __fastcall GetRangeTrackBarRangeMin();
	virtual bool __fastcall IsLargeIntNumeric();
	virtual bool __fastcall IsSimpleNumeric();
	virtual void __fastcall KeyDownHandler(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	virtual System::Variant __fastcall MapRangeTrackBarValueToValue(int AValue);
	virtual int __fastcall MapValueToRangeTrackBarValue(const System::Variant &AValue);
	virtual void __fastcall SetValues(const System::Variant &AFromValue, const System::Variant &AToValue);
	virtual void __fastcall TrackValuesChanged();
	virtual void __fastcall UpdateData();
	virtual void __fastcall UpdateFromToValues();
	virtual void __fastcall UpdateMaxMinValues();
	virtual void __fastcall UpdateRangeTrackBar();
	__property Dxlayoutcontainer::TdxLayoutGroup* BetweenGroup = {read=FBetweenGroup};
	__property TdxExcelFilterValueContainerRangeModeValuesPageBetween* BetweenValues = {read=FBetweenValues};
	__property System::Variant FromValue = {read=FFromValue};
	__property System::Variant MaxValue = {read=FMaxValue};
	__property System::Variant MinValue = {read=FMinValue};
	__property System::Variant ToValue = {read=FToValue};
	__property Dxrangetrackbar::TdxRangeTrackBar* RangeTrackBar = {read=FRangeTrackBar};
	
public:
	__fastcall virtual ~TdxExcelFilterValueContainerRangeModeValuesPage();
public:
	/* TdxExcelFilterValueContainerCustomItem.Create */ inline __fastcall virtual TdxExcelFilterValueContainerRangeModeValuesPage(TdxExcelFilterValueContainer* AFilterValueContainer) : TdxExcelFilterValueContainerCustomValuesPage(AFilterValueContainer) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerFiltersPage : public TdxExcelFilterValueContainerCustomPage
{
	typedef TdxExcelFilterValueContainerCustomPage inherited;
	
private:
	TdxExcelFilterValueContainerConditionContainer* FConditionContainer;
	
protected:
	virtual void __fastcall ApplyFilter();
	virtual void __fastcall DoGenerate(Dxlayoutcontainer::TdxLayoutGroup* AParentGroup);
	virtual void __fastcall FocusMainItem();
	virtual void __fastcall GenerateConditionContainer();
	virtual TdxExcelFilterValueContainerConditionTypes __fastcall GetSupportedConditionTypes();
	virtual void __fastcall UpdateData();
	__property TdxExcelFilterValueContainerConditionContainer* ConditionContainer = {read=FConditionContainer};
	
public:
	__fastcall virtual ~TdxExcelFilterValueContainerFiltersPage();
public:
	/* TdxExcelFilterValueContainerCustomItem.Create */ inline __fastcall virtual TdxExcelFilterValueContainerFiltersPage(TdxExcelFilterValueContainer* AFilterValueContainer) : TdxExcelFilterValueContainerCustomPage(AFilterValueContainer) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerLayout : public TdxExcelFilterValueContainerCustomItem
{
	typedef TdxExcelFilterValueContainerCustomItem inherited;
	
private:
	void __fastcall TabChangedHandler(System::TObject* ASender);
	
protected:
	virtual void __fastcall ApplyFilter();
	virtual void __fastcall DestroyPageGroups();
	virtual void __fastcall DestroyPages();
	virtual void __fastcall DoGenerate(Dxlayoutcontainer::TdxLayoutGroup* AParentGroup);
	virtual void __fastcall FocusMainItem();
	virtual void __fastcall GeneratePageGroups();
	virtual void __fastcall GeneratePages();
	virtual TdxExcelFilterValueContainerCustomPage* __fastcall GetActivePage();
	virtual int __fastcall GetDefaultPageIndex();
	virtual void __fastcall TabChanged();
	virtual void __fastcall UpdateData();
	
public:
	__fastcall virtual ~TdxExcelFilterValueContainerLayout();
public:
	/* TdxExcelFilterValueContainerCustomItem.Create */ inline __fastcall virtual TdxExcelFilterValueContainerLayout(TdxExcelFilterValueContainer* AFilterValueContainer) : TdxExcelFilterValueContainerCustomItem(AFilterValueContainer) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerCustomValuesLayout : public TdxExcelFilterValueContainerLayout
{
	typedef TdxExcelFilterValueContainerLayout inherited;
	
private:
	TdxExcelFilterValueContainerCustomValuesPage* FValuesPage;
	Dxlayoutcontainer::TdxLayoutGroup* FValuesPageGroup;
	
protected:
	virtual TdxExcelFilterValueContainerCustomValuesPage* __fastcall CreateValuesPage() = 0 ;
	virtual void __fastcall DestroyPageGroups();
	virtual void __fastcall DestroyPages();
	virtual void __fastcall GeneratePageGroups();
	virtual void __fastcall GeneratePages();
	virtual void __fastcall GenerateValuesPage();
	virtual void __fastcall GenerateValuesPageGroup();
	virtual TdxExcelFilterValueContainerCustomPage* __fastcall GetActivePage();
	virtual int __fastcall GetDefaultPageIndex();
	virtual System::UnicodeString __fastcall GetValuesPageCaption();
	__property TdxExcelFilterValueContainerCustomValuesPage* ValuesPage = {read=FValuesPage};
	__property Dxlayoutcontainer::TdxLayoutGroup* ValuesPageGroup = {read=FValuesPageGroup};
public:
	/* TdxExcelFilterValueContainerLayout.Destroy */ inline __fastcall virtual ~TdxExcelFilterValueContainerCustomValuesLayout() { }
	
public:
	/* TdxExcelFilterValueContainerCustomItem.Create */ inline __fastcall virtual TdxExcelFilterValueContainerCustomValuesLayout(TdxExcelFilterValueContainer* AFilterValueContainer) : TdxExcelFilterValueContainerLayout(AFilterValueContainer) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerCustomValuesAndFiltersLayout : public TdxExcelFilterValueContainerCustomValuesLayout
{
	typedef TdxExcelFilterValueContainerCustomValuesLayout inherited;
	
private:
	TdxExcelFilterValueContainerFiltersPage* FFiltersPage;
	Dxlayoutcontainer::TdxLayoutGroup* FFiltersPageGroup;
	
protected:
	virtual TdxExcelFilterValueContainerFiltersPage* __fastcall CreateFiltersPage();
	virtual void __fastcall DestroyPageGroups();
	virtual void __fastcall DestroyPages();
	virtual void __fastcall GenerateFiltersPage();
	virtual void __fastcall GenerateFiltersPageGroup();
	virtual void __fastcall GeneratePages();
	virtual void __fastcall GeneratePageGroups();
	virtual TdxExcelFilterValueContainerCustomPage* __fastcall GetActivePage();
	virtual int __fastcall GetDefaultPageIndex();
	virtual System::UnicodeString __fastcall GetFiltersPageCaption();
	virtual void __fastcall TabChanged();
	__property TdxExcelFilterValueContainerFiltersPage* FiltersPage = {read=FFiltersPage};
	__property Dxlayoutcontainer::TdxLayoutGroup* FiltersPageGroup = {read=FFiltersPageGroup};
public:
	/* TdxExcelFilterValueContainerLayout.Destroy */ inline __fastcall virtual ~TdxExcelFilterValueContainerCustomValuesAndFiltersLayout() { }
	
public:
	/* TdxExcelFilterValueContainerCustomItem.Create */ inline __fastcall virtual TdxExcelFilterValueContainerCustomValuesAndFiltersLayout(TdxExcelFilterValueContainer* AFilterValueContainer) : TdxExcelFilterValueContainerCustomValuesLayout(AFilterValueContainer) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerCheckModeLayout : public TdxExcelFilterValueContainerCustomValuesLayout
{
	typedef TdxExcelFilterValueContainerCustomValuesLayout inherited;
	
protected:
	virtual TdxExcelFilterValueContainerCustomValuesPage* __fastcall CreateValuesPage();
public:
	/* TdxExcelFilterValueContainerLayout.Destroy */ inline __fastcall virtual ~TdxExcelFilterValueContainerCheckModeLayout() { }
	
public:
	/* TdxExcelFilterValueContainerCustomItem.Create */ inline __fastcall virtual TdxExcelFilterValueContainerCheckModeLayout(TdxExcelFilterValueContainer* AFilterValueContainer) : TdxExcelFilterValueContainerCustomValuesLayout(AFilterValueContainer) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerLookupModeLayout : public TdxExcelFilterValueContainerCustomValuesLayout
{
	typedef TdxExcelFilterValueContainerCustomValuesLayout inherited;
	
protected:
	virtual TdxExcelFilterValueContainerCustomValuesPage* __fastcall CreateValuesPage();
public:
	/* TdxExcelFilterValueContainerLayout.Destroy */ inline __fastcall virtual ~TdxExcelFilterValueContainerLookupModeLayout() { }
	
public:
	/* TdxExcelFilterValueContainerCustomItem.Create */ inline __fastcall virtual TdxExcelFilterValueContainerLookupModeLayout(TdxExcelFilterValueContainer* AFilterValueContainer) : TdxExcelFilterValueContainerCustomValuesLayout(AFilterValueContainer) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerDateTreeViewModeLayout : public TdxExcelFilterValueContainerCustomValuesAndFiltersLayout
{
	typedef TdxExcelFilterValueContainerCustomValuesAndFiltersLayout inherited;
	
protected:
	virtual TdxExcelFilterValueContainerCustomValuesPage* __fastcall CreateValuesPage();
	virtual System::UnicodeString __fastcall GetFiltersPageCaption();
public:
	/* TdxExcelFilterValueContainerLayout.Destroy */ inline __fastcall virtual ~TdxExcelFilterValueContainerDateTreeViewModeLayout() { }
	
public:
	/* TdxExcelFilterValueContainerCustomItem.Create */ inline __fastcall virtual TdxExcelFilterValueContainerDateTreeViewModeLayout(TdxExcelFilterValueContainer* AFilterValueContainer) : TdxExcelFilterValueContainerCustomValuesAndFiltersLayout(AFilterValueContainer) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerTimeTreeViewModeLayout : public TdxExcelFilterValueContainerCustomValuesAndFiltersLayout
{
	typedef TdxExcelFilterValueContainerCustomValuesAndFiltersLayout inherited;
	
protected:
	virtual TdxExcelFilterValueContainerCustomValuesPage* __fastcall CreateValuesPage();
	virtual System::UnicodeString __fastcall GetFiltersPageCaption();
public:
	/* TdxExcelFilterValueContainerLayout.Destroy */ inline __fastcall virtual ~TdxExcelFilterValueContainerTimeTreeViewModeLayout() { }
	
public:
	/* TdxExcelFilterValueContainerCustomItem.Create */ inline __fastcall virtual TdxExcelFilterValueContainerTimeTreeViewModeLayout(TdxExcelFilterValueContainer* AFilterValueContainer) : TdxExcelFilterValueContainerCustomValuesAndFiltersLayout(AFilterValueContainer) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerListBoxModeLayout : public TdxExcelFilterValueContainerCustomValuesAndFiltersLayout
{
	typedef TdxExcelFilterValueContainerCustomValuesAndFiltersLayout inherited;
	
protected:
	virtual TdxExcelFilterValueContainerCustomValuesPage* __fastcall CreateValuesPage();
	virtual System::UnicodeString __fastcall GetFiltersPageCaption();
public:
	/* TdxExcelFilterValueContainerLayout.Destroy */ inline __fastcall virtual ~TdxExcelFilterValueContainerListBoxModeLayout() { }
	
public:
	/* TdxExcelFilterValueContainerCustomItem.Create */ inline __fastcall virtual TdxExcelFilterValueContainerListBoxModeLayout(TdxExcelFilterValueContainer* AFilterValueContainer) : TdxExcelFilterValueContainerCustomValuesAndFiltersLayout(AFilterValueContainer) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxExcelFilterValueContainerRangeModeLayout : public TdxExcelFilterValueContainerCustomValuesAndFiltersLayout
{
	typedef TdxExcelFilterValueContainerCustomValuesAndFiltersLayout inherited;
	
protected:
	virtual TdxExcelFilterValueContainerCustomValuesPage* __fastcall CreateValuesPage();
	virtual System::UnicodeString __fastcall GetFiltersPageCaption();
public:
	/* TdxExcelFilterValueContainerLayout.Destroy */ inline __fastcall virtual ~TdxExcelFilterValueContainerRangeModeLayout() { }
	
public:
	/* TdxExcelFilterValueContainerCustomItem.Create */ inline __fastcall virtual TdxExcelFilterValueContainerRangeModeLayout(TdxExcelFilterValueContainer* AFilterValueContainer) : TdxExcelFilterValueContainerCustomValuesAndFiltersLayout(AFilterValueContainer) { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxExcelFilterValueContainer : public TdxCustomFilterValueContainer
{
	typedef TdxCustomFilterValueContainer inherited;
	
private:
	TdxExcelFilterValueContainerApplyChangesMode FApplyChanges;
	_di_IdxCustomFunctionFilterableComponent FCustomFunctionComponent;
	System::Classes::TStringList* FCustomFunctions;
	TdxExcelFilterValueContainerDateTimeValuesPageType FDateTimeValuesPageType;
	TdxExcelFilterValueContainerDefaultPage FDefaultPage;
	Cxfiltercontrolutils::TcxCustomFilterEditHelperClass FFilterHelper;
	System::TObject* FFilterItemLink;
	Cxedit::TcxCustomEditProperties* FFilterProperties;
	Cxdatastorage::TcxValueTypeClass FFilterValueTypeClass;
	TdxExcelFilterValueContainerLayout* FLayout;
	Dxlayoutcontrol::TdxLayoutControl* FLayoutControl;
	Dxlayoutlookandfeels::TdxLayoutCxLookAndFeel* FLayoutLookAndFeel;
	System::Classes::TStringList* FNonUniqueDisplayValues;
	Cxfilter::TcxFilterValueList* FNonUniqueValues;
	TdxExcelFilterValueContainerNumericValuesPageType FNumericValuesPageType;
	void __fastcall SetApplyChanges(TdxExcelFilterValueContainerApplyChangesMode AValue);
	bool __fastcall GetHasCustomFunctions();
	Cxfiltercontrolutils::TcxCustomFilterEditHelperClass __fastcall GetFilterHelper();
	_di_IdxExcelFilterableComponent __fastcall GetFilterableComponent();
	Dxlayoutcontainer::TdxLayoutContainer* __fastcall GetLayoutContainer();
	System::Classes::TStringList* __fastcall GetNonUniqueDisplayValues();
	Cxfilter::TcxFilterValueList* __fastcall GetNonUniqueValues();
	void __fastcall SetDateTimeValuesPageType(const TdxExcelFilterValueContainerDateTimeValuesPageType AValue);
	void __fastcall SetDefaultPage(TdxExcelFilterValueContainerDefaultPage AValue);
	void __fastcall SetNumericValuesPageType(const TdxExcelFilterValueContainerNumericValuesPageType AValue);
	void __fastcall LayoutControlKeyDownHandler(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	
protected:
	virtual void __fastcall ApplyModeChanged();
	virtual void __fastcall DoUpdateFiltering();
	virtual void __fastcall DoUpdateLayout();
	virtual void __fastcall FocusLayoutMainItem();
	virtual Cxfiltercontrolutils::TcxFilterDataType __fastcall GetDataType();
	virtual TdxExcelFilterValueContainerDateTimeValuesPageType __fastcall GetDateTimeValuesPageType();
	virtual System::Types::TRect __fastcall GetDefaultBounds();
	virtual System::UnicodeString __fastcall GetDisplayTextByValue(const System::Variant &AValue);
	virtual TdxExcelFilterValueContainerListBoxClass __fastcall GetListBoxClass();
	virtual TdxExcelFilterValueContainerNumericValuesPageType __fastcall GetNumericValuesPageType();
	virtual TdxExcelFilterValueContainerType __fastcall GetType();
	virtual void __fastcall InitLayoutControl();
	virtual void __fastcall InitLayoutLookAndFeel();
	virtual bool __fastcall IsEditValueValid(System::Variant &AValue);
	virtual bool __fastcall IsLinkComponentSupported(System::Classes::TComponent* AValue);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall LayoutKeyDown(System::TObject* ASender, System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall LinkComponentChanged();
	virtual bool __fastcall NeedImmediateApply();
	virtual void __fastcall NonUniqueValuesNeeded();
	virtual void __fastcall PopulateNonUniqueValues();
	virtual void __fastcall PopulateValues();
	virtual void __fastcall SetFilterActiveCustomFunction(const System::UnicodeString ACustomFunctionName, const System::Variant &AValue, const System::UnicodeString ADisplayText);
	virtual void __fastcall SetFilterActiveValue(Cxfilter::TcxFilterOperatorKind AOperatorKind, const System::Variant &AValue, const System::UnicodeString ADisplayText);
	virtual void __fastcall SetFilterActiveValues(Dxcoreclasses::TdxFastObjectList* AValueInfos, Cxfilter::TcxFilterBoolOperatorKind ABoolOperator);
	virtual void __fastcall UpdateLayoutControlPosition();
	virtual void __fastcall UpdateValues();
	virtual Cxedit::TcxCustomEdit* __fastcall CreateFilterEdit();
	virtual TdxExcelFilterValueContainerCustomValuesComboBoxProvider* __fastcall CreateFilterValuesComboBoxProvider();
	virtual TdxExcelFilterValueContainerCustomValuesLayout* __fastcall CreateLayout();
	virtual Dxlayoutcontrol::TdxLayoutControl* __fastcall CreateLayoutControl();
	virtual Dxlayoutlookandfeels::TdxLayoutCxLookAndFeel* __fastcall CreateLayoutLookAndFeel();
	__property _di_IdxCustomFunctionFilterableComponent CustomFunctionComponent = {read=FCustomFunctionComponent};
	__property System::Classes::TStringList* CustomFunctions = {read=FCustomFunctions};
	__property bool HasCustomFunctions = {read=GetHasCustomFunctions, nodefault};
	__property _di_IdxExcelFilterableComponent FilterableComponent = {read=GetFilterableComponent};
	__property Cxfiltercontrolutils::TcxCustomFilterEditHelperClass FilterHelper = {read=GetFilterHelper};
	__property System::TObject* FilterItemLink = {read=FFilterItemLink};
	__property Cxedit::TcxCustomEditProperties* FilterProperties = {read=FFilterProperties};
	__property Cxdatastorage::TcxValueTypeClass FilterValueTypeClass = {read=FFilterValueTypeClass};
	__property TdxExcelFilterValueContainerLayout* Layout = {read=FLayout};
	__property Dxlayoutcontainer::TdxLayoutContainer* LayoutContainer = {read=GetLayoutContainer};
	__property Dxlayoutcontrol::TdxLayoutControl* LayoutControl = {read=FLayoutControl};
	__property Dxlayoutlookandfeels::TdxLayoutCxLookAndFeel* LayoutLookAndFeel = {read=FLayoutLookAndFeel};
	__property System::Classes::TStringList* NonUniqueDisplayValues = {read=GetNonUniqueDisplayValues};
	__property Cxfilter::TcxFilterValueList* NonUniqueValues = {read=GetNonUniqueValues};
	
public:
	__fastcall virtual TdxExcelFilterValueContainer(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxExcelFilterValueContainer();
	virtual void __fastcall ApplyFilter();
	virtual void __fastcall ResetFilter();
	__property TdxExcelFilterValueContainerApplyChangesMode ApplyChanges = {read=FApplyChanges, write=SetApplyChanges, default=0};
	__property TdxExcelFilterValueContainerDateTimeValuesPageType DateTimeValuesPageType = {read=FDateTimeValuesPageType, write=SetDateTimeValuesPageType, default=0};
	__property TdxExcelFilterValueContainerDefaultPage DefaultPage = {read=FDefaultPage, write=SetDefaultPage, default=0};
	__property TdxExcelFilterValueContainerNumericValuesPageType NumericValuesPageType = {read=FNumericValuesPageType, write=SetNumericValuesPageType, default=0};
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxExcelFilterValueContainer(HWND ParentWindow) : TdxCustomFilterValueContainer(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TdxExcelFilterValueContainerApplyChangesMode dxDefaultExcelFilterValueContainerApplyChanges;
extern DELPHI_PACKAGE TdxExcelFilterValueContainerNumericValuesPageType dxDefaultExcelFilterValueContainerNumericValuesPageType;
extern DELPHI_PACKAGE TdxExcelFilterValueContainerDateTimeValuesPageType dxDefaultExcelFilterValueContainerDateTimeValuesPageType;
extern DELPHI_PACKAGE TdxExcelFilterValueContainerDefaultPage dxDefaultExcelFilterValueContainerDefaultPage;
}	/* namespace Dxfiltervaluecontainer */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXFILTERVALUECONTAINER)
using namespace Dxfiltervaluecontainer;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxfiltervaluecontainerHPP
