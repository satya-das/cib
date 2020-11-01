#include "podofo/base/PdfInputDevice.h"
#include "podofo/base/PdfRefCountedInputDevice.h"

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
struct __zz_cib_Delegator<::PoDoFo::PdfRefCountedInputDevice> : public ::PoDoFo::PdfRefCountedInputDevice {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRefCountedInputDevice>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfRefCountedInputDevice::PdfRefCountedInputDevice;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<const char*> pszFilename, __zz_cib_AbiType_t<const char*> pszMode) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFilename),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszMode));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<const char*> pBuffer, __zz_cib_AbiType_t<size_t> lLen) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const char*>(pBuffer),
    __zz_cib_::__zz_cib_FromAbiType<size_t>(lLen));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_3(__zz_cib_AbiType_t<::PoDoFo::PdfInputDevice*> pDevice) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfInputDevice*>(pDevice));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_5(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfInputDevice*> __zz_cib_decl Device_6(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfInputDevice*>(
      __zz_cib_obj->::PoDoFo::PdfRefCountedInputDevice::Device()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfRefCountedInputDevice&> __zz_cib_decl __zz_cib_OperatorEqual_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfRefCountedInputDevice&> rhs) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfRefCountedInputDevice&>(
      __zz_cib_obj->::PoDoFo::PdfRefCountedInputDevice::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRefCountedInputDevice&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class398 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRefCountedInputDevice>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRefCountedInputDevice>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRefCountedInputDevice>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRefCountedInputDevice>::__zz_cib_New_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRefCountedInputDevice>::__zz_cib_Copy_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRefCountedInputDevice>::__zz_cib_Delete_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRefCountedInputDevice>::Device_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRefCountedInputDevice>::__zz_cib_OperatorEqual_7)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}}
