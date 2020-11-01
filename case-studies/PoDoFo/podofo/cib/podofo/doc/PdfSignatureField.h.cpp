#include "podofo/base/PdfData.h"
#include "podofo/base/PdfDate.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfRect.h"
#include "podofo/base/PdfString.h"
#include "podofo/doc/PdfAcroForm.h"
#include "podofo/doc/PdfAnnotation.h"
#include "podofo/doc/PdfDocument.h"
#include "podofo/doc/PdfPage.h"
#include "podofo/doc/PdfSignatureField.h"
#include "podofo/doc/PdfXObject.h"

#include "__zz_cib_CibPoDoFo-class-down-cast.h"
#include "__zz_cib_CibPoDoFo-delegate-helper.h"
#include "__zz_cib_CibPoDoFo-generic.h"
#include "__zz_cib_CibPoDoFo-ids.h"
#include "__zz_cib_CibPoDoFo-type-converters.h"
#include "__zz_cib_CibPoDoFo-mtable-helper.h"
#include "__zz_cib_CibPoDoFo-proxy-mgr.h"

namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfSignatureField> : public ::PoDoFo::PdfSignatureField {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignatureField>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfSignatureField::PdfSignatureField;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Init_2(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfSignatureField::Init();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_3(__zz_cib_AbiType_t<::PoDoFo::PdfPage*> pPage, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pDoc) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(pPage),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pDoc));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_4(__zz_cib_AbiType_t<::PoDoFo::PdfAnnotation*> pWidget, __zz_cib_AbiType_t<::PoDoFo::PdfAcroForm*> pParent, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pDoc, __zz_cib_AbiType_t<bool> bInit) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAnnotation*>(pWidget),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAcroForm*>(pParent),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pDoc),
    __zz_cib_::__zz_cib_FromAbiType<bool>(bInit));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_5(__zz_cib_AbiType_t<::PoDoFo::PdfAnnotation*> pWidget) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAnnotation*>(pWidget));
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetAppearanceStream_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfXObject*> pObject, __zz_cib_AbiType_t<::PoDoFo::EPdfAnnotationAppearance> eAppearance, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> state) {
    __zz_cib_obj->::PoDoFo::PdfSignatureField::SetAppearanceStream(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfXObject*>(pObject),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfAnnotationAppearance>(eAppearance),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(state)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetSignature_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfData&> signatureData) {
    __zz_cib_obj->::PoDoFo::PdfSignatureField::SetSignature(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfData&>(signatureData)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetSignatureReason_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rsText) {
    __zz_cib_obj->::PoDoFo::PdfSignatureField::SetSignatureReason(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rsText)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetSignatureLocation_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rsText) {
    __zz_cib_obj->::PoDoFo::PdfSignatureField::SetSignatureLocation(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rsText)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetSignatureCreator_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> creator) {
    __zz_cib_obj->::PoDoFo::PdfSignatureField::SetSignatureCreator(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(creator)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetSignatureDate_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfDate&> sigDate) {
    __zz_cib_obj->::PoDoFo::PdfSignatureField::SetSignatureDate(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfDate&>(sigDate)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddCertificationReference_12(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pDocumentCatalog, __zz_cib_AbiType_t<::PoDoFo::PdfSignatureField::EPdfCertPermission> perm) {
    __zz_cib_obj->::PoDoFo::PdfSignatureField::AddCertificationReference(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pDocumentCatalog),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfSignatureField::EPdfCertPermission>(perm)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetSignatureObject_13(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfSignatureField::GetSignatureObject()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EnsureSignatureObject_14(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfSignatureField::EnsureSignatureObject();
  }
  static ::PoDoFo::PdfField* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class421(::PoDoFo::PdfSignatureField* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfSignatureField* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class421(::PoDoFo::PdfField* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfSignatureField*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class472 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignatureField>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignatureField>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignatureField>::Init_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignatureField>::__zz_cib_New_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignatureField>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignatureField>::__zz_cib_New_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignatureField>::SetAppearanceStream_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignatureField>::SetSignature_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignatureField>::SetSignatureReason_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignatureField>::SetSignatureLocation_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignatureField>::SetSignatureCreator_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignatureField>::SetSignatureDate_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignatureField>::AddCertificationReference_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignatureField>::GetSignatureObject_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignatureField>::EnsureSignatureObject_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignatureField>::__zz_cib_CastTo__zz_cib_Class421),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignatureField>::__zz_cib_CastFrom__zz_cib_Class421)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 17 };
  return &methodTable;
}
}}}
