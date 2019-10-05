#include "A.h"
#include "value.h"

#include "__zz_cib_templates-ids.h"
#include "__zz_cib_templates-mtable-helper.h"
#include "__zz_cib_templates-delegate-helper.h"
#include "__zz_cib_templates-proxy.h"

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
  int setValue(::Value<int> const & intVal) const override {
    using setValueProc = int (__zz_cib_decl *) (const __zz_cib_PROXY*, ::Value<int> const * intVal);
    return __zz_cib_get_mtable_helper().invoke<setValueProc, __zz_cib_GenericProxy::__zz_cib_methodid::setValue>(
      __zz_cib_proxy,
      &intVal);
  }
  float setValue(::Value<float> const & floatVal) const override {
    using setValueProc = float (__zz_cib_decl *) (const __zz_cib_PROXY*, ::Value<float> const * floatVal);
    return __zz_cib_get_mtable_helper().invoke<setValueProc, __zz_cib_GenericProxy::__zz_cib_methodid::setValue_1>(
      __zz_cib_proxy,
      &floatVal);
  }
  ::Value<int> getIntValue() const override {
    using getIntValueProc = ::Value<int>* (__zz_cib_decl *) (const __zz_cib_PROXY*);
    return *__zz_cib_get_mtable_helper().invoke<getIntValueProc, __zz_cib_GenericProxy::__zz_cib_methodid::getIntValue>(
      __zz_cib_proxy);
  }
  ::Value<float> getFloatValue() const override {
    using getFloatValueProc = ::Value<float>* (__zz_cib_decl *) (const __zz_cib_PROXY*);
    return *__zz_cib_get_mtable_helper().invoke<getFloatValueProc, __zz_cib_GenericProxy::__zz_cib_methodid::getFloatValue>(
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
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static int __zz_cib_decl setValue(const __zz_cib_Delegatee* __zz_cib_obj, ::Value<int> const * intVal) {
  return __zz_cib_obj->::A::setValue(*intVal);
}
static float __zz_cib_decl setValue_4(const __zz_cib_Delegatee* __zz_cib_obj, ::Value<float> const * floatVal) {
  return __zz_cib_obj->::A::setValue(*floatVal);
}
static ::Value<int>* __zz_cib_decl getIntValue(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new ::Value<int>(__zz_cib_obj->::A::getIntValue());
}
static ::Value<float>* __zz_cib_decl getFloatValue(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new ::Value<float>(__zz_cib_obj->::A::getFloatValue());
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
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::setValue),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::setValue_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::getIntValue),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::getFloatValue),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}
