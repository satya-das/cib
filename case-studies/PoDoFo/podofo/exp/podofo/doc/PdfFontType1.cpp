#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfString.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfFontMetrics.h"
#include "podofo/doc/PdfFontType1.h"

namespace PoDoFo {

PoDoFo::PdfFontType1::PdfFontType1(__zz_cib_AbiType h)
  : ::PoDoFo::PdfFontSimple(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class441(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfFontType1::PdfFontType1(PdfFontType1&& rhs)
  : ::PoDoFo::PdfFontSimple(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfFontType1::~PdfFontType1() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_0(
    h
  );
}

PoDoFo::PdfFontType1::PdfFontType1(::PoDoFo::PdfFontMetrics* pMetrics, const ::PoDoFo::PdfEncoding* const pEncoding, ::PoDoFo::PdfVecObjects* pParent, bool bEmbed, bool bSubsetting)
  : PoDoFo::PdfFontType1(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pMetrics)>(std::move(pMetrics)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bEmbed)>(std::move(bEmbed)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bSubsetting)>(std::move(bSubsetting))))
{}

PoDoFo::PdfFontType1::PdfFontType1(::PoDoFo::PdfFontMetrics* pMetrics, const ::PoDoFo::PdfEncoding* const pEncoding, ::PoDoFo::PdfObject* pObject)
  : PoDoFo::PdfFontType1(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pMetrics)>(std::move(pMetrics)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject))))
{}

PoDoFo::PdfFontType1::PdfFontType1(::PoDoFo::PdfFontType1* pFont, ::PoDoFo::PdfFontMetrics* pMetrics, const char* pszSuffix, ::PoDoFo::PdfVecObjects* pParent)
  : PoDoFo::PdfFontType1(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pFont)>(std::move(pFont)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pMetrics)>(std::move(pMetrics)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszSuffix)>(std::move(pszSuffix)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

void PoDoFo::PdfFontType1::AddUsedSubsettingGlyphs(const ::PoDoFo::PdfString& sText, long lStringLen) {
    __zz_cib_MyHelper::AddUsedSubsettingGlyphs_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sText)>(sText),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lStringLen)>(std::move(lStringLen))
    );
  }

void PoDoFo::PdfFontType1::AddUsedGlyphname(const char* sGlyphName) {
    __zz_cib_MyHelper::AddUsedGlyphname_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sGlyphName)>(std::move(sGlyphName))
    );
  }

void PoDoFo::PdfFontType1::EmbedSubsetFont() {
    __zz_cib_MyHelper::EmbedSubsetFont_6<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfFontType1::EmbedFontFile(::PoDoFo::PdfObject* pDescriptor) {
    __zz_cib_MyHelper::EmbedFontFile_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDescriptor)>(std::move(pDescriptor))
    );
  }
}
namespace PoDoFo {

PoDoFo::PdfType1Encrypt::PdfType1Encrypt(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

PoDoFo::PdfType1Encrypt::PdfType1Encrypt(PdfType1Encrypt&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfType1Encrypt::PdfType1Encrypt(const ::PoDoFo::PdfType1Encrypt& __zz_cib_param0)
  : PoDoFo::PdfType1Encrypt(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfType1Encrypt::~PdfType1Encrypt() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfType1Encrypt::PdfType1Encrypt()
  : PoDoFo::PdfType1Encrypt(__zz_cib_MyHelper::__zz_cib_New_2())
{}

unsigned char PoDoFo::PdfType1Encrypt::Encrypt(unsigned char plain) {
  return __zz_cib_::__zz_cib_FromAbiType<unsigned char>(
    __zz_cib_MyHelper::Encrypt_3<__zz_cib_::__zz_cib_AbiType_t<unsigned char>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(plain)>(std::move(plain))
    )
  );
}

unsigned char PoDoFo::PdfType1Encrypt::Decrypt(unsigned char cipher) {
  return __zz_cib_::__zz_cib_FromAbiType<unsigned char>(
    __zz_cib_MyHelper::Decrypt_4<__zz_cib_::__zz_cib_AbiType_t<unsigned char>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(cipher)>(std::move(cipher))
    )
  );
}
}
