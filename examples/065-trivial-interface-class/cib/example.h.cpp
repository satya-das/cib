#include "example.h"

#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-proxy.h"
#include "__zz_cib_Example-smart-ptr-helper.h"

namespace __zz_cib_ {
namespace Interface {
struct __zz_cib_Delegator;
namespace __zz_cib_GenericProxy {
class __zz_cib : public ::Interface {
  __zz_cib_PROXY* __zz_cib_proxy;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
  friend struct __zz_cib_::Interface::__zz_cib_Delegator;
  using __zz_cib_methodid = __zz_cib_::Interface::__zz_cib_GenericProxy::__zz_cib_methodid;
public:
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib, ::Interface)

  __zz_cib(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl)
    : ::Interface::Interface()
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  __zz_cib(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl, ::Interface const & __zz_cib_param0)
    : ::Interface::Interface(__zz_cib_param0)
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  int DoFunc() const override {
    using __zz_cib_proc = int (__zz_cib_decl *) (const __zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::DoFunc>(
      __zz_cib_proxy);
  }
  ~__zz_cib() override {
    if (!__zz_cib_proxy) return;
    using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_PROXY*);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete>(
      __zz_cib_proxy);
  }
  void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
};
}}}
namespace __zz_cib_ {
namespace Interface {
struct __zz_cib_Delegator : public ::Interface {
  using __zz_cib_Delegatee = __zz_cib_::Interface::__zz_cib_GenericProxy::__zz_cib;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  static ::Interface* __zz_cib_decl __zz_cib_copy(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl, const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_::Interface::__zz_cib_GenericProxy::__zz_cib(proxy, mtbl, *__zz_cib_obj);
  }
  static ::Interface* __zz_cib_decl __zz_cib_new(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl) {
    return new __zz_cib_::Interface::__zz_cib_GenericProxy::__zz_cib(proxy, mtbl);
  }
  static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
    delete __zz_cib_obj;
  }
  static int __zz_cib_decl Func(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_obj->::Interface::Func();
  }
  static int __zz_cib_decl DoFunc(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_obj->::Interface::DoFunc();
  }
  static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_release_proxy();
}
};
}}

namespace __zz_cib_ {
namespace Interface {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::Func),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::DoFunc),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}
