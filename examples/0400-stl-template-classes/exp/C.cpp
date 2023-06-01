#include "C.h"

#include "__zz_cib_internal/__zz_cib_Example-generic.h"


C::C(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

C::C(C&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

C::C(const C& __zz_cib_param0)
  : C(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

C::C(int x)
  : C(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(std::move(x))))
{}

C::~C() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
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
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class283::__zz_cib_MethodId;
  static __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_ExampleGetMethodTable(
      __zz_cib_ids::__zz_cib_Class283::__zz_cib_classId));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::C(h) {}
public:
  static ::C* __zz_cib_FromHandle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  int f() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::f_3>(
        __zz_cib_h
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_Helper<::C>::__zz_cib_ReleaseHandle(this);
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_2>(
      __zz_cib_h
    );
  }
};
}

namespace __zz_cib_ {
template<>
::C* __zz_cib_Helper<::C>::__zz_cib_CreateProxy(__zz_cib_AbiType h) {
  switch(__zz_cib_GetClassId(&h)) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class283::__zz_cib_classId: {
    auto* const __zz_cib_obj = new ::C(h);
    __zz_cib_RegisterProxy(h, __zz_cib_obj);
    return __zz_cib_obj;
  }
  default: break;
  }
  auto* const __zz_cib_obj = ::__zz_cib_::__zz_cib_Generic<::C>::__zz_cib_FromHandle(h);
  __zz_cib_RegisterProxy(h, __zz_cib_obj);
  return __zz_cib_obj;
}
}
