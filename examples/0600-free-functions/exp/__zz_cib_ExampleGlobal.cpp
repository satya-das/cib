#include "__zz_cib_internal/__zz_cib_Example-type-converters.h"
#include "__zz_cib_internal/__zz_cib_Example-def.h"
#include "__zz_cib_internal/__zz_cib_Example-ids.h"
#include "__zz_cib_internal/__zz_cib_Example-handle-proxy-map.h"
#include "__zz_cib_internal/__zz_cib_Example-mtable-helper.h"

#include "example-file2.h"
#include "example-file1.h"

namespace __zz_cib_ { namespace __zz_cib_ExampleGlobal {
struct __zz_cib_Helper : public __zz_cib_MethodTableHelper {
using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_ExampleGlobal::__zz_cib_MethodId;

__zz_cib_Helper()
  : __zz_cib_MethodTableHelper(
    __zz_cib_ExampleGetMethodTable(__zz_cib_ids::__zz_cib_ExampleGlobal::__zz_cib_classId))
{}
static __zz_cib_Helper& __zz_cib_Instance() {
  static __zz_cib_Helper helper;
  return helper;
}
static __zz_cib_MethodTableHelper& __zz_cib_GetMethodTable() {
  return __zz_cib_Instance();
}

  template <typename _RT>
  static auto GlobalFunction2_1() {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) ();
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GlobalFunction2_1>(
      );
  }
  template <typename _RT>
  static auto GlobalFunction1_0() {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) ();
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GlobalFunction1_0>(
      );
  }
};
}}

int GlobalFunction2() {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_::__zz_cib_ExampleGlobal::__zz_cib_Helper::GlobalFunction2_1<__zz_cib_::__zz_cib_AbiType_t<int>>(

    )
  );
}

int GlobalFunction1() {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_::__zz_cib_ExampleGlobal::__zz_cib_Helper::GlobalFunction1_0<__zz_cib_::__zz_cib_AbiType_t<int>>(

    )
  );
}
