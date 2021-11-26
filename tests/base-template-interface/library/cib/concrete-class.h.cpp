#include "concrete-class.h"

#include "__zz_cib_BaseTemplateInterfaceTests-class-down-cast.h"
#include "__zz_cib_BaseTemplateInterfaceTests-delegate-helper.h"
#include "__zz_cib_BaseTemplateInterfaceTests-generic.h"
#include "__zz_cib_BaseTemplateInterfaceTests-ids.h"
#include "__zz_cib_BaseTemplateInterfaceTests-type-converters.h"
#include "__zz_cib_BaseTemplateInterfaceTests-mtable-helper.h"
#include "__zz_cib_BaseTemplateInterfaceTests-proxy-mgr.h"

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::StillAnAbstractClass> : public ::StillAnAbstractClass {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::StillAnAbstractClass>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::StillAnAbstractClass::StillAnAbstractClass;

  static __zz_cib_AbiType_t<int> __zz_cib_decl ImplF_0(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::StillAnAbstractClass::ImplF()
    );
  }
  static ::BaseInterface* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class261(::StillAnAbstractClass* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::StillAnAbstractClass* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class261(::BaseInterface* __zz_cib_obj) {
    return __zz_cib_DownCast<::StillAnAbstractClass*>(__zz_cib_obj);
  }
  static ::ClassWithParameterizedBase<::BaseInterface>* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class256(::StillAnAbstractClass* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::StillAnAbstractClass* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class256(::ClassWithParameterizedBase<::BaseInterface>* __zz_cib_obj) {
    return __zz_cib_DownCast<::StillAnAbstractClass*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class259 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::StillAnAbstractClass>::ImplF_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::StillAnAbstractClass>::__zz_cib_CastTo__zz_cib_Class261),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::StillAnAbstractClass>::__zz_cib_CastFrom__zz_cib_Class261),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::StillAnAbstractClass>::__zz_cib_CastTo__zz_cib_Class256),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::StillAnAbstractClass>::__zz_cib_CastFrom__zz_cib_Class256)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::DerivedClass> : public ::DerivedClass {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::DerivedClass>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::DerivedClass::DerivedClass;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl F_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::DerivedClass::F()
    );
  }
  static ::BaseInterface* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class261(::DerivedClass* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::DerivedClass* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class261(::BaseInterface* __zz_cib_obj) {
    return __zz_cib_DownCast<::DerivedClass*>(__zz_cib_obj);
  }
  static ::ClassWithParameterizedBase<::BaseInterface>* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class256(::DerivedClass* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::DerivedClass* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class256(::ClassWithParameterizedBase<::BaseInterface>* __zz_cib_obj) {
    return __zz_cib_DownCast<::DerivedClass*>(__zz_cib_obj);
  }
  static ::StillAnAbstractClass* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class259(::DerivedClass* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::DerivedClass* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class259(::StillAnAbstractClass* __zz_cib_obj) {
    return __zz_cib_DownCast<::DerivedClass*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class260 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::DerivedClass>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::DerivedClass>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::DerivedClass>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::DerivedClass>::F_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::DerivedClass>::__zz_cib_CastTo__zz_cib_Class261),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::DerivedClass>::__zz_cib_CastFrom__zz_cib_Class261),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::DerivedClass>::__zz_cib_CastTo__zz_cib_Class256),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::DerivedClass>::__zz_cib_CastFrom__zz_cib_Class256),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::DerivedClass>::__zz_cib_CastTo__zz_cib_Class259),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::DerivedClass>::__zz_cib_CastFrom__zz_cib_Class259)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 10 };
  return &methodTable;
}
}}
