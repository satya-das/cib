#include "podofo/base/PdfDictionary.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfString.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfNamesTree.h"

namespace PoDoFo {

PoDoFo::PdfNamesTree::PdfNamesTree(__zz_cib_AbiType h)
  : ::PoDoFo::PdfElement(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class418(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfNamesTree::PdfNamesTree(PdfNamesTree&& rhs)
  : ::PoDoFo::PdfElement(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfNamesTree::PdfNamesTree(const ::PoDoFo::PdfNamesTree& __zz_cib_param0)
  : PoDoFo::PdfNamesTree(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfNamesTree::PdfNamesTree(::PoDoFo::PdfVecObjects* pParent)
  : PoDoFo::PdfNamesTree(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfNamesTree::PdfNamesTree(::PoDoFo::PdfObject* pObject, ::PoDoFo::PdfObject* pCatalog)
  : PoDoFo::PdfNamesTree(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pCatalog)>(std::move(pCatalog))))
{}

PoDoFo::PdfNamesTree::~PdfNamesTree() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_3(
    h
  );
}

void PoDoFo::PdfNamesTree::AddValue(const ::PoDoFo::PdfName& tree, const ::PoDoFo::PdfString& key, const ::PoDoFo::PdfObject& rValue) {
    __zz_cib_MyHelper::AddValue_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(tree)>(tree),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rValue)>(rValue)
    );
  }

::PoDoFo::PdfObject* PoDoFo::PdfNamesTree::GetValue(const ::PoDoFo::PdfName& tree, const ::PoDoFo::PdfString& key) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetValue_5<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(tree)>(tree),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key)
    )
  );
}

bool PoDoFo::PdfNamesTree::HasValue(const ::PoDoFo::PdfName& tree, const ::PoDoFo::PdfString& key) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::HasValue_6<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(tree)>(tree),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key)
    )
  );
}

::PoDoFo::EPdfNameLimits PoDoFo::PdfNamesTree::CheckLimits(const ::PoDoFo::PdfObject* pObj, const ::PoDoFo::PdfString& key) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfNameLimits>(
    __zz_cib_MyHelper::CheckLimits_7<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::EPdfNameLimits>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(pObj)>(std::move(pObj)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key)
    )
  );
}

void PoDoFo::PdfNamesTree::ToDictionary(const ::PoDoFo::PdfName& dictionary, ::PoDoFo::PdfDictionary& rDict) {
    __zz_cib_MyHelper::ToDictionary_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dictionary)>(dictionary),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rDict)>(rDict)
    );
  }

::PoDoFo::PdfObject* PoDoFo::PdfNamesTree::GetJavaScriptNode(bool bCreate) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetJavaScriptNode_9<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bCreate)>(std::move(bCreate))
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfNamesTree::GetDestsNode(bool bCreate) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetDestsNode_10<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bCreate)>(std::move(bCreate))
    )
  );
}
}
