#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfFontMetrics.h"
#include "podofo/doc/PdfFontTrueType.h"

namespace PoDoFo {

PoDoFo::PdfFontTrueType::PdfFontTrueType(__zz_cib_AbiType h)
  : ::PoDoFo::PdfFontSimple(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class441(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfFontTrueType::PdfFontTrueType(PdfFontTrueType&& rhs)
  : ::PoDoFo::PdfFontSimple(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfFontTrueType::~PdfFontTrueType() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_0(
    h
  );
}

PoDoFo::PdfFontTrueType::PdfFontTrueType(::PoDoFo::PdfFontMetrics* pMetrics, const ::PoDoFo::PdfEncoding* const pEncoding, ::PoDoFo::PdfVecObjects* pParent, bool bEmbed)
  : PoDoFo::PdfFontTrueType(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pMetrics)>(std::move(pMetrics)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bEmbed)>(std::move(bEmbed))))
{}

PoDoFo::PdfFontTrueType::PdfFontTrueType(::PoDoFo::PdfFontMetrics* pMetrics, const ::PoDoFo::PdfEncoding* const pEncoding, ::PoDoFo::PdfObject* pObject)
  : PoDoFo::PdfFontTrueType(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pMetrics)>(std::move(pMetrics)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject))))
{}

void PoDoFo::PdfFontTrueType::EmbedFontFile(::PoDoFo::PdfObject* pDescriptor) {
    __zz_cib_MyHelper::EmbedFontFile_3<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDescriptor)>(std::move(pDescriptor))
    );
  }
}
