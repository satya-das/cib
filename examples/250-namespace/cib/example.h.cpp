#include "example.h"

#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-proxy.h"
#include "__zz_cib_Example-smart-ptr-helper.h"

namespace __zz_cib_ {
using namespace ::Example;
namespace Example {
using namespace ::Example::Outer;
namespace Outer {
using namespace ::Example::Outer::Inner;
namespace Inner {
using namespace ::Example::Outer::Inner;
namespace A {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::Example::Outer::Inner::A;
using __zz_cib_ThisClass = __zz_cib_Delegatee;
static ::Example::Outer::Inner::A* __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::Example::Outer::Inner::A* __zz_cib_decl __zz_cib_new() {
  return new __zz_cib_Delegatee();
}
static ::Example::Int __zz_cib_decl i(const __zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::Example::Outer::Inner::A::i();
}
static ::Example::Outer::Inner::Float __zz_cib_decl f(const __zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::Example::Outer::Inner::A::f();
}
static ::Example::Int* __zz_cib_decl pi(const __zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::Example::Outer::Inner::A::pi().release();
}
}
}}}}}

namespace __zz_cib_ {
using namespace ::Example;
namespace Example {
using namespace ::Example::Outer;
namespace Outer {
using namespace ::Example::Outer::Inner;
namespace Inner {
using namespace ::Example::Outer::Inner;
namespace A {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::i),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::pi)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}}}}
