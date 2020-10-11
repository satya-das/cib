#include "example.h"

#include "__zz_cib_Example-class-down-cast.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-generic.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-type-converters.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-proxy-mgr.h"

namespace __zz_cib_ {
template<> struct __zz_cib_Delegator<::Interface>;
template <>
class __zz_cib_Generic<::Interface> : public ::Interface {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::Interface>;

  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::Interface>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable)
    : ::Interface::Interface()
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_methodTableHelper(__zz_cib_GetMethodTable)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable, const ::Interface& __zz_cib_param0)
    : ::Interface::Interface(    __zz_cib_param0)
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_methodTableHelper(__zz_cib_GetMethodTable)
  {}
  int DoFunc() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::DoFunc_0>(
        __zz_cib_h
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::__zz_cib_Delete_1>(
      __zz_cib_h
    );
  }
  void __zz_cib_ReleaseProxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::Interface)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_methodTableHelper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_methodTableHelper;
  }
  friend struct __zz_cib_::__zz_cib_Delegator<::Interface>;
  using __zz_cib_Methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_Generic::__zz_cib_Methodid;
};
}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::Interface> : public ::Interface {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::Interface>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::Interface::Interface;

  using __zz_cib_Proxy = __zz_cib_Delegatee::__zz_cib_Proxy;
  using __zz_cib_ProxyDeleter = __zz_cib_Delegatee::__zz_cib_ProxyDeleter;
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable, const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_::__zz_cib_Generic<::Interface>(__zz_cib_proxy, __zz_cib_GetMethodTable, *__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable) {
    return new __zz_cib_::__zz_cib_Generic<::Interface>(__zz_cib_proxy, __zz_cib_GetMethodTable);
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl Func_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::Interface::Func()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl DoFunc_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::Interface::DoFunc()
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
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface>::Func_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface>::DoFunc_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface>::__zz_cib_ReleaseProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}
