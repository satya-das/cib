#include "A.h"

#include "__zz_cib_Demo-ids.h"
#include "__zz_cib_Demo-mtable-helper.h"
#include "__zz_cib_Demo-delegate-helper.h"
#include "__zz_cib_Demo-proxy.h"

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
  int V() override {
    using VProc = int (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<VProc, __zz_cib_GenericProxy::__zz_cib_methodid::V_0>(
      __zz_cib_proxy);
  }
  ~A() override {
    if (!__zz_cib_proxy) return;
    using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_PROXY*);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_deleteProc, __zz_cib_GenericProxy::__zz_cib_methodid::__zz_cib_delete_1>(
      __zz_cib_proxy);
  }
  void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
};
}}}
namespace __zz_cib_ { namespace A {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = __zz_cib_::A::__zz_cib_GenericProxy::A;
static ::A* __zz_cib_decl __zz_cib_new_0(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl) {
  return new __zz_cib_::A::__zz_cib_GenericProxy::A(proxy, mtbl);
}
static ::A* __zz_cib_decl __zz_cib_copy_1(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl, const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_::A::__zz_cib_GenericProxy::A(proxy, mtbl, *__zz_cib_obj);
}
static void __zz_cib_decl __zz_cib_delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static int __zz_cib_decl F_3(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::A::F();
}
static int __zz_cib_decl F_4(__zz_cib_Delegatee* __zz_cib_obj, int __zz_cib_param0) {
  return __zz_cib_obj->::A::F(__zz_cib_param0);
}
static int __zz_cib_decl V_5(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::A::V();
}
static void __zz_cib_decl __zz_cib_release_proxy_6(::A* __zz_cib_obj) {
  auto unknownProxy = dynamic_cast<__zz_cib_::A::__zz_cib_GenericProxy::A*>(__zz_cib_obj);
  if (unknownProxy)
    unknownProxy->__zz_cib_release_proxy();
}
}
}}

namespace __zz_cib_ { namespace A {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::F_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::F_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::V_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_release_proxy_6)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 7 };
  return &methodTable;
}
}}
