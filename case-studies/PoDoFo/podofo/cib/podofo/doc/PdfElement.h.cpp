#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfDocument.h"
#include "podofo/doc/PdfElement.h"
#include "podofo/doc/PdfStreamedDocument.h"

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
struct __zz_cib_Delegator<::PoDoFo::PdfElement> : public ::PoDoFo::PdfElement {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfElement>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfElement>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfElement>;

  using ::PoDoFo::PdfElement::PdfElement;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetObject_2(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfElement::GetObject()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfObject*> __zz_cib_decl GetObject_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfElement::GetObject()
    );
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_4() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_5(__zz_cib_AbiType_t<const char*> pszType, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszType),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_6(__zz_cib_AbiType_t<const char*> pszType, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszType),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_7(__zz_cib_AbiType_t<const char*> pszType, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pObject) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszType),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pObject));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_8(__zz_cib_AbiType_t<::PoDoFo::EPdfDataType> eExpectedDataType, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pObject) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfDataType>(eExpectedDataType),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pObject));
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl TypeNameForIndex_9(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> i, __zz_cib_AbiType_t<const char**> ppTypes, __zz_cib_AbiType_t<long> lLen) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->::PoDoFo::PdfElement::TypeNameForIndex(
        __zz_cib_::__zz_cib_FromAbiType<int>(i),
        __zz_cib_::__zz_cib_FromAbiType<const char**>(ppTypes),
        __zz_cib_::__zz_cib_FromAbiType<long>(lLen)
      )
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl TypeNameToIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszType, __zz_cib_AbiType_t<const char**> ppTypes, __zz_cib_AbiType_t<long> lLen, __zz_cib_AbiType_t<int> nUnknownValue) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::PoDoFo::PdfElement::TypeNameToIndex(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszType),
        __zz_cib_::__zz_cib_FromAbiType<const char**>(ppTypes),
        __zz_cib_::__zz_cib_FromAbiType<long>(lLen),
        __zz_cib_::__zz_cib_FromAbiType<int>(nUnknownValue)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl CreateObject_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszType) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfElement::CreateObject(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszType)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetNonConstObject_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfElement::GetNonConstObject()
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfElement* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class418 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfElement>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfElement>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfElement>::GetObject_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfElement>::GetObject_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfElement>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfElement>::__zz_cib_New_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfElement>::__zz_cib_New_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfElement>::__zz_cib_New_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfElement>::__zz_cib_New_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfElement>::TypeNameForIndex_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfElement>::TypeNameToIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfElement>::CreateObject_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfElement>::GetNonConstObject_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfElement>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 14 };
  return &methodTable;
}
}}}
