#include "interface.h"
#include "template.h"

#include "__zz_cib_BaseTemplateInterfaceTests-class-down-cast.h"
#include "__zz_cib_BaseTemplateInterfaceTests-delegate-helper.h"
#include "__zz_cib_BaseTemplateInterfaceTests-generic.h"
#include "__zz_cib_BaseTemplateInterfaceTests-ids.h"
#include "__zz_cib_BaseTemplateInterfaceTests-type-converters.h"
#include "__zz_cib_BaseTemplateInterfaceTests-mtable-helper.h"
#include "__zz_cib_BaseTemplateInterfaceTests-proxy-mgr.h"

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::ClassWithParameterizedBase<::BaseInterface>> : public ::ClassWithParameterizedBase<::BaseInterface> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::ClassWithParameterizedBase<::BaseInterface>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::ClassWithParameterizedBase<::BaseInterface>::ClassWithParameterizedBase;

  static __zz_cib_AbiType_t<int> __zz_cib_decl Func_0(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::ClassWithParameterizedBase<::BaseInterface>::Func()
    );
  }
  static ::BaseInterface* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class261(::ClassWithParameterizedBase<::BaseInterface>* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::ClassWithParameterizedBase<::BaseInterface>* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class261(::BaseInterface* __zz_cib_obj) {
    return __zz_cib_DownCast<::ClassWithParameterizedBase<::BaseInterface>*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::ClassWithParameterizedBase<::BaseInterface>>::Func_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::ClassWithParameterizedBase<::BaseInterface>>::__zz_cib_CastTo__zz_cib_Class261),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::ClassWithParameterizedBase<::BaseInterface>>::__zz_cib_CastFrom__zz_cib_Class261)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 3 };
  return &methodTable;
}
}}
