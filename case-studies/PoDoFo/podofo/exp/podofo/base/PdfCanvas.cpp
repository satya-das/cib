#include "podofo/base/PdfArray.h"
#include "podofo/base/PdfCanvas.h"
#include "podofo/base/PdfColor.h"
#include "podofo/base/PdfDictionary.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfRect.h"
#include "podofo/base/PdfReference.h"
#include "podofo/doc/PdfImage.h"
#include "podofo/doc/PdfPage.h"
#include "podofo/doc/PdfXObject.h"

#include "__zz_cib_internal/__zz_cib_CibPoDoFo-generic.h"

namespace PoDoFo {

PoDoFo::PdfCanvas::PdfCanvas(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfCanvas::PdfCanvas(PdfCanvas&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfCanvas::~PdfCanvas() {
  __zz_cib_MyHelper::__zz_cib_ReleaseProxy(this);
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

const ::PoDoFo::PdfArray PoDoFo::PdfCanvas::GetProcSet() {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray>(
    __zz_cib_MyHelper::GetProcSet_6<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfArray>>(

    )
  );
}

void PoDoFo::PdfCanvas::AddColorResource(const ::PoDoFo::PdfColor& rColor) {
    __zz_cib_MyHelper::AddColorResource_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rColor)>(rColor)
    );
  }

void PoDoFo::PdfCanvas::AddResource(const ::PoDoFo::PdfName& rIdentifier, const ::PoDoFo::PdfReference& rRef, const ::PoDoFo::PdfName& rName) {
    __zz_cib_MyHelper::AddResource_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rIdentifier)>(rIdentifier),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rRef)>(rRef),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rName)>(rName)
    );
  }

PoDoFo::PdfCanvas::PdfCanvas()
  : PoDoFo::PdfCanvas(__zz_cib_MyHelper::__zz_cib_New_0(this))
{}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template<>
class __zz_cib_Generic<::PoDoFo::PdfCanvas> : public ::PoDoFo::PdfCanvas {
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class335::__zz_cib_MethodId;
  static __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_CibPoDoFoGetMethodTable(
      __zz_cib_ids::__zz_cib_Class333::__zz_cib_Class335::__zz_cib_classId));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::PoDoFo::PdfCanvas(h) {}
public:
  static ::PoDoFo::PdfCanvas* __zz_cib_FromHandle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  ::PoDoFo::PdfRect GetPageSize() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::PdfRect>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<::PoDoFo::PdfRect>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetPageSize_5>(
        __zz_cib_h
      )
    );
  }
  ::PoDoFo::PdfObject* GetResources() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::PdfObject*>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetResources_4>(
        __zz_cib_h
      )
    );
  }
  ::PoDoFo::PdfObject* GetContents() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::PdfObject*>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetContents_2>(
        __zz_cib_h
      )
    );
  }
  ::PoDoFo::PdfObject* GetContentsForAppending() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::PdfObject*>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetContentsForAppending_3>(
        __zz_cib_h
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_Helper<::PoDoFo::PdfCanvas>::__zz_cib_ReleaseHandle(this);
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_1>(
      __zz_cib_h
    );
  }
};
}

namespace __zz_cib_ {
template<>
::PoDoFo::PdfCanvas* __zz_cib_Helper<::PoDoFo::PdfCanvas>::__zz_cib_CreateProxy(__zz_cib_AbiType h) {
  switch(__zz_cib_GetClassId(&h)) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class460::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfPage>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfPage>::__zz_cib_CastFrom__zz_cib_Class335(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class454::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfImage>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfImage>::__zz_cib_CastFrom__zz_cib_Class335(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class478::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfXObject>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfXObject>::__zz_cib_CastFrom__zz_cib_Class335(h)
    );
  default: break;
  }
  auto* const __zz_cib_obj = ::__zz_cib_::__zz_cib_Generic<::PoDoFo::PdfCanvas>::__zz_cib_FromHandle(h);
  __zz_cib_RegisterProxy(h, __zz_cib_obj);
  return __zz_cib_obj;
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfCanvas> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfCanvas;
  static __zz_cib_AbiType_t<::PoDoFo::PdfRect> __zz_cib_decl GetPageSize_0(const ::PoDoFo::PdfCanvas* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfRect>(
      __zz_cib_obj->GetPageSize()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetResources_1(const ::PoDoFo::PdfCanvas* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->GetResources()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetContents_2(const ::PoDoFo::PdfCanvas* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->GetContents()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetContentsForAppending_3(const ::PoDoFo::PdfCanvas* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->GetContentsForAppending()
    );
  }
  static void __zz_cib_decl __zz_cib_Delete_4(::PoDoFo::PdfCanvas* __zz_cib_obj) {
    __zz_cib_Helper_t<::PoDoFo::PdfCanvas>::__zz_cib_ReleaseHandle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class335 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCanvas>::GetPageSize_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCanvas>::GetResources_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCanvas>::GetContents_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCanvas>::GetContentsForAppending_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCanvas>::__zz_cib_Delete_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfCanvas>::__zz_cib_GetProxyMethodTable() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class335::__zz_cib_GetMethodTable();
}
}

