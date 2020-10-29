#include "SkRefCnt.h"

#include "__zz_cib_Example-class-down-cast.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-generic.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-type-converters.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-proxy-mgr.h"

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::SkRefCntBase> : public ::SkRefCntBase {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::SkRefCntBase>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::SkRefCntBase::SkRefCntBase;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ref_2(const __zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::SkRefCntBase::ref();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl unref_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::SkRefCntBase::unref();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl internal_dispose_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::SkRefCntBase::internal_dispose();
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class258 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::SkRefCntBase>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::SkRefCntBase>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::SkRefCntBase>::ref_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::SkRefCntBase>::unref_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::SkRefCntBase>::internal_dispose_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}
