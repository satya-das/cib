#include "example.h"

#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-proxy.h"
#include "__zz_cib_Example-smart-ptr-helper.h"

namespace __zz_cib_ {
namespace RValueExample {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::RValueExample;
using __zz_cib_ThisClass = __zz_cib_Delegatee;
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::RValueExample* __zz_cib_decl __zz_cib_new(std::int32_t val) {
  return new __zz_cib_Delegatee(val);
}
static ::RValueExample* __zz_cib_decl __zz_cib_new_2(::RValueExample* __zz_cib_param0) {
  return new __zz_cib_Delegatee(std::move(*__zz_cib_param0));
}
static ::RValueExample* __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static ::RValueExample* __zz_cib_decl __zz_cib_OperatorEqual(__zz_cib_Delegatee* __zz_cib_obj, ::RValueExample* rhs) {
  return &__zz_cib_obj->::RValueExample::operator=(std::move(*rhs));
}
static ::RValueExample* __zz_cib_decl __zz_cib_OperatorEqual_5(__zz_cib_Delegatee* __zz_cib_obj, ::RValueExample const * rhs) {
  return &__zz_cib_obj->::RValueExample::operator=(*rhs);
}
static std::int32_t __zz_cib_decl Set(__zz_cib_Delegatee* __zz_cib_obj, ::RValueExample* x) {
  return __zz_cib_obj->::RValueExample::Set(std::move(*x));
}
static std::int32_t __zz_cib_decl GetValue(const __zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::RValueExample::GetValue();
}
}
}}

namespace __zz_cib_ {
namespace RValueExample {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_OperatorEqual),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_OperatorEqual_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::Set),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::GetValue)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}
