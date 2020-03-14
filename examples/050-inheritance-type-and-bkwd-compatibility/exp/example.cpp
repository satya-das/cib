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

A::A(const A& __zz_cib_param0)
  : A(__zz_cib_MyHelper::__zz_cib_copy(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<const A&>(__zz_cib_param0)))
  {}

A::A()
  : A(__zz_cib_MyHelper::__zz_cib_new(
    this))
  {}

int A::AnotherVirtFunc() {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::AnotherVirtFunc<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int A::VirtFunc() {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::VirtFunc<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int A::SomeFunc() {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::SomeFunc<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

A::~A() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete(
    h
  );
}


B::B(__zz_cib_AbiType h)
  : ::A(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class257(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

B::B(B&& rhs)
  : ::A(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

B::B(const B& __zz_cib_param0)
  : B(__zz_cib_MyHelper::__zz_cib_copy(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<const B&>(__zz_cib_param0)))
  {}

B::~B() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete(
    h
  );
}

B::B()
  : B(__zz_cib_MyHelper::__zz_cib_new(
    this))
  {}

int B::VirtFunc() {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::VirtFunc<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::B* B::Create() {
  return __zz_cib_::__zz_cib_FromAbiType<::B*>(
    __zz_cib_MyHelper::Create<__zz_cib_::__zz_cib_AbiType_t<::B*>>(

    )
  );
}

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::A> {
  using __zz_cib_Delegatee = ::A;
  static __zz_cib_AbiType_t<int> __zz_cib_decl VirtFunc(::A* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->VirtFunc()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl AnotherVirtFunc(::A* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->AnotherVirtFunc()
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
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::VirtFunc),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::AnotherVirtFunc)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 3 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
const __zz_cib_MethodTable* __zz_cib_Helper<::A>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class257::__zz_cib_GetMethodTable();
}
}

namespace __zz_cib_ {
template<>
class __zz_cib_Generic<::B> : public ::B {
  __zz_cib_AbiType __zz_cib_h_;

  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_methodid;
  static __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_Example_GetMethodTable(
      __zz_cib_ids::__zz_cib_Class258::__zz_cib_classid));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::B(h), __zz_cib_h_(h) {}
public:
  static ::B* __zz_cib_from_handle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  int VirtFunc() override {
    using __zz_cib_proc = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::VirtFunc>(
        __zz_cib_h_
      )
    );
  }
  int AnotherVirtFunc() override {
    using __zz_cib_proc = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::AnotherVirtFunc>(
        __zz_cib_h_
      )
    );
  }
};
}

namespace __zz_cib_ {
::B* __zz_cib_Helper<::B>::__zz_cib_create_proxy(__zz_cib_AbiType h) {
  switch(__zz_cib_get_class_id(&h)) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_classid:
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
  static __zz_cib_AbiType_t<int> __zz_cib_decl VirtFunc(::B* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->VirtFunc()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl AnotherVirtFunc(::B* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->AnotherVirtFunc()
    );
  }
  static void __zz_cib_decl __zz_cib_delete(::B* __zz_cib_obj) {
    __zz_cib_Helper<::B>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class258 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::B>::VirtFunc),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::B>::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::B>::AnotherVirtFunc)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 3 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
const __zz_cib_MethodTable* __zz_cib_Helper<::B>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class258::__zz_cib_GetMethodTable();
}
}

