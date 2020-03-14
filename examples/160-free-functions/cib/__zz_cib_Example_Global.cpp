#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-generic.h"
#include "__zz_cib_Example-library-type-handler.h"
#include "__zz_cib_Example-class-down-cast.h"

#include "example-file1.h"

#include "example-file1.h"
#include "example-file2.h"

#include "example-file2.h"

namespace __zz_cib_ { namespace __zz_cib_NsDelegator {
static __zz_cib_AbiType_t<int> __zz_cib_decl GlobalFunction1() {
  return __zz_cib_ToAbiType<int>(
    ::GlobalFunction1()
  );
}
}}

namespace __zz_cib_ { namespace __zz_cib_NsDelegator {
static __zz_cib_AbiType_t<int> __zz_cib_decl GlobalFunction2() {
  return __zz_cib_ToAbiType<int>(
    ::GlobalFunction2()
  );
}
}}

namespace __zz_cib_ {
namespace __zz_cib_Example_Global {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_NsDelegator::GlobalFunction1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_NsDelegator::GlobalFunction2)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}
