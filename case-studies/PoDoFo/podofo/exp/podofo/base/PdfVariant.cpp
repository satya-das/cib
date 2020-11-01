#include "podofo/base/PdfArray.h"
#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfData.h"
#include "podofo/base/PdfDataType.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfDictionary.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfOutputDevice.h"
#include "podofo/base/PdfParserObject.h"
#include "podofo/base/PdfReference.h"
#include "podofo/base/PdfString.h"
#include "podofo/base/PdfVariant.h"

#include "__zz_cib_internal/__zz_cib_CibPoDoFo-generic.h"

namespace PoDoFo {

PoDoFo::PdfVariant::PdfVariant(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfVariant::PdfVariant(PdfVariant&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfVariant::PdfVariant()
  : PoDoFo::PdfVariant(__zz_cib_MyHelper::__zz_cib_New_0())
{}

PoDoFo::PdfVariant::PdfVariant(bool b)
  : PoDoFo::PdfVariant(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(b)>(std::move(b))))
{}

PoDoFo::PdfVariant::PdfVariant(::PoDoFo::pdf_int64 l)
  : PoDoFo::PdfVariant(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(l)>(std::move(l))))
{}

PoDoFo::PdfVariant::PdfVariant(double d)
  : PoDoFo::PdfVariant(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(d)>(std::move(d))))
{}

PoDoFo::PdfVariant::PdfVariant(const ::PoDoFo::PdfString& rsString)
  : PoDoFo::PdfVariant(__zz_cib_MyHelper::__zz_cib_New_4(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rsString)>(rsString)))
{}

PoDoFo::PdfVariant::PdfVariant(const ::PoDoFo::PdfName& rName)
  : PoDoFo::PdfVariant(__zz_cib_MyHelper::__zz_cib_New_5(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rName)>(rName)))
{}

PoDoFo::PdfVariant::PdfVariant(const ::PoDoFo::PdfReference& rRef)
  : PoDoFo::PdfVariant(__zz_cib_MyHelper::__zz_cib_New_6(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rRef)>(rRef)))
{}

PoDoFo::PdfVariant::PdfVariant(const ::PoDoFo::PdfArray& tList)
  : PoDoFo::PdfVariant(__zz_cib_MyHelper::__zz_cib_New_7(
        __zz_cib_::__zz_cib_ToAbiType<decltype(tList)>(tList)))
{}

PoDoFo::PdfVariant::PdfVariant(const ::PoDoFo::PdfDictionary& rDict)
  : PoDoFo::PdfVariant(__zz_cib_MyHelper::__zz_cib_New_8(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rDict)>(rDict)))
{}

PoDoFo::PdfVariant::PdfVariant(const ::PoDoFo::PdfData& rData)
  : PoDoFo::PdfVariant(__zz_cib_MyHelper::__zz_cib_New_9(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rData)>(rData)))
{}

PoDoFo::PdfVariant::PdfVariant(const ::PoDoFo::PdfVariant& rhs)
  : PoDoFo::PdfVariant(__zz_cib_MyHelper::__zz_cib_Copy_10(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
{}

PoDoFo::PdfVariant::~PdfVariant() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_11(
    h
  );
}

bool PoDoFo::PdfVariant::IsEmpty() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsEmpty_12<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfVariant::Clear() {
    __zz_cib_MyHelper::Clear_13<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

::PoDoFo::EPdfDataType PoDoFo::PdfVariant::GetDataType() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfDataType>(
    __zz_cib_MyHelper::GetDataType_14<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::EPdfDataType>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const char* PoDoFo::PdfVariant::GetDataTypeString() const {
  return __zz_cib_::__zz_cib_FromAbiType<const char*>(
    __zz_cib_MyHelper::GetDataTypeString_15<__zz_cib_::__zz_cib_AbiType_t<const char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfVariant::IsBool() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsBool_16<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfVariant::IsNumber() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsNumber_17<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfVariant::IsReal() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsReal_18<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfVariant::IsString() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsString_19<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfVariant::IsHexString() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsHexString_20<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfVariant::IsName() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsName_21<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfVariant::IsArray() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsArray_22<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfVariant::IsDictionary() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsDictionary_23<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfVariant::IsRawData() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsRawData_24<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfVariant::IsNull() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsNull_25<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfVariant::IsReference() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsReference_26<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfVariant::Write(::PoDoFo::PdfOutputDevice* pDevice, ::PoDoFo::EPdfWriteMode eWriteMode, const ::PoDoFo::PdfEncrypt* pEncrypt) const {
    __zz_cib_MyHelper::Write_27<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eWriteMode)>(std::move(eWriteMode)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt))
    );
  }

void PoDoFo::PdfVariant::Write(::PoDoFo::PdfOutputDevice* pDevice, ::PoDoFo::EPdfWriteMode eWriteMode, const ::PoDoFo::PdfEncrypt* pEncrypt, const ::PoDoFo::PdfName& keyStop) const {
    __zz_cib_MyHelper::Write_28<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eWriteMode)>(std::move(eWriteMode)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(keyStop)>(keyStop)
    );
  }

void PoDoFo::PdfVariant::ToString(std::string& rsData, ::PoDoFo::EPdfWriteMode eWriteMode) const {
    __zz_cib_MyHelper::ToString_29<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rsData)>(rsData),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eWriteMode)>(std::move(eWriteMode))
    );
  }

void PoDoFo::PdfVariant::SetBool(bool b) {
    __zz_cib_MyHelper::SetBool_30<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(b)>(std::move(b))
    );
  }

bool PoDoFo::PdfVariant::GetBool() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::GetBool_31<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfVariant::SetNumber(long l) {
    __zz_cib_MyHelper::SetNumber_32<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(l)>(std::move(l))
    );
  }

::PoDoFo::pdf_int64 PoDoFo::PdfVariant::GetNumber() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_int64>(
    __zz_cib_MyHelper::GetNumber_33<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_int64>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfVariant::SetReal(double d) {
    __zz_cib_MyHelper::SetReal_34<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(d)>(std::move(d))
    );
  }

double PoDoFo::PdfVariant::GetReal() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetReal_35<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfVariant::SetString(const ::PoDoFo::PdfString& str) {
    __zz_cib_MyHelper::SetString_36<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(str)>(str)
    );
  }

const ::PoDoFo::PdfString& PoDoFo::PdfVariant::GetString() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(
    __zz_cib_MyHelper::GetString_37<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfString&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfName& PoDoFo::PdfVariant::GetName() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(
    __zz_cib_MyHelper::GetName_38<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfName&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfArray& PoDoFo::PdfVariant::GetArray() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(
    __zz_cib_MyHelper::GetArray_39<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfArray&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfArray& PoDoFo::PdfVariant::GetArray() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfArray&>(
    __zz_cib_MyHelper::GetArray_40<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfArray&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfDictionary& PoDoFo::PdfVariant::GetDictionary() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfDictionary&>(
    __zz_cib_MyHelper::GetDictionary_41<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfDictionary&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfDictionary& PoDoFo::PdfVariant::GetDictionary() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDictionary&>(
    __zz_cib_MyHelper::GetDictionary_42<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfDictionary&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfReference& PoDoFo::PdfVariant::GetReference() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfReference&>(
    __zz_cib_MyHelper::GetReference_43<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfReference&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfData& PoDoFo::PdfVariant::GetRawData() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfData&>(
    __zz_cib_MyHelper::GetRawData_44<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfData&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfData& PoDoFo::PdfVariant::GetRawData() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfData&>(
    __zz_cib_MyHelper::GetRawData_45<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfData&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfVariant& PoDoFo::PdfVariant::operator=(const ::PoDoFo::PdfVariant& rhs) {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfVariant&>(
    __zz_cib_MyHelper::__zz_cib_OperatorEqual_46<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfVariant&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

bool PoDoFo::PdfVariant::operator==(const ::PoDoFo::PdfVariant& rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorCmpEq_47<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

bool PoDoFo::PdfVariant::operator!=(const ::PoDoFo::PdfVariant& rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorNotEq_48<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

bool PoDoFo::PdfVariant::IsDirty() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsDirty_49<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfVariant::SetImmutable(bool bImmutable) {
    __zz_cib_MyHelper::SetImmutable_50<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bImmutable)>(std::move(bImmutable))
    );
  }

bool PoDoFo::PdfVariant::GetImmutable() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::GetImmutable_51<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfVariant::AssertMutable() const {
    __zz_cib_MyHelper::AssertMutable_52<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfVariant::SetDirty(bool bDirty) {
    __zz_cib_MyHelper::SetDirty_53<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bDirty)>(std::move(bDirty))
    );
  }

void PoDoFo::PdfVariant::DelayedLoad() const {
    __zz_cib_MyHelper::DelayedLoad_54<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfVariant::EnableDelayedLoading() {
    __zz_cib_MyHelper::EnableDelayedLoading_55<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfVariant::DelayedLoadImpl() {
    __zz_cib_MyHelper::DelayedLoadImpl_56<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfVariant::AfterDelayedLoad(::PoDoFo::EPdfDataType eDataType) {
    __zz_cib_MyHelper::AfterDelayedLoad_57<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eDataType)>(std::move(eDataType))
    );
  }

bool PoDoFo::PdfVariant::DelayedLoadDone() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::DelayedLoadDone_58<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfDictionary& PoDoFo::PdfVariant::GetDictionary_NoDL() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfDictionary&>(
    __zz_cib_MyHelper::GetDictionary_NoDL_59<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfDictionary&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfDictionary& PoDoFo::PdfVariant::GetDictionary_NoDL() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDictionary&>(
    __zz_cib_MyHelper::GetDictionary_NoDL_60<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfDictionary&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfArray& PoDoFo::PdfVariant::GetArray_NoDL() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(
    __zz_cib_MyHelper::GetArray_NoDL_61<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfArray&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfArray& PoDoFo::PdfVariant::GetArray_NoDL() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfArray&>(
    __zz_cib_MyHelper::GetArray_NoDL_62<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfArray&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

#if  defined(PODOFO_EXTRA_CHECKS)
PODOFO_NOTHROW PoDoFo::PdfVariant::DelayedLoadInProgress() const {
  return __zz_cib_::__zz_cib_FromAbiType<PODOFO_NOTHROW>(
    __zz_cib_MyHelper::DelayedLoadInProgress_63<__zz_cib_::__zz_cib_AbiType_t<PODOFO_NOTHROW>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
#endif
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template<>
class __zz_cib_Generic<::PoDoFo::PdfVariant> : public ::PoDoFo::PdfVariant {
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class403::__zz_cib_MethodId;
  static __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_CibPoDoFoGetMethodTable(
      __zz_cib_ids::__zz_cib_Class333::__zz_cib_Class403::__zz_cib_classId));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::PoDoFo::PdfVariant(h) {}
public:
  static ::PoDoFo::PdfVariant* __zz_cib_FromHandle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  void AfterDelayedLoad(::PoDoFo::EPdfDataType eDataType) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(eDataType)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::AfterDelayedLoad_57>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(eDataType)>(std::move(eDataType))
    );
  }
  void Write(::PoDoFo::PdfOutputDevice* pDevice, ::PoDoFo::EPdfWriteMode eWriteMode, const ::PoDoFo::PdfEncrypt* pEncrypt, const ::PoDoFo::PdfName& keyStop) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(pDevice)>, __zz_cib_AbiType_t<decltype(eWriteMode)>, __zz_cib_AbiType_t<decltype(pEncrypt)>, __zz_cib_AbiType_t<decltype(keyStop)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Write_28>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eWriteMode)>(std::move(eWriteMode)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(keyStop)>(keyStop)
    );
  }
  void DelayedLoadImpl() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::DelayedLoadImpl_56>(
      __zz_cib_h
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_Helper<::PoDoFo::PdfVariant>::__zz_cib_ReleaseHandle(this);
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_11>(
      __zz_cib_h
    );
  }
};
}

namespace __zz_cib_ {
template<>
::PoDoFo::PdfVariant* __zz_cib_Helper<::PoDoFo::PdfVariant>::__zz_cib_CreateProxy(__zz_cib_AbiType h) {
  switch(__zz_cib_GetClassId(&h)) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class395::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfParserObject>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfParserObject>::__zz_cib_CastFrom__zz_cib_Class403(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class384::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfObject>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfObject>::__zz_cib_CastFrom__zz_cib_Class403(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class403::__zz_cib_classId: {
    auto* const __zz_cib_obj = new ::PoDoFo::PdfVariant(h);
    __zz_cib_RegisterProxy(h, __zz_cib_obj);
    return __zz_cib_obj;
  }
  default: break;
  }
  auto* const __zz_cib_obj = ::__zz_cib_::__zz_cib_Generic<::PoDoFo::PdfVariant>::__zz_cib_FromHandle(h);
  __zz_cib_RegisterProxy(h, __zz_cib_obj);
  return __zz_cib_obj;
}
}
