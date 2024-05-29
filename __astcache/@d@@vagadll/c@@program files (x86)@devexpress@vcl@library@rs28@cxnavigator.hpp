// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxNavigator.pas' rev: 35.00 (Windows)

#ifndef CxnavigatorHPP
#define CxnavigatorHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.StdCtrls.hpp>
#include <System.SysUtils.hpp>
#include <dxCore.hpp>
#include <dxCoreClasses.hpp>
#include <cxClasses.hpp>
#include <cxContainer.hpp>
#include <cxControls.hpp>
#include <cxFilter.hpp>
#include <cxGraphics.hpp>
#include <cxGeometry.hpp>
#include <cxAccessibility.hpp>
#include <cxLookAndFeels.hpp>
#include <cxLookAndFeelPainters.hpp>
#include <dxThemeManager.hpp>
#include <dxCustomHint.hpp>
#include <dxFading.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxnavigator
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IcxNavigatorOwner;
typedef System::DelphiInterface<IcxNavigatorOwner> _di_IcxNavigatorOwner;
__interface DELPHIINTERFACE IcxNavigatorOwner2;
typedef System::DelphiInterface<IcxNavigatorOwner2> _di_IcxNavigatorOwner2;
__interface DELPHIINTERFACE IcxNavigatorOwner3;
typedef System::DelphiInterface<IcxNavigatorOwner3> _di_IcxNavigatorOwner3;
class DELPHICLASS TcxNavigatorControlNotifier;
__interface DELPHIINTERFACE IcxNavigator;
typedef System::DelphiInterface<IcxNavigator> _di_IcxNavigator;
__interface DELPHIINTERFACE IcxNavigatorRecordPosition;
typedef System::DelphiInterface<IcxNavigatorRecordPosition> _di_IcxNavigatorRecordPosition;
class DELPHICLASS TcxNavigatorButton;
class DELPHICLASS TcxNavigatorChildComponent;
class DELPHICLASS TcxNavigatorCustomButton;
class DELPHICLASS TcxNavigatorCustomButtons;
class DELPHICLASS TcxCustomNavigatorButtons;
class DELPHICLASS TcxCustomNavigatorInfoPanel;
class DELPHICLASS TcxNavigatorButtonViewInfo;
class DELPHICLASS TcxNavigatorButtonsViewInfo;
class DELPHICLASS TcxCustomNavigatorInfoPanelViewInfo;
class DELPHICLASS TcxNavigatorHintHelper;
class DELPHICLASS TdxNavigatorAccessibilityHelper;
class DELPHICLASS TcxNavigatorViewInfo;
class DELPHICLASS TcxNavigatorControlViewInfo;
class DELPHICLASS TcxInplaceNavigatorViewInfo;
class DELPHICLASS TcxCustomNavigator;
class DELPHICLASS TcxNavigatorControlButtons;
class DELPHICLASS TcxNavigatorControlInfoPanel;
class DELPHICLASS TcxCustomNavigatorControl;
class DELPHICLASS TcxNavigator;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TcxNavigatorChangeType : unsigned char { nctProperties, nctSize, nctLayout };

__interface  INTERFACE_UUID("{504B7F43-8847-46C5-B84A-C24F8E5E61A6}") IcxNavigatorOwner  : public System::IInterface 
{
	virtual void __fastcall NavigatorChanged(TcxNavigatorChangeType AChangeType) = 0 ;
	virtual System::Types::TRect __fastcall GetNavigatorBounds() = 0 ;
	virtual TcxCustomNavigatorButtons* __fastcall GetNavigatorButtons() = 0 ;
	virtual Vcl::Graphics::TCanvas* __fastcall GetNavigatorCanvas() = 0 ;
	virtual Vcl::Controls::TWinControl* __fastcall GetNavigatorControl() = 0 ;
	virtual bool __fastcall GetNavigatorFocused() = 0 ;
	virtual Cxlookandfeels::TcxLookAndFeel* __fastcall GetNavigatorLookAndFeel() = 0 ;
	virtual System::Classes::TComponent* __fastcall GetNavigatorOwner() = 0 ;
	virtual bool __fastcall GetNavigatorShowHint() = 0 ;
	virtual bool __fastcall GetNavigatorTabStop() = 0 ;
	virtual void __fastcall NavigatorStateChanged() = 0 ;
	virtual void __fastcall RefreshNavigator() = 0 ;
};

__interface  INTERFACE_UUID("{5AC3BE65-B332-40D4-9635-869F52634B17}") IcxNavigatorOwner2  : public IcxNavigatorOwner 
{
	virtual TcxCustomNavigatorInfoPanel* __fastcall GetNavigatorInfoPanel() = 0 ;
};

__interface  INTERFACE_UUID("{39D5E864-7166-4168-A6C8-AC85303CF088}") IcxNavigatorOwner3  : public System::IInterface 
{
	virtual System::Types::TPoint __fastcall GetOrigin() = 0 ;
	virtual bool __fastcall GetVisible() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxNavigatorControlNotifier : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Classes::TList* FList;
	
public:
	__fastcall TcxNavigatorControlNotifier();
	__fastcall virtual ~TcxNavigatorControlNotifier();
	void __fastcall AddNavigator(_di_IcxNavigatorOwner ANavigator);
	void __fastcall RemoveNavigator(_di_IcxNavigatorOwner ANavigator);
	void __fastcall RefreshNavigatorButtons();
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{A15F80CA-DE56-47CB-B0EB-035D0BF90E9D}") IcxNavigator  : public System::IInterface 
{
	virtual bool __fastcall CanAppend() = 0 ;
	virtual bool __fastcall CanDelete() = 0 ;
	virtual bool __fastcall CanEdit() = 0 ;
	virtual bool __fastcall CanInsert() = 0 ;
	virtual bool __fastcall IsActive() = 0 ;
	virtual bool __fastcall IsBof() = 0 ;
	virtual bool __fastcall IsBookmarkAvailable() = 0 ;
	virtual bool __fastcall IsEditing() = 0 ;
	virtual bool __fastcall IsEof() = 0 ;
	virtual void __fastcall ClearBookmark() = 0 ;
	virtual void __fastcall DoAction(int AButtonIndex) = 0 ;
	virtual TcxNavigatorControlNotifier* __fastcall GetNotifier() = 0 ;
	virtual bool __fastcall IsActionSupported(int AButtonIndex) = 0 ;
};

__interface  INTERFACE_UUID("{715C9E38-5BA0-4ED8-B35C-BB40EA739362}") IcxNavigatorRecordPosition  : public System::IInterface 
{
	virtual int __fastcall GetRecordCount() = 0 ;
	virtual int __fastcall GetRecordIndex() = 0 ;
};

class PASCALIMPLEMENTATION TcxNavigatorButton : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TcxCustomNavigatorButtons* FButtons;
	int FDefaultIndex;
	bool FDefaultVisible;
	bool FEnabled;
	System::UnicodeString FHint;
	System::Uitypes::TImageIndex FImageIndex;
	bool FIsVisibleAssigned;
	bool FVisible;
	System::Classes::TNotifyEvent FOnClick;
	int __fastcall GetInternalImageIndex();
	Vcl::Imglist::TCustomImageList* __fastcall GetInternalImages();
	void __fastcall InternalSetVisible(bool Value, bool AIsInternalSetting = true);
	bool __fastcall IsVisibleStored();
	void __fastcall SetEnabled(const bool Value);
	void __fastcall SetHint(const System::UnicodeString Value);
	void __fastcall SetImageIndex(System::Uitypes::TImageIndex Value);
	void __fastcall SetOnClick(const System::Classes::TNotifyEvent Value);
	void __fastcall SetVisible(const bool Value);
	
protected:
	virtual System::UnicodeString __fastcall GetAdornerTargetElementName();
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	bool __fastcall GetInternalEnabled();
	System::UnicodeString __fastcall GetInternalHint();
	bool __fastcall HasImage();
	bool __fastcall IsCustomButton();
	bool __fastcall IsUserImageListUsed();
	DYNAMIC void __fastcall DoClick();
	void __fastcall RestoreDefaultVisible(bool ACanBeVisible);
	_di_IcxNavigatorOwner __fastcall GetNavigator();
	Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	__property int DefaultIndex = {read=FDefaultIndex, write=FDefaultIndex, nodefault};
	__property int InternalImageIndex = {read=GetInternalImageIndex, nodefault};
	__property Vcl::Imglist::TCustomImageList* InternalImages = {read=GetInternalImages};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=GetScaleFactor};
	
public:
	__fastcall TcxNavigatorButton(TcxCustomNavigatorButtons* AButtons, bool ADefaultVisible);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall Click();
	System::Types::TSize __fastcall GetImageSize();
	__property TcxCustomNavigatorButtons* Buttons = {read=FButtons};
	__property _di_IcxNavigatorOwner Navigator = {read=GetNavigator};
	__property System::Classes::TNotifyEvent OnClick = {read=FOnClick, write=SetOnClick};
	
__published:
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=1};
	__property System::UnicodeString Hint = {read=FHint, write=SetHint};
	__property System::Uitypes::TImageIndex ImageIndex = {read=FImageIndex, write=SetImageIndex, default=-1};
	__property bool Visible = {read=FVisible, write=SetVisible, stored=IsVisibleStored, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TcxNavigatorButton() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxNavigatorChildComponent : public Dxcoreclasses::TcxInterfacedPersistent
{
	typedef Dxcoreclasses::TcxInterfacedPersistent inherited;
	
private:
	Cxgeometry::TdxScaleFactor* FScaleFactor;
	_di_IcxNavigatorOwner FNavigator;
	void __fastcall ScaleFactorChangeHandler(System::TObject* Sender, int M, int D, bool IsLoading);
	
protected:
	void __fastcall Changed(TcxNavigatorChangeType AChangeType, bool ANeedRefresh = false);
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	bool __fastcall IsNavigatorEnabled();
	virtual void __fastcall ScaleFactorChanged(int M, int D);
	
public:
	__fastcall virtual TcxNavigatorChildComponent(_di_IcxNavigatorOwner ANavigator);
	__fastcall virtual ~TcxNavigatorChildComponent();
	__property _di_IcxNavigatorOwner Navigator = {read=FNavigator};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxNavigatorCustomButton : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	TcxNavigatorButton* FButton;
	bool __fastcall GetEnabled();
	System::UnicodeString __fastcall GetHint();
	System::Uitypes::TImageIndex __fastcall GetImageIndex();
	bool __fastcall GetVisible();
	void __fastcall SetButton(TcxNavigatorButton* const Value);
	void __fastcall SetEnabled(const bool Value);
	void __fastcall SetHint(const System::UnicodeString Value);
	void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value);
	void __fastcall SetVisible(const bool Value);
	
protected:
	__property TcxNavigatorButton* Button = {read=FButton, write=SetButton};
	
public:
	__fastcall virtual TcxNavigatorCustomButton(System::Classes::TCollection* Collection);
	__fastcall virtual ~TcxNavigatorCustomButton();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property bool Enabled = {read=GetEnabled, write=SetEnabled, default=1};
	__property System::UnicodeString Hint = {read=GetHint, write=SetHint};
	__property System::Uitypes::TImageIndex ImageIndex = {read=GetImageIndex, write=SetImageIndex, default=-1};
	__property bool Visible = {read=GetVisible, write=SetVisible, default=1};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxNavigatorCustomButtons : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
public:
	TcxNavigatorCustomButton* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TcxNavigatorCustomButton* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TcxNavigatorCustomButton* Value);
	
protected:
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	HIDESBASE TcxNavigatorCustomButton* __fastcall Add();
	__property TcxNavigatorCustomButton* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TOwnedCollection.Create */ inline __fastcall TcxNavigatorCustomButtons(System::Classes::TPersistent* AOwner, System::Classes::TCollectionItemClass ItemClass) : System::Classes::TOwnedCollection(AOwner, ItemClass) { }
	
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TcxNavigatorCustomButtons() { }
	
};

#pragma pack(pop)

typedef void __fastcall (__closure *TcxNavigatorButtonClickEvent)(System::TObject* Sender, int AButtonIndex, bool &ADone);

class PASCALIMPLEMENTATION TcxCustomNavigatorButtons : public TcxNavigatorChildComponent
{
	typedef TcxNavigatorChildComponent inherited;
	
public:
	TcxNavigatorButton* operator[](int Index) { return this->Buttons[Index]; }
	
private:
	System::Classes::TList* FButtons;
	Vcl::Imglist::TCustomImageList* FImages;
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	bool FConfirmDelete;
	TcxNavigatorCustomButtons* FCustomButtons;
	TcxNavigatorButtonClickEvent FOnButtonClick;
	TcxNavigatorButton* __fastcall GetButton(int Index);
	int __fastcall GetButtonCount();
	Vcl::Imglist::TCustomImageList* __fastcall GetDefaultImages();
	void __fastcall SetButton(int Index, TcxNavigatorButton* const Value);
	void __fastcall SetConfirmDelete(const bool Value);
	void __fastcall SetCustomButtons(TcxNavigatorCustomButtons* const Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall SetOnButtonClick(const TcxNavigatorButtonClickEvent Value);
	void __fastcall ImageListChange(System::TObject* Sender);
	
protected:
	virtual void __fastcall CreateButtons();
	virtual void __fastcall DestroyButtons();
	void __fastcall CustomButtonsChanged();
	virtual void __fastcall DoButtonClick(int ADefaultIndex);
	virtual System::UnicodeString __fastcall GetAdornerTargetElementName(int ADefaultIndex);
	virtual bool __fastcall GetButtonEnabled(int ADefaultIndex);
	virtual System::UnicodeString __fastcall GetButtonHint(int ADefaultIndex);
	virtual int __fastcall GetButtonImageOffset();
	virtual bool __fastcall IsButtonVisibleByDefault(int AIndex);
	__property bool ConfirmDelete = {read=FConfirmDelete, write=SetConfirmDelete, default=1};
	__property TcxNavigatorButton* First = {read=GetButton, write=SetButton, index=0};
	__property TcxNavigatorButton* PriorPage = {read=GetButton, write=SetButton, index=1};
	__property TcxNavigatorButton* Prior = {read=GetButton, write=SetButton, index=2};
	__property TcxNavigatorButton* Next = {read=GetButton, write=SetButton, index=3};
	__property TcxNavigatorButton* NextPage = {read=GetButton, write=SetButton, index=4};
	__property TcxNavigatorButton* Last = {read=GetButton, write=SetButton, index=5};
	__property TcxNavigatorButton* Insert = {read=GetButton, write=SetButton, index=6};
	__property TcxNavigatorButton* Append = {read=GetButton, write=SetButton, index=7};
	__property TcxNavigatorButton* Delete = {read=GetButton, write=SetButton, index=8};
	__property TcxNavigatorButton* Edit = {read=GetButton, write=SetButton, index=9};
	__property TcxNavigatorButton* Post = {read=GetButton, write=SetButton, index=10};
	__property TcxNavigatorButton* Cancel = {read=GetButton, write=SetButton, index=11};
	__property TcxNavigatorCustomButtons* CustomButtons = {read=FCustomButtons, write=SetCustomButtons};
	__property TcxNavigatorButton* Refresh = {read=GetButton, write=SetButton, index=12};
	__property TcxNavigatorButton* SaveBookmark = {read=GetButton, write=SetButton, index=13};
	__property TcxNavigatorButton* GotoBookmark = {read=GetButton, write=SetButton, index=14};
	__property TcxNavigatorButton* Filter = {read=GetButton, write=SetButton, index=15};
	
public:
	__fastcall virtual TcxCustomNavigatorButtons(_di_IcxNavigatorOwner ANavigator);
	__fastcall virtual ~TcxCustomNavigatorButtons();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall ClickButton(int Index);
	virtual void __fastcall ReleaseBookmark();
	__property int ButtonCount = {read=GetButtonCount, nodefault};
	__property TcxNavigatorButton* Buttons[int Index] = {read=GetButton/*, default*/};
	__property Vcl::Imglist::TCustomImageList* DefaultImages = {read=GetDefaultImages};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	
__published:
	__property TcxNavigatorButtonClickEvent OnButtonClick = {read=FOnButtonClick, write=SetOnButtonClick};
};


typedef _di_IcxNavigatorRecordPosition __fastcall (__closure *TcxInfoPanelGetIRecordPosition)(void);

typedef void __fastcall (__closure *TcxNavigatorInfoPanelClickEvent)(TcxCustomNavigatorInfoPanel* Sender, System::Uitypes::TMouseButton Button);

class PASCALIMPLEMENTATION TcxCustomNavigatorInfoPanel : public TcxNavigatorChildComponent
{
	typedef TcxNavigatorChildComponent inherited;
	
private:
	System::UnicodeString FDisplayMask;
	System::UnicodeString FFormatString;
	bool FIsNeedRecordCount;
	bool FIsNeedRecordIndex;
	bool FVisible;
	int FWidth;
	TcxNavigatorInfoPanelClickEvent FOnClick;
	TcxInfoPanelGetIRecordPosition FOnGetIRecordPosition;
	_di_IcxNavigatorRecordPosition __fastcall GetIRecordPosition();
	bool __fastcall IsDisplayMaskStored();
	void __fastcall SetDisplayMask(const System::UnicodeString Value);
	void __fastcall SetVisible(bool Value);
	void __fastcall SetWidth(const int Value);
	
protected:
	void __fastcall BuildFormatString();
	virtual void __fastcall DoClick(System::Uitypes::TMouseButton Button);
	virtual bool __fastcall GetAdornerTargetElementVisible();
	System::UnicodeString __fastcall GetDisplayMask();
	virtual Cxgraphics::TcxViewParams __fastcall GetViewParams() = 0 ;
	virtual bool __fastcall IsInplaceNavigator();
	virtual void __fastcall ScaleFactorChanged(int M, int D);
	virtual void __fastcall TranslationChanged();
	__property System::UnicodeString DisplayMask = {read=FDisplayMask, write=SetDisplayMask, stored=IsDisplayMaskStored};
	__property bool IsNeedRecordIndex = {read=FIsNeedRecordIndex, nodefault};
	__property bool IsNeedRecordCount = {read=FIsNeedRecordCount, nodefault};
	__property _di_IcxNavigatorRecordPosition IRecordPosition = {read=GetIRecordPosition};
	__property bool Visible = {read=FVisible, write=SetVisible, default=0};
	__property int Width = {read=FWidth, write=SetWidth, default=0};
	
public:
	__fastcall virtual TcxCustomNavigatorInfoPanel(_di_IcxNavigatorOwner ANavigator);
	__fastcall virtual ~TcxCustomNavigatorInfoPanel();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual System::UnicodeString __fastcall GetFormattedText();
	__property TcxInfoPanelGetIRecordPosition OnGetIRecordPosition = {read=FOnGetIRecordPosition, write=FOnGetIRecordPosition};
	
__published:
	__property TcxNavigatorInfoPanelClickEvent OnClick = {read=FOnClick, write=FOnClick};
private:
	void *__IdxLocalizerListener;	// Dxcore::IdxLocalizerListener 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {84134885-1A56-4599-9DC2-BFC70E182032}
	operator Dxcore::_di_IdxLocalizerListener()
	{
		Dxcore::_di_IdxLocalizerListener intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxcore::IdxLocalizerListener*(void) { return (Dxcore::IdxLocalizerListener*)&__IdxLocalizerListener; }
	#endif
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxNavigatorButtonViewInfo : public Dxcoreclasses::TcxIUnknownObject
{
	typedef Dxcoreclasses::TcxIUnknownObject inherited;
	
private:
	TcxNavigatorViewInfo* FOwner;
	bool __fastcall GetNeedDrawFocusRect();
	Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetPainter();
	
protected:
	System::Types::TSize FSize;
	Cxlookandfeelpainters::TcxButtonState FState;
	virtual Cxlookandfeelpainters::TcxButtonState __fastcall CalculateState();
	virtual void __fastcall CorrectButtonBounds(System::Types::TRect &R);
	virtual void __fastcall DrawContent(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState);
	virtual void __fastcall DrawGlyph(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R, Cxlookandfeelpainters::TcxButtonState AState);
	bool __fastcall CanFade();
	void __fastcall GetFadingImages(/* out */ Cxgraphics::TcxBitmap* &AFadeOutImage, /* out */ Cxgraphics::TcxBitmap* &AFadeInImage);
	bool __fastcall HasHintPoint(const System::Types::TPoint &P);
	bool __fastcall IsHintAtMousePos();
	bool __fastcall UseHintHidePause();
	virtual Vcl::Controls::TWinControl* __fastcall GetAdornerTargetElementControl();
	virtual System::Types::TRect __fastcall GetAdornerTargetElementBounds();
	virtual System::UnicodeString __fastcall GetAdornerTargetElementName();
	virtual bool __fastcall GetAdornerTargetElementVisible();
	__property bool NeedDrawFocusRect = {read=GetNeedDrawFocusRect, nodefault};
	
public:
	TcxNavigatorButton* Button;
	System::Types::TRect Bounds;
	bool Enabled;
	System::UnicodeString Hint;
	__fastcall virtual TcxNavigatorButtonViewInfo(TcxNavigatorViewInfo* AOwner);
	__fastcall virtual ~TcxNavigatorButtonViewInfo();
	virtual void __fastcall Calculate();
	virtual void __fastcall Draw(Cxgraphics::TcxCanvas* ACanvas);
	void __fastcall Invalidate();
	void __fastcall UpdateState();
	__property TcxNavigatorViewInfo* Owner = {read=FOwner};
	__property Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* Painter = {read=GetPainter};
	__property System::Types::TSize Size = {read=FSize};
	__property Cxlookandfeelpainters::TcxButtonState State = {read=FState, nodefault};
private:
	void *__IdxAdornerTargetElement;	// Cxclasses::IdxAdornerTargetElement 
	void *__IdxFadingObject;	// Dxfading::IdxFadingObject 
	void *__IcxHintableObject;	// Dxcustomhint::IcxHintableObject 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {FF5950DC-2CE8-4206-BB6A-13635D78F551}
	operator Cxclasses::_di_IdxAdornerTargetElement()
	{
		Cxclasses::_di_IdxAdornerTargetElement intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxclasses::IdxAdornerTargetElement*(void) { return (Cxclasses::IdxAdornerTargetElement*)&__IdxAdornerTargetElement; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {73AB2A92-CDD9-4F13-965A-DC799DE837F9}
	operator Dxfading::_di_IdxFadingObject()
	{
		Dxfading::_di_IdxFadingObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Dxfading::IdxFadingObject*(void) { return (Dxfading::IdxFadingObject*)&__IdxFadingObject; }
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
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxNavigatorButtonsViewInfo : public Dxcoreclasses::TdxFastObjectList
{
	typedef Dxcoreclasses::TdxFastObjectList inherited;
	
public:
	TcxNavigatorButtonViewInfo* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Types::TSize FSize;
	HIDESBASE TcxNavigatorButtonViewInfo* __fastcall GetItem(int Index);
	
public:
	virtual void __fastcall AddAdornerTargetElements(System::Classes::TStrings* AList);
	void __fastcall CalculateSize();
	__property TcxNavigatorButtonViewInfo* Items[int Index] = {read=GetItem/*, default*/};
	__property System::Types::TSize Size = {read=FSize};
public:
	/* TdxFastObjectList.Create */ inline __fastcall TcxNavigatorButtonsViewInfo(bool AOwnsObjects, int ACapacity) : Dxcoreclasses::TdxFastObjectList(AOwnsObjects, ACapacity) { }
	
public:
	/* TdxFastList.Destroy */ inline __fastcall virtual ~TcxNavigatorButtonsViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxCustomNavigatorInfoPanelViewInfo : public Dxcoreclasses::TcxIUnknownObject
{
	typedef Dxcoreclasses::TcxIUnknownObject inherited;
	
private:
	System::Types::TRect FBounds;
	TcxNavigatorViewInfo* FNavigatorViewInfo;
	System::UnicodeString FText;
	System::Types::TRect FTextRect;
	Cxgraphics::TcxViewParams FViewParams;
	TcxCustomNavigatorInfoPanel* __fastcall GetInfoPanel();
	bool __fastcall GetIsPaintOnGlass();
	Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetPainter();
	
protected:
	void __fastcall Draw(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &R);
	virtual Vcl::Controls::TWinControl* __fastcall GetAdornerTargetElementControl();
	virtual System::Types::TRect __fastcall GetAdornerTargetElementBounds();
	virtual bool __fastcall GetAdornerTargetElementVisible();
	void __fastcall DoRightToLeftConversion(const System::Types::TRect &AClientBounds);
	__property TcxCustomNavigatorInfoPanel* InfoPanel = {read=GetInfoPanel};
	__property TcxNavigatorViewInfo* NavigatorViewInfo = {read=FNavigatorViewInfo};
	__property Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* Painter = {read=GetPainter};
	__property Cxgraphics::TcxViewParams ViewParams = {read=FViewParams};
	
public:
	__fastcall TcxCustomNavigatorInfoPanelViewInfo(TcxNavigatorViewInfo* ANavigatorViewInfo);
	void __fastcall Calculate(const System::Types::TRect &ABounds, const System::UnicodeString AText);
	void __fastcall Paint();
	__property System::Types::TRect Bounds = {read=FBounds};
	__property bool IsPaintOnGlass = {read=GetIsPaintOnGlass, nodefault};
	__property System::UnicodeString Text = {read=FText};
	__property System::Types::TRect TextRect = {read=FTextRect};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TcxCustomNavigatorInfoPanelViewInfo() { }
	
private:
	void *__IdxAdornerTargetElement;	// Cxclasses::IdxAdornerTargetElement 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {FF5950DC-2CE8-4206-BB6A-13635D78F551}
	operator Cxclasses::_di_IdxAdornerTargetElement()
	{
		Cxclasses::_di_IdxAdornerTargetElement intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Cxclasses::IdxAdornerTargetElement*(void) { return (Cxclasses::IdxAdornerTargetElement*)&__IdxAdornerTargetElement; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxNavigatorHintHelper : public Cxcontrols::TcxControlHintHelper
{
	typedef Cxcontrols::TcxControlHintHelper inherited;
	
private:
	TcxNavigatorViewInfo* FNavigatorViewInfo;
	
protected:
	virtual void __fastcall CorrectHintWindowRect(System::Types::TRect &ARect);
	virtual Cxcontrols::TcxControl* __fastcall GetOwnerControl();
	
public:
	__fastcall TcxNavigatorHintHelper(TcxNavigatorViewInfo* ANavigatorViewInfo);
	virtual void __fastcall MouseDown();
public:
	/* TcxCustomHintHelper.Destroy */ inline __fastcall virtual ~TcxNavigatorHintHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxNavigatorAccessibilityHelper : public Cxaccessibility::TcxAccessibilityHelper
{
	typedef Cxaccessibility::TcxAccessibilityHelper inherited;
	
private:
	TcxNavigatorViewInfo* __fastcall GetViewInfo();
	
protected:
	virtual bool __fastcall ChildIsSimpleElement(int AIndex);
	virtual void __fastcall DoDefaultAction(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetChildCount();
	virtual System::UnicodeString __fastcall GetDefaultActionDescription(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual System::UnicodeString __fastcall GetName(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual HWND __fastcall GetOwnerObjectWindow();
	virtual int __fastcall GetRole(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual int __fastcall GetState(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual Cxaccessibility::TcxAccessibleObjectProperties __fastcall GetSupportedProperties(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
	virtual bool __fastcall IsExtended();
	__property TcxNavigatorViewInfo* ViewInfo = {read=GetViewInfo};
	
public:
	virtual System::Types::TRect __fastcall GetScreenBounds(Cxaccessibility::TcxAccessibleSimpleChildElementID AChildID);
public:
	/* TcxAccessibilityHelper.Create */ inline __fastcall virtual TdxNavigatorAccessibilityHelper(System::TObject* AOwnerObject) : Cxaccessibility::TcxAccessibilityHelper(AOwnerObject) { }
	/* TcxAccessibilityHelper.Destroy */ inline __fastcall virtual ~TdxNavigatorAccessibilityHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxNavigatorViewInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FButtonIndent;
	Cxclasses::TcxTimer* FButtonPressTimer;
	TcxNavigatorButtonsViewInfo* FButtons;
	Cxgraphics::TcxCanvas* FCanvas;
	TcxNavigatorButton* FFocusedButton;
	TcxNavigatorHintHelper* FHintHelper;
	TcxNavigatorButtonViewInfo* FHotTrackButtonViewInfo;
	Cxaccessibility::_di_IcxAccessibilityHelper FIAccessibilityHelper;
	bool FInfoPanelPressed;
	TcxCustomNavigatorInfoPanelViewInfo* FInfoPanelViewInfo;
	bool FIsInplace;
	bool FIsSelected;
	bool FIsRightToLeftConverted;
	_di_IcxNavigatorOwner FNavigatorOwner;
	_di_IcxNavigatorOwner2 FNavigatorOwner2;
	_di_IcxNavigatorOwner3 FNavigatorOwner3;
	TcxNavigatorButtonViewInfo* FPressedButtonViewInfo;
	int __fastcall GetButtonCount();
	Cxgraphics::TcxCanvas* __fastcall GetCanvas();
	TcxNavigatorButtonViewInfo* __fastcall GetFocusedButton();
	Cxaccessibility::_di_IcxAccessibilityHelper __fastcall GetIAccessibilityHelper();
	TcxCustomNavigatorInfoPanel* __fastcall GetInfoPanel();
	void __fastcall SetFocusedButton(TcxNavigatorButtonViewInfo* Value);
	void __fastcall DoButtonPressTimer(System::TObject* Sender);
	void __fastcall UpdateSelected();
	
protected:
	bool FIsDirty;
	void __fastcall CancelHint();
	void __fastcall CheckHint();
	virtual void __fastcall AddAdornerTargetElements(System::Classes::TStrings* AList);
	void __fastcall CalculateBounds(const System::UnicodeString AInfoPanelText, int AInfoPanelWidth, int AHeight, int AButtonIndent);
	void __fastcall CalculateButtons();
	System::Types::TSize __fastcall CalculateMinSize();
	void __fastcall CalculateSize(int &AWidth, int &AHeight, const System::UnicodeString AInfoPanelText, /* out */ int &AButtonIndent, /* out */ int &AInfoPanelWidth);
	virtual bool __fastcall CanButtonOverlapBorder();
	void __fastcall CheckCalculate();
	void __fastcall ClearButtons();
	virtual void __fastcall DoRightToLeftConversion();
	virtual int __fastcall FindInfoPanelPositionIndex(const System::UnicodeString AInfoPanelText);
	Vcl::Graphics::TFont* __fastcall GetInfoPanelFont();
	System::Types::TSize __fastcall GetInfoPanelSize(System::UnicodeString AText);
	System::UnicodeString __fastcall GetInfoPanelText();
	virtual Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* __fastcall GetLookAndFeelPainter();
	virtual System::Types::TSize __fastcall GetMinButtonSize(int AButtonIndex);
	virtual Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	bool __fastcall HasInfoPanel();
	void __fastcall InvalidateButton(TcxNavigatorButtonViewInfo* AButton);
	virtual void __fastcall PaintBackground(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds);
	void __fastcall PaintButton(int AButtonIndex);
	void __fastcall RightToLeftConversion();
	void __fastcall ValidateButtonsViewInfos();
	__property Cxgraphics::TcxCanvas* Canvas = {read=GetCanvas};
	__property TcxNavigatorButtonViewInfo* FocusedButton = {read=GetFocusedButton, write=SetFocusedButton};
	__property TcxNavigatorButtonViewInfo* HotTrackButtonViewInfo = {read=FHotTrackButtonViewInfo, write=FHotTrackButtonViewInfo};
	__property Cxaccessibility::_di_IcxAccessibilityHelper IAccessibilityHelper = {read=GetIAccessibilityHelper};
	__property TcxCustomNavigatorInfoPanel* InfoPanel = {read=GetInfoPanel};
	__property TcxCustomNavigatorInfoPanelViewInfo* InfoPanelViewInfo = {read=FInfoPanelViewInfo};
	__property bool IsInplace = {read=FIsInplace, nodefault};
	__property bool IsRightToLeftConverted = {read=FIsRightToLeftConverted, nodefault};
	__property Cxlookandfeelpainters::TcxCustomLookAndFeelPainter* LookAndFeelPainter = {read=GetLookAndFeelPainter};
	__property _di_IcxNavigatorOwner NavigatorOwner = {read=FNavigatorOwner};
	__property _di_IcxNavigatorOwner2 NavigatorOwner2 = {read=FNavigatorOwner2};
	__property _di_IcxNavigatorOwner3 NavigatorOwner3 = {read=FNavigatorOwner3};
	__property TcxNavigatorButtonViewInfo* PressedButtonViewInfo = {read=FPressedButtonViewInfo, write=FPressedButtonViewInfo};
	__property Cxgeometry::TdxScaleFactor* ScaleFactor = {read=GetScaleFactor};
	
public:
	__fastcall virtual TcxNavigatorViewInfo(_di_IcxNavigatorOwner ANavigator, bool AIsInplace);
	__fastcall virtual ~TcxNavigatorViewInfo();
	virtual void __fastcall Calculate();
	void __fastcall CheckSize(int &AWidth, int &AHeight);
	void __fastcall Clear();
	void __fastcall DoEnter();
	void __fastcall DoExit();
	TcxNavigatorButton* __fastcall GetButtonAt(const System::Types::TPoint &pt);
	TcxNavigatorButtonViewInfo* __fastcall GetButtonViewInfoAt(const System::Types::TPoint &pt);
	TcxNavigatorButtonViewInfo* __fastcall GetButtonViewInfoByButton(TcxNavigatorButton* AButton);
	void __fastcall MakeDirty();
	void __fastcall MouseDown(int X, int Y);
	void __fastcall MouseLeave();
	void __fastcall MouseMove(int X, int Y);
	void __fastcall MouseUp(System::Uitypes::TMouseButton Button, int X, int Y);
	void __fastcall Paint();
	void __fastcall PaintBorder(const System::Types::TRect &ABounds);
	void __fastcall PressArrowKey(bool ALeftKey);
	void __fastcall Update();
	void __fastcall UpdateButtonsEnabled();
	void __fastcall UpdateInfoPanel();
	__property int ButtonCount = {read=GetButtonCount, nodefault};
	__property int ButtonIndent = {read=FButtonIndent, nodefault};
	__property TcxNavigatorButtonsViewInfo* Buttons = {read=FButtons};
};

#pragma pack(pop)

typedef System::TMetaClass* TcxNavigatorViewInfoClass;

enum DECLSPEC_DENUM TcxNavigatorBorderStyle : unsigned char { nbsDefault, nbsNone, nbsAlways };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxNavigatorControlViewInfo : public TcxNavigatorViewInfo
{
	typedef TcxNavigatorViewInfo inherited;
	
protected:
	virtual bool __fastcall CanButtonOverlapBorder();
public:
	/* TcxNavigatorViewInfo.Create */ inline __fastcall virtual TcxNavigatorControlViewInfo(_di_IcxNavigatorOwner ANavigator, bool AIsInplace) : TcxNavigatorViewInfo(ANavigator, AIsInplace) { }
	/* TcxNavigatorViewInfo.Destroy */ inline __fastcall virtual ~TcxNavigatorControlViewInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TcxInplaceNavigatorViewInfo : public TcxNavigatorViewInfo
{
	typedef TcxNavigatorViewInfo inherited;
	
private:
	System::Types::TSize FNavigatorSize;
	
protected:
	virtual Cxcontrols::TcxControl* __fastcall GetControl();
	int __fastcall GetHeight();
	virtual System::Types::TSize __fastcall GetMinButtonSize(int AButtonIndex);
	virtual int __fastcall GetNavigatorOffset();
	virtual System::Types::TRect __fastcall GetNavigatorSiteBounds();
	virtual Cxgeometry::TdxScaleFactor* __fastcall GetScaleFactor();
	int __fastcall GetWidth();
	bool __fastcall IsNavigatorSizeChanged();
	virtual void __fastcall UpdateNavigatorSiteBounds(const System::Types::TRect &ABounds);
	
public:
	virtual void __fastcall Calculate();
	virtual System::Types::TRect __fastcall GetNavigatorBounds();
	__property Cxcontrols::TcxControl* Control = {read=GetControl};
public:
	/* TcxNavigatorViewInfo.Create */ inline __fastcall virtual TcxInplaceNavigatorViewInfo(_di_IcxNavigatorOwner ANavigator, bool AIsInplace) : TcxNavigatorViewInfo(ANavigator, AIsInplace) { }
	/* TcxNavigatorViewInfo.Destroy */ inline __fastcall virtual ~TcxInplaceNavigatorViewInfo() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TcxCustomNavigator : public Cxcontrols::TcxControl
{
	typedef Cxcontrols::TcxControl inherited;
	
private:
	TcxNavigatorBorderStyle FBorderStyle;
	TcxCustomNavigatorButtons* FButtons;
	TcxCustomNavigatorInfoPanel* FInfoPanel;
	System::Classes::TNotifyEvent FSubClassEvents;
	TcxNavigatorViewInfo* FViewInfo;
	int FSavedButtonIndent;
	HIDESBASE MESSAGE void __fastcall CMHintShow(Vcl::Controls::TCMHintShow &Message);
	Cxaccessibility::_di_IcxAccessibilityHelper __fastcall GetIAccessibilityHelper();
	HIDESBASE void __fastcall SetBorderStyle(const TcxNavigatorBorderStyle Value);
	HIDESBASE MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	MESSAGE void __fastcall WMGetObject(Winapi::Messages::TMessage &Message);
	
protected:
	void __fastcall NavigatorMouseLeave();
	void __fastcall NavigatorChanged(TcxNavigatorChangeType AChangeType);
	System::Types::TRect __fastcall GetNavigatorBounds();
	TcxCustomNavigatorButtons* __fastcall GetNavigatorButtons();
	Vcl::Graphics::TCanvas* __fastcall GetNavigatorCanvas();
	Vcl::Controls::TWinControl* __fastcall GetNavigatorControl();
	bool __fastcall GetNavigatorFocused();
	Cxlookandfeels::TcxLookAndFeel* __fastcall GetNavigatorLookAndFeel();
	System::Classes::TComponent* __fastcall GetNavigatorOwner();
	bool __fastcall GetNavigatorShowHint();
	bool __fastcall GetNavigatorTabStop();
	TcxCustomNavigatorInfoPanel* __fastcall GetNavigatorInfoPanel();
	virtual void __fastcall GetAdornerTargetElements(System::Classes::TStrings* AList);
	virtual bool __fastcall CanFocusOnClick()/* overload */;
	virtual bool __fastcall CanResize(int &NewWidth, int &NewHeight);
	virtual TcxCustomNavigatorButtons* __fastcall CreateButtons();
	virtual TcxCustomNavigatorInfoPanel* __fastcall CreateInfoPanel() = 0 ;
	virtual void __fastcall CreateWnd();
	DYNAMIC void __fastcall DoEnter();
	DYNAMIC void __fastcall DoExit();
	virtual void __fastcall EnabledChanged();
	DYNAMIC void __fastcall FontChanged();
	virtual int __fastcall GetBorderSize();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall LookAndFeelChanged(Cxlookandfeels::TcxLookAndFeel* Sender, Cxlookandfeels::TcxLookAndFeelValues AChangedValues);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseEnter(Vcl::Controls::TControl* AControl);
	DYNAMIC void __fastcall MouseLeave(Vcl::Controls::TControl* AControl);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall ScaleFactorChanging();
	virtual void __fastcall ScaleFactorChanged();
	void __fastcall CheckSize(int &AWidth, int &AHeight);
	virtual bool __fastcall GetPaintBlackOpaqueOnGlass();
	virtual TcxNavigatorViewInfoClass __fastcall GetViewInfoClass();
	virtual void __fastcall DoPaint();
	virtual void __fastcall InitButtons();
	void __fastcall NavigatorStateChanged();
	void __fastcall RefreshNavigator();
	void __fastcall RestoreLayoutParams();
	void __fastcall StoreLayoutParams();
	__property TcxCustomNavigatorButtons* CustomButtons = {read=FButtons};
	__property TcxCustomNavigatorInfoPanel* CustomInfoPanel = {read=FInfoPanel};
	__property Cxaccessibility::_di_IcxAccessibilityHelper IAccessibilityHelper = {read=GetIAccessibilityHelper};
	__property TcxNavigatorViewInfo* ViewInfo = {read=FViewInfo};
	
public:
	__fastcall virtual TcxCustomNavigator(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TcxCustomNavigator();
	void __fastcall ClickButton(int Index);
	void __fastcall RestoreButtons();
	__property TcxNavigatorBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=0};
	__property LookAndFeel;
	
__published:
	__property TabStop = {default=0};
	__property System::Classes::TNotifyEvent ButtonsEvents = {read=FSubClassEvents, write=FSubClassEvents};
	__property System::Classes::TNotifyEvent InfoPanelEvents = {read=FSubClassEvents, write=FSubClassEvents};
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomNavigator(HWND ParentWindow) : Cxcontrols::TcxControl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	inline bool __fastcall  CanFocusOnClick(int X, int Y){ return Cxcontrols::TcxControl::CanFocusOnClick(X, Y); }
	
private:
	void *__IdxSkinSupport;	// Cxlookandfeels::IdxSkinSupport 
	void *__IcxMouseTrackingCaller;	// Dxcoreclasses::IcxMouseTrackingCaller 
	void *__IcxNavigatorOwner2;	// IcxNavigatorOwner2 
	
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
	// {5AC3BE65-B332-40D4-9635-869F52634B17}
	operator _di_IcxNavigatorOwner2()
	{
		_di_IcxNavigatorOwner2 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IcxNavigatorOwner2*(void) { return (IcxNavigatorOwner2*)&__IcxNavigatorOwner2; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {504B7F43-8847-46C5-B84A-C24F8E5E61A6}
	operator _di_IcxNavigatorOwner()
	{
		_di_IcxNavigatorOwner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IcxNavigatorOwner*(void) { return (IcxNavigatorOwner*)&__IcxNavigatorOwner2; }
	#endif
	
};


typedef _di_IcxNavigator __fastcall (__closure *TcxNavigatorControlButtonsGetControl)(void);

class PASCALIMPLEMENTATION TcxNavigatorControlButtons : public TcxCustomNavigatorButtons
{
	typedef TcxCustomNavigatorButtons inherited;
	
private:
	TcxNavigatorControlButtonsGetControl FOnGetControl;
	_di_IcxNavigator __fastcall GetControl();
	
protected:
	virtual void __fastcall DoButtonClick(int ADefaultIndex);
	virtual bool __fastcall GetButtonEnabled(int ADefaultIndex);
	__property _di_IcxNavigator Control = {read=GetControl};
	
public:
	virtual void __fastcall ReleaseBookmark();
	__property TcxNavigatorControlButtonsGetControl OnGetControl = {read=FOnGetControl, write=FOnGetControl};
	
__published:
	__property ConfirmDelete = {default=1};
	__property CustomButtons;
	__property Images;
	__property First;
	__property PriorPage;
	__property Prior;
	__property Next;
	__property NextPage;
	__property Last;
	__property Insert;
	__property Append;
	__property Delete;
	__property Edit;
	__property Post;
	__property Cancel;
	__property Refresh;
	__property SaveBookmark;
	__property GotoBookmark;
	__property Filter;
public:
	/* TcxCustomNavigatorButtons.Create */ inline __fastcall virtual TcxNavigatorControlButtons(_di_IcxNavigatorOwner ANavigator) : TcxCustomNavigatorButtons(ANavigator) { }
	/* TcxCustomNavigatorButtons.Destroy */ inline __fastcall virtual ~TcxNavigatorControlButtons() { }
	
};


typedef System::TMetaClass* TcxNavigatorControlButtonsClass;

class PASCALIMPLEMENTATION TcxNavigatorControlInfoPanel : public TcxCustomNavigatorInfoPanel
{
	typedef TcxCustomNavigatorInfoPanel inherited;
	
private:
	void __fastcall SetFont(Vcl::Graphics::TFont* Value);
	TcxCustomNavigator* __fastcall GetControl();
	Vcl::Graphics::TFont* __fastcall GetFont();
	bool __fastcall GetParentFont();
	bool __fastcall IsFontStored();
	void __fastcall SetParentFont(const bool Value);
	
protected:
	virtual Cxgraphics::TcxViewParams __fastcall GetViewParams();
	virtual bool __fastcall IsInplaceNavigator();
	virtual void __fastcall ResetFont();
	__property TcxCustomNavigator* Control = {read=GetControl};
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property DisplayMask = {default=0};
	__property Vcl::Graphics::TFont* Font = {read=GetFont, write=SetFont, stored=IsFontStored};
	__property bool ParentFont = {read=GetParentFont, write=SetParentFont, default=1};
	__property Visible = {default=0};
	__property Width = {default=0};
public:
	/* TcxCustomNavigatorInfoPanel.Create */ inline __fastcall virtual TcxNavigatorControlInfoPanel(_di_IcxNavigatorOwner ANavigator) : TcxCustomNavigatorInfoPanel(ANavigator) { }
	/* TcxCustomNavigatorInfoPanel.Destroy */ inline __fastcall virtual ~TcxNavigatorControlInfoPanel() { }
	
};


typedef System::TMetaClass* TcxNavigatorControlInfoPanelClass;

class PASCALIMPLEMENTATION TcxCustomNavigatorControl : public TcxCustomNavigator
{
	typedef TcxCustomNavigator inherited;
	
private:
	System::Classes::TComponent* FControl;
	TcxNavigatorControlButtons* __fastcall GetButtons();
	_di_IcxNavigator __fastcall GetIcxNavigator();
	_di_IcxNavigatorRecordPosition __fastcall GetIRecordPosition();
	TcxNavigatorControlInfoPanel* __fastcall GetInfoPanel();
	void __fastcall SetButtons(TcxNavigatorControlButtons* Value);
	void __fastcall SetControl(System::Classes::TComponent* Value);
	void __fastcall SetInfoPanel(TcxNavigatorControlInfoPanel* Value);
	
protected:
	virtual TcxCustomNavigatorButtons* __fastcall CreateButtons();
	virtual TcxCustomNavigatorInfoPanel* __fastcall CreateInfoPanel();
	virtual TcxNavigatorControlButtonsClass __fastcall GetButtonsClass();
	virtual TcxNavigatorControlInfoPanelClass __fastcall GetInfoPanelClass();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall InitButtons();
	__property TcxNavigatorControlButtons* Buttons = {read=GetButtons, write=SetButtons};
	__property System::Classes::TComponent* Control = {read=FControl, write=SetControl};
	__property TcxNavigatorControlInfoPanel* InfoPanel = {read=GetInfoPanel, write=SetInfoPanel};
	
public:
	__fastcall virtual ~TcxCustomNavigatorControl();
public:
	/* TcxCustomNavigator.Create */ inline __fastcall virtual TcxCustomNavigatorControl(System::Classes::TComponent* AOwner) : TcxCustomNavigator(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxCustomNavigatorControl(HWND ParentWindow) : TcxCustomNavigator(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TcxNavigator : public TcxCustomNavigatorControl
{
	typedef TcxCustomNavigatorControl inherited;
	
__published:
	__property BorderStyle = {default=0};
	__property Control;
	__property Buttons;
	__property InfoPanel;
	__property LookAndFeel;
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Ctl3D;
	__property ParentCtl3D = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Visible = {default=1};
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnResize;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TcxCustomNavigatorControl.Destroy */ inline __fastcall virtual ~TcxNavigator() { }
	
public:
	/* TcxCustomNavigator.Create */ inline __fastcall virtual TcxNavigator(System::Classes::TComponent* AOwner) : TcxCustomNavigatorControl(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TcxNavigator(HWND ParentWindow) : TcxCustomNavigatorControl(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 NavigatorButtonCount = System::Int8(0x10);
static const System::Int8 NBDI_FIRST = System::Int8(0x0);
static const System::Int8 NBDI_PRIORPAGE = System::Int8(0x1);
static const System::Int8 NBDI_PRIOR = System::Int8(0x2);
static const System::Int8 NBDI_NEXT = System::Int8(0x3);
static const System::Int8 NBDI_NEXTPAGE = System::Int8(0x4);
static const System::Int8 NBDI_LAST = System::Int8(0x5);
static const System::Int8 NBDI_INSERT = System::Int8(0x6);
static const System::Int8 NBDI_APPEND = System::Int8(0x7);
static const System::Int8 NBDI_DELETE = System::Int8(0x8);
static const System::Int8 NBDI_EDIT = System::Int8(0x9);
static const System::Int8 NBDI_POST = System::Int8(0xa);
static const System::Int8 NBDI_CANCEL = System::Int8(0xb);
static const System::Int8 NBDI_REFRESH = System::Int8(0xc);
static const System::Int8 NBDI_SAVEBOOKMARK = System::Int8(0xd);
static const System::Int8 NBDI_GOTOBOOKMARK = System::Int8(0xe);
static const System::Int8 NBDI_FILTER = System::Int8(0xf);
extern DELPHI_PACKAGE Cxgraphics::TcxImageList* __fastcall NavigatorImages(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall cxGetNavigatorFormatString(const System::UnicodeString ADisplayMask, /* out */ bool &AIsNeedRecordIndex, /* out */ bool &AIsNeedRecordCount);
}	/* namespace Cxnavigator */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXNAVIGATOR)
using namespace Cxnavigator;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxnavigatorHPP
