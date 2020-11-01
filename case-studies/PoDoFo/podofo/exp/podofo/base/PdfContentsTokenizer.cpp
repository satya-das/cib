#include "podofo/base/PdfCanvas.h"
#include "podofo/base/PdfContentsTokenizer.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfTokenizer.h"
#include "podofo/base/PdfVariant.h"
#include "podofo/doc/PdfDocument.h"

namespace PoDoFo {

PoDoFo::PdfContentsTokenizer::PdfContentsTokenizer(__zz_cib_AbiType h)
  : ::PoDoFo::PdfTokenizer(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class402(h))
  , __zz_cib_h_(h)
{}

PoDoFo::PdfContentsTokenizer::PdfContentsTokenizer(PdfContentsTokenizer&& rhs)
  : ::PoDoFo::PdfTokenizer(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfContentsTokenizer::PdfContentsTokenizer(const char* pBuffer, long lLen)
  : PoDoFo::PdfContentsTokenizer(__zz_cib_MyHelper::__zz_cib_New_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))))
{}

PoDoFo::PdfContentsTokenizer::PdfContentsTokenizer(::PoDoFo::PdfCanvas* pCanvas)
  : PoDoFo::PdfContentsTokenizer(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pCanvas)>(std::move(pCanvas))))
{}

PoDoFo::PdfContentsTokenizer::~PdfContentsTokenizer() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

bool PoDoFo::PdfContentsTokenizer::ReadNext(::PoDoFo::EPdfContentsType& reType, const char*& rpszKeyword, ::PoDoFo::PdfVariant& rVariant) {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::ReadNext_3<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(reType)>(reType),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rpszKeyword)>(rpszKeyword),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rVariant)>(rVariant)
    )
  );
}

bool PoDoFo::PdfContentsTokenizer::GetNextToken(const char*& pszToken, ::PoDoFo::EPdfTokenType* peType) {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::GetNextToken_4<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszToken)>(pszToken),
      __zz_cib_::__zz_cib_ToAbiType<decltype(peType)>(std::move(peType))
    )
  );
}
}
