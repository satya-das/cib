#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfFileStream.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfOutputDevice.h"
#include "podofo/base/PdfOutputStream.h"
#include <vector>

namespace PoDoFo {

PoDoFo::PdfFileStream::PdfFileStream(__zz_cib_AbiType h)
  : ::PoDoFo::PdfStream(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class400(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfFileStream::PdfFileStream(PdfFileStream&& rhs)
  : ::PoDoFo::PdfStream(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfFileStream::PdfFileStream(const ::PoDoFo::PdfFileStream& __zz_cib_param0)
  : PoDoFo::PdfFileStream(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfFileStream::PdfFileStream(::PoDoFo::PdfObject* pParent, ::PoDoFo::PdfOutputDevice* pDevice)
  : PoDoFo::PdfFileStream(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice))))
{}

PoDoFo::PdfFileStream::~PdfFileStream() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

void PoDoFo::PdfFileStream::SetEncrypted(::PoDoFo::PdfEncrypt* pEncrypt) {
    __zz_cib_MyHelper::SetEncrypted_3<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt))
    );
  }

void PoDoFo::PdfFileStream::Write(::PoDoFo::PdfOutputDevice* pDevice, ::PoDoFo::PdfEncrypt* pEncrypt) {
    __zz_cib_MyHelper::Write_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt))
    );
  }

void PoDoFo::PdfFileStream::GetCopy(char** pBuffer, ::PoDoFo::pdf_long* lLen) const {
    __zz_cib_MyHelper::GetCopy_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    );
  }

void PoDoFo::PdfFileStream::GetCopy(::PoDoFo::PdfOutputStream* pStream) const {
    __zz_cib_MyHelper::GetCopy_6<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pStream)>(std::move(pStream))
    );
  }

::PoDoFo::pdf_long PoDoFo::PdfFileStream::GetLength() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::GetLength_7<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const char* PoDoFo::PdfFileStream::GetInternalBuffer() const {
  return __zz_cib_::__zz_cib_FromAbiType<const char*>(
    __zz_cib_MyHelper::GetInternalBuffer_8<__zz_cib_::__zz_cib_AbiType_t<const char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::pdf_long PoDoFo::PdfFileStream::GetInternalBufferSize() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::GetInternalBufferSize_9<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfFileStream::BeginAppendImpl(const ::std::vector<::PoDoFo::EPdfFilter>& vecFilters) {
    __zz_cib_MyHelper::BeginAppendImpl_10<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(vecFilters)>(vecFilters)
    );
  }

void PoDoFo::PdfFileStream::AppendImpl(const char* pszString, size_t lLen) {
    __zz_cib_MyHelper::AppendImpl_11<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszString)>(std::move(pszString)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    );
  }

void PoDoFo::PdfFileStream::EndAppendImpl() {
    __zz_cib_MyHelper::EndAppendImpl_12<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }
}
