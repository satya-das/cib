#include "example.h"


A::A(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

A::A(A&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

A::A(const ::A& __zz_cib_param0)
  : A(__zz_cib_MyHelper::__zz_cib_copy(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

A::A()
  : A(__zz_cib_MyHelper::__zz_cib_new(
    this))
  {}

A::~A() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete(
    h
  );
}

int A::f0() {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::f0<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

#if  COND // Start of a conditional group, also start of 1st subgroup
int A::f1() {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::f1<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int A::f2() {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::f2<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

#elif  COND2 // OPTIONAL. Start of 2nd subgroup
int A::f3() {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::f3<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

#else 
int A::f4() {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::f4<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int A::f5() {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::f5<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int A::f6() {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::f6<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
#endif

int A::f7() {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::f7<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int A::func() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::func<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int A::DoFunc() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::DoFunc<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}


B::B(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

B::B(B&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

B::B(const ::B& __zz_cib_param0)
  : B(__zz_cib_MyHelper::__zz_cib_copy(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

B::B()
  : B(__zz_cib_MyHelper::__zz_cib_new(
    ))
  {}

B::~B() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete(
    h
  );
}

#if  COND // Start of a conditional group, also start of 1st subgroup
int B::f1() {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::f1<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int B::f2() {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::f2<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
#endif


C::C(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

C::C(C&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

C::C(const ::C& __zz_cib_param0)
  : C(__zz_cib_MyHelper::__zz_cib_copy(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

C::C()
  : C(__zz_cib_MyHelper::__zz_cib_new(
    ))
  {}

C::~C() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete(
    h
  );
}

#if  COND // Start of a conditional group, also start of 1st subgroup
int C::f1() {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::f1<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int C::f2() {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::f2<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
#endif

int C::f3() {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::f3<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}


P::P(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

P::P(P&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

P::P(const ::P& __zz_cib_param0)
  : P(__zz_cib_MyHelper::__zz_cib_copy(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

P::P()
  : P(__zz_cib_MyHelper::__zz_cib_new(
    this))
  {}

P::~P() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete(
    h
  );
}

#if  COND // Start of a conditional group, also start of 1st subgroup
int P::f1() {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::f1<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int P::f2() {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::f2<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
#endif

int P::f3() {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::f3<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::A> {
  using __zz_cib_Delegatee = ::A;
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl DoFunc(const ::A* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->DoFunc()
    );
  }
  static void __zz_cib_decl __zz_cib_delete(::A* __zz_cib_obj) {
    __zz_cib_Helper<::A>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class257 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::DoFunc),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_delete)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
const __zz_cib_MethodTable* __zz_cib_Helper<::A>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class257::__zz_cib_GetMethodTable();
}
}

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::P> {
  using __zz_cib_Delegatee = ::P;
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl f3(::P* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->f3()
    );
  }
#if  COND // Start of a conditional group, also start of 1st subgroup
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl f1(::P* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->f1()
    );
  }
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl f2(::P* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->f2()
    );
  }
#endif
  static void __zz_cib_decl __zz_cib_delete(::P* __zz_cib_obj) {
    __zz_cib_Helper<::P>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class260 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::P>::f3),
#if  COND // Start of a conditional group, also start of 1st subgroup
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::P>::f1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::P>::f2),
#else 
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
#endif
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::P>::__zz_cib_delete)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
const __zz_cib_MethodTable* __zz_cib_Helper<::P>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class260::__zz_cib_GetMethodTable();
}
}

