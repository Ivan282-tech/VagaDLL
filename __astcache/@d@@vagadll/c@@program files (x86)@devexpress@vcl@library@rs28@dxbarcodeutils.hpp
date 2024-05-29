// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'dxBarCodeUtils.pas' rev: 35.00 (Windows)

#ifndef DxbarcodeutilsHPP
#define DxbarcodeutilsHPP

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
#include <Vcl.Graphics.hpp>
#include <System.SysUtils.hpp>
#include <dxCore.hpp>
#include <cxClasses.hpp>
#include <cxGeometry.hpp>
#include <cxGraphics.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dxbarcodeutils
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TdxBarCodeCustomPainter;
class DELPHICLASS TdxBarCodePainter;
class DELPHICLASS TdxCustomBarCodeGenerator;
class DELPHICLASS TdxBarCodeOneDimensionalGenerator;
class DELPHICLASS TdxBarCodeEANTypeGenerator;
class DELPHICLASS TdxBarCodeEAN13Generator;
class DELPHICLASS TdxBarCodeEAN8Generator;
class DELPHICLASS TdxBarCodeUPCAGenerator;
class DELPHICLASS TdxBarCodeUPCEGenerator;
class DELPHICLASS TdxBarCode128Generator;
class DELPHICLASS TdxBarCodeITFTypeGenerator;
class DELPHICLASS TdxBarCodeInterleaved2Of5Generator;
class DELPHICLASS TdxBarCode39Generator;
class DELPHICLASS TdxBarCode39ExtendedGenerator;
class DELPHICLASS TdxBarCode93Generator;
class DELPHICLASS TdxBarCode93ExtendedGenerator;
class DELPHICLASS TdxBarCodeMSIGenerator;
class DELPHICLASS TdxBarCode11Generator;
class DELPHICLASS TdxBarCodeQRCodeGenerator;
class DELPHICLASS TdxCustomBarCodeSymbology;
class DELPHICLASS TdxBarCodeEAN13Symbology;
class DELPHICLASS TdxBarCodeEAN8Symbology;
class DELPHICLASS TdxBarCodeUPCASymbology;
class DELPHICLASS TdxBarCodeUPCESymbology;
class DELPHICLASS TdxBarCode128Symbology;
class DELPHICLASS TdxBarCodeITFTypeSymbology;
class DELPHICLASS TdxBarCodeInterleaved2Of5Symbology;
class DELPHICLASS TdxBarCode39Symbology;
class DELPHICLASS TdxBarCode39ExtendedSymbology;
class DELPHICLASS TdxBarCode93Symbology;
class DELPHICLASS TdxBarCode93ExtendedSymbology;
class DELPHICLASS TdxBarCodeMSISymbology;
class DELPHICLASS TdxBarCode11Symbology;
class DELPHICLASS TdxBarCodeQRCodeSymbology;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TdxBit : unsigned char { bit0, bit1 };

typedef System::DynamicArray<TdxBit> TdxBitArray;

typedef System::DynamicArray<TdxBitArray> Tdx2DBitArray;

typedef System::DynamicArray<int> Dxbarcodeutils__1;

typedef System::StaticArray<Dxbarcodeutils__1, 81> TdxQRCodeBlocks;

enum DECLSPEC_DENUM TdxBarCodeErrorType : unsigned char { bceNone, bceInvalidCharacters, bceInvalidTextFormat, bceBoundsTooSmall };

typedef Cxgraphics::TcxImageFitMode TdxBarCodeFitMode;

typedef System::TMetaClass* TdxCustomBarCodeGeneratorClass;

typedef System::TMetaClass* TdxCustomBarCodeSymbologyClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarCodeCustomPainter : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual void __fastcall FillRect(const System::Types::TRect &ARect, System::Uitypes::TColor AColor) = 0 ;
	virtual void __fastcall DrawText(const System::Types::TRect &ARect, const System::UnicodeString AText, int AFormat, Vcl::Graphics::TFont* AFont) = 0 ;
public:
	/* TObject.Create */ inline __fastcall TdxBarCodeCustomPainter() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarCodeCustomPainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarCodePainter : public TdxBarCodeCustomPainter
{
	typedef TdxBarCodeCustomPainter inherited;
	
private:
	Cxgraphics::TcxCanvas* FCanvas;
	
public:
	virtual void __fastcall FillRect(const System::Types::TRect &ARect, System::Uitypes::TColor AColor);
	virtual void __fastcall DrawText(const System::Types::TRect &ARect, const System::UnicodeString AText, int AFormat, Vcl::Graphics::TFont* AFont);
	__property Cxgraphics::TcxCanvas* Canvas = {read=FCanvas, write=FCanvas};
public:
	/* TObject.Create */ inline __fastcall TdxBarCodePainter() : TdxBarCodeCustomPainter() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarCodePainter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxCustomBarCodeGenerator : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TdxCustomBarCodeSymbology* __fastcall GetSymbology();
	
private:
	void __fastcall AdjustFontSize(const System::UnicodeString AText, int AAvailableWidth, Vcl::Graphics::TFont* AFont);
	
protected:
	TdxBarCodeCustomPainter* FPainter;
	TdxCustomBarCodeSymbology* FSymbology;
	virtual TdxBarCodeErrorType __fastcall CalculateSize(const System::UnicodeString AText, TdxCustomBarCodeSymbology* ASymbology, Vcl::Graphics::TFont* const AFont, /* out */ int &AWidth, /* out */ int &AHeight);
	virtual TdxBarCodeErrorType __fastcall Paint(TdxBarCodeCustomPainter* APainter, const System::Types::TRect &ABounds, const System::UnicodeString AText, TdxCustomBarCodeSymbology* ASymbology, Vcl::Graphics::TFont* const AFont)/* overload */;
	virtual void __fastcall AdjustCodeText(System::UnicodeString &ACodeText);
	virtual TdxBarCodeErrorType __fastcall CheckText(const System::UnicodeString AText);
	virtual System::UnicodeString __fastcall GetCodeText(const System::UnicodeString AText);
	virtual System::UnicodeString __fastcall GetTextForDrawing(const System::UnicodeString ACodeText);
	virtual TdxBarCodeErrorType __fastcall CalculateRect(const System::UnicodeString ACodeText, Vcl::Graphics::TFont* AFont, System::Types::TRect &ARect);
	virtual int __fastcall DefaultBarHeight();
	virtual int __fastcall GetCodeWidth(const System::UnicodeString ACodeText);
	virtual System::Types::TSize __fastcall GetInternalSize(const System::UnicodeString ACodeText, Vcl::Graphics::TFont* const AFont);
	virtual int __fastcall GetScaledFontHeight(const System::Types::TRect &ABounds, Vcl::Graphics::TFont* AFont, const System::UnicodeString ACodeText);
	virtual int __fastcall GetTextHeight(const System::UnicodeString AText, Vcl::Graphics::TFont* AFont);
	virtual System::Types::TRect __fastcall GetTextRect(const System::Types::TRect &ABoundsRect, const System::Types::TRect &ACodeRect);
	virtual float __fastcall ScaleX(const System::Types::TSize &AClientSize, const System::Types::TSize &ADefaultSize);
	virtual float __fastcall ScaleY(const System::Types::TSize &AClientSize, const System::Types::TSize &ADefaultSize);
	virtual void __fastcall DrawBars(const System::Types::TRect &ABoundsRect, const System::UnicodeString ACodeText, const Cxgeometry::TdxSizeF &ABarSize);
	virtual void __fastcall DrawText(const System::UnicodeString ACodeText, const System::Types::TRect &ARect, const Cxgeometry::TdxSizeF &ABarSize, Vcl::Graphics::TFont* AFont);
	virtual int __fastcall GetBottomOffset();
	virtual int __fastcall GetLeftOffset();
	virtual int __fastcall GetRightOffset();
	virtual int __fastcall GetTopOffset();
	__property TdxCustomBarCodeSymbology* Symbology = {read=GetSymbology};
public:
	/* TObject.Create */ inline __fastcall TdxCustomBarCodeGenerator() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxCustomBarCodeGenerator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarCodeOneDimensionalGenerator : public TdxCustomBarCodeGenerator
{
	typedef TdxCustomBarCodeGenerator inherited;
	
private:
	HIDESBASE TdxCustomBarCodeSymbology* __fastcall GetSymbology();
	
protected:
	virtual TdxBarCodeErrorType __fastcall CalculateRect(const System::UnicodeString ACodeText, Vcl::Graphics::TFont* AFont, System::Types::TRect &ARect);
	virtual TdxBarCodeErrorType __fastcall CalculateSize(const System::UnicodeString AText, TdxCustomBarCodeSymbology* ASymbology, Vcl::Graphics::TFont* const AFont, /* out */ int &AWidth, /* out */ int &AHeight);
	virtual int __fastcall DefaultBarHeight();
	virtual void __fastcall DrawText(const System::UnicodeString ACodeText, const System::Types::TRect &ARect, const Cxgeometry::TdxSizeF &ABarSize, Vcl::Graphics::TFont* AFont);
	virtual TdxBitArray __fastcall GetBinaryCode(const System::UnicodeString ACodeText);
	virtual int __fastcall GetBinaryCodeLength(const System::UnicodeString ACodeText);
	virtual System::UnicodeString __fastcall GetFullSymbolicCode(const System::UnicodeString ACodeText);
	virtual int __fastcall GetFullSymbolicCodeLength(const System::UnicodeString ACodeText);
	virtual int __fastcall GetModuleForSymbolCount();
	virtual System::UnicodeString __fastcall GetStartBinaryCode();
	virtual System::UnicodeString __fastcall GetStopBinaryCode();
	virtual void __fastcall PopulatePartBinaryCode(const System::UnicodeString AFullSymbolicCode, TdxBitArray ABinaryCode, int ANumberPos, int &AModulePos);
	__property TdxCustomBarCodeSymbology* Symbology = {read=GetSymbology};
public:
	/* TObject.Create */ inline __fastcall TdxBarCodeOneDimensionalGenerator() : TdxCustomBarCodeGenerator() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarCodeOneDimensionalGenerator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarCodeEANTypeGenerator : public TdxBarCodeOneDimensionalGenerator
{
	typedef TdxBarCodeOneDimensionalGenerator inherited;
	
protected:
	virtual void __fastcall DrawBars(const System::Types::TRect &ABoundsRect, const System::UnicodeString ACodeText, const Cxgeometry::TdxSizeF &ABarSize);
	virtual int __fastcall GetCodeWidth(const System::UnicodeString ACodeText);
	virtual float __fastcall GetLongBarHeight(float ABarWidth, float ABarHeight);
	virtual TdxBitArray __fastcall GetLongLinePatternMask(const System::UnicodeString ACodeText);
public:
	/* TObject.Create */ inline __fastcall TdxBarCodeEANTypeGenerator() : TdxBarCodeOneDimensionalGenerator() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarCodeEANTypeGenerator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarCodeEAN13Generator : public TdxBarCodeEANTypeGenerator
{
	typedef TdxBarCodeEANTypeGenerator inherited;
	
private:
	HIDESBASE TdxBarCodeEAN13Symbology* __fastcall GetSymbology();
	
protected:
	virtual void __fastcall AdjustCodeText(System::UnicodeString &ACodeText);
	virtual TdxBarCodeErrorType __fastcall CheckText(const System::UnicodeString AText);
	virtual int __fastcall DefaultBarHeight();
	virtual void __fastcall DrawText(const System::UnicodeString ACodeText, const System::Types::TRect &ARect, const Cxgeometry::TdxSizeF &ABarSize, Vcl::Graphics::TFont* AFont);
	virtual int __fastcall GetScaledFontHeight(const System::Types::TRect &ABounds, Vcl::Graphics::TFont* AFont, const System::UnicodeString ACodeText);
	virtual System::UnicodeString __fastcall GetTextForDrawing(const System::UnicodeString ACodeText);
	virtual int __fastcall GetBinaryCodeLength(const System::UnicodeString ACodeText);
	virtual System::UnicodeString __fastcall GetFullSymbolicCode(const System::UnicodeString ACodeText);
	virtual TdxBitArray __fastcall GetLongLinePatternMask(const System::UnicodeString ACodeText);
	virtual float __fastcall GetLongBarHeight(float ABarWidth, float ABarHeight);
	virtual int __fastcall GetModuleForSymbolCount();
	virtual System::UnicodeString __fastcall GetStartBinaryCode();
	virtual System::UnicodeString __fastcall GetStopBinaryCode();
	virtual System::Types::TRect __fastcall GetTextRect(const System::Types::TRect &ABoundsRect, const System::Types::TRect &ACodeRect);
	virtual void __fastcall PopulatePartBinaryCode(const System::UnicodeString AFullSymbolicCode, TdxBitArray ABinaryCode, int ANumberPos, int &AModulePos);
	virtual int __fastcall GetLeftOffset();
	virtual int __fastcall GetRightOffset();
	virtual int __fastcall GetTextHeight(const System::UnicodeString AText, Vcl::Graphics::TFont* AFont);
	System::UnicodeString __fastcall GetCenterCode();
	System::UnicodeString __fastcall GetChecksum(const System::UnicodeString ACodeText);
	__property TdxBarCodeEAN13Symbology* Symbology = {read=GetSymbology};
public:
	/* TObject.Create */ inline __fastcall TdxBarCodeEAN13Generator() : TdxBarCodeEANTypeGenerator() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarCodeEAN13Generator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarCodeEAN8Generator : public TdxBarCodeEANTypeGenerator
{
	typedef TdxBarCodeEANTypeGenerator inherited;
	
private:
	HIDESBASE TdxBarCodeEAN8Symbology* __fastcall GetSymbology();
	
protected:
	virtual void __fastcall AdjustCodeText(System::UnicodeString &ACodeText);
	virtual TdxBarCodeErrorType __fastcall CheckText(const System::UnicodeString AText);
	virtual int __fastcall DefaultBarHeight();
	virtual void __fastcall DrawText(const System::UnicodeString ACodeText, const System::Types::TRect &ARect, const Cxgeometry::TdxSizeF &ABarSize, Vcl::Graphics::TFont* AFont);
	virtual int __fastcall GetScaledFontHeight(const System::Types::TRect &ABounds, Vcl::Graphics::TFont* AFont, const System::UnicodeString ACodeText);
	virtual System::UnicodeString __fastcall GetTextForDrawing(const System::UnicodeString ACodeText);
	virtual int __fastcall GetBinaryCodeLength(const System::UnicodeString ACodeText);
	virtual System::UnicodeString __fastcall GetFullSymbolicCode(const System::UnicodeString ACodeText);
	virtual TdxBitArray __fastcall GetLongLinePatternMask(const System::UnicodeString ACodeText);
	virtual float __fastcall GetLongBarHeight(float ABarWidth, float ABarHeight);
	virtual int __fastcall GetModuleForSymbolCount();
	virtual System::UnicodeString __fastcall GetStartBinaryCode();
	virtual System::UnicodeString __fastcall GetStopBinaryCode();
	virtual System::Types::TRect __fastcall GetTextRect(const System::Types::TRect &ABoundsRect, const System::Types::TRect &ACodeRect);
	virtual void __fastcall PopulatePartBinaryCode(const System::UnicodeString AFullSymbolicCode, TdxBitArray ABinaryCode, int ANumberPos, int &AModulePos);
	virtual int __fastcall GetLeftOffset();
	virtual int __fastcall GetRightOffset();
	System::UnicodeString __fastcall GetCenterCode();
	System::UnicodeString __fastcall GetChecksum(const System::UnicodeString ACodeText);
	virtual int __fastcall GetTextHeight(const System::UnicodeString AText, Vcl::Graphics::TFont* AFont);
	__property TdxBarCodeEAN8Symbology* Symbology = {read=GetSymbology};
public:
	/* TObject.Create */ inline __fastcall TdxBarCodeEAN8Generator() : TdxBarCodeEANTypeGenerator() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarCodeEAN8Generator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarCodeUPCAGenerator : public TdxBarCodeEANTypeGenerator
{
	typedef TdxBarCodeEANTypeGenerator inherited;
	
private:
	HIDESBASE TdxBarCodeUPCASymbology* __fastcall GetSymbology();
	
protected:
	virtual void __fastcall AdjustCodeText(System::UnicodeString &ACodeText);
	virtual TdxBarCodeErrorType __fastcall CheckText(const System::UnicodeString AText);
	virtual int __fastcall DefaultBarHeight();
	virtual void __fastcall DrawText(const System::UnicodeString ACodeText, const System::Types::TRect &ARect, const Cxgeometry::TdxSizeF &ABarSize, Vcl::Graphics::TFont* AFont);
	virtual int __fastcall GetScaledFontHeight(const System::Types::TRect &ABounds, Vcl::Graphics::TFont* AFont, const System::UnicodeString ACodeText);
	virtual System::UnicodeString __fastcall GetTextForDrawing(const System::UnicodeString ACodeText);
	virtual int __fastcall GetBinaryCodeLength(const System::UnicodeString ACodeText);
	virtual System::UnicodeString __fastcall GetFullSymbolicCode(const System::UnicodeString ACodeText);
	virtual TdxBitArray __fastcall GetLongLinePatternMask(const System::UnicodeString ACodeText);
	virtual float __fastcall GetLongBarHeight(float ABarWidth, float ABarHeight);
	virtual int __fastcall GetModuleForSymbolCount();
	virtual System::UnicodeString __fastcall GetStartBinaryCode();
	virtual System::UnicodeString __fastcall GetStopBinaryCode();
	virtual System::Types::TRect __fastcall GetTextRect(const System::Types::TRect &ABoundsRect, const System::Types::TRect &ACodeRect);
	virtual void __fastcall PopulatePartBinaryCode(const System::UnicodeString AFullSymbolicCode, TdxBitArray ABinaryCode, int ANumberPos, int &AModulePos);
	virtual int __fastcall GetLeftOffset();
	virtual int __fastcall GetRightOffset();
	System::UnicodeString __fastcall GetCenterCode();
	System::UnicodeString __fastcall GetChecksum(const System::UnicodeString ACodeText);
	virtual int __fastcall GetTextHeight(const System::UnicodeString AText, Vcl::Graphics::TFont* AFont);
	__property TdxBarCodeUPCASymbology* Symbology = {read=GetSymbology};
public:
	/* TObject.Create */ inline __fastcall TdxBarCodeUPCAGenerator() : TdxBarCodeEANTypeGenerator() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarCodeUPCAGenerator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarCodeUPCEGenerator : public TdxBarCodeEANTypeGenerator
{
	typedef TdxBarCodeEANTypeGenerator inherited;
	
private:
	HIDESBASE TdxBarCodeUPCESymbology* __fastcall GetSymbology();
	
protected:
	virtual void __fastcall AdjustCodeText(System::UnicodeString &ACodeText);
	virtual TdxBarCodeErrorType __fastcall CheckText(const System::UnicodeString AText);
	virtual int __fastcall DefaultBarHeight();
	virtual void __fastcall DrawText(const System::UnicodeString ACodeText, const System::Types::TRect &ARect, const Cxgeometry::TdxSizeF &ABarSize, Vcl::Graphics::TFont* AFont);
	virtual int __fastcall GetScaledFontHeight(const System::Types::TRect &ABounds, Vcl::Graphics::TFont* AFont, const System::UnicodeString ACodeText);
	virtual System::UnicodeString __fastcall GetTextForDrawing(const System::UnicodeString ACodeText);
	virtual int __fastcall GetBinaryCodeLength(const System::UnicodeString ACodeText);
	virtual System::UnicodeString __fastcall GetFullSymbolicCode(const System::UnicodeString ACodeText);
	virtual TdxBitArray __fastcall GetLongLinePatternMask(const System::UnicodeString ACodeText);
	virtual float __fastcall GetLongBarHeight(float ABarWidth, float ABarHeight);
	virtual int __fastcall GetModuleForSymbolCount();
	virtual System::UnicodeString __fastcall GetStartBinaryCode();
	virtual System::UnicodeString __fastcall GetStopBinaryCode();
	virtual System::Types::TRect __fastcall GetTextRect(const System::Types::TRect &ABoundsRect, const System::Types::TRect &ACodeRect);
	virtual void __fastcall PopulatePartBinaryCode(const System::UnicodeString AFullSymbolicCode, TdxBitArray ABinaryCode, int ANumberPos, int &AModulePos);
	virtual int __fastcall GetLeftOffset();
	virtual int __fastcall GetRightOffset();
	System::UnicodeString __fastcall GetChecksum(const System::UnicodeString ACodeText);
	virtual int __fastcall GetTextHeight(const System::UnicodeString AText, Vcl::Graphics::TFont* AFont);
	__property TdxBarCodeUPCESymbology* Symbology = {read=GetSymbology};
public:
	/* TObject.Create */ inline __fastcall TdxBarCodeUPCEGenerator() : TdxBarCodeEANTypeGenerator() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarCodeUPCEGenerator() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TdxBarCode128CharacterSet : unsigned char { csAuto, csA, csB, csC };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarCode128Generator : public TdxBarCodeEANTypeGenerator
{
	typedef TdxBarCodeEANTypeGenerator inherited;
	
private:
	TdxBarCodeErrorType __fastcall CheckCodeByCharset(const System::UnicodeString ACodeText, TdxBarCode128CharacterSet ACharset);
	int __fastcall GetIndexBySymbol(System::WideChar ASymbol);
	HIDESBASE TdxBarCode128Symbology* __fastcall GetSymbology();
	
protected:
	virtual System::UnicodeString __fastcall GetFullSymbolicCode(const System::UnicodeString ACodeText);
	virtual System::Types::TSize __fastcall GetInternalSize(const System::UnicodeString ACodeText, Vcl::Graphics::TFont* const AFont);
	virtual TdxBarCodeErrorType __fastcall CheckText(const System::UnicodeString AText);
	virtual int __fastcall GetModuleForSymbolCount();
	virtual System::UnicodeString __fastcall GetStopBinaryCode();
	virtual void __fastcall PopulatePartBinaryCode(const System::UnicodeString AFullSymbolicCode, TdxBitArray ABinaryCode, int ANumberPos, int &AModulePos);
	virtual int __fastcall GetLeftOffset();
	virtual int __fastcall GetRightOffset();
	System::UnicodeString __fastcall GetChecksum(const System::UnicodeString ACodeText);
	virtual bool __fastcall IsEAN();
	__property TdxBarCode128Symbology* Symbology = {read=GetSymbology};
public:
	/* TObject.Create */ inline __fastcall TdxBarCode128Generator() : TdxBarCodeEANTypeGenerator() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarCode128Generator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarCodeITFTypeGenerator : public TdxBarCodeOneDimensionalGenerator
{
	typedef TdxBarCodeOneDimensionalGenerator inherited;
	
private:
	HIDESBASE TdxBarCodeITFTypeSymbology* __fastcall GetSymbology();
	
protected:
	virtual void __fastcall DrawBars(const System::Types::TRect &ABoundsRect, const System::UnicodeString ACodeText, const Cxgeometry::TdxSizeF &ABarSize);
	virtual int __fastcall GetCodeWidth(const System::UnicodeString ACodeText);
	virtual System::Types::TSize __fastcall GetInternalSize(const System::UnicodeString ACodeText, Vcl::Graphics::TFont* const AFont);
	__property TdxBarCodeITFTypeSymbology* Symbology = {read=GetSymbology};
public:
	/* TObject.Create */ inline __fastcall TdxBarCodeITFTypeGenerator() : TdxBarCodeOneDimensionalGenerator() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarCodeITFTypeGenerator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarCodeInterleaved2Of5Generator : public TdxBarCodeITFTypeGenerator
{
	typedef TdxBarCodeITFTypeGenerator inherited;
	
private:
	HIDESBASE TdxBarCodeInterleaved2Of5Symbology* __fastcall GetSymbology();
	
protected:
	virtual TdxBarCodeErrorType __fastcall CheckText(const System::UnicodeString AText);
	virtual System::UnicodeString __fastcall GetTextForDrawing(const System::UnicodeString ACodeText);
	virtual System::UnicodeString __fastcall GetFullSymbolicCode(const System::UnicodeString ACodeText);
	virtual int __fastcall GetModuleForSymbolCount();
	virtual System::UnicodeString __fastcall GetStartBinaryCode();
	virtual System::UnicodeString __fastcall GetStopBinaryCode();
	virtual void __fastcall PopulatePartBinaryCode(const System::UnicodeString AFullSymbolicCode, TdxBitArray ABinaryCode, int ANumberPos, int &AModulePos);
	virtual int __fastcall GetLeftOffset();
	virtual int __fastcall GetRightOffset();
	System::UnicodeString __fastcall GetChecksum(const System::UnicodeString ACodeText);
	__property TdxBarCodeInterleaved2Of5Symbology* Symbology = {read=GetSymbology};
public:
	/* TObject.Create */ inline __fastcall TdxBarCodeInterleaved2Of5Generator() : TdxBarCodeITFTypeGenerator() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarCodeInterleaved2Of5Generator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarCode39Generator : public TdxBarCodeITFTypeGenerator
{
	typedef TdxBarCodeITFTypeGenerator inherited;
	
private:
	int __fastcall GetCharMapIndex(const System::UnicodeString AFullSymbolicCode, int ACharIndex);
	System::UnicodeString __fastcall GetEdgeCode();
	HIDESBASE TdxBarCode39Symbology* __fastcall GetSymbology();
	
protected:
	virtual TdxBarCodeErrorType __fastcall CheckText(const System::UnicodeString AText);
	virtual System::UnicodeString __fastcall GetTextForDrawing(const System::UnicodeString ACodeText);
	virtual System::UnicodeString __fastcall GetFullSymbolicCode(const System::UnicodeString ACodeText);
	virtual int __fastcall GetModuleForSymbolCount();
	virtual System::UnicodeString __fastcall GetStartBinaryCode();
	virtual System::UnicodeString __fastcall GetStopBinaryCode();
	virtual void __fastcall PopulatePartBinaryCode(const System::UnicodeString AFullSymbolicCode, TdxBitArray ABinaryCode, int ANumberPos, int &AModulePos);
	virtual int __fastcall GetLeftOffset();
	virtual int __fastcall GetRightOffset();
	System::UnicodeString __fastcall GetChecksum(const System::UnicodeString ACodeText);
	__property TdxBarCode39Symbology* Symbology = {read=GetSymbology};
public:
	/* TObject.Create */ inline __fastcall TdxBarCode39Generator() : TdxBarCodeITFTypeGenerator() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarCode39Generator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarCode39ExtendedGenerator : public TdxBarCode39Generator
{
	typedef TdxBarCode39Generator inherited;
	
private:
	HIDESBASE TdxBarCode39ExtendedSymbology* __fastcall GetSymbology();
	
protected:
	virtual TdxBarCodeErrorType __fastcall CheckText(const System::UnicodeString AText);
	virtual System::UnicodeString __fastcall GetTextForDrawing(const System::UnicodeString ACodeText);
	virtual System::UnicodeString __fastcall GetFullSymbolicCode(const System::UnicodeString ACodeText);
	__property TdxBarCode39ExtendedSymbology* Symbology = {read=GetSymbology};
public:
	/* TObject.Create */ inline __fastcall TdxBarCode39ExtendedGenerator() : TdxBarCode39Generator() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarCode39ExtendedGenerator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarCode93Generator : public TdxBarCodeEANTypeGenerator
{
	typedef TdxBarCodeEANTypeGenerator inherited;
	
private:
	System::UnicodeString __fastcall GetChecksum(const System::UnicodeString ACodeText, int AWeighting);
	int __fastcall GetSymbolNumber(System::WideChar ASymbol);
	HIDESBASE TdxBarCode93Symbology* __fastcall GetSymbology();
	
protected:
	virtual TdxBarCodeErrorType __fastcall CheckText(const System::UnicodeString AText);
	virtual System::UnicodeString __fastcall GetFullSymbolicCode(const System::UnicodeString ACodeText);
	virtual System::Types::TSize __fastcall GetInternalSize(const System::UnicodeString ACodeText, Vcl::Graphics::TFont* const AFont);
	virtual int __fastcall GetModuleForSymbolCount();
	virtual System::UnicodeString __fastcall GetStartBinaryCode();
	virtual System::UnicodeString __fastcall GetStopBinaryCode();
	virtual int __fastcall GetLeftOffset();
	virtual int __fastcall GetRightOffset();
	virtual void __fastcall PopulatePartBinaryCode(const System::UnicodeString AFullSymbolicCode, TdxBitArray ABinaryCode, int ANumberPos, int &AModulePos);
	__property TdxBarCode93Symbology* Symbology = {read=GetSymbology};
public:
	/* TObject.Create */ inline __fastcall TdxBarCode93Generator() : TdxBarCodeEANTypeGenerator() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarCode93Generator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarCode93ExtendedGenerator : public TdxBarCode93Generator
{
	typedef TdxBarCode93Generator inherited;
	
private:
	HIDESBASE TdxBarCode93ExtendedSymbology* __fastcall GetSymbology();
	
protected:
	virtual TdxBarCodeErrorType __fastcall CheckText(const System::UnicodeString AText);
	virtual System::UnicodeString __fastcall GetFullSymbolicCode(const System::UnicodeString ACodeText);
	__property TdxBarCode93ExtendedSymbology* Symbology = {read=GetSymbology};
public:
	/* TObject.Create */ inline __fastcall TdxBarCode93ExtendedGenerator() : TdxBarCode93Generator() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarCode93ExtendedGenerator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarCodeMSIGenerator : public TdxBarCodeEANTypeGenerator
{
	typedef TdxBarCodeEANTypeGenerator inherited;
	
private:
	HIDESBASE TdxBarCodeMSISymbology* __fastcall GetSymbology();
	
protected:
	virtual TdxBarCodeErrorType __fastcall CheckText(const System::UnicodeString AText);
	virtual System::UnicodeString __fastcall GetTextForDrawing(const System::UnicodeString ACodeText);
	virtual System::UnicodeString __fastcall GetFullSymbolicCode(const System::UnicodeString ACodeText);
	virtual System::Types::TSize __fastcall GetInternalSize(const System::UnicodeString ACodeText, Vcl::Graphics::TFont* const AFont);
	virtual int __fastcall GetModuleForSymbolCount();
	virtual System::UnicodeString __fastcall GetStartBinaryCode();
	virtual System::UnicodeString __fastcall GetStopBinaryCode();
	virtual void __fastcall PopulatePartBinaryCode(const System::UnicodeString AFullSymbolicCode, TdxBitArray ABinaryCode, int ANumberPos, int &AModulePos);
	virtual int __fastcall GetLeftOffset();
	virtual int __fastcall GetRightOffset();
	System::UnicodeString __fastcall GetChecksum(const System::UnicodeString ACodeText);
	__property TdxBarCodeMSISymbology* Symbology = {read=GetSymbology};
public:
	/* TObject.Create */ inline __fastcall TdxBarCodeMSIGenerator() : TdxBarCodeEANTypeGenerator() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarCodeMSIGenerator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarCode11Generator : public TdxBarCodeITFTypeGenerator
{
	typedef TdxBarCodeITFTypeGenerator inherited;
	
private:
	HIDESBASE TdxBarCode11Symbology* __fastcall GetSymbology();
	
protected:
	virtual TdxBarCodeErrorType __fastcall CheckText(const System::UnicodeString AText);
	virtual System::UnicodeString __fastcall GetFullSymbolicCode(const System::UnicodeString ACodeText);
	virtual int __fastcall GetModuleForSymbolCount();
	virtual System::UnicodeString __fastcall GetStartBinaryCode();
	virtual System::UnicodeString __fastcall GetStopBinaryCode();
	virtual void __fastcall PopulatePartBinaryCode(const System::UnicodeString AFullSymbolicCode, TdxBitArray ABinaryCode, int ANumberPos, int &AModulePos);
	virtual int __fastcall GetLeftOffset();
	virtual int __fastcall GetRightOffset();
	System::UnicodeString __fastcall GetChecksum(const System::UnicodeString ACodeText);
	int __fastcall GetSymbolNumber(System::WideChar ASymbol);
	__property TdxBarCode11Symbology* Symbology = {read=GetSymbology};
public:
	/* TObject.Create */ inline __fastcall TdxBarCode11Generator() : TdxBarCodeITFTypeGenerator() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarCode11Generator() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TdxQRCodeCompactionMode : unsigned char { qrmNumeric, qrmAlphaNumeric, qrmByte };

enum DECLSPEC_DENUM TdxQRCodeErrorCorrectionLevel : unsigned char { eclL, eclM, eclQ, eclH };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TdxBarCodeQRCodeGenerator : public TdxCustomBarCodeGenerator
{
	typedef TdxCustomBarCodeGenerator inherited;
	
private:
	HIDESBASE TdxBarCodeQRCodeSymbology* __fastcall GetSymbology();
	void __fastcall AddBinaryData(TdxBitArray ABinaryCode, const System::UnicodeString ACodeText);
	void __fastcall AddIndicatorCharCount(TdxBitArray ABinaryCode, int ACharCount);
	void __fastcall AddModeIndicator(TdxBitArray ABinaryCode);
	void __fastcall AddNextValue(TdxBitArray ABinaryCode, int AValue, int APosition, int ASymbolCountInValue);
	void __fastcall AddNullPattern(TdxBitArray ABinaryCode, int AStartWordPosition);
	void __fastcall CalculateCodeWords(TdxBitArray ABinaryCode, TdxQRCodeBlocks &ACodeWords);
	void __fastcall CalculateErrorCorrectionWords(const TdxQRCodeBlocks &ACodeWords, TdxQRCodeBlocks &AErrorWords);
	TdxBitArray __fastcall CreateBinaryCodeFromText(const System::UnicodeString ACodeText);
	TdxBitArray __fastcall CreateResultBinaryCode(const TdxQRCodeBlocks &ACodeWords, const TdxQRCodeBlocks &AErrorWords);
	int __fastcall GetBlockCount();
	int __fastcall GetCharCountIndicatorLength(int AVersion);
	int __fastcall GetDataWordCount();
	int __fastcall GetErrorCorrectionWordInBlockCount();
	void __fastcall PopulateBinaryCodeForAlphaNumericType(TdxBitArray ABinaryCode, const System::UnicodeString ACodeText, int &APosition);
	void __fastcall PopulateBinaryCodeForByteType(TdxBitArray ABinaryCode, const System::UnicodeString ACodeText, int &APosition);
	void __fastcall PopulateBinaryCodeForNumericType(TdxBitArray ABinaryCode, const System::UnicodeString ACodeText, int &APosition);
	void __fastcall AddAlignmentPatternsToMatrix(Tdx2DBitArray ARegularMatrix, Tdx2DBitArray ARegularMatrixMask);
	void __fastcall AddCodeLevelAndMaskToMatrix(Tdx2DBitArray AMatrix, const System::UnicodeString ACode);
	void __fastcall AddDataToMatrix(TdxBitArray ABinaryCode, Tdx2DBitArray ADataMatrixMask, Tdx2DBitArray ADataMatrix);
	void __fastcall AddRequiredPatternsToMatrix(Tdx2DBitArray ARegularMatrix, Tdx2DBitArray ARegularMatrixMask);
	void __fastcall AddSearchPatternsToMatrix(Tdx2DBitArray ARegularMatrix, Tdx2DBitArray ARegularMatrixMask);
	void __fastcall AddVersionCodeToMatrix(Tdx2DBitArray AMatrix);
	Tdx2DBitArray __fastcall GetDataMatrixMask(Tdx2DBitArray AMaskMatrixMask);
	Tdx2DBitArray __fastcall GetMaskMatrixMask(Tdx2DBitArray ARegularMatrixMask);
	int __fastcall GetMatrixSize();
	void __fastcall AssignMask(Tdx2DBitArray AMatrix, Tdx2DBitArray AMaskMatrixMask, int AMaskIndex);
	int __fastcall SelectMask(Tdx2DBitArray AMatrix, Tdx2DBitArray AMaskMatrixMask);
	
protected:
	int FVersion;
	virtual TdxBarCodeErrorType __fastcall CalculateRect(const System::UnicodeString ACodeText, Vcl::Graphics::TFont* AFont, System::Types::TRect &ARect);
	virtual TdxBarCodeErrorType __fastcall CalculateSize(const System::UnicodeString AText, TdxCustomBarCodeSymbology* ASymbology, Vcl::Graphics::TFont* const AFont, /* out */ int &AWidth, /* out */ int &AHeight);
	virtual TdxBarCodeErrorType __fastcall CheckText(const System::UnicodeString AText);
	virtual void __fastcall DrawBars(const System::Types::TRect &ABoundsRect, const System::UnicodeString ACodeText, const Cxgeometry::TdxSizeF &ABarSize);
	virtual int __fastcall GetCodeWidth(const System::UnicodeString ACodeText);
	virtual System::Types::TSize __fastcall GetInternalSize(const System::UnicodeString ACodeText, Vcl::Graphics::TFont* const AFont);
	virtual TdxBarCodeErrorType __fastcall Paint(TdxBarCodeCustomPainter* APainter, const System::Types::TRect &ABounds, const System::UnicodeString AText, TdxCustomBarCodeSymbology* ASymbology, Vcl::Graphics::TFont* const AFont)/* overload */;
	virtual void __fastcall DrawText(const System::UnicodeString ACodeText, const System::Types::TRect &ARect, const Cxgeometry::TdxSizeF &ABarSize, Vcl::Graphics::TFont* AFont);
	Tdx2DBitArray __fastcall CreateBinaryMatrix(const System::UnicodeString ACodeText, int AMaskIndex = 0xffffffff, bool AMask = true);
	int __fastcall GetMinVersion(const System::UnicodeString AText);
	int __fastcall SelectMaskRule1(Tdx2DBitArray AMatrixWithMask, int X, int Y, bool ANewLine, int &AMonochromeModuleCounter, TdxBit &ACurrentModuleColor);
	int __fastcall SelectMaskRule2(Tdx2DBitArray AMatrixWithMask, int X, int Y);
	int __fastcall SelectMaskRule3(Tdx2DBitArray AMatrixWithMask, int X, int Y);
	virtual int __fastcall GetBottomOffset();
	virtual int __fastcall GetLeftOffset();
	virtual int __fastcall GetRightOffset();
	virtual int __fastcall GetTopOffset();
	__property TdxBarCodeQRCodeSymbology* Symbology = {read=GetSymbology};
public:
	/* TObject.Create */ inline __fastcall TdxBarCodeQRCodeGenerator() : TdxCustomBarCodeGenerator() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TdxBarCodeQRCodeGenerator() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TdxCustomBarCodeSymbology : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	Cxgraphics::TcxImageFitMode FFitMode;
	System::Uitypes::TColor FModuleColor;
	int FModuleWidth;
	bool FShowText;
	System::Classes::TNotifyEvent FOnChanged;
	
protected:
	TdxCustomBarCodeGenerator* FGenerator;
	virtual void __fastcall Changed();
	virtual TdxCustomBarCodeGeneratorClass __fastcall GetGeneratorClass() = 0 ;
	TdxBarCodeErrorType __fastcall CalculateSize(const System::UnicodeString AText, Vcl::Graphics::TFont* const AFont, /* out */ int &AWidth, /* out */ int &AHeight);
	TdxBarCodeErrorType __fastcall Paint(TdxBarCodeCustomPainter* APainter, const System::Types::TRect &ABounds, const System::UnicodeString AText, Vcl::Graphics::TFont* const AFont)/* overload */;
	TdxBarCodeErrorType __fastcall Paint(Cxgraphics::TcxCanvas* ACanvas, const System::Types::TRect &ABounds, const System::UnicodeString AText, Vcl::Graphics::TFont* const AFont)/* overload */;
	__property TdxBarCodeFitMode FitMode = {read=FFitMode, write=FFitMode, nodefault};
	__property System::Uitypes::TColor ModuleColor = {read=FModuleColor, write=FModuleColor, nodefault};
	__property int ModuleWidth = {read=FModuleWidth, write=FModuleWidth, nodefault};
	__property bool ShowText = {read=FShowText, write=FShowText, nodefault};
	__property System::Classes::TNotifyEvent OnChanged = {read=FOnChanged, write=FOnChanged};
	
public:
	__fastcall virtual TdxCustomBarCodeSymbology();
	__fastcall virtual ~TdxCustomBarCodeSymbology();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
};


class PASCALIMPLEMENTATION TdxBarCodeEAN13Symbology : public TdxCustomBarCodeSymbology
{
	typedef TdxCustomBarCodeSymbology inherited;
	
protected:
	virtual TdxCustomBarCodeGeneratorClass __fastcall GetGeneratorClass();
public:
	/* TdxCustomBarCodeSymbology.Create */ inline __fastcall virtual TdxBarCodeEAN13Symbology() : TdxCustomBarCodeSymbology() { }
	/* TdxCustomBarCodeSymbology.Destroy */ inline __fastcall virtual ~TdxBarCodeEAN13Symbology() { }
	
};


class PASCALIMPLEMENTATION TdxBarCodeEAN8Symbology : public TdxCustomBarCodeSymbology
{
	typedef TdxCustomBarCodeSymbology inherited;
	
protected:
	virtual TdxCustomBarCodeGeneratorClass __fastcall GetGeneratorClass();
public:
	/* TdxCustomBarCodeSymbology.Create */ inline __fastcall virtual TdxBarCodeEAN8Symbology() : TdxCustomBarCodeSymbology() { }
	/* TdxCustomBarCodeSymbology.Destroy */ inline __fastcall virtual ~TdxBarCodeEAN8Symbology() { }
	
};


class PASCALIMPLEMENTATION TdxBarCodeUPCASymbology : public TdxCustomBarCodeSymbology
{
	typedef TdxCustomBarCodeSymbology inherited;
	
protected:
	virtual TdxCustomBarCodeGeneratorClass __fastcall GetGeneratorClass();
public:
	/* TdxCustomBarCodeSymbology.Create */ inline __fastcall virtual TdxBarCodeUPCASymbology() : TdxCustomBarCodeSymbology() { }
	/* TdxCustomBarCodeSymbology.Destroy */ inline __fastcall virtual ~TdxBarCodeUPCASymbology() { }
	
};


class PASCALIMPLEMENTATION TdxBarCodeUPCESymbology : public TdxCustomBarCodeSymbology
{
	typedef TdxCustomBarCodeSymbology inherited;
	
protected:
	virtual TdxCustomBarCodeGeneratorClass __fastcall GetGeneratorClass();
public:
	/* TdxCustomBarCodeSymbology.Create */ inline __fastcall virtual TdxBarCodeUPCESymbology() : TdxCustomBarCodeSymbology() { }
	/* TdxCustomBarCodeSymbology.Destroy */ inline __fastcall virtual ~TdxBarCodeUPCESymbology() { }
	
};


class PASCALIMPLEMENTATION TdxBarCode128Symbology : public TdxCustomBarCodeSymbology
{
	typedef TdxCustomBarCodeSymbology inherited;
	
private:
	TdxBarCode128CharacterSet FCharacterSet;
	void __fastcall SetCharacterSet(TdxBarCode128CharacterSet AValue);
	
protected:
	virtual TdxCustomBarCodeGeneratorClass __fastcall GetGeneratorClass();
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property TdxBarCode128CharacterSet CharacterSet = {read=FCharacterSet, write=SetCharacterSet, nodefault};
public:
	/* TdxCustomBarCodeSymbology.Create */ inline __fastcall virtual TdxBarCode128Symbology() : TdxCustomBarCodeSymbology() { }
	/* TdxCustomBarCodeSymbology.Destroy */ inline __fastcall virtual ~TdxBarCode128Symbology() { }
	
};


class PASCALIMPLEMENTATION TdxBarCodeITFTypeSymbology : public TdxCustomBarCodeSymbology
{
	typedef TdxCustomBarCodeSymbology inherited;
	
private:
	bool FChecksum;
	float FWideNarrowRatio;
	void __fastcall SetChecksum(bool AValue);
	void __fastcall SetWideNarrowRatio(float AValue);
	
protected:
	virtual bool __fastcall IsWideNarrowRatioStored();
	__property bool Checksum = {read=FChecksum, write=SetChecksum, nodefault};
	__property float WideNarrowRatio = {read=FWideNarrowRatio, write=SetWideNarrowRatio, stored=IsWideNarrowRatioStored};
	
public:
	__fastcall virtual TdxBarCodeITFTypeSymbology();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
public:
	/* TdxCustomBarCodeSymbology.Destroy */ inline __fastcall virtual ~TdxBarCodeITFTypeSymbology() { }
	
};


class PASCALIMPLEMENTATION TdxBarCodeInterleaved2Of5Symbology : public TdxBarCodeITFTypeSymbology
{
	typedef TdxBarCodeITFTypeSymbology inherited;
	
protected:
	virtual TdxCustomBarCodeGeneratorClass __fastcall GetGeneratorClass();
	
__published:
	__property Checksum = {default=1};
	__property WideNarrowRatio = {default=0};
public:
	/* TdxBarCodeITFTypeSymbology.Create */ inline __fastcall virtual TdxBarCodeInterleaved2Of5Symbology() : TdxBarCodeITFTypeSymbology() { }
	
public:
	/* TdxCustomBarCodeSymbology.Destroy */ inline __fastcall virtual ~TdxBarCodeInterleaved2Of5Symbology() { }
	
};


class PASCALIMPLEMENTATION TdxBarCode39Symbology : public TdxBarCodeITFTypeSymbology
{
	typedef TdxBarCodeITFTypeSymbology inherited;
	
protected:
	virtual TdxCustomBarCodeGeneratorClass __fastcall GetGeneratorClass();
	
__published:
	__property Checksum = {default=1};
	__property WideNarrowRatio = {default=0};
public:
	/* TdxBarCodeITFTypeSymbology.Create */ inline __fastcall virtual TdxBarCode39Symbology() : TdxBarCodeITFTypeSymbology() { }
	
public:
	/* TdxCustomBarCodeSymbology.Destroy */ inline __fastcall virtual ~TdxBarCode39Symbology() { }
	
};


class PASCALIMPLEMENTATION TdxBarCode39ExtendedSymbology : public TdxBarCode39Symbology
{
	typedef TdxBarCode39Symbology inherited;
	
protected:
	virtual TdxCustomBarCodeGeneratorClass __fastcall GetGeneratorClass();
public:
	/* TdxBarCodeITFTypeSymbology.Create */ inline __fastcall virtual TdxBarCode39ExtendedSymbology() : TdxBarCode39Symbology() { }
	
public:
	/* TdxCustomBarCodeSymbology.Destroy */ inline __fastcall virtual ~TdxBarCode39ExtendedSymbology() { }
	
};


class PASCALIMPLEMENTATION TdxBarCode93Symbology : public TdxCustomBarCodeSymbology
{
	typedef TdxCustomBarCodeSymbology inherited;
	
protected:
	virtual TdxCustomBarCodeGeneratorClass __fastcall GetGeneratorClass();
public:
	/* TdxCustomBarCodeSymbology.Create */ inline __fastcall virtual TdxBarCode93Symbology() : TdxCustomBarCodeSymbology() { }
	/* TdxCustomBarCodeSymbology.Destroy */ inline __fastcall virtual ~TdxBarCode93Symbology() { }
	
};


class PASCALIMPLEMENTATION TdxBarCode93ExtendedSymbology : public TdxBarCode93Symbology
{
	typedef TdxBarCode93Symbology inherited;
	
protected:
	virtual TdxCustomBarCodeGeneratorClass __fastcall GetGeneratorClass();
public:
	/* TdxCustomBarCodeSymbology.Create */ inline __fastcall virtual TdxBarCode93ExtendedSymbology() : TdxBarCode93Symbology() { }
	/* TdxCustomBarCodeSymbology.Destroy */ inline __fastcall virtual ~TdxBarCode93ExtendedSymbology() { }
	
};


class PASCALIMPLEMENTATION TdxBarCodeMSISymbology : public TdxCustomBarCodeSymbology
{
	typedef TdxCustomBarCodeSymbology inherited;
	
protected:
	virtual TdxCustomBarCodeGeneratorClass __fastcall GetGeneratorClass();
public:
	/* TdxCustomBarCodeSymbology.Create */ inline __fastcall virtual TdxBarCodeMSISymbology() : TdxCustomBarCodeSymbology() { }
	/* TdxCustomBarCodeSymbology.Destroy */ inline __fastcall virtual ~TdxBarCodeMSISymbology() { }
	
};


class PASCALIMPLEMENTATION TdxBarCode11Symbology : public TdxBarCodeITFTypeSymbology
{
	typedef TdxBarCodeITFTypeSymbology inherited;
	
protected:
	virtual TdxCustomBarCodeGeneratorClass __fastcall GetGeneratorClass();
	
public:
	__fastcall virtual TdxBarCode11Symbology();
public:
	/* TdxCustomBarCodeSymbology.Destroy */ inline __fastcall virtual ~TdxBarCode11Symbology() { }
	
};


class PASCALIMPLEMENTATION TdxBarCodeQRCodeSymbology : public TdxCustomBarCodeSymbology
{
	typedef TdxCustomBarCodeSymbology inherited;
	
private:
	TdxQRCodeCompactionMode FCompactionMode;
	TdxQRCodeErrorCorrectionLevel FErrorCorrectionLevel;
	int FVersion;
	void __fastcall SetCompactionMode(TdxQRCodeCompactionMode AValue);
	void __fastcall SetErrorCorrectionLevel(TdxQRCodeErrorCorrectionLevel AValue);
	void __fastcall SetVersion(int AValue);
	
protected:
	virtual TdxCustomBarCodeGeneratorClass __fastcall GetGeneratorClass();
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__fastcall virtual TdxBarCodeQRCodeSymbology();
	
__published:
	__property TdxQRCodeCompactionMode CompactionMode = {read=FCompactionMode, write=SetCompactionMode, default=2};
	__property TdxQRCodeErrorCorrectionLevel ErrorCorrectionLevel = {read=FErrorCorrectionLevel, write=SetErrorCorrectionLevel, default=1};
	__property int Version = {read=FVersion, write=SetVersion, default=0};
public:
	/* TdxCustomBarCodeSymbology.Destroy */ inline __fastcall virtual ~TdxBarCodeQRCodeSymbology() { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE int dxBarCodeEAN13LeftQuietZoneSize;
extern DELPHI_PACKAGE int dxBarCodeEAN13RightQuietZoneSize;
extern DELPHI_PACKAGE int dxBarCodeEAN8LeftQuietZoneSize;
extern DELPHI_PACKAGE int dxBarCodeEAN8RightQuietZoneSize;
extern DELPHI_PACKAGE int dxBarCodeUPCALeftQuietZoneSize;
extern DELPHI_PACKAGE int dxBarCodeUPCARightQuietZoneSize;
extern DELPHI_PACKAGE int dxBarCodeUPCELeftQuietZoneSize;
extern DELPHI_PACKAGE int dxBarCodeUPCERightQuietZoneSize;
extern DELPHI_PACKAGE int dxBarCode128LeftQuietZoneSize;
extern DELPHI_PACKAGE int dxBarCode128RightQuietZoneSize;
extern DELPHI_PACKAGE int dxBarCodeInterleaved2Of5LeftQuietZoneSize;
extern DELPHI_PACKAGE int dxBarCodeInterleaved2Of5RightQuietZoneSize;
extern DELPHI_PACKAGE int dxBarCode39LeftQuietZoneSize;
extern DELPHI_PACKAGE int dxBarCode39RightQuietZoneSize;
extern DELPHI_PACKAGE int dxBarCode93LeftQuietZoneSize;
extern DELPHI_PACKAGE int dxBarCode93RightQuietZoneSize;
extern DELPHI_PACKAGE int dxBarCodeMSILeftQuietZoneSize;
extern DELPHI_PACKAGE int dxBarCodeMSIRightQuietZoneSize;
extern DELPHI_PACKAGE int dxBarCode11LeftQuietZoneSize;
extern DELPHI_PACKAGE int dxBarCode11RightQuietZoneSize;
extern DELPHI_PACKAGE int dxBarCodeQRCodeLeftQuietZoneSize;
extern DELPHI_PACKAGE int dxBarCodeQRCodeRightQuietZoneSize;
extern DELPHI_PACKAGE int dxBarCodeQRCodeTopQuietZoneSize;
extern DELPHI_PACKAGE int dxBarCodeQRCodeBottomQuietZoneSize;
extern DELPHI_PACKAGE Cxclasses::TcxRegisteredClasses* __fastcall dxGetRegisteredBarCodeSymbologies(void);
}	/* namespace Dxbarcodeutils */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DXBARCODEUTILS)
using namespace Dxbarcodeutils;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DxbarcodeutilsHPP
