#include "podofo/base/PdfData.h"
#include "podofo/base/PdfOutputDevice.h"
#include "podofo/doc/PdfSignOutputDevice.h"

namespace PoDoFo {

PoDoFo::PdfSignOutputDevice::PdfSignOutputDevice(__zz_cib_AbiType h)
  : ::PoDoFo::PdfOutputDevice(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class386(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfSignOutputDevice::PdfSignOutputDevice(PdfSignOutputDevice&& rhs)
  : ::PoDoFo::PdfOutputDevice(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfSignOutputDevice::PdfSignOutputDevice(const ::PoDoFo::PdfSignOutputDevice& __zz_cib_param0)
  : PoDoFo::PdfSignOutputDevice(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfSignOutputDevice::PdfSignOutputDevice(::PoDoFo::PdfOutputDevice* pRealDevice)
  : PoDoFo::PdfSignOutputDevice(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pRealDevice)>(std::move(pRealDevice))))
{}

PoDoFo::PdfSignOutputDevice::PdfSignOutputDevice(const char* pszFilename)
  : PoDoFo::PdfSignOutputDevice(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename))))
{}

PoDoFo::PdfSignOutputDevice::~PdfSignOutputDevice() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_3(
    h
  );
}

void PoDoFo::PdfSignOutputDevice::SetSignatureSize(size_t lSignatureSize) {
    __zz_cib_MyHelper::SetSignatureSize_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lSignatureSize)>(std::move(lSignatureSize))
    );
  }

size_t PoDoFo::PdfSignOutputDevice::GetSignatureSize() const {
  return __zz_cib_::__zz_cib_FromAbiType<size_t>(
    __zz_cib_MyHelper::GetSignatureSize_5<__zz_cib_::__zz_cib_AbiType_t<size_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfData* PoDoFo::PdfSignOutputDevice::GetSignatureBeacon() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfData*>(
    __zz_cib_MyHelper::GetSignatureBeacon_6<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfData*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfSignOutputDevice::HasSignaturePosition() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::HasSignaturePosition_7<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfSignOutputDevice::AdjustByteRange() {
    __zz_cib_MyHelper::AdjustByteRange_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

size_t PoDoFo::PdfSignOutputDevice::ReadForSignature(char* pBuffer, size_t lLen) {
  return __zz_cib_::__zz_cib_FromAbiType<size_t>(
    __zz_cib_MyHelper::ReadForSignature_9<__zz_cib_::__zz_cib_AbiType_t<size_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    )
  );
}

void PoDoFo::PdfSignOutputDevice::SetSignature(const ::PoDoFo::PdfData& sigData) {
    __zz_cib_MyHelper::SetSignature_10<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sigData)>(sigData)
    );
  }

size_t PoDoFo::PdfSignOutputDevice::GetLength() const {
  return __zz_cib_::__zz_cib_FromAbiType<size_t>(
    __zz_cib_MyHelper::GetLength_11<__zz_cib_::__zz_cib_AbiType_t<size_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfSignOutputDevice::Print(const char* pszFormat) {
    __zz_cib_MyHelper::Print_12<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFormat)>(std::move(pszFormat))
    );
  }

void PoDoFo::PdfSignOutputDevice::Write(const char* pBuffer, size_t lLen) {
    __zz_cib_MyHelper::Write_13<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    );
  }

size_t PoDoFo::PdfSignOutputDevice::Read(char* pBuffer, size_t lLen) {
  return __zz_cib_::__zz_cib_FromAbiType<size_t>(
    __zz_cib_MyHelper::Read_14<__zz_cib_::__zz_cib_AbiType_t<size_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    )
  );
}

void PoDoFo::PdfSignOutputDevice::Seek(size_t offset) {
    __zz_cib_MyHelper::Seek_15<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(offset)>(std::move(offset))
    );
  }

size_t PoDoFo::PdfSignOutputDevice::Tell() const {
  return __zz_cib_::__zz_cib_FromAbiType<size_t>(
    __zz_cib_MyHelper::Tell_16<__zz_cib_::__zz_cib_AbiType_t<size_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfSignOutputDevice::Flush() {
    __zz_cib_MyHelper::Flush_17<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }
}
