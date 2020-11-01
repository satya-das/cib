#include "podofo/base/PdfRefCountedBuffer.h"

namespace PoDoFo {

PoDoFo::PdfRefCountedBuffer::PdfRefCountedBuffer(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfRefCountedBuffer::PdfRefCountedBuffer(PdfRefCountedBuffer&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfRefCountedBuffer::PdfRefCountedBuffer()
  : PoDoFo::PdfRefCountedBuffer(__zz_cib_MyHelper::__zz_cib_New_0())
{}

PoDoFo::PdfRefCountedBuffer::PdfRefCountedBuffer(char* pBuffer, size_t lSize)
  : PoDoFo::PdfRefCountedBuffer(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lSize)>(std::move(lSize))))
{}

PoDoFo::PdfRefCountedBuffer::PdfRefCountedBuffer(size_t lSize)
  : PoDoFo::PdfRefCountedBuffer(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(lSize)>(std::move(lSize))))
{}

PoDoFo::PdfRefCountedBuffer::PdfRefCountedBuffer(const ::PoDoFo::PdfRefCountedBuffer& rhs)
  : PoDoFo::PdfRefCountedBuffer(__zz_cib_MyHelper::__zz_cib_Copy_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
{}

PoDoFo::PdfRefCountedBuffer::~PdfRefCountedBuffer() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_4(
    h
  );
}

char* PoDoFo::PdfRefCountedBuffer::GetBuffer() const {
  return __zz_cib_::__zz_cib_FromAbiType<char*>(
    __zz_cib_MyHelper::GetBuffer_5<__zz_cib_::__zz_cib_AbiType_t<char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

size_t PoDoFo::PdfRefCountedBuffer::GetSize() const {
  return __zz_cib_::__zz_cib_FromAbiType<size_t>(
    __zz_cib_MyHelper::GetSize_6<__zz_cib_::__zz_cib_AbiType_t<size_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfRefCountedBuffer::Resize(size_t lSize) {
    __zz_cib_MyHelper::Resize_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lSize)>(std::move(lSize))
    );
  }

const ::PoDoFo::PdfRefCountedBuffer& PoDoFo::PdfRefCountedBuffer::operator=(const ::PoDoFo::PdfRefCountedBuffer& rhs) {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRefCountedBuffer&>(
    __zz_cib_MyHelper::__zz_cib_OperatorEqual_8<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfRefCountedBuffer&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

void PoDoFo::PdfRefCountedBuffer::SetTakePossesion(bool bTakePossession) {
    __zz_cib_MyHelper::SetTakePossesion_9<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bTakePossession)>(std::move(bTakePossession))
    );
  }

bool PoDoFo::PdfRefCountedBuffer::TakePossesion() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::TakePossesion_10<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfRefCountedBuffer::operator==(const ::PoDoFo::PdfRefCountedBuffer& rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorCmpEq_11<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

bool PoDoFo::PdfRefCountedBuffer::operator<(const ::PoDoFo::PdfRefCountedBuffer& rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorLT_12<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

bool PoDoFo::PdfRefCountedBuffer::operator>(const ::PoDoFo::PdfRefCountedBuffer& rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorGT_13<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}
}
