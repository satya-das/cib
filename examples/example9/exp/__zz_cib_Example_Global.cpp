#pragma once

#include "__zz_cib_internal/__zz_cib_Example-def.h"
#include "__zz_cib_internal/__zz_cib_Example-ids.h"
#include "__zz_cib_internal/__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_internal/__zz_cib_Example-handle-helper.h"
namespace __zz_cib_ { namespace __zz_cib_Example_Global {
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

  static int GlobalFunction1_0() {
    using GlobalFunction1Proc = int (__zz_cib_decl *) ();
    return instance().invoke<GlobalFunction1Proc, __zz_cib_methodid::GlobalFunction1_0>(
      );
  }
  static int GlobalFunction2_1() {
    using GlobalFunction2Proc = int (__zz_cib_decl *) ();
    return instance().invoke<GlobalFunction2Proc, __zz_cib_methodid::GlobalFunction2_1>(
      );
  }
};
}}

#include "example-file1.h"

int GlobalFunction1() {
  return __zz_cib_::__zz_cib_Example_Global::__zz_cib_Helper::GlobalFunction1_0();
}

#include "example-file2.h"

int GlobalFunction2() {
  return __zz_cib_::__zz_cib_Example_Global::__zz_cib_Helper::GlobalFunction2_1();
}
