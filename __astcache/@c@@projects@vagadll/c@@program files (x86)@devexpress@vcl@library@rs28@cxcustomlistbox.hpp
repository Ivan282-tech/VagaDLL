// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxCustomListBox.pas' rev: 35.00 (Windows)

#ifndef CxcustomlistboxHPP
#define CxcustomlistboxHPP

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
#include <dxCore.hpp>
#include <System.Math.hpp>
#include <System.Types.hpp>
#include <System.Variants.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.StdCtrls.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.ImgList.hpp>
#include <cxClasses.hpp>
#include <cxControls.hpp>
#include <cxContainer.hpp>
#include <cxDataUtils.hpp>
#include <cxGraphics.hpp>
#include <cxLookAndFeels.hpp>
#include <cxGeometry.hpp>
#include <cxScrollBar.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <dxCustomHint.hpp>
#include <cxEdit.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxcustomlistbox
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxCustomListBox;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TcxCustomListBox : public Cxedit::TcxCustomEditContainer
{
	typedef Cxedit::TcxCustomEditContainer inherited;
	
private:
	bool FIsExitProcessing;
	Cxcontainer::TcxCustomInnerListBox* FInnerListBox;
	bool FIntegralHeight;
	bool __fastcall GetAutoComplete();
	unsigned __fastcall GetAutoCompleteDelay();
	int __fastcall GetCount();
	int __fastcall GetItemHeight();
	int __fastcall GetItemIndex();
	bool __fastcall GetReadOnly();
	int __fastcall GetScrollWidth();
	bool __fastcall GetSelected(int Index);
	int __fastcall GetTabWidth();
	int __fastcall GetTopIndex();
	void __fastcall SetAutoComplete(bool Value);
	void __fastcall SetAutoCompleteDelay(unsigned Value);
	void __fastcall SetCount(int Value);
	void __fastcall SetDataBinding(Cxdatautils::TcxCustomDataBinding* Value);
	void __fastcall SetIntegralHeight(bool Value);
	void __fastcall SetItemIndex(int Value);
	void __fastcall SetReadOnly(bool Value);
	void __fastcall SetScrollWidth(int Value);
	void __fastcall SetSelected(int Index, bool Value);
	void __fastcall SetTabWidth(int Value);
	void __fastcall SetTopIndex(int Value);
	
protected:
	Cxdatautils::TcxCustomDataBinding* FDataBinding;
	virtual bool __fastcall CanDisableAlignOnCreateInnerControl();
	virtual bool __fastcall CanResize(int &NewWidth, int &NewHeight);
	void __fastcall CreateInnerListBox();
	virtual void __fastcall DataChange();
	void __fastcall DestroyInnerListBox();
	virtual Cxcontainer::TcxCustomInnerListBox* __fastcall DoCreateInnerListBox() = 0 ;
	DYNAMIC void __fastcall DoExit();
	virtual Cxdatautils::TcxCustomDataBindingClass __fastcall GetDataBindingClass();
	virtual int __fastcall GetInnerListBoxTop();
	virtual System::UnicodeString __fastcall GetItemText(int AItemIndex) = 0 ;
	virtual int __fastcall GetListItemHeight(int AIndex);
	virtual Vcl::Stdctrls::TListBoxStyle __fastcall GetListStyle();
	virtual void __fastcall GetOptimalHeight(int &ANewHeight);
	virtual int __fastcall IndexOf(const System::UnicodeString S) = 0 ;
	virtual void __fastcall InitializeInnerListBox() = 0 ;
	virtual void __fastcall InternalKeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual bool __fastcall IsReadOnly();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual bool __fastcall NeedIgnorePressedKey(System::WideChar &Key);
	virtual void __fastcall Scroll(Vcl::Forms::TScrollBarKind AScrollBarKind, System::Uitypes::TScrollCode AScrollCode, int &AScrollPos);
	virtual void __fastcall SetItemHeight(int Value);
	virtual void __fastcall SetListStyle(Vcl::Stdctrls::TListBoxStyle Value);
	virtual void __fastcall SynchronizeTextFlags();
	virtual void __fastcall UpdateData();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	__property bool AutoComplete = {read=GetAutoComplete, write=SetAutoComplete, default=1};
	__property unsigned AutoCompleteDelay = {read=GetAutoCompleteDelay, write=SetAutoCompleteDelay, default=500};
	__property int Count = {read=GetCount, write=SetCount, nodefault};
	__property Cxdatautils::TcxCustomDataBinding* DataBinding = {read=FDataBinding, write=SetDataBinding};
	__property Cxcontainer::TcxCustomInnerListBox* InnerListBox = {read=FInnerListBox};
	__property bool IntegralHeight = {read=FIntegralHeight, write=SetIntegralHeight, default=0};
	__property int ItemHeight = {read=GetItemHeight, write=SetItemHeight, nodefault};
	__property int ItemIndex = {read=GetItemIndex, write=SetItemIndex, nodefault};
	__property Vcl::Stdctrls::TListBoxStyle ListStyle = {read=GetListStyle, write=SetListStyle, default=0};
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, default=0};
	__property int ScrollWidth = {read=GetScrollWidth, write=SetScrollWidth, default=0};
	__property bool Selected[int Index] = {read=GetSelected, write=SetSelected};
	__property int TabWidth = {read=GetTabWidth, write=SetTabWidth, default=0};
	__property int TopIndex = {read=GetTopIndex, write=SetTopIndex, nodefault};
	
public:
	__fastcall virtual TcxCustomListBox(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TcxCustomListBox();
	DYNAMIC bool __fastcall ExecuteAction(System::Classes::TBasicAction* Action);
	virtual bool __fastcall UpdateAction(System::Classes::TBasicAction* Action);
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomListBox(HWND ParentWindow) : Cxedit::TcxCustomEditContainer(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Cxcustomlistbox */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXCUSTOMLISTBOX)
using namespace Cxcustomlistbox;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxcustomlistboxHPP
