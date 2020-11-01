#include "podofo/base/PdfArray.h"
#include "podofo/base/PdfRect.h"
#include "podofo/base/PdfVariant.h"
#include "podofo/doc/PdfPage.h"

namespace PoDoFo {

PoDoFo::PdfRect::PdfRect(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfRect::PdfRect(PdfRect&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfRect::~PdfRect() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_0(
    h
  );
}

PoDoFo::PdfRect::PdfRect()
  : PoDoFo::PdfRect(__zz_cib_MyHelper::__zz_cib_New_1())
{}

PoDoFo::PdfRect::PdfRect(double left, double bottom, double width, double height)
  : PoDoFo::PdfRect(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(left)>(std::move(left)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bottom)>(std::move(bottom)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(width)>(std::move(width)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(height)>(std::move(height))))
{}

PoDoFo::PdfRect::PdfRect(const ::PoDoFo::PdfArray& inArray)
  : PoDoFo::PdfRect(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(inArray)>(inArray)))
{}

PoDoFo::PdfRect::PdfRect(const ::PoDoFo::PdfRect& rhs)
  : PoDoFo::PdfRect(__zz_cib_MyHelper::__zz_cib_Copy_4(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
{}

void PoDoFo::PdfRect::ToVariant(::PoDoFo::PdfVariant& var) const {
    __zz_cib_MyHelper::ToVariant_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(var)>(var)
    );
  }

std::string PoDoFo::PdfRect::ToString() const {
  return __zz_cib_::__zz_cib_FromAbiType<std::string>(
    __zz_cib_MyHelper::ToString_6<__zz_cib_::__zz_cib_AbiType_t<std::string>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfRect::FromArray(const ::PoDoFo::PdfArray& inArray) {
    __zz_cib_MyHelper::FromArray_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inArray)>(inArray)
    );
  }

void PoDoFo::PdfRect::Intersect(const ::PoDoFo::PdfRect& rRect) {
    __zz_cib_MyHelper::Intersect_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect)
    );
  }

double PoDoFo::PdfRect::GetBottom() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetBottom_9<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfRect::SetBottom(double dBottom) {
    __zz_cib_MyHelper::SetBottom_10<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dBottom)>(std::move(dBottom))
    );
  }

double PoDoFo::PdfRect::GetLeft() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetLeft_11<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfRect::SetLeft(double lLeft) {
    __zz_cib_MyHelper::SetLeft_12<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLeft)>(std::move(lLeft))
    );
  }

double PoDoFo::PdfRect::GetWidth() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetWidth_13<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfRect::SetWidth(double lWidth) {
    __zz_cib_MyHelper::SetWidth_14<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lWidth)>(std::move(lWidth))
    );
  }

double PoDoFo::PdfRect::GetHeight() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetHeight_15<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfRect::SetHeight(double lHeight) {
    __zz_cib_MyHelper::SetHeight_16<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lHeight)>(std::move(lHeight))
    );
  }

::PoDoFo::PdfRect& PoDoFo::PdfRect::operator=(const ::PoDoFo::PdfRect& rhs) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfRect&>(
    __zz_cib_MyHelper::__zz_cib_OperatorEqual_17<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfRect&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}
}
