#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfHintStream.h"
#include "podofo/doc/PdfPagesTree.h"

namespace PoDoFo {
namespace NonPublic {

PoDoFo::NonPublic::PdfHintStream::PdfHintStream(__zz_cib_AbiType h)
  : ::PoDoFo::PdfElement(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class418(h))
  , __zz_cib_h_(h)
{}

PoDoFo::NonPublic::PdfHintStream::PdfHintStream(PdfHintStream&& rhs)
  : ::PoDoFo::PdfElement(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::NonPublic::PdfHintStream::PdfHintStream(const ::PoDoFo::NonPublic::PdfHintStream& __zz_cib_param0)
  : PoDoFo::NonPublic::PdfHintStream(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::NonPublic::PdfHintStream::PdfHintStream(::PoDoFo::PdfVecObjects* pParent, ::PoDoFo::PdfPagesTree* pPagesTree)
  : PoDoFo::NonPublic::PdfHintStream(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pPagesTree)>(std::move(pPagesTree))))
{}

PoDoFo::NonPublic::PdfHintStream::~PdfHintStream() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

void PoDoFo::NonPublic::PdfHintStream::WriteUInt16(::PoDoFo::pdf_uint16 val) {
    __zz_cib_MyHelper::WriteUInt16_3<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(val)>(std::move(val))
    );
  }

void PoDoFo::NonPublic::PdfHintStream::WriteUInt32(::PoDoFo::pdf_uint32 __zz_cib_param0) {
    __zz_cib_MyHelper::WriteUInt32_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(std::move(__zz_cib_param0))
    );
  }
}}
