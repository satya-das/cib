#include "A.h"

#include "__zz_cib_Demo-class-down-cast.h"
#include "__zz_cib_Demo-delegate-helper.h"
#include "__zz_cib_Demo-generic.h"
#include "__zz_cib_Demo-ids.h"
#include "__zz_cib_Demo-type-converters.h"
#include "__zz_cib_Demo-mtable-helper.h"
#include "__zz_cib_Demo-proxy-mgr.h"

namespace __zz_cib_ {
template <>
class __zz_cib_Generic<::Context> : public ::Context {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::Context>;

  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::Context>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable)
    : ::Context::Context()
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_methodTableHelper(__zz_cib_GetMethodTable)
  {}
  void DrawCircle(float r) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(r)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::DrawCircle_0>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(r)>(std::move(r))
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_1>(
      __zz_cib_h
    );
  }
  void __zz_cib_ReleaseProxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::Context)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_methodTableHelper;

  const __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() const {
    return __zz_cib_methodTableHelper;
  }
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_Generic::__zz_cib_MethodId;
};
}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::Context> : public ::Context {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::Context>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::Context>;

  using ::Context::Context;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable) {
    return new __zz_cib_::__zz_cib_Generic<::Context>(__zz_cib_proxy, __zz_cib_GetMethodTable);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DrawCircle_2(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<float> r) {
    __zz_cib_obj->DrawCircle(
      __zz_cib_::__zz_cib_FromAbiType<float>(r)
    );
  }
  static void __zz_cib_decl __zz_cib_ReleaseProxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_ReleaseProxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class258 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Context>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Context>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Context>::DrawCircle_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Context>::__zz_cib_ReleaseProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::Circle> : public ::Circle {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::Circle>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::Circle::Circle;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<float> r) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<float>(r));
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Draw_3(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::Context*> pCtx) {
    __zz_cib_obj->::Circle::Draw(
      __zz_cib_::__zz_cib_FromAbiType<::Context*>(pCtx)
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class259 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Circle>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Circle>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Circle>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Circle>::Draw_3)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}
