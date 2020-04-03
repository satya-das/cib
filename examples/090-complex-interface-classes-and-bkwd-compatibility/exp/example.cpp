#include "example.h"

#include "__zz_cib_internal/__zz_cib_Example-generic.h"


Interface1::Interface1(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

Interface1::Interface1(Interface1&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

int Interface1::disruptVTable() {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::disruptVTable<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

Interface1::~Interface1() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete(
    h
  );
}

Interface1::Interface1()
  : Interface1(__zz_cib_MyHelper::__zz_cib_new(
    this))
  {}


Interface2::Interface2(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

Interface2::Interface2(Interface2&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

int Interface2::disruptVTable() {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::disruptVTable<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

Interface2::~Interface2() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete(
    h
  );
}

Interface2::Interface2()
  : Interface2(__zz_cib_MyHelper::__zz_cib_new(
    this))
  {}


Interface3::Interface3(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

Interface3::Interface3(Interface3&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

int Interface3::disruptVTable() {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::disruptVTable<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

Interface3::~Interface3() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete(
    h
  );
}

Interface3::Interface3()
  : Interface3(__zz_cib_MyHelper::__zz_cib_new(
    this))
  {}


A::A(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

A::A(A&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

A::A(const ::A& __zz_cib_param0)
  : A(__zz_cib_MyHelper::__zz_cib_copy(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

A::~A() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete(
    h
  );
}

A::A()
  : A(__zz_cib_MyHelper::__zz_cib_new(
    ))
  {}

int A::SetInterface(::Interface1* pInterface1) const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::SetInterface<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pInterface1)>(pInterface1)
    )
  );
}

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::Interface1> {
  using __zz_cib_Delegatee = ::Interface1;
  static __zz_cib_RValueAbiType_t<::Interface3&> __zz_cib_decl r(::Interface1* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<::Interface3&>(
      __zz_cib_obj->r()
    );
  }
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl disruptVTable(::Interface1* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->disruptVTable()
    );
  }
  static __zz_cib_RValueAbiType_t<::Interface2*> __zz_cib_decl p(::Interface1* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<::Interface2*>(
      __zz_cib_obj->p()
    );
  }
  static void __zz_cib_decl __zz_cib_delete(::Interface1* __zz_cib_obj) {
    __zz_cib_Helper<::Interface1>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class257 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface1>::r),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface1>::p),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface1>::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface1>::disruptVTable)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
const __zz_cib_MethodTable* __zz_cib_Helper<::Interface1>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class257::__zz_cib_GetMethodTable();
}
}

namespace __zz_cib_ {
template<>
class __zz_cib_Generic<::Interface2> : public ::Interface2 {
  __zz_cib_AbiType __zz_cib_h_;

  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_methodid;
  static __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_Example_GetMethodTable(
      __zz_cib_ids::__zz_cib_Class258::__zz_cib_classid));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::Interface2(h), __zz_cib_h_(h) {}
public:
  static ::Interface2* __zz_cib_from_handle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  int f() override {
    using __zz_cib_proc = __zz_cib_RValueAbiType_t<int>(__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::f>(
        __zz_cib_h_
      )
    );
  }
  int disruptVTable() override {
    using __zz_cib_proc = __zz_cib_RValueAbiType_t<int>(__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::disruptVTable>(
        __zz_cib_h_
      )
    );
  }
};
}

namespace __zz_cib_ {
::Interface2* __zz_cib_Helper<::Interface2>::__zz_cib_create_proxy(__zz_cib_AbiType h) {
  switch(__zz_cib_get_class_id(&h)) {
  default: break;
  }
  return ::__zz_cib_::__zz_cib_Generic<::Interface2>::__zz_cib_from_handle(h);
}
}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::Interface2> {
  using __zz_cib_Delegatee = ::Interface2;
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl f(::Interface2* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->f()
    );
  }
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl disruptVTable(::Interface2* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->disruptVTable()
    );
  }
  static void __zz_cib_decl __zz_cib_delete(::Interface2* __zz_cib_obj) {
    __zz_cib_Helper<::Interface2>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class258 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface2>::f),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface2>::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface2>::disruptVTable)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 3 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
const __zz_cib_MethodTable* __zz_cib_Helper<::Interface2>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class258::__zz_cib_GetMethodTable();
}
}

namespace __zz_cib_ {
template<>
class __zz_cib_Generic<::Interface3> : public ::Interface3 {
  __zz_cib_AbiType __zz_cib_h_;

  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class259::__zz_cib_methodid;
  static __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_Example_GetMethodTable(
      __zz_cib_ids::__zz_cib_Class259::__zz_cib_classid));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::Interface3(h), __zz_cib_h_(h) {}
public:
  static ::Interface3* __zz_cib_from_handle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  int g() override {
    using __zz_cib_proc = __zz_cib_RValueAbiType_t<int>(__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::g>(
        __zz_cib_h_
      )
    );
  }
  int disruptVTable() override {
    using __zz_cib_proc = __zz_cib_RValueAbiType_t<int>(__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::disruptVTable>(
        __zz_cib_h_
      )
    );
  }
};
}

namespace __zz_cib_ {
::Interface3* __zz_cib_Helper<::Interface3>::__zz_cib_create_proxy(__zz_cib_AbiType h) {
  switch(__zz_cib_get_class_id(&h)) {
  default: break;
  }
  return ::__zz_cib_::__zz_cib_Generic<::Interface3>::__zz_cib_from_handle(h);
}
}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::Interface3> {
  using __zz_cib_Delegatee = ::Interface3;
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl g(::Interface3* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->g()
    );
  }
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl disruptVTable(::Interface3* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->disruptVTable()
    );
  }
  static void __zz_cib_decl __zz_cib_delete(::Interface3* __zz_cib_obj) {
    __zz_cib_Helper<::Interface3>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class259 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface3>::g),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface3>::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface3>::disruptVTable)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 3 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
const __zz_cib_MethodTable* __zz_cib_Helper<::Interface3>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class259::__zz_cib_GetMethodTable();
}
}

