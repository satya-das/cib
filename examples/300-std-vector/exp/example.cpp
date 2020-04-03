#include "example.h"
#include <vector>

#include "__zz_cib_internal/__zz_cib_Example-generic.h"


C::C(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

C::C(C&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

C::C(const ::C& __zz_cib_param0)
  : C(__zz_cib_MyHelper::__zz_cib_copy(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

C::C(int x)
  : C(__zz_cib_MyHelper::__zz_cib_new(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(x)))
  {}

C::~C() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete(
    h
  );
}

int C::f() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::f<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}


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

::std::vector<::C> A::g() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<::std::vector<::C>>(
    __zz_cib_MyHelper::g<__zz_cib_::__zz_cib_RValueAbiType_t<::std::vector<::C>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

namespace __zz_cib_ {
template<>
class __zz_cib_Generic<::C> : public ::C {
  __zz_cib_AbiType __zz_cib_h_;

  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_methodid;
  static __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_Example_GetMethodTable(
      __zz_cib_ids::__zz_cib_Class258::__zz_cib_classid));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::C(h), __zz_cib_h_(h) {}
public:
  static ::C* __zz_cib_from_handle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  int f() const override {
    using __zz_cib_proc = __zz_cib_RValueAbiType_t<int>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::f>(
        __zz_cib_h_
      )
    );
  }
};
}

namespace __zz_cib_ {
::C* __zz_cib_Helper<::C>::__zz_cib_create_proxy(__zz_cib_AbiType h) {
  switch(__zz_cib_get_class_id(&h)) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_classid:
    return new ::C(h);
  default: break;
  }
  return ::__zz_cib_::__zz_cib_Generic<::C>::__zz_cib_from_handle(h);
}
}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::C> {
  using __zz_cib_Delegatee = ::C;
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl f(const ::C* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->f()
    );
  }
  static void __zz_cib_decl __zz_cib_delete(::C* __zz_cib_obj) {
    __zz_cib_Helper<::C>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class258 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::C>::f),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::C>::__zz_cib_delete)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
const __zz_cib_MethodTable* __zz_cib_Helper<::C>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class258::__zz_cib_GetMethodTable();
}
}

