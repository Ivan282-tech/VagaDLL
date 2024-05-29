// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxGridRowLayout.pas' rev: 35.00 (Windows)

#ifndef CxgridrowlayoutHPP
#define CxgridrowlayoutHPP

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
#include <System.Types.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxgridrowlayout
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxGridRowLayoutLookAndFeel;
class DELPHICLASS TcxGridRowLayoutItemDataCellPainter;
class DELPHICLASS TcxGridRowLayoutItemEditPainter;
class DELPHICLASS TcxGridRowLayoutItemPainter;
class DELPHICLASS TcxGridRowLayoutContainerPainter;
class DELPHICLASS TcxGridRowBaseLayoutItemCaptionViewInfo;
class DELPHICLASS TcxGridRowBaseLayoutItemEditViewInfo;
class DELPHICLASS TcxGridRowLayoutItemEditViewInfo;
class DELPHICLASS TcxGridRowBaseLayoutItemViewInfo;
class DELPHICLASS TcxGridRowLayoutItemViewInfo;
class DELPHICLASS TcxGridRowLayoutItemCaptionOptions;
class DELPHICLASS TcxGridRowBaseLayoutItem;
class DELPHICLASS TcxGridRowLayoutItem;
class DELPHICLASS TcxGridRowLayoutDataCellViewInfo;
class DELPHICLASS TcxGridRowLayoutGridItemViewInfos;
class DELPHICLASS TcxGridRowLayoutContainerViewInfo;
class DELPHICLASS TcxGridRowLayoutContainer;
class DELPHICLASS TcxGridRowLayoutCustomizationController;
class DELPHICLASS TcxGridCustomRowLayoutOptions;
class DELPHICLASS TcxGridRowLayoutController;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TcxGridRowLayoutStretch : unsigned char { fsNone, fsHorizontal, fsVertical, fsClient };

class PASCALIMPLEMENTATION TcxGridRowLayoutLookAndFeel : public Cxgridviewlayoutcontainer::TcxGridCustomLayoutLookAndFeel
{
	typedef Cxgridviewlayoutcontainer::TcxGridCustomLayoutLookAndFeel inherited;
	
public:
	__fastcall virtual TcxGridRowLayoutLookAndFeel(Cxgridcustomtableview::TcxCustomGridTableView* AGridView);
public:
	/* TdxCustomLayoutLookAndFeel.Destroy */ inline __fastcall virtual ~TcxGridRowLayoutLookAndFeel() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridRowLayoutItemDataCellPainter : public Cxgridviewlayoutcontainer::TcxGridViewLayoutItemDataCellPainter
{
	typedef Cxgridviewlayoutcontainer::TcxGridViewLayoutItemDataCellPainter inherited;
	
protected:
	virtual void __fastcall DrawBackground()/* overload */;
public:
	/* TcxCustomGridCellPainter.Create */ inline __fastcall virtual TcxGridRowLayoutItemDataCellPainter(Cxgraphics::TcxCanvas* ACanvas, Cxgridcustomview::TcxCustomGridCellViewInfo* AViewInfo) : Cxgridviewlayoutcontainer::TcxGridViewLayoutItemDataCellPainter(ACanvas, AViewInfo) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridRowLayoutItemDataCellPainter() { }
	
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  DrawBackground(const System::Types::TRect &R){ Cxgridcustomview::TcxCustomGridCellPainter::DrawBackground(R); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridRowLayoutItemEditPainter : public Cxgridviewlayoutcontainer::TcxGridCustomLayoutItemEditPainter
{
	typedef Cxgridviewlayoutcontainer::TcxGridCustomLayoutItemEditPainter inherited;
	
private:
	HIDESBASE TcxGridRowLayoutItemEditViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DrawEdit(Cxgraphics::TcxCanvas* ACanvas);
	
public:
	__property TcxGridRowLayoutItemEditViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TdxCustomLayoutElementPainter.Create */ inline __fastcall virtual TcxGridRowLayoutItemEditPainter(Dxlayoutcontainer::TdxCustomLayoutElementViewInfo* AViewInfo) : Cxgridviewlayoutcontainer::TcxGridCustomLayoutItemEditPainter(AViewInfo) { }
	/* TdxCustomLayoutElementPainter.Destroy */ inline __fastcall virtual ~TcxGridRowLayoutItemEditPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridRowLayoutItemPainter : public Cxgridviewlayoutcontainer::TcxGridCustomLayoutItemPainter
{
	typedef Cxgridviewlayoutcontainer::TcxGridCustomLayoutItemPainter inherited;
	
protected:
	virtual Dxlayoutcontainer::TdxLayoutControlItemControlPainterClass __fastcall GetControlPainterClass();
public:
	/* TdxCustomLayoutElementPainter.Create */ inline __fastcall virtual TcxGridRowLayoutItemPainter(Dxlayoutcontainer::TdxCustomLayoutElementViewInfo* AViewInfo) : Cxgridviewlayoutcontainer::TcxGridCustomLayoutItemPainter(AViewInfo) { }
	/* TdxCustomLayoutElementPainter.Destroy */ inline __fastcall virtual ~TcxGridRowLayoutItemPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridRowLayoutContainerPainter : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Cxgraphics::TcxCanvas* FCanvas;
	TcxGridRowLayoutContainerViewInfo* FViewInfo;
	
protected:
	virtual void __fastcall DrawLayoutGroups();
	__property Cxgraphics::TcxCanvas* Canvas = {read=FCanvas};
	__property TcxGridRowLayoutContainerViewInfo* ViewInfo = {read=FViewInfo};
	
public:
	__fastcall virtual TcxGridRowLayoutContainerPainter(Cxgraphics::TcxCanvas* ACanvas, TcxGridRowLayoutContainerViewInfo* AViewInfo);
	virtual void __fastcall Paint();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxGridRowLayoutContainerPainter() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TcxGridRowLayoutContainerPainterClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridRowBaseLayoutItemCaptionViewInfo : public Cxgridviewlayoutcontainer::TcxGridCustomLayoutItemCaptionViewInfo
{
	typedef Cxgridviewlayoutcontainer::TcxGridCustomLayoutItemCaptionViewInfo inherited;
	
private:
	HIDESBASE TcxGridRowBaseLayoutItemViewInfo* __fastcall GetItemViewInfo();
	
protected:
	virtual System::UnicodeString __fastcall GetText();
	__property TcxGridRowBaseLayoutItemViewInfo* ItemViewInfo = {read=GetItemViewInfo};
public:
	/* TdxLayoutLabeledItemCaptionViewInfo.Create */ inline __fastcall virtual TcxGridRowBaseLayoutItemCaptionViewInfo(Dxlayoutcontainer::TdxCustomLayoutItemViewInfo* AItemViewInfo) : Cxgridviewlayoutcontainer::TcxGridCustomLayoutItemCaptionViewInfo(AItemViewInfo) { }
	
public:
	/* TdxCustomLayoutItemElementViewInfo.Destroy */ inline __fastcall virtual ~TcxGridRowBaseLayoutItemCaptionViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridRowBaseLayoutItemEditViewInfo : public Cxgridviewlayoutcontainer::TcxGridCustomLayoutItemEditViewInfo
{
	typedef Cxgridviewlayoutcontainer::TcxGridCustomLayoutItemEditViewInfo inherited;
	
private:
	HIDESBASE TcxGridRowBaseLayoutItem* __fastcall GetItem();
	
protected:
	virtual int __fastcall GetMinValueWidth();
	__property TcxGridRowBaseLayoutItem* Item = {read=GetItem};
public:
	/* TdxCustomLayoutItemElementViewInfo.Create */ inline __fastcall virtual TcxGridRowBaseLayoutItemEditViewInfo(Dxlayoutcontainer::TdxCustomLayoutItemViewInfo* AItemViewInfo) : Cxgridviewlayoutcontainer::TcxGridCustomLayoutItemEditViewInfo(AItemViewInfo) { }
	/* TdxCustomLayoutItemElementViewInfo.Destroy */ inline __fastcall virtual ~TcxGridRowBaseLayoutItemEditViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridRowLayoutItemEditViewInfo : public TcxGridRowBaseLayoutItemEditViewInfo
{
	typedef TcxGridRowBaseLayoutItemEditViewInfo inherited;
	
private:
	HIDESBASE TcxGridRowLayoutItemViewInfo* __fastcall GetItemViewInfo();
	
protected:
	virtual Cxgridcustomtableview::TcxCustomGridRecord* __fastcall GetGridRecord();
	virtual bool __fastcall IsValueHeightDependOnData();
	__property TcxGridRowLayoutItemViewInfo* ItemViewInfo = {read=GetItemViewInfo};
public:
	/* TdxCustomLayoutItemElementViewInfo.Create */ inline __fastcall virtual TcxGridRowLayoutItemEditViewInfo(Dxlayoutcontainer::TdxCustomLayoutItemViewInfo* AItemViewInfo) : TcxGridRowBaseLayoutItemEditViewInfo(AItemViewInfo) { }
	/* TdxCustomLayoutItemElementViewInfo.Destroy */ inline __fastcall virtual ~TcxGridRowLayoutItemEditViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridRowBaseLayoutItemViewInfo : public Cxgridviewlayoutcontainer::TcxGridCustomLayoutItemViewInfo
{
	typedef Cxgridviewlayoutcontainer::TcxGridCustomLayoutItemViewInfo inherited;
	
private:
	HIDESBASE TcxGridRowBaseLayoutItem* __fastcall GetItem();
	
protected:
	virtual void __fastcall DoAssignBounds(Dxlayoutcontainer::TdxCustomLayoutElementViewInfo* ASource);
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &AClientBounds);
	virtual void __fastcall DoSetOffset(const System::Types::TPoint &AValue, const System::Types::TPoint &ADiff);
	virtual bool __fastcall GetActuallyVisible();
	virtual Dxlayoutcontainer::TdxCustomLayoutItemCaptionViewInfoClass __fastcall GetCaptionViewInfoClass();
	virtual Dxlayoutcontainer::TdxLayoutControlItemControlViewInfoClass __fastcall GetControlViewInfoClass();
	__property TcxGridRowBaseLayoutItem* Item = {read=GetItem};
	
public:
	virtual void __fastcall Calculate(const System::Types::TRect &ABounds);
public:
	/* TdxCustomLayoutItemViewInfo.Create */ inline __fastcall virtual TcxGridRowBaseLayoutItemViewInfo(Dxlayoutcontainer::TdxLayoutContainerViewInfo* AContainerViewInfo, Dxlayoutcontainer::TdxLayoutGroupViewInfo* AParentViewInfo, Dxlayoutcontainer::TdxCustomLayoutItemViewData* AViewData) : Cxgridviewlayoutcontainer::TcxGridCustomLayoutItemViewInfo(AContainerViewInfo, AParentViewInfo, AViewData) { }
	/* TdxCustomLayoutItemViewInfo.Destroy */ inline __fastcall virtual ~TcxGridRowBaseLayoutItemViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridRowLayoutItemViewInfo : public TcxGridRowBaseLayoutItemViewInfo
{
	typedef TcxGridRowBaseLayoutItemViewInfo inherited;
	
private:
	Cxgridviewlayoutcontainer::TcxGridLayoutContainerViewInfo* __fastcall GetContainerViewInfo();
	HIDESBASE TcxGridRowLayoutItemEditViewInfo* __fastcall GetControlViewInfo();
	HIDESBASE TcxGridRowLayoutDataCellViewInfo* __fastcall GetGridItemViewInfo();
	HIDESBASE TcxGridRowLayoutItem* __fastcall GetItem();
	
protected:
	virtual Cxgridviewlayoutcontainer::TcxGridViewLayoutItemDataCellViewInfo* __fastcall GetCurrentGridItemViewInfo();
	virtual Dxlayoutcontainer::TdxLayoutControlItemControlViewInfoClass __fastcall GetControlViewInfoClass();
	virtual Dxlayoutcontainer::TdxCustomLayoutItemPainterClass __fastcall GetPainterClass();
	
public:
	__property Cxgridviewlayoutcontainer::TcxGridLayoutContainerViewInfo* ContainerViewInfo = {read=GetContainerViewInfo};
	__property TcxGridRowLayoutItemEditViewInfo* ControlViewInfo = {read=GetControlViewInfo};
	__property TcxGridRowLayoutDataCellViewInfo* GridItemViewInfo = {read=GetGridItemViewInfo};
	__property TcxGridRowLayoutItem* Item = {read=GetItem};
public:
	/* TdxCustomLayoutItemViewInfo.Create */ inline __fastcall virtual TcxGridRowLayoutItemViewInfo(Dxlayoutcontainer::TdxLayoutContainerViewInfo* AContainerViewInfo, Dxlayoutcontainer::TdxLayoutGroupViewInfo* AParentViewInfo, Dxlayoutcontainer::TdxCustomLayoutItemViewData* AViewData) : TcxGridRowBaseLayoutItemViewInfo(AContainerViewInfo, AParentViewInfo, AViewData) { }
	/* TdxCustomLayoutItemViewInfo.Destroy */ inline __fastcall virtual ~TcxGridRowLayoutItemViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridRowLayoutItemCaptionOptions : public Cxgridviewlayoutcontainer::TcxGridCustomLayoutItemCaptionOptions
{
	typedef Cxgridviewlayoutcontainer::TcxGridCustomLayoutItemCaptionOptions inherited;
	
__published:
	__property AlignHorz = {default=0};
	__property AlignVert = {default=1};
	__property Glyph;
	__property ImageIndex = {default=-1};
	__property Layout = {default=0};
	__property Visible = {default=1};
	__property VisibleElements = {default=3};
	__property Width = {default=0};
public:
	/* TdxLayoutLabeledItemCustomCaptionOptions.Create */ inline __fastcall virtual TcxGridRowLayoutItemCaptionOptions(Dxlayoutcontainer::TdxCustomLayoutItem* AItem) : Cxgridviewlayoutcontainer::TcxGridCustomLayoutItemCaptionOptions(AItem) { }
	
public:
	/* TdxCustomLayoutItemCaptionOptions.Destroy */ inline __fastcall virtual ~TcxGridRowLayoutItemCaptionOptions() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxGridRowBaseLayoutItem : public Cxgridviewlayoutcontainer::TcxGridCustomLayoutItem
{
	typedef Cxgridviewlayoutcontainer::TcxGridCustomLayoutItem inherited;
	
private:
	System::UnicodeString FCaptionSuffix;
	int FMinValueWidth;
	
protected:
	virtual System::UnicodeString __fastcall GetCaptionSuffix();
	virtual int __fastcall GetMinValueWidth();
	virtual Dxlayoutcontainer::TdxCustomLayoutItemViewInfoClass __fastcall GetViewInfoClass();
	__property System::UnicodeString CaptionSuffix = {read=GetCaptionSuffix};
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property int MinValueWidth = {read=GetMinValueWidth, nodefault};
public:
	/* TcxGridCustomLayoutItem.Create */ inline __fastcall virtual TcxGridRowBaseLayoutItem(System::Classes::TComponent* AOwner) : Cxgridviewlayoutcontainer::TcxGridCustomLayoutItem(AOwner) { }
	
public:
	/* TdxCustomLayoutItem.Destroy */ inline __fastcall virtual ~TcxGridRowBaseLayoutItem() { }
	
};


class PASCALIMPLEMENTATION TcxGridRowLayoutItem : public TcxGridRowBaseLayoutItem
{
	typedef TcxGridRowBaseLayoutItem inherited;
	
private:
	HIDESBASE TcxGridRowLayoutItemCaptionOptions* __fastcall GetCaptionOptions();
	TcxGridRowLayoutController* __fastcall GetLayoutController();
	HIDESBASE void __fastcall SetCaptionOptions(TcxGridRowLayoutItemCaptionOptions* Value);
	
protected:
	__classmethod virtual Dxlayoutcontainer::TdxCustomLayoutItemCaptionOptionsClass __fastcall GetCaptionOptionsClass();
	virtual System::UnicodeString __fastcall GetCaptionSuffix();
	virtual int __fastcall GetMinValueWidth();
	virtual Dxlayoutcontainer::TdxCustomLayoutItemViewInfoClass __fastcall GetViewInfoClass();
	__property TcxGridRowLayoutController* LayoutController = {read=GetLayoutController};
	
public:
	virtual bool __fastcall IsContainerRestoring();
	
__published:
	__property TcxGridRowLayoutItemCaptionOptions* CaptionOptions = {read=GetCaptionOptions, write=SetCaptionOptions};
public:
	/* TcxGridCustomLayoutItem.Create */ inline __fastcall virtual TcxGridRowLayoutItem(System::Classes::TComponent* AOwner) : TcxGridRowBaseLayoutItem(AOwner) { }
	
public:
	/* TdxCustomLayoutItem.Destroy */ inline __fastcall virtual ~TcxGridRowLayoutItem() { }
	
};


typedef System::TMetaClass* TcxGridRowLayoutItemClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridRowLayoutDataCellViewInfo : public Cxgridviewlayoutcontainer::TcxGridViewLayoutItemDataCellViewInfo
{
	typedef Cxgridviewlayoutcontainer::TcxGridViewLayoutItemDataCellViewInfo inherited;
	
private:
	HIDESBASE TcxGridRowLayoutItemViewInfo* __fastcall GetLayoutItemViewInfo();
	
protected:
	virtual Cxgridcustomview::TcxCustomGridCellPainterClass __fastcall GetPainterClass();
	__property TcxGridRowLayoutItemViewInfo* LayoutItemViewInfo = {read=GetLayoutItemViewInfo};
public:
	/* TcxGridTableDataCellViewInfo.Create */ inline __fastcall virtual TcxGridRowLayoutDataCellViewInfo(Cxgridcustomtableview::TcxCustomGridRecordViewInfo* ARecordViewInfo, Cxgridcustomtableview::TcxCustomGridTableItem* AItem) : Cxgridviewlayoutcontainer::TcxGridViewLayoutItemDataCellViewInfo(ARecordViewInfo, AItem) { }
	/* TcxGridTableDataCellViewInfo.Destroy */ inline __fastcall virtual ~TcxGridRowLayoutDataCellViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridRowLayoutGridItemViewInfos : public Cxclasses::TcxObjectList
{
	typedef Cxclasses::TcxObjectList inherited;
	
public:
	TcxGridRowLayoutDataCellViewInfo* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TcxGridRowLayoutDataCellViewInfo* __fastcall GetItem(int Index);
	
public:
	virtual Cxgridviewlayoutcontainer::TcxGridViewLayoutItemDataCellViewInfo* __fastcall FindCellViewInfo(Cxgridcustomtableview::TcxCustomGridTableItem* AItem);
	virtual Cxgridcustomview::TcxCustomGridHitTest* __fastcall GetHitTest(const System::Types::TPoint &P);
	virtual bool __fastcall IsHotTracked();
	virtual void __fastcall ResetStates();
	__property TcxGridRowLayoutDataCellViewInfo* Items[int Index] = {read=GetItem/*, default*/};
public:
	/* TcxObjectList.Create */ inline __fastcall TcxGridRowLayoutGridItemViewInfos(bool AOwnObjects) : Cxclasses::TcxObjectList(AOwnObjects) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TcxGridRowLayoutGridItemViewInfos() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridRowLayoutContainerViewInfo : public Cxgridviewlayoutcontainer::TcxGridRecordLayoutContainerViewInfo
{
	typedef Cxgridviewlayoutcontainer::TcxGridRecordLayoutContainerViewInfo inherited;
	
private:
	TcxGridRowLayoutContainer* __fastcall GetContainer();
	Cxgridcustomtableview::TcxCustomGridTableView* __fastcall GetGridView();
	int __fastcall GetRootMinHeight();
	
protected:
	virtual TcxGridRowLayoutContainerPainterClass __fastcall GetPainterClass();
	virtual Dxlayoutcontainer::TdxCustomLayoutItemViewDataClass __fastcall GetViewDataClass(Dxlayoutcontainer::TdxCustomLayoutItem* AItem);
	__property Cxgridcustomtableview::TcxCustomGridTableView* GridView = {read=GetGridView};
	
public:
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Calculate(bool ARecreateViewData);
	virtual bool __fastcall CanItemValueAutoHeight();
	__property TcxGridRowLayoutContainer* Container = {read=GetContainer};
	__property int RootMinHeight = {read=GetRootMinHeight, nodefault};
public:
	/* TcxGridRecordLayoutContainerViewInfo.Create */ inline __fastcall virtual TcxGridRowLayoutContainerViewInfo(Dxlayoutcontainer::TdxLayoutContainer* AContainer, Cxgridcustomtableview::TcxCustomGridRecordViewInfo* ARecordViewInfo) : Cxgridviewlayoutcontainer::TcxGridRecordLayoutContainerViewInfo(AContainer, ARecordViewInfo) { }
	
public:
	/* TdxLayoutContainerViewInfo.Destroy */ inline __fastcall virtual ~TcxGridRowLayoutContainerViewInfo() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxGridRowLayoutContainer : public Cxgridviewlayoutcontainer::TcxGridCustomLayoutContainer
{
	typedef Cxgridviewlayoutcontainer::TcxGridCustomLayoutContainer inherited;
	
private:
	bool FIsLayoutCreated;
	TcxGridRowLayoutController* FLayoutController;
	int __fastcall GetRootMinHeight();
	Cxgridviewlayoutcontainer::TcxGridLayoutContainerViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall AfterRestoring();
	virtual void __fastcall DoInitialize();
	virtual System::Types::TRect __fastcall GetClientBounds();
	virtual Vcl::Graphics::TFont* __fastcall GetDefaultFont();
	virtual TcxGridRowLayoutItemClass __fastcall GetItemClass();
	virtual System::Classes::TComponent* __fastcall GetItemsOwner();
	virtual Dxlayoutcontainer::TdxLayoutContainerViewInfoClass __fastcall GetViewInfoClass();
	virtual void __fastcall SetDefaultItemName(Dxlayoutcontainer::TdxCustomLayoutItem* AItem);
	virtual void __fastcall UpdateRootName();
	virtual bool __fastcall CanCreateLayoutItem(Cxgridcustomtableview::TcxCustomGridTableItem* AGridItem);
	virtual bool __fastcall CanSetItemName(Dxlayoutcontainer::TdxCustomLayoutItem* AItem);
	void __fastcall CheckItemAlignment(Dxlayoutcontainer::TdxCustomLayoutItem* AItem);
	void __fastcall CheckItemsAlignment();
	void __fastcall CreateLayoutItem(Cxgridcustomtableview::TcxCustomGridTableItem* AGridItem);
	void __fastcall CreateLayoutItems();
	virtual void __fastcall CheckRootGroupLayoutDirection();
	virtual void __fastcall CopyCustomizationSettings(Dxlayoutcontainer::TdxLayoutContainer* AContainer);
	virtual void __fastcall DoChanged();
	virtual void __fastcall InitLayout();
	virtual bool __fastcall NeedStretchRecordHeight();
	virtual bool __fastcall NeedStretchRecordWidth();
	virtual void __fastcall SetItemForGridItem(Cxgridcustomtableview::TcxCustomGridTableItem* AGridItem, TcxGridRowLayoutItem* AItem) = 0 ;
	virtual bool __fastcall CanPlaceItem(TcxGridRowLayoutItem* AItem);
	void __fastcall CreateColumnGroup();
	virtual void __fastcall CreateGroups();
	void __fastcall FixUpItemsOwnership();
	Dxlayoutcontainer::TdxCustomLayoutGroup* __fastcall GetGroupForPlacing();
	System::Classes::TComponentName __fastcall GetValidItemName(const System::Classes::TComponentName AName, bool ACheckExisting);
	virtual void __fastcall PlaceItems();
	virtual void __fastcall Reset();
	__property TcxGridRowLayoutController* LayoutController = {read=FLayoutController};
	__property int RootMinHeight = {read=GetRootMinHeight, nodefault};
	
public:
	__fastcall virtual TcxGridRowLayoutContainer(TcxGridRowLayoutController* ALayoutController);
	virtual void __fastcall CreateLayout();
	virtual void __fastcall DestroyLayout();
	virtual void __fastcall RecreateLayout();
	virtual void __fastcall CheckItemNames(const System::UnicodeString AOldName, const System::UnicodeString ANewName);
	__property bool IsLayoutCreated = {read=FIsLayoutCreated, nodefault};
	__property Cxgridviewlayoutcontainer::TcxGridLayoutContainerViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TdxLayoutContainer.Destroy */ inline __fastcall virtual ~TcxGridRowLayoutContainer() { }
	
};


typedef System::TMetaClass* TcxGridRowLayoutContainerClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridRowLayoutCustomizationController : public Cxgridviewlayoutcontainer::TcxGridLayoutCustomizationController
{
	typedef Cxgridviewlayoutcontainer::TcxGridLayoutCustomizationController inherited;
	
protected:
	virtual void __fastcall DoCustomization();
	virtual int __fastcall GetFormDefaultHeight();
	virtual int __fastcall GetFormDefaultWidth();
public:
	/* TcxGridViewHandler.Create */ inline __fastcall virtual TcxGridRowLayoutCustomizationController(Cxgridcustomview::TcxCustomGridView* AGridView) : Cxgridviewlayoutcontainer::TcxGridLayoutCustomizationController(AGridView) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxGridRowLayoutCustomizationController() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridCustomRowLayoutOptions : public Cxgridcustomview::TcxCustomGridOptions
{
	typedef Cxgridcustomview::TcxCustomGridOptions inherited;
	
private:
	bool FActive;
	System::UnicodeString FCaptionSuffix;
	bool FCellBorders;
	int FDefaultColumnCount;
	TcxGridRowLayoutStretch FDefaultStretch;
	bool FIsAssigning;
	int FMinValueWidth;
	bool FUseDefaultLayout;
	void __fastcall SetActive(bool AValue);
	void __fastcall SetCaptionSuffix(const System::UnicodeString AValue);
	void __fastcall SetCellBorders(const bool AValue);
	void __fastcall SetDefaultColumnCount(int AValue);
	void __fastcall SetDefaultStretch(const TcxGridRowLayoutStretch AValue);
	void __fastcall SetMinValueWidth(int AValue);
	void __fastcall SetUseDefaultLayout(bool AValue);
	
protected:
	virtual void __fastcall ActiveChanged();
	virtual void __fastcall ChangeScale(int M, int D);
	virtual void __fastcall DoAssign(System::Classes::TPersistent* Source);
	virtual System::UnicodeString __fastcall GetLayoutLocationName();
	virtual TcxGridRowLayoutController* __fastcall GetLayoutController() = 0 ;
	virtual System::UnicodeString __fastcall GetResetCustomSettingLayoutQuery();
	virtual bool __fastcall NeedStretchRecordHeight();
	virtual bool __fastcall NeedStretchRecordWidth();
	virtual void __fastcall UseDefaultLayoutChanged();
	__property bool Active = {read=FActive, write=SetActive, default=0};
	__property System::UnicodeString CaptionSuffix = {read=FCaptionSuffix, write=SetCaptionSuffix};
	__property int MinValueWidth = {read=FMinValueWidth, write=SetMinValueWidth, default=80};
	__property TcxGridRowLayoutController* LayoutController = {read=GetLayoutController};
	
public:
	__fastcall virtual TcxGridCustomRowLayoutOptions(Cxgridcustomview::TcxCustomGridView* AGridView);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property bool CellBorders = {read=FCellBorders, write=SetCellBorders, default=1};
	__property int DefaultColumnCount = {read=FDefaultColumnCount, write=SetDefaultColumnCount, default=2};
	__property TcxGridRowLayoutStretch DefaultStretch = {read=FDefaultStretch, write=SetDefaultStretch, default=0};
	__property bool UseDefaultLayout = {read=FUseDefaultLayout, write=SetUseDefaultLayout, default=1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxGridCustomRowLayoutOptions() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridRowLayoutController : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TcxGridRowLayoutContainer* FContainer;
	TcxGridRowLayoutCustomizationController* FCustomizationController;
	Cxgridcustomtableview::TcxCustomGridTableView* FGridView;
	TcxGridRowLayoutLookAndFeel* FLayoutLookAndFeel;
	TcxGridCustomRowLayoutOptions* __fastcall GetOptions();
	
protected:
	virtual bool __fastcall CanDataCellAutoHeight();
	virtual void __fastcall ChangeScale(int M, int D);
	virtual TcxGridRowLayoutCustomizationController* __fastcall CreateCustomizationController() = 0 ;
	virtual TcxGridRowLayoutLookAndFeel* __fastcall CreateLayoutLookAndFeel();
	virtual TcxGridRowLayoutContainerClass __fastcall GetContainerClass();
	virtual TcxGridCustomRowLayoutOptions* __fastcall GetOptionsInstance() = 0 ;
	virtual void __fastcall InitializeContainer();
	virtual bool __fastcall IsContainerRestoring();
	virtual void __fastcall Store(System::Classes::TGetChildProc Proc);
	virtual void __fastcall UpdateLayoutLookAndFeel();
	__property TcxGridRowLayoutCustomizationController* CustomizationController = {read=FCustomizationController};
	
public:
	__fastcall virtual TcxGridRowLayoutController(Cxgridcustomtableview::TcxCustomGridTableView* AGridView);
	__fastcall virtual ~TcxGridRowLayoutController();
	virtual void __fastcall AfterRestoring();
	virtual void __fastcall AssignStructure(TcxGridRowLayoutController* ASource);
	virtual void __fastcall BeforeRestoring();
	virtual void __fastcall CheckContainerName(const System::UnicodeString AOldName, const System::UnicodeString ANewName);
	virtual void __fastcall CopyCustomizationSetting(Dxlayoutcontainer::TdxLayoutContainer* AContainer);
	virtual void __fastcall Init();
	virtual void __fastcall ShowCustomizationForm();
	__property TcxGridRowLayoutContainer* Container = {read=FContainer};
	__property Cxgridcustomtableview::TcxCustomGridTableView* GridView = {read=FGridView};
	__property TcxGridCustomRowLayoutOptions* Options = {read=GetOptions};
	__property TcxGridRowLayoutLookAndFeel* LayoutLookAndFeel = {read=FLayoutLookAndFeel};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 cxGridRowLayoutMinValueWidth = System::Int8(0x50);
}	/* namespace Cxgridrowlayout */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXGRIDROWLAYOUT)
using namespace Cxgridrowlayout;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxgridrowlayoutHPP
