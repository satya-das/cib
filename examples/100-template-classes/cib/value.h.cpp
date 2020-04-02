#include "int.h"
#include "value.h"

#include "__zz_cib_Example-class-down-cast.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-generic.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-library-type-handler.h"
#include "__zz_cib_Example-mtable-helper.h"

namespace __zz_cib_ {
using namespace ::Example;
template <>
struct __zz_cib_Delegator<::Example::Value<::Example::Int>> : public ::Example::Value<::Example::Int> {
  using __zz_cib_Delegatee = ::Example::Value<::Example::Int>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::Example::Value<::Example::Int>::Value;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new(__zz_cib_AbiType_t<::Example::Int> x) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::Example::Int>(x));
  }
  static __zz_cib_RValueAbiType_t<::Example::Int> __zz_cib_decl GetValue(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<::Example::Int>(
      __zz_cib_obj->::Example::Value<::Example::Int>::GetValue()
    );
  }
  static __zz_cib_RValueAbiType_t<void> __zz_cib_decl SetValue(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::Example::Int> x) {
    __zz_cib_obj->::Example::Value<::Example::Int>::SetValue(
      __zz_cib_::__zz_cib_FromAbiType<::Example::Int>(x)
    );
  }
  static __zz_cib_RValueAbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const Value&> rhs) {
    return __zz_cib_ToRValueAbiType<bool>(
      __zz_cib_obj->::Example::Value<::Example::Int>::operator ==(
        __zz_cib_::__zz_cib_FromAbiType<const Value&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
using namespace ::Example;
namespace __zz_cib_Class256 {
using namespace ::Example;
namespace __zz_cib_Class258 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<::Example::Int>>::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<::Example::Int>>::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<::Example::Int>>::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<::Example::Int>>::GetValue),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<::Example::Int>>::SetValue),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<::Example::Int>>::__zz_cib_OperatorCmpEq)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::Example;
template <>
struct __zz_cib_Delegator<::Example::Value<float>> : public ::Example::Value<float> {
  using __zz_cib_Delegatee = ::Example::Value<float>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::Example::Value<float>::Value;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new(__zz_cib_AbiType_t<float> x) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<float>(x));
  }
  static __zz_cib_RValueAbiType_t<float> __zz_cib_decl GetValue(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<float>(
      __zz_cib_obj->::Example::Value<float>::GetValue()
    );
  }
  static __zz_cib_RValueAbiType_t<void> __zz_cib_decl SetValue(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<float> x) {
    __zz_cib_obj->::Example::Value<float>::SetValue(
      __zz_cib_::__zz_cib_FromAbiType<float>(x)
    );
  }
  static __zz_cib_RValueAbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const Value&> rhs) {
    return __zz_cib_ToRValueAbiType<bool>(
      __zz_cib_obj->::Example::Value<float>::operator ==(
        __zz_cib_::__zz_cib_FromAbiType<const Value&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
using namespace ::Example;
namespace __zz_cib_Class256 {
using namespace ::Example;
namespace __zz_cib_Class259 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<float>>::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<float>>::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<float>>::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<float>>::GetValue),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<float>>::SetValue),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<float>>::__zz_cib_OperatorCmpEq)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::Example;
template <>
struct __zz_cib_Delegator<::Example::Value<int>> : public ::Example::Value<int> {
  using __zz_cib_Delegatee = ::Example::Value<int>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::Example::Value<int>::Value;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new(__zz_cib_AbiType_t<int> x) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<int>(x));
  }
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl GetValue(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->::Example::Value<int>::GetValue()
    );
  }
  static __zz_cib_RValueAbiType_t<void> __zz_cib_decl SetValue(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> x) {
    __zz_cib_obj->::Example::Value<int>::SetValue(
      __zz_cib_::__zz_cib_FromAbiType<int>(x)
    );
  }
  static __zz_cib_RValueAbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const Value&> rhs) {
    return __zz_cib_ToRValueAbiType<bool>(
      __zz_cib_obj->::Example::Value<int>::operator ==(
        __zz_cib_::__zz_cib_FromAbiType<const Value&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
using namespace ::Example;
namespace __zz_cib_Class256 {
using namespace ::Example;
namespace __zz_cib_Class257 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<int>>::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<int>>::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<int>>::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<int>>::GetValue),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<int>>::SetValue),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Example::Value<int>>::__zz_cib_OperatorCmpEq)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}}
