#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfString.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfFontCID.h"
#include "podofo/doc/PdfFontMetrics.h"
#include "podofo/doc/PdfFontMetricsFreetype.h"

namespace PoDoFo {

PoDoFo::PdfFontCID::PdfFontCID(__zz_cib_AbiType h)
  : ::PoDoFo::PdfFont(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class430(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfFontCID::PdfFontCID(PdfFontCID&& rhs)
  : ::PoDoFo::PdfFont(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfFontCID::~PdfFontCID() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_0(
    h
  );
}

PoDoFo::PdfFontCID::PdfFontCID(::PoDoFo::PdfFontMetrics* pMetrics, const ::PoDoFo::PdfEncoding* const pEncoding, ::PoDoFo::PdfVecObjects* pParent, bool bEmbed, bool bSubset)
  : PoDoFo::PdfFontCID(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pMetrics)>(std::move(pMetrics)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bEmbed)>(std::move(bEmbed)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bSubset)>(std::move(bSubset))))
{}

PoDoFo::PdfFontCID::PdfFontCID(::PoDoFo::PdfFontMetrics* pMetrics, const ::PoDoFo::PdfEncoding* const pEncoding, ::PoDoFo::PdfObject* pObject, bool bEmbed)
  : PoDoFo::PdfFontCID(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pMetrics)>(std::move(pMetrics)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bEmbed)>(std::move(bEmbed))))
{}

void PoDoFo::PdfFontCID::EmbedFont() {
    __zz_cib_MyHelper::EmbedFont_3<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfFontCID::EmbedSubsetFont() {
    __zz_cib_MyHelper::EmbedSubsetFont_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfFontCID::AddUsedSubsettingGlyphs(const ::PoDoFo::PdfString& sText, long lStringLen) {
    __zz_cib_MyHelper::AddUsedSubsettingGlyphs_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sText)>(sText),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lStringLen)>(std::move(lStringLen))
    );
  }

void PoDoFo::PdfFontCID::Init(bool bEmbed, bool bSubset) {
    __zz_cib_MyHelper::Init_6<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bEmbed)>(std::move(bEmbed)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bSubset)>(std::move(bSubset))
    );
  }

void PoDoFo::PdfFontCID::EmbedFont(::PoDoFo::PdfObject* pDescriptor) {
    __zz_cib_MyHelper::EmbedFont_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDescriptor)>(std::move(pDescriptor))
    );
  }

void PoDoFo::PdfFontCID::MaybeUpdateBaseFontKey() {
    __zz_cib_MyHelper::MaybeUpdateBaseFontKey_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfFontCID::SetBold(bool bBold) {
    __zz_cib_MyHelper::SetBold_9<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bBold)>(std::move(bBold))
    );
  }

void PoDoFo::PdfFontCID::SetItalic(bool bItalic) {
    __zz_cib_MyHelper::SetItalic_10<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bItalic)>(std::move(bItalic))
    );
  }
}
