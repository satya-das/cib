#include "podofo/base/PdfData.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfOutputDevice.h"

namespace PoDoFo {

PoDoFo::PdfData::PdfData(__zz_cib_AbiType h)
  : ::PoDoFo::PdfDataType(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class346(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfData::PdfData(PdfData&& rhs)
  : ::PoDoFo::PdfDataType(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfData::~PdfData() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_0(
    h
  );
}

PoDoFo::PdfData::PdfData(const char* pszData)
  : PoDoFo::PdfData(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszData)>(std::move(pszData))))
{}

PoDoFo::PdfData::PdfData(const char* pszData, size_t dataSize)
  : PoDoFo::PdfData(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszData)>(std::move(pszData)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dataSize)>(std::move(dataSize))))
{}

PoDoFo::PdfData::PdfData(const ::PoDoFo::PdfData& rhs)
  : PoDoFo::PdfData(__zz_cib_MyHelper::__zz_cib_Copy_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
{}

void PoDoFo::PdfData::Write(::PoDoFo::PdfOutputDevice* pDevice, ::PoDoFo::EPdfWriteMode eWriteMode, const ::PoDoFo::PdfEncrypt* pEncrypt) const {
    __zz_cib_MyHelper::Write_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eWriteMode)>(std::move(eWriteMode)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt))
    );
  }

const ::PoDoFo::PdfData& PoDoFo::PdfData::operator=(const ::PoDoFo::PdfData& rhs) {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfData&>(
    __zz_cib_MyHelper::__zz_cib_OperatorEqual_5<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfData&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

const std::string& PoDoFo::PdfData::data() const {
  return __zz_cib_::__zz_cib_FromAbiType<const std::string&>(
    __zz_cib_MyHelper::data_6<__zz_cib_::__zz_cib_AbiType_t<const std::string&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
