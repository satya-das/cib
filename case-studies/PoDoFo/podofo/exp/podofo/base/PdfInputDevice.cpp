#include "podofo/base/PdfInputDevice.h"

namespace PoDoFo {

PoDoFo::PdfInputDevice::PdfInputDevice(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfInputDevice::PdfInputDevice(PdfInputDevice&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfInputDevice::PdfInputDevice(const ::PoDoFo::PdfInputDevice& __zz_cib_param0)
  : PoDoFo::PdfInputDevice(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfInputDevice::PdfInputDevice(const char* pszFilename)
  : PoDoFo::PdfInputDevice(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename))))
{}

PoDoFo::PdfInputDevice::PdfInputDevice(const char* pBuffer, size_t lLen)
  : PoDoFo::PdfInputDevice(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))))
{}

PoDoFo::PdfInputDevice::PdfInputDevice(const std::istream* pInStream)
  : PoDoFo::PdfInputDevice(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pInStream)>(std::move(pInStream))))
{}

PoDoFo::PdfInputDevice::~PdfInputDevice() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_4(
    h
  );
}

void PoDoFo::PdfInputDevice::Close() {
    __zz_cib_MyHelper::Close_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

std::streamoff PoDoFo::PdfInputDevice::Tell() const {
  return __zz_cib_::__zz_cib_FromAbiType<std::streamoff>(
    __zz_cib_MyHelper::Tell_6<__zz_cib_::__zz_cib_AbiType_t<std::streamoff>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int PoDoFo::PdfInputDevice::GetChar() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::GetChar_7<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int PoDoFo::PdfInputDevice::Look() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::Look_8<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfInputDevice::Seek(std::streamoff off, std::ios_base::seekdir dir) {
    __zz_cib_MyHelper::Seek_9<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(off)>(std::move(off)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dir)>(std::move(dir))
    );
  }

std::streamoff PoDoFo::PdfInputDevice::Read(char* pBuffer, std::streamsize lLen) {
  return __zz_cib_::__zz_cib_FromAbiType<std::streamoff>(
    __zz_cib_MyHelper::Read_10<__zz_cib_::__zz_cib_AbiType_t<std::streamoff>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    )
  );
}

bool PoDoFo::PdfInputDevice::Eof() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::Eof_11<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfInputDevice::Bad() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::Bad_12<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfInputDevice::Clear(std::ios_base::iostate state) const {
    __zz_cib_MyHelper::Clear_13<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(state)>(std::move(state))
    );
  }

bool PoDoFo::PdfInputDevice::IsSeekable() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsSeekable_14<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfInputDevice::SetSeekable(bool bIsSeekable) {
    __zz_cib_MyHelper::SetSeekable_15<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bIsSeekable)>(std::move(bIsSeekable))
    );
  }

PoDoFo::PdfInputDevice::PdfInputDevice()
  : PoDoFo::PdfInputDevice(__zz_cib_MyHelper::__zz_cib_New_16())
{}
}
