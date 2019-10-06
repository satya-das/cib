#pragma once

#include "__zz_cib_internal/__zz_cib_Example-def.h"
#include "__zz_cib_internal/__zz_cib_Example-ids.h"
#include "__zz_cib_internal/__zz_cib_Example-local-proxy-mgr.h"
#include "__zz_cib_internal/__zz_cib_Example-null-proxy-mgr.h"
#include "__zz_cib_internal/__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_internal/__zz_cib_Example-handle-helper.h"

namespace __zz_cib_ { namespace CPoint {
class __zz_cib_Helper : public __zz_cib_MethodTableHelper {
private:
  using __zz_cib_TYPE = ::CPoint;
  using _ProxyClass = ::CPoint;
  friend class ::CPoint;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_Example_GetMethodTable(__zz_cib_classid))
  {}
  static __zz_cib_Helper& instance() {
    static __zz_cib_Helper helper;
    return helper;
  }

  static __zz_cib_TYPE* __zz_cib_copy(__zz_cib_TYPE* __zz_cib_obj, ::CPoint const * __zz_cib_param0) {
    using __zz_cib_copyProc = __zz_cib_TYPE* (__zz_cib_decl *) (__zz_cib_TYPE*, ::CPoint const * __zz_cib_param0);
    return instance().invoke<__zz_cib_copyProc, __zz_cib_methodid::__zz_cib_copy>(
      __zz_cib_obj,
      __zz_cib_param0);
  }
  static void __zz_cib_delete(__zz_cib_TYPE* __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_TYPE*);
      return instance().invoke<__zz_cib_deleteProc, __zz_cib_methodid::__zz_cib_delete>(
        __zz_cib_obj
        );
    }
  }
  static __zz_cib_TYPE* __zz_cib_new(__zz_cib_TYPE* __zz_cib_obj, double _x, double _y, double _z) {
    using __zz_cib_newProc = __zz_cib_TYPE* (__zz_cib_decl *) (__zz_cib_TYPE*, double _x, double _y, double _z);
    return instance().invoke<__zz_cib_newProc, __zz_cib_methodid::__zz_cib_new>(
      __zz_cib_obj,
      _x, _y, _z);
  }
  static ::CPoint const * __zz_cib_OperatorPlusEq(__zz_cib_TYPE* __zz_cib_obj, ::CPoint const * p) {
    using __zz_cib_OperatorPlusEqProc = ::CPoint const * (__zz_cib_decl *) (__zz_cib_TYPE*, ::CPoint const * p);
    return instance().invoke<__zz_cib_OperatorPlusEqProc, __zz_cib_methodid::__zz_cib_OperatorPlusEq>(
      __zz_cib_obj,
      p);
  }
};
}}
