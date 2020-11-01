#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfString.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfFontCID.h"
#include "podofo/doc/PdfFontMetrics.h"
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
struct __zz_cib_Delegator<::PoDoFo::PdfFontCID> : public ::PoDoFo::PdfFontCID {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCID>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfFontCID>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfFontCID>;

  using ::PoDoFo::PdfFontCID::PdfFontCID;

  static void __zz_cib_decl __zz_cib_Delete_0(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::PoDoFo::PdfFontMetrics*> pMetrics, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding* const> pEncoding, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent, __zz_cib_AbiType_t<bool> bEmbed, __zz_cib_AbiType_t<bool> bSubset) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFontMetrics*>(pMetrics),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding* const>(pEncoding),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent),
    __zz_cib_::__zz_cib_FromAbiType<bool>(bEmbed),
    __zz_cib_::__zz_cib_FromAbiType<bool>(bSubset));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::PoDoFo::PdfFontMetrics*> pMetrics, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding* const> pEncoding, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pObject, __zz_cib_AbiType_t<bool> bEmbed) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFontMetrics*>(pMetrics),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding* const>(pEncoding),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pObject),
    __zz_cib_::__zz_cib_FromAbiType<bool>(bEmbed));
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EmbedFont_3(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfFontCID::EmbedFont();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EmbedSubsetFont_4(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfFontCID::EmbedSubsetFont();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddUsedSubsettingGlyphs_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> sText, __zz_cib_AbiType_t<long> lStringLen) {
    __zz_cib_obj->::PoDoFo::PdfFontCID::AddUsedSubsettingGlyphs(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(sText),
      __zz_cib_::__zz_cib_FromAbiType<long>(lStringLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Init_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bEmbed, __zz_cib_AbiType_t<bool> bSubset) {
    __zz_cib_obj->::PoDoFo::PdfFontCID::Init(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bEmbed),
      __zz_cib_::__zz_cib_FromAbiType<bool>(bSubset)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EmbedFont_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pDescriptor) {
    __zz_cib_obj->::PoDoFo::PdfFontCID::EmbedFont(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pDescriptor)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl MaybeUpdateBaseFontKey_8(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfFontCID::MaybeUpdateBaseFontKey();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetBold_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bBold) {
    __zz_cib_obj->::PoDoFo::PdfFontCID::SetBold(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bBold)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetItalic_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bItalic) {
    __zz_cib_obj->::PoDoFo::PdfFontCID::SetItalic(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bItalic)
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfFontCID* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfElement* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class418(::PoDoFo::PdfFontCID* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfFontCID* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class418(::PoDoFo::PdfElement* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfFontCID*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfFont* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class430(::PoDoFo::PdfFontCID* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfFontCID* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class430(::PoDoFo::PdfFont* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfFontCID*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class431 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCID>::__zz_cib_Delete_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCID>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCID>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCID>::EmbedFont_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCID>::EmbedSubsetFont_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCID>::AddUsedSubsettingGlyphs_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCID>::Init_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCID>::EmbedFont_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCID>::MaybeUpdateBaseFontKey_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCID>::SetBold_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCID>::SetItalic_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCID>::__zz_cib_CastTo__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCID>::__zz_cib_CastFrom__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCID>::__zz_cib_CastTo__zz_cib_Class430),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCID>::__zz_cib_CastFrom__zz_cib_Class430),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontCID>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 16 };
  return &methodTable;
}
}}}
