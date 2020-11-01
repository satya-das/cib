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

#include "__zz_cib_CibPoDoFo-class-down-cast.h"
#include "__zz_cib_CibPoDoFo-delegate-helper.h"
#include "__zz_cib_CibPoDoFo-generic.h"
#include "__zz_cib_CibPoDoFo-ids.h"
#include "__zz_cib_CibPoDoFo-type-converters.h"
#include "__zz_cib_CibPoDoFo-mtable-helper.h"
#include "__zz_cib_CibPoDoFo-proxy-mgr.h"

namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfPainter> : public ::PoDoFo::PdfPainter {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfPainter::PdfPainter;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetPage_2(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfCanvas*> pPage) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SetPage(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfCanvas*>(pPage)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfCanvas*> __zz_cib_decl GetPage_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfCanvas*>(
      __zz_cib_obj->::PoDoFo::PdfPainter::GetPage()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfStream*> __zz_cib_decl GetCanvas_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfStream*>(
      __zz_cib_obj->::PoDoFo::PdfPainter::GetCanvas()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl FinishPage_5(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfPainter::FinishPage();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetStrokingGray_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> g) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SetStrokingGray(
      __zz_cib_::__zz_cib_FromAbiType<double>(g)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetGray_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> g) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SetGray(
      __zz_cib_::__zz_cib_FromAbiType<double>(g)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetStrokingColor_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> r, __zz_cib_AbiType_t<double> g, __zz_cib_AbiType_t<double> b) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SetStrokingColor(
      __zz_cib_::__zz_cib_FromAbiType<double>(r),
      __zz_cib_::__zz_cib_FromAbiType<double>(g),
      __zz_cib_::__zz_cib_FromAbiType<double>(b)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetColor_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> r, __zz_cib_AbiType_t<double> g, __zz_cib_AbiType_t<double> b) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SetColor(
      __zz_cib_::__zz_cib_FromAbiType<double>(r),
      __zz_cib_::__zz_cib_FromAbiType<double>(g),
      __zz_cib_::__zz_cib_FromAbiType<double>(b)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetStrokingColorCMYK_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> c, __zz_cib_AbiType_t<double> m, __zz_cib_AbiType_t<double> y, __zz_cib_AbiType_t<double> k) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SetStrokingColorCMYK(
      __zz_cib_::__zz_cib_FromAbiType<double>(c),
      __zz_cib_::__zz_cib_FromAbiType<double>(m),
      __zz_cib_::__zz_cib_FromAbiType<double>(y),
      __zz_cib_::__zz_cib_FromAbiType<double>(k)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetColorCMYK_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> c, __zz_cib_AbiType_t<double> m, __zz_cib_AbiType_t<double> y, __zz_cib_AbiType_t<double> k) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SetColorCMYK(
      __zz_cib_::__zz_cib_FromAbiType<double>(c),
      __zz_cib_::__zz_cib_FromAbiType<double>(m),
      __zz_cib_::__zz_cib_FromAbiType<double>(y),
      __zz_cib_::__zz_cib_FromAbiType<double>(k)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetStrokingShadingPattern_12(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfShadingPattern&> rPattern) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SetStrokingShadingPattern(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfShadingPattern&>(rPattern)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetShadingPattern_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfShadingPattern&> rPattern) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SetShadingPattern(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfShadingPattern&>(rPattern)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetStrokingTilingPattern_14(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfTilingPattern&> rPattern) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SetStrokingTilingPattern(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfTilingPattern&>(rPattern)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetStrokingTilingPattern_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const std::string&> rPatternName) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SetStrokingTilingPattern(
      __zz_cib_::__zz_cib_FromAbiType<const std::string&>(rPatternName)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetTilingPattern_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfTilingPattern&> rPattern) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SetTilingPattern(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfTilingPattern&>(rPattern)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetTilingPattern_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const std::string&> rPatternName) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SetTilingPattern(
      __zz_cib_::__zz_cib_FromAbiType<const std::string&>(rPatternName)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetStrokingColor_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfColor&> rColor) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SetStrokingColor(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfColor&>(rColor)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetColor_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfColor&> rColor) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SetColor(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfColor&>(rColor)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetStrokeWidth_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dWidth) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SetStrokeWidth(
      __zz_cib_::__zz_cib_FromAbiType<double>(dWidth)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetStrokeStyle_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::EPdfStrokeStyle> eStyle, __zz_cib_AbiType_t<const char*> pszCustom, __zz_cib_AbiType_t<bool> inverted, __zz_cib_AbiType_t<double> scale, __zz_cib_AbiType_t<bool> subtractJoinCap) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SetStrokeStyle(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfStrokeStyle>(eStyle),
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszCustom),
      __zz_cib_::__zz_cib_FromAbiType<bool>(inverted),
      __zz_cib_::__zz_cib_FromAbiType<double>(scale),
      __zz_cib_::__zz_cib_FromAbiType<bool>(subtractJoinCap)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetLineCapStyle_22(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::EPdfLineCapStyle> eCapStyle) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SetLineCapStyle(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfLineCapStyle>(eCapStyle)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetLineJoinStyle_23(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::EPdfLineJoinStyle> eJoinStyle) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SetLineJoinStyle(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfLineJoinStyle>(eJoinStyle)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetFont_24(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfFont*> pFont) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SetFont(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFont*>(pFont)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetTextRenderingMode_25(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::EPdfTextRenderingMode> mode) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SetTextRenderingMode(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfTextRenderingMode>(mode)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfTextRenderingMode> __zz_cib_decl GetTextRenderingMode_26(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfTextRenderingMode>(
      __zz_cib_obj->::PoDoFo::PdfPainter::GetTextRenderingMode()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfFont*> __zz_cib_decl GetFont_27(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfFont*>(
      __zz_cib_obj->::PoDoFo::PdfPainter::GetFont()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetClipRect_28(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dX, __zz_cib_AbiType_t<double> dY, __zz_cib_AbiType_t<double> dWidth, __zz_cib_AbiType_t<double> dHeight) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SetClipRect(
      __zz_cib_::__zz_cib_FromAbiType<double>(dX),
      __zz_cib_::__zz_cib_FromAbiType<double>(dY),
      __zz_cib_::__zz_cib_FromAbiType<double>(dWidth),
      __zz_cib_::__zz_cib_FromAbiType<double>(dHeight)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetClipRect_29(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SetClipRect(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetMiterLimit_30(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> value) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SetMiterLimit(
      __zz_cib_::__zz_cib_FromAbiType<double>(value)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DrawLine_31(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dStartX, __zz_cib_AbiType_t<double> dStartY, __zz_cib_AbiType_t<double> dEndX, __zz_cib_AbiType_t<double> dEndY) {
    __zz_cib_obj->::PoDoFo::PdfPainter::DrawLine(
      __zz_cib_::__zz_cib_FromAbiType<double>(dStartX),
      __zz_cib_::__zz_cib_FromAbiType<double>(dStartY),
      __zz_cib_::__zz_cib_FromAbiType<double>(dEndX),
      __zz_cib_::__zz_cib_FromAbiType<double>(dEndY)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Rectangle_32(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dX, __zz_cib_AbiType_t<double> dY, __zz_cib_AbiType_t<double> dWidth, __zz_cib_AbiType_t<double> dHeight, __zz_cib_AbiType_t<double> dRoundX, __zz_cib_AbiType_t<double> dRoundY) {
    __zz_cib_obj->::PoDoFo::PdfPainter::Rectangle(
      __zz_cib_::__zz_cib_FromAbiType<double>(dX),
      __zz_cib_::__zz_cib_FromAbiType<double>(dY),
      __zz_cib_::__zz_cib_FromAbiType<double>(dWidth),
      __zz_cib_::__zz_cib_FromAbiType<double>(dHeight),
      __zz_cib_::__zz_cib_FromAbiType<double>(dRoundX),
      __zz_cib_::__zz_cib_FromAbiType<double>(dRoundY)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Rectangle_33(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect, __zz_cib_AbiType_t<double> dRoundX, __zz_cib_AbiType_t<double> dRoundY) {
    __zz_cib_obj->::PoDoFo::PdfPainter::Rectangle(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect),
      __zz_cib_::__zz_cib_FromAbiType<double>(dRoundX),
      __zz_cib_::__zz_cib_FromAbiType<double>(dRoundY)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Ellipse_34(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dX, __zz_cib_AbiType_t<double> dY, __zz_cib_AbiType_t<double> dWidth, __zz_cib_AbiType_t<double> dHeight) {
    __zz_cib_obj->::PoDoFo::PdfPainter::Ellipse(
      __zz_cib_::__zz_cib_FromAbiType<double>(dX),
      __zz_cib_::__zz_cib_FromAbiType<double>(dY),
      __zz_cib_::__zz_cib_FromAbiType<double>(dWidth),
      __zz_cib_::__zz_cib_FromAbiType<double>(dHeight)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Circle_35(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dX, __zz_cib_AbiType_t<double> dY, __zz_cib_AbiType_t<double> dRadius) {
    __zz_cib_obj->::PoDoFo::PdfPainter::Circle(
      __zz_cib_::__zz_cib_FromAbiType<double>(dX),
      __zz_cib_::__zz_cib_FromAbiType<double>(dY),
      __zz_cib_::__zz_cib_FromAbiType<double>(dRadius)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DrawText_36(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dX, __zz_cib_AbiType_t<double> dY, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> sText) {
    __zz_cib_obj->::PoDoFo::PdfPainter::DrawText(
      __zz_cib_::__zz_cib_FromAbiType<double>(dX),
      __zz_cib_::__zz_cib_FromAbiType<double>(dY),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(sText)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DrawText_37(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dX, __zz_cib_AbiType_t<double> dY, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> sText, __zz_cib_AbiType_t<long> lLen) {
    __zz_cib_obj->::PoDoFo::PdfPainter::DrawText(
      __zz_cib_::__zz_cib_FromAbiType<double>(dX),
      __zz_cib_::__zz_cib_FromAbiType<double>(dY),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(sText),
      __zz_cib_::__zz_cib_FromAbiType<long>(lLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DrawMultiLineText_38(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dX, __zz_cib_AbiType_t<double> dY, __zz_cib_AbiType_t<double> dWidth, __zz_cib_AbiType_t<double> dHeight, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rsText, __zz_cib_AbiType_t<::PoDoFo::EPdfAlignment> eAlignment, __zz_cib_AbiType_t<::PoDoFo::EPdfVerticalAlignment> eVertical, __zz_cib_AbiType_t<bool> bClip, __zz_cib_AbiType_t<bool> bSkipSpaces) {
    __zz_cib_obj->::PoDoFo::PdfPainter::DrawMultiLineText(
      __zz_cib_::__zz_cib_FromAbiType<double>(dX),
      __zz_cib_::__zz_cib_FromAbiType<double>(dY),
      __zz_cib_::__zz_cib_FromAbiType<double>(dWidth),
      __zz_cib_::__zz_cib_FromAbiType<double>(dHeight),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rsText),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfAlignment>(eAlignment),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfVerticalAlignment>(eVertical),
      __zz_cib_::__zz_cib_FromAbiType<bool>(bClip),
      __zz_cib_::__zz_cib_FromAbiType<bool>(bSkipSpaces)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DrawMultiLineText_39(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rsText, __zz_cib_AbiType_t<::PoDoFo::EPdfAlignment> eAlignment, __zz_cib_AbiType_t<::PoDoFo::EPdfVerticalAlignment> eVertical, __zz_cib_AbiType_t<bool> bClip, __zz_cib_AbiType_t<bool> bSkipSpaces) {
    __zz_cib_obj->::PoDoFo::PdfPainter::DrawMultiLineText(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rsText),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfAlignment>(eAlignment),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfVerticalAlignment>(eVertical),
      __zz_cib_::__zz_cib_FromAbiType<bool>(bClip),
      __zz_cib_::__zz_cib_FromAbiType<bool>(bSkipSpaces)
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>> __zz_cib_decl GetMultiLineTextAsLines_40(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dWidth, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rsText, __zz_cib_AbiType_t<bool> bSkipSpaces) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfString>>(
      __zz_cib_obj->::PoDoFo::PdfPainter::GetMultiLineTextAsLines(
        __zz_cib_::__zz_cib_FromAbiType<double>(dWidth),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rsText),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bSkipSpaces)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DrawTextAligned_41(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dX, __zz_cib_AbiType_t<double> dY, __zz_cib_AbiType_t<double> dWidth, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rsText, __zz_cib_AbiType_t<::PoDoFo::EPdfAlignment> eAlignment) {
    __zz_cib_obj->::PoDoFo::PdfPainter::DrawTextAligned(
      __zz_cib_::__zz_cib_FromAbiType<double>(dX),
      __zz_cib_::__zz_cib_FromAbiType<double>(dY),
      __zz_cib_::__zz_cib_FromAbiType<double>(dWidth),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rsText),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfAlignment>(eAlignment)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl BeginText_42(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dX, __zz_cib_AbiType_t<double> dY) {
    __zz_cib_obj->::PoDoFo::PdfPainter::BeginText(
      __zz_cib_::__zz_cib_FromAbiType<double>(dX),
      __zz_cib_::__zz_cib_FromAbiType<double>(dY)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddText_43(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> sText) {
    __zz_cib_obj->::PoDoFo::PdfPainter::AddText(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(sText)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddText_44(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> sText, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lStringLen) {
    __zz_cib_obj->::PoDoFo::PdfPainter::AddText(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(sText),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lStringLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl MoveTextPos_45(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dX, __zz_cib_AbiType_t<double> dY) {
    __zz_cib_obj->::PoDoFo::PdfPainter::MoveTextPos(
      __zz_cib_::__zz_cib_FromAbiType<double>(dX),
      __zz_cib_::__zz_cib_FromAbiType<double>(dY)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EndText_46(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfPainter::EndText();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DrawGlyph_47(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfMemDocument*> pDocument, __zz_cib_AbiType_t<double> dX, __zz_cib_AbiType_t<double> dY, __zz_cib_AbiType_t<const char*> pszGlyphname) {
    __zz_cib_obj->::PoDoFo::PdfPainter::DrawGlyph(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfMemDocument*>(pDocument),
      __zz_cib_::__zz_cib_FromAbiType<double>(dX),
      __zz_cib_::__zz_cib_FromAbiType<double>(dY),
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszGlyphname)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DrawImage_48(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dX, __zz_cib_AbiType_t<double> dY, __zz_cib_AbiType_t<::PoDoFo::PdfImage*> pObject, __zz_cib_AbiType_t<double> dScaleX, __zz_cib_AbiType_t<double> dScaleY) {
    __zz_cib_obj->::PoDoFo::PdfPainter::DrawImage(
      __zz_cib_::__zz_cib_FromAbiType<double>(dX),
      __zz_cib_::__zz_cib_FromAbiType<double>(dY),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfImage*>(pObject),
      __zz_cib_::__zz_cib_FromAbiType<double>(dScaleX),
      __zz_cib_::__zz_cib_FromAbiType<double>(dScaleY)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DrawXObject_49(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dX, __zz_cib_AbiType_t<double> dY, __zz_cib_AbiType_t<::PoDoFo::PdfXObject*> pObject, __zz_cib_AbiType_t<double> dScaleX, __zz_cib_AbiType_t<double> dScaleY) {
    __zz_cib_obj->::PoDoFo::PdfPainter::DrawXObject(
      __zz_cib_::__zz_cib_FromAbiType<double>(dX),
      __zz_cib_::__zz_cib_FromAbiType<double>(dY),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfXObject*>(pObject),
      __zz_cib_::__zz_cib_FromAbiType<double>(dScaleX),
      __zz_cib_::__zz_cib_FromAbiType<double>(dScaleY)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ClosePath_50(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfPainter::ClosePath();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl LineTo_51(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dX, __zz_cib_AbiType_t<double> dY) {
    __zz_cib_obj->::PoDoFo::PdfPainter::LineTo(
      __zz_cib_::__zz_cib_FromAbiType<double>(dX),
      __zz_cib_::__zz_cib_FromAbiType<double>(dY)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl MoveTo_52(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dX, __zz_cib_AbiType_t<double> dY) {
    __zz_cib_obj->::PoDoFo::PdfPainter::MoveTo(
      __zz_cib_::__zz_cib_FromAbiType<double>(dX),
      __zz_cib_::__zz_cib_FromAbiType<double>(dY)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl CubicBezierTo_53(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dX1, __zz_cib_AbiType_t<double> dY1, __zz_cib_AbiType_t<double> dX2, __zz_cib_AbiType_t<double> dY2, __zz_cib_AbiType_t<double> dX3, __zz_cib_AbiType_t<double> dY3) {
    __zz_cib_obj->::PoDoFo::PdfPainter::CubicBezierTo(
      __zz_cib_::__zz_cib_FromAbiType<double>(dX1),
      __zz_cib_::__zz_cib_FromAbiType<double>(dY1),
      __zz_cib_::__zz_cib_FromAbiType<double>(dX2),
      __zz_cib_::__zz_cib_FromAbiType<double>(dY2),
      __zz_cib_::__zz_cib_FromAbiType<double>(dX3),
      __zz_cib_::__zz_cib_FromAbiType<double>(dY3)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl HorizontalLineTo_54(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dX) {
    __zz_cib_obj->::PoDoFo::PdfPainter::HorizontalLineTo(
      __zz_cib_::__zz_cib_FromAbiType<double>(dX)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl VerticalLineTo_55(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dY) {
    __zz_cib_obj->::PoDoFo::PdfPainter::VerticalLineTo(
      __zz_cib_::__zz_cib_FromAbiType<double>(dY)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SmoothCurveTo_56(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dX2, __zz_cib_AbiType_t<double> dY2, __zz_cib_AbiType_t<double> dX3, __zz_cib_AbiType_t<double> dY3) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SmoothCurveTo(
      __zz_cib_::__zz_cib_FromAbiType<double>(dX2),
      __zz_cib_::__zz_cib_FromAbiType<double>(dY2),
      __zz_cib_::__zz_cib_FromAbiType<double>(dX3),
      __zz_cib_::__zz_cib_FromAbiType<double>(dY3)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl QuadCurveTo_57(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dX1, __zz_cib_AbiType_t<double> dY1, __zz_cib_AbiType_t<double> dX3, __zz_cib_AbiType_t<double> dY3) {
    __zz_cib_obj->::PoDoFo::PdfPainter::QuadCurveTo(
      __zz_cib_::__zz_cib_FromAbiType<double>(dX1),
      __zz_cib_::__zz_cib_FromAbiType<double>(dY1),
      __zz_cib_::__zz_cib_FromAbiType<double>(dX3),
      __zz_cib_::__zz_cib_FromAbiType<double>(dY3)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SmoothQuadCurveTo_58(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dX3, __zz_cib_AbiType_t<double> dY3) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SmoothQuadCurveTo(
      __zz_cib_::__zz_cib_FromAbiType<double>(dX3),
      __zz_cib_::__zz_cib_FromAbiType<double>(dY3)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ArcTo_59(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dX, __zz_cib_AbiType_t<double> dY, __zz_cib_AbiType_t<double> dRadiusX, __zz_cib_AbiType_t<double> dRadiusY, __zz_cib_AbiType_t<double> dRotation, __zz_cib_AbiType_t<bool> bLarge, __zz_cib_AbiType_t<bool> bSweep) {
    __zz_cib_obj->::PoDoFo::PdfPainter::ArcTo(
      __zz_cib_::__zz_cib_FromAbiType<double>(dX),
      __zz_cib_::__zz_cib_FromAbiType<double>(dY),
      __zz_cib_::__zz_cib_FromAbiType<double>(dRadiusX),
      __zz_cib_::__zz_cib_FromAbiType<double>(dRadiusY),
      __zz_cib_::__zz_cib_FromAbiType<double>(dRotation),
      __zz_cib_::__zz_cib_FromAbiType<bool>(bLarge),
      __zz_cib_::__zz_cib_FromAbiType<bool>(bSweep)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl Arc_60(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dX, __zz_cib_AbiType_t<double> dY, __zz_cib_AbiType_t<double> dRadius, __zz_cib_AbiType_t<double> dAngle1, __zz_cib_AbiType_t<double> dAngle2) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfPainter::Arc(
        __zz_cib_::__zz_cib_FromAbiType<double>(dX),
        __zz_cib_::__zz_cib_FromAbiType<double>(dY),
        __zz_cib_::__zz_cib_FromAbiType<double>(dRadius),
        __zz_cib_::__zz_cib_FromAbiType<double>(dAngle1),
        __zz_cib_::__zz_cib_FromAbiType<double>(dAngle2)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Close_61(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfPainter::Close();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Stroke_62(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfPainter::Stroke();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Fill_63(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> useEvenOddRule) {
    __zz_cib_obj->::PoDoFo::PdfPainter::Fill(
      __zz_cib_::__zz_cib_FromAbiType<bool>(useEvenOddRule)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl FillAndStroke_64(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> useEvenOddRule) {
    __zz_cib_obj->::PoDoFo::PdfPainter::FillAndStroke(
      __zz_cib_::__zz_cib_FromAbiType<bool>(useEvenOddRule)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Clip_65(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> useEvenOddRule) {
    __zz_cib_obj->::PoDoFo::PdfPainter::Clip(
      __zz_cib_::__zz_cib_FromAbiType<bool>(useEvenOddRule)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EndPath_66(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfPainter::EndPath();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Save_67(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfPainter::Save();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Restore_68(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfPainter::Restore();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetTransformationMatrix_69(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> a, __zz_cib_AbiType_t<double> b, __zz_cib_AbiType_t<double> c, __zz_cib_AbiType_t<double> d, __zz_cib_AbiType_t<double> e, __zz_cib_AbiType_t<double> f) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SetTransformationMatrix(
      __zz_cib_::__zz_cib_FromAbiType<double>(a),
      __zz_cib_::__zz_cib_FromAbiType<double>(b),
      __zz_cib_::__zz_cib_FromAbiType<double>(c),
      __zz_cib_::__zz_cib_FromAbiType<double>(d),
      __zz_cib_::__zz_cib_FromAbiType<double>(e),
      __zz_cib_::__zz_cib_FromAbiType<double>(f)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetExtGState_70(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfExtGState*> inGState) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SetExtGState(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfExtGState*>(inGState)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetRenderingIntent_71(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<char*> intent) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SetRenderingIntent(
      __zz_cib_::__zz_cib_FromAbiType<char*>(intent)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetTabWidth_72(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<unsigned short> nTabWidth) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SetTabWidth(
      __zz_cib_::__zz_cib_FromAbiType<unsigned short>(nTabWidth)
    );
  }
  static __zz_cib_AbiType_t<unsigned short> __zz_cib_decl GetTabWidth_73(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<unsigned short>(
      __zz_cib_obj->::PoDoFo::PdfPainter::GetTabWidth()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetPrecision_74(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<unsigned short> inPrec) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SetPrecision(
      __zz_cib_::__zz_cib_FromAbiType<unsigned short>(inPrec)
    );
  }
  static __zz_cib_AbiType_t<unsigned short> __zz_cib_decl GetPrecision_75(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<unsigned short>(
      __zz_cib_obj->::PoDoFo::PdfPainter::GetPrecision()
    );
  }
  static __zz_cib_AbiType_t<std::ostringstream&> __zz_cib_decl GetCurrentPath_76(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<std::ostringstream&>(
      __zz_cib_obj->::PoDoFo::PdfPainter::GetCurrentPath()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetDependICCProfileColor_77(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfColor&> rColor, __zz_cib_AbiType_t<const std::string&> pCSTag) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SetDependICCProfileColor(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfColor&>(rColor),
      __zz_cib_::__zz_cib_FromAbiType<const std::string&>(pCSTag)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ConvertRectToBezier_78(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dX, __zz_cib_AbiType_t<double> dY, __zz_cib_AbiType_t<double> dWidth, __zz_cib_AbiType_t<double> dHeight, __zz_cib_AbiType_t<double[]> pdPointX, __zz_cib_AbiType_t<double[]> pdPointY) {
    __zz_cib_obj->::PoDoFo::PdfPainter::ConvertRectToBezier(
      __zz_cib_::__zz_cib_FromAbiType<double>(dX),
      __zz_cib_::__zz_cib_FromAbiType<double>(dY),
      __zz_cib_::__zz_cib_FromAbiType<double>(dWidth),
      __zz_cib_::__zz_cib_FromAbiType<double>(dHeight),
      __zz_cib_::__zz_cib_FromAbiType<double[]>(pdPointX),
      __zz_cib_::__zz_cib_FromAbiType<double[]>(pdPointY)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddToPageResources_79(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> rIdentifier, __zz_cib_AbiType_t<const ::PoDoFo::PdfReference&> rRef, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> rName) {
    __zz_cib_obj->::PoDoFo::PdfPainter::AddToPageResources(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(rIdentifier),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfReference&>(rRef),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(rName)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetCurrentStrokingColor_80(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SetCurrentStrokingColor();
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl InternalArc_81(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> x, __zz_cib_AbiType_t<double> y, __zz_cib_AbiType_t<double> ray, __zz_cib_AbiType_t<double> ang1, __zz_cib_AbiType_t<double> ang2, __zz_cib_AbiType_t<bool> cont_flg) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfPainter::InternalArc(
        __zz_cib_::__zz_cib_FromAbiType<double>(x),
        __zz_cib_::__zz_cib_FromAbiType<double>(y),
        __zz_cib_::__zz_cib_FromAbiType<double>(ray),
        __zz_cib_::__zz_cib_FromAbiType<double>(ang1),
        __zz_cib_::__zz_cib_FromAbiType<double>(ang2),
        __zz_cib_::__zz_cib_FromAbiType<bool>(cont_flg)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfString> __zz_cib_decl ExpandTabs_82(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rsString, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfString>(
      __zz_cib_obj->::PoDoFo::PdfPainter::ExpandTabs(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rsString),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen)
      )
    );
  }
#if  defined(_MSC_VER)  &&  _MSC_VER <= 1200	// MSC 6.0 has a template-bug 
  static __zz_cib_AbiType_t<::PoDoFo::PdfString> __zz_cib_decl ExpandTabs_char_83(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszText, __zz_cib_AbiType_t<long> lStringLen, __zz_cib_AbiType_t<int> nTabCnt, __zz_cib_AbiType_t<const char> cTab, __zz_cib_AbiType_t<const char> cSpace) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfString>(
      __zz_cib_obj->::PoDoFo::PdfPainter::ExpandTabs_char(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszText),
        __zz_cib_::__zz_cib_FromAbiType<long>(lStringLen),
        __zz_cib_::__zz_cib_FromAbiType<int>(nTabCnt),
        __zz_cib_::__zz_cib_FromAbiType<const char>(cTab),
        __zz_cib_::__zz_cib_FromAbiType<const char>(cSpace)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfString> __zz_cib_decl ExpandTabs_pdf_utf16be_84(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16*> pszText, __zz_cib_AbiType_t<long> lStringLen, __zz_cib_AbiType_t<int> nTabCnt, __zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16> cTab, __zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16> cSpace) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfString>(
      __zz_cib_obj->::PoDoFo::PdfPainter::ExpandTabs_pdf_utf16be(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::pdf_uint16*>(pszText),
        __zz_cib_::__zz_cib_FromAbiType<long>(lStringLen),
        __zz_cib_::__zz_cib_FromAbiType<int>(nTabCnt),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::pdf_uint16>(cTab),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::pdf_uint16>(cSpace)
      )
    );
  }
#endif
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetCurrentTextRenderingMode_85(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfPainter::SetCurrentTextRenderingMode();
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class464 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SetPage_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::GetPage_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::GetCanvas_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::FinishPage_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SetStrokingGray_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SetGray_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SetStrokingColor_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SetColor_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SetStrokingColorCMYK_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SetColorCMYK_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SetStrokingShadingPattern_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SetShadingPattern_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SetStrokingTilingPattern_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SetStrokingTilingPattern_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SetTilingPattern_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SetTilingPattern_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SetStrokingColor_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SetColor_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SetStrokeWidth_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SetStrokeStyle_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SetLineCapStyle_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SetLineJoinStyle_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SetFont_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SetTextRenderingMode_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::GetTextRenderingMode_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::GetFont_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SetClipRect_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SetClipRect_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SetMiterLimit_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::DrawLine_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::Rectangle_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::Rectangle_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::Ellipse_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::Circle_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::DrawText_36),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::DrawText_37),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::DrawMultiLineText_38),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::DrawMultiLineText_39),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::GetMultiLineTextAsLines_40),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::DrawTextAligned_41),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::BeginText_42),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::AddText_43),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::AddText_44),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::MoveTextPos_45),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::EndText_46),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::DrawGlyph_47),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::DrawImage_48),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::DrawXObject_49),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::ClosePath_50),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::LineTo_51),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::MoveTo_52),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::CubicBezierTo_53),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::HorizontalLineTo_54),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::VerticalLineTo_55),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SmoothCurveTo_56),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::QuadCurveTo_57),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SmoothQuadCurveTo_58),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::ArcTo_59),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::Arc_60),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::Close_61),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::Stroke_62),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::Fill_63),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::FillAndStroke_64),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::Clip_65),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::EndPath_66),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::Save_67),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::Restore_68),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SetTransformationMatrix_69),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SetExtGState_70),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SetRenderingIntent_71),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SetTabWidth_72),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::GetTabWidth_73),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SetPrecision_74),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::GetPrecision_75),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::GetCurrentPath_76),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SetDependICCProfileColor_77),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::ConvertRectToBezier_78),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::AddToPageResources_79),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SetCurrentStrokingColor_80),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::InternalArc_81),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::ExpandTabs_82),
#if  defined(_MSC_VER)  &&  _MSC_VER <= 1200	// MSC 6.0 has a template-bug 
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::ExpandTabs_char_83),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::ExpandTabs_pdf_utf16be_84),
#else 
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
#endif
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainter>::SetCurrentTextRenderingMode_85)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 86 };
  return &methodTable;
}
}}}
