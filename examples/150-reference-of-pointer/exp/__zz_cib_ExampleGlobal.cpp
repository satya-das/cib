#include "__zz_cib_internal/__zz_cib_Example-type-converters.h"
#include "__zz_cib_internal/__zz_cib_Example-def.h"
#include "__zz_cib_internal/__zz_cib_Example-ids.h"
#include "__zz_cib_internal/__zz_cib_Example-local-proxy-mgr.h"
#include "__zz_cib_internal/__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_internal/__zz_cib_Example-remote-proxy-mgr.h"

#include "example.h"

namespace __zz_cib_ { namespace __zz_cib_ExampleGlobal {
struct __zz_cib_Helper : public __zz_cib_MethodTableHelper {
using __zz_cib_Methodid = __zz_cib_::__zz_cib_ids::__zz_cib_ExampleGlobal::__zz_cib_Methodid;

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

  template <typename _RT, typename ..._Args>
  static auto GetNewA_0(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::GetNewA_0>(
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto GetNewB_1(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::GetNewB_1>(
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto GetNewA_2(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::GetNewA_2>(
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto GetNewB_3(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::GetNewB_3>(
      __zz_cib_args...);
  }
};
}}

int GetNewA(::A*& pA) {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_::__zz_cib_ExampleGlobal::__zz_cib_Helper::GetNewA_0<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(pA)>(pA)
    )
  );
}

int GetNewB(::A*& pA) {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_::__zz_cib_ExampleGlobal::__zz_cib_Helper::GetNewB_1<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(pA)>(pA)
    )
  );
}

int GetNewA(const ::A*& pA) {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_::__zz_cib_ExampleGlobal::__zz_cib_Helper::GetNewA_2<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(pA)>(pA)
    )
  );
}

int GetNewB(const ::A*& pA) {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_::__zz_cib_ExampleGlobal::__zz_cib_Helper::GetNewB_3<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(pA)>(pA)
    )
  );
}
