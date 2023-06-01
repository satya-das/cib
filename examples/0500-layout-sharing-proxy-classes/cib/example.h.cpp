#include "example.h"

#include "__zz_cib_Example-class-down-cast.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-generic.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-type-converters.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-proxy-mgr.h"

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::CPoint> : public ::CPoint {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::CPoint>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::CPoint::CPoint;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<double> _x, __zz_cib_AbiType_t<double> _y, __zz_cib_AbiType_t<double> _z) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<double>(_x),
    __zz_cib_::__zz_cib_FromAbiType<double>(_y),
    __zz_cib_::__zz_cib_FromAbiType<double>(_z));
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<const ::CPoint&> __zz_cib_decl __zz_cib_OperatorPlusEq_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::CPoint&> p) {
    return __zz_cib_ToAbiType<const ::CPoint&>(
      __zz_cib_obj->::CPoint::operator +=(
        __zz_cib_::__zz_cib_FromAbiType<const ::CPoint&>(p)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class258 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::CPoint>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::CPoint>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::CPoint>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::CPoint>::__zz_cib_OperatorPlusEq_3)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}
