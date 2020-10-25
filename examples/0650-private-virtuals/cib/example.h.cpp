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
template<> struct __zz_cib_Delegator<::IF>;
template <>
class __zz_cib_Generic<::IF> : public ::IF {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::IF>;

  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::IF>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable)
    : ::IF::IF()
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_methodTableHelper(__zz_cib_GetMethodTable)
  {}
  int PublicVirtual() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (__zz_cib_Proxy);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::PublicVirtual_0>(
        __zz_cib_h
      )
    );
  }
  int ProtectedVirtual() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (__zz_cib_Proxy);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::ProtectedVirtual_1>(
        __zz_cib_h
      )
    );
  }
  int PublicPureVirtual() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (__zz_cib_Proxy);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::PublicPureVirtual_2>(
        __zz_cib_h
      )
    );
  }
  int ProtectedPureVirtual() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (__zz_cib_Proxy);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::ProtectedPureVirtual_3>(
        __zz_cib_h
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::__zz_cib_Delete_5>(
      __zz_cib_h
    );
  }
  void __zz_cib_ReleaseProxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::IF)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_methodTableHelper;

  const __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() const {
    return __zz_cib_methodTableHelper;
  }
  friend struct __zz_cib_::__zz_cib_Delegator<::IF>;
  using __zz_cib_Methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_Generic::__zz_cib_Methodid;
};
}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::IF> : public ::IF {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::IF>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::IF>;

  using ::IF::IF;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable) {
    return new __zz_cib_::__zz_cib_Generic<::IF>(__zz_cib_proxy, __zz_cib_GetMethodTable);
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl ProtectedPureVirtual_1(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->ProtectedPureVirtual()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl ProtectedVirtual_2(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::IF::ProtectedVirtual()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl ProtectedNonVirtual_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::IF::ProtectedNonVirtual()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl PublicPureVirtual_4(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->PublicPureVirtual()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl PublicVirtual_5(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::IF::PublicVirtual()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl PublicNonVirtual_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::IF::PublicNonVirtual()
    );
  }
  static void __zz_cib_decl __zz_cib_Delete_7(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static std::uint32_t __zz_cib_decl __zz_cib_GetClassId(::IF** __zz_cib_obj) {
    static bool classIdRepoPopulated = false;
    if (!classIdRepoPopulated) {
      __zz_cib_gClassIdRepo[std::type_index(typeid(::IF))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_classId;
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
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::IF>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::IF>::ProtectedPureVirtual_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::IF>::ProtectedVirtual_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::IF>::ProtectedNonVirtual_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::IF>::PublicPureVirtual_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::IF>::PublicVirtual_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::IF>::PublicNonVirtual_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::IF>::__zz_cib_Delete_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::IF>::__zz_cib_GetClassId),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::IF>::__zz_cib_ReleaseProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 10 };
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
  static __zz_cib_AbiType_t<int> __zz_cib_decl SetIF_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::IF*> pIF) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::A::SetIF(
        __zz_cib_::__zz_cib_FromAbiType<::IF*>(pIF)
      )
    );
  }
  static __zz_cib_AbiType_t<::IF*> __zz_cib_decl GetIF_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::IF*>(
      __zz_cib_obj->::A::GetIF()
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
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::SetIF_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::GetIF_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}
