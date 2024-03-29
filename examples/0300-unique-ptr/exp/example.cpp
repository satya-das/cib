#include "example.h"

#include "__zz_cib_internal/__zz_cib_Example-generic.h"


I::I(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

I::I(I&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

I::I(std::unique_ptr<int> pi)
  : I(__zz_cib_MyHelper::__zz_cib_New_0(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pi)>(std::move(pi))))
{}

I::I()
  : I(__zz_cib_MyHelper::__zz_cib_New_1(this))
{}

I::~I() {
  __zz_cib_MyHelper::__zz_cib_ReleaseProxy(this);
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}


A::A(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

A::A(A&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

A::A(const ::A& __zz_cib_param0)
  : A(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

A::~A() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

A::A()
  : A(__zz_cib_MyHelper::__zz_cib_New_2())
{}

std::unique_ptr<I> A::f() const {
  return __zz_cib_::__zz_cib_FromAbiType<std::unique_ptr<I>>(
    __zz_cib_MyHelper::f_3<__zz_cib_::__zz_cib_AbiType_t<std::unique_ptr<I>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::I* A::g() {
  return __zz_cib_::__zz_cib_FromAbiType<::I*>(
    __zz_cib_MyHelper::g_4<__zz_cib_::__zz_cib_AbiType_t<::I*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int A::h(std::unique_ptr<I> p) const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::h_5<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(p)>(std::move(p))
    )
  );
}

int A::i(::I* p) const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::i_6<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(p)>(std::move(p))
    )
  );
}

int A::j(std::unique_ptr<I>* pp) {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::j_7<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pp)>(std::move(pp))
    )
  );
}

namespace __zz_cib_ {
template<>
class __zz_cib_Generic<::I> : public ::I {
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_MethodId;
  static __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_ExampleGetMethodTable(
      __zz_cib_ids::__zz_cib_Class258::__zz_cib_classId));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::I(h) {}
public:
  static ::I* __zz_cib_FromHandle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  std::unique_ptr<int> g() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<std::unique_ptr<int>>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<std::unique_ptr<int>>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::g_4>(
        __zz_cib_h
      )
    );
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
    auto __zz_cib_h = __zz_cib_Helper<::I>::__zz_cib_ReleaseHandle(this);
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_2>(
      __zz_cib_h
    );
  }
};
}

namespace __zz_cib_ {
template<>
::I* __zz_cib_Helper<::I>::__zz_cib_CreateProxy(__zz_cib_AbiType h) {
  switch(__zz_cib_GetClassId(&h)) {
  default: break;
  }
  auto* const __zz_cib_obj = ::__zz_cib_::__zz_cib_Generic<::I>::__zz_cib_FromHandle(h);
  return __zz_cib_obj;
}
}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::I> {
  using __zz_cib_Delegatee = ::I;
  static __zz_cib_AbiType_t<std::unique_ptr<int>> __zz_cib_decl g_0(const ::I* __zz_cib_obj) {
    return __zz_cib_ToAbiType<std::unique_ptr<int>>(
      __zz_cib_obj->g()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl f_1(const ::I* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->f()
    );
  }
  static void __zz_cib_decl __zz_cib_Delete_2(::I* __zz_cib_obj) {
    __zz_cib_Helper_t<::I>::__zz_cib_ReleaseHandle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class258 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::I>::g_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::I>::f_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::I>::__zz_cib_Delete_2)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 3 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::I>::__zz_cib_GetProxyMethodTable() {
  return __zz_cib_::__zz_cib_Class258::__zz_cib_GetMethodTable();
}
}

