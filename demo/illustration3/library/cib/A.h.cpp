#include "A.h"
#include "value.h"

#include "__zz_cib_illustration3-ids.h"
#include "__zz_cib_illustration3-mtable-helper.h"
#include "__zz_cib_illustration3-delegate-helper.h"
#include "__zz_cib_illustration3-proxy.h"

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
    return __zz_cib_get_mtable_helper().invoke<setValueProc, __zz_cib_GenericProxy::__zz_cib_methodid::setValue_0>(
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
    return *__zz_cib_get_mtable_helper().invoke<getIntValueProc, __zz_cib_GenericProxy::__zz_cib_methodid::getIntValue_2>(
      __zz_cib_proxy);
  }
  ::Value<float> getFloatValue() const override {
    using getFloatValueProc = ::Value<float>* (__zz_cib_decl *) (const __zz_cib_PROXY*);
    return *__zz_cib_get_mtable_helper().invoke<getFloatValueProc, __zz_cib_GenericProxy::__zz_cib_methodid::getFloatValue_3>(
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
static int __zz_cib_decl setValue_3(const __zz_cib_Delegatee* __zz_cib_obj, ::Value<int> const * intVal) {
  return __zz_cib_obj->::A::setValue(*intVal);
}
static float __zz_cib_decl setValue_4(const __zz_cib_Delegatee* __zz_cib_obj, ::Value<float> const * floatVal) {
  return __zz_cib_obj->::A::setValue(*floatVal);
}
static ::Value<int>* __zz_cib_decl getIntValue_5(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new ::Value<int>(__zz_cib_obj->::A::getIntValue());
}
static ::Value<float>* __zz_cib_decl getFloatValue_6(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new ::Value<float>(__zz_cib_obj->::A::getFloatValue());
}
static void __zz_cib_decl __zz_cib_release_proxy_7(::A* __zz_cib_obj) {
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
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::setValue_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::setValue_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::getIntValue_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::getFloatValue_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_release_proxy_7)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}