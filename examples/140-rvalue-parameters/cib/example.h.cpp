#include "__zz_cib_helpers/__zz_cib_helper-example.h"

#include "__zz_cib_Example-class-down-cast.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-generic.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-type-converters.h"
#include "__zz_cib_Example-mtable-helper.h"

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::RValueExample> : public ::RValueExample {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::RValueExample>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::RValueExample::RValueExample;

  static void __zz_cib_decl __zz_cib_delete_0(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_1(__zz_cib_AbiType_t<std::int32_t> val) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<std::int32_t>(val));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_2(__zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(std::move(*__zz_cib_obj));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType_t<::RValueExample&> __zz_cib_decl __zz_cib_OperatorEqual_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::RValueExample&&> rhs) {
    return __zz_cib_ToAbiType<::RValueExample&>(
      __zz_cib_obj->::RValueExample::operator=(
        __zz_cib_::__zz_cib_FromAbiType<::RValueExample&&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::RValueExample&> __zz_cib_decl __zz_cib_OperatorEqual_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::RValueExample&> rhs) {
    return __zz_cib_ToAbiType<::RValueExample&>(
      __zz_cib_obj->::RValueExample::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::RValueExample&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<std::int32_t> __zz_cib_decl Set_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::RValueExample&&> x) {
    return __zz_cib_ToAbiType<std::int32_t>(
      __zz_cib_obj->::RValueExample::Set(
        __zz_cib_::__zz_cib_FromAbiType<::RValueExample&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<std::int32_t> __zz_cib_decl GetValue_7(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<std::int32_t>(
      __zz_cib_obj->::RValueExample::GetValue()
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class258 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::RValueExample>::__zz_cib_delete_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::RValueExample>::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::RValueExample>::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::RValueExample>::__zz_cib_copy_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::RValueExample>::__zz_cib_OperatorEqual_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::RValueExample>::__zz_cib_OperatorEqual_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::RValueExample>::Set_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::RValueExample>::GetValue_7)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}
