#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfString.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfFont.h"
#include "podofo/doc/PdfFontCache.h"
#include "podofo/doc/PdfFontConfigWrapper.h"
#include "podofo/doc/PdfFontMetrics.h"
#include <vector>

namespace PoDoFo {

PoDoFo::TFontCacheElement::TFontCacheElement(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::TFontCacheElement::TFontCacheElement(TFontCacheElement&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::TFontCacheElement::~TFontCacheElement() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_0(
    h
  );
}

PoDoFo::TFontCacheElement::TFontCacheElement()
  : PoDoFo::TFontCacheElement(__zz_cib_MyHelper::__zz_cib_New_1())
{}

PoDoFo::TFontCacheElement::TFontCacheElement(const char* pszFontName, bool bBold, bool bItalic, bool bIsSymbolCharset, const ::PoDoFo::PdfEncoding* const pEncoding)
  : PoDoFo::TFontCacheElement(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszFontName)>(std::move(pszFontName)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bBold)>(std::move(bBold)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bItalic)>(std::move(bItalic)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bIsSymbolCharset)>(std::move(bIsSymbolCharset)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding))))
{}

#if  defined(_WIN32) && !defined(PODOFO_NO_FONTMANAGER)
PoDoFo::TFontCacheElement::TFontCacheElement(const wchar_t* pszFontName, bool bBold, bool bItalic, bool bIsSymbolCharset, const ::PoDoFo::PdfEncoding* const pEncoding)
  : PoDoFo::TFontCacheElement(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszFontName)>(std::move(pszFontName)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bBold)>(std::move(bBold)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bItalic)>(std::move(bItalic)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bIsSymbolCharset)>(std::move(bIsSymbolCharset)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding))))
{}
#endif

const ::PoDoFo::TFontCacheElement& PoDoFo::TFontCacheElement::operator=(const ::PoDoFo::TFontCacheElement& rhs) {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::TFontCacheElement&>(
    __zz_cib_MyHelper::__zz_cib_OperatorEqual_4<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::TFontCacheElement&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

bool PoDoFo::TFontCacheElement::operator<(const ::PoDoFo::TFontCacheElement& rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorLT_5<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

bool PoDoFo::TFontCacheElement::operator()(const ::PoDoFo::TFontCacheElement& r1, const ::PoDoFo::TFontCacheElement& r2) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorApp_6<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(r1)>(r1),
      __zz_cib_::__zz_cib_ToAbiType<decltype(r2)>(r2)
    )
  );
}
}
namespace PoDoFo {

PoDoFo::PdfFontCache::PdfFontCache(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

PoDoFo::PdfFontCache::PdfFontCache(PdfFontCache&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfFontCache::PdfFontCache(const ::PoDoFo::PdfFontCache& __zz_cib_param0)
  : PoDoFo::PdfFontCache(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfFontCache::PdfFontCache(::PoDoFo::PdfVecObjects* pParent)
  : PoDoFo::PdfFontCache(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfFontCache::PdfFontCache(const ::PoDoFo::PdfFontConfigWrapper& rFontConfig, ::PoDoFo::PdfVecObjects* pParent)
  : PoDoFo::PdfFontCache(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rFontConfig)>(rFontConfig),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfFontCache::~PdfFontCache() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_3(
    h
  );
}

void PoDoFo::PdfFontCache::EmptyCache() {
    __zz_cib_MyHelper::EmptyCache_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

::PoDoFo::PdfFont* PoDoFo::PdfFontCache::GetFont(::PoDoFo::PdfObject* pObject) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFont*>(
    __zz_cib_MyHelper::GetFont_5<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfFont*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject))
    )
  );
}

::PoDoFo::PdfFont* PoDoFo::PdfFontCache::GetFont(const char* pszFontName, bool bBold, bool bItalic, bool bSymbolCharset, bool bEmbedd, ::PoDoFo::PdfFontCache::EFontCreationFlags eFontCreationFlags, const ::PoDoFo::PdfEncoding* const __zz_cib_param6, const char* pszFileName) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFont*>(
    __zz_cib_MyHelper::GetFont_6<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfFont*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFontName)>(std::move(pszFontName)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bBold)>(std::move(bBold)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bItalic)>(std::move(bItalic)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bSymbolCharset)>(std::move(bSymbolCharset)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bEmbedd)>(std::move(bEmbedd)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eFontCreationFlags)>(std::move(eFontCreationFlags)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param6)>(std::move(__zz_cib_param6)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFileName)>(std::move(pszFileName))
    )
  );
}

#if  defined(_WIN32) && !defined(PODOFO_NO_FONTMANAGER)
::PoDoFo::PdfFont* PoDoFo::PdfFontCache::GetFont(const wchar_t* pszFontName, bool bBold, bool bItalic, bool bSymbolCharset, bool bEmbedd, const ::PoDoFo::PdfEncoding* const __zz_cib_param5) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFont*>(
    __zz_cib_MyHelper::GetFont_7<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfFont*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFontName)>(std::move(pszFontName)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bBold)>(std::move(bBold)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bItalic)>(std::move(bItalic)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bSymbolCharset)>(std::move(bSymbolCharset)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bEmbedd)>(std::move(bEmbedd)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param5)>(std::move(__zz_cib_param5))
    )
  );
}

::PoDoFo::PdfFont* PoDoFo::PdfFontCache::GetFont(const LOGFONTA& logFont, bool bEmbedd, const ::PoDoFo::PdfEncoding* const pEncoding) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFont*>(
    __zz_cib_MyHelper::GetFont_8<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfFont*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(logFont)>(logFont),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bEmbedd)>(std::move(bEmbedd)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding))
    )
  );
}

::PoDoFo::PdfFont* PoDoFo::PdfFontCache::GetFont(const LOGFONTW& logFont, bool bEmbedd, const ::PoDoFo::PdfEncoding* const pEncoding) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFont*>(
    __zz_cib_MyHelper::GetFont_9<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfFont*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(logFont)>(logFont),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bEmbedd)>(std::move(bEmbedd)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding))
    )
  );
}
#endif

::PoDoFo::PdfFont* PoDoFo::PdfFontCache::GetFont(FT_Face face, bool bSymbolCharset, bool bEmbedd, const ::PoDoFo::PdfEncoding* const __zz_cib_param3) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFont*>(
    __zz_cib_MyHelper::GetFont_10<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfFont*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(face)>(std::move(face)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bSymbolCharset)>(std::move(bSymbolCharset)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bEmbedd)>(std::move(bEmbedd)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param3)>(std::move(__zz_cib_param3))
    )
  );
}

::PoDoFo::PdfFont* PoDoFo::PdfFontCache::GetDuplicateFontType1(::PoDoFo::PdfFont* pFont, const char* pszSuffix) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFont*>(
    __zz_cib_MyHelper::GetDuplicateFontType1_11<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfFont*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pFont)>(std::move(pFont)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszSuffix)>(std::move(pszSuffix))
    )
  );
}

::PoDoFo::PdfFont* PoDoFo::PdfFontCache::GetFontSubset(const char* pszFontName, bool bBold, bool bItalic, bool bSymbolCharset, const ::PoDoFo::PdfEncoding* const __zz_cib_param4, const char* pszFileName) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFont*>(
    __zz_cib_MyHelper::GetFontSubset_12<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfFont*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFontName)>(std::move(pszFontName)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bBold)>(std::move(bBold)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bItalic)>(std::move(bItalic)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bSymbolCharset)>(std::move(bSymbolCharset)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param4)>(std::move(__zz_cib_param4)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFileName)>(std::move(pszFileName))
    )
  );
}

void PoDoFo::PdfFontCache::EmbedSubsetFonts() {
    __zz_cib_MyHelper::EmbedSubsetFonts_13<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

#if  defined(PODOFO_HAVE_FONTCONFIG)
std::string PoDoFo::PdfFontCache::GetFontConfigFontPath(FcConfig* pConfig, const char* pszFontName, bool bBold, bool bItalic) {
  return __zz_cib_::__zz_cib_FromAbiType<std::string>(
    __zz_cib_MyHelper::GetFontConfigFontPath_14<__zz_cib_::__zz_cib_AbiType_t<std::string>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(pConfig)>(std::move(pConfig)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFontName)>(std::move(pszFontName)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bBold)>(std::move(bBold)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bItalic)>(std::move(bItalic))
    )
  );
}
#endif

FT_Library PoDoFo::PdfFontCache::GetFontLibrary() const {
  return __zz_cib_::__zz_cib_FromAbiType<FT_Library>(
    __zz_cib_MyHelper::GetFontLibrary_15<__zz_cib_::__zz_cib_AbiType_t<FT_Library>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfFontCache::SetFontConfigWrapper(const ::PoDoFo::PdfFontConfigWrapper& rFontConfig) {
    __zz_cib_MyHelper::SetFontConfigWrapper_16<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rFontConfig)>(rFontConfig)
    );
  }

void PoDoFo::PdfFontCache::Init() {
    __zz_cib_MyHelper::Init_17<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }
}
