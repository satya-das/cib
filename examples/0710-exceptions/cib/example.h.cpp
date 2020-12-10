#include "example.h"

#include "__zz_cib_Example-class-down-cast.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-generic.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-type-converters.h"
#include "__zz_cib_Example-exception-throw-on-error.h"
#include "__zz_cib_Example-exception-convert-to-error.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-proxy-mgr.h"

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::CustomBaseException> : public ::CustomBaseException {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::CustomBaseException>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::CustomBaseException::CustomBaseException;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<int> error, __zz_cib_AbiType_t<const char*> desc) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<int>(error),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(desc));
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetError_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::CustomBaseException::GetError()
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl GetDesc_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->::CustomBaseException::GetDesc()
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class258 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::CustomBaseException>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::CustomBaseException>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::CustomBaseException>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::CustomBaseException>::GetError_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::CustomBaseException>::GetDesc_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::CustomDerivedException> : public ::CustomDerivedException {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::CustomDerivedException>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::CustomDerivedException::CustomDerivedException;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<int> error, __zz_cib_AbiType_t<const char*> desc, __zz_cib_AbiType_t<const char*> source) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<int>(error),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(desc),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(source));
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl GetSource_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->::CustomDerivedException::GetSource()
    );
  }
  static ::CustomBaseException* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class258(::CustomDerivedException* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::CustomDerivedException* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class258(::CustomBaseException* __zz_cib_obj) {
    return __zz_cib_DownCast<::CustomDerivedException*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class259 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::CustomDerivedException>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::CustomDerivedException>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::CustomDerivedException>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::CustomDerivedException>::GetSource_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::CustomDerivedException>::__zz_cib_CastTo__zz_cib_Class258),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::CustomDerivedException>::__zz_cib_CastFrom__zz_cib_Class258)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::A> {
  using __zz_cib_Delegatee = ::A;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new ::A();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_1(__zz_cib_AbiType_t<const ::A&> a) {
    return new ::A(    __zz_cib_::__zz_cib_FromAbiType<const ::A&>(a));
  }
  static void __zz_cib_decl __zz_cib_Delete_2(::A* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl ThrowException_3(const ::A* __zz_cib_obj, __zz_cib_AbiType_t<::ExceptionType> exceptionType, __zz_cib_AbiException** __zz_cib_exception) {
    try {
      return __zz_cib_ToAbiType<int>(
        __zz_cib_obj->::A::ThrowException(
          __zz_cib_::__zz_cib_FromAbiType<::ExceptionType>(exceptionType)
        )
      );
    } catch(...) {
      *__zz_cib_exception = __zz_cib_ConvertException();
    }
    return __zz_cib_AbiType_t<int>{};
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class260 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_Copy_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::ThrowException_3)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}
