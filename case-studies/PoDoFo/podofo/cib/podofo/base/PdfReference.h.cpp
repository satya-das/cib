#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfOutputDevice.h"
#include "podofo/base/PdfReference.h"

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
struct __zz_cib_Delegator<::PoDoFo::PdfReference> : public ::PoDoFo::PdfReference {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfReference>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfReference>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfReference>;

  using ::PoDoFo::PdfReference::PdfReference;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<const ::PoDoFo::pdf_uint32> nObjectNo, __zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16> nGenerationNo) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::pdf_uint32>(nObjectNo),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::pdf_uint16>(nGenerationNo));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_2(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_3(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<const std::string> __zz_cib_decl ToString_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const std::string>(
      __zz_cib_obj->::PoDoFo::PdfReference::ToString()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfReference&> __zz_cib_decl __zz_cib_OperatorEqual_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfReference&> rhs) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfReference&>(
      __zz_cib_obj->::PoDoFo::PdfReference::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfReference&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Write_6(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputDevice*> pDevice, __zz_cib_AbiType_t<::PoDoFo::EPdfWriteMode> eWriteMode, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncrypt*> pEncrypt) {
    __zz_cib_obj->::PoDoFo::PdfReference::Write(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputDevice*>(pDevice),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfWriteMode>(eWriteMode),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncrypt*>(pEncrypt)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_7(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfReference&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfReference::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfReference&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_8(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfReference&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfReference::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfReference&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_9(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfReference&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfReference::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfReference&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetObjectNumber_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::pdf_uint32> o) {
    __zz_cib_obj->::PoDoFo::PdfReference::SetObjectNumber(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_uint32>(o)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_uint32> __zz_cib_decl ObjectNumber_11(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_uint32>(
      __zz_cib_obj->::PoDoFo::PdfReference::ObjectNumber()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetGenerationNumber_12(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16> g) {
    __zz_cib_obj->::PoDoFo::PdfReference::SetGenerationNumber(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::pdf_uint16>(g)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_uint16> __zz_cib_decl GenerationNumber_13(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_uint16>(
      __zz_cib_obj->::PoDoFo::PdfReference::GenerationNumber()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsIndirect_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfReference::IsIndirect()
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfReference* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfDataType* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class346(::PoDoFo::PdfReference* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfReference* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class346(::PoDoFo::PdfDataType* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfReference*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class399 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfReference>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfReference>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfReference>::__zz_cib_Copy_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfReference>::__zz_cib_Delete_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfReference>::ToString_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfReference>::__zz_cib_OperatorEqual_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfReference>::Write_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfReference>::__zz_cib_OperatorCmpEq_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfReference>::__zz_cib_OperatorNotEq_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfReference>::__zz_cib_OperatorLT_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfReference>::SetObjectNumber_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfReference>::ObjectNumber_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfReference>::SetGenerationNumber_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfReference>::GenerationNumber_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfReference>::IsIndirect_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfReference>::__zz_cib_CastTo__zz_cib_Class346),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfReference>::__zz_cib_CastFrom__zz_cib_Class346),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfReference>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 18 };
  return &methodTable;
}
}}}
