#include "example.h"

#include "__zz_cib_Example-class-down-cast.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-generic.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-type-converters.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-proxy-mgr.h"

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::A> {
  using __zz_cib_Delegatee = ::A;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new ::A();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_1(__zz_cib_AbiType_t<const ::A&> a) {
    return new ::A(    __zz_cib_::__zz_cib_FromAbiType<const ::A&>(a));
  }
  static void __zz_cib_decl __zz_cib_Delete_2(::A* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl SomeFunc_3(::A* __zz_cib_obj, __zz_cib_AbiType_t<int> x) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::A::SomeFunc(
        __zz_cib_::__zz_cib_FromAbiType<int>(x)
      )
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
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::SomeFunc_3)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}
