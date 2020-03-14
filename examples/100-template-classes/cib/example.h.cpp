#include "example.h"
#include "value.h"

#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-generic.h"
#include "__zz_cib_Example-library-type-handler.h"
#include "__zz_cib_Example-class-down-cast.h"

namespace __zz_cib_ {
using namespace ::Example;
template <>
struct __zz_cib_Delegator<::Example::A> : public ::Example::A {
  using __zz_cib_Delegatee = ::Example::A;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  static ::Example::A* __zz_cib_decl __zz_cib_new() {
    return new __zz_cib_Delegatee();
  }
  static ::Example::A* __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Set(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const Value<int>&> x) {
        __zz_cib_obj->::Example::A::Set(
            __zz_cib_::__zz_cib_FromAbiType<const Value<int>&>(x)
    );
  }
  static __zz_cib_AbiType_t<Value<int>> __zz_cib_decl Get(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<Value<int>>(
      __zz_cib_obj->::Example::A::Get()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetInt(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const Value<Int>&> y) {
        __zz_cib_obj->::Example::A::SetInt(
            __zz_cib_::__zz_cib_FromAbiType<const Value<Int>&>(y)
    );
  }
  static __zz_cib_AbiType_t<Value<Int>> __zz_cib_decl GetInt(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<Value<Int>>(
      __zz_cib_obj->::Example::A::GetInt()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetFloat(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<FloatValue> f) {
        __zz_cib_obj->::Example::A::SetFloat(
            __zz_cib_::__zz_cib_FromAbiType<FloatValue>(f)
    );
  }
  static __zz_cib_AbiType_t<FloatValue> __zz_cib_decl GetFloat(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<FloatValue>(
      __zz_cib_obj->::Example::A::GetFloat()
    );
  }
};
}

namespace __zz_cib_ {
using namespace ::Example;
namespace __zz_cib_Class256 {
using namespace ::Example;
namespace __zz_cib_Class261 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::A>::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::A>::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::A>::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::A>::Set),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::A>::Get),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::A>::SetInt),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::A>::GetInt),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::A>::SetFloat),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::A>::GetFloat)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 9 };
  return &methodTable;
}
}}}
