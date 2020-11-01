#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfDictionary.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfOutputDevice.h"

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
struct __zz_cib_Delegator<::PoDoFo::PdfDictionary> : public ::PoDoFo::PdfDictionary {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfDictionary>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfDictionary>;

  using ::PoDoFo::PdfDictionary::PdfDictionary;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_1(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfDictionary&> __zz_cib_decl __zz_cib_OperatorEqual_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfDictionary&> rhs) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfDictionary&>(
      __zz_cib_obj->::PoDoFo::PdfDictionary::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfDictionary&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_4(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfDictionary&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfDictionary::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfDictionary&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_5(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfDictionary&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfDictionary::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfDictionary&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Clear_6(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfDictionary::Clear();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddKey_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> identifier, __zz_cib_AbiType_t<const ::PoDoFo::PdfObject&> rObject) {
    __zz_cib_obj->::PoDoFo::PdfDictionary::AddKey(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(identifier),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject&>(rObject)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddKey_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> identifier, __zz_cib_AbiType_t<const ::PoDoFo::PdfObject*> pObject) {
    __zz_cib_obj->::PoDoFo::PdfDictionary::AddKey(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(identifier),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject*>(pObject)
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfObject*> __zz_cib_decl GetKey_9(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> key) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfDictionary::GetKey(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(key)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetKey_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> key) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfDictionary::GetKey(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(key)
      )
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfObject*> __zz_cib_decl FindKey_11(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> key) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfDictionary::FindKey(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(key)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl FindKey_12(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> key) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfDictionary::FindKey(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(key)
      )
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfObject*> __zz_cib_decl FindKeyParent_13(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> key) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfDictionary::FindKeyParent(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(key)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl FindKeyParent_14(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> key) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfDictionary::FindKeyParent(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(key)
      )
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfObject&> __zz_cib_decl MustGetKey_15(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> key) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfObject&>(
      __zz_cib_obj->::PoDoFo::PdfDictionary::MustGetKey(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(key)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_int64> __zz_cib_decl GetKeyAsLong_16(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> key, __zz_cib_AbiType_t<::PoDoFo::pdf_int64> lDefault) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_int64>(
      __zz_cib_obj->::PoDoFo::PdfDictionary::GetKeyAsLong(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(key),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_int64>(lDefault)
      )
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetKeyAsReal_17(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> key, __zz_cib_AbiType_t<double> dDefault) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfDictionary::GetKeyAsReal(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(key),
        __zz_cib_::__zz_cib_FromAbiType<double>(dDefault)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl GetKeyAsBool_18(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> key, __zz_cib_AbiType_t<bool> bDefault) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfDictionary::GetKeyAsBool(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(key),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bDefault)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfName> __zz_cib_decl GetKeyAsName_19(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> key) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfName>(
      __zz_cib_obj->::PoDoFo::PdfDictionary::GetKeyAsName(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(key)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl HasKey_20(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> key) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfDictionary::HasKey(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(key)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl RemoveKey_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> identifier) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfDictionary::RemoveKey(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(identifier)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Write_22(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputDevice*> pDevice, __zz_cib_AbiType_t<::PoDoFo::EPdfWriteMode> eWriteMode, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncrypt*> pEncrypt) {
    __zz_cib_obj->::PoDoFo::PdfDictionary::Write(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputDevice*>(pDevice),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfWriteMode>(eWriteMode),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncrypt*>(pEncrypt)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Write_23(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputDevice*> pDevice, __zz_cib_AbiType_t<::PoDoFo::EPdfWriteMode> eWriteMode, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncrypt*> pEncrypt, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> keyStop) {
    __zz_cib_obj->::PoDoFo::PdfDictionary::Write(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputDevice*>(pDevice),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfWriteMode>(eWriteMode),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncrypt*>(pEncrypt),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(keyStop)
    );
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl GetSize_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->::PoDoFo::PdfDictionary::GetSize()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::TKeyMap&> __zz_cib_decl GetKeys_25(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::TKeyMap&>(
      __zz_cib_obj->::PoDoFo::PdfDictionary::GetKeys()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::TKeyMap&> __zz_cib_decl GetKeys_26(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::TKeyMap&>(
      __zz_cib_obj->::PoDoFo::PdfDictionary::GetKeys()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsDirty_27(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfDictionary::IsDirty()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetDirty_28(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bDirty) {
    __zz_cib_obj->::PoDoFo::PdfDictionary::SetDirty(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bDirty)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::TCIKeyMap> __zz_cib_decl begin_29(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::TCIKeyMap>(
      __zz_cib_obj->::PoDoFo::PdfDictionary::begin()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::TCIKeyMap> __zz_cib_decl end_30(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::TCIKeyMap>(
      __zz_cib_obj->::PoDoFo::PdfDictionary::end()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetOwner_31(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pOwner) {
    __zz_cib_obj->::PoDoFo::PdfDictionary::SetOwner(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pOwner)
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfDictionary* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfDataType* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class346(::PoDoFo::PdfDictionary* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfDictionary* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class346(::PoDoFo::PdfDataType* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfDictionary*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfOwnedDataType* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class392(::PoDoFo::PdfDictionary* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfDictionary* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class392(::PoDoFo::PdfOwnedDataType* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfDictionary*>(__zz_cib_obj);
  }
  static std::uint32_t __zz_cib_decl __zz_cib_GetClassId(::PoDoFo::PdfDictionary** __zz_cib_obj) {
    static bool classIdRepoPopulated = false;
    if (!classIdRepoPopulated) {
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfDictionary))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class349::__zz_cib_classId;
      classIdRepoPopulated = true;
    }
    auto tdx = std::type_index(typeid(**__zz_cib_obj));
    auto itr = __zz_cib_gClassIdRepo.find(tdx);
    if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
    return __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class349::__zz_cib_classId;
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class349 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::__zz_cib_Copy_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::__zz_cib_OperatorEqual_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::__zz_cib_OperatorCmpEq_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::__zz_cib_OperatorNotEq_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::Clear_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::AddKey_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::AddKey_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::GetKey_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::GetKey_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::FindKey_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::FindKey_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::FindKeyParent_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::FindKeyParent_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::MustGetKey_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::GetKeyAsLong_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::GetKeyAsReal_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::GetKeyAsBool_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::GetKeyAsName_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::HasKey_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::RemoveKey_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::Write_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::Write_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::GetSize_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::GetKeys_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::GetKeys_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::IsDirty_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::SetDirty_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::begin_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::end_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::SetOwner_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::__zz_cib_CastTo__zz_cib_Class346),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::__zz_cib_CastFrom__zz_cib_Class346),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::__zz_cib_CastTo__zz_cib_Class392),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::__zz_cib_CastFrom__zz_cib_Class392),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::__zz_cib_GetClassId),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 38 };
  return &methodTable;
}
}}}
