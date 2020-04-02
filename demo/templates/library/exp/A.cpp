#include "A.h"
#include "value.h"


A::A(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

A::A(A&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

A::A()
  : A(__zz_cib_MyHelper::__zz_cib_new(
    this))
  {}

A::A(const A& __zz_cib_param0)
  : A(__zz_cib_MyHelper::__zz_cib_copy(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

A::~A() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete(
    h
  );
}

int A::setValue(const Value<int>& intVal) const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::setValue<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(intVal)>(intVal)
    )
  );
}

float A::setValue(const Value<float>& floatVal) const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<float>(
    __zz_cib_MyHelper::setValue_4<__zz_cib_::__zz_cib_RValueAbiType_t<float>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(floatVal)>(floatVal)
    )
  );
}

::Value<int> A::getIntValue() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<::Value<int>>(
    __zz_cib_MyHelper::getIntValue<__zz_cib_::__zz_cib_RValueAbiType_t<::Value<int>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::Value<float> A::getFloatValue() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<::Value<float>>(
    __zz_cib_MyHelper::getFloatValue<__zz_cib_::__zz_cib_RValueAbiType_t<::Value<float>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::A> {
  using __zz_cib_Delegatee = ::A;
  static __zz_cib_RValueAbiType_t<Value<float>> __zz_cib_decl getFloatValue(const ::A* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<Value<float>>(
      __zz_cib_obj->getFloatValue()
    );
  }
  static __zz_cib_RValueAbiType_t<Value<int>> __zz_cib_decl getIntValue(const ::A* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<Value<int>>(
      __zz_cib_obj->getIntValue()
    );
  }
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl setValue(const ::A* __zz_cib_obj, __zz_cib_AbiType_t<const Value<int>&> intVal) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->setValue(
        __zz_cib_::__zz_cib_FromAbiType<const Value<int>&>(intVal)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<float> __zz_cib_decl setValue_3(const ::A* __zz_cib_obj, __zz_cib_AbiType_t<const Value<float>&> floatVal) {
    return __zz_cib_ToRValueAbiType<float>(
      __zz_cib_obj->setValue(
        __zz_cib_::__zz_cib_FromAbiType<const Value<float>&>(floatVal)
      )
    );
  }
  static void __zz_cib_decl __zz_cib_delete(::A* __zz_cib_obj) {
    __zz_cib_Helper<::A>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class259 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::getFloatValue),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::getIntValue),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::setValue),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::setValue_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_delete)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
const __zz_cib_MethodTable* __zz_cib_Helper<::A>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class259::__zz_cib_GetMethodTable();
}
}

