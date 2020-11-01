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

#include <typeinfo>
#include <typeindex>
#include <cstdint>
#include <unordered_map>

extern std::unordered_map<std::type_index, std::uint32_t> __zz_cib_gClassIdRepo;

#include "__zz_cib_CibPoDoFo-class-down-cast.h"
#include "__zz_cib_CibPoDoFo-delegate-helper.h"
#include "__zz_cib_CibPoDoFo-generic.h"
#include "__zz_cib_CibPoDoFo-ids.h"
#include "__zz_cib_CibPoDoFo-type-converters.h"
#include "__zz_cib_CibPoDoFo-mtable-helper.h"
#include "__zz_cib_CibPoDoFo-proxy-mgr.h"

namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfVariant> : public ::PoDoFo::PdfVariant {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfVariant>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfVariant>;

  using ::PoDoFo::PdfVariant::PdfVariant;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<bool> b) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<bool>(b));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::PoDoFo::pdf_int64> l) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_int64>(l));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_3(__zz_cib_AbiType_t<double> d) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<double>(d));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_4(__zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rsString) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rsString));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_5(__zz_cib_AbiType_t<const ::PoDoFo::PdfName&> rName) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(rName));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_6(__zz_cib_AbiType_t<const ::PoDoFo::PdfReference&> rRef) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfReference&>(rRef));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_7(__zz_cib_AbiType_t<const ::PoDoFo::PdfArray&> tList) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(tList));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_8(__zz_cib_AbiType_t<const ::PoDoFo::PdfDictionary&> rDict) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfDictionary&>(rDict));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_9(__zz_cib_AbiType_t<const ::PoDoFo::PdfData&> rData) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfData&>(rData));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_11(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsEmpty_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfVariant::IsEmpty()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Clear_13(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfVariant::Clear();
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfDataType> __zz_cib_decl GetDataType_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfDataType>(
      __zz_cib_obj->::PoDoFo::PdfVariant::GetDataType()
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl GetDataTypeString_15(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->::PoDoFo::PdfVariant::GetDataTypeString()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsBool_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfVariant::IsBool()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsNumber_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfVariant::IsNumber()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsReal_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfVariant::IsReal()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsString_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfVariant::IsString()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsHexString_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfVariant::IsHexString()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsName_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfVariant::IsName()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsArray_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfVariant::IsArray()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsDictionary_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfVariant::IsDictionary()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsRawData_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfVariant::IsRawData()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsNull_25(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfVariant::IsNull()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsReference_26(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfVariant::IsReference()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Write_27(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputDevice*> pDevice, __zz_cib_AbiType_t<::PoDoFo::EPdfWriteMode> eWriteMode, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncrypt*> pEncrypt) {
    __zz_cib_obj->::PoDoFo::PdfVariant::Write(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputDevice*>(pDevice),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfWriteMode>(eWriteMode),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncrypt*>(pEncrypt)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Write_28(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputDevice*> pDevice, __zz_cib_AbiType_t<::PoDoFo::EPdfWriteMode> eWriteMode, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncrypt*> pEncrypt, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> keyStop) {
    __zz_cib_obj->::PoDoFo::PdfVariant::Write(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputDevice*>(pDevice),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfWriteMode>(eWriteMode),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncrypt*>(pEncrypt),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(keyStop)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ToString_29(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<std::string&> rsData, __zz_cib_AbiType_t<::PoDoFo::EPdfWriteMode> eWriteMode) {
    __zz_cib_obj->::PoDoFo::PdfVariant::ToString(
      __zz_cib_::__zz_cib_FromAbiType<std::string&>(rsData),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfWriteMode>(eWriteMode)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetBool_30(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> b) {
    __zz_cib_obj->::PoDoFo::PdfVariant::SetBool(
      __zz_cib_::__zz_cib_FromAbiType<bool>(b)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl GetBool_31(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfVariant::GetBool()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetNumber_32(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<long> l) {
    __zz_cib_obj->::PoDoFo::PdfVariant::SetNumber(
      __zz_cib_::__zz_cib_FromAbiType<long>(l)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_int64> __zz_cib_decl GetNumber_33(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_int64>(
      __zz_cib_obj->::PoDoFo::PdfVariant::GetNumber()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetReal_34(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> d) {
    __zz_cib_obj->::PoDoFo::PdfVariant::SetReal(
      __zz_cib_::__zz_cib_FromAbiType<double>(d)
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetReal_35(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfVariant::GetReal()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetString_36(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> str) {
    __zz_cib_obj->::PoDoFo::PdfVariant::SetString(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(str)
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> __zz_cib_decl GetString_37(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfString&>(
      __zz_cib_obj->::PoDoFo::PdfVariant::GetString()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> __zz_cib_decl GetName_38(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfName&>(
      __zz_cib_obj->::PoDoFo::PdfVariant::GetName()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfArray&> __zz_cib_decl GetArray_39(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfArray&>(
      __zz_cib_obj->::PoDoFo::PdfVariant::GetArray()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfArray&> __zz_cib_decl GetArray_40(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfArray&>(
      __zz_cib_obj->::PoDoFo::PdfVariant::GetArray()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfDictionary&> __zz_cib_decl GetDictionary_41(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfDictionary&>(
      __zz_cib_obj->::PoDoFo::PdfVariant::GetDictionary()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfDictionary&> __zz_cib_decl GetDictionary_42(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfDictionary&>(
      __zz_cib_obj->::PoDoFo::PdfVariant::GetDictionary()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfReference&> __zz_cib_decl GetReference_43(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfReference&>(
      __zz_cib_obj->::PoDoFo::PdfVariant::GetReference()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfData&> __zz_cib_decl GetRawData_44(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfData&>(
      __zz_cib_obj->::PoDoFo::PdfVariant::GetRawData()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfData&> __zz_cib_decl GetRawData_45(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfData&>(
      __zz_cib_obj->::PoDoFo::PdfVariant::GetRawData()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfVariant&> __zz_cib_decl __zz_cib_OperatorEqual_46(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfVariant&> rhs) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfVariant&>(
      __zz_cib_obj->::PoDoFo::PdfVariant::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfVariant&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_47(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfVariant&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfVariant::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfVariant&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_48(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfVariant&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfVariant::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfVariant&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsDirty_49(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfVariant::IsDirty()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetImmutable_50(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bImmutable) {
    __zz_cib_obj->::PoDoFo::PdfVariant::SetImmutable(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bImmutable)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl GetImmutable_51(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfVariant::GetImmutable()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AssertMutable_52(const __zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfVariant::AssertMutable();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetDirty_53(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bDirty) {
    __zz_cib_obj->::PoDoFo::PdfVariant::SetDirty(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bDirty)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DelayedLoad_54(const __zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfVariant::DelayedLoad();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EnableDelayedLoading_55(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfVariant::EnableDelayedLoading();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DelayedLoadImpl_56(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfVariant::DelayedLoadImpl();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AfterDelayedLoad_57(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::EPdfDataType> eDataType) {
    __zz_cib_obj->::PoDoFo::PdfVariant::AfterDelayedLoad(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfDataType>(eDataType)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl DelayedLoadDone_58(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfVariant::DelayedLoadDone()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfDictionary&> __zz_cib_decl GetDictionary_NoDL_59(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfDictionary&>(
      __zz_cib_obj->::PoDoFo::PdfVariant::GetDictionary_NoDL()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfDictionary&> __zz_cib_decl GetDictionary_NoDL_60(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfDictionary&>(
      __zz_cib_obj->::PoDoFo::PdfVariant::GetDictionary_NoDL()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfArray&> __zz_cib_decl GetArray_NoDL_61(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfArray&>(
      __zz_cib_obj->::PoDoFo::PdfVariant::GetArray_NoDL()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfArray&> __zz_cib_decl GetArray_NoDL_62(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfArray&>(
      __zz_cib_obj->::PoDoFo::PdfVariant::GetArray_NoDL()
    );
  }
#if  defined(PODOFO_EXTRA_CHECKS)
  static __zz_cib_AbiType_t<PODOFO_NOTHROW> __zz_cib_decl DelayedLoadInProgress_63(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<PODOFO_NOTHROW>(
      __zz_cib_obj->::PoDoFo::PdfVariant::DelayedLoadInProgress()
    );
  }
#endif
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfVariant* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static std::uint32_t __zz_cib_decl __zz_cib_GetClassId(::PoDoFo::PdfVariant** __zz_cib_obj) {
    static bool classIdRepoPopulated = false;
    if (!classIdRepoPopulated) {
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfParserObject))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class395::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfObject))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class384::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfVariant))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class403::__zz_cib_classId;
      classIdRepoPopulated = true;
    }
    auto tdx = std::type_index(typeid(**__zz_cib_obj));
    auto itr = __zz_cib_gClassIdRepo.find(tdx);
    if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfParserObject*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class395::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfObject*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class384::__zz_cib_classId;
      }
    }
    return __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class403::__zz_cib_classId;
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class403 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::__zz_cib_New_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::__zz_cib_New_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::__zz_cib_New_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::__zz_cib_New_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::__zz_cib_New_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::__zz_cib_New_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::__zz_cib_Copy_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::__zz_cib_Delete_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::IsEmpty_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::Clear_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::GetDataType_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::GetDataTypeString_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::IsBool_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::IsNumber_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::IsReal_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::IsString_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::IsHexString_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::IsName_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::IsArray_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::IsDictionary_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::IsRawData_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::IsNull_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::IsReference_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::Write_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::Write_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::ToString_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::SetBool_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::GetBool_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::SetNumber_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::GetNumber_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::SetReal_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::GetReal_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::SetString_36),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::GetString_37),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::GetName_38),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::GetArray_39),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::GetArray_40),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::GetDictionary_41),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::GetDictionary_42),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::GetReference_43),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::GetRawData_44),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::GetRawData_45),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::__zz_cib_OperatorEqual_46),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::__zz_cib_OperatorCmpEq_47),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::__zz_cib_OperatorNotEq_48),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::IsDirty_49),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::SetImmutable_50),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::GetImmutable_51),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::AssertMutable_52),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::SetDirty_53),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::DelayedLoad_54),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::EnableDelayedLoading_55),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::DelayedLoadImpl_56),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::AfterDelayedLoad_57),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::DelayedLoadDone_58),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::GetDictionary_NoDL_59),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::GetDictionary_NoDL_60),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::GetArray_NoDL_61),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::GetArray_NoDL_62),
#if  defined(PODOFO_EXTRA_CHECKS)
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::DelayedLoadInProgress_63),
#else 
    reinterpret_cast<__zz_cib_MTableEntry> (0),
#endif
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::__zz_cib_GetClassId),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVariant>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 66 };
  return &methodTable;
}
}}}
