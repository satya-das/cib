#include "std-function.h"

#include "__zz_cib_StdFunctionTests-class-down-cast.h"
#include "__zz_cib_StdFunctionTests-delegate-helper.h"
#include "__zz_cib_StdFunctionTests-generic.h"
#include "__zz_cib_StdFunctionTests-ids.h"
#include "__zz_cib_StdFunctionTests-library-type-handler.h"
#include "__zz_cib_StdFunctionTests-mtable-helper.h"

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::A> : public ::A {
  using __zz_cib_Delegatee = ::A;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new(__zz_cib_AbiType_t<int> x) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<int>(x));
  }
  static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl f(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->::A::f()
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class257 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::f)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::B> : public ::B {
  using __zz_cib_Delegatee = ::B;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new(__zz_cib_AbiType_t<int> x) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<int>(x));
  }
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl f(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->::B::f()
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class258 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::B>::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::B>::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::B>::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::B>::f)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::C> : public ::C {
  using __zz_cib_Delegatee = ::C;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new(__zz_cib_AbiType_t<int> x) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<int>(x));
  }
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl f(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->::C::f()
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class259 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::C>::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::C>::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::C>::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::C>::f)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::T> : public ::T {
  using __zz_cib_Delegatee = ::T;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl passStdFunctionByValue(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<TestCallback> callback) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->::T::passStdFunctionByValue(
        __zz_cib_::__zz_cib_FromAbiType<TestCallback>(callback)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl passStdFunctionByRValueRef(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<TestCallback&&> callback) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->::T::passStdFunctionByRValueRef(
        __zz_cib_::__zz_cib_FromAbiType<TestCallback&&>(callback)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl invokeSavedCallbackPassedByValue(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->::T::invokeSavedCallbackPassedByValue()
    );
  }
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl invokeSavedCallbackPassedByRValueRef(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->::T::invokeSavedCallbackPassedByRValueRef()
    );
  }
  static __zz_cib_RValueAbiType_t<TestCallback> __zz_cib_decl getCallback(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<TestCallback>(
      __zz_cib_obj->::T::getCallback()
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class260 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::T>::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::T>::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::T>::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::T>::passStdFunctionByValue),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::T>::passStdFunctionByRValueRef),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::T>::invokeSavedCallbackPassedByValue),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::T>::invokeSavedCallbackPassedByRValueRef),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::T>::getCallback)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}
