#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfOutputDevice.h"
#include "podofo/base/PdfRefCountedBuffer.h"
#include "podofo/base/PdfString.h"

namespace PoDoFo {

PoDoFo::PdfString::PdfString(__zz_cib_AbiType h)
  : ::PoDoFo::PdfDataType(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class346(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfString::PdfString(PdfString&& rhs)
  : ::PoDoFo::PdfDataType(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfString::PdfString()
  : PoDoFo::PdfString(__zz_cib_MyHelper::__zz_cib_New_0())
{}

PoDoFo::PdfString::PdfString(const std::string& sString, const ::PoDoFo::PdfEncoding* const pEncoding)
  : PoDoFo::PdfString(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(sString)>(sString),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding))))
{}

PoDoFo::PdfString::PdfString(const char* pszString, const ::PoDoFo::PdfEncoding* const pEncoding)
  : PoDoFo::PdfString(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszString)>(std::move(pszString)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding))))
{}

PoDoFo::PdfString::PdfString(const wchar_t* pszString, ::PoDoFo::pdf_long lLen)
  : PoDoFo::PdfString(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszString)>(std::move(pszString)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))))
{}

void PoDoFo::PdfString::setFromWchar_t(const wchar_t* pszString, ::PoDoFo::pdf_long lLen) {
    __zz_cib_MyHelper::setFromWchar_t_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszString)>(std::move(pszString)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    );
  }

PoDoFo::PdfString::PdfString(const char* pszString, ::PoDoFo::pdf_long lLen, bool bHex, const ::PoDoFo::PdfEncoding* const pEncoding)
  : PoDoFo::PdfString(__zz_cib_MyHelper::__zz_cib_New_5(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszString)>(std::move(pszString)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bHex)>(std::move(bHex)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding))))
{}

PoDoFo::PdfString::PdfString(const ::PoDoFo::pdf_utf8* pszStringUtf8)
  : PoDoFo::PdfString(__zz_cib_MyHelper::__zz_cib_New_6(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszStringUtf8)>(std::move(pszStringUtf8))))
{}

PoDoFo::PdfString::PdfString(const ::PoDoFo::pdf_uint16* pszStringUtf16)
  : PoDoFo::PdfString(__zz_cib_MyHelper::__zz_cib_New_7(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszStringUtf16)>(std::move(pszStringUtf16))))
{}

PoDoFo::PdfString::PdfString(const ::PoDoFo::pdf_utf8* pszStringUtf8, ::PoDoFo::pdf_long lLen)
  : PoDoFo::PdfString(__zz_cib_MyHelper::__zz_cib_New_8(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszStringUtf8)>(std::move(pszStringUtf8)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))))
{}

PoDoFo::PdfString::PdfString(const ::PoDoFo::pdf_uint16* pszStringUtf16, ::PoDoFo::pdf_long lLen)
  : PoDoFo::PdfString(__zz_cib_MyHelper::__zz_cib_New_9(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszStringUtf16)>(std::move(pszStringUtf16)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))))
{}

PoDoFo::PdfString::PdfString(const ::PoDoFo::PdfString& rhs)
  : PoDoFo::PdfString(__zz_cib_MyHelper::__zz_cib_Copy_10(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
{}

PoDoFo::PdfString::~PdfString() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_11(
    h
  );
}

void PoDoFo::PdfString::SetHexData(const char* pszHex, ::PoDoFo::pdf_long lLen, ::PoDoFo::PdfEncrypt* pEncrypt) {
    __zz_cib_MyHelper::SetHexData_12<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszHex)>(std::move(pszHex)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt))
    );
  }

bool PoDoFo::PdfString::IsValid() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsValid_13<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfString::IsHex() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsHex_14<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfString::IsUnicode() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsUnicode_15<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const char* PoDoFo::PdfString::GetString() const {
  return __zz_cib_::__zz_cib_FromAbiType<const char*>(
    __zz_cib_MyHelper::GetString_16<__zz_cib_::__zz_cib_AbiType_t<const char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::pdf_uint16* PoDoFo::PdfString::GetUnicode() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::pdf_uint16*>(
    __zz_cib_MyHelper::GetUnicode_17<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const std::string& PoDoFo::PdfString::GetStringUtf8() const {
  return __zz_cib_::__zz_cib_FromAbiType<const std::string&>(
    __zz_cib_MyHelper::GetStringUtf8_18<__zz_cib_::__zz_cib_AbiType_t<const std::string&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::pdf_long PoDoFo::PdfString::GetLength() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::GetLength_19<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::pdf_long PoDoFo::PdfString::GetUnicodeLength() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::GetUnicodeLength_20<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::pdf_long PoDoFo::PdfString::GetCharacterLength() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::GetCharacterLength_21<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfString::Write(::PoDoFo::PdfOutputDevice* pDevice, ::PoDoFo::EPdfWriteMode eWriteMode, const ::PoDoFo::PdfEncrypt* pEncrypt) const {
    __zz_cib_MyHelper::Write_22<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eWriteMode)>(std::move(eWriteMode)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt))
    );
  }

const ::PoDoFo::PdfString& PoDoFo::PdfString::operator=(const ::PoDoFo::PdfString& rhs) {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(
    __zz_cib_MyHelper::__zz_cib_OperatorEqual_23<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfString&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

bool PoDoFo::PdfString::operator>(const ::PoDoFo::PdfString& rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorGT_24<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

bool PoDoFo::PdfString::operator<(const ::PoDoFo::PdfString& rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorLT_25<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

bool PoDoFo::PdfString::operator==(const ::PoDoFo::PdfString& rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorCmpEq_26<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

bool PoDoFo::PdfString::operator!=(const ::PoDoFo::PdfString& rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorNotEq_27<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

#ifdef PODOFO_PUBLIC_STRING_HEX_CODEC
::PoDoFo::PdfString PoDoFo::PdfString::HexEncode() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfString>(
    __zz_cib_MyHelper::HexEncode_28<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfString>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfString PoDoFo::PdfString::HexDecode() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfString>(
    __zz_cib_MyHelper::HexDecode_29<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfString>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
#endif

::PoDoFo::PdfString PoDoFo::PdfString::ToUnicode() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfString>(
    __zz_cib_MyHelper::ToUnicode_30<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfString>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfRefCountedBuffer& PoDoFo::PdfString::GetBuffer() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfRefCountedBuffer&>(
    __zz_cib_MyHelper::GetBuffer_31<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfRefCountedBuffer&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::pdf_long PoDoFo::PdfString::ConvertUTF8toUTF16(const ::PoDoFo::pdf_utf8* pszUtf8, ::PoDoFo::pdf_uint16* pszUtf16, ::PoDoFo::pdf_long lLenUtf16) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::ConvertUTF8toUTF16_32<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszUtf8)>(std::move(pszUtf8)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszUtf16)>(std::move(pszUtf16)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLenUtf16)>(std::move(lLenUtf16))
    )
  );
}

::PoDoFo::pdf_long PoDoFo::PdfString::ConvertUTF8toUTF16(const ::PoDoFo::pdf_utf8* pszUtf8, ::PoDoFo::pdf_long lLenUtf8, ::PoDoFo::pdf_uint16* pszUtf16, ::PoDoFo::pdf_long lLenUtf16, ::PoDoFo::EPdfStringConversion eConversion) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::ConvertUTF8toUTF16_33<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszUtf8)>(std::move(pszUtf8)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLenUtf8)>(std::move(lLenUtf8)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszUtf16)>(std::move(pszUtf16)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLenUtf16)>(std::move(lLenUtf16)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eConversion)>(std::move(eConversion))
    )
  );
}

::PoDoFo::pdf_long PoDoFo::PdfString::ConvertUTF16toUTF8(const ::PoDoFo::pdf_uint16* pszUtf16, ::PoDoFo::pdf_utf8* pszUtf8, ::PoDoFo::pdf_long lLenUtf8) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::ConvertUTF16toUTF8_34<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszUtf16)>(std::move(pszUtf16)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszUtf8)>(std::move(pszUtf8)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLenUtf8)>(std::move(lLenUtf8))
    )
  );
}

::PoDoFo::pdf_long PoDoFo::PdfString::ConvertUTF16toUTF8(const ::PoDoFo::pdf_uint16* pszUtf16, ::PoDoFo::pdf_long lLenUtf16, ::PoDoFo::pdf_utf8* pszUtf8, ::PoDoFo::pdf_long lLenUtf8, ::PoDoFo::EPdfStringConversion eConversion) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::ConvertUTF16toUTF8_35<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszUtf16)>(std::move(pszUtf16)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLenUtf16)>(std::move(lLenUtf16)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszUtf8)>(std::move(pszUtf8)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLenUtf8)>(std::move(lLenUtf8)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eConversion)>(std::move(eConversion))
    )
  );
}
}
