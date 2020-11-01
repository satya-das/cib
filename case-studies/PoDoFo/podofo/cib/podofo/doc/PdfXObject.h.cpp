#include "podofo/base/PdfDictionary.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfRect.h"
#include "podofo/base/PdfReference.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfDocument.h"
#include "podofo/doc/PdfMemDocument.h"
#include "podofo/doc/PdfXObject.h"

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
struct __zz_cib_Delegator<::PoDoFo::PdfXObject> : public ::PoDoFo::PdfXObject {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfXObject>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfXObject>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfXObject>;

  using ::PoDoFo::PdfXObject::PdfXObject;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pParent, __zz_cib_AbiType_t<const char*> pszPrefix, __zz_cib_AbiType_t<bool> bWithoutObjNum) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pParent),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszPrefix),
    __zz_cib_::__zz_cib_FromAbiType<bool>(bWithoutObjNum));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent, __zz_cib_AbiType_t<const char*> pszPrefix) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszPrefix));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_3(__zz_cib_AbiType_t<const ::PoDoFo::PdfMemDocument&> rSourceDoc, __zz_cib_AbiType_t<int> nPage, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pParent, __zz_cib_AbiType_t<const char*> pszPrefix, __zz_cib_AbiType_t<bool> bUseTrimBox) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfMemDocument&>(rSourceDoc),
    __zz_cib_::__zz_cib_FromAbiType<int>(nPage),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pParent),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszPrefix),
    __zz_cib_::__zz_cib_FromAbiType<bool>(bUseTrimBox));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_4(__zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pDoc, __zz_cib_AbiType_t<int> nPage, __zz_cib_AbiType_t<const char*> pszPrefix, __zz_cib_AbiType_t<bool> bUseTrimBox) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pDoc),
    __zz_cib_::__zz_cib_FromAbiType<int>(nPage),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszPrefix),
    __zz_cib_::__zz_cib_FromAbiType<bool>(bUseTrimBox));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_5(__zz_cib_AbiType_t<::PoDoFo::PdfObject*> pObject) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pObject));
  }
  static void __zz_cib_decl __zz_cib_Delete_6(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetContents_7(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfXObject::GetContents()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetContentsForAppending_8(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfXObject::GetContentsForAppending()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetResources_9(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfXObject::GetResources()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfRect> __zz_cib_decl GetPageSize_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfRect>(
      __zz_cib_obj->::PoDoFo::PdfXObject::GetPageSize()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> __zz_cib_decl GetIdentifier_11(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfName&>(
      __zz_cib_obj->::PoDoFo::PdfXObject::GetIdentifier()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfReference&> __zz_cib_decl GetObjectReference_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfReference&>(
      __zz_cib_obj->::PoDoFo::PdfXObject::GetObjectReference()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl InitXObject_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect, __zz_cib_AbiType_t<const char*> pszPrefix) {
    __zz_cib_obj->::PoDoFo::PdfXObject::InitXObject(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect),
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszPrefix)
    );
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_14(__zz_cib_AbiType_t<const char*> pszSubType, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pParent, __zz_cib_AbiType_t<const char*> pszPrefix) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszSubType),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pParent),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszPrefix));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_15(__zz_cib_AbiType_t<const char*> pszSubType, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent, __zz_cib_AbiType_t<const char*> pszPrefix) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszSubType),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszPrefix));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_16(__zz_cib_AbiType_t<const char*> pszSubType, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pObject) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszSubType),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pObject));
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfXObject* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfElement* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class418(::PoDoFo::PdfXObject* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfXObject* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class418(::PoDoFo::PdfElement* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfXObject*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfCanvas* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class335(::PoDoFo::PdfXObject* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfXObject* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class335(::PoDoFo::PdfCanvas* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfXObject*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class478 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfXObject>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfXObject>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfXObject>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfXObject>::__zz_cib_New_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfXObject>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfXObject>::__zz_cib_New_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfXObject>::__zz_cib_Delete_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfXObject>::GetContents_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfXObject>::GetContentsForAppending_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfXObject>::GetResources_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfXObject>::GetPageSize_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfXObject>::GetIdentifier_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfXObject>::GetObjectReference_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfXObject>::InitXObject_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfXObject>::__zz_cib_New_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfXObject>::__zz_cib_New_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfXObject>::__zz_cib_New_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfXObject>::__zz_cib_CastTo__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfXObject>::__zz_cib_CastFrom__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfXObject>::__zz_cib_CastTo__zz_cib_Class335),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfXObject>::__zz_cib_CastFrom__zz_cib_Class335),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfXObject>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
