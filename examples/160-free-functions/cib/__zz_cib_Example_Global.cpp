#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-proxy.h"
#include "__zz_cib_Example-smart-ptr-helper.h"

#include "example-file1.h"
#include "example-file2.h"

namespace __zz_cib_ {
namespace __zz_cib_Example_Global {
namespace __zz_cib_Delegator {
static int __zz_cib_decl GlobalFunction1() {
  return ::GlobalFunction1();
}
}
}}

namespace __zz_cib_ {
namespace __zz_cib_Example_Global {
namespace __zz_cib_Delegator {
static int __zz_cib_decl GlobalFunction2() {
  return ::GlobalFunction2();
}
}
}}

namespace __zz_cib_ {
namespace __zz_cib_Example_Global {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::GlobalFunction1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::GlobalFunction2)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}
