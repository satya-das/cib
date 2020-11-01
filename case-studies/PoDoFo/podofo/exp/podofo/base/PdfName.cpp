#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfOutputDevice.h"

namespace PoDoFo {

PoDoFo::PdfName::PdfName(__zz_cib_AbiType h)
  : ::PoDoFo::PdfDataType(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class346(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfName::PdfName(PdfName&& rhs)
  : ::PoDoFo::PdfDataType(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfName::PdfName()
  : PoDoFo::PdfName(__zz_cib_MyHelper::__zz_cib_New_0())
{}

PoDoFo::PdfName::PdfName(const std::string& sName)
  : PoDoFo::PdfName(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(sName)>(sName)))
{}

PoDoFo::PdfName::PdfName(const char* pszName)
  : PoDoFo::PdfName(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszName)>(std::move(pszName))))
{}

PoDoFo::PdfName::PdfName(const char* pszName, long lLen)
  : PoDoFo::PdfName(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszName)>(std::move(pszName)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))))
{}

::PoDoFo::PdfName PoDoFo::PdfName::FromEscaped(const std::string& sName) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfName>(
    __zz_cib_MyHelper::FromEscaped_4<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfName>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(sName)>(sName)
    )
  );
}

::PoDoFo::PdfName PoDoFo::PdfName::FromEscaped(const char* pszName, ::PoDoFo::pdf_long ilength) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfName>(
    __zz_cib_MyHelper::FromEscaped_5<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfName>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszName)>(std::move(pszName)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(ilength)>(std::move(ilength))
    )
  );
}

std::string PoDoFo::PdfName::GetEscapedName() const {
  return __zz_cib_::__zz_cib_FromAbiType<std::string>(
    __zz_cib_MyHelper::GetEscapedName_6<__zz_cib_::__zz_cib_AbiType_t<std::string>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

PoDoFo::PdfName::PdfName(const ::PoDoFo::PdfName& rhs)
  : PoDoFo::PdfName(__zz_cib_MyHelper::__zz_cib_Copy_7(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
{}

PoDoFo::PdfName::~PdfName() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_8(
    h
  );
}

void PoDoFo::PdfName::Write(::PoDoFo::PdfOutputDevice* pDevice, ::PoDoFo::EPdfWriteMode eWriteMode, const ::PoDoFo::PdfEncrypt* pEncrypt) const {
    __zz_cib_MyHelper::Write_9<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eWriteMode)>(std::move(eWriteMode)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt))
    );
  }

const std::string& PoDoFo::PdfName::GetName() const {
  return __zz_cib_::__zz_cib_FromAbiType<const std::string&>(
    __zz_cib_MyHelper::GetName_10<__zz_cib_::__zz_cib_AbiType_t<const std::string&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

size_t PoDoFo::PdfName::GetLength() const {
  return __zz_cib_::__zz_cib_FromAbiType<size_t>(
    __zz_cib_MyHelper::GetLength_11<__zz_cib_::__zz_cib_AbiType_t<size_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfName& PoDoFo::PdfName::operator=(const ::PoDoFo::PdfName& rhs) {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(
    __zz_cib_MyHelper::__zz_cib_OperatorEqual_12<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfName&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

bool PoDoFo::PdfName::operator==(const ::PoDoFo::PdfName& rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorCmpEq_13<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

bool PoDoFo::PdfName::operator==(const char* rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorCmpEq_14<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(std::move(rhs))
    )
  );
}

bool PoDoFo::PdfName::operator==(const std::string& rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorCmpEq_15<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

bool PoDoFo::PdfName::operator!=(const ::PoDoFo::PdfName& rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorNotEq_16<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

bool PoDoFo::PdfName::operator!=(const char* rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorNotEq_17<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(std::move(rhs))
    )
  );
}

bool PoDoFo::PdfName::operator<(const ::PoDoFo::PdfName& rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorLT_18<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}
}
