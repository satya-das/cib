#include "interface.h"

#include "__zz_cib_BaseTemplateInterfaceTests-class-down-cast.h"
#include "__zz_cib_BaseTemplateInterfaceTests-delegate-helper.h"
#include "__zz_cib_BaseTemplateInterfaceTests-generic.h"
#include "__zz_cib_BaseTemplateInterfaceTests-ids.h"
#include "__zz_cib_BaseTemplateInterfaceTests-type-converters.h"
#include "__zz_cib_BaseTemplateInterfaceTests-mtable-helper.h"
#include "__zz_cib_BaseTemplateInterfaceTests-proxy-mgr.h"

namespace __zz_cib_ {
template <>
class __zz_cib_Generic<::BaseInterface> : public ::BaseInterface {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::BaseInterface>;

  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::BaseInterface>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable)
    : ::BaseInterface::BaseInterface()
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_methodTableHelper(__zz_cib_GetMethodTable)
  {}
  int F() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (__zz_cib_Proxy);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::F_0>(
        __zz_cib_h
      )
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
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::BaseInterface)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_methodTableHelper;

  const __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() const {
    return __zz_cib_methodTableHelper;
  }
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class261::__zz_cib_Generic::__zz_cib_MethodId;
};
}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::BaseInterface> : public ::BaseInterface {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::BaseInterface>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::BaseInterface>;

  using ::BaseInterface::BaseInterface;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable) {
    return new __zz_cib_::__zz_cib_Generic<::BaseInterface>(__zz_cib_proxy, __zz_cib_GetMethodTable);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl F_2(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->F()
    );
  }
  static void __zz_cib_decl __zz_cib_ReleaseProxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_ReleaseProxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class261 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::BaseInterface>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::BaseInterface>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::BaseInterface>::F_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::BaseInterface>::__zz_cib_ReleaseProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}
