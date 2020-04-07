#include "example.h"

#include "__zz_cib_Example-class-down-cast.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-generic.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-library-type-handler.h"
#include "__zz_cib_Example-mtable-helper.h"

namespace __zz_cib_ {
template<> struct __zz_cib_Delegator<::A>;
template <>
class __zz_cib_Generic<::A> : public ::A {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::A>;

  __zz_cib_Generic(__zz_cib_Proxy proxy, const __zz_cib_MethodTable* mtbl)
    : ::A::A()
    , __zz_cib_h_(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy proxy, const __zz_cib_MethodTable* mtbl, const ::A& __zz_cib_param0)
    : ::A::A(    __zz_cib_param0)
    , __zz_cib_h_(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  int DoFunc() const override {
    using __zz_cib_proc = __zz_cib_RValueAbiType_t<int>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::DoFunc_0>(
        __zz_cib_h_
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    using __zz_cib_proc = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete_1>(
      __zz_cib_h_
    );
  }
  void __zz_cib_release_proxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::A)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
  friend struct __zz_cib_::__zz_cib_Delegator<::A>;
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class257::__zz_cib_Generic::__zz_cib_methodid;
};
}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::A> : public ::A {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::A>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::A::A;

  using __zz_cib_Proxy = __zz_cib_Delegatee::__zz_cib_Proxy;
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_0(__zz_cib_Proxy proxy, const __zz_cib_MethodTable* mtbl, const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_::__zz_cib_Generic<::A>(proxy, mtbl, *__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_1(__zz_cib_Proxy proxy, const __zz_cib_MethodTable* mtbl) {
    return new __zz_cib_::__zz_cib_Generic<::A>(proxy, mtbl);
  }
  static void __zz_cib_decl __zz_cib_delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl f0_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->::A::f0()
    );
  }
#if  COND // Start of a conditional group, also start of 1st subgroup
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl f1_4(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->::A::f1()
    );
  }
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl f2_5(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->::A::f2()
    );
  }
#elif  COND2 // OPTIONAL. Start of 2nd subgroup
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl f3_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->::A::f3()
    );
  }
#else 
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl f4_7(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->::A::f4()
    );
  }
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl f5_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->::A::f5()
    );
  }
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl f6_9(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->::A::f6()
    );
  }
#endif
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl f7_10(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->::A::f7()
    );
  }
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl func_11(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->::A::func()
    );
  }
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl DoFunc_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->::A::DoFunc()
    );
  }
  static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_release_proxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class257 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::f0_3),
#if  COND // Start of a conditional group, also start of 1st subgroup
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::f1_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::f2_5),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
#elif  COND2 // OPTIONAL. Start of 2nd subgroup
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::f3_6),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
#else 
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::f4_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::f5_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::f6_9),
#endif
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::f7_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::func_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::DoFunc_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 14 };
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
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_1() {
    return new __zz_cib_Delegatee();
  }
  static void __zz_cib_decl __zz_cib_delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
#if  COND // Start of a conditional group, also start of 1st subgroup
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl f1_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->::B::f1()
    );
  }
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl f2_4(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->::B::f2()
    );
  }
#endif
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class258 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::B>::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::B>::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::B>::__zz_cib_delete_2),
#if  COND // Start of a conditional group, also start of 1st subgroup
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::B>::f1_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::B>::f2_4),
#else 
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (0)
#endif

  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::C> : public ::C {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::C>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::C::C;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_1() {
    return new __zz_cib_Delegatee();
  }
  static void __zz_cib_decl __zz_cib_delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
#if  COND // Start of a conditional group, also start of 1st subgroup
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl f1_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->::C::f1()
    );
  }
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl f2_4(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->::C::f2()
    );
  }
#endif
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl f3_5(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->::C::f3()
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class259 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::C>::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::C>::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::C>::__zz_cib_delete_2),
#if  COND // Start of a conditional group, also start of 1st subgroup
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::C>::f1_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::C>::f2_4),
#else 
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
#endif
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::C>::f3_5)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
template <>
class __zz_cib_Generic<::P> : public ::P {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::P>;

  __zz_cib_Generic(__zz_cib_Proxy proxy, const __zz_cib_MethodTable* mtbl)
    : ::P::P()
    , __zz_cib_h_(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy proxy, const __zz_cib_MethodTable* mtbl, const ::P& __zz_cib_param0)
    : ::P::P(    __zz_cib_param0)
    , __zz_cib_h_(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  int f3() override {
    using __zz_cib_proc = __zz_cib_RValueAbiType_t<int>(__zz_cib_decl *) (__zz_cib_Proxy);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::f3_0>(
        __zz_cib_h_
      )
    );
  }
#if  COND // Start of a conditional group, also start of 1st subgroup
  int f1() override {
    using __zz_cib_proc = __zz_cib_RValueAbiType_t<int>(__zz_cib_decl *) (__zz_cib_Proxy);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::f1_1>(
        __zz_cib_h_
      )
    );
  }
  int f2() override {
    using __zz_cib_proc = __zz_cib_RValueAbiType_t<int>(__zz_cib_decl *) (__zz_cib_Proxy);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::f2_2>(
        __zz_cib_h_
      )
    );
  }
#endif
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    using __zz_cib_proc = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete_3>(
      __zz_cib_h_
    );
  }
  void __zz_cib_release_proxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::P)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class260::__zz_cib_Generic::__zz_cib_methodid;
};
}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::P> : public ::P {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::P>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::P::P;

  using __zz_cib_Proxy = __zz_cib_Delegatee::__zz_cib_Proxy;
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_0(__zz_cib_Proxy proxy, const __zz_cib_MethodTable* mtbl, const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_::__zz_cib_Generic<::P>(proxy, mtbl, *__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_1(__zz_cib_Proxy proxy, const __zz_cib_MethodTable* mtbl) {
    return new __zz_cib_::__zz_cib_Generic<::P>(proxy, mtbl);
  }
  static void __zz_cib_decl __zz_cib_delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
#if  COND // Start of a conditional group, also start of 1st subgroup
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl f1_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->::P::f1()
    );
  }
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl f2_4(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->::P::f2()
    );
  }
#endif
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl f3_5(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->::P::f3()
    );
  }
  static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_release_proxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class260 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::P>::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::P>::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::P>::__zz_cib_delete_2),
#if  COND // Start of a conditional group, also start of 1st subgroup
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::P>::f1_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::P>::f2_4),
#else 
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
#endif
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::P>::f3_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::P>::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 7 };
  return &methodTable;
}
}}
