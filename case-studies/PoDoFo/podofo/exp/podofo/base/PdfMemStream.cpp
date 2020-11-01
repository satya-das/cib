#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfMemStream.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfOutputDevice.h"
#include "podofo/base/PdfOutputStream.h"
#include "podofo/base/PdfStream.h"
#include "podofo/base/PdfVecObjects.h"
#include <vector>

namespace PoDoFo {

PoDoFo::PdfMemStream::PdfMemStream(__zz_cib_AbiType h)
  : ::PoDoFo::PdfStream(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class400(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfMemStream::PdfMemStream(PdfMemStream&& rhs)
  : ::PoDoFo::PdfStream(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfMemStream::PdfMemStream(::PoDoFo::PdfObject* pParent)
  : PoDoFo::PdfMemStream(__zz_cib_MyHelper::__zz_cib_New_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfMemStream::PdfMemStream(const ::PoDoFo::PdfMemStream& rhs)
  : PoDoFo::PdfMemStream(__zz_cib_MyHelper::__zz_cib_Copy_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
{}

PoDoFo::PdfMemStream::~PdfMemStream() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

void PoDoFo::PdfMemStream::Write(::PoDoFo::PdfOutputDevice* pDevice, ::PoDoFo::PdfEncrypt* pEncrypt) {
    __zz_cib_MyHelper::Write_3<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt))
    );
  }

void PoDoFo::PdfMemStream::GetCopy(char** pBuffer, ::PoDoFo::pdf_long* lLen) const {
    __zz_cib_MyHelper::GetCopy_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    );
  }

void PoDoFo::PdfMemStream::GetCopy(::PoDoFo::PdfOutputStream* pStream) const {
    __zz_cib_MyHelper::GetCopy_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pStream)>(std::move(pStream))
    );
  }

const char* PoDoFo::PdfMemStream::Get() const {
  return __zz_cib_::__zz_cib_FromAbiType<const char*>(
    __zz_cib_MyHelper::Get_6<__zz_cib_::__zz_cib_AbiType_t<const char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::pdf_long PoDoFo::PdfMemStream::GetLength() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::GetLength_7<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfMemStream::FlateCompress() {
    __zz_cib_MyHelper::FlateCompress_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfMemStream::Uncompress() {
    __zz_cib_MyHelper::Uncompress_9<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

const ::PoDoFo::PdfStream& PoDoFo::PdfMemStream::operator=(const ::PoDoFo::PdfStream& rhs) {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfStream&>(
    __zz_cib_MyHelper::__zz_cib_OperatorEqual_10<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfStream&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

const char* PoDoFo::PdfMemStream::GetInternalBuffer() const {
  return __zz_cib_::__zz_cib_FromAbiType<const char*>(
    __zz_cib_MyHelper::GetInternalBuffer_11<__zz_cib_::__zz_cib_AbiType_t<const char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::pdf_long PoDoFo::PdfMemStream::GetInternalBufferSize() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::GetInternalBufferSize_12<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfMemStream::BeginAppendImpl(const ::std::vector<::PoDoFo::EPdfFilter>& vecFilters) {
    __zz_cib_MyHelper::BeginAppendImpl_13<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(vecFilters)>(vecFilters)
    );
  }

void PoDoFo::PdfMemStream::AppendImpl(const char* pszString, size_t lLen) {
    __zz_cib_MyHelper::AppendImpl_14<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszString)>(std::move(pszString)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    );
  }

void PoDoFo::PdfMemStream::EndAppendImpl() {
    __zz_cib_MyHelper::EndAppendImpl_15<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }
}
