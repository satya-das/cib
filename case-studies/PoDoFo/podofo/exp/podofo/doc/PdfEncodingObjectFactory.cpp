#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfObject.h"
#include "podofo/doc/PdfEncodingObjectFactory.h"

namespace PoDoFo {

PoDoFo::PdfEncodingObjectFactory::PdfEncodingObjectFactory(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

PoDoFo::PdfEncodingObjectFactory::PdfEncodingObjectFactory(PdfEncodingObjectFactory&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfEncodingObjectFactory::PdfEncodingObjectFactory(const ::PoDoFo::PdfEncodingObjectFactory& __zz_cib_param0)
  : PoDoFo::PdfEncodingObjectFactory(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfEncodingObjectFactory::~PdfEncodingObjectFactory() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

const ::PoDoFo::PdfEncoding* PoDoFo::PdfEncodingObjectFactory::CreateEncoding(::PoDoFo::PdfObject* pObject, ::PoDoFo::PdfObject* pToUnicode, bool bExplicitNames) {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding*>(
    __zz_cib_MyHelper::CreateEncoding_2<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pToUnicode)>(std::move(pToUnicode)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bExplicitNames)>(std::move(bExplicitNames))
    )
  );
}
}
