#include "example.h"
#include "value.h"

#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-proxy.h"
#include "__zz_cib_Example-smart-ptr-helper.h"

namespace __zz_cib_ {
namespace Example {
using namespace ::Example;
namespace A {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::Example::A;
using __zz_cib_ThisClass = __zz_cib_Delegatee;
static ::Example::A* __zz_cib_decl __zz_cib_new() {
  return new __zz_cib_Delegatee();
}
static ::Example::A* __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static void __zz_cib_decl Set(__zz_cib_Delegatee* __zz_cib_obj, ::Example::Value<int> const * x) {
  __zz_cib_obj->::Example::A::Set(*x);
}
static ::Example::Value<int>* __zz_cib_decl Get(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new ::Example::Value<int>(__zz_cib_obj->::Example::A::Get());
}
static void __zz_cib_decl SetInt(__zz_cib_Delegatee* __zz_cib_obj, ::Example::Value<::Example::Int> const * y) {
  __zz_cib_obj->::Example::A::SetInt(*y);
}
static ::Example::Value<::Example::Int>* __zz_cib_decl GetInt(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new ::Example::Value<::Example::Int>(__zz_cib_obj->::Example::A::GetInt());
}
}
}}}

namespace __zz_cib_ {
namespace Example {
using namespace ::Example;
namespace A {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::Set),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::Get),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::SetInt),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::GetInt)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 7 };
  return &methodTable;
}
}}}
