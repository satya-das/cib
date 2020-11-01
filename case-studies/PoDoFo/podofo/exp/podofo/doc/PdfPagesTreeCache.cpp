#include "podofo/doc/PdfPage.h"
#include "podofo/doc/PdfPagesTreeCache.h"
#include <vector>

namespace PoDoFo {

PoDoFo::PdfPagesTreeCache::PdfPagesTreeCache(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

PoDoFo::PdfPagesTreeCache::PdfPagesTreeCache(PdfPagesTreeCache&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfPagesTreeCache::PdfPagesTreeCache(const ::PoDoFo::PdfPagesTreeCache& __zz_cib_param0)
  : PoDoFo::PdfPagesTreeCache(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfPagesTreeCache::PdfPagesTreeCache(int nInitialSize)
  : PoDoFo::PdfPagesTreeCache(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(nInitialSize)>(std::move(nInitialSize))))
{}

PoDoFo::PdfPagesTreeCache::~PdfPagesTreeCache() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

::PoDoFo::PdfPage* PoDoFo::PdfPagesTreeCache::GetPage(int nIndex) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(
    __zz_cib_MyHelper::GetPage_3<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfPage*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nIndex)>(std::move(nIndex))
    )
  );
}

void PoDoFo::PdfPagesTreeCache::AddPageObject(int nIndex, ::PoDoFo::PdfPage* pPage) {
    __zz_cib_MyHelper::AddPageObject_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nIndex)>(std::move(nIndex)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage))
    );
  }

void PoDoFo::PdfPagesTreeCache::AddPageObjects(int nIndex, ::std::vector<::PoDoFo::PdfPage*> vecPages) {
    __zz_cib_MyHelper::AddPageObjects_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nIndex)>(std::move(nIndex)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(vecPages)>(std::move(vecPages))
    );
  }

void PoDoFo::PdfPagesTreeCache::InsertPage(int nAfterPageIndex) {
    __zz_cib_MyHelper::InsertPage_6<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nAfterPageIndex)>(std::move(nAfterPageIndex))
    );
  }

void PoDoFo::PdfPagesTreeCache::InsertPages(int nAfterPageIndex, int nCount) {
    __zz_cib_MyHelper::InsertPages_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nAfterPageIndex)>(std::move(nAfterPageIndex)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nCount)>(std::move(nCount))
    );
  }

void PoDoFo::PdfPagesTreeCache::DeletePage(int nIndex) {
    __zz_cib_MyHelper::DeletePage_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nIndex)>(std::move(nIndex))
    );
  }

void PoDoFo::PdfPagesTreeCache::ClearCache() {
    __zz_cib_MyHelper::ClearCache_9<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }
}
