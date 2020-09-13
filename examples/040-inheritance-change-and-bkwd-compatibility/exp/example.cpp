#include "example.h"

#include "__zz_cib_internal/__zz_cib_Example-generic.h"


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
  : A(__zz_cib_MyHelper::__zz_cib_copy_0(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

A::A()
  : A(__zz_cib_MyHelper::__zz_cib_new_1(
    this))
  {}

int A::AnotherVirtFunc() {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::AnotherVirtFunc_5<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int A::VirtFunc() {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::VirtFunc_2<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int A::SomeFunc() {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::SomeFunc_6<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

A::~A() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_3(
    h
  );
}


I1::I1(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

I1::I1(I1&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

I1::I1()
  : I1(__zz_cib_MyHelper::__zz_cib_new_0(
    this))
  {}

I1::I1(const ::I1& __zz_cib_param0)
  : I1(__zz_cib_MyHelper::__zz_cib_copy_1(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

int I1::F() {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::F_2<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

I1::~I1() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_3(
    h
  );
}


I2::I2(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

I2::I2(I2&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

I2::I2()
  : I2(__zz_cib_MyHelper::__zz_cib_new_0(
    this))
  {}

I2::I2(const ::I2& __zz_cib_param0)
  : I2(__zz_cib_MyHelper::__zz_cib_copy_1(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

int I2::G() {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::G_2<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

I2::~I2() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_3(
    h
  );
}


B::B(__zz_cib_AbiType h)
  : ::I1(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class262(h))
  , ::A(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class258(h))
  , ::I2(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class263(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

B::B(B&& rhs)
  : ::I1(std::move(rhs))
  , ::A(std::move(rhs))
  , ::I2(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

B::B(const ::B& __zz_cib_param0)
  : B(__zz_cib_MyHelper::__zz_cib_copy_0(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

B::~B() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_1(
    h
  );
}

B::B()
  : B(__zz_cib_MyHelper::__zz_cib_new_2(
    this))
  {}

int B::VirtFunc() {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::VirtFunc_3<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::B* B::Create() {
  return __zz_cib_::__zz_cib_FromAbiType<::B*>(
    __zz_cib_MyHelper::Create_4<__zz_cib_::__zz_cib_AbiType_t<::B*>>(

    )
  );
}

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::A> {
  using __zz_cib_Delegatee = ::A;
  static __zz_cib_AbiType_t<int> __zz_cib_decl VirtFunc_0(::A* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->VirtFunc()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl AnotherVirtFunc_2(::A* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->AnotherVirtFunc()
    );
  }
  static void __zz_cib_decl __zz_cib_delete_1(::A* __zz_cib_obj) {
    __zz_cib_Helper<::A>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class258 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::VirtFunc_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::AnotherVirtFunc_2)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 3 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::A>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class258::__zz_cib_GetMethodTable();
}
}

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::I1> {
  using __zz_cib_Delegatee = ::I1;
  static __zz_cib_AbiType_t<int> __zz_cib_decl F_0(::I1* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->F()
    );
  }
  static void __zz_cib_decl __zz_cib_delete_1(::I1* __zz_cib_obj) {
    __zz_cib_Helper<::I1>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class262 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::I1>::F_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::I1>::__zz_cib_delete_1)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::I1>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class262::__zz_cib_GetMethodTable();
}
}

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::I2> {
  using __zz_cib_Delegatee = ::I2;
  static __zz_cib_AbiType_t<int> __zz_cib_decl G_0(::I2* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->G()
    );
  }
  static void __zz_cib_decl __zz_cib_delete_1(::I2* __zz_cib_obj) {
    __zz_cib_Helper<::I2>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class263 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::I2>::G_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::I2>::__zz_cib_delete_1)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::I2>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class263::__zz_cib_GetMethodTable();
}
}

namespace __zz_cib_ {
template<>
class __zz_cib_Generic<::B> : public ::B {
  __zz_cib_AbiType __zz_cib_h_;

  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class259::__zz_cib_methodid;
  static __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_Example_GetMethodTable(
      __zz_cib_ids::__zz_cib_Class259::__zz_cib_classid));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::B(h), __zz_cib_h_(h) {}
public:
  static ::B* __zz_cib_from_handle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  int G() override {
    using __zz_cib_proc = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::G_9>(
        __zz_cib_h_
      )
    );
  }
  int VirtFunc() override {
    using __zz_cib_proc = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::VirtFunc_3>(
        __zz_cib_h_
      )
    );
  }
  int F() override {
    using __zz_cib_proc = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::F_10>(
        __zz_cib_h_
      )
    );
  }
  int AnotherVirtFunc() override {
    using __zz_cib_proc = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::AnotherVirtFunc_11>(
        __zz_cib_h_
      )
    );
  }
};
}

namespace __zz_cib_ {
template<>
::B* __zz_cib_Helper<::B>::__zz_cib_create_proxy(__zz_cib_AbiType h) {
  switch(__zz_cib_get_class_id(&h)) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class259::__zz_cib_classid:
    return new ::B(h);
  default: break;
  }
  return ::__zz_cib_::__zz_cib_Generic<::B>::__zz_cib_from_handle(h);
}
}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::B> {
  using __zz_cib_Delegatee = ::B;
  static __zz_cib_AbiType_t<int> __zz_cib_decl G_2(::B* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->G()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl VirtFunc_0(::B* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->VirtFunc()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl F_3(::B* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->F()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl AnotherVirtFunc_4(::B* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->AnotherVirtFunc()
    );
  }
  static void __zz_cib_decl __zz_cib_delete_1(::B* __zz_cib_obj) {
    __zz_cib_Helper<::B>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class259 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::B>::VirtFunc_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::B>::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::B>::G_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::B>::F_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::B>::AnotherVirtFunc_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::B>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class259::__zz_cib_GetMethodTable();
}
}

