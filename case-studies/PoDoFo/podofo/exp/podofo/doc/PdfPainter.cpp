#include "podofo/base/PdfCanvas.h"
#include "podofo/base/PdfColor.h"
#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfRect.h"
#include "podofo/base/PdfReference.h"
#include "podofo/base/PdfStream.h"
#include "podofo/base/PdfString.h"
#include "podofo/doc/PdfExtGState.h"
#include "podofo/doc/PdfFont.h"
#include "podofo/doc/PdfImage.h"
#include "podofo/doc/PdfMemDocument.h"
#include "podofo/doc/PdfPainter.h"
#include "podofo/doc/PdfShadingPattern.h"
#include "podofo/doc/PdfTilingPattern.h"
#include "podofo/doc/PdfXObject.h"
#include <vector>

namespace PoDoFo {

PoDoFo::PdfPainter::PdfPainter(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfPainter::PdfPainter(PdfPainter&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfPainter::PdfPainter()
  : PoDoFo::PdfPainter(__zz_cib_MyHelper::__zz_cib_New_0())
{}

PoDoFo::PdfPainter::~PdfPainter() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

void PoDoFo::PdfPainter::SetPage(::PoDoFo::PdfCanvas* pPage) {
    __zz_cib_MyHelper::SetPage_2<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage))
    );
  }

::PoDoFo::PdfCanvas* PoDoFo::PdfPainter::GetPage() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfCanvas*>(
    __zz_cib_MyHelper::GetPage_3<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfCanvas*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfStream* PoDoFo::PdfPainter::GetCanvas() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfStream*>(
    __zz_cib_MyHelper::GetCanvas_4<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfStream*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfPainter::FinishPage() {
    __zz_cib_MyHelper::FinishPage_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfPainter::SetStrokingGray(double g) {
    __zz_cib_MyHelper::SetStrokingGray_6<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(g)>(std::move(g))
    );
  }

void PoDoFo::PdfPainter::SetGray(double g) {
    __zz_cib_MyHelper::SetGray_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(g)>(std::move(g))
    );
  }

void PoDoFo::PdfPainter::SetStrokingColor(double r, double g, double b) {
    __zz_cib_MyHelper::SetStrokingColor_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(r)>(std::move(r)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(g)>(std::move(g)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(b)>(std::move(b))
    );
  }

void PoDoFo::PdfPainter::SetColor(double r, double g, double b) {
    __zz_cib_MyHelper::SetColor_9<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(r)>(std::move(r)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(g)>(std::move(g)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(b)>(std::move(b))
    );
  }

void PoDoFo::PdfPainter::SetStrokingColorCMYK(double c, double m, double y, double k) {
    __zz_cib_MyHelper::SetStrokingColorCMYK_10<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(c)>(std::move(c)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(m)>(std::move(m)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(y)>(std::move(y)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(k)>(std::move(k))
    );
  }

void PoDoFo::PdfPainter::SetColorCMYK(double c, double m, double y, double k) {
    __zz_cib_MyHelper::SetColorCMYK_11<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(c)>(std::move(c)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(m)>(std::move(m)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(y)>(std::move(y)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(k)>(std::move(k))
    );
  }

void PoDoFo::PdfPainter::SetStrokingShadingPattern(const ::PoDoFo::PdfShadingPattern& rPattern) {
    __zz_cib_MyHelper::SetStrokingShadingPattern_12<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rPattern)>(rPattern)
    );
  }

void PoDoFo::PdfPainter::SetShadingPattern(const ::PoDoFo::PdfShadingPattern& rPattern) {
    __zz_cib_MyHelper::SetShadingPattern_13<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rPattern)>(rPattern)
    );
  }

void PoDoFo::PdfPainter::SetStrokingTilingPattern(const ::PoDoFo::PdfTilingPattern& rPattern) {
    __zz_cib_MyHelper::SetStrokingTilingPattern_14<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rPattern)>(rPattern)
    );
  }

void PoDoFo::PdfPainter::SetStrokingTilingPattern(const std::string& rPatternName) {
    __zz_cib_MyHelper::SetStrokingTilingPattern_15<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rPatternName)>(rPatternName)
    );
  }

void PoDoFo::PdfPainter::SetTilingPattern(const ::PoDoFo::PdfTilingPattern& rPattern) {
    __zz_cib_MyHelper::SetTilingPattern_16<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rPattern)>(rPattern)
    );
  }

void PoDoFo::PdfPainter::SetTilingPattern(const std::string& rPatternName) {
    __zz_cib_MyHelper::SetTilingPattern_17<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rPatternName)>(rPatternName)
    );
  }

void PoDoFo::PdfPainter::SetStrokingColor(const ::PoDoFo::PdfColor& rColor) {
    __zz_cib_MyHelper::SetStrokingColor_18<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rColor)>(rColor)
    );
  }

void PoDoFo::PdfPainter::SetColor(const ::PoDoFo::PdfColor& rColor) {
    __zz_cib_MyHelper::SetColor_19<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rColor)>(rColor)
    );
  }

void PoDoFo::PdfPainter::SetStrokeWidth(double dWidth) {
    __zz_cib_MyHelper::SetStrokeWidth_20<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dWidth)>(std::move(dWidth))
    );
  }

void PoDoFo::PdfPainter::SetStrokeStyle(::PoDoFo::EPdfStrokeStyle eStyle, const char* pszCustom, bool inverted, double scale, bool subtractJoinCap) {
    __zz_cib_MyHelper::SetStrokeStyle_21<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eStyle)>(std::move(eStyle)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszCustom)>(std::move(pszCustom)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inverted)>(std::move(inverted)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(scale)>(std::move(scale)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(subtractJoinCap)>(std::move(subtractJoinCap))
    );
  }

void PoDoFo::PdfPainter::SetLineCapStyle(::PoDoFo::EPdfLineCapStyle eCapStyle) {
    __zz_cib_MyHelper::SetLineCapStyle_22<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eCapStyle)>(std::move(eCapStyle))
    );
  }

void PoDoFo::PdfPainter::SetLineJoinStyle(::PoDoFo::EPdfLineJoinStyle eJoinStyle) {
    __zz_cib_MyHelper::SetLineJoinStyle_23<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eJoinStyle)>(std::move(eJoinStyle))
    );
  }

void PoDoFo::PdfPainter::SetFont(::PoDoFo::PdfFont* pFont) {
    __zz_cib_MyHelper::SetFont_24<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pFont)>(std::move(pFont))
    );
  }

void PoDoFo::PdfPainter::SetTextRenderingMode(::PoDoFo::EPdfTextRenderingMode mode) {
    __zz_cib_MyHelper::SetTextRenderingMode_25<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(mode)>(std::move(mode))
    );
  }

::PoDoFo::EPdfTextRenderingMode PoDoFo::PdfPainter::GetTextRenderingMode() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfTextRenderingMode>(
    __zz_cib_MyHelper::GetTextRenderingMode_26<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::EPdfTextRenderingMode>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfFont* PoDoFo::PdfPainter::GetFont() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFont*>(
    __zz_cib_MyHelper::GetFont_27<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfFont*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfPainter::SetClipRect(double dX, double dY, double dWidth, double dHeight) {
    __zz_cib_MyHelper::SetClipRect_28<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX)>(std::move(dX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY)>(std::move(dY)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dWidth)>(std::move(dWidth)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dHeight)>(std::move(dHeight))
    );
  }

void PoDoFo::PdfPainter::SetClipRect(const ::PoDoFo::PdfRect& rRect) {
    __zz_cib_MyHelper::SetClipRect_29<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect)
    );
  }

void PoDoFo::PdfPainter::SetMiterLimit(double value) {
    __zz_cib_MyHelper::SetMiterLimit_30<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(value)>(std::move(value))
    );
  }

void PoDoFo::PdfPainter::DrawLine(double dStartX, double dStartY, double dEndX, double dEndY) {
    __zz_cib_MyHelper::DrawLine_31<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dStartX)>(std::move(dStartX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dStartY)>(std::move(dStartY)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dEndX)>(std::move(dEndX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dEndY)>(std::move(dEndY))
    );
  }

void PoDoFo::PdfPainter::Rectangle(double dX, double dY, double dWidth, double dHeight, double dRoundX, double dRoundY) {
    __zz_cib_MyHelper::Rectangle_32<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX)>(std::move(dX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY)>(std::move(dY)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dWidth)>(std::move(dWidth)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dHeight)>(std::move(dHeight)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dRoundX)>(std::move(dRoundX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dRoundY)>(std::move(dRoundY))
    );
  }

void PoDoFo::PdfPainter::Rectangle(const ::PoDoFo::PdfRect& rRect, double dRoundX, double dRoundY) {
    __zz_cib_MyHelper::Rectangle_33<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dRoundX)>(std::move(dRoundX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dRoundY)>(std::move(dRoundY))
    );
  }

void PoDoFo::PdfPainter::Ellipse(double dX, double dY, double dWidth, double dHeight) {
    __zz_cib_MyHelper::Ellipse_34<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX)>(std::move(dX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY)>(std::move(dY)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dWidth)>(std::move(dWidth)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dHeight)>(std::move(dHeight))
    );
  }

void PoDoFo::PdfPainter::Circle(double dX, double dY, double dRadius) {
    __zz_cib_MyHelper::Circle_35<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX)>(std::move(dX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY)>(std::move(dY)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dRadius)>(std::move(dRadius))
    );
  }

void PoDoFo::PdfPainter::DrawText(double dX, double dY, const ::PoDoFo::PdfString& sText) {
    __zz_cib_MyHelper::DrawText_36<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX)>(std::move(dX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY)>(std::move(dY)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sText)>(sText)
    );
  }

void PoDoFo::PdfPainter::DrawText(double dX, double dY, const ::PoDoFo::PdfString& sText, long lLen) {
    __zz_cib_MyHelper::DrawText_37<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX)>(std::move(dX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY)>(std::move(dY)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sText)>(sText),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    );
  }

void PoDoFo::PdfPainter::DrawMultiLineText(double dX, double dY, double dWidth, double dHeight, const ::PoDoFo::PdfString& rsText, ::PoDoFo::EPdfAlignment eAlignment, ::PoDoFo::EPdfVerticalAlignment eVertical, bool bClip, bool bSkipSpaces) {
    __zz_cib_MyHelper::DrawMultiLineText_38<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX)>(std::move(dX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY)>(std::move(dY)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dWidth)>(std::move(dWidth)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dHeight)>(std::move(dHeight)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rsText)>(rsText),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eAlignment)>(std::move(eAlignment)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eVertical)>(std::move(eVertical)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bClip)>(std::move(bClip)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bSkipSpaces)>(std::move(bSkipSpaces))
    );
  }

void PoDoFo::PdfPainter::DrawMultiLineText(const ::PoDoFo::PdfRect& rRect, const ::PoDoFo::PdfString& rsText, ::PoDoFo::EPdfAlignment eAlignment, ::PoDoFo::EPdfVerticalAlignment eVertical, bool bClip, bool bSkipSpaces) {
    __zz_cib_MyHelper::DrawMultiLineText_39<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rsText)>(rsText),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eAlignment)>(std::move(eAlignment)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eVertical)>(std::move(eVertical)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bClip)>(std::move(bClip)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bSkipSpaces)>(std::move(bSkipSpaces))
    );
  }

::std::vector<::PoDoFo::PdfString> PoDoFo::PdfPainter::GetMultiLineTextAsLines(double dWidth, const ::PoDoFo::PdfString& rsText, bool bSkipSpaces) {
  return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfString>>(
    __zz_cib_MyHelper::GetMultiLineTextAsLines_40<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dWidth)>(std::move(dWidth)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rsText)>(rsText),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bSkipSpaces)>(std::move(bSkipSpaces))
    )
  );
}

void PoDoFo::PdfPainter::DrawTextAligned(double dX, double dY, double dWidth, const ::PoDoFo::PdfString& rsText, ::PoDoFo::EPdfAlignment eAlignment) {
    __zz_cib_MyHelper::DrawTextAligned_41<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX)>(std::move(dX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY)>(std::move(dY)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dWidth)>(std::move(dWidth)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rsText)>(rsText),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eAlignment)>(std::move(eAlignment))
    );
  }

void PoDoFo::PdfPainter::BeginText(double dX, double dY) {
    __zz_cib_MyHelper::BeginText_42<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX)>(std::move(dX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY)>(std::move(dY))
    );
  }

void PoDoFo::PdfPainter::AddText(const ::PoDoFo::PdfString& sText) {
    __zz_cib_MyHelper::AddText_43<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sText)>(sText)
    );
  }

void PoDoFo::PdfPainter::AddText(const ::PoDoFo::PdfString& sText, ::PoDoFo::pdf_long lStringLen) {
    __zz_cib_MyHelper::AddText_44<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sText)>(sText),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lStringLen)>(std::move(lStringLen))
    );
  }

void PoDoFo::PdfPainter::MoveTextPos(double dX, double dY) {
    __zz_cib_MyHelper::MoveTextPos_45<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX)>(std::move(dX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY)>(std::move(dY))
    );
  }

void PoDoFo::PdfPainter::EndText() {
    __zz_cib_MyHelper::EndText_46<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfPainter::DrawGlyph(::PoDoFo::PdfMemDocument* pDocument, double dX, double dY, const char* pszGlyphname) {
    __zz_cib_MyHelper::DrawGlyph_47<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDocument)>(std::move(pDocument)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX)>(std::move(dX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY)>(std::move(dY)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszGlyphname)>(std::move(pszGlyphname))
    );
  }

void PoDoFo::PdfPainter::DrawImage(double dX, double dY, ::PoDoFo::PdfImage* pObject, double dScaleX, double dScaleY) {
    __zz_cib_MyHelper::DrawImage_48<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX)>(std::move(dX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY)>(std::move(dY)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dScaleX)>(std::move(dScaleX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dScaleY)>(std::move(dScaleY))
    );
  }

void PoDoFo::PdfPainter::DrawXObject(double dX, double dY, ::PoDoFo::PdfXObject* pObject, double dScaleX, double dScaleY) {
    __zz_cib_MyHelper::DrawXObject_49<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX)>(std::move(dX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY)>(std::move(dY)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dScaleX)>(std::move(dScaleX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dScaleY)>(std::move(dScaleY))
    );
  }

void PoDoFo::PdfPainter::ClosePath() {
    __zz_cib_MyHelper::ClosePath_50<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfPainter::LineTo(double dX, double dY) {
    __zz_cib_MyHelper::LineTo_51<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX)>(std::move(dX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY)>(std::move(dY))
    );
  }

void PoDoFo::PdfPainter::MoveTo(double dX, double dY) {
    __zz_cib_MyHelper::MoveTo_52<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX)>(std::move(dX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY)>(std::move(dY))
    );
  }

void PoDoFo::PdfPainter::CubicBezierTo(double dX1, double dY1, double dX2, double dY2, double dX3, double dY3) {
    __zz_cib_MyHelper::CubicBezierTo_53<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX1)>(std::move(dX1)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY1)>(std::move(dY1)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX2)>(std::move(dX2)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY2)>(std::move(dY2)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX3)>(std::move(dX3)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY3)>(std::move(dY3))
    );
  }

void PoDoFo::PdfPainter::HorizontalLineTo(double dX) {
    __zz_cib_MyHelper::HorizontalLineTo_54<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX)>(std::move(dX))
    );
  }

void PoDoFo::PdfPainter::VerticalLineTo(double dY) {
    __zz_cib_MyHelper::VerticalLineTo_55<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY)>(std::move(dY))
    );
  }

void PoDoFo::PdfPainter::SmoothCurveTo(double dX2, double dY2, double dX3, double dY3) {
    __zz_cib_MyHelper::SmoothCurveTo_56<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX2)>(std::move(dX2)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY2)>(std::move(dY2)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX3)>(std::move(dX3)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY3)>(std::move(dY3))
    );
  }

void PoDoFo::PdfPainter::QuadCurveTo(double dX1, double dY1, double dX3, double dY3) {
    __zz_cib_MyHelper::QuadCurveTo_57<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX1)>(std::move(dX1)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY1)>(std::move(dY1)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX3)>(std::move(dX3)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY3)>(std::move(dY3))
    );
  }

void PoDoFo::PdfPainter::SmoothQuadCurveTo(double dX3, double dY3) {
    __zz_cib_MyHelper::SmoothQuadCurveTo_58<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX3)>(std::move(dX3)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY3)>(std::move(dY3))
    );
  }

void PoDoFo::PdfPainter::ArcTo(double dX, double dY, double dRadiusX, double dRadiusY, double dRotation, bool bLarge, bool bSweep) {
    __zz_cib_MyHelper::ArcTo_59<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX)>(std::move(dX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY)>(std::move(dY)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dRadiusX)>(std::move(dRadiusX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dRadiusY)>(std::move(dRadiusY)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dRotation)>(std::move(dRotation)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bLarge)>(std::move(bLarge)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bSweep)>(std::move(bSweep))
    );
  }

bool PoDoFo::PdfPainter::Arc(double dX, double dY, double dRadius, double dAngle1, double dAngle2) {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::Arc_60<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX)>(std::move(dX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY)>(std::move(dY)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dRadius)>(std::move(dRadius)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dAngle1)>(std::move(dAngle1)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dAngle2)>(std::move(dAngle2))
    )
  );
}

void PoDoFo::PdfPainter::Close() {
    __zz_cib_MyHelper::Close_61<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfPainter::Stroke() {
    __zz_cib_MyHelper::Stroke_62<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfPainter::Fill(bool useEvenOddRule) {
    __zz_cib_MyHelper::Fill_63<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(useEvenOddRule)>(std::move(useEvenOddRule))
    );
  }

void PoDoFo::PdfPainter::FillAndStroke(bool useEvenOddRule) {
    __zz_cib_MyHelper::FillAndStroke_64<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(useEvenOddRule)>(std::move(useEvenOddRule))
    );
  }

void PoDoFo::PdfPainter::Clip(bool useEvenOddRule) {
    __zz_cib_MyHelper::Clip_65<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(useEvenOddRule)>(std::move(useEvenOddRule))
    );
  }

void PoDoFo::PdfPainter::EndPath() {
    __zz_cib_MyHelper::EndPath_66<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfPainter::Save() {
    __zz_cib_MyHelper::Save_67<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfPainter::Restore() {
    __zz_cib_MyHelper::Restore_68<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfPainter::SetTransformationMatrix(double a, double b, double c, double d, double e, double f) {
    __zz_cib_MyHelper::SetTransformationMatrix_69<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(a)>(std::move(a)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(b)>(std::move(b)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(c)>(std::move(c)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(d)>(std::move(d)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(e)>(std::move(e)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(f)>(std::move(f))
    );
  }

void PoDoFo::PdfPainter::SetExtGState(::PoDoFo::PdfExtGState* inGState) {
    __zz_cib_MyHelper::SetExtGState_70<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inGState)>(std::move(inGState))
    );
  }

void PoDoFo::PdfPainter::SetRenderingIntent(char* intent) {
    __zz_cib_MyHelper::SetRenderingIntent_71<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(intent)>(std::move(intent))
    );
  }

void PoDoFo::PdfPainter::SetTabWidth(unsigned short nTabWidth) {
    __zz_cib_MyHelper::SetTabWidth_72<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nTabWidth)>(std::move(nTabWidth))
    );
  }

unsigned short PoDoFo::PdfPainter::GetTabWidth() const {
  return __zz_cib_::__zz_cib_FromAbiType<unsigned short>(
    __zz_cib_MyHelper::GetTabWidth_73<__zz_cib_::__zz_cib_AbiType_t<unsigned short>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfPainter::SetPrecision(unsigned short inPrec) {
    __zz_cib_MyHelper::SetPrecision_74<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inPrec)>(std::move(inPrec))
    );
  }

unsigned short PoDoFo::PdfPainter::GetPrecision() const {
  return __zz_cib_::__zz_cib_FromAbiType<unsigned short>(
    __zz_cib_MyHelper::GetPrecision_75<__zz_cib_::__zz_cib_AbiType_t<unsigned short>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

std::ostringstream& PoDoFo::PdfPainter::GetCurrentPath() {
  return __zz_cib_::__zz_cib_FromAbiType<std::ostringstream&>(
    __zz_cib_MyHelper::GetCurrentPath_76<__zz_cib_::__zz_cib_AbiType_t<std::ostringstream&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfPainter::SetDependICCProfileColor(const ::PoDoFo::PdfColor& rColor, const std::string& pCSTag) {
    __zz_cib_MyHelper::SetDependICCProfileColor_77<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rColor)>(rColor),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pCSTag)>(pCSTag)
    );
  }

void PoDoFo::PdfPainter::ConvertRectToBezier(double dX, double dY, double dWidth, double dHeight, double pdPointX[], double pdPointY[]) {
    __zz_cib_MyHelper::ConvertRectToBezier_78<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dX)>(std::move(dX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dY)>(std::move(dY)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dWidth)>(std::move(dWidth)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dHeight)>(std::move(dHeight)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pdPointX)>(std::move(pdPointX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pdPointY)>(std::move(pdPointY))
    );
  }

void PoDoFo::PdfPainter::AddToPageResources(const ::PoDoFo::PdfName& rIdentifier, const ::PoDoFo::PdfReference& rRef, const ::PoDoFo::PdfName& rName) {
    __zz_cib_MyHelper::AddToPageResources_79<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rIdentifier)>(rIdentifier),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rRef)>(rRef),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rName)>(rName)
    );
  }

void PoDoFo::PdfPainter::SetCurrentStrokingColor() {
    __zz_cib_MyHelper::SetCurrentStrokingColor_80<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

bool PoDoFo::PdfPainter::InternalArc(double x, double y, double ray, double ang1, double ang2, bool cont_flg) {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::InternalArc_81<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(std::move(x)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(y)>(std::move(y)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(ray)>(std::move(ray)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(ang1)>(std::move(ang1)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(ang2)>(std::move(ang2)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(cont_flg)>(std::move(cont_flg))
    )
  );
}

::PoDoFo::PdfString PoDoFo::PdfPainter::ExpandTabs(const ::PoDoFo::PdfString& rsString, ::PoDoFo::pdf_long lLen) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfString>(
    __zz_cib_MyHelper::ExpandTabs_82<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfString>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rsString)>(rsString),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    )
  );
}

#if  defined(_MSC_VER)  &&  _MSC_VER <= 1200	// MSC 6.0 has a template-bug 
::PoDoFo::PdfString PoDoFo::PdfPainter::ExpandTabs_char(const char* pszText, long lStringLen, int nTabCnt, const char cTab, const char cSpace) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfString>(
    __zz_cib_MyHelper::ExpandTabs_char_83<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfString>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszText)>(std::move(pszText)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lStringLen)>(std::move(lStringLen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nTabCnt)>(std::move(nTabCnt)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(cTab)>(std::move(cTab)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(cSpace)>(std::move(cSpace))
    )
  );
}

::PoDoFo::PdfString PoDoFo::PdfPainter::ExpandTabs_pdf_utf16be(const ::PoDoFo::pdf_uint16* pszText, long lStringLen, int nTabCnt, const ::PoDoFo::pdf_uint16 cTab, const ::PoDoFo::pdf_uint16 cSpace) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfString>(
    __zz_cib_MyHelper::ExpandTabs_pdf_utf16be_84<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfString>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszText)>(std::move(pszText)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lStringLen)>(std::move(lStringLen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nTabCnt)>(std::move(nTabCnt)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(cTab)>(std::move(cTab)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(cSpace)>(std::move(cSpace))
    )
  );
}
#endif

void PoDoFo::PdfPainter::SetCurrentTextRenderingMode() {
    __zz_cib_MyHelper::SetCurrentTextRenderingMode_85<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }
}
