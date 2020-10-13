#include "example.h"

#include "__zz_cib_internal/__zz_cib_Example-generic.h"


Facade::Facade(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

Facade::Facade(Facade&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

Facade::~Facade() {
__zz_cib_MyHelper::__zz_cib_ReleaseProxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

Facade::Facade()
  : Facade(__zz_cib_MyHelper::__zz_cib_New_0(
    this))
  {}


Base::Base(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

Base::Base(Base&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

Base::Base()
  : Base(__zz_cib_MyHelper::__zz_cib_New_0(
    ))
  {}

Base::Base(const ::Base& __zz_cib_param0)
  : Base(__zz_cib_MyHelper::__zz_cib_Copy_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

Base::~Base() {
auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

int Base::f() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::f_3<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}


Derived::Derived(__zz_cib_AbiType h)
  : ::Base(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class259(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

Derived::Derived(Derived&& rhs)
  : ::Base(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

Derived::Derived()
  : Derived(__zz_cib_MyHelper::__zz_cib_New_0(
    ))
  {}

Derived::Derived(const ::Derived& __zz_cib_param0)
  : Derived(__zz_cib_MyHelper::__zz_cib_Copy_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

Derived::~Derived() {
auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

int Derived::f() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::f_3<__zz_cib_::__zz_cib_AbiType_t<int>>(
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
  : A(__zz_cib_MyHelper::__zz_cib_New_2(
    ))
  {}

const ::Facade& A::GetFacadeByRef() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::Facade&>(
    __zz_cib_MyHelper::GetFacadeByRef_3<__zz_cib_::__zz_cib_AbiType_t<const ::Facade&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::Facade* A::GetFacadeByPtr() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::Facade*>(
    __zz_cib_MyHelper::GetFacadeByPtr_4<__zz_cib_::__zz_cib_AbiType_t<const ::Facade*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::Facade* A::GetNewFacade() const {
  return __zz_cib_::__zz_cib_FromAbiType<::Facade*>(
    __zz_cib_MyHelper::GetNewFacade_5<__zz_cib_::__zz_cib_AbiType_t<::Facade*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void A::DeleteFacade(const ::Facade* p) const {
    __zz_cib_MyHelper::DeleteFacade_6<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(p)>(std::move(p))
    );
  }

::Base& A::GetBase() {
  return __zz_cib_::__zz_cib_FromAbiType<::Base&>(
    __zz_cib_MyHelper::GetBase_7<__zz_cib_::__zz_cib_AbiType_t<::Base&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::Derived& A::GetDerived() {
  return __zz_cib_::__zz_cib_FromAbiType<::Derived&>(
    __zz_cib_MyHelper::GetDerived_8<__zz_cib_::__zz_cib_AbiType_t<::Derived&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

namespace __zz_cib_ {
template<>
class __zz_cib_Generic<::Facade> : public ::Facade {
  using __zz_cib_Methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_Methodid;
  static __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_ExampleGetMethodTable(
      __zz_cib_ids::__zz_cib_Class258::__zz_cib_classId));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::Facade(h) {}
public:
  static ::Facade* __zz_cib_FromHandle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  int f() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::f_2>(
        __zz_cib_h
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_Helper<::Facade>::__zz_cib_ReleaseHandle(this);
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::__zz_cib_Delete_1>(
      __zz_cib_h
    );
  }
};
}

namespace __zz_cib_ {
template<>
::Facade* __zz_cib_Helper<::Facade>::__zz_cib_CreateProxy(__zz_cib_AbiType h) {
  switch(__zz_cib_GetClassId(&h)) {
  default: break;
  }
  auto* const __zz_cib_obj = ::__zz_cib_::__zz_cib_Generic<::Facade>::__zz_cib_FromHandle(h);
  __zz_cib_RegisterProxy(h, __zz_cib_obj);
  return __zz_cib_obj;
}
}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::Facade> {
  using __zz_cib_Delegatee = ::Facade;
  static __zz_cib_AbiType_t<int> __zz_cib_decl f_0(const ::Facade* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->f()
    );
  }
  static void __zz_cib_decl __zz_cib_Delete_1(::Facade* __zz_cib_obj) {
    __zz_cib_Helper<::Facade>::__zz_cib_ReleaseHandle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class258 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Facade>::f_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Facade>::__zz_cib_Delete_1)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::Facade>::__zz_cib_GetProxyMethodTable() {
  return __zz_cib_::__zz_cib_Class258::__zz_cib_GetMethodTable();
}
}

