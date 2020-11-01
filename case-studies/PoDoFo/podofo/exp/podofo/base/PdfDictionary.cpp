#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfDictionary.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfOutputDevice.h"

#include "__zz_cib_internal/__zz_cib_CibPoDoFo-generic.h"

namespace PoDoFo {

PoDoFo::PdfDictionary::PdfDictionary(__zz_cib_AbiType h)
  : ::PoDoFo::PdfOwnedDataType(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class392(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfDictionary::PdfDictionary(PdfDictionary&& rhs)
  : ::PoDoFo::PdfOwnedDataType(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfDictionary::PdfDictionary()
  : PoDoFo::PdfDictionary(__zz_cib_MyHelper::__zz_cib_New_0())
{}

PoDoFo::PdfDictionary::PdfDictionary(const ::PoDoFo::PdfDictionary& rhs)
  : PoDoFo::PdfDictionary(__zz_cib_MyHelper::__zz_cib_Copy_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
{}

PoDoFo::PdfDictionary::~PdfDictionary() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

const ::PoDoFo::PdfDictionary& PoDoFo::PdfDictionary::operator=(const ::PoDoFo::PdfDictionary& rhs) {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfDictionary&>(
    __zz_cib_MyHelper::__zz_cib_OperatorEqual_3<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfDictionary&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

bool PoDoFo::PdfDictionary::operator==(const ::PoDoFo::PdfDictionary& rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorCmpEq_4<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

bool PoDoFo::PdfDictionary::operator!=(const ::PoDoFo::PdfDictionary& rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorNotEq_5<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

void PoDoFo::PdfDictionary::Clear() {
    __zz_cib_MyHelper::Clear_6<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfDictionary::AddKey(const ::PoDoFo::PdfName& identifier, const ::PoDoFo::PdfObject& rObject) {
    __zz_cib_MyHelper::AddKey_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(identifier)>(identifier),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rObject)>(rObject)
    );
  }

void PoDoFo::PdfDictionary::AddKey(const ::PoDoFo::PdfName& identifier, const ::PoDoFo::PdfObject* pObject) {
    __zz_cib_MyHelper::AddKey_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(identifier)>(identifier),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject))
    );
  }

const ::PoDoFo::PdfObject* PoDoFo::PdfDictionary::GetKey(const ::PoDoFo::PdfName& key) const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetKey_9<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfDictionary::GetKey(const ::PoDoFo::PdfName& key) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetKey_10<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key)
    )
  );
}

const ::PoDoFo::PdfObject* PoDoFo::PdfDictionary::FindKey(const ::PoDoFo::PdfName& key) const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::FindKey_11<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfDictionary::FindKey(const ::PoDoFo::PdfName& key) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::FindKey_12<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key)
    )
  );
}

const ::PoDoFo::PdfObject* PoDoFo::PdfDictionary::FindKeyParent(const ::PoDoFo::PdfName& key) const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::FindKeyParent_13<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfDictionary::FindKeyParent(const ::PoDoFo::PdfName& key) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::FindKeyParent_14<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key)
    )
  );
}

const ::PoDoFo::PdfObject& PoDoFo::PdfDictionary::MustGetKey(const ::PoDoFo::PdfName& key) const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject&>(
    __zz_cib_MyHelper::MustGetKey_15<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfObject&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key)
    )
  );
}

::PoDoFo::pdf_int64 PoDoFo::PdfDictionary::GetKeyAsLong(const ::PoDoFo::PdfName& key, ::PoDoFo::pdf_int64 lDefault) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_int64>(
    __zz_cib_MyHelper::GetKeyAsLong_16<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_int64>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lDefault)>(std::move(lDefault))
    )
  );
}

double PoDoFo::PdfDictionary::GetKeyAsReal(const ::PoDoFo::PdfName& key, double dDefault) const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetKeyAsReal_17<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dDefault)>(std::move(dDefault))
    )
  );
}

bool PoDoFo::PdfDictionary::GetKeyAsBool(const ::PoDoFo::PdfName& key, bool bDefault) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::GetKeyAsBool_18<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bDefault)>(std::move(bDefault))
    )
  );
}

::PoDoFo::PdfName PoDoFo::PdfDictionary::GetKeyAsName(const ::PoDoFo::PdfName& key) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfName>(
    __zz_cib_MyHelper::GetKeyAsName_19<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfName>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key)
    )
  );
}

bool PoDoFo::PdfDictionary::HasKey(const ::PoDoFo::PdfName& key) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::HasKey_20<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key)
    )
  );
}

bool PoDoFo::PdfDictionary::RemoveKey(const ::PoDoFo::PdfName& identifier) {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::RemoveKey_21<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(identifier)>(identifier)
    )
  );
}

void PoDoFo::PdfDictionary::Write(::PoDoFo::PdfOutputDevice* pDevice, ::PoDoFo::EPdfWriteMode eWriteMode, const ::PoDoFo::PdfEncrypt* pEncrypt) const {
    __zz_cib_MyHelper::Write_22<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eWriteMode)>(std::move(eWriteMode)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt))
    );
  }

void PoDoFo::PdfDictionary::Write(::PoDoFo::PdfOutputDevice* pDevice, ::PoDoFo::EPdfWriteMode eWriteMode, const ::PoDoFo::PdfEncrypt* pEncrypt, const ::PoDoFo::PdfName& keyStop) const {
    __zz_cib_MyHelper::Write_23<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eWriteMode)>(std::move(eWriteMode)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(keyStop)>(keyStop)
    );
  }

size_t PoDoFo::PdfDictionary::GetSize() const {
  return __zz_cib_::__zz_cib_FromAbiType<size_t>(
    __zz_cib_MyHelper::GetSize_24<__zz_cib_::__zz_cib_AbiType_t<size_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::TKeyMap& PoDoFo::PdfDictionary::GetKeys() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::TKeyMap&>(
    __zz_cib_MyHelper::GetKeys_25<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::TKeyMap&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::TKeyMap& PoDoFo::PdfDictionary::GetKeys() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::TKeyMap&>(
    __zz_cib_MyHelper::GetKeys_26<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::TKeyMap&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfDictionary::IsDirty() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsDirty_27<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfDictionary::SetDirty(bool bDirty) {
    __zz_cib_MyHelper::SetDirty_28<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bDirty)>(std::move(bDirty))
    );
  }

::PoDoFo::TCIKeyMap PoDoFo::PdfDictionary::begin() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::TCIKeyMap>(
    __zz_cib_MyHelper::begin_29<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::TCIKeyMap>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::TCIKeyMap PoDoFo::PdfDictionary::end() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::TCIKeyMap>(
    __zz_cib_MyHelper::end_30<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::TCIKeyMap>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfDictionary::SetOwner(::PoDoFo::PdfObject* pOwner) {
    __zz_cib_MyHelper::SetOwner_31<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pOwner)>(std::move(pOwner))
    );
  }
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template<>
class __zz_cib_Generic<::PoDoFo::PdfDictionary> : public ::PoDoFo::PdfDictionary {
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class349::__zz_cib_MethodId;
  static __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_CibPoDoFoGetMethodTable(
      __zz_cib_ids::__zz_cib_Class333::__zz_cib_Class349::__zz_cib_classId));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::PoDoFo::PdfDictionary(h) {}
public:
  static ::PoDoFo::PdfDictionary* __zz_cib_FromHandle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  void SetOwner(::PoDoFo::PdfObject* pOwner) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(pOwner)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::SetOwner_31>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pOwner)>(std::move(pOwner))
    );
  }
  void SetDirty(bool bDirty) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(bDirty)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::SetDirty_28>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(bDirty)>(std::move(bDirty))
    );
  }
  bool IsDirty() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsDirty_27>(
        __zz_cib_h
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_Helper<::PoDoFo::PdfDictionary>::__zz_cib_ReleaseHandle(this);
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_2>(
      __zz_cib_h
    );
  }
};
}

namespace __zz_cib_ {
template<>
::PoDoFo::PdfDictionary* __zz_cib_Helper<::PoDoFo::PdfDictionary>::__zz_cib_CreateProxy(__zz_cib_AbiType h) {
  switch(__zz_cib_GetClassId(&h)) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class349::__zz_cib_classId: {
    auto* const __zz_cib_obj = new ::PoDoFo::PdfDictionary(h);
    __zz_cib_RegisterProxy(h, __zz_cib_obj);
    return __zz_cib_obj;
  }
  default: break;
  }
  auto* const __zz_cib_obj = ::__zz_cib_::__zz_cib_Generic<::PoDoFo::PdfDictionary>::__zz_cib_FromHandle(h);
  __zz_cib_RegisterProxy(h, __zz_cib_obj);
  return __zz_cib_obj;
}
}
