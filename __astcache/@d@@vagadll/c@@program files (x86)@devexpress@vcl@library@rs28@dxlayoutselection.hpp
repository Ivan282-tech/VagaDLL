// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxLayoutSelection.pas' rev: 35.00 (Windows)

#ifndef DxlayoutselectionHPP
#define DxlayoutselectionHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <cxClasses.hpp>
#include <cxGraphics.hpp>
#include <Vcl.StdCtrls.hpp>
#include <dxCoreClasses.hpp>
#include <cxControls.hpp>
#include <System.Contnrs.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxlayoutselection
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IdxSelectionChanged;
typedef System::DelphiInterface<IdxSelectionChanged> _di_IdxSelectionChanged;
__interface DELPHIINTERFACE IdxLayoutSelectableItem;
typedef System::DelphiInterface<IdxLayoutSelectableItem> _di_IdxLayoutSelectableItem;
__interface DELPHIINTERFACE IdxLayoutDesignerHelper;
typedef System::DelphiInterface<IdxLayoutDesignerHelper> _di_IdxLayoutDesignerHelper;
class DELPHICLASS TdxLayoutRunTimeSelectionHelper;
class DELPHICLASS TdxSelectionLayerInplaceEdit;
class DELPHICLASS TdxSelectionLayer;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TdxSelectionAction : unsigned char { saAdded, saChanged, saExtracted };

__interface  INTERFACE_UUID("{ECB1A3AE-1C91-4E5F-8ADC-34120676B1CA}") IdxSelectionChanged  : public System::IInterface 
{
	virtual void __fastcall SelectionChanged(System::Classes::TList* ASelection, TdxSelectionAction AAction) = 0 ;
};

__interface  INTERFACE_UUID("{2887168D-78EB-44A0-A440-E284B01BE407}") IdxLayoutSelectableItem  : public System::IInterface 
{
	virtual bool __fastcall CanDelete() = 0 ;
	virtual bool __fastcall IsOwner(System::Classes::TComponent* AOwner) = 0 ;
	virtual void __fastcall MakeVisible() = 0 ;
	virtual void __fastcall SelectComponent(System::Classes::TShiftState AShift = System::Classes::TShiftState() ) = 0 ;
	virtual void __fastcall SelectParent() = 0 ;
	virtual void __fastcall SelectionChanged() = 0 ;
	virtual bool __fastcall IsVisible() = 0 ;
};

__interface  INTERFACE_UUID("{0FF95B61-5074-49E4-99C6-1A8BB34F1547}") IdxLayoutDesignerHelper  : public System::IInterface 
{
	virtual void __fastcall AddSelectionChangedListener(System::Classes::TPersistent* AListener) = 0 ;
	virtual bool __fastcall IsActive() = 0 ;
	virtual bool __fastcall CanDeleteComponent(System::Classes::TComponent* AComponent) = 0 ;
	virtual bool __fastcall CanModify() = 0 ;
	virtual bool __fastcall CanProcessKeyboard() = 0 ;
	virtual void __fastcall ClearSelection() = 0 ;
	virtual void __fastcall DeleteSelection() = 0 ;
	virtual void __fastcall DeleteComponent(System::Classes::TComponent* AComponent) = 0 ;
	virtual void __fastcall DeleteComponents(System::Contnrs::TComponentList* AList) = 0 ;
	virtual void __fastcall GetSelection(System::Classes::TList* AList) = 0 ;
	virtual bool __fastcall IsComponentSelected(System::Classes::TPersistent* AComponent) = 0 ;
	virtual void __fastcall RemoveSelectionChangedListener(System::Classes::TPersistent* AListener) = 0 ;
	virtual void __fastcall SelectComponent(System::Classes::TPersistent* AComponent, System::Classes::TShiftState AShift = System::Classes::TShiftState() ) = 0 ;
	virtual void __fastcall SetSelection(System::Classes::TList* AList) = 0 ;
	virtual System::UnicodeString __fastcall UniqueName(const System::UnicodeString BaseName) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxLayoutRunTimeSelectionHelper : public Dxcoreclasses::TcxOwnedPersistent
{
	typedef Dxcoreclasses::TcxOwnedPersistent inherited;
	
private:
	System::Classes::TList* FListeners;
	int FRefCount;
	Cxclasses::TcxComponentList* FSelectionList;
	System::Classes::TComponent* __fastcall GetComponent();
	void __fastcall SelectionListNotifyHandler(System::TObject* Sender, System::Classes::TComponent* AComponent, System::Classes::TListNotification AAction);
	void __fastcall SelectionListChangedHandler(System::TObject* Sender, System::Classes::TComponent* AComponent, Cxclasses::TcxComponentCollectionNotification AAction);
	
protected:
	System::Classes::TComponentClass __fastcall GetComponentClass(System::Classes::TComponent* AComponent);
	void __fastcall NotifyListeners(System::Classes::TList* AList, TdxSelectionAction AAction);
	void __fastcall SelectionListNotify(System::Classes::TComponent* AComponent, System::Classes::TListNotification AAction);
	HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	int __stdcall _AddRef();
	int __stdcall _Release();
	__property System::Classes::TComponent* Component = {read=GetComponent};
	__property System::Classes::TList* Listeners = {read=FListeners};
	__property Cxclasses::TcxComponentList* SelectionList = {read=FSelectionList};
	
public:
	__fastcall virtual TdxLayoutRunTimeSelectionHelper(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TdxLayoutRunTimeSelectionHelper();
	virtual void __fastcall AddSelectionChangedListener(System::Classes::TPersistent* AListener);
	virtual void __fastcall RemoveSelectionChangedListener(System::Classes::TPersistent* AListener);
	virtual bool __fastcall IsActive();
	virtual bool __fastcall CanDeleteComponent(System::Classes::TComponent* AComponent);
	virtual bool __fastcall CanModify();
	virtual bool __fastcall CanProcessKeyboard();
	virtual void __fastcall ClearSelection();
	virtual void __fastcall DeleteComponent(System::Classes::TComponent* AComponent);
	virtual void __fastcall DeleteComponents(System::Contnrs::TComponentList* AList);
	virtual void __fastcall DeleteSelection();
	virtual void __fastcall GetSelection(System::Classes::TList* AList);
	virtual bool __fastcall IsComponentSelected(System::Classes::TPersistent* AComponent);
	virtual void __fastcall SelectComponent(System::Classes::TPersistent* AComponent, System::Classes::TShiftState AShift = System::Classes::TShiftState() );
	virtual void __fastcall SetSelection(System::Classes::TList* AList);
	virtual System::UnicodeString __fastcall UniqueName(const System::UnicodeString BaseName);
private:
	void *__IdxLayoutDesignerHelper;	// IdxLayoutDesignerHelper 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {0FF95B61-5074-49E4-99C6-1A8BB34F1547}
	operator _di_IdxLayoutDesignerHelper()
	{
		_di_IdxLayoutDesignerHelper intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IdxLayoutDesignerHelper*(void) { return (IdxLayoutDesignerHelper*)&__IdxLayoutDesignerHelper; }
	#endif
	
};

#pragma pack(pop)

typedef System::TMetaClass* TdxLayoutRunTimeSelectionHelperClass;

class PASCALIMPLEMENTATION TdxSelectionLayerInplaceEdit : public Vcl::Stdctrls::TEdit
{
	typedef Vcl::Stdctrls::TEdit inherited;
	
private:
	int FClickTime;
	bool FHiding;
	TdxSelectionLayer* FSelectionLayer;
	HIDESBASE MESSAGE void __fastcall CMShowingChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	
protected:
	DYNAMIC void __fastcall DblClick();
	DYNAMIC bool __fastcall DoMouseWheel(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	__property TdxSelectionLayer* SelectionLayer = {read=FSelectionLayer};
	
public:
	__fastcall virtual TdxSelectionLayerInplaceEdit(TdxSelectionLayer* ASelectionLayer);
	HIDESBASE void __fastcall Hide();
	virtual void __fastcall SetFocus();
	HIDESBASE void __fastcall Show(const System::Types::TRect &ABounds, const System::UnicodeString AText);
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxSelectionLayerInplaceEdit(HWND ParentWindow) : Vcl::Stdctrls::TEdit(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TdxSelectionLayerInplaceEdit() { }
	
};


typedef void __fastcall (__closure *TdxSelectionLayerHitTestEvent)(System::TObject* ASender, bool &AIsTransparent);

typedef void __fastcall (__closure *TdxSelectionLayerEndRenameEvent)(System::TObject* ASender, const System::UnicodeString AText, bool AAccept);

class PASCALIMPLEMENTATION TdxSelectionLayer : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	Cxgraphics::TcxBitmap32* FDrawBitmap;
	bool FEditorMode;
	bool FHasIntersection;
	System::Types::TRect FInplaceEditBounds;
	TdxSelectionLayerInplaceEdit* FInplaceEdit;
	Cxcontrols::TcxControl* FParentControl;
	System::Types::TPoint FStartOffset;
	Cxgraphics::TcxAlphaBitmap* FSelectionImage;
	Cxgraphics::TcxCanvas* FcxCanvas;
	TdxSelectionLayerEndRenameEvent FOnEndRename;
	System::Classes::TNotifyEvent FOnHide;
	TdxSelectionLayerHitTestEvent FOnHitTest;
	System::Classes::TNotifyEvent FOnShow;
	System::Classes::TNotifyEvent FOnUpdate;
	void __fastcall SetParentControl(Cxcontrols::TcxControl* AValue);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	void __fastcall CheckInplaceEditorPosition();
	virtual void __fastcall DoHide();
	virtual bool __fastcall DoHitTest();
	virtual void __fastcall DoShow();
	virtual void __fastcall DoUpdate();
	virtual void __fastcall DoEndRename(const System::UnicodeString AText, bool AAccept);
	System::Types::TPoint __fastcall GetParentOffset();
	__property Cxgraphics::TcxCanvas* cxCanvas = {read=FcxCanvas};
	
public:
	__fastcall virtual TdxSelectionLayer(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TdxSelectionLayer();
	virtual void __fastcall Paint();
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	void __fastcall InvalidateRect(const System::Types::TRect &R);
	void __fastcall MoveTo(const System::Types::TPoint &P);
	HIDESBASE void __fastcall Hide();
	HIDESBASE void __fastcall Show();
	void __fastcall UpdateContent();
	void __fastcall BeginRename(const System::Types::TRect &ABounds, const System::UnicodeString AText, Vcl::Graphics::TFont* const AFont);
	void __fastcall EndRename(bool AAccept);
	__property Cxgraphics::TcxBitmap32* DrawBitmap = {read=FDrawBitmap};
	__property bool HasIntersection = {read=FHasIntersection, write=FHasIntersection, nodefault};
	__property bool EditorMode = {read=FEditorMode, nodefault};
	__property Cxgraphics::TcxAlphaBitmap* SelectionImage = {read=FSelectionImage};
	__property Cxcontrols::TcxControl* ParentControl = {read=FParentControl, write=SetParentControl};
	__property TdxSelectionLayerEndRenameEvent OnEndRename = {read=FOnEndRename, write=FOnEndRename};
	__property System::Classes::TNotifyEvent OnHide = {read=FOnHide, write=FOnHide};
	__property TdxSelectionLayerHitTestEvent OnHitTest = {read=FOnHitTest, write=FOnHitTest};
	__property System::Classes::TNotifyEvent OnShow = {read=FOnShow, write=FOnShow};
	__property System::Classes::TNotifyEvent OnUpdate = {read=FOnUpdate, write=FOnUpdate};
public:
	/* TWinControl.CreateParented */ inline __fastcall TdxSelectionLayer(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::Uitypes::TColor dxLayoutSelectionBackgroundColor;
extern DELPHI_PACKAGE System::Uitypes::TColor dxLayoutSelectionBorderColor;
extern DELPHI_PACKAGE System::Byte dxLayoutSelectionAlphaChannel;
extern DELPHI_PACKAGE System::Uitypes::TColor dxLayoutSelectionBorderMarkerBackgroundColor;
}	/* namespace Dxlayoutselection */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXLAYOUTSELECTION)
using namespace Dxlayoutselection;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxlayoutselectionHPP
