#include "example.h"

#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-generic.h"
#include "__zz_cib_Example-library-type-handler.h"

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::NonPod1> : public ::NonPod1 {
  using __zz_cib_Delegatee = ::NonPod1;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  static ::NonPod1* __zz_cib_decl __zz_cib_new() {
    return new __zz_cib_Delegatee();
  }
  static ::NonPod1* __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class259 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::NonPod1>::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::NonPod1>::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::NonPod1>::__zz_cib_delete)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 3 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::NonPod2> : public ::NonPod2 {
  using __zz_cib_Delegatee = ::NonPod2;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  static ::NonPod2* __zz_cib_decl __zz_cib_new() {
    return new __zz_cib_Delegatee();
  }
  static ::NonPod2* __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class260 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::NonPod2>::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::NonPod2>::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::NonPod2>::__zz_cib_delete)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 3 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::NonPod3> : public ::NonPod3 {
  using __zz_cib_Delegatee = ::NonPod3;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  static ::NonPod3* __zz_cib_decl __zz_cib_new() {
    return new __zz_cib_Delegatee();
  }
  static ::NonPod3* __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class261 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::NonPod3>::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::NonPod3>::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::NonPod3>::__zz_cib_delete)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 3 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::A> : public ::A {
  using __zz_cib_Delegatee = ::A;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  static ::A* __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static ::A* __zz_cib_decl __zz_cib_new() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl setPod(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<Pod&> p) {
        __zz_cib_obj->::A::setPod(
            __zz_cib_::__zz_cib_FromAbiType<Pod&>(p)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl setPod_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<Pod*> p) {
        __zz_cib_obj->::A::setPod(
            __zz_cib_::__zz_cib_FromAbiType<Pod*>(p)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl setNonPod1(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<NonPod1&> n) {
        __zz_cib_obj->::A::setNonPod1(
            __zz_cib_::__zz_cib_FromAbiType<NonPod1&>(n)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl setNonPod2(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<NonPod2&> n) {
        __zz_cib_obj->::A::setNonPod2(
            __zz_cib_::__zz_cib_FromAbiType<NonPod2&>(n)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl setNonPod3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<NonPod3&> n) {
        __zz_cib_obj->::A::setNonPod3(
            __zz_cib_::__zz_cib_FromAbiType<NonPod3&>(n)
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class262 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::setPod),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::setPod_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::setNonPod1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::setNonPod2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::setNonPod3)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}
