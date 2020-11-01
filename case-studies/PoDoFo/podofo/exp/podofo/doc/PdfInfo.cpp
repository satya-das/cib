#include "podofo/base/PdfDate.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfString.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfInfo.h"

namespace PoDoFo {

PoDoFo::PdfInfo::PdfInfo(__zz_cib_AbiType h)
  : ::PoDoFo::PdfElement(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class418(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfInfo::PdfInfo(PdfInfo&& rhs)
  : ::PoDoFo::PdfElement(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfInfo::PdfInfo(const ::PoDoFo::PdfInfo& __zz_cib_param0)
  : PoDoFo::PdfInfo(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfInfo::PdfInfo(::PoDoFo::PdfVecObjects* pParent, int eInitial)
  : PoDoFo::PdfInfo(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(eInitial)>(std::move(eInitial))))
{}

PoDoFo::PdfInfo::PdfInfo(::PoDoFo::PdfObject* pObject, int eInitial)
  : PoDoFo::PdfInfo(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(eInitial)>(std::move(eInitial))))
{}

PoDoFo::PdfInfo::~PdfInfo() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_3(
    h
  );
}

void PoDoFo::PdfInfo::SetAuthor(const ::PoDoFo::PdfString& sAuthor) {
    __zz_cib_MyHelper::SetAuthor_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sAuthor)>(sAuthor)
    );
  }

const ::PoDoFo::PdfString& PoDoFo::PdfInfo::GetAuthor() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(
    __zz_cib_MyHelper::GetAuthor_5<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfString&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfInfo::SetCreator(const ::PoDoFo::PdfString& sCreator) {
    __zz_cib_MyHelper::SetCreator_6<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sCreator)>(sCreator)
    );
  }

const ::PoDoFo::PdfString& PoDoFo::PdfInfo::GetCreator() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(
    __zz_cib_MyHelper::GetCreator_7<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfString&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfInfo::SetKeywords(const ::PoDoFo::PdfString& sKeywords) {
    __zz_cib_MyHelper::SetKeywords_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sKeywords)>(sKeywords)
    );
  }

const ::PoDoFo::PdfString& PoDoFo::PdfInfo::GetKeywords() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(
    __zz_cib_MyHelper::GetKeywords_9<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfString&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfInfo::SetSubject(const ::PoDoFo::PdfString& sSubject) {
    __zz_cib_MyHelper::SetSubject_10<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sSubject)>(sSubject)
    );
  }

const ::PoDoFo::PdfString& PoDoFo::PdfInfo::GetSubject() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(
    __zz_cib_MyHelper::GetSubject_11<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfString&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfInfo::SetTitle(const ::PoDoFo::PdfString& sTitle) {
    __zz_cib_MyHelper::SetTitle_12<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sTitle)>(sTitle)
    );
  }

const ::PoDoFo::PdfString& PoDoFo::PdfInfo::GetTitle() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(
    __zz_cib_MyHelper::GetTitle_13<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfString&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfInfo::SetProducer(const ::PoDoFo::PdfString& sProducer) {
    __zz_cib_MyHelper::SetProducer_14<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sProducer)>(sProducer)
    );
  }

const ::PoDoFo::PdfString& PoDoFo::PdfInfo::GetProducer() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(
    __zz_cib_MyHelper::GetProducer_15<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfString&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfInfo::SetTrapped(const ::PoDoFo::PdfName& sTrapped) {
    __zz_cib_MyHelper::SetTrapped_16<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sTrapped)>(sTrapped)
    );
  }

const ::PoDoFo::PdfName& PoDoFo::PdfInfo::GetTrapped() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(
    __zz_cib_MyHelper::GetTrapped_17<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfName&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfDate PoDoFo::PdfInfo::GetCreationDate() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDate>(
    __zz_cib_MyHelper::GetCreationDate_18<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfDate>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfDate PoDoFo::PdfInfo::GetModDate() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDate>(
    __zz_cib_MyHelper::GetModDate_19<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfDate>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfInfo::SetCustomKey(const ::PoDoFo::PdfName& sName, const ::PoDoFo::PdfString& sValue) {
    __zz_cib_MyHelper::SetCustomKey_20<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sName)>(sName),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sValue)>(sValue)
    );
  }
}
