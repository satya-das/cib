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
#include "__zz_cib_Example-proxy-mgr.h"

namespace __zz_cib_ { namespace I {
namespace __zz_cib_GenericProxy {
class I : public ::I {
  __zz_cib_PROXY* __zz_cib_proxy;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
public:
  __ZZ_CIB_DELEGATOR_MEMBERS(I, ::I)

  I(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl)
    : ::I::I()
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  int f() const override {
    using fProc = int (__zz_cib_decl *) (const __zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<fProc, __zz_cib_GenericProxy::__zz_cib_methodid::f>(
      __zz_cib_proxy);
  }
  ~I() override {
    if (!__zz_cib_proxy) return;
    using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_PROXY*);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_deleteProc, __zz_cib_GenericProxy::__zz_cib_methodid::__zz_cib_delete>(
      __zz_cib_proxy);
  }
  void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
};
}}}
namespace __zz_cib_ { namespace I {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = __zz_cib_::I::__zz_cib_GenericProxy::I;
static ::I* __zz_cib_decl __zz_cib_new(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl) {
  return new __zz_cib_::I::__zz_cib_GenericProxy::I(proxy, mtbl);
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static int __zz_cib_decl f(const __zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->f();
}
static __zz_cib_PROXY* __zz_cib_decl __zz_cib_find_proxy(::I* obj, __zz_cib_client_id clientId) {
  return __zz_cib_proxy_manager_delegator::__zz_cib_find_proxy(obj, clientId);
}
static void __zz_cib_decl __zz_cib_register_proxy(::I* obj, __zz_cib_client_id clientId, __zz_cib_PROXY* proxy, __zz_cib_proxy_deleter deleter) {
  __zz_cib_proxy_manager_delegator::__zz_cib_register_proxy(obj, clientId, proxy, deleter);
}
static void __zz_cib_decl __zz_cib_unregister_proxy(::I* obj, __zz_cib_client_id clientId) {
  __zz_cib_proxy_manager_delegator::__zz_cib_unregister_proxy(obj, clientId);
}
static std::uint32_t __zz_cib_decl __zz_cib_get_class_id(::I** __zz_cib_obj) {
  static bool classIdRepoPopulated = false;
  if (!classIdRepoPopulated) {
    __zz_cib_gClassIdRepo[std::type_index(typeid(::I))] = __zz_cib_::I::__zz_cib_classid;
    classIdRepoPopulated = true;
  }
  auto tdx = std::type_index(typeid(**__zz_cib_obj));
  auto itr = __zz_cib_gClassIdRepo.find(tdx);
  if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
  return __zz_cib_::I::__zz_cib_classid;
}
static void __zz_cib_decl __zz_cib_release_proxy(::I* __zz_cib_obj) {
  auto unknownProxy = dynamic_cast<__zz_cib_::I::__zz_cib_GenericProxy::I*>(__zz_cib_obj);
  if (unknownProxy)
    unknownProxy->__zz_cib_release_proxy();
}
}
}}

namespace __zz_cib_ { namespace I {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_get_class_id),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_release_proxy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_find_proxy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_register_proxy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_unregister_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}
namespace __zz_cib_ { namespace A {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::A;
static ::A* __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::A* __zz_cib_decl __zz_cib_new() {
  return new __zz_cib_Delegatee();
}
static ::I const * __zz_cib_decl f(const __zz_cib_Delegatee* __zz_cib_obj) {
  return &__zz_cib_obj->::A::f();
}
static ::I const * __zz_cib_decl g(const __zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::A::g();
}
static ::I* __zz_cib_decl c(const __zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::A::c();
}
static void __zz_cib_decl d(const __zz_cib_Delegatee* __zz_cib_obj, ::I const * p) {
  __zz_cib_obj->::A::d(p);
}
}
}}

namespace __zz_cib_ { namespace A {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::g),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::c),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::d)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 7 };
  return &methodTable;
}
}}
