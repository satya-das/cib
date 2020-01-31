#include "example.h"

#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-proxy.h"

namespace __zz_cib_ {
namespace A {
struct __zz_cib_Delegator;
namespace __zz_cib_GenericProxy {
class A : public ::A {
  __zz_cib_PROXY* __zz_cib_proxy;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
  friend struct __zz_cib_::A::__zz_cib_Delegator;
public:
  __ZZ_CIB_DELEGATOR_MEMBERS(A, ::A)

  A(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl)
    : ::A::A()
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  A(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl, ::A const & __zz_cib_param0)
    : ::A::A(__zz_cib_param0)
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  int DoFunc() const override {
    using __zz_cib_proc = int (__zz_cib_decl *) (const __zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_GenericProxy::__zz_cib_methodid::DoFunc>(
      __zz_cib_proxy);
  }
  ~A() override {
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
struct __zz_cib_Delegator : public ::A {
  using __zz_cib_Delegatee = __zz_cib_::A::__zz_cib_GenericProxy::A;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  static ::A* __zz_cib_decl __zz_cib_copy(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl, const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_::A::__zz_cib_GenericProxy::A(proxy, mtbl, *__zz_cib_obj);
  }
  static ::A* __zz_cib_decl __zz_cib_new(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl) {
    return new __zz_cib_::A::__zz_cib_GenericProxy::A(proxy, mtbl);
  }
  static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
    delete __zz_cib_obj;
  }
  static int __zz_cib_decl f0(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_obj->::A::f0();
  }
#if  COND // Start of a conditional group, also start of 1st subgroup
  static int __zz_cib_decl f1(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_obj->::A::f1();
  }
  static int __zz_cib_decl f2(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_obj->::A::f2();
  }
#elif  COND2 // OPTIONAL. Start of 2nd subgroup
  static int __zz_cib_decl f3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_obj->::A::f3();
  }
#else 
  static int __zz_cib_decl f4(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_obj->::A::f4();
  }
  static int __zz_cib_decl f5(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_obj->::A::f5();
  }
  static int __zz_cib_decl f6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_obj->::A::f6();
  }
#endif
  static int __zz_cib_decl f7(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_obj->::A::f7();
  }
  static int __zz_cib_decl func(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_obj->::A::func();
  }
  static int __zz_cib_decl DoFunc(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_obj->::A::DoFunc();
  }
  static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_release_proxy();
}
};
}}

namespace __zz_cib_ {
namespace A {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f0),
#if  COND // Start of a conditional group, also start of 1st subgroup
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f2),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
#elif  COND2 // OPTIONAL. Start of 2nd subgroup
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f3),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
#else 
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f6),
#endif
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::func),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::DoFunc),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 14 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
namespace B {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::B;
using __zz_cib_ThisClass = __zz_cib_Delegatee;
static ::B* __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static ::B* __zz_cib_decl __zz_cib_new() {
  return new __zz_cib_Delegatee();
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
#if  COND // Start of a conditional group, also start of 1st subgroup
static int __zz_cib_decl f1(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::B::f1();
}
static int __zz_cib_decl f2(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::B::f2();
}
#endif
}
}}

namespace __zz_cib_ {
namespace B {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
#if  COND // Start of a conditional group, also start of 1st subgroup
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f2),
#else 
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (0)
#endif

  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
namespace C {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::C;
using __zz_cib_ThisClass = __zz_cib_Delegatee;
static ::C* __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static ::C* __zz_cib_decl __zz_cib_new() {
  return new __zz_cib_Delegatee();
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
#if  COND // Start of a conditional group, also start of 1st subgroup
static int __zz_cib_decl f1(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::C::f1();
}
static int __zz_cib_decl f2(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::C::f2();
}
#endif
static int __zz_cib_decl f3(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::C::f3();
}
}
}}

namespace __zz_cib_ {
namespace C {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
#if  COND // Start of a conditional group, also start of 1st subgroup
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f2),
#else 
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
#endif
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f3)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
namespace P {
namespace __zz_cib_GenericProxy {
class P : public ::P {
  __zz_cib_PROXY* __zz_cib_proxy;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
public:
  __ZZ_CIB_DELEGATOR_MEMBERS(P, ::P)

  P(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl)
    : ::P::P()
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  P(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl, ::P const & __zz_cib_param0)
    : ::P::P(__zz_cib_param0)
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  int f3() override {
    using __zz_cib_proc = int (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_GenericProxy::__zz_cib_methodid::f3>(
      __zz_cib_proxy);
  }
#if  COND // Start of a conditional group, also start of 1st subgroup
  int f1() override {
    using __zz_cib_proc = int (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_GenericProxy::__zz_cib_methodid::f1>(
      __zz_cib_proxy);
  }
  int f2() override {
    using __zz_cib_proc = int (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_GenericProxy::__zz_cib_methodid::f2>(
      __zz_cib_proxy);
  }
#endif
  ~P() override {
    if (!__zz_cib_proxy) return;
    using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_PROXY*);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_GenericProxy::__zz_cib_methodid::__zz_cib_delete>(
      __zz_cib_proxy);
  }
  void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
};
}}}
namespace __zz_cib_ {
namespace P {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = __zz_cib_::P::__zz_cib_GenericProxy::P;
using __zz_cib_ThisClass = __zz_cib_Delegatee;
static ::P* __zz_cib_decl __zz_cib_copy(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl, const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_::P::__zz_cib_GenericProxy::P(proxy, mtbl, *__zz_cib_obj);
}
static ::P* __zz_cib_decl __zz_cib_new(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl) {
  return new __zz_cib_::P::__zz_cib_GenericProxy::P(proxy, mtbl);
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
#if  COND // Start of a conditional group, also start of 1st subgroup
static int __zz_cib_decl f1(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::P::f1();
}
static int __zz_cib_decl f2(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::P::f2();
}
#endif
static int __zz_cib_decl f3(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::P::f3();
}
static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
  __zz_cib_obj->__zz_cib_release_proxy();
}
}
}}

namespace __zz_cib_ {
namespace P {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
#if  COND // Start of a conditional group, also start of 1st subgroup
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f2),
#else 
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
#endif
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 7 };
  return &methodTable;
}
}}
