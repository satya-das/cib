#include "podofo/base/PdfArray.h"
#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfVariant.h"
#include "podofo/doc/PdfFontMetricsObject.h"

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
struct __zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject> : public ::PoDoFo::PdfFontMetricsObject {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfFontMetricsObject>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfFontMetricsObject>;

  using ::PoDoFo::PdfFontMetricsObject::PdfFontMetricsObject;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_AbiType_t<::PoDoFo::PdfObject*> pFont, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pDescriptor, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding* const> pEncoding) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pFont),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pDescriptor),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding* const>(pEncoding));
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetWidthArray_2(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfVariant&> var, __zz_cib_AbiType_t<unsigned int> nFirst, __zz_cib_AbiType_t<unsigned int> nLast, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*> pEncoding) {
    __zz_cib_obj->::PoDoFo::PdfFontMetricsObject::GetWidthArray(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVariant&>(var),
      __zz_cib_::__zz_cib_FromAbiType<unsigned int>(nFirst),
      __zz_cib_::__zz_cib_FromAbiType<unsigned int>(nLast),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding*>(pEncoding)
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetGlyphWidth_3(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nGlyphId) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsObject::GetGlyphWidth(
        __zz_cib_::__zz_cib_FromAbiType<int>(nGlyphId)
      )
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetGlyphWidth_4(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszGlyphname) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsObject::GetGlyphWidth(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszGlyphname)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetBoundingBox_5(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfArray&> array) {
    __zz_cib_obj->::PoDoFo::PdfFontMetricsObject::GetBoundingBox(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfArray&>(array)
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl CharWidth_6(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<unsigned char> c) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsObject::CharWidth(
        __zz_cib_::__zz_cib_FromAbiType<unsigned char>(c)
      )
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl UnicodeCharWidth_7(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<unsigned short> c) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsObject::UnicodeCharWidth(
        __zz_cib_::__zz_cib_FromAbiType<unsigned short>(c)
      )
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetLineSpacing_8(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsObject::GetLineSpacing()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetUnderlineThickness_9(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsObject::GetUnderlineThickness()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetUnderlinePosition_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsObject::GetUnderlinePosition()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetStrikeOutPosition_11(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsObject::GetStrikeOutPosition()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetStrikeoutThickness_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsObject::GetStrikeoutThickness()
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl GetFontname_13(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsObject::GetFontname()
    );
  }
  static __zz_cib_AbiType_t<unsigned int> __zz_cib_decl GetWeight_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<unsigned int>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsObject::GetWeight()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetAscent_15(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsObject::GetAscent()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetPdfAscent_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsObject::GetPdfAscent()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetDescent_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsObject::GetDescent()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetPdfDescent_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsObject::GetPdfDescent()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetItalicAngle_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsObject::GetItalicAngle()
    );
  }
  static __zz_cib_AbiType_t<long> __zz_cib_decl GetGlyphId_20(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<long> lUnicode) {
    return __zz_cib_ToAbiType<long>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsObject::GetGlyphId(
        __zz_cib_::__zz_cib_FromAbiType<long>(lUnicode)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsSymbol_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsObject::IsSymbol()
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl GetFontData_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsObject::GetFontData()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl GetFontDataLen_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsObject::GetFontDataLen()
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfFontMetricsObject* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfFontMetrics* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class437(::PoDoFo::PdfFontMetricsObject* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfFontMetricsObject* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class437(::PoDoFo::PdfFontMetrics* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfFontMetricsObject*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class440 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetWidthArray_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetGlyphWidth_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetGlyphWidth_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetBoundingBox_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::CharWidth_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::UnicodeCharWidth_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetLineSpacing_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetUnderlineThickness_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetUnderlinePosition_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetStrikeOutPosition_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetStrikeoutThickness_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetFontname_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetWeight_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetAscent_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetPdfAscent_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetDescent_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetPdfDescent_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetItalicAngle_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetGlyphId_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::IsSymbol_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetFontData_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::GetFontDataLen_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::__zz_cib_CastTo__zz_cib_Class437),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::__zz_cib_CastFrom__zz_cib_Class437),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsObject>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 27 };
  return &methodTable;
}
}}}
