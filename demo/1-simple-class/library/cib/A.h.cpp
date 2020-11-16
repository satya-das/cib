#include "A.h"

#include "__zz_cib_Demo-class-down-cast.h"
#include "__zz_cib_Demo-delegate-helper.h"
#include "__zz_cib_Demo-generic.h"
#include "__zz_cib_Demo-ids.h"
#include "__zz_cib_Demo-type-converters.h"
#include "__zz_cib_Demo-mtable-helper.h"
#include "__zz_cib_Demo-proxy-mgr.h"

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::A> : public ::A {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::A>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::A::A;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_1(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl F_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::A::F()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl F_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::A::F(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl V_5(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::A::V()
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class258 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_Copy_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::F_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::F_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::V_5)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}
