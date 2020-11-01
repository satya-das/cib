#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfReference.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/base/PdfWriter.h"
#include "podofo/doc/PdfDocument.h"
#include "podofo/doc/PdfImage.h"
#include "podofo/doc/PdfPage.h"
#include "podofo/doc/PdfTilingPattern.h"

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
struct __zz_cib_Delegator<::PoDoFo::PdfTilingPattern> : public ::PoDoFo::PdfTilingPattern {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTilingPattern>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfTilingPattern>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfTilingPattern>;

  using ::PoDoFo::PdfTilingPattern::PdfTilingPattern;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> __zz_cib_decl GetIdentifier_2(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfName&>(
      __zz_cib_obj->::PoDoFo::PdfTilingPattern::GetIdentifier()
    );
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_3(__zz_cib_AbiType_t<::PoDoFo::EPdfTilingPatternType> eTilingType, __zz_cib_AbiType_t<double> strokeR, __zz_cib_AbiType_t<double> strokeG, __zz_cib_AbiType_t<double> strokeB, __zz_cib_AbiType_t<bool> doFill, __zz_cib_AbiType_t<double> fillR, __zz_cib_AbiType_t<double> fillG, __zz_cib_AbiType_t<double> fillB, __zz_cib_AbiType_t<double> offsetX, __zz_cib_AbiType_t<double> offsetY, __zz_cib_AbiType_t<::PoDoFo::PdfImage*> pImage, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfTilingPatternType>(eTilingType),
    __zz_cib_::__zz_cib_FromAbiType<double>(strokeR),
    __zz_cib_::__zz_cib_FromAbiType<double>(strokeG),
    __zz_cib_::__zz_cib_FromAbiType<double>(strokeB),
    __zz_cib_::__zz_cib_FromAbiType<bool>(doFill),
    __zz_cib_::__zz_cib_FromAbiType<double>(fillR),
    __zz_cib_::__zz_cib_FromAbiType<double>(fillG),
    __zz_cib_::__zz_cib_FromAbiType<double>(fillB),
    __zz_cib_::__zz_cib_FromAbiType<double>(offsetX),
    __zz_cib_::__zz_cib_FromAbiType<double>(offsetY),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfImage*>(pImage),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_4(__zz_cib_AbiType_t<::PoDoFo::EPdfTilingPatternType> eTilingType, __zz_cib_AbiType_t<double> strokeR, __zz_cib_AbiType_t<double> strokeG, __zz_cib_AbiType_t<double> strokeB, __zz_cib_AbiType_t<bool> doFill, __zz_cib_AbiType_t<double> fillR, __zz_cib_AbiType_t<double> fillG, __zz_cib_AbiType_t<double> fillB, __zz_cib_AbiType_t<double> offsetX, __zz_cib_AbiType_t<double> offsetY, __zz_cib_AbiType_t<::PoDoFo::PdfImage*> pImage, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfTilingPatternType>(eTilingType),
    __zz_cib_::__zz_cib_FromAbiType<double>(strokeR),
    __zz_cib_::__zz_cib_FromAbiType<double>(strokeG),
    __zz_cib_::__zz_cib_FromAbiType<double>(strokeB),
    __zz_cib_::__zz_cib_FromAbiType<bool>(doFill),
    __zz_cib_::__zz_cib_FromAbiType<double>(fillR),
    __zz_cib_::__zz_cib_FromAbiType<double>(fillG),
    __zz_cib_::__zz_cib_FromAbiType<double>(fillB),
    __zz_cib_::__zz_cib_FromAbiType<double>(offsetX),
    __zz_cib_::__zz_cib_FromAbiType<double>(offsetY),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfImage*>(pImage),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pParent));
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfTilingPattern* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfElement* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class418(::PoDoFo::PdfTilingPattern* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfTilingPattern* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class418(::PoDoFo::PdfElement* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfTilingPattern*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class477 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTilingPattern>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTilingPattern>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTilingPattern>::GetIdentifier_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTilingPattern>::__zz_cib_New_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTilingPattern>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTilingPattern>::__zz_cib_CastTo__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTilingPattern>::__zz_cib_CastFrom__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTilingPattern>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}}
