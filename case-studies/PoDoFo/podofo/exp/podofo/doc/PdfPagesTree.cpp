#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfRect.h"
#include "podofo/base/PdfReference.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfPage.h"
#include "podofo/doc/PdfPagesTree.h"
#include <vector>

namespace PoDoFo {

PoDoFo::PdfPagesTree::PdfPagesTree(__zz_cib_AbiType h)
  : ::PoDoFo::PdfElement(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class418(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfPagesTree::PdfPagesTree(PdfPagesTree&& rhs)
  : ::PoDoFo::PdfElement(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfPagesTree::PdfPagesTree(const ::PoDoFo::PdfPagesTree& __zz_cib_param0)
  : PoDoFo::PdfPagesTree(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfPagesTree::PdfPagesTree(::PoDoFo::PdfVecObjects* pParent)
  : PoDoFo::PdfPagesTree(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfPagesTree::PdfPagesTree(::PoDoFo::PdfObject* pPagesRoot)
  : PoDoFo::PdfPagesTree(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pPagesRoot)>(std::move(pPagesRoot))))
{}

PoDoFo::PdfPagesTree::~PdfPagesTree() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_3(
    h
  );
}

int PoDoFo::PdfPagesTree::GetTotalNumberOfPages() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::GetTotalNumberOfPages_4<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfPage* PoDoFo::PdfPagesTree::GetPage(int nIndex) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(
    __zz_cib_MyHelper::GetPage_5<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfPage*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nIndex)>(std::move(nIndex))
    )
  );
}

::PoDoFo::PdfPage* PoDoFo::PdfPagesTree::GetPage(const ::PoDoFo::PdfReference& ref) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(
    __zz_cib_MyHelper::GetPage_6<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfPage*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(ref)>(ref)
    )
  );
}

void PoDoFo::PdfPagesTree::InsertPage(int nAfterPageIndex, ::PoDoFo::PdfObject* pPage) {
    __zz_cib_MyHelper::InsertPage_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nAfterPageIndex)>(std::move(nAfterPageIndex)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage))
    );
  }

void PoDoFo::PdfPagesTree::InsertPage(int nAfterPageIndex, ::PoDoFo::PdfPage* pPage) {
    __zz_cib_MyHelper::InsertPage_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nAfterPageIndex)>(std::move(nAfterPageIndex)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage))
    );
  }

void PoDoFo::PdfPagesTree::InsertPages(int nAfterPageIndex, const ::std::vector<::PoDoFo::PdfObject*>& vecPages) {
    __zz_cib_MyHelper::InsertPages_9<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nAfterPageIndex)>(std::move(nAfterPageIndex)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(vecPages)>(vecPages)
    );
  }

::PoDoFo::PdfPage* PoDoFo::PdfPagesTree::CreatePage(const ::PoDoFo::PdfRect& rSize) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(
    __zz_cib_MyHelper::CreatePage_10<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfPage*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rSize)>(rSize)
    )
  );
}

void PoDoFo::PdfPagesTree::CreatePages(const ::std::vector<::PoDoFo::PdfRect>& vecSizes) {
    __zz_cib_MyHelper::CreatePages_11<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(vecSizes)>(vecSizes)
    );
  }

::PoDoFo::PdfPage* PoDoFo::PdfPagesTree::InsertPage(const ::PoDoFo::PdfRect& rSize, int atIndex) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(
    __zz_cib_MyHelper::InsertPage_12<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfPage*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rSize)>(rSize),
      __zz_cib_::__zz_cib_ToAbiType<decltype(atIndex)>(std::move(atIndex))
    )
  );
}

void PoDoFo::PdfPagesTree::DeletePage(int inPageNumber) {
    __zz_cib_MyHelper::DeletePage_13<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inPageNumber)>(std::move(inPageNumber))
    );
  }

void PoDoFo::PdfPagesTree::ClearCache() {
    __zz_cib_MyHelper::ClearCache_14<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }
}
