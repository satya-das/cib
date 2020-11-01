#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfFontMetrics.h"
#include "podofo/doc/PdfFontType3.h"

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
struct __zz_cib_Delegator<::PoDoFo::PdfFontType3> : public ::PoDoFo::PdfFontType3 {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontType3>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfFontType3>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfFontType3>;

  using ::PoDoFo::PdfFontType3::PdfFontType3;

  static void __zz_cib_decl __zz_cib_Delete_0(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::PoDoFo::PdfFontMetrics*> pMetrics, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding* const> pEncoding, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent, __zz_cib_AbiType_t<bool> bEmbed) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFontMetrics*>(pMetrics),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding* const>(pEncoding),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent),
    __zz_cib_::__zz_cib_FromAbiType<bool>(bEmbed));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::PoDoFo::PdfFontMetrics*> pMetrics, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding* const> pEncoding, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pObject) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFontMetrics*>(pMetrics),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding* const>(pEncoding),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pObject));
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EmbedFontFile_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pDescriptor) {
    __zz_cib_obj->::PoDoFo::PdfFontType3::EmbedFontFile(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pDescriptor)
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfFontType3* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfElement* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class418(::PoDoFo::PdfFontType3* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfFontType3* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class418(::PoDoFo::PdfElement* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfFontType3*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfFont* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class430(::PoDoFo::PdfFontType3* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfFontType3* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class430(::PoDoFo::PdfFont* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfFontType3*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfFontSimple* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class441(::PoDoFo::PdfFontType3* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfFontType3* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class441(::PoDoFo::PdfFontSimple* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfFontType3*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class447 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontType3>::__zz_cib_Delete_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontType3>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontType3>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontType3>::EmbedFontFile_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontType3>::__zz_cib_CastTo__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontType3>::__zz_cib_CastFrom__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontType3>::__zz_cib_CastTo__zz_cib_Class430),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontType3>::__zz_cib_CastFrom__zz_cib_Class430),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontType3>::__zz_cib_CastTo__zz_cib_Class441),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontType3>::__zz_cib_CastFrom__zz_cib_Class441),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontType3>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 11 };
  return &methodTable;
}
}}}
