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
class __zz_cib_Generic<::Interface1> : public ::Interface1 {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::Interface1>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable)
    : ::Interface1::Interface1()
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_methodTableHelper(__zz_cib_GetMethodTable)
  {}
  ::Interface3& r() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::Interface3&>(__zz_cib_decl *) (__zz_cib_Proxy);
    return __zz_cib_FromAbiType<::Interface3&>(
      __zz_cib_get_mtable_helper().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::r_0>(
        __zz_cib_h
      )
    );
  }
  int disruptVTable() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (__zz_cib_Proxy);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::disruptVTable_3>(
        __zz_cib_h
      )
    );
  }
  ::Interface2* p() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::Interface2*>(__zz_cib_decl *) (__zz_cib_Proxy);
    return __zz_cib_FromAbiType<::Interface2*>(
      __zz_cib_get_mtable_helper().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::p_1>(
        __zz_cib_h
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::__zz_cib_Delete_2>(
      __zz_cib_h
    );
  }
  void __zz_cib_ReleaseProxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::Interface1)

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
struct __zz_cib_Delegator<::Interface1> : public ::Interface1 {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::Interface1>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::Interface1::Interface1;

  using __zz_cib_Proxy = __zz_cib_Delegatee::__zz_cib_Proxy;
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable) {
    return new __zz_cib_::__zz_cib_Generic<::Interface1>(__zz_cib_proxy, __zz_cib_GetMethodTable);
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl disruptVTable_5(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::Interface1::disruptVTable()
    );
  }
  static __zz_cib_AbiType_t<::Interface2*> __zz_cib_decl p_1(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::Interface2*>(
      __zz_cib_obj->p()
    );
  }
  static __zz_cib_AbiType_t<::Interface3&> __zz_cib_decl r_2(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::Interface3&>(
      __zz_cib_obj->r()
    );
  }
  static void __zz_cib_decl __zz_cib_Delete_3(__zz_cib_Delegatee* __zz_cib_obj) {
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
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface1>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface1>::p_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface1>::r_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface1>::__zz_cib_Delete_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface1>::__zz_cib_ReleaseProxy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface1>::disruptVTable_5)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
template <>
class __zz_cib_Generic<::Interface2> : public ::Interface2 {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::Interface2>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable)
    : ::Interface2::Interface2()
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_methodTableHelper(__zz_cib_GetMethodTable)
  {}
  int f() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (__zz_cib_Proxy);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::f_0>(
        __zz_cib_h
      )
    );
  }
  int disruptVTable() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (__zz_cib_Proxy);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::disruptVTable_2>(
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
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::Interface2)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_methodTableHelper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_methodTableHelper;
  }
  using __zz_cib_Methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class259::__zz_cib_Generic::__zz_cib_Methodid;
};
}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::Interface2> : public ::Interface2 {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::Interface2>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::Interface2::Interface2;

  using __zz_cib_Proxy = __zz_cib_Delegatee::__zz_cib_Proxy;
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable) {
    return new __zz_cib_::__zz_cib_Generic<::Interface2>(__zz_cib_proxy, __zz_cib_GetMethodTable);
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl disruptVTable_5(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::Interface2::disruptVTable()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl f_1(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->f()
    );
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static std::uint32_t __zz_cib_decl __zz_cib_GetClassId(::Interface2** __zz_cib_obj) {
    static bool classIdRepoPopulated = false;
    if (!classIdRepoPopulated) {
      __zz_cib_gClassIdRepo[std::type_index(typeid(::Interface2))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class259::__zz_cib_classid;
      classIdRepoPopulated = true;
    }
    auto tdx = std::type_index(typeid(**__zz_cib_obj));
    auto itr = __zz_cib_gClassIdRepo.find(tdx);
    if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
    return __zz_cib_::__zz_cib_ids::__zz_cib_Class259::__zz_cib_classid;
  }
  static void __zz_cib_decl __zz_cib_ReleaseProxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_ReleaseProxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class259 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface2>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface2>::f_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface2>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface2>::__zz_cib_GetClassId),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface2>::__zz_cib_ReleaseProxy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface2>::disruptVTable_5)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
template <>
class __zz_cib_Generic<::Interface3> : public ::Interface3 {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::Interface3>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable)
    : ::Interface3::Interface3()
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_methodTableHelper(__zz_cib_GetMethodTable)
  {}
  int g() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (__zz_cib_Proxy);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::g_0>(
        __zz_cib_h
      )
    );
  }
  int disruptVTable() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (__zz_cib_Proxy);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::disruptVTable_2>(
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
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::Interface3)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_methodTableHelper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_methodTableHelper;
  }
  using __zz_cib_Methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class260::__zz_cib_Generic::__zz_cib_Methodid;
};
}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::Interface3> : public ::Interface3 {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::Interface3>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::Interface3::Interface3;

  using __zz_cib_Proxy = __zz_cib_Delegatee::__zz_cib_Proxy;
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable) {
    return new __zz_cib_::__zz_cib_Generic<::Interface3>(__zz_cib_proxy, __zz_cib_GetMethodTable);
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl disruptVTable_5(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::Interface3::disruptVTable()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl g_1(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->g()
    );
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static std::uint32_t __zz_cib_decl __zz_cib_GetClassId(::Interface3** __zz_cib_obj) {
    static bool classIdRepoPopulated = false;
    if (!classIdRepoPopulated) {
      __zz_cib_gClassIdRepo[std::type_index(typeid(::Interface3))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class260::__zz_cib_classid;
      classIdRepoPopulated = true;
    }
    auto tdx = std::type_index(typeid(**__zz_cib_obj));
    auto itr = __zz_cib_gClassIdRepo.find(tdx);
    if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
    return __zz_cib_::__zz_cib_ids::__zz_cib_Class260::__zz_cib_classid;
  }
  static void __zz_cib_decl __zz_cib_ReleaseProxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_ReleaseProxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class260 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface3>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface3>::g_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface3>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface3>::__zz_cib_GetClassId),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface3>::__zz_cib_ReleaseProxy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface3>::disruptVTable_5)
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
  static __zz_cib_AbiType_t<int> __zz_cib_decl SetInterface_3(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::Interface1*> pInterface1) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::A::SetInterface(
        __zz_cib_::__zz_cib_FromAbiType<::Interface1*>(pInterface1)
      )
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
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::SetInterface_3)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}
