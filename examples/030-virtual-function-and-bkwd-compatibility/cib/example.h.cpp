#include "example.h"

#include "__zz_cib_Example-class-down-cast.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-generic-impl-interface.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-type-converters.h"
#include "__zz_cib_Example-mtable-helper.h"

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::A> : public ::A {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::A>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::A::A;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_1() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl AnotherVirtFunc_4(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::A::AnotherVirtFunc()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl VirtFunc_2(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::A::VirtFunc()
    );
  }
  static void __zz_cib_decl __zz_cib_delete_3(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class258 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::VirtFunc_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_delete_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::AnotherVirtFunc_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::B> : public ::B {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::B>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::B::B;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl VirtFunc_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::B::VirtFunc()
    );
  }
  static __zz_cib_AbiType_t<::B*> __zz_cib_decl Create_4() {
    return __zz_cib_ToAbiType<::B*>(
      ::B::Create()
    );
  }
  static ::A* __zz_cib_decl __zz_cib_cast_to___zz_cib_Class258(::B* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::B* __zz_cib_decl __zz_cib_cast_from___zz_cib_Class258(::A* __zz_cib_obj) {
    return __zz_cib_DownCast<::B*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class259 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::B>::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::B>::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::B>::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::B>::VirtFunc_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::B>::Create_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::B>::__zz_cib_cast_to___zz_cib_Class258),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::B>::__zz_cib_cast_from___zz_cib_Class258)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 7 };
  return &methodTable;
}
}}
