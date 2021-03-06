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
struct __zz_cib_Delegator<::Example::A> : public ::Example::A {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::Example::A>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::Example::A::A;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::Example::A&> __zz_cib_decl __zz_cib_OperatorLShift_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> x) {
    return __zz_cib_ToAbiType<::Example::A&>(
      __zz_cib_obj->::Example::A::operator <<(
        __zz_cib_::__zz_cib_FromAbiType<int>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::Example::A&> __zz_cib_decl __zz_cib_OperatorRShift_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int&> x) {
    return __zz_cib_ToAbiType<::Example::A&>(
      __zz_cib_obj->::Example::A::operator >>(
        __zz_cib_::__zz_cib_FromAbiType<int&>(x)
      )
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
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::A>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::A>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::A>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::A>::__zz_cib_OperatorLShift_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::A>::__zz_cib_OperatorRShift_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}}
