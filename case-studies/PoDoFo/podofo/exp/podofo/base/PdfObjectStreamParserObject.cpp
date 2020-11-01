#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfObjectStreamParserObject.h"
#include "podofo/base/PdfParserObject.h"
#include "podofo/base/PdfRefCountedBuffer.h"
#include "podofo/base/PdfVecObjects.h"
#include <vector>

namespace PoDoFo {

PoDoFo::PdfObjectStreamParserObject::PdfObjectStreamParserObject(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

PoDoFo::PdfObjectStreamParserObject::PdfObjectStreamParserObject(PdfObjectStreamParserObject&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfObjectStreamParserObject::PdfObjectStreamParserObject(const ::PoDoFo::PdfObjectStreamParserObject& __zz_cib_param0)
  : PoDoFo::PdfObjectStreamParserObject(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfObjectStreamParserObject::PdfObjectStreamParserObject(::PoDoFo::PdfParserObject* pParser, ::PoDoFo::PdfVecObjects* pVecObjects, const ::PoDoFo::PdfRefCountedBuffer& rBuffer)
  : PoDoFo::PdfObjectStreamParserObject(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pParser)>(std::move(pParser)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pVecObjects)>(std::move(pVecObjects)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rBuffer)>(rBuffer)))
{}

PoDoFo::PdfObjectStreamParserObject::~PdfObjectStreamParserObject() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

void PoDoFo::PdfObjectStreamParserObject::Parse(const ::std::vector<::PoDoFo::pdf_int64>& __zz_cib_param0) {
    __zz_cib_MyHelper::Parse_3<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)
    );
  }
}
