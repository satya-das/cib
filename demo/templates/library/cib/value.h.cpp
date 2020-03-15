#include "value.h"

#include "__zz_cib_templates-class-down-cast.h"
#include "__zz_cib_templates-delegate-helper.h"
#include "__zz_cib_templates-generic.h"
#include "__zz_cib_templates-ids.h"
#include "__zz_cib_templates-library-type-handler.h"
#include "__zz_cib_templates-mtable-helper.h"

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::Value<float>> : public ::Value<float> {
  using __zz_cib_Delegatee = ::Value<float>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  static ::Value<float>* __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static ::Value<float>* __zz_cib_decl __zz_cib_new(__zz_cib_AbiType_t<float> value) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<float>(value));
  }
  static __zz_cib_AbiType_t<float> __zz_cib_decl get(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<float>(
      __zz_cib_obj->::Value<float>::get()
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class257 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Value<float>>::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Value<float>>::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Value<float>>::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Value<float>>::get)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::Value<int>> : public ::Value<int> {
  using __zz_cib_Delegatee = ::Value<int>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  static ::Value<int>* __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static ::Value<int>* __zz_cib_decl __zz_cib_new(__zz_cib_AbiType_t<int> value) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<int>(value));
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl get(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::Value<int>::get()
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Value<int>>::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Value<int>>::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Value<int>>::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Value<int>>::get)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}
