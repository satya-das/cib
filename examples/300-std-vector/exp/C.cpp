#include "C.h"

#include "__zz_cib_internal/__zz_cib_Example-generic-impl-facade.h"


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
  : C(__zz_cib_MyHelper::__zz_cib_copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

C::C(int x)
  : C(__zz_cib_MyHelper::__zz_cib_new_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(std::move(x))))
  {}

C::~C() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_2(
    h
  );
}

int C::f() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::f_3<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

namespace __zz_cib_ {
template<>
class __zz_cib_Generic<::C> : public ::C {
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class283::__zz_cib_methodid;
  static __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_Example_GetMethodTable(
      __zz_cib_ids::__zz_cib_Class283::__zz_cib_classid));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::C(h) {}
public:
  static ::C* __zz_cib_from_handle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  int f() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_proc = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::f_3>(
        __zz_cib_h
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_Helper<::C>::__zz_cib_release_handle(this);
    using __zz_cib_proc = void(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete_2>(
      __zz_cib_h
    );
  }
};
}

namespace __zz_cib_ {
template<>
::C* __zz_cib_Helper<::C>::__zz_cib_create_proxy(__zz_cib_AbiType h) {
  switch(__zz_cib_get_class_id(&h)) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class283::__zz_cib_classid:
    return new ::C(h);
  default: break;
  }
  return ::__zz_cib_::__zz_cib_Generic<::C>::__zz_cib_from_handle(h);
}
}
