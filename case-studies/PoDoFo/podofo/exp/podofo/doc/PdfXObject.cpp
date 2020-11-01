#include "podofo/base/PdfDictionary.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfRect.h"
#include "podofo/base/PdfReference.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfDocument.h"
#include "podofo/doc/PdfMemDocument.h"
#include "podofo/doc/PdfXObject.h"

namespace PoDoFo {

PoDoFo::PdfXObject::PdfXObject(__zz_cib_AbiType h)
  : ::PoDoFo::PdfElement(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class418(h))
  , ::PoDoFo::PdfCanvas(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class335(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfXObject::PdfXObject(PdfXObject&& rhs)
  : ::PoDoFo::PdfElement(std::move(rhs))
  , ::PoDoFo::PdfCanvas(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfXObject::PdfXObject(const ::PoDoFo::PdfXObject& __zz_cib_param0)
  : PoDoFo::PdfXObject(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfXObject::PdfXObject(const ::PoDoFo::PdfRect& rRect, ::PoDoFo::PdfDocument* pParent, const char* pszPrefix, bool bWithoutObjNum)
  : PoDoFo::PdfXObject(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszPrefix)>(std::move(pszPrefix)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bWithoutObjNum)>(std::move(bWithoutObjNum))))
{}

PoDoFo::PdfXObject::PdfXObject(const ::PoDoFo::PdfRect& rRect, ::PoDoFo::PdfVecObjects* pParent, const char* pszPrefix)
  : PoDoFo::PdfXObject(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszPrefix)>(std::move(pszPrefix))))
{}

PoDoFo::PdfXObject::PdfXObject(const ::PoDoFo::PdfMemDocument& rSourceDoc, int nPage, ::PoDoFo::PdfDocument* pParent, const char* pszPrefix, bool bUseTrimBox)
  : PoDoFo::PdfXObject(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rSourceDoc)>(rSourceDoc),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nPage)>(std::move(nPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszPrefix)>(std::move(pszPrefix)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bUseTrimBox)>(std::move(bUseTrimBox))))
{}

PoDoFo::PdfXObject::PdfXObject(::PoDoFo::PdfDocument* pDoc, int nPage, const char* pszPrefix, bool bUseTrimBox)
  : PoDoFo::PdfXObject(__zz_cib_MyHelper::__zz_cib_New_4(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pDoc)>(std::move(pDoc)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nPage)>(std::move(nPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszPrefix)>(std::move(pszPrefix)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bUseTrimBox)>(std::move(bUseTrimBox))))
{}

PoDoFo::PdfXObject::PdfXObject(::PoDoFo::PdfObject* pObject)
  : PoDoFo::PdfXObject(__zz_cib_MyHelper::__zz_cib_New_5(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject))))
{}

PoDoFo::PdfXObject::~PdfXObject() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_6(
    h
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfXObject::GetContents() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetContents_7<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfXObject::GetContentsForAppending() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetContentsForAppending_8<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfXObject::GetResources() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetResources_9<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfRect PoDoFo::PdfXObject::GetPageSize() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfRect>(
    __zz_cib_MyHelper::GetPageSize_10<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfRect>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfName& PoDoFo::PdfXObject::GetIdentifier() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(
    __zz_cib_MyHelper::GetIdentifier_11<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfName&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfReference& PoDoFo::PdfXObject::GetObjectReference() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfReference&>(
    __zz_cib_MyHelper::GetObjectReference_12<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfReference&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfXObject::InitXObject(const ::PoDoFo::PdfRect& rRect, const char* pszPrefix) {
    __zz_cib_MyHelper::InitXObject_13<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszPrefix)>(std::move(pszPrefix))
    );
  }

PoDoFo::PdfXObject::PdfXObject(const char* pszSubType, ::PoDoFo::PdfDocument* pParent, const char* pszPrefix)
  : PoDoFo::PdfXObject(__zz_cib_MyHelper::__zz_cib_New_14(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszSubType)>(std::move(pszSubType)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszPrefix)>(std::move(pszPrefix))))
{}

PoDoFo::PdfXObject::PdfXObject(const char* pszSubType, ::PoDoFo::PdfVecObjects* pParent, const char* pszPrefix)
  : PoDoFo::PdfXObject(__zz_cib_MyHelper::__zz_cib_New_15(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszSubType)>(std::move(pszSubType)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszPrefix)>(std::move(pszPrefix))))
{}

PoDoFo::PdfXObject::PdfXObject(const char* pszSubType, ::PoDoFo::PdfObject* pObject)
  : PoDoFo::PdfXObject(__zz_cib_MyHelper::__zz_cib_New_16(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszSubType)>(std::move(pszSubType)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject))))
{}
}
