#include "example.h"

#include "__zz_cib_Example-class-down-cast.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-generic.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-library-type-handler.h"
#include "__zz_cib_Example-mtable-helper.h"

namespace __zz_cib_ {
using namespace ::Example;
using namespace ::Example::Outer;
using namespace ::Example::Outer::Inner;
template <>
struct __zz_cib_Delegator<::Example::Outer::Inner::A> : public ::Example::Outer::Inner::A {
  using __zz_cib_Delegatee = ::Example::Outer::Inner::A;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_RValueAbiType_t<Int> __zz_cib_decl i(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<Int>(
      __zz_cib_obj->::Example::Outer::Inner::A::i()
    );
  }
  static __zz_cib_RValueAbiType_t<Float> __zz_cib_decl f(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<Float>(
      __zz_cib_obj->::Example::Outer::Inner::A::f()
    );
  }
  static __zz_cib_RValueAbiType_t<std::unique_ptr<Int>> __zz_cib_decl pi(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<std::unique_ptr<Int>>(
      __zz_cib_obj->::Example::Outer::Inner::A::pi()
    );
  }
};
}

namespace __zz_cib_ {
using namespace ::Example;
namespace __zz_cib_Class257 {
using namespace ::Example::Outer;
namespace __zz_cib_Class258 {
using namespace ::Example::Outer::Inner;
namespace __zz_cib_Class259 {
using namespace ::Example::Outer::Inner;
namespace __zz_cib_Class260 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Outer::Inner::A>::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Outer::Inner::A>::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Outer::Inner::A>::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Outer::Inner::A>::i),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Outer::Inner::A>::f),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Outer::Inner::A>::pi)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}}}}
