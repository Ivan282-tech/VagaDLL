// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxGridCommon.pas' rev: 35.00 (Windows)

#ifndef CxgridcommonHPP
#define CxgridcommonHPP

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
#include <Winapi.Messages.hpp>
#include <System.TypInfo.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <dxCoreClasses.hpp>
#include <cxClasses.hpp>
#include <cxGraphics.hpp>
#include <cxControls.hpp>
#include <cxLookAndFeels.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <cxTreeView.hpp>
#include <cxGeometry.hpp>
#include <cxEdit.hpp>
#include <cxContainer.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxgridcommon
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxCustomGridChange;
class DELPHICLASS TcxGridChanges;
class DELPHICLASS TcxCustomGridDragOpenInfo;
class DELPHICLASS TcxGridOptionsTreeView;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TcxGridCellState : unsigned char { gcsNone, gcsSelected, gcsPressed };

typedef void __fastcall (__closure *TcxGridClassEnumeratorProc)(System::TClass AClass);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridChange : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Cxcontrols::TcxControl* FControl;
	
protected:
	virtual bool __fastcall IsEqualCore(TcxCustomGridChange* AChange) = 0 ;
	
public:
	virtual bool __fastcall CanExecuteWhenLocked();
	virtual void __fastcall Execute() = 0 ;
	virtual bool __fastcall IsCompatibleWith(TcxCustomGridChange* AChange);
	virtual bool __fastcall IsCumulative();
	bool __fastcall IsEqual(TcxCustomGridChange* AChange);
	virtual bool __fastcall IsLockable();
	__property Cxcontrols::TcxControl* Control = {read=FControl, write=FControl};
public:
	/* TObject.Create */ inline __fastcall TcxCustomGridChange() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomGridChange() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxGridChanges : public Dxcoreclasses::TdxFastObjectList
{
	typedef Dxcoreclasses::TdxFastObjectList inherited;
	
public:
	HIDESBASE void __fastcall Add(TcxCustomGridChange* AGridChange);
public:
	/* TdxFastObjectList.Create */ inline __fastcall TcxGridChanges(bool AOwnsObjects, int ACapacity) : Dxcoreclasses::TdxFastObjectList(AOwnsObjects, ACapacity) { }
	
public:
	/* TdxFastList.Destroy */ inline __fastcall virtual ~TcxGridChanges() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomGridDragOpenInfo : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	HIDESBASE virtual bool __fastcall Equals(TcxCustomGridDragOpenInfo* AInfo);
	virtual void __fastcall Run() = 0 ;
public:
	/* TObject.Create */ inline __fastcall TcxCustomGridDragOpenInfo() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomGridDragOpenInfo() { }
	
};

#pragma pack(pop)

typedef System::UnicodeString __fastcall (*TcxGridOptionsTreeViewGetTypeItemCaptionFunction)(int ATypeItem);

enum DECLSPEC_DENUM TcxGridOptionsTreeViewItemKind : unsigned char { otikCategory, otikCheckBox, otikRadioButton };

class PASCALIMPLEMENTATION TcxGridOptionsTreeView : public Cxtreeview::TcxTreeView
{
	typedef Cxtreeview::TcxTreeView inherited;
	
private:
	bool FItemValuesUpdateLocked;
	int FMaxID;
	HIDESBASE MESSAGE void __fastcall WMDestroy(Winapi::Messages::TWMNoParams &Message);
	void __fastcall CustomDrawItem(Vcl::Comctrls::TCustomTreeView* Sender, Vcl::Comctrls::TTreeNode* Node, Vcl::Comctrls::TCustomDrawState State, bool &DefaultDraw);
	void __fastcall GetNodeImageIndex(System::TObject* Sender, Vcl::Comctrls::TTreeNode* Node);
	void __fastcall GetNodeSelectedImageIndex(System::TObject* Sender, Vcl::Comctrls::TTreeNode* Node);
	
protected:
	virtual void __fastcall CreateWnd();
	virtual void __fastcall LookAndFeelChanged(Cxlookandfeels::TcxLookAndFeel* Sender, Cxlookandfeels::TcxLookAndFeelValues AChangedValues);
	virtual int __fastcall AddItem(int AParentID, int AID, const System::UnicodeString ACaption, TcxGridOptionsTreeViewItemKind AKind);
	void __fastcall ClearItems();
	Vcl::Comctrls::TTreeNode* __fastcall FindNodeByID(int AID);
	int __fastcall GetItemImageIndex(TcxGridOptionsTreeViewItemKind AKind, bool AChecked);
	int __fastcall GetNodeID(Vcl::Comctrls::TTreeNode* ANode);
	TcxGridOptionsTreeViewItemKind __fastcall GetNodeKind(Vcl::Comctrls::TTreeNode* ANode);
	int __fastcall GetNodeParentID(Vcl::Comctrls::TTreeNode* ANode);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall NodeClicked(Vcl::Comctrls::TTreeNode* ANode);
	void __fastcall RefreshImages();
	void __fastcall RefreshItemImageIndexes();
	void __fastcall ResetMaxID();
	virtual System::Types::TSize __fastcall CalculateImagesSize();
	virtual void __fastcall DrawImage(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ARect, TcxGridOptionsTreeViewItemKind AItemKind, bool AChecked);
	Vcl::Graphics::TBitmap* __fastcall GetCategoryBitmap();
	virtual System::Types::TSize __fastcall GetCategorySize();
	virtual System::Types::TSize __fastcall GetCheckBoxSize();
	virtual System::Types::TSize __fastcall GetRadioButtonSize();
	virtual void __fastcall AddItems() = 0 ;
	virtual bool __fastcall IsItemChecked(int AParentID, int AID) = 0 ;
	virtual void __fastcall ItemClicked(int AParentID, int AID) = 0 ;
	__property bool ItemValuesUpdateLocked = {read=FItemValuesUpdateLocked, write=FItemValuesUpdateLocked, nodefault};
	__property int MaxID = {read=FMaxID, nodefault};
	
public:
	__fastcall virtual TcxGridOptionsTreeView(System::Classes::TComponent* AOwner);
	int __fastcall AddCategory(int AParentID, int AID, const System::UnicodeString ACaption);
	int __fastcall AddCheckBox(int AParentID, int AID, const System::UnicodeString ACaption);
	int __fastcall AddRadioButton(int AParentID, int AID, const System::UnicodeString ACaption);
	void __fastcall AddRadioButtons(int AParentID, System::Typinfo::PTypeInfo ATypeInfo, TcxGridOptionsTreeViewGetTypeItemCaptionFunction AGetTypeItemCaption);
	void __fastcall RefreshItems();
	void __fastcall RefreshItemValues();
public:
	/* TcxTreeViewContainer.Destroy */ inline __fastcall virtual ~TcxGridOptionsTreeView() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxGridOptionsTreeView(HWND ParentWindow) : Cxtreeview::TcxTreeView(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
#define ScxGridPrefixName L"TcxGrid"
static const System::Int8 cxGridCellTextOffset = System::Int8(0x2);
static const System::Int8 cxGridEditOffset = System::Int8(0x1);
static const int cxGridDesignViewBorderColor = int(0x3695f2);
static const int cxGridDesignViewColor = int(0x8dd5ff);
static const int cxGridDesignViewHotColor = int(0x68b7f9);
static const int cxGridDesignSelectedBorderColor = int(0xaf8c68);
static const int cxGridDesignSelectedColor = int(0xe4c19d);
static const int cxGridDesignSelectedHotBorderColor = int(8421504);
static const int cxGridDesignSelectedHotColor = int(0xd69e67);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetValidName(System::Classes::TComponent* AComponent, const System::UnicodeString AName, bool AIsBaseName = false);
extern DELPHI_PACKAGE void __fastcall GetCellTextAreaSize(int &ATextSize, Cxgeometry::TdxScaleFactor* AScaleFactor, bool AHorizontal = false);
extern DELPHI_PACKAGE Cxlookandfeelpainters::TcxButtonState __fastcall GridCellStateToButtonState(TcxGridCellState ACellState);
}	/* namespace Cxgridcommon */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXGRIDCOMMON)
using namespace Cxgridcommon;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxgridcommonHPP
