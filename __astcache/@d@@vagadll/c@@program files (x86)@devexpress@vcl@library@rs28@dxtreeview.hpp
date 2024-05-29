// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxTreeView.pas' rev: 35.00 (Windows)

#ifndef DxtreeviewHPP
#define DxtreeviewHPP

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
#include <Vcl.Controls.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Generics.Defaults.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.StrUtils.hpp>
#include <Vcl.ComCtrls.hpp>
#include <dxCore.hpp>
#include <dxCoreClasses.hpp>
#include <dxCustomTree.hpp>
#include <cxControls.hpp>
#include <cxLookAndFeels.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxGraphics.hpp>
#include <cxGeometry.hpp>
#include <cxClasses.hpp>
#include <dxCoreGraphics.hpp>
#include <dxInplaceEditing.hpp>
#include <dxIncrementalSearch.hpp>
#include <dxTypeHelpers.hpp>
#include <cxAccessibility.hpp>
#include <dxCustomHint.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxtreeview
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EdxTreeViewException;
class DELPHICLASS TdxTreeViewPersistent;
class DELPHICLASS TdxTreeViewNodeExpandCollapseProvider;
class DELPHICLASS TdxTreeViewNodeAccessibilityHelper;
class DELPHICLASS TdxTreeViewNode;
class DELPHICLASS TdxTreeViewNodesEnumerator;
class DELPHICLASS TdxTreeViewNodes;
class DELPHICLASS TdxCustomTreeViewHintHelper;
class DELPHICLASS TdxTreeViewIncrementalSearchController;
class DELPHICLASS TdxTreeViewInplaceEditingController;
class DELPHICLASS TdxCustomTreeViewDragObject;
class DELPHICLASS TdxTreeViewAccessibilityHelper;
class DELPHICLASS TdxCustomTreeView;
class DELPHICLASS TdxTreeViewCustomOptionsView;
class DELPHICLASS TdxTreeViewCustomOptionsBehavior;
class DELPHICLASS TdxTreeViewCustomOptionsSelection;
class DELPHICLASS TdxTreeViewHitTest;
class DELPHICLASS TdxTreeViewPainter;
class DELPHICLASS TdxTreeViewCustomViewInfo;
class DELPHICLASS TdxTreeViewNodeViewInfo;
class DELPHICLASS TdxTreeViewViewInfo;
class DELPHICLASS TdxTreeViewOptionsView;
class DELPHICLASS TdxInternalTreeView;
class DELPHICLASS TdxTreeViewControlOptionsView;
class DELPHICLASS TdxTreeViewControlOptionsBehavior;
class DELPHICLASS TdxTreeViewControlOptionsSelection;
class DELPHICLASS TdxTreeViewControl;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION EdxTreeViewException : public Dxcore::EdxException
{
	typedef Dxcore::EdxException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EdxTreeViewException(const System::UnicodeString Msg) : Dxcore::EdxException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EdxTreeViewException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Dxcore::EdxException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EdxTreeViewException(NativeUInt Ident)/* overload */ : Dxcore::EdxException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EdxTreeViewException(System::PResStringRec ResStringRec)/* overload */ : Dxcore::EdxException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EdxTreeViewException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Dxcore::EdxException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EdxTreeViewException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Dxcore::EdxException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EdxTreeViewException(const System::UnicodeString Msg, int AHelpContext) : Dxcore::EdxException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EdxTreeViewException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Dxcore::EdxException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EdxTreeViewException(NativeUInt Ident, int AHelpContext)/* overload */ : Dxcore::EdxException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EdxTreeViewException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Dxcore::EdxException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EdxTreeViewException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Dxcore::EdxException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EdxTreeViewException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Dxcore::EdxException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EdxTreeViewException() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTreeViewPersistent : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TdxCustomTreeView* FTreeView;
	
protected:
	__property TdxCustomTreeView* TreeView = {read=FTreeView};
	
public:
	__fastcall virtual TdxTreeViewPersistent(TdxCustomTreeView* ATreeView);
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxTreeViewPersistent() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TdxTreeViewChange : unsigned char { tvcContent, tvcLayout, tvcStructure, tvcViewPort };

typedef System::Set<TdxTreeViewChange, TdxTreeViewChange::tvcContent, TdxTreeViewChange::tvcViewPort> TdxTreeViewChanges;

typedef int __fastcall (*TdxTreeViewNodeCompareProc)(TdxTreeViewNode* ANode1, TdxTreeViewNode* ANode2, NativeInt AData);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTreeViewNodeExpandCollapseProvider : public Cxaccessibility::TdxExpandCollapseProvider
{
	typedef Cxaccessibility::TdxExpandCollapseProvider inherited;
	
private:
	TdxTreeViewNode* FNode;
	
protected:
	virtual void __fastcall Collapse();
	virtual void __fastcall Expand();
	virtual int __fastcall GetExpandCollapseState();
	
public:
	__fastcall TdxTreeViewNodeExpandCollapseProvider(TdxTreeViewNode* ANode);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxTreeViewNodeExpandCollapseProvider() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTreeViewNodeAccessibilityHelper : public Cxaccessibility::TcxAccessibilityHelper
{
	typedef Cxaccessibility::TcxAccessibilityHelper inherited;
	
private:
	TdxTreeViewNodeExpandCollapseProvider* FExpandCollapseProvider;
	TdxTreeViewNode* __fastcall GetNode();
	
protected:
	int FLocalId;
	virtual bool __fastcall ChildIsSimpleElement(int AIndex);
	virtual void __fastcall DoSelect(int AFlags, Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual Cxaccessibility::TcxAccessibilityHelper* __fastcall GetChild(int AIndex);
	virtual int __fastcall GetChildCount();
	virtual int __fastcall GetLocalId(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID = (Cxaccessibility::TcxAccessibleSimpleChildElementID)(0x0));
	virtual System::UnicodeString __fastcall GetName(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual Cxaccessibility::TcxAccessibilityHelper* __fastcall GetParent();
	virtual int __fastcall GetRole(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetState(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual Cxaccessibility::TcxAccessibleObjectProperties __fastcall GetSupportedProperties(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual bool __fastcall IsExtended();
	virtual bool __fastcall IsSupportedPattern(int APatternID, /* out */ System::_di_IInterface &AProvider, Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID = (Cxaccessibility::TcxAccessibleSimpleChildElementID)(0x0));
	virtual void __fastcall OwnerObjectDestroyed();
	__property TdxTreeViewNode* Node = {read=GetNode};
	
public:
	__fastcall virtual TdxTreeViewNodeAccessibilityHelper(System::TObject* AOwnerObject);
	__fastcall virtual ~TdxTreeViewNodeAccessibilityHelper();
	virtual System::Types::TRect __fastcall GetScreenBounds(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTreeViewNode : public Dxcustomtree::TdxTreeCustomNode
{
	typedef Dxcustomtree::TdxTreeCustomNode inherited;
	
public:
	TdxTreeViewNode* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::UnicodeString FCaption;
	Cxlookandfeelpainters::TcxCheckBoxState FCheckState;
	bool FCut;
	bool FEnabled;
	int FExpandedImageIndex;
	bool FHideCheckBox;
	Cxaccessibility::_di_IcxAccessibilityHelper FIAccessibilityHelper;
	int FOverlayImageIndex;
	int FSelectedImageIndex;
	int FStateImageIndex;
	void __fastcall DoExpand(bool AExpand, bool ARecurse);
	int __fastcall GetAbsoluteIndex();
	bool __fastcall GetChecked();
	bool __fastcall GetDeleting();
	bool __fastcall GetDropTarget();
	TdxTreeViewNode* __fastcall GetFirst();
	bool __fastcall GetFocused();
	Cxaccessibility::_di_IcxAccessibilityHelper __fastcall GetIAccessibilityHelper();
	bool __fastcall GetIsVisible();
	HIDESBASE TdxTreeViewNode* __fastcall GetItem(int Index);
	TdxTreeViewNode* __fastcall GetLast();
	TdxTreeViewNode* __fastcall InternalGetNext();
	TdxTreeViewNode* __fastcall GetParent();
	TdxTreeViewNode* __fastcall InternalGetPrev();
	HIDESBASE TdxTreeViewNode* __fastcall GetRoot();
	bool __fastcall GetSelected();
	TdxCustomTreeView* __fastcall GetTreeView();
	int __fastcall GetVisibleIndex();
	void __fastcall SetCaption(const System::UnicodeString AValue);
	void __fastcall SetChecked(bool AValue);
	void __fastcall SetCheckState(Cxlookandfeelpainters::TcxCheckBoxState AValue);
	void __fastcall SetCut(bool AValue);
	void __fastcall SetDropTarget(bool AValue);
	void __fastcall SetEnabled(bool AValue);
	void __fastcall SetExpandedImageIndex(int AValue);
	void __fastcall SetFocused(bool AValue);
	void __fastcall SetHideCheckBox(bool AValue);
	void __fastcall SetOverlayImageIndex(int AValue);
	void __fastcall SetSelected(bool AValue);
	void __fastcall SetSelectedImageIndex(int AValue);
	void __fastcall SetStateImageIndex(int AValue);
	
private:
	int FAbsoluteIndex;
	int FGroupIndex;
	
protected:
	virtual void __fastcall Added(Dxcustomtree::TdxTreeCustomNode* ANode);
	virtual void __fastcall AssignFromNode(Vcl::Comctrls::TTreeNode* ASource);
	virtual void __fastcall DataChanged();
	virtual void __fastcall DoNodeExpandStateChanged();
	virtual int __fastcall GetDefaultImageIndexValue();
	virtual Dxcustomtree::TdxTreeNodeStates __fastcall GetDefaultState();
	virtual System::UnicodeString __fastcall GetHintText();
	int __fastcall GetVisibleLevel();
	bool __fastcall IsHidden();
	virtual void __fastcall ReadData(System::Classes::TStream* AStream, const unsigned AVersion = (unsigned)(0x0));
	virtual void __fastcall WriteData(System::Classes::TStream* AStream);
	__property Cxaccessibility::_di_IcxAccessibilityHelper IAccessibilityHelper = {read=GetIAccessibilityHelper};
	
public:
	__fastcall virtual TdxTreeViewNode(Dxcustomtree::_di_IdxTreeOwner AOwner);
	__fastcall virtual ~TdxTreeViewNode();
	HIDESBASE TdxTreeViewNode* __fastcall AddChild(System::UnicodeString ACaption = System::UnicodeString(), void * AData = (void *)(0x0));
	HIDESBASE TdxTreeViewNode* __fastcall AddChildFirst(System::UnicodeString ACaption = System::UnicodeString(), void * AData = (void *)(0x0));
	HIDESBASE TdxTreeViewNode* __fastcall AddNode(TdxTreeViewNode* ANode, TdxTreeViewNode* ARelative, void * AData, Dxcustomtree::TdxTreeNodeAttachMode AttachMode);
	void __fastcall AlphaSort(bool ARecurse = false);
	virtual void __fastcall Assign(Dxcustomtree::TdxTreeCustomNode* ASource);
	void __fastcall Collapse(bool ARecurse = false);
	HIDESBASE bool __fastcall CustomSort(TdxTreeViewNodeCompareProc ACompareProc, NativeInt AData, bool ARecurse = false);
	virtual void __fastcall DeleteChildren();
	System::Types::TRect __fastcall DisplayRect(bool TextOnly);
	bool __fastcall EditCaption();
	void __fastcall EndEdit(bool ACancel);
	void __fastcall Expand(bool ARecurse = false);
	TdxTreeViewNode* __fastcall GetNext();
	TdxTreeViewNode* __fastcall GetPrev();
	void __fastcall Invalidate();
	void __fastcall MakeVisible();
	__property int AbsoluteIndex = {read=GetAbsoluteIndex, nodefault};
	__property System::UnicodeString Caption = {read=FCaption, write=SetCaption};
	__property bool Checked = {read=GetChecked, write=SetChecked, nodefault};
	__property Cxlookandfeelpainters::TcxCheckBoxState CheckState = {read=FCheckState, write=SetCheckState, nodefault};
	__property bool Cut = {read=FCut, write=SetCut, nodefault};
	__property bool Deleting = {read=GetDeleting, nodefault};
	__property bool DropTarget = {read=GetDropTarget, write=SetDropTarget, nodefault};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, nodefault};
	__property int ExpandedImageIndex = {read=FExpandedImageIndex, write=SetExpandedImageIndex, nodefault};
	__property bool Focused = {read=GetFocused, write=SetFocused, nodefault};
	__property bool HideCheckBox = {read=FHideCheckBox, write=SetHideCheckBox, nodefault};
	__property bool IsVisible = {read=GetIsVisible, nodefault};
	__property TdxTreeViewNode* Items[int Index] = {read=GetItem/*, default*/};
	__property TdxTreeViewNode* First = {read=GetFirst};
	__property TdxTreeViewNode* Last = {read=GetLast};
	__property TdxTreeViewNode* Next = {read=InternalGetNext};
	__property int OverlayImageIndex = {read=FOverlayImageIndex, write=SetOverlayImageIndex, nodefault};
	__property TdxTreeViewNode* Parent = {read=GetParent};
	__property TdxTreeViewNode* Prev = {read=InternalGetPrev};
	__property TdxTreeViewNode* Root = {read=GetRoot};
	__property bool Selected = {read=GetSelected, write=SetSelected, nodefault};
	__property int SelectedImageIndex = {read=FSelectedImageIndex, write=SetSelectedImageIndex, nodefault};
	__property int StateImageIndex = {read=FStateImageIndex, write=SetStateImageIndex, nodefault};
	__property TdxCustomTreeView* TreeView = {read=GetTreeView};
	__property int VisibleIndex = {read=GetVisibleIndex, nodefault};
};

#pragma pack(pop)

typedef System::TMetaClass* TdxTreeViewNodeClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTreeViewNodesEnumerator : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FIndex;
	TdxTreeViewNodes* FTreeNodes;
	
public:
	__fastcall TdxTreeViewNodesEnumerator(TdxTreeViewNodes* ATreeNodes);
	TdxTreeViewNode* __fastcall GetCurrent();
	bool __fastcall MoveNext();
	__property TdxTreeViewNode* Current = {read=GetCurrent};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxTreeViewNodesEnumerator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTreeViewNodes : public TdxTreeViewPersistent
{
	typedef TdxTreeViewPersistent inherited;
	
public:
	TdxTreeViewNode* operator[](int Index) { return this->Item[Index]; }
	
private:
	int __fastcall GetCount();
	HWND __fastcall GetHandle();
	TdxTreeViewNode* __fastcall GetItem(int Index);
	TdxTreeViewNode* __fastcall GetRoot();
	
protected:
	__property TdxTreeViewNode* Root = {read=GetRoot};
	
public:
	TdxTreeViewNode* __fastcall AddChildFirst(TdxTreeViewNode* AParent, const System::UnicodeString S);
	TdxTreeViewNode* __fastcall AddChild(TdxTreeViewNode* AParent, const System::UnicodeString S);
	TdxTreeViewNode* __fastcall AddChildObjectFirst(TdxTreeViewNode* AParent, const System::UnicodeString S, void * AData);
	TdxTreeViewNode* __fastcall AddChildObject(TdxTreeViewNode* AParent, const System::UnicodeString S, void * AData);
	TdxTreeViewNode* __fastcall AddObjectFirst(TdxTreeViewNode* ASibling, const System::UnicodeString S, void * AData);
	TdxTreeViewNode* __fastcall AddObject(TdxTreeViewNode* ASibling, const System::UnicodeString S, void * AData);
	TdxTreeViewNode* __fastcall AddNode(TdxTreeViewNode* ANode, TdxTreeViewNode* ARelative, const System::UnicodeString S, void * AData, Dxcustomtree::TdxTreeNodeAttachMode AttachMode);
	TdxTreeViewNode* __fastcall AddFirst(TdxTreeViewNode* ASibling, const System::UnicodeString S);
	TdxTreeViewNode* __fastcall Add(TdxTreeViewNode* ASibling, const System::UnicodeString S);
	bool __fastcall AlphaSort(bool ARecurse = false);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall BeginUpdate();
	void __fastcall Clear();
	void __fastcall Delete(TdxTreeViewNode* ANode);
	void __fastcall EndUpdate();
	TdxTreeViewNode* __fastcall GetFirstNode();
	TdxTreeViewNodesEnumerator* __fastcall GetEnumerator();
	TdxTreeViewNode* __fastcall Insert(TdxTreeViewNode* ASibling, const System::UnicodeString S);
	TdxTreeViewNode* __fastcall InsertObject(TdxTreeViewNode* ASibling, const System::UnicodeString S, void * AData);
	TdxTreeViewNode* __fastcall InsertNode(TdxTreeViewNode* ANode, TdxTreeViewNode* ASibling, const System::UnicodeString S, void * AData);
	bool __fastcall CustomSort(TdxTreeViewNodeCompareProc ASortProc, NativeInt AData, bool ARecurse = true);
	__property int Count = {read=GetCount, nodefault};
	__property HWND Handle = {read=GetHandle, nodefault};
	__property TdxTreeViewNode* Item[int Index] = {read=GetItem/*, default*/};
public:
	/* TdxTreeViewPersistent.Create */ inline __fastcall virtual TdxTreeViewNodes(TdxCustomTreeView* ATreeView) : TdxTreeViewPersistent(ATreeView) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxTreeViewNodes() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomTreeViewHintHelper : public Cxcontrols::TcxControlHintHelper
{
	typedef Cxcontrols::TcxControlHintHelper inherited;
	
private:
	TdxCustomTreeView* FTreeView;
	
protected:
	void __fastcall DoShowHint(const System::Types::TRect &AHintAreaBounds, const System::Types::TRect &ATextRect, const System::UnicodeString AText);
	virtual Cxcontrols::TcxControl* __fastcall GetOwnerControl();
	virtual bool __fastcall PtInCaller(const System::Types::TPoint &P);
	
public:
	__fastcall virtual TdxCustomTreeViewHintHelper(TdxCustomTreeView* ATreeView);
	virtual void __fastcall CheckHint();
	__property TdxCustomTreeView* TreeView = {read=FTreeView};
public:
	/* TcxCustomHintHelper.Destroy */ inline __fastcall virtual ~TdxCustomTreeViewHintHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTreeViewIncrementalSearchController : public Dxincrementalsearch::TdxIncrementalSearchController
{
	typedef Dxincrementalsearch::TdxIncrementalSearchController inherited;
	
private:
	TdxCustomTreeView* FTreeView;
	
protected:
	virtual bool __fastcall FocusNextItemWithText(const System::UnicodeString AText);
	
public:
	__fastcall TdxTreeViewIncrementalSearchController(TdxCustomTreeView* ATreeView);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TdxTreeViewIncrementalSearchController() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTreeViewInplaceEditingController : public Dxinplaceediting::TdxInplaceEditingController
{
	typedef Dxinplaceediting::TdxInplaceEditingController inherited;
	
private:
	TdxCustomTreeView* FTreeView;
	
protected:
	virtual void __fastcall InplaceEditKeyPress(System::TObject* Sender, System::WideChar &AKey);
	virtual void __fastcall StartItemCaptionEditing();
	
public:
	__fastcall TdxTreeViewInplaceEditingController(TdxCustomTreeView* ATreeView);
public:
	/* TdxInplaceEditingController.Destroy */ inline __fastcall virtual ~TdxTreeViewInplaceEditingController() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxCustomTreeViewDragObject : public Cxcontrols::TcxDragControlObject
{
	typedef Cxcontrols::TcxDragControlObject inherited;
	
private:
	Cxcontrols::TdxAutoScrollHelper* FAutoScrollHelper;
	TdxCustomTreeView* __fastcall GetTreeView();
	
protected:
	virtual Cxcontrols::TdxAutoScrollHelper* __fastcall CreateAutoScrollHelper();
	__property TdxCustomTreeView* TreeView = {read=GetTreeView};
	
public:
	__fastcall virtual TdxCustomTreeViewDragObject(Vcl::Controls::TControl* AControl);
	__fastcall virtual ~TdxCustomTreeViewDragObject();
	__property Cxcontrols::TdxAutoScrollHelper* AutoScrollHelper = {read=FAutoScrollHelper};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTreeViewAccessibilityHelper : public Cxaccessibility::TcxAccessibilityHelper
{
	typedef Cxaccessibility::TcxAccessibilityHelper inherited;
	
private:
	TdxCustomTreeView* __fastcall GetTreeView();
	
protected:
	virtual bool __fastcall ChildIsSimpleElement(int AIndex);
	virtual Cxaccessibility::TcxAccessibilityHelper* __fastcall GetChild(int AIndex);
	virtual int __fastcall GetChildCount();
	virtual bool __fastcall GetHitTest(int AScreenX, int AScreenY, /* out */ Cxaccessibility::_di_IcxAccessibilityHelper &AIAccessibilityHelper)/* overload */;
	virtual HWND __fastcall GetOwnerObjectWindow();
	virtual int __fastcall GetRole(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetState(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual Cxaccessibility::TcxAccessibleObjectProperties __fastcall GetSupportedProperties(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual bool __fastcall IsExtended();
	__property TdxCustomTreeView* TreeView = {read=GetTreeView};
	
public:
	virtual System::Types::TRect __fastcall GetScreenBounds(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
public:
	/* TcxAccessibilityHelper.Create */ inline __fastcall virtual TdxTreeViewAccessibilityHelper(System::TObject* AOwnerObject) : Cxaccessibility::TcxAccessibilityHelper(AOwnerObject) { }
	/* TcxAccessibilityHelper.Destroy */ inline __fastcall virtual ~TdxTreeViewAccessibilityHelper() { }
	
	/* Hoisted overloads: */
	
protected:
	inline Cxaccessibility::TcxAccessibleObjectHitTest __fastcall  GetHitTest(int AScreenX, int AScreenY, /* out */ int &AChildIndex){ return Cxaccessibility::TcxAccessibilityHelper::GetHitTest(AScreenX, AScreenY, AChildIndex); }
	
};

#pragma pack(pop)

typedef void __fastcall (__closure *TdxTreeViewCustomDrawEvent)(TdxCustomTreeView* Sender, Cxgraphics::TcxCanvas* ACanvas, TdxTreeViewViewInfo* AViewInfo, bool &AHandled);

typedef void __fastcall (__closure *TdxTreeViewCustomDrawNodeEvent)(TdxCustomTreeView* Sender, Cxgraphics::TcxCanvas* ACanvas, TdxTreeViewNodeViewInfo* ANodeViewInfo, bool &AHandled);

typedef void __fastcall (__closure *TdxTreeViewNodeTextEvent)(TdxCustomTreeView* Sender, TdxTreeViewNode* ANode, System::UnicodeString &AText);

typedef void __fastcall (__closure *TdxTreeViewGetImageIndexEvent)(TdxCustomTreeView* Sender, TdxTreeViewNode* ANode, int &AImageIndex);

typedef void __fastcall (__closure *TdxTreeViewNodeAllowEvent)(TdxCustomTreeView* Sender, TdxTreeViewNode* ANode, bool &Allow);

typedef void __fastcall (__closure *TdxTreeViewNodeCompareEvent)(TdxCustomTreeView* Sender, TdxTreeViewNode* ANode1, TdxTreeViewNode* ANode2, NativeInt AData, int &ACompare);

typedef void __fastcall (__closure *TdxTreeViewNodeEvent)(TdxCustomTreeView* Sender, TdxTreeViewNode* ANode);

class PASCALIMPLEMENTATION TdxCustomTreeView : public Cxcontrols::TcxControl
{
	typedef Cxcontrols::TcxControl inherited;
	
	
private:
	enum DECLSPEC_DENUM TMakeVisibleMode : unsigned char { mvmMakeVisible, mvmMakeTop, mvmJustExpanded };
	
	struct DECLSPEC_DRECORD TMakeVisibleNode
	{
	public:
		TdxTreeViewNode* Item;
		TdxCustomTreeView::TMakeVisibleMode Mode;
	};
	
	
	__interface DELPHIINTERFACE TdxTreeViewAddNodeFunc;
	typedef System::DelphiInterface<TdxTreeViewAddNodeFunc> _di_TdxTreeViewAddNodeFunc;
	__interface TdxTreeViewAddNodeFunc  : public System::IInterface 
	{
		virtual TdxTreeViewNode* __fastcall Invoke() = 0 ;
	};
	
	
private:
	static const System::Byte dxDefaultHeight = System::Byte(0xc8);
	
	static const System::Int8 dxDefaultWidth = System::Int8(0x64);
	
	Dxcoreclasses::TdxFastList* FAbsoluteNodes;
	Dxcoreclasses::TdxFastList* FAbsoluteVisibleNodes;
	System::Generics::Collections::TList__1<Cxaccessibility::TcxAccessibilityHelper*>* FAccessibleObjects;
	Cxclasses::TcxTimer* FChangeDelayTimer;
	TdxTreeViewChanges FChanges;
	TdxTreeViewNode* FDropTarget;
	TdxTreeViewNode* FEditingItem;
	System::Sysutils::TEncoding* FEncoding;
	TdxTreeViewNode* FFocusedNode;
	bool FFocusNodeOnMouseUp;
	System::UnicodeString FHighlightedText;
	TdxCustomTreeViewHintHelper* FHintHelper;
	TdxTreeViewHitTest* FHitTest;
	TdxTreeViewNode* FHottrackItem;
	Cxaccessibility::_di_IcxAccessibilityHelper FIAccessibilityHelper;
	Vcl::Imglist::TCustomImageList* FImages;
	Vcl::Imglist::TChangeLink* FImagesChangeLink;
	TdxTreeViewIncrementalSearchController* FIncrementalSearchController;
	TdxTreeViewInplaceEditingController* FInplaceEditingController;
	bool FIsAbsoluteNodesValid;
	bool FIsAbsoluteVisibleNodesValid;
	int FNodeAdditionEventLockCount;
	bool FIsSelectionChanged;
	TdxTreeViewNodes* FItems;
	int FLockCount;
	int FLockSelectionCount;
	TMakeVisibleNode FMakeVisibleNode;
	TdxTreeViewCustomOptionsBehavior* FOptionsBehavior;
	TdxTreeViewCustomOptionsSelection* FOptionsSelection;
	TdxTreeViewCustomOptionsView* FOptionsView;
	TdxTreeViewPainter* FPainter;
	TdxTreeViewNode* FPressedItem;
	TdxTreeViewNode* FRightClickNode;
	TdxTreeViewNode* FRoot;
	TdxTreeViewNode* FSelectionAnchor;
	Dxcoreclasses::TdxFastList* FSelections;
	Vcl::Imglist::TCustomImageList* FStateImages;
	Vcl::Imglist::TChangeLink* FStateImagesChangeLink;
	bool FUpdateItemsSelectionOnMouseUp;
	TdxTreeViewViewInfo* FViewInfo;
	TdxTreeViewNodeEvent FOnAddition;
	TdxTreeViewNodeEvent FOnCancelEdit;
	TdxTreeViewNodeAllowEvent FOnCanFocusNode;
	TdxTreeViewNodeAllowEvent FOnCanSelectNode;
	TdxTreeViewNodeEvent FOnCollapsed;
	TdxTreeViewNodeAllowEvent FOnCollapsing;
	TdxTreeViewNodeCompareEvent FOnCompare;
	TdxTreeViewCustomDrawEvent FOnCustomDraw;
	TdxTreeViewCustomDrawNodeEvent FOnCustomDrawNode;
	TdxTreeViewNodeEvent FOnDeletion;
	TdxTreeViewNodeTextEvent FOnEdited;
	TdxTreeViewNodeAllowEvent FOnEditing;
	TdxTreeViewNodeEvent FOnExpanded;
	TdxTreeViewNodeAllowEvent FOnExpanding;
	System::Classes::TNotifyEvent FOnFocusedNodeChanged;
	TdxTreeViewNodeEvent FOnGetChildren;
	TdxTreeViewNodeTextEvent FOnGetEditingText;
	TdxTreeViewGetImageIndexEvent FOnGetImageIndex;
	TdxTreeViewGetImageIndexEvent FOnGetSelectedImageIndex;
	TdxTreeViewNodeTextEvent FOnHint;
	TdxTreeViewNodeEvent FOnNodeStateChanged;
	System::Classes::TNotifyEvent FOnSelectionChanged;
	void __fastcall ChangeFocusedNode(TdxTreeViewNode* ANode, System::Classes::TShiftState AShift);
	bool __fastcall DoAddNodeToSelection(TdxTreeViewNode* ANode, int APosition = 0xffffffff);
	void __fastcall DoChangeDelayTimer(System::TObject* Sender);
	void __fastcall DoGetImageIndex(TdxTreeViewNode* ANode, int &AImageIndex);
	void __fastcall DoGetSelectedImageIndex(TdxTreeViewNode* ANode, int &AImageIndex);
	void __fastcall DoSelectionOperation(System::Sysutils::_di_TProc ASelectProc);
	void __fastcall FinishEditingTimer();
	int __fastcall GetAbsoluteCount();
	TdxTreeViewNode* __fastcall GetAbsoluteItem(int AIndex);
	int __fastcall GetAbsoluteVisibleCount();
	TdxTreeViewNode* __fastcall GetAbsoluteVisibleItem(int AIndex);
	Cxaccessibility::_di_IcxAccessibilityHelper __fastcall GetIAccessibilityHelper();
	Dxinplaceediting::_di_IdxInplaceEdit __fastcall GetInplaceEdit();
	TdxTreeViewNode* __fastcall GetSelected();
	int __fastcall GetSelectionCount();
	TdxTreeViewNode* __fastcall GetSelection(int Index);
	TdxTreeViewNode* __fastcall GetTopItem();
	void __fastcall ImagesChangeHandler(System::TObject* Sender);
	bool __fastcall IsSelectionChanged(Dxcoreclasses::TdxFastList* ASelectionBefore, Dxcoreclasses::TdxFastList* ASelectionAfter);
	void __fastcall SelectionChanged();
	void __fastcall SetDropTarget(TdxTreeViewNode* ANode);
	void __fastcall SetFocusedNode(TdxTreeViewNode* AValue);
	void __fastcall SetHighlightedText(System::UnicodeString AValue);
	void __fastcall SetHottrackItem(TdxTreeViewNode* AValue);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* AValue);
	void __fastcall SetItems(TdxTreeViewNodes* AValue);
	void __fastcall SetOptionsBehavior(TdxTreeViewCustomOptionsBehavior* AValue);
	void __fastcall SetOptionsSelection(TdxTreeViewCustomOptionsSelection* AValue);
	void __fastcall SetOptionsView(TdxTreeViewCustomOptionsView* AValue);
	void __fastcall SetRightClickNode(TdxTreeViewNode* AValue);
	void __fastcall SetSelected(TdxTreeViewNode* AValue);
	void __fastcall SetStateImages(Vcl::Imglist::TCustomImageList* AValue);
	void __fastcall SetTopItem(TdxTreeViewNode* AValue);
	MESSAGE void __fastcall WMGetObject(Winapi::Messages::TMessage &Message);
	
private:
	Cxclasses::TdxIntegerIndexes FGroupNodeCounts;
	
protected:
	void __fastcall AssignNodes(Vcl::Comctrls::TTreeNodes* ASource);
	void __fastcall AssignFromTreeView(Vcl::Comctrls::TTreeView* ASource);
	void __fastcall ReadData(System::Classes::TStream* AStream);
	void __fastcall ReadStructure(System::Classes::TStream* AStream, unsigned AVersion);
	void __fastcall WriteData(System::Classes::TStream* AStream);
	void __fastcall WriteStructure(System::Classes::TStream* AStream);
	void __fastcall FinishItemCaptionEditing(bool AAccept = true);
	Vcl::Controls::TWinControl* __fastcall GetEditingControl();
	virtual void __fastcall ValidatePasteText(System::UnicodeString &AText);
	bool __fastcall FocusNextItemWithText(const System::UnicodeString AText);
	void __fastcall Added(TdxTreeViewNode* ANode);
	void __fastcall AddNodeToSelection(TdxTreeViewNode* ANode, int APosition = 0xffffffff);
	virtual bool __fastcall AllowTouchScrollUIMode();
	void __fastcall BeginAddNode();
	DYNAMIC void __fastcall BoundsChanged();
	bool __fastcall CanFocusNode(TdxTreeViewNode* ANode);
	bool __fastcall CanSelectNode(TdxTreeViewNode* ANode);
	HIDESBASE void __fastcall Changed(TdxTreeViewChanges AChanges);
	virtual void __fastcall ChangeScaleEx(int M, int D, bool isDpiChange);
	void __fastcall CheckAbsoluteNodes();
	void __fastcall CheckHint();
	virtual TdxCustomTreeViewHintHelper* __fastcall CreateHintHelper();
	virtual TdxTreeViewHitTest* __fastcall CreateHitTest();
	virtual TdxTreeViewIncrementalSearchController* __fastcall CreateIncrementalSearchController();
	virtual TdxTreeViewInplaceEditingController* __fastcall CreateInplaceEditingController();
	virtual TdxTreeViewCustomOptionsBehavior* __fastcall CreateOptionsBehavior();
	virtual TdxTreeViewCustomOptionsSelection* __fastcall CreateOptionsSelection();
	virtual TdxTreeViewCustomOptionsView* __fastcall CreateOptionsView();
	virtual TdxTreeViewPainter* __fastcall CreatePainter();
	virtual TdxTreeViewViewInfo* __fastcall CreateViewInfo();
	virtual void __fastcall DoCancelEdit(TdxTreeViewNode* ANode);
	DYNAMIC void __fastcall DoCancelMode();
	virtual bool __fastcall DoCustomDraw(Cxgraphics::TcxCanvas* ACanvas, TdxTreeViewViewInfo* AViewInfo);
	virtual bool __fastcall DoCustomDrawNode(Cxgraphics::TcxCanvas* ACanvas, TdxTreeViewNodeViewInfo* ANodeViewInfo);
	virtual void __fastcall DoEdited(TdxTreeViewNode* ANode, System::UnicodeString &ACaption);
	virtual void __fastcall DoFocusedNodeChanged();
	virtual void __fastcall DoHint(TdxTreeViewNode* ANode, System::UnicodeString &AText);
	TdxTreeViewNode* __fastcall DoNodeAddition(_di_TdxTreeViewAddNodeFunc AAddNodeFunc);
	virtual void __fastcall DoNodeExpandStateChanged(TdxTreeViewNode* ANode);
	virtual void __fastcall DoPaint();
	void __fastcall DoSelect(TdxTreeViewNode* ANode, System::Classes::TShiftState AShift = System::Classes::TShiftState() );
	virtual void __fastcall DoSelectionChanged();
	virtual void __fastcall DoSelectNodeByMouse(TdxTreeViewNode* ANode, System::Classes::TShiftState AShift);
	void __fastcall DoValidateSelection();
	void __fastcall EndAddNode(TdxTreeViewNode* ANode);
	DYNAMIC void __fastcall FocusEnter();
	DYNAMIC void __fastcall FocusLeave();
	DYNAMIC void __fastcall FontChanged();
	virtual int __fastcall GetDefaultHeight();
	virtual int __fastcall GetDefaultWidth();
	int __fastcall GetImageIndex(TdxTreeViewNode* ANode);
	virtual Cxcontrols::TcxControlCustomScrollBarsClass __fastcall GetMainScrollBarsClass();
	System::Types::TRect __fastcall GetNodeBounds(TdxTreeViewNode* ANode);
	virtual TdxTreeViewNodeClass __fastcall GetNodeClass()/* overload */;
	System::Types::TRect __fastcall GetNodeTextRect(TdxTreeViewNode* ANode);
	virtual System::Uitypes::TColor __fastcall GetScrollContentForegroundColor();
	int __fastcall GetSelectedImageIndex(TdxTreeViewNode* ANode);
	virtual bool __fastcall HasGroups();
	virtual bool __fastcall HasHottrack();
	virtual void __fastcall InitScrollBarsParameters();
	void __fastcall InvalidateNode(TdxTreeViewNode* ANode);
	virtual bool __fastcall IsExplorerStyle();
	bool __fastcall IsNodeSelected(TdxTreeViewNode* ANode);
	bool __fastcall IsUpdateLocked();
	virtual void __fastcall LoadTreeFromStream(System::Classes::TStream* AStream, System::Sysutils::TEncoding* AEncoding);
	virtual void __fastcall LookAndFeelChanged(Cxlookandfeels::TcxLookAndFeel* Sender, Cxlookandfeels::TcxLookAndFeelValues AChangedValues);
	void __fastcall MultiSelectStyleChanged();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall NodeStateChanged(TdxTreeViewNode* ANode);
	virtual void __fastcall ProcessChanges(TdxTreeViewChanges AChanges);
	virtual void __fastcall SaveTreeToStream(System::Classes::TStream* AStream, System::Sysutils::TEncoding* AEncoding);
	virtual void __fastcall Scroll(Vcl::Forms::TScrollBarKind AScrollBarKind, System::Uitypes::TScrollCode AScrollCode, int &AScrollPos);
	void __fastcall SelectVisibleRange(TdxTreeViewNode* AStartNode, TdxTreeViewNode* AFinishNode);
	virtual bool __fastcall ShowFirstLevelNodes();
	virtual void __fastcall ShowInplaceEdit(TdxTreeViewNode* ANode, const System::Types::TRect &ABounds, const System::UnicodeString AText, Vcl::Graphics::TFont* AFont, int ASelStart, int ASelLength, int AMaxLength);
	void __fastcall SortTypeChanged();
	virtual void __fastcall UpdateAbsoluteVisibleNodes();
	void __fastcall UpdateChangeDelayTimer();
	void __fastcall UpdateViewPort(const System::Types::TPoint &P);
	void __fastcall ValidateSelection();
	virtual void __fastcall ViewPortChanged();
	virtual bool __fastcall AllowActivateEditByMouse();
	virtual bool __fastcall CanEdit(TdxTreeViewNode* ANode);
	virtual void __fastcall Edit(TdxTreeViewNode* ANode, const System::UnicodeString AText);
	virtual System::UnicodeString __fastcall GetEditingText(TdxTreeViewNode* ANode);
	virtual void __fastcall InplaceEditKeyPress(System::TObject* Sender, System::WideChar &AKey);
	bool __fastcall StartItemCaptionEditing(TdxTreeViewNode* ANode);
	bool __fastcall CheckFocusedObject();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	void __fastcall CalculateHitTest(int X, int Y);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseLeave(Vcl::Controls::TControl* AControl);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall BeforeDelete(Dxcustomtree::TdxTreeCustomNode* Sender);
	virtual bool __fastcall CanCollapse(Dxcustomtree::TdxTreeCustomNode* Sender);
	virtual bool __fastcall CanExpand(Dxcustomtree::TdxTreeCustomNode* Sender);
	virtual void __fastcall Collapsed(Dxcustomtree::TdxTreeCustomNode* Sender);
	virtual void __fastcall DeleteNode(Dxcustomtree::TdxTreeCustomNode* Sender);
	virtual void __fastcall Expanded(Dxcustomtree::TdxTreeCustomNode* Sender);
	Dxcustomtree::TdxTreeCustomNodeClass __fastcall GetNodeClass(Dxcustomtree::TdxTreeCustomNode* ARelativeNode)/* overload */;
	HIDESBASE System::Classes::TPersistent* __fastcall GetOwner();
	void __fastcall LoadChildren(Dxcustomtree::TdxTreeCustomNode* Sender);
	void __fastcall TreeNotification(Dxcustomtree::TdxTreeCustomNode* Sender, Dxcustomtree::TdxTreeNodeNotifications ANotification);
	DYNAMIC bool __fastcall CanDrag(int X, int Y);
	DYNAMIC void __fastcall DragOver(System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	virtual void __fastcall DrawDragImage(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R);
	virtual System::Types::TPoint __fastcall GetDragImagesSize();
	DYNAMIC Cxcontrols::TDragControlObjectClass __fastcall GetDragObjectClass();
	virtual bool __fastcall HasDragImages();
	virtual void __fastcall Loaded();
	__property Dxcoreclasses::TdxFastList* AbsoluteVisibleNodes = {read=FAbsoluteVisibleNodes};
	__property System::Generics::Collections::TList__1<Cxaccessibility::TcxAccessibilityHelper*>* AccessibleObjects = {read=FAccessibleObjects};
	__property TdxTreeViewNode* EditingItem = {read=FEditingItem};
	__property bool FocusNodeOnMouseUp = {read=FFocusNodeOnMouseUp, write=FFocusNodeOnMouseUp, nodefault};
	__property System::UnicodeString HighlightedText = {read=FHighlightedText, write=SetHighlightedText};
	__property TdxCustomTreeViewHintHelper* HintHelper = {read=FHintHelper};
	__property TdxTreeViewHitTest* HitTest = {read=FHitTest};
	__property TdxTreeViewNode* HottrackItem = {read=FHottrackItem, write=SetHottrackItem};
	__property Cxaccessibility::_di_IcxAccessibilityHelper IAccessibilityHelper = {read=GetIAccessibilityHelper};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property TdxTreeViewIncrementalSearchController* IncrementalSearchController = {read=FIncrementalSearchController};
	__property Dxinplaceediting::_di_IdxInplaceEdit InplaceEdit = {read=GetInplaceEdit};
	__property TdxTreeViewCustomOptionsBehavior* OptionsBehavior = {read=FOptionsBehavior, write=SetOptionsBehavior};
	__property TdxTreeViewCustomOptionsSelection* OptionsSelection = {read=FOptionsSelection, write=SetOptionsSelection};
	__property TdxTreeViewCustomOptionsView* OptionsView = {read=FOptionsView, write=SetOptionsView};
	__property TdxTreeViewPainter* Painter = {read=FPainter};
	__property TdxTreeViewNode* PressedItem = {read=FPressedItem};
	__property TdxTreeViewNode* RightClickNode = {read=FRightClickNode, write=SetRightClickNode};
	__property Vcl::Imglist::TCustomImageList* StateImages = {read=FStateImages, write=SetStateImages};
	__property TdxTreeViewViewInfo* ViewInfo = {read=FViewInfo};
	__property TdxTreeViewNodeEvent OnAddition = {read=FOnAddition, write=FOnAddition};
	__property TdxTreeViewNodeEvent OnCancelEdit = {read=FOnCancelEdit, write=FOnCancelEdit};
	__property TdxTreeViewNodeAllowEvent OnCanFocusNode = {read=FOnCanFocusNode, write=FOnCanFocusNode};
	__property TdxTreeViewNodeAllowEvent OnCanSelectNode = {read=FOnCanSelectNode, write=FOnCanSelectNode};
	__property TdxTreeViewNodeEvent OnCollapsed = {read=FOnCollapsed, write=FOnCollapsed};
	__property TdxTreeViewNodeAllowEvent OnCollapsing = {read=FOnCollapsing, write=FOnCollapsing};
	__property TdxTreeViewNodeCompareEvent OnCompare = {read=FOnCompare, write=FOnCompare};
	__property TdxTreeViewCustomDrawEvent OnCustomDraw = {read=FOnCustomDraw, write=FOnCustomDraw};
	__property TdxTreeViewCustomDrawNodeEvent OnCustomDrawNode = {read=FOnCustomDrawNode, write=FOnCustomDrawNode};
	__property TdxTreeViewNodeEvent OnDeletion = {read=FOnDeletion, write=FOnDeletion};
	__property TdxTreeViewNodeTextEvent OnEdited = {read=FOnEdited, write=FOnEdited};
	__property TdxTreeViewNodeAllowEvent OnEditing = {read=FOnEditing, write=FOnEditing};
	__property TdxTreeViewNodeEvent OnExpanded = {read=FOnExpanded, write=FOnExpanded};
	__property TdxTreeViewNodeAllowEvent OnExpanding = {read=FOnExpanding, write=FOnExpanding};
	__property System::Classes::TNotifyEvent OnFocusedNodeChanged = {read=FOnFocusedNodeChanged, write=FOnFocusedNodeChanged};
	__property TdxTreeViewNodeEvent OnGetChildren = {read=FOnGetChildren, write=FOnGetChildren};
	__property TdxTreeViewNodeTextEvent OnGetEditingText = {read=FOnGetEditingText, write=FOnGetEditingText};
	__property TdxTreeViewGetImageIndexEvent OnGetImageIndex = {read=FOnGetImageIndex, write=FOnGetImageIndex};
	__property TdxTreeViewGetImageIndexEvent OnGetSelectedImageIndex = {read=FOnGetSelectedImageIndex, write=FOnGetSelectedImageIndex};
	__property TdxTreeViewNodeTextEvent OnHint = {read=FOnHint, write=FOnHint};
	__property TdxTreeViewNodeEvent OnNodeStateChanged = {read=FOnNodeStateChanged, write=FOnNodeStateChanged};
	__property System::Classes::TNotifyEvent OnSelectionChanged = {read=FOnSelectionChanged, write=FOnSelectionChanged};
	
public:
	__fastcall virtual TdxCustomTreeView(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxCustomTreeView();
	bool __fastcall AlphaSort(bool ARecurse = true);
	virtual void __fastcall BeforeDestruction();
	void __fastcall BeginUpdate();
	bool __fastcall CustomSort(TdxTreeViewNodeCompareProc ASortProc, NativeInt AData, bool ARecurse = true);
	void __fastcall EndEdit(bool ACancel);
	void __fastcall EndUpdate();
	void __fastcall ExpandTo(TdxTreeViewNode* ANode);
	void __fastcall FullCollapse();
	void __fastcall FullExpand();
	void __fastcall FullRefresh();
	bool __fastcall GetNodeAtPos(const System::Types::TPoint &P, /* out */ TdxTreeViewNode* &ANode);
	TdxTreeViewHitTest* __fastcall GetHitTestAt(int X, int Y);
	bool __fastcall IsEditing();
	void __fastcall MakeVisible(TdxTreeViewNode* ANode);
	HIDESBASE void __fastcall ScrollBy(int ADeltaX, int ADeltaY);
	void __fastcall LoadFromFile(const System::UnicodeString AFileName)/* overload */;
	void __fastcall LoadFromFile(const System::UnicodeString AFileName, System::Sysutils::TEncoding* AEncoding)/* overload */;
	void __fastcall LoadFromStream(System::Classes::TStream* AStream)/* overload */;
	void __fastcall LoadFromStream(System::Classes::TStream* AStream, System::Sysutils::TEncoding* AEncoding)/* overload */;
	void __fastcall SaveToFile(const System::UnicodeString AFileName)/* overload */;
	void __fastcall SaveToFile(const System::UnicodeString AFileName, System::Sysutils::TEncoding* AEncoding)/* overload */;
	void __fastcall SaveToStream(System::Classes::TStream* AStream)/* overload */;
	void __fastcall SaveToStream(System::Classes::TStream* AStream, System::Sysutils::TEncoding* AEncoding)/* overload */;
	void __fastcall LoadDataFromFile(const System::UnicodeString AFileName);
	void __fastcall LoadDataFromStream(System::Classes::TStream* AStream);
	void __fastcall SaveDataToFile(const System::UnicodeString AFileName);
	void __fastcall SaveDataToStream(System::Classes::TStream* AStream);
	void __fastcall BeginSelect();
	void __fastcall ClearSelection(bool AKeepPrimary = false);
	void __fastcall Deselect(TdxTreeViewNode* ANode)/* overload */;
	void __fastcall Deselect(TdxTreeViewNode* const *ANodes, const int ANodes_High)/* overload */;
	void __fastcall Deselect(System::Classes::TList* ANodes)/* overload */;
	void __fastcall EndSelect();
	void __fastcall GetSelectedData(System::Classes::TList* AList);
	TdxTreeViewNode* __fastcall GetSelections(System::Classes::TList* AList);
	void __fastcall Select(TdxTreeViewNode* ANode, System::Classes::TShiftState AShift = System::Classes::TShiftState() , bool ASyncFocused = true)/* overload */;
	void __fastcall Select(TdxTreeViewNode* const *ANodes, const int ANodes_High, bool ASyncFocused = true)/* overload */;
	void __fastcall Select(System::Classes::TList* ANodes, bool ASyncFocused = true)/* overload */;
	void __fastcall Subselect(TdxTreeViewNode* ANode, bool AValidate = false);
	__property int AbsoluteCount = {read=GetAbsoluteCount, nodefault};
	__property TdxTreeViewNode* AbsoluteItems[int Index] = {read=GetAbsoluteItem};
	__property int AbsoluteVisibleCount = {read=GetAbsoluteVisibleCount, nodefault};
	__property TdxTreeViewNode* AbsoluteVisibleItems[int Index] = {read=GetAbsoluteVisibleItem};
	__property TdxTreeViewNode* DropTarget = {read=FDropTarget, write=SetDropTarget};
	__property TdxTreeViewNode* FocusedNode = {read=FFocusedNode, write=SetFocusedNode};
	__property TdxTreeViewNodes* Items = {read=FItems, write=SetItems};
	__property TdxTreeViewNode* Root = {read=FRoot};
	__property TdxTreeViewNode* Selected = {read=GetSelected, write=SetSelected};
	__property int SelectionCount = {read=GetSelectionCount, nodefault};
	__property TdxTreeViewNode* Selections[int Index] = {read=GetSelection};
	__property TdxTreeViewNode* TopItem = {read=GetTopItem, write=SetTopItem};
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxCustomTreeView(HWND ParentWindow) : Cxcontrols::TcxControl(ParentWindow) { }
	
private:
	void *__IdxSkinSupport;	// Cxlookandfeels::IdxSkinSupport 
	void *__IdxInplaceEditContainer;	// Dxinplaceediting::IdxInplaceEditContainer 
	void *__IdxTreeOwner;	// Dxcustomtree::IdxTreeOwner 
	
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
	// {4C60E56F-3DD3-498B-9156-155BF29217D2}
	operator Dxinplaceediting::_di_IdxInplaceEditContainer()
	{
		Dxinplaceediting::_di_IdxInplaceEditContainer intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxinplaceediting::IdxInplaceEditContainer*(void) { return (Dxinplaceediting::IdxInplaceEditContainer*)&__IdxInplaceEditContainer; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E5BD359F-E1D0-4ABC-9D9D-45A6516F2F8B}
	operator Dxcustomtree::_di_IdxTreeOwner()
	{
		Dxcustomtree::_di_IdxTreeOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxcustomtree::IdxTreeOwner*(void) { return (Dxcustomtree::IdxTreeOwner*)&__IdxTreeOwner; }
	#endif
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTreeViewCustomOptionsView : public TdxTreeViewPersistent
{
	typedef TdxTreeViewPersistent inherited;
	
private:
	int FIndent;
	int FItemHeight;
	bool FShowCheckBoxes;
	bool FShowEndEllipsis;
	bool FShowExpandButtons;
	bool FShowLines;
	bool FShowRoot;
	bool FUseImageIndexForExpanded;
	bool FUseImageIndexForSelected;
	System::Uitypes::TScrollStyle __fastcall GetScrollBars();
	void __fastcall SetIndent(int AValue);
	void __fastcall SetItemHeight(int AValue);
	void __fastcall SetScrollBars(System::Uitypes::TScrollStyle AValue);
	void __fastcall SetShowCheckBoxes(bool AValue);
	void __fastcall SetShowEndEllipsis(bool AValue);
	void __fastcall SetShowExpandButtons(bool AValue);
	void __fastcall SetShowLines(bool AValue);
	void __fastcall SetShowRoot(const bool Value);
	void __fastcall SetUseImageIndexForExpanded(const bool Value);
	void __fastcall SetUseImageIndexForSelected(const bool Value);
	
protected:
	void __fastcall Changed(TdxTreeViewChanges AChanges);
	virtual void __fastcall ChangeScale(int M, int D);
	virtual bool __fastcall GetDefaultShowEndEllipsis();
	
public:
	__fastcall virtual TdxTreeViewCustomOptionsView(TdxCustomTreeView* ATreeView);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property int Indent = {read=FIndent, write=SetIndent, default=19};
	__property int ItemHeight = {read=FItemHeight, write=SetItemHeight, nodefault};
	__property System::Uitypes::TScrollStyle ScrollBars = {read=GetScrollBars, write=SetScrollBars, nodefault};
	__property bool ShowCheckBoxes = {read=FShowCheckBoxes, write=SetShowCheckBoxes, nodefault};
	__property bool ShowEndEllipsis = {read=FShowEndEllipsis, write=SetShowEndEllipsis, nodefault};
	__property bool ShowExpandButtons = {read=FShowExpandButtons, write=SetShowExpandButtons, nodefault};
	__property bool ShowLines = {read=FShowLines, write=SetShowLines, nodefault};
	__property bool ShowRoot = {read=FShowRoot, write=SetShowRoot, nodefault};
	__property bool UseImageIndexForExpanded = {read=FUseImageIndexForExpanded, write=SetUseImageIndexForExpanded, nodefault};
	__property bool UseImageIndexForSelected = {read=FUseImageIndexForSelected, write=SetUseImageIndexForSelected, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxTreeViewCustomOptionsView() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTreeViewCustomOptionsBehavior : public TdxTreeViewPersistent
{
	typedef TdxTreeViewPersistent inherited;
	
private:
	bool FCaptionEditing;
	int FChangeDelay;
	bool FHotTrack;
	bool FReadOnly;
	Vcl::Comctrls::TSortType FSortType;
	bool FToolTips;
	void __fastcall SetCaptionEditing(bool AValue);
	void __fastcall SetChangeDelay(int AValue);
	void __fastcall SetSortType(Vcl::Comctrls::TSortType AValue);
	
protected:
	__property bool ReadOnly = {read=FReadOnly, write=FReadOnly, default=0};
	
public:
	__fastcall virtual TdxTreeViewCustomOptionsBehavior(TdxCustomTreeView* ATreeView);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property bool CaptionEditing = {read=FCaptionEditing, write=SetCaptionEditing, nodefault};
	__property int ChangeDelay = {read=FChangeDelay, write=SetChangeDelay, nodefault};
	__property bool HotTrack = {read=FHotTrack, write=FHotTrack, nodefault};
	__property Vcl::Comctrls::TSortType SortType = {read=FSortType, write=SetSortType, default=0};
	__property bool ToolTips = {read=FToolTips, write=FToolTips, default=1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxTreeViewCustomOptionsBehavior() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTreeViewCustomOptionsSelection : public TdxTreeViewPersistent
{
	typedef TdxTreeViewPersistent inherited;
	
private:
	bool FRowSelect;
	bool FHideSelection;
	bool FMultiSelect;
	Vcl::Comctrls::TMultiSelectStyle FMultiSelectStyle;
	bool FRightClickSelect;
	void __fastcall SetHideSelection(bool AValue);
	void __fastcall SetMultiSelect(bool AValue);
	void __fastcall SetMultiSelectStyle(Vcl::Comctrls::TMultiSelectStyle AValue);
	void __fastcall SetRowSelect(bool AValue);
	
protected:
	void __fastcall Changed(TdxTreeViewChanges AChanges);
	virtual bool __fastcall DefaultHideSelectionValue();
	
public:
	__fastcall virtual TdxTreeViewCustomOptionsSelection(TdxCustomTreeView* ATreeView);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property bool HideSelection = {read=FHideSelection, write=SetHideSelection, nodefault};
	__property bool MultiSelect = {read=FMultiSelect, write=SetMultiSelect, nodefault};
	__property Vcl::Comctrls::TMultiSelectStyle MultiSelectStyle = {read=FMultiSelectStyle, write=SetMultiSelectStyle, default=1};
	__property bool RightClickSelect = {read=FRightClickSelect, write=FRightClickSelect, nodefault};
	__property bool RowSelect = {read=FRowSelect, write=SetRowSelect, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxTreeViewCustomOptionsSelection() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTreeViewHitTest : public TdxTreeViewPersistent
{
	typedef TdxTreeViewPersistent inherited;
	
private:
	bool FHitAtCheckBox;
	bool FHitAtExpandButton;
	bool FHitAtImage;
	bool FHitAtSelection;
	bool FHitAtStateImage;
	bool FHitAtText;
	System::TObject* FHitObject;
	System::Types::TPoint FHitPoint;
	bool __fastcall GetHitAtNode();
	TdxTreeViewNode* __fastcall GetHitObjectAsNode();
	
public:
	virtual void __fastcall Reset();
	__property bool HitAtCheckBox = {read=FHitAtCheckBox, write=FHitAtCheckBox, nodefault};
	__property bool HitAtExpandButton = {read=FHitAtExpandButton, write=FHitAtExpandButton, nodefault};
	__property bool HitAtImage = {read=FHitAtImage, write=FHitAtImage, nodefault};
	__property bool HitAtNode = {read=GetHitAtNode, nodefault};
	__property bool HitAtSelection = {read=FHitAtSelection, write=FHitAtSelection, nodefault};
	__property bool HitAtStateImage = {read=FHitAtStateImage, write=FHitAtStateImage, nodefault};
	__property bool HitAtText = {read=FHitAtText, write=FHitAtText, nodefault};
	__property System::TObject* HitObject = {read=FHitObject, write=FHitObject};
	__property TdxTreeViewNode* HitObjectAsNode = {read=GetHitObjectAsNode};
	__property System::Types::TPoint HitPoint = {read=FHitPoint, write=FHitPoint};
public:
	/* TdxTreeViewPersistent.Create */ inline __fastcall virtual TdxTreeViewHitTest(TdxCustomTreeView* ATreeView) : TdxTreeViewPersistent(ATreeView) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxTreeViewHitTest() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTreeViewPainter : public TdxTreeViewPersistent
{
	typedef TdxTreeViewPersistent inherited;
	
private:
	Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetLookAndFeelPainter();
	
protected:
	virtual void __fastcall DrawBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, TdxTreeViewViewInfo* AViewInfo);
	virtual void __fastcall DrawCheckBox(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, TdxTreeViewNodeViewInfo* ANodeViewInfo);
	virtual void __fastcall DrawExpandButton(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, TdxTreeViewNodeViewInfo* ANodeViewInfo)/* overload */;
	virtual void __fastcall DrawNodeCaption(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, TdxTreeViewNodeViewInfo* ANodeViewInfo);
	virtual void __fastcall DrawNodeFocus(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, TdxTreeViewNodeViewInfo* ANodeViewInfo);
	virtual void __fastcall DrawNodeImage(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, TdxTreeViewNodeViewInfo* ANodeViewInfo);
	virtual void __fastcall DrawNodeSelection(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, TdxTreeViewNodeViewInfo* ANodeViewInfo);
	virtual void __fastcall DrawNodeStateImage(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, TdxTreeViewNodeViewInfo* ANodeViewInfo);
	virtual void __fastcall DrawTreeLine(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, TdxTreeViewNodeViewInfo* ANodeViewInfo);
	virtual System::Uitypes::TColor __fastcall GetBackgroundColor();
	virtual System::Uitypes::TColor __fastcall GetTextColor(TdxTreeViewNodeViewInfo* ANodeViewInfo);
	__property Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* LookAndFeelPainter = {read=GetLookAndFeelPainter};
public:
	/* TdxTreeViewPersistent.Create */ inline __fastcall virtual TdxTreeViewPainter(TdxCustomTreeView* ATreeView) : TdxTreeViewPersistent(ATreeView) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxTreeViewPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTreeViewCustomViewInfo : public TdxTreeViewPersistent
{
	typedef TdxTreeViewPersistent inherited;
	
private:
	bool FIsRightToLeftConverted;
	Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetLookAndFeelPainter();
	TdxTreeViewPainter* __fastcall GetPainter();
	Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	
protected:
	System::Types::TRect FBounds;
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	__property bool IsRightToLeftConverted = {read=FIsRightToLeftConverted, nodefault};
	
public:
	virtual void __fastcall Calculate(const System::Types::TRect &ABounds);
	virtual void __fastcall CalculateHitTest(TdxTreeViewHitTest* AHitTest) = 0 ;
	virtual void __fastcall Draw(Cxgraphics::TcxCanvas* ACanvas) = 0 ;
	bool __fastcall IsRowSelect();
	void __fastcall RightToLeftConversion(const System::Types::TRect &ABounds);
	__property System::Types::TRect Bounds = {read=FBounds};
	__property Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* LookAndFeelPainter = {read=GetLookAndFeelPainter};
	__property TdxTreeViewPainter* Painter = {read=GetPainter};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=GetScaleFactor};
public:
	/* TdxTreeViewPersistent.Create */ inline __fastcall virtual TdxTreeViewCustomViewInfo(TdxCustomTreeView* ATreeView) : TdxTreeViewPersistent(ATreeView) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxTreeViewCustomViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTreeViewNodeViewInfo : public TdxTreeViewCustomViewInfo
{
	typedef TdxTreeViewCustomViewInfo inherited;
	
private:
	static const System::Int8 ElementsOffset = System::Int8(0x4);
	
	TdxTreeViewNode* FData;
	Dxcoregraphics::_di_IdxColorPalette FImageColorPalette;
	int __fastcall GetHeight();
	Vcl::Imglist::TCustomImageList* __fastcall GetImages();
	
protected:
	System::Types::TRect FCheckBoxRect;
	System::Types::TRect FExpandButtonRect;
	System::Types::TRect FImageRect;
	int FLevelIndent;
	System::StaticArray<System::Types::TRect, 2> FImageRects;
	System::Types::TRect FSelectionRect;
	System::StaticArray<System::Types::TRect, 2> FStateImageRects;
	System::Types::TRect FStateImageRect;
	System::StaticArray<System::Types::TRect, 2> FTextRects;
	System::Types::TRect FTextRect;
	int FTextWidth;
	System::Types::TRect FHorizontalTreeLineBounds;
	System::Types::TRect FVerticalTreeLineBounds;
	System::Uitypes::TColor FTextColor;
	virtual void __fastcall AdjustTextRect();
	virtual void __fastcall CalculateTreeLines();
	Dxcoregraphics::_di_IdxColorPalette __fastcall GetImageColorPalette(const System::Types::TRect &R);
	virtual int __fastcall GetLevelOffset();
	Cxlookandfeelpainters::TdxTreeViewNodeStates __fastcall GetState();
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	virtual int __fastcall MeasureHeight(int AImageSize, int AExpandButtonSize, int ACheckHeight, int ATextHeight);
	
public:
	virtual void __fastcall DefaultDraw(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall Draw(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawCaption(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawCheckBox(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawExpandButton(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawFocus(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawImage(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawSelection(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall DrawStateImage(Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall DrawTreeLine(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R);
	void __fastcall DrawTreeLines(Cxgraphics::TcxCanvas* ACanvas);
	virtual void __fastcall Calculate(const System::Types::TRect &ABounds);
	virtual void __fastcall CalculateHitTest(TdxTreeViewHitTest* AHitTest);
	virtual System::Types::TRect __fastcall CalculateSelectionRect();
	int __fastcall GetImageIndex();
	virtual bool __fastcall HasCheckBox();
	virtual bool __fastcall HasExpandButton();
	virtual bool __fastcall HasFocus();
	bool __fastcall HasRootIndent();
	virtual bool __fastcall HasHottrack();
	virtual bool __fastcall HasImage();
	virtual bool __fastcall HasSelection();
	virtual bool __fastcall HasStateImage();
	virtual bool __fastcall HasTreeLines();
	void __fastcall SetData(TdxTreeViewNode* ANode);
	__property System::Types::TRect CheckBoxRect = {read=FCheckBoxRect};
	__property System::Types::TRect ExpandButtonRect = {read=FExpandButtonRect};
	__property int Height = {read=GetHeight, nodefault};
	__property Dxcoregraphics::_di_IdxColorPalette ImageColorPalette = {read=FImageColorPalette, write=FImageColorPalette};
	__property System::Types::TRect ImageRect = {read=FImageRect};
	__property Vcl::Imglist::TCustomImageList* Images = {read=GetImages};
	__property int LevelIndent = {read=FLevelIndent, nodefault};
	__property int LevelOffset = {read=GetLevelOffset, nodefault};
	__property TdxTreeViewNode* Node = {read=FData};
	__property System::Types::TRect SelectionRect = {read=FSelectionRect};
	__property System::Types::TRect TextRect = {read=FTextRect};
	__property int TextWidth = {read=FTextWidth, nodefault};
	__property System::Types::TRect HorizontalTreeLineBounds = {read=FHorizontalTreeLineBounds};
	__property System::Types::TRect VerticalTreeLineBounds = {read=FVerticalTreeLineBounds};
public:
	/* TdxTreeViewPersistent.Create */ inline __fastcall virtual TdxTreeViewNodeViewInfo(TdxCustomTreeView* ATreeView) : TdxTreeViewCustomViewInfo(ATreeView) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxTreeViewNodeViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTreeViewViewInfo : public TdxTreeViewCustomViewInfo
{
	typedef TdxTreeViewCustomViewInfo inherited;
	
private:
	int FBaseFirstGroupInterval;
	int FBaseGroupInterval;
	System::Types::TRect FContentRect;
	System::Types::TSize FContentSize;
	TdxTreeViewNodeViewInfo* FNodeViewInfo;
	System::Types::TPoint FViewPort;
	Dxcoreclasses::TdxFastList* __fastcall GetAbsoluteVisibleNodes();
	int __fastcall GetFirstVisibleIndex();
	System::Types::TRect __fastcall GetNodeRowSelectionRect();
	int __fastcall GetNumberOfNodesInContentRect();
	void __fastcall SetViewPort(const System::Types::TPoint &AValue);
	
protected:
	System::Types::TPoint FContentOffset;
	int FFirstGroupInterval;
	int FGroupInterval;
	int __fastcall CalculateContentWidth();
	void __fastcall CheckViewPort();
	virtual TdxTreeViewNodeViewInfo* __fastcall CreateNodeViewInfo();
	virtual void __fastcall DoRightToLeftConversion(const System::Types::TRect &ABounds);
	System::Types::TPoint __fastcall GetContentOffset();
	int __fastcall GetNodeIndexByPosition(int APos, /* out */ int &AGroupIndex);
	int __fastcall GetNodePositionByIndex(int AIndex);
	int __fastcall GetGroupNodeCount(int AIndex);
	int __fastcall GetGroupCount();
	__property Dxcoreclasses::TdxFastList* AbsoluteVisibleNodes = {read=GetAbsoluteVisibleNodes};
	__property int FirstVisibleIndex = {read=GetFirstVisibleIndex, nodefault};
	
public:
	__fastcall virtual TdxTreeViewViewInfo(TdxCustomTreeView* ATreeView);
	__fastcall virtual ~TdxTreeViewViewInfo();
	virtual void __fastcall Calculate(const System::Types::TRect &ABounds);
	virtual void __fastcall CalculateHitTest(TdxTreeViewHitTest* AHitTest);
	virtual void __fastcall Draw(Cxgraphics::TcxCanvas* ACanvas);
	bool __fastcall GetNodeAtPos(const System::Types::TPoint &P, /* out */ int &ANodeIndex);
	__property System::Types::TRect ContentRect = {read=FContentRect};
	__property System::Types::TSize ContentSize = {read=FContentSize};
	__property TdxTreeViewNodeViewInfo* NodeViewInfo = {read=FNodeViewInfo};
	__property int NumberOfNodesInContentRect = {read=GetNumberOfNodesInContentRect, nodefault};
	__property System::Types::TPoint ViewPort = {read=FViewPort, write=SetViewPort};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTreeViewOptionsView : public TdxTreeViewCustomOptionsView
{
	typedef TdxTreeViewCustomOptionsView inherited;
	
private:
	Vcl::Imglist::TCustomImageList* __fastcall GetImages();
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* AValue);
	
private:
	bool __fastcall GetRowSelect();
	void __fastcall SetRowSelect(bool AValue);
	
protected:
	virtual bool __fastcall GetDefaultShowEndEllipsis();
	
__published:
	__property Vcl::Imglist::TCustomImageList* Images = {read=GetImages, write=SetImages};
	__property ItemHeight = {default=0};
	__property bool RowSelect = {read=GetRowSelect, write=SetRowSelect, default=0};
	__property ShowCheckBoxes = {default=0};
	__property ShowLines = {default=1};
	__property ShowRoot = {default=1};
public:
	/* TdxTreeViewCustomOptionsView.Create */ inline __fastcall virtual TdxTreeViewOptionsView(TdxCustomTreeView* ATreeView) : TdxTreeViewCustomOptionsView(ATreeView) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxTreeViewOptionsView() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxInternalTreeView : public TdxCustomTreeView
{
	typedef TdxCustomTreeView inherited;
	
private:
	TdxTreeViewOptionsView* __fastcall GetOptionsView();
	HIDESBASE void __fastcall SetOptionsView(TdxTreeViewOptionsView* AValue);
	
protected:
	virtual TdxTreeViewCustomOptionsView* __fastcall CreateOptionsView();
	virtual System::Uitypes::TScrollStyle __fastcall GetDefaultScrollbarsValue();
	
__published:
	__property Align = {default=0};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property LookAndFeel;
	__property OptionsBehavior;
	__property TdxTreeViewOptionsView* OptionsView = {read=GetOptionsView, write=SetOptionsView};
	__property OnCollapsed;
	__property OnCollapsing;
	__property OnCustomDrawNode;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDeletion;
	__property OnExpanded;
	__property OnExpanding;
	__property OnGetChildren;
	__property OnKeyDown;
	__property OnNodeStateChanged;
	__property OnSelectionChanged;
public:
	/* TdxCustomTreeView.Create */ inline __fastcall virtual TdxInternalTreeView(System::Classes::TComponent* AOwner) : TdxCustomTreeView(AOwner) { }
	/* TdxCustomTreeView.Destroy */ inline __fastcall virtual ~TdxInternalTreeView() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxInternalTreeView(HWND ParentWindow) : TdxCustomTreeView(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTreeViewControlOptionsView : public TdxTreeViewCustomOptionsView
{
	typedef TdxTreeViewCustomOptionsView inherited;
	
__published:
	__property Indent = {default=19};
	__property ItemHeight = {default=0};
	__property ScrollBars = {default=3};
	__property ShowCheckBoxes = {default=0};
	__property ShowEndEllipsis = {default=0};
	__property ShowExpandButtons = {default=1};
	__property ShowLines = {default=1};
	__property ShowRoot = {default=1};
	__property UseImageIndexForExpanded = {default=0};
	__property UseImageIndexForSelected = {default=0};
public:
	/* TdxTreeViewCustomOptionsView.Create */ inline __fastcall virtual TdxTreeViewControlOptionsView(TdxCustomTreeView* ATreeView) : TdxTreeViewCustomOptionsView(ATreeView) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxTreeViewControlOptionsView() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTreeViewControlOptionsBehavior : public TdxTreeViewCustomOptionsBehavior
{
	typedef TdxTreeViewCustomOptionsBehavior inherited;
	
public:
	__fastcall virtual TdxTreeViewControlOptionsBehavior(TdxCustomTreeView* ATreeView);
	
__published:
	__property CaptionEditing = {default=1};
	__property ChangeDelay = {default=0};
	__property HotTrack = {default=0};
	__property SortType = {default=0};
	__property ToolTips = {default=1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxTreeViewControlOptionsBehavior() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxTreeViewControlOptionsSelection : public TdxTreeViewCustomOptionsSelection
{
	typedef TdxTreeViewCustomOptionsSelection inherited;
	
protected:
	virtual bool __fastcall DefaultHideSelectionValue();
	
__published:
	__property HideSelection = {default=1};
	__property MultiSelect = {default=0};
	__property MultiSelectStyle = {default=1};
	__property RowSelect = {default=0};
	__property RightClickSelect = {default=0};
public:
	/* TdxTreeViewCustomOptionsSelection.Create */ inline __fastcall virtual TdxTreeViewControlOptionsSelection(TdxCustomTreeView* ATreeView) : TdxTreeViewCustomOptionsSelection(ATreeView) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TdxTreeViewControlOptionsSelection() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxTreeViewControl : public TdxCustomTreeView
{
	typedef TdxCustomTreeView inherited;
	
private:
	static const System::Int8 dxDefaultHeight = System::Int8(0x64);
	
	static const System::Int8 dxDefaultWidth = System::Int8(0x78);
	
	TdxTreeViewControlOptionsBehavior* __fastcall GetOptionsBehavior();
	TdxTreeViewControlOptionsSelection* __fastcall GetOptionsSelection();
	TdxTreeViewControlOptionsView* __fastcall GetOptionsView();
	HIDESBASE void __fastcall SetOptionsBehavior(TdxTreeViewControlOptionsBehavior* AValue);
	HIDESBASE void __fastcall SetOptionsSelection(TdxTreeViewControlOptionsSelection* AValue);
	HIDESBASE void __fastcall SetOptionsView(TdxTreeViewControlOptionsView* AValue);
	
protected:
	virtual TdxTreeViewCustomOptionsBehavior* __fastcall CreateOptionsBehavior();
	virtual TdxTreeViewCustomOptionsSelection* __fastcall CreateOptionsSelection();
	virtual TdxTreeViewCustomOptionsView* __fastcall CreateOptionsView();
	virtual TdxTreeViewPainter* __fastcall CreatePainter();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual int __fastcall GetDefaultHeight();
	virtual int __fastcall GetDefaultWidth();
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property Height = {default=100};
	__property Images;
	__property Items;
	__property LookAndFeel;
	__property TdxTreeViewControlOptionsBehavior* OptionsBehavior = {read=GetOptionsBehavior, write=SetOptionsBehavior};
	__property TdxTreeViewControlOptionsSelection* OptionsSelection = {read=GetOptionsSelection, write=SetOptionsSelection};
	__property TdxTreeViewControlOptionsView* OptionsView = {read=GetOptionsView, write=SetOptionsView};
	__property ParentBiDiMode = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property StateImages;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Touch;
	__property Visible = {default=1};
	__property Width = {default=120};
	__property OnAddition;
	__property OnCancelEdit;
	__property OnCanFocusNode;
	__property OnCanSelectNode;
	__property OnClick;
	__property OnCollapsed;
	__property OnCollapsing;
	__property OnCompare;
	__property OnContextPopup;
	__property OnCustomDraw;
	__property OnCustomDrawNode;
	__property OnDblClick;
	__property OnDeletion;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEdited;
	__property OnEditing;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnExpanded;
	__property OnExpanding;
	__property OnFocusedNodeChanged;
	__property OnGetEditingText;
	__property OnGetImageIndex;
	__property OnGetSelectedImageIndex;
	__property OnHint;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnNodeStateChanged;
	__property OnSelectionChanged;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TdxCustomTreeView.Create */ inline __fastcall virtual TdxTreeViewControl(System::Classes::TComponent* AOwner) : TdxCustomTreeView(AOwner) { }
	/* TdxCustomTreeView.Destroy */ inline __fastcall virtual ~TdxTreeViewControl() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxTreeViewControl(HWND ParentWindow) : TdxCustomTreeView(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dxtreeview */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXTREEVIEW)
using namespace Dxtreeview;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxtreeviewHPP
