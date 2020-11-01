#include "podofo/base/PdfDate.h"
#include "podofo/base/PdfString.h"

namespace PoDoFo {

PoDoFo::PdfDate::PdfDate(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfDate::PdfDate(PdfDate&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfDate::PdfDate(const ::PoDoFo::PdfDate& __zz_cib_param0)
  : PoDoFo::PdfDate(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfDate::PdfDate()
  : PoDoFo::PdfDate(__zz_cib_MyHelper::__zz_cib_New_1())
{}

PoDoFo::PdfDate::PdfDate(const time_t& t)
  : PoDoFo::PdfDate(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(t)>(t)))
{}

PoDoFo::PdfDate::PdfDate(const ::PoDoFo::PdfString& sDate)
  : PoDoFo::PdfDate(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(sDate)>(sDate)))
{}

PoDoFo::PdfDate::~PdfDate() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_4(
    h
  );
}

bool PoDoFo::PdfDate::IsValid() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsValid_5<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const time_t& PoDoFo::PdfDate::GetTime() const {
  return __zz_cib_::__zz_cib_FromAbiType<const time_t&>(
    __zz_cib_MyHelper::GetTime_6<__zz_cib_::__zz_cib_AbiType_t<const time_t&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfDate::ToString(::PoDoFo::PdfString& rsString) const {
    __zz_cib_MyHelper::ToString_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rsString)>(rsString)
    );
  }
}
