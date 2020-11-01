#include "podofo/doc/PdfPage.h"
#include "podofo/doc/PdfPagesTreeCache.h"
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
struct __zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache> : public ::PoDoFo::PdfPagesTreeCache {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfPagesTreeCache::PdfPagesTreeCache;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<int> nInitialSize) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<int>(nInitialSize));
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfPage*> __zz_cib_decl GetPage_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nIndex) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfPage*>(
      __zz_cib_obj->::PoDoFo::PdfPagesTreeCache::GetPage(
        __zz_cib_::__zz_cib_FromAbiType<int>(nIndex)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddPageObject_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nIndex, __zz_cib_AbiType_t<::PoDoFo::PdfPage*> pPage) {
    __zz_cib_obj->::PoDoFo::PdfPagesTreeCache::AddPageObject(
      __zz_cib_::__zz_cib_FromAbiType<int>(nIndex),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(pPage)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddPageObjects_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nIndex, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>> vecPages) {
    __zz_cib_obj->::PoDoFo::PdfPagesTreeCache::AddPageObjects(
      __zz_cib_::__zz_cib_FromAbiType<int>(nIndex),
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfPage*>>(vecPages)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl InsertPage_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nAfterPageIndex) {
    __zz_cib_obj->::PoDoFo::PdfPagesTreeCache::InsertPage(
      __zz_cib_::__zz_cib_FromAbiType<int>(nAfterPageIndex)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl InsertPages_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nAfterPageIndex, __zz_cib_AbiType_t<int> nCount) {
    __zz_cib_obj->::PoDoFo::PdfPagesTreeCache::InsertPages(
      __zz_cib_::__zz_cib_FromAbiType<int>(nAfterPageIndex),
      __zz_cib_::__zz_cib_FromAbiType<int>(nCount)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DeletePage_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nIndex) {
    __zz_cib_obj->::PoDoFo::PdfPagesTreeCache::DeletePage(
      __zz_cib_::__zz_cib_FromAbiType<int>(nIndex)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ClearCache_9(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfPagesTreeCache::ClearCache();
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class462 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache>::GetPage_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache>::AddPageObject_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache>::AddPageObjects_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache>::InsertPage_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache>::InsertPages_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache>::DeletePage_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPagesTreeCache>::ClearCache_9)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 10 };
  return &methodTable;
}
}}}
