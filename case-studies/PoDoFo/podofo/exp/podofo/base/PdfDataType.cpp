#include "podofo/base/PdfDataType.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfOutputDevice.h"

namespace PoDoFo {

PoDoFo::PdfDataType::PdfDataType(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfDataType::PdfDataType(PdfDataType&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfDataType::PdfDataType()
  : PoDoFo::PdfDataType(__zz_cib_MyHelper::__zz_cib_New_0(this))
{}

PoDoFo::PdfDataType::~PdfDataType() {
  __zz_cib_MyHelper::__zz_cib_ReleaseProxy(this);
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

bool PoDoFo::PdfDataType::IsDirty() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsDirty_3<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfDataType::SetDirty(bool bDirty) {
    __zz_cib_MyHelper::SetDirty_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bDirty)>(std::move(bDirty))
    );
  }

void PoDoFo::PdfDataType::SetImmutable(bool bImmutable) {
    __zz_cib_MyHelper::SetImmutable_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bImmutable)>(std::move(bImmutable))
    );
  }

bool PoDoFo::PdfDataType::GetImmutable() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::GetImmutable_6<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfDataType::AssertMutable() const {
    __zz_cib_MyHelper::AssertMutable_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfDataType> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfDataType;
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetDirty_0(::PoDoFo::PdfDataType* __zz_cib_obj, __zz_cib_AbiType_t<bool> bDirty) {
    __zz_cib_obj->SetDirty(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bDirty)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Write_1(const ::PoDoFo::PdfDataType* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputDevice*> pDevice, __zz_cib_AbiType_t<::PoDoFo::EPdfWriteMode> eWriteMode, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncrypt*> pEncrypt) {
    __zz_cib_obj->Write(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputDevice*>(pDevice),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfWriteMode>(eWriteMode),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncrypt*>(pEncrypt)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsDirty_2(const ::PoDoFo::PdfDataType* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsDirty()
    );
  }
  static void __zz_cib_decl __zz_cib_Delete_3(::PoDoFo::PdfDataType* __zz_cib_obj) {
    __zz_cib_Helper_t<::PoDoFo::PdfDataType>::__zz_cib_ReleaseHandle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class346 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDataType>::SetDirty_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDataType>::Write_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDataType>::IsDirty_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDataType>::__zz_cib_Delete_3)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfDataType>::__zz_cib_GetProxyMethodTable() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class346::__zz_cib_GetMethodTable();
}
}

