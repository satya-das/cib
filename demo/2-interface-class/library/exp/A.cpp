#include "A.h"


Context::Context(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

Context::Context(Context&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

Context::~Context() {
  __zz_cib_MyHelper::__zz_cib_ReleaseProxy(this);
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

Context::Context()
  : Context(__zz_cib_MyHelper::__zz_cib_New_0(this))
{}


Circle::Circle(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

Circle::Circle(Circle&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

Circle::Circle(const ::Circle& __zz_cib_param0)
  : Circle(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

Circle::~Circle() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

Circle::Circle(float r)
  : Circle(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(r)>(std::move(r))))
{}

void Circle::Draw(::Context* pCtx) const {
    __zz_cib_MyHelper::Draw_3<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pCtx)>(std::move(pCtx))
    );
  }

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::Context> {
  using __zz_cib_Delegatee = ::Context;
  static __zz_cib_AbiType_t<void> __zz_cib_decl DrawCircle_0(::Context* __zz_cib_obj, __zz_cib_AbiType_t<float> r) {
    __zz_cib_obj->DrawCircle(
      __zz_cib_::__zz_cib_FromAbiType<float>(r)
    );
  }
  static void __zz_cib_decl __zz_cib_Delete_1(::Context* __zz_cib_obj) {
    __zz_cib_Helper_t<::Context>::__zz_cib_ReleaseHandle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class258 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Context>::DrawCircle_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Context>::__zz_cib_Delete_1)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::Context>::__zz_cib_GetProxyMethodTable() {
  return __zz_cib_::__zz_cib_Class258::__zz_cib_GetMethodTable();
}
}

