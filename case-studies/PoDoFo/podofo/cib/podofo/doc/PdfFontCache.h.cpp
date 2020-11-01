#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfString.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfFont.h"
#include "podofo/doc/PdfFontCache.h"
#include "podofo/doc/PdfFontConfigWrapper.h"
#include "podofo/doc/PdfFontMetrics.h"
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
struct __zz_cib_Delegator<::PoDoFo::TFontCacheElement> : public ::PoDoFo::TFontCacheElement {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::TFontCacheElement>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::TFontCacheElement::TFontCacheElement;

  static void __zz_cib_decl __zz_cib_Delete_0(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<const char*> pszFontName, __zz_cib_AbiType_t<bool> bBold, __zz_cib_AbiType_t<bool> bItalic, __zz_cib_AbiType_t<bool> bIsSymbolCharset, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding* const> pEncoding) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFontName),
    __zz_cib_::__zz_cib_FromAbiType<bool>(bBold),
    __zz_cib_::__zz_cib_FromAbiType<bool>(bItalic),
    __zz_cib_::__zz_cib_FromAbiType<bool>(bIsSymbolCharset),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding* const>(pEncoding));
  }
#if  defined(_WIN32) && !defined(PODOFO_NO_FONTMANAGER)
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_3(__zz_cib_AbiType_t<const wchar_t*> pszFontName, __zz_cib_AbiType_t<bool> bBold, __zz_cib_AbiType_t<bool> bItalic, __zz_cib_AbiType_t<bool> bIsSymbolCharset, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding* const> pEncoding) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const wchar_t*>(pszFontName),
    __zz_cib_::__zz_cib_FromAbiType<bool>(bBold),
    __zz_cib_::__zz_cib_FromAbiType<bool>(bItalic),
    __zz_cib_::__zz_cib_FromAbiType<bool>(bIsSymbolCharset),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding* const>(pEncoding));
  }
#endif
  static __zz_cib_AbiType_t<const ::PoDoFo::TFontCacheElement&> __zz_cib_decl __zz_cib_OperatorEqual_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::TFontCacheElement&> rhs) {
    return __zz_cib_ToAbiType<const ::PoDoFo::TFontCacheElement&>(
      __zz_cib_obj->::PoDoFo::TFontCacheElement::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::TFontCacheElement&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_5(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::TFontCacheElement&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::TFontCacheElement::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::TFontCacheElement&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorApp_6(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::TFontCacheElement&> r1, __zz_cib_AbiType_t<const ::PoDoFo::TFontCacheElement&> r2) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::TFontCacheElement::operator()(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::TFontCacheElement&>(r1),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::TFontCacheElement&>(r2)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class432 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::TFontCacheElement>::__zz_cib_Delete_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::TFontCacheElement>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::TFontCacheElement>::__zz_cib_New_2),
#if  defined(_WIN32) && !defined(PODOFO_NO_FONTMANAGER)
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::TFontCacheElement>::__zz_cib_New_3),
#else 
    reinterpret_cast<__zz_cib_MTableEntry> (0),
#endif
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::TFontCacheElement>::__zz_cib_OperatorEqual_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::TFontCacheElement>::__zz_cib_OperatorLT_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::TFontCacheElement>::__zz_cib_OperatorApp_6)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 7 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfFontCache> : public ::PoDoFo::PdfFontCache {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCache>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfFontCache::PdfFontCache;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<const ::PoDoFo::PdfFontConfigWrapper&> rFontConfig, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfFontConfigWrapper&>(rFontConfig),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent));
  }
  static void __zz_cib_decl __zz_cib_Delete_3(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EmptyCache_4(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfFontCache::EmptyCache();
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfFont*> __zz_cib_decl GetFont_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pObject) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfFont*>(
      __zz_cib_obj->::PoDoFo::PdfFontCache::GetFont(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pObject)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfFont*> __zz_cib_decl GetFont_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszFontName, __zz_cib_AbiType_t<bool> bBold, __zz_cib_AbiType_t<bool> bItalic, __zz_cib_AbiType_t<bool> bSymbolCharset, __zz_cib_AbiType_t<bool> bEmbedd, __zz_cib_AbiType_t<::PoDoFo::PdfFontCache::EFontCreationFlags> eFontCreationFlags, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding* const> __zz_cib_param6, __zz_cib_AbiType_t<const char*> pszFileName) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfFont*>(
      __zz_cib_obj->::PoDoFo::PdfFontCache::GetFont(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFontName),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bBold),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bItalic),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bSymbolCharset),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bEmbedd),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFontCache::EFontCreationFlags>(eFontCreationFlags),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding* const>(__zz_cib_param6),
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFileName)
      )
    );
  }
#if  defined(_WIN32) && !defined(PODOFO_NO_FONTMANAGER)
  static __zz_cib_AbiType_t<::PoDoFo::PdfFont*> __zz_cib_decl GetFont_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const wchar_t*> pszFontName, __zz_cib_AbiType_t<bool> bBold, __zz_cib_AbiType_t<bool> bItalic, __zz_cib_AbiType_t<bool> bSymbolCharset, __zz_cib_AbiType_t<bool> bEmbedd, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding* const> __zz_cib_param5) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfFont*>(
      __zz_cib_obj->::PoDoFo::PdfFontCache::GetFont(
        __zz_cib_::__zz_cib_FromAbiType<const wchar_t*>(pszFontName),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bBold),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bItalic),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bSymbolCharset),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bEmbedd),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding* const>(__zz_cib_param5)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfFont*> __zz_cib_decl GetFont_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const LOGFONTA&> logFont, __zz_cib_AbiType_t<bool> bEmbedd, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding* const> pEncoding) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfFont*>(
      __zz_cib_obj->::PoDoFo::PdfFontCache::GetFont(
        __zz_cib_::__zz_cib_FromAbiType<const LOGFONTA&>(logFont),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bEmbedd),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding* const>(pEncoding)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfFont*> __zz_cib_decl GetFont_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const LOGFONTW&> logFont, __zz_cib_AbiType_t<bool> bEmbedd, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding* const> pEncoding) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfFont*>(
      __zz_cib_obj->::PoDoFo::PdfFontCache::GetFont(
        __zz_cib_::__zz_cib_FromAbiType<const LOGFONTW&>(logFont),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bEmbedd),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding* const>(pEncoding)
      )
    );
  }
#endif
  static __zz_cib_AbiType_t<::PoDoFo::PdfFont*> __zz_cib_decl GetFont_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<FT_Face> face, __zz_cib_AbiType_t<bool> bSymbolCharset, __zz_cib_AbiType_t<bool> bEmbedd, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding* const> __zz_cib_param3) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfFont*>(
      __zz_cib_obj->::PoDoFo::PdfFontCache::GetFont(
        __zz_cib_::__zz_cib_FromAbiType<FT_Face>(face),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bSymbolCharset),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bEmbedd),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding* const>(__zz_cib_param3)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfFont*> __zz_cib_decl GetDuplicateFontType1_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfFont*> pFont, __zz_cib_AbiType_t<const char*> pszSuffix) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfFont*>(
      __zz_cib_obj->::PoDoFo::PdfFontCache::GetDuplicateFontType1(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFont*>(pFont),
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszSuffix)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfFont*> __zz_cib_decl GetFontSubset_12(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszFontName, __zz_cib_AbiType_t<bool> bBold, __zz_cib_AbiType_t<bool> bItalic, __zz_cib_AbiType_t<bool> bSymbolCharset, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding* const> __zz_cib_param4, __zz_cib_AbiType_t<const char*> pszFileName) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfFont*>(
      __zz_cib_obj->::PoDoFo::PdfFontCache::GetFontSubset(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFontName),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bBold),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bItalic),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bSymbolCharset),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding* const>(__zz_cib_param4),
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFileName)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EmbedSubsetFonts_13(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfFontCache::EmbedSubsetFonts();
  }
#if  defined(PODOFO_HAVE_FONTCONFIG)
  static __zz_cib_AbiType_t<std::string> __zz_cib_decl GetFontConfigFontPath_14(__zz_cib_AbiType_t<FcConfig*> pConfig, __zz_cib_AbiType_t<const char*> pszFontName, __zz_cib_AbiType_t<bool> bBold, __zz_cib_AbiType_t<bool> bItalic) {
    return __zz_cib_ToAbiType<std::string>(
      ::PoDoFo::PdfFontCache::GetFontConfigFontPath(
        __zz_cib_::__zz_cib_FromAbiType<FcConfig*>(pConfig),
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFontName),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bBold),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bItalic)
      )
    );
  }
#endif
  static __zz_cib_AbiType_t<FT_Library> __zz_cib_decl GetFontLibrary_15(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<FT_Library>(
      __zz_cib_obj->::PoDoFo::PdfFontCache::GetFontLibrary()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetFontConfigWrapper_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfFontConfigWrapper&> rFontConfig) {
    __zz_cib_obj->::PoDoFo::PdfFontCache::SetFontConfigWrapper(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfFontConfigWrapper&>(rFontConfig)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Init_17(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfFontCache::Init();
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class433 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCache>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCache>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCache>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCache>::__zz_cib_Delete_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCache>::EmptyCache_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCache>::GetFont_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCache>::GetFont_6),
#if  defined(_WIN32) && !defined(PODOFO_NO_FONTMANAGER)
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCache>::GetFont_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCache>::GetFont_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCache>::GetFont_9),
#else 
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
#endif
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCache>::GetFont_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCache>::GetDuplicateFontType1_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCache>::GetFontSubset_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCache>::EmbedSubsetFonts_13),
#if  defined(PODOFO_HAVE_FONTCONFIG)
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCache>::GetFontConfigFontPath_14),
#else 
    reinterpret_cast<__zz_cib_MTableEntry> (0),
#endif
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCache>::GetFontLibrary_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCache>::SetFontConfigWrapper_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCache>::Init_17)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 18 };
  return &methodTable;
}
}}}
