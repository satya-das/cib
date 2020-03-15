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

  __zz_cib_Generic(__zz_cib_Proxy proxy, const __zz_cib_MethodTable* mtbl)
    : ::A::A()
    , __zz_cib_h_(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy proxy, const __zz_cib_MethodTable* mtbl, const A& __zz_cib_param0)
    : ::A::A(    __zz_cib_param0)
    , __zz_cib_h_(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  Value<float> getFloatValue() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<Value<float>>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<Value<float>>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::getFloatValue>(
        __zz_cib_h_
      )
    );
  }
  Value<int> getIntValue() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<Value<int>>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<Value<int>>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::getIntValue>(
        __zz_cib_h_
      )
    );
  }
  int setValue(const Value<int>& intVal) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<const Value<int>&> intVal);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::setValue>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<const Value<int>&>(intVal)
      )
    );
  }
  float setValue(const Value<float>& floatVal) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<float>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<const Value<float>&> floatVal);
    return __zz_cib_FromAbiType<float>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::setValue_3>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<const Value<float>&>(floatVal)
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    using __zz_cib_proc = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete>(
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
  using __zz_cib_Proxy = __zz_cib_Delegatee::__zz_cib_Proxy;
  static ::A* __zz_cib_decl __zz_cib_new(__zz_cib_Proxy proxy, const __zz_cib_MethodTable* mtbl) {
    return new __zz_cib_::__zz_cib_Generic<::A>(proxy, mtbl);
  }
  static ::A* __zz_cib_decl __zz_cib_copy(__zz_cib_Proxy proxy, const __zz_cib_MethodTable* mtbl, const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_::__zz_cib_Generic<::A>(proxy, mtbl, *__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl setValue(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const Value<int>&> intVal) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::A::setValue(
        __zz_cib_::__zz_cib_FromAbiType<const Value<int>&>(intVal)
      )
    );
  }
  static __zz_cib_AbiType_t<float> __zz_cib_decl setValue_4(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const Value<float>&> floatVal) {
    return __zz_cib_ToAbiType<float>(
      __zz_cib_obj->::A::setValue(
        __zz_cib_::__zz_cib_FromAbiType<const Value<float>&>(floatVal)
      )
    );
  }
  static __zz_cib_AbiType_t<Value<int>> __zz_cib_decl getIntValue(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<Value<int>>(
      __zz_cib_obj->::A::getIntValue()
    );
  }
  static __zz_cib_AbiType_t<Value<float>> __zz_cib_decl getFloatValue(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<Value<float>>(
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
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::setValue),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::setValue_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::getIntValue),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::getFloatValue),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}
