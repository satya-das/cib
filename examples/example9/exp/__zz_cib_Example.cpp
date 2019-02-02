#pragma once

#include "__zz_cib_internal/__zz_cib_Example-def.h"
#include "__zz_cib_internal/__zz_cib_Example-ids.h"
#include "__zz_cib_internal/__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_internal/__zz_cib_Example-handle-helper.h"
namespace __zz_cib_ { namespace Example {
class __zz_cib_Helper : public __zz_cib_::__zz_cib_MethodTableHelper {
public:
  __zz_cib_Helper()
    : __zz_cib_::__zz_cib_MethodTableHelper(
      __zz_cib_Example_GetMethodTable(__zz_cib_classid))
  {}
  static __zz_cib_Helper& instance() {
    static __zz_cib_Helper helper;
    return helper;
  }

  static int Function1_0() {
    using Function1Proc = int (__zz_cib_decl *) ();
    return instance().invoke<Function1Proc, __zz_cib_methodid::Function1_0>(
      );
  }
  static int Function2_1() {
    using Function2Proc = int (__zz_cib_decl *) ();
    return instance().invoke<Function2Proc, __zz_cib_methodid::Function2_1>(
      );
  }
};
}}

#include "example-file1.h"

int Example::Function1() {
  return __zz_cib_::Example::__zz_cib_Helper::Function1_0();
}

#include "example-file2.h"

int Example::Function2() {
  return __zz_cib_::Example::__zz_cib_Helper::Function2_1();
}
