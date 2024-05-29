// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'cxEditRepositoryItems.pas' rev: 35.00 (Windows)

#ifndef CxeditrepositoryitemsHPP
#define CxeditrepositoryitemsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.ComCtrls.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <cxClasses.hpp>
#include <cxEdit.hpp>
#include <cxTextEdit.hpp>
#include <cxButtonEdit.hpp>
#include <cxDropDownEdit.hpp>
#include <cxImage.hpp>
#include <cxMaskEdit.hpp>
#include <cxCalendar.hpp>
#include <cxCurrencyEdit.hpp>
#include <cxSpinEdit.hpp>
#include <cxMemo.hpp>
#include <cxImageComboBox.hpp>
#include <cxBlobEdit.hpp>
#include <cxCalc.hpp>
#include <cxCheckBox.hpp>
#include <cxTimeEdit.hpp>
#include <cxHyperLinkEdit.hpp>
#include <cxMRUEdit.hpp>
#include <cxRadioGroup.hpp>
#include <dxToggleSwitch.hpp>
#include <dxDateTimeWheelPicker.hpp>
#include <dxSparkline.hpp>
#include <dxNumericWheelPicker.hpp>
#include <dxBarCode.hpp>
#include <dxTokenEdit.hpp>
#include <dxFormattedLabel.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cxeditrepositoryitems
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TcxEditRepositoryTextItem;
class DELPHICLASS TcxEditRepositoryButtonItem;
class DELPHICLASS TcxEditRepositoryImageItem;
class DELPHICLASS TcxEditRepositoryComboBoxItem;
class DELPHICLASS TcxEditRepositoryMaskItem;
class DELPHICLASS TcxEditRepositoryPopupItem;
class DELPHICLASS TcxEditRepositoryCalcItem;
class DELPHICLASS TcxEditRepositoryDateItem;
class DELPHICLASS TcxEditRepositoryCurrencyItem;
class DELPHICLASS TcxEditRepositorySpinItem;
class DELPHICLASS TcxEditRepositoryMemoItem;
class DELPHICLASS TcxEditRepositoryImageComboBoxItem;
class DELPHICLASS TcxEditRepositoryBlobItem;
class DELPHICLASS TcxEditRepositoryCheckBoxItem;
class DELPHICLASS TcxEditRepositoryTimeItem;
class DELPHICLASS TcxEditRepositoryMRUItem;
class DELPHICLASS TcxEditRepositoryHyperLinkItem;
class DELPHICLASS TcxEditRepositoryRadioGroupItem;
class DELPHICLASS TcxEditRepositoryToggleSwitchItem;
class DELPHICLASS TcxEditRepositoryDateTimeWheelPickerItem;
class DELPHICLASS TcxEditRepositoryNumericWheelPickerItem;
class DELPHICLASS TcxEditRepositorySparklineItem;
class DELPHICLASS TcxEditRepositoryBarCodeItem;
class DELPHICLASS TcxEditRepositoryTokenItem;
class DELPHICLASS TcxEditRepositoryFormattedLabel;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TcxEditRepositoryTextItem : public Cxedit::TcxEditRepositoryItem
{
	typedef Cxedit::TcxEditRepositoryItem inherited;
	
private:
	Cxtextedit::TcxTextEditProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(Cxtextedit::TcxTextEditProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetEditPropertiesClass();
	
__published:
	__property Cxtextedit::TcxTextEditProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxEditRepositoryItem.Create */ inline __fastcall virtual TcxEditRepositoryTextItem(System::Classes::TComponent* AOwner) : Cxedit::TcxEditRepositoryItem(AOwner) { }
	/* TcxEditRepositoryItem.Destroy */ inline __fastcall virtual ~TcxEditRepositoryTextItem() { }
	
};


class PASCALIMPLEMENTATION TcxEditRepositoryButtonItem : public Cxedit::TcxEditRepositoryItem
{
	typedef Cxedit::TcxEditRepositoryItem inherited;
	
private:
	Cxbuttonedit::TcxButtonEditProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(Cxbuttonedit::TcxButtonEditProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetEditPropertiesClass();
	
__published:
	__property Cxbuttonedit::TcxButtonEditProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxEditRepositoryItem.Create */ inline __fastcall virtual TcxEditRepositoryButtonItem(System::Classes::TComponent* AOwner) : Cxedit::TcxEditRepositoryItem(AOwner) { }
	/* TcxEditRepositoryItem.Destroy */ inline __fastcall virtual ~TcxEditRepositoryButtonItem() { }
	
};


class PASCALIMPLEMENTATION TcxEditRepositoryImageItem : public Cxedit::TcxEditRepositoryItem
{
	typedef Cxedit::TcxEditRepositoryItem inherited;
	
private:
	Cximage::TcxImageProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(Cximage::TcxImageProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetEditPropertiesClass();
	
__published:
	__property Cximage::TcxImageProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxEditRepositoryItem.Create */ inline __fastcall virtual TcxEditRepositoryImageItem(System::Classes::TComponent* AOwner) : Cxedit::TcxEditRepositoryItem(AOwner) { }
	/* TcxEditRepositoryItem.Destroy */ inline __fastcall virtual ~TcxEditRepositoryImageItem() { }
	
};


class PASCALIMPLEMENTATION TcxEditRepositoryComboBoxItem : public Cxedit::TcxEditRepositoryItem
{
	typedef Cxedit::TcxEditRepositoryItem inherited;
	
private:
	Cxdropdownedit::TcxComboBoxProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(Cxdropdownedit::TcxComboBoxProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetEditPropertiesClass();
	
__published:
	__property Cxdropdownedit::TcxComboBoxProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxEditRepositoryItem.Create */ inline __fastcall virtual TcxEditRepositoryComboBoxItem(System::Classes::TComponent* AOwner) : Cxedit::TcxEditRepositoryItem(AOwner) { }
	/* TcxEditRepositoryItem.Destroy */ inline __fastcall virtual ~TcxEditRepositoryComboBoxItem() { }
	
};


class PASCALIMPLEMENTATION TcxEditRepositoryMaskItem : public Cxedit::TcxEditRepositoryItem
{
	typedef Cxedit::TcxEditRepositoryItem inherited;
	
private:
	Cxmaskedit::TcxMaskEditProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(Cxmaskedit::TcxMaskEditProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetEditPropertiesClass();
	
__published:
	__property Cxmaskedit::TcxMaskEditProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxEditRepositoryItem.Create */ inline __fastcall virtual TcxEditRepositoryMaskItem(System::Classes::TComponent* AOwner) : Cxedit::TcxEditRepositoryItem(AOwner) { }
	/* TcxEditRepositoryItem.Destroy */ inline __fastcall virtual ~TcxEditRepositoryMaskItem() { }
	
};


class PASCALIMPLEMENTATION TcxEditRepositoryPopupItem : public Cxedit::TcxEditRepositoryItem
{
	typedef Cxedit::TcxEditRepositoryItem inherited;
	
private:
	Cxdropdownedit::TcxPopupEditProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(Cxdropdownedit::TcxPopupEditProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetEditPropertiesClass();
	
__published:
	__property Cxdropdownedit::TcxPopupEditProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxEditRepositoryItem.Create */ inline __fastcall virtual TcxEditRepositoryPopupItem(System::Classes::TComponent* AOwner) : Cxedit::TcxEditRepositoryItem(AOwner) { }
	/* TcxEditRepositoryItem.Destroy */ inline __fastcall virtual ~TcxEditRepositoryPopupItem() { }
	
};


class PASCALIMPLEMENTATION TcxEditRepositoryCalcItem : public Cxedit::TcxEditRepositoryItem
{
	typedef Cxedit::TcxEditRepositoryItem inherited;
	
private:
	Cxcalc::TcxCalcEditProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(Cxcalc::TcxCalcEditProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetEditPropertiesClass();
	
__published:
	__property Cxcalc::TcxCalcEditProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxEditRepositoryItem.Create */ inline __fastcall virtual TcxEditRepositoryCalcItem(System::Classes::TComponent* AOwner) : Cxedit::TcxEditRepositoryItem(AOwner) { }
	/* TcxEditRepositoryItem.Destroy */ inline __fastcall virtual ~TcxEditRepositoryCalcItem() { }
	
};


class PASCALIMPLEMENTATION TcxEditRepositoryDateItem : public Cxedit::TcxEditRepositoryItem
{
	typedef Cxedit::TcxEditRepositoryItem inherited;
	
private:
	Cxcalendar::TcxDateEditProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(Cxcalendar::TcxDateEditProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetEditPropertiesClass();
	
__published:
	__property Cxcalendar::TcxDateEditProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxEditRepositoryItem.Create */ inline __fastcall virtual TcxEditRepositoryDateItem(System::Classes::TComponent* AOwner) : Cxedit::TcxEditRepositoryItem(AOwner) { }
	/* TcxEditRepositoryItem.Destroy */ inline __fastcall virtual ~TcxEditRepositoryDateItem() { }
	
};


class PASCALIMPLEMENTATION TcxEditRepositoryCurrencyItem : public Cxedit::TcxEditRepositoryItem
{
	typedef Cxedit::TcxEditRepositoryItem inherited;
	
private:
	Cxcurrencyedit::TcxCurrencyEditProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(Cxcurrencyedit::TcxCurrencyEditProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetEditPropertiesClass();
	
__published:
	__property Cxcurrencyedit::TcxCurrencyEditProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxEditRepositoryItem.Create */ inline __fastcall virtual TcxEditRepositoryCurrencyItem(System::Classes::TComponent* AOwner) : Cxedit::TcxEditRepositoryItem(AOwner) { }
	/* TcxEditRepositoryItem.Destroy */ inline __fastcall virtual ~TcxEditRepositoryCurrencyItem() { }
	
};


class PASCALIMPLEMENTATION TcxEditRepositorySpinItem : public Cxedit::TcxEditRepositoryItem
{
	typedef Cxedit::TcxEditRepositoryItem inherited;
	
private:
	Cxspinedit::TcxSpinEditProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(Cxspinedit::TcxSpinEditProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetEditPropertiesClass();
	
__published:
	__property Cxspinedit::TcxSpinEditProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxEditRepositoryItem.Create */ inline __fastcall virtual TcxEditRepositorySpinItem(System::Classes::TComponent* AOwner) : Cxedit::TcxEditRepositoryItem(AOwner) { }
	/* TcxEditRepositoryItem.Destroy */ inline __fastcall virtual ~TcxEditRepositorySpinItem() { }
	
};


class PASCALIMPLEMENTATION TcxEditRepositoryMemoItem : public Cxedit::TcxEditRepositoryItem
{
	typedef Cxedit::TcxEditRepositoryItem inherited;
	
private:
	Cxmemo::TcxMemoProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(Cxmemo::TcxMemoProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetEditPropertiesClass();
	
__published:
	__property Cxmemo::TcxMemoProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxEditRepositoryItem.Create */ inline __fastcall virtual TcxEditRepositoryMemoItem(System::Classes::TComponent* AOwner) : Cxedit::TcxEditRepositoryItem(AOwner) { }
	/* TcxEditRepositoryItem.Destroy */ inline __fastcall virtual ~TcxEditRepositoryMemoItem() { }
	
};


class PASCALIMPLEMENTATION TcxEditRepositoryImageComboBoxItem : public Cxedit::TcxEditRepositoryItem
{
	typedef Cxedit::TcxEditRepositoryItem inherited;
	
private:
	Cximagecombobox::TcxImageComboBoxProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(Cximagecombobox::TcxImageComboBoxProperties* Value);
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetEditPropertiesClass();
	
__published:
	__property Cximagecombobox::TcxImageComboBoxProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxEditRepositoryItem.Create */ inline __fastcall virtual TcxEditRepositoryImageComboBoxItem(System::Classes::TComponent* AOwner) : Cxedit::TcxEditRepositoryItem(AOwner) { }
	/* TcxEditRepositoryItem.Destroy */ inline __fastcall virtual ~TcxEditRepositoryImageComboBoxItem() { }
	
};


class PASCALIMPLEMENTATION TcxEditRepositoryBlobItem : public Cxedit::TcxEditRepositoryItem
{
	typedef Cxedit::TcxEditRepositoryItem inherited;
	
private:
	Cxblobedit::TcxBlobEditProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(Cxblobedit::TcxBlobEditProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetEditPropertiesClass();
	
__published:
	__property Cxblobedit::TcxBlobEditProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxEditRepositoryItem.Create */ inline __fastcall virtual TcxEditRepositoryBlobItem(System::Classes::TComponent* AOwner) : Cxedit::TcxEditRepositoryItem(AOwner) { }
	/* TcxEditRepositoryItem.Destroy */ inline __fastcall virtual ~TcxEditRepositoryBlobItem() { }
	
};


class PASCALIMPLEMENTATION TcxEditRepositoryCheckBoxItem : public Cxedit::TcxEditRepositoryItem
{
	typedef Cxedit::TcxEditRepositoryItem inherited;
	
private:
	Cxcheckbox::TcxCheckBoxProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(Cxcheckbox::TcxCheckBoxProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetEditPropertiesClass();
	
__published:
	__property Cxcheckbox::TcxCheckBoxProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxEditRepositoryItem.Create */ inline __fastcall virtual TcxEditRepositoryCheckBoxItem(System::Classes::TComponent* AOwner) : Cxedit::TcxEditRepositoryItem(AOwner) { }
	/* TcxEditRepositoryItem.Destroy */ inline __fastcall virtual ~TcxEditRepositoryCheckBoxItem() { }
	
};


class PASCALIMPLEMENTATION TcxEditRepositoryTimeItem : public Cxedit::TcxEditRepositoryItem
{
	typedef Cxedit::TcxEditRepositoryItem inherited;
	
private:
	Cxtimeedit::TcxTimeEditProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(Cxtimeedit::TcxTimeEditProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetEditPropertiesClass();
	
__published:
	__property Cxtimeedit::TcxTimeEditProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxEditRepositoryItem.Create */ inline __fastcall virtual TcxEditRepositoryTimeItem(System::Classes::TComponent* AOwner) : Cxedit::TcxEditRepositoryItem(AOwner) { }
	/* TcxEditRepositoryItem.Destroy */ inline __fastcall virtual ~TcxEditRepositoryTimeItem() { }
	
};


class PASCALIMPLEMENTATION TcxEditRepositoryMRUItem : public Cxedit::TcxEditRepositoryItem
{
	typedef Cxedit::TcxEditRepositoryItem inherited;
	
private:
	Cxmruedit::TcxMRUEditProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(Cxmruedit::TcxMRUEditProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetEditPropertiesClass();
	
__published:
	__property Cxmruedit::TcxMRUEditProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxEditRepositoryItem.Create */ inline __fastcall virtual TcxEditRepositoryMRUItem(System::Classes::TComponent* AOwner) : Cxedit::TcxEditRepositoryItem(AOwner) { }
	/* TcxEditRepositoryItem.Destroy */ inline __fastcall virtual ~TcxEditRepositoryMRUItem() { }
	
};


class PASCALIMPLEMENTATION TcxEditRepositoryHyperLinkItem : public Cxedit::TcxEditRepositoryItem
{
	typedef Cxedit::TcxEditRepositoryItem inherited;
	
private:
	Cxhyperlinkedit::TcxHyperLinkEditProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(Cxhyperlinkedit::TcxHyperLinkEditProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetEditPropertiesClass();
	
__published:
	__property Cxhyperlinkedit::TcxHyperLinkEditProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxEditRepositoryItem.Create */ inline __fastcall virtual TcxEditRepositoryHyperLinkItem(System::Classes::TComponent* AOwner) : Cxedit::TcxEditRepositoryItem(AOwner) { }
	/* TcxEditRepositoryItem.Destroy */ inline __fastcall virtual ~TcxEditRepositoryHyperLinkItem() { }
	
};


class PASCALIMPLEMENTATION TcxEditRepositoryRadioGroupItem : public Cxedit::TcxEditRepositoryItem
{
	typedef Cxedit::TcxEditRepositoryItem inherited;
	
private:
	Cxradiogroup::TcxRadioGroupProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(Cxradiogroup::TcxRadioGroupProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetEditPropertiesClass();
	
__published:
	__property Cxradiogroup::TcxRadioGroupProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxEditRepositoryItem.Create */ inline __fastcall virtual TcxEditRepositoryRadioGroupItem(System::Classes::TComponent* AOwner) : Cxedit::TcxEditRepositoryItem(AOwner) { }
	/* TcxEditRepositoryItem.Destroy */ inline __fastcall virtual ~TcxEditRepositoryRadioGroupItem() { }
	
};


class PASCALIMPLEMENTATION TcxEditRepositoryToggleSwitchItem : public Cxedit::TcxEditRepositoryItem
{
	typedef Cxedit::TcxEditRepositoryItem inherited;
	
private:
	Dxtoggleswitch::TdxToggleSwitchProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(Dxtoggleswitch::TdxToggleSwitchProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetEditPropertiesClass();
	
__published:
	__property Dxtoggleswitch::TdxToggleSwitchProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxEditRepositoryItem.Create */ inline __fastcall virtual TcxEditRepositoryToggleSwitchItem(System::Classes::TComponent* AOwner) : Cxedit::TcxEditRepositoryItem(AOwner) { }
	/* TcxEditRepositoryItem.Destroy */ inline __fastcall virtual ~TcxEditRepositoryToggleSwitchItem() { }
	
};


class PASCALIMPLEMENTATION TcxEditRepositoryDateTimeWheelPickerItem : public Cxedit::TcxEditRepositoryItem
{
	typedef Cxedit::TcxEditRepositoryItem inherited;
	
private:
	Dxdatetimewheelpicker::TdxDateTimeWheelPickerProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(Dxdatetimewheelpicker::TdxDateTimeWheelPickerProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetEditPropertiesClass();
	
__published:
	__property Dxdatetimewheelpicker::TdxDateTimeWheelPickerProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxEditRepositoryItem.Create */ inline __fastcall virtual TcxEditRepositoryDateTimeWheelPickerItem(System::Classes::TComponent* AOwner) : Cxedit::TcxEditRepositoryItem(AOwner) { }
	/* TcxEditRepositoryItem.Destroy */ inline __fastcall virtual ~TcxEditRepositoryDateTimeWheelPickerItem() { }
	
};


class PASCALIMPLEMENTATION TcxEditRepositoryNumericWheelPickerItem : public Cxedit::TcxEditRepositoryItem
{
	typedef Cxedit::TcxEditRepositoryItem inherited;
	
private:
	Dxnumericwheelpicker::TdxNumericWheelPickerProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(Dxnumericwheelpicker::TdxNumericWheelPickerProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetEditPropertiesClass();
	
__published:
	__property Dxnumericwheelpicker::TdxNumericWheelPickerProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxEditRepositoryItem.Create */ inline __fastcall virtual TcxEditRepositoryNumericWheelPickerItem(System::Classes::TComponent* AOwner) : Cxedit::TcxEditRepositoryItem(AOwner) { }
	/* TcxEditRepositoryItem.Destroy */ inline __fastcall virtual ~TcxEditRepositoryNumericWheelPickerItem() { }
	
};


class PASCALIMPLEMENTATION TcxEditRepositorySparklineItem : public Cxedit::TcxEditRepositoryItem
{
	typedef Cxedit::TcxEditRepositoryItem inherited;
	
private:
	Dxsparkline::TdxSparklineProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(Dxsparkline::TdxSparklineProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetEditPropertiesClass();
	
__published:
	__property Dxsparkline::TdxSparklineProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxEditRepositoryItem.Create */ inline __fastcall virtual TcxEditRepositorySparklineItem(System::Classes::TComponent* AOwner) : Cxedit::TcxEditRepositoryItem(AOwner) { }
	/* TcxEditRepositoryItem.Destroy */ inline __fastcall virtual ~TcxEditRepositorySparklineItem() { }
	
};


class PASCALIMPLEMENTATION TcxEditRepositoryBarCodeItem : public Cxedit::TcxEditRepositoryItem
{
	typedef Cxedit::TcxEditRepositoryItem inherited;
	
private:
	Dxbarcode::TdxBarCodeProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(Dxbarcode::TdxBarCodeProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetEditPropertiesClass();
	
__published:
	__property Dxbarcode::TdxBarCodeProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxEditRepositoryItem.Create */ inline __fastcall virtual TcxEditRepositoryBarCodeItem(System::Classes::TComponent* AOwner) : Cxedit::TcxEditRepositoryItem(AOwner) { }
	/* TcxEditRepositoryItem.Destroy */ inline __fastcall virtual ~TcxEditRepositoryBarCodeItem() { }
	
};


class PASCALIMPLEMENTATION TcxEditRepositoryTokenItem : public Cxedit::TcxEditRepositoryItem
{
	typedef Cxedit::TcxEditRepositoryItem inherited;
	
private:
	Dxtokenedit::TdxTokenEditProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(Dxtokenedit::TdxTokenEditProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetEditPropertiesClass();
	
__published:
	__property Dxtokenedit::TdxTokenEditProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxEditRepositoryItem.Create */ inline __fastcall virtual TcxEditRepositoryTokenItem(System::Classes::TComponent* AOwner) : Cxedit::TcxEditRepositoryItem(AOwner) { }
	/* TcxEditRepositoryItem.Destroy */ inline __fastcall virtual ~TcxEditRepositoryTokenItem() { }
	
};


class PASCALIMPLEMENTATION TcxEditRepositoryFormattedLabel : public Cxedit::TcxEditRepositoryItem
{
	typedef Cxedit::TcxEditRepositoryItem inherited;
	
private:
	Dxformattedlabel::TdxFormattedLabelProperties* __fastcall GetProperties();
	HIDESBASE void __fastcall SetProperties(Dxformattedlabel::TdxFormattedLabelProperties* Value);
	
public:
	__classmethod virtual Cxedit::TcxCustomEditPropertiesClass __fastcall GetEditPropertiesClass();
	
__published:
	__property Dxformattedlabel::TdxFormattedLabelProperties* Properties = {read=GetProperties, write=SetProperties};
public:
	/* TcxEditRepositoryItem.Create */ inline __fastcall virtual TcxEditRepositoryFormattedLabel(System::Classes::TComponent* AOwner) : Cxedit::TcxEditRepositoryItem(AOwner) { }
	/* TcxEditRepositoryItem.Destroy */ inline __fastcall virtual ~TcxEditRepositoryFormattedLabel() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Cxeditrepositoryitems */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CXEDITREPOSITORYITEMS)
using namespace Cxeditrepositoryitems;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CxeditrepositoryitemsHPP
