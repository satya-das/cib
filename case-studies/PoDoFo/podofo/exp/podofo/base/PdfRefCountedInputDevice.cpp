#include "podofo/base/PdfInputDevice.h"
#include "podofo/base/PdfRefCountedInputDevice.h"

namespace PoDoFo {

PoDoFo::PdfRefCountedInputDevice::PdfRefCountedInputDevice(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfRefCountedInputDevice::PdfRefCountedInputDevice(PdfRefCountedInputDevice&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfRefCountedInputDevice::PdfRefCountedInputDevice()
  : PoDoFo::PdfRefCountedInputDevice(__zz_cib_MyHelper::__zz_cib_New_0())
{}

PoDoFo::PdfRefCountedInputDevice::PdfRefCountedInputDevice(const char* pszFilename, const char* pszMode)
  : PoDoFo::PdfRefCountedInputDevice(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszMode)>(std::move(pszMode))))
{}

PoDoFo::PdfRefCountedInputDevice::PdfRefCountedInputDevice(const char* pBuffer, size_t lLen)
  : PoDoFo::PdfRefCountedInputDevice(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))))
{}

PoDoFo::PdfRefCountedInputDevice::PdfRefCountedInputDevice(::PoDoFo::PdfInputDevice* pDevice)
  : PoDoFo::PdfRefCountedInputDevice(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice))))
{}

PoDoFo::PdfRefCountedInputDevice::PdfRefCountedInputDevice(const ::PoDoFo::PdfRefCountedInputDevice& rhs)
  : PoDoFo::PdfRefCountedInputDevice(__zz_cib_MyHelper::__zz_cib_Copy_4(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
{}

PoDoFo::PdfRefCountedInputDevice::~PdfRefCountedInputDevice() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_5(
    h
  );
}

::PoDoFo::PdfInputDevice* PoDoFo::PdfRefCountedInputDevice::Device() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfInputDevice*>(
    __zz_cib_MyHelper::Device_6<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfInputDevice*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfRefCountedInputDevice& PoDoFo::PdfRefCountedInputDevice::operator=(const ::PoDoFo::PdfRefCountedInputDevice& rhs) {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRefCountedInputDevice&>(
    __zz_cib_MyHelper::__zz_cib_OperatorEqual_7<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfRefCountedInputDevice&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}
}
