#include "A.h"
#include "value.h"

#include "__zz_cib_templates-class-down-cast.h"
#include "__zz_cib_templates-delegate-helper.h"
#include "__zz_cib_templates-generic-impl-interface.h"
#include "__zz_cib_templates-ids.h"
#include "__zz_cib_templates-type-converters.h"
#include "__zz_cib_templates-mtable-helper.h"

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::A> : public ::A {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::A>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::A::A;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_1(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl setValue_3(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::Value<int>&> intVal) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::A::setValue(
        __zz_cib_::__zz_cib_FromAbiType<const ::Value<int>&>(intVal)
      )
    );
  }
  static __zz_cib_AbiType_t<float> __zz_cib_decl setValue_4(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::Value<float>&> floatVal) {
    return __zz_cib_ToAbiType<float>(
      __zz_cib_obj->::A::setValue(
        __zz_cib_::__zz_cib_FromAbiType<const ::Value<float>&>(floatVal)
      )
    );
  }
  static __zz_cib_AbiType_t<::Value<int>> __zz_cib_decl getIntValue_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::Value<int>>(
      __zz_cib_obj->::A::getIntValue()
    );
  }
  static __zz_cib_AbiType_t<::Value<float>> __zz_cib_decl getFloatValue_6(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::Value<float>>(
      __zz_cib_obj->::A::getFloatValue()
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class260 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_Copy_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::setValue_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::setValue_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::getIntValue_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::getFloatValue_6)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 7 };
  return &methodTable;
}
}}
