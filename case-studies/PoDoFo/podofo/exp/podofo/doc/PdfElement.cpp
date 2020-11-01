#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfDocument.h"
#include "podofo/doc/PdfElement.h"
#include "podofo/doc/PdfStreamedDocument.h"

namespace PoDoFo {

PoDoFo::PdfElement::PdfElement(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfElement::PdfElement(PdfElement&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfElement::PdfElement(const ::PoDoFo::PdfElement& __zz_cib_param0)
  : PoDoFo::PdfElement(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfElement::~PdfElement() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfElement::GetObject() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetObject_2<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfObject* PoDoFo::PdfElement::GetObject() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetObject_3<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

PoDoFo::PdfElement::PdfElement()
  : PoDoFo::PdfElement(__zz_cib_MyHelper::__zz_cib_New_4())
{}

PoDoFo::PdfElement::PdfElement(const char* pszType, ::PoDoFo::PdfVecObjects* pParent)
  : PoDoFo::PdfElement(__zz_cib_MyHelper::__zz_cib_New_5(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszType)>(std::move(pszType)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfElement::PdfElement(const char* pszType, ::PoDoFo::PdfDocument* pParent)
  : PoDoFo::PdfElement(__zz_cib_MyHelper::__zz_cib_New_6(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszType)>(std::move(pszType)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfElement::PdfElement(const char* pszType, ::PoDoFo::PdfObject* pObject)
  : PoDoFo::PdfElement(__zz_cib_MyHelper::__zz_cib_New_7(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszType)>(std::move(pszType)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject))))
{}

PoDoFo::PdfElement::PdfElement(::PoDoFo::EPdfDataType eExpectedDataType, ::PoDoFo::PdfObject* pObject)
  : PoDoFo::PdfElement(__zz_cib_MyHelper::__zz_cib_New_8(
        __zz_cib_::__zz_cib_ToAbiType<decltype(eExpectedDataType)>(std::move(eExpectedDataType)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject))))
{}

const char* PoDoFo::PdfElement::TypeNameForIndex(int i, const char** ppTypes, long lLen) const {
  return __zz_cib_::__zz_cib_FromAbiType<const char*>(
    __zz_cib_MyHelper::TypeNameForIndex_9<__zz_cib_::__zz_cib_AbiType_t<const char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(i)>(std::move(i)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(ppTypes)>(std::move(ppTypes)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    )
  );
}

int PoDoFo::PdfElement::TypeNameToIndex(const char* pszType, const char** ppTypes, long lLen, int nUnknownValue) const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::TypeNameToIndex_10<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszType)>(std::move(pszType)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(ppTypes)>(std::move(ppTypes)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nUnknownValue)>(std::move(nUnknownValue))
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfElement::CreateObject(const char* pszType) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::CreateObject_11<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszType)>(std::move(pszType))
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfElement::GetNonConstObject() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetNonConstObject_12<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
