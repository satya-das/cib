#include "example.h"

#include "__zz_cib_Example-class-down-cast.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-generic.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-library-type-handler.h"
#include "__zz_cib_Example-mtable-helper.h"

namespace __zz_cib_ {
using namespace ::Example;
template <>
struct __zz_cib_Delegator<::Example::A> : public ::Example::A {
  using __zz_cib_Delegatee = ::Example::A;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  static ::Example::A* __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static ::Example::A* __zz_cib_decl __zz_cib_new() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl SomeFunc(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::Example::A::SomeFunc()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl AnotherFunction(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::Example::A::AnotherFunction()
    );
  }
};
}

namespace __zz_cib_ {
using namespace ::Example;
namespace __zz_cib_Class257 {
using namespace ::Example;
namespace __zz_cib_Class258 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::A>::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::A>::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::A>::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::A>::SomeFunc),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::A>::AnotherFunction)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}}
