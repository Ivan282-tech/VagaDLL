// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxComCtrlsUtils.pas' rev: 35.00 (Windows)

#ifndef DxcomctrlsutilsHPP
#define DxcomctrlsutilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Classes.hpp>
#include <Vcl.Forms.hpp>
#include <System.Types.hpp>
#include <Winapi.CommCtrl.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Controls.hpp>
#include <dxCore.hpp>
#include <cxGeometry.hpp>
#include <cxControls.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxcomctrlsutils
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool __fastcall CustomizationTreeViewWndProcHandler(Vcl::Comctrls::TTreeView* ATreeView, Winapi::Messages::TMessage &Message);
extern DELPHI_PACKAGE bool __fastcall cxTreeViewFindNodeByData(Vcl::Comctrls::TTreeView* ATreeView, void * AData, Vcl::Comctrls::TTreeNode* &ANode);
extern DELPHI_PACKAGE Vcl::Comctrls::TTreeNode* __fastcall cxTreeViewGetHitNode(Vcl::Comctrls::TTreeView* ATreeView, const System::Types::TPoint &ACursorPos);
extern DELPHI_PACKAGE void __fastcall cxTreeViewGetCollapsed(Vcl::Comctrls::TTreeView* ATreeView, System::Classes::TList* AList);
extern DELPHI_PACKAGE void __fastcall cxTreeViewGetData(Vcl::Comctrls::TTreeView* ATreeView, System::Classes::TList* AList);
extern DELPHI_PACKAGE void __fastcall cxTreeViewGetSelection(Vcl::Comctrls::TTreeView* ATreeView, System::Classes::TList* AList);
extern DELPHI_PACKAGE void __fastcall cxTreeViewSetSelection(Vcl::Comctrls::TTreeView* ATreeView, System::Classes::TList* AList);
}	/* namespace Dxcomctrlsutils */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXCOMCTRLSUTILS)
using namespace Dxcomctrlsutils;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxcomctrlsutilsHPP
