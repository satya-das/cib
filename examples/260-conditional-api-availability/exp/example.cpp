#include "example.h"


A::A(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::A::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

A::A(A&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_::A::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

A::A(::A const & __zz_cib_param0)
  : A(__zz_cib_::A::__zz_cib_Helper::__zz_cib_copy(this, __zz_cib_::A::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

A::A()
  : A(__zz_cib_::A::__zz_cib_Helper::__zz_cib_new(this))
{}

A::~A() {
  __zz_cib_::A::__zz_cib_Helper::__zz_cib_release_proxy(this);
  auto h = __zz_cib_::A::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::A::__zz_cib_Helper::__zz_cib_delete(h);
}

int A::f0() {
  return __zz_cib_::A::__zz_cib_Helper::f0(__zz_cib_h_);
}

#if  COND // Start of a conditional group, also start of 1st subgroup
int A::f1() {
  return __zz_cib_::A::__zz_cib_Helper::f1(__zz_cib_h_);
}

int A::f2() {
  return __zz_cib_::A::__zz_cib_Helper::f2(__zz_cib_h_);
}

#elif  COND2 // OPTIONAL. Start of 2nd subgroup
int A::f3() {
  return __zz_cib_::A::__zz_cib_Helper::f3(__zz_cib_h_);
}

#else 
int A::f4() {
  return __zz_cib_::A::__zz_cib_Helper::f4(__zz_cib_h_);
}

int A::f5() {
  return __zz_cib_::A::__zz_cib_Helper::f5(__zz_cib_h_);
}

int A::f6() {
  return __zz_cib_::A::__zz_cib_Helper::f6(__zz_cib_h_);
}
#endif

int A::f7() {
  return __zz_cib_::A::__zz_cib_Helper::f7(__zz_cib_h_);
}

int A::func() const {
  return __zz_cib_::A::__zz_cib_Helper::func(__zz_cib_h_);
}

int A::DoFunc() const {
  return __zz_cib_::A::__zz_cib_Helper::DoFunc(__zz_cib_h_);
}


B::B(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{}

B::B(B&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

B::B(::B const & __zz_cib_param0)
  : B(__zz_cib_::B::__zz_cib_Helper::__zz_cib_copy(__zz_cib_::B::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

B::B()
  : B(__zz_cib_::B::__zz_cib_Helper::__zz_cib_new())
{}

B::~B() {
  auto h = __zz_cib_::B::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::B::__zz_cib_Helper::__zz_cib_delete(h);
}

#if  COND // Start of a conditional group, also start of 1st subgroup
int B::f1() {
  return __zz_cib_::B::__zz_cib_Helper::f1(__zz_cib_h_);
}

int B::f2() {
  return __zz_cib_::B::__zz_cib_Helper::f2(__zz_cib_h_);
}
#endif


C::C(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{}

C::C(C&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

C::C(::C const & __zz_cib_param0)
  : C(__zz_cib_::C::__zz_cib_Helper::__zz_cib_copy(__zz_cib_::C::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

C::C()
  : C(__zz_cib_::C::__zz_cib_Helper::__zz_cib_new())
{}

C::~C() {
  auto h = __zz_cib_::C::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::C::__zz_cib_Helper::__zz_cib_delete(h);
}

#if  COND // Start of a conditional group, also start of 1st subgroup
int C::f1() {
  return __zz_cib_::C::__zz_cib_Helper::f1(__zz_cib_h_);
}

int C::f2() {
  return __zz_cib_::C::__zz_cib_Helper::f2(__zz_cib_h_);
}
#endif

int C::f3() {
  return __zz_cib_::C::__zz_cib_Helper::f3(__zz_cib_h_);
}


P::P(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::P::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

P::P(P&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_::P::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

P::P(::P const & __zz_cib_param0)
  : P(__zz_cib_::P::__zz_cib_Helper::__zz_cib_copy(this, __zz_cib_::P::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

P::P()
  : P(__zz_cib_::P::__zz_cib_Helper::__zz_cib_new(this))
{}

P::~P() {
  __zz_cib_::P::__zz_cib_Helper::__zz_cib_release_proxy(this);
  auto h = __zz_cib_::P::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::P::__zz_cib_Helper::__zz_cib_delete(h);
}

#if  COND // Start of a conditional group, also start of 1st subgroup
int P::f1() {
  return __zz_cib_::P::__zz_cib_Helper::f1(__zz_cib_h_);
}

int P::f2() {
  return __zz_cib_::P::__zz_cib_Helper::f2(__zz_cib_h_);
}
#endif

int P::f3() {
  return __zz_cib_::P::__zz_cib_Helper::f3(__zz_cib_h_);
}

namespace __zz_cib_ {
namespace A {
struct __zz_cib_Delegator {
  using __zz_cib_Delegatee = ::A;
  static int __zz_cib_decl DoFunc(const ::A* __zz_cib_obj) {
    return __zz_cib_obj->DoFunc();
  }
  static void __zz_cib_decl __zz_cib_delete(::A* __zz_cib_obj) {
    __zz_cib_Helper::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
}}

namespace __zz_cib_ {
namespace A {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::DoFunc),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
namespace A {
const __zz_cib_MethodTable* __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
  return __zz_cib_GetMethodTable();
}
}}

namespace __zz_cib_ {
namespace P {
struct __zz_cib_Delegator {
  using __zz_cib_Delegatee = ::P;
  static int __zz_cib_decl f3(::P* __zz_cib_obj) {
    return __zz_cib_obj->f3();
  }
#if  COND // Start of a conditional group, also start of 1st subgroup
  static int __zz_cib_decl f1(::P* __zz_cib_obj) {
    return __zz_cib_obj->f1();
  }
  static int __zz_cib_decl f2(::P* __zz_cib_obj) {
    return __zz_cib_obj->f2();
  }
#endif
  static void __zz_cib_decl __zz_cib_delete(::P* __zz_cib_obj) {
    __zz_cib_Helper::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
}}

namespace __zz_cib_ {
namespace P {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f3),
#if  COND // Start of a conditional group, also start of 1st subgroup
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f2),
#else 
    reinterpret_cast<__zz_cib_MTableEntry> (0),
    reinterpret_cast<__zz_cib_MTableEntry> (0),
#endif
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
namespace P {
const __zz_cib_MethodTable* __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
  return __zz_cib_GetMethodTable();
}
}}
