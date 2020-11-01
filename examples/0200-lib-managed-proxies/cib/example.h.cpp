#include "example.h"

#include <typeinfo>
#include <typeindex>
#include <cstdint>
#include <unordered_map>

extern std::unordered_map<std::type_index, std::uint32_t> __zz_cib_gClassIdRepo;

#include "__zz_cib_Example-class-down-cast.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-generic.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-type-converters.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-proxy-mgr.h"

namespace __zz_cib_ {
template <>
class __zz_cib_Generic<::Facade> : public ::Facade {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::Facade>;

  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::Facade>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable)
    : ::Facade::Facade()
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_methodTableHelper(__zz_cib_GetMethodTable)
  {}
  int f() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::f_0>(
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
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::Facade)

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
struct __zz_cib_Delegator<::Facade> : public ::Facade {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::Facade>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::Facade>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::Facade>;

  using ::Facade::Facade;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable) {
    return new __zz_cib_::__zz_cib_Generic<::Facade>(__zz_cib_proxy, __zz_cib_GetMethodTable);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl f_2(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->f()
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::Facade* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static std::uint32_t __zz_cib_decl __zz_cib_GetClassId(::Facade** __zz_cib_obj) {
    static bool classIdRepoPopulated = false;
    if (!classIdRepoPopulated) {
      __zz_cib_gClassIdRepo[std::type_index(typeid(::Facade))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_classId;
      classIdRepoPopulated = true;
    }
    auto tdx = std::type_index(typeid(**__zz_cib_obj));
    auto itr = __zz_cib_gClassIdRepo.find(tdx);
    if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
    return __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_classId;
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
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Facade>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Facade>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Facade>::f_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Facade>::__zz_cib_GetClassId),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Facade>::__zz_cib_ReleaseProxy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Facade>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::Base> : public ::Base {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::Base>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::Base>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::Base>;

  using ::Base::Base;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_1(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl f_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::Base::f()
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::Base* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class259 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Base>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Base>::__zz_cib_Copy_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Base>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Base>::f_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Base>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::Derived> : public ::Derived {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::Derived>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::Derived>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::Derived>;

  using ::Derived::Derived;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_1(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl f_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::Derived::f()
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::Derived* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::Base* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class259(::Derived* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::Derived* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class259(::Base* __zz_cib_obj) {
    return __zz_cib_DownCast<::Derived*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class260 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Derived>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Derived>::__zz_cib_Copy_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Derived>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Derived>::f_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Derived>::__zz_cib_CastTo__zz_cib_Class259),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Derived>::__zz_cib_CastFrom__zz_cib_Class259),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Derived>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 7 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::A> : public ::A {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::A>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

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
  static __zz_cib_AbiType_t<const ::Facade&> __zz_cib_decl GetFacadeByRef_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::Facade&>(
      __zz_cib_obj->::A::GetFacadeByRef()
    );
  }
  static __zz_cib_AbiType_t<const ::Facade*> __zz_cib_decl GetFacadeByPtr_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::Facade*>(
      __zz_cib_obj->::A::GetFacadeByPtr()
    );
  }
  static __zz_cib_AbiType_t<::Facade*> __zz_cib_decl GetNewFacade_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::Facade*>(
      __zz_cib_obj->::A::GetNewFacade()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DeleteFacade_6(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::Facade*> p) {
    __zz_cib_obj->::A::DeleteFacade(
      __zz_cib_::__zz_cib_FromAbiType<const ::Facade*>(p)
    );
  }
  static __zz_cib_AbiType_t<::Base&> __zz_cib_decl GetBase_7(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::Base&>(
      __zz_cib_obj->::A::GetBase()
    );
  }
  static __zz_cib_AbiType_t<::Derived&> __zz_cib_decl GetDerived_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::Derived&>(
      __zz_cib_obj->::A::GetDerived()
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class261 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::GetFacadeByRef_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::GetFacadeByPtr_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::GetNewFacade_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::DeleteFacade_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::GetBase_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::GetDerived_8)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 9 };
  return &methodTable;
}
}}
