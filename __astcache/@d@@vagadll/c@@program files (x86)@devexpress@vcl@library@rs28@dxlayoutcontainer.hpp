// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxLayoutContainer.pas' rev: 35.00 (Windows)

#ifndef DxlayoutcontainerHPP
#define DxlayoutcontainerHPP

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
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Graphics.hpp>
#include <Winapi.MultiMon.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Controls.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Generics.Collections.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.IniFiles.hpp>
#include <System.Contnrs.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.ActnList.hpp>
#include <dxCore.hpp>
#include <dxCoreGraphics.hpp>
#include <dxCoreClasses.hpp>
#include <dxMessages.hpp>
#include <dxGDIPlusClasses.hpp>
#include <cxClasses.hpp>
#include <cxGeometry.hpp>
#include <cxGraphics.hpp>
#include <cxControls.hpp>
#include <dxForms.hpp>
#include <cxLookAndFeels.hpp>
#include <cxLibraryConsts.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxStorage.hpp>
#include <dxLayoutLookAndFeels.hpp>
#include <dxLayoutCommon.hpp>
#include <dxLayoutSelection.hpp>
#include <cxPC.hpp>
#include <cxScrollBar.hpp>
#include <dxFormattedText.hpp>
#include <dxCheckGroupBox.hpp>
#include <System.Types.hpp>
#include <System.Actions.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxlayoutcontainer
{
//-- forward type declarations -----------------------------------------------
struct TdxLayoutAlign;
struct TdxLayoutRealAlign;
struct TdxAbsPoint;
struct TdxAbsRect;
struct TdxLayoutDragDropInfo;
__interface DELPHIINTERFACE IdxLayoutContainerOwner;
typedef System::DelphiInterface<IdxLayoutContainerOwner> _di_IdxLayoutContainerOwner;
class DELPHICLASS TdxUndoRedoManager;
class DELPHICLASS TdxCustomLayoutItemOptions;
class DELPHICLASS TdxLayoutControlCustomCustomizeForm;
class DELPHICLASS TdxCustomLayoutItemImageOptions;
class DELPHICLASS TdxCustomLayoutItemCaptionOptions;
class DELPHICLASS TdxLayoutSizeOptions;
class DELPHICLASS TdxLayoutOffsets;
class DELPHICLASS TdxLayoutPadding;
class DELPHICLASS TdxLayoutCustomFloatForm;
class DELPHICLASS TdxCustomLayoutItem;
class DELPHICLASS TdxLayoutBasicItem;
class DELPHICLASS TdxLayoutNonLabeledItemCaptionOptions;
class DELPHICLASS TdxLayoutNonLabeledItem;
class DELPHICLASS TdxLayoutEmptySpaceItem;
class DELPHICLASS TdxLayoutDirectionalItem;
class DELPHICLASS TdxLayoutSplitterItem;
class DELPHICLASS TdxCustomLayoutItemStorableCaptionOptions;
class DELPHICLASS TdxLayoutLabeledItemCustomCaptionOptions;
class DELPHICLASS TdxCustomLayoutLabeledItem;
class DELPHICLASS TdxLayoutSeparatorItemCaptionOptions;
class DELPHICLASS TdxLayoutSeparatorItem;
class DELPHICLASS TdxLayoutLabeledItemCaptionOptions;
class DELPHICLASS TdxLayoutLabeledItem;
class DELPHICLASS TdxLayoutItemCaptionOptions;
class DELPHICLASS TdxLayoutImageItem;
class DELPHICLASS TdxCustomLayoutCheckableItemCaptionOptions;
class DELPHICLASS TdxLayoutCheckBoxItemCaptionOptions;
class DELPHICLASS TdxLayoutRadioButtonItemCaptionOptions;
class DELPHICLASS TdxLayoutCheckBoxItemCheckBoxOptions;
class DELPHICLASS TdxCustomLayoutCheckableItemActionLink;
class DELPHICLASS TdxLayoutCheckBoxItemActionLink;
class DELPHICLASS TdxLayoutRadioButtonItemActionLink;
class DELPHICLASS TdxCustomLayoutCheckableItem;
class DELPHICLASS TdxLayoutCheckBoxItem;
class DELPHICLASS TdxLayoutRadioButtonItem;
class DELPHICLASS TdxCustomLayoutControlAdapter;
class DELPHICLASS TdxLayoutItemControlOptions;
class DELPHICLASS TdxLayoutControlItem;
class DELPHICLASS TdxLayoutItem;
class DELPHICLASS TdxLayoutGroupHelper;
class DELPHICLASS TdxLayoutHorizontalGroupHelper;
class DELPHICLASS TdxLayoutVerticalGroupHelper;
class DELPHICLASS TdxLayoutTabbedGroupHelper;
class DELPHICLASS TdxLayoutTabbedOptions;
class DELPHICLASS TdxCustomLayoutGroupButton;
class DELPHICLASS TdxLayoutGroupButton;
class DELPHICLASS TdxLayoutGroupCheckBoxButton;
class DELPHICLASS TdxCustomLayoutGroupButtons;
class DELPHICLASS TdxLayoutGroupButtons;
class DELPHICLASS TdxLayoutGroupButtonOptions;
class DELPHICLASS TdxLayoutGroupCaptionOptions;
class DELPHICLASS TdxLayoutGroupScrollOptions;
class DELPHICLASS TdxCustomLayoutGroup;
class DELPHICLASS TdxCustomLayoutAutoCreatedGroup;
class DELPHICLASS TdxLayoutAutoCreatedGroup;
class DELPHICLASS TdxLayoutAutoCreatedWrappingGroup;
class DELPHICLASS TdxLayoutGroup;
class DELPHICLASS TdxLayoutAlignmentConstraint;
class DELPHICLASS TdxLayoutContainerPersistent;
class DELPHICLASS TdxLayoutContainerFocusController;
class DELPHICLASS TdxLayoutContainerCustomizationHelper;
class DELPHICLASS TdxLayoutImageOptions;
class DELPHICLASS TdxLayoutContainer;
class DELPHICLASS TdxCustomLayoutHitTest;
class DELPHICLASS TdxCustomLayoutItemHitTest;
class DELPHICLASS TdxLayoutNoneHitTest;
class DELPHICLASS TdxLayoutBasicItemHitTest;
class DELPHICLASS TdxLayoutItemHitTest;
class DELPHICLASS TdxLayoutGroupHitTest;
class DELPHICLASS TdxLayoutTabbedGroupHitTest;
class DELPHICLASS TdxLayoutFloatingRootHitTest;
class DELPHICLASS TdxLayoutClientAreaHitTest;
class DELPHICLASS TdxLayoutSizeHitTest;
class DELPHICLASS TdxLayoutSplitterHitTest;
class DELPHICLASS TdxLayoutCustomizeFormHitTest;
class DELPHICLASS TdxLayoutCustomizeFormAvailableItemsHitTest;
class DELPHICLASS TdxLayoutCustomizeFormTreeViewItemsHitTest;
class DELPHICLASS TdxCustomLayoutElementPainter;
class DELPHICLASS TdxCustomLayoutItemElementPainter;
class DELPHICLASS TdxCustomLayoutItemCaptionPainter;
class DELPHICLASS TdxLayoutGroupCaptionPainter;
class DELPHICLASS TdxLayoutControlItemCaptionPainter;
class DELPHICLASS TdxLayoutItemCaptionPainter;
class DELPHICLASS TdxCustomLayoutItemPainter;
class DELPHICLASS TdxLayoutControlItemControlPainter;
class DELPHICLASS TdxLayoutItemControlPainter;
class DELPHICLASS TdxLayoutBasicItemPainter;
class DELPHICLASS TdxLayoutEmptySpaceItemPainter;
class DELPHICLASS TdxLayoutDirectionalItemPainter;
class DELPHICLASS TdxLayoutSplitterItemPainter;
class DELPHICLASS TdxLayoutLabeledItemPainter;
class DELPHICLASS TdxLayoutSeparatorItemPainter;
class DELPHICLASS TdxLayoutImageItemPainter;
class DELPHICLASS TdxLayoutCheckBoxItemPainter;
class DELPHICLASS TdxLayoutRadioButtonItemPainter;
class DELPHICLASS TdxLayoutControlItemPainter;
class DELPHICLASS TdxLayoutItemPainter;
class DELPHICLASS TdxLayoutGroupButtonPainter;
class DELPHICLASS TdxLayoutGroupCheckBoxButtonPainter;
class DELPHICLASS TdxLayoutGroupPainter;
class DELPHICLASS TdxLayoutContainerPainter;
class DELPHICLASS TdxCustomLayoutElementViewInfo;
class DELPHICLASS TdxCustomLayoutItemElementViewInfo;
struct TdxTextSizeCache;
class DELPHICLASS TdxCustomLayoutItemCaptionViewInfo;
class DELPHICLASS TdxCustomLayoutItemViewData;
class DELPHICLASS TdxLayoutItemViewDataList;
class DELPHICLASS TdxCustomLayoutItemViewInfo;
class DELPHICLASS TdxLayoutBasicItemCaptionViewInfo;
class DELPHICLASS TdxLayoutEmptySpaceItemCaptionViewInfo;
class DELPHICLASS TdxLayoutLabeledItemCaptionViewInfo;
class DELPHICLASS TdxLayoutControlItemCaptionViewInfo;
class DELPHICLASS TdxLayoutItemCaptionViewInfo;
class DELPHICLASS TdxLayoutCellItemCellViewInfo;
class DELPHICLASS TdxLayoutControlItemControlViewInfo;
class DELPHICLASS TdxLayoutItemControlViewInfo;
class DELPHICLASS TdxLayoutBasicItemViewInfo;
class DELPHICLASS TdxLayoutEmptySpaceItemViewInfo;
class DELPHICLASS TdxLayoutDirectionalItemViewInfo;
class DELPHICLASS TdxLayoutSplitterItemViewInfo;
class DELPHICLASS TdxLayoutLabeledItemViewInfo;
class DELPHICLASS TdxLayoutCellItemViewInfo;
class DELPHICLASS TdxLayoutSeparatorItemCaptionViewInfo;
class DELPHICLASS TdxLayoutSeparatorItemViewInfo;
class DELPHICLASS TdxLayoutImageItemViewInfo;
class DELPHICLASS TdxCustomLayoutCheckableItemCaptionViewInfo;
class DELPHICLASS TdxCustomLayoutCheckableItemViewInfo;
class DELPHICLASS TdxLayoutCheckBoxItemViewInfo;
class DELPHICLASS TdxLayoutRadioButtonItemViewInfo;
class DELPHICLASS TdxLayoutControlItemViewInfo;
class DELPHICLASS TdxLayoutItemViewInfo;
class DELPHICLASS TdxLayoutGroupCaptionViewInfo;
struct TItemInfo;
class DELPHICLASS TdxLayoutGroupViewInfoSpecific;
class DELPHICLASS TdxLayoutGroupViewInfoHorizontalSpecific;
class DELPHICLASS TdxLayoutGroupViewInfoVerticalSpecific;
class DELPHICLASS TdxLayoutTabbedController;
class DELPHICLASS TdxLayoutTabbedViewInfo;
class DELPHICLASS TdxTabControlElementViewInfo;
class DELPHICLASS TdxLayoutGroupViewInfoTabbedSpecific;
class DELPHICLASS TdxLayoutGroupButtonViewInfo;
class DELPHICLASS TdxLayoutGroupCheckBoxButtonViewInfo;
class DELPHICLASS TdxLayoutGroupButtonsViewInfo;
class DELPHICLASS TdxLayoutGroupViewData;
class DELPHICLASS TdxLayoutGroupViewInfo;
class DELPHICLASS TdxLayoutRootViewInfo;
class DELPHICLASS TdxLayoutContainerViewInfo;
//-- type declarations -------------------------------------------------------
typedef System::TMetaClass* TdxCustomLayoutItemClass;

typedef System::TMetaClass* TdxCustomLayoutGroupClass;

typedef System::TMetaClass* TdxLayoutAutoCreatedGroupClass;

typedef System::TMetaClass* TdxLayoutGroupClass;

typedef System::TMetaClass* TdxLayoutEmptySpaceItemClass;

typedef System::TMetaClass* TdxLayoutLabeledItemClass;

typedef System::TMetaClass* TdxLayoutSeparatorItemClass;

typedef System::TMetaClass* TdxLayoutGroupHelperClass;

typedef System::TMetaClass* TdxLayoutContainerPainterClass;

typedef System::TMetaClass* TdxCustomLayoutItemPainterClass;

typedef System::TMetaClass* TdxLayoutBasicItemPainterClass;

typedef System::TMetaClass* TdxLayoutItemPainterClass;

typedef System::TMetaClass* TdxLayoutGroupPainterClass;

typedef System::TMetaClass* TdxLayoutControlItemControlPainterClass;

typedef System::TMetaClass* TdxLayoutItemControlPainterClass;

typedef System::TMetaClass* TdxCustomLayoutItemCaptionPainterClass;

typedef System::TMetaClass* TdxLayoutGroupButtonPainterClass;

typedef System::TMetaClass* TdxLayoutEmptySpaceItemPainterClass;

typedef System::TMetaClass* TdxLayoutDirectionalItemPainterClass;

typedef System::TMetaClass* TdxLayoutSeparatorItemPainterClass;

typedef System::TMetaClass* TdxLayoutSplitterItemPainterClass;

typedef System::TMetaClass* TdxLayoutContainerViewInfoClass;

typedef System::TMetaClass* TdxCustomLayoutItemViewInfoClass;

typedef System::TMetaClass* TdxLayoutCellItemCellViewInfoClass;

typedef System::TMetaClass* TdxLayoutItemControlViewInfoClass;

typedef System::TMetaClass* TdxLayoutItemViewInfoClass;

typedef System::TMetaClass* TdxLayoutGroupViewInfoClass;

typedef System::TMetaClass* TdxLayoutRootViewInfoClass;

typedef System::TMetaClass* TdxLayoutGroupButtonViewInfoClass;

typedef System::TMetaClass* TdxLayoutEmptySpaceItemViewInfoClass;

typedef System::TMetaClass* TdxLayoutSeparatorItemViewInfoClass;

typedef System::TMetaClass* TdxLayoutSplitterItemViewInfoClass;

typedef System::TMetaClass* TdxLayoutGroupViewInfoSpecificClass;

enum DECLSPEC_DENUM TdxLayoutAlignAbs : unsigned char { aaNear, aaCenter, aaFar, aaClient };

enum DECLSPEC_DENUM TdxLayoutAlignHorz : unsigned char { ahLeft, ahCenter, ahRight, ahClient, ahParentManaged };

enum DECLSPEC_DENUM TdxLayoutAlignVert : unsigned char { avTop, avCenter, avBottom, avClient, avParentManaged };

typedef TdxLayoutAlignHorz TdxLayoutRealAlignHorz;

typedef TdxLayoutAlignVert TdxLayoutRealAlignVert;

typedef TdxLayoutAlignHorz TdxLayoutItemControlAlignHorz;

typedef TdxLayoutAlignVert TdxLayoutItemControlAlignVert;

enum DECLSPEC_DENUM TdxLayoutItemControlAreaAlignment : unsigned char { catDefault, catNone, catAuto, catOwn };

enum DECLSPEC_DENUM TdxLayoutAutoAlign : unsigned char { aaHorizontal, aaVertical };

typedef System::Set<TdxLayoutAutoAlign, TdxLayoutAutoAlign::aaHorizontal, TdxLayoutAutoAlign::aaVertical> TdxLayoutAutoAligns;

enum DECLSPEC_DENUM TdxLayoutDirection : unsigned char { ldHorizontal, ldVertical, ldTabbed };

enum DECLSPEC_DENUM TdxLayoutDragDropMode : unsigned char { ddmDefault, ddmMultiChoice };

enum DECLSPEC_DENUM TdxLayoutDropAreaPart : unsigned char { apNone, apLeft, apTop, apRight, apBottom, apBefore, apAfter, apBetween, apNewLayout, apLastChild };

enum DECLSPEC_DENUM TdxLayoutActionType : unsigned char { atNone, atInsert, atCreateGroup, atContentInsert };

enum DECLSPEC_DENUM TdxLayoutCustomizeFormUpdateType : unsigned char { cfutCaption, cfutAvailableItems, cfutVisibleItems, cfutSelection, cfutView, cfutDragAndDropState };

typedef System::Set<TdxLayoutCustomizeFormUpdateType, TdxLayoutCustomizeFormUpdateType::cfutCaption, TdxLayoutCustomizeFormUpdateType::cfutDragAndDropState> TdxLayoutCustomizeFormUpdateTypes;

enum DECLSPEC_DENUM TdxLayoutCustomizeFormMenuItem : unsigned char { cfmiAlignHorz, cfmiAlignVert, cfmiDirection, cfmiCaptionLayout, cfmiCaptionAlignHorz, cfmiCaptionAlignVert, cfmiCaption, cfmiBorder, cfmiExpandButton, cfmiGrouping, cfmiRename };

typedef System::Set<TdxLayoutCustomizeFormMenuItem, TdxLayoutCustomizeFormMenuItem::cfmiAlignHorz, TdxLayoutCustomizeFormMenuItem::cfmiRename> TdxLayoutCustomizeFormMenuItems;

enum DECLSPEC_DENUM TdxLayoutAvailableItemsViewKind : unsigned char { aivkList, aivkTree };

typedef void __fastcall (__closure *TdxLayoutItemChangedEvent)(TdxCustomLayoutItem* AItem);

typedef void __fastcall (__closure *TdxLayoutItemCanResizeEvent)(System::TObject* Sender, TdxCustomLayoutItem* AItem, int &ANewSize, bool &AAccept);

struct DECLSPEC_DRECORD TdxLayoutAlign
{
public:
	TdxLayoutAlignHorz Horz;
	TdxLayoutAlignVert Vert;
};


struct DECLSPEC_DRECORD TdxLayoutRealAlign
{
public:
	TdxLayoutAlignHorz Horz;
	TdxLayoutAlignVert Vert;
};


struct DECLSPEC_DRECORD TdxAbsPoint
{
public:
	int Major;
	int Minor;
};


typedef TdxAbsPoint TdxAbsSize;

struct DECLSPEC_DRECORD TdxAbsRect
{
public:
	int NearMajor;
	int NearMinor;
	int FarMajor;
	int FarMinor;
	
private:
	TdxAbsPoint __fastcall GetSize();
	TdxAbsPoint __fastcall GetNearPoint();
	void __fastcall SetNearPoint(const TdxAbsPoint &AValue);
	TdxAbsPoint __fastcall GetFarPoint();
	void __fastcall SetFarPoint(const TdxAbsPoint &AValue);
	
public:
	__property TdxAbsPoint Size = {read=GetSize};
	__property TdxAbsPoint NearPoint = {read=GetNearPoint, write=SetNearPoint};
	__property TdxAbsPoint FarPoint = {read=GetFarPoint, write=SetFarPoint};
};


struct DECLSPEC_DRECORD TdxLayoutDragDropInfo
{
public:
	TdxCustomLayoutItem* SourceItem;
	System::Types::TPoint DragScreenPoint;
	TdxLayoutContainer* HitContainer;
	TdxCustomLayoutHitTest* HitTest;
	TdxCustomLayoutItem* HitItem;
	TdxLayoutContainer* DestinationContainer;
	TdxCustomLayoutGroup* DestinationGroup;
	TdxCustomLayoutItem* DestinationItem;
	System::Types::TPoint DropClientPoint;
	TdxLayoutDropAreaPart DropAreaPart;
	int DropPartSize;
	TdxLayoutAlign ExpectedAlign;
	System::Types::TSize SourceItemSize;
};


__interface  INTERFACE_UUID("{85310BD8-3D7A-454F-A54B-9898C0AA55A2}") IdxLayoutContainerOwner  : public System::IInterface 
{
	virtual TdxLayoutContainer* __fastcall GetContainer() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxUndoRedoManager : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TdxLayoutContainer* FContainer;
	int FIndex;
	System::Contnrs::TObjectList* FRestorePoints;
	bool __fastcall IsCurrentLayoutStored();
	void __fastcall RestoreLayout(int AIndex);
	int __fastcall GetRedoCount();
	int __fastcall GetUndoCount();
	
protected:
	void __fastcall AddRestorePoint();
	void __fastcall DeleteRestorePoint();
	void __fastcall RollBack();
	__property int RedoCount = {read=GetRedoCount, nodefault};
	__property int UndoCount = {read=GetUndoCount, nodefault};
	
public:
	__fastcall virtual TdxUndoRedoManager(TdxLayoutContainer* AContainer);
	__fastcall virtual ~TdxUndoRedoManager();
	bool __fastcall CanRedo();
	bool __fastcall CanUndo();
	void __fastcall Clear();
	void __fastcall Redo();
	void __fastcall Undo();
	__property TdxLayoutContainer* Container = {read=FContainer};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomLayoutItemOptions : public System::Classes::TInterfacedPersistent
{
	typedef System::Classes::TInterfacedPersistent inherited;
	
private:
	TdxCustomLayoutItem* FItem;
	bool __fastcall GetIsRestoring();
	
protected:
	void __fastcall BeginUpdate();
	virtual void __fastcall Changed();
	void __fastcall ChangeScale(int M, int D);
	virtual void __fastcall DoChangeScale(int M, int D);
	virtual void __fastcall DoAssign(System::Classes::TPersistent* Source);
	void __fastcall EndUpdate();
	__property TdxCustomLayoutItem* Item = {read=FItem};
	__property bool IsRestoring = {read=GetIsRestoring, nodefault};
	
public:
	__fastcall virtual TdxCustomLayoutItemOptions(TdxCustomLayoutItem* AItem);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxCustomLayoutItemOptions() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TdxLayoutControlCustomCustomizeFormClass;

class PASCALIMPLEMENTATION TdxLayoutControlCustomCustomizeForm : public Dxforms::TdxForm
{
	typedef Dxforms::TdxForm inherited;
	
private:
	TdxLayoutContainer* FContainer;
	Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* FLayoutLookAndFeel;
	int FLockCount;
	bool __fastcall GetIsLocked();
	void __fastcall SetContainer(TdxLayoutContainer* AValue);
	
protected:
	void __fastcall AssignFont(Vcl::Graphics::TFont* ASourceFont, Cxgeometry::TdxScaleFactor* ASourceScaleFactor);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual bool __fastcall CanAddItem();
	virtual bool __fastcall CanModify();
	virtual bool __fastcall CanShowItem(TdxCustomLayoutItem* AItem);
	TdxLayoutCustomizeFormMenuItems __fastcall DoGetMenuItems(System::Classes::TList* AList);
	virtual void __fastcall DoInitializeControl();
	virtual NativeUInt __fastcall GetWndParent();
	virtual void __fastcall ItemChanged(TdxCustomLayoutItem* AItem);
	virtual Vcl::Menus::TPopupMenu* __fastcall GetLayoutPopupMenu();
	virtual void __fastcall InitializeControl();
	virtual void __fastcall RefreshLayoutLookAndFeel();
	virtual void __fastcall ResetDragAndDropObjects();
	virtual System::UnicodeString __fastcall GetCustomizationCaption(TdxCustomLayoutItem* AItem);
	virtual void __fastcall SetCustomizationCaption(TdxCustomLayoutItem* AItem, const System::UnicodeString ACaption);
	HIDESBASE virtual void __fastcall Changed();
	__property bool IsLocked = {read=GetIsLocked, nodefault};
	__property Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* LayoutLookAndFeel = {read=FLayoutLookAndFeel};
	__property int LockCount = {read=FLockCount, nodefault};
	
public:
	__fastcall virtual ~TdxLayoutControlCustomCustomizeForm();
	virtual void __fastcall Initialize();
	void __fastcall BeginUpdate();
	void __fastcall CancelUpdate();
	void __fastcall EndUpdate();
	virtual TdxCustomLayoutHitTest* __fastcall GetHitTest(const System::Types::TPoint &P);
	virtual void __fastcall ToggleHotTrackState(TdxCustomLayoutItem* AItem);
	virtual void __fastcall UpdateAvailableItems();
	virtual void __fastcall UpdateCaption();
	virtual void __fastcall UpdateContent();
	virtual void __fastcall UpdateDragAndDropState();
	virtual void __fastcall UpdateSelection();
	virtual void __fastcall UpdateView();
	virtual void __fastcall UpdateVisibleItems();
	__property TdxLayoutContainer* Container = {read=FContainer, write=SetContainer};
	__property Vcl::Menus::TPopupMenu* LayoutPopupMenu = {read=GetLayoutPopupMenu};
public:
	/* TCustomForm.Create */ inline __fastcall virtual TdxLayoutControlCustomCustomizeForm(System::Classes::TComponent* AOwner) : Dxforms::TdxForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TdxLayoutControlCustomCustomizeForm(System::Classes::TComponent* AOwner, int Dummy) : Dxforms::TdxForm(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxLayoutControlCustomCustomizeForm(HWND ParentWindow) : Dxforms::TdxForm(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomLayoutItemImageOptions : public TdxCustomLayoutItemOptions
{
	typedef TdxCustomLayoutItemOptions inherited;
	
private:
	Dxgdiplusclasses::TdxSmartGlyph* FGlyph;
	int FImageIndex;
	void __fastcall SetGlyph(Dxgdiplusclasses::TdxSmartGlyph* AValue);
	void __fastcall SetImageIndex(int AValue);
	void __fastcall GlyphChanged(System::TObject* Sender);
	
protected:
	bool __fastcall GetCurrentImage(/* out */ Dxgdiplusclasses::TdxSmartGlyph* &AGlyph, /* out */ Vcl::Imglist::TCustomImageList* &AImages, /* out */ int &AImageIndex);
	Vcl::Imglist::TCustomImageList* __fastcall GetImageList(bool AEnabled);
	System::Types::TSize __fastcall GetImageSize();
	bool __fastcall IsImageAssigned();
	virtual void __fastcall DoAssign(System::Classes::TPersistent* Source);
	
public:
	__fastcall virtual TdxCustomLayoutItemImageOptions(TdxCustomLayoutItem* AItem);
	__fastcall virtual ~TdxCustomLayoutItemImageOptions();
	
__published:
	__property Dxgdiplusclasses::TdxSmartGlyph* Glyph = {read=FGlyph, write=SetGlyph};
	__property int ImageIndex = {read=FImageIndex, write=SetImageIndex, default=-1};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TdxCaptionLayout : unsigned char { clLeft, clTop, clRight, clBottom };

enum DECLSPEC_DENUM TdxLayoutItemCaptionVisibleElement : unsigned char { cveImage, cveText };

typedef System::Set<TdxLayoutItemCaptionVisibleElement, TdxLayoutItemCaptionVisibleElement::cveImage, TdxLayoutItemCaptionVisibleElement::cveText> TdxLayoutItemCaptionVisibleElements;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomLayoutItemCaptionOptions : public TdxCustomLayoutItemOptions
{
	typedef TdxCustomLayoutItemOptions inherited;
	
private:
	System::Classes::TAlignment FAlignHorz;
	Dxlayoutcommon::TdxAlignmentVert FAlignVert;
	Vcl::Stdctrls::TEllipsisPosition FEllipsisPosition;
	bool FExpandTabs;
	Dxformattedtext::TdxFormattedText* FFormattedText;
	System::UnicodeString FHint;
	TdxCustomLayoutItemImageOptions* FImageOptions;
	TdxCaptionLayout FLayout;
	System::UnicodeString FDefaultCaption;
	System::UnicodeString FUserCaption;
	bool FIsCaptionAssigned;
	TdxLayoutItemCaptionVisibleElements FVisibleElements;
	bool FVisible;
	Dxgdiplusclasses::TdxSmartGlyph* __fastcall GetGlyph();
	int __fastcall GetImageIndex();
	bool __fastcall GetShowAccelChar();
	void __fastcall SetAlignHorz(System::Classes::TAlignment Value);
	void __fastcall SetAlignVert(Dxlayoutcommon::TdxAlignmentVert Value);
	void __fastcall SetEllipsisPosition(Vcl::Stdctrls::TEllipsisPosition Value);
	void __fastcall SetGlyph(Dxgdiplusclasses::TdxSmartGlyph* AValue);
	void __fastcall SetImageIndex(int AValue);
	void __fastcall SetImageOptions(TdxCustomLayoutItemImageOptions* Value);
	void __fastcall SetLayout(TdxCaptionLayout Value);
	void __fastcall SetShowAccelChar(bool Value);
	void __fastcall SetVisibleElements(TdxLayoutItemCaptionVisibleElements Value);
	void __fastcall SetVisible(bool Value);
	
protected:
	virtual bool __fastcall IsTextStored();
	bool __fastcall IsTextVisible();
	virtual System::UnicodeString __fastcall GetText();
	void __fastcall RecoverUserCaption();
	void __fastcall ResetUserCaption(bool AFull);
	void __fastcall SetDefaultCaption(const System::UnicodeString Value);
	virtual void __fastcall SetText(const System::UnicodeString Value);
	void __fastcall SetUserCaption(const System::UnicodeString Value);
	virtual void __fastcall GetStoredPropertyValue(const System::UnicodeString AName, System::Variant &AValue);
	virtual void __fastcall GetStoredProperties(System::Classes::TStrings* AProperties);
	virtual void __fastcall SetStoredPropertyValue(const System::UnicodeString AName, const System::Variant &AValue);
	virtual void __fastcall DoAssign(System::Classes::TPersistent* Source);
	Vcl::Graphics::TFont* __fastcall GetFormattedTextFont();
	bool __fastcall GetUseFormattedText();
	__property Vcl::Stdctrls::TEllipsisPosition EllipsisPosition = {read=FEllipsisPosition, write=SetEllipsisPosition, default=0};
	__property bool ExpandTabs = {read=FExpandTabs, write=FExpandTabs, nodefault};
	__property Dxformattedtext::TdxFormattedText* FormattedText = {read=FFormattedText};
	__property Dxgdiplusclasses::TdxSmartGlyph* Glyph = {read=GetGlyph, write=SetGlyph};
	__property bool IsCaptionAssigned = {read=FIsCaptionAssigned, nodefault};
	__property System::UnicodeString Hint = {read=FHint, write=FHint};
	__property int ImageIndex = {read=GetImageIndex, write=SetImageIndex, default=-1};
	__property TdxCustomLayoutItemImageOptions* ImageOptions = {read=FImageOptions, write=SetImageOptions};
	__property TdxCaptionLayout Layout = {read=FLayout, write=SetLayout, nodefault};
	__property bool ShowAccelChar = {read=GetShowAccelChar, write=SetShowAccelChar, default=1};
	__property TdxLayoutItemCaptionVisibleElements VisibleElements = {read=FVisibleElements, write=SetVisibleElements, default=3};
	__property System::UnicodeString UserCaption = {read=FUserCaption, write=SetUserCaption};
	__property System::UnicodeString DefaultCaption = {read=FDefaultCaption, write=SetDefaultCaption};
	
public:
	__fastcall virtual TdxCustomLayoutItemCaptionOptions(TdxCustomLayoutItem* AItem);
	__fastcall virtual ~TdxCustomLayoutItemCaptionOptions();
	__property System::Classes::TAlignment AlignHorz = {read=FAlignHorz, write=SetAlignHorz, default=0};
	__property Dxlayoutcommon::TdxAlignmentVert AlignVert = {read=FAlignVert, write=SetAlignVert, nodefault};
	__property System::UnicodeString Text = {read=GetText, write=SetText, stored=IsTextStored};
	__property bool Visible = {read=FVisible, write=SetVisible, default=1};
private:
	void *__IdxFormattedTextOwner;	// Dxformattedtext::IdxFormattedTextOwner 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {C33BD809-0400-46A8-9029-E9C72579FFA1}
	operator Dxformattedtext::_di_IdxFormattedTextOwner()
	{
		Dxformattedtext::_di_IdxFormattedTextOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxformattedtext::IdxFormattedTextOwner*(void) { return (Dxformattedtext::IdxFormattedTextOwner*)&__IdxFormattedTextOwner; }
	#endif
	
};

#pragma pack(pop)

typedef System::TMetaClass* TdxCustomLayoutItemCaptionOptionsClass;

enum DECLSPEC_DENUM TdxLayoutSizeOptionsValue : unsigned char { sovSizableHorz, sovSizableVert };

typedef System::Set<TdxLayoutSizeOptionsValue, TdxLayoutSizeOptionsValue::sovSizableHorz, TdxLayoutSizeOptionsValue::sovSizableVert> TdxLayoutSizeOptionsValues;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutSizeOptions : public TdxCustomLayoutItemOptions
{
	typedef TdxCustomLayoutItemOptions inherited;
	
private:
	TdxLayoutSizeOptionsValues FAssignedValues;
	bool FSizableHorz;
	bool FSizableVert;
	int FWidth;
	int FHeight;
	int FMaxWidth;
	int FMaxHeight;
	bool __fastcall GetSizableHorz();
	bool __fastcall GetSizableVert();
	void __fastcall SetAssignedValues(TdxLayoutSizeOptionsValues Value);
	void __fastcall SetSizableHorz(bool Value);
	void __fastcall SetSizableVert(bool Value);
	void __fastcall SetHeight(int Value);
	void __fastcall SetWidth(int Value);
	void __fastcall SetMaxHeight(int Value);
	void __fastcall SetMaxWidth(int Value);
	bool __fastcall IsSizableHorzStored();
	bool __fastcall IsSizableVertStored();
	
protected:
	virtual void __fastcall DoAssign(System::Classes::TPersistent* Source);
	virtual void __fastcall DoChangeScale(int M, int D);
	virtual void __fastcall Changed();
	
__published:
	__property TdxLayoutSizeOptionsValues AssignedValues = {read=FAssignedValues, write=SetAssignedValues, default=0};
	__property bool SizableHorz = {read=GetSizableHorz, write=SetSizableHorz, stored=IsSizableHorzStored, nodefault};
	__property bool SizableVert = {read=GetSizableVert, write=SetSizableVert, stored=IsSizableVertStored, nodefault};
	__property int Height = {read=FHeight, write=SetHeight, default=0};
	__property int Width = {read=FWidth, write=SetWidth, default=0};
	__property int MaxHeight = {read=FMaxHeight, write=SetMaxHeight, default=0};
	__property int MaxWidth = {read=FMaxWidth, write=SetMaxWidth, default=0};
public:
	/* TdxCustomLayoutItemOptions.Create */ inline __fastcall virtual TdxLayoutSizeOptions(TdxCustomLayoutItem* AItem) : TdxCustomLayoutItemOptions(AItem) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxLayoutSizeOptions() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutOffsets : public TdxCustomLayoutItemOptions
{
	typedef TdxCustomLayoutItemOptions inherited;
	
private:
	int FBottom;
	int FLeft;
	int FRight;
	int FTop;
	
protected:
	virtual int __fastcall GetValue(int Index);
	virtual void __fastcall SetValue(int Index, int Value);
	virtual void __fastcall DoAssign(System::Classes::TPersistent* Source);
	virtual void __fastcall DoChangeScale(int M, int D);
	
__published:
	__property int Bottom = {read=GetValue, write=SetValue, index=1, default=0};
	__property int Left = {read=GetValue, write=SetValue, index=2, default=0};
	__property int Right = {read=GetValue, write=SetValue, index=3, default=0};
	__property int Top = {read=GetValue, write=SetValue, index=4, default=0};
public:
	/* TdxCustomLayoutItemOptions.Create */ inline __fastcall virtual TdxLayoutOffsets(TdxCustomLayoutItem* AItem) : TdxCustomLayoutItemOptions(AItem) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxLayoutOffsets() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutPadding : public TdxLayoutOffsets
{
	typedef TdxLayoutOffsets inherited;
	
private:
	Dxlayoutlookandfeels::TdxLayoutPaddingAssignedValues FAssignedValues;
	bool __fastcall IsValueStored(int Index);
	void __fastcall SetAssignedValues(Dxlayoutlookandfeels::TdxLayoutPaddingAssignedValues Value);
	
protected:
	virtual void __fastcall DoAssign(System::Classes::TPersistent* Source);
	virtual int __fastcall GetValue(int Index);
	virtual void __fastcall SetValue(int Index, int Value);
	
public:
	System::Types::TRect __fastcall GetValues();
	
__published:
	__property Dxlayoutlookandfeels::TdxLayoutPaddingAssignedValues AssignedValues = {read=FAssignedValues, write=SetAssignedValues, default=0};
	__property Bottom = {stored=IsValueStored, index=1, default=0};
	__property Left = {stored=IsValueStored, index=2, default=0};
	__property Right = {stored=IsValueStored, index=3, default=0};
	__property Top = {stored=IsValueStored, index=4, default=0};
public:
	/* TdxCustomLayoutItemOptions.Create */ inline __fastcall virtual TdxLayoutPadding(TdxCustomLayoutItem* AItem) : TdxLayoutOffsets(AItem) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxLayoutPadding() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxLayoutCustomFloatForm : public Dxforms::TdxCustomFloatForm
{
	typedef Dxforms::TdxCustomFloatForm inherited;
	
protected:
	bool FIsFloat;
	void __fastcall ShowFloat(const System::Types::TPoint &APosition, bool ANeedActivate, bool AHidden = false);
	bool __fastcall IsSkinnable();
public:
	/* TdxCustomFloatForm.CreateNew */ inline __fastcall virtual TdxLayoutCustomFloatForm(System::Classes::TComponent* AOwner, int Dummy) : Dxforms::TdxCustomFloatForm(AOwner, Dummy) { }
	
public:
	/* TdxCustomForm.Destroy */ inline __fastcall virtual ~TdxLayoutCustomFloatForm() { }
	
public:
	/* TCustomForm.Create */ inline __fastcall virtual TdxLayoutCustomFloatForm(System::Classes::TComponent* AOwner) : Dxforms::TdxCustomFloatForm(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxLayoutCustomFloatForm(HWND ParentWindow) : Dxforms::TdxCustomFloatForm(ParentWindow) { }
	
private:
	void *__IdxSkinSupport2;	// Cxlookandfeels::IdxSkinSupport2 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {01C435BA-7DA1-44A4-BE8B-BCE9CE0562AB}
	operator Cxlookandfeels::_di_IdxSkinSupport2()
	{
		Cxlookandfeels::_di_IdxSkinSupport2 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxlookandfeels::IdxSkinSupport2*(void) { return (Cxlookandfeels::IdxSkinSupport2*)&__IdxSkinSupport2; }
	#endif
	
};


enum DECLSPEC_DENUM TdxLayoutItemChangeType : unsigned char { ictHard, ictMedium, ictLight, ictComplex, ictSimple };

class PASCALIMPLEMENTATION TdxCustomLayoutItem : public Cxclasses::TcxCustomComponent
{
	typedef Cxclasses::TcxCustomComponent inherited;
	
private:
	TdxLayoutAlign FAlign;
	TdxLayoutAlign FRealAlign;
	TdxLayoutAlignmentConstraint* FAlignmentConstraint;
	bool FAllowRemove;
	bool FAllowQuickCustomize;
	bool FAllowFloating;
	bool FInternalCanQuickCustomized;
	TdxLayoutContainer* FContainer;
	bool FCustomization;
	void *FData;
	bool FEnabled;
	Dxcore::TdxDefaultBoolean FRealEnabled;
	bool FIsDestroying;
	bool FIsUserDefined;
	Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* FLayoutLookAndFeel;
	int FLoadedIndex;
	System::UnicodeString FLoadedParentName;
	bool FLoadedFloat;
	System::UnicodeString FLoadedTakeoffParentName;
	bool FSuperfluous;
	TdxLayoutOffsets* FOffsets;
	TdxLayoutPadding* FPadding;
	TdxCustomLayoutGroup* FParent;
	bool FVisible;
	TdxCustomLayoutItemCaptionOptions* FCaptionOptions;
	TdxLayoutSizeOptions* FSizeOptions;
	void __fastcall ApplyLoadedPosition();
	TdxLayoutAlignHorz __fastcall GetAlignHorz();
	TdxLayoutAlignVert __fastcall GetAlignVert();
	TdxLayoutRealAlign __fastcall GetRealAlign();
	void __fastcall SetAlign(TdxLayoutAlign Value);
	void __fastcall SetAlignHorz(TdxLayoutAlignHorz Value);
	void __fastcall SetAlignVert(TdxLayoutAlignVert Value);
	void __fastcall SetRealAlign(TdxLayoutRealAlign Value);
	int __fastcall GetAbsoluteIndex();
	bool __fastcall GetActuallyVisible();
	TdxLayoutAutoAligns __fastcall GetAutoAligns();
	System::UnicodeString __fastcall GetCaption();
	System::UnicodeString __fastcall GetCaptionForCustomizeForm();
	System::UnicodeString __fastcall GetDefaultCaption();
	bool __fastcall GetEnabled();
	int __fastcall GetIndex();
	bool __fastcall GetIsUserRenamed();
	TdxLayoutContainer* __fastcall GetRealContainer();
	Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	TdxCustomLayoutItemViewInfo* __fastcall GetViewInfo();
	int __fastcall GetVisibleIndex();
	void __fastcall SetAlignmentConstraint(TdxLayoutAlignmentConstraint* Value);
	void __fastcall SetAutoAligns(TdxLayoutAutoAligns Value);
	void __fastcall SetCaption(const System::UnicodeString Value);
	void __fastcall SetCaptionOptions(TdxCustomLayoutItemCaptionOptions* const Value);
	void __fastcall SetContainer(TdxLayoutContainer* Value);
	void __fastcall SetCustomization(bool Value);
	void __fastcall SetDefaultCaption(const System::UnicodeString Value);
	void __fastcall SetEnabled(bool Value);
	void __fastcall SetLayoutLookAndFeel(Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* Value);
	void __fastcall SetIndex(int Value);
	void __fastcall SetIsUserDefined(bool Value);
	void __fastcall SetOffsets(TdxLayoutOffsets* const Value);
	void __fastcall SetPadding(TdxLayoutPadding* const Value);
	void __fastcall SetParent(TdxCustomLayoutGroup* Value);
	void __fastcall SetShowCaption(bool Value);
	void __fastcall SetSizeOptions(TdxLayoutSizeOptions* Value);
	void __fastcall SetTakeoffParent(TdxCustomLayoutGroup* Value);
	void __fastcall SetVisible(bool Value);
	void __fastcall SetVisibleIndex(int Value);
	int __fastcall GetHeight();
	int __fastcall GetWidth();
	void __fastcall SetHeight(int Value);
	void __fastcall SetWidth(int Value);
	void __fastcall ReadIndex(System::Classes::TReader* Reader);
	void __fastcall WriteIndex(System::Classes::TWriter* Writer);
	bool __fastcall IsAlignHorzStored();
	bool __fastcall IsAlignVertStored();
	bool __fastcall IsClosedBySplitter();
	
protected:
	bool FLockEvents;
	bool FIsFloat;
	TdxLayoutCustomFloatForm* FFloatForm;
	System::Types::TPoint FFloatPos;
	TdxCustomLayoutGroup* FTakeoffParent;
	int FTakeoffIndex;
	TdxCustomLayoutGroup* FParentBeforeDrag;
	int FIndexBeforeDrag;
	System::Classes::TNotifyEvent FOnCaptionClick;
	System::Classes::TNotifyEvent FOnStartFloat;
	System::Classes::TNotifyEvent FOnEndFloat;
	void __stdcall BeginLayoutLookAndFeelUserDestroying();
	void __stdcall EndLayoutLookAndFeelUserDestroying();
	void __stdcall LayoutLookAndFeelUserChanged();
	void __stdcall LayoutLookAndFeelUserDestroyed();
	virtual bool __fastcall CanDelete();
	virtual bool __fastcall IsOwner(System::Classes::TComponent* AOwner);
	virtual void __fastcall SelectComponent(System::Classes::TShiftState AShift = System::Classes::TShiftState() );
	virtual void __fastcall SelectParent();
	virtual void __fastcall SelectionChanged();
	virtual bool __fastcall IsSelectableItemVisible();
	virtual void __fastcall SelectableItemMakeVisible();
	System::Types::TRect __fastcall GetSelectionBounds();
	virtual System::UnicodeString __fastcall GetStoredObjectName();
	virtual bool __fastcall GetStoredProperties(System::Classes::TStrings* AProperties);
	virtual void __fastcall GetStoredPropertyValue(const System::UnicodeString AName, System::Variant &AValue);
	virtual void __fastcall SetStoredPropertyValue(const System::UnicodeString AName, const System::Variant &AValue);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall SetName(const System::Classes::TComponentName Value);
	DYNAMIC void __fastcall SetParentComponent(System::Classes::TComponent* Value);
	virtual void __fastcall LayoutLookAndFeelChanged();
	virtual void __fastcall SetInitialSettings();
	virtual void __fastcall DoGetTabOrderList(System::Classes::TList* List);
	void __fastcall GetTabOrderList(System::Classes::TList* List);
	virtual System::UnicodeString __fastcall GetInplaceRenameCaption();
	virtual void __fastcall SetInplaceRenameCaption(const System::UnicodeString ACaption);
	void __fastcall Rename(const System::UnicodeString ACaption);
	DYNAMIC void __fastcall DoCaptionDown();
	DYNAMIC void __fastcall DoCaptionClick();
	virtual void __fastcall DoPack();
	DYNAMIC bool __fastcall DoProcessAccel();
	virtual void __fastcall InitiateAction();
	bool __fastcall InternalMove(TdxCustomLayoutGroup* AParent, int AIndex, bool APack, bool AKeepAlign);
	virtual void __fastcall CheckAutoSize(bool ADropOnly);
	void __fastcall StopFloat();
	void __fastcall LandingFloat();
	void __fastcall MakeFloat(const System::Types::TPoint &APosition, bool ANeedActivate = false);
	void __fastcall MoveFloat(const System::Types::TPoint &APosition);
	void __fastcall ShowFloat(bool ANeedActivate);
	void __fastcall HideFloat();
	virtual TdxLayoutAlignHorz __fastcall GetParentManagedAlignHorz();
	virtual TdxLayoutAlignVert __fastcall GetParentManagedAlignVert();
	virtual TdxLayoutRealAlignHorz __fastcall GetRealAlignHorz();
	virtual TdxLayoutRealAlignVert __fastcall GetRealAlignVert();
	virtual System::UnicodeString __fastcall GetBaseName();
	virtual System::Uitypes::TCursor __fastcall GetCursor(int X, int Y);
	virtual bool __fastcall GetIsRoot();
	virtual bool __fastcall GetIsVertical();
	virtual Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* __fastcall GetLayoutLookAndFeel();
	bool __fastcall GetShowCaption();
	virtual bool __fastcall GetVisible();
	virtual Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeelOptions* __fastcall GetOptions();
	virtual void __fastcall BeforeCalculateViewInfo();
	virtual void __fastcall AfterCalculateViewInfo();
	virtual void __fastcall ApplyCalculatedChanges();
	virtual void __fastcall ResetRealAlign();
	virtual void __fastcall ResetEnabled();
	virtual void __fastcall AfterRestoring();
	virtual void __fastcall BeforeRestoring();
	virtual void __fastcall CheckIndex();
	virtual bool __fastcall IsEnabledStored();
	virtual bool __fastcall NeedDeleteAfterLoading();
	void __fastcall OptimizeAlignForStoring();
	virtual void __fastcall PopulateItems(System::Classes::TList* AList);
	void __fastcall SetLoadedInfo(const System::UnicodeString AParentName, int AIndex);
	virtual bool __fastcall CanInit();
	virtual void __fastcall DoInit();
	void __fastcall Init();
	virtual bool __fastcall AllowFloatingDragImage();
	bool __fastcall IsAvailable();
	bool __fastcall IsDesigning();
	bool __fastcall IsDestroying();
	bool __fastcall IsGrabbed();
	bool __fastcall IsDragged();
	bool __fastcall IsImageVisible();
	bool __fastcall IsLoading();
	virtual bool __fastcall IsLocked();
	virtual bool __fastcall IsParentLocked();
	bool __fastcall IsRestoring();
	bool __fastcall IsSelected();
	virtual bool __fastcall IsStable();
	bool __fastcall IsTextVisible();
	virtual bool __fastcall IsVisibleForCustomization();
	bool __fastcall IsViewInfoValid();
	bool __fastcall IsHeightFixed();
	bool __fastcall IsWidthFixed();
	TdxCustomLayoutGroup* __fastcall AsGroup();
	virtual bool __fastcall IsWrapItemsAllowed();
	virtual bool __fastcall IsGroup();
	virtual bool __fastcall IsFloatingRoot();
	bool __fastcall IsParentGroup(TdxCustomLayoutGroup* AParentGroup);
	bool __fastcall IsChildItem(TdxCustomLayoutItem* AChildItem);
	virtual bool __fastcall CanAcceptItem(TdxCustomLayoutItem* AItem);
	virtual bool __fastcall CanQuickDragAndDrop();
	virtual bool __fastcall CanQuickCustomized();
	virtual bool __fastcall CanFloat();
	bool __fastcall CanBeActuallyVisible();
	virtual bool __fastcall CanBeAlone();
	virtual bool __fastcall CanDragAndDrop(const System::Types::TPoint &P);
	virtual bool __fastcall CanProcessAccel();
	virtual bool __fastcall CanRemove();
	virtual bool __fastcall CanResizeHorz();
	virtual bool __fastcall CanResizeVert();
	virtual bool __fastcall HasControl();
	bool __fastcall HasCaption();
	bool __fastcall IsHorzLocalPositionStable();
	bool __fastcall IsHorzPositionStable();
	bool __fastcall IsVertLocalPositionStable();
	bool __fastcall IsVertPositionStable();
	virtual void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall ProcessAccel();
	virtual bool __fastcall ProcessDialogChar(System::Word ACharCode);
	virtual bool __fastcall ProcessDialogKey(System::Word ACharCode, int AKeyData, TdxCustomLayoutItem* AFocusedItem);
	virtual void __fastcall RestoreItemControlBounds();
	__classmethod virtual TdxCustomLayoutItemCaptionOptionsClass __fastcall GetCaptionOptionsClass();
	__classmethod virtual int __fastcall GetItemClassKind();
	TdxLayoutGroupHelperClass __fastcall GetParentHelperClass();
	virtual TdxCustomLayoutItemViewInfoClass __fastcall GetViewInfoClass() = 0 ;
	virtual void __fastcall LoadFromIni(System::Inifiles::TCustomIniFile* AIniFile, const System::UnicodeString ASection, int AVersion);
	virtual void __fastcall SaveToIni(System::Inifiles::TCustomIniFile* AIniFile, const System::UnicodeString ASection);
	virtual void __fastcall ChangeScale(int M, int D);
	virtual bool __fastcall FocusFirst(bool ACheckTabStop);
	virtual bool __fastcall CanFocus(bool AByMouse);
	virtual bool __fastcall IsFocused();
	virtual bool __fastcall NeedMakeVisibleAfterFocusing();
	void __fastcall DoItemChanged();
	void __fastcall BeginUpdate();
	void __fastcall CancelUpdate();
	void __fastcall EndUpdate(bool ANeedPack = true);
	void __fastcall Changed(TdxLayoutItemChangeType AType = (TdxLayoutItemChangeType)(0x0));
	virtual void __fastcall DoChanged(TdxLayoutItemChangeType AType);
	virtual void __fastcall AlignChanged();
	virtual void __fastcall BiDiModeChanged();
	virtual void __fastcall ContainerChanged();
	virtual void __fastcall CustomizationChanged();
	virtual void __fastcall EnabledChanged();
	void __fastcall ParentChanged(TdxLayoutItemChangeType AType);
	virtual void __fastcall CreateOptions();
	virtual void __fastcall DestroyOptions();
	TdxLayoutSplitterItem* __fastcall GetNearestClosedSplitter();
	__property int AbsoluteIndex = {read=GetAbsoluteIndex, nodefault};
	__property TdxLayoutAlign Align = {read=FAlign, write=SetAlign};
	__property bool AllowQuickCustomize = {read=FAllowQuickCustomize, write=FAllowQuickCustomize, default=0};
	__property bool AllowFloating = {read=FAllowFloating, write=FAllowFloating, default=0};
	__property bool Customization = {read=FCustomization, write=SetCustomization, nodefault};
	__property bool InternalEnabled = {read=FEnabled, write=FEnabled, nodefault};
	__property bool IsVertical = {read=GetIsVertical, nodefault};
	__property int LoadedIndex = {read=FLoadedIndex, write=FLoadedIndex, nodefault};
	__property TdxLayoutPadding* Padding = {read=FPadding, write=SetPadding};
	__property TdxLayoutRealAlign RealAlign = {read=GetRealAlign, write=SetRealAlign};
	__property TdxLayoutContainer* RealContainer = {read=GetRealContainer};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=GetScaleFactor};
	__property bool Superfluous = {read=FSuperfluous, write=FSuperfluous, nodefault};
	__property TdxCustomLayoutGroup* TakeoffParent = {read=FTakeoffParent, write=SetTakeoffParent};
	__property System::Classes::TNotifyEvent OnCaptionClick = {read=FOnCaptionClick, write=FOnCaptionClick};
	__property System::Classes::TNotifyEvent OnStartFloat = {read=FOnStartFloat, write=FOnStartFloat};
	__property System::Classes::TNotifyEvent OnEndFloat = {read=FOnEndFloat, write=FOnEndFloat};
	
public:
	__fastcall virtual TdxCustomLayoutItem(System::Classes::TComponent* AOwner);
	virtual void __fastcall BeforeDestruction();
	__fastcall virtual ~TdxCustomLayoutItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	DYNAMIC System::Classes::TComponent* __fastcall GetParentComponent();
	DYNAMIC bool __fastcall HasParent();
	virtual bool __fastcall CanMoveTo(TdxCustomLayoutItem* AParent);
	void __fastcall MakeVisible();
	bool __fastcall Move(TdxCustomLayoutGroup* AParent, int AIndex, bool APack = false);
	bool __fastcall MoveTo(TdxCustomLayoutGroup* AParent, int AVisibleIndex, bool APack = false);
	void __fastcall Pack();
	TdxLayoutAutoCreatedGroup* __fastcall PutIntoHiddenGroup(TdxLayoutDirection ALayoutDirection);
	void __fastcall ToggleHotTrackState();
	__property bool ActuallyVisible = {read=GetActuallyVisible, nodefault};
	__property bool AllowRemove = {read=FAllowRemove, write=FAllowRemove, default=1};
	__property System::UnicodeString CaptionForCustomizeForm = {read=GetCaptionForCustomizeForm};
	__property TdxLayoutContainer* Container = {read=FContainer, write=SetContainer};
	__property void * Data = {read=FData, write=FData};
	__property System::UnicodeString DefaultCaption = {read=GetDefaultCaption, write=SetDefaultCaption};
	__property bool Enabled = {read=GetEnabled, write=SetEnabled, stored=IsEnabledStored, nodefault};
	__property int Height = {read=GetHeight, write=SetHeight, nodefault};
	__property int Index = {read=GetIndex, write=SetIndex, nodefault};
	__property bool IsRoot = {read=GetIsRoot, nodefault};
	__property bool IsUserDefined = {read=FIsUserDefined, write=SetIsUserDefined, nodefault};
	__property bool IsUserRenamed = {read=GetIsUserRenamed, nodefault};
	__property TdxCustomLayoutItemViewInfo* ViewInfo = {read=GetViewInfo};
	__property int VisibleIndex = {read=GetVisibleIndex, write=SetVisibleIndex, nodefault};
	__property int Width = {read=GetWidth, write=SetWidth, nodefault};
	__property TdxLayoutAlignHorz AlignHorz = {read=GetAlignHorz, write=SetAlignHorz, stored=IsAlignHorzStored, nodefault};
	__property TdxLayoutAlignVert AlignVert = {read=GetAlignVert, write=SetAlignVert, stored=IsAlignVertStored, nodefault};
	__property TdxLayoutAlignmentConstraint* AlignmentConstraint = {read=FAlignmentConstraint, write=SetAlignmentConstraint};
	__property TdxCustomLayoutItemCaptionOptions* CaptionOptions = {read=FCaptionOptions, write=SetCaptionOptions};
	__property Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* LayoutLookAndFeel = {read=FLayoutLookAndFeel, write=SetLayoutLookAndFeel};
	__property TdxLayoutOffsets* Offsets = {read=FOffsets, write=SetOffsets};
	__property TdxLayoutSizeOptions* SizeOptions = {read=FSizeOptions, write=SetSizeOptions};
	__property bool Visible = {read=FVisible, write=SetVisible, default=1};
	
__published:
	__property TdxLayoutAutoAligns AutoAligns = {read=GetAutoAligns, write=SetAutoAligns, stored=false, nodefault};
	__property System::UnicodeString Caption = {read=GetCaption, write=SetCaption, stored=false};
	__property Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* LookAndFeel = {read=FLayoutLookAndFeel, write=SetLayoutLookAndFeel, stored=false};
	__property bool ShowCaption = {read=GetShowCaption, write=SetShowCaption, stored=false, nodefault};
	__property TdxCustomLayoutGroup* Parent = {read=FParent, write=SetParent};
private:
	void *__IcxStoredObject;	// Cxstorage::IcxStoredObject 
	void *__IdxScaleFactor;	// Cxgeometry::IdxScaleFactor 
	void *__IdxLayoutSelectableItem;	// Dxlayoutselection::IdxLayoutSelectableItem 
	void *__IdxLayoutLookAndFeelUser;	// Dxlayoutlookandfeels::IdxLayoutLookAndFeelUser 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {79A05009-CAC3-47E8-B454-F6F3D91F495D}
	operator Cxstorage::_di_IcxStoredObject()
	{
		Cxstorage::_di_IcxStoredObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxstorage::IcxStoredObject*(void) { return (Cxstorage::IcxStoredObject*)&__IcxStoredObject; }
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
	// {2887168D-78EB-44A0-A440-E284B01BE407}
	operator Dxlayoutselection::_di_IdxLayoutSelectableItem()
	{
		Dxlayoutselection::_di_IdxLayoutSelectableItem intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxlayoutselection::IdxLayoutSelectableItem*(void) { return (Dxlayoutselection::IdxLayoutSelectableItem*)&__IdxLayoutSelectableItem; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {651F19FE-CBCB-4C16-8615-BBD57ED7255A}
	operator Dxlayoutlookandfeels::_di_IdxLayoutLookAndFeelUser()
	{
		Dxlayoutlookandfeels::_di_IdxLayoutLookAndFeelUser intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxlayoutlookandfeels::IdxLayoutLookAndFeelUser*(void) { return (Dxlayoutlookandfeels::IdxLayoutLookAndFeelUser*)&__IdxLayoutLookAndFeelUser; }
	#endif
	
};


class PASCALIMPLEMENTATION TdxLayoutBasicItem : public TdxCustomLayoutItem
{
	typedef TdxCustomLayoutItem inherited;
	
protected:
	virtual TdxCustomLayoutItemViewInfoClass __fastcall GetViewInfoClass();
	
__published:
	__property AlignHorz;
	__property AlignVert;
	__property AlignmentConstraint;
	__property LayoutLookAndFeel;
	__property Offsets;
	__property Visible = {default=1};
	__property SizeOptions;
public:
	/* TdxCustomLayoutItem.Create */ inline __fastcall virtual TdxLayoutBasicItem(System::Classes::TComponent* AOwner) : TdxCustomLayoutItem(AOwner) { }
	/* TdxCustomLayoutItem.Destroy */ inline __fastcall virtual ~TdxLayoutBasicItem() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutNonLabeledItemCaptionOptions : public TdxCustomLayoutItemCaptionOptions
{
	typedef TdxCustomLayoutItemCaptionOptions inherited;
	
__published:
	__property Text = {default=0};
public:
	/* TdxCustomLayoutItemCaptionOptions.Create */ inline __fastcall virtual TdxLayoutNonLabeledItemCaptionOptions(TdxCustomLayoutItem* AItem) : TdxCustomLayoutItemCaptionOptions(AItem) { }
	/* TdxCustomLayoutItemCaptionOptions.Destroy */ inline __fastcall virtual ~TdxLayoutNonLabeledItemCaptionOptions() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxLayoutNonLabeledItem : public TdxLayoutBasicItem
{
	typedef TdxLayoutBasicItem inherited;
	
private:
	TdxLayoutNonLabeledItemCaptionOptions* __fastcall GetCaptionOptions();
	HIDESBASE void __fastcall SetCaptionOptions(TdxLayoutNonLabeledItemCaptionOptions* Value);
	
protected:
	__classmethod virtual TdxCustomLayoutItemCaptionOptionsClass __fastcall GetCaptionOptionsClass();
	
__published:
	__property Enabled;
	__property TdxLayoutNonLabeledItemCaptionOptions* CaptionOptions = {read=GetCaptionOptions, write=SetCaptionOptions};
public:
	/* TdxCustomLayoutItem.Create */ inline __fastcall virtual TdxLayoutNonLabeledItem(System::Classes::TComponent* AOwner) : TdxLayoutBasicItem(AOwner) { }
	/* TdxCustomLayoutItem.Destroy */ inline __fastcall virtual ~TdxLayoutNonLabeledItem() { }
	
};


class PASCALIMPLEMENTATION TdxLayoutEmptySpaceItem : public TdxLayoutNonLabeledItem
{
	typedef TdxLayoutNonLabeledItem inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetBaseName();
	__classmethod virtual int __fastcall GetItemClassKind();
	virtual TdxCustomLayoutItemViewInfoClass __fastcall GetViewInfoClass();
	virtual bool __fastcall CanBeAlone();
public:
	/* TdxCustomLayoutItem.Create */ inline __fastcall virtual TdxLayoutEmptySpaceItem(System::Classes::TComponent* AOwner) : TdxLayoutNonLabeledItem(AOwner) { }
	/* TdxCustomLayoutItem.Destroy */ inline __fastcall virtual ~TdxLayoutEmptySpaceItem() { }
	
};


class PASCALIMPLEMENTATION TdxLayoutDirectionalItem : public TdxLayoutNonLabeledItem
{
	typedef TdxLayoutNonLabeledItem inherited;
	
protected:
	virtual TdxCustomLayoutItemViewInfoClass __fastcall GetViewInfoClass();
	virtual bool __fastcall CanBeAlone();
	
public:
	__fastcall virtual TdxLayoutDirectionalItem(System::Classes::TComponent* AOwner);
	__property IsVertical;
public:
	/* TdxCustomLayoutItem.Destroy */ inline __fastcall virtual ~TdxLayoutDirectionalItem() { }
	
};


class PASCALIMPLEMENTATION TdxLayoutSplitterItem : public TdxLayoutDirectionalItem
{
	typedef TdxLayoutDirectionalItem inherited;
	
private:
	bool FAllowCloseOnClick;
	bool FDirectAccess;
	bool FIsClosed;
	TdxLayoutItemCanResizeEvent FOnCanResize;
	void __fastcall SetAllowCloseOnClick(bool AValue);
	void __fastcall SetIsClosed(bool AValue);
	
protected:
	virtual bool __fastcall GetStoredProperties(System::Classes::TStrings* AProperties);
	virtual void __fastcall GetStoredPropertyValue(const System::UnicodeString AName, System::Variant &AValue);
	virtual void __fastcall SetStoredPropertyValue(const System::UnicodeString AName, const System::Variant &AValue);
	virtual bool __fastcall CanQuickDragAndDrop();
	__classmethod virtual int __fastcall GetItemClassKind();
	virtual System::UnicodeString __fastcall GetBaseName();
	virtual TdxCustomLayoutItemViewInfoClass __fastcall GetViewInfoClass();
	bool __fastcall DoCanResize(TdxCustomLayoutItem* AItem, int &ANewSize);
	void __fastcall Close();
	void __fastcall Open();
	__property bool DirectAccess = {read=FDirectAccess, write=FDirectAccess, nodefault};
	__property bool IsClosed = {read=FIsClosed, write=SetIsClosed, nodefault};
	
__published:
	__property bool AllowCloseOnClick = {read=FAllowCloseOnClick, write=SetAllowCloseOnClick, default=0};
	__property TdxLayoutItemCanResizeEvent OnCanResize = {read=FOnCanResize, write=FOnCanResize};
public:
	/* TdxLayoutDirectionalItem.Create */ inline __fastcall virtual TdxLayoutSplitterItem(System::Classes::TComponent* AOwner) : TdxLayoutDirectionalItem(AOwner) { }
	
public:
	/* TdxCustomLayoutItem.Destroy */ inline __fastcall virtual ~TdxLayoutSplitterItem() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomLayoutItemStorableCaptionOptions : public TdxCustomLayoutItemCaptionOptions
{
	typedef TdxCustomLayoutItemCaptionOptions inherited;
	
protected:
	virtual void __fastcall GetStoredPropertyValue(const System::UnicodeString AName, System::Variant &AValue);
	virtual void __fastcall GetStoredProperties(System::Classes::TStrings* AProperties);
	virtual void __fastcall SetStoredPropertyValue(const System::UnicodeString AName, const System::Variant &AValue);
public:
	/* TdxCustomLayoutItemCaptionOptions.Create */ inline __fastcall virtual TdxCustomLayoutItemStorableCaptionOptions(TdxCustomLayoutItem* AItem) : TdxCustomLayoutItemCaptionOptions(AItem) { }
	/* TdxCustomLayoutItemCaptionOptions.Destroy */ inline __fastcall virtual ~TdxCustomLayoutItemStorableCaptionOptions() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutLabeledItemCustomCaptionOptions : public TdxCustomLayoutItemStorableCaptionOptions
{
	typedef TdxCustomLayoutItemStorableCaptionOptions inherited;
	
private:
	System::Uitypes::TCursor FCursor;
	int FWidth;
	bool FWordWrap;
	void __fastcall SetWidth(int Value);
	void __fastcall SetWordWrap(bool Value);
	
protected:
	virtual void __fastcall DoAssign(System::Classes::TPersistent* Source);
	virtual void __fastcall DoChangeScale(int M, int D);
	__property System::Uitypes::TCursor Cursor = {read=FCursor, write=FCursor, default=0};
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, default=0};
	
public:
	__fastcall virtual TdxLayoutLabeledItemCustomCaptionOptions(TdxCustomLayoutItem* AItem);
	__property AlignHorz = {default=0};
	__property AlignVert = {default=1};
	__property Glyph;
	__property ImageIndex = {default=-1};
	__property VisibleElements = {default=3};
	__property int Width = {read=FWidth, write=SetWidth, default=0};
public:
	/* TdxCustomLayoutItemCaptionOptions.Destroy */ inline __fastcall virtual ~TdxLayoutLabeledItemCustomCaptionOptions() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxCustomLayoutLabeledItem : public TdxLayoutBasicItem
{
	typedef TdxLayoutBasicItem inherited;
	
private:
	TdxLayoutLabeledItemCustomCaptionOptions* __fastcall GetCaptionOptions();
	HIDESBASE void __fastcall SetCaptionOptions(TdxLayoutLabeledItemCustomCaptionOptions* Value);
	
protected:
	virtual TdxLayoutAlignVert __fastcall GetParentManagedAlignVert();
	__classmethod virtual TdxCustomLayoutItemCaptionOptionsClass __fastcall GetCaptionOptionsClass();
	virtual TdxCustomLayoutItemViewInfoClass __fastcall GetViewInfoClass();
	
public:
	__property TdxLayoutLabeledItemCustomCaptionOptions* CaptionOptions = {read=GetCaptionOptions, write=SetCaptionOptions};
	
__published:
	__property Padding;
public:
	/* TdxCustomLayoutItem.Create */ inline __fastcall virtual TdxCustomLayoutLabeledItem(System::Classes::TComponent* AOwner) : TdxLayoutBasicItem(AOwner) { }
	/* TdxCustomLayoutItem.Destroy */ inline __fastcall virtual ~TdxCustomLayoutLabeledItem() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutSeparatorItemCaptionOptions : public TdxLayoutLabeledItemCustomCaptionOptions
{
	typedef TdxLayoutLabeledItemCustomCaptionOptions inherited;
	
public:
	__fastcall virtual TdxLayoutSeparatorItemCaptionOptions(TdxCustomLayoutItem* AItem);
	
__published:
	__property AlignHorz = {default=0};
	__property AlignVert = {default=2};
	__property Cursor = {default=0};
	__property Glyph;
	__property ImageIndex = {default=-1};
	__property Text = {default=0};
	__property Visible = {default=0};
	__property VisibleElements = {default=3};
	__property Width = {default=0};
public:
	/* TdxCustomLayoutItemCaptionOptions.Destroy */ inline __fastcall virtual ~TdxLayoutSeparatorItemCaptionOptions() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxLayoutSeparatorItem : public TdxCustomLayoutLabeledItem
{
	typedef TdxCustomLayoutLabeledItem inherited;
	
private:
	HIDESBASE TdxLayoutSeparatorItemCaptionOptions* __fastcall GetCaptionOptions();
	HIDESBASE void __fastcall SetCaptionOptions(TdxLayoutSeparatorItemCaptionOptions* Value);
	
protected:
	virtual System::UnicodeString __fastcall GetBaseName();
	__classmethod virtual TdxCustomLayoutItemCaptionOptionsClass __fastcall GetCaptionOptionsClass();
	__classmethod virtual int __fastcall GetItemClassKind();
	virtual bool __fastcall GetIsVertical();
	virtual TdxLayoutAlignVert __fastcall GetParentManagedAlignVert();
	virtual TdxCustomLayoutItemViewInfoClass __fastcall GetViewInfoClass();
	
public:
	__property IsVertical;
	
__published:
	__property AllowRemove = {default=1};
	__property TdxLayoutSeparatorItemCaptionOptions* CaptionOptions = {read=GetCaptionOptions, write=SetCaptionOptions};
public:
	/* TdxCustomLayoutItem.Create */ inline __fastcall virtual TdxLayoutSeparatorItem(System::Classes::TComponent* AOwner) : TdxCustomLayoutLabeledItem(AOwner) { }
	/* TdxCustomLayoutItem.Destroy */ inline __fastcall virtual ~TdxLayoutSeparatorItem() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutLabeledItemCaptionOptions : public TdxLayoutLabeledItemCustomCaptionOptions
{
	typedef TdxLayoutLabeledItemCustomCaptionOptions inherited;
	
__published:
	__property AlignHorz = {default=0};
	__property AlignVert = {default=1};
	__property Cursor = {default=0};
	__property EllipsisPosition = {default=0};
	__property Glyph;
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property ShowAccelChar = {default=1};
	__property Text = {default=0};
	__property Visible = {default=1};
	__property VisibleElements = {default=3};
	__property Width = {default=0};
	__property WordWrap = {default=0};
public:
	/* TdxLayoutLabeledItemCustomCaptionOptions.Create */ inline __fastcall virtual TdxLayoutLabeledItemCaptionOptions(TdxCustomLayoutItem* AItem) : TdxLayoutLabeledItemCustomCaptionOptions(AItem) { }
	
public:
	/* TdxCustomLayoutItemCaptionOptions.Destroy */ inline __fastcall virtual ~TdxLayoutLabeledItemCaptionOptions() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxLayoutLabeledItem : public TdxCustomLayoutLabeledItem
{
	typedef TdxCustomLayoutLabeledItem inherited;
	
private:
	HIDESBASE TdxLayoutLabeledItemCaptionOptions* __fastcall GetCaptionOptions();
	HIDESBASE void __fastcall SetCaptionOptions(TdxLayoutLabeledItemCaptionOptions* Value);
	
protected:
	virtual System::UnicodeString __fastcall GetBaseName();
	__classmethod virtual TdxCustomLayoutItemCaptionOptionsClass __fastcall GetCaptionOptionsClass();
	__classmethod virtual int __fastcall GetItemClassKind();
	
__published:
	__property AllowRemove = {default=1};
	__property TdxLayoutLabeledItemCaptionOptions* CaptionOptions = {read=GetCaptionOptions, write=SetCaptionOptions};
	__property Enabled;
	__property OnCaptionClick;
public:
	/* TdxCustomLayoutItem.Create */ inline __fastcall virtual TdxLayoutLabeledItem(System::Classes::TComponent* AOwner) : TdxCustomLayoutLabeledItem(AOwner) { }
	/* TdxCustomLayoutItem.Destroy */ inline __fastcall virtual ~TdxLayoutLabeledItem() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutItemCaptionOptions : public TdxLayoutLabeledItemCaptionOptions
{
	typedef TdxLayoutLabeledItemCaptionOptions inherited;
	
__published:
	__property Layout = {default=0};
public:
	/* TdxLayoutLabeledItemCustomCaptionOptions.Create */ inline __fastcall virtual TdxLayoutItemCaptionOptions(TdxCustomLayoutItem* AItem) : TdxLayoutLabeledItemCaptionOptions(AItem) { }
	
public:
	/* TdxCustomLayoutItemCaptionOptions.Destroy */ inline __fastcall virtual ~TdxLayoutItemCaptionOptions() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxLayoutImageItem : public TdxCustomLayoutLabeledItem
{
	typedef TdxCustomLayoutLabeledItem inherited;
	
private:
	Dxgdiplusclasses::TdxSmartGlyph* FImage;
	Cxgraphics::TcxImageFitMode FImageFitMode;
	HIDESBASE TdxLayoutItemCaptionOptions* __fastcall GetCaptionOptions();
	HIDESBASE void __fastcall SetCaptionOptions(TdxLayoutItemCaptionOptions* Value);
	void __fastcall SetImage(Dxgdiplusclasses::TdxSmartGlyph* AValue);
	void __fastcall SetImageFitMode(Cxgraphics::TcxImageFitMode AValue);
	void __fastcall ImageChanged(System::TObject* Sender);
	
protected:
	virtual System::UnicodeString __fastcall GetBaseName();
	__classmethod virtual TdxCustomLayoutItemCaptionOptionsClass __fastcall GetCaptionOptionsClass();
	__classmethod virtual int __fastcall GetItemClassKind();
	virtual TdxCustomLayoutItemViewInfoClass __fastcall GetViewInfoClass();
	__property Cxgraphics::TcxImageFitMode ImageFitMode = {read=FImageFitMode, write=SetImageFitMode, default=3};
	
public:
	__fastcall virtual TdxLayoutImageItem(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxLayoutImageItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property AllowRemove = {default=1};
	__property TdxLayoutItemCaptionOptions* CaptionOptions = {read=GetCaptionOptions, write=SetCaptionOptions};
	__property Enabled;
	__property Dxgdiplusclasses::TdxSmartGlyph* Image = {read=FImage, write=SetImage};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomLayoutCheckableItemCaptionOptions : public TdxLayoutLabeledItemCaptionOptions
{
	typedef TdxLayoutLabeledItemCaptionOptions inherited;
	
private:
	TdxCustomLayoutCheckableItem* __fastcall GetItem();
	
protected:
	bool __fastcall IsHintStored();
	virtual bool __fastcall IsTextStored();
	__property TdxCustomLayoutCheckableItem* Item = {read=GetItem};
	
public:
	__fastcall virtual TdxCustomLayoutCheckableItemCaptionOptions(TdxCustomLayoutItem* AItem);
	
__published:
	__property Hint = {stored=IsHintStored, default=0};
	__property Layout = {default=2};
public:
	/* TdxCustomLayoutItemCaptionOptions.Destroy */ inline __fastcall virtual ~TdxCustomLayoutCheckableItemCaptionOptions() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutCheckBoxItemCaptionOptions : public TdxCustomLayoutCheckableItemCaptionOptions
{
	typedef TdxCustomLayoutCheckableItemCaptionOptions inherited;
	
public:
	/* TdxCustomLayoutCheckableItemCaptionOptions.Create */ inline __fastcall virtual TdxLayoutCheckBoxItemCaptionOptions(TdxCustomLayoutItem* AItem) : TdxCustomLayoutCheckableItemCaptionOptions(AItem) { }
	
public:
	/* TdxCustomLayoutItemCaptionOptions.Destroy */ inline __fastcall virtual ~TdxLayoutCheckBoxItemCaptionOptions() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutRadioButtonItemCaptionOptions : public TdxCustomLayoutCheckableItemCaptionOptions
{
	typedef TdxCustomLayoutCheckableItemCaptionOptions inherited;
	
public:
	/* TdxCustomLayoutCheckableItemCaptionOptions.Create */ inline __fastcall virtual TdxLayoutRadioButtonItemCaptionOptions(TdxCustomLayoutItem* AItem) : TdxCustomLayoutCheckableItemCaptionOptions(AItem) { }
	
public:
	/* TdxCustomLayoutItemCaptionOptions.Destroy */ inline __fastcall virtual ~TdxLayoutRadioButtonItemCaptionOptions() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxLayoutCheckBoxItemCheckBoxOptions : public TdxCustomLayoutItemOptions
{
	typedef TdxCustomLayoutItemOptions inherited;
	
private:
	bool FAllowGrayed;
	Dxgdiplusclasses::TdxSmartGlyph* FGlyph;
	int FGlyphCount;
	System::Classes::TNotifyEvent FOnChange;
	bool FReadOnly;
	TdxLayoutCheckBoxItem* __fastcall GetItem();
	void __fastcall SetGlyph(Dxgdiplusclasses::TdxSmartGlyph* AValue);
	void __fastcall SetGlyphCount(int AValue);
	void __fastcall SetReadOnly(bool AValue);
	
protected:
	virtual void __fastcall DoAssign(System::Classes::TPersistent* Source);
	void __fastcall GlyphChangeHandler(System::TObject* Sender);
	System::UnicodeString __fastcall GetStateCaption(int AIndex);
	int __fastcall GetGlyphCount();
	__property TdxLayoutCheckBoxItem* Item = {read=GetItem};
	
public:
	__fastcall virtual TdxLayoutCheckBoxItemCheckBoxOptions(TdxCustomLayoutItem* AItem);
	__fastcall virtual ~TdxLayoutCheckBoxItemCheckBoxOptions();
	
__published:
	__property bool AllowGrayed = {read=FAllowGrayed, write=FAllowGrayed, default=0};
	__property Dxgdiplusclasses::TdxSmartGlyph* Glyph = {read=FGlyph, write=SetGlyph};
	__property int GlyphCount = {read=FGlyphCount, write=SetGlyphCount, default=6};
	__property bool ReadOnly = {read=FReadOnly, write=SetReadOnly, default=0};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
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


typedef System::TMetaClass* TdxLayoutCheckBoxItemCheckBoxOptionsClass;

class PASCALIMPLEMENTATION TdxCustomLayoutCheckableItemActionLink : public Vcl::Actnlist::TActionLink
{
	typedef Vcl::Actnlist::TActionLink inherited;
	
protected:
	TdxCustomLayoutCheckableItem* FClient;
	virtual void __fastcall AssignClient(System::TObject* AClient);
	virtual bool __fastcall IsCaptionLinked();
	virtual bool __fastcall IsCheckedLinked();
	virtual bool __fastcall IsEnabledLinked();
	virtual bool __fastcall IsHintLinked();
	virtual bool __fastcall IsOnExecuteLinked();
	virtual bool __fastcall IsVisibleLinked();
	virtual void __fastcall SetCaption(const System::UnicodeString Value);
	virtual void __fastcall SetChecked(bool Value);
	virtual void __fastcall SetEnabled(bool Value);
	virtual void __fastcall SetHint(const System::UnicodeString Value);
	virtual void __fastcall SetOnExecute(System::Classes::TNotifyEvent Value);
	virtual void __fastcall SetVisible(bool Value);
public:
	/* TBasicActionLink.Create */ inline __fastcall virtual TdxCustomLayoutCheckableItemActionLink(System::TObject* AClient) : Vcl::Actnlist::TActionLink(AClient) { }
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TdxCustomLayoutCheckableItemActionLink() { }
	
};


typedef System::TMetaClass* TdxCustomLayoutCheckableItemActionLinkClass;

class PASCALIMPLEMENTATION TdxLayoutCheckBoxItemActionLink : public TdxCustomLayoutCheckableItemActionLink
{
	typedef TdxCustomLayoutCheckableItemActionLink inherited;
	
public:
	/* TBasicActionLink.Create */ inline __fastcall virtual TdxLayoutCheckBoxItemActionLink(System::TObject* AClient) : TdxCustomLayoutCheckableItemActionLink(AClient) { }
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TdxLayoutCheckBoxItemActionLink() { }
	
};


class PASCALIMPLEMENTATION TdxLayoutRadioButtonItemActionLink : public TdxCustomLayoutCheckableItemActionLink
{
	typedef TdxCustomLayoutCheckableItemActionLink inherited;
	
private:
	TdxLayoutRadioButtonItem* __fastcall GetClient();
	
protected:
	virtual bool __fastcall IsGroupIndexLinked();
	virtual void __fastcall SetGroupIndex(int Value);
	__property TdxLayoutRadioButtonItem* Client = {read=GetClient};
public:
	/* TBasicActionLink.Create */ inline __fastcall virtual TdxLayoutRadioButtonItemActionLink(System::TObject* AClient) : TdxCustomLayoutCheckableItemActionLink(AClient) { }
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TdxLayoutRadioButtonItemActionLink() { }
	
};


class PASCALIMPLEMENTATION TdxCustomLayoutCheckableItem : public TdxCustomLayoutLabeledItem
{
	typedef TdxCustomLayoutLabeledItem inherited;
	
private:
	TdxCustomLayoutCheckableItemActionLink* FActionLink;
	bool FIsClickLocked;
	bool FTabStop;
	bool FShowFocusRect;
	System::Classes::TNotifyEvent FOnClick;
	void __fastcall DoActionChange(System::TObject* Sender);
	System::Classes::TBasicAction* __fastcall GetAction();
	void __fastcall SetAction(System::Classes::TBasicAction* AValue);
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual bool __fastcall CanFocus(bool AByMouse);
	virtual bool __fastcall CanProcessAccel();
	virtual void __fastcall DoGetTabOrderList(System::Classes::TList* List);
	virtual void __fastcall InitiateAction();
	virtual bool __fastcall IsEnabledStored();
	virtual bool __fastcall NeedMakeVisibleAfterFocusing();
	virtual void __fastcall ActionChange(System::TObject* Sender, const bool ACheckDefaults);
	void __fastcall Click();
	__classmethod virtual TdxCustomLayoutCheckableItemActionLinkClass __fastcall GetActionLinkClass();
	virtual bool __fastcall GetChecked() = 0 ;
	virtual bool __fastcall GetTabStop();
	bool __fastcall IsOnClickStored();
	bool __fastcall IsVisibleStored();
	DYNAMIC void __fastcall ProcessAccel();
	virtual void __fastcall SetChecked(const bool AValue) = 0 ;
	virtual void __fastcall SetTabStop(const bool AValue);
	virtual void __fastcall Toggle();
	__property TdxCustomLayoutCheckableItemActionLink* ActionLink = {read=FActionLink, write=FActionLink};
	__property bool TabStop = {read=GetTabStop, write=SetTabStop, nodefault};
	__property bool ShowFocusRect = {read=FShowFocusRect, write=FShowFocusRect, nodefault};
	
public:
	__fastcall virtual TdxCustomLayoutCheckableItem(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxCustomLayoutCheckableItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property System::Classes::TBasicAction* Action = {read=GetAction, write=SetAction};
	__property bool Checked = {read=GetChecked, write=SetChecked, nodefault};
	__property System::Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick, stored=IsOnClickStored};
	
__published:
	__property Visible = {stored=IsVisibleStored, default=1};
};


class PASCALIMPLEMENTATION TdxLayoutCheckBoxItem : public TdxCustomLayoutCheckableItem
{
	typedef TdxCustomLayoutCheckableItem inherited;
	
private:
	TdxLayoutCheckBoxItemCheckBoxOptions* FCheckBoxOptions;
	Cxlookandfeelpainters::TcxCheckBoxState FState;
	HIDESBASE TdxLayoutCheckBoxItemCaptionOptions* __fastcall GetCaptionOptions();
	HIDESBASE void __fastcall SetCaptionOptions(TdxLayoutCheckBoxItemCaptionOptions* AValue);
	void __fastcall SetCheckBoxOptions(TdxLayoutCheckBoxItemCheckBoxOptions* AValue);
	void __fastcall SetState(const Cxlookandfeelpainters::TcxCheckBoxState AValue);
	
protected:
	virtual void __fastcall CreateOptions();
	virtual void __fastcall DestroyOptions();
	virtual void __fastcall DoChanged(TdxLayoutItemChangeType AType);
	__classmethod virtual TdxCustomLayoutCheckableItemActionLinkClass __fastcall GetActionLinkClass();
	virtual System::UnicodeString __fastcall GetBaseName();
	__classmethod virtual TdxCustomLayoutItemCaptionOptionsClass __fastcall GetCaptionOptionsClass();
	__classmethod virtual TdxLayoutCheckBoxItemCheckBoxOptionsClass __fastcall GetCheckBoxOptionsClass();
	virtual bool __fastcall GetChecked();
	__classmethod virtual int __fastcall GetItemClassKind();
	virtual TdxCustomLayoutItemViewInfoClass __fastcall GetViewInfoClass();
	bool __fastcall IsStateStored();
	virtual void __fastcall SetChecked(const bool AValue);
	virtual void __fastcall Toggle();
	
public:
	__fastcall virtual TdxLayoutCheckBoxItem(System::Classes::TComponent* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property Action;
	__property AllowRemove = {default=1};
	__property TdxLayoutCheckBoxItemCaptionOptions* CaptionOptions = {read=GetCaptionOptions, write=SetCaptionOptions};
	__property TdxLayoutCheckBoxItemCheckBoxOptions* CheckBoxOptions = {read=FCheckBoxOptions, write=SetCheckBoxOptions};
	__property Checked = {stored=false};
	__property Enabled;
	__property Cxlookandfeelpainters::TcxCheckBoxState State = {read=FState, write=SetState, stored=IsStateStored, default=0};
	__property TabStop = {default=1};
	__property OnClick;
public:
	/* TdxCustomLayoutCheckableItem.Destroy */ inline __fastcall virtual ~TdxLayoutCheckBoxItem() { }
	
};


class PASCALIMPLEMENTATION TdxLayoutRadioButtonItem : public TdxCustomLayoutCheckableItem
{
	typedef TdxCustomLayoutCheckableItem inherited;
	
private:
	bool FChecked;
	int FGroupIndex;
	HIDESBASE TdxLayoutRadioButtonItemCaptionOptions* __fastcall GetCaptionOptions();
	HIDESBASE void __fastcall SetCaptionOptions(TdxLayoutRadioButtonItemCaptionOptions* AValue);
	void __fastcall TurnLayoutSiblingsOff(TdxCustomLayoutGroup* AGroup);
	
protected:
	virtual void __fastcall ActionChange(System::TObject* Sender, const bool ACheckDefaults);
	__classmethod virtual TdxCustomLayoutCheckableItemActionLinkClass __fastcall GetActionLinkClass();
	virtual System::UnicodeString __fastcall GetBaseName();
	__classmethod virtual TdxCustomLayoutItemCaptionOptionsClass __fastcall GetCaptionOptionsClass();
	virtual bool __fastcall GetChecked();
	__classmethod virtual int __fastcall GetItemClassKind();
	virtual bool __fastcall GetTabStop();
	virtual TdxCustomLayoutItemViewInfoClass __fastcall GetViewInfoClass();
	bool __fastcall IsCheckedStored();
	bool __fastcall IsGroupIndexStored();
	virtual void __fastcall SetChecked(const bool AValue);
	virtual void __fastcall Toggle();
	
public:
	__fastcall virtual TdxLayoutRadioButtonItem(System::Classes::TComponent* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property Action;
	__property AllowRemove = {default=1};
	__property TdxLayoutRadioButtonItemCaptionOptions* CaptionOptions = {read=GetCaptionOptions, write=SetCaptionOptions};
	__property Checked = {stored=IsCheckedStored, default=0};
	__property Enabled;
	__property int GroupIndex = {read=FGroupIndex, write=FGroupIndex, stored=IsGroupIndexStored, default=0};
	__property TabStop = {default=0};
	__property OnClick;
public:
	/* TdxCustomLayoutCheckableItem.Destroy */ inline __fastcall virtual ~TdxLayoutRadioButtonItem() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomLayoutControlAdapter : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TdxLayoutItem* FItem;
	bool FNeedSetRegion;
	bool FIsRegionUsed;
	Vcl::Controls::TControl* __fastcall GetControl();
	Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* __fastcall GetLayoutLookAndFeel();
	
protected:
	virtual void __fastcall HideControlBorder();
	virtual void __fastcall Init();
	virtual void __fastcall AfterCalculateViewInfo();
	virtual void __fastcall CombineRegion(const System::Types::TRect &ARect);
	virtual void __fastcall InternalSetInitialSettings();
	virtual bool __fastcall NeedBorder();
	bool __fastcall HasBorderProperty();
	virtual bool __fastcall ShowItemCaption();
	virtual bool __fastcall UseItemColor();
	virtual bool __fastcall AllowCheckAutoSize();
	virtual bool __fastcall AllowCheckSize();
	virtual bool __fastcall GetControlAutoWidth();
	virtual bool __fastcall GetControlAutoHeight();
	virtual void __fastcall SetControlAutoWidth(bool AValue);
	virtual void __fastcall SetControlAutoHeight(bool AValue);
	virtual void __fastcall BeginCustomization();
	virtual void __fastcall EndCustomization();
	__property Vcl::Controls::TControl* Control = {read=GetControl};
	__property bool ControlAutoWidth = {read=GetControlAutoWidth, write=SetControlAutoWidth, nodefault};
	__property bool ControlAutoHeight = {read=GetControlAutoHeight, write=SetControlAutoHeight, nodefault};
	__property TdxLayoutItem* Item = {read=FItem};
	__property Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* LayoutLookAndFeel = {read=GetLayoutLookAndFeel};
	
public:
	__fastcall virtual TdxCustomLayoutControlAdapter(TdxLayoutItem* AItem);
	__fastcall virtual ~TdxCustomLayoutControlAdapter();
	void __fastcall Initialize();
	virtual void __fastcall AfterInitialization();
	virtual void __fastcall BeforeInitialization();
	virtual void __fastcall SetInitialSettings();
	__classmethod void __fastcall Register(Vcl::Controls::TControlClass AControlClass);
	__classmethod void __fastcall Unregister(Vcl::Controls::TControlClass AControlClass);
};

#pragma pack(pop)

typedef System::TMetaClass* TdxCustomLayoutControlAdapterClass;

typedef System::TMetaClass* TdxLayoutItemControlOptionsClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutItemControlOptions : public TdxCustomLayoutItemOptions
{
	typedef TdxCustomLayoutItemOptions inherited;
	
private:
	TdxLayoutAlignHorz FAlignHorz;
	TdxLayoutAlignVert FAlignVert;
	bool FAutoControlAreaAlignment;
	bool FAutoColor;
	int FMinHeight;
	int FMinWidth;
	bool FOpaque;
	int FOriginalHeight;
	int FOriginalWidth;
	Vcl::Controls::TScalingFlags FScalingFlags;
	bool FShowBorder;
	bool __fastcall GetFixedSize();
	void __fastcall SetAlignHorz(TdxLayoutRealAlignHorz Value);
	void __fastcall SetAlignVert(TdxLayoutRealAlignVert Value);
	void __fastcall SetAutoControlAreaAlignment(bool Value);
	void __fastcall SetAutoColor(bool Value);
	void __fastcall SetFixedSize(bool Value);
	void __fastcall SetMinHeight(int Value);
	void __fastcall SetMinWidth(int Value);
	void __fastcall SetOpaque(bool Value);
	void __fastcall SetShowBorder(bool Value);
	void __fastcall SetOriginalHeight(int Value);
	void __fastcall SetOriginalWidth(int Value);
	
protected:
	virtual void __fastcall DoAssign(System::Classes::TPersistent* Source);
	virtual void __fastcall DoChangeScale(int M, int D);
	
public:
	__fastcall virtual TdxLayoutItemControlOptions(TdxCustomLayoutItem* AItem);
	bool __fastcall IsHeightUsual();
	bool __fastcall IsWidthUsual();
	
__published:
	__property TdxLayoutRealAlignHorz AlignHorz = {read=FAlignHorz, write=SetAlignHorz, default=3};
	__property TdxLayoutRealAlignVert AlignVert = {read=FAlignVert, write=SetAlignVert, default=3};
	__property bool AutoAlignment = {read=FAutoControlAreaAlignment, write=SetAutoControlAreaAlignment, stored=false, nodefault};
	__property bool AutoControlAreaAlignment = {read=FAutoControlAreaAlignment, write=SetAutoControlAreaAlignment, default=1};
	__property bool AutoColor = {read=FAutoColor, write=SetAutoColor, default=0};
	__property bool FixedSize = {read=GetFixedSize, write=SetFixedSize, stored=false, nodefault};
	__property int MinHeight = {read=FMinHeight, write=SetMinHeight, default=20};
	__property int MinWidth = {read=FMinWidth, write=SetMinWidth, default=20};
	__property bool Opaque = {read=FOpaque, write=SetOpaque, default=0};
	__property int OriginalHeight = {read=FOriginalHeight, write=SetOriginalHeight, default=0};
	__property int OriginalWidth = {read=FOriginalWidth, write=SetOriginalWidth, default=0};
	__property bool ShowBorder = {read=FShowBorder, write=SetShowBorder, default=1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxLayoutItemControlOptions() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxLayoutControlItem : public TdxCustomLayoutLabeledItem
{
	typedef TdxCustomLayoutLabeledItem inherited;
	
private:
	Vcl::Controls::TControl* FControl;
	TdxCustomLayoutControlAdapter* FControlAdapter;
	TdxLayoutItemControlOptions* FControlOptions;
	HIDESBASE TdxLayoutControlItemViewInfo* __fastcall GetViewInfo();
	void __fastcall SetControlOptions(TdxLayoutItemControlOptions* Value);
	System::Types::TPoint __fastcall GetOriginalControlSize();
	void __fastcall SetOriginalControlSize(const System::Types::TPoint &Value);
	
protected:
	virtual void __fastcall ChangeScale(int M, int D);
	virtual void __fastcall DoInit();
	__classmethod virtual TdxCustomLayoutItemCaptionOptionsClass __fastcall GetCaptionOptionsClass();
	virtual TdxCustomLayoutItemViewInfoClass __fastcall GetViewInfoClass();
	virtual void __fastcall CreateOptions();
	virtual void __fastcall DestroyOptions();
	virtual bool __fastcall CanFocusControl(bool ACheckTabStop = false);
	virtual TdxLayoutItemControlOptionsClass __fastcall GetControlOptionsClass();
	virtual void __fastcall SetControl(Vcl::Controls::TControl* AValue);
	__property Vcl::Controls::TControl* Control = {read=FControl, write=SetControl};
	__property TdxLayoutItemControlOptions* ControlOptions = {read=FControlOptions, write=SetControlOptions};
	__property TdxCustomLayoutControlAdapter* ControlAdapter = {read=FControlAdapter};
	
public:
	__property System::Types::TPoint OriginalControlSize = {read=GetOriginalControlSize, write=SetOriginalControlSize};
	__property TdxLayoutControlItemViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TdxCustomLayoutItem.Create */ inline __fastcall virtual TdxLayoutControlItem(System::Classes::TComponent* AOwner) : TdxCustomLayoutLabeledItem(AOwner) { }
	/* TdxCustomLayoutItem.Destroy */ inline __fastcall virtual ~TdxLayoutControlItem() { }
	
};


class PASCALIMPLEMENTATION TdxLayoutItem : public TdxLayoutControlItem
{
	typedef TdxLayoutControlItem inherited;
	
private:
	int FControlLockCount;
	bool FIsInternalHandleCreating;
	bool FIsReseting;
	System::Types::TPoint FNewControlSize;
	Cxcontrols::TdxControlsDesignSelectorHelper* FSelectorHelper;
	Cxcontrols::TcxWindowProcLinkedObject* FWindowProcObject;
	HIDESBASE TdxLayoutItemCaptionOptions* __fastcall GetCaptionOptions();
	System::Types::TRect __fastcall GetDesignSelectorRect();
	HIDESBASE TdxLayoutItemViewInfo* __fastcall GetViewInfo();
	Vcl::Controls::TWinControl* __fastcall GetWinControl();
	HIDESBASE void __fastcall SetCaptionOptions(TdxLayoutItemCaptionOptions* Value);
	bool __fastcall CanFocusControlOnCaptionClick();
	void __fastcall CreateControlAdapter();
	
protected:
	__classmethod virtual int __fastcall GetItemClassKind();
	virtual bool __fastcall CanDelete();
	virtual bool __fastcall CanProcessAccel();
	virtual void __fastcall ContainerChanged();
	virtual void __fastcall CustomizationChanged();
	DYNAMIC void __fastcall DoCaptionDown();
	virtual void __fastcall DoGetTabOrderList(System::Classes::TList* List);
	virtual bool __fastcall FocusFirst(bool ACheckTabStop);
	virtual System::UnicodeString __fastcall GetBaseName();
	void __fastcall MakeControlVisible(bool AFully);
	DYNAMIC void __fastcall ProcessAccel();
	virtual void __fastcall RestoreItemControlBounds();
	virtual void __fastcall SetControl(Vcl::Controls::TControl* Value);
	virtual void __fastcall AfterCalculateViewInfo();
	virtual void __fastcall BeforeCalculateViewInfo();
	virtual void __fastcall ApplyCalculatedChanges();
	virtual void __fastcall SetInitialSettings();
	__classmethod virtual TdxCustomLayoutItemCaptionOptionsClass __fastcall GetCaptionOptionsClass();
	virtual TdxCustomLayoutItemViewInfoClass __fastcall GetViewInfoClass();
	virtual bool __fastcall CanDragAndDrop(const System::Types::TPoint &P);
	virtual bool __fastcall CanFocusControl(bool ACheckTabStop = false);
	bool __fastcall ControlLocked();
	virtual void __fastcall CheckAutoSize(bool ADropOnly);
	virtual void __fastcall ControlWndProc(Winapi::Messages::TMessage &Message);
	bool __fastcall IsDesignSelectorVisible();
	virtual bool __fastcall HasControl();
	bool __fastcall HasWinControl();
	void __fastcall SaveOriginalControlSize(bool ASaveAnyway, bool ANeedChanges);
	void __fastcall SetControlEnablement();
	void __fastcall SetControlFocus();
	void __fastcall SetControlVisibility();
	void __fastcall UpdateDesignSelector();
	void __fastcall DropControl();
	void __fastcall PrepareControl();
	void __fastcall UnprepareControl(bool AFull);
	__property System::Types::TRect DesignSelectorRect = {read=GetDesignSelectorRect};
	__property Vcl::Controls::TWinControl* WinControl = {read=GetWinControl};
	
public:
	__fastcall virtual ~TdxLayoutItem();
	__property TdxLayoutItemViewInfo* ViewInfo = {read=GetViewInfo};
	
__published:
	__property AllowRemove = {default=1};
	__property TdxLayoutItemCaptionOptions* CaptionOptions = {read=GetCaptionOptions, write=SetCaptionOptions};
	__property Control;
	__property ControlOptions;
	__property Enabled;
	__property OnCaptionClick;
public:
	/* TdxCustomLayoutItem.Create */ inline __fastcall virtual TdxLayoutItem(System::Classes::TComponent* AOwner) : TdxLayoutControlItem(AOwner) { }
	
};


typedef System::TMetaClass* TdxLayoutItemClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutGroupHelper : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod virtual TdxLayoutRealAlignHorz __fastcall GetChildItemsAlignHorz();
	__classmethod virtual TdxLayoutRealAlignVert __fastcall GetChildItemsAlignVert();
	__classmethod virtual TdxLayoutDirection __fastcall GetOrthogonalDirection();
	__classmethod virtual TdxLayoutGroupViewInfoSpecificClass __fastcall GetSpecificClass();
public:
	/* TObject.Create */ inline __fastcall TdxLayoutGroupHelper() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxLayoutGroupHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutHorizontalGroupHelper : public TdxLayoutGroupHelper
{
	typedef TdxLayoutGroupHelper inherited;
	
public:
	__classmethod virtual TdxLayoutRealAlignHorz __fastcall GetChildItemsAlignHorz();
	__classmethod virtual TdxLayoutRealAlignVert __fastcall GetChildItemsAlignVert();
	__classmethod virtual TdxLayoutDirection __fastcall GetOrthogonalDirection();
	__classmethod virtual TdxLayoutGroupViewInfoSpecificClass __fastcall GetSpecificClass();
public:
	/* TObject.Create */ inline __fastcall TdxLayoutHorizontalGroupHelper() : TdxLayoutGroupHelper() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxLayoutHorizontalGroupHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutVerticalGroupHelper : public TdxLayoutGroupHelper
{
	typedef TdxLayoutGroupHelper inherited;
	
public:
	__classmethod virtual TdxLayoutRealAlignHorz __fastcall GetChildItemsAlignHorz();
	__classmethod virtual TdxLayoutRealAlignVert __fastcall GetChildItemsAlignVert();
	__classmethod virtual TdxLayoutDirection __fastcall GetOrthogonalDirection();
	__classmethod virtual TdxLayoutGroupViewInfoSpecificClass __fastcall GetSpecificClass();
public:
	/* TObject.Create */ inline __fastcall TdxLayoutVerticalGroupHelper() : TdxLayoutGroupHelper() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxLayoutVerticalGroupHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutTabbedGroupHelper : public TdxLayoutHorizontalGroupHelper
{
	typedef TdxLayoutHorizontalGroupHelper inherited;
	
public:
	__classmethod virtual TdxLayoutRealAlignHorz __fastcall GetChildItemsAlignHorz();
	__classmethod virtual TdxLayoutRealAlignVert __fastcall GetChildItemsAlignVert();
	__classmethod virtual TdxLayoutDirection __fastcall GetOrthogonalDirection();
	__classmethod virtual TdxLayoutGroupViewInfoSpecificClass __fastcall GetSpecificClass();
public:
	/* TObject.Create */ inline __fastcall TdxLayoutTabbedGroupHelper() : TdxLayoutHorizontalGroupHelper() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxLayoutTabbedGroupHelper() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxLayoutTabbedOptions : public Cxpc::TcxCustomTabControlProperties
{
	typedef Cxpc::TcxCustomTabControlProperties inherited;
	
private:
	Cxgraphics::TcxImageList* FInternalImages;
	TdxCustomLayoutGroup* __fastcall GetGroup();
	Cxgraphics::TcxImageList* __fastcall GetInternalImages();
	System::UnicodeString __fastcall GetItemCaption(TdxCustomLayoutItem* AItem);
	
protected:
	virtual void __fastcall DoChanged(Cxpc::TcxCustomTabControlPropertiesChangedType AType = (Cxpc::TcxCustomTabControlPropertiesChangedType)(0x0));
	virtual void __fastcall DoChanging(int ANewTabIndex, bool &AAllowChange);
	void __fastcall CheckTabs();
	void __fastcall DeleteTab(TdxCustomLayoutItem* AItem);
	virtual void __fastcall DoSetTabIndex(int Value);
	TdxCustomLayoutItem* __fastcall GetItem(int AIndex);
	virtual Cxpc::_di_IcxTabControl __fastcall GetTabControl();
	virtual int __fastcall GetTabIndex();
	void __fastcall InsertTab(TdxCustomLayoutItem* AItem);
	void __fastcall RefreshImages();
	void __fastcall RefreshTabsCaption();
	void __fastcall RefreshTabsEnabled();
	void __fastcall RefreshTabsVisible();
	__property TdxCustomLayoutGroup* Group = {read=GetGroup};
	__property Cxgraphics::TcxImageList* InternalImages = {read=GetInternalImages};
	
public:
	__fastcall virtual TdxLayoutTabbedOptions(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TdxLayoutTabbedOptions();
	
__published:
	__property CloseButtonMode = {default=0};
	__property CloseTabWithMiddleClick = {default=0};
	__property HideTabs = {default=0};
	__property HotTrack = {default=0};
	__property ImageBorder = {default=0};
	__property MultiLine = {default=0};
	__property MultiLineTabCaptions = {default=0};
	__property NavigatorPosition = {default=2};
	__property Options = {default=177};
	__property RaggedRight = {default=0};
	__property Rotate = {default=0};
	__property RotatedTabsMaxWidth = {default=0};
	__property ScrollOpposite = {default=0};
	__property ShowFrame = {default=0};
	__property TabCaptionAlignment = {default=2};
	__property TabHeight = {default=0};
	__property TabPosition = {default=0};
	__property TabWidth = {default=0};
};


typedef void __fastcall (__closure *TdxGetTextEvent)(System::TObject* Sender, System::UnicodeString &AText);

class PASCALIMPLEMENTATION TdxCustomLayoutGroupButton : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	bool FEnabled;
	Dxgdiplusclasses::TdxSmartGlyph* FGlyph;
	unsigned FHeight;
	System::UnicodeString FHint;
	NativeInt FTag;
	bool FVisible;
	unsigned FWidth;
	System::Classes::TNotifyEvent FOnClick;
	TdxGetTextEvent FOnGetHint;
	System::UnicodeString __fastcall GetHint();
	TdxCustomLayoutGroupButtons* __fastcall GetButtons();
	void __fastcall GlyphChangedHandler(System::TObject* Sender);
	void __fastcall SetEnabled(bool AValue);
	void __fastcall SetGlyph(Dxgdiplusclasses::TdxSmartGlyph* AValue);
	void __fastcall SetHeight(unsigned AValue);
	void __fastcall SetVisible(bool AValue);
	void __fastcall SetWidth(unsigned AValue);
	__property TdxGetTextEvent OnGetHint = {read=FOnGetHint, write=FOnGetHint};
	
protected:
	virtual void __fastcall ChangeScale(int M, int D);
	int __fastcall GetHeight();
	virtual TdxLayoutGroupButtonViewInfoClass __fastcall GetViewInfoClass();
	int __fastcall GetWidth();
	virtual void __fastcall DoClick();
	bool __fastcall IsExpandButton();
	bool __fastcall IsHomeButton();
	__property TdxCustomLayoutGroupButtons* Buttons = {read=GetButtons};
	
public:
	__fastcall virtual TdxCustomLayoutGroupButton(System::Classes::TCollection* Collection);
	__fastcall virtual ~TdxCustomLayoutGroupButton();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	DYNAMIC System::UnicodeString __fastcall GetNamePath();
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=1};
	__property Dxgdiplusclasses::TdxSmartGlyph* Glyph = {read=FGlyph, write=SetGlyph};
	__property unsigned Height = {read=FHeight, write=SetHeight, default=0};
	__property System::UnicodeString Hint = {read=GetHint, write=FHint};
	__property NativeInt Tag = {read=FTag, write=FTag, default=0};
	__property bool Visible = {read=FVisible, write=SetVisible, default=1};
	__property unsigned Width = {read=FWidth, write=SetWidth, default=0};
	__property System::Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick};
};


typedef System::TMetaClass* TdxCustomLayoutGroupButtonClass;

class PASCALIMPLEMENTATION TdxLayoutGroupButton : public TdxCustomLayoutGroupButton
{
	typedef TdxCustomLayoutGroupButton inherited;
	
__published:
	__property Enabled = {default=1};
	__property Glyph;
	__property Height = {default=0};
	__property Hint = {default=0};
	__property Tag = {default=0};
	__property Visible = {default=1};
	__property Width = {default=0};
	__property OnClick;
public:
	/* TdxCustomLayoutGroupButton.Create */ inline __fastcall virtual TdxLayoutGroupButton(System::Classes::TCollection* Collection) : TdxCustomLayoutGroupButton(Collection) { }
	/* TdxCustomLayoutGroupButton.Destroy */ inline __fastcall virtual ~TdxLayoutGroupButton() { }
	
};


class PASCALIMPLEMENTATION TdxLayoutGroupCheckBoxButton : public TdxCustomLayoutGroupButton
{
	typedef TdxCustomLayoutGroupButton inherited;
	
private:
	Dxcheckgroupbox::TdxCheckGroupBoxCheckBoxAction FCheckAction;
	Cxlookandfeelpainters::TcxCheckBoxState FState;
	void __fastcall ToggleChildrenEnabledState(TdxCustomLayoutGroup* AGroup, const bool AEnabled);
	bool __fastcall GetChecked();
	void __fastcall SetChecked(bool AValue);
	void __fastcall SetState(Cxlookandfeelpainters::TcxCheckBoxState AValue);
	
protected:
	virtual void __fastcall DoClick();
	virtual TdxLayoutGroupButtonViewInfoClass __fastcall GetViewInfoClass();
	void __fastcall Toggle();
	__property Cxlookandfeelpainters::TcxCheckBoxState State = {read=FState, write=SetState, default=1};
	
public:
	__fastcall virtual TdxLayoutGroupCheckBoxButton(System::Classes::TCollection* Collection);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property Dxcheckgroupbox::TdxCheckGroupBoxCheckBoxAction CheckAction = {read=FCheckAction, write=FCheckAction, default=1};
	__property bool Checked = {read=GetChecked, write=SetChecked, default=1};
	__property Visible = {default=0};
public:
	/* TdxCustomLayoutGroupButton.Destroy */ inline __fastcall virtual ~TdxLayoutGroupCheckBoxButton() { }
	
};


class PASCALIMPLEMENTATION TdxCustomLayoutGroupButtons : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TdxCustomLayoutGroupButton* operator[](int Index) { return this->Items[Index]; }
	
private:
	TdxLayoutGroupButtonOptions* FOptions;
	System::Classes::TNotifyEvent FOnChange;
	HIDESBASE TdxCustomLayoutGroupButton* __fastcall GetItem(int Index);
	TdxLayoutGroupButtonOptions* __fastcall GetOptions();
	HIDESBASE void __fastcall SetItem(int Index, TdxCustomLayoutGroupButton* const AValue);
	
protected:
	virtual void __fastcall ChangeScale(int M, int D);
	virtual TdxCustomLayoutGroupButtonClass __fastcall GetItemClass();
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	__property TdxLayoutGroupButtonOptions* Options = {read=GetOptions};
	
public:
	__fastcall TdxCustomLayoutGroupButtons(TdxLayoutGroupButtonOptions* AOptions);
	__property TdxCustomLayoutGroupButton* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TdxCustomLayoutGroupButtons() { }
	
};


class PASCALIMPLEMENTATION TdxLayoutGroupButtons : public TdxCustomLayoutGroupButtons
{
	typedef TdxCustomLayoutGroupButtons inherited;
	
public:
	TdxLayoutGroupButton* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TdxLayoutGroupButton* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TdxLayoutGroupButton* const AValue);
	
protected:
	virtual TdxCustomLayoutGroupButtonClass __fastcall GetItemClass();
	
public:
	__property TdxLayoutGroupButton* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TdxCustomLayoutGroupButtons.Create */ inline __fastcall TdxLayoutGroupButtons(TdxLayoutGroupButtonOptions* AOptions) : TdxCustomLayoutGroupButtons(AOptions) { }
	
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TdxLayoutGroupButtons() { }
	
};


enum DECLSPEC_DENUM TdxLayoutGroupButtonsAlignment : unsigned char { gbaLeft, gbaRight };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutGroupButtonOptions : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TdxLayoutGroupButtonsAlignment FAlignment;
	unsigned FDefaultHeight;
	unsigned FDefaultWidth;
	TdxCustomLayoutGroup* FGroup;
	bool FVisible;
	TdxLayoutGroupCheckBoxButton* FCheckBox;
	TdxLayoutGroupButton* FExpandButton;
	TdxLayoutGroupButton* FHomeButton;
	TdxLayoutGroupButtons* FButtons;
	TdxCustomLayoutGroupButtons* FInternalButtons;
	System::Classes::TList* FVisibleButtons;
	void __fastcall ChangeCollectionHandler(System::TObject* Sender);
	void __fastcall HomeButtonClickHandler(System::TObject* Sender);
	bool __fastcall GetShowExpandButton();
	void __fastcall GetExpandButtonHintHandler(System::TObject* Sender, System::UnicodeString &AText);
	void __fastcall SetAlignment(TdxLayoutGroupButtonsAlignment AValue);
	void __fastcall SetButtons(TdxLayoutGroupButtons* AValue);
	void __fastcall SetCheckBox(TdxLayoutGroupCheckBoxButton* AValue);
	void __fastcall SetDefaultHeight(unsigned AValue);
	void __fastcall SetDefaultWidth(unsigned AValue);
	void __fastcall SetShowExpandButton(bool AValue);
	void __fastcall SetVisible(bool AValue);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	void __fastcall Changed();
	virtual void __fastcall ChangeScale(int M, int D);
	void __fastcall CreateCheckBox();
	void __fastcall CreateExpandButton();
	void __fastcall CreateHomeButton();
	TdxCustomLayoutGroupButton* __fastcall GetVisibleButton(int AIndex);
	bool __fastcall IsAnyButtonVisible();
	bool __fastcall RefreshVisibleButtons();
	void __fastcall UpdateInternalButtons();
	void __fastcall GetStoredPropertyValue(const System::UnicodeString AName, System::Variant &AValue);
	void __fastcall GetStoredProperties(System::Classes::TStrings* AProperties);
	void __fastcall SetStoredPropertyValue(const System::UnicodeString AName, const System::Variant &AValue);
	__property TdxLayoutGroupButton* HomeButton = {read=FHomeButton};
	
public:
	__fastcall TdxLayoutGroupButtonOptions(TdxCustomLayoutGroup* AGroup);
	__fastcall virtual ~TdxLayoutGroupButtonOptions();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property TdxLayoutGroupButton* ExpandButton = {read=FExpandButton};
	__property TdxCustomLayoutGroup* Group = {read=FGroup};
	
__published:
	__property TdxLayoutGroupButtonsAlignment Alignment = {read=FAlignment, write=SetAlignment, default=1};
	__property TdxLayoutGroupButtons* Buttons = {read=FButtons, write=SetButtons, stored=false};
	__property TdxLayoutGroupCheckBoxButton* CheckBox = {read=FCheckBox, write=SetCheckBox};
	__property unsigned DefaultHeight = {read=FDefaultHeight, write=SetDefaultHeight, default=16};
	__property unsigned DefaultWidth = {read=FDefaultWidth, write=SetDefaultWidth, default=16};
	__property bool ShowExpandButton = {read=GetShowExpandButton, write=SetShowExpandButton, default=0};
	__property bool Visible = {read=FVisible, write=SetVisible, default=1};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutGroupCaptionOptions : public TdxCustomLayoutItemStorableCaptionOptions
{
	typedef TdxCustomLayoutItemStorableCaptionOptions inherited;
	
public:
	__fastcall virtual TdxLayoutGroupCaptionOptions(TdxCustomLayoutItem* AItem);
	
__published:
	__property AlignHorz = {default=0};
	__property AlignVert = {default=0};
	__property EllipsisPosition = {default=0};
	__property Glyph;
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property Layout = {default=1};
	__property ShowAccelChar = {default=1};
	__property Text = {default=0};
	__property Visible = {default=1};
	__property VisibleElements = {default=3};
public:
	/* TdxCustomLayoutItemCaptionOptions.Destroy */ inline __fastcall virtual ~TdxLayoutGroupCaptionOptions() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TdxLayoutGroupWrappingState : unsigned char { wsNone, wsSqueezed, wsPopulated };

enum DECLSPEC_DENUM TdxLayoutGroupScrollMode : unsigned char { smNone, smAuto, smIndependent };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutGroupScrollOptions : public TdxCustomLayoutItemOptions
{
	typedef TdxCustomLayoutItemOptions inherited;
	
private:
	TdxLayoutGroupScrollMode FHorizontal;
	TdxLayoutGroupScrollMode FVertical;
	void __fastcall SetHorizontalScroll(TdxLayoutGroupScrollMode Value);
	void __fastcall SetVerticalScroll(TdxLayoutGroupScrollMode Value);
	TdxLayoutGroupScrollMode __fastcall GetMajorScroll();
	TdxLayoutGroupScrollMode __fastcall GetMinorScroll();
	
protected:
	virtual void __fastcall DoAssign(System::Classes::TPersistent* Source);
	virtual void __fastcall Changed();
	__property TdxLayoutGroupScrollMode MajorScroll = {read=GetMajorScroll, nodefault};
	__property TdxLayoutGroupScrollMode MinorScroll = {read=GetMinorScroll, nodefault};
	
__published:
	__property TdxLayoutGroupScrollMode Horizontal = {read=FHorizontal, write=SetHorizontalScroll, default=0};
	__property TdxLayoutGroupScrollMode Vertical = {read=FVertical, write=SetVerticalScroll, default=0};
public:
	/* TdxCustomLayoutItemOptions.Create */ inline __fastcall virtual TdxLayoutGroupScrollOptions(TdxCustomLayoutItem* AItem) : TdxCustomLayoutItemOptions(AItem) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxLayoutGroupScrollOptions() { }
	
};

#pragma pack(pop)

typedef void __fastcall (__closure *TdxLayoutGroupExpandingEvent)(System::TObject* Sender, bool &Allow);

typedef void __fastcall (__closure *TdxLayoutGroupCheckBoxStateChangingEvent)(System::TObject* Sender, const Cxlookandfeelpainters::TcxCheckBoxState ANewState, bool &Allow);

typedef void __fastcall (__closure *TdxLayoutGroupTabChangingEvent)(System::TObject* Sender, int ANewTabIndex, bool &Allow);

enum DECLSPEC_DENUM TdxLayoutGroupWrapItemsMode : unsigned char { wmNone, wmParentManaged, wmImmediateChildren, wmAllChildren };

class PASCALIMPLEMENTATION TdxCustomLayoutGroup : public TdxCustomLayoutItem
{
	typedef TdxCustomLayoutItem inherited;
	
public:
	TdxCustomLayoutItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	TdxLayoutGroupButtonOptions* FButtonOptions;
	bool FExpanded;
	bool FHidden;
	bool FAutoCreated;
	bool FAutoCreatedForWrap;
	Cxclasses::TcxComponentList* FItems;
	int FItemIndex;
	Cxclasses::TcxComponentList* FVisibleItems;
	TdxLayoutDirection FLayoutDirection;
	TdxLayoutItemControlAreaAlignment FItemControlAreaAlignment;
	bool FLocked;
	bool FLayoutLookAndFeelException;
	bool FShowBorder;
	TdxLayoutGroupScrollOptions* FScrollOptions;
	TdxLayoutTabbedOptions* FTabbedOptions;
	bool FUseIndent;
	TdxLayoutGroupWrappingState FWrappingState;
	TdxLayoutGroupWrapItemsMode FWrapItemsMode;
	System::Classes::TNotifyEvent FOnCheckBoxStateChanged;
	TdxLayoutGroupCheckBoxStateChangingEvent FOnCheckBoxStateChanging;
	System::Classes::TNotifyEvent FOnCollapsed;
	TdxLayoutGroupExpandingEvent FOnCollapsing;
	System::Classes::TNotifyEvent FOnExpanded;
	TdxLayoutGroupExpandingEvent FOnExpanding;
	System::Classes::TNotifyEvent FOnTabChanged;
	TdxLayoutGroupTabChangingEvent FOnTabChanging;
	void __fastcall TabChangedHandler(System::TObject* Sender, Cxpc::TcxCustomTabControlPropertiesChangedType AType);
	void __fastcall TabChangeHandler(System::TObject* Sender);
	void __fastcall TabCanCloseHandler(System::TObject* Sender, int ATabIndex, bool &ACanClose);
	void __fastcall TabClickHandler(System::TObject* Sender, int ATabVisibleIndex, System::Classes::TShiftState AShift);
	void __fastcall TabCloseHandler(System::TObject* Sender, int ATabIndex);
	bool __fastcall GetAllowScroll();
	bool __fastcall GetAllowWrapItems();
	bool __fastcall GetAutoCreatedForDirection();
	TdxLayoutGroupCaptionOptions* __fastcall GetCaptionOptions();
	int __fastcall GetCount();
	TdxCustomLayoutItem* __fastcall GetItem(int Index);
	bool __fastcall GetShowBorder();
	HIDESBASE TdxLayoutGroupViewInfo* __fastcall GetViewInfo();
	int __fastcall GetVisibleCount();
	TdxCustomLayoutItem* __fastcall GetVisibleItem(int Index);
	void __fastcall SetAllowScroll(bool Value);
	void __fastcall SetAllowWrapItems(bool Value);
	void __fastcall SetButtonOptions(TdxLayoutGroupButtonOptions* Value);
	HIDESBASE void __fastcall SetCaptionOptions(TdxLayoutGroupCaptionOptions* Value);
	void __fastcall SetExpanded(bool Value);
	void __fastcall SetHidden(bool Value);
	void __fastcall SetItemIndex(int Value);
	void __fastcall SetItemControlAreaAlignment(TdxLayoutItemControlAreaAlignment Value);
	void __fastcall SetLayoutDirection(TdxLayoutDirection Value);
	void __fastcall SetLocked(bool Value);
	void __fastcall SetLayoutLookAndFeelException(bool Value);
	void __fastcall SetScrollOptions(TdxLayoutGroupScrollOptions* Value);
	void __fastcall SetShowBorder(bool Value);
	void __fastcall SetTabbedOptions(TdxLayoutTabbedOptions* Value);
	void __fastcall SetTabIndex(int Value);
	void __fastcall SetUseIndent(bool Value);
	void __fastcall SetWrapItemsMode(TdxLayoutGroupWrapItemsMode Value);
	void __fastcall AddItem(TdxCustomLayoutItem* AItem);
	void __fastcall ExtractItem(TdxCustomLayoutItem* AItem);
	void __fastcall ItemListChanged(System::TObject* Sender, System::Classes::TComponent* AComponent, Cxclasses::TcxComponentCollectionNotification AAction);
	void __fastcall ReadSpecial(System::Classes::TReader* Reader);
	void __fastcall WriteSpecial(System::Classes::TWriter* Writer);
	void __fastcall ReadAutoCreated(System::Classes::TReader* Reader);
	bool __fastcall IsItemIndexStored();
	Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* __fastcall GetChildLayoutLookAndFeel();
	void __fastcall ReadButtons(System::Classes::TReader* Reader);
	void __fastcall WriteButtons(System::Classes::TWriter* Writer);
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall SetParentComponent(System::Classes::TComponent* Value);
	virtual bool __fastcall GetStoredProperties(System::Classes::TStrings* AProperties);
	virtual void __fastcall GetStoredPropertyValue(const System::UnicodeString AName, System::Variant &AValue);
	virtual void __fastcall SetStoredPropertyValue(const System::UnicodeString AName, const System::Variant &AValue);
	virtual void __fastcall BiDiModeChanged();
	virtual bool __fastcall CanAcceptItem(TdxCustomLayoutItem* AItem);
	virtual bool __fastcall CanDelete();
	virtual bool __fastcall CanDragAndDrop(const System::Types::TPoint &P);
	virtual bool __fastcall CanRemove();
	virtual void __fastcall ChangeScale(int M, int D);
	virtual void __fastcall CheckIndex();
	virtual void __fastcall ContainerChanged();
	DYNAMIC void __fastcall DoCaptionClick();
	virtual void __fastcall DoGetTabOrderList(System::Classes::TList* List);
	void __fastcall DoChildPack();
	virtual void __fastcall DoPack();
	DYNAMIC bool __fastcall DoProcessAccel();
	__classmethod virtual TdxCustomLayoutItemCaptionOptionsClass __fastcall GetCaptionOptionsClass();
	virtual bool __fastcall GetIsRoot();
	virtual Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeelOptions* __fastcall GetOptions();
	virtual TdxLayoutRealAlignHorz __fastcall GetRealAlignHorz();
	virtual TdxLayoutRealAlignVert __fastcall GetRealAlignVert();
	virtual bool __fastcall GetVisible();
	virtual TdxCustomLayoutItemViewInfoClass __fastcall GetViewInfoClass();
	virtual void __fastcall InitiateAction();
	virtual void __fastcall LoadFromIni(System::Inifiles::TCustomIniFile* AIniFile, const System::UnicodeString ASection, int AVersion);
	virtual bool __fastcall NeedDeleteAfterLoading();
	virtual void __fastcall SaveToIni(System::Inifiles::TCustomIniFile* AIniFile, const System::UnicodeString ASection);
	virtual void __fastcall PopulateItems(System::Classes::TList* AList);
	virtual bool __fastcall ProcessDialogChar(System::Word ACharCode);
	virtual bool __fastcall ProcessDialogKey(System::Word ACharCode, int AKeyData, TdxCustomLayoutItem* AFocusedItem);
	virtual void __fastcall RestoreItemControlBounds();
	virtual void __fastcall LayoutLookAndFeelChanged();
	virtual void __fastcall SetInitialSettings();
	virtual void __fastcall BeforeCalculateViewInfo();
	virtual void __fastcall AfterCalculateViewInfo();
	virtual void __fastcall ApplyCalculatedChanges();
	virtual void __fastcall ResetRealAlign();
	virtual void __fastcall ResetEnabled();
	virtual bool __fastcall IsWrapItemsAllowed();
	virtual bool __fastcall CanWrapItems();
	bool __fastcall CanWrapImmediateChildItems();
	bool __fastcall CanWrapAllChildItems();
	int __fastcall GetWrapRowCount();
	int __fastcall GetWrapColumnCount();
	virtual bool __fastcall AllowFloatingDragImage();
	virtual bool __fastcall AllowShowChild(TdxCustomLayoutItem* AChild);
	bool __fastcall IsAnyButtonVisible();
	bool __fastcall IsCheckBoxVisible();
	virtual bool __fastcall IsGroup();
	virtual bool __fastcall IsFloatingRoot();
	virtual bool __fastcall IsLocked();
	virtual bool __fastcall IsSuperfluous(bool AForDestroy);
	virtual void __fastcall CreateOptions();
	virtual void __fastcall DestroyOptions();
	void __fastcall DoCheckBoxStateChanged();
	bool __fastcall DoCheckBoxStateChanging(Cxlookandfeelpainters::TcxCheckBoxState ANewState);
	virtual void __fastcall DoCollapsed();
	virtual bool __fastcall DoCollapsing();
	virtual void __fastcall DoExpanded();
	virtual bool __fastcall DoExpanding();
	virtual void __fastcall DoTabChanged();
	virtual bool __fastcall DoTabChanging(int ANewTabIndex);
	System::Types::TSize __fastcall GetMaxChildImageSize();
	TdxLayoutGroupHelperClass __fastcall GetHelperClass();
	virtual TdxLayoutRealAlignHorz __fastcall GetChildItemsAlignHorz();
	virtual TdxLayoutRealAlignVert __fastcall GetChildItemsAlignVert();
	virtual bool __fastcall CanFocus(bool AByMouse);
	virtual bool __fastcall FocusFirst(bool ACheckTabStop);
	void __fastcall BuildVisibleItemsList(bool ARecursive = false);
	void __fastcall ChangeItemIndex(TdxCustomLayoutItem* AItem, int Value);
	void __fastcall ChangeItemVisibleIndex(TdxCustomLayoutItem* AItem, int Value);
	int __fastcall GetItemIndex(int AItemVisibleIndex);
	int __fastcall IndexOf(TdxCustomLayoutItem* AItem);
	int __fastcall VisibleIndexOf(TdxCustomLayoutItem* AItem);
	__property bool AllowScroll = {read=GetAllowScroll, write=SetAllowScroll, stored=false, nodefault};
	__property bool AllowWrapItems = {read=GetAllowWrapItems, write=SetAllowWrapItems, stored=false, nodefault};
	__property bool AutoCreated = {read=FAutoCreated, nodefault};
	__property bool AutoCreatedForDirection = {read=GetAutoCreatedForDirection, nodefault};
	__property bool AutoCreatedForWrap = {read=FAutoCreatedForWrap, nodefault};
	__property TdxLayoutGroupScrollOptions* ScrollOptions = {read=FScrollOptions, write=SetScrollOptions};
	__property TdxLayoutGroupWrapItemsMode WrapItemsMode = {read=FWrapItemsMode, write=SetWrapItemsMode, default=1};
	__property TdxLayoutGroupCheckBoxStateChangingEvent OnCheckBoxStateChanging = {read=FOnCheckBoxStateChanging, write=FOnCheckBoxStateChanging};
	__property int TabIndex = {read=FItemIndex, write=SetTabIndex, nodefault};
	
public:
	__fastcall virtual TdxCustomLayoutGroup(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxCustomLayoutGroup();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	TdxLayoutGroup* __fastcall CreateGroup()/* overload */;
	TdxCustomLayoutGroup* __fastcall CreateGroup(TdxCustomLayoutGroupClass AGroupClass)/* overload */;
	TdxCustomLayoutItem* __fastcall CreateItem(TdxCustomLayoutItemClass AItemClass = 0x0);
	TdxLayoutItem* __fastcall CreateItemForControl(Vcl::Controls::TControl* AControl);
	virtual bool __fastcall CanMoveTo(TdxCustomLayoutItem* AParent);
	void __fastcall Dismiss();
	void __fastcall MoveChildrenToParent(bool AKeepAlign = true);
	void __fastcall MoveChildrenIntoHiddenGroup(TdxCustomLayoutGroup* AGroup);
	TdxLayoutAutoCreatedGroup* __fastcall PutChildrenIntoHiddenGroup();
	__property int Count = {read=GetCount, nodefault};
	__property TdxCustomLayoutItem* Items[int Index] = {read=GetItem/*, default*/};
	__property TdxLayoutGroupViewInfo* ViewInfo = {read=GetViewInfo};
	__property int VisibleCount = {read=GetVisibleCount, nodefault};
	__property TdxCustomLayoutItem* VisibleItems[int Index] = {read=GetVisibleItem};
	__property AllowQuickCustomize = {default=0};
	__property AllowRemove = {default=1};
	__property TdxLayoutGroupButtonOptions* ButtonOptions = {read=FButtonOptions, write=SetButtonOptions};
	__property TdxLayoutGroupCaptionOptions* CaptionOptions = {read=GetCaptionOptions, write=SetCaptionOptions};
	__property Enabled;
	__property bool Expanded = {read=FExpanded, write=SetExpanded, default=1};
	__property bool Hidden = {read=FHidden, write=SetHidden, default=0};
	__property TdxLayoutItemControlAreaAlignment ItemControlAreaAlignment = {read=FItemControlAreaAlignment, write=SetItemControlAreaAlignment, default=0};
	__property int ItemIndex = {read=FItemIndex, write=SetItemIndex, stored=IsItemIndexStored, nodefault};
	__property TdxLayoutDirection LayoutDirection = {read=FLayoutDirection, write=SetLayoutDirection, default=1};
	__property bool Locked = {read=FLocked, write=SetLocked, default=0};
	__property bool LookAndFeelException = {read=FLayoutLookAndFeelException, write=SetLayoutLookAndFeelException, stored=false, nodefault};
	__property bool LayoutLookAndFeelException = {read=FLayoutLookAndFeelException, write=SetLayoutLookAndFeelException, default=0};
	__property Padding;
	__property bool ShowBorder = {read=GetShowBorder, write=SetShowBorder, default=1};
	__property TdxLayoutTabbedOptions* TabbedOptions = {read=FTabbedOptions, write=SetTabbedOptions};
	__property bool UseIndent = {read=FUseIndent, write=SetUseIndent, default=1};
	__property OnCaptionClick;
	__property System::Classes::TNotifyEvent OnCheckBoxStateChanged = {read=FOnCheckBoxStateChanged, write=FOnCheckBoxStateChanged};
	__property System::Classes::TNotifyEvent OnCollapsed = {read=FOnCollapsed, write=FOnCollapsed};
	__property TdxLayoutGroupExpandingEvent OnCollapsing = {read=FOnCollapsing, write=FOnCollapsing};
	__property System::Classes::TNotifyEvent OnExpanded = {read=FOnExpanded, write=FOnExpanded};
	__property TdxLayoutGroupExpandingEvent OnExpanding = {read=FOnExpanding, write=FOnExpanding};
	__property System::Classes::TNotifyEvent OnTabChanged = {read=FOnTabChanged, write=FOnTabChanged};
	__property TdxLayoutGroupTabChangingEvent OnTabChanging = {read=FOnTabChanging, write=FOnTabChanging};
private:
	void *__IcxControlComponentState;	// Cxcontrols::IcxControlComponentState 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E29BF582-E8C0-4868-A799-DB4C41AC3BC8}
	operator Cxcontrols::_di_IcxControlComponentState()
	{
		Cxcontrols::_di_IcxControlComponentState intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxcontrols::IcxControlComponentState*(void) { return (Cxcontrols::IcxControlComponentState*)&__IcxControlComponentState; }
	#endif
	
};


class PASCALIMPLEMENTATION TdxCustomLayoutAutoCreatedGroup : public TdxCustomLayoutGroup
{
	typedef TdxCustomLayoutGroup inherited;
	
protected:
	virtual bool __fastcall IsStable();
	virtual void __fastcall DoPack();
	virtual void __fastcall DoPackAsSuperfluous() = 0 ;
	__classmethod virtual int __fastcall GetItemClassKind();
	
public:
	__fastcall virtual TdxCustomLayoutAutoCreatedGroup(System::Classes::TComponent* AOwner);
public:
	/* TdxCustomLayoutGroup.Destroy */ inline __fastcall virtual ~TdxCustomLayoutAutoCreatedGroup() { }
	
};


class PASCALIMPLEMENTATION TdxLayoutAutoCreatedGroup : public TdxCustomLayoutAutoCreatedGroup
{
	typedef TdxCustomLayoutAutoCreatedGroup inherited;
	
protected:
	virtual void __fastcall Loaded();
	virtual System::UnicodeString __fastcall GetBaseName();
	virtual bool __fastcall IsSuperfluous(bool AForDestroy);
	virtual void __fastcall DoPackAsSuperfluous();
	
public:
	__fastcall virtual ~TdxLayoutAutoCreatedGroup();
	
__published:
	__property AlignHorz;
	__property AlignVert;
	__property Caption = {stored=false, default=0};
	__property LayoutDirection = {default=1};
public:
	/* TdxCustomLayoutAutoCreatedGroup.Create */ inline __fastcall virtual TdxLayoutAutoCreatedGroup(System::Classes::TComponent* AOwner) : TdxCustomLayoutAutoCreatedGroup(AOwner) { }
	
};


class PASCALIMPLEMENTATION TdxLayoutAutoCreatedWrappingGroup : public TdxCustomLayoutAutoCreatedGroup
{
	typedef TdxCustomLayoutAutoCreatedGroup inherited;
	
protected:
	virtual bool __fastcall CanWrapItems();
	virtual System::UnicodeString __fastcall GetBaseName();
	virtual TdxLayoutRealAlignHorz __fastcall GetChildItemsAlignHorz();
	virtual TdxLayoutRealAlignVert __fastcall GetChildItemsAlignVert();
	virtual bool __fastcall IsSuperfluous(bool AForDestroy);
	virtual void __fastcall DoPackAsSuperfluous();
	
public:
	__fastcall virtual TdxLayoutAutoCreatedWrappingGroup(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxLayoutAutoCreatedWrappingGroup();
};


class PASCALIMPLEMENTATION TdxLayoutGroup : public TdxCustomLayoutGroup
{
	typedef TdxCustomLayoutGroup inherited;
	
protected:
	virtual bool __fastcall CanFloat();
	virtual System::UnicodeString __fastcall GetBaseName();
	__classmethod virtual int __fastcall GetItemClassKind();
	
__published:
	__property AlignHorz;
	__property AlignVert;
	__property AlignmentConstraint;
	__property CaptionOptions;
	__property LayoutLookAndFeel;
	__property Offsets;
	__property Visible = {default=1};
	__property SizeOptions;
	__property AllowFloating = {default=0};
	__property AllowQuickCustomize = {default=0};
	__property AllowRemove = {default=1};
	__property AllowWrapItems;
	__property ButtonOptions;
	__property Enabled;
	__property Expanded = {default=1};
	__property Hidden = {default=0};
	__property ItemControlAreaAlignment = {default=0};
	__property ItemIndex;
	__property LayoutDirection = {default=1};
	__property Locked = {default=0};
	__property LookAndFeelException;
	__property LayoutLookAndFeelException = {default=0};
	__property Padding;
	__property ScrollOptions;
	__property ShowBorder = {default=1};
	__property TabbedOptions;
	__property UseIndent = {default=1};
	__property WrapItemsMode = {default=1};
	__property OnCaptionClick;
	__property OnCheckBoxStateChanged;
	__property OnCollapsed;
	__property OnCollapsing;
	__property OnExpanded;
	__property OnExpanding;
	__property OnTabChanged;
	__property OnTabChanging;
	__property OnStartFloat;
	__property OnEndFloat;
public:
	/* TdxCustomLayoutGroup.Create */ inline __fastcall virtual TdxLayoutGroup(System::Classes::TComponent* AOwner) : TdxCustomLayoutGroup(AOwner) { }
	/* TdxCustomLayoutGroup.Destroy */ inline __fastcall virtual ~TdxLayoutGroup() { }
	
};


enum DECLSPEC_DENUM TdxLayoutAlignmentConstraintKind : unsigned char { ackLeft, ackTop, ackRight, ackBottom };

class PASCALIMPLEMENTATION TdxLayoutAlignmentConstraint : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	TdxLayoutContainer* FContainer;
	System::Classes::TList* FItems;
	TdxLayoutAlignmentConstraintKind FKind;
	int __fastcall GetCount();
	TdxCustomLayoutItem* __fastcall GetItem(int Index);
	void __fastcall SetKind(TdxLayoutAlignmentConstraintKind Value);
	void __fastcall CreateItems();
	void __fastcall DestroyItems();
	void __fastcall InternalAddItem(TdxCustomLayoutItem* AItem);
	void __fastcall InternalRemoveItem(TdxCustomLayoutItem* AItem);
	bool __fastcall AreItemViewInfosAligned(int ACount);
	void __fastcall AlignItemViewInfos(int ACount);
	void __fastcall ChangeOffset(int AIndex, int ADelta);
	void __fastcall ResetOffsets();
	
protected:
	DYNAMIC void __fastcall SetParentComponent(System::Classes::TComponent* Value);
	void __fastcall BeginUpdate();
	virtual bool __fastcall CanAddItem(TdxCustomLayoutItem* AItem);
	virtual void __fastcall Changed();
	void __fastcall EndUpdate();
	int __fastcall GetBorderValue(int AIndex);
	int __fastcall GetMostBorderValue(int ACount = 0x0);
	Dxlayoutcommon::TdxLayoutSide __fastcall GetOffsetSide();
	__property TdxLayoutContainer* Container = {read=FContainer};
	
public:
	__fastcall virtual TdxLayoutAlignmentConstraint(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxLayoutAlignmentConstraint();
	DYNAMIC System::Classes::TComponent* __fastcall GetParentComponent();
	DYNAMIC bool __fastcall HasParent();
	void __fastcall AddItem(TdxCustomLayoutItem* AItem);
	void __fastcall RemoveItem(TdxCustomLayoutItem* AItem);
	__property int Count = {read=GetCount, nodefault};
	__property TdxCustomLayoutItem* Items[int Index] = {read=GetItem};
	
__published:
	__property TdxLayoutAlignmentConstraintKind Kind = {read=FKind, write=SetKind, default=0};
};


typedef System::TMetaClass* TdxLayoutAlignmentConstraintClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutContainerPersistent : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TdxLayoutContainer* FContainer;
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall virtual TdxLayoutContainerPersistent(TdxLayoutContainer* AContainer);
	__property TdxLayoutContainer* Container = {read=FContainer};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxLayoutContainerPersistent() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutContainerFocusController : public TdxLayoutContainerPersistent
{
	typedef TdxLayoutContainerPersistent inherited;
	
private:
	TdxCustomLayoutItem* FFocusedItem;
	int __fastcall GetCurrentTabOrder();
	void __fastcall SetCurrentTabOrder(const int Value);
	void __fastcall SetFocusedItem(TdxCustomLayoutItem* Value);
	
protected:
	int __fastcall GetMaxTabOrder();
	TdxCustomLayoutItem* __fastcall FindItem(int ATabOrder);
	Vcl::Controls::TWinControl* __fastcall FindNextControl(Vcl::Controls::TWinControl* ACurrentControl, bool AGoForward);
	virtual bool __fastcall IsFocused(TdxCustomLayoutItem* AItem);
	void __fastcall SetFocus();
	void __fastcall KillFocus();
	void __fastcall CheckFocus();
	void __fastcall SetItemFocus(TdxCustomLayoutItem* AItem);
	__property int CurrentTabOrder = {read=GetCurrentTabOrder, write=SetCurrentTabOrder, nodefault};
	__property TdxCustomLayoutItem* FocusedItem = {read=FFocusedItem, write=SetFocusedItem};
	
public:
	bool __fastcall SelectNext(Vcl::Controls::TWinControl* AFocusedControl, const System::Word ACharCode = (System::Word)(0x9));
public:
	/* TdxLayoutContainerPersistent.Create */ inline __fastcall virtual TdxLayoutContainerFocusController(TdxLayoutContainer* AContainer) : TdxLayoutContainerPersistent(AContainer) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxLayoutContainerFocusController() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TdxLayoutContainerFocusControllerClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutContainerCustomizationHelper : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TdxLayoutContainer* FContainer;
	
public:
	__fastcall TdxLayoutContainerCustomizationHelper(TdxLayoutContainer* AContainer);
	virtual void __fastcall CopyStructure(TdxLayoutContainer* AContainer);
	__property TdxLayoutContainer* Container = {read=FContainer};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxLayoutContainerCustomizationHelper() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TdxLayoutContainerCustomizationHelperClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutImageOptions : public TdxLayoutContainerPersistent
{
	typedef TdxLayoutContainerPersistent inherited;
	
private:
	Vcl::Imglist::TCustomImageList* FDisabledImages;
	Vcl::Imglist::TChangeLink* FDisabledImagesChangeLink;
	Vcl::Imglist::TCustomImageList* FImages;
	Vcl::Imglist::TChangeLink* FImagesChangeLink;
	void __fastcall FreeNotification(System::Classes::TComponent* AComponent);
	void __fastcall ImagesChange(System::TObject* Sender);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* AValue);
	void __fastcall SetDisabledImages(Vcl::Imglist::TCustomImageList* AValue);
	void __fastcall SetImageList(Vcl::Imglist::TCustomImageList* &ANewValue, Vcl::Imglist::TCustomImageList* &AOldValue, Vcl::Imglist::TChangeLink* const AChangeLink);
	
protected:
	void __fastcall Changed();
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	
public:
	__fastcall virtual TdxLayoutImageOptions(TdxLayoutContainer* AContainer);
	__fastcall virtual ~TdxLayoutImageOptions();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property Vcl::Imglist::TCustomImageList* DisabledImages = {read=FDisabledImages, write=SetDisabledImages};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxLayoutContainer : public Cxclasses::TcxCustomComponent
{
	typedef Cxclasses::TcxCustomComponent inherited;
	
private:
	System::Contnrs::TComponentList* FAlignmentConstraints;
	TdxLayoutDragDropMode FDragDropMode;
	TdxLayoutContainerFocusController* FFocusController;
	TdxLayoutImageOptions* FImageOptions;
	Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* FLayoutLookAndFeel;
	TdxLayoutCustomizeFormMenuItems FMenuItems;
	TdxLayoutContainerPainter* FPainter;
	Cxgeometry::TdxScaleFactor* FScaleFactor;
	Dxlayoutselection::_di_IdxLayoutDesignerHelper FSelectionHelper;
	TdxLayoutContainerViewInfo* FViewInfo;
	int FPlaceControlsLockCount;
	bool FIsPlaceControlsNeeded;
	bool FIsPlacingControls;
	int FIsProcessingControls;
	int FIsScalingControls;
	int FUpdateLockCount;
	int FTranslationLockCount;
	bool FSelectionLayerPainting;
	Cxclasses::TcxComponentList* FAbsoluteItems;
	Cxclasses::TcxComponentList* FAvailableItems;
	Cxclasses::TcxComponentList* FFloatContainers;
	Cxclasses::TcxComponentList* FManagedItems;
	TdxLayoutGroup* FRoot;
	Cxclasses::TcxComponentList* FGarbageCollector;
	bool FIsRestoring;
	int FStoredVersion;
	System::UnicodeString FStoringName;
	TdxUndoRedoManager* FUndoRedoManager;
	bool FCustomization;
	TdxLayoutContainerCustomizationHelper* FCustomizationHelper;
	TdxLayoutAvailableItemsViewKind FCustomizeAvailableItemsViewKind;
	TdxLayoutControlCustomCustomizeForm* FCustomizeForm;
	System::Types::TRect FCustomizeFormBounds;
	TdxLayoutControlCustomCustomizeFormClass FCustomizeFormClass;
	bool FCustomizeFormTabbedView;
	TdxLayoutCustomizeFormUpdateTypes FCustomizeFormUpdateTypes;
	bool FQuickCustomization;
	TdxCustomLayoutItem* FRenamingItem;
	bool FAllowGroupWrapItems;
	bool FAllowOptimizeWrappedItems;
	bool FAllowRename;
	bool FHighlightRoot;
	bool FShowDesignSelectors;
	bool FShowQuickCustomizationToolbar;
	TdxLayoutContainer* FMasterContainer;
	System::Classes::TNotifyEvent FOnChanged;
	TdxLayoutItemChangedEvent FOnItemChanged;
	System::Classes::TNotifyEvent FOnSelectionChanged;
	void __fastcall AbsoluteItemListChanged(System::TObject* Sender, System::Classes::TComponent* AComponent, Cxclasses::TcxComponentCollectionNotification AAction);
	void __fastcall AvailableItemListChanged(System::TObject* Sender, System::Classes::TComponent* AComponent, Cxclasses::TcxComponentCollectionNotification AAction);
	void __fastcall FloatContainersListChanged(System::TObject* Sender, System::Classes::TComponent* AComponent, Cxclasses::TcxComponentCollectionNotification AAction);
	TdxLayoutAlignmentConstraint* __fastcall GetAlignmentConstraint(int Index);
	int __fastcall GetAlignmentConstraintCount();
	bool __fastcall GetCustomization();
	bool __fastcall GetIsDesignSelectorsVisible();
	bool __fastcall GetIsOnGlass();
	bool __fastcall GetIsStoringNameMode();
	TdxLayoutDragDropMode __fastcall GetDragDropMode();
	TdxLayoutContainer* __fastcall GetRealContainer();
	Dxlayoutselection::_di_IdxLayoutDesignerHelper __fastcall GetSelectionHelper();
	TdxCustomLayoutItem* __fastcall GetAbsoluteItem(int AIndex);
	int __fastcall GetAbsoluteItemCount();
	TdxCustomLayoutItem* __fastcall GetAvailableItem(int AIndex);
	int __fastcall GetAvailableItemCount();
	TdxCustomLayoutItem* __fastcall GetManagedItem(int AIndex);
	int __fastcall GetManagedItemCount();
	Cxclasses::TcxComponentList* __fastcall GetManagedItemList();
	void __fastcall SetAllowGroupWrapItems(bool AValue);
	void __fastcall SetCustomization(bool AValue);
	void __fastcall SetCustomizeAvailableItemsViewKind(TdxLayoutAvailableItemsViewKind Value);
	void __fastcall SetCustomizeFormTabbedView(bool AValue);
	void __fastcall SetHighlightRoot(bool AValue);
	void __fastcall SetImageOptions(TdxLayoutImageOptions* AValue);
	void __fastcall SetIsRestoring(bool AValue);
	void __fastcall SetLayoutLookAndFeel(Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* Value);
	void __fastcall SetQuickCustomization(bool Value);
	void __fastcall SetRenamingItem(TdxCustomLayoutItem* AValue);
	void __fastcall SetShowDesignSelectors(bool Value);
	void __fastcall SetOnItemChanged(TdxLayoutItemChangedEvent AValue);
	
protected:
	bool FCalculationDireNeeded;
	virtual void __fastcall ChangeScale(int M, int D);
	virtual void __fastcall ScaleForPPI(int ATargetPPI);
	virtual Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	void __stdcall BeginLayoutLookAndFeelUserDestroying();
	void __stdcall EndLayoutLookAndFeelUserDestroying();
	virtual void __stdcall LayoutLookAndFeelUserChanged();
	void __stdcall LayoutLookAndFeelUserDestroyed();
	void __fastcall SelectionChanged(System::Classes::TList* ASelection, Dxlayoutselection::TdxSelectionAction AAction);
	void __fastcall AddSelectionChangedListener(System::Classes::TPersistent* AListener);
	bool __fastcall IsActive();
	bool __fastcall CanDeleteComponent(System::Classes::TComponent* AComponent);
	bool __fastcall CanModify();
	virtual bool __fastcall CanProcessKeyboard();
	void __fastcall ClearSelection();
	void __fastcall DeleteComponent(System::Classes::TComponent* AComponent);
	void __fastcall DeleteComponents(System::Contnrs::TComponentList* AList);
	void __fastcall DeleteSelection();
	void __fastcall GetSelection(System::Classes::TList* AList);
	bool __fastcall IsComponentSelected(System::Classes::TPersistent* AComponent);
	void __fastcall RemoveSelectionChangedListener(System::Classes::TPersistent* AListener);
	void __fastcall SelectComponent(System::Classes::TPersistent* AComponent, System::Classes::TShiftState AShift = System::Classes::TShiftState() );
	void __fastcall SetSelection(System::Classes::TList* AList);
	System::UnicodeString __fastcall UniqueName(const System::UnicodeString BaseName);
	TdxLayoutContainer* __fastcall GetContainer();
	virtual void __fastcall DoGetStoredPropertyValue(const System::UnicodeString AName, System::Variant &AValue);
	virtual void __fastcall DoSetStoredPropertyValue(const System::UnicodeString AName, const System::Variant &AValue);
	virtual System::UnicodeString __fastcall GetStoredObjectName();
	virtual bool __fastcall GetStoredProperties(System::Classes::TStrings* AProperties);
	virtual void __fastcall GetStoredPropertyValue(const System::UnicodeString AName, System::Variant &AValue);
	virtual void __fastcall SetStoredPropertyValue(const System::UnicodeString AName, const System::Variant &AValue);
	virtual System::TObject* __fastcall CreateChild(const System::UnicodeString AObjectName, const System::UnicodeString AClassName);
	virtual void __fastcall DeleteChild(const System::UnicodeString AObjectName, System::TObject* AObject);
	virtual void __fastcall GetStoredChildren(System::Classes::TStringList* AChildren);
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	void __fastcall AddAvailableItem(TdxCustomLayoutItem* AItem);
	void __fastcall DisposeGroup(TdxCustomLayoutGroup* AGroup);
	Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* __fastcall GetLayoutLookAndFeel();
	TdxLayoutAutoCreatedGroup* __fastcall GetAutoCreatedGroup();
	void __fastcall TryDestroySuperfluousGroup(TdxCustomLayoutGroup* AGroup);
	virtual void __fastcall CreateRootGroup();
	void __fastcall DestroyRootGroup();
	void __fastcall ExtractAvailableItem(TdxCustomLayoutItem* AItem);
	TdxLayoutGroup* __fastcall GetRoot();
	virtual void __fastcall InsertItem(TdxCustomLayoutItem* AItem);
	virtual void __fastcall RemoveItem(TdxCustomLayoutItem* AItem);
	void __fastcall SetRootGroup(TdxLayoutGroup* Value);
	void __fastcall UpdateItemDesignSelectors();
	virtual void __fastcall UpdateRootName();
	virtual bool __fastcall CanFocusOnClick(int X, int Y);
	virtual bool __fastcall DoMouseWheel(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseLeave(Vcl::Controls::TControl* AControl);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual bool __fastcall IsChildKey(const Vcl::Controls::TCMChildKey &Message);
	virtual bool __fastcall IsMouseWheelHandleNeeded(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	virtual void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual System::Types::TRect __fastcall CalculateCustomizeFormBounds(const System::Types::TRect &AFormBounds);
	virtual void __fastcall CreateCustomizeForm();
	virtual TdxLayoutControlCustomCustomizeForm* __fastcall GetCustomizeForm();
	virtual void __fastcall DestroyCustomizeForm();
	virtual void __fastcall ShowCustomizeForm();
	void __fastcall UpdateItemsCustomization();
	virtual TdxLayoutAlignmentConstraintClass __fastcall GetAlignmentConstraintClass();
	virtual TdxLayoutContainerCustomizationHelperClass __fastcall GetCustomizationHelperClass();
	virtual TdxLayoutGroupClass __fastcall GetDefaultGroupClass();
	virtual TdxLayoutItemClass __fastcall GetDefaultItemClass();
	virtual TdxLayoutLabeledItemClass __fastcall GetDefaultLabelClass();
	virtual TdxLayoutGroupClass __fastcall GetDefaultRootGroupClass();
	virtual TdxLayoutContainerFocusControllerClass __fastcall GetFocusControllerClass();
	virtual TdxLayoutContainerPainterClass __fastcall GetPainterClass();
	virtual Dxlayoutselection::TdxLayoutRunTimeSelectionHelperClass __fastcall GetSelectionHelperClass();
	virtual TdxLayoutContainerViewInfoClass __fastcall GetViewInfoClass();
	virtual void __fastcall CreateHandlers();
	virtual void __fastcall DestroyHandlers();
	void __fastcall CreateItems();
	void __fastcall DestroyItems();
	virtual bool __fastcall CanGetHitTest(const System::Types::TPoint &P);
	System::UnicodeString __fastcall GetStatusHint(const System::Types::TPoint &APoint, const System::UnicodeString AOriginalHint);
	void __fastcall ToggleHotTrackState(TdxCustomLayoutItem* AItem);
	bool __fastcall ShowHint(Vcl::Controls::THintInfo &AHintInfo, int X, int Y);
	void __fastcall ApplyCalculatedChanges();
	virtual bool __fastcall IsContainerReady();
	virtual bool __fastcall CanUpdate();
	virtual void __fastcall DoCalculateRoot(bool ARecreateViewData);
	virtual void __fastcall DoChanged();
	virtual void __fastcall DoSelectionChanged();
	virtual void __fastcall InitializeSubControlsCxLookAndFeel();
	void __fastcall InvalidateWithChildren();
	virtual void __fastcall LayoutChanged(bool ANeedPack = true);
	virtual void __fastcall PostLayoutChanged(Cxcontrols::TdxChangeType AType = (Cxcontrols::TdxChangeType)(0x2));
	TdxLayoutAutoCreatedWrappingGroup* __fastcall AddWrapLevel(TdxCustomLayoutGroup* AGroup, TdxLayoutDirection ALayoutDirection);
	bool __fastcall SimpleWrap(TdxCustomLayoutGroup* AGroup, int AMaxWidth);
	void __fastcall SqueezeWrappingGroup(TdxCustomLayoutGroup* AGroup);
	void __fastcall PopulateWrappingGroups();
	void __fastcall UnclenchWrappingGroup(TdxCustomLayoutGroup* AGroup);
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetDisabledImages();
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetImages();
	virtual bool __fastcall IsFloatingSupported();
	virtual bool __fastcall AllowFloatingDragImage();
	virtual bool __fastcall AllowFloatingGroups();
	virtual TdxLayoutCustomFloatForm* __fastcall CreateFloatForm();
	virtual void __fastcall InitializeFloatForm(TdxCustomLayoutItem* AItem);
	virtual TdxLayoutGroup* __fastcall GetFloatDock(TdxCustomLayoutItem* AItem);
	void __fastcall BuildSelectionLayer();
	virtual void __fastcall CustomizationChanged();
	virtual void __fastcall CustomizeFormPostUpdate(TdxLayoutCustomizeFormUpdateTypes AUpdateTypes);
	void __fastcall CustomizeFormUpdateList(TdxCustomLayoutItem* AItem);
	virtual TdxLayoutCustomizeFormMenuItems __fastcall DoGetCustomizationMenuItems(System::Classes::TList* const ASelectedItems);
	void __fastcall InvalidateSelectionLayer(const System::Types::TRect &R);
	virtual bool __fastcall IsCustomization();
	bool __fastcall IsQuickCustomization();
	bool __fastcall IsStandardCustomization();
	virtual void __fastcall PostBuildSelectionLayer();
	virtual void __fastcall PostInvalidateSelectionLayer(const System::Types::TRect &R);
	void __fastcall SelectItemParent();
	void __fastcall ResetDragAndDropObjects();
	virtual void __fastcall BeginRename(TdxCustomLayoutItem* AItem, const System::Types::TRect &ABounds, Vcl::Graphics::TFont* const AFont);
	virtual void __fastcall CancelRename();
	virtual void __fastcall EndRename(const System::UnicodeString AText);
	void __fastcall BeginPlaceControls();
	void __fastcall CancelPlaceControls();
	void __fastcall EndPlaceControls();
	void __fastcall PlaceControls(TdxCustomLayoutItemViewInfo* AItemViewInfo = (TdxCustomLayoutItemViewInfo*)(0x0), bool AProcessWinControls = true, int AAdditionalFlags = 0x0);
	virtual void __fastcall PostPlaceControls();
	void __fastcall PrepareControl(Vcl::Controls::TControl* AControl);
	void __fastcall UnprepareControl(Vcl::Controls::TControl* AControl);
	bool __fastcall IsPlacingControls();
	void __fastcall BeginPlacingControls();
	void __fastcall EndPlacingControls();
	bool __fastcall IsProcessingControls();
	void __fastcall BeginProcessControls();
	void __fastcall EndProcessControls();
	bool __fastcall IsScalingControls();
	void __fastcall BeginScaleControls();
	void __fastcall EndScaleControls();
	virtual void __fastcall AfterRestoring();
	virtual void __fastcall BeforeRestoring();
	void __fastcall CheckIndexes();
	System::UnicodeString __fastcall GetRootSectionName(System::Inifiles::TCustomIniFile* AIniFile);
	virtual bool __fastcall LoadPreviousVersions(System::Inifiles::TCustomIniFile* AIniFile);
	void __fastcall StoreChildren(System::Classes::TGetChildProc Proc);
	virtual bool __fastcall CanRestore();
	virtual bool __fastcall StoringSupports();
	virtual void __fastcall Restore();
	virtual void __fastcall Store();
	virtual void __fastcall RestoreFrom(const System::UnicodeString AStorageName, System::Classes::TStream* AStream, Cxstorage::TcxCustomReaderClass AReaderClass, const System::UnicodeString ARestoreName);
	void __fastcall StoreTo(const System::UnicodeString AStorageName, System::Classes::TStream* AStream, Cxstorage::TcxCustomWriterClass AWriterClass, bool AReCreate, const System::UnicodeString ASaveName);
	virtual void __fastcall GetItemStoredProperties(TdxCustomLayoutItem* AItem, System::Classes::TStrings* AProperties);
	virtual void __fastcall DoGetItemStoredPropertyValue(TdxCustomLayoutItem* AItem, const System::UnicodeString AName, System::Variant &AValue);
	virtual void __fastcall DoSetItemStoredPropertyValue(TdxCustomLayoutItem* AItem, const System::UnicodeString AName, const System::Variant &AValue);
	void __fastcall AddAlignmentConstraint(TdxLayoutAlignmentConstraint* AConstraint);
	void __fastcall CreateConstraints();
	void __fastcall DestroyConstraints();
	void __fastcall RemoveAlignmentConstraint(TdxLayoutAlignmentConstraint* AConstraint);
	void __fastcall AddAbsoluteItem(TdxCustomLayoutItem* AItem);
	virtual bool __fastcall CanSetItemName(TdxCustomLayoutItem* AItem);
	virtual void __fastcall DoItemChanged(TdxCustomLayoutItem* AItem);
	void __fastcall ExtractAbsoluteItem(TdxCustomLayoutItem* AItem);
	bool __fastcall IsRoot(TdxCustomLayoutItem* AItem);
	virtual bool __fastcall IsRootStored();
	virtual bool __fastcall IsSizableHorz();
	virtual bool __fastcall IsSizableVert();
	virtual void __fastcall SetDefaultItemName(TdxCustomLayoutItem* AItem);
	virtual void __fastcall DoInitialize();
	virtual bool __fastcall IsAutoControlAlignment();
	virtual bool __fastcall IsAutoControlTabOrders();
	virtual bool __fastcall IsFocusControlOnItemCaptionClick();
	void __fastcall Initialize();
	void __fastcall SetFocus();
	int __fastcall GetMaxTabOrder();
	void __fastcall KillFocus();
	TdxCustomLayoutItem* __fastcall FindFocusedItem();
	virtual bool __fastcall ProcessDialogChar(System::Word ACharCode);
	virtual bool __fastcall ProcessDialogKey(System::Word ACharCode, int AKeyData);
	void __fastcall CalculateTabOrders();
	virtual void __fastcall BiDiModeChanged();
	virtual Cxcontrols::TdxControlsDesignSelectorHelper* __fastcall CreateItemSelectorHelper(TdxLayoutItem* AItem);
	virtual Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	virtual System::Types::TRect __fastcall GetClientBounds();
	virtual System::Types::TRect __fastcall GetClientRect();
	virtual System::Classes::TComponent* __fastcall GetItemsOwner();
	virtual System::Classes::TComponent* __fastcall GetItemsParentComponent();
	virtual Cxcontrols::TcxControl* __fastcall GetItemsParentControl();
	int __fastcall GetOccupiedClientHeight();
	int __fastcall GetOccupiedClientWidth();
	virtual System::Types::TPoint __fastcall GetScrollOffset();
	virtual bool __fastcall IsTransparent();
	virtual bool __fastcall IsTransparentBackground();
	virtual void __fastcall MakeVisible(const System::Types::TRect &ARect, bool AFully);
	virtual void __fastcall SizeAdjustment();
	virtual void __fastcall DoGroupScroll(System::TObject* Sender);
	virtual void __fastcall DoEnter();
	virtual void __fastcall DoExit();
	virtual bool __fastcall AllowWrapItems();
	bool __fastcall IsEditorMode();
	virtual bool __fastcall IsShowLockedGroupChildren();
	bool __fastcall IsViewInfoValid();
	virtual bool __fastcall UseRightToLeftAlignment();
	virtual Vcl::Graphics::TFont* __fastcall GetBoldFont();
	virtual Vcl::Graphics::TFont* __fastcall GetDefaultFont() = 0 ;
	virtual void __fastcall UnregisterFonts();
	__property Cxclasses::TcxComponentList* AbsoluteItemList = {read=FAbsoluteItems};
	__property bool AllowGroupWrapItems = {read=FAllowGroupWrapItems, write=SetAllowGroupWrapItems, nodefault};
	__property bool AllowOptimizeWrappedItems = {read=FAllowOptimizeWrappedItems, write=FAllowOptimizeWrappedItems, nodefault};
	__property bool AllowRename = {read=FAllowRename, write=FAllowRename, nodefault};
	__property TdxLayoutContainerCustomizationHelper* CustomizationHelper = {read=FCustomizationHelper};
	__property Cxclasses::TcxComponentList* FloatContainers = {read=FFloatContainers};
	__property TdxLayoutContainerFocusController* FocusController = {read=FFocusController};
	__property bool IsDesignSelectorsVisible = {read=GetIsDesignSelectorsVisible, nodefault};
	__property bool IsOnGlass = {read=GetIsOnGlass, nodefault};
	__property bool IsRestoring = {read=FIsRestoring, write=SetIsRestoring, nodefault};
	__property bool IsStoringNameMode = {read=GetIsStoringNameMode, nodefault};
	__property System::Classes::TComponent* ItemsOwner = {read=GetItemsOwner};
	__property System::Classes::TComponent* ItemsParentComponent = {read=GetItemsParentComponent};
	__property Cxcontrols::TcxControl* ItemsParentControl = {read=GetItemsParentControl};
	__property int ManagedItemCount = {read=GetManagedItemCount, nodefault};
	__property Cxclasses::TcxComponentList* ManagedItemList = {read=GetManagedItemList};
	__property TdxCustomLayoutItem* ManagedItems[int Index] = {read=GetManagedItem};
	__property TdxLayoutContainer* MasterContainer = {read=FMasterContainer, write=FMasterContainer};
	__property TdxLayoutCustomizeFormMenuItems MenuItems = {read=FMenuItems, write=FMenuItems, nodefault};
	__property TdxLayoutContainerPainter* Painter = {read=FPainter};
	__property bool QuickCustomization = {read=FQuickCustomization, write=SetQuickCustomization, nodefault};
	__property TdxCustomLayoutItem* RenamingItem = {read=FRenamingItem, write=SetRenamingItem};
	__property TdxLayoutContainer* RealContainer = {read=GetRealContainer};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=GetScaleFactor};
	__property Dxlayoutselection::_di_IdxLayoutDesignerHelper SelectionHelper = {read=GetSelectionHelper};
	__property bool ShowQuickCustomizationToolbar = {read=FShowQuickCustomizationToolbar, write=FShowQuickCustomizationToolbar, nodefault};
	__property int StoredVersion = {read=FStoredVersion, nodefault};
	__property TdxLayoutItemChangedEvent OnItemChanged = {read=FOnItemChanged, write=SetOnItemChanged};
	
public:
	__fastcall virtual TdxLayoutContainer(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxLayoutContainer();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall GetTabOrderList(System::Classes::TList* List);
	virtual void __fastcall Modified();
	void __fastcall BeginUpdate();
	void __fastcall CancelUpdate();
	void __fastcall EndUpdate(bool ANeedPack = true);
	void __fastcall BeginTranslation();
	void __fastcall EndTranslation();
	virtual void __fastcall BeginDragAndDrop();
	virtual bool __fastcall CanDragAndDrop();
	virtual void __fastcall FinishDragAndDrop(bool Accepted);
	TdxCustomLayoutHitTest* __fastcall GetHitTest()/* overload */;
	TdxCustomLayoutHitTest* __fastcall GetHitTest(const System::Types::TPoint &P)/* overload */;
	TdxCustomLayoutHitTest* __fastcall GetHitTest(int X, int Y)/* overload */;
	System::Types::TPoint __fastcall ClientToScreen(const System::Types::TPoint &Point);
	System::Types::TPoint __fastcall ScreenToClient(const System::Types::TPoint &Point);
	void __fastcall CancelLastUndo();
	void __fastcall SaveToUndo();
	bool __fastcall IsDesigning();
	bool __fastcall IsDestroying();
	bool __fastcall IsGlobalLoading();
	bool __fastcall IsGlobalDestroying();
	bool __fastcall IsLoading();
	bool __fastcall IsUpdateLocked();
	bool __fastcall IsTranslating();
	void __fastcall CustomizeFormUpdate(TdxLayoutCustomizeFormUpdateTypes AUpdateTypes);
	void __fastcall InvalidateRect(const System::Types::TRect &R, bool EraseBackground);
	void __fastcall Redraw(const System::Types::TRect &R, int AFlags = 0x0);
	void __fastcall Update();
	virtual void __fastcall CheckItemNames(const System::UnicodeString AOldName, const System::UnicodeString ANewName);
	void __fastcall Clear();
	virtual TdxCustomLayoutItem* __fastcall CloneItem(TdxCustomLayoutItem* AItem, TdxCustomLayoutGroup* AParent = (TdxCustomLayoutGroup*)(0x0));
	TdxLayoutAlignmentConstraint* __fastcall CreateAlignmentConstraint();
	TdxLayoutGroup* __fastcall CreateGroup()/* overload */;
	TdxCustomLayoutGroup* __fastcall CreateGroup(TdxCustomLayoutGroupClass AGroupClass, TdxCustomLayoutGroup* AParent = (TdxCustomLayoutGroup*)(0x0))/* overload */;
	TdxCustomLayoutItem* __fastcall CreateItem(TdxCustomLayoutItemClass AItemClass = 0x0, TdxCustomLayoutGroup* AParent = (TdxCustomLayoutGroup*)(0x0));
	TdxLayoutItem* __fastcall CreateItemForControl(Vcl::Controls::TControl* AControl, TdxCustomLayoutGroup* AParent = (TdxCustomLayoutGroup*)(0x0));
	TdxLayoutItem* __fastcall FindItem(Vcl::Controls::TControl* AControl)/* overload */;
	TdxLayoutItem* __fastcall FindItem(NativeUInt AControlHandle)/* overload */;
	TdxCustomLayoutItem* __fastcall FindItem(const System::UnicodeString AName)/* overload */;
	void __fastcall RestoreFromIniFile(const System::UnicodeString AStorageName, const System::UnicodeString ARestoreName = System::UnicodeString());
	void __fastcall RestoreFromRegistry(const System::UnicodeString AStorageName, const System::UnicodeString ARestoreName = System::UnicodeString());
	void __fastcall RestoreFromStream(System::Classes::TStream* AStream, const System::UnicodeString ARestoreName = System::UnicodeString());
	void __fastcall RestoreFromStorage(const System::UnicodeString AStorageName, Cxstorage::TcxCustomReaderClass AReaderClass, const System::UnicodeString ARestoreName = System::UnicodeString());
	void __fastcall StoreToIniFile(const System::UnicodeString AStorageName, bool AReCreate = true, const System::UnicodeString ASaveName = System::UnicodeString());
	void __fastcall StoreToRegistry(const System::UnicodeString AStorageName, bool AReCreate = true, const System::UnicodeString ASaveName = System::UnicodeString());
	void __fastcall StoreToStream(System::Classes::TStream* AStream, const System::UnicodeString ASaveName = System::UnicodeString());
	void __fastcall StoreToStorage(const System::UnicodeString AStorageName, Cxstorage::TcxCustomWriterClass AWriterClass, bool AReCreate = true, const System::UnicodeString ASaveName = System::UnicodeString());
	__property bool Customization = {read=GetCustomization, write=SetCustomization, nodefault};
	__property TdxLayoutAvailableItemsViewKind CustomizeAvailableItemsViewKind = {read=FCustomizeAvailableItemsViewKind, write=SetCustomizeAvailableItemsViewKind, nodefault};
	__property TdxLayoutControlCustomCustomizeForm* CustomizeForm = {read=GetCustomizeForm};
	__property System::Types::TRect CustomizeFormBounds = {read=FCustomizeFormBounds, write=FCustomizeFormBounds};
	__property TdxLayoutControlCustomCustomizeFormClass CustomizeFormClass = {read=FCustomizeFormClass, write=FCustomizeFormClass};
	__property bool CustomizeFormTabbedView = {read=FCustomizeFormTabbedView, write=SetCustomizeFormTabbedView, nodefault};
	__property TdxLayoutDragDropMode DragDropMode = {read=GetDragDropMode, write=FDragDropMode, nodefault};
	__property bool HighlightRoot = {read=FHighlightRoot, write=SetHighlightRoot, nodefault};
	__property TdxLayoutImageOptions* ImageOptions = {read=FImageOptions, write=SetImageOptions};
	__property Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* LayoutLookAndFeel = {read=FLayoutLookAndFeel, write=SetLayoutLookAndFeel};
	__property bool ShowDesignSelectors = {read=FShowDesignSelectors, write=SetShowDesignSelectors, nodefault};
	__property System::Types::TRect ClientBounds = {read=GetClientBounds};
	__property System::Types::TRect ClientRect = {read=GetClientRect};
	__property Cxcontrols::TcxControl* ItemsParent = {read=GetItemsParentControl};
	__property TdxUndoRedoManager* UndoRedoManager = {read=FUndoRedoManager};
	__property TdxLayoutContainerViewInfo* ViewInfo = {read=FViewInfo};
	__property int AlignmentConstraintCount = {read=GetAlignmentConstraintCount, nodefault};
	__property TdxLayoutAlignmentConstraint* AlignmentConstraints[int Index] = {read=GetAlignmentConstraint};
	__property int AbsoluteItemCount = {read=GetAbsoluteItemCount, nodefault};
	__property TdxCustomLayoutItem* AbsoluteItems[int Index] = {read=GetAbsoluteItem};
	__property int AvailableItemCount = {read=GetAvailableItemCount, nodefault};
	__property TdxCustomLayoutItem* AvailableItems[int Index] = {read=GetAvailableItem};
	__property TdxLayoutGroup* Root = {read=FRoot};
	__property System::Classes::TNotifyEvent OnChanged = {read=FOnChanged, write=FOnChanged};
	__property System::Classes::TNotifyEvent OnSelectionChanged = {read=FOnSelectionChanged, write=FOnSelectionChanged};
private:
	void *__IdxSelectionChanged;	// Dxlayoutselection::IdxSelectionChanged 
	void *__IdxScaleFactor;	// Cxgeometry::IdxScaleFactor 
	void *__IcxStoredParent;	// Cxstorage::IcxStoredParent 
	void *__IcxStoredObject;	// Cxstorage::IcxStoredObject 
	void *__IcxScalableComponent;	// Cxclasses::IcxScalableComponent 
	void *__IdxLayoutLookAndFeelUser;	// Dxlayoutlookandfeels::IdxLayoutLookAndFeelUser 
	void *__IdxLayoutDesignerHelper;	// Dxlayoutselection::IdxLayoutDesignerHelper 
	void *__IdxLayoutContainerOwner;	// IdxLayoutContainerOwner 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {ECB1A3AE-1C91-4E5F-8ADC-34120676B1CA}
	operator Dxlayoutselection::_di_IdxSelectionChanged()
	{
		Dxlayoutselection::_di_IdxSelectionChanged intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxlayoutselection::IdxSelectionChanged*(void) { return (Dxlayoutselection::IdxSelectionChanged*)&__IdxSelectionChanged; }
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
	// {6AF48CD0-3A0B-4BEC-AC88-5D323432A686}
	operator Cxstorage::_di_IcxStoredParent()
	{
		Cxstorage::_di_IcxStoredParent intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxstorage::IcxStoredParent*(void) { return (Cxstorage::IcxStoredParent*)&__IcxStoredParent; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {79A05009-CAC3-47E8-B454-F6F3D91F495D}
	operator Cxstorage::_di_IcxStoredObject()
	{
		Cxstorage::_di_IcxStoredObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxstorage::IcxStoredObject*(void) { return (Cxstorage::IcxStoredObject*)&__IcxStoredObject; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {70931963-6520-4B20-A9FD-06EE20C9EEF1}
	operator Cxclasses::_di_IcxScalableComponent()
	{
		Cxclasses::_di_IcxScalableComponent intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxclasses::IcxScalableComponent*(void) { return (Cxclasses::IcxScalableComponent*)&__IcxScalableComponent; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {651F19FE-CBCB-4C16-8615-BBD57ED7255A}
	operator Dxlayoutlookandfeels::_di_IdxLayoutLookAndFeelUser()
	{
		Dxlayoutlookandfeels::_di_IdxLayoutLookAndFeelUser intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxlayoutlookandfeels::IdxLayoutLookAndFeelUser*(void) { return (Dxlayoutlookandfeels::IdxLayoutLookAndFeelUser*)&__IdxLayoutLookAndFeelUser; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {0FF95B61-5074-49E4-99C6-1A8BB34F1547}
	operator Dxlayoutselection::_di_IdxLayoutDesignerHelper()
	{
		Dxlayoutselection::_di_IdxLayoutDesignerHelper intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxlayoutselection::IdxLayoutDesignerHelper*(void) { return (Dxlayoutselection::IdxLayoutDesignerHelper*)&__IdxLayoutDesignerHelper; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {85310BD8-3D7A-454F-A54B-9898C0AA55A2}
	operator _di_IdxLayoutContainerOwner()
	{
		_di_IdxLayoutContainerOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxLayoutContainerOwner*(void) { return (IdxLayoutContainerOwner*)&__IdxLayoutContainerOwner; }
	#endif
	
};


typedef System::TMetaClass* TdxLayoutContainerClass;

typedef System::TMetaClass* TdxCustomLayoutHitTestClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomLayoutHitTest : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TdxCustomLayoutItem* FItem;
	TdxCustomLayoutItemViewInfo* FViewInfo;
	System::Types::TPoint FPos;
	
public:
	virtual bool __fastcall CanDragAndDrop(TdxCustomLayoutItem* AItem, const System::Types::TPoint &P);
	DYNAMIC System::Uitypes::TCursor __fastcall GetCursor();
	DYNAMIC System::Uitypes::TCursor __fastcall GetDropCursor();
	virtual Cxcontrols::TcxDragAndDropObjectClass __fastcall GetDragAndDropObjectClass();
	virtual int __fastcall HitTestCode();
	__classmethod TdxCustomLayoutHitTest* __fastcall Instance();
	virtual bool __fastcall IsDropAreaPartDetermined();
	virtual TdxLayoutDropAreaPart __fastcall GetDropAreaPart();
	virtual TdxCustomLayoutGroup* __fastcall GetGroupForInsert();
	virtual TdxCustomLayoutItem* __fastcall GetDestinationItem();
	virtual TdxCustomLayoutItem* __fastcall GetSourceItem();
	__property TdxCustomLayoutItem* Item = {read=FItem, write=FItem};
	__property TdxCustomLayoutItemViewInfo* ViewInfo = {read=FViewInfo, write=FViewInfo};
	__property System::Types::TPoint Pos = {read=FPos, write=FPos};
public:
	/* TObject.Create */ inline __fastcall TdxCustomLayoutHitTest() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxCustomLayoutHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomLayoutItemHitTest : public TdxCustomLayoutHitTest
{
	typedef TdxCustomLayoutHitTest inherited;
	
public:
	/* TObject.Create */ inline __fastcall TdxCustomLayoutItemHitTest() : TdxCustomLayoutHitTest() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxCustomLayoutItemHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutNoneHitTest : public TdxCustomLayoutHitTest
{
	typedef TdxCustomLayoutHitTest inherited;
	
public:
	virtual int __fastcall HitTestCode();
public:
	/* TObject.Create */ inline __fastcall TdxLayoutNoneHitTest() : TdxCustomLayoutHitTest() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxLayoutNoneHitTest() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TdxCustomLayoutItemHitTestClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutBasicItemHitTest : public TdxCustomLayoutItemHitTest
{
	typedef TdxCustomLayoutItemHitTest inherited;
	
private:
	TdxLayoutBasicItem* __fastcall GetItem();
	
public:
	virtual int __fastcall HitTestCode();
	virtual TdxCustomLayoutGroup* __fastcall GetGroupForInsert();
	__property TdxLayoutBasicItem* Item = {read=GetItem};
public:
	/* TObject.Create */ inline __fastcall TdxLayoutBasicItemHitTest() : TdxCustomLayoutItemHitTest() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxLayoutBasicItemHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutItemHitTest : public TdxLayoutBasicItemHitTest
{
	typedef TdxLayoutBasicItemHitTest inherited;
	
private:
	HIDESBASE TdxLayoutItem* __fastcall GetItem();
	
public:
	virtual int __fastcall HitTestCode();
	__property TdxLayoutItem* Item = {read=GetItem};
public:
	/* TObject.Create */ inline __fastcall TdxLayoutItemHitTest() : TdxLayoutBasicItemHitTest() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxLayoutItemHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutGroupHitTest : public TdxCustomLayoutItemHitTest
{
	typedef TdxCustomLayoutItemHitTest inherited;
	
private:
	TdxCustomLayoutGroup* __fastcall GetItem();
	TdxLayoutGroupViewInfo* __fastcall GetViewInfo();
	
public:
	virtual int __fastcall HitTestCode();
	virtual TdxCustomLayoutGroup* __fastcall GetGroupForInsert();
	__property TdxCustomLayoutGroup* Item = {read=GetItem};
	__property TdxLayoutGroupViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TObject.Create */ inline __fastcall TdxLayoutGroupHitTest() : TdxCustomLayoutItemHitTest() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxLayoutGroupHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutTabbedGroupHitTest : public TdxLayoutGroupHitTest
{
	typedef TdxLayoutGroupHitTest inherited;
	
private:
	TdxLayoutGroupViewInfoTabbedSpecific* __fastcall GetSpecific();
	
protected:
	__property TdxLayoutGroupViewInfoTabbedSpecific* Specific = {read=GetSpecific};
	
public:
	virtual TdxCustomLayoutItem* __fastcall GetDestinationItem();
	virtual TdxCustomLayoutItem* __fastcall GetSourceItem();
public:
	/* TObject.Create */ inline __fastcall TdxLayoutTabbedGroupHitTest() : TdxLayoutGroupHitTest() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxLayoutTabbedGroupHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutFloatingRootHitTest : public TdxLayoutGroupHitTest
{
	typedef TdxLayoutGroupHitTest inherited;
	
public:
	virtual TdxCustomLayoutItem* __fastcall GetSourceItem();
public:
	/* TObject.Create */ inline __fastcall TdxLayoutFloatingRootHitTest() : TdxLayoutGroupHitTest() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxLayoutFloatingRootHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutClientAreaHitTest : public TdxCustomLayoutHitTest
{
	typedef TdxCustomLayoutHitTest inherited;
	
private:
	TdxLayoutContainer* FContainer;
	
public:
	virtual int __fastcall HitTestCode();
	virtual TdxCustomLayoutGroup* __fastcall GetGroupForInsert();
	virtual TdxCustomLayoutItem* __fastcall GetDestinationItem();
	__property TdxLayoutContainer* Container = {read=FContainer, write=FContainer};
public:
	/* TObject.Create */ inline __fastcall TdxLayoutClientAreaHitTest() : TdxCustomLayoutHitTest() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxLayoutClientAreaHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutSizeHitTest : public TdxCustomLayoutItemHitTest
{
	typedef TdxCustomLayoutItemHitTest inherited;
	
private:
	System::Uitypes::TCursor FCursor;
	
protected:
	__property System::Uitypes::TCursor Cursor = {read=FCursor, write=FCursor, nodefault};
	
public:
	virtual int __fastcall HitTestCode();
	DYNAMIC System::Uitypes::TCursor __fastcall GetCursor();
	virtual Cxcontrols::TcxDragAndDropObjectClass __fastcall GetDragAndDropObjectClass();
public:
	/* TObject.Create */ inline __fastcall TdxLayoutSizeHitTest() : TdxCustomLayoutItemHitTest() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxLayoutSizeHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutSplitterHitTest : public TdxCustomLayoutItemHitTest
{
	typedef TdxCustomLayoutItemHitTest inherited;
	
public:
	virtual bool __fastcall CanDragAndDrop(TdxCustomLayoutItem* AItem, const System::Types::TPoint &P);
	virtual int __fastcall HitTestCode();
	DYNAMIC System::Uitypes::TCursor __fastcall GetCursor();
	virtual Cxcontrols::TcxDragAndDropObjectClass __fastcall GetDragAndDropObjectClass();
public:
	/* TObject.Create */ inline __fastcall TdxLayoutSplitterHitTest() : TdxCustomLayoutItemHitTest() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxLayoutSplitterHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutCustomizeFormHitTest : public TdxCustomLayoutHitTest
{
	typedef TdxCustomLayoutHitTest inherited;
	
private:
	TdxLayoutDropAreaPart FDropAreaPart;
	TdxLayoutContainer* FContainer;
	
protected:
	int FHitTestArea;
	
public:
	DYNAMIC System::Uitypes::TCursor __fastcall GetDropCursor();
	virtual int __fastcall HitTestCode();
	virtual bool __fastcall IsDropAreaPartDetermined();
	virtual TdxLayoutDropAreaPart __fastcall GetDropAreaPart();
	virtual TdxCustomLayoutItem* __fastcall GetDestinationItem();
	__property TdxLayoutDropAreaPart DropAreaPart = {read=FDropAreaPart, write=FDropAreaPart, nodefault};
	__property TdxLayoutContainer* Container = {read=FContainer, write=FContainer};
public:
	/* TObject.Create */ inline __fastcall TdxLayoutCustomizeFormHitTest() : TdxCustomLayoutHitTest() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxLayoutCustomizeFormHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutCustomizeFormAvailableItemsHitTest : public TdxLayoutCustomizeFormHitTest
{
	typedef TdxLayoutCustomizeFormHitTest inherited;
	
public:
	virtual int __fastcall HitTestCode();
public:
	/* TObject.Create */ inline __fastcall TdxLayoutCustomizeFormAvailableItemsHitTest() : TdxLayoutCustomizeFormHitTest() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxLayoutCustomizeFormAvailableItemsHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutCustomizeFormTreeViewItemsHitTest : public TdxLayoutCustomizeFormHitTest
{
	typedef TdxLayoutCustomizeFormHitTest inherited;
	
public:
	virtual int __fastcall HitTestCode();
public:
	/* TObject.Create */ inline __fastcall TdxLayoutCustomizeFormTreeViewItemsHitTest() : TdxLayoutCustomizeFormHitTest() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxLayoutCustomizeFormTreeViewItemsHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomLayoutElementPainter : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TdxCustomLayoutElementViewInfo* FViewInfo;
	
protected:
	__property TdxCustomLayoutElementViewInfo* ViewInfo = {read=FViewInfo};
	
public:
	__fastcall virtual TdxCustomLayoutElementPainter(TdxCustomLayoutElementViewInfo* AViewInfo);
	__fastcall virtual ~TdxCustomLayoutElementPainter();
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomLayoutItemElementPainter : public TdxCustomLayoutElementPainter
{
	typedef TdxCustomLayoutElementPainter inherited;
	
private:
	Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* __fastcall GetLayoutLookAndFeel();
	Cxlookandfeels::TcxLookAndFeel* __fastcall GetLookAndFeel();
	TdxCustomLayoutItemElementViewInfo* __fastcall GetViewInfo();
	
protected:
	__property Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* LayoutLookAndFeel = {read=GetLayoutLookAndFeel};
	__property Cxlookandfeels::TcxLookAndFeel* LookAndFeel = {read=GetLookAndFeel};
	__property TdxCustomLayoutItemElementViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TdxCustomLayoutElementPainter.Create */ inline __fastcall virtual TdxCustomLayoutItemElementPainter(TdxCustomLayoutElementViewInfo* AViewInfo) : TdxCustomLayoutElementPainter(AViewInfo) { }
	/* TdxCustomLayoutElementPainter.Destroy */ inline __fastcall virtual ~TdxCustomLayoutItemElementPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomLayoutItemCaptionPainter : public TdxCustomLayoutItemElementPainter
{
	typedef TdxCustomLayoutItemElementPainter inherited;
	
private:
	HIDESBASE TdxCustomLayoutItemCaptionViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual bool __fastcall DrawEnabled();
	System::Types::TRect __fastcall GetTextRect();
	void __fastcall DoDrawFormattedText(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect);
	virtual void __fastcall DoDrawText(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DoDrawGlyph(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DoPaint(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawBackground(Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall DrawGlyph(Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall DrawText(Cxgraphics::TcxCanvas* ACanvas);
	__property TdxCustomLayoutItemCaptionViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
public:
	/* TdxCustomLayoutElementPainter.Create */ inline __fastcall virtual TdxCustomLayoutItemCaptionPainter(TdxCustomLayoutElementViewInfo* AViewInfo) : TdxCustomLayoutItemElementPainter(AViewInfo) { }
	/* TdxCustomLayoutElementPainter.Destroy */ inline __fastcall virtual ~TdxCustomLayoutItemCaptionPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutGroupCaptionPainter : public TdxCustomLayoutItemCaptionPainter
{
	typedef TdxCustomLayoutItemCaptionPainter inherited;
	
public:
	/* TdxCustomLayoutElementPainter.Create */ inline __fastcall virtual TdxLayoutGroupCaptionPainter(TdxCustomLayoutElementViewInfo* AViewInfo) : TdxCustomLayoutItemCaptionPainter(AViewInfo) { }
	/* TdxCustomLayoutElementPainter.Destroy */ inline __fastcall virtual ~TdxLayoutGroupCaptionPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutControlItemCaptionPainter : public TdxCustomLayoutItemCaptionPainter
{
	typedef TdxCustomLayoutItemCaptionPainter inherited;
	
public:
	/* TdxCustomLayoutElementPainter.Create */ inline __fastcall virtual TdxLayoutControlItemCaptionPainter(TdxCustomLayoutElementViewInfo* AViewInfo) : TdxCustomLayoutItemCaptionPainter(AViewInfo) { }
	/* TdxCustomLayoutElementPainter.Destroy */ inline __fastcall virtual ~TdxLayoutControlItemCaptionPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutItemCaptionPainter : public TdxLayoutControlItemCaptionPainter
{
	typedef TdxLayoutControlItemCaptionPainter inherited;
	
public:
	/* TdxCustomLayoutElementPainter.Create */ inline __fastcall virtual TdxLayoutItemCaptionPainter(TdxCustomLayoutElementViewInfo* AViewInfo) : TdxLayoutControlItemCaptionPainter(AViewInfo) { }
	/* TdxCustomLayoutElementPainter.Destroy */ inline __fastcall virtual ~TdxLayoutItemCaptionPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomLayoutItemPainter : public TdxCustomLayoutElementPainter
{
	typedef TdxCustomLayoutElementPainter inherited;
	
private:
	Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* __fastcall GetLayoutLookAndFeel();
	Cxlookandfeels::TcxLookAndFeel* __fastcall GetLookAndFeel();
	TdxCustomLayoutItemViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual TdxCustomLayoutItemCaptionPainterClass __fastcall GetCaptionPainterClass() = 0 ;
	virtual void __fastcall DoDrawBackground(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DoDrawCaption(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DoDrawSpecificPart(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawBackground(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawCaption(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawContent(Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall DrawItem(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawDragImageFrame(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawSpecificPart(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawDesignFeatures(Cxgraphics::TcxCanvas* ACanvas);
	virtual bool __fastcall CanDrawBackground();
	virtual bool __fastcall CanDrawCaption();
	virtual bool __fastcall CanDrawSpecificPart();
	virtual bool __fastcall CanPaint();
	__property Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* LayoutLookAndFeel = {read=GetLayoutLookAndFeel};
	__property Cxlookandfeels::TcxLookAndFeel* LookAndFeel = {read=GetLookAndFeel};
	__property TdxCustomLayoutItemViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall PaintDragImage(Cxgraphics::TcxCanvas* ACanvas);
public:
	/* TdxCustomLayoutElementPainter.Create */ inline __fastcall virtual TdxCustomLayoutItemPainter(TdxCustomLayoutElementViewInfo* AViewInfo) : TdxCustomLayoutElementPainter(AViewInfo) { }
	/* TdxCustomLayoutElementPainter.Destroy */ inline __fastcall virtual ~TdxCustomLayoutItemPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutControlItemControlPainter : public TdxCustomLayoutItemElementPainter
{
	typedef TdxCustomLayoutItemElementPainter inherited;
	
private:
	HIDESBASE TdxLayoutControlItemControlViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DrawBorders(Cxgraphics::TcxCanvas* ACanvas);
	__property TdxLayoutControlItemControlViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
public:
	/* TdxCustomLayoutElementPainter.Create */ inline __fastcall virtual TdxLayoutControlItemControlPainter(TdxCustomLayoutElementViewInfo* AViewInfo) : TdxCustomLayoutItemElementPainter(AViewInfo) { }
	/* TdxCustomLayoutElementPainter.Destroy */ inline __fastcall virtual ~TdxLayoutControlItemControlPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutItemControlPainter : public TdxLayoutControlItemControlPainter
{
	typedef TdxLayoutControlItemControlPainter inherited;
	
public:
	/* TdxCustomLayoutElementPainter.Create */ inline __fastcall virtual TdxLayoutItemControlPainter(TdxCustomLayoutElementViewInfo* AViewInfo) : TdxLayoutControlItemControlPainter(AViewInfo) { }
	/* TdxCustomLayoutElementPainter.Destroy */ inline __fastcall virtual ~TdxLayoutItemControlPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutBasicItemPainter : public TdxCustomLayoutItemPainter
{
	typedef TdxCustomLayoutItemPainter inherited;
	
public:
	/* TdxCustomLayoutElementPainter.Create */ inline __fastcall virtual TdxLayoutBasicItemPainter(TdxCustomLayoutElementViewInfo* AViewInfo) : TdxCustomLayoutItemPainter(AViewInfo) { }
	/* TdxCustomLayoutElementPainter.Destroy */ inline __fastcall virtual ~TdxLayoutBasicItemPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutEmptySpaceItemPainter : public TdxLayoutBasicItemPainter
{
	typedef TdxLayoutBasicItemPainter inherited;
	
protected:
	virtual void __fastcall DrawContent(Cxgraphics::TcxCanvas* ACanvas);
public:
	/* TdxCustomLayoutElementPainter.Create */ inline __fastcall virtual TdxLayoutEmptySpaceItemPainter(TdxCustomLayoutElementViewInfo* AViewInfo) : TdxLayoutBasicItemPainter(AViewInfo) { }
	/* TdxCustomLayoutElementPainter.Destroy */ inline __fastcall virtual ~TdxLayoutEmptySpaceItemPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutDirectionalItemPainter : public TdxLayoutBasicItemPainter
{
	typedef TdxLayoutBasicItemPainter inherited;
	
protected:
	virtual void __fastcall DrawContent(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DoDrawContent(Cxgraphics::TcxCanvas* ACanvas);
public:
	/* TdxCustomLayoutElementPainter.Create */ inline __fastcall virtual TdxLayoutDirectionalItemPainter(TdxCustomLayoutElementViewInfo* AViewInfo) : TdxLayoutBasicItemPainter(AViewInfo) { }
	/* TdxCustomLayoutElementPainter.Destroy */ inline __fastcall virtual ~TdxLayoutDirectionalItemPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutSplitterItemPainter : public TdxLayoutDirectionalItemPainter
{
	typedef TdxLayoutDirectionalItemPainter inherited;
	
private:
	HIDESBASE TdxLayoutSplitterItemViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DoDrawContent(Cxgraphics::TcxCanvas* ACanvas);
	__property TdxLayoutSplitterItemViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TdxCustomLayoutElementPainter.Create */ inline __fastcall virtual TdxLayoutSplitterItemPainter(TdxCustomLayoutElementViewInfo* AViewInfo) : TdxLayoutDirectionalItemPainter(AViewInfo) { }
	/* TdxCustomLayoutElementPainter.Destroy */ inline __fastcall virtual ~TdxLayoutSplitterItemPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutLabeledItemPainter : public TdxLayoutBasicItemPainter
{
	typedef TdxLayoutBasicItemPainter inherited;
	
protected:
	virtual bool __fastcall CanDrawCaption();
	virtual TdxCustomLayoutItemCaptionPainterClass __fastcall GetCaptionPainterClass();
public:
	/* TdxCustomLayoutElementPainter.Create */ inline __fastcall virtual TdxLayoutLabeledItemPainter(TdxCustomLayoutElementViewInfo* AViewInfo) : TdxLayoutBasicItemPainter(AViewInfo) { }
	/* TdxCustomLayoutElementPainter.Destroy */ inline __fastcall virtual ~TdxLayoutLabeledItemPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutSeparatorItemPainter : public TdxLayoutLabeledItemPainter
{
	typedef TdxLayoutLabeledItemPainter inherited;
	
private:
	HIDESBASE TdxLayoutSeparatorItemViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DoDrawContent(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawContent(Cxgraphics::TcxCanvas* ACanvas);
	__property TdxLayoutSeparatorItemViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TdxCustomLayoutElementPainter.Create */ inline __fastcall virtual TdxLayoutSeparatorItemPainter(TdxCustomLayoutElementViewInfo* AViewInfo) : TdxLayoutLabeledItemPainter(AViewInfo) { }
	/* TdxCustomLayoutElementPainter.Destroy */ inline __fastcall virtual ~TdxLayoutSeparatorItemPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutImageItemPainter : public TdxLayoutLabeledItemPainter
{
	typedef TdxLayoutLabeledItemPainter inherited;
	
private:
	HIDESBASE TdxLayoutImageItemViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DrawContent(Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall DrawContentImage(Cxgraphics::TcxCanvas* ACanvas);
	__property TdxLayoutImageItemViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TdxCustomLayoutElementPainter.Create */ inline __fastcall virtual TdxLayoutImageItemPainter(TdxCustomLayoutElementViewInfo* AViewInfo) : TdxLayoutLabeledItemPainter(AViewInfo) { }
	/* TdxCustomLayoutElementPainter.Destroy */ inline __fastcall virtual ~TdxLayoutImageItemPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutCheckBoxItemPainter : public TdxLayoutLabeledItemPainter
{
	typedef TdxLayoutLabeledItemPainter inherited;
	
private:
	Cxlookandfeelpainters::TcxEditCheckState __fastcall GetEditCheckState();
	HIDESBASE TdxLayoutCheckBoxItemViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DrawContent(Cxgraphics::TcxCanvas* ACanvas);
	__property TdxLayoutCheckBoxItemViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TdxCustomLayoutElementPainter.Create */ inline __fastcall virtual TdxLayoutCheckBoxItemPainter(TdxCustomLayoutElementViewInfo* AViewInfo) : TdxLayoutLabeledItemPainter(AViewInfo) { }
	/* TdxCustomLayoutElementPainter.Destroy */ inline __fastcall virtual ~TdxLayoutCheckBoxItemPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutRadioButtonItemPainter : public TdxLayoutLabeledItemPainter
{
	typedef TdxLayoutLabeledItemPainter inherited;
	
private:
	Cxlookandfeelpainters::TcxButtonState __fastcall GetButtonState();
	HIDESBASE TdxLayoutRadioButtonItemViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual void __fastcall DrawContent(Cxgraphics::TcxCanvas* ACanvas);
	__property TdxLayoutRadioButtonItemViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TdxCustomLayoutElementPainter.Create */ inline __fastcall virtual TdxLayoutRadioButtonItemPainter(TdxCustomLayoutElementViewInfo* AViewInfo) : TdxLayoutLabeledItemPainter(AViewInfo) { }
	/* TdxCustomLayoutElementPainter.Destroy */ inline __fastcall virtual ~TdxLayoutRadioButtonItemPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutControlItemPainter : public TdxLayoutLabeledItemPainter
{
	typedef TdxLayoutLabeledItemPainter inherited;
	
private:
	HIDESBASE TdxLayoutControlItemViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual bool __fastcall CanDrawSpecificPart();
	virtual TdxCustomLayoutItemCaptionPainterClass __fastcall GetCaptionPainterClass();
	virtual TdxLayoutControlItemControlPainterClass __fastcall GetControlPainterClass();
	virtual void __fastcall DoDrawControlBorder(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawContent(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawControlBorder(Cxgraphics::TcxCanvas* ACanvas);
	__property TdxLayoutControlItemViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TdxCustomLayoutElementPainter.Create */ inline __fastcall virtual TdxLayoutControlItemPainter(TdxCustomLayoutElementViewInfo* AViewInfo) : TdxLayoutLabeledItemPainter(AViewInfo) { }
	/* TdxCustomLayoutElementPainter.Destroy */ inline __fastcall virtual ~TdxLayoutControlItemPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutItemPainter : public TdxLayoutControlItemPainter
{
	typedef TdxLayoutControlItemPainter inherited;
	
private:
	HIDESBASE TdxLayoutItemViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual TdxCustomLayoutItemCaptionPainterClass __fastcall GetCaptionPainterClass();
	virtual TdxLayoutControlItemControlPainterClass __fastcall GetControlPainterClass();
	virtual void __fastcall DoDrawSpecificPart(Cxgraphics::TcxCanvas* ACanvas);
	__property TdxLayoutItemViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TdxCustomLayoutElementPainter.Create */ inline __fastcall virtual TdxLayoutItemPainter(TdxCustomLayoutElementViewInfo* AViewInfo) : TdxLayoutControlItemPainter(AViewInfo) { }
	/* TdxCustomLayoutElementPainter.Destroy */ inline __fastcall virtual ~TdxLayoutItemPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutGroupButtonPainter : public TdxCustomLayoutItemElementPainter
{
	typedef TdxCustomLayoutItemElementPainter inherited;
	
private:
	Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	HIDESBASE TdxLayoutGroupButtonViewInfo* __fastcall GetViewInfo();
	
protected:
	Cxgraphics::TcxBitmap32* __fastcall CreateInternalGlyph(Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* APainter);
	void __fastcall DrawButton(Cxgraphics::TcxCanvas* ACanvas, Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* APainter, Vcl::Graphics::TGraphic* AGlyph);
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=GetScaleFactor};
	__property TdxLayoutGroupButtonViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
public:
	/* TdxCustomLayoutElementPainter.Create */ inline __fastcall virtual TdxLayoutGroupButtonPainter(TdxCustomLayoutElementViewInfo* AViewInfo) : TdxCustomLayoutItemElementPainter(AViewInfo) { }
	/* TdxCustomLayoutElementPainter.Destroy */ inline __fastcall virtual ~TdxLayoutGroupButtonPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutGroupCheckBoxButtonPainter : public TdxLayoutGroupButtonPainter
{
	typedef TdxLayoutGroupButtonPainter inherited;
	
public:
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
public:
	/* TdxCustomLayoutElementPainter.Create */ inline __fastcall virtual TdxLayoutGroupCheckBoxButtonPainter(TdxCustomLayoutElementViewInfo* AViewInfo) : TdxLayoutGroupButtonPainter(AViewInfo) { }
	/* TdxCustomLayoutElementPainter.Destroy */ inline __fastcall virtual ~TdxLayoutGroupCheckBoxButtonPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutGroupPainter : public TdxCustomLayoutItemPainter
{
	typedef TdxCustomLayoutItemPainter inherited;
	
private:
	HIDESBASE TdxLayoutGroupViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual TdxCustomLayoutItemCaptionPainterClass __fastcall GetCaptionPainterClass();
	virtual void __fastcall DrawContent(Cxgraphics::TcxCanvas* ACanvas);
	virtual bool __fastcall CanDrawBorders();
	virtual bool __fastcall CanDrawSpecificControls();
	virtual bool __fastcall HasCaptionBackground();
	virtual void __fastcall DoDrawBorders(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DoDrawButtons(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DoDrawSpecificControls(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawBorders(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawButtons(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawItems(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawItemsArea(Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall DrawSpecificControls(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawSpecificPart(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawDesignFeatures(Cxgraphics::TcxCanvas* ACanvas);
	__property TdxLayoutGroupViewInfo* ViewInfo = {read=GetViewInfo};
public:
	/* TdxCustomLayoutElementPainter.Create */ inline __fastcall virtual TdxLayoutGroupPainter(TdxCustomLayoutElementViewInfo* AViewInfo) : TdxCustomLayoutItemPainter(AViewInfo) { }
	/* TdxCustomLayoutElementPainter.Destroy */ inline __fastcall virtual ~TdxLayoutGroupPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutContainerPainter : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TdxLayoutContainerViewInfo* FViewInfo;
	int FPlaceControlsCounter;
	TdxLayoutContainer* __fastcall GetContainer();
	
protected:
	virtual void __fastcall DrawDesignFeatures(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawItems(Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall PlaceControls(TdxCustomLayoutItemViewInfo* AItemViewInfo, bool AProcessWinControls = true, int AAdditionalFlags = 0x0);
	__property TdxLayoutContainer* Container = {read=GetContainer};
	
public:
	__fastcall virtual TdxLayoutContainerPainter(TdxLayoutContainerViewInfo* AViewInfo);
	virtual void __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas);
	__property TdxLayoutContainerViewInfo* ViewInfo = {read=FViewInfo};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxLayoutContainerPainter() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TdxLayoutElementViewInfoState : unsigned char { levsHot, levsPressed };

typedef System::Set<TdxLayoutElementViewInfoState, TdxLayoutElementViewInfoState::levsHot, TdxLayoutElementViewInfoState::levsPressed> TdxLayoutElementViewInfoStates;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomLayoutElementViewInfo : public Dxcoreclasses::TcxIUnknownObject
{
	typedef Dxcoreclasses::TcxIUnknownObject inherited;
	
private:
	System::Types::TRect FBounds;
	
private:
	bool FIsOnGlass;
	System::Types::TPoint FOffset;
	System::Types::TRect FOriginalBounds;
	System::Types::TRect FPadding;
	bool FIsPaddingCalculated;
	TdxLayoutElementViewInfoStates FState;
	Cxlookandfeels::TcxLookAndFeel* __fastcall GetLookAndFeel();
	System::Types::TRect __fastcall GetPadding();
	void __fastcall SetOffset(const System::Types::TPoint &Value);
	void __fastcall SetState(TdxLayoutElementViewInfoStates AValue);
	
protected:
	virtual Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* __fastcall GetLayoutLookAndFeel() = 0 ;
	virtual bool __fastcall UseRightToLeftAlignment() = 0 ;
	virtual System::Types::TRect __fastcall CalculatePadding();
	virtual bool __fastcall GetEnabled();
	virtual bool __fastcall GetIsCustomization();
	virtual bool __fastcall IsHotTrackable();
	virtual void __fastcall StateChanged();
	void __fastcall AssignBounds(TdxCustomLayoutElementViewInfo* ASource);
	virtual bool __fastcall CanAssignBounds(TdxCustomLayoutElementViewInfo* ASource);
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &AClientBounds);
	virtual void __fastcall DoAssignBounds(TdxCustomLayoutElementViewInfo* ASource);
	virtual void __fastcall DoSetOffset(const System::Types::TPoint &AValue, const System::Types::TPoint &ADiff);
	virtual void __fastcall Reset();
	void __fastcall SetBounds(const System::Types::TRect &ARect, bool AOriginal = true);
	virtual void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual bool __fastcall CanFocusOnClick(int X, int Y);
	virtual void __fastcall MouseEnter();
	virtual void __fastcall MouseLeave();
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	__property bool IsCustomization = {read=GetIsCustomization, nodefault};
	__property bool IsOnGlass = {read=FIsOnGlass, write=FIsOnGlass, nodefault};
	__property Cxlookandfeels::TcxLookAndFeel* LookAndFeel = {read=GetLookAndFeel};
	__property System::Types::TRect OriginalBounds = {read=FOriginalBounds};
	__property System::Types::TPoint Offset = {read=FOffset, write=SetOffset};
	__property System::Types::TRect Padding = {read=GetPadding};
	__property TdxLayoutElementViewInfoStates State = {read=FState, write=SetState, nodefault};
	
public:
	virtual void __fastcall Calculate(const System::Types::TRect &ABounds);
	__property System::Types::TRect Bounds = {read=FBounds};
	__property bool Enabled = {read=GetEnabled, nodefault};
	__property Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* LayoutLookAndFeel = {read=GetLayoutLookAndFeel};
public:
	/* TObject.Create */ inline __fastcall TdxCustomLayoutElementViewInfo() : Dxcoreclasses::TcxIUnknownObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxCustomLayoutElementViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomLayoutItemElementViewInfo : public TdxCustomLayoutElementViewInfo
{
	typedef TdxCustomLayoutElementViewInfo inherited;
	
private:
	TdxCustomLayoutItemViewInfo* FItemViewInfo;
	int FHeight;
	int FWidth;
	TdxCustomLayoutItem* __fastcall GetItem();
	int __fastcall GetHeight();
	int __fastcall GetWidth();
	void __fastcall SetHeight(int Value);
	void __fastcall SetWidth(int Value);
	
protected:
	virtual void __fastcall DoAssignBounds(TdxCustomLayoutElementViewInfo* ASource);
	virtual bool __fastcall GetEnabled();
	virtual bool __fastcall GetIsCustomization();
	virtual Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* __fastcall GetLayoutLookAndFeel();
	virtual bool __fastcall UseRightToLeftAlignment();
	virtual void __fastcall Reset();
	virtual void __fastcall CalculateExactBounds(const System::Types::TRect &AAvailableBounds);
	virtual TdxLayoutRealAlignHorz __fastcall GetLayoutAlignHorz();
	virtual TdxLayoutRealAlignVert __fastcall GetLayoutAlignVert();
	virtual System::Uitypes::TCursor __fastcall GetCursor(int X, int Y);
	virtual bool __fastcall GetVisible();
	virtual void __fastcall Invalidate(const System::Types::TRect &ABounds);
	virtual bool __fastcall AllowDragDrop();
	virtual bool __fastcall WantsMouse(int X, int Y);
	virtual bool __fastcall ShowHint(Vcl::Controls::THintInfo &AHintInfo);
	__property TdxCustomLayoutItem* Item = {read=GetItem};
	__property TdxCustomLayoutItemViewInfo* ItemViewInfo = {read=FItemViewInfo};
	__property bool Visible = {read=GetVisible, nodefault};
	
public:
	__fastcall virtual TdxCustomLayoutItemElementViewInfo(TdxCustomLayoutItemViewInfo* AItemViewInfo);
	__fastcall virtual ~TdxCustomLayoutItemElementViewInfo();
	virtual int __fastcall CalculateMinHeight();
	virtual int __fastcall CalculateMinWidth();
	virtual int __fastcall CalculateHeight();
	virtual int __fastcall CalculateWidth();
	__property TdxLayoutRealAlignHorz LayoutAlignHorz = {read=GetLayoutAlignHorz, nodefault};
	__property TdxLayoutRealAlignVert LayoutAlignVert = {read=GetLayoutAlignVert, nodefault};
	__property int Height = {read=GetHeight, write=SetHeight, nodefault};
	__property int Width = {read=GetWidth, write=SetWidth, nodefault};
};

#pragma pack(pop)

struct DECLSPEC_DRECORD TdxTextSizeCache
{
public:
	int TextAreaWidth;
	System::Types::TSize TextSize;
	System::Types::TSize OptimalTextSize;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomLayoutItemCaptionViewInfo : public TdxCustomLayoutItemElementViewInfo
{
	typedef TdxCustomLayoutItemElementViewInfo inherited;
	
	
protected:
	typedef System::Types::TSize __fastcall (__closure *TdxPreparedCanvasTextPlaceSizeFunc)(Cxgraphics::TcxCanvas* ACanvas);
	
	
private:
	Vcl::Stdctrls::TEllipsisPosition FEllipsisPosition;
	Dxcore::TdxDefaultBoolean FIsImageVisible;
	Dxcore::TdxDefaultBoolean FIsTextVisible;
	bool FHotTracked;
	TdxCaptionLayout FTextLayout;
	TdxTextSizeCache FTextSizeCache;
	bool FWordWrap;
	Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	Dxformattedtext::TdxFormattedText* __fastcall GetFormattedText();
	System::UnicodeString __fastcall GetVisibleText();
	void __fastcall SetHotTracked(bool Value);
	
protected:
	System::Types::TRect FTextAreaBounds;
	System::Types::TRect FImageAreaBounds;
	virtual System::Uitypes::TCursor __fastcall GetCursor(int X, int Y);
	virtual bool __fastcall GetVisible();
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseLeave();
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual bool __fastcall ShowHint(Vcl::Controls::THintInfo &AHintInfo);
	virtual void __fastcall StateChanged();
	virtual bool __fastcall IsHotTrackable();
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &AClientBounds);
	virtual int __fastcall CalculateTextFlags(bool AForDrawing = true);
	virtual void __fastcall PrepareCanvas(Cxgraphics::TcxCanvas* ACanvas, bool AForDrawing);
	virtual TdxLayoutRealAlignHorz __fastcall GetLayoutAlignHorz();
	virtual TdxLayoutRealAlignVert __fastcall GetLayoutAlignVert();
	virtual System::Types::TSize __fastcall GetContentOffsetSize();
	System::Types::TSize __fastcall GetImageSize();
	int __fastcall GetImageHeight();
	int __fastcall GetImageWidth();
	void __fastcall AdjustTextAreaBounds(System::Types::TRect &R);
	void __fastcall CalculateFormattedText(Dxformattedtext::TdxFormattedText* AFormattedText, const int AFlags, const System::Types::TRect &ARect, Vcl::Graphics::TCanvas* ACanvas, const bool AForDrawing);
	virtual void __fastcall CalculateImageTextAreaBounds();
	virtual System::Uitypes::TColor __fastcall GetColor();
	virtual Vcl::Graphics::TFont* __fastcall GetFont();
	System::Types::TSize __fastcall GetFormattedTextSize(Cxgraphics::TcxCanvas* ACanvas, const int AFlags, const System::Types::TRect &ARect);
	virtual System::Types::TRect __fastcall GetHotTrackBounds();
	virtual Dxlayoutlookandfeels::TdxLayoutHotTrackStyles __fastcall GetHotTrackStyles();
	virtual System::UnicodeString __fastcall GetText();
	virtual System::Uitypes::TColor __fastcall GetTextColor();
	virtual System::Uitypes::TColor __fastcall GetTextDisabledColor();
	virtual System::Uitypes::TColor __fastcall GetTextHotColor();
	virtual System::Uitypes::TColor __fastcall GetTextNormalColor();
	System::Types::TSize __fastcall GetOptimalTextSize(Cxgraphics::TcxCanvas* ACanvas);
	System::Types::TSize __fastcall GetOptimalTextPlaceSize();
	virtual int __fastcall GetTextAreaWidth();
	System::Types::TSize __fastcall GetTextPlaceSize();
	System::Types::TSize __fastcall GetTextPlaceSizeFromTextSize(TdxPreparedCanvasTextPlaceSizeFunc ASizeFunc);
	virtual System::Types::TSize __fastcall GetTextSize(Cxgraphics::TcxCanvas* ACanvas);
	virtual System::Classes::TAlignment __fastcall GetTextAlignHorz();
	virtual Dxlayoutcommon::TdxAlignmentVert __fastcall GetTextAlignVert();
	virtual Dxlayoutlookandfeels::TdxLayoutLookAndFeelCaptionOptions* __fastcall GetOptions();
	virtual Cxcustomcanvas::TcxRotationAngle __fastcall GetRotationAngle();
	virtual int __fastcall GetSpaceBetweenImageText();
	virtual void __fastcall DoSetOffset(const System::Types::TPoint &AValue, const System::Types::TPoint &ADiff);
	virtual System::Types::TRect __fastcall GetContentOffsets();
	virtual void __fastcall DoAssignBounds(TdxCustomLayoutElementViewInfo* ASource);
	virtual bool __fastcall CanDoCaptionClick(int X, int Y);
	virtual bool __fastcall IsEllipsisAllowed(bool AForDrawing = false);
	virtual bool __fastcall IsWidthFixed();
	virtual bool __fastcall IsMultiLine();
	bool __fastcall IsNeedSpaceBetweenImageText();
	virtual bool __fastcall IsPointInHotTrackBounds(const System::Types::TPoint &P);
	bool __fastcall IsTextFormatted();
	virtual bool __fastcall IsTextUnderlined();
	__property Cxgraphics::TcxCanvas* Canvas = {read=GetCanvas};
	__property Dxformattedtext::TdxFormattedText* FormattedText = {read=GetFormattedText};
	__property System::Types::TRect HotTrackBounds = {read=GetHotTrackBounds};
	__property Dxlayoutlookandfeels::TdxLayoutHotTrackStyles HotTrackStyles = {read=GetHotTrackStyles, nodefault};
	
public:
	__fastcall virtual TdxCustomLayoutItemCaptionViewInfo(TdxCustomLayoutItemViewInfo* AItemViewInfo);
	virtual void __fastcall Calculate(const System::Types::TRect &ABounds);
	virtual int __fastcall CalculateHeight();
	virtual int __fastcall CalculateWidth();
	bool __fastcall IsImageVisible();
	bool __fastcall IsTextVisible();
	__property System::Classes::TAlignment AlignHorz = {read=GetTextAlignHorz, nodefault};
	__property Dxlayoutcommon::TdxAlignmentVert AlignVert = {read=GetTextAlignVert, nodefault};
	__property System::Uitypes::TColor Color = {read=GetColor, nodefault};
	__property Vcl::Stdctrls::TEllipsisPosition EllipsisPosition = {read=FEllipsisPosition, nodefault};
	__property Vcl::Graphics::TFont* Font = {read=GetFont};
	__property bool HotTracked = {read=FHotTracked, write=SetHotTracked, nodefault};
	__property System::Types::TRect ImageAreaBounds = {read=FImageAreaBounds};
	__property int ImageHeight = {read=GetImageHeight, nodefault};
	__property int ImageWidth = {read=GetImageWidth, nodefault};
	__property Dxlayoutlookandfeels::TdxLayoutLookAndFeelCaptionOptions* Options = {read=GetOptions};
	__property System::UnicodeString Text = {read=GetText};
	__property System::Types::TRect TextAreaBounds = {read=FTextAreaBounds};
	__property System::Uitypes::TColor TextColor = {read=GetTextColor, nodefault};
	__property TdxCaptionLayout TextLayout = {read=FTextLayout, nodefault};
	__property System::UnicodeString VisibleText = {read=GetVisibleText};
	__property bool WordWrap = {read=FWordWrap, nodefault};
public:
	/* TdxCustomLayoutItemElementViewInfo.Destroy */ inline __fastcall virtual ~TdxCustomLayoutItemCaptionViewInfo() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TdxCustomLayoutItemCaptionViewInfoClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomLayoutItemViewData : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TdxCustomLayoutItem* FItem;
	Dxcoreclasses::TcxFreeNotificator* FNotifyComponent;
	TdxLayoutItemViewDataList* FOwner;
	TdxCustomLayoutItemViewInfo* FViewInfo;
	void __fastcall FreeNotification(System::Classes::TComponent* AComponent);
	
protected:
	virtual void __fastcall Changed();
	virtual int __fastcall GetSize();
	bool __fastcall ReadBoolean(System::Classes::TStream* AStream);
	void __fastcall WriteBoolean(System::Classes::TStream* AStream, bool AValue);
	__property TdxCustomLayoutItemViewInfo* ViewInfo = {read=FViewInfo, write=FViewInfo};
	
public:
	__fastcall virtual TdxCustomLayoutItemViewData(TdxLayoutItemViewDataList* AOwner, TdxCustomLayoutItem* AItem);
	__fastcall virtual ~TdxCustomLayoutItemViewData();
	virtual void __fastcall Assign(TdxCustomLayoutItemViewData* Source);
	virtual void __fastcall Calculate();
	virtual void __fastcall Load(System::Classes::TStream* AStream);
	virtual void __fastcall Save(System::Classes::TStream* AStream);
	__property TdxCustomLayoutItem* Item = {read=FItem};
	__property TdxLayoutItemViewDataList* Owner = {read=FOwner};
	__property int Size = {read=GetSize, nodefault};
};

#pragma pack(pop)

typedef System::TMetaClass* TdxCustomLayoutItemViewDataClass;

class PASCALIMPLEMENTATION TdxLayoutItemViewDataList : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TdxCustomLayoutItemViewData* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TNotifyEvent FOnChanged;
	HIDESBASE TdxCustomLayoutItemViewData* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TdxCustomLayoutItemViewData* Value);
	
protected:
	void __fastcall Changed();
	
public:
	__property TdxCustomLayoutItemViewData* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property System::Classes::TNotifyEvent OnChanged = {read=FOnChanged, write=FOnChanged};
public:
	/* TObjectList.Create */ inline __fastcall TdxLayoutItemViewDataList()/* overload */ : System::Contnrs::TObjectList() { }
	/* TObjectList.Create */ inline __fastcall TdxLayoutItemViewDataList(bool AOwnsObjects)/* overload */ : System::Contnrs::TObjectList(AOwnsObjects) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TdxLayoutItemViewDataList() { }
	
};


enum DECLSPEC_DENUM TdxLayoutCalcSizeType : unsigned char { cstMin, cstSufficient, cstOriginal };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomLayoutItemViewInfo : public TdxCustomLayoutElementViewInfo
{
	typedef TdxCustomLayoutElementViewInfo inherited;
	
private:
	TdxCustomLayoutItemCaptionViewInfo* FCaptionViewInfo;
	bool FDestroyForbidden;
	Dxcore::TdxDefaultBoolean FHasCaption;
	bool FIsMaxWidth;
	System::StaticArray<int, 4> FOffsets;
	TdxCustomLayoutItemViewData* FViewData;
	TdxLayoutContainerViewInfo* FContainerViewInfo;
	TdxLayoutGroupViewInfo* FParentViewInfo;
	TdxCustomLayoutItemElementViewInfo* FElementWithMouse;
	int FTabOrder;
	TdxCustomLayoutItemPainter* FPainter;
	int FWidth;
	int FHeight;
	int FMinWidth;
	int FMinHeight;
	Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* FLayoutLookAndFeel;
	int __fastcall GetMaxHeight();
	int __fastcall GetMaxWidth();
	int __fastcall GetMinHeight();
	int __fastcall GetMinWidth();
	int __fastcall GetUsualHeight();
	int __fastcall GetUsualWidth();
	int __fastcall GetSufficientWidth();
	int __fastcall GetSufficientHeight();
	TdxLayoutRealAlign __fastcall GetAlign();
	TdxLayoutRealAlignHorz __fastcall GetAlignHorz();
	TdxLayoutRealAlignVert __fastcall GetAlignVert();
	System::Types::TRect __fastcall GetBackgroundBounds();
	bool __fastcall GetCanPaint();
	bool __fastcall GetHasMouse();
	TdxCustomLayoutItem* __fastcall GetItem();
	int __fastcall GetOffset(Dxlayoutcommon::TdxLayoutSide ASide);
	int __fastcall GetOffsetsHeight();
	int __fastcall GetOffsetsWidth();
	bool __fastcall GetSelected();
	System::Types::TRect __fastcall GetSelectionArea();
	System::Types::TRect __fastcall GetSelectionBorderRect();
	Dxcore::TRects __fastcall GetSelectableMarkers();
	void __fastcall SetElementWithMouse(TdxCustomLayoutItemElementViewInfo* Value);
	void __fastcall SetHasMouse(bool Value);
	HIDESBASE void __fastcall SetOffset(Dxlayoutcommon::TdxLayoutSide ASide, int Value);
	TdxCustomLayoutItemHitTest* __fastcall CreateHitTest(TdxCustomLayoutItemHitTestClass AHitTestClass, const System::Types::TPoint &P);
	
protected:
	bool FIsValid;
	virtual bool __fastcall CanAssignBounds(TdxCustomLayoutElementViewInfo* ASource);
	virtual void __fastcall DoAssignBounds(TdxCustomLayoutElementViewInfo* ASource);
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &AClientBounds);
	virtual void __fastcall DoSetOffset(const System::Types::TPoint &AValue, const System::Types::TPoint &ADiff);
	virtual bool __fastcall GetIsCustomization();
	virtual Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* __fastcall GetLayoutLookAndFeel();
	virtual bool __fastcall UseRightToLeftAlignment();
	virtual void __fastcall Reset();
	TdxLayoutGroupViewInfo* __fastcall AsGroupViewInfo();
	virtual bool __fastcall AutoAlignControls();
	virtual void __fastcall FreeNotification(System::Classes::TComponent* AComponent);
	virtual void __fastcall CreateViewInfos();
	virtual void __fastcall DestroyViewInfos();
	virtual void __fastcall GetElements(System::Classes::TList* AElements);
	virtual void __fastcall MakeVisible(const System::Types::TRect &ARect, bool AFully);
	void __fastcall MakeFullyVisible();
	virtual void __fastcall PopulateAutoAlignControlList(System::Classes::TList* AList);
	virtual void __fastcall PopulateControlViewInfoList(System::Classes::TList* AControls, System::Classes::TList* AWinControls);
	virtual bool __fastcall CanDrawBackground();
	virtual System::Uitypes::TColor __fastcall GetBackgroundColor();
	virtual TdxCustomLayoutItemCaptionViewInfoClass __fastcall GetCaptionViewInfoClass() = 0 ;
	virtual TdxCustomLayoutItemHitTestClass __fastcall GetHitTestClass() = 0 ;
	virtual TdxCustomLayoutItemPainterClass __fastcall GetPainterClass() = 0 ;
	TdxCustomLayoutItemPainter* __fastcall GetPainter();
	virtual int __fastcall CalculateOffset(Dxlayoutcommon::TdxLayoutSide ASide);
	virtual int __fastcall InternalCalculateHeight();
	virtual int __fastcall InternalCalculateWidth();
	int __fastcall CalculateMinHeight();
	int __fastcall CalculateMinWidth();
	int __fastcall CalculateHeight();
	int __fastcall CalculateWidth();
	virtual int __fastcall DoCalculateHeight(TdxLayoutCalcSizeType ACalcSizeType);
	virtual int __fastcall DoCalculateWidth(TdxLayoutCalcSizeType ACalcSizeType);
	virtual int __fastcall GetAvailableTextAreaWidth();
	virtual int __fastcall GetAvailableTextAreaWidthCorrection();
	virtual void __fastcall SetItemHeight(int AHeight, bool ADirectAccess);
	virtual void __fastcall SetItemWidth(int AWidth, bool ADirectAccess);
	virtual bool __fastcall GetActuallyVisible();
	virtual System::Uitypes::TColor __fastcall GetColor() = 0 ;
	System::Types::TRect __fastcall GetContentBounds();
	virtual System::Uitypes::TCursor __fastcall GetCursor(int X, int Y);
	virtual bool __fastcall GetEnabled();
	virtual System::Types::TRect __fastcall GetFocusRect(Cxgraphics::TcxCanvas* ACanvas);
	virtual System::Types::TRect __fastcall GetHitTestBounds();
	Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeelOptions* __fastcall GetOptions();
	int __fastcall GetMarkerIndex(Dxcore::TRects AMarkers, const System::Types::TPoint &P)/* overload */;
	int __fastcall GetMarkerIndex(const System::Types::TPoint &P)/* overload */;
	virtual int __fastcall GetSelectionBoundsOffset();
	void __fastcall GetSelectionMarkers(/* out */ Dxcore::TRects &ASelectable, /* out */ Dxcore::TRects &ANonSelectable);
	System::Types::TRect __fastcall GetVisibleBounds();
	System::Types::TRect __fastcall GetVisiblePart(const System::Types::TRect &ARect);
	virtual TdxLayoutDropAreaPart __fastcall GetDropAreaPart(System::Types::TPoint &P);
	virtual void __fastcall CustomizationMouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual bool __fastcall DoMouseWheel(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	virtual bool __fastcall IsMouseWheelHandleNeeded(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	virtual void __fastcall MouseLeave();
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Invalidate(const System::Types::TRect &ABounds);
	void __fastcall PaintContent(Cxgraphics::TcxAlphaBitmap* ADestImage, bool ANeedDrawFrame, bool AExtractLayer);
	void __fastcall PaintSelection(Cxgraphics::TcxAlphaBitmap* ABitmap);
	void __fastcall PaintLockedState(Cxgraphics::TcxAlphaBitmap* ABitmap);
	void __fastcall PaintInvisibleState(Cxgraphics::TcxAlphaBitmap* ABitmap);
	virtual void __fastcall PaintSelectionLayer(Cxgraphics::TcxAlphaBitmap* ABitmap, System::Types::TRect &ADrawingRect);
	virtual bool __fastcall ShowHint(Vcl::Controls::THintInfo &AHintInfo);
	virtual int __fastcall GetMaxTabOrder();
	virtual bool __fastcall CanInplaceRename();
	virtual void __fastcall DoInplaceRename();
	void __fastcall InplaceRename();
	virtual System::Types::TRect __fastcall GetInplaceRenameBounds();
	bool __fastcall IsTransparentBackground();
	virtual bool __fastcall HasCaption();
	virtual bool __fastcall HasBorder();
	bool __fastcall IsAvailable();
	virtual bool __fastcall IsExpanded();
	virtual bool __fastcall IsFocused();
	bool __fastcall IsParentExpanded();
	bool __fastcall IsParentLocked();
	bool __fastcall IsParentSelected();
	virtual bool __fastcall IsTransparent();
	bool __fastcall IsDragged();
	bool __fastcall IsDraggedWithParent();
	bool __fastcall IsDragImagePainting();
	bool __fastcall IsGrabbed();
	bool __fastcall IsValid();
	bool __fastcall IsVertical();
	virtual bool __fastcall IsEllipsisAllowed(bool AForDrawing = false);
	bool __fastcall IsHeightLimited();
	virtual bool __fastcall IsWidthLimited();
	virtual bool __fastcall IsWordWrapAllowed();
	__property bool ActuallyVisible = {read=GetActuallyVisible, nodefault};
	__property System::Types::TRect BackgroundBounds = {read=GetBackgroundBounds};
	__property bool CanPaint = {read=GetCanPaint, nodefault};
	__property System::Types::TRect ContentBounds = {read=GetContentBounds};
	__property bool HasMouse = {read=GetHasMouse, write=SetHasMouse, nodefault};
	__property TdxCustomLayoutItemElementViewInfo* ElementWithMouse = {read=FElementWithMouse, write=SetElementWithMouse};
	__property TdxCustomLayoutItem* Item = {read=GetItem};
	__property int OffsetsHeight = {read=GetOffsetsHeight, nodefault};
	__property int OffsetsWidth = {read=GetOffsetsWidth, nodefault};
	__property Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeelOptions* Options = {read=GetOptions};
	__property int TabOrder = {read=FTabOrder, write=FTabOrder, nodefault};
	__property TdxCustomLayoutItemViewData* ViewData = {read=FViewData};
	
public:
	__fastcall virtual TdxCustomLayoutItemViewInfo(TdxLayoutContainerViewInfo* AContainerViewInfo, TdxLayoutGroupViewInfo* AParentViewInfo, TdxCustomLayoutItemViewData* AViewData);
	__fastcall virtual ~TdxCustomLayoutItemViewInfo();
	virtual void __fastcall Calculate(const System::Types::TRect &ABounds);
	void __fastcall Recalculate();
	virtual void __fastcall CalculateInternalTabOrders(int &AAvailableTabOrder);
	virtual void __fastcall CalculateTabOrders(int &AAvailableTabOrder);
	virtual TdxCustomLayoutHitTest* __fastcall GetHitTest(const System::Types::TPoint &P);
	virtual TdxCustomLayoutItem* __fastcall GetItemWithMouse(const System::Types::TPoint &P);
	void __fastcall ResetOffset(Dxlayoutcommon::TdxLayoutSide ASide);
	__property TdxLayoutRealAlign Align = {read=GetAlign};
	__property TdxLayoutRealAlignHorz AlignHorz = {read=GetAlignHorz, nodefault};
	__property TdxLayoutRealAlignVert AlignVert = {read=GetAlignVert, nodefault};
	__property TdxCustomLayoutItemCaptionViewInfo* CaptionViewInfo = {read=FCaptionViewInfo};
	__property System::Uitypes::TColor Color = {read=GetColor, nodefault};
	__property TdxLayoutContainerViewInfo* ContainerViewInfo = {read=FContainerViewInfo};
	__property TdxLayoutGroupViewInfo* ParentViewInfo = {read=FParentViewInfo};
	__property int MaxWidth = {read=GetMaxWidth, nodefault};
	__property int MaxHeight = {read=GetMaxHeight, nodefault};
	__property int MinWidth = {read=GetMinWidth, nodefault};
	__property int MinHeight = {read=GetMinHeight, nodefault};
	__property int UsualWidth = {read=GetUsualWidth, nodefault};
	__property int UsualHeight = {read=GetUsualHeight, nodefault};
	__property int SufficientWidth = {read=GetSufficientWidth, nodefault};
	__property int SufficientHeight = {read=GetSufficientHeight, nodefault};
	__property int Offsets[Dxlayoutcommon::TdxLayoutSide ASide] = {read=GetOffset, write=SetOffset};
	__property bool Selected = {read=GetSelected, nodefault};
	__property System::Types::TRect SelectionBorderRect = {read=GetSelectionBorderRect};
	__property System::Types::TRect SelectionArea = {read=GetSelectionArea};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutBasicItemCaptionViewInfo : public TdxCustomLayoutItemCaptionViewInfo
{
	typedef TdxCustomLayoutItemCaptionViewInfo inherited;
	
public:
	/* TdxCustomLayoutItemCaptionViewInfo.Create */ inline __fastcall virtual TdxLayoutBasicItemCaptionViewInfo(TdxCustomLayoutItemViewInfo* AItemViewInfo) : TdxCustomLayoutItemCaptionViewInfo(AItemViewInfo) { }
	
public:
	/* TdxCustomLayoutItemElementViewInfo.Destroy */ inline __fastcall virtual ~TdxLayoutBasicItemCaptionViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutEmptySpaceItemCaptionViewInfo : public TdxLayoutBasicItemCaptionViewInfo
{
	typedef TdxLayoutBasicItemCaptionViewInfo inherited;
	
protected:
	virtual bool __fastcall CanDoCaptionClick(int X, int Y);
	virtual void __fastcall PrepareCanvas(Cxgraphics::TcxCanvas* ACanvas, bool AForDrawing);
	virtual bool __fastcall IsHotTrackable();
public:
	/* TdxCustomLayoutItemCaptionViewInfo.Create */ inline __fastcall virtual TdxLayoutEmptySpaceItemCaptionViewInfo(TdxCustomLayoutItemViewInfo* AItemViewInfo) : TdxLayoutBasicItemCaptionViewInfo(AItemViewInfo) { }
	
public:
	/* TdxCustomLayoutItemElementViewInfo.Destroy */ inline __fastcall virtual ~TdxLayoutEmptySpaceItemCaptionViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutLabeledItemCaptionViewInfo : public TdxLayoutBasicItemCaptionViewInfo
{
	typedef TdxLayoutBasicItemCaptionViewInfo inherited;
	
private:
	HIDESBASE TdxCustomLayoutLabeledItem* __fastcall GetItem();
	TdxLayoutLabeledItemViewInfo* __fastcall GetItemViewInfo();
	
protected:
	virtual System::Types::TSize __fastcall GetTextSize(Cxgraphics::TcxCanvas* ACanvas);
	virtual System::Uitypes::TCursor __fastcall GetCursor(int X, int Y);
	virtual int __fastcall GetSpaceBetweenImageText();
	virtual int __fastcall GetTextAreaWidth();
	virtual bool __fastcall IsWidthFixed();
	virtual bool __fastcall IsMultiLine();
	__property TdxCustomLayoutLabeledItem* Item = {read=GetItem};
	__property TdxLayoutLabeledItemViewInfo* ItemViewInfo = {read=GetItemViewInfo};
	
public:
	__fastcall virtual TdxLayoutLabeledItemCaptionViewInfo(TdxCustomLayoutItemViewInfo* AItemViewInfo);
	virtual int __fastcall CalculateMinWidth();
public:
	/* TdxCustomLayoutItemElementViewInfo.Destroy */ inline __fastcall virtual ~TdxLayoutLabeledItemCaptionViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutControlItemCaptionViewInfo : public TdxLayoutLabeledItemCaptionViewInfo
{
	typedef TdxLayoutLabeledItemCaptionViewInfo inherited;
	
private:
	HIDESBASE TdxLayoutControlItem* __fastcall GetItem();
	HIDESBASE TdxLayoutControlItemViewInfo* __fastcall GetItemViewInfo();
	
protected:
	virtual int __fastcall GetTextAreaWidth();
	__property TdxLayoutControlItem* Item = {read=GetItem};
	__property TdxLayoutControlItemViewInfo* ItemViewInfo = {read=GetItemViewInfo};
public:
	/* TdxLayoutLabeledItemCaptionViewInfo.Create */ inline __fastcall virtual TdxLayoutControlItemCaptionViewInfo(TdxCustomLayoutItemViewInfo* AItemViewInfo) : TdxLayoutLabeledItemCaptionViewInfo(AItemViewInfo) { }
	
public:
	/* TdxCustomLayoutItemElementViewInfo.Destroy */ inline __fastcall virtual ~TdxLayoutControlItemCaptionViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutItemCaptionViewInfo : public TdxLayoutControlItemCaptionViewInfo
{
	typedef TdxLayoutControlItemCaptionViewInfo inherited;
	
private:
	HIDESBASE TdxLayoutItem* __fastcall GetItem();
	HIDESBASE TdxLayoutItemViewInfo* __fastcall GetItemViewInfo();
	
protected:
	__property TdxLayoutItem* Item = {read=GetItem};
	__property TdxLayoutItemViewInfo* ItemViewInfo = {read=GetItemViewInfo};
public:
	/* TdxLayoutLabeledItemCaptionViewInfo.Create */ inline __fastcall virtual TdxLayoutItemCaptionViewInfo(TdxCustomLayoutItemViewInfo* AItemViewInfo) : TdxLayoutControlItemCaptionViewInfo(AItemViewInfo) { }
	
public:
	/* TdxCustomLayoutItemElementViewInfo.Destroy */ inline __fastcall virtual ~TdxLayoutItemCaptionViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutCellItemCellViewInfo : public TdxCustomLayoutItemElementViewInfo
{
	typedef TdxCustomLayoutItemElementViewInfo inherited;
	
protected:
	virtual bool __fastcall GetVisible();
	
public:
	virtual int __fastcall CalculateMinHeight();
	virtual int __fastcall CalculateMinWidth();
	virtual int __fastcall CalculateHeight();
	virtual int __fastcall CalculateWidth();
public:
	/* TdxCustomLayoutItemElementViewInfo.Create */ inline __fastcall virtual TdxLayoutCellItemCellViewInfo(TdxCustomLayoutItemViewInfo* AItemViewInfo) : TdxCustomLayoutItemElementViewInfo(AItemViewInfo) { }
	/* TdxCustomLayoutItemElementViewInfo.Destroy */ inline __fastcall virtual ~TdxLayoutCellItemCellViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutControlItemControlViewInfo : public TdxLayoutCellItemCellViewInfo
{
	typedef TdxLayoutCellItemCellViewInfo inherited;
	
private:
	System::Types::TRect FControlBounds;
	System::Types::TRect FControlWindowRect;
	System::Types::TSize FPrevControlSize;
	System::Uitypes::TColor __fastcall GetBorderColor();
	Dxlayoutlookandfeels::TdxLayoutBorderStyle __fastcall GetBorderStyle();
	HIDESBASE TdxLayoutControlItem* __fastcall GetItem();
	TdxLayoutControlItemViewInfo* __fastcall GetItemViewInfo();
	bool __fastcall GetOpaqueControl();
	
protected:
	virtual void __fastcall DoSetOffset(const System::Types::TPoint &AValue, const System::Types::TPoint &ADiff);
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &AClientBounds);
	virtual TdxLayoutRealAlignHorz __fastcall GetLayoutAlignHorz();
	virtual TdxLayoutRealAlignVert __fastcall GetLayoutAlignVert();
	virtual bool __fastcall GetVisible();
	void __fastcall CalculateControlBounds(const System::Types::TRect &AAvailableBounds);
	virtual void __fastcall CalculateExactBounds(const System::Types::TRect &AAvailableBounds);
	virtual int __fastcall GetBorderWidth(Dxlayoutcommon::TdxLayoutSide ASide);
	virtual int __fastcall GetControlAreaHeight(int AControlHeight);
	virtual int __fastcall GetControlAreaWidth(int AControlWidth);
	virtual System::Types::TSize __fastcall GetOriginalControlSize();
	virtual bool __fastcall HasBorder();
	__property int BorderWidths[Dxlayoutcommon::TdxLayoutSide ASide] = {read=GetBorderWidth};
	__property TdxLayoutControlItem* Item = {read=GetItem};
	__property TdxLayoutControlItemViewInfo* ItemViewInfo = {read=GetItemViewInfo};
	
public:
	virtual void __fastcall CalculateInternalTabOrder(int &AAvailableTabOrder);
	virtual void __fastcall CalculateTabOrder(int &AAvailableTabOrder);
	virtual int __fastcall CalculateMinHeight();
	virtual int __fastcall CalculateMinWidth();
	virtual int __fastcall CalculateHeight();
	virtual int __fastcall CalculateWidth();
	__property System::Uitypes::TColor BorderColor = {read=GetBorderColor, nodefault};
	__property Dxlayoutlookandfeels::TdxLayoutBorderStyle BorderStyle = {read=GetBorderStyle, nodefault};
	__property System::Types::TRect ControlBounds = {read=FControlBounds};
	__property bool OpaqueControl = {read=GetOpaqueControl, nodefault};
public:
	/* TdxCustomLayoutItemElementViewInfo.Create */ inline __fastcall virtual TdxLayoutControlItemControlViewInfo(TdxCustomLayoutItemViewInfo* AItemViewInfo) : TdxLayoutCellItemCellViewInfo(AItemViewInfo) { }
	/* TdxCustomLayoutItemElementViewInfo.Destroy */ inline __fastcall virtual ~TdxLayoutControlItemControlViewInfo() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TdxLayoutControlItemControlViewInfoClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutItemControlViewInfo : public TdxLayoutControlItemControlViewInfo
{
	typedef TdxLayoutControlItemControlViewInfo inherited;
	
private:
	Vcl::Controls::TControl* __fastcall GetControl();
	HIDESBASE TdxLayoutItem* __fastcall GetItem();
	
protected:
	__property TdxLayoutItem* Item = {read=GetItem};
	
public:
	virtual void __fastcall CalculateTabOrder(int &AAvailableTabOrder);
	__property Vcl::Controls::TControl* Control = {read=GetControl};
public:
	/* TdxCustomLayoutItemElementViewInfo.Create */ inline __fastcall virtual TdxLayoutItemControlViewInfo(TdxCustomLayoutItemViewInfo* AItemViewInfo) : TdxLayoutControlItemControlViewInfo(AItemViewInfo) { }
	/* TdxCustomLayoutItemElementViewInfo.Destroy */ inline __fastcall virtual ~TdxLayoutItemControlViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutBasicItemViewInfo : public TdxCustomLayoutItemViewInfo
{
	typedef TdxCustomLayoutItemViewInfo inherited;
	
protected:
	virtual TdxCustomLayoutItemCaptionViewInfoClass __fastcall GetCaptionViewInfoClass();
	virtual TdxCustomLayoutItemHitTestClass __fastcall GetHitTestClass();
	virtual TdxCustomLayoutItemPainterClass __fastcall GetPainterClass();
	virtual System::Uitypes::TColor __fastcall GetColor();
	virtual bool __fastcall IsTransparent();
public:
	/* TdxCustomLayoutItemViewInfo.Create */ inline __fastcall virtual TdxLayoutBasicItemViewInfo(TdxLayoutContainerViewInfo* AContainerViewInfo, TdxLayoutGroupViewInfo* AParentViewInfo, TdxCustomLayoutItemViewData* AViewData) : TdxCustomLayoutItemViewInfo(AContainerViewInfo, AParentViewInfo, AViewData) { }
	/* TdxCustomLayoutItemViewInfo.Destroy */ inline __fastcall virtual ~TdxLayoutBasicItemViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutEmptySpaceItemViewInfo : public TdxLayoutBasicItemViewInfo
{
	typedef TdxLayoutBasicItemViewInfo inherited;
	
protected:
	virtual TdxCustomLayoutItemCaptionViewInfoClass __fastcall GetCaptionViewInfoClass();
	virtual TdxCustomLayoutItemPainterClass __fastcall GetPainterClass();
	virtual int __fastcall DoCalculateHeight(TdxLayoutCalcSizeType ACalcSizeType);
	virtual int __fastcall DoCalculateWidth(TdxLayoutCalcSizeType ACalcSizeType);
	
public:
	virtual void __fastcall Calculate(const System::Types::TRect &ABounds);
public:
	/* TdxCustomLayoutItemViewInfo.Create */ inline __fastcall virtual TdxLayoutEmptySpaceItemViewInfo(TdxLayoutContainerViewInfo* AContainerViewInfo, TdxLayoutGroupViewInfo* AParentViewInfo, TdxCustomLayoutItemViewData* AViewData) : TdxLayoutBasicItemViewInfo(AContainerViewInfo, AParentViewInfo, AViewData) { }
	/* TdxCustomLayoutItemViewInfo.Destroy */ inline __fastcall virtual ~TdxLayoutEmptySpaceItemViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutDirectionalItemViewInfo : public TdxLayoutBasicItemViewInfo
{
	typedef TdxLayoutBasicItemViewInfo inherited;
	
private:
	HIDESBASE TdxLayoutDirectionalItem* __fastcall GetItem();
	
protected:
	virtual int __fastcall DoCalculateHeight(TdxLayoutCalcSizeType ACalcSizeType);
	virtual int __fastcall DoCalculateWidth(TdxLayoutCalcSizeType ACalcSizeType);
	virtual int __fastcall GetItemMinHeight();
	virtual int __fastcall GetItemMinWidth();
	
public:
	virtual void __fastcall Calculate(const System::Types::TRect &ABounds);
	__property TdxLayoutDirectionalItem* Item = {read=GetItem};
public:
	/* TdxCustomLayoutItemViewInfo.Create */ inline __fastcall virtual TdxLayoutDirectionalItemViewInfo(TdxLayoutContainerViewInfo* AContainerViewInfo, TdxLayoutGroupViewInfo* AParentViewInfo, TdxCustomLayoutItemViewData* AViewData) : TdxLayoutBasicItemViewInfo(AContainerViewInfo, AParentViewInfo, AViewData) { }
	/* TdxCustomLayoutItemViewInfo.Destroy */ inline __fastcall virtual ~TdxLayoutDirectionalItemViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutSplitterItemViewInfo : public TdxLayoutDirectionalItemViewInfo
{
	typedef TdxLayoutDirectionalItemViewInfo inherited;
	
private:
	TdxLayoutSplitterItem* __fastcall GetSplitter();
	
protected:
	virtual System::Types::TRect __fastcall GetHitTestBounds();
	virtual TdxCustomLayoutItemHitTestClass __fastcall GetHitTestClass();
	virtual TdxCustomLayoutItemPainterClass __fastcall GetPainterClass();
	virtual int __fastcall GetItemMinHeight();
	virtual int __fastcall GetItemMinWidth();
	virtual void __fastcall StateChanged();
	virtual bool __fastcall IsHotTrackable();
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	
public:
	__property TdxLayoutSplitterItem* Splitter = {read=GetSplitter};
public:
	/* TdxCustomLayoutItemViewInfo.Create */ inline __fastcall virtual TdxLayoutSplitterItemViewInfo(TdxLayoutContainerViewInfo* AContainerViewInfo, TdxLayoutGroupViewInfo* AParentViewInfo, TdxCustomLayoutItemViewData* AViewData) : TdxLayoutDirectionalItemViewInfo(AContainerViewInfo, AParentViewInfo, AViewData) { }
	/* TdxCustomLayoutItemViewInfo.Destroy */ inline __fastcall virtual ~TdxLayoutSplitterItemViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutLabeledItemViewInfo : public TdxLayoutBasicItemViewInfo
{
	typedef TdxLayoutBasicItemViewInfo inherited;
	
private:
	TdxCaptionLayout __fastcall GetCaptionLayout();
	
protected:
	System::Types::TRect FCaptionAreaBounds;
	virtual TdxCustomLayoutItemCaptionViewInfoClass __fastcall GetCaptionViewInfoClass();
	virtual TdxCustomLayoutItemPainterClass __fastcall GetPainterClass();
	void __fastcall InitViewInfoBounds(TdxCustomLayoutItemElementViewInfo* AElementViewInfo, /* out */ System::Types::TRect &ABounds, /* out */ System::Types::TSize &ASize, /* out */ bool &AVisible);
	void __fastcall CalculateCaptionAreaBounds();
	virtual void __fastcall CalculateViewInfoAreaBounds();
	virtual void __fastcall CalculateViewInfoExactBounds();
	virtual int __fastcall GetContentHeight(TdxLayoutCalcSizeType ACalcSizeType);
	virtual int __fastcall GetContentWidth(TdxLayoutCalcSizeType ACalcSizeType);
	virtual int __fastcall GetElementOffsetHorz();
	virtual int __fastcall GetElementOffsetVert();
	virtual System::Types::TRect __fastcall CalculatePadding();
	virtual int __fastcall GetAvailableTextAreaWidthCorrection();
	virtual int __fastcall DoCalculateHeight(TdxLayoutCalcSizeType ACalcSizeType);
	virtual int __fastcall DoCalculateWidth(TdxLayoutCalcSizeType ACalcSizeType);
	virtual bool __fastcall IsWordWrapAllowed();
	virtual void __fastcall DoAssignBounds(TdxCustomLayoutElementViewInfo* ASource);
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &AClientBounds);
	virtual void __fastcall DoSetOffset(const System::Types::TPoint &AValue, const System::Types::TPoint &ADiff);
	__property System::Types::TRect CaptionAreaBounds = {read=FCaptionAreaBounds};
	__property int ElementOffsetHorz = {read=GetElementOffsetHorz, nodefault};
	__property int ElementOffsetVert = {read=GetElementOffsetVert, nodefault};
	
public:
	virtual void __fastcall Calculate(const System::Types::TRect &ABounds);
	__property TdxCaptionLayout CaptionLayout = {read=GetCaptionLayout, nodefault};
	__property ContentBounds;
public:
	/* TdxCustomLayoutItemViewInfo.Create */ inline __fastcall virtual TdxLayoutLabeledItemViewInfo(TdxLayoutContainerViewInfo* AContainerViewInfo, TdxLayoutGroupViewInfo* AParentViewInfo, TdxCustomLayoutItemViewData* AViewData) : TdxLayoutBasicItemViewInfo(AContainerViewInfo, AParentViewInfo, AViewData) { }
	/* TdxCustomLayoutItemViewInfo.Destroy */ inline __fastcall virtual ~TdxLayoutLabeledItemViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutCellItemViewInfo : public TdxLayoutLabeledItemViewInfo
{
	typedef TdxLayoutLabeledItemViewInfo inherited;
	
protected:
	System::Types::TRect FCellAreaBounds;
	TdxCustomLayoutItemElementViewInfo* FCellViewInfo;
	virtual void __fastcall CalculateViewInfoAreaBounds();
	virtual void __fastcall CalculateViewInfoExactBounds();
	virtual void __fastcall CreateViewInfos();
	virtual void __fastcall DestroyViewInfos();
	virtual void __fastcall DoAssignBounds(TdxCustomLayoutElementViewInfo* ASource);
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &AClientBounds);
	virtual void __fastcall DoSetOffset(const System::Types::TPoint &AValue, const System::Types::TPoint &ADiff);
	virtual int __fastcall GetAvailableTextAreaWidthCorrection();
	virtual int __fastcall GetContentHeight(TdxLayoutCalcSizeType ACalcSizeType);
	virtual int __fastcall GetContentWidth(TdxLayoutCalcSizeType ACalcSizeType);
	virtual void __fastcall GetElements(System::Classes::TList* AElements);
	virtual void __fastcall PopulateAutoAlignControlList(System::Classes::TList* AList);
	virtual bool __fastcall AutoAlignmentCellArea();
	virtual void __fastcall CalculateCellAreaBounds();
	virtual TdxLayoutCellItemCellViewInfoClass __fastcall GetCellViewInfoClass();
	virtual TdxLayoutRealAlignHorz __fastcall GetCellAlignHorz();
	virtual System::Types::TSize __fastcall GetCellSize(TdxLayoutCalcSizeType ACalcSizeType);
	virtual int __fastcall GetCellHeight(TdxLayoutCalcSizeType ACalcSizeType);
	virtual int __fastcall GetCellWidth(TdxLayoutCalcSizeType ACalcSizeType);
	virtual System::Types::TRect __fastcall GetCellOffset();
	virtual int __fastcall GetStandardCellWidth();
	virtual int __fastcall GetTextHeight(TdxLayoutCalcSizeType ACalcSizeType);
	virtual int __fastcall GetTextWidth(TdxLayoutCalcSizeType ACalcSizeType);
	virtual bool __fastcall IsCellVisible();
	__property System::Types::TRect CellAreaBounds = {read=FCellAreaBounds};
	__property TdxCustomLayoutItemElementViewInfo* CellViewInfo = {read=FCellViewInfo};
public:
	/* TdxCustomLayoutItemViewInfo.Create */ inline __fastcall virtual TdxLayoutCellItemViewInfo(TdxLayoutContainerViewInfo* AContainerViewInfo, TdxLayoutGroupViewInfo* AParentViewInfo, TdxCustomLayoutItemViewData* AViewData) : TdxLayoutLabeledItemViewInfo(AContainerViewInfo, AParentViewInfo, AViewData) { }
	/* TdxCustomLayoutItemViewInfo.Destroy */ inline __fastcall virtual ~TdxLayoutCellItemViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutSeparatorItemCaptionViewInfo : public TdxLayoutLabeledItemCaptionViewInfo
{
	typedef TdxLayoutLabeledItemCaptionViewInfo inherited;
	
protected:
	virtual void __fastcall CalculateImageTextAreaBounds();
	virtual Cxcustomcanvas::TcxRotationAngle __fastcall GetRotationAngle();
	virtual System::Classes::TAlignment __fastcall GetTextAlignHorz();
	virtual Dxlayoutcommon::TdxAlignmentVert __fastcall GetTextAlignVert();
	bool __fastcall IsVerticalCaption();
	
public:
	virtual int __fastcall CalculateHeight();
	virtual int __fastcall CalculateWidth();
public:
	/* TdxLayoutLabeledItemCaptionViewInfo.Create */ inline __fastcall virtual TdxLayoutSeparatorItemCaptionViewInfo(TdxCustomLayoutItemViewInfo* AItemViewInfo) : TdxLayoutLabeledItemCaptionViewInfo(AItemViewInfo) { }
	
public:
	/* TdxCustomLayoutItemElementViewInfo.Destroy */ inline __fastcall virtual ~TdxLayoutSeparatorItemCaptionViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutSeparatorItemViewInfo : public TdxLayoutCellItemViewInfo
{
	typedef TdxLayoutCellItemViewInfo inherited;
	
private:
	TdxLayoutSeparatorItem* __fastcall GetSeparator();
	
protected:
	virtual TdxCustomLayoutItemCaptionViewInfoClass __fastcall GetCaptionViewInfoClass();
	virtual TdxCustomLayoutItemPainterClass __fastcall GetPainterClass();
	virtual void __fastcall CalculateViewInfoAreaBounds();
	virtual void __fastcall CalculateViewInfoExactBounds();
	virtual int __fastcall GetCellHeight(TdxLayoutCalcSizeType ACalcSizeType);
	virtual int __fastcall GetCellWidth(TdxLayoutCalcSizeType ACalcSizeType);
	virtual int __fastcall GetContentHeight(TdxLayoutCalcSizeType ACalcSizeType);
	virtual int __fastcall GetContentWidth(TdxLayoutCalcSizeType ACalcSizeType);
	__property System::Types::TRect SeparatorBounds = {read=FCellAreaBounds};
	
public:
	__property TdxLayoutSeparatorItem* Separator = {read=GetSeparator};
public:
	/* TdxCustomLayoutItemViewInfo.Create */ inline __fastcall virtual TdxLayoutSeparatorItemViewInfo(TdxLayoutContainerViewInfo* AContainerViewInfo, TdxLayoutGroupViewInfo* AParentViewInfo, TdxCustomLayoutItemViewData* AViewData) : TdxLayoutCellItemViewInfo(AContainerViewInfo, AParentViewInfo, AViewData) { }
	/* TdxCustomLayoutItemViewInfo.Destroy */ inline __fastcall virtual ~TdxLayoutSeparatorItemViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutImageItemViewInfo : public TdxLayoutCellItemViewInfo
{
	typedef TdxLayoutCellItemViewInfo inherited;
	
private:
	HIDESBASE TdxLayoutImageItem* __fastcall GetItem();
	
protected:
	virtual TdxCustomLayoutItemPainterClass __fastcall GetPainterClass();
	virtual System::Types::TSize __fastcall GetCellSize(TdxLayoutCalcSizeType ACalcSizeType);
	virtual bool __fastcall IsCellVisible();
	
public:
	virtual void __fastcall Calculate(const System::Types::TRect &ABounds);
	__property System::Types::TRect ImageAreaBounds = {read=FCellAreaBounds};
	__property TdxLayoutImageItem* Item = {read=GetItem};
public:
	/* TdxCustomLayoutItemViewInfo.Create */ inline __fastcall virtual TdxLayoutImageItemViewInfo(TdxLayoutContainerViewInfo* AContainerViewInfo, TdxLayoutGroupViewInfo* AParentViewInfo, TdxCustomLayoutItemViewData* AViewData) : TdxLayoutCellItemViewInfo(AContainerViewInfo, AParentViewInfo, AViewData) { }
	/* TdxCustomLayoutItemViewInfo.Destroy */ inline __fastcall virtual ~TdxLayoutImageItemViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomLayoutCheckableItemCaptionViewInfo : public TdxLayoutLabeledItemCaptionViewInfo
{
	typedef TdxLayoutLabeledItemCaptionViewInfo inherited;
	
protected:
	virtual bool __fastcall IsPointInHotTrackBounds(const System::Types::TPoint &P);
	virtual bool __fastcall WantsMouse(int X, int Y);
public:
	/* TdxLayoutLabeledItemCaptionViewInfo.Create */ inline __fastcall virtual TdxCustomLayoutCheckableItemCaptionViewInfo(TdxCustomLayoutItemViewInfo* AItemViewInfo) : TdxLayoutLabeledItemCaptionViewInfo(AItemViewInfo) { }
	
public:
	/* TdxCustomLayoutItemElementViewInfo.Destroy */ inline __fastcall virtual ~TdxCustomLayoutCheckableItemCaptionViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomLayoutCheckableItemViewInfo : public TdxLayoutCellItemViewInfo
{
	typedef TdxLayoutCellItemViewInfo inherited;
	
private:
	HIDESBASE TdxCustomLayoutCheckableItem* __fastcall GetItem();
	
protected:
	virtual bool __fastcall AutoAlignmentCellArea();
	virtual TdxCustomLayoutItemCaptionViewInfoClass __fastcall GetCaptionViewInfoClass();
	virtual System::Types::TSize __fastcall GetCellSize(TdxLayoutCalcSizeType ACalcSizeType);
	virtual bool __fastcall IsHotTrackable();
	virtual bool __fastcall IsFocused();
	virtual void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual bool __fastcall ShowHint(Vcl::Controls::THintInfo &AHintInfo);
	virtual void __fastcall StateChanged();
	virtual TdxLayoutRealAlignHorz __fastcall GetCellAlignHorz();
	virtual System::Types::TSize __fastcall GetCheckAreaSize() = 0 ;
	virtual System::Types::TRect __fastcall GetFocusRect(Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall CorrectFocusRect(System::Types::TRect &AFocusRect);
	__property System::Types::TSize CheckAreaSize = {read=GetCheckAreaSize};
	__property TdxCustomLayoutCheckableItem* Item = {read=GetItem};
	
public:
	virtual void __fastcall CalculateInternalTabOrders(int &AAvailableTabOrder);
	__property System::Types::TRect CheckAreaBounds = {read=FCellAreaBounds};
public:
	/* TdxCustomLayoutItemViewInfo.Create */ inline __fastcall virtual TdxCustomLayoutCheckableItemViewInfo(TdxLayoutContainerViewInfo* AContainerViewInfo, TdxLayoutGroupViewInfo* AParentViewInfo, TdxCustomLayoutItemViewData* AViewData) : TdxLayoutCellItemViewInfo(AContainerViewInfo, AParentViewInfo, AViewData) { }
	/* TdxCustomLayoutItemViewInfo.Destroy */ inline __fastcall virtual ~TdxCustomLayoutCheckableItemViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutCheckBoxItemViewInfo : public TdxCustomLayoutCheckableItemViewInfo
{
	typedef TdxCustomLayoutCheckableItemViewInfo inherited;
	
private:
	HIDESBASE TdxLayoutCheckBoxItem* __fastcall GetItem();
	
protected:
	virtual System::Types::TRect __fastcall GetCellOffset();
	virtual System::Types::TSize __fastcall GetCheckAreaSize();
	virtual TdxCustomLayoutItemPainterClass __fastcall GetPainterClass();
	
public:
	__property TdxLayoutCheckBoxItem* Item = {read=GetItem};
public:
	/* TdxCustomLayoutItemViewInfo.Create */ inline __fastcall virtual TdxLayoutCheckBoxItemViewInfo(TdxLayoutContainerViewInfo* AContainerViewInfo, TdxLayoutGroupViewInfo* AParentViewInfo, TdxCustomLayoutItemViewData* AViewData) : TdxCustomLayoutCheckableItemViewInfo(AContainerViewInfo, AParentViewInfo, AViewData) { }
	/* TdxCustomLayoutItemViewInfo.Destroy */ inline __fastcall virtual ~TdxLayoutCheckBoxItemViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutRadioButtonItemViewInfo : public TdxCustomLayoutCheckableItemViewInfo
{
	typedef TdxCustomLayoutCheckableItemViewInfo inherited;
	
private:
	HIDESBASE TdxLayoutRadioButtonItem* __fastcall GetItem();
	
protected:
	virtual System::Types::TRect __fastcall GetCellOffset();
	virtual System::Types::TSize __fastcall GetCheckAreaSize();
	virtual TdxCustomLayoutItemPainterClass __fastcall GetPainterClass();
	
public:
	__property TdxLayoutRadioButtonItem* Item = {read=GetItem};
public:
	/* TdxCustomLayoutItemViewInfo.Create */ inline __fastcall virtual TdxLayoutRadioButtonItemViewInfo(TdxLayoutContainerViewInfo* AContainerViewInfo, TdxLayoutGroupViewInfo* AParentViewInfo, TdxCustomLayoutItemViewData* AViewData) : TdxCustomLayoutCheckableItemViewInfo(AContainerViewInfo, AParentViewInfo, AViewData) { }
	/* TdxCustomLayoutItemViewInfo.Destroy */ inline __fastcall virtual ~TdxLayoutRadioButtonItemViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutControlItemViewInfo : public TdxLayoutCellItemViewInfo
{
	typedef TdxLayoutCellItemViewInfo inherited;
	
private:
	TdxLayoutControlItemCaptionViewInfo* __fastcall GetCaptionViewInfo();
	TdxLayoutControlItemControlViewInfo* __fastcall GetControlViewInfo();
	HIDESBASE TdxLayoutControlItem* __fastcall GetItem();
	HIDESBASE Dxlayoutlookandfeels::TdxLayoutLookAndFeelItemOptions* __fastcall GetOptions();
	
protected:
	virtual TdxCustomLayoutItemCaptionViewInfoClass __fastcall GetCaptionViewInfoClass();
	virtual TdxLayoutCellItemCellViewInfoClass __fastcall GetCellViewInfoClass();
	virtual TdxLayoutControlItemControlViewInfoClass __fastcall GetControlViewInfoClass();
	virtual TdxCustomLayoutItemPainterClass __fastcall GetPainterClass();
	virtual bool __fastcall AutoAlignmentCellArea();
	virtual int __fastcall GetAvailableTextAreaWidth();
	virtual int __fastcall GetStandardCellWidth();
	virtual TdxLayoutRealAlignHorz __fastcall GetCellAlignHorz();
	virtual System::Types::TSize __fastcall GetCellSize(TdxLayoutCalcSizeType ACalcSizeType);
	virtual int __fastcall GetCellWidth(TdxLayoutCalcSizeType ACalcSizeType);
	virtual int __fastcall GetCellHeight(TdxLayoutCalcSizeType ACalcSizeType);
	virtual bool __fastcall IsCellVisible();
	virtual bool __fastcall HasControl();
	__property System::Types::TRect ControlAreaBounds = {read=FCellAreaBounds};
	__property TdxLayoutControlItem* Item = {read=GetItem};
	__property Dxlayoutlookandfeels::TdxLayoutLookAndFeelItemOptions* Options = {read=GetOptions};
	
public:
	virtual void __fastcall CalculateInternalTabOrders(int &AAvailableTabOrder);
	virtual void __fastcall CalculateTabOrders(int &AAvailableTabOrder);
	__property bool AutoControlAreaAlignment = {read=AutoAlignmentCellArea, nodefault};
	__property TdxLayoutControlItemCaptionViewInfo* CaptionViewInfo = {read=GetCaptionViewInfo};
	__property TdxLayoutControlItemControlViewInfo* ControlViewInfo = {read=GetControlViewInfo};
public:
	/* TdxCustomLayoutItemViewInfo.Create */ inline __fastcall virtual TdxLayoutControlItemViewInfo(TdxLayoutContainerViewInfo* AContainerViewInfo, TdxLayoutGroupViewInfo* AParentViewInfo, TdxCustomLayoutItemViewData* AViewData) : TdxLayoutCellItemViewInfo(AContainerViewInfo, AParentViewInfo, AViewData) { }
	/* TdxCustomLayoutItemViewInfo.Destroy */ inline __fastcall virtual ~TdxLayoutControlItemViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutItemViewInfo : public TdxLayoutControlItemViewInfo
{
	typedef TdxLayoutControlItemViewInfo inherited;
	
private:
	HIDESBASE TdxLayoutItemCaptionViewInfo* __fastcall GetCaptionViewInfo();
	HIDESBASE TdxLayoutItemControlViewInfo* __fastcall GetControlViewInfo();
	HIDESBASE TdxLayoutItem* __fastcall GetItem();
	
protected:
	virtual bool __fastcall CanFocusOnClick(int X, int Y);
	virtual TdxCustomLayoutItemCaptionViewInfoClass __fastcall GetCaptionViewInfoClass();
	virtual TdxLayoutControlItemControlViewInfoClass __fastcall GetControlViewInfoClass();
	virtual TdxCustomLayoutItemHitTestClass __fastcall GetHitTestClass();
	virtual TdxCustomLayoutItemPainterClass __fastcall GetPainterClass();
	virtual void __fastcall PopulateControlViewInfoList(System::Classes::TList* AControls, System::Classes::TList* AWinControls);
	virtual void __fastcall SetItemHeight(int AHeight, bool ADirectAccess);
	virtual void __fastcall SetItemWidth(int AWidth, bool ADirectAccess);
	virtual void __fastcall CustomizationMouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	bool __fastcall PtInDesignSelectorRect(const System::Types::TPoint &P);
	__property TdxLayoutItem* Item = {read=GetItem};
	
public:
	__property TdxLayoutItemCaptionViewInfo* CaptionViewInfo = {read=GetCaptionViewInfo};
	__property TdxLayoutItemControlViewInfo* ControlViewInfo = {read=GetControlViewInfo};
public:
	/* TdxCustomLayoutItemViewInfo.Create */ inline __fastcall virtual TdxLayoutItemViewInfo(TdxLayoutContainerViewInfo* AContainerViewInfo, TdxLayoutGroupViewInfo* AParentViewInfo, TdxCustomLayoutItemViewData* AViewData) : TdxLayoutControlItemViewInfo(AContainerViewInfo, AParentViewInfo, AViewData) { }
	/* TdxCustomLayoutItemViewInfo.Destroy */ inline __fastcall virtual ~TdxLayoutItemViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutGroupCaptionViewInfo : public TdxCustomLayoutItemCaptionViewInfo
{
	typedef TdxCustomLayoutItemCaptionViewInfo inherited;
	
private:
	System::Types::TSize FAvailableTextSizeCache;
	bool FCanClickOnCaption;
	Dxlayoutcommon::TdxLayoutSide __fastcall GetCaptionSide();
	TdxLayoutGroupViewInfo* __fastcall GetGroupViewInfo();
	
protected:
	int __fastcall GetAvailableHeight();
	int __fastcall GetAvailableWidth();
	int __fastcall GetAvailableHorzTextHeight();
	int __fastcall GetAvailableHorzTextWidth();
	int __fastcall GetAvailableTextHeight();
	int __fastcall GetAvailableTextWidth();
	virtual void __fastcall CalculateImageTextAreaBounds();
	virtual int __fastcall CalculateTextFlags(bool AForDrawing = true);
	virtual void __fastcall MouseEnter();
	virtual void __fastcall MouseLeave();
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall PrepareCanvas(Cxgraphics::TcxCanvas* ACanvas, bool AForDrawing);
	virtual void __fastcall StateChanged();
	virtual System::Classes::TAlignment __fastcall GetTextAlignHorz();
	virtual Dxlayoutcommon::TdxAlignmentVert __fastcall GetTextAlignVert();
	virtual System::Uitypes::TColor __fastcall GetColor();
	virtual System::Types::TSize __fastcall GetContentOffsetSize();
	virtual System::Types::TRect __fastcall GetContentOffsets();
	virtual System::Types::TSize __fastcall GetTextSize(Cxgraphics::TcxCanvas* ACanvas);
	virtual Cxcustomcanvas::TcxRotationAngle __fastcall GetRotationAngle();
	bool __fastcall IsVerticalCaption();
	__property bool CanClickOnCaption = {read=FCanClickOnCaption, nodefault};
	__property Dxlayoutcommon::TdxLayoutSide CaptionSide = {read=GetCaptionSide, nodefault};
	__property TdxLayoutGroupViewInfo* GroupViewInfo = {read=GetGroupViewInfo};
	
public:
	virtual int __fastcall CalculateMinHeight();
	virtual int __fastcall CalculateMinWidth();
	virtual int __fastcall CalculateHeight();
	virtual int __fastcall CalculateWidth();
public:
	/* TdxCustomLayoutItemCaptionViewInfo.Create */ inline __fastcall virtual TdxLayoutGroupCaptionViewInfo(TdxCustomLayoutItemViewInfo* AItemViewInfo) : TdxCustomLayoutItemCaptionViewInfo(AItemViewInfo) { }
	
public:
	/* TdxCustomLayoutItemElementViewInfo.Destroy */ inline __fastcall virtual ~TdxLayoutGroupCaptionViewInfo() { }
	
};

#pragma pack(pop)

struct DECLSPEC_DRECORD TItemInfo
{
public:
	TdxCustomLayoutItemViewInfo* ViewInfo;
	TdxLayoutAlignAbs MajorAlign;
	TdxLayoutAlignAbs MinorAlign;
	int OriginalMajorSize;
	int SufficientMajorSize;
	int CalculatedMajorSize;
	int MinMajorSize;
	int MaxMajorSize;
	int SufficientMinorSize;
	int OriginalMinorSize;
	TdxAbsRect AbsBounds;
	System::Types::TRect PrevBounds;
	bool Calculated;
};


typedef System::DynamicArray<TItemInfo> TItemInfos;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutGroupViewInfoSpecific : public Dxcoreclasses::TcxIUnknownObject
{
	typedef Dxcoreclasses::TcxIUnknownObject inherited;
	
private:
	TdxLayoutGroupViewInfo* FGroupViewInfo;
	TItemInfos FItemInfos;
	System::Types::TPoint FOffset;
	void __fastcall CalculateItemViewInfos();
	TdxLayoutContainer* __fastcall GetContainer();
	TdxCustomLayoutGroup* __fastcall GetGroup();
	int __fastcall GetItemOffset();
	TdxCustomLayoutItemViewInfo* __fastcall GetItemViewInfo(int Index);
	int __fastcall GetItemViewInfoCount();
	TdxLayoutDirection __fastcall GetLayoutDirection();
	
protected:
	virtual bool __fastcall AllowMajorScroll();
	virtual bool __fastcall AllowMinorScroll();
	TdxAbsRect __fastcall GetAbsRect(const System::Types::TRect &R);
	TdxAbsPoint __fastcall GetAbsPoint(const System::Types::TPoint &P);
	TdxAbsPoint __fastcall GetAbsSize(const System::Types::TSize &ASize);
	virtual System::Types::TRect __fastcall GetRectFromAbsRect(const TdxAbsRect &R);
	virtual int __fastcall GetMajorValue(const System::Types::TPoint &P)/* overload */;
	virtual int __fastcall GetMinorValue(const System::Types::TPoint &P)/* overload */;
	virtual int __fastcall GetMajorValue(const System::Types::TSize &ASize)/* overload */;
	virtual int __fastcall GetMinorValue(const System::Types::TSize &ASize)/* overload */;
	virtual TdxLayoutAlignAbs __fastcall GetMajorAlign(const TdxLayoutRealAlign AAlign);
	virtual TdxLayoutAlignAbs __fastcall GetMinorAlign(const TdxLayoutRealAlign AAlign);
	virtual void __fastcall SetMajorNear(System::Types::TRect &R, int AValue);
	virtual void __fastcall SetMajorFar(System::Types::TRect &R, int AValue);
	virtual void __fastcall SetMajorAlign(TdxLayoutRealAlign &AAlign, TdxLayoutAlignAbs AValue);
	virtual void __fastcall SetMinorAlign(TdxLayoutRealAlign &AAlign, TdxLayoutAlignAbs AValue);
	virtual void __fastcall CorrectMajorAlignForLocale(TdxLayoutRealAlign &AAlign);
	virtual void __fastcall CorrectMinorAlignForLocale(TdxLayoutRealAlign &AAlign);
	virtual bool __fastcall CanDrawSpecificControls();
	virtual void __fastcall DrawSpecificControls(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall CalculateItemsAreaBounds(System::Types::TRect &AItemsAreaBounds);
	virtual void __fastcall CalculateItemsBounds(const System::Types::TRect &AItemsAreaBounds);
	virtual void __fastcall CalculateItemsMajorBounds(const TdxAbsRect &AItemsAreaBounds);
	virtual void __fastcall CalculateItemsMinorBounds(const TdxAbsRect &AItemsAreaBounds);
	virtual void __fastcall CalculateInternalTabOrders(int &ATabOrder);
	virtual void __fastcall CalculateOffsets();
	virtual void __fastcall CorrectItemsAreaBounds(System::Types::TRect &AItemsAreaBounds);
	virtual void __fastcall CorrectDropAreaPart(const System::Types::TPoint &P, TdxLayoutDropAreaPart &AAreaPart);
	TdxCustomLayoutItem* __fastcall GetDropExactItem(const System::Types::TPoint &P);
	TdxCustomLayoutItem* __fastcall GetDropExactItemInRow(const System::Types::TPoint &P);
	TdxCustomLayoutItem* __fastcall GetDropNearestItem(const System::Types::TPoint &P);
	virtual System::Types::TRect __fastcall CutItemRect(TdxCustomLayoutItem* AItem, const System::Types::TRect &R) = 0 ;
	virtual TdxLayoutActionType __fastcall GetDropActionType(TdxLayoutDropAreaPart AAreaPart) = 0 ;
	TdxLayoutRealAlign __fastcall GetDropAlignOutsideArea(const TdxLayoutRealAlign ADefaultAlign, const System::Types::TRect &ABounds, const TdxLayoutDragDropInfo &ADropAreaInfo);
	TdxLayoutRealAlign __fastcall GetDropAlignOutsideItem(const TdxLayoutDragDropInfo &ADropAreaInfo);
	TdxLayoutRealAlign __fastcall GetDropAlignInsideArea(const TdxLayoutRealAlign ADefaultAlign, const System::Types::TRect &ABounds, const TdxLayoutDragDropInfo &ADropAreaInfo);
	virtual TdxLayoutDropAreaPart __fastcall GetDropAreaPart(System::Types::TPoint &P);
	virtual System::Types::TRect __fastcall GetDropExpectedBounds(const TdxLayoutDragDropInfo &ADropAreaInfo);
	virtual TdxLayoutRealAlign __fastcall GetDropExpectedAlign(const TdxLayoutDragDropInfo &ADropAreaInfo);
	virtual System::Types::TRect __fastcall GetDropRectOutsideItem(const TdxLayoutDragDropInfo &ADropAreaInfo);
	System::Types::TRect __fastcall GetDropRectInsideRect(const System::Types::TRect &ARect, const TdxLayoutDragDropInfo &ADropAreaInfo);
	virtual bool __fastcall IsDropPositionHasProperAlign(const TdxLayoutDragDropInfo &ADropAreaInfo);
	virtual bool __fastcall IsDropPositionHasOppositeAlign(const TdxLayoutDragDropInfo &ADropAreaInfo);
	virtual System::Types::TRect __fastcall GetBetweenItemsDropArea(const System::Types::TPoint &P);
	virtual System::Types::TRect __fastcall GetLastChildDropArea();
	System::Types::TRect __fastcall GetNewLayoutDropArea(TdxCustomLayoutItem* AItem);
	System::Types::TRect __fastcall GetNewLayoutExtendedDropArea(TdxCustomLayoutItem* AItem);
	System::Types::TPoint __fastcall GetDropNearestPoint(const System::Types::TPoint &P);
	System::Types::TRect __fastcall GetItemEnlargedBounds(TdxCustomLayoutItem* AItem);
	System::Types::TRect __fastcall GetItemExtendedBounds(TdxCustomLayoutItem* AItem);
	int __fastcall GetMaxItemsMajorSize(bool AIsMinWidth);
	int __fastcall GetMaxItemsMinorSize(bool AIsMinSize);
	virtual int __fastcall GetMinorSize(TdxLayoutCalcSizeType ACalcSizeType);
	virtual int __fastcall GetMajorSize(TdxLayoutCalcSizeType ACalcSizeType);
	virtual int __fastcall GetItemOriginalMinorSize(TdxCustomLayoutItemViewInfo* AViewInfo) = 0 ;
	virtual int __fastcall GetItemOriginalMajorSize(TdxCustomLayoutItemViewInfo* AViewInfo) = 0 ;
	virtual int __fastcall GetItemSufficientMinorSize(TdxCustomLayoutItemViewInfo* AViewInfo) = 0 ;
	virtual int __fastcall GetItemSufficientMajorSize(TdxCustomLayoutItemViewInfo* AViewInfo) = 0 ;
	virtual int __fastcall GetItemMinMinorSize(TdxCustomLayoutItemViewInfo* AViewInfo) = 0 ;
	virtual int __fastcall GetItemMinMajorSize(TdxCustomLayoutItemViewInfo* AViewInfo) = 0 ;
	virtual int __fastcall GetItemMaxMinorSize(TdxCustomLayoutItemViewInfo* AViewInfo) = 0 ;
	virtual int __fastcall GetItemMaxMajorSize(TdxCustomLayoutItemViewInfo* AViewInfo) = 0 ;
	virtual int __fastcall GetItemsAreaOffset(Dxlayoutcommon::TdxLayoutSide ASide);
	bool __fastcall IsItemMajorSizeUsual(TdxCustomLayoutItemViewInfo* AViewInfo);
	bool __fastcall IsItemMinorSizeUsual(TdxCustomLayoutItemViewInfo* AViewInfo);
	virtual bool __fastcall IsMajorSizeFixed();
	virtual bool __fastcall IsMinorSizeFixed();
	bool __fastcall IsPopupScrollBars();
	bool __fastcall IsTouchScrollUIMode();
	virtual void __fastcall AddSelectionControls();
	virtual void __fastcall RemoveSelectionControls();
	virtual bool __fastcall CanFocus();
	virtual bool __fastcall CanFocusOnClick(int X, int Y);
	virtual void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	virtual void __fastcall InitializeMajorScrollBar(int AContentSize, int AClientSize);
	virtual void __fastcall InitializeMinorScrollBar(int AContentSize, int AClientSize);
	virtual void __fastcall CreateSpecificControls();
	virtual void __fastcall DestroySpecificControls();
	virtual void __fastcall CreateViewInfos();
	virtual void __fastcall DestroyViewInfos();
	virtual void __fastcall GetElements(System::Classes::TList* AElements);
	void __fastcall AssignBounds(TdxLayoutGroupViewInfoSpecific* ASource);
	virtual bool __fastcall CanAssignBounds(TdxLayoutGroupViewInfoSpecific* ASource);
	virtual void __fastcall DoAssignBounds(TdxLayoutGroupViewInfoSpecific* ASource);
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &AClientBounds);
	virtual void __fastcall MakeVisible(const System::Types::TRect &ARect, bool AFully);
	int __fastcall GetNewScrollPosMajor(const System::Types::TRect &ARect, bool AFully, int AScrollPos);
	int __fastcall GetNewScrollPosMinor(const System::Types::TRect &ARect, bool AFully, int AScrollPos);
	virtual void __fastcall SetOffset(const System::Types::TPoint &Value);
	virtual void __fastcall Reset();
	__property TdxLayoutContainer* Container = {read=GetContainer};
	__property TdxCustomLayoutGroup* Group = {read=GetGroup};
	__property TdxLayoutGroupViewInfo* GroupViewInfo = {read=FGroupViewInfo};
	__property int ItemOffset = {read=GetItemOffset, nodefault};
	__property int ItemViewInfoCount = {read=GetItemViewInfoCount, nodefault};
	__property TdxCustomLayoutItemViewInfo* ItemViewInfos[int Index] = {read=GetItemViewInfo};
	__property TdxLayoutDirection LayoutDirection = {read=GetLayoutDirection, nodefault};
	__property System::Types::TPoint Offset = {read=FOffset, write=SetOffset};
	
public:
	__fastcall virtual TdxLayoutGroupViewInfoSpecific(TdxLayoutGroupViewInfo* AGroupViewInfo);
	__fastcall virtual ~TdxLayoutGroupViewInfoSpecific();
	virtual void __fastcall Calculate(const System::Types::TRect &AItemsAreaBounds);
	virtual int __fastcall GetItemsAreaHeight(TdxLayoutCalcSizeType ACalcSizeType);
	virtual int __fastcall GetItemsAreaWidth(TdxLayoutCalcSizeType ACalcSizeType);
	virtual bool __fastcall IsAtInsertionPos(const System::Types::TRect &R, const System::Types::TPoint &P) = 0 ;
	virtual bool __fastcall AllowDrawChild(TdxCustomLayoutItemViewInfo* AChildViewInfo);
	virtual bool __fastcall AllowChildHasBorder();
	virtual System::Types::TRect __fastcall GetChildInplaceRenameBounds(TdxCustomLayoutItemViewInfo* AChildViewInfo);
	virtual TdxLayoutItemControlAreaAlignment __fastcall GetDefaultItemControlAreaAlignment();
	virtual bool __fastcall ProcessDialogChar(System::Word ACharCode);
	virtual bool __fastcall ProcessDialogKey(System::Word ACharCode, int AKeyData, TdxCustomLayoutItem* AFocusedItem);
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

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutGroupViewInfoHorizontalSpecific : public TdxLayoutGroupViewInfoSpecific
{
	typedef TdxLayoutGroupViewInfoSpecific inherited;
	
protected:
	virtual void __fastcall CalculateItemsBounds(const System::Types::TRect &AItemsAreaBounds);
	virtual bool __fastcall AllowMajorScroll();
	virtual bool __fastcall AllowMinorScroll();
	virtual void __fastcall InitializeMajorScrollBar(int AContentSize, int AClientSize);
	virtual void __fastcall InitializeMinorScrollBar(int AContentSize, int AClientSize);
	virtual System::Types::TRect __fastcall CutItemRect(TdxCustomLayoutItem* AItem, const System::Types::TRect &R);
	virtual System::Types::TRect __fastcall GetLastChildDropArea();
	virtual TdxLayoutActionType __fastcall GetDropActionType(TdxLayoutDropAreaPart AAreaPart);
	virtual int __fastcall GetItemOriginalMajorSize(TdxCustomLayoutItemViewInfo* AViewInfo);
	virtual int __fastcall GetItemOriginalMinorSize(TdxCustomLayoutItemViewInfo* AViewInfo);
	virtual int __fastcall GetItemSufficientMinorSize(TdxCustomLayoutItemViewInfo* AViewInfo);
	virtual int __fastcall GetItemSufficientMajorSize(TdxCustomLayoutItemViewInfo* AViewInfo);
	virtual int __fastcall GetItemMinMinorSize(TdxCustomLayoutItemViewInfo* AViewInfo);
	virtual int __fastcall GetItemMinMajorSize(TdxCustomLayoutItemViewInfo* AViewInfo);
	virtual int __fastcall GetItemMaxMinorSize(TdxCustomLayoutItemViewInfo* AViewInfo);
	virtual int __fastcall GetItemMaxMajorSize(TdxCustomLayoutItemViewInfo* AViewInfo);
	virtual int __fastcall GetItemsAreaOffset(Dxlayoutcommon::TdxLayoutSide ASide);
	virtual bool __fastcall IsMajorSizeFixed();
	virtual bool __fastcall IsMinorSizeFixed();
	
public:
	virtual bool __fastcall IsAtInsertionPos(const System::Types::TRect &R, const System::Types::TPoint &P);
public:
	/* TdxLayoutGroupViewInfoSpecific.Create */ inline __fastcall virtual TdxLayoutGroupViewInfoHorizontalSpecific(TdxLayoutGroupViewInfo* AGroupViewInfo) : TdxLayoutGroupViewInfoSpecific(AGroupViewInfo) { }
	/* TdxLayoutGroupViewInfoSpecific.Destroy */ inline __fastcall virtual ~TdxLayoutGroupViewInfoHorizontalSpecific() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutGroupViewInfoVerticalSpecific : public TdxLayoutGroupViewInfoSpecific
{
	typedef TdxLayoutGroupViewInfoSpecific inherited;
	
protected:
	virtual bool __fastcall AllowMajorScroll();
	virtual bool __fastcall AllowMinorScroll();
	virtual void __fastcall InitializeMajorScrollBar(int AContentSize, int AClientSize);
	virtual void __fastcall InitializeMinorScrollBar(int AContentSize, int AClientSize);
	virtual System::Types::TRect __fastcall GetRectFromAbsRect(const TdxAbsRect &R);
	virtual int __fastcall GetMajorValue(const System::Types::TPoint &P)/* overload */;
	virtual int __fastcall GetMinorValue(const System::Types::TPoint &P)/* overload */;
	virtual int __fastcall GetMajorValue(const System::Types::TSize &ASize)/* overload */;
	virtual int __fastcall GetMinorValue(const System::Types::TSize &ASize)/* overload */;
	virtual TdxLayoutAlignAbs __fastcall GetMajorAlign(const TdxLayoutRealAlign AAlign);
	virtual TdxLayoutAlignAbs __fastcall GetMinorAlign(const TdxLayoutRealAlign AAlign);
	virtual void __fastcall SetMajorNear(System::Types::TRect &R, int AValue);
	virtual void __fastcall SetMajorFar(System::Types::TRect &R, int AValue);
	virtual void __fastcall SetMajorAlign(TdxLayoutRealAlign &AAlign, TdxLayoutAlignAbs AValue);
	virtual void __fastcall SetMinorAlign(TdxLayoutRealAlign &AAlign, TdxLayoutAlignAbs AValue);
	virtual void __fastcall CorrectMajorAlignForLocale(TdxLayoutRealAlign &AAlign);
	virtual void __fastcall CorrectMinorAlignForLocale(TdxLayoutRealAlign &AAlign);
	virtual System::Types::TRect __fastcall CutItemRect(TdxCustomLayoutItem* AItem, const System::Types::TRect &R);
	virtual System::Types::TRect __fastcall GetLastChildDropArea();
	virtual TdxLayoutActionType __fastcall GetDropActionType(TdxLayoutDropAreaPart AAreaPart);
	virtual bool __fastcall IsDropPositionHasProperAlign(const TdxLayoutDragDropInfo &ADropAreaInfo);
	virtual bool __fastcall IsDropPositionHasOppositeAlign(const TdxLayoutDragDropInfo &ADropAreaInfo);
	virtual int __fastcall GetItemOriginalMajorSize(TdxCustomLayoutItemViewInfo* AViewInfo);
	virtual int __fastcall GetItemOriginalMinorSize(TdxCustomLayoutItemViewInfo* AViewInfo);
	virtual int __fastcall GetItemSufficientMinorSize(TdxCustomLayoutItemViewInfo* AViewInfo);
	virtual int __fastcall GetItemSufficientMajorSize(TdxCustomLayoutItemViewInfo* AViewInfo);
	virtual int __fastcall GetItemMinMinorSize(TdxCustomLayoutItemViewInfo* AViewInfo);
	virtual int __fastcall GetItemMinMajorSize(TdxCustomLayoutItemViewInfo* AViewInfo);
	virtual int __fastcall GetItemMaxMinorSize(TdxCustomLayoutItemViewInfo* AViewInfo);
	virtual int __fastcall GetItemMaxMajorSize(TdxCustomLayoutItemViewInfo* AViewInfo);
	virtual int __fastcall GetItemsAreaOffset(Dxlayoutcommon::TdxLayoutSide ASide);
	virtual bool __fastcall IsMajorSizeFixed();
	virtual bool __fastcall IsMinorSizeFixed();
	
public:
	virtual int __fastcall GetItemsAreaHeight(TdxLayoutCalcSizeType ACalcSizeType);
	virtual int __fastcall GetItemsAreaWidth(TdxLayoutCalcSizeType ACalcSizeType);
	virtual bool __fastcall IsAtInsertionPos(const System::Types::TRect &R, const System::Types::TPoint &P);
public:
	/* TdxLayoutGroupViewInfoSpecific.Create */ inline __fastcall virtual TdxLayoutGroupViewInfoVerticalSpecific(TdxLayoutGroupViewInfo* AGroupViewInfo) : TdxLayoutGroupViewInfoSpecific(AGroupViewInfo) { }
	/* TdxLayoutGroupViewInfoSpecific.Destroy */ inline __fastcall virtual ~TdxLayoutGroupViewInfoVerticalSpecific() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutTabbedController : public Cxpc::TcxCustomTabControlController
{
	typedef Cxpc::TcxCustomTabControlController inherited;
	
protected:
	virtual System::Types::TPoint __fastcall GetClientToScreen(const System::Types::TPoint &APoint);
	virtual System::Types::TPoint __fastcall GetScreenToClient(const System::Types::TPoint &APoint);
public:
	/* TcxCustomTabControlController.Create */ inline __fastcall virtual TdxLayoutTabbedController(System::TObject* AOwner) : Cxpc::TcxCustomTabControlController(AOwner) { }
	/* TcxCustomTabControlController.Destroy */ inline __fastcall virtual ~TdxLayoutTabbedController() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxLayoutTabbedViewInfo : public Cxpc::TcxCustomTabControlViewInfo
{
	typedef Cxpc::TcxCustomTabControlViewInfo inherited;
	
private:
	bool FIsRightToLeftConsider;
	TdxLayoutGroupViewInfo* __fastcall GetGroupViewInfo();
	
protected:
	virtual bool __fastcall ArrowButtonClick(Cxpc::TcxPCNavigatorButton ANavigatorButton);
	virtual int __fastcall DoGetTabIndex();
	virtual void __fastcall DoSetTabIndex(int Value);
	__property TdxLayoutGroupViewInfo* GroupViewInfo = {read=GetGroupViewInfo};
	
public:
	virtual bool __fastcall IsTransparent();
	virtual bool __fastcall UseRightToLeftAlignment();
public:
	/* TcxCustomTabControlViewInfo.Create */ inline __fastcall virtual TdxLayoutTabbedViewInfo(System::TObject* AOwner) : Cxpc::TcxCustomTabControlViewInfo(AOwner) { }
	/* TcxCustomTabControlViewInfo.Destroy */ inline __fastcall virtual ~TdxLayoutTabbedViewInfo() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTabControlElementViewInfo : public TdxCustomLayoutItemElementViewInfo
{
	typedef TdxCustomLayoutItemElementViewInfo inherited;
	
private:
	TdxLayoutTabbedController* FTabController;
	TdxLayoutTabbedViewInfo* FTabViewInfo;
	TdxCustomLayoutGroup* __fastcall GetGroup();
	
protected:
	virtual bool __fastcall GetVisible();
	virtual void __fastcall MouseLeave();
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	__property TdxCustomLayoutGroup* Group = {read=GetGroup};
public:
	/* TdxCustomLayoutItemElementViewInfo.Create */ inline __fastcall virtual TdxTabControlElementViewInfo(TdxCustomLayoutItemViewInfo* AItemViewInfo) : TdxCustomLayoutItemElementViewInfo(AItemViewInfo) { }
	/* TdxCustomLayoutItemElementViewInfo.Destroy */ inline __fastcall virtual ~TdxTabControlElementViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutGroupViewInfoTabbedSpecific : public TdxLayoutGroupViewInfoHorizontalSpecific
{
	typedef TdxLayoutGroupViewInfoHorizontalSpecific inherited;
	
private:
	System::Types::TRect FTabControlBounds;
	TdxTabControlElementViewInfo* FTabControlElementViewInfo;
	TdxTabControlElementViewInfo* FTabControlElementViewInfoOpposite;
	TdxLayoutTabbedController* FTabController;
	Cxpc::TcxPCCustomPainter* FTabPainter;
	System::Types::TPoint FTabSheetContentOffset;
	TdxLayoutTabbedViewInfo* FTabViewInfo;
	bool FTabViewInfoCalculated;
	int FMinContentSize;
	void __fastcall DoCalculateTabControl(const System::Types::TRect &ATabBounds, bool AIsRightToLeftConsider);
	void __fastcall DrawTabControl(Cxgraphics::TcxCanvas* ACanvas);
	TdxLayoutTabbedOptions* __fastcall GetTabbedOptions();
	
protected:
	virtual bool __fastcall CanDrawSpecificControls();
	virtual void __fastcall DrawSpecificControls(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall CalculateItemsAreaBounds(System::Types::TRect &AItemsAreaBounds);
	virtual void __fastcall CalculateItemsMajorBounds(const TdxAbsRect &AItemsAreaBounds);
	virtual void __fastcall CalculateInternalTabOrders(int &ATabOrder);
	virtual void __fastcall CalculateOffsets();
	virtual void __fastcall CalculateTabControl();
	virtual void __fastcall CorrectDropAreaPart(const System::Types::TPoint &P, TdxLayoutDropAreaPart &AAreaPart);
	virtual TdxLayoutActionType __fastcall GetDropActionType(TdxLayoutDropAreaPart AAreaPart);
	virtual TdxLayoutDropAreaPart __fastcall GetDropAreaPart(System::Types::TPoint &P);
	virtual TdxLayoutRealAlign __fastcall GetDropExpectedAlign(const TdxLayoutDragDropInfo &ADropAreaInfo);
	virtual System::Types::TRect __fastcall GetDropExpectedBounds(const TdxLayoutDragDropInfo &ADropAreaInfo);
	virtual int __fastcall GetMinorSize(TdxLayoutCalcSizeType ACalcSizeType);
	virtual int __fastcall GetMajorSize(TdxLayoutCalcSizeType ACalcSizeType);
	virtual void __fastcall DoAssignBounds(TdxLayoutGroupViewInfoSpecific* ASource);
	void __fastcall DoSetOffset(const System::Types::TPoint &AValue, const System::Types::TPoint &ADiff);
	virtual void __fastcall SetOffset(const System::Types::TPoint &Value);
	virtual void __fastcall Reset();
	virtual int __fastcall GetItemsAreaOffset(Dxlayoutcommon::TdxLayoutSide ASide);
	int __fastcall GetHitTabIndex(const System::Types::TPoint &P);
	virtual bool __fastcall CanFocus();
	virtual bool __fastcall CanFocusOnClick(int X, int Y);
	virtual void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall CreateSpecificControls();
	virtual void __fastcall DestroySpecificControls();
	virtual void __fastcall CreateViewInfos();
	virtual void __fastcall DestroyViewInfos();
	virtual void __fastcall GetElements(System::Classes::TList* AElements);
	void __fastcall CreateTabControl();
	void __fastcall DestroyTabControl();
	bool __fastcall HasTabControl();
	Cxpc::TcxCustomTabControlController* __fastcall GetTabController();
	Cxpc::TcxPCCustomPainter* __fastcall GetTabPainter();
	Cxpc::TcxCustomTabControlProperties* __fastcall GetTabProperties();
	Cxpc::TcxCustomTabControlViewInfo* __fastcall GetTabViewInfo();
	bool __fastcall CanDrawTabParentBackground();
	System::Types::TRect __fastcall GetTabBoundsRect();
	Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	Vcl::Controls::TWinControl* __fastcall GetControl();
	System::Uitypes::TColor __fastcall GetTabColor();
	Cxcontrols::TcxDragAndDropObject* __fastcall GetDragAndDropObject();
	Cxcontrols::TcxDragAndDropState __fastcall GetDragAndDropState();
	Vcl::Graphics::TFont* __fastcall GetFont();
	Cxlookandfeels::TcxLookAndFeel* __fastcall GetLookAndFeel();
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &AClientBounds);
	void __fastcall InvalidateTabRect(const System::Types::TRect &R, bool AEraseBackground);
	void __fastcall SetModified();
	bool __fastcall IsEnabled();
	bool __fastcall IsDesigning();
	bool __fastcall IsDestroying();
	bool __fastcall IsFocused();
	bool __fastcall IsLoading();
	bool __fastcall IsParentBackground();
	void __fastcall RequestLayout();
	__property TdxLayoutTabbedOptions* TabbedOptions = {read=GetTabbedOptions};
	
public:
	virtual bool __fastcall AllowDrawChild(TdxCustomLayoutItemViewInfo* AChildViewInfo);
	virtual bool __fastcall AllowChildHasBorder();
	virtual System::Types::TRect __fastcall GetChildInplaceRenameBounds(TdxCustomLayoutItemViewInfo* AChildViewInfo);
	virtual TdxLayoutItemControlAreaAlignment __fastcall GetDefaultItemControlAreaAlignment();
	virtual bool __fastcall ProcessDialogChar(System::Word ACharCode);
	virtual bool __fastcall ProcessDialogKey(System::Word ACharCode, int AKeyData, TdxCustomLayoutItem* AFocusedItem);
public:
	/* TdxLayoutGroupViewInfoSpecific.Create */ inline __fastcall virtual TdxLayoutGroupViewInfoTabbedSpecific(TdxLayoutGroupViewInfo* AGroupViewInfo) : TdxLayoutGroupViewInfoHorizontalSpecific(AGroupViewInfo) { }
	/* TdxLayoutGroupViewInfoSpecific.Destroy */ inline __fastcall virtual ~TdxLayoutGroupViewInfoTabbedSpecific() { }
	
private:
	void *__IcxControlComponentState;	// Cxcontrols::IcxControlComponentState 
	void *__IcxTabControl;	// Cxpc::IcxTabControl 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E29BF582-E8C0-4868-A799-DB4C41AC3BC8}
	operator Cxcontrols::_di_IcxControlComponentState()
	{
		Cxcontrols::_di_IcxControlComponentState intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxcontrols::IcxControlComponentState*(void) { return (Cxcontrols::IcxControlComponentState*)&__IcxControlComponentState; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {8C8C2262-5419-46E1-BCE0-5A5311C330A0}
	operator Cxpc::_di_IcxTabControl()
	{
		Cxpc::_di_IcxTabControl intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxpc::IcxTabControl*(void) { return (Cxpc::IcxTabControl*)&__IcxTabControl; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutGroupButtonViewInfo : public TdxCustomLayoutItemElementViewInfo
{
	typedef TdxCustomLayoutItemElementViewInfo inherited;
	
private:
	TdxCustomLayoutGroupButton* FButton;
	TdxLayoutGroupButtonsViewInfo* FButtonsViewInfo;
	Dxgdiplusclasses::TdxSmartGlyph* __fastcall GetGlyph();
	bool __fastcall GetIsEnabled();
	int __fastcall GetVisibleIndex();
	Cxcustomcanvas::TcxRotationAngle __fastcall GetRotationAngle();
	
protected:
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall DoClick();
	virtual void __fastcall StateChanged();
	virtual bool __fastcall IsHotTrackable();
	virtual bool __fastcall AllowDragDrop();
	virtual bool __fastcall ShowHint(Vcl::Controls::THintInfo &AHintInfo);
	virtual bool __fastcall GetVisible();
	virtual TdxLayoutGroupButtonPainterClass __fastcall GetPainterClass();
	virtual Cxlookandfeelpainters::TcxButtonState __fastcall GetState();
	bool __fastcall IsGroupExpanded();
	bool __fastcall IsExpandButton();
	bool __fastcall IsHomeButton();
	__property Dxgdiplusclasses::TdxSmartGlyph* Glyph = {read=GetGlyph};
	__property bool IsEnabled = {read=GetIsEnabled, nodefault};
	
public:
	__fastcall virtual TdxLayoutGroupButtonViewInfo(TdxLayoutGroupButtonsViewInfo* AButtonsViewInfo, TdxCustomLayoutGroupButton* AButton);
	virtual int __fastcall CalculateHeight();
	virtual int __fastcall CalculateWidth();
	__property TdxCustomLayoutGroupButton* Button = {read=FButton};
	__property TdxLayoutGroupButtonsViewInfo* ButtonsViewInfo = {read=FButtonsViewInfo};
	__property int VisibleIndex = {read=GetVisibleIndex, nodefault};
public:
	/* TdxCustomLayoutItemElementViewInfo.Destroy */ inline __fastcall virtual ~TdxLayoutGroupButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutGroupCheckBoxButtonViewInfo : public TdxLayoutGroupButtonViewInfo
{
	typedef TdxLayoutGroupButtonViewInfo inherited;
	
protected:
	System::Types::TSize __fastcall GetCheckBoxSize(Cxgraphics::TcxCanvas* ACanvas);
	Cxlookandfeelpainters::TcxEditCheckState __fastcall GetEditCheckState();
	virtual TdxLayoutGroupButtonPainterClass __fastcall GetPainterClass();
public:
	/* TdxLayoutGroupButtonViewInfo.Create */ inline __fastcall virtual TdxLayoutGroupCheckBoxButtonViewInfo(TdxLayoutGroupButtonsViewInfo* AButtonsViewInfo, TdxCustomLayoutGroupButton* AButton) : TdxLayoutGroupButtonViewInfo(AButtonsViewInfo, AButton) { }
	
public:
	/* TdxCustomLayoutItemElementViewInfo.Destroy */ inline __fastcall virtual ~TdxLayoutGroupCheckBoxButtonViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutGroupButtonsViewInfo : public TdxCustomLayoutItemElementViewInfo
{
	typedef TdxCustomLayoutItemElementViewInfo inherited;
	
private:
	Cxclasses::TcxObjectList* FButtonViewInfos;
	TdxLayoutGroupButtonViewInfo* __fastcall GetButtonViewInfos(int Index);
	int __fastcall GetButtonViewInfoCount();
	TdxLayoutGroupButton* __fastcall GetExpandButton();
	TdxLayoutGroupViewInfo* __fastcall GetGroupViewInfo();
	TdxLayoutGroupButtonOptions* __fastcall GetOptions();
	
protected:
	virtual bool __fastcall GetVisible();
	void __fastcall CalculateHorizontalLayout();
	void __fastcall CalculateVerticalLayout();
	void __fastcall CalculateButtonViewInfos();
	void __fastcall CreateButtonViewInfos();
	void __fastcall RecreateButtonViewInfos();
	void __fastcall DestroyButtonViewInfos();
	void __fastcall GetElements(System::Classes::TList* AElements);
	virtual int __fastcall InternalCalculateHeight();
	virtual int __fastcall InternalCalculateWidth();
	virtual void __fastcall DoAssignBounds(TdxCustomLayoutElementViewInfo* ASource);
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &AClientBounds);
	virtual void __fastcall DoSetOffset(const System::Types::TPoint &AValue, const System::Types::TPoint &ADiff);
	virtual void __fastcall StateChanged();
	virtual bool __fastcall IsLeftAlignment();
	__property TdxLayoutGroupButton* ExpandButton = {read=GetExpandButton};
	__property TdxLayoutGroupButtonOptions* Options = {read=GetOptions};
	
public:
	__fastcall virtual TdxLayoutGroupButtonsViewInfo(TdxCustomLayoutItemViewInfo* AItemViewInfo);
	__fastcall virtual ~TdxLayoutGroupButtonsViewInfo();
	virtual void __fastcall Calculate(const System::Types::TRect &ABounds);
	virtual int __fastcall CalculateHeight();
	virtual int __fastcall CalculateMinHeight();
	virtual int __fastcall CalculateMinWidth();
	virtual int __fastcall CalculateWidth();
	__property int ButtonViewInfoCount = {read=GetButtonViewInfoCount, nodefault};
	__property TdxLayoutGroupButtonViewInfo* ButtonViewInfos[int Index] = {read=GetButtonViewInfos};
	__property TdxLayoutGroupViewInfo* GroupViewInfo = {read=GetGroupViewInfo};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutGroupViewData : public TdxCustomLayoutItemViewData
{
	typedef TdxCustomLayoutItemViewData inherited;
	
private:
	TdxAbsPoint FScrollPos;
	void __fastcall DoButtonClick(TdxLayoutGroupButtonViewInfo* AViewInfo);
	TdxCustomLayoutGroup* __fastcall GetGroup();
	
protected:
	virtual void __fastcall Changed();
	virtual int __fastcall GetSize();
	virtual bool __fastcall GetExpanded();
	virtual int __fastcall GetItemIndex();
	virtual int __fastcall GetTabIndex();
	virtual void __fastcall SetExpanded(bool Value);
	virtual void __fastcall SetItemIndex(int Value);
	void __fastcall SetScrollPos(const TdxAbsPoint &Value);
	virtual void __fastcall SetTabIndex(int Value);
	
public:
	__fastcall virtual TdxLayoutGroupViewData(TdxLayoutItemViewDataList* AOwner, TdxCustomLayoutItem* AItem);
	__fastcall virtual ~TdxLayoutGroupViewData();
	virtual void __fastcall Assign(TdxCustomLayoutItemViewData* Source);
	virtual void __fastcall Calculate();
	virtual void __fastcall Load(System::Classes::TStream* AStream);
	virtual void __fastcall Save(System::Classes::TStream* AStream);
	__property TdxCustomLayoutGroup* Group = {read=GetGroup};
	__property bool Expanded = {read=GetExpanded, write=SetExpanded, nodefault};
	__property int ItemIndex = {read=GetItemIndex, write=SetItemIndex, nodefault};
	__property TdxAbsPoint ScrollPos = {read=FScrollPos, write=SetScrollPos};
	__property int TabIndex = {read=GetTabIndex, write=SetTabIndex, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutGroupViewInfo : public TdxCustomLayoutItemViewInfo
{
	typedef TdxCustomLayoutItemViewInfo inherited;
	
private:
	TdxLayoutGroupButtonsViewInfo* FButtonsViewInfo;
	bool FOffsetsCalculated;
	Cxcontrols::TdxHybridScrollbarsManager* FHybridScrollbarsManager;
	int FItemOffset;
	int FItemsAreaOffsetHorz;
	int FItemsAreaOffsetVert;
	System::Contnrs::TObjectList* FItemViewInfos;
	Cxcontrols::TdxScrollBarWrapper* FMajorScrollBar;
	System::Types::TRect FMajorScrollBarBounds;
	Cxcontrols::TdxScrollBarWrapper* FMinorScrollBar;
	System::Types::TRect FMinorScrollBarBounds;
	TdxLayoutGroupViewInfoSpecific* FSpecific;
	System::Types::TRect __fastcall GetBorderBounds(Dxlayoutcommon::TdxLayoutSide ASide);
	System::Types::TRect __fastcall GetBorderRestSpaceBounds(Dxlayoutcommon::TdxLayoutSide ASide);
	int __fastcall GetBordersHeight();
	int __fastcall GetBordersWidth();
	Dxlayoutcommon::TdxLayoutSide __fastcall GetCaptionSide();
	TdxLayoutGroupCaptionViewInfo* __fastcall GetCaptionViewInfo();
	TdxCustomLayoutGroup* __fastcall GetGroup();
	TdxCustomLayoutItemViewInfo* __fastcall GetItemViewInfo(int Index);
	int __fastcall GetItemViewInfoCount();
	TdxLayoutDirection __fastcall GetLayoutDirection();
	HIDESBASE Dxlayoutlookandfeels::TdxLayoutLookAndFeelGroupOptions* __fastcall GetOptions();
	TdxAbsPoint __fastcall GetScrollPos();
	TdxLayoutItemControlAreaAlignment __fastcall GetRealItemControlAreaAlignment();
	TdxLayoutGroupViewData* __fastcall GetViewData();
	int __fastcall GetItemIndex();
	HIDESBASE int __fastcall GetOffset(int Index);
	Cxcontrols::TdxScrollBarWrapper* __fastcall CreateScrollBar();
	void __fastcall DestroyScrollBar(Cxcontrols::TdxScrollBarWrapper* &AScrollBar);
	void __fastcall InitializeMajorScrollBar(int AContentSize, int AClientSize);
	void __fastcall InitializeMinorScrollBar(int AContentSize, int AClientSize);
	void __fastcall CheckScrollPos(Cxcontrols::TdxScrollBarWrapper* AScrollBar, int &AScrollPos);
	void __fastcall SetScrollBounds(Cxcontrols::TdxScrollBarWrapper* AScrollBar, const System::Types::TRect &ABounds);
	void __fastcall CreateItemViewInfos();
	void __fastcall CreateSpecific();
	void __fastcall DestroyItemViewInfos();
	void __fastcall DestroySpecific();
	
protected:
	System::Types::TRect FCaptionAreaBounds;
	System::Types::TRect FButtonsAreaBounds;
	System::Types::TRect FClientAreaBounds;
	System::Types::TRect FItemsAreaBounds;
	System::Types::TRect FFrameBounds;
	virtual void __fastcall CreateViewInfos();
	virtual void __fastcall DestroyViewInfos();
	virtual void __fastcall FreeNotification(System::Classes::TComponent* AComponent);
	virtual void __fastcall GetElements(System::Classes::TList* AElements);
	virtual void __fastcall PopulateAutoAlignControlList(System::Classes::TList* AList);
	virtual void __fastcall PopulateControlViewInfoList(System::Classes::TList* AControls, System::Classes::TList* AWinControls);
	void __fastcall CheckUIPosition();
	Cxcontrols::TcxControl* __fastcall GetOwnerControl();
	bool __fastcall HasVisibleUI();
	void __fastcall HideUI();
	Cxcontrols::TdxHybridScrollbarsManager* __fastcall GetManager();
	System::Uitypes::TColor __fastcall GetHybridScrollbarBaseColor();
	void __fastcall InvalidateScrollbars();
	Vcl::Controls::TWinControl* __fastcall GetControl();
	HIDESBASE Cxlookandfeels::TcxLookAndFeel* __fastcall GetLookAndFeel();
	Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	Cxscrollbar::_di_IcxScrollBarOwner2 __fastcall GetOwner2();
	virtual TdxCustomLayoutItemCaptionViewInfoClass __fastcall GetCaptionViewInfoClass();
	virtual TdxCustomLayoutItemHitTestClass __fastcall GetHitTestClass();
	virtual TdxCustomLayoutItemPainterClass __fastcall GetPainterClass();
	virtual bool __fastcall CanDrawSpecificControls();
	virtual System::Uitypes::TColor __fastcall GetColor();
	virtual bool __fastcall AutoAlignControls();
	virtual System::Types::TRect __fastcall CalculatePadding();
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &AClientBounds);
	virtual int __fastcall GetAvailableTextAreaWidth();
	virtual int __fastcall InternalCalculateHeight();
	virtual int __fastcall InternalCalculateWidth();
	virtual int __fastcall DoCalculateHeight(TdxLayoutCalcSizeType ACalcSizeType);
	virtual int __fastcall DoCalculateWidth(TdxLayoutCalcSizeType ACalcSizeType);
	virtual void __fastcall Reset();
	void __fastcall CorrectDropAreaPart(const System::Types::TPoint &P, TdxLayoutDropAreaPart &AAreaPart);
	TdxCustomLayoutItem* __fastcall GetDestinationItem(const TdxLayoutDragDropInfo &ADropAreaInfo);
	TdxLayoutActionType __fastcall GetDropActionType(TdxLayoutDropAreaPart AAreaPart);
	virtual TdxLayoutDropAreaPart __fastcall GetDropAreaPart(System::Types::TPoint &P);
	System::Types::TRect __fastcall GetDropExpectedBounds(const TdxLayoutDragDropInfo &ADropAreaInfo);
	TdxLayoutAlign __fastcall GetDropExpectedAlign(const TdxLayoutDragDropInfo &ADropAreaInfo);
	TdxLayoutAlignHorz __fastcall GetDropHorzAlignForLocale(const TdxLayoutAlignHorz AHorzAlign);
	virtual bool __fastcall CanFocusOnClick(int X, int Y);
	virtual void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual bool __fastcall HasCaption();
	virtual bool __fastcall HasBorder();
	bool __fastcall HasButtons();
	bool __fastcall HasExpandButton();
	bool __fastcall IsDefaultColor();
	bool __fastcall IsSkinPainterUsed();
	virtual bool __fastcall IsTransparent();
	virtual bool __fastcall IsEllipsisAllowed(bool AForDrawing = false);
	virtual bool __fastcall IsWordWrapAllowed();
	void __fastcall CalculateButtonsAreaBounds();
	void __fastcall CalculateCaptionAreaBounds();
	virtual void __fastcall CalculateClientBounds();
	virtual void __fastcall CalculateItemsAreaBounds();
	void __fastcall CalculateOffsets();
	void __fastcall CalculateViewInfoBounds();
	void __fastcall CalculateInternalViewInfos();
	virtual int __fastcall GetButtonsOffset();
	virtual int __fastcall GetButtonsSpace();
	virtual int __fastcall GetCaptionOffset();
	int __fastcall GetSpaceBetweenButtons();
	System::Types::TRect __fastcall GetInscribedRect(const System::Types::TRect &AInscribeRect);
	System::Types::TRect __fastcall GetClientAreaBounds(const System::Types::TRect &ABounds);
	System::Types::TRect __fastcall GetItemsAreaBounds(const System::Types::TRect &AClientRect);
	virtual int __fastcall GetBorderWidth(Dxlayoutcommon::TdxLayoutSide ASide);
	virtual int __fastcall GetHeight(int AItemsAreaHeight);
	virtual int __fastcall GetWidth(int AItemsAreaWidth);
	virtual int __fastcall GetLevelingItemCaptionWidth(TdxLayoutCellItemViewInfo* AItemViewInfo, int AMaxCaptionSize);
	virtual int __fastcall GetMinVisibleHeight();
	virtual int __fastcall GetMinVisibleWidth();
	System::Types::TRect __fastcall GetRestSpaceBounds();
	virtual bool __fastcall CanAssignBounds(TdxCustomLayoutElementViewInfo* ASource);
	virtual void __fastcall DoAssignBounds(TdxCustomLayoutElementViewInfo* ASource);
	virtual void __fastcall DoSetOffset(const System::Types::TPoint &AValue, const System::Types::TPoint &ADiff);
	bool __fastcall CanHandleMouseWheel(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	void __fastcall DoMajorScroll(System::TObject* Sender, System::Uitypes::TScrollCode AScrollCode, int &AScrollPos);
	void __fastcall DoMinorScroll(System::TObject* Sender, System::Uitypes::TScrollCode AScrollCode, int &AScrollPos);
	virtual bool __fastcall DoMouseWheel(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	virtual bool __fastcall IsMouseWheelHandleNeeded(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	virtual bool __fastcall IsScrollBarsVisible();
	void __fastcall UpdateScrollPos(bool AMajor);
	virtual void __fastcall MakeVisible(const System::Types::TRect &ARect, bool AFully);
	bool __fastcall AllowChildHasBorder();
	virtual bool __fastcall AllowCollapsedHeight();
	virtual bool __fastcall AllowCollapsedWidth();
	virtual bool __fastcall AllowDrawChild(TdxCustomLayoutItemViewInfo* AChildViewInfo);
	bool __fastcall AllowMajorScroll();
	bool __fastcall AllowMinorScroll();
	virtual System::Types::TRect __fastcall GetChildInplaceRenameBounds(TdxCustomLayoutItemViewInfo* AChildViewInfo);
	Cxcustomcanvas::TcxRotationAngle __fastcall GetRotationAngle();
	bool __fastcall IsChildActuallyVisible(TdxCustomLayoutItemViewInfo* AChildViewInfo);
	virtual bool __fastcall IsExpanded();
	bool __fastcall IsVerticalCaption();
	virtual bool __fastcall UseItemOffset();
	virtual bool __fastcall UseItemsAreaOffsets();
	virtual TdxLayoutGroupViewInfoSpecificClass __fastcall GetSpecificClass();
	virtual void __fastcall PaintSelectionLayer(Cxgraphics::TcxAlphaBitmap* ABitmap, System::Types::TRect &ADrawingRect);
	virtual int __fastcall GetMaxTabOrder();
	__property int ButtonsOffset = {read=GetButtonsOffset, nodefault};
	__property int CaptionOffset = {read=GetCaptionOffset, nodefault};
	__property int ItemIndex = {read=GetItemIndex, nodefault};
	__property int ItemOffset = {read=GetOffset, write=FItemOffset, index=0, nodefault};
	__property int ItemsAreaOffsetHorz = {read=GetOffset, write=FItemsAreaOffsetHorz, index=1, nodefault};
	__property int ItemsAreaOffsetVert = {read=GetOffset, write=FItemsAreaOffsetVert, index=2, nodefault};
	__property int MinVisibleHeight = {read=GetMinVisibleHeight, nodefault};
	__property int MinVisibleWidth = {read=GetMinVisibleWidth, nodefault};
	__property System::Types::TRect RestSpaceBounds = {read=GetRestSpaceBounds};
	__property Dxlayoutcommon::TdxLayoutSide CaptionSide = {read=GetCaptionSide, nodefault};
	__property TdxCustomLayoutGroup* Group = {read=GetGroup};
	__property TdxLayoutDirection LayoutDirection = {read=GetLayoutDirection, nodefault};
	__property Dxlayoutlookandfeels::TdxLayoutLookAndFeelGroupOptions* Options = {read=GetOptions};
	__property TdxLayoutGroupViewInfoSpecific* Specific = {read=FSpecific};
	__property TdxLayoutGroupViewData* ViewData = {read=GetViewData};
	
public:
	__fastcall virtual TdxLayoutGroupViewInfo(TdxLayoutContainerViewInfo* AContainerViewInfo, TdxLayoutGroupViewInfo* AParentViewInfo, TdxCustomLayoutItemViewData* AViewData);
	__fastcall virtual ~TdxLayoutGroupViewInfo();
	virtual void __fastcall Calculate(const System::Types::TRect &ABounds);
	virtual void __fastcall CalculateInternalTabOrders(int &AAvailableTabOrder);
	virtual void __fastcall CalculateTabOrders(int &AAvailableTabOrder);
	TdxCustomLayoutItemViewInfo* __fastcall FindItemViewInfo(TdxCustomLayoutItem* AItem);
	virtual TdxCustomLayoutHitTest* __fastcall GetHitTest(const System::Types::TPoint &P);
	virtual TdxCustomLayoutItem* __fastcall GetItemWithMouse(const System::Types::TPoint &P);
	virtual int __fastcall GetInsertionPos(const System::Types::TPoint &P);
	bool __fastcall HasScrollBars();
	__property System::Types::TRect BorderBounds[Dxlayoutcommon::TdxLayoutSide ASide] = {read=GetBorderBounds};
	__property System::Types::TRect BorderRestSpaceBounds[Dxlayoutcommon::TdxLayoutSide ASide] = {read=GetBorderRestSpaceBounds};
	__property int BorderWidths[Dxlayoutcommon::TdxLayoutSide ASide] = {read=GetBorderWidth};
	__property int BordersHeight = {read=GetBordersHeight, nodefault};
	__property int BordersWidth = {read=GetBordersWidth, nodefault};
	__property TdxLayoutGroupButtonsViewInfo* ButtonsViewInfo = {read=FButtonsViewInfo};
	__property TdxLayoutGroupCaptionViewInfo* CaptionViewInfo = {read=GetCaptionViewInfo};
	__property System::Types::TRect ClientBounds = {read=FClientAreaBounds};
	__property System::Types::TRect ItemsAreaBounds = {read=FItemsAreaBounds};
	__property int ItemViewInfoCount = {read=GetItemViewInfoCount, nodefault};
	__property TdxCustomLayoutItemViewInfo* ItemViewInfos[int Index] = {read=GetItemViewInfo};
private:
	void *__IcxScrollBarOwner2Provider;	// Cxscrollbar::IcxScrollBarOwner2Provider 
	void *__IcxScrollBarOwner;	// Cxscrollbar::IcxScrollBarOwner 
	void *__IdxHybridScrollbarOwner;	// Cxcontrols::IdxHybridScrollbarOwner 
	void *__IdxTouchScrollUIOwner;	// Cxcontrols::IdxTouchScrollUIOwner 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {5CAEC427-0B33-41D2-8839-5BE9E0920BD4}
	operator Cxscrollbar::_di_IcxScrollBarOwner2Provider()
	{
		Cxscrollbar::_di_IcxScrollBarOwner2Provider intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxscrollbar::IcxScrollBarOwner2Provider*(void) { return (Cxscrollbar::IcxScrollBarOwner2Provider*)&__IcxScrollBarOwner2Provider; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {56771164-C253-40FF-B6D4-2A29D0C90236}
	operator Cxscrollbar::_di_IcxScrollBarOwner()
	{
		Cxscrollbar::_di_IcxScrollBarOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxscrollbar::IcxScrollBarOwner*(void) { return (Cxscrollbar::IcxScrollBarOwner*)&__IcxScrollBarOwner; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {2DFA6D14-84FD-42EE-AF0C-CB418ABCA905}
	operator Cxcontrols::_di_IdxHybridScrollbarOwner()
	{
		Cxcontrols::_di_IdxHybridScrollbarOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxcontrols::IdxHybridScrollbarOwner*(void) { return (Cxcontrols::IdxHybridScrollbarOwner*)&__IdxHybridScrollbarOwner; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {CA4C2043-1558-4D5D-8DEB-DAD8652AFFB9}
	operator Cxcontrols::_di_IdxTouchScrollUIOwner()
	{
		Cxcontrols::_di_IdxTouchScrollUIOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxcontrols::IdxTouchScrollUIOwner*(void) { return (Cxcontrols::IdxTouchScrollUIOwner*)&__IdxTouchScrollUIOwner; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutRootViewInfo : public TdxLayoutGroupViewInfo
{
	typedef TdxLayoutGroupViewInfo inherited;
	
protected:
	virtual System::Uitypes::TColor __fastcall GetBackgroundColor();
public:
	/* TdxLayoutGroupViewInfo.Create */ inline __fastcall virtual TdxLayoutRootViewInfo(TdxLayoutContainerViewInfo* AContainerViewInfo, TdxLayoutGroupViewInfo* AParentViewInfo, TdxCustomLayoutItemViewData* AViewData) : TdxLayoutGroupViewInfo(AContainerViewInfo, AParentViewInfo, AViewData) { }
	/* TdxLayoutGroupViewInfo.Destroy */ inline __fastcall virtual ~TdxLayoutRootViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutContainerViewInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool FIsOnGlass;
	TdxLayoutContainer* FContainer;
	System::Types::TRect FContentBounds;
	bool FIsOccupiedSizeCalculating;
	bool FIsDragImagePainting;
	TdxLayoutItemViewDataList* FItemViewDataList;
	TdxLayoutRootViewInfo* FRootViewInfo;
	TdxCustomLayoutItem* FItemWithMouse;
	System::Types::TPoint FOffset;
	Dxlayoutselection::TdxSelectionLayer* FSelectionLayer;
	void __fastcall BuildSelectionLayer();
	void __fastcall CreateSelectionLayer();
	Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	System::Types::TRect __fastcall GetClientBounds();
	System::Types::TRect __fastcall GetContentBounds();
	int __fastcall GetContentHeight();
	int __fastcall GetContentWidth();
	TdxLayoutGroupViewInfo* __fastcall GetItemsViewInfo();
	int __fastcall GetNormalContentWidth();
	void __fastcall SelectionLayerHitTest(System::TObject* ASender, bool &AIsTransparent);
	void __fastcall SelectionLayerUpdate(System::TObject* Sender);
	void __fastcall SelectionLayerEndRename(System::TObject* ASender, const System::UnicodeString AText, bool AAccept);
	void __fastcall SetItemWithMouse(TdxCustomLayoutItem* Value);
	void __fastcall SetOffset(const System::Types::TPoint &Value);
	
protected:
	bool FIsValid;
	bool FNeedRecalculate;
	System::Generics::Collections::TDictionary__2<TdxCustomLayoutItem*,TdxCustomLayoutItemViewInfo*>* FItemViewInfoDictionary;
	virtual bool __fastcall CanShowGroupScrollBars();
	virtual void __fastcall CreateViewInfos();
	TdxCustomLayoutItemViewInfo* __fastcall CreateItemViewInfo(TdxLayoutGroupViewInfo* AParentViewInfo, TdxCustomLayoutItem* AItem);
	virtual void __fastcall DestroyViewInfos();
	virtual TdxLayoutRootViewInfoClass __fastcall GetRootViewInfoClass();
	virtual Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* __fastcall GetLayoutLookAndFeel();
	virtual Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* __fastcall GetItemLayoutLookAndFeel(TdxCustomLayoutItemViewInfo* AViewInfo);
	virtual Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeelOptions* __fastcall GetItemOptions(TdxCustomLayoutItemViewInfo* AViewInfo);
	void __fastcall MakeVisible(const System::Types::TRect &ARect, bool AFully);
	virtual void __fastcall PrepareData(bool ARecreateViewData);
	virtual void __fastcall RecreateViewData();
	void __fastcall RecreateViewInfos(bool ARecreateViewData = false);
	virtual bool __fastcall AlignItemsByConstraint();
	virtual bool __fastcall AutoAlignControls();
	virtual void __fastcall CalculateItemsViewInfo();
	void __fastcall CalculateContentBounds();
	void __fastcall DoCalculate(bool AHard = true);
	virtual void __fastcall DoCalculateInternalTabOrders();
	virtual void __fastcall DoCalculateTabOrders();
	virtual System::Types::TRect __fastcall GetItemsParentBounds();
	virtual Cxscrollbar::_di_IcxScrollBarOwner2 __fastcall GetOwner2();
	void __fastcall ResetContentBounds();
	void __fastcall InvalidateSelectionLayer(const System::Types::TRect &R);
	bool __fastcall ShowHint(Vcl::Controls::THintInfo &AHintInfo, int X, int Y);
	virtual bool __fastcall CanUseCachedInfo();
	bool __fastcall IsTransparent();
	bool __fastcall IsTransparentBackground();
	virtual bool __fastcall IsActuallyVisible();
	virtual bool __fastcall IsDragImagePainting();
	bool __fastcall NeedHighlightRoot();
	void __fastcall AssignBounds(TdxLayoutContainerViewInfo* ASource);
	virtual bool __fastcall CanAssignBounds(TdxLayoutContainerViewInfo* ASource);
	virtual void __fastcall DoAssignBounds(TdxLayoutContainerViewInfo* ASource);
	TdxCustomLayoutItemViewData* __fastcall GetViewData(TdxCustomLayoutItem* AItem);
	virtual TdxCustomLayoutItemViewDataClass __fastcall GetViewDataClass(TdxCustomLayoutItem* AItem);
	bool __fastcall FindCloneData(TdxCustomLayoutItem* AItem, /* out */ TdxCustomLayoutItemViewData* &ACloneData);
	virtual bool __fastcall IsMouseWheelHandleNeeded(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	virtual bool __fastcall DoMouseWheel(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	virtual Cxcontrols::_di_IdxTouchScrollUIOwner __fastcall GetTouchScrollUIOwner(const System::Types::TPoint &APoint);
	__property Cxgraphics::TcxCanvas* Canvas = {read=GetCanvas};
	__property bool IsOnGlass = {read=FIsOnGlass, write=FIsOnGlass, nodefault};
	__property TdxCustomLayoutItem* ItemWithMouse = {read=FItemWithMouse, write=SetItemWithMouse};
	__property TdxLayoutItemViewDataList* ItemViewDataList = {read=FItemViewDataList};
	__property Dxlayoutselection::TdxSelectionLayer* SelectionLayer = {read=FSelectionLayer};
	__property int NormalContentWidth = {read=GetNormalContentWidth, nodefault};
	
public:
	__fastcall virtual TdxLayoutContainerViewInfo(TdxLayoutContainer* AContainer);
	__fastcall virtual ~TdxLayoutContainerViewInfo();
	virtual void __fastcall Calculate(bool ARecreateViewData);
	virtual void __fastcall CalculateTabOrders();
	bool __fastcall FindItemViewInfo(TdxCustomLayoutItem* AItem, /* out */ TdxCustomLayoutItemViewInfo* &AViewInfo);
	virtual TdxCustomLayoutHitTest* __fastcall GetHitTest(const System::Types::TPoint &P);
	virtual TdxCustomLayoutItemViewInfo* __fastcall GetItemViewInfo(TdxCustomLayoutItem* AItem);
	TdxCustomLayoutItem* __fastcall GetItemWithMouse(const System::Types::TPoint &P);
	void __fastcall AssignItemWithMouse(int X, int Y);
	virtual bool __fastcall CanFocusOnClick(int X, int Y);
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseLeave(Vcl::Controls::TControl* AControl);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall FinishDragImagePainting();
	void __fastcall StartDragImagePainting();
	System::Types::TPoint __fastcall GetScrollOffset();
	__property System::Types::TRect ClientBounds = {read=GetClientBounds};
	__property TdxLayoutContainer* Container = {read=FContainer};
	__property System::Types::TRect ContentBounds = {read=GetContentBounds};
	__property int ContentHeight = {read=GetContentHeight, nodefault};
	__property int ContentWidth = {read=GetContentWidth, nodefault};
	__property TdxLayoutGroupViewInfo* ItemsViewInfo = {read=GetItemsViewInfo};
	__property Dxlayoutlookandfeels::TdxCustomLayoutLookAndFeel* LayoutLookAndFeel = {read=GetLayoutLookAndFeel};
	__property System::Types::TPoint Offset = {read=FOffset, write=SetOffset};
	__property TdxLayoutRootViewInfo* RootViewInfo = {read=FRootViewInfo};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 htError = System::Int8(-1);
static const System::Int8 htNone = System::Int8(0x0);
static const System::Int8 htCustomizeForm = System::Int8(0x1);
static const System::Int8 htItem = System::Int8(0xa);
static const System::Int8 htGroup = System::Int8(0x14);
static const System::Int8 htClientArea = System::Int8(0x1e);
static const System::Int8 htAvailableItems = System::Int8(0x28);
static const System::Int8 htTreeViewItems = System::Int8(0x32);
static const System::Int8 htBasicItem = System::Int8(0x3c);
static const System::Int8 htSizeHandle = System::Int8(0x46);
static const System::Int8 dxLayoutItemControlDefaultMinSize = System::Int8(0x14);
static const System::Int8 dxLayoutItemControlDefaultMinHeight = System::Int8(0x14);
static const System::Int8 dxLayoutItemControlDefaultMinWidth = System::Int8(0x14);
static const System::Int8 dxLayoutItemMinSize = System::Int8(0x5);
static const System::Int8 dxLayoutVersion = System::Int8(0x3);
static const System::Int8 dxLayoutCorrectionForDisabling = System::Int8(0x1);
static const System::Int8 dxLayoutThinPartWidth = System::Int8(0x2);
static const System::Int8 dxLayoutThickPartWidth = System::Int8(0x8);
#define dxDefaultLayoutCustomizeFormMenuItems (System::Set<TdxLayoutCustomizeFormMenuItem, TdxLayoutCustomizeFormMenuItem::cfmiAlignHorz, TdxLayoutCustomizeFormMenuItem::cfmiRename>() << TdxLayoutCustomizeFormMenuItem::cfmiAlignHorz << TdxLayoutCustomizeFormMenuItem::cfmiAlignVert << TdxLayoutCustomizeFormMenuItem::cfmiDirection << TdxLayoutCustomizeFormMenuItem::cfmiCaptionLayout << TdxLayoutCustomizeFormMenuItem::cfmiCaptionAlignHorz << TdxLayoutCustomizeFormMenuItem::cfmiCaptionAlignVert << TdxLayoutCustomizeFormMenuItem::cfmiCaption << TdxLayoutCustomizeFormMenuItem::cfmiBorder << TdxLayoutCustomizeFormMenuItem::cfmiExpandButton << TdxLayoutCustomizeFormMenuItem::cfmiGrouping << TdxLayoutCustomizeFormMenuItem::cfmiRename )
extern DELPHI_PACKAGE Dxlayoutselection::TdxLayoutRunTimeSelectionHelperClass dxLayoutRunTimeSelectionHelperClass;
extern DELPHI_PACKAGE bool __fastcall dxLayoutIsSameAlign(TdxLayoutAlign AAlign1, TdxLayoutAlign AAlign2);
extern DELPHI_PACKAGE TdxLayoutAlign __fastcall dxLayoutAlign(TdxLayoutAlignHorz AHorz, TdxLayoutAlignVert AVert);
extern DELPHI_PACKAGE void __fastcall dxDrawItemGlyph(Cxgraphics::TcxCanvas* ACanvas, TdxCustomLayoutItem* AItem, const System::Types::TRect &R, Cxcustomcanvas::TcxRotationAngle ARotationAngle, Dxcoregraphics::_di_IdxColorPalette AColorPalette = Dxcoregraphics::_di_IdxColorPalette());
extern DELPHI_PACKAGE void __fastcall dxLayoutSetItemStates(TdxLayoutContainer* AContainer, bool AUnwrapTabs, bool AActiveTabToTop, bool ASkipEmptyGroups, bool AExpandGroups);
extern DELPHI_PACKAGE void __fastcall dxLayoutStoreItemStates(System::Classes::TList* AList, TdxLayoutContainer* AContainer);
extern DELPHI_PACKAGE void __fastcall dxLayoutRestoreItemStates(System::Classes::TList* AList, TdxLayoutContainer* AContainer);
}	/* namespace Dxlayoutcontainer */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXLAYOUTCONTAINER)
using namespace Dxlayoutcontainer;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxlayoutcontainerHPP
