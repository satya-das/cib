#include "example.h"

#include "__zz_cib_Example-class-down-cast.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-generic.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-type-converters.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-proxy-mgr.h"

namespace __zz_cib_ {
using namespace ::Example;
template <>
struct __zz_cib_Delegator<::Example::A> {
  using __zz_cib_Delegatee = ::Example::A;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new ::Example::A();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_1(__zz_cib_AbiType_t<const ::Example::A&> __zz_cib_param0) {
    return new ::Example::A(    __zz_cib_::__zz_cib_FromAbiType<const ::Example::A&>(__zz_cib_param0));
  }
  static void __zz_cib_decl __zz_cib_Delete_2(::Example::A* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl SomeFunc_3(::Example::A* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::Example::A::SomeFunc()
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class258 {
using namespace ::Example;
namespace __zz_cib_Class259 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::A>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::A>::__zz_cib_Copy_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::A>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::A>::SomeFunc_3)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}}
