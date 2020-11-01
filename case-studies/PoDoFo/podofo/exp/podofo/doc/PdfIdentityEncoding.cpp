#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDictionary.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfRefCountedBuffer.h"
#include "podofo/base/PdfString.h"
#include "podofo/doc/PdfFont.h"
#include "podofo/doc/PdfIdentityEncoding.h"

namespace PoDoFo {

PoDoFo::PdfIdentityEncoding::PdfIdentityEncoding(__zz_cib_AbiType h)
  : ::PoDoFo::PdfEncoding(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class350(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfIdentityEncoding::PdfIdentityEncoding(PdfIdentityEncoding&& rhs)
  : ::PoDoFo::PdfEncoding(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfIdentityEncoding::PdfIdentityEncoding(const ::PoDoFo::PdfIdentityEncoding& __zz_cib_param0)
  : PoDoFo::PdfIdentityEncoding(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfIdentityEncoding::~PdfIdentityEncoding() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfIdentityEncoding::PdfIdentityEncoding(int nFirstChar, int nLastChar, bool bAutoDelete, ::PoDoFo::PdfObject* pToUnicode)
  : PoDoFo::PdfIdentityEncoding(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(nFirstChar)>(std::move(nFirstChar)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nLastChar)>(std::move(nLastChar)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bAutoDelete)>(std::move(bAutoDelete)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pToUnicode)>(std::move(pToUnicode))))
{}

void PoDoFo::PdfIdentityEncoding::AddToDictionary(::PoDoFo::PdfDictionary& rDictionary) const {
    __zz_cib_MyHelper::AddToDictionary_3<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rDictionary)>(rDictionary)
    );
  }

::PoDoFo::PdfString PoDoFo::PdfIdentityEncoding::ConvertToUnicode(const ::PoDoFo::PdfString& rEncodedString, const ::PoDoFo::PdfFont* pFont) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfString>(
    __zz_cib_MyHelper::ConvertToUnicode_4<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfString>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rEncodedString)>(rEncodedString),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pFont)>(std::move(pFont))
    )
  );
}

::PoDoFo::PdfRefCountedBuffer PoDoFo::PdfIdentityEncoding::ConvertToEncoding(const ::PoDoFo::PdfString& rString, const ::PoDoFo::PdfFont* pFont) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfRefCountedBuffer>(
    __zz_cib_MyHelper::ConvertToEncoding_5<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfRefCountedBuffer>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rString)>(rString),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pFont)>(std::move(pFont))
    )
  );
}

bool PoDoFo::PdfIdentityEncoding::IsAutoDelete() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsAutoDelete_6<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfIdentityEncoding::IsSingleByteEncoding() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsSingleByteEncoding_7<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::pdf_uint16 PoDoFo::PdfIdentityEncoding::GetCharCode(int nIndex) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_uint16>(
    __zz_cib_MyHelper::GetCharCode_8<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_uint16>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nIndex)>(std::move(nIndex))
    )
  );
}

const ::PoDoFo::PdfName& PoDoFo::PdfIdentityEncoding::GetID() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(
    __zz_cib_MyHelper::GetID_9<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfName&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
