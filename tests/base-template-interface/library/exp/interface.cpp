#include "interface.h"


BaseInterface::BaseInterface(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

BaseInterface::BaseInterface(BaseInterface&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

BaseInterface::~BaseInterface() {
  __zz_cib_MyHelper::__zz_cib_ReleaseProxy(this);
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

BaseInterface::BaseInterface()
  : BaseInterface(__zz_cib_MyHelper::__zz_cib_New_0(this))
{}

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::BaseInterface> {
  using __zz_cib_Delegatee = ::BaseInterface;
  static __zz_cib_AbiType_t<int> __zz_cib_decl F_0(::BaseInterface* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->F()
    );
  }
  static void __zz_cib_decl __zz_cib_Delete_1(::BaseInterface* __zz_cib_obj) {
    __zz_cib_Helper_t<::BaseInterface>::__zz_cib_ReleaseHandle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class261 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::BaseInterface>::F_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::BaseInterface>::__zz_cib_Delete_1)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::BaseInterface>::__zz_cib_GetProxyMethodTable() {
  return __zz_cib_::__zz_cib_Class261::__zz_cib_GetMethodTable();
}
}

