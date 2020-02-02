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
namespace A {
namespace __zz_cib_GenericProxy {
class __zz_cib : public ::A {
  __zz_cib_PROXY* __zz_cib_proxy;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
public:
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib, ::A)

  __zz_cib(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl)
    : ::A::A()
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  __zz_cib(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl, ::A const & __zz_cib_param0)
    : ::A::A(__zz_cib_param0)
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  int VirtFunc() override {
    using __zz_cib_proc = int (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_GenericProxy::__zz_cib_methodid::VirtFunc>(
      __zz_cib_proxy);
  }
  int AnotherVirtFunc() override {
    using __zz_cib_proc = int (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_GenericProxy::__zz_cib_methodid::AnotherVirtFunc>(
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
namespace A {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = __zz_cib_::A::__zz_cib_GenericProxy::__zz_cib;
using __zz_cib_ThisClass = __zz_cib_Delegatee;
static ::A* __zz_cib_decl __zz_cib_copy(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl, const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_::A::__zz_cib_GenericProxy::__zz_cib(proxy, mtbl, *__zz_cib_obj);
}
static ::A* __zz_cib_decl __zz_cib_new(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl) {
  return new __zz_cib_::A::__zz_cib_GenericProxy::__zz_cib(proxy, mtbl);
}
static int __zz_cib_decl AnotherVirtFunc(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::A::AnotherVirtFunc();
}
static int __zz_cib_decl VirtFunc(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::A::VirtFunc();
}
static int __zz_cib_decl SomeFunc(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::A::SomeFunc();
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
  __zz_cib_obj->__zz_cib_release_proxy();
}
}
}}

namespace __zz_cib_ {
namespace A {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::VirtFunc),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_release_proxy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::AnotherVirtFunc),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::SomeFunc)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 7 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
namespace I1 {
namespace __zz_cib_GenericProxy {
class __zz_cib : public ::I1 {
  __zz_cib_PROXY* __zz_cib_proxy;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
public:
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib, ::I1)

  __zz_cib(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl, ::I1 const & __zz_cib_param0)
    : ::I1::I1(__zz_cib_param0)
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  __zz_cib(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl)
    : ::I1::I1()
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  int F() override {
    using __zz_cib_proc = int (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_GenericProxy::__zz_cib_methodid::F>(
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
namespace I1 {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = __zz_cib_::I1::__zz_cib_GenericProxy::__zz_cib;
using __zz_cib_ThisClass = __zz_cib_Delegatee;
static ::I1* __zz_cib_decl __zz_cib_new(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl) {
  return new __zz_cib_::I1::__zz_cib_GenericProxy::__zz_cib(proxy, mtbl);
}
static ::I1* __zz_cib_decl __zz_cib_copy(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl, const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_::I1::__zz_cib_GenericProxy::__zz_cib(proxy, mtbl, *__zz_cib_obj);
}
static int __zz_cib_decl F(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::I1::F();
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
  __zz_cib_obj->__zz_cib_release_proxy();
}
}
}}

namespace __zz_cib_ {
namespace I1 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::F),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
namespace I2 {
namespace __zz_cib_GenericProxy {
class __zz_cib : public ::I2 {
  __zz_cib_PROXY* __zz_cib_proxy;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
public:
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib, ::I2)

  __zz_cib(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl, ::I2 const & __zz_cib_param0)
    : ::I2::I2(__zz_cib_param0)
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  __zz_cib(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl)
    : ::I2::I2()
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  int G() override {
    using __zz_cib_proc = int (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_GenericProxy::__zz_cib_methodid::G>(
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
namespace I2 {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = __zz_cib_::I2::__zz_cib_GenericProxy::__zz_cib;
using __zz_cib_ThisClass = __zz_cib_Delegatee;
static ::I2* __zz_cib_decl __zz_cib_new(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl) {
  return new __zz_cib_::I2::__zz_cib_GenericProxy::__zz_cib(proxy, mtbl);
}
static ::I2* __zz_cib_decl __zz_cib_copy(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl, const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_::I2::__zz_cib_GenericProxy::__zz_cib(proxy, mtbl, *__zz_cib_obj);
}
static int __zz_cib_decl G(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::I2::G();
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
  __zz_cib_obj->__zz_cib_release_proxy();
}
}
}}

namespace __zz_cib_ {
namespace I2 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::G),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
namespace B {
namespace __zz_cib_GenericProxy {
class __zz_cib : public ::B {
  __zz_cib_PROXY* __zz_cib_proxy;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
public:
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib, ::B)

  __zz_cib(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl)
    : ::B::B()
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  __zz_cib(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl, ::B const & __zz_cib_param0)
    : ::B::B(__zz_cib_param0)
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  int VirtFunc() override {
    using __zz_cib_proc = int (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_GenericProxy::__zz_cib_methodid::VirtFunc>(
      __zz_cib_proxy);
  }
  int G() override {
    using __zz_cib_proc = int (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_GenericProxy::__zz_cib_methodid::G>(
      __zz_cib_proxy);
  }
  int F() override {
    using __zz_cib_proc = int (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_GenericProxy::__zz_cib_methodid::F>(
      __zz_cib_proxy);
  }
  int AnotherVirtFunc() override {
    using __zz_cib_proc = int (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_GenericProxy::__zz_cib_methodid::AnotherVirtFunc>(
      __zz_cib_proxy);
  }
  void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
};
}}}
namespace __zz_cib_ {
namespace B {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = __zz_cib_::B::__zz_cib_GenericProxy::__zz_cib;
using __zz_cib_ThisClass = __zz_cib_Delegatee;
static ::B* __zz_cib_decl __zz_cib_copy(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl, const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_::B::__zz_cib_GenericProxy::__zz_cib(proxy, mtbl, *__zz_cib_obj);
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::B* __zz_cib_decl __zz_cib_new(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl) {
  return new __zz_cib_::B::__zz_cib_GenericProxy::__zz_cib(proxy, mtbl);
}
static int __zz_cib_decl VirtFunc(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::B::VirtFunc();
}
static ::B* __zz_cib_decl Create() {
  return ::B::Create();
}
static int __zz_cib_decl G(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::B::G();
}
static int __zz_cib_decl F(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::B::F();
}
static int __zz_cib_decl AnotherVirtFunc(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::B::AnotherVirtFunc();
}
static ::I1* __zz_cib_decl __zz_cib_cast_to_I1(::B* __zz_cib_obj) {
  return __zz_cib_obj;
}
static ::A* __zz_cib_decl __zz_cib_cast_to_A(::B* __zz_cib_obj) {
  return __zz_cib_obj;
}
static ::I2* __zz_cib_decl __zz_cib_cast_to_I2(::B* __zz_cib_obj) {
  return __zz_cib_obj;
}
static std::uint32_t __zz_cib_decl __zz_cib_get_class_id(::B** __zz_cib_obj) {
  static bool classIdRepoPopulated = false;
  if (!classIdRepoPopulated) {
    __zz_cib_gClassIdRepo[std::type_index(typeid(::B))] = __zz_cib_::B::__zz_cib_classid;
    classIdRepoPopulated = true;
  }
  auto tdx = std::type_index(typeid(**__zz_cib_obj));
  auto itr = __zz_cib_gClassIdRepo.find(tdx);
  if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
  return __zz_cib_::B::__zz_cib_classid;
}
static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
  __zz_cib_obj->__zz_cib_release_proxy();
}
}
}}

namespace __zz_cib_ {
namespace B {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::VirtFunc),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::Create),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_cast_to_A),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_get_class_id),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_release_proxy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::G),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::F),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::AnotherVirtFunc),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_cast_to_I1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_cast_to_I2)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 13 };
  return &methodTable;
}
}}
