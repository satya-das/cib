#include "__zz_cib_internal/__zz_cib_Example-type-converters.h"
#include "__zz_cib_internal/__zz_cib_Example-def.h"
#include "__zz_cib_internal/__zz_cib_Example-ids.h"
#include "__zz_cib_internal/__zz_cib_Example-local-proxy-mgr.h"
#include "__zz_cib_internal/__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_internal/__zz_cib_Example-remote-proxy-mgr.h"

#include "example-file1.h"
#include "example-file2.h"

namespace __zz_cib_ { namespace __zz_cib_Example_Global {
struct __zz_cib_Helper : public __zz_cib_MethodTableHelper {
using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Example_Global::__zz_cib_methodid;

__zz_cib_Helper()
  : __zz_cib_MethodTableHelper(
    __zz_cib_Example_GetMethodTable(__zz_cib_ids::__zz_cib_Example_Global::__zz_cib_classid))
{}
static __zz_cib_Helper& __zz_cib_instance() {
  static __zz_cib_Helper helper;
  return helper;
}
static __zz_cib_MethodTableHelper& __zz_cib_mtbl() {
  return __zz_cib_instance();
}

  template <typename _RT>
  static auto GlobalFunction1_0() {
    using __zz_cib_proc = _RT (__zz_cib_decl *) ();
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::GlobalFunction1_0>(
      );
  }
  template <typename _RT>
  static auto GlobalFunction2_1() {
    using __zz_cib_proc = _RT (__zz_cib_decl *) ();
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::GlobalFunction2_1>(
      );
  }
};
}}

int GlobalFunction1() {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_::__zz_cib_Example_Global::__zz_cib_Helper::GlobalFunction1_0<__zz_cib_::__zz_cib_AbiType_t<int>>(

    )
  );
}

int GlobalFunction2() {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_::__zz_cib_Example_Global::__zz_cib_Helper::GlobalFunction2_1<__zz_cib_::__zz_cib_AbiType_t<int>>(

    )
  );
}
