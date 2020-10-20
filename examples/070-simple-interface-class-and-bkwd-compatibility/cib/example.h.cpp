#include "example.h"

#include "__zz_cib_Example-class-down-cast.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-generic.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-type-converters.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-proxy-mgr.h"

namespace __zz_cib_ {
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
  int Gunc() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (__zz_cib_Proxy);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::Gunc_2>(
        __zz_cib_h
      )
    );
  }
  int Func() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (__zz_cib_Proxy);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::Func_0>(
        __zz_cib_h
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::__zz_cib_Delete_1>(
      __zz_cib_h
    );
  }
  void __zz_cib_ReleaseProxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::Interface)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_methodTableHelper;

  const __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() const {
    return __zz_cib_methodTableHelper;
  }
  using __zz_cib_Methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_Generic::__zz_cib_Methodid;
};
}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::Interface> : public ::Interface {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::Interface>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::Interface>;

  using ::Interface::Interface;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable) {
    return new __zz_cib_::__zz_cib_Generic<::Interface>(__zz_cib_proxy, __zz_cib_GetMethodTable);
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl Gunc_4(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->Gunc()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl Func_1(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->Func()
    );
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
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
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface>::Func_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface>::__zz_cib_ReleaseProxy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface>::Gunc_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::A> : public ::A {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::A>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::A::A;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl UseInterface_3(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::Interface*> pInterface) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::A::UseInterface(
        __zz_cib_::__zz_cib_FromAbiType<::Interface*>(pInterface)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class259 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::UseInterface_3)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}
