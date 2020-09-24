#include "file-defining-class.h"
#include <vector>

#include "__zz_cib_StlDependencyTest-class-down-cast.h"
#include "__zz_cib_StlDependencyTest-delegate-helper.h"
#include "__zz_cib_StlDependencyTest-generic.h"
#include "__zz_cib_StlDependencyTest-ids.h"
#include "__zz_cib_StlDependencyTest-library-type-handler.h"
#include "__zz_cib_StlDependencyTest-mtable-helper.h"

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::ExampleClass> : public ::ExampleClass {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::ExampleClass>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::ExampleClass::ExampleClass;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_1() {
    return new __zz_cib_Delegatee();
  }
  static void __zz_cib_decl __zz_cib_delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::std::vector<::ExampleClass*>> __zz_cib_decl get_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::ExampleClass*>>(
      __zz_cib_obj->::ExampleClass::get()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl value_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::ExampleClass::value()
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class263 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::ExampleClass>::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::ExampleClass>::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::ExampleClass>::__zz_cib_delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::ExampleClass>::get_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::ExampleClass>::value_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}
