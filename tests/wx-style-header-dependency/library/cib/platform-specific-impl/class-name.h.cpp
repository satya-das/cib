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
struct __zz_cib_Delegator<::wxClass> : public ::wxClass {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::wxClass>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::wxClass::wxClass;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl DoFunc_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::wxClass::DoFunc()
    );
  }
  static ::wxClassBase* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class258(::wxClass* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::wxClass* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class258(::wxClassBase* __zz_cib_obj) {
    return __zz_cib_DownCast<::wxClass*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class259 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::wxClass>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::wxClass>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::wxClass>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::wxClass>::DoFunc_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::wxClass>::__zz_cib_CastTo__zz_cib_Class258),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::wxClass>::__zz_cib_CastFrom__zz_cib_Class258)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}
