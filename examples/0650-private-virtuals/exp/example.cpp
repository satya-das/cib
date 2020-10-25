#include "example.h"

#include "__zz_cib_internal/__zz_cib_Example-generic.h"


IF::IF(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

IF::IF(IF&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

int IF::ProtectedVirtual() {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::ProtectedVirtual_2<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int IF::ProtectedNonVirtual() {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::ProtectedNonVirtual_3<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int IF::PublicVirtual() {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::PublicVirtual_5<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int IF::PublicNonVirtual() {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::PublicNonVirtual_6<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

IF::~IF() {
__zz_cib_MyHelper::__zz_cib_ReleaseProxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_7(
    h
  );
}

IF::IF()
  : IF(__zz_cib_MyHelper::__zz_cib_New_0(
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

int A::SetIF(::IF* pIF) {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::SetIF_3<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pIF)>(std::move(pIF))
    )
  );
}

::IF* A::GetIF() const {
  return __zz_cib_::__zz_cib_FromAbiType<::IF*>(
    __zz_cib_MyHelper::GetIF_4<__zz_cib_::__zz_cib_AbiType_t<::IF*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

namespace __zz_cib_ {
template<>
class __zz_cib_Generic<::IF> : public ::IF {
  using __zz_cib_Methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_Methodid;
  static __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_ExampleGetMethodTable(
      __zz_cib_ids::__zz_cib_Class258::__zz_cib_classId));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::IF(h) {}
public:
  static ::IF* __zz_cib_FromHandle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  int PublicVirtual() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::PublicVirtual_5>(
        __zz_cib_h
      )
    );
  }
  int ProtectedVirtual() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::ProtectedVirtual_2>(
        __zz_cib_h
      )
    );
  }
  int PublicPureVirtual() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::PublicPureVirtual_4>(
        __zz_cib_h
      )
    );
  }
  int ProtectedPureVirtual() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::ProtectedPureVirtual_1>(
        __zz_cib_h
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_Helper<::IF>::__zz_cib_ReleaseHandle(this);
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::__zz_cib_Delete_7>(
      __zz_cib_h
    );
  }
};
}

namespace __zz_cib_ {
template<>
::IF* __zz_cib_Helper<::IF>::__zz_cib_CreateProxy(__zz_cib_AbiType h) {
  switch(__zz_cib_GetClassId(&h)) {
  default: break;
  }
  auto* const __zz_cib_obj = ::__zz_cib_::__zz_cib_Generic<::IF>::__zz_cib_FromHandle(h);
  return __zz_cib_obj;
}
}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::IF> {
  using __zz_cib_Delegatee = ::IF;
  static __zz_cib_AbiType_t<int> __zz_cib_decl PublicVirtual_0(::IF* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->PublicVirtual()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl ProtectedVirtual_1(::IF* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->ProtectedVirtual()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl PublicPureVirtual_2(::IF* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->PublicPureVirtual()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl ProtectedPureVirtual_3(::IF* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->ProtectedPureVirtual()
    );
  }
  static void __zz_cib_decl __zz_cib_Delete_5(::IF* __zz_cib_obj) {
    __zz_cib_Helper<::IF>::__zz_cib_ReleaseHandle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class258 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::IF>::PublicVirtual_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::IF>::ProtectedVirtual_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::IF>::PublicPureVirtual_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::IF>::ProtectedPureVirtual_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::IF>::PrivatePureVirtual_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::IF>::__zz_cib_Delete_5)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::IF>::__zz_cib_GetProxyMethodTable() {
  return __zz_cib_::__zz_cib_Class258::__zz_cib_GetMethodTable();
}
}

