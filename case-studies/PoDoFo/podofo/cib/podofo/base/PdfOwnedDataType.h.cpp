#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfOwnedDataType.h"
#include "podofo/base/PdfReference.h"
#include "podofo/base/PdfVecObjects.h"

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
struct __zz_cib_Delegator<::PoDoFo::PdfOwnedDataType> : public ::PoDoFo::PdfOwnedDataType {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOwnedDataType>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfOwnedDataType>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfOwnedDataType>;

  using ::PoDoFo::PdfOwnedDataType::PdfOwnedDataType;

  static __zz_cib_AbiType_t<const ::PoDoFo::PdfObject*> __zz_cib_decl GetOwner_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfOwnedDataType::GetOwner()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetOwner_1(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfOwnedDataType::GetOwner()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfOwnedDataType&> __zz_cib_decl __zz_cib_OperatorEqual_2(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfOwnedDataType&> rhs) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfOwnedDataType&>(
      __zz_cib_obj->::PoDoFo::PdfOwnedDataType::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfOwnedDataType&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetIndirectObject_3(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfReference&> rReference) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfOwnedDataType::GetIndirectObject(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfReference&>(rReference)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> __zz_cib_decl GetObjectOwner_4(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfVecObjects*>(
      __zz_cib_obj->::PoDoFo::PdfOwnedDataType::GetObjectOwner()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetOwner_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pOwner) {
    __zz_cib_obj->::PoDoFo::PdfOwnedDataType::SetOwner(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pOwner)
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfOwnedDataType* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfDataType* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class346(::PoDoFo::PdfOwnedDataType* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfOwnedDataType* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class346(::PoDoFo::PdfDataType* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfOwnedDataType*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class392 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOwnedDataType>::GetOwner_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOwnedDataType>::GetOwner_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOwnedDataType>::__zz_cib_OperatorEqual_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOwnedDataType>::GetIndirectObject_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOwnedDataType>::GetObjectOwner_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOwnedDataType>::SetOwner_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOwnedDataType>::__zz_cib_CastTo__zz_cib_Class346),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOwnedDataType>::__zz_cib_CastFrom__zz_cib_Class346),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOwnedDataType>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 9 };
  return &methodTable;
}
}}}
