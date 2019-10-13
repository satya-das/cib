#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-proxy.h"

#include "example-file1.h"
#include "example-file2.h"

namespace __zz_cib_ { namespace Example {
namespace __zz_cib_Delegator {
namespace __zz_cib_Delegatee = ::Example;
static int __zz_cib_decl __zz_cib_Function1() {
  return ::Example::Function1();
}
}
}}

namespace __zz_cib_ { namespace Example {
namespace __zz_cib_Delegator {
namespace __zz_cib_Delegatee = ::Example;
static int __zz_cib_decl __zz_cib_Function2() {
  return ::Example::Function2();
}
}
}}

namespace __zz_cib_ { namespace Example {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_Function1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_Function2)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}
