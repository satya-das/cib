#include "example.h"

#include "__zz_cib_internal/__zz_cib_Example-generic.h"


I::I(__zz_cib_AbiType h)
  : ::SkRefCntBase(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class257(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

I::I(I&& rhs)
  : ::SkRefCntBase(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

I::~I() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_1(
    h
  );
}

I::I()
  : I(__zz_cib_MyHelper::__zz_cib_new_0(
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

sk_sp<I> A::f() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<sk_sp<I>>(
    __zz_cib_MyHelper::f_3<__zz_cib_::__zz_cib_RValueAbiType_t<sk_sp<I>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::I* A::g() {
  return __zz_cib_::__zz_cib_FromRValueAbiType<::I*>(
    __zz_cib_MyHelper::g_4<__zz_cib_::__zz_cib_RValueAbiType_t<::I*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int A::h(sk_sp<I> p) const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::h_5<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(p)>(std::move(p))
    )
  );
}

int A::i(::I* p) const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::i_6<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(p)>(p)
    )
  );
}

namespace __zz_cib_ {
template<>
class __zz_cib_Generic<::I> : public ::I {
  __zz_cib_AbiType __zz_cib_h_;

  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_methodid;
  static __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_Example_GetMethodTable(
      __zz_cib_ids::__zz_cib_Class258::__zz_cib_classid));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::I(h), __zz_cib_h_(h) {}
public:
  static ::I* __zz_cib_from_handle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  int f() const override {
    using __zz_cib_proc = __zz_cib_RValueAbiType_t<int>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::f_2>(
        __zz_cib_h_
      )
    );
  }
  void internal_dispose() const override {
    using __zz_cib_proc = __zz_cib_RValueAbiType_t<void>(__zz_cib_decl *) (const __zz_cib_AbiType);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::internal_dispose_3>(
      __zz_cib_h_
    );
  }
};
}

namespace __zz_cib_ {
::I* __zz_cib_Helper<::I>::__zz_cib_create_proxy(__zz_cib_AbiType h) {
  switch(__zz_cib_get_class_id(&h)) {
  default: break;
  }
  return ::__zz_cib_::__zz_cib_Generic<::I>::__zz_cib_from_handle(h);
}
}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::I> {
  using __zz_cib_Delegatee = ::I;
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl f_0(const ::I* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->f()
    );
  }
  static __zz_cib_RValueAbiType_t<void> __zz_cib_decl internal_dispose_1(const ::I* __zz_cib_obj) {
    __zz_cib_obj->internal_dispose();
  }
  static void __zz_cib_decl __zz_cib_delete_2(::I* __zz_cib_obj) {
    __zz_cib_Helper<::I>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class258 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::I>::f_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::I>::internal_dispose_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::I>::__zz_cib_delete_2)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 3 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
const __zz_cib_MethodTable* __zz_cib_Helper<::I>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class258::__zz_cib_GetMethodTable();
}
}

