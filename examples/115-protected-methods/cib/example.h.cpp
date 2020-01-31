#include "example.h"

#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-proxy.h"

namespace __zz_cib_ {
namespace Example {
using namespace ::Example;
namespace A {
struct __zz_cib_Delegator;
namespace __zz_cib_ProtectedAccessor {
class A : public ::Example::A {
  friend struct __zz_cib_::Example::A::__zz_cib_Delegator;
public:
  using ::Example::A::A;
};
}}}}
namespace __zz_cib_ {
namespace Example {
using namespace ::Example;
namespace A {
struct __zz_cib_Delegator : public ::Example::A {
  using __zz_cib_Delegatee = __zz_cib_ProtectedAccessor::A;
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
  static int __zz_cib_decl f(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_obj->::Example::A::f();
  }
};
}}}

namespace __zz_cib_ {
namespace Example {
using namespace ::Example;
namespace A {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}}
