#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfContents.h"
#include "podofo/doc/PdfDocument.h"
#include "podofo/doc/PdfPage.h"

namespace PoDoFo {

PoDoFo::PdfContents::PdfContents(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

PoDoFo::PdfContents::PdfContents(PdfContents&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfContents::PdfContents(const ::PoDoFo::PdfContents& __zz_cib_param0)
  : PoDoFo::PdfContents(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfContents::PdfContents(::PoDoFo::PdfDocument* pParent)
  : PoDoFo::PdfContents(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfContents::PdfContents(::PoDoFo::PdfVecObjects* pParent)
  : PoDoFo::PdfContents(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfContents::PdfContents(::PoDoFo::PdfObject* inObj)
  : PoDoFo::PdfContents(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(inObj)>(std::move(inObj))))
{}

PoDoFo::PdfContents::PdfContents(::PoDoFo::PdfPage* pParent)
  : PoDoFo::PdfContents(__zz_cib_MyHelper::__zz_cib_New_4(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfContents::~PdfContents() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_5(
    h
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfContents::GetContents() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetContents_6<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfContents::GetContentsForAppending() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetContentsForAppending_7<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
