#include "podofo/base/PdfArray.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfDocument.h"
#include "podofo/doc/PdfFunction.h"
#include <list>

namespace PoDoFo {

PoDoFo::PdfFunction::PdfFunction(__zz_cib_AbiType h)
  : ::PoDoFo::PdfElement(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class418(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfFunction::PdfFunction(PdfFunction&& rhs)
  : ::PoDoFo::PdfElement(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfFunction::PdfFunction(const ::PoDoFo::PdfFunction& __zz_cib_param0)
  : PoDoFo::PdfFunction(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfFunction::PdfFunction()
  : PoDoFo::PdfFunction(__zz_cib_MyHelper::__zz_cib_New_1())
{}

PoDoFo::PdfFunction::~PdfFunction() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

PoDoFo::PdfFunction::PdfFunction(::PoDoFo::EPdfFunctionType eType, const ::PoDoFo::PdfArray& rDomain, ::PoDoFo::PdfVecObjects* pParent)
  : PoDoFo::PdfFunction(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(eType)>(std::move(eType)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rDomain)>(rDomain),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfFunction::PdfFunction(::PoDoFo::EPdfFunctionType eType, const ::PoDoFo::PdfArray& rDomain, ::PoDoFo::PdfDocument* pParent)
  : PoDoFo::PdfFunction(__zz_cib_MyHelper::__zz_cib_New_4(
        __zz_cib_::__zz_cib_ToAbiType<decltype(eType)>(std::move(eType)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rDomain)>(rDomain),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}
}
namespace PoDoFo {

PoDoFo::PdfSampledFunction::PdfSampledFunction(__zz_cib_AbiType h)
  : ::PoDoFo::PdfFunction(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class448(h))
  , __zz_cib_h_(h)
{}

PoDoFo::PdfSampledFunction::PdfSampledFunction(PdfSampledFunction&& rhs)
  : ::PoDoFo::PdfFunction(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfSampledFunction::PdfSampledFunction(const ::PoDoFo::PdfSampledFunction& __zz_cib_param0)
  : PoDoFo::PdfSampledFunction(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfSampledFunction::~PdfSampledFunction() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfSampledFunction::PdfSampledFunction(const ::PoDoFo::PdfArray& rDomain, const ::PoDoFo::PdfArray& rRange, const ::std::list<char>& rlstSamples, ::PoDoFo::PdfVecObjects* pParent)
  : PoDoFo::PdfSampledFunction(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rDomain)>(rDomain),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRange)>(rRange),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rlstSamples)>(rlstSamples),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfSampledFunction::PdfSampledFunction(const ::PoDoFo::PdfArray& rDomain, const ::PoDoFo::PdfArray& rRange, const ::std::list<char>& rlstSamples, ::PoDoFo::PdfDocument* pParent)
  : PoDoFo::PdfSampledFunction(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rDomain)>(rDomain),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRange)>(rRange),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rlstSamples)>(rlstSamples),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}
}
namespace PoDoFo {

PoDoFo::PdfExponentialFunction::PdfExponentialFunction(__zz_cib_AbiType h)
  : ::PoDoFo::PdfFunction(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class448(h))
  , __zz_cib_h_(h)
{}

PoDoFo::PdfExponentialFunction::PdfExponentialFunction(PdfExponentialFunction&& rhs)
  : ::PoDoFo::PdfFunction(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfExponentialFunction::PdfExponentialFunction(const ::PoDoFo::PdfExponentialFunction& __zz_cib_param0)
  : PoDoFo::PdfExponentialFunction(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfExponentialFunction::~PdfExponentialFunction() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfExponentialFunction::PdfExponentialFunction(const ::PoDoFo::PdfArray& rDomain, const ::PoDoFo::PdfArray& rC0, const ::PoDoFo::PdfArray& rC1, double dExponent, ::PoDoFo::PdfVecObjects* pParent)
  : PoDoFo::PdfExponentialFunction(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rDomain)>(rDomain),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rC0)>(rC0),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rC1)>(rC1),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dExponent)>(std::move(dExponent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfExponentialFunction::PdfExponentialFunction(const ::PoDoFo::PdfArray& rDomain, const ::PoDoFo::PdfArray& rC0, const ::PoDoFo::PdfArray& rC1, double dExponent, ::PoDoFo::PdfDocument* pParent)
  : PoDoFo::PdfExponentialFunction(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rDomain)>(rDomain),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rC0)>(rC0),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rC1)>(rC1),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dExponent)>(std::move(dExponent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}
}
namespace PoDoFo {

PoDoFo::PdfStitchingFunction::PdfStitchingFunction(__zz_cib_AbiType h)
  : ::PoDoFo::PdfFunction(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class448(h))
  , __zz_cib_h_(h)
{}

PoDoFo::PdfStitchingFunction::PdfStitchingFunction(PdfStitchingFunction&& rhs)
  : ::PoDoFo::PdfFunction(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfStitchingFunction::PdfStitchingFunction(const ::PoDoFo::PdfStitchingFunction& __zz_cib_param0)
  : PoDoFo::PdfStitchingFunction(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfStitchingFunction::~PdfStitchingFunction() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfStitchingFunction::PdfStitchingFunction(const ::std::list<::PoDoFo::PdfFunction>& rlstFunctions, const ::PoDoFo::PdfArray& rDomain, const ::PoDoFo::PdfArray& rBounds, const ::PoDoFo::PdfArray& rEncode, ::PoDoFo::PdfVecObjects* pParent)
  : PoDoFo::PdfStitchingFunction(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rlstFunctions)>(rlstFunctions),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rDomain)>(rDomain),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rBounds)>(rBounds),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rEncode)>(rEncode),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfStitchingFunction::PdfStitchingFunction(const ::std::list<::PoDoFo::PdfFunction>& rlstFunctions, const ::PoDoFo::PdfArray& rDomain, const ::PoDoFo::PdfArray& rBounds, const ::PoDoFo::PdfArray& rEncode, ::PoDoFo::PdfDocument* pParent)
  : PoDoFo::PdfStitchingFunction(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rlstFunctions)>(rlstFunctions),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rDomain)>(rDomain),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rBounds)>(rBounds),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rEncode)>(rEncode),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}
}
