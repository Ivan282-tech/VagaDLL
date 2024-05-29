// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxInplaceContainer.pas' rev: 35.00 (Windows)

#ifndef CxinplacecontainerHPP
#define CxinplacecontainerHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Variants.hpp>
#include <System.Types.hpp>
#include <dxCore.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Graphics.hpp>
#include <dxCoreClasses.hpp>
#include <cxVariants.hpp>
#include <cxClasses.hpp>
#include <cxControls.hpp>
#include <cxGraphics.hpp>
#include <cxStyles.hpp>
#include <cxContainer.hpp>
#include <cxCustomData.hpp>
#include <cxData.hpp>
#include <cxDataUtils.hpp>
#include <cxDataStorage.hpp>
#include <cxLookAndFeels.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <dxUIElementPopupWindow.hpp>
#include <cxGeometry.hpp>
#include <cxLibraryConsts.hpp>
#include <dxCustomHint.hpp>
#include <cxFindPanel.hpp>
#include <dxDateRanges.hpp>
#include <cxDateUtils.hpp>
#include <cxFilter.hpp>
#include <dxFilterPopupWindow.hpp>
#include <cxEdit.hpp>
#include <cxTextEdit.hpp>
#include <cxEditDataRegisteredRepositoryItems.hpp>
#include <cxNavigator.hpp>
#include <cxFilterControl.hpp>
#include <dxFilterValueContainer.hpp>
#include <dxFilterBox.hpp>
#include <dxScrollbarAnnotations.hpp>
#include <dxForms.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxinplacecontainer
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxControlFilterBoxMRUItems;
class DELPHICLASS TcxControlFilterBoxMRUItemsPopup;
class DELPHICLASS TcxControlFindPanel;
class DELPHICLASS TcxControlOptionsFindPanel;
class DELPHICLASS TcxControlFilterValueList;
class DELPHICLASS TcxContainerItemDefaultValuesProvider;
class DELPHICLASS TcxCustomItemDataBinding;
class DELPHICLASS TcxItemDataBinding;
class DELPHICLASS TcxControlDataController;
class DELPHICLASS TcxCustomEditContainerItemFilterPopupIncrementalFilteringOptions;
class DELPHICLASS TcxCustomEditContainerItemCustomFilterPopupOptions;
class DELPHICLASS TcxCustomEditContainerItemFilterPopupOptions;
class DELPHICLASS TcxCustomEditContainerItemExcelFilterPopupOptions;
class DELPHICLASS TcxCustomEditContainerItemOptions;
class DELPHICLASS TcxControlOptions;
class DELPHICLASS TcxControlOptionsFilterBoxTokenCriteria;
class DELPHICLASS TcxControlOptionsFilterBox;
class DELPHICLASS TcxControlOptionsFilteringItemCustomPopup;
class DELPHICLASS TcxControlOptionsFilteringItemPopup;
class DELPHICLASS TcxControlOptionsFilteringItemExcelPopup;
class DELPHICLASS TcxControlOptionsFiltering;
class DELPHICLASS TcxControlOptionsDateTimeHandling;
class DELPHICLASS TcxControlOptionsView;
class DELPHICLASS TcxControlOptionsData;
class DELPHICLASS TcxControlOptionsBehavior;
class DELPHICLASS TcxControlScrollbarAnnotationOptionsHelper;
class DELPHICLASS TcxControlScrollbarAnnotationOptions;
class DELPHICLASS TcxExtEditingControlNavigatorButtons;
class DELPHICLASS TcxControlNavigatorInfoPanel;
class DELPHICLASS TcxControlNavigator;
class DELPHICLASS TcxEditContainerStyles;
__interface DELPHIINTERFACE IcxEditorPropertiesContainer;
typedef System::DelphiInterface<IcxEditorPropertiesContainer> _di_IcxEditorPropertiesContainer;
class DELPHICLASS TcxCustomInplaceEditContainer;
__interface DELPHIINTERFACE IcxHotTrackElement;
typedef System::DelphiInterface<IcxHotTrackElement> _di_IcxHotTrackElement;
class DELPHICLASS TcxInplaceContainerHintHelper;
class DELPHICLASS TcxHotTrackController;
__interface DELPHIINTERFACE IcxDragSizing;
typedef System::DelphiInterface<IcxDragSizing> _di_IcxDragSizing;
class DELPHICLASS TcxSizingDragAndDropObject;
class DELPHICLASS TcxCustomAutoScrollingObject;
class DELPHICLASS TcxAutoScrollingEditingControlObject;
class DELPHICLASS TcxDragDropObjectAutoScrollingObject;
class DELPHICLASS TcxControllerAutoScrollingObject;
class DELPHICLASS TcxBaseDragAndDropObject;
class DELPHICLASS TcxDragImage;
class DELPHICLASS TcxPlaceArrows;
class DELPHICLASS TcxCustomControlDragAndDropObject;
class DELPHICLASS TcxDragImageHelper;
class DELPHICLASS TcxCustomHitTestController;
class DELPHICLASS TcxCustomCellNavigator;
class DELPHICLASS TcxCustomDesignSelectionHelper;
class DELPHICLASS TcxCustomControlController;
class DELPHICLASS TcxEditingController;
class DELPHICLASS TcxCustomControlViewInfo;
class DELPHICLASS TcxCustomControlCells;
class DELPHICLASS TcxExtEditingControlViewInfo;
class DELPHICLASS TcxCustomViewInfoItem;
class DELPHICLASS TcxEditCellViewInfo;
class DELPHICLASS TcxExtEditingControlNavigatorViewInfo;
class DELPHICLASS TcxCustomNavigatorSiteViewInfo;
class DELPHICLASS TcxControlItemViewInfo;
class DELPHICLASS TcxControlPanelViewInfo;
class DELPHICLASS TcxControlButtonViewInfo;
class DELPHICLASS TcxControlCloseButtonViewInfo;
class DELPHICLASS TcxControlFindPanelButtonViewInfo;
class DELPHICLASS TcxControlFindPanelFindButtonViewInfo;
class DELPHICLASS TcxControlFindPanelClearButtonViewInfo;
class DELPHICLASS TcxControlFindPanelNextButtonViewInfo;
class DELPHICLASS TcxControlFindPanelPreviousButtonViewInfo;
class DELPHICLASS TcxControlFindPanelCloseButtonViewInfo;
class DELPHICLASS TcxControlFindPanelEditViewInfo;
class DELPHICLASS TcxControlFindPanelViewInfo;
class DELPHICLASS TcxControlFilterBoxCustomizeButtonViewInfo;
class DELPHICLASS TcxControlFilterBoxCloseButtonViewInfo;
class DELPHICLASS TcxControlFilterBoxItemViewInfo;
class DELPHICLASS TcxControlFilterBoxCheckBoxViewInfo;
class DELPHICLASS TcxControlFilterBoxDropDownButtonViewInfo;
class DELPHICLASS TcxControlFilterBoxTextViewInfo;
class DELPHICLASS TcxControlFilterBoxViewInfo;
class DELPHICLASS TcxCustomControlPainter;
class DELPHICLASS TcxExtEditingControlPainter;
class DELPHICLASS TcxCustomControlStyles;
__interface DELPHIINTERFACE IcxEditingControlOptions;
typedef System::DelphiInterface<IcxEditingControlOptions> _di_IcxEditingControlOptions;
class DELPHICLASS TcxEditingControlScrollbarAnnotations;
class DELPHICLASS TcxEditingControl;
class DELPHICLASS TcxExtEditingControl;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TcxDragSizingDirection : unsigned char { dsdHorz, dsdVert };

typedef void __fastcall (__closure *TcxGetEditPropertiesEvent)(System::TObject* Sender, void * AData, Cxedit::TcxCustomEditProperties* &AEditProperties);

typedef void __fastcall (__closure *TcxOnGetContentStyleEvent)(System::TObject* Sender, void * AData, /* out */ Cxstyles::TcxStyle* &AStyle);

typedef System::TMetaClass* TcxInplaceEditContainerClass;

typedef System::TMetaClass* TcxItemDataBindingClass;

typedef System::TMetaClass* TcxCustomControlDragAndDropObjectClass;

typedef System::TMetaClass* TcxEditingControllerClass;

typedef System::TMetaClass* TcxCustomEditStyleClass;

typedef System::TMetaClass* TcxCustomControlControllerClass;

typedef System::TMetaClass* TcxHotTrackControllerClass;

enum DECLSPEC_DENUM TcxEditItemShowEditButtons : unsigned char { eisbDefault, eisbNever, eisbAlways };

enum DECLSPEC_DENUM TcxEditingControlEditShowButtons : unsigned char { ecsbAlways, ecsbFocused, ecsbNever };

typedef System::TMetaClass* TcxCustomCellViewInfoClass;

typedef System::TMetaClass* TcxEditCellViewInfoClass;

typedef System::TMetaClass* TcxCustomNavigatorSiteViewInfoClass;

typedef System::TMetaClass* TcxControlFindPanelViewInfoClass;

typedef System::TMetaClass* TcxControlFilterBoxViewInfoClass;

typedef __int64 TcxHitCode;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlFilterBoxMRUItems : public Dxfilterbox::TdxFilterBoxMRUItems
{
	typedef Dxfilterbox::TdxFilterBoxMRUItems inherited;
	
private:
	TcxControlOptionsFilterBox* FFilterBox;
	
protected:
	virtual Cxcustomdata::TcxDataFilterCriteria* __fastcall GetCurrentFilter();
	virtual void __fastcall VisibleCountChanged(int APrevVisibleCount);
	__property TcxControlOptionsFilterBox* FilterBox = {read=FFilterBox};
	
public:
	__fastcall virtual TcxControlFilterBoxMRUItems(TcxControlOptionsFilterBox* AFilterBox);
public:
	/* TdxFilterBoxMRUItems.Destroy */ inline __fastcall virtual ~TcxControlFilterBoxMRUItems() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxControlFilterBoxMRUItemsClass;

class PASCALIMPLEMENTATION TcxControlFilterBoxMRUItemsPopup : public Dxfilterbox::TdxFilterBoxMRUItemsPopup
{
	typedef Dxfilterbox::TdxFilterBoxMRUItemsPopup inherited;
	
private:
	TcxEditingControl* __fastcall GetEditingControl();
	
protected:
	virtual int __fastcall GetMRUItemCount();
	virtual Dxfilterbox::TdxFilterBoxMRUItems* __fastcall GetMRUItems();
	__property TcxEditingControl* EditingControl = {read=GetEditingControl};
public:
	/* TdxFilterBoxMRUItemsPopup.Create */ inline __fastcall virtual TcxControlFilterBoxMRUItemsPopup(Vcl::Controls::TWinControl* AOwnerControl) : Dxfilterbox::TdxFilterBoxMRUItemsPopup(AOwnerControl) { }
	
public:
	/* TcxCustomPopupWindow.Destroy */ inline __fastcall virtual ~TcxControlFilterBoxMRUItemsPopup() { }
	
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TcxControlFilterBoxMRUItemsPopup(System::Classes::TComponent* AOwner, int Dummy) : Dxfilterbox::TdxFilterBoxMRUItemsPopup(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxControlFilterBoxMRUItemsPopup(HWND ParentWindow) : Dxfilterbox::TdxFilterBoxMRUItemsPopup(ParentWindow) { }
	
};


typedef System::TMetaClass* TcxControlFilterBoxMRUItemsPopupClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlFindPanel : public Cxfindpanel::TcxCustomFindPanel
{
	typedef Cxfindpanel::TcxCustomFindPanel inherited;
	
private:
	TcxCustomControlController* FController;
	TcxEditingControl* __fastcall GetEditingControl();
	
protected:
	virtual void __fastcall GetControlContentViewParams(Cxgraphics::TcxViewParams &AParams);
	virtual Cxcustomdata::TcxDataFindCriteria* __fastcall GetCriteria();
	virtual Cxlookandfeels::TcxLookAndFeel* __fastcall GetLookAndFeel();
	virtual System::Classes::TComponent* __fastcall GetOwner();
	virtual Cxcontrols::TcxControl* __fastcall GetControl();
	virtual void __fastcall GetViewParams(Cxgraphics::TcxViewParams &AParams);
	virtual void __fastcall Invalidate(bool ARecalculate = false);
	virtual void __fastcall VisibilityChanged();
	
public:
	__fastcall virtual TcxControlFindPanel(TcxCustomControlController* AController);
	virtual void __fastcall Changed();
	__property TcxCustomControlController* Controller = {read=FController};
	__property TcxEditingControl* EditingControl = {read=GetEditingControl};
public:
	/* TcxCustomFindPanel.Destroy */ inline __fastcall virtual ~TcxControlFindPanel() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxControlFindPanelClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlOptionsFindPanel : public Dxcoreclasses::TcxOwnedPersistent
{
	typedef Dxcoreclasses::TcxOwnedPersistent inherited;
	
private:
	int __fastcall GetApplyInputDelay();
	Cxcustomdata::TcxDataFindCriteriaBehavior __fastcall GetBehavior();
	bool __fastcall GetClearFindFilterTextOnClose();
	Cxfindpanel::TcxFindPanelDisplayMode __fastcall GetDisplayMode();
	TcxEditingControl* __fastcall GetEditingControl();
	bool __fastcall GetFocusContentOnApplyFilter();
	bool __fastcall GetHighlightSearchResults();
	System::UnicodeString __fastcall GetInfoText();
	Cxfindpanel::TcxFindPanelLayout __fastcall GetLayout();
	System::Classes::TStrings* __fastcall GetMRUItems();
	int __fastcall GetMRUItemsListCount();
	int __fastcall GetMRUItemsListDropDownCount();
	Cxfindpanel::TcxFindPanelOptions* __fastcall GetOptions();
	Cxfindpanel::TcxFindPanelPosition __fastcall GetPosition();
	bool __fastcall GetShowClearButton();
	bool __fastcall GetShowCloseButton();
	bool __fastcall GetShowFindButton();
	bool __fastcall GetShowNextButton();
	bool __fastcall GetShowPreviousButton();
	bool __fastcall GetUseDelayedFind();
	bool __fastcall GetUseExtendedSyntax();
	bool __fastcall IsInfoTextStored();
	void __fastcall SetApplyInputDelay(int AValue);
	void __fastcall SetBehavior(Cxcustomdata::TcxDataFindCriteriaBehavior AValue);
	void __fastcall SetClearFindFilterTextOnClose(bool AValue);
	void __fastcall SetDisplayMode(Cxfindpanel::TcxFindPanelDisplayMode AValue);
	void __fastcall SetFocusContentOnApplyFilter(bool AValue);
	void __fastcall SetHighlightSearchResults(bool AValue);
	void __fastcall SetInfoText(System::UnicodeString AValue);
	void __fastcall SetLayout(Cxfindpanel::TcxFindPanelLayout AValue);
	void __fastcall SetMRUItems(System::Classes::TStrings* AValue);
	void __fastcall SetMRUItemsListCount(int AValue);
	void __fastcall SetMRUItemsListDropDownCount(int AValue);
	void __fastcall SetOptions(Cxfindpanel::TcxFindPanelOptions* AValue);
	void __fastcall SetPosition(Cxfindpanel::TcxFindPanelPosition AValue);
	void __fastcall SetShowClearButton(bool AValue);
	void __fastcall SetShowCloseButton(bool AValue);
	void __fastcall SetShowFindButton(bool AValue);
	void __fastcall SetShowNextButton(bool AValue);
	void __fastcall SetShowPreviousButton(bool AValue);
	void __fastcall SetUseExtendedSyntax(bool AValue);
	void __fastcall SetUseDelayedFind(bool AValue);
	
protected:
	__property Cxfindpanel::TcxFindPanelOptions* Options = {read=GetOptions, write=SetOptions};
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property TcxEditingControl* EditingControl = {read=GetEditingControl};
	__property System::Classes::TStrings* MRUItems = {read=GetMRUItems, write=SetMRUItems};
	
__published:
	__property int ApplyInputDelay = {read=GetApplyInputDelay, write=SetApplyInputDelay, default=1000};
	__property Cxcustomdata::TcxDataFindCriteriaBehavior Behavior = {read=GetBehavior, write=SetBehavior, default=0};
	__property bool ClearFindFilterTextOnClose = {read=GetClearFindFilterTextOnClose, write=SetClearFindFilterTextOnClose, default=1};
	__property Cxfindpanel::TcxFindPanelDisplayMode DisplayMode = {read=GetDisplayMode, write=SetDisplayMode, default=0};
	__property bool FocusContentOnApplyFilter = {read=GetFocusContentOnApplyFilter, write=SetFocusContentOnApplyFilter, default=0};
	__property bool HighlightSearchResults = {read=GetHighlightSearchResults, write=SetHighlightSearchResults, default=1};
	__property System::UnicodeString InfoText = {read=GetInfoText, write=SetInfoText, stored=IsInfoTextStored};
	__property Cxfindpanel::TcxFindPanelLayout Layout = {read=GetLayout, write=SetLayout, default=0};
	__property int MRUItemsListCount = {read=GetMRUItemsListCount, write=SetMRUItemsListCount, default=0};
	__property int MRUItemsListDropDownCount = {read=GetMRUItemsListDropDownCount, write=SetMRUItemsListDropDownCount, default=8};
	__property Cxfindpanel::TcxFindPanelPosition Position = {read=GetPosition, write=SetPosition, default=0};
	__property bool ShowClearButton = {read=GetShowClearButton, write=SetShowClearButton, default=1};
	__property bool ShowCloseButton = {read=GetShowCloseButton, write=SetShowCloseButton, default=1};
	__property bool ShowFindButton = {read=GetShowFindButton, write=SetShowFindButton, default=1};
	__property bool ShowNextButton = {read=GetShowNextButton, write=SetShowNextButton, default=1};
	__property bool ShowPreviousButton = {read=GetShowPreviousButton, write=SetShowPreviousButton, default=1};
	__property bool UseDelayedFind = {read=GetUseDelayedFind, write=SetUseDelayedFind, default=1};
	__property bool UseExtendedSyntax = {read=GetUseExtendedSyntax, write=SetUseExtendedSyntax, default=0};
public:
	/* TcxOwnedPersistent.Create */ inline __fastcall virtual TcxControlOptionsFindPanel(System::Classes::TPersistent* AOwner) : Dxcoreclasses::TcxOwnedPersistent(AOwner) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxControlOptionsFindPanel() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxControlOptionsFindPanelClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlFilterValueList : public Cxcustomdata::TcxDataFilterValueList
{
	typedef Cxcustomdata::TcxDataFilterValueList inherited;
	
protected:
	virtual void __fastcall AddDateTimeAbsoluteFilters(Dxdateranges::TdxCustomDateRange* ADateRange, bool AIgnoreTime)/* overload */;
	virtual void __fastcall AddDateTimeAbsoluteFilters(TcxCustomInplaceEditContainer* AItem)/* overload */;
	virtual void __fastcall AddDateTimeRelativeFilters(TcxCustomInplaceEditContainer* AItem);
	virtual void __fastcall AddDateTimeRelativeFilter(Dxdateranges::TdxDateTimeFilter AFilter)/* overload */;
	virtual void __fastcall AddDateTimeRelativeFilter(Cxfilter::TcxFilterOperatorKind AKind)/* overload */;
	virtual System::UnicodeString __fastcall GetDateTimeRelativeFilterDisplayText(Cxfilter::TcxFilterOperatorKind AKind);
	virtual bool __fastcall IsSpecialOperatorKindSupported(Cxfilter::TcxFilterOperatorKind AKind);
	HIDESBASE void __fastcall Load(TcxCustomInplaceEditContainer* AItem, bool AInitSortByDisplayText, bool AUseFilteredValues, bool AAddValueItems, bool AUniqueOnly, bool AFilteredValuesShowFilteredItemsOnly)/* overload */;
	
public:
	void __fastcall ApplyFilter(TcxCustomInplaceEditContainer* AItem, int AIndex, Cxfilter::TcxFilterCriteriaItemList* AFilterList, bool AReplaceExistent, bool AAddToMRUItemsList);
	virtual int __fastcall GetIndexByCriteriaItem(Cxfilter::TcxFilterCriteriaItem* ACriteriaItem);
	HIDESBASE virtual void __fastcall Load(TcxCustomInplaceEditContainer* AItem, bool AInitSortByDisplayText = true, bool AUseFilteredValues = false, bool AAddValueItems = true)/* overload */;
public:
	/* TcxFilterValueList.Create */ inline __fastcall virtual TcxControlFilterValueList(Cxfilter::TcxFilterCriteria* ACriteria) : Cxcustomdata::TcxDataFilterValueList(ACriteria) { }
	/* TcxFilterValueList.Destroy */ inline __fastcall virtual ~TcxControlFilterValueList() { }
	
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  Load(int AItemIndex, bool AInitSortByDisplayText, bool AUseFilteredValues, bool AAddValueItems, bool AUniqueOnly, bool AFilteredValuesShowFilteredItemsOnly){ Cxcustomdata::TcxDataFilterValueList::Load(AItemIndex, AInitSortByDisplayText, AUseFilteredValues, AAddValueItems, AUniqueOnly, AFilteredValuesShowFilteredItemsOnly); }
	
public:
	inline void __fastcall  Load(int AItemIndex, bool AInitSortByDisplayText = true, bool AUseFilteredValues = false, bool AAddValueItems = true){ Cxcustomdata::TcxDataFilterValueList::Load(AItemIndex, AInitSortByDisplayText, AUseFilteredValues, AAddValueItems); }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxControlFilterValueListClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxContainerItemDefaultValuesProvider : public Cxedit::TcxCustomEditDefaultValuesProvider
{
	typedef Cxedit::TcxCustomEditDefaultValuesProvider inherited;
	
__published:
	virtual bool __fastcall IsDisplayFormatDefined(bool AIsCurrencyValueAccepted);
public:
	/* TcxCustomEditDefaultValuesProvider.Destroy */ inline __fastcall virtual ~TcxContainerItemDefaultValuesProvider() { }
	
public:
	/* TcxInterfacedPersistent.Create */ inline __fastcall virtual TcxContainerItemDefaultValuesProvider(System::Classes::TPersistent* AOwner) : Cxedit::TcxCustomEditDefaultValuesProvider(AOwner) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomItemDataBinding : public Dxcoreclasses::TcxOwnedPersistent
{
	typedef Dxcoreclasses::TcxOwnedPersistent inherited;
	
private:
	static const System::WideChar InvariantExpressionFlag = (System::WideChar)(0x1);
	
	Cxedit::TcxCustomEditDefaultValuesProvider* FDefaultValuesProvider;
	void *FData;
	Cxfilter::TcxFilterMRUValueItems* FFilterMRUValueItems;
	Cxdatastorage::TcxValueTypeClass FValueTypeClass;
	Cxcustomdata::TcxCustomDataController* __fastcall GetDataController();
	TcxCustomInplaceEditContainer* __fastcall GetEditContainer();
	System::UnicodeString __fastcall GetExpression();
	Cxcustomdata::TcxDataFilterCriteria* __fastcall GetFilter();
	Cxfilter::TcxFilterCriteriaItem* __fastcall GetFilterCriteriaItem();
	bool __fastcall GetFiltered();
	System::UnicodeString __fastcall GetStoredExpression();
	System::UnicodeString __fastcall GetValueType();
	void __fastcall SetExpression(const System::UnicodeString AValue);
	void __fastcall SetFiltered(bool Value);
	void __fastcall SetStoredExpression(const System::UnicodeString AValue);
	void __fastcall SetValueType(const System::UnicodeString Value);
	
protected:
	virtual Cxedit::TcxEditRepositoryItem* __fastcall DefaultRepositoryItem();
	virtual void __fastcall EditingControlChanged();
	virtual System::UnicodeString __fastcall GetDefaultCaption();
	virtual Cxedit::TcxCustomEditDefaultValuesProvider* __fastcall GetDefaultValuesProvider(Cxedit::TcxCustomEditProperties* AProperties);
	virtual Cxedit::TcxCustomEditDefaultValuesProviderClass __fastcall GetDefaultValuesProviderClass();
	virtual Cxdatastorage::TcxValueTypeClass __fastcall GetDefaultValueTypeClass();
	virtual System::UnicodeString __fastcall GetFilterFieldName();
	virtual Cxfilter::TcxFilterMRUValueItemsClass __fastcall GetFilterMRUValueItemsClass();
	virtual Cxdatastorage::TcxValueTypeClass __fastcall GetValueTypeClass();
	virtual void __fastcall Init();
	bool __fastcall IsDisplayFormatDefined(bool AIsCurrencyValueAccepted);
	virtual bool __fastcall IsValueTypeChangeable();
	virtual bool __fastcall IsValueTypeStored();
	virtual void __fastcall ResetValueTypeClass();
	virtual void __fastcall SetValueTypeClass(Cxdatastorage::TcxValueTypeClass Value);
	virtual void __fastcall ValueTypeClassChanged();
	virtual Cxfilter::TcxFilterCriteriaItem* __fastcall AddToFilter(Cxfilter::TcxFilterCriteriaItemList* AParent, Cxfilter::TcxFilterOperatorKind AOperatorKind, const System::Variant &AValue, const System::UnicodeString ADisplayText = System::UnicodeString(), bool AReplaceExistent = true);
	void __fastcall GetFilterStrings(System::Classes::TStrings* AStrings, TcxControlFilterValueList* AValueList, bool AValuesOnly, bool AUniqueOnly);
	void __fastcall GetFilterValues(TcxControlFilterValueList* AValueList, bool AValuesOnly, bool AInitSortByDisplayText, bool ACanUseFilteredValues, bool AUniqueOnly);
	void __fastcall GetFilterActiveValueIndexes(TcxControlFilterValueList* AValueList, Cxclasses::TdxIntegerIndexes &AIndexes);
	void __fastcall SetFilterActiveValue(Cxfilter::TcxFilterOperatorKind AOperatorKind, const System::Variant &AValue, const System::UnicodeString ADisplayText);
	void __fastcall SetFilterActiveValueIndex(TcxControlFilterValueList* AValueList, int AIndex, Cxfilter::TcxFilterCriteriaItemList* AFilterList, bool AReplaceExistent, bool AAddToMRUItemsList);
	void __fastcall SetFilterActiveValueIndexes(TcxControlFilterValueList* AValueList, const Cxclasses::TdxIntegerIndexes AIndexes, bool AAddToMRUItemsList = false);
	void __fastcall SetFilterActiveValues(Dxcoreclasses::TdxFastObjectList* AValueInfos, Cxfilter::TcxFilterBoolOperatorKind ABoolOperator);
	__property Cxcustomdata::TcxCustomDataController* DataController = {read=GetDataController};
	__property Cxedit::TcxCustomEditDefaultValuesProvider* DefaultValuesProvider = {read=FDefaultValuesProvider};
	__property TcxCustomInplaceEditContainer* EditContainer = {read=GetEditContainer};
	__property Cxcustomdata::TcxDataFilterCriteria* Filter = {read=GetFilter};
	__property Cxfilter::TcxFilterCriteriaItem* FilterCriteriaItem = {read=GetFilterCriteriaItem};
	__property bool Filtered = {read=GetFiltered, write=SetFiltered, nodefault};
	__property Cxfilter::TcxFilterMRUValueItems* FilterMRUValueItems = {read=FFilterMRUValueItems};
	
public:
	__fastcall virtual TcxCustomItemDataBinding(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TcxCustomItemDataBinding();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property void * Data = {read=FData, write=FData};
	__property System::UnicodeString FilterFieldName = {read=GetFilterFieldName};
	__property System::UnicodeString StoredExpression = {read=GetStoredExpression, write=SetStoredExpression};
	__property Cxdatastorage::TcxValueTypeClass ValueTypeClass = {read=GetValueTypeClass, write=SetValueTypeClass};
	
__published:
	__property System::UnicodeString Expression = {read=GetExpression, write=SetExpression};
	__property System::UnicodeString ValueType = {read=GetValueType, write=SetValueType, stored=IsValueTypeStored};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxItemDataBinding : public TcxCustomItemDataBinding
{
	typedef TcxCustomItemDataBinding inherited;
	
public:
	/* TcxCustomItemDataBinding.Create */ inline __fastcall virtual TcxItemDataBinding(System::Classes::TPersistent* AOwner) : TcxCustomItemDataBinding(AOwner) { }
	/* TcxCustomItemDataBinding.Destroy */ inline __fastcall virtual ~TcxItemDataBinding() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxControlDataController : public Cxdata::TcxDataController
{
	typedef Cxdata::TcxDataController inherited;
	
private:
	TcxEditingControl* __fastcall GetControl();
	
protected:
	virtual Cxcustomdata::TcxDataCustomExpressionProvider* __fastcall CreateExpressionProvider();
	virtual void __fastcall FilterChanged();
	virtual void __fastcall UpdateControl(Cxcustomdata::TcxUpdateControlInfo* AInfo);
	
public:
	virtual System::UnicodeString __fastcall GetFilterItemFieldCaption(System::TObject* AItem);
	virtual System::TObject* __fastcall GetItem(int Index);
	virtual int __fastcall GetItemID(System::TObject* AItem);
	virtual Cxdatautils::TcxDataEditValueSource __fastcall GetItemValueSource(int AItemIndex);
	virtual void __fastcall UpdateData();
	virtual void __fastcall UpdateItemIndexes();
public:
	/* TcxDataController.Create */ inline __fastcall virtual TcxControlDataController(System::Classes::TComponent* AOwner) : Cxdata::TcxDataController(AOwner) { }
	/* TcxDataController.Destroy */ inline __fastcall virtual ~TcxControlDataController() { }
	
};


typedef System::TMetaClass* TcxCustomEditContainerItemFilterPopupIncrementalFilteringOptionsClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomEditContainerItemFilterPopupIncrementalFilteringOptions : public Dxcoreclasses::TcxInterfacedPersistent
{
	typedef Dxcoreclasses::TcxInterfacedPersistent inherited;
	
private:
	bool FEnabled;
	Cxtextedit::TcxTextEditIncrementalFilteringOptions FOptions;
	TcxCustomInplaceEditContainer* __fastcall GetEditContainer();
	void __fastcall SetEnabled(bool AValue);
	void __fastcall SetOptions(Cxtextedit::TcxTextEditIncrementalFilteringOptions AValue);
	
protected:
	virtual void __fastcall Changed();
	__property TcxCustomInplaceEditContainer* EditContainer = {read=GetEditContainer};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=0};
	__property Cxtextedit::TcxTextEditIncrementalFilteringOptions Options = {read=FOptions, write=SetOptions, default=3};
	
public:
	__fastcall virtual TcxCustomEditContainerItemFilterPopupIncrementalFilteringOptions(System::Classes::TPersistent* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxCustomEditContainerItemFilterPopupIncrementalFilteringOptions() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomEditContainerItemCustomFilterPopupOptions : public Dxcoreclasses::TcxInterfacedPersistent
{
	typedef Dxcoreclasses::TcxInterfacedPersistent inherited;
	
private:
	bool FFilteredItemsList;
	bool FFilteredItemsListShowFilteredItemsOnly;
	TcxCustomInplaceEditContainer* __fastcall GetEditContainer();
	void __fastcall SetFilteredItemsList(bool Value);
	void __fastcall SetFilteredItemsListShowFilteredItemsOnly(bool Value);
	
protected:
	virtual void __fastcall Changed();
	__property TcxCustomInplaceEditContainer* EditContainer = {read=GetEditContainer};
	__property bool FilteredItemsList = {read=FFilteredItemsList, write=SetFilteredItemsList, default=1};
	__property bool FilteredItemsListShowFilteredItemsOnly = {read=FFilteredItemsListShowFilteredItemsOnly, write=SetFilteredItemsListShowFilteredItemsOnly, default=1};
	
public:
	__fastcall virtual TcxCustomEditContainerItemCustomFilterPopupOptions(System::Classes::TPersistent* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxCustomEditContainerItemCustomFilterPopupOptions() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomEditContainerItemFilterPopupOptionsClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomEditContainerItemFilterPopupOptions : public TcxCustomEditContainerItemCustomFilterPopupOptions
{
	typedef TcxCustomEditContainerItemCustomFilterPopupOptions inherited;
	
private:
	bool FAddValueItems;
	bool FEnabled;
	TcxCustomEditContainerItemFilterPopupIncrementalFilteringOptions* FIncrementalFiltering;
	bool FMRUItemsList;
	bool FMultiSelect;
	void __fastcall SetAddValueItems(bool Value);
	void __fastcall SetEnabled(bool Value);
	void __fastcall SetIncrementalFiltering(TcxCustomEditContainerItemFilterPopupIncrementalFilteringOptions* AValue);
	void __fastcall SetMRUItemsList(bool Value);
	void __fastcall SetMultiSelect(bool Value);
	
protected:
	virtual TcxCustomEditContainerItemFilterPopupIncrementalFilteringOptionsClass __fastcall GetIncrementalFilteringOptionsClass();
	__property bool AddValueItems = {read=FAddValueItems, write=SetAddValueItems, default=1};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=1};
	__property TcxCustomEditContainerItemFilterPopupIncrementalFilteringOptions* IncrementalFiltering = {read=FIncrementalFiltering, write=SetIncrementalFiltering};
	__property bool MRUItemsList = {read=FMRUItemsList, write=SetMRUItemsList, default=1};
	__property bool MultiSelect = {read=FMultiSelect, write=SetMultiSelect, default=1};
	
public:
	__fastcall virtual TcxCustomEditContainerItemFilterPopupOptions(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TcxCustomEditContainerItemFilterPopupOptions();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomEditContainerItemExcelFilterPopupOptionsClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomEditContainerItemExcelFilterPopupOptions : public TcxCustomEditContainerItemCustomFilterPopupOptions
{
	typedef TcxCustomEditContainerItemCustomFilterPopupOptions inherited;
	
private:
	Dxfiltervaluecontainer::TdxExcelFilterValueContainerApplyChangesMode FApplyChanges;
	Dxfiltervaluecontainer::TdxExcelFilterValueContainerDateTimeValuesPageType FDateTimeValuesPageType;
	Dxfiltervaluecontainer::TdxExcelFilterValueContainerDefaultPage FDefaultPage;
	Dxfiltervaluecontainer::TdxExcelFilterValueContainerNumericValuesPageType FNumericValuesPageType;
	void __fastcall SetApplyChanges(Dxfiltervaluecontainer::TdxExcelFilterValueContainerApplyChangesMode AValue);
	void __fastcall SetDateTimeValuesPageType(const Dxfiltervaluecontainer::TdxExcelFilterValueContainerDateTimeValuesPageType AValue);
	void __fastcall SetDefaultPage(const Dxfiltervaluecontainer::TdxExcelFilterValueContainerDefaultPage AValue);
	void __fastcall SetNumericValuesPageType(const Dxfiltervaluecontainer::TdxExcelFilterValueContainerNumericValuesPageType AValue);
	
protected:
	__property Dxfiltervaluecontainer::TdxExcelFilterValueContainerApplyChangesMode ApplyChanges = {read=FApplyChanges, write=SetApplyChanges, default=0};
	__property Dxfiltervaluecontainer::TdxExcelFilterValueContainerDateTimeValuesPageType DateTimeValuesPageType = {read=FDateTimeValuesPageType, write=SetDateTimeValuesPageType, default=0};
	__property Dxfiltervaluecontainer::TdxExcelFilterValueContainerDefaultPage DefaultPage = {read=FDefaultPage, write=SetDefaultPage, default=0};
	__property Dxfiltervaluecontainer::TdxExcelFilterValueContainerNumericValuesPageType NumericValuesPageType = {read=FNumericValuesPageType, write=SetNumericValuesPageType, default=0};
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* ASource);
public:
	/* TcxCustomEditContainerItemCustomFilterPopupOptions.Create */ inline __fastcall virtual TcxCustomEditContainerItemExcelFilterPopupOptions(System::Classes::TPersistent* AOwner) : TcxCustomEditContainerItemCustomFilterPopupOptions(AOwner) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxCustomEditContainerItemExcelFilterPopupOptions() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomEditContainerItemOptionsClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomEditContainerItemOptions : public Dxcoreclasses::TcxInterfacedPersistent
{
	typedef Dxcoreclasses::TcxInterfacedPersistent inherited;
	
private:
	bool FCustomizing;
	bool FEditing;
	TcxCustomEditContainerItemExcelFilterPopupOptions* FExcelFilterPopup;
	bool FFiltering;
	bool FFilteringWithFindPanel;
	TcxCustomEditContainerItemFilterPopupOptions* FFilterPopup;
	Dxfilterpopupwindow::TdxFilterPopupWindowMode FFilterPopupMode;
	bool FFocusing;
	bool FIgnoreTimeForFiltering;
	bool FIncSearch;
	bool FMoving;
	TcxEditItemShowEditButtons FShowEditButtons;
	bool FSorting;
	bool FTabStop;
	TcxCustomInplaceEditContainer* __fastcall GetEditContainer();
	void __fastcall SetEditing(bool Value);
	void __fastcall SetExcelFilterPopup(TcxCustomEditContainerItemExcelFilterPopupOptions* AValue);
	void __fastcall SetFiltering(bool Value);
	void __fastcall SetFilteringWithFindPanel(bool AValue);
	void __fastcall SetFilterPopup(TcxCustomEditContainerItemFilterPopupOptions* AValue);
	void __fastcall SetFilterPopupMode(Dxfilterpopupwindow::TdxFilterPopupWindowMode AValue);
	void __fastcall SetFocusing(bool Value);
	void __fastcall SetIgnoreTimeForFiltering(bool Value);
	void __fastcall SetIncSearch(bool Value);
	void __fastcall SetShowEditButtons(TcxEditItemShowEditButtons Value);
	
protected:
	virtual Dxfiltervaluecontainer::TdxFilterApplyChangesMode __fastcall GetFilterPopupWindowApplyMode();
	virtual System::UnicodeString __fastcall GetFilterPopupWindowButtonCaption();
	virtual bool __fastcall GetFilterPopupWindowIncrementalFiltering();
	virtual Cxtextedit::TcxTextEditIncrementalFilteringOptions __fastcall GetFilterPopupWindowIncrementalFilteringOptions();
	virtual int __fastcall GetFilterPopupWindowVisibleItemCount();
	virtual bool __fastcall GetFilterPopupWindowShowCheckBoxes();
	virtual int __fastcall GetFilterPopupWindowWidth();
	Dxfiltervaluecontainer::TdxExcelFilterValueContainerApplyChangesMode __fastcall GetExcelFilterPopupApplyChanges();
	Dxfiltervaluecontainer::TdxExcelFilterValueContainerDateTimeValuesPageType __fastcall GetExcelFilterPopupDateTimeValuesPageType();
	Dxfiltervaluecontainer::TdxExcelFilterValueContainerDefaultPage __fastcall GetExcelFilterPopupDefaultPage();
	Dxfiltervaluecontainer::TdxExcelFilterValueContainerNumericValuesPageType __fastcall GetExcelFilterPopupNumericValuesPageType();
	virtual void __fastcall Changed();
	virtual TcxCustomEditContainerItemExcelFilterPopupOptionsClass __fastcall GetExcelFilterPopupOptionsClass();
	virtual TcxCustomEditContainerItemFilterPopupOptionsClass __fastcall GetFilterPopupOptionsClass();
	__property TcxCustomInplaceEditContainer* EditContainer = {read=GetEditContainer};
	__property bool Moving = {read=FMoving, write=FMoving, default=1};
	__property bool Customizing = {read=FCustomizing, write=FCustomizing, default=1};
	__property bool Sorting = {read=FSorting, write=FSorting, default=1};
	__property bool Editing = {read=FEditing, write=SetEditing, default=1};
	__property TcxCustomEditContainerItemExcelFilterPopupOptions* ExcelFilterPopup = {read=FExcelFilterPopup, write=SetExcelFilterPopup};
	__property bool Filtering = {read=FFiltering, write=SetFiltering, default=1};
	__property bool FilteringWithFindPanel = {read=FFilteringWithFindPanel, write=SetFilteringWithFindPanel, default=1};
	__property TcxCustomEditContainerItemFilterPopupOptions* FilterPopup = {read=FFilterPopup, write=SetFilterPopup};
	__property Dxfilterpopupwindow::TdxFilterPopupWindowMode FilterPopupMode = {read=FFilterPopupMode, write=SetFilterPopupMode, default=0};
	__property bool Focusing = {read=FFocusing, write=SetFocusing, default=1};
	__property bool IgnoreTimeForFiltering = {read=FIgnoreTimeForFiltering, write=SetIgnoreTimeForFiltering, default=1};
	__property bool IncSearch = {read=FIncSearch, write=SetIncSearch, default=1};
	__property TcxEditItemShowEditButtons ShowEditButtons = {read=FShowEditButtons, write=SetShowEditButtons, default=0};
	__property bool TabStop = {read=FTabStop, write=FTabStop, default=1};
	
public:
	__fastcall virtual TcxCustomEditContainerItemOptions(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TcxCustomEditContainerItemOptions();
	virtual void __fastcall Assign(System::Classes::TPersistent* AOwner);
private:
	void *__IdxExcelFilterPopupWindowOptions;	// Dxfilterpopupwindow::IdxExcelFilterPopupWindowOptions 
	void *__IdxFilterPopupWindowOptions;	// Dxfilterpopupwindow::IdxFilterPopupWindowOptions 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {BC38A38C-8202-46C6-B5B3-3952577DE96B}
	operator Dxfilterpopupwindow::_di_IdxExcelFilterPopupWindowOptions()
	{
		Dxfilterpopupwindow::_di_IdxExcelFilterPopupWindowOptions intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxfilterpopupwindow::IdxExcelFilterPopupWindowOptions*(void) { return (Dxfilterpopupwindow::IdxExcelFilterPopupWindowOptions*)&__IdxExcelFilterPopupWindowOptions; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {EF3A7F20-7A85-4AEB-9FE6-91D3A60CDBC7}
	operator Dxfilterpopupwindow::_di_IdxFilterPopupWindowOptions()
	{
		Dxfilterpopupwindow::_di_IdxFilterPopupWindowOptions intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxfilterpopupwindow::IdxFilterPopupWindowOptions*(void) { return (Dxfilterpopupwindow::IdxFilterPopupWindowOptions*)&__IdxFilterPopupWindowOptions; }
	#endif
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxControlOptionsClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlOptions : public Dxcoreclasses::TcxOwnedInterfacedPersistent
{
	typedef Dxcoreclasses::TcxOwnedInterfacedPersistent inherited;
	
private:
	TcxEditingControl* __fastcall GetEditingControl();
	
protected:
	virtual void __fastcall Changed();
	virtual void __fastcall ChangeScale(int M, int D);
	__property TcxEditingControl* EditingControl = {read=GetEditingControl};
public:
	/* TcxOwnedPersistent.Create */ inline __fastcall virtual TcxControlOptions(System::Classes::TPersistent* AOwner) : Dxcoreclasses::TcxOwnedInterfacedPersistent(AOwner) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxControlOptions() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlOptionsFilterBoxTokenCriteria : public TcxControlOptions
{
	typedef TcxControlOptions inherited;
	
private:
	bool FItemRemoval;
	bool __fastcall GetItemRemoval();
	void __fastcall SetItemRemoval(bool AValue);
	
public:
	__fastcall virtual TcxControlOptionsFilterBoxTokenCriteria(System::Classes::TPersistent* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property bool ItemRemoval = {read=GetItemRemoval, write=SetItemRemoval, default=1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxControlOptionsFilterBoxTokenCriteria() { }
	
private:
	void *__IdxFilterBoxTokenCriteriaOptions;	// Dxfilterbox::IdxFilterBoxTokenCriteriaOptions 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B9930D9B-B4B4-4713-BAFC-487E59D71E61}
	operator Dxfilterbox::_di_IdxFilterBoxTokenCriteriaOptions()
	{
		Dxfilterbox::_di_IdxFilterBoxTokenCriteriaOptions intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxfilterbox::IdxFilterBoxTokenCriteriaOptions*(void) { return (Dxfilterbox::IdxFilterBoxTokenCriteriaOptions*)&__IdxFilterBoxTokenCriteriaOptions; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlOptionsFilterBox : public TcxControlOptions
{
	typedef TcxControlOptions inherited;
	
private:
	Cxfilter::TcxFilterCriteriaDisplayStyle FCriteriaDisplayStyle;
	Dxfilterbox::TcxFilterBoxButtonAlignment FCustomizeButtonAlignment;
	bool FCustomizeDialog;
	TcxControlFilterBoxMRUItems* FMRUItems;
	bool FMRUItemsList;
	int FMRUItemsListDropDownCount;
	Dxfilterbox::TcxFilterBoxPosition FPosition;
	Dxfilterbox::TcxFilterBoxVisible FVisible;
	TcxControlOptionsFilterBoxTokenCriteria* FTokenCriteria;
	Cxcustomdata::TcxDataFilterCriteria* __fastcall GetFilter();
	void __fastcall SetButtonPosition(const Dxfilterbox::TcxFilterBoxButtonAlignment Value);
	void __fastcall SetCriteriaDisplayStyle(Cxfilter::TcxFilterCriteriaDisplayStyle Value);
	void __fastcall SetCustomizeDialog(bool Value);
	void __fastcall SetMRUItemsList(bool Value);
	void __fastcall SetMRUItemsListDropDownCount(int Value);
	void __fastcall SetPosition(Dxfilterbox::TcxFilterBoxPosition Value);
	void __fastcall SetVisible(Dxfilterbox::TcxFilterBoxVisible Value);
	void __fastcall SetTokenCriteria(TcxControlOptionsFilterBoxTokenCriteria* Value);
	
protected:
	virtual void __fastcall AddFilterToMRUItems();
	virtual TcxControlOptionsFilterBoxTokenCriteria* __fastcall CreateTokenCriteria();
	virtual System::UnicodeString __fastcall GetCustomizeButtonCaption();
	virtual System::UnicodeString __fastcall GetDefaultText();
	virtual TcxControlFilterBoxMRUItemsClass __fastcall GetMRUItemsClass();
	virtual bool __fastcall IsMRUItemsListAvailable();
	virtual void __fastcall MRUItemsVisibleCountChanged(int AOldCount, int ANewCount);
	virtual void __fastcall RunCustomizeDialog();
	bool __fastcall UseTokens();
	__property System::UnicodeString CustomizeButtonCaption = {read=GetCustomizeButtonCaption};
	__property Cxcustomdata::TcxDataFilterCriteria* Filter = {read=GetFilter};
	__property TcxControlFilterBoxMRUItems* MRUItems = {read=FMRUItems};
	
public:
	__fastcall virtual TcxControlOptionsFilterBox(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TcxControlOptionsFilterBox();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property Cxfilter::TcxFilterCriteriaDisplayStyle CriteriaDisplayStyle = {read=FCriteriaDisplayStyle, write=SetCriteriaDisplayStyle, default=0};
	__property Dxfilterbox::TcxFilterBoxButtonAlignment CustomizeButtonAlignment = {read=FCustomizeButtonAlignment, write=SetButtonPosition, default=1};
	__property bool CustomizeDialog = {read=FCustomizeDialog, write=SetCustomizeDialog, default=1};
	__property bool MRUItemsList = {read=FMRUItemsList, write=SetMRUItemsList, default=1};
	__property int MRUItemsListDropDownCount = {read=FMRUItemsListDropDownCount, write=SetMRUItemsListDropDownCount, default=0};
	__property Dxfilterbox::TcxFilterBoxPosition Position = {read=FPosition, write=SetPosition, default=1};
	__property Dxfilterbox::TcxFilterBoxVisible Visible = {read=FVisible, write=SetVisible, default=0};
	__property TcxControlOptionsFilterBoxTokenCriteria* TokenCriteria = {read=FTokenCriteria, write=SetTokenCriteria};
};

#pragma pack(pop)

typedef System::TMetaClass* TcxControlOptionsFilterBoxClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlOptionsFilteringItemCustomPopup : public TcxControlOptions
{
	typedef TcxControlOptions inherited;
	
private:
	bool FFilteredItemsList;
	bool FFilteredItemsListShowFilteredItemsOnly;
	void __fastcall SetFilteredItemsList(bool AValue);
	void __fastcall SetFilteredItemsListShowFilteredItemsOnly(bool AValue);
	
protected:
	__property bool FilteredItemsList = {read=FFilteredItemsList, write=SetFilteredItemsList, default=0};
	__property bool FilteredItemsListShowFilteredItemsOnly = {read=FFilteredItemsListShowFilteredItemsOnly, write=SetFilteredItemsListShowFilteredItemsOnly, default=1};
	
public:
	__fastcall virtual TcxControlOptionsFilteringItemCustomPopup(System::Classes::TPersistent* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* ASource);
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxControlOptionsFilteringItemCustomPopup() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxControlOptionsFilteringItemPopupClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlOptionsFilteringItemPopup : public TcxControlOptionsFilteringItemCustomPopup
{
	typedef TcxControlOptionsFilteringItemCustomPopup inherited;
	
private:
	bool FAddValueItems;
	Dxfiltervaluecontainer::TdxFilterApplyChangesMode FApplyMultiSelectChanges;
	int FDropDownWidth;
	int FMaxDropDownItemCount;
	bool FMRUItemsList;
	int FMRUItemsListCount;
	bool FMultiSelect;
	void __fastcall SetAddValueItems(bool Value);
	void __fastcall SetApplyMultiSelectChanges(Dxfiltervaluecontainer::TdxFilterApplyChangesMode AValue);
	void __fastcall SetDropDownWidth(int AValue);
	void __fastcall SetMaxDropDownItemCount(int AValue);
	void __fastcall SetMRUItemsList(bool Value);
	void __fastcall SetMRUItemsListCount(int Value);
	void __fastcall SetMultiSelect(bool AValue);
	
protected:
	virtual System::UnicodeString __fastcall ApplyButtonCaption();
	virtual void __fastcall ChangeScale(int M, int D);
	virtual void __fastcall MRUItemsListCountChanged();
	__property bool AddValueItems = {read=FAddValueItems, write=SetAddValueItems, default=1};
	__property Dxfiltervaluecontainer::TdxFilterApplyChangesMode ApplyMultiSelectChanges = {read=FApplyMultiSelectChanges, write=SetApplyMultiSelectChanges, default=0};
	__property int DropDownWidth = {read=FDropDownWidth, write=SetDropDownWidth, default=0};
	__property int MaxDropDownItemCount = {read=FMaxDropDownItemCount, write=SetMaxDropDownItemCount, default=15};
	__property bool MRUItemsList = {read=FMRUItemsList, write=SetMRUItemsList, default=1};
	__property int MRUItemsListCount = {read=FMRUItemsListCount, write=SetMRUItemsListCount, default=5};
	__property bool MultiSelect = {read=FMultiSelect, write=SetMultiSelect, default=1};
	
public:
	__fastcall virtual TcxControlOptionsFilteringItemPopup(System::Classes::TPersistent* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* ASource);
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxControlOptionsFilteringItemPopup() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxControlOptionsFilteringItemExcelPopupClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlOptionsFilteringItemExcelPopup : public TcxControlOptionsFilteringItemCustomPopup
{
	typedef TcxControlOptionsFilteringItemCustomPopup inherited;
	
private:
	Dxfiltervaluecontainer::TdxExcelFilterValueContainerApplyChangesMode FApplyChanges;
	Dxfiltervaluecontainer::TdxExcelFilterValueContainerDateTimeValuesPageType FDateTimeValuesPageType;
	Dxfiltervaluecontainer::TdxExcelFilterValueContainerDefaultPage FDefaultPage;
	Dxfiltervaluecontainer::TdxExcelFilterValueContainerNumericValuesPageType FNumericValuesPageType;
	void __fastcall SetApplyChanges(Dxfiltervaluecontainer::TdxExcelFilterValueContainerApplyChangesMode AValue);
	void __fastcall SetDateTimeValuesPageType(const Dxfiltervaluecontainer::TdxExcelFilterValueContainerDateTimeValuesPageType AValue);
	void __fastcall SetDefaultPage(const Dxfiltervaluecontainer::TdxExcelFilterValueContainerDefaultPage AValue);
	void __fastcall SetNumericValuesPageType(const Dxfiltervaluecontainer::TdxExcelFilterValueContainerNumericValuesPageType AValue);
	
protected:
	__property Dxfiltervaluecontainer::TdxExcelFilterValueContainerApplyChangesMode ApplyChanges = {read=FApplyChanges, write=SetApplyChanges, default=0};
	__property Dxfiltervaluecontainer::TdxExcelFilterValueContainerDateTimeValuesPageType DateTimeValuesPageType = {read=FDateTimeValuesPageType, write=SetDateTimeValuesPageType, default=0};
	__property Dxfiltervaluecontainer::TdxExcelFilterValueContainerDefaultPage DefaultPage = {read=FDefaultPage, write=SetDefaultPage, default=0};
	__property Dxfiltervaluecontainer::TdxExcelFilterValueContainerNumericValuesPageType NumericValuesPageType = {read=FNumericValuesPageType, write=SetNumericValuesPageType, default=0};
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* ASource);
public:
	/* TcxControlOptionsFilteringItemCustomPopup.Create */ inline __fastcall virtual TcxControlOptionsFilteringItemExcelPopup(System::Classes::TPersistent* AOwner) : TcxControlOptionsFilteringItemCustomPopup(AOwner) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxControlOptionsFilteringItemExcelPopup() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxControlOptionsFilteringClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlOptionsFiltering : public TcxControlOptions
{
	typedef TcxControlOptions inherited;
	
private:
	bool FExpressionEditing;
	TcxControlOptionsFilteringItemExcelPopup* FItemExcelPopup;
	TcxControlOptionsFilteringItemPopup* FItemPopup;
	Dxfilterpopupwindow::TdxFilterPopupWindowMode FItemPopupMode;
	void __fastcall SetExpressionEditing(bool Value);
	void __fastcall SetItemExcelPopup(TcxControlOptionsFilteringItemExcelPopup* Value);
	void __fastcall SetItemPopup(TcxControlOptionsFilteringItemPopup* Value);
	void __fastcall SetItemPopupMode(Dxfilterpopupwindow::TdxFilterPopupWindowMode Value);
	
protected:
	virtual void __fastcall ChangeScale(int M, int D);
	virtual TcxControlOptionsFilteringItemExcelPopupClass __fastcall GetItemExcelPopupClass();
	virtual TcxControlOptionsFilteringItemPopupClass __fastcall GetItemPopupClass();
	__property TcxControlOptionsFilteringItemExcelPopup* ItemExcelPopup = {read=FItemExcelPopup, write=SetItemExcelPopup};
	__property TcxControlOptionsFilteringItemPopup* ItemPopup = {read=FItemPopup, write=SetItemPopup};
	__property Dxfilterpopupwindow::TdxFilterPopupWindowMode ItemPopupMode = {read=FItemPopupMode, write=SetItemPopupMode, default=0};
	
public:
	__fastcall virtual TcxControlOptionsFiltering(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TcxControlOptionsFiltering();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall RunCustomizeDialog(TcxCustomInplaceEditContainer* AItem = (TcxCustomInplaceEditContainer*)(0x0));
	
__published:
	__property bool ExpressionEditing = {read=FExpressionEditing, write=SetExpressionEditing, default=0};
};

#pragma pack(pop)

typedef System::TMetaClass* TcxControlOptionsDateTimeHandlingClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlOptionsDateTimeHandling : public TcxControlOptions
{
	typedef TcxControlOptions inherited;
	
private:
	System::UnicodeString FDateFormat;
	Dxdateranges::TdxDateTimeFilters FFilters;
	System::UnicodeString FHourFormat;
	bool FIgnoreTimeForFiltering;
	System::UnicodeString FMonthFormat;
	bool FUseLongDateFormat;
	bool FUseShortTimeFormat;
	System::UnicodeString FYearFormat;
	void __fastcall SetDateFormat(const System::UnicodeString Value);
	void __fastcall SetFilters(Dxdateranges::TdxDateTimeFilters Value);
	void __fastcall SetHourFormat(const System::UnicodeString Value);
	void __fastcall SetIgnoreTimeForFiltering(bool Value);
	void __fastcall SetMonthFormat(const System::UnicodeString Value);
	void __fastcall SetUseLongDateFormat(bool Value);
	void __fastcall SetUseShortTimeFormat(bool Value);
	void __fastcall SetYearFormat(const System::UnicodeString Value);
	
protected:
	System::UnicodeString __fastcall GetDateFormat();
	virtual System::UnicodeString __fastcall GetDefaultMonthFormat();
	virtual System::UnicodeString __fastcall GetDefaultYearFormat();
	System::UnicodeString __fastcall GetHourFormat();
	System::UnicodeString __fastcall GetMonthFormat();
	System::UnicodeString __fastcall GetYearFormat();
	__property System::UnicodeString DateFormat = {read=FDateFormat, write=SetDateFormat};
	__property Dxdateranges::TdxDateTimeFilters Filters = {read=FFilters, write=SetFilters, default=0};
	__property System::UnicodeString HourFormat = {read=FHourFormat, write=SetHourFormat};
	__property bool IgnoreTimeForFiltering = {read=FIgnoreTimeForFiltering, write=SetIgnoreTimeForFiltering, default=0};
	__property System::UnicodeString MonthFormat = {read=FMonthFormat, write=SetMonthFormat};
	__property bool UseLongDateFormat = {read=FUseLongDateFormat, write=SetUseLongDateFormat, default=1};
	__property bool UseShortTimeFormat = {read=FUseShortTimeFormat, write=SetUseShortTimeFormat, default=1};
	__property System::UnicodeString YearFormat = {read=FYearFormat, write=SetYearFormat};
	
public:
	__fastcall virtual TcxControlOptionsDateTimeHandling(System::Classes::TPersistent* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxControlOptionsDateTimeHandling() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxControlOptionsViewClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlOptionsView : public TcxControlOptions
{
	typedef TcxControlOptions inherited;
	
private:
	bool FCellAutoHeight;
	bool FCellEndEllipsis;
	int FCellTextMaxLineCount;
	Cxlookandfeelpainters::TcxFilterButtonShowMode FItemFilterButtonShowMode;
	int FNavigatorOffset;
	TcxEditingControlEditShowButtons FShowEditButtons;
	Cxlookandfeelpainters::TcxShowFilterButtons FShowItemFilterButtons;
	System::Uitypes::TScrollStyle __fastcall GetScrollBars();
	void __fastcall SetCellAutoHeight(const bool Value);
	void __fastcall SetCellEndEllipsis(const bool Value);
	void __fastcall SetCellTextMaxLineCount(const int Value);
	void __fastcall SetItemFilterButtonShowMode(Cxlookandfeelpainters::TcxFilterButtonShowMode AValue);
	void __fastcall SetNavigatorOffset(int AValue);
	void __fastcall SetScrollBars(const System::Uitypes::TScrollStyle Value);
	void __fastcall SetShowEditButtons(const TcxEditingControlEditShowButtons Value);
	void __fastcall SetShowItemFilterButtons(Cxlookandfeelpainters::TcxShowFilterButtons Value);
	bool __fastcall IsShowEditButtonsStored();
	
protected:
	virtual void __fastcall ChangeScale(int M, int D);
	virtual TcxEditingControlEditShowButtons __fastcall GetDefaultShowEditButtons();
	virtual bool __fastcall IsItemFilterButtonShowedAlways();
	virtual bool __fastcall IsItemFilterSmartTag();
	__property Cxlookandfeelpainters::TcxFilterButtonShowMode ItemFilterButtonShowMode = {read=FItemFilterButtonShowMode, write=SetItemFilterButtonShowMode, default=2};
	__property int NavigatorOffset = {read=FNavigatorOffset, write=SetNavigatorOffset, default=50};
	__property Cxlookandfeelpainters::TcxShowFilterButtons ShowItemFilterButtons = {read=FShowItemFilterButtons, write=SetShowItemFilterButtons, default=2};
	
public:
	__fastcall virtual TcxControlOptionsView(System::Classes::TPersistent* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property bool CellAutoHeight = {read=FCellAutoHeight, write=SetCellAutoHeight, default=0};
	__property bool CellEndEllipsis = {read=FCellEndEllipsis, write=SetCellEndEllipsis, default=0};
	__property int CellTextMaxLineCount = {read=FCellTextMaxLineCount, write=SetCellTextMaxLineCount, default=0};
	__property System::Uitypes::TScrollStyle ScrollBars = {read=GetScrollBars, write=SetScrollBars, default=3};
	__property TcxEditingControlEditShowButtons ShowEditButtons = {read=FShowEditButtons, write=SetShowEditButtons, stored=IsShowEditButtonsStored, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxControlOptionsView() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxControlOptionsDataClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlOptionsData : public TcxControlOptions
{
	typedef TcxControlOptions inherited;
	
private:
	bool FCancelOnExit;
	bool FEditing;
	void __fastcall SetEditing(bool Value);
	
public:
	__fastcall virtual TcxControlOptionsData(System::Classes::TPersistent* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property EditingControl;
	
__published:
	__property bool CancelOnExit = {read=FCancelOnExit, write=FCancelOnExit, default=1};
	__property bool Editing = {read=FEditing, write=SetEditing, default=1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxControlOptionsData() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxControlOptionsBehaviorClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlOptionsBehavior : public TcxControlOptions
{
	typedef TcxControlOptions inherited;
	
private:
	bool FAlwaysShowEditor;
	bool FCellHints;
	bool FDragDropText;
	bool FFocusCellOnCycle;
	bool FFocusFirstCellOnNewRecord;
	int FHintHidePause;
	bool FGoToNextCellOnEnter;
	bool FGoToNextCellOnTab;
	bool FImmediateEditor;
	bool FIncSearch;
	TcxCustomInplaceEditContainer* FIncSearchItem;
	Dxcore::TdxDefaultBoolean FItemFiltering;
	bool FNavigatorHints;
	void __fastcall SetAlwaysShowEditor(bool Value);
	void __fastcall SetCellHints(bool Value);
	void __fastcall SetFocusCellOnCycle(bool Value);
	void __fastcall SetFocusFirstCellOnNewRecord(bool Value);
	void __fastcall SetGoToNextCellOnEnter(bool Value);
	void __fastcall SetGoToNextCellOnTab(bool Value);
	void __fastcall SetImmediateEditor(bool Value);
	void __fastcall SetIncSearch(bool Value);
	void __fastcall SetIncSearchItem(TcxCustomInplaceEditContainer* Value);
	void __fastcall SetItemFiltering(Dxcore::TdxDefaultBoolean AValue);
	
protected:
	virtual void __fastcall Changed();
	__property bool DragDropText = {read=FDragDropText, write=FDragDropText, default=0};
	__property bool FocusCellOnCycle = {read=FFocusCellOnCycle, write=SetFocusCellOnCycle, default=0};
	__property bool FocusFirstCellOnNewRecord = {read=FFocusFirstCellOnNewRecord, write=SetFocusFirstCellOnNewRecord, default=0};
	__property bool IncSearch = {read=FIncSearch, write=SetIncSearch, default=0};
	__property TcxCustomInplaceEditContainer* IncSearchItem = {read=FIncSearchItem, write=SetIncSearchItem};
	__property Dxcore::TdxDefaultBoolean ItemFiltering = {read=FItemFiltering, write=SetItemFiltering, default=2};
	__property bool NavigatorHints = {read=FNavigatorHints, write=FNavigatorHints, default=0};
	
public:
	__fastcall virtual TcxControlOptionsBehavior(System::Classes::TPersistent* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property bool AlwaysShowEditor = {read=FAlwaysShowEditor, write=SetAlwaysShowEditor, default=0};
	__property bool CellHints = {read=FCellHints, write=SetCellHints, default=0};
	__property bool GoToNextCellOnEnter = {read=FGoToNextCellOnEnter, write=SetGoToNextCellOnEnter, default=0};
	__property bool GoToNextCellOnTab = {read=FGoToNextCellOnTab, write=SetGoToNextCellOnTab, default=0};
	__property int HintHidePause = {read=FHintHidePause, write=FHintHidePause, default=0};
	__property bool ImmediateEditor = {read=FImmediateEditor, write=SetImmediateEditor, default=1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxControlOptionsBehavior() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlScrollbarAnnotationOptionsHelper : public Dxscrollbarannotations::TdxScrollbarAnnotationOptions
{
	typedef Dxscrollbarannotations::TdxScrollbarAnnotationOptions inherited;
	
private:
	TcxExtEditingControl* FOwner;
	
protected:
	virtual void __fastcall CheckScrollbarAnnotations();
	virtual bool __fastcall IsVisible(int AKind);
	virtual void __fastcall RefreshScrollbarAnnotations(const Dxscrollbarannotations::TdxScrollbarAnnotationKinds &AChangedAnnotationKinds = (Dxscrollbarannotations::TdxScrollbarAnnotationKinds() << 0x0 << 0x1 << 0x2 << 0x3 << 0x4 << 0x5 << 0x6 << 0x7 << 0x8 << 0x9 << 0xa << 0xb << 0xc << 0xd << 0xe << 0xf << 0x10 << 0x11 << 0x12 << 0x13 << 0x14 << 0x15 << 0x16 << 0x17 << 0x18 << 0x19 << 0x1a << 0x1b << 0x1c << 0x1d << 0x1e << 0x1f << 0x20 << 0x21 << 0x22 << 0x23 << 0x24 << 0x25 << 0x26 << 0x27 << 0x28 << 0x29 << 0x2a << 0x2b << 0x2c << 0x2d << 0x2e << 0x2f << 0x30 << 0x31 << 0x32 << 0x33 << 0x34 << 0x35 << 0x36 << 0x37 << 0x38 << 0x39 << 0x3a << 0x3b << 0x3c << 0x3d << 0x3e << 0x3f << 0x40 << 0x41 << 0x42 << 0x43 << 0x44 << 0x45 << 0x46 << 0x47 << 0x48 << 0x49 << 0x4a << 0x4b << 0x4c << 0x4d << 0x4e << 0x4f << 0x50 << 0x51 << 0x52 << 0x53 << 0x54 << 0x55 << 0x56 << 0x57 << 0x58 << 0x59 << 0x5a << 0x5b << 0x5c << 0x5d << 0x5e << 0x5f << 0x60 << 0x61 << 0x62 << 0x63 << 0x64 << 0x65 << 0x66 << 0x67 << 0x68 << 0x69 << 0x6a << 0x6b << 0x6c << 0x6d << 0x6e << 0x6f << 0x70 << 0x71 << 0x72 << 0x73 << 0x74 << 0x75 << 0x76 << 0x77 << 0x78 << 0x79 << 0x7a << 0x7b << 0x7c << 0x7d << 0x7e << 0x7f << 0x80 << 0x81 << 0x82 << 0x83 << 0x84 << 0x85 << 0x86 << 0x87 << 0x88 << 0x89 << 0x8a << 0x8b << 0x8c << 0x8d << 0x8e << 0x8f << 0x90 << 0x91 << 0x92 << 0x93 << 0x94 << 0x95 << 0x96 << 0x97 << 0x98 << 0x99 << 0x9a << 0x9b << 0x9c << 0x9d << 0x9e << 0x9f << 0xa0 << 0xa1 << 0xa2 << 0xa3 << 0xa4 << 0xa5 << 0xa6 << 0xa7 << 0xa8 << 0xa9 << 0xaa << 0xab << 0xac << 0xad << 0xae << 0xaf << 0xb0 << 0xb1 << 0xb2 << 0xb3 << 0xb4 << 0xb5 << 0xb6 << 0xb7 << 0xb8 << 0xb9 << 0xba << 0xbb << 0xbc << 0xbd << 0xbe << 0xbf << 0xc0 << 0xc1 << 0xc2 << 0xc3 << 0xc4 << 0xc5 << 0xc6 << 0xc7 << 0xc8 << 0xc9 << 0xca << 0xcb << 0xcc << 0xcd << 0xce << 0xcf << 0xd0 << 0xd1 << 0xd2 << 0xd3 << 0xd4 << 0xd5 << 0xd6 << 0xd7 << 0xd8 << 0xd9 << 0xda << 0xdb << 0xdc << 0xdd << 0xde << 0xdf << 0xe0 << 0xe1 << 0xe2 << 0xe3 << 0xe4 << 0xe5 << 0xe6 << 0xe7 << 0xe8 << 0xe9 << 0xea << 0xeb << 0xec << 0xed << 0xee << 0xef << 0xf0 << 0xf1 << 0xf2 << 0xf3 << 0xf4 << 0xf5 << 0xf6 << 0xf7 << 0xf8 << 0xf9 << 0xfa << 0xfb << 0xfc << 0xfd << 0xfe << 0xff ));
	
public:
	__fastcall virtual TcxControlScrollbarAnnotationOptionsHelper(TcxExtEditingControl* AOwner);
public:
	/* TdxScrollbarAnnotationOptions.Destroy */ inline __fastcall virtual ~TcxControlScrollbarAnnotationOptionsHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlScrollbarAnnotationOptions : public TcxControlOptions
{
	typedef TcxControlOptions inherited;
	
private:
	TcxControlScrollbarAnnotationOptionsHelper* FHelper;
	Dxscrollbarannotations::TdxCustomScrollbarAnnotations* __fastcall GetCustomScrollbarAnnotations();
	bool __fastcall GetValue(const int Index);
	bool __fastcall IsValueStored(int Index);
	void __fastcall SetCustomScrollbarAnnotations(Dxscrollbarannotations::TdxCustomScrollbarAnnotations* const Value);
	void __fastcall SetValue(const int Index, const bool Value);
	
protected:
	virtual TcxControlScrollbarAnnotationOptionsHelper* __fastcall CreateHelper();
	virtual void __fastcall DoAssign(System::Classes::TPersistent* Source);
	__property TcxControlScrollbarAnnotationOptionsHelper* Helper = {read=FHelper};
	
public:
	__fastcall virtual TcxControlScrollbarAnnotationOptions(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TcxControlScrollbarAnnotationOptions();
	Dxscrollbarannotations::TdxScrollbarAnnotationStyle __fastcall GetStyle(Dxscrollbarannotations::TdxScrollbarAnnotationKind AKind);
	__property bool Active = {read=GetValue, write=SetValue, stored=IsValueStored, index=0, nodefault};
	__property Dxscrollbarannotations::TdxCustomScrollbarAnnotations* CustomAnnotations = {read=GetCustomScrollbarAnnotations, write=SetCustomScrollbarAnnotations};
	__property bool ShowErrors = {read=GetValue, write=SetValue, stored=IsValueStored, index=4, nodefault};
	__property bool ShowSearchResults = {read=GetValue, write=SetValue, stored=IsValueStored, index=3, nodefault};
	__property bool ShowFocusedRow = {read=GetValue, write=SetValue, stored=IsValueStored, index=2, nodefault};
	__property bool ShowSelectedRows = {read=GetValue, write=SetValue, stored=IsValueStored, index=1, nodefault};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxExtEditingControlNavigatorButtons : public Cxnavigator::TcxNavigatorControlButtons
{
	typedef Cxnavigator::TcxNavigatorControlButtons inherited;
	
private:
	TcxExtEditingControl* FControl;
	
protected:
	virtual bool __fastcall IsButtonVisibleByDefault(int AIndex);
	
public:
	__fastcall virtual TcxExtEditingControlNavigatorButtons(TcxExtEditingControl* AControl);
	
__published:
	__property ConfirmDelete = {default=0};
public:
	/* TcxCustomNavigatorButtons.Destroy */ inline __fastcall virtual ~TcxExtEditingControlNavigatorButtons() { }
	
};


typedef System::TMetaClass* TcxExtEditingControlNavigatorButtonsClass;

class PASCALIMPLEMENTATION TcxControlNavigatorInfoPanel : public Cxnavigator::TcxCustomNavigatorInfoPanel
{
	typedef Cxnavigator::TcxCustomNavigatorInfoPanel inherited;
	
private:
	TcxExtEditingControl* FControl;
	
protected:
	virtual Cxgraphics::TcxViewParams __fastcall GetViewParams();
	
public:
	__fastcall virtual TcxControlNavigatorInfoPanel(TcxExtEditingControl* AControl);
	__property TcxExtEditingControl* Control = {read=FControl};
	
__published:
	__property DisplayMask = {default=0};
	__property Visible = {default=0};
	__property Width = {default=0};
public:
	/* TcxCustomNavigatorInfoPanel.Destroy */ inline __fastcall virtual ~TcxControlNavigatorInfoPanel() { }
	
};


typedef System::TMetaClass* TcxControlNavigatorInfoPanelClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlNavigator : public TcxControlOptions
{
	typedef TcxControlOptions inherited;
	
private:
	TcxExtEditingControlNavigatorButtons* FButtons;
	TcxControlNavigatorInfoPanel* FInfoPanel;
	bool FVisible;
	TcxExtEditingControl* __fastcall GetControl();
	Cxnavigator::_di_IcxNavigatorRecordPosition __fastcall GetIRecordPosition();
	void __fastcall SetButtons(TcxExtEditingControlNavigatorButtons* Value);
	void __fastcall SetInfoPanel(TcxControlNavigatorInfoPanel* Value);
	void __fastcall SetVisible(bool Value);
	
protected:
	virtual TcxControlNavigatorInfoPanelClass __fastcall GetInfoPanelClass();
	virtual TcxExtEditingControlNavigatorButtonsClass __fastcall GetNavigatorButtonsClass();
	
public:
	__fastcall virtual TcxControlNavigator(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TcxControlNavigator();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property TcxExtEditingControl* Control = {read=GetControl};
	
__published:
	__property TcxExtEditingControlNavigatorButtons* Buttons = {read=FButtons, write=SetButtons};
	__property TcxControlNavigatorInfoPanel* InfoPanel = {read=FInfoPanel, write=SetInfoPanel};
	__property bool Visible = {read=FVisible, write=SetVisible, default=0};
};

#pragma pack(pop)

typedef System::TMetaClass* TcxControlNavigatorClass;

typedef System::TMetaClass* TcxEditContainerStylesClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxEditContainerStyles : public Cxstyles::TcxStyles
{
	typedef Cxstyles::TcxStyles inherited;
	
private:
	TcxCustomInplaceEditContainer* __fastcall GetContainer();
	TcxEditingControl* __fastcall GetControl();
	TcxCustomControlStyles* __fastcall GetControlStyles();
	
protected:
	virtual void __fastcall Changed(int AIndex);
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property TcxCustomInplaceEditContainer* Container = {read=GetContainer};
	__property TcxEditingControl* Control = {read=GetControl};
	__property TcxCustomControlStyles* ControlStyles = {read=GetControlStyles};
	
__published:
	__property Cxstyles::TcxStyle* Content = {read=GetValue, write=SetValue, index=0};
public:
	/* TcxStyles.Destroy */ inline __fastcall virtual ~TcxEditContainerStyles() { }
	
public:
	/* TcxCustomStyles.Create */ inline __fastcall virtual TcxEditContainerStyles(System::Classes::TPersistent* AOwner) : Cxstyles::TcxStyles(AOwner) { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{9F0CD5D9-A3D1-44B7-82DC-CAEAC1367C5D}") IcxEditorPropertiesContainer  : public System::IInterface 
{
	virtual Cxedit::TcxCustomEditProperties* __fastcall GetProperties() = 0 ;
	virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass() = 0 ;
	virtual void __fastcall SetPropertiesClass(Cxedit::TcxCustomEditPropertiesClass Value) = 0 ;
};

class PASCALIMPLEMENTATION TcxCustomInplaceEditContainer : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	void *FData;
	Cxedit::TcxCustomEditData* FEditData;
	TcxEditingControl* FEditingControl;
	Cxedit::TcxCustomEditViewData* FEditViewData;
	Cxdatautils::TcxDataEditValueSource FEditValueSource;
	Dxdateranges::TdxFilteringDateRanges* FFilteringDateRanges;
	int FItemIndex;
	Cxedit::TcxCustomEditProperties* FLastEditingProperties;
	TcxCustomEditContainerItemOptions* FOptions;
	Cxedit::TcxCustomEditProperties* FProperties;
	Cxedit::TcxCustomEditPropertiesClass FPropertiesClass;
	System::Classes::TNotifyEvent FPropertiesEvents;
	Cxedit::TcxCustomEditProperties* FPropertiesValue;
	Cxedit::TcxEditRepositoryItem* FRepositoryItem;
	TcxEditContainerStyles* FStyles;
	Dxcore::TdxDefaultBoolean FVisibleForExpressionEditor;
	TcxGetEditPropertiesEvent FOnGetEditProperties;
	TcxGetEditPropertiesEvent FOnGetEditingProperties;
	Cxfilter::TcxGetFilterDisplayTextEvent FOnGetFilterDisplayText;
	Cxfilter::TcxGetFilterValuesEvent FOnGetFilterValues;
	Dxdateranges::TdxInitDateRangesEvent FOnInitFilteringDateRanges;
	Cxfilter::TcxUserFilteringEvent FOnUserFiltering;
	Cxfilter::TcxUserFilteringExEvent FOnUserFilteringEx;
	Cxcustomdata::TcxCustomDataController* __fastcall GetDataController();
	bool __fastcall GetFilterable();
	bool __fastcall GetFiltered();
	bool __fastcall GetFocused();
	TcxEditCellViewInfo* __fastcall GetFocusedCellViewInfo();
	bool __fastcall GetIncSearching();
	Cxedit::TcxCustomEditProperties* __fastcall GetProperties();
	Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	System::UnicodeString __fastcall GetPropertiesClassName();
	Cxedit::TcxCustomEditProperties* __fastcall GetPropertiesValue();
	Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	void __fastcall SetDataBinding(TcxCustomItemDataBinding* Value);
	void __fastcall SetFiltered(bool AValue);
	void __fastcall SetFocused(bool Value);
	void __fastcall SetOptions(TcxCustomEditContainerItemOptions* Value);
	void __fastcall SetProperties(Cxedit::TcxCustomEditProperties* Value);
	void __fastcall SetPropertiesClass(Cxedit::TcxCustomEditPropertiesClass Value);
	void __fastcall SetPropertiesClassName(const System::UnicodeString Value);
	void __fastcall SetRepositoryItem(Cxedit::TcxEditRepositoryItem* Value);
	void __fastcall SetStyles(TcxEditContainerStyles* Value);
	void __fastcall CreateProperties();
	void __fastcall DestroyProperties();
	void __fastcall RecreateProperties();
	void __fastcall RepositoryItemPropertiesChanged(Cxedit::TcxEditRepositoryItem* Sender);
	void __fastcall RepositoryItemRemoved(Cxedit::TcxEditRepositoryItem* Sender);
	
protected:
	TcxCustomItemDataBinding* FDataBinding;
	System::UnicodeString __fastcall GetDateTimeHandlingDateFormat();
	System::UnicodeString __fastcall GetDateTimeHandlingHourFormat();
	System::UnicodeString __fastcall GetDateTimeHandlingMonthFormat();
	System::UnicodeString __fastcall GetDateTimeHandlingYearFormat();
	Dxdateranges::TdxDateTimeFilters __fastcall GetDateTimeHandlingFilters();
	void __fastcall FilteringApplied();
	Cxfilter::TcxFilterCriteria* __fastcall GetFilter();
	void __fastcall GetFilterActiveValueIndexes(Cxfilter::TcxFilterValueList* AValues, Cxclasses::TdxIntegerIndexes &AIndexes);
	int __fastcall GetFilterSelectedValueIndex(Cxfilter::TcxFilterValueList* AValues);
	Cxfilter::TcxFilterValueListClass __fastcall GetFilterValuesClass();
	void __fastcall PopulateFilterValues(Cxfilter::TcxFilterValueList* AValues, System::Classes::TStrings* ADisplayValues, bool AValuesOnly, bool AUniqueOnly);
	void __fastcall SetFilterActiveValueIndex(Cxfilter::TcxFilterValueList* AValues, int AIndex, Cxfilter::TcxFilterCriteriaItemList* AFilterList, bool AReplaceExistent, bool AAddToMRUItemsList);
	void __fastcall SetFilterActiveValueIndexes(Cxfilter::TcxFilterValueList* AValues, const Cxclasses::TdxIntegerIndexes AIndexes, bool AAddToMRUItemsList = false);
	System::TObject* __fastcall GetFilterItemLink();
	Cxedit::TcxCustomEditProperties* __fastcall GetFilterProperties();
	Cxdatastorage::TcxValueTypeClass __fastcall GetFilterValueTypeClass();
	void __fastcall SetFilterActiveValue(Cxfilter::TcxFilterOperatorKind AOperatorKind, const System::Variant &AValue, const System::UnicodeString ADisplayText);
	void __fastcall SetFilterActiveValues(Dxcoreclasses::TdxFastObjectList* AValueInfos, Cxfilter::TcxFilterBoolOperatorKind ABoolOperator);
	virtual void __fastcall CalculateEditViewInfo(const System::Variant &AValue, TcxEditCellViewInfo* AEditViewInfo, const System::Types::TPoint &APoint);
	virtual bool __fastcall CanEdit();
	virtual bool __fastcall CanFocus();
	void __fastcall CancelIncSearching();
	virtual bool __fastcall CanFilterMRUValueItems();
	virtual bool __fastcall CanFilterUsingChecks();
	virtual bool __fastcall CanFind();
	virtual bool __fastcall CanIgnoreTimeForFiltering();
	virtual bool __fastcall CanInitEditing();
	virtual bool __fastcall CanIncSearch();
	virtual bool __fastcall CanTabStop();
	virtual void __fastcall Changed();
	virtual void __fastcall CheckUsingInFindCriteria();
	virtual Cxedit::TcxCustomEditViewData* __fastcall CreateEditViewData(Cxedit::TcxCustomEditProperties* AProperties, void * AEditStyleData);
	virtual void __fastcall DataChanged();
	virtual void __fastcall DoCalculateEditViewInfo(TcxEditCellViewInfo* AEditViewInfo);
	virtual void __fastcall DoGetDisplayText(NativeInt ARecordIndex, System::UnicodeString &AText);
	virtual Cxedit::TcxCustomEditProperties* __fastcall DoGetEditProperties(void * AData);
	virtual void __fastcall DoGetEditingProperties(void * AData, Cxedit::TcxCustomEditProperties* &AProperties);
	virtual void __fastcall DoGetFilterValues(Cxcustomdata::TcxDataFilterValueList* AValueList);
	virtual Cxedit::TcxCustomEditProperties* __fastcall DoGetPropertiesFromEvent(TcxGetEditPropertiesEvent AEvent, void * AData, Cxedit::TcxCustomEditProperties* AProperties);
	virtual void __fastcall DoInitFilteringDateRanges();
	virtual void __fastcall DoOnPropertiesChanged(System::TObject* Sender);
	virtual void __fastcall DoUserFiltering(const System::Variant &AValue, const System::UnicodeString ADisplayText);
	virtual void __fastcall DoUserFilteringEx(Cxfilter::TcxFilterCriteriaItemList* AFilterList, const System::Variant &AValue, const System::UnicodeString ADisplayText);
	virtual void __fastcall EditViewDataGetDisplayTextHandler(Cxedit::TcxCustomEditViewData* Sender, System::UnicodeString &AText);
	virtual Cxgraphics::TcxCanvas* __fastcall GetControlCanvas();
	virtual TcxCustomControlController* __fastcall GetController();
	virtual System::Variant __fastcall GetCurrentValue();
	virtual TcxItemDataBindingClass __fastcall GetDataBindingClass();
	virtual System::UnicodeString __fastcall GetDefaultCaption();
	virtual Cxedit::TcxCustomEditProperties* __fastcall GetDefaultEditProperties();
	virtual System::Variant __fastcall GetDisplayValue(Cxedit::TcxCustomEditProperties* AProperties, int ARecordIndex);
	virtual Cxdatastorage::TcxValueTypeClass __fastcall GetEditDataValueTypeClass();
	virtual int __fastcall GetEditDefaultHeight(Vcl::Graphics::TFont* AFont);
	virtual int __fastcall GetEditHeight(TcxEditCellViewInfo* AEditViewInfo);
	virtual bool __fastcall GetEditing();
	virtual Cxedit::TcxCustomEditStyle* __fastcall GetEditStyle(void * AData);
	virtual System::Variant __fastcall GetEditValue();
	virtual int __fastcall GetEditWidth(TcxEditCellViewInfo* AEditViewInfo);
	virtual bool __fastcall GetFilterableByPopupMenu();
	virtual System::UnicodeString __fastcall GetFilterCaption() = 0 ;
	virtual void __fastcall GetFilterDisplayText(const System::Variant &AValue, System::UnicodeString &ADisplayText);
	virtual Dxdateranges::TdxFilteringDateRangesClass __fastcall GetFilteringDateRangesClass();
	virtual System::UnicodeString __fastcall GetFilterLinkName();
	virtual Dxfilterpopupwindow::TdxFilterPopupWindowMode __fastcall GetFilterPopupMode();
	virtual TcxCustomEditContainerItemOptionsClass __fastcall GetOptionsClass();
	virtual TcxEditContainerStylesClass __fastcall GetStylesClass();
	virtual System::Variant __fastcall GetValue(int ARecordIndex);
	virtual int __fastcall GetValueCount();
	virtual bool __fastcall HasDataTextHandler();
	bool __fastcall HasInitFilteringDateRangesHandler();
	bool __fastcall HasInitFilteringDateRangesHandlers();
	virtual void __fastcall InitEditViewInfo(TcxEditCellViewInfo* AEditViewInfo);
	virtual void __fastcall InitFilteringDateRanges();
	virtual void __fastcall InitProperties(Cxedit::TcxCustomEditProperties* AProperties);
	void __fastcall InternalPropertiesChanged();
	bool __fastcall IsDefaultVisibleForExpressionEditor();
	bool __fastcall IsDestroying();
	bool __fastcall IsEditPartVisible();
	virtual bool __fastcall IsExpression();
	virtual bool __fastcall IsVisible() = 0 ;
	virtual bool __fastcall IsVisibleForExpressionEditor();
	virtual void __fastcall PropertiesChanged();
	virtual void __fastcall SetCurrentValue(const System::Variant &Value);
	virtual void __fastcall SetEditing(bool Value);
	virtual void __fastcall SetEditingControl(TcxEditingControl* Value);
	virtual void __fastcall SetEditValue(const System::Variant &Value);
	virtual void __fastcall SetValue(int ARecordIndex, const System::Variant &Value);
	virtual bool __fastcall ShowFilteredItemsOnlyForFilteredValues();
	virtual bool __fastcall UseFilteredValuesForFilterValueList();
	virtual bool __fastcall UseValueItemsForFilterValueList();
	virtual void __fastcall ValidateDrawValue(const System::Variant &AValue, TcxEditCellViewInfo* AEditViewInfo);
	void __fastcall ValidateEditData(Cxedit::TcxCustomEditProperties* AEditProperties);
	__property TcxCustomControlController* Controller = {read=GetController};
	__property TcxCustomItemDataBinding* DataBinding = {read=FDataBinding, write=SetDataBinding};
	__property Cxcustomdata::TcxCustomDataController* DataController = {read=GetDataController};
	__property bool IncSearching = {read=GetIncSearching, nodefault};
	__property Cxedit::TcxCustomEditData* EditData = {read=FEditData};
	__property bool Editing = {read=GetEditing, write=SetEditing, nodefault};
	__property TcxEditingControl* EditingControl = {read=FEditingControl, write=SetEditingControl};
	__property System::Variant EditValue = {read=GetEditValue, write=SetEditValue};
	__property Cxdatautils::TcxDataEditValueSource EditValueSource = {read=FEditValueSource, nodefault};
	__property Cxedit::TcxCustomEditViewData* EditViewData = {read=FEditViewData};
	__property bool Filterable = {read=GetFilterable, nodefault};
	__property bool FilterableByPopupMenu = {read=GetFilterableByPopupMenu, nodefault};
	__property System::UnicodeString FilterCaption = {read=GetFilterCaption};
	__property bool Filtered = {read=GetFiltered, write=SetFiltered, nodefault};
	__property Dxdateranges::TdxFilteringDateRanges* FilteringDateRanges = {read=FFilteringDateRanges};
	__property System::UnicodeString FilterLinkName = {read=GetFilterLinkName};
	__property bool Focused = {read=GetFocused, write=SetFocused, nodefault};
	__property TcxEditCellViewInfo* FocusedCellViewInfo = {read=GetFocusedCellViewInfo};
	__property TcxCustomEditContainerItemOptions* Options = {read=FOptions, write=SetOptions};
	__property Cxedit::TcxCustomEditProperties* PropertiesValue = {read=GetPropertiesValue};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=GetScaleFactor};
	__property System::Variant Value = {read=GetCurrentValue, write=SetCurrentValue};
	__property int ValueCount = {read=GetValueCount, nodefault};
	__property System::Variant Values[int ARecordIndex] = {read=GetValue, write=SetValue};
	__property TcxGetEditPropertiesEvent OnGetEditProperties = {read=FOnGetEditProperties, write=FOnGetEditProperties};
	__property TcxGetEditPropertiesEvent OnGetEditingProperties = {read=FOnGetEditingProperties, write=FOnGetEditingProperties};
	__property Cxfilter::TcxGetFilterDisplayTextEvent OnGetFilterDisplayText = {read=FOnGetFilterDisplayText, write=FOnGetFilterDisplayText};
	__property Cxfilter::TcxGetFilterValuesEvent OnGetFilterValues = {read=FOnGetFilterValues, write=FOnGetFilterValues};
	__property Dxdateranges::TdxInitDateRangesEvent OnInitFilteringDateRanges = {read=FOnInitFilteringDateRanges, write=FOnInitFilteringDateRanges};
	__property Cxfilter::TcxUserFilteringEvent OnUserFiltering = {read=FOnUserFiltering, write=FOnUserFiltering};
	__property Cxfilter::TcxUserFilteringExEvent OnUserFilteringEx = {read=FOnUserFilteringEx, write=FOnUserFilteringEx};
	
public:
	__fastcall virtual TcxCustomInplaceEditContainer(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TcxCustomInplaceEditContainer();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall ShowExpressionEditor();
	__property void * Data = {read=FData, write=FData};
	__property int ItemIndex = {read=FItemIndex, nodefault};
	__property Cxedit::TcxCustomEditPropertiesClass PropertiesClass = {read=FPropertiesClass, write=SetPropertiesClass};
	
__published:
	__property System::UnicodeString PropertiesClassName = {read=GetPropertiesClassName, write=SetPropertiesClassName};
	__property Cxedit::TcxCustomEditProperties* Properties = {read=GetProperties, write=SetProperties};
	__property System::Classes::TNotifyEvent PropertiesEvents = {read=FPropertiesEvents, write=FPropertiesEvents};
	__property Cxedit::TcxEditRepositoryItem* RepositoryItem = {read=FRepositoryItem, write=SetRepositoryItem};
	__property TcxEditContainerStyles* Styles = {read=FStyles, write=SetStyles};
	__property Dxcore::TdxDefaultBoolean VisibleForExpressionEditor = {read=FVisibleForExpressionEditor, write=FVisibleForExpressionEditor, default=2};
private:
	void *__IdxFilteringDateTimeHandling;	// Dxdateranges::IdxFilteringDateTimeHandling 
	void *__IdxExcelFilterableComponent;	// Dxfiltervaluecontainer::IdxExcelFilterableComponent 
	void *__IdxDateTimeHandling;	// Dxdateranges::IdxDateTimeHandling 
	void *__IdxScaleFactor;	// Cxgeometry::IdxScaleFactor 
	void *__IcxEditorPropertiesContainer;	// IcxEditorPropertiesContainer 
	void *__IcxEditRepositoryItemListener;	// Cxedit::IcxEditRepositoryItemListener 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {019D17DA-5693-46B5-8DA9-764E8AEA77C9}
	operator Dxfiltervaluecontainer::_di_IdxFilterableComponent()
	{
		Dxfiltervaluecontainer::_di_IdxFilterableComponent intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxfiltervaluecontainer::IdxFilterableComponent*(void) { return (Dxfiltervaluecontainer::IdxFilterableComponent*)&__IdxExcelFilterableComponent; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {0A6FF65F-FE22-4D0B-A576-1B8A7850C18F}
	operator Dxdateranges::_di_IdxFilteringDateTimeHandling()
	{
		Dxdateranges::_di_IdxFilteringDateTimeHandling intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxdateranges::IdxFilteringDateTimeHandling*(void) { return (Dxdateranges::IdxFilteringDateTimeHandling*)&__IdxFilteringDateTimeHandling; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {C38F02A1-09C0-4F71-ADE9-A27215899C2E}
	operator Dxfiltervaluecontainer::_di_IdxExcelFilterableComponent()
	{
		Dxfiltervaluecontainer::_di_IdxExcelFilterableComponent intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxfiltervaluecontainer::IdxExcelFilterableComponent*(void) { return (Dxfiltervaluecontainer::IdxExcelFilterableComponent*)&__IdxExcelFilterableComponent; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {FBFE2378-48D4-4D6C-B93A-9A430D2C6FD6}
	operator Dxdateranges::_di_IdxDateTimeHandling()
	{
		Dxdateranges::_di_IdxDateTimeHandling intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxdateranges::IdxDateTimeHandling*(void) { return (Dxdateranges::IdxDateTimeHandling*)&__IdxDateTimeHandling; }
	#endif
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
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {9F0CD5D9-A3D1-44B7-82DC-CAEAC1367C5D}
	operator _di_IcxEditorPropertiesContainer()
	{
		_di_IcxEditorPropertiesContainer intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IcxEditorPropertiesContainer*(void) { return (IcxEditorPropertiesContainer*)&__IcxEditorPropertiesContainer; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {4E27D642-022B-4CD2-AB96-64C7CF9B3299}
	operator Cxedit::_di_IcxEditRepositoryItemListener()
	{
		Cxedit::_di_IcxEditRepositoryItemListener intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxedit::IcxEditRepositoryItemListener*(void) { return (Cxedit::IcxEditRepositoryItemListener*)&__IcxEditRepositoryItemListener; }
	#endif
	
};


__interface  INTERFACE_UUID("{E7171E58-276E-499B-9DDF-298D850883C9}") IcxHotTrackElement  : public System::IInterface 
{
	virtual System::Types::TRect __fastcall GetHintBounds() = 0 ;
	virtual bool __fastcall IsNeedHint(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TPoint &P, /* out */ Vcl::Controls::TCaption &AText, /* out */ bool &AIsMultiLine, /* out */ System::Types::TRect &ATextRect, bool &IsNeedOffsetHint) = 0 ;
	virtual void __fastcall UpdateHotTrackState(const System::Types::TPoint &APoint) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxInplaceContainerHintHelper : public Cxcontrols::TcxControlHintHelper
{
	typedef Cxcontrols::TcxControlHintHelper inherited;
	
private:
	TcxHotTrackController* FController;
	
protected:
	virtual void __fastcall CorrectHintWindowRect(System::Types::TRect &ARect);
	virtual int __fastcall GetHintHidePause();
	virtual Cxcontrols::TcxControl* __fastcall GetOwnerControl();
	
public:
	__fastcall virtual TcxInplaceContainerHintHelper(TcxHotTrackController* AController);
public:
	/* TcxCustomHintHelper.Destroy */ inline __fastcall virtual ~TcxInplaceContainerHintHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxHotTrackController : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TcxEditingControl* FControl;
	TcxInplaceContainerHintHelper* FHintHelper;
	bool FShowHint;
	
protected:
	System::TObject* HintElement;
	bool IsNeedOffsetHint;
	System::Types::TPoint PrevHitPoint;
	System::TObject* PrevElement;
	bool __fastcall CanShowHint();
	void __fastcall CheckDestroyingElement(System::TObject* AElement);
	void __fastcall CheckHint();
	__property TcxInplaceContainerHintHelper* HintHelper = {read=FHintHelper};
	
public:
	__fastcall virtual TcxHotTrackController(TcxEditingControl* AControl);
	__fastcall virtual ~TcxHotTrackController();
	void __fastcall CancelHint();
	void __fastcall Clear();
	void __fastcall SetHotElement(System::TObject* AElement, const System::Types::TPoint &APoint);
	__property TcxEditingControl* Control = {read=FControl, write=FControl};
	__property bool ShowHint = {read=FShowHint, write=FShowHint, nodefault};
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{5EA02F4E-E367-4E4D-A26D-000B5E5CD434}") IcxDragSizing  : public System::IInterface 
{
	virtual bool __fastcall CanSizing(TcxDragSizingDirection ADirection) = 0 ;
	virtual System::Types::TRect __fastcall GetSizingBoundsRect(TcxDragSizingDirection ADirection) = 0 ;
	virtual int __fastcall GetSizingIncrement(TcxDragSizingDirection ADirection) = 0 ;
	virtual bool __fastcall IsDynamicUpdate() = 0 ;
	virtual void __fastcall SetSizeDelta(TcxDragSizingDirection ADirection, int ADelta) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxSizingDragAndDropObject : public Cxcontrols::TcxDragAndDropObject
{
	typedef Cxcontrols::TcxDragAndDropObject inherited;
	
private:
	int FDelta;
	TcxDragSizingDirection FDirection;
	System::Types::TRect FDragBounds;
	System::Types::TPoint FDragPos;
	bool FDynamicUpdate;
	System::Types::TPoint FStartPos;
	int FSizeDelta;
	Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	TcxCustomControlController* __fastcall GetController();
	int __fastcall GetDragCoord(const System::Types::TPoint &APoint);
	System::TObject* __fastcall GetDragItem();
	_di_IcxDragSizing __fastcall GetDragSizing();
	bool __fastcall GetIsSizingKind(int Index);
	
protected:
	virtual void __fastcall BeginDragAndDrop();
	virtual void __fastcall DirtyChanged();
	virtual void __fastcall DragAndDrop(const System::Types::TPoint &P, bool &Accepted);
	virtual void __fastcall EndDragAndDrop(bool Accepted);
	virtual System::Uitypes::TCursor __fastcall GetDragAndDropCursor(bool Accepted);
	virtual System::Types::TPoint __fastcall GetDragPos(const System::Types::TPoint &APoint);
	virtual bool __fastcall GetImmediateStart();
	virtual System::Types::TRect __fastcall GetSizingMarkBounds();
	__property System::Types::TPoint StartPos = {read=FStartPos};
	__property TcxCustomControlController* Controller = {read=GetController};
	__property int Delta = {read=FDelta, nodefault};
	__property int DragCoord[System::Types::TPoint Point] = {read=GetDragCoord};
	__property System::Types::TPoint DragPos = {read=FDragPos};
	__property _di_IcxDragSizing DragSizing = {read=GetDragSizing};
	__property TcxDragSizingDirection Direction = {read=FDirection, nodefault};
	
public:
	__property Cxgraphics::TcxCanvas* Canvas = {read=GetCanvas};
	__property System::Types::TRect DragBounds = {read=FDragBounds};
	__property System::TObject* DragItem = {read=GetDragItem};
	__property bool DynamicUpdate = {read=FDynamicUpdate, nodefault};
	__property bool IsHorzSizing = {read=GetIsSizingKind, index=0, nodefault};
	__property bool IsVertSizing = {read=GetIsSizingKind, index=1, nodefault};
	__property int SizeDelta = {read=FSizeDelta, nodefault};
public:
	/* TcxDragAndDropObject.Create */ inline __fastcall virtual TcxSizingDragAndDropObject(Cxcontrols::TcxControl* AControl) : Cxcontrols::TcxDragAndDropObject(AControl) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxSizingDragAndDropObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomAutoScrollingObject : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Types::TRect FArea;
	System::Uitypes::TScrollCode FCode;
	int FIncrement;
	Vcl::Forms::TScrollBarKind FKind;
	System::TObject* FOwner;
	Cxclasses::TcxTimer* FTimer;
	
protected:
	virtual void __fastcall DoScrollInspectingControl();
	virtual Cxcontrols::TcxControl* __fastcall GetControl();
	virtual bool __fastcall GetHasScrollBar();
	virtual Cxcontrols::_di_IcxControlScrollBar __fastcall GetScrollBar(Vcl::Forms::TScrollBarKind AKind);
	virtual void __fastcall GetScrollBarParams(int &AMin, int &AMax, int &APos);
	virtual void __fastcall Scroll(Vcl::Forms::TScrollBarKind AKind, System::Uitypes::TScrollCode ACode, int &APosition);
	virtual void __fastcall TimerHandler(System::TObject* Sender);
	void __fastcall UpdateTimer(bool AValue);
	
public:
	__fastcall virtual TcxCustomAutoScrollingObject(System::TObject* AOwner);
	__fastcall virtual ~TcxCustomAutoScrollingObject();
	bool __fastcall Check(const System::Types::TPoint &APos);
	void __fastcall SetParams(const System::Types::TRect &Area, Vcl::Forms::TScrollBarKind AKind, System::Uitypes::TScrollCode ACode, int AIncrement);
	void __fastcall Stop();
	__property System::Uitypes::TScrollCode Code = {read=FCode, nodefault};
	__property Cxcontrols::TcxControl* Control = {read=GetControl};
	__property bool HasScrollBar = {read=GetHasScrollBar, nodefault};
	__property int Increment = {read=FIncrement, nodefault};
	__property Vcl::Forms::TScrollBarKind Kind = {read=FKind, nodefault};
	__property System::TObject* Owner = {read=FOwner};
	__property Cxclasses::TcxTimer* Timer = {read=FTimer};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxAutoScrollingEditingControlObject : public TcxCustomAutoScrollingObject
{
	typedef TcxCustomAutoScrollingObject inherited;
	
protected:
	virtual void __fastcall Scroll(Vcl::Forms::TScrollBarKind AKind, System::Uitypes::TScrollCode ACode, int &APosition);
public:
	/* TcxCustomAutoScrollingObject.Create */ inline __fastcall virtual TcxAutoScrollingEditingControlObject(System::TObject* AOwner) : TcxCustomAutoScrollingObject(AOwner) { }
	/* TcxCustomAutoScrollingObject.Destroy */ inline __fastcall virtual ~TcxAutoScrollingEditingControlObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDragDropObjectAutoScrollingObject : public TcxAutoScrollingEditingControlObject
{
	typedef TcxAutoScrollingEditingControlObject inherited;
	
protected:
	virtual Cxcontrols::TcxControl* __fastcall GetControl();
public:
	/* TcxCustomAutoScrollingObject.Create */ inline __fastcall virtual TcxDragDropObjectAutoScrollingObject(System::TObject* AOwner) : TcxAutoScrollingEditingControlObject(AOwner) { }
	/* TcxCustomAutoScrollingObject.Destroy */ inline __fastcall virtual ~TcxDragDropObjectAutoScrollingObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControllerAutoScrollingObject : public TcxAutoScrollingEditingControlObject
{
	typedef TcxAutoScrollingEditingControlObject inherited;
	
private:
	bool FBoundsMode;
	bool FCheckHorz;
	bool FCheckVert;
	Cxlookandfeelpainters::TcxNeighbors FDirections;
	
protected:
	virtual void __fastcall DoScrollInspectingControl();
	virtual Cxcontrols::TcxControl* __fastcall GetControl();
	
public:
	bool __fastcall CheckBounds(const System::Types::TPoint &APos);
	void __fastcall SetBoundsParams(const System::Types::TRect &AClientArea, bool ACheckHorz, bool ACheckVert, int AIncrement);
public:
	/* TcxCustomAutoScrollingObject.Create */ inline __fastcall virtual TcxControllerAutoScrollingObject(System::TObject* AOwner) : TcxAutoScrollingEditingControlObject(AOwner) { }
	/* TcxCustomAutoScrollingObject.Destroy */ inline __fastcall virtual ~TcxControllerAutoScrollingObject() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomAutoScrollingObjectClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxBaseDragAndDropObject : public Cxcontrols::TcxDragAndDropObject
{
	typedef Cxcontrols::TcxDragAndDropObject inherited;
	
private:
	TcxEditingControl* __fastcall GetEditingControl();
	
protected:
	virtual System::Uitypes::TCursor __fastcall GetDragAndDropCursor(bool Accepted);
	__property TcxEditingControl* EditingControl = {read=GetEditingControl};
public:
	/* TcxDragAndDropObject.Create */ inline __fastcall virtual TcxBaseDragAndDropObject(Cxcontrols::TcxControl* AControl) : Cxcontrols::TcxDragAndDropObject(AControl) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxBaseDragAndDropObject() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxDragImage : public Cxcontrols::TcxDragImage
{
	typedef Cxcontrols::TcxDragImage inherited;
	
public:
	__property Image;
	__property WindowCanvas;
public:
	/* TcxDragImage.Create */ inline __fastcall virtual TcxDragImage() : Cxcontrols::TcxDragImage() { }
	/* TcxDragImage.Destroy */ inline __fastcall virtual ~TcxDragImage() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxDragImage(HWND ParentWindow) : Cxcontrols::TcxDragImage(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxPlaceArrows : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Cxcontrols::TcxDragAndDropArrow* FArrow1;
	Cxcontrols::TcxDragAndDropArrow* FArrow2;
	System::Types::TRect FPrevRect;
	Cxgeometry::TcxBorder FPrevSide;
	bool __fastcall GetVisible();
	void __fastcall SetVisible(bool AValue);
	
public:
	__fastcall virtual TcxPlaceArrows(System::Uitypes::TColor AColor, System::Uitypes::TColor ABorderColor);
	__fastcall virtual ~TcxPlaceArrows();
	bool __fastcall MoveTo(const System::Types::TRect &ARect, Cxgeometry::TcxBorder ASide);
	void __fastcall Hide();
	__property bool Visible = {read=GetVisible, write=SetVisible, nodefault};
public:
	/* TObject.Create */ inline __fastcall TcxPlaceArrows() : System::TObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomControlDragAndDropObject : public TcxBaseDragAndDropObject
{
	typedef TcxBaseDragAndDropObject inherited;
	
private:
	System::Classes::TList* FAutoScrollObjects;
	bool FCanDrop;
	TcxDragImage* FDragImage;
	System::Types::TPoint FHotSpot;
	System::Types::TPoint FOrgOffset;
	System::Types::TRect FPictureSize;
	TcxCustomAutoScrollingObject* __fastcall GetAutoScrollObject(int Index);
	int __fastcall GetAutoScrollObjectCount();
	Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	TcxCustomHitTestController* __fastcall GetHitTestController();
	
protected:
	void __fastcall AddAutoScrollingObject(const System::Types::TRect &ARect, Vcl::Forms::TScrollBarKind AKind, System::Uitypes::TScrollCode ACode);
	virtual void __fastcall BeginDragAndDrop();
	bool __fastcall CheckScrolling(const System::Types::TPoint &P);
	virtual void __fastcall DragAndDrop(const System::Types::TPoint &P, bool &Accepted);
	virtual void __fastcall DrawDragImage();
	void __fastcall DrawImage(const System::Types::TPoint &APoint);
	virtual void __fastcall EndDragAndDrop(bool Accepted);
	virtual System::Types::TRect __fastcall GetAcceptedRect();
	virtual TcxCustomAutoScrollingObjectClass __fastcall GetAutoScrollingObjectClass();
	virtual System::Types::TRect __fastcall GetDisplayRect();
	virtual System::Uitypes::TCursor __fastcall GetDragAndDropCursor(bool Accepted);
	virtual int __fastcall GetHorzScrollInc();
	virtual int __fastcall GetVertScrollInc();
	virtual void __fastcall OwnerImageChanged();
	virtual void __fastcall OwnerImageChanging();
	virtual void __fastcall Paint();
	void __fastcall StopScrolling();
	__property System::Types::TRect AcceptedRect = {read=GetAcceptedRect};
	__property int AutoScrollObjectCount = {read=GetAutoScrollObjectCount, nodefault};
	__property TcxCustomAutoScrollingObject* AutoScrollObjects[int Index] = {read=GetAutoScrollObject};
	__property bool CanDrop = {read=FCanDrop, nodefault};
	__property Cxgraphics::TcxCanvas* Canvas = {read=GetCanvas};
	__property System::Types::TRect DisplayRect = {read=GetDisplayRect};
	__property TcxDragImage* DragImage = {read=FDragImage};
	__property TcxCustomHitTestController* HitTestController = {read=GetHitTestController};
	__property System::Types::TPoint HotSpot = {read=FHotSpot};
	__property System::Types::TPoint OrgOffset = {read=FOrgOffset, write=FOrgOffset};
	__property System::Types::TRect PictureSize = {read=FPictureSize};
	
public:
	__fastcall virtual TcxCustomControlDragAndDropObject(Cxcontrols::TcxControl* AControl);
	__fastcall virtual ~TcxCustomControlDragAndDropObject();
};

#pragma pack(pop)

typedef System::TMetaClass* TcxDragImageHelperClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxDragImageHelper : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TcxEditingControl* FDragControl;
	bool FDragImageVisible;
	System::Types::TPoint FDragPos;
	System::Types::TRect __fastcall GetImageRect();
	void __fastcall SetDragImageVisible(bool Value);
	
protected:
	TcxDragImage* DragImage;
	System::Types::TPoint HotSpot;
	System::Types::TRect DragPictureBounds;
	System::Types::TPoint MousePos;
	virtual void __fastcall DragAndDrop(const System::Types::TPoint &P);
	virtual System::Types::TRect __fastcall GetDisplayRect();
	virtual void __fastcall InitDragImage();
	virtual void __fastcall DrawImage(const System::Types::TPoint &APoint);
	
public:
	__fastcall virtual TcxDragImageHelper(TcxEditingControl* AControl, const System::Types::TPoint &ADragPos);
	__fastcall virtual ~TcxDragImageHelper();
	virtual void __fastcall Hide();
	virtual void __fastcall Show();
	__property TcxEditingControl* DragControl = {read=FDragControl};
	__property System::Types::TRect DragImageRect = {read=GetImageRect};
	__property bool DragImageVisible = {read=FDragImageVisible, write=SetDragImageVisible, nodefault};
};

#pragma pack(pop)

typedef System::TMetaClass* TcxHitTestControllerClass;

class PASCALIMPLEMENTATION TcxCustomHitTestController : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TcxCustomControlController* FController;
	System::Types::TPoint FHitPoint;
	System::TObject* FHitTestItem;
	System::Classes::TShiftState FShift;
	TcxEditingControl* __fastcall GetControl();
	int __fastcall GetCoordinate(int AIndex);
	TcxEditCellViewInfo* __fastcall GetEditCellViewInfo();
	bool __fastcall GetHasCode(TcxHitCode Mask);
	TcxHotTrackController* __fastcall GetHotTrackController();
	bool __fastcall GetIsItemEditCell();
	bool __fastcall GetIsMouseEvent();
	TcxCustomControlViewInfo* __fastcall GetViewInfo();
	void __fastcall SetCoordinate(int AIndex, int Value);
	void __fastcall SetHasCode(TcxHitCode ACode, bool AValue);
	void __fastcall SetHitPoint(const System::Types::TPoint &APoint);
	void __fastcall SetHitTestItem(System::TObject* AItem);
	void __fastcall SetIsMouseEvent(bool Value);
	
protected:
	TcxHitCode FHitState;
	bool __fastcall AllowDesignMouseEvents(const System::Types::TPoint &P, System::Classes::TShiftState AShift)/* overload */;
	virtual bool __fastcall AllowDesignMouseEvents(int X, int Y, System::Classes::TShiftState AShift)/* overload */;
	virtual bool __fastcall CanShowHint(System::TObject* AItem);
	void __fastcall ClearState();
	virtual void __fastcall DoCalculate();
	virtual System::Uitypes::TCursor __fastcall GetCurrentCursor();
	virtual bool __fastcall GetHitAtFilterBox();
	virtual bool __fastcall GetHitAtFindPanel();
	virtual bool __fastcall GetHitAtNavigator();
	virtual void __fastcall HitCodeChanged(int APrevCode);
	virtual void __fastcall HitTestItemChanged(System::TObject* APrevHitTestItem);
	void __fastcall RecalculateOnMouseEvent(int X, int Y, System::Classes::TShiftState AShift);
	__property TcxEditingControl* Control = {read=GetControl};
	__property TcxCustomControlController* Controller = {read=FController};
	__property TcxHotTrackController* HotTrackController = {read=GetHotTrackController};
	__property bool IsMouseEvent = {read=GetIsMouseEvent, write=SetIsMouseEvent, nodefault};
	__property System::Classes::TShiftState Shift = {read=FShift, nodefault};
	__property TcxCustomControlViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	__fastcall virtual TcxCustomHitTestController(TcxCustomControlController* AOwner);
	void __fastcall CheckDestroyingItem(System::TObject* AItem);
	void __fastcall ReCalculate()/* overload */;
	void __fastcall ReCalculate(const System::Types::TPoint &APoint)/* overload */;
	__property TcxEditCellViewInfo* EditCellViewInfo = {read=GetEditCellViewInfo};
	__property bool HitAtFilterBox = {read=GetHitAtFilterBox, nodefault};
	__property bool HitAtFindPanel = {read=GetHitAtFindPanel, nodefault};
	__property bool HitAtNavigator = {read=GetHitAtNavigator, nodefault};
	__property System::Types::TPoint HitPoint = {read=FHitPoint, write=SetHitPoint};
	__property int HitX = {read=GetCoordinate, write=SetCoordinate, index=0, nodefault};
	__property int HitY = {read=GetCoordinate, write=SetCoordinate, index=1, nodefault};
	__property TcxHitCode HitState = {read=FHitState};
	__property bool HitCode[TcxHitCode ACode] = {read=GetHasCode, write=SetHasCode};
	__property System::TObject* HitTestItem = {read=FHitTestItem, write=SetHitTestItem};
	__property bool IsItemEditCell = {read=GetIsItemEditCell, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomHitTestController() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomCellNavigator : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TcxCustomControlController* FController;
	bool FEatKeyPress;
	bool FDownOnEnter;
	bool FDownOnTab;
	Cxcustomdata::TcxCustomDataController* __fastcall GetDataController();
	
protected:
	int RowCount;
	virtual TcxCustomInplaceEditContainer* __fastcall SelectCell(bool AForward, bool ANextRow, int &ARowIndex, int &ACellIndex);
	virtual void __fastcall CalcNextRow(bool AForward, int &ARowIndex, int &ACellIndex);
	virtual TcxCustomInplaceEditContainer* __fastcall GetCellContainer(int ARowIndex, int ACellIndex);
	virtual int __fastcall GetCount(int ARowIndex);
	virtual void __fastcall Init(int &ARowIndex, int &ACellIndex, int &ARowCount);
	virtual bool __fastcall MayFocusedEmptyRow(int ARowIndex);
	virtual void __fastcall SetFocusCell(int ARowIndex, int ACellIndex, System::Classes::TShiftState AShift);
	virtual void __fastcall DoKeyPress(System::WideChar &Key);
	__property bool DownOnEnter = {read=FDownOnEnter, write=FDownOnEnter, nodefault};
	__property bool DownOnTab = {read=FDownOnTab, write=FDownOnTab, nodefault};
	
public:
	__fastcall virtual TcxCustomCellNavigator(TcxCustomControlController* AController);
	virtual bool __fastcall FocusNextCell(bool AForward, bool ANextRow, System::Classes::TShiftState AShift = System::Classes::TShiftState() );
	virtual void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall Refresh();
	__property int Count[int ARowIndex] = {read=GetCount};
	__property TcxCustomControlController* Controller = {read=FController};
	__property Cxcustomdata::TcxCustomDataController* DataController = {read=GetDataController};
	__property bool EatKeyPress = {read=FEatKeyPress, write=FEatKeyPress, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomCellNavigator() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomCellNavigatorClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomDesignSelectionHelper : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TcxEditingControl* FControl;
	TcxCustomControlController* __fastcall GetController();
	
protected:
	__property TcxEditingControl* Control = {read=FControl};
	__property TcxCustomControlController* Controller = {read=GetController};
	
public:
	__fastcall virtual TcxCustomDesignSelectionHelper(TcxEditingControl* AControl);
	virtual bool __fastcall IsObjectSelected(System::Classes::TPersistent* AObject) = 0 ;
	virtual void __fastcall Select(System::Classes::TPersistent* AObject, System::Classes::TShiftState AShift) = 0 ;
	virtual void __fastcall SetSelection(System::Classes::TList* AList) = 0 ;
	virtual void __fastcall UnselectObject(System::Classes::TPersistent* AObject) = 0 ;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomDesignSelectionHelper() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomDesignSelectionHelperClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomControlController : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool FAllowCheckEdit;
	bool FBlockRecordKeyboardHandling;
	bool FCheckEditNeeded;
	bool FDisableCellsRefresh;
	bool FDragCancel;
	System::TObject* FDragItem;
	bool FEatKeyPress;
	bool FEditingBeforeDrag;
	TcxEditingController* FEditingController;
	TcxEditingControl* FEditingControl;
	TcxControlFilterBoxMRUItemsPopup* FFilterBoxMRUItemsPopup;
	Dxfilterpopupwindow::TdxFilterPopupWindow* FFilterPopup;
	TcxControlFindPanel* FFindPanel;
	bool FFocused;
	TcxCustomInplaceEditContainer* FFocusedItem;
	TcxCustomHitTestController* FHitTestController;
	TcxHotTrackController* FHotTrackController;
	bool FIsDblClick;
	bool FIsHandleTabStop;
	TcxCustomCellNavigator* FNavigator;
	bool FThumbTracking;
	bool FWasFocusedBeforeClick;
	Cxcustomdata::TcxCustomDataController* __fastcall GetDataController();
	TcxCustomDesignSelectionHelper* __fastcall GetDesignSelectionHelper();
	TcxCustomInplaceEditContainer* __fastcall GetEditingItem();
	TcxControlFilterBoxMRUItemsPopup* __fastcall GetFilterBoxMRUItemsPopup();
	Dxfilterpopupwindow::TdxFilterPopupWindow* __fastcall GetFilterPopup();
	bool __fastcall GetIsEditing();
	TcxCustomInplaceEditContainer* __fastcall GetItemForIncSearching();
	void __fastcall SetEditingItem(TcxCustomInplaceEditContainer* Value);
	void __fastcall SetIncSearchingText(const System::UnicodeString Value);
	void __fastcall SetThumbTracking(bool Value);
	
protected:
	virtual void __fastcall MouseEnter();
	virtual void __fastcall MouseLeave();
	virtual void __fastcall DoCancelMode();
	virtual void __fastcall AfterPaint();
	virtual void __fastcall BeforeEditKeyDown(System::Word &Key, System::Classes::TShiftState &Shift);
	virtual void __fastcall BeforeMouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall BeforePaint();
	virtual void __fastcall BeforeShowEdit();
	virtual void __fastcall BehaviorChanged();
	void __fastcall CancelCheckEditPost();
	virtual bool __fastcall CanHandleDeleteRecordKeys();
	virtual bool __fastcall CanFocusedRecordIndex(NativeInt AIndex);
	virtual bool __fastcall CanShowHint();
	virtual void __fastcall CheckEdit();
	virtual void __fastcall HandleNonContentMouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall DoEditDblClick(System::TObject* Sender);
	virtual void __fastcall DoMouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall DoMouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall DoMouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall DoNextPage(bool AForward, System::Classes::TShiftState Shift);
	virtual TcxEditCellViewInfo* __fastcall GetEditingViewInfo();
	virtual TcxControlFilterBoxMRUItemsPopupClass __fastcall GetFilterBoxMRUItemsPopupClass();
	virtual Dxfilterpopupwindow::TdxFilterPopupWindowClass __fastcall GetFilterPopupClass();
	virtual TcxControlFindPanelClass __fastcall GetFindPanelClass();
	virtual bool __fastcall GetFocused();
	virtual TcxEditCellViewInfo* __fastcall GetFocusedCellViewInfo(TcxCustomInplaceEditContainer* AEditContainer);
	virtual NativeInt __fastcall GetFocusedRecordIndex();
	virtual TcxDragSizingDirection __fastcall GetResizeDirection();
	virtual void __fastcall FocusedItemChanged(TcxCustomInplaceEditContainer* APrevFocusedItem);
	virtual void __fastcall FocusedRecordChanged(int APrevFocusedRecordIndex, int AFocusedRecordIndex);
	virtual bool __fastcall HasFilterBoxMRUItemsPopup();
	virtual bool __fastcall HasFilterPopup();
	virtual bool __fastcall HasFocusedControls();
	virtual void __fastcall HideHint();
	virtual System::Word __fastcall IncSearchKeyDown(System::Word AKey, System::Classes::TShiftState AShift);
	void __fastcall InternalSetFocusedItem(TcxCustomInplaceEditContainer* Value);
	virtual bool __fastcall IsImmediatePost();
	virtual bool __fastcall IsKeyForController(System::Word AKey, System::Classes::TShiftState AShift);
	void __fastcall PostCheckEdit();
	void __fastcall PostShowEdit();
	void __fastcall ProcessCheckEditPost();
	virtual void __fastcall RefreshFocusedCellViewInfo(TcxCustomInplaceEditContainer* AItem);
	virtual void __fastcall RefreshFocusedRecord();
	virtual void __fastcall SetFocused(bool Value);
	virtual void __fastcall SetFocusedItem(TcxCustomInplaceEditContainer* Value);
	virtual void __fastcall SetFocusedRecordIndex(NativeInt Value);
	virtual bool __fastcall GetAlwaysShowEditor();
	virtual bool __fastcall GetCancelEditingOnExit();
	virtual bool __fastcall GetFocusCellOnCycle();
	virtual bool __fastcall GetGoToNextCellOnEnter();
	virtual bool __fastcall GetGoToNextCellOnTab();
	virtual bool __fastcall GetImmediateEditor();
	virtual void __fastcall BeforeStartDrag();
	virtual bool __fastcall CanDrag(int X, int Y);
	virtual void __fastcall DragDrop(System::TObject* Source, int X, int Y);
	virtual void __fastcall DragOver(System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	virtual void __fastcall EndDrag(System::TObject* Target, int X, int Y);
	TcxCustomControlDragAndDropObject* __fastcall GetDragAndDropObject();
	virtual Cxcontrols::TcxDragAndDropObjectClass __fastcall GetDragAndDropObjectClass();
	virtual bool __fastcall GetIsDragging();
	virtual TcxCustomCellNavigatorClass __fastcall GetNavigatorClass();
	virtual void __fastcall StartDrag(Vcl::Controls::TDragObject* &DragObject);
	virtual bool __fastcall IsPixelScrollBar(Vcl::Forms::TScrollBarKind AKind);
	virtual void __fastcall DoEnter();
	virtual void __fastcall DoExit();
	virtual bool __fastcall MayFocus();
	virtual void __fastcall FocusChanged();
	virtual void __fastcall RemoveFocus();
	virtual void __fastcall SetFocus();
	virtual void __fastcall CancelIncSearching();
	virtual TcxCustomInplaceEditContainer* __fastcall GetIncSearchingItem();
	virtual System::UnicodeString __fastcall GetIncSearchingText();
	virtual bool __fastcall GetIsIncSearching();
	virtual void __fastcall SearchLocate(TcxCustomInplaceEditContainer* AItem, const System::UnicodeString Value);
	virtual void __fastcall SearchLocateNext(TcxCustomInplaceEditContainer* AItem, bool AForward);
	virtual void __fastcall UpdateRecord(NativeInt ARecordIndex);
	virtual void __fastcall ViewInfoChanged();
	__property bool AllowCheckEdit = {read=FAllowCheckEdit, write=FAllowCheckEdit, nodefault};
	__property bool BlockRecordKeyboardHandling = {read=FBlockRecordKeyboardHandling, write=FBlockRecordKeyboardHandling, nodefault};
	__property TcxCustomDesignSelectionHelper* DesignSelectionHelper = {read=GetDesignSelectionHelper};
	__property bool DisableCellsRefresh = {read=FDisableCellsRefresh, write=FDisableCellsRefresh, nodefault};
	__property TcxCustomControlDragAndDropObject* DragAndDropObject = {read=GetDragAndDropObject};
	__property bool DragCancel = {read=FDragCancel, write=FDragCancel, nodefault};
	__property System::TObject* DragItem = {read=FDragItem, write=FDragItem};
	__property bool EatKeyPress = {read=FEatKeyPress, write=FEatKeyPress, nodefault};
	__property TcxEditingControl* EditingControl = {read=FEditingControl};
	__property TcxEditingController* EditingController = {read=FEditingController};
	__property TcxCustomInplaceEditContainer* EditingItem = {read=GetEditingItem, write=SetEditingItem};
	__property TcxEditCellViewInfo* EditingViewInfo = {read=GetEditingViewInfo};
	__property TcxControlFilterBoxMRUItemsPopup* FilterBoxMRUItemsPopup = {read=GetFilterBoxMRUItemsPopup};
	__property Dxfilterpopupwindow::TdxFilterPopupWindow* FilterPopup = {read=GetFilterPopup};
	__property TcxControlFindPanel* FindPanel = {read=FFindPanel};
	__property TcxHotTrackController* HotTrackController = {read=FHotTrackController};
	__property TcxCustomHitTestController* HitTestController = {read=FHitTestController};
	__property System::UnicodeString IncSearchingText = {read=GetIncSearchingText, write=SetIncSearchingText};
	__property TcxCustomInplaceEditContainer* IncSearchingItem = {read=GetIncSearchingItem};
	__property bool IsHandleTabStop = {read=FIsHandleTabStop, write=FIsHandleTabStop, nodefault};
	__property bool IsDragging = {read=GetIsDragging, nodefault};
	__property bool IsIncSearching = {read=GetIsIncSearching, nodefault};
	__property TcxCustomInplaceEditContainer* ItemForIncSearching = {read=GetItemForIncSearching};
	__property TcxCustomCellNavigator* Navigator = {read=FNavigator};
	__property bool ThumbTracking = {read=FThumbTracking, write=SetThumbTracking, nodefault};
	__property bool WasFocusedBeforeClick = {read=FWasFocusedBeforeClick, write=FWasFocusedBeforeClick, nodefault};
	
public:
	__fastcall virtual TcxCustomControlController(TcxEditingControl* AOwner);
	__fastcall virtual ~TcxCustomControlController();
	virtual void __fastcall Clear();
	virtual void __fastcall ControlFocusChanged();
	virtual void __fastcall DblClick();
	virtual System::Uitypes::TCursor __fastcall GetCursor(int X, int Y);
	virtual void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall Reset();
	virtual bool __fastcall HandleMessage(Winapi::Messages::TMessage &Message);
	virtual void __fastcall BeginDragAndDrop();
	virtual void __fastcall DragAndDrop(const System::Types::TPoint &P, bool &Accepted);
	virtual void __fastcall EndDragAndDrop(bool Accepted);
	virtual bool __fastcall StartDragAndDrop(const System::Types::TPoint &P);
	virtual void __fastcall AfterScrolling();
	virtual void __fastcall BeforeScrolling();
	virtual void __fastcall InitScrollBarsParameters();
	virtual void __fastcall Scroll(Vcl::Forms::TScrollBarKind AScrollBarKind, System::Uitypes::TScrollCode AScrollCode, int &AScrollPos);
	virtual void __fastcall SetFocusedRecordItem(NativeInt ARecordIndex, TcxCustomInplaceEditContainer* AItem);
	void __fastcall SetScrollBarInfo(Vcl::Forms::TScrollBarKind AScrollBarKind, int AMin, int AMax, int AStep, int APage, int APos, bool AAllowShow, bool AAllowHide);
	virtual void __fastcall MakeFocusedItemVisible();
	virtual void __fastcall MakeFocusedRecordVisible();
	void __fastcall HideFindPanel();
	bool __fastcall IsFindPanelVisible();
	void __fastcall ShowFindPanel();
	__property Cxcustomdata::TcxCustomDataController* DataController = {read=GetDataController};
	__property bool Focused = {read=GetFocused, write=SetFocused, nodefault};
	__property TcxCustomInplaceEditContainer* FocusedItem = {read=FFocusedItem, write=SetFocusedItem};
	__property NativeInt FocusedRecordIndex = {read=GetFocusedRecordIndex, write=SetFocusedRecordIndex, nodefault};
	__property bool IsDblClick = {read=FIsDblClick, nodefault};
	__property bool IsEditing = {read=GetIsEditing, nodefault};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxEditingController : public Cxedit::TcxCustomEditingController
{
	typedef Cxedit::TcxCustomEditingController inherited;
	
private:
	TcxCustomControlController* FController;
	TcxCustomInplaceEditContainer* FEditingItem;
	TcxCustomInplaceEditContainer* FEditShowingTimerItem;
	bool FWasEditHide;
	TcxEditCellViewInfo* __fastcall GetEditingCellViewInfo();
	TcxEditingControl* __fastcall GetEditingControl();
	Cxedit::TcxCustomEditProperties* __fastcall GetEditingProperties();
	bool __fastcall GetIsDragging();
	void __fastcall SetEditingItem(TcxCustomInplaceEditContainer* Value);
	
protected:
	virtual bool __fastcall CanHideEdit();
	virtual bool __fastcall CanInitEditing();
	virtual bool __fastcall CanUpdateEditValue();
	virtual void __fastcall ClearEditingItem();
	virtual void __fastcall DoHideEdit(bool Accept);
	virtual void __fastcall DoUpdateEdit();
	virtual void __fastcall FocusControlOnHideEdit();
	virtual bool __fastcall GetCancelEditingOnExit();
	virtual Vcl::Controls::TWinControl* __fastcall GetEditParent();
	virtual System::Types::TRect __fastcall GetFocusedCellBounds();
	virtual bool __fastcall GetHideEditOnExit();
	virtual bool __fastcall GetHideEditOnFocusedRecordChange();
	virtual bool __fastcall GetIsEditing();
	virtual void __fastcall HideInplaceEditor();
	virtual bool __fastcall NeedFocusControlOnHideEdit();
	virtual bool __fastcall PrepareEdit(TcxCustomInplaceEditContainer* AItem, bool AIsMouseEvent);
	virtual void __fastcall StartEditingByTimer();
	virtual void __fastcall UpdateInplaceParamsPosition();
	void __fastcall InitializeCellBeforeScrollAnimation();
	void __fastcall FinalizeCellAfterScrollAnimation();
	virtual System::Variant __fastcall GetValue();
	virtual void __fastcall SetValue(const System::Variant &AValue);
	virtual void __fastcall EditAfterKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall EditChanged(System::TObject* Sender);
	virtual void __fastcall EditDblClick(System::TObject* Sender);
	virtual void __fastcall EditExecuteAction(System::Classes::TBasicAction* Action, bool &Handled);
	virtual void __fastcall EditExit(System::TObject* Sender);
	virtual void __fastcall EditFocusChanged(System::TObject* Sender);
	virtual void __fastcall EditKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall EditKeyPress(System::TObject* Sender, System::WideChar &Key);
	virtual void __fastcall EditKeyUp(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall EditUpdateAction(System::Classes::TBasicAction* Action, bool &Handled);
	virtual void __fastcall EditValueChanged(System::TObject* Sender);
	__property TcxCustomControlController* Controller = {read=FController};
	__property TcxEditCellViewInfo* EditingCellViewInfo = {read=GetEditingCellViewInfo};
	__property TcxEditingControl* EditingControl = {read=GetEditingControl};
	__property Cxedit::TcxCustomEditProperties* EditingProperties = {read=GetEditingProperties};
	
public:
	__fastcall virtual TcxEditingController(TcxCustomControlController* AController);
	virtual void __fastcall HideEdit(bool Accept);
	virtual void __fastcall ShowEdit()/* overload */;
	HIDESBASE void __fastcall ShowEdit(TcxCustomInplaceEditContainer* AItem)/* overload */;
	HIDESBASE void __fastcall ShowEdit(TcxCustomInplaceEditContainer* AItem, System::WideChar Key)/* overload */;
	HIDESBASE void __fastcall ShowEdit(TcxCustomInplaceEditContainer* AItem, System::Classes::TShiftState Shift, int X, int Y)/* overload */;
	HIDESBASE void __fastcall StartEditShowingTimer(TcxCustomInplaceEditContainer* AItem);
	__property TcxCustomInplaceEditContainer* EditingItem = {read=FEditingItem, write=SetEditingItem};
	__property bool IsDragging = {read=GetIsDragging, nodefault};
public:
	/* TcxCustomEditingController.Destroy */ inline __fastcall virtual ~TcxEditingController() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomControlViewInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Types::TRect FBounds;
	TcxEditingControl* FControl;
	System::Types::TRect FClientRect;
	int FDefaultEditHeight;
	System::Classes::TList* FEditCellViewInfoList;
	TcxControlFilterBoxViewInfo* FFilterBoxViewInfo;
	TcxControlFindPanelViewInfo* FFindPanelViewInfo;
	TcxCustomControlPainter* FPainter;
	int FState;
	int __fastcall GetFilterBoxHeight();
	Dxfilterbox::TcxFilterBoxPosition __fastcall GetFilterBoxPosition();
	System::Types::TRect __fastcall GetFilterBoxVisibleRect();
	int __fastcall GetFilterBoxWidth();
	int __fastcall GetFindPanelHeight();
	Cxfindpanel::TcxFindPanelPosition __fastcall GetFindPanelPosition();
	System::Types::TRect __fastcall GetFindPanelVisibleRect();
	int __fastcall GetFindPanelWidth();
	Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetLookAndFeelPainter();
	int __fastcall GetPanelsHeight(Dxfilterbox::TcxFilterBoxPosition APosition);
	Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	bool __fastcall GetState(int AMask);
	void __fastcall SetState(int AMask, bool Value);
	void __fastcall UpdateSelectionParams();
	
protected:
	Vcl::Graphics::TBrush* Brush;
	Vcl::Graphics::TBrush* SelectionBrush;
	Cxgraphics::TcxViewParams SelectionParams;
	TcxEditCellViewInfo* __fastcall AddEditCellViewInfo(TcxEditCellViewInfoClass AViewInfoClass, TcxCustomInplaceEditContainer* AEditContainer);
	virtual System::Types::TRect __fastcall CalculateClientRect();
	virtual int __fastcall CalculateDefaultEditHeight();
	virtual void __fastcall CalculateDefaultHeights();
	virtual void __fastcall CalculateFilterBox();
	virtual void __fastcall CalculateFindPanel();
	void __fastcall ClearEditCellViewInfos();
	virtual void __fastcall CreatePainter();
	virtual void __fastcall DoCalculate();
	virtual TcxControlFilterBoxViewInfoClass __fastcall GetFilterBoxViewInfoClass();
	virtual TcxControlFindPanelViewInfoClass __fastcall GetFindPanelViewInfoClass();
	virtual bool __fastcall IsFilterBoxVisible();
	virtual bool __fastcall IsFindPanelVisible();
	virtual bool __fastcall IsPanArea(const System::Types::TPoint &APoint);
	void __fastcall RemoveEditCellViewInfo(TcxEditCellViewInfo* AViewInfo);
	virtual void __fastcall SetFullPaintRegion(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall UpdateSelection();
	__property int FilterBoxHeight = {read=GetFilterBoxHeight, nodefault};
	__property Dxfilterbox::TcxFilterBoxPosition FilterBoxPosition = {read=GetFilterBoxPosition, nodefault};
	__property TcxControlFilterBoxViewInfo* FilterBoxViewInfo = {read=FFilterBoxViewInfo};
	__property System::Types::TRect FilterBoxVisibleRect = {read=GetFilterBoxVisibleRect};
	__property int FilterBoxWidth = {read=GetFilterBoxWidth, nodefault};
	__property int FindPanelHeight = {read=GetFindPanelHeight, nodefault};
	__property Cxfindpanel::TcxFindPanelPosition FindPanelPosition = {read=GetFindPanelPosition, nodefault};
	__property TcxControlFindPanelViewInfo* FindPanelViewInfo = {read=FFindPanelViewInfo};
	__property System::Types::TRect FindPanelVisibleRect = {read=GetFindPanelVisibleRect};
	__property int FindPanelWidth = {read=GetFindPanelWidth, nodefault};
	__property bool IsDirty = {read=GetState, write=SetState, index=1, nodefault};
	__property int PanelsHeight[Dxfilterbox::TcxFilterBoxPosition APosition] = {read=GetPanelsHeight};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=GetScaleFactor};
	__property bool State[int AMask] = {read=GetState, write=SetState};
	
public:
	Cxgraphics::TcxViewParams ViewParams;
	__fastcall virtual TcxCustomControlViewInfo(TcxEditingControl* AOwner);
	__fastcall virtual ~TcxCustomControlViewInfo();
	void __fastcall Calculate();
	virtual void __fastcall Invalidate(bool ARecalculate = false);
	void __fastcall ValidateDirty();
	__property System::Types::TRect Bounds = {read=FBounds, write=FBounds};
	__property System::Types::TRect ClientRect = {read=FClientRect};
	__property TcxEditingControl* Control = {read=FControl};
	__property int DefaultEditHeight = {read=FDefaultEditHeight, nodefault};
	__property Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* LookAndFeelPainter = {read=GetLookAndFeelPainter};
	__property TcxCustomControlPainter* Painter = {read=FPainter, write=FPainter};
};

#pragma pack(pop)

typedef void __fastcall (__closure *TcxCustomDrawCellEvent)(Cxgraphics::TcxCanvas* ACanvas, TcxCustomViewInfoItem* ACell, bool &ADone);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomControlCells : public Cxclasses::TcxObjectList
{
	typedef Cxclasses::TcxObjectList inherited;
	
public:
	TcxCustomViewInfoItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TcxCustomViewInfoItem* __fastcall GetItem(int AIndex);
	
public:
	void __fastcall BeforePaint();
	bool __fastcall CalculateHitTest(TcxCustomHitTestController* AHitTest);
	virtual void __fastcall Clear();
	void __fastcall DeleteAll();
	void __fastcall ExcludeFromClipping(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas, TcxCustomDrawCellEvent AHandler);
	void __fastcall RightToLeftConversion(const System::Types::TRect &AClientBounds);
	__property TcxCustomViewInfoItem* Items[int Index] = {read=GetItem/*, default*/};
public:
	/* TcxObjectList.Create */ inline __fastcall TcxCustomControlCells(bool AOwnObjects) : Cxclasses::TcxObjectList(AOwnObjects) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TcxCustomControlCells() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomControlViewInfoClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxExtEditingControlViewInfo : public TcxCustomControlViewInfo
{
	typedef TcxCustomControlViewInfo inherited;
	
private:
	TcxCustomNavigatorSiteViewInfo* FNavigatorSiteViewInfo;
	TcxExtEditingControl* __fastcall GetControl();
	System::Types::TRect __fastcall GetNavigatorSiteVisibleRect();
	
protected:
	void __fastcall AddNavigatorSiteToPaintRegion(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall AdjustClientBounds(System::Types::TRect &ABounds);
	virtual void __fastcall CalculateNavigator();
	virtual bool __fastcall CanHScrollBarHide();
	virtual int __fastcall GetBottomNonClientHeight();
	virtual int __fastcall GetRightNonClientWidth();
	virtual void __fastcall GetHScrollBarBounds(System::Types::TRect &ABounds);
	virtual System::Types::TRect __fastcall GetNavigatorBounds();
	virtual void __fastcall GetVScrollBarBounds(System::Types::TRect &ABounds);
	virtual bool __fastcall IsNavigatorSizeChanged();
	virtual bool __fastcall IsNavigatorVisible();
	virtual void __fastcall NavigatorInvalidate();
	virtual void __fastcall NavigatorRightToLeftConversion();
	virtual void __fastcall NavigatorStateChanged();
	virtual TcxCustomNavigatorSiteViewInfoClass __fastcall GetNavigatorSiteViewInfoClass();
	virtual bool __fastcall IsNavigatorSupported();
	virtual void __fastcall SetFullPaintRegion(Cxgraphics::TcxCanvas* ACanvas);
	__property TcxCustomNavigatorSiteViewInfo* NavigatorSiteViewInfo = {read=FNavigatorSiteViewInfo};
	__property System::Types::TRect NavigatorSiteVisibleRect = {read=GetNavigatorSiteVisibleRect};
	
public:
	__fastcall virtual TcxExtEditingControlViewInfo(TcxEditingControl* AOwner);
	__fastcall virtual ~TcxExtEditingControlViewInfo();
	virtual void __fastcall Invalidate(bool ARecalculate = false);
	__property TcxExtEditingControl* Control = {read=GetControl};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomViewInfoItem : public Dxcoreclasses::TcxIUnknownObject
{
	typedef Dxcoreclasses::TcxIUnknownObject inherited;
	
private:
	bool FHasClipping;
	System::TObject* FOwner;
	bool FTransparent;
	bool FIsRightToLeftConverted;
	bool FVisibleInfoCalculated;
	Vcl::Graphics::TBitmap* __fastcall GetBitmap();
	TcxCustomControlViewInfo* __fastcall GetControlViewInfo();
	Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetPainter();
	Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	
protected:
	System::Types::TRect ClipRect;
	Cxgraphics::TcxCanvas* ControlCanvas;
	System::Types::TRect DisplayRect;
	Cxgraphics::TcxViewParams ItemViewParams;
	bool ItemVisible;
	System::Types::TRect VisibleBounds;
	virtual void __fastcall AfterCustomDraw(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall BeforeCustomDraw(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall CheckClipping(const System::Types::TRect &ADisplayRect, const System::Types::TRect &AAvailableRect)/* overload */;
	virtual void __fastcall CheckClipping(const System::Types::TRect &ADisplayRect)/* overload */;
	virtual void __fastcall DoCalculate();
	virtual void __fastcall DoDraw(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DoHorzOffset(int AShift);
	virtual void __fastcall DoVertOffset(int AShift);
	bool __fastcall DrawBackgroundHandler(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds);
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &AClientBounds);
	virtual TcxEditingControl* __fastcall GetControl();
	virtual bool __fastcall GetHitTest(TcxCustomHitTestController* AHitTest);
	virtual bool __fastcall IsPersistent();
	virtual bool __fastcall IsTransparent();
	bool __fastcall ExcludeFromPaint(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall Scroll(const int DX, const int DY);
	void __fastcall UpdateEditRect();
	__property System::TObject* Owner = {read=FOwner};
	__property TcxCustomControlViewInfo* ControlViewInfo = {read=GetControlViewInfo};
	
public:
	__fastcall virtual TcxCustomViewInfoItem(System::TObject* AOwner);
	__fastcall virtual ~TcxCustomViewInfoItem();
	virtual void __fastcall Assign(TcxCustomViewInfoItem* Source);
	void __fastcall CheckVisibleInfo();
	__classmethod virtual int __fastcall CustomDrawID();
	void __fastcall Draw(Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall Invalidate(bool ARecalculate = false)/* overload */;
	virtual void __fastcall Invalidate(const System::Types::TRect &R, bool AEraseBackground = false)/* overload */;
	void __fastcall RightToLeftConversion(const System::Types::TRect &AClientBounds);
	__property Vcl::Graphics::TBitmap* Bitmap = {read=GetBitmap};
	__property System::Types::TRect BoundsRect = {read=DisplayRect};
	__property TcxEditingControl* Control = {read=GetControl};
	__property bool IsRightToLeftConverted = {read=FIsRightToLeftConverted, write=FIsRightToLeftConverted, nodefault};
	__property bool HasClipping = {read=FHasClipping, nodefault};
	__property Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* Painter = {read=GetPainter};
	__property Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* LookAndFeelPainterClass = {read=GetPainter};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=GetScaleFactor};
	__property bool Transparent = {read=FTransparent, write=FTransparent, nodefault};
	__property bool Visible = {read=ItemVisible, nodefault};
	__property bool VisibleInfoCalculated = {read=FVisibleInfoCalculated, write=FVisibleInfoCalculated, nodefault};
	__property System::Types::TRect VisibleRect = {read=ClipRect};
	__property Cxgraphics::TcxViewParams ViewParams = {read=ItemViewParams};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxEditCellViewInfo : public TcxCustomViewInfoItem
{
	typedef TcxCustomViewInfoItem inherited;
	
private:
	void __fastcall AfterDrawCellBackgroundHandler(Cxedit::TcxCustomEditViewInfo* Sender, Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall AfterDrawCellValueHandler(Cxedit::TcxCustomEditViewInfo* Sender, Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall CanDrawEditValueHandler(Cxedit::TcxCustomEditViewInfo* Sender, bool &Allow);
	bool __fastcall GetTransparent();
	void __fastcall SetTransparent(bool Value);
	
protected:
	Cxgeometry::TcxBorders CellBorders;
	System::Types::TRect CellContentRect;
	System::Types::TRect CellEditRect;
	int CellHeight;
	bool CellTransparent;
	System::Variant CellValue;
	bool IsViewDataCreated;
	Cxedit::TcxCustomEditProperties* Properties;
	Cxedit::TcxCustomEditViewInfo* ViewInfo;
	Cxedit::TcxCustomEditViewData* ViewData;
	virtual System::Types::TRect __fastcall GetHintBounds();
	virtual bool __fastcall IsNeedHint(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TPoint &P, /* out */ Vcl::Controls::TCaption &AText, /* out */ bool &AIsMultiLine, /* out */ System::Types::TRect &ATextRect, bool &IsNeedOffsetHint);
	virtual void __fastcall UpdateHotTrackState(const System::Types::TPoint &APoint);
	bool __fastcall HasHintPoint(const System::Types::TPoint &P);
	bool __fastcall IsHintAtMousePos();
	bool __fastcall UseHintHidePause();
	Cxedit::TcxCustomEditViewData* __fastcall GetViewData(/* out */ bool &AIsViewDataCreated);
	void __fastcall EditOwnerInvalidate(const System::Types::TRect &R, bool AEraseBackground);
	virtual void __fastcall AfterDrawCellBackground(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall AfterDrawCellValue(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall CalculateCellEditorBounds(Cxedit::TcxCustomEditViewInfo* AViewInfo, System::Types::TRect &R);
	virtual void __fastcall CanDrawCellValue(bool &Allow);
	int __fastcall CalculateEditHeight();
	int __fastcall CalculateEditWidth();
	virtual bool __fastcall ChangedHeight(int APrevHeight, int ANewHeight);
	virtual void __fastcall CheckClipping(const System::Types::TRect &ADisplayRect, const System::Types::TRect &AAvailableRect)/* overload */;
	virtual System::Types::TRect __fastcall ContentOffset();
	virtual System::Types::TPoint __fastcall CorrectHotTrackPoint(const System::Types::TPoint &APoint);
	virtual void __fastcall DoCalculate();
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &AClientBounds);
	virtual Cxedit::TcxEditButtonTransparency __fastcall GetButtonTransparency();
	virtual System::Types::TPoint __fastcall GetCellOrg();
	virtual TcxEditingControl* __fastcall GetControl();
	virtual System::Variant __fastcall GetDisplayValue();
	virtual TcxCustomInplaceEditContainer* __fastcall GetEditContainer();
	virtual System::Types::TRect __fastcall GetEditRect();
	virtual Cxgraphics::TcxViewParams __fastcall GetEditViewParams();
	virtual int __fastcall GetFindBKColor();
	virtual int __fastcall GetFindTextColor();
	virtual void __fastcall GetFindTextInfo(/* out */ int &AStart, /* out */ int &ALength) = 0 ;
	virtual bool __fastcall GetFocused();
	Cxedit::TcxInplaceEditPosition __fastcall GetInplaceEditPosition();
	virtual int __fastcall GetMaxLineCount();
	virtual System::Types::TRect __fastcall GetRealCellEditRect();
	virtual NativeInt __fastcall GetRecordIndex();
	virtual int __fastcall GetSelectedTextColor();
	virtual int __fastcall GetSelectedBKColor();
	virtual void * __fastcall GetViewInfoData();
	virtual System::Variant __fastcall FormatDisplayValue(const System::Variant &AValue);
	System::UnicodeString __fastcall GetIncSearchText();
	virtual void __fastcall InitFindTextSelection();
	virtual void __fastcall InitializeByHiddenEditor(Cxedit::TcxCustomEdit* AEdit);
	virtual void __fastcall InitIncSearchTextSelection();
	virtual void __fastcall InitTextSelection();
	virtual bool __fastcall IsAutoHeight();
	bool __fastcall IsEditing();
	virtual bool __fastcall IsEndEllipsis();
	virtual bool __fastcall IsSupportedHotTrack();
	virtual bool __fastcall NeedHideEdit();
	virtual bool __fastcall NeedHighlightFindText();
	virtual bool __fastcall NeedHighlightIncSearchText();
	void __fastcall SetBounds(const System::Types::TRect &ABounds, const System::Types::TRect &ADisplayRect);
	__property TcxCustomInplaceEditContainer* EditContainer = {read=GetEditContainer};
	__property System::Types::TRect EditRect = {read=GetEditRect};
	
public:
	__fastcall virtual ~TcxEditCellViewInfo();
	virtual void __fastcall Assign(TcxCustomViewInfoItem* Source);
	virtual bool __fastcall Refresh(bool ARecalculate);
	__property Cxgeometry::TcxBorders Borders = {read=CellBorders, nodefault};
	__property System::Types::TRect ContentRect = {read=CellContentRect};
	__property System::Variant DisplayValue = {read=CellValue};
	__property Cxedit::TcxCustomEditViewInfo* EditViewInfo = {read=ViewInfo};
	__property bool Focused = {read=GetFocused, nodefault};
	__property int MaxLineCount = {read=GetMaxLineCount, nodefault};
	__property NativeInt RecordIndex = {read=GetRecordIndex, nodefault};
	__property bool Transparent = {read=GetTransparent, write=SetTransparent, nodefault};
	__property BoundsRect;
	__property Control;
	__property ViewParams;
	__property VisibleRect;
public:
	/* TcxCustomViewInfoItem.Create */ inline __fastcall virtual TcxEditCellViewInfo(System::TObject* AOwner) : TcxCustomViewInfoItem(AOwner) { }
	
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  CheckClipping(const System::Types::TRect &ADisplayRect){ TcxCustomViewInfoItem::CheckClipping(ADisplayRect); }
	
private:
	void *__IcxEditOwner;	// Cxedit::IcxEditOwner 
	void *__IcxHintableObject;	// Dxcustomhint::IcxHintableObject 
	void *__IcxHotTrackElement;	// IcxHotTrackElement 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {4129100C-7FC6-436E-8711-47A5C978CA73}
	operator Cxedit::_di_IcxEditOwner()
	{
		Cxedit::_di_IcxEditOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxedit::IcxEditOwner*(void) { return (Cxedit::IcxEditOwner*)&__IcxEditOwner; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {228FF1F5-6D0C-40F0-9F7B-8C71CE12CEC8}
	operator Dxcustomhint::_di_IcxHintableObject()
	{
		Dxcustomhint::_di_IcxHintableObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxcustomhint::IcxHintableObject*(void) { return (Dxcustomhint::IcxHintableObject*)&__IcxHintableObject; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E7171E58-276E-499B-9DDF-298D850883C9}
	operator _di_IcxHotTrackElement()
	{
		_di_IcxHotTrackElement intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IcxHotTrackElement*(void) { return (IcxHotTrackElement*)&__IcxHotTrackElement; }
	#endif
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxExtEditingControlNavigatorViewInfo : public Cxnavigator::TcxInplaceNavigatorViewInfo
{
	typedef Cxnavigator::TcxInplaceNavigatorViewInfo inherited;
	
private:
	TcxExtEditingControl* FOwnerControl;
	
protected:
	virtual Cxcontrols::TcxControl* __fastcall GetControl();
	virtual int __fastcall GetNavigatorOffset();
	virtual void __fastcall UpdateNavigatorSiteBounds(const System::Types::TRect &ABounds);
	
public:
	__fastcall virtual TcxExtEditingControlNavigatorViewInfo(TcxExtEditingControl* AOwnerControl);
public:
	/* TcxNavigatorViewInfo.Destroy */ inline __fastcall virtual ~TcxExtEditingControlNavigatorViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomNavigatorSiteViewInfo : public TcxCustomViewInfoItem
{
	typedef TcxCustomViewInfoItem inherited;
	
private:
	TcxExtEditingControlNavigatorViewInfo* FNavigatorViewInfo;
	TcxExtEditingControl* __fastcall GetOwnerControl();
	
protected:
	void __fastcall Calculate();
	virtual void __fastcall DoCalculate();
	virtual void __fastcall DoDraw(Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall DrawEx(Cxgraphics::TcxCanvas* ACanvas);
	virtual TcxEditingControl* __fastcall GetControl();
	int __fastcall GetHeight();
	virtual bool __fastcall GetHitTest(TcxCustomHitTestController* AHitTest);
	System::Types::TRect __fastcall GetNavigatorBounds();
	int __fastcall GetWidth();
	bool __fastcall IsNavigatorSizeChanged();
	HIDESBASE void __fastcall RightToLeftConversion();
	void __fastcall NavigatorStateChanged();
	void __fastcall UpdateBounds(const System::Types::TRect &ABounds);
	System::Types::TRect __fastcall GetHintBounds();
	bool __fastcall IsNeedHint(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TPoint &P, /* out */ Vcl::Controls::TCaption &AText, /* out */ bool &AIsMultiLine, /* out */ System::Types::TRect &ATextRect, bool &IsNeedOffsetHint);
	void __fastcall UpdateHotTrackState(const System::Types::TPoint &APoint);
	void __fastcall TrackingMouseLeave();
	void __fastcall MouseLeave();
	bool __fastcall PtInCaller(const System::Types::TPoint &P);
	void __fastcall MouseDown(System::Uitypes::TMouseButton AButton, int X, int Y);
	void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall MouseUp(System::Uitypes::TMouseButton AButton, int X, int Y);
	__property TcxExtEditingControl* OwnerControl = {read=GetOwnerControl};
	
public:
	__fastcall virtual TcxCustomNavigatorSiteViewInfo(System::TObject* AOwner);
	__fastcall virtual ~TcxCustomNavigatorSiteViewInfo();
private:
	void *__IcxMouseTrackingCaller2;	// Dxcoreclasses::IcxMouseTrackingCaller2 
	void *__IcxMouseTrackingCaller;	// Dxcoreclasses::IcxMouseTrackingCaller 
	void *__IcxHotTrackElement;	// IcxHotTrackElement 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3A5D973B-F016-4F22-80B6-1D35668D7743}
	operator Dxcoreclasses::_di_IcxMouseTrackingCaller2()
	{
		Dxcoreclasses::_di_IcxMouseTrackingCaller2 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxcoreclasses::IcxMouseTrackingCaller2*(void) { return (Dxcoreclasses::IcxMouseTrackingCaller2*)&__IcxMouseTrackingCaller2; }
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
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E7171E58-276E-499B-9DDF-298D850883C9}
	operator _di_IcxHotTrackElement()
	{
		_di_IcxHotTrackElement intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IcxHotTrackElement*(void) { return (IcxHotTrackElement*)&__IcxHotTrackElement; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlItemViewInfo : public TcxCustomViewInfoItem
{
	typedef TcxCustomViewInfoItem inherited;
	
private:
	Cxlookandfeelpainters::TcxButtonState FState;
	bool __fastcall GetMouseCapture();
	Cxlookandfeelpainters::TcxButtonState __fastcall GetState();
	int __fastcall GetTextHeight();
	int __fastcall GetTextWidth();
	void __fastcall SetMouseCapture(bool AValue);
	void __fastcall SetState(Cxlookandfeelpainters::TcxButtonState AValue);
	
protected:
	virtual void __fastcall DoCancelMode();
	void __fastcall TrackingMouseLeave();
	virtual void __fastcall MouseLeave();
	virtual bool __fastcall PtInCaller(const System::Types::TPoint &P);
	virtual bool __fastcall CanChangeState(Cxlookandfeelpainters::TcxButtonState AValue);
	virtual bool __fastcall CanPressed();
	virtual bool __fastcall CanTracked();
	virtual bool __fastcall CaptureMouseOnPress();
	virtual void __fastcall Click();
	virtual void __fastcall DoCalculate();
	virtual void __fastcall DoDraw(Cxgraphics::TcxCanvas* ACanvas);
	virtual TcxEditingControl* __fastcall GetControl();
	virtual bool __fastcall GetEnabled();
	virtual bool __fastcall GetFocused();
	virtual System::Types::TRect __fastcall GetFocusRect(Cxgraphics::TcxCanvas* ACanvas);
	virtual Vcl::Graphics::TFont* __fastcall GetFont();
	virtual int __fastcall GetHeight() = 0 ;
	virtual System::UnicodeString __fastcall GetText();
	virtual int __fastcall GetWidth() = 0 ;
	virtual bool __fastcall HasPoint(const System::Types::TPoint &APoint);
	virtual bool __fastcall IsCheck();
	virtual void __fastcall StateChanged();
	__property bool Enabled = {read=GetEnabled, nodefault};
	__property Vcl::Graphics::TFont* Font = {read=GetFont};
	__property bool Focused = {read=GetFocused, nodefault};
	__property int Height = {read=GetHeight, nodefault};
	__property bool MouseCapture = {read=GetMouseCapture, write=SetMouseCapture, nodefault};
	__property Cxlookandfeelpainters::TcxButtonState State = {read=GetState, write=SetState, nodefault};
	__property System::UnicodeString Text = {read=GetText};
	__property int TextHeight = {read=GetTextHeight, nodefault};
	__property int TextWidth = {read=GetTextWidth, nodefault};
	__property int Width = {read=GetWidth, nodefault};
	
public:
	__fastcall virtual TcxControlItemViewInfo(System::TObject* AOwner);
	__fastcall virtual ~TcxControlItemViewInfo();
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
private:
	void *__IcxMouseTrackingCaller2;	// Dxcoreclasses::IcxMouseTrackingCaller2 
	void *__IcxMouseTrackingCaller;	// Dxcoreclasses::IcxMouseTrackingCaller 
	void *__IcxMouseCaptureObject;	// Cxcontrols::IcxMouseCaptureObject 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3A5D973B-F016-4F22-80B6-1D35668D7743}
	operator Dxcoreclasses::_di_IcxMouseTrackingCaller2()
	{
		Dxcoreclasses::_di_IcxMouseTrackingCaller2 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxcoreclasses::IcxMouseTrackingCaller2*(void) { return (Dxcoreclasses::IcxMouseTrackingCaller2*)&__IcxMouseTrackingCaller2; }
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
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {ACB73657-6066-4564-9A3D-D4D0273AA82F}
	operator Cxcontrols::_di_IcxMouseCaptureObject()
	{
		Cxcontrols::_di_IcxMouseCaptureObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxcontrols::IcxMouseCaptureObject*(void) { return (Cxcontrols::IcxMouseCaptureObject*)&__IcxMouseCaptureObject; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlPanelViewInfo : public TcxCustomViewInfoItem
{
	typedef TcxCustomViewInfoItem inherited;
	
protected:
	virtual void __fastcall CalculateViewParams();
	virtual void __fastcall DoDraw(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawBackground(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawItems(Cxgraphics::TcxCanvas* ACanvas);
	virtual TcxEditingControl* __fastcall GetControl();
	virtual int __fastcall GetFirstOffset();
	virtual int __fastcall GetHeight();
	virtual bool __fastcall GetHitTest(TcxCustomHitTestController* AHitTest);
	virtual TcxControlItemViewInfo* __fastcall GetItemFromPoint(const System::Types::TPoint &APoint);
	virtual int __fastcall GetItemsOffset();
	virtual int __fastcall GetVertOffset();
	virtual void __fastcall GetViewParams(Cxgraphics::TcxViewParams &AParams);
	virtual int __fastcall GetWidth();
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	__property int FirstOffset = {read=GetFirstOffset, nodefault};
	__property int Height = {read=GetHeight, nodefault};
	__property int ItemsOffset = {read=GetItemsOffset, nodefault};
	__property int VertOffset = {read=GetVertOffset, nodefault};
	__property int Width = {read=GetWidth, nodefault};
public:
	/* TcxCustomViewInfoItem.Create */ inline __fastcall virtual TcxControlPanelViewInfo(System::TObject* AOwner) : TcxCustomViewInfoItem(AOwner) { }
	/* TcxCustomViewInfoItem.Destroy */ inline __fastcall virtual ~TcxControlPanelViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlButtonViewInfo : public TcxControlItemViewInfo
{
	typedef TcxControlItemViewInfo inherited;
	
protected:
	virtual void __fastcall DoDraw(Cxgraphics::TcxCanvas* ACanvas);
	virtual int __fastcall GetHeight();
	virtual int __fastcall GetWidth();
public:
	/* TcxControlItemViewInfo.Create */ inline __fastcall virtual TcxControlButtonViewInfo(System::TObject* AOwner) : TcxControlItemViewInfo(AOwner) { }
	/* TcxControlItemViewInfo.Destroy */ inline __fastcall virtual ~TcxControlButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlCloseButtonViewInfo : public TcxControlItemViewInfo
{
	typedef TcxControlItemViewInfo inherited;
	
protected:
	virtual void __fastcall DoDraw(Cxgraphics::TcxCanvas* ACanvas);
	virtual int __fastcall GetHeight();
	virtual int __fastcall GetWidth();
public:
	/* TcxControlItemViewInfo.Create */ inline __fastcall virtual TcxControlCloseButtonViewInfo(System::TObject* AOwner) : TcxControlItemViewInfo(AOwner) { }
	/* TcxControlItemViewInfo.Destroy */ inline __fastcall virtual ~TcxControlCloseButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlFindPanelButtonViewInfo : public TcxControlButtonViewInfo
{
	typedef TcxControlButtonViewInfo inherited;
	
private:
	TcxControlFindPanelViewInfo* FFindPanelViewInfo;
	TcxControlFindPanel* __fastcall GetFindPanel();
	
protected:
	virtual void __fastcall Click();
	virtual bool __fastcall GetEnabled();
	virtual bool __fastcall GetFocused();
	virtual Vcl::Graphics::TFont* __fastcall GetFont();
	virtual int __fastcall GetHeight();
	virtual Cxfindpanel::TcxFindPanelItemKind __fastcall GetKind();
	virtual System::UnicodeString __fastcall GetText();
	virtual int __fastcall GetWidth();
	__property TcxControlFindPanel* FindPanel = {read=GetFindPanel};
	__property TcxControlFindPanelViewInfo* FindPanelViewInfo = {read=FFindPanelViewInfo};
	__property Cxfindpanel::TcxFindPanelItemKind Kind = {read=GetKind, nodefault};
	
public:
	__fastcall virtual TcxControlFindPanelButtonViewInfo(TcxControlFindPanelViewInfo* AFindPanelViewInfo);
public:
	/* TcxControlItemViewInfo.Destroy */ inline __fastcall virtual ~TcxControlFindPanelButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlFindPanelFindButtonViewInfo : public TcxControlFindPanelButtonViewInfo
{
	typedef TcxControlFindPanelButtonViewInfo inherited;
	
protected:
	virtual Cxfindpanel::TcxFindPanelItemKind __fastcall GetKind();
public:
	/* TcxControlFindPanelButtonViewInfo.Create */ inline __fastcall virtual TcxControlFindPanelFindButtonViewInfo(TcxControlFindPanelViewInfo* AFindPanelViewInfo) : TcxControlFindPanelButtonViewInfo(AFindPanelViewInfo) { }
	
public:
	/* TcxControlItemViewInfo.Destroy */ inline __fastcall virtual ~TcxControlFindPanelFindButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlFindPanelClearButtonViewInfo : public TcxControlFindPanelButtonViewInfo
{
	typedef TcxControlFindPanelButtonViewInfo inherited;
	
protected:
	virtual Cxfindpanel::TcxFindPanelItemKind __fastcall GetKind();
public:
	/* TcxControlFindPanelButtonViewInfo.Create */ inline __fastcall virtual TcxControlFindPanelClearButtonViewInfo(TcxControlFindPanelViewInfo* AFindPanelViewInfo) : TcxControlFindPanelButtonViewInfo(AFindPanelViewInfo) { }
	
public:
	/* TcxControlItemViewInfo.Destroy */ inline __fastcall virtual ~TcxControlFindPanelClearButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlFindPanelNextButtonViewInfo : public TcxControlFindPanelButtonViewInfo
{
	typedef TcxControlFindPanelButtonViewInfo inherited;
	
protected:
	virtual Cxfindpanel::TcxFindPanelItemKind __fastcall GetKind();
public:
	/* TcxControlFindPanelButtonViewInfo.Create */ inline __fastcall virtual TcxControlFindPanelNextButtonViewInfo(TcxControlFindPanelViewInfo* AFindPanelViewInfo) : TcxControlFindPanelButtonViewInfo(AFindPanelViewInfo) { }
	
public:
	/* TcxControlItemViewInfo.Destroy */ inline __fastcall virtual ~TcxControlFindPanelNextButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlFindPanelPreviousButtonViewInfo : public TcxControlFindPanelButtonViewInfo
{
	typedef TcxControlFindPanelButtonViewInfo inherited;
	
protected:
	virtual Cxfindpanel::TcxFindPanelItemKind __fastcall GetKind();
public:
	/* TcxControlFindPanelButtonViewInfo.Create */ inline __fastcall virtual TcxControlFindPanelPreviousButtonViewInfo(TcxControlFindPanelViewInfo* AFindPanelViewInfo) : TcxControlFindPanelButtonViewInfo(AFindPanelViewInfo) { }
	
public:
	/* TcxControlItemViewInfo.Destroy */ inline __fastcall virtual ~TcxControlFindPanelPreviousButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlFindPanelCloseButtonViewInfo : public TcxControlCloseButtonViewInfo
{
	typedef TcxControlCloseButtonViewInfo inherited;
	
private:
	TcxControlFindPanelViewInfo* FFindPanelViewInfo;
	TcxControlFindPanel* __fastcall GetFindPanel();
	
protected:
	virtual void __fastcall Click();
	virtual bool __fastcall GetFocused();
	virtual Cxfindpanel::TcxFindPanelItemKind __fastcall GetKind();
	__property TcxControlFindPanel* FindPanel = {read=GetFindPanel};
	__property TcxControlFindPanelViewInfo* FindPanelViewInfo = {read=FFindPanelViewInfo};
	__property Cxfindpanel::TcxFindPanelItemKind Kind = {read=GetKind, nodefault};
	
public:
	__fastcall virtual TcxControlFindPanelCloseButtonViewInfo(TcxControlFindPanelViewInfo* AFindPanelViewInfo);
public:
	/* TcxControlItemViewInfo.Destroy */ inline __fastcall virtual ~TcxControlFindPanelCloseButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlFindPanelEditViewInfo : public TcxControlItemViewInfo
{
	typedef TcxControlItemViewInfo inherited;
	
private:
	TcxControlFindPanelViewInfo* FFindPanelViewInfo;
	TcxControlFindPanel* __fastcall GetFindPanel();
	
protected:
	virtual void __fastcall DoCalculate();
	virtual void __fastcall DoDraw(Cxgraphics::TcxCanvas* ACanvas);
	virtual bool __fastcall GetFocused();
	virtual int __fastcall GetHeight();
	virtual int __fastcall GetWidth();
	void __fastcall ShowEdit();
	void __fastcall HideEdit();
	__property TcxControlFindPanel* FindPanel = {read=GetFindPanel};
	__property TcxControlFindPanelViewInfo* FindPanelViewInfo = {read=FFindPanelViewInfo};
	
public:
	__fastcall virtual TcxControlFindPanelEditViewInfo(TcxControlFindPanelViewInfo* AFindPanelViewInfo);
public:
	/* TcxControlItemViewInfo.Destroy */ inline __fastcall virtual ~TcxControlFindPanelEditViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlFindPanelViewInfo : public TcxControlPanelViewInfo
{
	typedef TcxControlPanelViewInfo inherited;
	
private:
	TcxControlFindPanelClearButtonViewInfo* FClearButtonViewInfo;
	TcxControlFindPanelCloseButtonViewInfo* FCloseButtonViewInfo;
	TcxControlFindPanelEditViewInfo* FEditViewInfo;
	TcxControlFindPanelFindButtonViewInfo* FFindButtonViewInfo;
	TcxControlFindPanelNextButtonViewInfo* FNextButtonViewInfo;
	TcxControlFindPanelPreviousButtonViewInfo* FPreviousButtonViewInfo;
	int __fastcall GetEditHeight();
	int __fastcall GetEditWidth();
	TcxControlFindPanel* __fastcall GetFindPanel();
	
protected:
	virtual void __fastcall CalculateClearButton();
	virtual void __fastcall CalculateCloseButton();
	virtual void __fastcall CalculateEdit();
	virtual void __fastcall CalculateFindButton();
	virtual void __fastcall CalculateNextButton();
	virtual void __fastcall CalculatePreviousButton();
	virtual void __fastcall CheckClipping(const System::Types::TRect &ADisplayRect, const System::Types::TRect &AAvailableRect)/* overload */;
	virtual void __fastcall DoCalculate();
	virtual void __fastcall DoDraw(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &AClientBounds);
	virtual void __fastcall DrawBackground(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawBorders(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawItems(Cxgraphics::TcxCanvas* ACanvas);
	virtual Cxgeometry::TcxBorders __fastcall GetBorders();
	virtual int __fastcall GetFirstOffset();
	virtual int __fastcall GetHeight();
	virtual int __fastcall GetItemsOffset();
	virtual TcxControlItemViewInfo* __fastcall GetItemFromPoint(const System::Types::TPoint &APoint);
	virtual int __fastcall GetVertOffset();
	virtual void __fastcall GetViewParams(Cxgraphics::TcxViewParams &AParams);
	virtual bool __fastcall IsClearButtonVisible();
	virtual bool __fastcall IsCloseButtonVisible();
	virtual bool __fastcall IsFindButtonVisible();
	virtual bool __fastcall IsNextButtonVisible();
	virtual bool __fastcall IsPreviousButtonVisible();
	__property Cxgeometry::TcxBorders Borders = {read=GetBorders, nodefault};
	__property TcxControlFindPanelClearButtonViewInfo* ClearButtonViewInfo = {read=FClearButtonViewInfo};
	__property TcxControlFindPanelCloseButtonViewInfo* CloseButtonViewInfo = {read=FCloseButtonViewInfo};
	__property int EditHeight = {read=GetEditHeight, nodefault};
	__property TcxControlFindPanelEditViewInfo* EditViewInfo = {read=FEditViewInfo};
	__property int EditWidth = {read=GetEditWidth, nodefault};
	__property TcxControlFindPanelFindButtonViewInfo* FindButtonViewInfo = {read=FFindButtonViewInfo};
	__property TcxControlFindPanel* FindPanel = {read=GetFindPanel};
	__property TcxControlFindPanelNextButtonViewInfo* NextButtonViewInfo = {read=FNextButtonViewInfo};
	__property TcxControlFindPanelPreviousButtonViewInfo* PreviousButtonViewInfo = {read=FPreviousButtonViewInfo};
	
public:
	__fastcall virtual TcxControlFindPanelViewInfo(System::TObject* AOwner);
	__fastcall virtual ~TcxControlFindPanelViewInfo();
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  CheckClipping(const System::Types::TRect &ADisplayRect){ TcxCustomViewInfoItem::CheckClipping(ADisplayRect); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlFilterBoxCustomizeButtonViewInfo : public TcxControlButtonViewInfo
{
	typedef TcxControlButtonViewInfo inherited;
	
private:
	TcxControlFilterBoxViewInfo* FFilterBoxViewInfo;
	TcxControlOptionsFilterBox* __fastcall GetFilterBox();
	
protected:
	virtual void __fastcall Click();
	virtual Vcl::Graphics::TFont* __fastcall GetFont();
	virtual System::UnicodeString __fastcall GetText();
	__property TcxControlOptionsFilterBox* FilterBox = {read=GetFilterBox};
	__property TcxControlFilterBoxViewInfo* FilterBoxViewInfo = {read=FFilterBoxViewInfo};
	
public:
	__fastcall virtual TcxControlFilterBoxCustomizeButtonViewInfo(TcxControlFilterBoxViewInfo* AFilterBoxViewInfo);
public:
	/* TcxControlItemViewInfo.Destroy */ inline __fastcall virtual ~TcxControlFilterBoxCustomizeButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlFilterBoxCloseButtonViewInfo : public TcxControlCloseButtonViewInfo
{
	typedef TcxControlCloseButtonViewInfo inherited;
	
private:
	TcxControlFilterBoxViewInfo* FFilterBoxViewInfo;
	TcxControlOptionsFilterBox* __fastcall GetFilterBox();
	
protected:
	virtual void __fastcall Click();
	__property TcxControlOptionsFilterBox* FilterBox = {read=GetFilterBox};
	__property TcxControlFilterBoxViewInfo* FilterBoxViewInfo = {read=FFilterBoxViewInfo};
	
public:
	__fastcall virtual TcxControlFilterBoxCloseButtonViewInfo(TcxControlFilterBoxViewInfo* AFilterBoxViewInfo);
public:
	/* TcxControlItemViewInfo.Destroy */ inline __fastcall virtual ~TcxControlFilterBoxCloseButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlFilterBoxItemViewInfo : public TcxControlItemViewInfo
{
	typedef TcxControlItemViewInfo inherited;
	
private:
	TcxControlFilterBoxViewInfo* FFilterBoxViewInfo;
	TcxControlOptionsFilterBox* __fastcall GetFilterBox();
	
protected:
	__property TcxControlOptionsFilterBox* FilterBox = {read=GetFilterBox};
	__property TcxControlFilterBoxViewInfo* FilterBoxViewInfo = {read=FFilterBoxViewInfo};
	
public:
	__fastcall virtual TcxControlFilterBoxItemViewInfo(TcxControlFilterBoxViewInfo* AFilterBoxViewInfo);
public:
	/* TcxControlItemViewInfo.Destroy */ inline __fastcall virtual ~TcxControlFilterBoxItemViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlFilterBoxCheckBoxViewInfo : public TcxControlFilterBoxItemViewInfo
{
	typedef TcxControlFilterBoxItemViewInfo inherited;
	
private:
	bool __fastcall GetChecked();
	
protected:
	virtual void __fastcall Click();
	virtual void __fastcall DoDraw(Cxgraphics::TcxCanvas* ACanvas);
	virtual int __fastcall GetHeight();
	virtual int __fastcall GetWidth();
	__property bool Checked = {read=GetChecked, nodefault};
public:
	/* TcxControlFilterBoxItemViewInfo.Create */ inline __fastcall virtual TcxControlFilterBoxCheckBoxViewInfo(TcxControlFilterBoxViewInfo* AFilterBoxViewInfo) : TcxControlFilterBoxItemViewInfo(AFilterBoxViewInfo) { }
	
public:
	/* TcxControlItemViewInfo.Destroy */ inline __fastcall virtual ~TcxControlFilterBoxCheckBoxViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlFilterBoxDropDownButtonViewInfo : public TcxControlFilterBoxItemViewInfo
{
	typedef TcxControlFilterBoxItemViewInfo inherited;
	
private:
	TcxControlFilterBoxMRUItemsPopup* __fastcall GetDropDownWindow();
	
protected:
	virtual bool __fastcall CaptureMouseOnPress();
	virtual bool __fastcall CloseDropDownWindowOnDestruction();
	virtual void __fastcall CloseUp();
	virtual void __fastcall DoDraw(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DropDown();
	virtual System::Types::TRect __fastcall GetDropDownWindowOwnerBounds();
	virtual int __fastcall GetHeight();
	virtual int __fastcall GetWidth();
	virtual bool __fastcall IsCheck();
	virtual bool __fastcall IsDropDownWindowExists();
	virtual bool __fastcall IsDropDownWindowOwner();
	virtual void __fastcall InitDropDownWindow(Dxuielementpopupwindow::TdxUIElementPopupWindow* APopup);
	virtual void __fastcall StateChanged();
	__property TcxControlFilterBoxMRUItemsPopup* DropDownWindow = {read=GetDropDownWindow};
	
public:
	__fastcall virtual ~TcxControlFilterBoxDropDownButtonViewInfo();
public:
	/* TcxControlFilterBoxItemViewInfo.Create */ inline __fastcall virtual TcxControlFilterBoxDropDownButtonViewInfo(TcxControlFilterBoxViewInfo* AFilterBoxViewInfo) : TcxControlFilterBoxItemViewInfo(AFilterBoxViewInfo) { }
	
private:
	void *__IdxUIElementPopupWindowOwner;	// Dxuielementpopupwindow::IdxUIElementPopupWindowOwner 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {ACF62D23-6871-4735-A4CE-3B0888DB8FC3}
	operator Dxuielementpopupwindow::_di_IdxUIElementPopupWindowOwner()
	{
		Dxuielementpopupwindow::_di_IdxUIElementPopupWindowOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxuielementpopupwindow::IdxUIElementPopupWindowOwner*(void) { return (Dxuielementpopupwindow::IdxUIElementPopupWindowOwner*)&__IdxUIElementPopupWindowOwner; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlFilterBoxTextViewInfo : public TcxControlFilterBoxItemViewInfo
{
	typedef TcxControlFilterBoxItemViewInfo inherited;
	
private:
	unsigned __fastcall GetTextFlags();
	
protected:
	virtual bool __fastcall CanTracked();
	virtual bool __fastcall CanPressed();
	virtual void __fastcall DoDraw(Cxgraphics::TcxCanvas* ACanvas);
	virtual Vcl::Graphics::TFont* __fastcall GetFont();
	virtual int __fastcall GetHeight();
	virtual System::UnicodeString __fastcall GetText();
	virtual int __fastcall GetWidth();
	virtual void __fastcall StateChanged();
	__property unsigned TextFlags = {read=GetTextFlags, nodefault};
public:
	/* TcxControlFilterBoxItemViewInfo.Create */ inline __fastcall virtual TcxControlFilterBoxTextViewInfo(TcxControlFilterBoxViewInfo* AFilterBoxViewInfo) : TcxControlFilterBoxItemViewInfo(AFilterBoxViewInfo) { }
	
public:
	/* TcxControlItemViewInfo.Destroy */ inline __fastcall virtual ~TcxControlFilterBoxTextViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxControlFilterBoxViewInfo : public TcxControlPanelViewInfo
{
	typedef TcxControlPanelViewInfo inherited;
	
private:
	TcxControlFilterBoxCheckBoxViewInfo* FCheckBoxViewInfo;
	TcxControlFilterBoxCloseButtonViewInfo* FCloseButtonViewInfo;
	TcxControlFilterBoxCustomizeButtonViewInfo* FCustomizeButtonViewInfo;
	TcxControlFilterBoxDropDownButtonViewInfo* FDropDownButtonViewInfo;
	TcxControlFilterBoxTextViewInfo* FTextViewInfo;
	Dxfilterbox::TdxFilterBoxTokenCriteriaViewInfo* FTokenCriteriaViewInfo;
	Cxcustomdata::TcxDataFilterCriteria* __fastcall GetFilter();
	TcxControlOptionsFilterBox* __fastcall GetFilterBox();
	Cxcustomdata::TcxDataFilterCriteria* __fastcall GetMainFilter();
	Dxfilterbox::TdxFilterBoxTokenCriteria* __fastcall GetTokenCriteria();
	Cxcontrols::TcxControl* __fastcall GetTokenCriteriaControl();
	Dxfilterbox::_di_IdxFilterBoxTokenCriteriaOptions __fastcall GetTokenCriteriaOptions();
	void __fastcall GetTokenCriteriaParams(Cxgraphics::TcxViewParams &AParams);
	
protected:
	virtual void __fastcall AdjustTextBoundsByDropDownButton();
	virtual void __fastcall CalculateCheckBox();
	virtual void __fastcall CalculateCloseButton();
	virtual void __fastcall CalculateCustomizeButton();
	virtual void __fastcall CalculateDropDownButton(/* out */ bool &ANeedAdjustTextBounds);
	virtual void __fastcall CalculateText();
	virtual void __fastcall CalculateTokenCriteriaViewInfo();
	virtual Dxfilterbox::TdxFilterBoxTokenCriteriaViewInfo* __fastcall CreateTokenCriteriaViewInfo();
	virtual void __fastcall DoCalculate();
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &AClientBounds);
	virtual void __fastcall DrawBackground(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawItems(Cxgraphics::TcxCanvas* ACanvas);
	virtual int __fastcall GetHeight();
	virtual TcxControlItemViewInfo* __fastcall GetItemFromPoint(const System::Types::TPoint &APoint);
	virtual int __fastcall GetTextAreaLeft();
	virtual int __fastcall GetTextAreaRight();
	virtual void __fastcall GetViewParams(Cxgraphics::TcxViewParams &AParams);
	virtual bool __fastcall IsCheckBoxVisible();
	virtual bool __fastcall IsCloseButtonVisible();
	virtual bool __fastcall IsCustomizeButtonVisible();
	virtual bool __fastcall IsDropDownButtonVisible();
	virtual bool __fastcall IsMRUItemsListAvailable();
	virtual bool __fastcall IsTextVisible();
	virtual bool __fastcall IsTokenCriteriaVisible();
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	__property TcxControlFilterBoxCheckBoxViewInfo* CheckBoxViewInfo = {read=FCheckBoxViewInfo};
	__property TcxControlFilterBoxCloseButtonViewInfo* CloseButtonViewInfo = {read=FCloseButtonViewInfo};
	__property TcxControlFilterBoxCustomizeButtonViewInfo* CustomizeButtonViewInfo = {read=FCustomizeButtonViewInfo};
	__property TcxControlFilterBoxDropDownButtonViewInfo* DropDownButtonViewInfo = {read=FDropDownButtonViewInfo};
	__property Cxcustomdata::TcxDataFilterCriteria* Filter = {read=GetFilter};
	__property TcxControlOptionsFilterBox* FilterBox = {read=GetFilterBox};
	__property Cxcustomdata::TcxDataFilterCriteria* MainFilter = {read=GetMainFilter};
	__property TcxControlFilterBoxTextViewInfo* TextViewInfo = {read=FTextViewInfo};
	__property Dxfilterbox::TdxFilterBoxTokenCriteriaViewInfo* TokenCriteriaViewInfo = {read=FTokenCriteriaViewInfo};
	
public:
	__fastcall virtual TcxControlFilterBoxViewInfo(System::TObject* AOwner);
	__fastcall virtual ~TcxControlFilterBoxViewInfo();
	virtual void __fastcall RefreshTokenCriteriaViewInfo();
private:
	void *__IdxFilterBoxTokenCriteriaViewInfoOwner;	// Dxfilterbox::IdxFilterBoxTokenCriteriaViewInfoOwner 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {DD64CF3F-2CBF-4EFA-8C12-5507EE5B29C2}
	operator Dxfilterbox::_di_IdxFilterBoxTokenCriteriaViewInfoOwner()
	{
		Dxfilterbox::_di_IdxFilterBoxTokenCriteriaViewInfoOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxfilterbox::IdxFilterBoxTokenCriteriaViewInfoOwner*(void) { return (Dxfilterbox::IdxFilterBoxTokenCriteriaViewInfoOwner*)&__IdxFilterBoxTokenCriteriaViewInfoOwner; }
	#endif
	
};

#pragma pack(pop)

typedef void __fastcall (__closure *TcxCustomDrawViewInfoItemEvent)(System::TObject* Sender, Cxgraphics::TcxCanvas* Canvas, TcxCustomViewInfoItem* AViewInfo, bool &ADone);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomControlPainter : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Cxgraphics::TcxCanvas* FCanvas;
	TcxEditingControl* FControl;
	Cxgraphics::TcxViewParams FSaveViewParams;
	Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetPainter();
	Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	TcxCustomControlViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall AfterCustomDraw(TcxCustomViewInfoItem* AViewInfo)/* overload */;
	virtual void __fastcall BeforeCustomDraw(TcxCustomViewInfoItem* AViewInfo)/* overload */;
	bool __fastcall DoCustomDraw(TcxCustomViewInfoItem* AViewInfoItem, TcxCustomDrawViewInfoItemEvent AEvent);
	virtual void __fastcall DoPaintEditCell(TcxEditCellViewInfo* ACellViewInfo, bool AIsExcludeRect = true);
	virtual void __fastcall DoPaint();
	virtual void __fastcall DrawFilterBox();
	virtual void __fastcall DrawFindPanel();
	
public:
	__fastcall virtual TcxCustomControlPainter(TcxEditingControl* AOwner);
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
	__property Cxgraphics::TcxCanvas* Canvas = {read=FCanvas, write=FCanvas};
	__property TcxEditingControl* Control = {read=FControl};
	__property Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* Painter = {read=GetPainter};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=GetScaleFactor};
	__property TcxCustomControlViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomControlPainter() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomControlPainterClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxExtEditingControlPainter : public TcxCustomControlPainter
{
	typedef TcxCustomControlPainter inherited;
	
private:
	HIDESBASE TcxExtEditingControlViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DrawNavigator();
	__property TcxExtEditingControlViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxCustomControlPainter.Create */ inline __fastcall virtual TcxExtEditingControlPainter(TcxEditingControl* AOwner) : TcxCustomControlPainter(AOwner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxExtEditingControlPainter() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxCustomControlStylesClass;

class PASCALIMPLEMENTATION TcxCustomControlStyles : public Cxstyles::TcxStyles
{
	typedef Cxstyles::TcxStyles inherited;
	
private:
	TcxOnGetContentStyleEvent FOnGetContentStyle;
	TcxEditingControl* __fastcall GetControl();
	Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetPainter();
	
protected:
	virtual void __fastcall Changed(int AIndex);
	virtual void __fastcall GetDefaultViewParams(int Index, System::TObject* AData, /* out */ Cxgraphics::TcxViewParams &AParams);
	virtual System::Uitypes::TColor __fastcall GetFilterBoxDefaultColor();
	virtual System::Uitypes::TColor __fastcall GetFilterBoxDefaultTextColor();
	virtual System::Uitypes::TColor __fastcall GetFindPanelDefaultColor();
	virtual System::Uitypes::TColor __fastcall GetFindPanelDefaultTextColor();
	__property Cxstyles::TcxStyle* Navigator = {read=GetValue, write=SetValue, index=4};
	__property Cxstyles::TcxStyle* NavigatorInfoPanel = {read=GetValue, write=SetValue, index=5};
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	Cxgraphics::TcxViewParams __fastcall GetBackgroundParams();
	Cxgraphics::TcxViewParams __fastcall GetFilterBoxParams();
	Cxgraphics::TcxViewParams __fastcall GetFindPanelParams();
	Cxgraphics::TcxViewParams __fastcall GetSearchResultHighlight();
	Cxgraphics::TcxViewParams __fastcall GetSelectionParams();
	__property TcxEditingControl* Control = {read=GetControl};
	__property Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* LookAndFeelPainter = {read=GetPainter};
	
__published:
	__property Cxstyles::TcxStyle* Background = {read=GetValue, write=SetValue, index=1};
	__property Cxstyles::TcxStyle* Content = {read=GetValue, write=SetValue, index=0};
	__property Cxstyles::TcxStyle* FilterBox = {read=GetValue, write=SetValue, index=8};
	__property Cxstyles::TcxStyle* FindPanel = {read=GetValue, write=SetValue, index=6};
	__property Cxstyles::TcxStyle* Inactive = {read=GetValue, write=SetValue, index=2};
	__property Cxstyles::TcxStyle* SearchResultHighlight = {read=GetValue, write=SetValue, index=7};
	__property Cxstyles::TcxStyle* Selection = {read=GetValue, write=SetValue, index=3};
	__property TcxOnGetContentStyleEvent OnGetContentStyle = {read=FOnGetContentStyle, write=FOnGetContentStyle};
	__property StyleSheet;
public:
	/* TcxStyles.Destroy */ inline __fastcall virtual ~TcxCustomControlStyles() { }
	
public:
	/* TcxCustomStyles.Create */ inline __fastcall virtual TcxCustomControlStyles(System::Classes::TPersistent* AOwner) : Cxstyles::TcxStyles(AOwner) { }
	
};


__interface  INTERFACE_UUID("{6A041541-53E2-413B-8377-0D249356B5DF}") IcxEditingControlOptions  : public System::IInterface 
{
	virtual TcxControlOptionsBehavior* __fastcall GetOptionsBehavior() = 0 ;
	virtual TcxControlOptionsData* __fastcall GetOptionsData() = 0 ;
	virtual TcxControlOptionsDateTimeHandling* __fastcall GetOptionsDateTimeHandling() = 0 ;
	virtual TcxControlOptionsFilterBox* __fastcall GetOptionsFilterBox() = 0 ;
	virtual TcxControlOptionsFiltering* __fastcall GetOptionsFiltering() = 0 ;
	virtual TcxControlOptionsFindPanel* __fastcall GetOptionsFindPanel() = 0 ;
	virtual TcxControlOptionsView* __fastcall GetOptionsView() = 0 ;
	__property TcxControlOptionsBehavior* OptionsBehavior = {read=GetOptionsBehavior};
	__property TcxControlOptionsData* OptionsData = {read=GetOptionsData};
	__property TcxControlOptionsDateTimeHandling* OptionsDateTimeHandling = {read=GetOptionsDateTimeHandling};
	__property TcxControlOptionsFilterBox* OptionsFilterBox = {read=GetOptionsFilterBox};
	__property TcxControlOptionsFiltering* OptionsFiltering = {read=GetOptionsFiltering};
	__property TcxControlOptionsFindPanel* OptionsFindPanel = {read=GetOptionsFindPanel};
	__property TcxControlOptionsView* OptionsView = {read=GetOptionsView};
};

typedef void __fastcall (__closure *TcxecEditingEvent)(System::TObject* Sender, System::TObject* AItem, bool &Allow);

typedef void __fastcall (__closure *TcxecInitEditEvent)(System::TObject* Sender, System::TObject* AItem, Cxedit::TcxCustomEdit* AEdit);

typedef void __fastcall (__closure *TcxecInitEditValueEvent)(System::TObject* Sender, System::TObject* AItem, Cxedit::TcxCustomEdit* AEdit, System::Variant &AValue);

typedef void __fastcall (__closure *TcxecItemEvent)(System::TObject* Sender, TcxCustomInplaceEditContainer* AItem);

typedef void __fastcall (__closure *TcxecFilterCustomizationEvent)(System::TObject* Sender, bool &ADone);

typedef void __fastcall (__closure *TcxecFilterDialogShowEvent)(System::TObject* Sender, System::TObject* AItem, bool &ADone);

typedef void __fastcall (__closure *TcxecFindPanelVisibilityChangedEvent)(System::TObject* Sender, const bool AVisible);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxEditingControlScrollbarAnnotations : public Dxscrollbarannotations::TdxScrollbarAnnotations
{
	typedef Dxscrollbarannotations::TdxScrollbarAnnotations inherited;
	
private:
	TcxExtEditingControl* FOwner;
	
protected:
	virtual int __fastcall GetCurrentRecordIndex();
	virtual int __fastcall GetDataPixelScrollSize();
	virtual Dxscrollbarannotations::TdxScrollbarAnnotationOptions* __fastcall GetOptions();
	virtual void __fastcall Populate(Dxscrollbarannotations::TdxScrollbarAnnotationKind AKind, Dxscrollbarannotations::TdxScrollbarAnnotationRowIndexList* AList);
	virtual void __fastcall SetCurrentRecordIndex(int AIndex);
	
public:
	__fastcall TcxEditingControlScrollbarAnnotations(TcxExtEditingControl* AOwner);
	virtual void __fastcall GetHint(Dxscrollbarannotations::TdxScrollbarAnnotationRowIndexLists* AAnnotationRowIndexLists, System::UnicodeString &AHint);
	virtual int __fastcall GetRecordPixelScrollPosition(int ARecordIndex);
	virtual int __fastcall GetScrollableRecordCount();
	virtual bool __fastcall IsRecordIndexBasedRendering();
public:
	/* TdxScrollbarAnnotations.Destroy */ inline __fastcall virtual ~TcxEditingControlScrollbarAnnotations() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxEditingControl : public Cxcontrols::TcxControl
{
	typedef Cxcontrols::TcxControl inherited;
	
private:
	int FChangesCount;
	System::Classes::TList* FContainerList;
	TcxCustomDesignSelectionHelper* FDesignSelectionHelper;
	TcxDragImageHelper* FDragHelper;
	System::Types::TPoint FDragPos;
	Cxedit::TcxCustomEditStyle* FEditStyle;
	Dxfilterbox::TdxFilterBoxTokenCriteria* FFilterBoxTokenCriteria;
	System::Classes::TList* FLinkedFilterControls;
	TcxEditingControlScrollbarAnnotations* FScrollbarAnnotationHelper;
	TcxCustomControlStyles* FStyles;
	bool FSubClassesCreated;
	TcxCustomControlViewInfo* FViewInfo;
	TcxCustomDrawViewInfoItemEvent FOnCustomDrawCell;
	TcxecItemEvent FOnEditChanged;
	TcxecItemEvent FOnEdited;
	TcxecEditingEvent FOnEditing;
	TcxecItemEvent FOnEditValueChanged;
	System::Classes::TNotifyEvent FOnFilterControlDialogShow;
	TcxecFilterCustomizationEvent FOnFilterCustomization;
	TcxecFilterDialogShowEvent FOnFilterDialogShow;
	TcxecFindPanelVisibilityChangedEvent FOnFindPanelVisibilityChanged;
	Dxscrollbarannotations::TdxGetScrollbarAnnotationHint FOnGetScrollbarAnnotationHint;
	TcxecInitEditEvent FOnInitEdit;
	TcxecInitEditValueEvent FOnInitEditValue;
	Dxdateranges::TdxInitDateRangesEvent FOnInitFilteringDateRanges;
	Dxscrollbarannotations::TdxPopulateCustomScrollbarAnnotationRowIndexList FOnPopulateCustomScrollbarAnnotationRowIndexList;
	bool __fastcall GetBufferedPaint();
	TcxCustomInplaceEditContainer* __fastcall GetContainer(int AIndex);
	int __fastcall GetContainerCount();
	Dxfilterbox::TdxFilterBoxTokenCriteria* __fastcall GetFilterBoxTokenCriteria();
	TcxCustomControlPainter* __fastcall GetPainter();
	void __fastcall SetBufferedPaint(bool Value);
	void __fastcall SetEditStyle(Cxedit::TcxCustomEditStyle* Value);
	void __fastcall SetStyles(TcxCustomControlStyles* Value);
	void __fastcall ApplyFilterHandler(System::TObject* Sender);
	HIDESBASE void __fastcall DoMouseLeave();
	HIDESBASE MESSAGE void __fastcall WMCancelMode(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMSetCursor(Winapi::Messages::TWMSetCursor &Message);
	
protected:
	TcxCustomControlController* FController;
	Cxcustomdata::TcxCustomDataController* FDataController;
	int FLockUpdate;
	virtual void __fastcall AfterLayoutChanged();
	virtual void __fastcall ApplyFilter();
	DYNAMIC void __fastcall BeginAutoDrag();
	virtual void __fastcall BeforeUpdate();
	virtual bool __fastcall CanFocusOnClick(int X, int Y)/* overload */;
	virtual bool __fastcall CanUpdateScrollBars();
	virtual void __fastcall CheckCreateDesignSelectionHelper();
	virtual Cxcustomdata::TcxDataCustomExpressionProvider* __fastcall CreateExpressionProvider() = 0 ;
	virtual Dxfilterbox::TdxFilterBoxTokenCriteria* __fastcall CreateFilterBoxTokenCriteria();
	virtual void __fastcall CreateSubClasses();
	virtual void __fastcall ControlUpdateData(Cxcustomdata::TcxUpdateControlInfo* AInfo);
	virtual void __fastcall DataChanged();
	virtual void __fastcall DataLayoutChanged();
	void __fastcall DestroyDesignSelectionHelper();
	virtual void __fastcall DestroyFilterBoxTokenCriteria();
	virtual void __fastcall DestroySubClasses();
	virtual void __fastcall DoBeginUpdate();
	virtual void __fastcall DoEndUpdate();
	virtual void __fastcall DoEditChanged(TcxCustomInplaceEditContainer* AItem);
	virtual void __fastcall DoEdited(TcxCustomInplaceEditContainer* AItem);
	virtual bool __fastcall DoEditing(TcxCustomInplaceEditContainer* AItem);
	virtual void __fastcall DoEditValueChanged(TcxCustomInplaceEditContainer* AItem);
	virtual bool __fastcall DoFilterCustomization();
	virtual bool __fastcall DoFilterDialogShow(TcxCustomInplaceEditContainer* AItem);
	virtual void __fastcall DoFindPanelVisibilityChanged(bool AVisible);
	virtual void __fastcall DoGetCellHint(System::TObject* ACell, System::UnicodeString &AText, bool &ANeedShow);
	virtual void __fastcall DoInitEdit(TcxCustomInplaceEditContainer* AItem, Cxedit::TcxCustomEdit* AEdit);
	virtual void __fastcall DoInitEditValue(TcxCustomInplaceEditContainer* AItem, Cxedit::TcxCustomEdit* AEdit, System::Variant &AValue);
	virtual void __fastcall DoInitFilteringDateRanges(TcxCustomInplaceEditContainer* AItem);
	virtual void __fastcall DoInplaceEditContainerItemAdded(TcxCustomInplaceEditContainer* AItem);
	virtual void __fastcall DoInplaceEditContainerItemRemoved(TcxCustomInplaceEditContainer* AItem);
	virtual void __fastcall DoLayoutChanged();
	virtual void __fastcall FilterChanged();
	virtual int __fastcall GetCurrentScrollbarAnnotationRecordIndex();
	virtual int __fastcall GetDataPixelScrollSize();
	virtual int __fastcall GetRecordPixelScrollPosition(int ARecordIndex);
	virtual int __fastcall GetScrollableRecordCount();
	virtual void __fastcall GetScrollbarAnnotationHint(Dxscrollbarannotations::TdxScrollbarAnnotationRowIndexLists* AAnnotationRowIndexLists, System::UnicodeString &AHint);
	bool __fastcall HasInitFilteringDateRangesHandler();
	virtual bool __fastcall IsRecordIndexBasedScrollbarAnnotationRendering();
	virtual bool __fastcall NeedCallChangedOnItemRemoved(TcxCustomInplaceEditContainer* AItem);
	bool __fastcall NeedHighlightFindText();
	virtual void __fastcall PopulateScrollbarAnnotations(Dxscrollbarannotations::TdxScrollbarAnnotationKind AKind, Dxscrollbarannotations::TdxScrollbarAnnotationRowIndexList* AList);
	virtual void __fastcall RunFilterCustomizeDialog(TcxCustomInplaceEditContainer* AItem = (TcxCustomInplaceEditContainer*)(0x0));
	virtual void __fastcall SetCurrentScrollbarAnnotationRecordIndex(int AIndex);
	virtual void __fastcall UpdateFilterBoxTokenCriteria();
	virtual TcxCustomControlControllerClass __fastcall GetControllerClass();
	virtual TcxCustomControlStylesClass __fastcall GetControlStylesClass();
	virtual Cxcustomdata::TcxCustomDataControllerClass __fastcall GetDataControllerClass();
	virtual TcxDragImageHelperClass __fastcall GetDragImageHelperClass();
	virtual TcxCustomEditStyleClass __fastcall GetEditStyleClass();
	virtual TcxEditingControllerClass __fastcall GetEditingControllerClass();
	virtual TcxControlFilterValueListClass __fastcall GetFilterValueListClass();
	virtual TcxHitTestControllerClass __fastcall GetHitTestControllerClass();
	virtual TcxHotTrackControllerClass __fastcall GetHotTrackControllerClass();
	virtual TcxCustomControlViewInfoClass __fastcall GetViewInfoClass();
	virtual _di_IcxEditingControlOptions __fastcall GetOptions();
	virtual TcxCustomControlPainterClass __fastcall GetPainterClass();
	virtual int __fastcall GetHintHidePause();
	virtual bool __fastcall IsDoubleBufferedNeeded();
	virtual bool __fastcall IsLocked();
	virtual void __fastcall RecreateViewInfo();
	virtual void __fastcall SelectionChanged(Cxcustomdata::TcxSelectionChangedInfo* AInfo);
	void __fastcall UpdateIndexes();
	void __fastcall UpdateViewStyles();
	virtual void __fastcall UpdateData();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	virtual void __fastcall DestroyWnd();
	virtual void __fastcall AlignControls(Vcl::Controls::TControl* AControl, System::Types::TRect &Rect);
	DYNAMIC void __fastcall DoExit();
	DYNAMIC void __fastcall DblClick();
	DYNAMIC void __fastcall FocusChanged();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseEnter(Vcl::Controls::TControl* AControl);
	DYNAMIC void __fastcall MouseLeave(Vcl::Controls::TControl* AControl);
	virtual void __fastcall DoPaint();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall AfterMouseDown(System::Uitypes::TMouseButton AButton, int X, int Y);
	virtual void __fastcall BeginGestureScroll(const System::Types::TPoint &APos);
	DYNAMIC void __fastcall BoundsChanged();
	DYNAMIC bool __fastcall CanDrag(int X, int Y);
	virtual void __fastcall EndGestureScroll();
	DYNAMIC void __fastcall DoCancelMode();
	DYNAMIC void __fastcall FontChanged();
	virtual System::Uitypes::TCursor __fastcall GetCurrentCursor(int X, int Y);
	DYNAMIC bool __fastcall GetDesignHitTest(int X, int Y, System::Classes::TShiftState Shift);
	virtual bool __fastcall GetIsFocused();
	virtual Cxcontrols::TcxMouseWheelScrollingKind __fastcall GetMouseWheelScrollingKind();
	virtual Dxscrollbarannotations::TdxScrollbarAnnotations* __fastcall GetScrollbarAnnotationHelper();
	virtual void __fastcall InitControl();
	virtual bool __fastcall IsPanArea(const System::Types::TPoint &APoint);
	virtual bool __fastcall IsPixelScrollBar(Vcl::Forms::TScrollBarKind AKind);
	virtual void __fastcall LookAndFeelChanged(Cxlookandfeels::TcxLookAndFeel* Sender, Cxlookandfeels::TcxLookAndFeelValues AChangedValues);
	DYNAMIC bool __fastcall MayFocus();
	DYNAMIC void __fastcall DoEndDrag(System::TObject* Target, int X, int Y);
	DYNAMIC void __fastcall DoStartDrag(Vcl::Controls::TDragObject* &DragObject);
	DYNAMIC void __fastcall DragOver(System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	virtual System::Types::TRect __fastcall DragDropImageDisplayRect();
	virtual void __fastcall DrawDragDropImage(Vcl::Graphics::TBitmap* ADragBitmap, Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall FinishDragImages();
	virtual bool __fastcall HasDragDropImages();
	virtual Cxcontrols::TcxControlCustomScrollBarsClass __fastcall GetMainScrollBarsClass();
	virtual System::Uitypes::TColor __fastcall GetScrollContentForegroundColor();
	virtual void __fastcall InitScrollBarsParameters();
	virtual void __fastcall Scroll(Vcl::Forms::TScrollBarKind AScrollBarKind, System::Uitypes::TScrollCode AScrollCode, int &AScrollPos);
	DYNAMIC void __fastcall DragAndDrop(const System::Types::TPoint &P, bool &Accepted);
	DYNAMIC void __fastcall EndDragAndDrop(bool Accepted);
	virtual Cxcontrols::TcxDragAndDropObjectClass __fastcall GetDragAndDropObjectClass();
	DYNAMIC bool __fastcall StartDragAndDrop(const System::Types::TPoint &P);
	System::UnicodeString __fastcall GetFilterCaption(int Index);
	TcxCustomInplaceEditContainer* __fastcall GetFilterContainer(int AIndex);
	int __fastcall GetFilterCount();
	Cxfilter::TcxFilterCriteria* __fastcall GetFilterCriteria();
	System::UnicodeString __fastcall GetFilterFieldName(int Index);
	System::TObject* __fastcall GetFilterItemLink(int Index);
	int __fastcall GetFilterItemLinkID(int Index);
	System::UnicodeString __fastcall GetFilterItemLinkName(int Index);
	Cxedit::TcxCustomEditProperties* __fastcall GetFilterProperties(int Index);
	Cxdatastorage::TcxValueTypeClass __fastcall GetFilterValueType(int Index);
	bool __fastcall AllowFilterExpressionEditing();
	Cxcustomdata::TcxCustomExpressionProvider* __fastcall GetExpressionProvider();
	void __fastcall RegisterFilterControl(Cxfiltercontrol::TcxCustomFilterControl* AControl);
	void __fastcall UnregisterFilterControl(Cxfiltercontrol::TcxCustomFilterControl* AControl);
	void __fastcall UpdateLinkedFilterControls();
	bool __fastcall UseFilterTokens();
	__property int ContainerCount = {read=GetContainerCount, nodefault};
	__property System::Classes::TList* ContainerList = {read=FContainerList};
	__property TcxCustomInplaceEditContainer* Containers[int AIndex] = {read=GetContainer};
	__property TcxCustomControlController* Controller = {read=FController};
	__property int ChangesCount = {read=FChangesCount, nodefault};
	__property System::Types::TPoint DragPos = {read=FDragPos, write=FDragPos};
	__property Cxcustomdata::TcxCustomDataController* DataController = {read=FDataController};
	__property TcxCustomDesignSelectionHelper* DesignSelectionHelper = {read=FDesignSelectionHelper};
	__property TcxDragImageHelper* DragHelper = {read=FDragHelper};
	__property Cxedit::TcxCustomEditStyle* EditStyle = {read=FEditStyle, write=SetEditStyle};
	__property Dxfilterbox::TdxFilterBoxTokenCriteria* FilterBoxTokenCriteria = {read=GetFilterBoxTokenCriteria};
	__property _di_IcxEditingControlOptions Options = {read=GetOptions};
	__property TcxCustomControlPainter* Painter = {read=GetPainter};
	__property TcxEditingControlScrollbarAnnotations* ScrollbarAnnotationHelper = {read=FScrollbarAnnotationHelper};
	__property TcxCustomControlStyles* Styles = {read=FStyles, write=SetStyles};
	__property bool SubClassesCreated = {read=FSubClassesCreated, nodefault};
	__property TcxCustomControlViewInfo* ViewInfo = {read=FViewInfo, write=FViewInfo};
	__property TcxCustomDrawViewInfoItemEvent OnCustomDrawCell = {read=FOnCustomDrawCell, write=FOnCustomDrawCell};
	__property TcxecItemEvent OnEditChanged = {read=FOnEditChanged, write=FOnEditChanged};
	__property TcxecItemEvent OnEdited = {read=FOnEdited, write=FOnEdited};
	__property TcxecEditingEvent OnEditing = {read=FOnEditing, write=FOnEditing};
	__property TcxecItemEvent OnEditValueChanged = {read=FOnEditValueChanged, write=FOnEditValueChanged};
	__property System::Classes::TNotifyEvent OnFilterControlDialogShow = {read=FOnFilterControlDialogShow, write=FOnFilterControlDialogShow};
	__property TcxecFilterCustomizationEvent OnFilterCustomization = {read=FOnFilterCustomization, write=FOnFilterCustomization};
	__property TcxecFilterDialogShowEvent OnFilterDialogShow = {read=FOnFilterDialogShow, write=FOnFilterDialogShow};
	__property TcxecFindPanelVisibilityChangedEvent OnFindPanelVisibilityChanged = {read=FOnFindPanelVisibilityChanged, write=FOnFindPanelVisibilityChanged};
	__property Dxscrollbarannotations::TdxGetScrollbarAnnotationHint OnGetScrollbarAnnotationHint = {read=FOnGetScrollbarAnnotationHint, write=FOnGetScrollbarAnnotationHint};
	__property TcxecInitEditEvent OnInitEdit = {read=FOnInitEdit, write=FOnInitEdit};
	__property TcxecInitEditValueEvent OnInitEditValue = {read=FOnInitEditValue, write=FOnInitEditValue};
	__property Dxdateranges::TdxInitDateRangesEvent OnInitFilteringDateRanges = {read=FOnInitFilteringDateRanges, write=FOnInitFilteringDateRanges};
	__property Dxscrollbarannotations::TdxPopulateCustomScrollbarAnnotationRowIndexList OnPopulateCustomScrollbarAnnotationRowIndexList = {read=FOnPopulateCustomScrollbarAnnotationRowIndexList, write=FOnPopulateCustomScrollbarAnnotationRowIndexList};
	
public:
	__fastcall virtual TcxEditingControl(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TcxEditingControl();
	void __fastcall BeginUpdate();
	DYNAMIC void __fastcall BeginDragAndDrop();
	void __fastcall CancelUpdate();
	void __fastcall EndUpdate();
	DYNAMIC bool __fastcall ExecuteAction(System::Classes::TBasicAction* Action);
	DYNAMIC void __fastcall DragDrop(System::TObject* Source, int X, int Y);
	void __fastcall LayoutChanged();
	virtual bool __fastcall UpdateAction(System::Classes::TBasicAction* Action);
	__property bool BufferedPaint = {read=GetBufferedPaint, write=SetBufferedPaint, stored=false, nodefault};
	__property int LockUpdate = {read=FLockUpdate, nodefault};
	__property DragCursor = {default=0};
	__property TabStop = {default=1};
	
__published:
	__property BorderStyle = {default=1};
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxEditingControl(HWND ParentWindow) : Cxcontrols::TcxControl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	inline bool __fastcall  CanFocusOnClick(){ return Cxcontrols::TcxControl::CanFocusOnClick(); }
	
private:
	void *__IcxMouseTrackingCaller;	// Dxcoreclasses::IcxMouseTrackingCaller 
	
public:
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


class PASCALIMPLEMENTATION TcxExtEditingControl : public TcxEditingControl
{
	typedef TcxEditingControl inherited;
	
private:
	TcxControlOptionsDateTimeHandling* FDateTimeHandling;
	TcxControlOptionsFilterBox* FFilterBox;
	TcxControlOptionsFiltering* FFiltering;
	TcxControlOptionsFindPanel* FFindPanel;
	TcxControlNavigator* FNavigator;
	System::Classes::TNotifyEvent FNavigatorEvents;
	TcxControlOptionsBehavior* FOptionsBehavior;
	TcxControlOptionsData* FOptionsData;
	TcxControlOptionsView* FOptionsView;
	TcxControlScrollbarAnnotationOptions* FScrollbarAnnotations;
	TcxControlOptionsBehavior* __fastcall GetOptionsBehavior();
	TcxControlOptionsData* __fastcall GetOptionsData();
	TcxControlOptionsDateTimeHandling* __fastcall GetOptionsDateTimeHandling();
	TcxControlOptionsFilterBox* __fastcall GetOptionsFilterBox();
	TcxControlOptionsFiltering* __fastcall GetOptionsFiltering();
	TcxControlOptionsFindPanel* __fastcall GetOptionsFindPanel();
	TcxControlOptionsView* __fastcall GetOptionsView();
	TcxExtEditingControlViewInfo* __fastcall GetViewInfo();
	void __fastcall SetDateTimeHandling(TcxControlOptionsDateTimeHandling* AValue);
	void __fastcall SetFilterBox(TcxControlOptionsFilterBox* Value);
	void __fastcall SetFiltering(TcxControlOptionsFiltering* Value);
	void __fastcall SetFindPanel(TcxControlOptionsFindPanel* AValue);
	void __fastcall SetNavigator(TcxControlNavigator* Value);
	void __fastcall SetOptionsBehavior(TcxControlOptionsBehavior* Value);
	void __fastcall SetOptionsData(TcxControlOptionsData* Value);
	void __fastcall SetOptionsView(TcxControlOptionsView* Value);
	void __fastcall SetScrollbarAnnotations(TcxControlScrollbarAnnotationOptions* Value);
	
protected:
	virtual bool __fastcall AllowTouchScrollUIMode();
	virtual void __fastcall ChangeScaleEx(int M, int D, bool isDpiChange);
	virtual void __fastcall CheckScrollbarAnnotations();
	virtual System::Types::TRect __fastcall GetClientBounds();
	virtual System::Types::TRect __fastcall GetHScrollBarBounds();
	virtual Cxnavigator::_di_IcxNavigator __fastcall GetNavigatorButtonsControl();
	virtual System::Types::TRect __fastcall GetVScrollBarBounds();
	virtual bool __fastcall HasScrollBarArea();
	virtual bool __fastcall IsScrollbarAnnotationVisible(int AKind);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall RefreshScrollbarAnnotations(const Dxscrollbarannotations::TdxScrollbarAnnotationKinds &AChangedAnnotationKinds = (Dxscrollbarannotations::TdxScrollbarAnnotationKinds() << 0x0 << 0x1 << 0x2 << 0x3 << 0x4 << 0x5 << 0x6 << 0x7 << 0x8 << 0x9 << 0xa << 0xb << 0xc << 0xd << 0xe << 0xf << 0x10 << 0x11 << 0x12 << 0x13 << 0x14 << 0x15 << 0x16 << 0x17 << 0x18 << 0x19 << 0x1a << 0x1b << 0x1c << 0x1d << 0x1e << 0x1f << 0x20 << 0x21 << 0x22 << 0x23 << 0x24 << 0x25 << 0x26 << 0x27 << 0x28 << 0x29 << 0x2a << 0x2b << 0x2c << 0x2d << 0x2e << 0x2f << 0x30 << 0x31 << 0x32 << 0x33 << 0x34 << 0x35 << 0x36 << 0x37 << 0x38 << 0x39 << 0x3a << 0x3b << 0x3c << 0x3d << 0x3e << 0x3f << 0x40 << 0x41 << 0x42 << 0x43 << 0x44 << 0x45 << 0x46 << 0x47 << 0x48 << 0x49 << 0x4a << 0x4b << 0x4c << 0x4d << 0x4e << 0x4f << 0x50 << 0x51 << 0x52 << 0x53 << 0x54 << 0x55 << 0x56 << 0x57 << 0x58 << 0x59 << 0x5a << 0x5b << 0x5c << 0x5d << 0x5e << 0x5f << 0x60 << 0x61 << 0x62 << 0x63 << 0x64 << 0x65 << 0x66 << 0x67 << 0x68 << 0x69 << 0x6a << 0x6b << 0x6c << 0x6d << 0x6e << 0x6f << 0x70 << 0x71 << 0x72 << 0x73 << 0x74 << 0x75 << 0x76 << 0x77 << 0x78 << 0x79 << 0x7a << 0x7b << 0x7c << 0x7d << 0x7e << 0x7f << 0x80 << 0x81 << 0x82 << 0x83 << 0x84 << 0x85 << 0x86 << 0x87 << 0x88 << 0x89 << 0x8a << 0x8b << 0x8c << 0x8d << 0x8e << 0x8f << 0x90 << 0x91 << 0x92 << 0x93 << 0x94 << 0x95 << 0x96 << 0x97 << 0x98 << 0x99 << 0x9a << 0x9b << 0x9c << 0x9d << 0x9e << 0x9f << 0xa0 << 0xa1 << 0xa2 << 0xa3 << 0xa4 << 0xa5 << 0xa6 << 0xa7 << 0xa8 << 0xa9 << 0xaa << 0xab << 0xac << 0xad << 0xae << 0xaf << 0xb0 << 0xb1 << 0xb2 << 0xb3 << 0xb4 << 0xb5 << 0xb6 << 0xb7 << 0xb8 << 0xb9 << 0xba << 0xbb << 0xbc << 0xbd << 0xbe << 0xbf << 0xc0 << 0xc1 << 0xc2 << 0xc3 << 0xc4 << 0xc5 << 0xc6 << 0xc7 << 0xc8 << 0xc9 << 0xca << 0xcb << 0xcc << 0xcd << 0xce << 0xcf << 0xd0 << 0xd1 << 0xd2 << 0xd3 << 0xd4 << 0xd5 << 0xd6 << 0xd7 << 0xd8 << 0xd9 << 0xda << 0xdb << 0xdc << 0xdd << 0xde << 0xdf << 0xe0 << 0xe1 << 0xe2 << 0xe3 << 0xe4 << 0xe5 << 0xe6 << 0xe7 << 0xe8 << 0xe9 << 0xea << 0xeb << 0xec << 0xed << 0xee << 0xef << 0xf0 << 0xf1 << 0xf2 << 0xf3 << 0xf4 << 0xf5 << 0xf6 << 0xf7 << 0xf8 << 0xf9 << 0xfa << 0xfb << 0xfc << 0xfd << 0xfe << 0xff ));
	virtual void __fastcall SetPaintRegion();
	virtual void __fastcall NavigatorChanged(Cxnavigator::TcxNavigatorChangeType AChangeType);
	virtual System::Types::TRect __fastcall GetNavigatorBounds();
	virtual Cxnavigator::TcxCustomNavigatorButtons* __fastcall GetNavigatorButtons();
	virtual Vcl::Graphics::TCanvas* __fastcall GetNavigatorCanvas();
	virtual Vcl::Controls::TWinControl* __fastcall GetNavigatorControl();
	virtual bool __fastcall GetNavigatorFocused();
	virtual Cxlookandfeels::TcxLookAndFeel* __fastcall GetNavigatorLookAndFeel();
	virtual System::Classes::TComponent* __fastcall GetNavigatorOwner();
	virtual bool __fastcall GetNavigatorShowHint();
	virtual bool __fastcall GetNavigatorTabStop();
	virtual void __fastcall NavigatorStateChanged();
	virtual void __fastcall RefreshNavigator();
	virtual Cxnavigator::TcxCustomNavigatorInfoPanel* __fastcall GetNavigatorInfoPanel();
	virtual int __fastcall NavigatorGetRecordCount();
	virtual int __fastcall NavigatorGetRecordIndex();
	virtual TcxEditingControlScrollbarAnnotations* __fastcall CreateScrollbarAnnotationHelper();
	virtual TcxControlScrollbarAnnotationOptions* __fastcall CreateScrollbarAnnotations();
	virtual void __fastcall CreateSubClasses();
	virtual void __fastcall DestroySubClasses();
	virtual TcxControlOptionsDateTimeHandlingClass __fastcall GetDateTimeHandlingClass();
	virtual TcxControlOptionsFilterBoxClass __fastcall GetOptionsFilterBoxClass();
	virtual TcxControlOptionsFilteringClass __fastcall GetOptionsFilteringClass();
	virtual TcxControlOptionsFindPanelClass __fastcall GetFindPanelOptionsClass();
	virtual int __fastcall GetHintHidePause();
	virtual TcxControlNavigatorClass __fastcall GetNavigatorClass();
	virtual _di_IcxEditingControlOptions __fastcall GetOptions();
	virtual TcxControlOptionsBehaviorClass __fastcall GetOptionsBehaviorClass();
	virtual TcxControlOptionsDataClass __fastcall GetOptionsDataClass();
	virtual TcxControlOptionsViewClass __fastcall GetOptionsViewClass();
	virtual TcxCustomControlPainterClass __fastcall GetPainterClass();
	virtual TcxCustomControlViewInfoClass __fastcall GetViewInfoClass();
	__property TcxControlOptionsDateTimeHandling* DateTimeHandling = {read=FDateTimeHandling, write=SetDateTimeHandling};
	__property TcxControlOptionsFilterBox* FilterBox = {read=FFilterBox, write=SetFilterBox};
	__property TcxControlOptionsFiltering* Filtering = {read=FFiltering, write=SetFiltering};
	__property TcxControlOptionsFindPanel* FindPanel = {read=FFindPanel, write=SetFindPanel};
	__property TcxControlNavigator* Navigator = {read=FNavigator, write=SetNavigator};
	__property System::Classes::TNotifyEvent NavigatorEvents = {read=FNavigatorEvents, write=FNavigatorEvents};
	__property TcxControlOptionsBehavior* OptionsBehavior = {read=FOptionsBehavior, write=SetOptionsBehavior};
	__property TcxControlOptionsData* OptionsData = {read=FOptionsData, write=SetOptionsData};
	__property TcxControlOptionsView* OptionsView = {read=FOptionsView, write=SetOptionsView};
	__property TcxControlScrollbarAnnotationOptions* ScrollbarAnnotations = {read=FScrollbarAnnotations, write=SetScrollbarAnnotations};
	__property TcxExtEditingControlViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TcxEditingControl.Create */ inline __fastcall virtual TcxExtEditingControl(System::Classes::TComponent* AOwner) : TcxEditingControl(AOwner) { }
	/* TcxEditingControl.Destroy */ inline __fastcall virtual ~TcxExtEditingControl() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxExtEditingControl(HWND ParentWindow) : TcxEditingControl(ParentWindow) { }
	
private:
	void *__IcxNavigatorRecordPosition;	// Cxnavigator::IcxNavigatorRecordPosition 
	void *__IcxNavigatorOwner2;	// Cxnavigator::IcxNavigatorOwner2 
	void *__IcxEditingControlOptions;	// IcxEditingControlOptions 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {715C9E38-5BA0-4ED8-B35C-BB40EA739362}
	operator Cxnavigator::_di_IcxNavigatorRecordPosition()
	{
		Cxnavigator::_di_IcxNavigatorRecordPosition intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxnavigator::IcxNavigatorRecordPosition*(void) { return (Cxnavigator::IcxNavigatorRecordPosition*)&__IcxNavigatorRecordPosition; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {5AC3BE65-B332-40D4-9635-869F52634B17}
	operator Cxnavigator::_di_IcxNavigatorOwner2()
	{
		Cxnavigator::_di_IcxNavigatorOwner2 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxnavigator::IcxNavigatorOwner2*(void) { return (Cxnavigator::IcxNavigatorOwner2*)&__IcxNavigatorOwner2; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {504B7F43-8847-46C5-B84A-C24F8E5E61A6}
	operator Cxnavigator::_di_IcxNavigatorOwner()
	{
		Cxnavigator::_di_IcxNavigatorOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxnavigator::IcxNavigatorOwner*(void) { return (Cxnavigator::IcxNavigatorOwner*)&__IcxNavigatorOwner2; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6A041541-53E2-413B-8377-0D249356B5DF}
	operator _di_IcxEditingControlOptions()
	{
		_di_IcxEditingControlOptions intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IcxEditingControlOptions*(void) { return (IcxEditingControlOptions*)&__IcxEditingControlOptions; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 ecs_Content = System::Int8(0x0);
static const System::Int8 ecs_Background = System::Int8(0x1);
static const System::Int8 ecs_Inactive = System::Int8(0x2);
static const System::Int8 ecs_Selection = System::Int8(0x3);
static const System::Int8 ecs_Navigator = System::Int8(0x4);
static const System::Int8 ecs_NavigatorInfoPanel = System::Int8(0x5);
static const System::Int8 ecs_FindPanel = System::Int8(0x6);
static const System::Int8 ecs_SearchResultHighlight = System::Int8(0x7);
static const System::Int8 ecs_FilterBox = System::Int8(0x8);
static const System::Int8 ecs_EditContainerStylesMaxIndex = System::Int8(0x0);
static const System::Int8 ecs_EditingStylesMaxIndex = System::Int8(0x8);
static const System::Int8 echc_Empty = System::Int8(0x0);
static const System::Int8 echc_IsMouseEvent = System::Int8(0x1);
static const System::Int8 echc_HitAtFindPanel = System::Int8(0x2);
static const System::Int8 echc_HitAtFilterBox = System::Int8(0x3);
static const System::Int8 echc_MaxIndex = System::Int8(0x3);
static const System::Int8 cvis_IsDirty = System::Int8(0x1);
static const System::Int8 cvis_StyleInvalid = System::Int8(0x2);
static const System::Int8 cxSizingMarkWidth = System::Int8(0x1);
static const System::Int8 cxScrollWidthDragInterval = System::Int8(0x32);
static const System::Int8 cxControlFilterDefaultItemMRUItemsListCount = System::Int8(0x5);
static const System::Int8 cxControlFilterDefaultItemPopupMaxDropDownItemCount = System::Int8(0xf);
extern DELPHI_PACKAGE bool cxControlDefaultItemFiltering;
extern DELPHI_PACKAGE System::StaticArray<int, 2> cxIntOffs;
extern DELPHI_PACKAGE TcxCustomDesignSelectionHelperClass cxDesignSelectionHelperClass;
extern DELPHI_PACKAGE void __fastcall cxAssignEditStyle(TcxEditCellViewInfo* AViewInfo);
extern DELPHI_PACKAGE bool __fastcall cxPtInViewInfoItem(TcxCustomViewInfoItem* AItem, const System::Types::TPoint &APoint);
extern DELPHI_PACKAGE bool __fastcall cxInRange(int Value, int AMin, int AMax);
extern DELPHI_PACKAGE bool __fastcall cxRange(int &Value, int AMin, int AMax);
extern DELPHI_PACKAGE int __fastcall cxSetValue(bool Condition, int ATrueValue, int AFalseValue);
extern DELPHI_PACKAGE bool __fastcall cxConfirmMessageBox(const System::UnicodeString AText, const System::UnicodeString ACaption);
}	/* namespace Cxinplacecontainer */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXINPLACECONTAINER)
using namespace Cxinplacecontainer;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxinplacecontainerHPP
