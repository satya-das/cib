#include "A.h"
#include "value.h"

#include "__zz_cib_templates-class-down-cast.h"
#include "__zz_cib_templates-delegate-helper.h"
#include "__zz_cib_templates-generic.h"
#include "__zz_cib_templates-ids.h"
#include "__zz_cib_templates-library-type-handler.h"
#include "__zz_cib_templates-mtable-helper.h"

namespace __zz_cib_ {
template <>
class __zz_cib_Generic<::A> : public ::A {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::A>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl)
    : ::A::A()
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::A& __zz_cib_param0)
    : ::A::A(    __zz_cib_param0)
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  ::Value<float> getFloatValue() const override {
    using __zz_cib_proc = __zz_cib_RValueAbiType_t<::Value<float>>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<::Value<float>>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::getFloatValue_0>(
        __zz_cib_h_
      )
    );
  }
  ::Value<int> getIntValue() const override {
    using __zz_cib_proc = __zz_cib_RValueAbiType_t<::Value<int>>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<::Value<int>>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::getIntValue_2>(
        __zz_cib_h_
      )
    );
  }
  int setValue(const ::Value<int>& intVal) const override {
    using __zz_cib_proc = __zz_cib_RValueAbiType_t<int>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(intVal)>);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::setValue_4>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(intVal)>(intVal)
      )
    );
  }
  float setValue(const ::Value<float>& floatVal) const override {
    using __zz_cib_proc = __zz_cib_RValueAbiType_t<float>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(floatVal)>);
    return __zz_cib_FromAbiType<float>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::setValue_1>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(floatVal)>(floatVal)
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    using __zz_cib_proc = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete_3>(
      __zz_cib_h_
    );
  }
  void __zz_cib_release_proxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::A)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class259::__zz_cib_Generic::__zz_cib_methodid;
};
}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::A> : public ::A {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::A>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::A::A;

  using __zz_cib_Proxy = __zz_cib_Delegatee::__zz_cib_Proxy;
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl) {
    return new __zz_cib_::__zz_cib_Generic<::A>(__zz_cib_proxy, __zz_cib_mtbl);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_1(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_::__zz_cib_Generic<::A>(__zz_cib_proxy, __zz_cib_mtbl, *__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl setValue_3(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::Value<int>&> intVal) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->::A::setValue(
        __zz_cib_::__zz_cib_FromAbiType<const ::Value<int>&>(intVal)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<float> __zz_cib_decl setValue_4(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::Value<float>&> floatVal) {
    return __zz_cib_ToRValueAbiType<float>(
      __zz_cib_obj->::A::setValue(
        __zz_cib_::__zz_cib_FromAbiType<const ::Value<float>&>(floatVal)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<::Value<int>> __zz_cib_decl getIntValue_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<::Value<int>>(
      __zz_cib_obj->::A::getIntValue()
    );
  }
  static __zz_cib_RValueAbiType_t<::Value<float>> __zz_cib_decl getFloatValue_6(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<::Value<float>>(
      __zz_cib_obj->::A::getFloatValue()
    );
  }
  static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_release_proxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class259 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_new_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_copy_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::setValue_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::setValue_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::getIntValue_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::getFloatValue_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}
