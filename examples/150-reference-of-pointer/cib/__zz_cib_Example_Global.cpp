#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-proxy.h"

#include "example.h"

namespace __zz_cib_ { namespace __zz_cib_Example_Global {
namespace __zz_cib_Delegator {
static int __zz_cib_decl __zz_cib_GetNewA(::A** pA) {
  return ::GetNewA(*pA);
}
static int __zz_cib_decl __zz_cib_GetNewB(::A** pA) {
  return ::GetNewB(*pA);
}
static int __zz_cib_decl __zz_cib_GetNewA_2(::A const ** pA) {
  return ::GetNewA(*pA);
}
static int __zz_cib_decl __zz_cib_GetNewB_3(::A const ** pA) {
  return ::GetNewB(*pA);
}
}
}}

namespace __zz_cib_ { namespace __zz_cib_Example_Global {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_GetNewA),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_GetNewB),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_GetNewA_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_GetNewB_3)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}
