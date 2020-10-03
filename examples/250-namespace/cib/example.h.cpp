#include "__zz_cib_helpers/__zz_cib_helper-example.h"

#include "__zz_cib_Example-class-down-cast.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-generic.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-type-converters.h"
#include "__zz_cib_Example-mtable-helper.h"

namespace __zz_cib_ {
using namespace ::Example;
using namespace ::Example::Outer;
using namespace ::Example::Outer::Inner;
template <>
struct __zz_cib_Delegator<::Example::Outer::Inner::A> : public ::Example::Outer::Inner::A {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::Example::Outer::Inner::A>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::Example::Outer::Inner::A::A;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::Example::Int> __zz_cib_decl i_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::Example::Int>(
      __zz_cib_obj->::Example::Outer::Inner::A::i()
    );
  }
  static __zz_cib_AbiType_t<::Example::Outer::Inner::Float> __zz_cib_decl f_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::Example::Outer::Inner::Float>(
      __zz_cib_obj->::Example::Outer::Inner::A::f()
    );
  }
  static __zz_cib_AbiType_t<std::unique_ptr<Int>> __zz_cib_decl pi_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<std::unique_ptr<Int>>(
      __zz_cib_obj->::Example::Outer::Inner::A::pi()
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class258 {
using namespace ::Example;
namespace __zz_cib_Class259 {
using namespace ::Example::Outer;
namespace __zz_cib_Class260 {
using namespace ::Example::Outer::Inner;
namespace __zz_cib_Class261 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Outer::Inner::A>::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Outer::Inner::A>::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Outer::Inner::A>::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Outer::Inner::A>::i_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Outer::Inner::A>::f_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Outer::Inner::A>::pi_5)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}}}}
