#include "example.h"

#include "__zz_cib_internal/__zz_cib_Example-generic-impl-facade.h"


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

Interface1::~Interface1() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_3(
    h
  );
}

Interface1::Interface1()
  : Interface1(__zz_cib_MyHelper::__zz_cib_new_0(
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

Interface2::~Interface2() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_2(
    h
  );
}

Interface2::Interface2()
  : Interface2(__zz_cib_MyHelper::__zz_cib_new_0(
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

Interface3::~Interface3() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_2(
    h
  );
}

Interface3::Interface3()
  : Interface3(__zz_cib_MyHelper::__zz_cib_new_0(
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
  : A(__zz_cib_MyHelper::__zz_cib_copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

A::~A() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_1(
    h
  );
}

A::A()
  : A(__zz_cib_MyHelper::__zz_cib_new_2(
    ))
  {}

int A::SetInterface(::Interface1* pInterface1) const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::SetInterface_3<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pInterface1)>(std::move(pInterface1))
    )
  );
}

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::Interface1> {
  using __zz_cib_Delegatee = ::Interface1;
  static __zz_cib_AbiType_t<::Interface3&> __zz_cib_decl r_0(::Interface1* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::Interface3&>(
      __zz_cib_obj->r()
    );
  }
  static __zz_cib_AbiType_t<::Interface2*> __zz_cib_decl p_1(::Interface1* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::Interface2*>(
      __zz_cib_obj->p()
    );
  }
  static void __zz_cib_decl __zz_cib_delete_2(::Interface1* __zz_cib_obj) {
    __zz_cib_Helper<::Interface1>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class258 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface1>::r_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface1>::p_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface1>::__zz_cib_delete_2)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 3 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::Interface1>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class258::__zz_cib_GetMethodTable();
}
}

namespace __zz_cib_ {
template<>
class __zz_cib_Generic<::Interface2> : public ::Interface2 {
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class259::__zz_cib_methodid;
  static __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_Example_GetMethodTable(
      __zz_cib_ids::__zz_cib_Class259::__zz_cib_classid));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::Interface2(h) {}
public:
  static ::Interface2* __zz_cib_from_handle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  int f() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_proc = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::f_1>(
        __zz_cib_h
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_Helper<::Interface2>::__zz_cib_release_handle(this);
    using __zz_cib_proc = void(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete_2>(
      __zz_cib_h
    );
  }
};
}

namespace __zz_cib_ {
template<>
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
  static __zz_cib_AbiType_t<int> __zz_cib_decl f_0(::Interface2* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->f()
    );
  }
  static void __zz_cib_decl __zz_cib_delete_1(::Interface2* __zz_cib_obj) {
    __zz_cib_Helper<::Interface2>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class259 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface2>::f_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface2>::__zz_cib_delete_1)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::Interface2>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class259::__zz_cib_GetMethodTable();
}
}

namespace __zz_cib_ {
template<>
class __zz_cib_Generic<::Interface3> : public ::Interface3 {
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class260::__zz_cib_methodid;
  static __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_Example_GetMethodTable(
      __zz_cib_ids::__zz_cib_Class260::__zz_cib_classid));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::Interface3(h) {}
public:
  static ::Interface3* __zz_cib_from_handle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  int g() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_proc = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::g_1>(
        __zz_cib_h
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_Helper<::Interface3>::__zz_cib_release_handle(this);
    using __zz_cib_proc = void(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete_2>(
      __zz_cib_h
    );
  }
};
}

namespace __zz_cib_ {
template<>
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
  static __zz_cib_AbiType_t<int> __zz_cib_decl g_0(::Interface3* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->g()
    );
  }
  static void __zz_cib_decl __zz_cib_delete_1(::Interface3* __zz_cib_obj) {
    __zz_cib_Helper<::Interface3>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class260 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface3>::g_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface3>::__zz_cib_delete_1)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::Interface3>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class260::__zz_cib_GetMethodTable();
}
}

