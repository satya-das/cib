#include "podofo/base/PdfArray.h"
#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfRefCountedBuffer.h"
#include "podofo/base/PdfVariant.h"
#include "podofo/doc/PdfFontMetricsFreetype.h"

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
struct __zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype> : public ::PoDoFo::PdfFontMetricsFreetype {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfFontMetricsFreetype>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfFontMetricsFreetype>;

  using ::PoDoFo::PdfFontMetricsFreetype::PdfFontMetricsFreetype;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<FT_Library*> pLibrary, __zz_cib_AbiType_t<const char*> pszFilename, __zz_cib_AbiType_t<bool> pIsSymbol, __zz_cib_AbiType_t<const char*> pszSubsetPrefix) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<FT_Library*>(pLibrary),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFilename),
    __zz_cib_::__zz_cib_FromAbiType<bool>(pIsSymbol),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszSubsetPrefix));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<FT_Library*> pLibrary, __zz_cib_AbiType_t<const char*> pBuffer, __zz_cib_AbiType_t<unsigned int> nBufLen, __zz_cib_AbiType_t<bool> pIsSymbol, __zz_cib_AbiType_t<const char*> pszSubsetPrefix) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<FT_Library*>(pLibrary),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pBuffer),
    __zz_cib_::__zz_cib_FromAbiType<unsigned int>(nBufLen),
    __zz_cib_::__zz_cib_FromAbiType<bool>(pIsSymbol),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszSubsetPrefix));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_3(__zz_cib_AbiType_t<FT_Library*> pLibrary, __zz_cib_AbiType_t<const ::PoDoFo::PdfRefCountedBuffer&> rBuffer, __zz_cib_AbiType_t<bool> pIsSymbol, __zz_cib_AbiType_t<const char*> pszSubsetPrefix) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<FT_Library*>(pLibrary),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRefCountedBuffer&>(rBuffer),
    __zz_cib_::__zz_cib_FromAbiType<bool>(pIsSymbol),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszSubsetPrefix));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_4(__zz_cib_AbiType_t<FT_Library*> pLibrary, __zz_cib_AbiType_t<FT_Face> face, __zz_cib_AbiType_t<bool> pIsSymbol, __zz_cib_AbiType_t<const char*> pszSubsetPrefix) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<FT_Library*>(pLibrary),
    __zz_cib_::__zz_cib_FromAbiType<FT_Face>(face),
    __zz_cib_::__zz_cib_FromAbiType<bool>(pIsSymbol),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszSubsetPrefix));
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfFontMetricsFreetype*> __zz_cib_decl CreateForSubsetting_5(__zz_cib_AbiType_t<FT_Library*> pLibrary, __zz_cib_AbiType_t<const char*> pszFilename, __zz_cib_AbiType_t<bool> pIsSymbol, __zz_cib_AbiType_t<const char*> pszSubsetPrefix) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfFontMetricsFreetype*>(
      ::PoDoFo::PdfFontMetricsFreetype::CreateForSubsetting(
        __zz_cib_::__zz_cib_FromAbiType<FT_Library*>(pLibrary),
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFilename),
        __zz_cib_::__zz_cib_FromAbiType<bool>(pIsSymbol),
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszSubsetPrefix)
      )
    );
  }
  static void __zz_cib_decl __zz_cib_Delete_6(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetWidthArray_7(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfVariant&> var, __zz_cib_AbiType_t<unsigned int> nFirst, __zz_cib_AbiType_t<unsigned int> nLast, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*> pEncoding) {
    __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetWidthArray(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVariant&>(var),
      __zz_cib_::__zz_cib_FromAbiType<unsigned int>(nFirst),
      __zz_cib_::__zz_cib_FromAbiType<unsigned int>(nLast),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding*>(pEncoding)
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetGlyphWidth_8(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nGlyphId) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetGlyphWidth(
        __zz_cib_::__zz_cib_FromAbiType<int>(nGlyphId)
      )
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetGlyphWidth_9(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszGlyphname) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetGlyphWidth(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszGlyphname)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetBoundingBox_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfArray&> array) {
    __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetBoundingBox(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfArray&>(array)
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl CharWidth_11(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<unsigned char> c) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::CharWidth(
        __zz_cib_::__zz_cib_FromAbiType<unsigned char>(c)
      )
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl UnicodeCharWidth_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<unsigned short> c) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::UnicodeCharWidth(
        __zz_cib_::__zz_cib_FromAbiType<unsigned short>(c)
      )
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetLineSpacing_13(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetLineSpacing()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetUnderlineThickness_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetUnderlineThickness()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetUnderlinePosition_15(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetUnderlinePosition()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetStrikeOutPosition_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetStrikeOutPosition()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetStrikeoutThickness_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetStrikeoutThickness()
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl GetFontname_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetFontname()
    );
  }
  static __zz_cib_AbiType_t<unsigned int> __zz_cib_decl GetWeight_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<unsigned int>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetWeight()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetAscent_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetAscent()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetPdfAscent_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetPdfAscent()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetDescent_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetDescent()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetPdfDescent_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetPdfDescent()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetItalicAngle_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetItalicAngle()
    );
  }
  static __zz_cib_AbiType_t<long> __zz_cib_decl GetGlyphId_25(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<long> lUnicode) {
    return __zz_cib_ToAbiType<long>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetGlyphId(
        __zz_cib_::__zz_cib_FromAbiType<long>(lUnicode)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsSymbol_26(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::IsSymbol()
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl GetFontData_27(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetFontData()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl GetFontDataLen_28(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetFontDataLen()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsBold_29(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::IsBold()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsItalic_30(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::IsItalic()
    );
  }
  static __zz_cib_AbiType_t<FT_Face> __zz_cib_decl GetFace_31(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<FT_Face>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetFace()
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfFontMetricsFreetype* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfFontMetrics* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class437(::PoDoFo::PdfFontMetricsFreetype* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfFontMetricsFreetype* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class437(::PoDoFo::PdfFontMetrics* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfFontMetricsFreetype*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class439 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::__zz_cib_New_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::CreateForSubsetting_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::__zz_cib_Delete_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetWidthArray_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetGlyphWidth_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetGlyphWidth_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetBoundingBox_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::CharWidth_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::UnicodeCharWidth_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetLineSpacing_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetUnderlineThickness_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetUnderlinePosition_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetStrikeOutPosition_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetStrikeoutThickness_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetFontname_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetWeight_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetAscent_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetPdfAscent_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetDescent_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetPdfDescent_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetItalicAngle_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetGlyphId_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::IsSymbol_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetFontData_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetFontDataLen_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::IsBold_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::IsItalic_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetFace_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::__zz_cib_CastTo__zz_cib_Class437),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::__zz_cib_CastFrom__zz_cib_Class437),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 35 };
  return &methodTable;
}
}}}
