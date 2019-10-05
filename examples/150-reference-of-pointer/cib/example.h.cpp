#include "example.h"

#include <typeinfo>
#include <typeindex>
#include <cstdint>
#include <unordered_map>

extern std::unordered_map<std::type_index, std::uint32_t> __zz_cib_gClassIdRepo;

#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-proxy.h"

namespace __zz_cib_ { namespace A {
namespace __zz_cib_GenericProxy {
class A : public ::A {
  __zz_cib_PROXY* __zz_cib_proxy;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
public:
  __ZZ_CIB_DELEGATOR_MEMBERS(A, ::A)

  A(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl, ::A const & __zz_cib_param0)
    : ::A::A(__zz_cib_param0)
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  A(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl)
    : ::A::A()
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  int VirtualFunction() const override {
    using VirtualFunctionProc = int (__zz_cib_decl *) (const __zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<VirtualFunctionProc, __zz_cib_GenericProxy::__zz_cib_methodid::VirtualFunction>(
      __zz_cib_proxy);
  }
  ~A() override {
    if (!__zz_cib_proxy) return;
    using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_PROXY*);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_deleteProc, __zz_cib_GenericProxy::__zz_cib_methodid::__zz_cib_delete>(
      __zz_cib_proxy);
  }
  void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
};
}}}
namespace __zz_cib_ { namespace A {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = __zz_cib_::A::__zz_cib_GenericProxy::A;
static ::A* __zz_cib_decl __zz_cib_new(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl) {
  return new __zz_cib_::A::__zz_cib_GenericProxy::A(proxy, mtbl);
}
static ::A* __zz_cib_decl __zz_cib_copy(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl, const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_::A::__zz_cib_GenericProxy::A(proxy, mtbl, *__zz_cib_obj);
}
static int __zz_cib_decl VirtualFunction(const __zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::A::VirtualFunction();
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static std::uint32_t __zz_cib_decl __zz_cib_get_class_id(::A** __zz_cib_obj) {
  static bool classIdRepoPopulated = false;
  if (!classIdRepoPopulated) {
    __zz_cib_gClassIdRepo[std::type_index(typeid(::B))] = __zz_cib_::B::__zz_cib_classid;
    __zz_cib_gClassIdRepo[std::type_index(typeid(::A))] = __zz_cib_::A::__zz_cib_classid;
    classIdRepoPopulated = true;
  }
  auto tdx = std::type_index(typeid(**__zz_cib_obj));
  auto itr = __zz_cib_gClassIdRepo.find(tdx);
  if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
  {
    auto* obj = dynamic_cast<::B*>(*__zz_cib_obj);
    if (obj) {
      *__zz_cib_obj = obj;
      return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::B::__zz_cib_classid;
    }
  }
  return __zz_cib_::A::__zz_cib_classid;
}
static void __zz_cib_decl __zz_cib_release_proxy(::A* __zz_cib_obj) {
  auto unknownProxy = dynamic_cast<__zz_cib_::A::__zz_cib_GenericProxy::A*>(__zz_cib_obj);
  if (unknownProxy)
    unknownProxy->__zz_cib_release_proxy();
}
}
}}

namespace __zz_cib_ { namespace A {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::VirtualFunction),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_get_class_id),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}
namespace __zz_cib_ { namespace B {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::B;
static ::B* __zz_cib_decl __zz_cib_new() {
  return new __zz_cib_Delegatee();
}
static ::B* __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static int __zz_cib_decl VirtualFunction(const __zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::B::VirtualFunction();
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::A* __zz_cib_decl __zz_cib_cast_to___A(::B* __zz_cib_obj) {
  return __zz_cib_obj;
}
}
}}

namespace __zz_cib_ { namespace B {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::VirtualFunction),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_cast_to___A)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}
