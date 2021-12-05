#include "podofo/base/PdfArray.h"
#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfDictionary.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfOutputDevice.h"
#include "podofo/base/PdfReference.h"
#include "podofo/base/PdfStream.h"
#include "podofo/base/PdfString.h"
#include "podofo/base/PdfVariant.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfDocument.h"

namespace PoDoFo {

PoDoFo::PdfObject::PdfObject(__zz_cib_AbiType h)
  : ::PoDoFo::PdfVariant(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class403(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfObject::PdfObject(PdfObject&& rhs)
  : ::PoDoFo::PdfVariant(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfObject::PdfObject()
  : PoDoFo::PdfObject(__zz_cib_MyHelper::__zz_cib_New_0())
{}

PoDoFo::PdfObject::PdfObject(const ::PoDoFo::PdfReference& rRef, const char* pszType)
  : PoDoFo::PdfObject(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rRef)>(rRef),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszType)>(std::move(pszType))))
{}

PoDoFo::PdfObject::PdfObject(const ::PoDoFo::PdfReference& rRef, const ::PoDoFo::PdfVariant& rVariant)
  : PoDoFo::PdfObject(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rRef)>(rRef),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rVariant)>(rVariant)))
{}

PoDoFo::PdfObject::PdfObject(const ::PoDoFo::PdfVariant& var)
  : PoDoFo::PdfObject(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(var)>(var)))
{}

PoDoFo::PdfObject::PdfObject(bool b)
  : PoDoFo::PdfObject(__zz_cib_MyHelper::__zz_cib_New_4(
        __zz_cib_::__zz_cib_ToAbiType<decltype(b)>(std::move(b))))
{}

PoDoFo::PdfObject::PdfObject(::PoDoFo::pdf_int64 l)
  : PoDoFo::PdfObject(__zz_cib_MyHelper::__zz_cib_New_5(
        __zz_cib_::__zz_cib_ToAbiType<decltype(l)>(std::move(l))))
{}

PoDoFo::PdfObject::PdfObject(double d)
  : PoDoFo::PdfObject(__zz_cib_MyHelper::__zz_cib_New_6(
        __zz_cib_::__zz_cib_ToAbiType<decltype(d)>(std::move(d))))
{}

PoDoFo::PdfObject::PdfObject(const ::PoDoFo::PdfString& rsString)
  : PoDoFo::PdfObject(__zz_cib_MyHelper::__zz_cib_New_7(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rsString)>(rsString)))
{}

PoDoFo::PdfObject::PdfObject(const ::PoDoFo::PdfName& rName)
  : PoDoFo::PdfObject(__zz_cib_MyHelper::__zz_cib_New_8(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rName)>(rName)))
{}

PoDoFo::PdfObject::PdfObject(const ::PoDoFo::PdfReference& rRef)
  : PoDoFo::PdfObject(__zz_cib_MyHelper::__zz_cib_New_9(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rRef)>(rRef)))
{}

PoDoFo::PdfObject::PdfObject(const ::PoDoFo::PdfArray& tList)
  : PoDoFo::PdfObject(__zz_cib_MyHelper::__zz_cib_New_10(
        __zz_cib_::__zz_cib_ToAbiType<decltype(tList)>(tList)))
{}

PoDoFo::PdfObject::PdfObject(const ::PoDoFo::PdfDictionary& rDict)
  : PoDoFo::PdfObject(__zz_cib_MyHelper::__zz_cib_New_11(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rDict)>(rDict)))
{}

PoDoFo::PdfObject::PdfObject(const ::PoDoFo::PdfObject& rhs)
  : PoDoFo::PdfObject(__zz_cib_MyHelper::__zz_cib_Copy_12(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
{}

PoDoFo::PdfObject::~PdfObject() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_13(
    h
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfObject::GetIndirectKey(const ::PoDoFo::PdfName& key) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetIndirectKey_14<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfObject::MustGetIndirectKey(const ::PoDoFo::PdfName& key) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::MustGetIndirectKey_15<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key)
    )
  );
}

::PoDoFo::pdf_int64 PoDoFo::PdfObject::GetIndirectKeyAsLong(const ::PoDoFo::PdfName& key, ::PoDoFo::pdf_int64 lDefault) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_int64>(
    __zz_cib_MyHelper::GetIndirectKeyAsLong_16<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_int64>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lDefault)>(std::move(lDefault))
    )
  );
}

double PoDoFo::PdfObject::GetIndirectKeyAsReal(const ::PoDoFo::PdfName& key, double dDefault) const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetIndirectKeyAsReal_17<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dDefault)>(std::move(dDefault))
    )
  );
}

bool PoDoFo::PdfObject::GetIndirectKeyAsBool(const ::PoDoFo::PdfName& key, bool bDefault) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::GetIndirectKeyAsBool_18<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bDefault)>(std::move(bDefault))
    )
  );
}

::PoDoFo::PdfName PoDoFo::PdfObject::GetIndirectKeyAsName(const ::PoDoFo::PdfName& key) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfName>(
    __zz_cib_MyHelper::GetIndirectKeyAsName_19<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfName>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key)
    )
  );
}

void PoDoFo::PdfObject::WriteObject(::PoDoFo::PdfOutputDevice* pDevice, ::PoDoFo::EPdfWriteMode eWriteMode, ::PoDoFo::PdfEncrypt* pEncrypt, const ::PoDoFo::PdfName& keyStop) const {
    __zz_cib_MyHelper::WriteObject_20<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eWriteMode)>(std::move(eWriteMode)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(keyStop)>(keyStop)
    );
  }

::PoDoFo::pdf_long PoDoFo::PdfObject::GetObjectLength(::PoDoFo::EPdfWriteMode eWriteMode) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::GetObjectLength_21<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eWriteMode)>(std::move(eWriteMode))
    )
  );
}

const ::PoDoFo::PdfReference& PoDoFo::PdfObject::Reference() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfReference&>(
    __zz_cib_MyHelper::Reference_22<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfReference&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfStream* PoDoFo::PdfObject::GetStream() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfStream*>(
    __zz_cib_MyHelper::GetStream_23<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfStream*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfStream* PoDoFo::PdfObject::GetStream() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfStream*>(
    __zz_cib_MyHelper::GetStream_24<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfStream*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfObject::HasStream() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::HasStream_25<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfObject::operator<(const ::PoDoFo::PdfObject& rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorLT_26<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

bool PoDoFo::PdfObject::operator==(const ::PoDoFo::PdfObject& rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorCmpEq_27<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

::PoDoFo::PdfVecObjects* PoDoFo::PdfObject::GetOwner() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(
    __zz_cib_MyHelper::GetOwner_28<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfObject& PoDoFo::PdfObject::operator=(const ::PoDoFo::PdfObject& rhs) {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject&>(
    __zz_cib_MyHelper::__zz_cib_OperatorEqual_29<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfObject&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

void PoDoFo::PdfObject::FlateCompressStream() {
    __zz_cib_MyHelper::FlateCompressStream_30<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

::PoDoFo::pdf_long PoDoFo::PdfObject::GetByteOffset(const char* pszKey, ::PoDoFo::EPdfWriteMode eWriteMode) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::GetByteOffset_31<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszKey)>(std::move(pszKey)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eWriteMode)>(std::move(eWriteMode))
    )
  );
}

void PoDoFo::PdfObject::DelayedStreamLoad() const {
    __zz_cib_MyHelper::DelayedStreamLoad_32<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfObject::EnableDelayedStreamLoading() {
    __zz_cib_MyHelper::EnableDelayedStreamLoading_33<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfObject::DelayedStreamLoadImpl() {
    __zz_cib_MyHelper::DelayedStreamLoadImpl_34<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

::PoDoFo::PdfStream* PoDoFo::PdfObject::GetStream_NoDL() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfStream*>(
    __zz_cib_MyHelper::GetStream_NoDL_35<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfStream*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfObject::AfterDelayedLoad(::PoDoFo::EPdfDataType eDataType) {
    __zz_cib_MyHelper::AfterDelayedLoad_36<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eDataType)>(std::move(eDataType))
    );
  }

void PoDoFo::PdfObject::SetVariantOwner(::PoDoFo::EPdfDataType eDataType) {
    __zz_cib_MyHelper::SetVariantOwner_37<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eDataType)>(std::move(eDataType))
    );
  }

#if  defined(PODOFO_EXTRA_CHECKS)
bool PoDoFo::PdfObject::DelayedStreamLoadInProgress() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::DelayedStreamLoadInProgress_38<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
#endif

bool PoDoFo::PdfObject::DelayedStreamLoadDone() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::DelayedStreamLoadDone_39<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
