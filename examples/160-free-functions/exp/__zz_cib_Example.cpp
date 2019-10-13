#include "__zz_cib_internal/__zz_cib_Example-def.h"
#include "__zz_cib_internal/__zz_cib_Example-ids.h"
#include "__zz_cib_internal/__zz_cib_Example-local-proxy-mgr.h"
#include "__zz_cib_internal/__zz_cib_Example-remote-proxy-mgr.h"
#include "__zz_cib_internal/__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_internal/__zz_cib_Example-handle-helper.h"

#include "example-file1.h"
#include "example-file2.h"

namespace __zz_cib_ { namespace Example {
class __zz_cib_Helper : public __zz_cib_MethodTableHelper {
public:
  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_Example_GetMethodTable(__zz_cib_classid))
  {}
  static __zz_cib_Helper& instance() {
    static __zz_cib_Helper helper;
    return helper;
  }

  static int __zz_cib_Function1() {
    using __zz_cib_Function1Proc = int (__zz_cib_decl *) ();
    return instance().invoke<__zz_cib_Function1Proc, __zz_cib_methodid::__zz_cib_Function1>(
      );
  }
  static int __zz_cib_Function2() {
    using __zz_cib_Function2Proc = int (__zz_cib_decl *) ();
    return instance().invoke<__zz_cib_Function2Proc, __zz_cib_methodid::__zz_cib_Function2>(
      );
  }
};
}}

int Example::Function1() {
  return __zz_cib_::Example::__zz_cib_Helper::__zz_cib_Function1();
}

int Example::Function2() {
  return __zz_cib_::Example::__zz_cib_Helper::__zz_cib_Function2();
}
