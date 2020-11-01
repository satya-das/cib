#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfOutputDevice.h"
#include "podofo/base/PdfReference.h"

namespace PoDoFo {

PoDoFo::PdfReference::PdfReference(__zz_cib_AbiType h)
  : ::PoDoFo::PdfDataType(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class346(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfReference::PdfReference(PdfReference&& rhs)
  : ::PoDoFo::PdfDataType(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfReference::PdfReference()
  : PoDoFo::PdfReference(__zz_cib_MyHelper::__zz_cib_New_0())
{}

PoDoFo::PdfReference::PdfReference(const ::PoDoFo::pdf_uint32 nObjectNo, const ::PoDoFo::pdf_uint16 nGenerationNo)
  : PoDoFo::PdfReference(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(nObjectNo)>(std::move(nObjectNo)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nGenerationNo)>(std::move(nGenerationNo))))
{}

PoDoFo::PdfReference::PdfReference(const ::PoDoFo::PdfReference& rhs)
  : PoDoFo::PdfReference(__zz_cib_MyHelper::__zz_cib_Copy_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
{}

PoDoFo::PdfReference::~PdfReference() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_3(
    h
  );
}

const std::string PoDoFo::PdfReference::ToString() const {
  return __zz_cib_::__zz_cib_FromAbiType<const std::string>(
    __zz_cib_MyHelper::ToString_4<__zz_cib_::__zz_cib_AbiType_t<const std::string>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfReference& PoDoFo::PdfReference::operator=(const ::PoDoFo::PdfReference& rhs) {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfReference&>(
    __zz_cib_MyHelper::__zz_cib_OperatorEqual_5<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfReference&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

void PoDoFo::PdfReference::Write(::PoDoFo::PdfOutputDevice* pDevice, ::PoDoFo::EPdfWriteMode eWriteMode, const ::PoDoFo::PdfEncrypt* pEncrypt) const {
    __zz_cib_MyHelper::Write_6<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eWriteMode)>(std::move(eWriteMode)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt))
    );
  }

bool PoDoFo::PdfReference::operator==(const ::PoDoFo::PdfReference& rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorCmpEq_7<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

bool PoDoFo::PdfReference::operator!=(const ::PoDoFo::PdfReference& rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorNotEq_8<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

bool PoDoFo::PdfReference::operator<(const ::PoDoFo::PdfReference& rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorLT_9<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

void PoDoFo::PdfReference::SetObjectNumber(::PoDoFo::pdf_uint32 o) {
    __zz_cib_MyHelper::SetObjectNumber_10<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(o)>(std::move(o))
    );
  }

::PoDoFo::pdf_uint32 PoDoFo::PdfReference::ObjectNumber() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_uint32>(
    __zz_cib_MyHelper::ObjectNumber_11<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_uint32>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfReference::SetGenerationNumber(const ::PoDoFo::pdf_uint16 g) {
    __zz_cib_MyHelper::SetGenerationNumber_12<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(g)>(std::move(g))
    );
  }

::PoDoFo::pdf_uint16 PoDoFo::PdfReference::GenerationNumber() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_uint16>(
    __zz_cib_MyHelper::GenerationNumber_13<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_uint16>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfReference::IsIndirect() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsIndirect_14<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
