#include "example.h"

#include <typeinfo>
#include <typeindex>
#include <cstdint>
#include <unordered_map>

extern std::unordered_map<std::type_index, std::uint32_t> __zz_cib_gClassIdRepo;

#include "__zz_cib_Example-class-down-cast.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-generic-impl-interface.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-type-converters.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-proxy-mgr.h"

namespace __zz_cib_ {
template <>
class __zz_cib_Generic<::Facade> : public ::Facade {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::Facade>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable)
    : ::Facade::Facade()
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_methodTableHelper(__zz_cib_GetMethodTable)
  {}
  void F() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::F_0>(
      __zz_cib_h
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
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::Facade)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_methodTableHelper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_methodTableHelper;
  }
  using __zz_cib_Methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_Generic::__zz_cib_Methodid;
};
}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::Facade> : public ::Facade {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::Facade>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::Facade::Facade;

  using __zz_cib_Proxy = __zz_cib_Delegatee::__zz_cib_Proxy;
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable) {
    return new __zz_cib_::__zz_cib_Generic<::Facade>(__zz_cib_proxy, __zz_cib_GetMethodTable);
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl F_1(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->F();
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static std::uint32_t __zz_cib_decl __zz_cib_GetClassId(::Facade** __zz_cib_obj) {
    static bool classIdRepoPopulated = false;
    if (!classIdRepoPopulated) {
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PublicFacadeImpl))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class259::__zz_cib_classid;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::Facade))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_classid;
      classIdRepoPopulated = true;
    }
    auto tdx = std::type_index(typeid(**__zz_cib_obj));
    auto itr = __zz_cib_gClassIdRepo.find(tdx);
    if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
    {
      auto* obj = dynamic_cast<::PublicFacadeImpl*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class259::__zz_cib_classid;
      }
    }
    return __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_classid;
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
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Facade>::F_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Facade>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Facade>::__zz_cib_GetClassId),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Facade>::__zz_cib_ReleaseProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::PublicFacadeImpl> : public ::PublicFacadeImpl {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PublicFacadeImpl>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::PublicFacadeImpl::PublicFacadeImpl;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl F_3(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PublicFacadeImpl::F();
  }
  static ::Facade* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class258(::PublicFacadeImpl* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PublicFacadeImpl* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class258(::Facade* __zz_cib_obj) {
    return __zz_cib_DownCast<::PublicFacadeImpl*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class259 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PublicFacadeImpl>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PublicFacadeImpl>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PublicFacadeImpl>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PublicFacadeImpl>::F_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PublicFacadeImpl>::__zz_cib_CastTo__zz_cib_Class258),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PublicFacadeImpl>::__zz_cib_CastFrom__zz_cib_Class258)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
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
  static __zz_cib_AbiType_t<::Facade*> __zz_cib_decl PublicFacade_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::Facade*>(
      __zz_cib_obj->::A::PublicFacade()
    );
  }
  static __zz_cib_AbiType_t<::Facade*> __zz_cib_decl PrivateFacade1_4(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::Facade*>(
      __zz_cib_obj->::A::PrivateFacade1()
    );
  }
  static __zz_cib_AbiType_t<::Facade*> __zz_cib_decl PrivateFacade2_5(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::Facade*>(
      __zz_cib_obj->::A::PrivateFacade2()
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class260 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::PublicFacade_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::PrivateFacade1_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::PrivateFacade2_5)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}
