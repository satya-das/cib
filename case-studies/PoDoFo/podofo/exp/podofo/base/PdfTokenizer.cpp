#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfRefCountedBuffer.h"
#include "podofo/base/PdfRefCountedInputDevice.h"
#include "podofo/base/PdfTokenizer.h"
#include "podofo/base/PdfVariant.h"
#include <vector>

namespace PoDoFo {

PoDoFo::PdfTokenizer::PdfTokenizer(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfTokenizer::PdfTokenizer(PdfTokenizer&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfTokenizer::PdfTokenizer()
  : PoDoFo::PdfTokenizer(__zz_cib_MyHelper::__zz_cib_New_0())
{}

PoDoFo::PdfTokenizer::PdfTokenizer(const char* pBuffer, size_t lLen)
  : PoDoFo::PdfTokenizer(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))))
{}

PoDoFo::PdfTokenizer::PdfTokenizer(const ::PoDoFo::PdfRefCountedInputDevice& rDevice, const ::PoDoFo::PdfRefCountedBuffer& rBuffer)
  : PoDoFo::PdfTokenizer(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rDevice)>(rDevice),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rBuffer)>(rBuffer)))
{}

PoDoFo::PdfTokenizer::~PdfTokenizer() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_3(
    h
  );
}

bool PoDoFo::PdfTokenizer::GetNextToken(const char*& pszToken, ::PoDoFo::EPdfTokenType* peType) {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::GetNextToken_4<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszToken)>(pszToken),
      __zz_cib_::__zz_cib_ToAbiType<decltype(peType)>(std::move(peType))
    )
  );
}

bool PoDoFo::PdfTokenizer::IsNextToken(const char* pszToken) {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsNextToken_5<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszToken)>(std::move(pszToken))
    )
  );
}

::PoDoFo::pdf_long PoDoFo::PdfTokenizer::GetNextNumber() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::GetNextNumber_6<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfTokenizer::GetNextVariant(::PoDoFo::PdfVariant& rVariant, ::PoDoFo::PdfEncrypt* pEncrypt) {
    __zz_cib_MyHelper::GetNextVariant_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rVariant)>(rVariant),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt))
    );
  }

bool PoDoFo::PdfTokenizer::IsWhitespace(const unsigned char ch) {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsWhitespace_8<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(ch)>(std::move(ch))
    )
  );
}

bool PoDoFo::PdfTokenizer::IsDelimiter(const unsigned char ch) {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsDelimiter_9<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(ch)>(std::move(ch))
    )
  );
}

bool PoDoFo::PdfTokenizer::IsRegular(const unsigned char ch) {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsRegular_10<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(ch)>(std::move(ch))
    )
  );
}

bool PoDoFo::PdfTokenizer::IsPrintable(const unsigned char ch) {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsPrintable_11<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(ch)>(std::move(ch))
    )
  );
}

int PoDoFo::PdfTokenizer::GetHexValue(const unsigned char ch) {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::GetHexValue_12<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(ch)>(std::move(ch))
    )
  );
}

void PoDoFo::PdfTokenizer::GetNextVariant(const char* pszToken, ::PoDoFo::EPdfTokenType eType, ::PoDoFo::PdfVariant& rVariant, ::PoDoFo::PdfEncrypt* pEncrypt) {
    __zz_cib_MyHelper::GetNextVariant_13<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszToken)>(std::move(pszToken)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eType)>(std::move(eType)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rVariant)>(rVariant),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt))
    );
  }

::PoDoFo::EPdfDataType PoDoFo::PdfTokenizer::DetermineDataType(const char* pszToken, ::PoDoFo::EPdfTokenType eType, ::PoDoFo::PdfVariant& rVariant) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfDataType>(
    __zz_cib_MyHelper::DetermineDataType_14<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::EPdfDataType>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszToken)>(std::move(pszToken)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eType)>(std::move(eType)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rVariant)>(rVariant)
    )
  );
}

void PoDoFo::PdfTokenizer::ReadDataType(::PoDoFo::EPdfDataType eDataType, ::PoDoFo::PdfVariant& rVariant, ::PoDoFo::PdfEncrypt* pEncrypt) {
    __zz_cib_MyHelper::ReadDataType_15<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eDataType)>(std::move(eDataType)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rVariant)>(rVariant),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt))
    );
  }

void PoDoFo::PdfTokenizer::ReadDictionary(::PoDoFo::PdfVariant& rVariant, ::PoDoFo::PdfEncrypt* pEncrypt) {
    __zz_cib_MyHelper::ReadDictionary_16<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rVariant)>(rVariant),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt))
    );
  }

void PoDoFo::PdfTokenizer::ReadArray(::PoDoFo::PdfVariant& rVariant, ::PoDoFo::PdfEncrypt* pEncrypt) {
    __zz_cib_MyHelper::ReadArray_17<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rVariant)>(rVariant),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt))
    );
  }

void PoDoFo::PdfTokenizer::ReadString(::PoDoFo::PdfVariant& rVariant, ::PoDoFo::PdfEncrypt* pEncrypt) {
    __zz_cib_MyHelper::ReadString_18<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rVariant)>(rVariant),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt))
    );
  }

void PoDoFo::PdfTokenizer::ReadHexString(::PoDoFo::PdfVariant& rVariant, ::PoDoFo::PdfEncrypt* pEncrypt) {
    __zz_cib_MyHelper::ReadHexString_19<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rVariant)>(rVariant),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt))
    );
  }

void PoDoFo::PdfTokenizer::ReadHexString(::std::vector<char>& rVecBuffer) {
    __zz_cib_MyHelper::ReadHexString_20<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rVecBuffer)>(rVecBuffer)
    );
  }

void PoDoFo::PdfTokenizer::ReadName(::PoDoFo::PdfVariant& rVariant) {
    __zz_cib_MyHelper::ReadName_21<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rVariant)>(rVariant)
    );
  }

void PoDoFo::PdfTokenizer::QuequeToken(const char* pszToken, ::PoDoFo::EPdfTokenType eType) {
    __zz_cib_MyHelper::QuequeToken_22<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszToken)>(std::move(pszToken)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eType)>(std::move(eType))
    );
  }
}
