#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfParser.h"
#include "podofo/base/PdfParserObject.h"
#include "podofo/base/PdfRefCountedBuffer.h"
#include "podofo/base/PdfRefCountedInputDevice.h"
#include "podofo/base/PdfVecObjects.h"

namespace PoDoFo {

PoDoFo::PdfParserObject::PdfParserObject(__zz_cib_AbiType h)
  : ::PoDoFo::PdfObject(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class384(h))
  , ::PoDoFo::PdfTokenizer(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class402(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfParserObject::PdfParserObject(PdfParserObject&& rhs)
  : ::PoDoFo::PdfObject(std::move(rhs))
  , ::PoDoFo::PdfTokenizer(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfParserObject::PdfParserObject(::PoDoFo::PdfVecObjects* pCreator, const ::PoDoFo::PdfRefCountedInputDevice& rDevice, const ::PoDoFo::PdfRefCountedBuffer& rBuffer, ::PoDoFo::pdf_long lOffset)
  : PoDoFo::PdfParserObject(__zz_cib_MyHelper::__zz_cib_New_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pCreator)>(std::move(pCreator)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rDevice)>(rDevice),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rBuffer)>(rBuffer),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lOffset)>(std::move(lOffset))))
{}

PoDoFo::PdfParserObject::PdfParserObject(const ::PoDoFo::PdfRefCountedBuffer& rBuffer)
  : PoDoFo::PdfParserObject(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rBuffer)>(rBuffer)))
{}

PoDoFo::PdfParserObject::~PdfParserObject() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

void PoDoFo::PdfParserObject::ParseFile(::PoDoFo::PdfEncrypt* pEncrypt, bool bIsTrailer) {
    __zz_cib_MyHelper::ParseFile_3<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bIsTrailer)>(std::move(bIsTrailer))
    );
  }

bool PoDoFo::PdfParserObject::HasStreamToParse() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::HasStreamToParse_4<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfParserObject::IsLoadOnDemand() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsLoadOnDemand_5<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfParserObject::SetLoadOnDemand(bool bDelayed) {
    __zz_cib_MyHelper::SetLoadOnDemand_6<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bDelayed)>(std::move(bDelayed))
    );
  }

void PoDoFo::PdfParserObject::SetObjectNumber(unsigned int nObjNo) {
    __zz_cib_MyHelper::SetObjectNumber_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nObjNo)>(std::move(nObjNo))
    );
  }

void PoDoFo::PdfParserObject::FreeObjectMemory(bool bForce) {
    __zz_cib_MyHelper::FreeObjectMemory_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bForce)>(std::move(bForce))
    );
  }

::PoDoFo::pdf_int64 PoDoFo::PdfParserObject::GetOffset() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_int64>(
    __zz_cib_MyHelper::GetOffset_9<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_int64>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfParserObject::DelayedLoadImpl() {
    __zz_cib_MyHelper::DelayedLoadImpl_10<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfParserObject::DelayedStreamLoadImpl() {
    __zz_cib_MyHelper::DelayedStreamLoadImpl_11<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfParserObject::ParseStream() {
    __zz_cib_MyHelper::ParseStream_12<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }
}
