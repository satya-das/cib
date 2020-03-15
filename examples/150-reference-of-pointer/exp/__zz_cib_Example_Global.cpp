#include "__zz_cib_internal/__zz_cib_Example-client-type-handler.h"
#include "__zz_cib_internal/__zz_cib_Example-def.h"
#include "__zz_cib_internal/__zz_cib_Example-handle-helper.h"
#include "__zz_cib_internal/__zz_cib_Example-ids.h"
#include "__zz_cib_internal/__zz_cib_Example-local-proxy-mgr.h"
#include "__zz_cib_internal/__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_internal/__zz_cib_Example-remote-proxy-mgr.h"

#include "example.h"

namespace __zz_cib_ { namespace __zz_cib_Example_Global {
struct __zz_cib_Helper : public __zz_cib_MethodTableHelper {
using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Example_Global::__zz_cib_methodid;

__zz_cib_Helper()
  : __zz_cib_MethodTableHelper(
    __zz_cib_Example_GetMethodTable(__zz_cib_ids::__zz_cib_Example_Global::__zz_cib_classid))
{}
static __zz_cib_Helper& instance() {
  static __zz_cib_Helper helper;
  return helper;
}

  template <typename _RT, typename ..._Args>
  static auto GetNewA(_Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (_Args...);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::GetNewA>(
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto GetNewB(_Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (_Args...);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::GetNewB>(
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto GetNewA_2(_Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (_Args...);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::GetNewA_2>(
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto GetNewB_3(_Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (_Args...);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::GetNewB_3>(
      __zz_cib_args...);
  }
};
}}

int GetNewA(A*& pA) {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_::__zz_cib_Example_Global::__zz_cib_Helper::GetNewA<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<A*&>(pA)
    )
  );
}

int GetNewB(A*& pA) {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_::__zz_cib_Example_Global::__zz_cib_Helper::GetNewB<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<A*&>(pA)
    )
  );
}

int GetNewA(const A*& pA) {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_::__zz_cib_Example_Global::__zz_cib_Helper::GetNewA_2<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<const A*&>(pA)
    )
  );
}

int GetNewB(const A*& pA) {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_::__zz_cib_Example_Global::__zz_cib_Helper::GetNewB_3<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<const A*&>(pA)
    )
  );
}
