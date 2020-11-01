#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfRect.h"
#include "podofo/base/PdfReference.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfPage.h"
#include "podofo/doc/PdfPagesTree.h"
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
struct __zz_cib_Delegator<::PoDoFo::PdfPagesTree> : public ::PoDoFo::PdfPagesTree {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTree>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfPagesTree>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfPagesTree>;

  using ::PoDoFo::PdfPagesTree::PdfPagesTree;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::PoDoFo::PdfObject*> pPagesRoot) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pPagesRoot));
  }
  static void __zz_cib_decl __zz_cib_Delete_3(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetTotalNumberOfPages_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::PoDoFo::PdfPagesTree::GetTotalNumberOfPages()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfPage*> __zz_cib_decl GetPage_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nIndex) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfPage*>(
      __zz_cib_obj->::PoDoFo::PdfPagesTree::GetPage(
        __zz_cib_::__zz_cib_FromAbiType<int>(nIndex)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfPage*> __zz_cib_decl GetPage_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfReference&> ref) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfPage*>(
      __zz_cib_obj->::PoDoFo::PdfPagesTree::GetPage(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfReference&>(ref)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl InsertPage_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nAfterPageIndex, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pPage) {
    __zz_cib_obj->::PoDoFo::PdfPagesTree::InsertPage(
      __zz_cib_::__zz_cib_FromAbiType<int>(nAfterPageIndex),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pPage)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl InsertPage_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nAfterPageIndex, __zz_cib_AbiType_t<::PoDoFo::PdfPage*> pPage) {
    __zz_cib_obj->::PoDoFo::PdfPagesTree::InsertPage(
      __zz_cib_::__zz_cib_FromAbiType<int>(nAfterPageIndex),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(pPage)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl InsertPages_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nAfterPageIndex, __zz_cib_AbiType_t<const ::std::vector<::PoDoFo::PdfObject*>&> vecPages) {
    __zz_cib_obj->::PoDoFo::PdfPagesTree::InsertPages(
      __zz_cib_::__zz_cib_FromAbiType<int>(nAfterPageIndex),
      __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::PoDoFo::PdfObject*>&>(vecPages)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfPage*> __zz_cib_decl CreatePage_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rSize) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfPage*>(
      __zz_cib_obj->::PoDoFo::PdfPagesTree::CreatePage(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rSize)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl CreatePages_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::PoDoFo::PdfRect>&> vecSizes) {
    __zz_cib_obj->::PoDoFo::PdfPagesTree::CreatePages(
      __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::PoDoFo::PdfRect>&>(vecSizes)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfPage*> __zz_cib_decl InsertPage_12(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rSize, __zz_cib_AbiType_t<int> atIndex) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfPage*>(
      __zz_cib_obj->::PoDoFo::PdfPagesTree::InsertPage(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rSize),
        __zz_cib_::__zz_cib_FromAbiType<int>(atIndex)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DeletePage_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> inPageNumber) {
    __zz_cib_obj->::PoDoFo::PdfPagesTree::DeletePage(
      __zz_cib_::__zz_cib_FromAbiType<int>(inPageNumber)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ClearCache_14(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfPagesTree::ClearCache();
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfPagesTree* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfElement* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class418(::PoDoFo::PdfPagesTree* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfPagesTree* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class418(::PoDoFo::PdfElement* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfPagesTree*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class461 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTree>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTree>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTree>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTree>::__zz_cib_Delete_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTree>::GetTotalNumberOfPages_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTree>::GetPage_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTree>::GetPage_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTree>::InsertPage_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTree>::InsertPage_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTree>::InsertPages_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTree>::CreatePage_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTree>::CreatePages_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTree>::InsertPage_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTree>::DeletePage_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTree>::ClearCache_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTree>::__zz_cib_CastTo__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTree>::__zz_cib_CastFrom__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTree>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 18 };
  return &methodTable;
}
}}}
