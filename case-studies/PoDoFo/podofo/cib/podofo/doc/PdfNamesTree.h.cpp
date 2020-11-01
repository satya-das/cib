#include "podofo/base/PdfDictionary.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfString.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfNamesTree.h"

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
struct __zz_cib_Delegator<::PoDoFo::PdfNamesTree> : public ::PoDoFo::PdfNamesTree {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfNamesTree>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfNamesTree>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfNamesTree>;

  using ::PoDoFo::PdfNamesTree::PdfNamesTree;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::PoDoFo::PdfObject*> pObject, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pCatalog) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pObject),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pCatalog));
  }
  static void __zz_cib_decl __zz_cib_Delete_3(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddValue_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> tree, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> key, __zz_cib_AbiType_t<const ::PoDoFo::PdfObject&> rValue) {
    __zz_cib_obj->::PoDoFo::PdfNamesTree::AddValue(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(tree),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(key),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject&>(rValue)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetValue_5(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> tree, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> key) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfNamesTree::GetValue(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(tree),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(key)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl HasValue_6(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> tree, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> key) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfNamesTree::HasValue(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(tree),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(key)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfNameLimits> __zz_cib_decl CheckLimits_7(__zz_cib_AbiType_t<const ::PoDoFo::PdfObject*> pObj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> key) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfNameLimits>(
      ::PoDoFo::PdfNamesTree::CheckLimits(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject*>(pObj),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(key)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ToDictionary_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> dictionary, __zz_cib_AbiType_t<::PoDoFo::PdfDictionary&> rDict) {
    __zz_cib_obj->::PoDoFo::PdfNamesTree::ToDictionary(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(dictionary),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDictionary&>(rDict)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetJavaScriptNode_9(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bCreate) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfNamesTree::GetJavaScriptNode(
        __zz_cib_::__zz_cib_FromAbiType<bool>(bCreate)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetDestsNode_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bCreate) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfNamesTree::GetDestsNode(
        __zz_cib_::__zz_cib_FromAbiType<bool>(bCreate)
      )
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfNamesTree* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfElement* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class418(::PoDoFo::PdfNamesTree* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfNamesTree* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class418(::PoDoFo::PdfElement* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfNamesTree*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class457 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfNamesTree>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfNamesTree>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfNamesTree>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfNamesTree>::__zz_cib_Delete_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfNamesTree>::AddValue_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfNamesTree>::GetValue_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfNamesTree>::HasValue_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfNamesTree>::CheckLimits_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfNamesTree>::ToDictionary_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfNamesTree>::GetJavaScriptNode_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfNamesTree>::GetDestsNode_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfNamesTree>::__zz_cib_CastTo__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfNamesTree>::__zz_cib_CastFrom__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfNamesTree>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 14 };
  return &methodTable;
}
}}}
