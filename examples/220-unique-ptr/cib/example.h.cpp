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
#include "__zz_cib_Example-smart-ptr-helper.h"

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
namespace __zz_cib_GenericProxy {
class __zz_cib : public ::I {
  __zz_cib_PROXY* __zz_cib_proxy;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
public:
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib, ::I)

  __zz_cib(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl, std::unique_ptr<int> pi)
    : ::I::I(std::move(pi))
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  __zz_cib(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl)
    : ::I::I()
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  std::unique_ptr<int> g() const override {
    using __zz_cib_proc = int* (__zz_cib_decl *) (const __zz_cib_PROXY*);
    return std::unique_ptr<int>(__zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_GenericProxy::__zz_cib_methodid::g>(
      __zz_cib_proxy));
  }
  int f() const override {
    using __zz_cib_proc = int (__zz_cib_decl *) (const __zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_GenericProxy::__zz_cib_methodid::f>(
      __zz_cib_proxy);
  }
  ~__zz_cib() override {
    if (!__zz_cib_proxy) return;
    using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_PROXY*);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_GenericProxy::__zz_cib_methodid::__zz_cib_delete>(
      __zz_cib_proxy);
  }
  void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
};
}}}
namespace __zz_cib_ {
namespace __zz_cib_Class256 {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Class256::__zz_cib_GenericProxy::__zz_cib;
using __zz_cib_ThisClass = __zz_cib_Delegatee;
static ::I* __zz_cib_decl __zz_cib_new(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl, int* pi) {
  return new __zz_cib_::__zz_cib_Class256::__zz_cib_GenericProxy::__zz_cib(proxy, mtbl, __zz_cib_to_smart_ptr<std::unique_ptr<int>>(pi));
}
static ::I* __zz_cib_decl __zz_cib_new_1(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl) {
  return new __zz_cib_::__zz_cib_Class256::__zz_cib_GenericProxy::__zz_cib(proxy, mtbl);
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static int __zz_cib_decl f(const __zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->f();
}
static int* __zz_cib_decl g(const __zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->g().release();
}
static std::uint32_t __zz_cib_decl __zz_cib_get_class_id(::I** __zz_cib_obj) {
  static bool classIdRepoPopulated = false;
  if (!classIdRepoPopulated) {
    __zz_cib_gClassIdRepo[std::type_index(typeid(::I))] = __zz_cib_::__zz_cib_Class256::__zz_cib_classid;
    classIdRepoPopulated = true;
  }
  auto tdx = std::type_index(typeid(**__zz_cib_obj));
  auto itr = __zz_cib_gClassIdRepo.find(tdx);
  if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
  return __zz_cib_::__zz_cib_Class256::__zz_cib_classid;
}
static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
  __zz_cib_obj->__zz_cib_release_proxy();
}
}
}}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::g),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_get_class_id),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 7 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
namespace __zz_cib_Class257 {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::A;
using __zz_cib_ThisClass = __zz_cib_Delegatee;
static ::A* __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::A* __zz_cib_decl __zz_cib_new() {
  return new __zz_cib_Delegatee();
}
static ::I* __zz_cib_decl f(const __zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::A::f().release();
}
static ::I* __zz_cib_decl g(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::A::g();
}
static int __zz_cib_decl h(const __zz_cib_Delegatee* __zz_cib_obj, ::I* p) {
  return __zz_cib_obj->::A::h(__zz_cib_to_smart_ptr<std::unique_ptr<::I>>(p));
}
static int __zz_cib_decl i(const __zz_cib_Delegatee* __zz_cib_obj, ::I* p) {
  return __zz_cib_obj->::A::i(p);
}
static int __zz_cib_decl j(__zz_cib_Delegatee* __zz_cib_obj, ::I** pp) {
  return __zz_cib_obj->::A::j(__zz_cib_to_smart_ptr<std::unique_ptr<::I>>(pp));
}
}
}}

namespace __zz_cib_ {
namespace __zz_cib_Class257 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::g),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::h),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::i),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::j)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}
