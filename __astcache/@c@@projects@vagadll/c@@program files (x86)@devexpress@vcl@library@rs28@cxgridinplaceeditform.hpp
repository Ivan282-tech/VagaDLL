// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxGridInplaceEditForm.pas' rev: 35.00 (Windows)

#ifndef CxgridinplaceeditformHPP
#define CxgridinplaceeditformHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Variants.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <System.Contnrs.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.StdCtrls.hpp>
#include <dxCore.hpp>
#include <cxClasses.hpp>
#include <cxGraphics.hpp>
#include <cxControls.hpp>
#include <cxStyles.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxGridCommon.hpp>
#include <cxGrid.hpp>
#include <dxCoreClasses.hpp>
#include <dxGDIPlusClasses.hpp>
#include <cxGridCustomView.hpp>
#include <cxGridCustomTableView.hpp>
#include <dxLayoutLookAndFeels.hpp>
#include <cxDataStorage.hpp>
#include <cxCustomData.hpp>
#include <cxEdit.hpp>
#include <dxLayoutContainer.hpp>
#include <dxLayoutSelection.hpp>
#include <dxLayoutCommon.hpp>
#include <Vcl.Forms.hpp>
#include <cxNavigator.hpp>
#include <cxLookAndFeels.hpp>
#include <System.SysUtils.hpp>
#include <cxGridViewLayoutContainer.hpp>
#include <cxMaskEdit.hpp>
#include <dxForms.hpp>
#include <cxGridRowLayout.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxgridinplaceeditform
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxGridInplaceEditFormLayoutItemCaptionOptions;
class DELPHICLASS TcxGridInplaceEditFormLayoutItem;
class DELPHICLASS TcxGridInplaceEditFormGroup;
class DELPHICLASS TcxGridInplaceEditFormDataCellPainter;
class DELPHICLASS TcxGridInplaceEditFormDataCellViewInfo;
class DELPHICLASS TcxGridInplaceEditFormContainerViewInfo;
class DELPHICLASS TcxGridInplaceEditFormContainer;
class DELPHICLASS TcxGridCustomDetachedEditFormMetricsInfo;
class DELPHICLASS TcxGridCustomDetachedEditForm;
class DELPHICLASS TcxGridCustomEditFormOptions;
class DELPHICLASS TcxGridInplaceEditForm;
//-- type declarations -------------------------------------------------------
typedef Cxgridrowlayout::TcxGridRowLayoutStretch TcxGridInplaceEditFormStretch;

typedef System::TMetaClass* TcxGridInplaceEditFormClass;

enum DECLSPEC_DENUM TcxGridEditFormDisplayMode : unsigned char { efdmInplace, efdmModal };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridInplaceEditFormLayoutItemCaptionOptions : public Cxgridrowlayout::TcxGridRowLayoutItemCaptionOptions
{
	typedef Cxgridrowlayout::TcxGridRowLayoutItemCaptionOptions inherited;
	
public:
	/* TdxLayoutLabeledItemCustomCaptionOptions.Create */ inline __fastcall virtual TcxGridInplaceEditFormLayoutItemCaptionOptions(Dxlayoutcontainer::TdxCustomLayoutItem* AItem) : Cxgridrowlayout::TcxGridRowLayoutItemCaptionOptions(AItem) { }
	
public:
	/* TdxCustomLayoutItemCaptionOptions.Destroy */ inline __fastcall virtual ~TcxGridInplaceEditFormLayoutItemCaptionOptions() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxGridInplaceEditFormLayoutItem : public Cxgridrowlayout::TcxGridRowLayoutItem
{
	typedef Cxgridrowlayout::TcxGridRowLayoutItem inherited;
	
protected:
	__classmethod virtual Dxlayoutcontainer::TdxCustomLayoutItemCaptionOptionsClass __fastcall GetCaptionOptionsClass();
public:
	/* TcxGridCustomLayoutItem.Create */ inline __fastcall virtual TcxGridInplaceEditFormLayoutItem(System::Classes::TComponent* AOwner) : Cxgridrowlayout::TcxGridRowLayoutItem(AOwner) { }
	
public:
	/* TdxCustomLayoutItem.Destroy */ inline __fastcall virtual ~TcxGridInplaceEditFormLayoutItem() { }
	
};


class PASCALIMPLEMENTATION TcxGridInplaceEditFormGroup : public Dxlayoutcontainer::TdxLayoutGroup
{
	typedef Dxlayoutcontainer::TdxLayoutGroup inherited;
	
public:
	/* TdxCustomLayoutGroup.Create */ inline __fastcall virtual TcxGridInplaceEditFormGroup(System::Classes::TComponent* AOwner) : Dxlayoutcontainer::TdxLayoutGroup(AOwner) { }
	/* TdxCustomLayoutGroup.Destroy */ inline __fastcall virtual ~TcxGridInplaceEditFormGroup() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridInplaceEditFormDataCellPainter : public Cxgridrowlayout::TcxGridRowLayoutItemDataCellPainter
{
	typedef Cxgridrowlayout::TcxGridRowLayoutItemDataCellPainter inherited;
	
protected:
	virtual void __fastcall DrawBackground()/* overload */;
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridInplaceEditFormDataCellPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : Cxgridrowlayout::TcxGridRowLayoutItemDataCellPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridInplaceEditFormDataCellPainter() { }
	
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  DrawBackground(const System::Types::TRect &R){ Cxgridcustomview::TcxCustomGridCellPainter::DrawBackground(R); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridInplaceEditFormDataCellViewInfo : public Cxgridrowlayout::TcxGridRowLayoutDataCellViewInfo
{
	typedef Cxgridrowlayout::TcxGridRowLayoutDataCellViewInfo inherited;
	
protected:
	virtual bool __fastcall GetIsMain();
	virtual Cxgridcustomview::TcxCustomGridCellPainterClass __fastcall GetPainterClass();
public:
	/* TcxGridTableDataCellViewInfo.Create */ inline __fastcall virtual TcxGridInplaceEditFormDataCellViewInfo(Cxgridcustomtableview::TcxCustomGridRecordViewInfo* ARecordViewInfo, Cxgridcustomtableview::TcxCustomGridTableItem* AItem) : Cxgridrowlayout::TcxGridRowLayoutDataCellViewInfo(ARecordViewInfo, AItem) { }
	/* TcxGridTableDataCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridInplaceEditFormDataCellViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridInplaceEditFormContainerViewInfo : public Cxgridrowlayout::TcxGridRowLayoutContainerViewInfo
{
	typedef Cxgridrowlayout::TcxGridRowLayoutContainerViewInfo inherited;
	
private:
	HIDESBASE TcxGridInplaceEditFormContainer* __fastcall GetContainer();
	TcxGridInplaceEditForm* __fastcall GetInplaceEditForm();
	
protected:
	virtual Cxgridcustomtableview::TcxCustomGridRecord* __fastcall GetGridRecordInstance();
	virtual Cxgridcustomtableview::TcxCustomGridRecordViewInfo* __fastcall GetRecordViewInfoInstance();
	__property TcxGridInplaceEditForm* InplaceEditForm = {read=GetInplaceEditForm};
	
public:
	__property TcxGridInplaceEditFormContainer* Container = {read=GetContainer};
public:
	/* TcxGridRecordLayoutContainerViewInfo.Create */ inline __fastcall virtual TcxGridInplaceEditFormContainerViewInfo(Dxlayoutcontainer::TdxLayoutContainer* AContainer, Cxgridcustomtableview::TcxCustomGridRecordViewInfo* ARecordViewInfo) : Cxgridrowlayout::TcxGridRowLayoutContainerViewInfo(AContainer, ARecordViewInfo) { }
	
public:
	/* TdxLayoutContainerViewInfo.Destroy */ inline __fastcall virtual ~TcxGridInplaceEditFormContainerViewInfo() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxGridInplaceEditFormContainer : public Cxgridrowlayout::TcxGridRowLayoutContainer
{
	typedef Cxgridrowlayout::TcxGridRowLayoutContainer inherited;
	
private:
	TcxGridInplaceEditForm* __fastcall GetInplaceEditForm();
	
protected:
	virtual void __fastcall DoChanged();
	virtual Dxlayoutcontainer::TdxLayoutGroupClass __fastcall GetDefaultGroupClass();
	virtual Cxgridrowlayout::TcxGridRowLayoutItemClass __fastcall GetItemClass();
	virtual Dxlayoutcontainer::TdxLayoutContainerViewInfoClass __fastcall GetViewInfoClass();
	__property TcxGridInplaceEditForm* InplaceEditForm = {read=GetInplaceEditForm};
	
public:
	HIDESBASE TcxGridInplaceEditFormLayoutItem* __fastcall CreateItem();
public:
	/* TcxGridRowLayoutContainer.Create */ inline __fastcall virtual TcxGridInplaceEditFormContainer(Cxgridrowlayout::TcxGridRowLayoutController* ALayoutController) : Cxgridrowlayout::TcxGridRowLayoutContainer(ALayoutController) { }
	
public:
	/* TdxLayoutContainer.Destroy */ inline __fastcall virtual ~TcxGridInplaceEditFormContainer() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridCustomDetachedEditFormMetricsInfo : public Cxclasses::TcxDialogMetricsInfo
{
	typedef Cxclasses::TcxDialogMetricsInfo inherited;
	
private:
	bool FUseDefaultHeight;
	bool FUseDefaultWidht;
	
public:
	__property bool UseDefaultHeight = {read=FUseDefaultHeight, write=FUseDefaultHeight, nodefault};
	__property bool UseDefaultWidht = {read=FUseDefaultWidht, write=FUseDefaultWidht, nodefault};
public:
	/* TcxDialogMetricsInfo.Create */ inline __fastcall TcxGridCustomDetachedEditFormMetricsInfo(Vcl::Forms::TForm* AForm) : Cxclasses::TcxDialogMetricsInfo(AForm) { }
	/* TcxDialogMetricsInfo.Destroy */ inline __fastcall virtual ~TcxGridCustomDetachedEditFormMetricsInfo() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxGridCustomDetachedEditForm : public Dxforms::TdxForm
{
	typedef Dxforms::TdxForm inherited;
	
private:
	static const System::WideChar ItemReferenceStartMark = (System::WideChar)(0x5b);
	
	static const System::WideChar ItemReferenceFinishMark = (System::WideChar)(0x5d);
	
	TcxGridInplaceEditForm* FEditForm;
	bool FShowed;
	bool FUseDefaultHeight;
	bool FUseDefaultWidth;
	Cxgridcustomtableview::TcxCustomGridTableView* __fastcall GetGridView();
	
protected:
	virtual System::UnicodeString __fastcall BuildCaption(const System::UnicodeString ACaptionMask);
	DYNAMIC void __fastcall DoShow();
	virtual void __fastcall Finalize(TcxGridInplaceEditForm* AEditForm);
	virtual Cxedit::TcxCustomEdit* __fastcall GetActiveEdit() = 0 ;
	virtual bool __fastcall GetItemValue(const System::UnicodeString AItemCaption, /* out */ System::UnicodeString &AValue);
	virtual void __fastcall Initialize(TcxGridInplaceEditForm* AEditForm);
	virtual void __fastcall ModifiedChanged() = 0 ;
	DYNAMIC void __fastcall Resize();
	virtual void __fastcall ValuesChanged() = 0 ;
	__property Cxedit::TcxCustomEdit* ActiveEdit = {read=GetActiveEdit};
	__property TcxGridInplaceEditForm* EditForm = {read=FEditForm};
	__property Cxgridcustomtableview::TcxCustomGridTableView* GridView = {read=GetGridView};
	
public:
	__property bool UseDefaultHeight = {read=FUseDefaultHeight, write=FUseDefaultHeight, nodefault};
	__property bool UseDefaultWidth = {read=FUseDefaultWidth, write=FUseDefaultWidth, nodefault};
public:
	/* TdxForm.Destroy */ inline __fastcall virtual ~TcxGridCustomDetachedEditForm() { }
	
public:
	/* TCustomForm.Create */ inline __fastcall virtual TcxGridCustomDetachedEditForm(System::Classes::TComponent* AOwner) : Dxforms::TdxForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TcxGridCustomDetachedEditForm(System::Classes::TComponent* AOwner, int Dummy) : Dxforms::TdxForm(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxGridCustomDetachedEditForm(HWND ParentWindow) : Dxforms::TdxForm(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridCustomEditFormOptions : public Cxgridrowlayout::TcxGridCustomRowLayoutOptions
{
	typedef Cxgridrowlayout::TcxGridCustomRowLayoutOptions inherited;
	
private:
	System::UnicodeString FCaptionMask;
	bool FItemHotTrack;
	void __fastcall SetCaptionMask(const System::UnicodeString AValue);
	void __fastcall SetItemHotTrack(bool AValue);
	
protected:
	virtual void __fastcall DoAssign(System::Classes::TPersistent* Source);
	virtual System::UnicodeString __fastcall GetLayoutLocationName();
	
public:
	__property System::UnicodeString CaptionMask = {read=FCaptionMask, write=SetCaptionMask};
	__property bool ItemHotTrack = {read=FItemHotTrack, write=SetItemHotTrack, default=0};
public:
	/* TcxGridCustomRowLayoutOptions.Create */ inline __fastcall virtual TcxGridCustomEditFormOptions(Cxgridcustomview::TcxCustomGridView* AGridView) : Cxgridrowlayout::TcxGridCustomRowLayoutOptions(AGridView) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxGridCustomEditFormOptions() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridInplaceEditForm : public Cxgridrowlayout::TcxGridRowLayoutController
{
	typedef Cxgridrowlayout::TcxGridRowLayoutController inherited;
	
private:
	TcxGridCustomDetachedEditForm* FDetachedForm;
	TcxGridCustomDetachedEditFormMetricsInfo* FDetachedFormMetrics;
	TcxGridEditFormDisplayMode FDisplayMode;
	int FEditingRecordIndex;
	bool FModified;
	TcxGridInplaceEditFormContainer* __fastcall GetContainer();
	HIDESBASE TcxGridCustomEditFormOptions* __fastcall GetOptions();
	void __fastcall SetEditingRecordIndex(int AValue);
	void __fastcall SetVisible(bool AValue);
	
protected:
	virtual void __fastcall AdjustEditingItemOnVisibilityChange();
	virtual bool __fastcall CanDataCellAutoHeight();
	virtual TcxGridCustomDetachedEditForm* __fastcall CreateDetachedForm();
	virtual void __fastcall DetachedFormFinalize();
	virtual void __fastcall DetachedFormInitialize();
	virtual Cxedit::TcxCustomEdit* __fastcall GetActiveEdit();
	virtual Cxgridrowlayout::TcxGridRowLayoutContainerClass __fastcall GetContainerClass();
	virtual bool __fastcall GetModified();
	virtual bool __fastcall GetVisible();
	virtual void __fastcall ShowModal();
	virtual void __fastcall ModifiedChanged();
	virtual void __fastcall UpdateInplacePosition();
	virtual void __fastcall ValidateFocusedItem();
	virtual void __fastcall ValuesChanged();
	virtual bool __fastcall CloseOnRecordInserting();
	virtual void __fastcall CloseOnFocusedRecordChanging(Cxgridcustomtableview::TcxCustomGridRecord* &AFocusingRecord);
	System::Uitypes::TModalResult __fastcall CloseQuery(bool ARaiseAbortOnCancel = true);
	virtual void __fastcall ResetEditingRecordIndex();
	virtual void __fastcall CreateDetachedFormMetrics();
	virtual void __fastcall ResetDetachedFormSize();
	virtual void __fastcall RestoreDetachedFormMetrics();
	virtual void __fastcall StoreDetachedFormMetrics();
	virtual bool __fastcall UseDetachedFormDefaultHeight();
	virtual bool __fastcall UseDetachedFormDefaultWidth();
	__property Cxedit::TcxCustomEdit* ActiveEdit = {read=GetActiveEdit};
	__property TcxGridCustomDetachedEditForm* DetachedForm = {read=FDetachedForm};
	__property TcxGridCustomDetachedEditFormMetricsInfo* DetachedFormMetrics = {read=FDetachedFormMetrics};
	__property TcxGridEditFormDisplayMode DisplayMode = {read=FDisplayMode, write=FDisplayMode, nodefault};
	__property int EditingRecordIndex = {read=FEditingRecordIndex, write=SetEditingRecordIndex, nodefault};
	
public:
	__fastcall virtual TcxGridInplaceEditForm(Cxgridcustomtableview::TcxCustomGridTableView* AGridView);
	__fastcall virtual ~TcxGridInplaceEditForm();
	virtual bool __fastcall Close(bool ARaiseAbortOnCancel = true);
	virtual bool __fastcall IsUpdateButtonVisible();
	virtual void __fastcall UpdateModified();
	void __fastcall CancelExecute();
	void __fastcall UpdateExecute();
	__property TcxGridInplaceEditFormContainer* Container = {read=GetContainer};
	__property bool Modified = {read=FModified, nodefault};
	__property TcxGridCustomEditFormOptions* Options = {read=GetOptions};
	__property bool Visible = {read=GetVisible, nodefault};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const Cxgridrowlayout::TcxGridRowLayoutStretch fsNone = (Cxgridrowlayout::TcxGridRowLayoutStretch)(0);
static const Cxgridrowlayout::TcxGridRowLayoutStretch fsHorizontal = (Cxgridrowlayout::TcxGridRowLayoutStretch)(1);
static const Cxgridrowlayout::TcxGridRowLayoutStretch fsVertical = (Cxgridrowlayout::TcxGridRowLayoutStretch)(2);
static const Cxgridrowlayout::TcxGridRowLayoutStretch fsClient = (Cxgridrowlayout::TcxGridRowLayoutStretch)(3);
}	/* namespace Cxgridinplaceeditform */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXGRIDINPLACEEDITFORM)
using namespace Cxgridinplaceeditform;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxgridinplaceeditformHPP
