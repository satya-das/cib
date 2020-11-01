#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfOwnedDataType.h"
#include "podofo/base/PdfReference.h"
#include "podofo/base/PdfVecObjects.h"

namespace PoDoFo {

PoDoFo::PdfOwnedDataType::PdfOwnedDataType(__zz_cib_AbiType h)
  : ::PoDoFo::PdfDataType(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class346(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfOwnedDataType::PdfOwnedDataType(PdfOwnedDataType&& rhs)
  : ::PoDoFo::PdfDataType(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

const ::PoDoFo::PdfObject* PoDoFo::PdfOwnedDataType::GetOwner() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetOwner_0<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfOwnedDataType::GetOwner() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetOwner_1<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfOwnedDataType& PoDoFo::PdfOwnedDataType::operator=(const ::PoDoFo::PdfOwnedDataType& rhs) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOwnedDataType&>(
    __zz_cib_MyHelper::__zz_cib_OperatorEqual_2<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfOwnedDataType&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfOwnedDataType::GetIndirectObject(const ::PoDoFo::PdfReference& rReference) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetIndirectObject_3<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rReference)>(rReference)
    )
  );
}

::PoDoFo::PdfVecObjects* PoDoFo::PdfOwnedDataType::GetObjectOwner() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(
    __zz_cib_MyHelper::GetObjectOwner_4<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfOwnedDataType::SetOwner(::PoDoFo::PdfObject* pOwner) {
    __zz_cib_MyHelper::SetOwner_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pOwner)>(std::move(pOwner))
    );
  }
}
