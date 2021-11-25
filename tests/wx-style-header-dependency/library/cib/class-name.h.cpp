#include "class-name.h"

#include "__zz_cib_wxStyleHeaderDependencyTests-class-down-cast.h"
#include "__zz_cib_wxStyleHeaderDependencyTests-delegate-helper.h"
#include "__zz_cib_wxStyleHeaderDependencyTests-generic.h"
#include "__zz_cib_wxStyleHeaderDependencyTests-ids.h"
#include "__zz_cib_wxStyleHeaderDependencyTests-type-converters.h"
#include "__zz_cib_wxStyleHeaderDependencyTests-mtable-helper.h"
#include "__zz_cib_wxStyleHeaderDependencyTests-proxy-mgr.h"

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::wxClassBase> : public ::wxClassBase {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::wxClassBase>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::wxClassBase::wxClassBase;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1() {
    return new __zz_cib_Delegatee();
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl Func_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::wxClassBase::Func()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl DoFunc_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::wxClassBase::DoFunc()
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class258 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::wxClassBase>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::wxClassBase>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::wxClassBase>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::wxClassBase>::Func_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::wxClassBase>::DoFunc_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}
