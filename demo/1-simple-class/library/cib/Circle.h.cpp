#include "Circle.h"

#include "__zz_cib_Demo-class-down-cast.h"
#include "__zz_cib_Demo-delegate-helper.h"
#include "__zz_cib_Demo-generic.h"
#include "__zz_cib_Demo-ids.h"
#include "__zz_cib_Demo-type-converters.h"
#include "__zz_cib_Demo-mtable-helper.h"
#include "__zz_cib_Demo-proxy-mgr.h"

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::Circle> : public ::Circle {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::Circle>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::Circle::Circle;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_AbiType_t<float> r) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<float>(r));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_1(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<float> __zz_cib_decl Radius_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<float>(
      __zz_cib_obj->::Circle::Radius()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetRadius_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<float> r) {
    __zz_cib_obj->::Circle::SetRadius(
      __zz_cib_::__zz_cib_FromAbiType<float>(r)
    );
  }
  static __zz_cib_AbiType_t<float> __zz_cib_decl Area_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<float>(
      __zz_cib_obj->::Circle::Area()
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class258 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Circle>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Circle>::__zz_cib_Copy_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Circle>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Circle>::Radius_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Circle>::SetRadius_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Circle>::Area_5)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}
