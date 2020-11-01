#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfEncodingFactory.h"
#include "podofo/base/PdfObject.h"
#include "podofo/doc/PdfIdentityEncoding.h"

namespace PoDoFo {

PoDoFo::PdfEncodingFactory::PdfEncodingFactory(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

PoDoFo::PdfEncodingFactory::PdfEncodingFactory(PdfEncodingFactory&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfEncodingFactory::PdfEncodingFactory(const ::PoDoFo::PdfEncodingFactory& __zz_cib_param0)
  : PoDoFo::PdfEncodingFactory(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfEncodingFactory::~PdfEncodingFactory() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

const ::PoDoFo::PdfEncoding* PoDoFo::PdfEncodingFactory::GlobalPdfDocEncodingInstance() {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding*>(
    __zz_cib_MyHelper::GlobalPdfDocEncodingInstance_2<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*>>(

    )
  );
}

const ::PoDoFo::PdfEncoding* PoDoFo::PdfEncodingFactory::GlobalWinAnsiEncodingInstance() {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding*>(
    __zz_cib_MyHelper::GlobalWinAnsiEncodingInstance_3<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*>>(

    )
  );
}

const ::PoDoFo::PdfEncoding* PoDoFo::PdfEncodingFactory::GlobalMacRomanEncodingInstance() {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding*>(
    __zz_cib_MyHelper::GlobalMacRomanEncodingInstance_4<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*>>(

    )
  );
}

const ::PoDoFo::PdfEncoding* PoDoFo::PdfEncodingFactory::GlobalStandardEncodingInstance() {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding*>(
    __zz_cib_MyHelper::GlobalStandardEncodingInstance_5<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*>>(

    )
  );
}

const ::PoDoFo::PdfEncoding* PoDoFo::PdfEncodingFactory::GlobalMacExpertEncodingInstance() {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding*>(
    __zz_cib_MyHelper::GlobalMacExpertEncodingInstance_6<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*>>(

    )
  );
}

const ::PoDoFo::PdfEncoding* PoDoFo::PdfEncodingFactory::GlobalSymbolEncodingInstance() {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding*>(
    __zz_cib_MyHelper::GlobalSymbolEncodingInstance_7<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*>>(

    )
  );
}

const ::PoDoFo::PdfEncoding* PoDoFo::PdfEncodingFactory::GlobalZapfDingbatsEncodingInstance() {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding*>(
    __zz_cib_MyHelper::GlobalZapfDingbatsEncodingInstance_8<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*>>(

    )
  );
}

const ::PoDoFo::PdfEncoding* PoDoFo::PdfEncodingFactory::GlobalIdentityEncodingInstance() {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding*>(
    __zz_cib_MyHelper::GlobalIdentityEncodingInstance_9<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*>>(

    )
  );
}

const ::PoDoFo::PdfEncoding* PoDoFo::PdfEncodingFactory::GlobalWin1250EncodingInstance() {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding*>(
    __zz_cib_MyHelper::GlobalWin1250EncodingInstance_10<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*>>(

    )
  );
}

const ::PoDoFo::PdfEncoding* PoDoFo::PdfEncodingFactory::GlobalIso88592EncodingInstance() {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding*>(
    __zz_cib_MyHelper::GlobalIso88592EncodingInstance_11<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*>>(

    )
  );
}

void PoDoFo::PdfEncodingFactory::FreeGlobalEncodingInstances() {
    __zz_cib_MyHelper::FreeGlobalEncodingInstances_12<__zz_cib_::__zz_cib_AbiType_t<void>>(

    );
  }

void PoDoFo::PdfEncodingFactory::PoDoFoClientAttached() {
    __zz_cib_MyHelper::PoDoFoClientAttached_13<__zz_cib_::__zz_cib_AbiType_t<void>>(

    );
  }
}
