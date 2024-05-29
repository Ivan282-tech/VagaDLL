// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxFindPanel.pas' rev: 35.00 (Windows)

#ifndef CxfindpanelHPP
#define CxfindpanelHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Winapi.Messages.hpp>
#include <cxClasses.hpp>
#include <cxControls.hpp>
#include <cxContainer.hpp>
#include <cxDropDownEdit.hpp>
#include <cxEdit.hpp>
#include <cxMRUEdit.hpp>
#include <dxCoreClasses.hpp>
#include <cxStyles.hpp>
#include <cxLookAndFeels.hpp>
#include <cxGraphics.hpp>
#include <cxCustomData.hpp>
#include <cxTextEdit.hpp>
#include <cxMaskEdit.hpp>
#include <Vcl.StdCtrls.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxfindpanel
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxFindPanelMRUEditViewInfo;
class DELPHICLASS TcxFindPanelMRUEditViewData;
class DELPHICLASS TcxFindPanelMRUEditProperties;
class DELPHICLASS TcxFindPanelMRUEditInnerEdit;
class DELPHICLASS TcxFindPanelMRUEdit;
class DELPHICLASS TcxFindPanelOptions;
class DELPHICLASS TcxCustomFindPanel;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TcxFindPanelDisplayMode : unsigned char { fpdmNever, fpdmManual, fpdmAlways };

enum DECLSPEC_DENUM TcxFindPanelPosition : unsigned char { fppTop, fppBottom };

enum DECLSPEC_DENUM TcxFindPanelLayout : unsigned char { fplDefault, fplCompact };

enum DECLSPEC_DENUM TcxFindPanelItemKind : unsigned char { fpikNone, fpikFindEdit, fpikCloseButton, fpikFindButton, fpikClearButton, fpikPreviousButton, fpikNextButton };

enum DECLSPEC_DENUM TcxFindPanelValidateFocusedItemType : unsigned char { fvtFocusNext, fvtFocusPrev, fvtFocusEdit };

class PASCALIMPLEMENTATION TcxFindPanelMRUEditViewInfo : public Cxdropdownedit::TcxCustomComboBoxViewInfo
{
	typedef Cxdropdownedit::TcxCustomComboBoxViewInfo inherited;
	
private:
	static const System::Int8 NextButtonGlyphSize = System::Int8(0xc);
	
	static const System::Int8 PreviousButtonGlyphSize = System::Int8(0xc);
	
	HIDESBASE TcxFindPanelMRUEdit* __fastcall GetEdit();
	TcxFindPanelMRUEditProperties* __fastcall GetProperties();
	
protected:
	virtual void __fastcall DrawClearButtonGlyph(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &AButtonBounds, Cxedit::TcxEditButtonState AState);
	virtual void __fastcall DrawEditButton(Cxgraphics::TcxCanvas* ACanvas, int AButtonVisibleIndex);
	virtual void __fastcall DrawFindButtonGlyph(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &AButtonBounds, const Cxedit::TcxEditButtonState AState);
	virtual void __fastcall DrawInfoButtonText(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &AButtonBounds, const System::UnicodeString AText);
	virtual void __fastcall DrawNextButtonGlyph(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &AButtonBounds, const Cxedit::TcxEditButtonState AState);
	virtual void __fastcall DrawPreviousButtonGlyph(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &AButtonBounds, const Cxedit::TcxEditButtonState AState);
	__property TcxFindPanelMRUEditProperties* Properties = {read=GetProperties};
	
public:
	__property TcxFindPanelMRUEdit* Edit = {read=GetEdit};
public:
	/* TcxCustomComboBoxViewInfo.Create */ inline __fastcall virtual TcxFindPanelMRUEditViewInfo() : Cxdropdownedit::TcxCustomComboBoxViewInfo() { }
	
public:
	/* TcxCustomTextEditViewInfo.Destroy */ inline __fastcall virtual ~TcxFindPanelMRUEditViewInfo() { }
	
};


class PASCALIMPLEMENTATION TcxFindPanelMRUEditViewData : public Cxdropdownedit::TcxCustomComboBoxViewData
{
	typedef Cxdropdownedit::TcxCustomComboBoxViewData inherited;
	
protected:
	virtual System::Types::TRect __fastcall GetEditContentDefaultOffsets();
public:
	/* TcxCustomComboBoxViewData.Create */ inline __fastcall virtual TcxFindPanelMRUEditViewData(Cxedit::TcxCustomEditProperties* AProperties, Cxedit::TcxCustomEditStyle* AStyle, bool AIsInplace) : Cxdropdownedit::TcxCustomComboBoxViewData(AProperties, AStyle, AIsInplace) { }
	
public:
	/* TcxCustomEditViewData.Destroy */ inline __fastcall virtual ~TcxFindPanelMRUEditViewData() { }
	
};


class PASCALIMPLEMENTATION TcxFindPanelMRUEditProperties : public Cxmruedit::TcxCustomMRUEditProperties
{
	typedef Cxmruedit::TcxCustomMRUEditProperties inherited;
	
private:
	Cxedit::TcxEditButton* FClearButton;
	Cxedit::TcxEditButton* FDropDownButton;
	Cxedit::TcxEditButton* FFindButton;
	Cxedit::TcxEditButton* FInfoButton;
	Cxedit::TcxEditButton* FNextButton;
	Cxedit::TcxEditButton* FPreviousButton;
	
protected:
	virtual void __fastcall AddClearButton();
	virtual void __fastcall AddFindButton();
	virtual void __fastcall AddInfoButton();
	virtual void __fastcall AddNextButton();
	virtual void __fastcall AddPreviousButton();
	virtual void __fastcall DoChanged();
	virtual int __fastcall GetButtonVisibleIndex(int AButtonIndex);
	__classmethod virtual Cxedit::TcxCustomEditViewDataClass __fastcall GetViewDataClass();
	virtual int __fastcall DropDownButtonVisibleIndex();
	virtual void __fastcall UpdateDropDownButtonVisibility();
	__property Cxedit::TcxEditButton* ClearButton = {read=FClearButton};
	__property Cxedit::TcxEditButton* DropDownButton = {read=FDropDownButton};
	__property Cxedit::TcxEditButton* FindButton = {read=FFindButton};
	__property Cxedit::TcxEditButton* InfoButton = {read=FInfoButton};
	__property Cxedit::TcxEditButton* NextButton = {read=FNextButton};
	__property Cxedit::TcxEditButton* PreviousButton = {read=FPreviousButton};
	
public:
	__fastcall virtual TcxFindPanelMRUEditProperties(System::Classes::TPersistent* AOwner);
	__classmethod virtual Cxcontainer::TcxContainerViewInfoClass __fastcall GetViewInfoClass();
public:
	/* TcxCustomDropDownEditProperties.Destroy */ inline __fastcall virtual ~TcxFindPanelMRUEditProperties() { }
	
};


class PASCALIMPLEMENTATION TcxFindPanelMRUEditInnerEdit : public Cxdropdownedit::TcxCustomComboBoxInnerEdit
{
	typedef Cxdropdownedit::TcxCustomComboBoxInnerEdit inherited;
	
private:
	HIDESBASE TcxFindPanelMRUEdit* __fastcall GetContainer();
	HIDESBASE MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	
protected:
	__property TcxFindPanelMRUEdit* Container = {read=GetContainer};
public:
	/* TcxCustomInnerTextEdit.Create */ inline __fastcall virtual TcxFindPanelMRUEditInnerEdit(System::Classes::TComponent* AOwner) : Cxdropdownedit::TcxCustomComboBoxInnerEdit(AOwner) { }
	/* TcxCustomInnerTextEdit.Destroy */ inline __fastcall virtual ~TcxFindPanelMRUEditInnerEdit() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxFindPanelMRUEditInnerEdit(HWND ParentWindow) : Cxdropdownedit::TcxCustomComboBoxInnerEdit(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxFindPanelMRUEdit : public Cxmruedit::TcxCustomMRUEdit
{
	typedef Cxmruedit::TcxCustomMRUEdit inherited;
	
private:
	int FCachedMinHeight;
	TcxCustomFindPanel* FFindPanel;
	bool FNeedRecalculateMinHeight;
	HIDESBASE TcxFindPanelMRUEditProperties* __fastcall GetProperties();
	HIDESBASE MESSAGE void __fastcall WMMove(Winapi::Messages::TWMMove &Message);
	
protected:
	virtual void __fastcall VisualRefinementsListenerChanged();
	virtual void __fastcall ChangeScaleEx(int M, int D, bool IsDPIChanged);
	virtual void __fastcall CreateHandle();
	virtual void __fastcall DoButtonClick(int AButtonVisibleIndex);
	virtual void __fastcall DoChange();
	DYNAMIC void __fastcall FocusChanged();
	virtual Vcl::Controls::TControlClass __fastcall GetInnerEditClass();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall SetInternalEditValue(const System::Variant &Value);
	virtual void __fastcall UndoPerformed();
	__property TcxCustomFindPanel* FindPanel = {read=FFindPanel};
	
public:
	__fastcall virtual TcxFindPanelMRUEdit(TcxCustomFindPanel* AFindPanel);
	__fastcall virtual ~TcxFindPanelMRUEdit();
	virtual void __fastcall AddItem(const System::UnicodeString Value);
	virtual int __fastcall CalculateMinHeight();
	virtual void __fastcall ClearSelection();
	virtual void __fastcall CutToClipboard();
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetPropertiesClass();
	HIDESBASE void __fastcall Hide();
	virtual void __fastcall PasteFromClipboard();
	virtual void __fastcall SetFocus();
	void __fastcall SetFocusAndSelectAll();
	HIDESBASE void __fastcall Show();
	virtual void __fastcall TranslationChanged();
	void __fastcall UpdateLookAndFeel(Cxlookandfeels::TcxLookAndFeel* ALookAndFeel);
	void __fastcall UpdateStyles(const Cxgraphics::TcxViewParams &AParams, const Cxgraphics::TcxViewParams &AContentParams);
	__property TcxFindPanelMRUEditProperties* Properties = {read=GetProperties};
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxFindPanelMRUEdit(HWND ParentWindow) : Cxmruedit::TcxCustomMRUEdit(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxFindPanelOptions : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	int FApplyInputDelay;
	bool FClearOnClose;
	TcxFindPanelDisplayMode FDisplayMode;
	TcxCustomFindPanel* FFindPanel;
	bool FFocusContentOnApply;
	bool FHighlightSearchResults;
	System::UnicodeString FInfoText;
	bool FInfoTextAssigned;
	bool FIsUpdatingMRUItems;
	TcxFindPanelLayout FLayout;
	System::Classes::TStringList* FMRUItems;
	int FMRUItemsListCount;
	int FMRUItemsListDropDownCount;
	TcxFindPanelPosition FPosition;
	bool FShowClearButton;
	bool FShowCloseButton;
	bool FShowFindButton;
	bool FShowNextButton;
	bool FShowPreviousButton;
	bool FUseDelayedFind;
	Cxcustomdata::TcxDataFindCriteriaBehavior __fastcall GetBehavior();
	System::Classes::TStrings* __fastcall GetMRUItems();
	bool __fastcall GetUseExtendedSyntax();
	void __fastcall SetApplyInputDelay(int AValue);
	void __fastcall SetBehavior(Cxcustomdata::TcxDataFindCriteriaBehavior AValue);
	void __fastcall SetClearOnClose(bool AValue);
	void __fastcall SetDisplayMode(TcxFindPanelDisplayMode AValue);
	void __fastcall SetContentOnApply(bool AValue);
	void __fastcall SetHighlightSearchResults(bool AValue);
	void __fastcall SetLayout(TcxFindPanelLayout AValue);
	void __fastcall SetMRUItems(System::Classes::TStrings* AValue);
	void __fastcall SetMRUItemsListCount(int AValue);
	void __fastcall SetMRUItemsListDropDownCount(int AValue);
	void __fastcall SetPosition(TcxFindPanelPosition AValue);
	void __fastcall SetShowClearButton(bool AValue);
	void __fastcall SetShowCloseButton(bool AValue);
	void __fastcall SetShowFindButton(bool AValue);
	void __fastcall SetShowNextButton(bool AValue);
	void __fastcall SetShowPreviousButton(bool AValue);
	void __fastcall SetUseDelayedFind(bool AValue);
	void __fastcall SetUseExtendedSyntax(bool AValue);
	void __fastcall CreateMRUItems();
	void __fastcall DestroyMRUItems();
	void __fastcall MRUItemsChangeHandler(System::TObject* Sender);
	System::UnicodeString __fastcall GetInfoText();
	void __fastcall SetInfoText(System::UnicodeString AValue);
	
protected:
	void __fastcall Changed();
	void __fastcall CheckMRUItemListCount();
	__property TcxCustomFindPanel* FindPanel = {read=FFindPanel};
	
public:
	__fastcall virtual TcxFindPanelOptions(TcxCustomFindPanel* AFindPanel);
	__fastcall virtual ~TcxFindPanelOptions();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall UpdateMRUItems();
	__property int ApplyInputDelay = {read=FApplyInputDelay, write=SetApplyInputDelay, nodefault};
	__property Cxcustomdata::TcxDataFindCriteriaBehavior Behavior = {read=GetBehavior, write=SetBehavior, nodefault};
	__property bool ClearOnClose = {read=FClearOnClose, write=SetClearOnClose, nodefault};
	__property TcxFindPanelDisplayMode DisplayMode = {read=FDisplayMode, write=SetDisplayMode, nodefault};
	__property bool FocusContentOnApply = {read=FFocusContentOnApply, write=SetContentOnApply, nodefault};
	__property bool HighlightSearchResults = {read=FHighlightSearchResults, write=SetHighlightSearchResults, nodefault};
	__property System::UnicodeString InfoText = {read=GetInfoText, write=SetInfoText};
	__property bool InfoTextAssigned = {read=FInfoTextAssigned, nodefault};
	__property TcxFindPanelLayout Layout = {read=FLayout, write=SetLayout, nodefault};
	__property System::Classes::TStrings* MRUItems = {read=GetMRUItems, write=SetMRUItems};
	__property int MRUItemsListCount = {read=FMRUItemsListCount, write=SetMRUItemsListCount, nodefault};
	__property int MRUItemsListDropDownCount = {read=FMRUItemsListDropDownCount, write=SetMRUItemsListDropDownCount, nodefault};
	__property TcxFindPanelPosition Position = {read=FPosition, write=SetPosition, nodefault};
	__property bool ShowClearButton = {read=FShowClearButton, write=SetShowClearButton, nodefault};
	__property bool ShowCloseButton = {read=FShowCloseButton, write=SetShowCloseButton, nodefault};
	__property bool ShowFindButton = {read=FShowFindButton, write=SetShowFindButton, nodefault};
	__property bool ShowNextButton = {read=FShowNextButton, write=SetShowNextButton, nodefault};
	__property bool ShowPreviousButton = {read=FShowPreviousButton, write=SetShowPreviousButton, nodefault};
	__property bool UseDelayedFind = {read=FUseDelayedFind, write=SetUseDelayedFind, nodefault};
	__property bool UseExtendedSyntax = {read=GetUseExtendedSyntax, write=SetUseExtendedSyntax, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomFindPanel : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	static const System::Int8 ButtonsFirstOffset = System::Int8(0xc);
	
	static const System::Int8 ButtonsFirstOffsetForCompactLayout = System::Int8(0x4);
	
	static const System::Int8 ButtonsVertOffset = System::Int8(0xc);
	
	static const System::Int8 ButtonsVertOffsetForCompactLayout = System::Int8(0x6);
	
	static const System::Int8 ButtonsOffset = System::Int8(0x4);
	
	static const System::Int8 ButtonsOffsetForCompactLayout = System::Int8(0x3);
	
	static const System::Word EditMaxWidth = System::Word(0x15c);
	
	static const System::Byte EditMaxWidthForCompactLayout = System::Byte(0xd2);
	
	Cxclasses::TcxTimer* FDelayedFindTimer;
	TcxFindPanelMRUEdit* FEdit;
	TcxFindPanelItemKind FFocusedItem;
	TcxFindPanelOptions* FOptions;
	bool FVisible;
	TcxFindPanelMRUEdit* __fastcall GetEdit();
	int __fastcall GetEditHeight();
	System::Classes::TStrings* __fastcall GetEditLookupItems();
	System::UnicodeString __fastcall GetText();
	void __fastcall SetFocusedItem(TcxFindPanelItemKind AValue);
	void __fastcall SetOptions(TcxFindPanelOptions* AValue);
	void __fastcall SetText(const System::UnicodeString AValue);
	void __fastcall SetVisible(bool AValue);
	void __fastcall CreateTimer();
	void __fastcall DestroyTimer();
	void __fastcall OnDelayedFindTimer(System::TObject* Sender);
	
protected:
	static const System::Int8 ButtonMinHeight = System::Int8(0x16);
	
	static const System::Int8 ButtonMinWidth = System::Int8(0x3c);
	
	static const System::Int8 EditMinWidth = System::Int8(0x34);
	
	virtual void __fastcall AddTextInEditMRUItems();
	virtual void __fastcall ApplyText(const System::UnicodeString AText);
	virtual bool __fastcall CanItemFocus(TcxFindPanelItemKind AItem);
	virtual bool __fastcall CanHide();
	virtual void __fastcall Clear();
	virtual void __fastcall ClearText();
	virtual System::UnicodeString __fastcall DoGetItemCaption(TcxFindPanelItemKind AItem);
	virtual void __fastcall EditDestroyed();
	virtual void __fastcall FocusControlContent();
	virtual void __fastcall FocusedItemChanged();
	virtual void __fastcall FocusedItemExecute();
	virtual void __fastcall FocusNextItem();
	virtual void __fastcall FocusPreviousItem();
	virtual TcxFindPanelLayout __fastcall GetActualLayout();
	virtual int __fastcall GetButtonsFirstOffset();
	virtual int __fastcall GetButtonsOffset();
	virtual int __fastcall GetButtonsVertOffset();
	virtual System::UnicodeString __fastcall GetDefaultInfoText();
	virtual int __fastcall GetDefaultMRUItemsListCount();
	virtual int __fastcall GetDefaultMRUItemsListDropDownCount();
	virtual int __fastcall GetEditMaxWidth();
	virtual System::UnicodeString __fastcall GetInfoButtonText();
	virtual bool __fastcall HasEdit();
	virtual bool __fastcall HasItemCaption(TcxFindPanelItemKind AItem);
	virtual void __fastcall Invalidate(bool ARecalculate = false);
	virtual bool __fastcall IsButtonFocused();
	bool __fastcall IsDesigning();
	bool __fastcall IsDestroying();
	virtual void __fastcall StartDelayedFind();
	virtual void __fastcall UpdateEdit();
	virtual void __fastcall UpdateEditClearButton();
	virtual void __fastcall UpdateEditFindButton();
	virtual void __fastcall UpdateEditInfoButton();
	virtual void __fastcall UpdateEditLookAndFeel();
	virtual void __fastcall UpdateEditNextButton();
	virtual void __fastcall UpdateEditPreviousButton();
	virtual void __fastcall UpdateEditStyles();
	virtual void __fastcall UpdateEditValue();
	virtual void __fastcall UpdateStyles();
	virtual void __fastcall ValidateFocusedItem(TcxFindPanelValidateFocusedItemType AType = (TcxFindPanelValidateFocusedItemType)(0x2));
	virtual void __fastcall VisibilityChanged();
	virtual Cxcontrols::TcxControl* __fastcall GetControl() = 0 ;
	virtual void __fastcall GetControlContentViewParams(Cxgraphics::TcxViewParams &AParams) = 0 ;
	virtual Cxcustomdata::TcxDataFindCriteria* __fastcall GetCriteria() = 0 ;
	virtual Cxlookandfeels::TcxLookAndFeel* __fastcall GetLookAndFeel() = 0 ;
	virtual System::Classes::TComponent* __fastcall GetOwner() = 0 ;
	virtual void __fastcall GetViewParams(Cxgraphics::TcxViewParams &AParams) = 0 ;
	virtual TcxFindPanelMRUEdit* __fastcall CreateEdit();
	virtual TcxFindPanelOptions* __fastcall CreateOptions();
	virtual void __fastcall DestroyEdit();
	virtual void __fastcall DestroyOptions();
	__property TcxFindPanelLayout ActualLayout = {read=GetActualLayout, nodefault};
	__property Cxcustomdata::TcxDataFindCriteria* Criteria = {read=GetCriteria};
	__property TcxFindPanelMRUEdit* Edit = {read=GetEdit};
	__property Cxlookandfeels::TcxLookAndFeel* LookAndFeel = {read=GetLookAndFeel};
	__property System::UnicodeString Text = {read=GetText, write=SetText};
	
public:
	__fastcall virtual TcxCustomFindPanel();
	__fastcall virtual ~TcxCustomFindPanel();
	virtual void __fastcall Apply();
	virtual bool __fastcall CanShow();
	virtual void __fastcall Changed() = 0 ;
	virtual void __fastcall ClearButtonExecute();
	virtual void __fastcall CloseButtonExecute();
	virtual void __fastcall ControlFocusChanged(bool AIsFocused);
	virtual void __fastcall CriteriaChanged(Cxcustomdata::TcxDataFindCriteriaChanges AChanges);
	virtual void __fastcall DelayedFind();
	virtual void __fastcall DisplayModeChanged();
	virtual void __fastcall EditFocusChanged();
	virtual void __fastcall FindButtonExecute();
	virtual void __fastcall FindEditExecute();
	virtual System::UnicodeString __fastcall GetItemCaption(TcxFindPanelItemKind AItem);
	virtual void __fastcall Hide();
	virtual void __fastcall HideEdit();
	virtual bool __fastcall IsFocused();
	virtual bool __fastcall IsEditFocused();
	virtual bool __fastcall IsItemEnabled(TcxFindPanelItemKind AItem);
	virtual bool __fastcall IsItemFocused(TcxFindPanelItemKind AItem);
	virtual bool __fastcall IsItemVisible(TcxFindPanelItemKind AItem);
	virtual void __fastcall ItemExecute(TcxFindPanelItemKind AItem);
	virtual void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall LookAndFeelChanged();
	virtual bool __fastcall NeedDelayedFindOnKeyDown(System::Word Key, System::Classes::TShiftState Shift);
	virtual void __fastcall NextButtonExecute();
	virtual void __fastcall PreviousButtonExecute();
	virtual void __fastcall Show(bool AFocusEdit = true);
	virtual void __fastcall ShowEdit();
	virtual void __fastcall StylesChanged();
	virtual void __fastcall UpdateEditBounds(const System::Types::TRect &ABounds);
	virtual void __fastcall UpdateEditMRUItems();
	virtual void __fastcall UpdateEditTextHint();
	virtual void __fastcall UpdateMRUItems();
	virtual void __fastcall UpdateOptionsMRUItems();
	virtual void __fastcall UpdateViewInfo(bool ARecalculate = false);
	__property Cxcontrols::TcxControl* Control = {read=GetControl};
	__property System::UnicodeString DefaultInfoText = {read=GetDefaultInfoText};
	__property int DefaultMRUItemsListCount = {read=GetDefaultMRUItemsListCount, nodefault};
	__property int DefaultMRUItemsListDropDownCount = {read=GetDefaultMRUItemsListDropDownCount, nodefault};
	__property int EditHeight = {read=GetEditHeight, nodefault};
	__property System::Classes::TStrings* EditLookupItems = {read=GetEditLookupItems};
	__property TcxFindPanelItemKind FocusedItem = {read=FFocusedItem, write=SetFocusedItem, nodefault};
	__property TcxFindPanelOptions* Options = {read=FOptions, write=SetOptions};
	__property System::Classes::TComponent* Owner = {read=GetOwner};
	__property bool Visible = {read=FVisible, write=SetVisible, nodefault};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 cxFindPanelDefaultMRUItemsListDropDownCount = System::Int8(0x8);
static const System::Int8 cxFindPanelDefaultMRUItemsListCount = System::Int8(0x0);
}	/* namespace Cxfindpanel */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXFINDPANEL)
using namespace Cxfindpanel;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxfindpanelHPP
