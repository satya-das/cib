#include "example.h"
#include "value.h"

#include "__zz_cib_Example-class-down-cast.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-generic.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-type-converters.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-proxy-mgr.h"

namespace __zz_cib_ {
using namespace ::Example;
template <>
struct __zz_cib_Delegator<::Example::A> : public ::Example::A {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::Example::A>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::Example::A::A;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_1(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Set_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::Example::Value<int>&> x) {
    __zz_cib_obj->::Example::A::Set(
      __zz_cib_::__zz_cib_FromAbiType<const ::Example::Value<int>&>(x)
    );
  }
  static __zz_cib_AbiType_t<::Example::Value<int>> __zz_cib_decl Get_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::Example::Value<int>>(
      __zz_cib_obj->::Example::A::Get()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetInt_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::Example::Value<::Example::Int>&> y) {
    __zz_cib_obj->::Example::A::SetInt(
      __zz_cib_::__zz_cib_FromAbiType<const ::Example::Value<::Example::Int>&>(y)
    );
  }
  static __zz_cib_AbiType_t<::Example::Value<::Example::Int>> __zz_cib_decl GetInt_6(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::Example::Value<::Example::Int>>(
      __zz_cib_obj->::Example::A::GetInt()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetFloat_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::Example::Value<float>> f) {
    __zz_cib_obj->::Example::A::SetFloat(
      __zz_cib_::__zz_cib_FromAbiType<::Example::Value<float>>(f)
    );
  }
  static __zz_cib_AbiType_t<::Example::Value<float>> __zz_cib_decl GetFloat_8(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::Example::Value<float>>(
      __zz_cib_obj->::Example::A::GetFloat()
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::Example;
namespace __zz_cib_Class262 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::A>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::A>::__zz_cib_Copy_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::A>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::A>::Set_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::A>::Get_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::A>::SetInt_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::A>::GetInt_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::A>::SetFloat_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::A>::GetFloat_8)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 9 };
  return &methodTable;
}
}}}
