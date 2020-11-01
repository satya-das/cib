#include "podofo/base/PdfArray.h"
#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfRect.h"
#include "podofo/base/PdfVariant.h"
#include "podofo/doc/PdfFontFactoryBase14Data.h"
#include "podofo/doc/PdfFontMetricsBase14.h"

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
struct __zz_cib_Delegator<::PoDoFo::PdfFontMetricsBase14> : public ::PoDoFo::PdfFontMetricsBase14 {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsBase14>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfFontMetricsBase14>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfFontMetricsBase14>;

  using ::PoDoFo::PdfFontMetricsBase14::PdfFontMetricsBase14;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<const char*> mfont_name, __zz_cib_AbiType_t<const ::PoDoFo::PODOFO_CharData*> mwidths_table, __zz_cib_AbiType_t<bool> mis_font_specific, __zz_cib_AbiType_t<::PoDoFo::pdf_int16> mascent, __zz_cib_AbiType_t<::PoDoFo::pdf_int16> mdescent, __zz_cib_AbiType_t<::PoDoFo::pdf_uint16> mx_height, __zz_cib_AbiType_t<::PoDoFo::pdf_uint16> mcap_height, __zz_cib_AbiType_t<::PoDoFo::pdf_int16> mstrikeout_pos, __zz_cib_AbiType_t<::PoDoFo::pdf_int16> munderline_pos, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> mbbox) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const char*>(mfont_name),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PODOFO_CharData*>(mwidths_table),
    __zz_cib_::__zz_cib_FromAbiType<bool>(mis_font_specific),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_int16>(mascent),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_int16>(mdescent),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_uint16>(mx_height),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_uint16>(mcap_height),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_int16>(mstrikeout_pos),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_int16>(munderline_pos),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(mbbox));
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetWidthArray_3(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfVariant&> var, __zz_cib_AbiType_t<unsigned int> nFirst, __zz_cib_AbiType_t<unsigned int> nLast, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*> pEncoding) {
    __zz_cib_obj->::PoDoFo::PdfFontMetricsBase14::GetWidthArray(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVariant&>(var),
      __zz_cib_::__zz_cib_FromAbiType<unsigned int>(nFirst),
      __zz_cib_::__zz_cib_FromAbiType<unsigned int>(nLast),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding*>(pEncoding)
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetGlyphWidth_4(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nGlyphId) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsBase14::GetGlyphWidth(
        __zz_cib_::__zz_cib_FromAbiType<int>(nGlyphId)
      )
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetGlyphWidth_5(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszGlyphname) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsBase14::GetGlyphWidth(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszGlyphname)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetBoundingBox_6(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfArray&> array) {
    __zz_cib_obj->::PoDoFo::PdfFontMetricsBase14::GetBoundingBox(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfArray&>(array)
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl CharWidth_7(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<unsigned char> c) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsBase14::CharWidth(
        __zz_cib_::__zz_cib_FromAbiType<unsigned char>(c)
      )
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl UnicodeCharWidth_8(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<unsigned short> c) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsBase14::UnicodeCharWidth(
        __zz_cib_::__zz_cib_FromAbiType<unsigned short>(c)
      )
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetLineSpacing_9(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsBase14::GetLineSpacing()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetUnderlineThickness_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsBase14::GetUnderlineThickness()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetUnderlinePosition_11(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsBase14::GetUnderlinePosition()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetStrikeOutPosition_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsBase14::GetStrikeOutPosition()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetStrikeoutThickness_13(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsBase14::GetStrikeoutThickness()
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl GetFontname_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsBase14::GetFontname()
    );
  }
  static __zz_cib_AbiType_t<unsigned int> __zz_cib_decl GetWeight_15(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<unsigned int>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsBase14::GetWeight()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetAscent_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsBase14::GetAscent()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetPdfAscent_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsBase14::GetPdfAscent()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetDescent_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsBase14::GetDescent()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetPdfDescent_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsBase14::GetPdfDescent()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetItalicAngle_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsBase14::GetItalicAngle()
    );
  }
  static __zz_cib_AbiType_t<long> __zz_cib_decl GetGlyphId_21(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<long> lUnicode) {
    return __zz_cib_ToAbiType<long>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsBase14::GetGlyphId(
        __zz_cib_::__zz_cib_FromAbiType<long>(lUnicode)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsSymbol_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsBase14::IsSymbol()
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl GetFontData_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsBase14::GetFontData()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl GetFontDataLen_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsBase14::GetFontDataLen()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetCapHeight_25(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsBase14::GetCapHeight()
    );
  }
  static __zz_cib_AbiType_t<long> __zz_cib_decl GetGlyphIdUnicode_26(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<long> lUnicode) {
    return __zz_cib_ToAbiType<long>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsBase14::GetGlyphIdUnicode(
        __zz_cib_::__zz_cib_FromAbiType<long>(lUnicode)
      )
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfFontMetricsBase14* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfFontMetrics* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class437(::PoDoFo::PdfFontMetricsBase14* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfFontMetricsBase14* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class437(::PoDoFo::PdfFontMetrics* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfFontMetricsBase14*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class438 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsBase14>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsBase14>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsBase14>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsBase14>::GetWidthArray_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsBase14>::GetGlyphWidth_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsBase14>::GetGlyphWidth_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsBase14>::GetBoundingBox_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsBase14>::CharWidth_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsBase14>::UnicodeCharWidth_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsBase14>::GetLineSpacing_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsBase14>::GetUnderlineThickness_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsBase14>::GetUnderlinePosition_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsBase14>::GetStrikeOutPosition_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsBase14>::GetStrikeoutThickness_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsBase14>::GetFontname_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsBase14>::GetWeight_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsBase14>::GetAscent_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsBase14>::GetPdfAscent_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsBase14>::GetDescent_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsBase14>::GetPdfDescent_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsBase14>::GetItalicAngle_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsBase14>::GetGlyphId_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsBase14>::IsSymbol_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsBase14>::GetFontData_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsBase14>::GetFontDataLen_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsBase14>::GetCapHeight_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsBase14>::GetGlyphIdUnicode_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsBase14>::__zz_cib_CastTo__zz_cib_Class437),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsBase14>::__zz_cib_CastFrom__zz_cib_Class437),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsBase14>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 30 };
  return &methodTable;
}
}}}
