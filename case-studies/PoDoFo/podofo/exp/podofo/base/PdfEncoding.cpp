#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDictionary.h"
#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfRefCountedBuffer.h"
#include "podofo/base/PdfString.h"
#include "podofo/doc/PdfCMapEncoding.h"
#include "podofo/doc/PdfDifferenceEncoding.h"
#include "podofo/doc/PdfFont.h"
#include "podofo/doc/PdfIdentityEncoding.h"

#include "__zz_cib_internal/__zz_cib_CibPoDoFo-generic.h"

namespace PoDoFo {

PoDoFo::PdfEncoding::PdfEncoding(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfEncoding::PdfEncoding(PdfEncoding&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfEncoding::PdfEncoding(int nFirstChar, int nLastChar, ::PoDoFo::PdfObject* __zz_cib_param2)
  : PoDoFo::PdfEncoding(__zz_cib_MyHelper::__zz_cib_New_0(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(nFirstChar)>(std::move(nFirstChar)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nLastChar)>(std::move(nLastChar)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param2)>(std::move(__zz_cib_param2))))
{}

PoDoFo::PdfEncoding::~PdfEncoding() {
  __zz_cib_MyHelper::__zz_cib_ReleaseProxy(this);
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

bool PoDoFo::PdfEncoding::operator==(const ::PoDoFo::PdfEncoding& rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorCmpEq_3<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

bool PoDoFo::PdfEncoding::operator<(const ::PoDoFo::PdfEncoding& rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorLT_4<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

::PoDoFo::PdfString PoDoFo::PdfEncoding::ConvertToUnicode(const ::PoDoFo::PdfString& rEncodedString, const ::PoDoFo::PdfFont* pFont) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfString>(
    __zz_cib_MyHelper::ConvertToUnicode_6<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfString>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rEncodedString)>(rEncodedString),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pFont)>(std::move(pFont))
    )
  );
}

::PoDoFo::PdfRefCountedBuffer PoDoFo::PdfEncoding::ConvertToEncoding(const ::PoDoFo::PdfString& rString, const ::PoDoFo::PdfFont* pFont) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfRefCountedBuffer>(
    __zz_cib_MyHelper::ConvertToEncoding_7<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfRefCountedBuffer>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rString)>(rString),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pFont)>(std::move(pFont))
    )
  );
}

int PoDoFo::PdfEncoding::GetFirstChar() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::GetFirstChar_10<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int PoDoFo::PdfEncoding::GetLastChar() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::GetLastChar_11<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfEncoding::const_iterator PoDoFo::PdfEncoding::begin() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncoding::const_iterator>(
    __zz_cib_MyHelper::begin_12<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfEncoding::const_iterator>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfEncoding::const_iterator PoDoFo::PdfEncoding::end() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncoding::const_iterator>(
    __zz_cib_MyHelper::end_13<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfEncoding::const_iterator>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::pdf_uint16 PoDoFo::PdfEncoding::GetUnicodeValue(::PoDoFo::pdf_uint16 __zz_cib_param0) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_uint16>(
    __zz_cib_MyHelper::GetUnicodeValue_15<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_uint16>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(std::move(__zz_cib_param0))
    )
  );
}
}
namespace PoDoFo {

PoDoFo::PdfEncoding::const_iterator::const_iterator(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfEncoding::const_iterator::const_iterator(const_iterator&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfEncoding::const_iterator::~const_iterator() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_0(
    h
  );
}

PoDoFo::PdfEncoding::const_iterator::const_iterator(const ::PoDoFo::PdfEncoding* pEncoding, int nCur)
  : PoDoFo::PdfEncoding::const_iterator(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nCur)>(std::move(nCur))))
{}

PoDoFo::PdfEncoding::const_iterator::const_iterator(const ::PoDoFo::PdfEncoding::const_iterator& rhs)
  : PoDoFo::PdfEncoding::const_iterator(__zz_cib_MyHelper::__zz_cib_Copy_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
{}

const ::PoDoFo::PdfEncoding::const_iterator& PoDoFo::PdfEncoding::const_iterator::operator=(const ::PoDoFo::PdfEncoding::const_iterator& rhs) {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding::const_iterator&>(
    __zz_cib_MyHelper::__zz_cib_OperatorEqual_3<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding::const_iterator&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

bool PoDoFo::PdfEncoding::const_iterator::operator==(const ::PoDoFo::PdfEncoding::const_iterator& rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorCmpEq_4<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

bool PoDoFo::PdfEncoding::const_iterator::operator!=(const ::PoDoFo::PdfEncoding::const_iterator& rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorNotEq_5<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

::PoDoFo::pdf_uint16 PoDoFo::PdfEncoding::const_iterator::operator*() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_uint16>(
    __zz_cib_MyHelper::__zz_cib_OperatorMul_6<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_uint16>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfEncoding::const_iterator& PoDoFo::PdfEncoding::const_iterator::operator++() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncoding::const_iterator&>(
    __zz_cib_MyHelper::__zz_cib_OperatorInc_7<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfEncoding::const_iterator&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
namespace PoDoFo {

PoDoFo::PdfSimpleEncoding::PdfSimpleEncoding(__zz_cib_AbiType h)
  : ::PoDoFo::PdfEncoding(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class350(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfSimpleEncoding::PdfSimpleEncoding(PdfSimpleEncoding&& rhs)
  : ::PoDoFo::PdfEncoding(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfSimpleEncoding::PdfSimpleEncoding(const ::PoDoFo::PdfName& rName)
  : PoDoFo::PdfSimpleEncoding(__zz_cib_MyHelper::__zz_cib_New_0(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(rName)>(rName)))
{}

PoDoFo::PdfSimpleEncoding::~PdfSimpleEncoding() {
  __zz_cib_MyHelper::__zz_cib_ReleaseProxy(this);
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

void PoDoFo::PdfSimpleEncoding::AddToDictionary(::PoDoFo::PdfDictionary& rDictionary) const {
    __zz_cib_MyHelper::AddToDictionary_2<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rDictionary)>(rDictionary)
    );
  }

::PoDoFo::PdfString PoDoFo::PdfSimpleEncoding::ConvertToUnicode(const ::PoDoFo::PdfString& rEncodedString, const ::PoDoFo::PdfFont* pFont) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfString>(
    __zz_cib_MyHelper::ConvertToUnicode_3<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfString>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rEncodedString)>(rEncodedString),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pFont)>(std::move(pFont))
    )
  );
}

::PoDoFo::PdfRefCountedBuffer PoDoFo::PdfSimpleEncoding::ConvertToEncoding(const ::PoDoFo::PdfString& rString, const ::PoDoFo::PdfFont* pFont) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfRefCountedBuffer>(
    __zz_cib_MyHelper::ConvertToEncoding_4<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfRefCountedBuffer>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rString)>(rString),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pFont)>(std::move(pFont))
    )
  );
}

bool PoDoFo::PdfSimpleEncoding::IsAutoDelete() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsAutoDelete_5<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfSimpleEncoding::IsSingleByteEncoding() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsSingleByteEncoding_6<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfName& PoDoFo::PdfSimpleEncoding::GetName() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(
    __zz_cib_MyHelper::GetName_7<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfName&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::pdf_uint16 PoDoFo::PdfSimpleEncoding::GetCharCode(int nIndex) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_uint16>(
    __zz_cib_MyHelper::GetCharCode_8<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_uint16>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nIndex)>(std::move(nIndex))
    )
  );
}

char PoDoFo::PdfSimpleEncoding::GetUnicodeCharCode(::PoDoFo::pdf_uint16 unicodeValue) const {
  return __zz_cib_::__zz_cib_FromAbiType<char>(
    __zz_cib_MyHelper::GetUnicodeCharCode_9<__zz_cib_::__zz_cib_AbiType_t<char>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(unicodeValue)>(std::move(unicodeValue))
    )
  );
}

const ::PoDoFo::PdfName& PoDoFo::PdfSimpleEncoding::GetID() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(
    __zz_cib_MyHelper::GetID_10<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfName&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
namespace PoDoFo {

PoDoFo::PdfDocEncoding::PdfDocEncoding(__zz_cib_AbiType h)
  : ::PoDoFo::PdfSimpleEncoding(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class352(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfDocEncoding::PdfDocEncoding(PdfDocEncoding&& rhs)
  : ::PoDoFo::PdfSimpleEncoding(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfDocEncoding::PdfDocEncoding(const ::PoDoFo::PdfDocEncoding& __zz_cib_param0)
  : PoDoFo::PdfDocEncoding(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfDocEncoding::~PdfDocEncoding() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfDocEncoding::PdfDocEncoding()
  : PoDoFo::PdfDocEncoding(__zz_cib_MyHelper::__zz_cib_New_2())
{}

const ::PoDoFo::pdf_uint16* PoDoFo::PdfDocEncoding::GetToUnicodeTable() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::pdf_uint16*>(
    __zz_cib_MyHelper::GetToUnicodeTable_3<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
namespace PoDoFo {

PoDoFo::PdfWinAnsiEncoding::PdfWinAnsiEncoding(__zz_cib_AbiType h)
  : ::PoDoFo::PdfSimpleEncoding(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class352(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfWinAnsiEncoding::PdfWinAnsiEncoding(PdfWinAnsiEncoding&& rhs)
  : ::PoDoFo::PdfSimpleEncoding(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfWinAnsiEncoding::PdfWinAnsiEncoding(const ::PoDoFo::PdfWinAnsiEncoding& __zz_cib_param0)
  : PoDoFo::PdfWinAnsiEncoding(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfWinAnsiEncoding::~PdfWinAnsiEncoding() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfWinAnsiEncoding::PdfWinAnsiEncoding()
  : PoDoFo::PdfWinAnsiEncoding(__zz_cib_MyHelper::__zz_cib_New_2())
{}

const ::PoDoFo::pdf_uint16* PoDoFo::PdfWinAnsiEncoding::GetToUnicodeTable() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::pdf_uint16*>(
    __zz_cib_MyHelper::GetToUnicodeTable_3<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfWinAnsiEncoding::AddToDictionary(::PoDoFo::PdfDictionary& rDictionary) const {
    __zz_cib_MyHelper::AddToDictionary_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rDictionary)>(rDictionary)
    );
  }
}
namespace PoDoFo {

PoDoFo::PdfMacRomanEncoding::PdfMacRomanEncoding(__zz_cib_AbiType h)
  : ::PoDoFo::PdfSimpleEncoding(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class352(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfMacRomanEncoding::PdfMacRomanEncoding(PdfMacRomanEncoding&& rhs)
  : ::PoDoFo::PdfSimpleEncoding(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfMacRomanEncoding::PdfMacRomanEncoding(const ::PoDoFo::PdfMacRomanEncoding& __zz_cib_param0)
  : PoDoFo::PdfMacRomanEncoding(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfMacRomanEncoding::~PdfMacRomanEncoding() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfMacRomanEncoding::PdfMacRomanEncoding()
  : PoDoFo::PdfMacRomanEncoding(__zz_cib_MyHelper::__zz_cib_New_2())
{}

const ::PoDoFo::pdf_uint16* PoDoFo::PdfMacRomanEncoding::GetToUnicodeTable() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::pdf_uint16*>(
    __zz_cib_MyHelper::GetToUnicodeTable_3<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
namespace PoDoFo {

PoDoFo::PdfMacExpertEncoding::PdfMacExpertEncoding(__zz_cib_AbiType h)
  : ::PoDoFo::PdfSimpleEncoding(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class352(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfMacExpertEncoding::PdfMacExpertEncoding(PdfMacExpertEncoding&& rhs)
  : ::PoDoFo::PdfSimpleEncoding(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfMacExpertEncoding::PdfMacExpertEncoding(const ::PoDoFo::PdfMacExpertEncoding& __zz_cib_param0)
  : PoDoFo::PdfMacExpertEncoding(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfMacExpertEncoding::~PdfMacExpertEncoding() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfMacExpertEncoding::PdfMacExpertEncoding()
  : PoDoFo::PdfMacExpertEncoding(__zz_cib_MyHelper::__zz_cib_New_2())
{}

const ::PoDoFo::pdf_uint16* PoDoFo::PdfMacExpertEncoding::GetToUnicodeTable() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::pdf_uint16*>(
    __zz_cib_MyHelper::GetToUnicodeTable_3<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
namespace PoDoFo {

PoDoFo::PdfStandardEncoding::PdfStandardEncoding(__zz_cib_AbiType h)
  : ::PoDoFo::PdfSimpleEncoding(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class352(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfStandardEncoding::PdfStandardEncoding(PdfStandardEncoding&& rhs)
  : ::PoDoFo::PdfSimpleEncoding(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfStandardEncoding::PdfStandardEncoding(const ::PoDoFo::PdfStandardEncoding& __zz_cib_param0)
  : PoDoFo::PdfStandardEncoding(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfStandardEncoding::~PdfStandardEncoding() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfStandardEncoding::PdfStandardEncoding()
  : PoDoFo::PdfStandardEncoding(__zz_cib_MyHelper::__zz_cib_New_2())
{}

const ::PoDoFo::pdf_uint16* PoDoFo::PdfStandardEncoding::GetToUnicodeTable() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::pdf_uint16*>(
    __zz_cib_MyHelper::GetToUnicodeTable_3<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
namespace PoDoFo {

PoDoFo::PdfSymbolEncoding::PdfSymbolEncoding(__zz_cib_AbiType h)
  : ::PoDoFo::PdfSimpleEncoding(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class352(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfSymbolEncoding::PdfSymbolEncoding(PdfSymbolEncoding&& rhs)
  : ::PoDoFo::PdfSimpleEncoding(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfSymbolEncoding::PdfSymbolEncoding(const ::PoDoFo::PdfSymbolEncoding& __zz_cib_param0)
  : PoDoFo::PdfSymbolEncoding(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfSymbolEncoding::~PdfSymbolEncoding() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfSymbolEncoding::PdfSymbolEncoding()
  : PoDoFo::PdfSymbolEncoding(__zz_cib_MyHelper::__zz_cib_New_2())
{}

const ::PoDoFo::pdf_uint16* PoDoFo::PdfSymbolEncoding::GetToUnicodeTable() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::pdf_uint16*>(
    __zz_cib_MyHelper::GetToUnicodeTable_3<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
namespace PoDoFo {

PoDoFo::PdfZapfDingbatsEncoding::PdfZapfDingbatsEncoding(__zz_cib_AbiType h)
  : ::PoDoFo::PdfSimpleEncoding(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class352(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfZapfDingbatsEncoding::PdfZapfDingbatsEncoding(PdfZapfDingbatsEncoding&& rhs)
  : ::PoDoFo::PdfSimpleEncoding(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfZapfDingbatsEncoding::PdfZapfDingbatsEncoding(const ::PoDoFo::PdfZapfDingbatsEncoding& __zz_cib_param0)
  : PoDoFo::PdfZapfDingbatsEncoding(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfZapfDingbatsEncoding::~PdfZapfDingbatsEncoding() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfZapfDingbatsEncoding::PdfZapfDingbatsEncoding()
  : PoDoFo::PdfZapfDingbatsEncoding(__zz_cib_MyHelper::__zz_cib_New_2())
{}

const ::PoDoFo::pdf_uint16* PoDoFo::PdfZapfDingbatsEncoding::GetToUnicodeTable() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::pdf_uint16*>(
    __zz_cib_MyHelper::GetToUnicodeTable_3<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
namespace PoDoFo {

PoDoFo::PdfWin1250Encoding::PdfWin1250Encoding(__zz_cib_AbiType h)
  : ::PoDoFo::PdfWinAnsiEncoding(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class354(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfWin1250Encoding::PdfWin1250Encoding(PdfWin1250Encoding&& rhs)
  : ::PoDoFo::PdfWinAnsiEncoding(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfWin1250Encoding::PdfWin1250Encoding(const ::PoDoFo::PdfWin1250Encoding& __zz_cib_param0)
  : PoDoFo::PdfWin1250Encoding(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfWin1250Encoding::~PdfWin1250Encoding() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfWin1250Encoding::PdfWin1250Encoding()
  : PoDoFo::PdfWin1250Encoding(__zz_cib_MyHelper::__zz_cib_New_2())
{}

const ::PoDoFo::PdfName& PoDoFo::PdfWin1250Encoding::GetID() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(
    __zz_cib_MyHelper::GetID_3<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfName&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::pdf_uint16* PoDoFo::PdfWin1250Encoding::GetToUnicodeTable() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::pdf_uint16*>(
    __zz_cib_MyHelper::GetToUnicodeTable_4<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
namespace PoDoFo {

PoDoFo::PdfIso88592Encoding::PdfIso88592Encoding(__zz_cib_AbiType h)
  : ::PoDoFo::PdfWinAnsiEncoding(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class354(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfIso88592Encoding::PdfIso88592Encoding(PdfIso88592Encoding&& rhs)
  : ::PoDoFo::PdfWinAnsiEncoding(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfIso88592Encoding::PdfIso88592Encoding(const ::PoDoFo::PdfIso88592Encoding& __zz_cib_param0)
  : PoDoFo::PdfIso88592Encoding(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfIso88592Encoding::~PdfIso88592Encoding() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfIso88592Encoding::PdfIso88592Encoding()
  : PoDoFo::PdfIso88592Encoding(__zz_cib_MyHelper::__zz_cib_New_2())
{}

const ::PoDoFo::PdfName& PoDoFo::PdfIso88592Encoding::GetID() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(
    __zz_cib_MyHelper::GetID_3<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfName&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::pdf_uint16* PoDoFo::PdfIso88592Encoding::GetToUnicodeTable() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::pdf_uint16*>(
    __zz_cib_MyHelper::GetToUnicodeTable_4<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template<>
class __zz_cib_Generic<::PoDoFo::PdfEncoding> : public ::PoDoFo::PdfEncoding {
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class350::__zz_cib_MethodId;
  static __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_CibPoDoFoGetMethodTable(
      __zz_cib_ids::__zz_cib_Class333::__zz_cib_Class350::__zz_cib_classId));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::PoDoFo::PdfEncoding(h) {}
public:
  static ::PoDoFo::PdfEncoding* __zz_cib_FromHandle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  ::PoDoFo::pdf_uint16 GetCharCode(int nIndex) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::pdf_uint16>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(nIndex)>);
    return __zz_cib_FromAbiType<::PoDoFo::pdf_uint16>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetCharCode_14>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(nIndex)>(std::move(nIndex))
      )
    );
  }
  void AddToDictionary(::PoDoFo::PdfDictionary& rDictionary) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(rDictionary)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::AddToDictionary_5>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(rDictionary)>(rDictionary)
    );
  }
  ::PoDoFo::PdfRefCountedBuffer ConvertToEncoding(const ::PoDoFo::PdfString& rString, const ::PoDoFo::PdfFont* pFont) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::PdfRefCountedBuffer>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(rString)>, __zz_cib_AbiType_t<decltype(pFont)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfRefCountedBuffer>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::ConvertToEncoding_7>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(rString)>(rString),
        __zz_cib_::__zz_cib_ToAbiType<decltype(pFont)>(std::move(pFont))
      )
    );
  }
  const ::PoDoFo::PdfName& GetID() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<const ::PoDoFo::PdfName&>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetID_1>(
        __zz_cib_h
      )
    );
  }
  ::PoDoFo::PdfString ConvertToUnicode(const ::PoDoFo::PdfString& rEncodedString, const ::PoDoFo::PdfFont* pFont) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::PdfString>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(rEncodedString)>, __zz_cib_AbiType_t<decltype(pFont)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfString>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::ConvertToUnicode_6>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(rEncodedString)>(rEncodedString),
        __zz_cib_::__zz_cib_ToAbiType<decltype(pFont)>(std::move(pFont))
      )
    );
  }
  bool IsAutoDelete() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsAutoDelete_8>(
        __zz_cib_h
      )
    );
  }
  bool IsSingleByteEncoding() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsSingleByteEncoding_9>(
        __zz_cib_h
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_Helper<::PoDoFo::PdfEncoding>::__zz_cib_ReleaseHandle(this);
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_2>(
      __zz_cib_h
    );
  }
};
}

namespace __zz_cib_ {
template<>
::PoDoFo::PdfEncoding* __zz_cib_Helper<::PoDoFo::PdfEncoding>::__zz_cib_CreateProxy(__zz_cib_AbiType h) {
  switch(__zz_cib_GetClassId(&h)) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class353::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfDocEncoding>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfDocEncoding>::__zz_cib_CastFrom__zz_cib_Class350(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class360::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfWin1250Encoding>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfWin1250Encoding>::__zz_cib_CastFrom__zz_cib_Class350(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class361::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfIso88592Encoding>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfIso88592Encoding>::__zz_cib_CastFrom__zz_cib_Class350(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class354::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfWinAnsiEncoding>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfWinAnsiEncoding>::__zz_cib_CastFrom__zz_cib_Class350(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class355::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfMacRomanEncoding>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfMacRomanEncoding>::__zz_cib_CastFrom__zz_cib_Class350(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class356::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfMacExpertEncoding>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfMacExpertEncoding>::__zz_cib_CastFrom__zz_cib_Class350(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class357::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfStandardEncoding>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfStandardEncoding>::__zz_cib_CastFrom__zz_cib_Class350(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class358::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfSymbolEncoding>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfSymbolEncoding>::__zz_cib_CastFrom__zz_cib_Class350(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class359::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfZapfDingbatsEncoding>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfZapfDingbatsEncoding>::__zz_cib_CastFrom__zz_cib_Class350(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class352::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfSimpleEncoding>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfSimpleEncoding>::__zz_cib_CastFrom__zz_cib_Class350(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class412::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfCMapEncoding>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfCMapEncoding>::__zz_cib_CastFrom__zz_cib_Class350(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class416::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfDifferenceEncoding>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfDifferenceEncoding>::__zz_cib_CastFrom__zz_cib_Class350(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class453::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfIdentityEncoding>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfIdentityEncoding>::__zz_cib_CastFrom__zz_cib_Class350(h)
    );
  default: break;
  }
  auto* const __zz_cib_obj = ::__zz_cib_::__zz_cib_Generic<::PoDoFo::PdfEncoding>::__zz_cib_FromHandle(h);
  __zz_cib_RegisterProxy(h, __zz_cib_obj);
  return __zz_cib_obj;
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfEncoding> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfEncoding;
  static __zz_cib_AbiType_t<::PoDoFo::pdf_uint16> __zz_cib_decl GetCharCode_0(const ::PoDoFo::PdfEncoding* __zz_cib_obj, __zz_cib_AbiType_t<int> nIndex) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_uint16>(
      __zz_cib_obj->GetCharCode(
        __zz_cib_::__zz_cib_FromAbiType<int>(nIndex)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddToDictionary_1(const ::PoDoFo::PdfEncoding* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfDictionary&> rDictionary) {
    __zz_cib_obj->AddToDictionary(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDictionary&>(rDictionary)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfRefCountedBuffer> __zz_cib_decl ConvertToEncoding_2(const ::PoDoFo::PdfEncoding* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rString, __zz_cib_AbiType_t<const ::PoDoFo::PdfFont*> pFont) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfRefCountedBuffer>(
      __zz_cib_obj->ConvertToEncoding(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rString),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfFont*>(pFont)
      )
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> __zz_cib_decl GetID_3(const ::PoDoFo::PdfEncoding* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfName&>(
      __zz_cib_obj->GetID()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfString> __zz_cib_decl ConvertToUnicode_4(const ::PoDoFo::PdfEncoding* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rEncodedString, __zz_cib_AbiType_t<const ::PoDoFo::PdfFont*> pFont) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfString>(
      __zz_cib_obj->ConvertToUnicode(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rEncodedString),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfFont*>(pFont)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsAutoDelete_5(const ::PoDoFo::PdfEncoding* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsAutoDelete()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsSingleByteEncoding_6(const ::PoDoFo::PdfEncoding* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsSingleByteEncoding()
    );
  }
  static void __zz_cib_decl __zz_cib_Delete_7(::PoDoFo::PdfEncoding* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfEncoding>::__zz_cib_ReleaseHandle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class350 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding>::GetCharCode_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding>::AddToDictionary_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding>::ConvertToEncoding_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding>::GetID_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding>::ConvertToUnicode_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding>::IsAutoDelete_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding>::IsSingleByteEncoding_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding>::__zz_cib_Delete_7)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfEncoding>::__zz_cib_GetProxyMethodTable() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class350::__zz_cib_GetMethodTable();
}
}

namespace __zz_cib_ {
using namespace ::PoDoFo;
template<>
class __zz_cib_Generic<::PoDoFo::PdfSimpleEncoding> : public ::PoDoFo::PdfSimpleEncoding {
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class352::__zz_cib_MethodId;
  static __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_CibPoDoFoGetMethodTable(
      __zz_cib_ids::__zz_cib_Class333::__zz_cib_Class352::__zz_cib_classId));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::PoDoFo::PdfSimpleEncoding(h) {}
public:
  static ::PoDoFo::PdfSimpleEncoding* __zz_cib_FromHandle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  ::PoDoFo::pdf_uint16 GetCharCode(int nIndex) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::pdf_uint16>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(nIndex)>);
    return __zz_cib_FromAbiType<::PoDoFo::pdf_uint16>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetCharCode_8>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(nIndex)>(std::move(nIndex))
      )
    );
  }
  void AddToDictionary(::PoDoFo::PdfDictionary& rDictionary) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(rDictionary)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::AddToDictionary_2>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(rDictionary)>(rDictionary)
    );
  }
  ::PoDoFo::PdfRefCountedBuffer ConvertToEncoding(const ::PoDoFo::PdfString& rString, const ::PoDoFo::PdfFont* pFont) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::PdfRefCountedBuffer>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(rString)>, __zz_cib_AbiType_t<decltype(pFont)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfRefCountedBuffer>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::ConvertToEncoding_4>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(rString)>(rString),
        __zz_cib_::__zz_cib_ToAbiType<decltype(pFont)>(std::move(pFont))
      )
    );
  }
  const ::PoDoFo::PdfName& GetID() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<const ::PoDoFo::PdfName&>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetID_10>(
        __zz_cib_h
      )
    );
  }
  ::PoDoFo::PdfString ConvertToUnicode(const ::PoDoFo::PdfString& rEncodedString, const ::PoDoFo::PdfFont* pFont) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::PdfString>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(rEncodedString)>, __zz_cib_AbiType_t<decltype(pFont)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfString>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::ConvertToUnicode_3>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(rEncodedString)>(rEncodedString),
        __zz_cib_::__zz_cib_ToAbiType<decltype(pFont)>(std::move(pFont))
      )
    );
  }
  const ::PoDoFo::pdf_uint16* GetToUnicodeTable() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16*>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<const ::PoDoFo::pdf_uint16*>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetToUnicodeTable_11>(
        __zz_cib_h
      )
    );
  }
  bool IsAutoDelete() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsAutoDelete_5>(
        __zz_cib_h
      )
    );
  }
  bool IsSingleByteEncoding() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsSingleByteEncoding_6>(
        __zz_cib_h
      )
    );
  }
};
}

namespace __zz_cib_ {
template<>
::PoDoFo::PdfSimpleEncoding* __zz_cib_Helper<::PoDoFo::PdfSimpleEncoding>::__zz_cib_CreateProxy(__zz_cib_AbiType h) {
  switch(__zz_cib_GetClassId(&h)) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class353::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfDocEncoding>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfDocEncoding>::__zz_cib_CastFrom__zz_cib_Class352(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class360::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfWin1250Encoding>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfWin1250Encoding>::__zz_cib_CastFrom__zz_cib_Class352(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class361::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfIso88592Encoding>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfIso88592Encoding>::__zz_cib_CastFrom__zz_cib_Class352(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class354::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfWinAnsiEncoding>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfWinAnsiEncoding>::__zz_cib_CastFrom__zz_cib_Class352(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class355::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfMacRomanEncoding>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfMacRomanEncoding>::__zz_cib_CastFrom__zz_cib_Class352(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class356::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfMacExpertEncoding>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfMacExpertEncoding>::__zz_cib_CastFrom__zz_cib_Class352(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class357::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfStandardEncoding>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfStandardEncoding>::__zz_cib_CastFrom__zz_cib_Class352(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class358::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfSymbolEncoding>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfSymbolEncoding>::__zz_cib_CastFrom__zz_cib_Class352(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class359::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfZapfDingbatsEncoding>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfZapfDingbatsEncoding>::__zz_cib_CastFrom__zz_cib_Class352(h)
    );
  default: break;
  }
  auto* const __zz_cib_obj = ::__zz_cib_::__zz_cib_Generic<::PoDoFo::PdfSimpleEncoding>::__zz_cib_FromHandle(h);
  __zz_cib_RegisterProxy(h, __zz_cib_obj);
  return __zz_cib_obj;
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfSimpleEncoding> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfSimpleEncoding;
  static __zz_cib_AbiType_t<::PoDoFo::pdf_uint16> __zz_cib_decl GetCharCode_0(const ::PoDoFo::PdfSimpleEncoding* __zz_cib_obj, __zz_cib_AbiType_t<int> nIndex) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_uint16>(
      __zz_cib_obj->GetCharCode(
        __zz_cib_::__zz_cib_FromAbiType<int>(nIndex)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddToDictionary_1(const ::PoDoFo::PdfSimpleEncoding* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfDictionary&> rDictionary) {
    __zz_cib_obj->AddToDictionary(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDictionary&>(rDictionary)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfRefCountedBuffer> __zz_cib_decl ConvertToEncoding_2(const ::PoDoFo::PdfSimpleEncoding* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rString, __zz_cib_AbiType_t<const ::PoDoFo::PdfFont*> pFont) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfRefCountedBuffer>(
      __zz_cib_obj->ConvertToEncoding(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rString),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfFont*>(pFont)
      )
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> __zz_cib_decl GetID_3(const ::PoDoFo::PdfSimpleEncoding* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfName&>(
      __zz_cib_obj->GetID()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfString> __zz_cib_decl ConvertToUnicode_4(const ::PoDoFo::PdfSimpleEncoding* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rEncodedString, __zz_cib_AbiType_t<const ::PoDoFo::PdfFont*> pFont) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfString>(
      __zz_cib_obj->ConvertToUnicode(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rEncodedString),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfFont*>(pFont)
      )
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16*> __zz_cib_decl GetToUnicodeTable_5(const ::PoDoFo::PdfSimpleEncoding* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::pdf_uint16*>(
      __zz_cib_obj->GetToUnicodeTable()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsAutoDelete_6(const ::PoDoFo::PdfSimpleEncoding* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsAutoDelete()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsSingleByteEncoding_7(const ::PoDoFo::PdfSimpleEncoding* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsSingleByteEncoding()
    );
  }
  static void __zz_cib_decl __zz_cib_Delete_8(::PoDoFo::PdfSimpleEncoding* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfSimpleEncoding>::__zz_cib_ReleaseHandle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class352 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleEncoding>::GetCharCode_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleEncoding>::AddToDictionary_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleEncoding>::ConvertToEncoding_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleEncoding>::GetID_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleEncoding>::ConvertToUnicode_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleEncoding>::GetToUnicodeTable_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleEncoding>::IsAutoDelete_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleEncoding>::IsSingleByteEncoding_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleEncoding>::__zz_cib_Delete_8)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 9 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfSimpleEncoding>::__zz_cib_GetProxyMethodTable() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class352::__zz_cib_GetMethodTable();
}
}

