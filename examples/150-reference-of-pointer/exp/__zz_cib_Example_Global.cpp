#include "__zz_cib_internal/__zz_cib_Example-def.h"
#include "__zz_cib_internal/__zz_cib_Example-ids.h"
#include "__zz_cib_internal/__zz_cib_Example-local-proxy-mgr.h"
#include "__zz_cib_internal/__zz_cib_Example-remote-proxy-mgr.h"
#include "__zz_cib_internal/__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_internal/__zz_cib_Example-handle-helper.h"

#include "example.h"

namespace __zz_cib_ { namespace __zz_cib_Example_Global {
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

  static int GetNewA(__zz_cib_HANDLE** pA) {
    using GetNewAProc = int (__zz_cib_decl *) (__zz_cib_HANDLE** pA);
    return instance().invoke<GetNewAProc, __zz_cib_methodid::GetNewA>(
      pA);
  }
  static int GetNewB(__zz_cib_HANDLE** pA) {
    using GetNewBProc = int (__zz_cib_decl *) (__zz_cib_HANDLE** pA);
    return instance().invoke<GetNewBProc, __zz_cib_methodid::GetNewB>(
      pA);
  }
  static int GetNewA_2(__zz_cib_HANDLE const ** pA) {
    using GetNewAProc = int (__zz_cib_decl *) (__zz_cib_HANDLE const ** pA);
    return instance().invoke<GetNewAProc, __zz_cib_methodid::GetNewA_2>(
      pA);
  }
  static int GetNewB_3(__zz_cib_HANDLE const ** pA) {
    using GetNewBProc = int (__zz_cib_decl *) (__zz_cib_HANDLE const ** pA);
    return instance().invoke<GetNewBProc, __zz_cib_methodid::GetNewB_3>(
      pA);
  }
};
}}

int GetNewA(::A*& pA) {
  return __zz_cib_::__zz_cib_Example_Global::__zz_cib_Helper::GetNewA(__zz_cib_::A::__zz_cib_Helper::__zz_cib_handle(&pA));
}

int GetNewB(::A*& pA) {
  return __zz_cib_::__zz_cib_Example_Global::__zz_cib_Helper::GetNewB(__zz_cib_::A::__zz_cib_Helper::__zz_cib_handle(&pA));
}

int GetNewA(::A const *& pA) {
  return __zz_cib_::__zz_cib_Example_Global::__zz_cib_Helper::GetNewA_2(__zz_cib_::A::__zz_cib_Helper::__zz_cib_handle(&pA));
}

int GetNewB(::A const *& pA) {
  return __zz_cib_::__zz_cib_Example_Global::__zz_cib_Helper::GetNewB_3(__zz_cib_::A::__zz_cib_Helper::__zz_cib_handle(&pA));
}
