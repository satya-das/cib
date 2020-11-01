#include "podofo/base/PdfArray.h"
#include "podofo/base/PdfColor.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/base/PdfWriter.h"
#include "podofo/doc/PdfDocument.h"
#include "podofo/doc/PdfPage.h"
#include "podofo/doc/PdfShadingPattern.h"

namespace PoDoFo {

PoDoFo::PdfShadingPattern::PdfShadingPattern(__zz_cib_AbiType h)
  : ::PoDoFo::PdfElement(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class418(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfShadingPattern::PdfShadingPattern(PdfShadingPattern&& rhs)
  : ::PoDoFo::PdfElement(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfShadingPattern::PdfShadingPattern(const ::PoDoFo::PdfShadingPattern& __zz_cib_param0)
  : PoDoFo::PdfShadingPattern(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfShadingPattern::~PdfShadingPattern() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

const ::PoDoFo::PdfName& PoDoFo::PdfShadingPattern::GetIdentifier() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(
    __zz_cib_MyHelper::GetIdentifier_2<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfName&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

PoDoFo::PdfShadingPattern::PdfShadingPattern(::PoDoFo::EPdfShadingPatternType eShadingType, ::PoDoFo::PdfVecObjects* pParent)
  : PoDoFo::PdfShadingPattern(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(eShadingType)>(std::move(eShadingType)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfShadingPattern::PdfShadingPattern(::PoDoFo::EPdfShadingPatternType eShadingType, ::PoDoFo::PdfDocument* pParent)
  : PoDoFo::PdfShadingPattern(__zz_cib_MyHelper::__zz_cib_New_4(
        __zz_cib_::__zz_cib_ToAbiType<decltype(eShadingType)>(std::move(eShadingType)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}
}
namespace PoDoFo {

PoDoFo::PdfAxialShadingPattern::PdfAxialShadingPattern(__zz_cib_AbiType h)
  : ::PoDoFo::PdfShadingPattern(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class466(h))
  , __zz_cib_h_(h)
{}

PoDoFo::PdfAxialShadingPattern::PdfAxialShadingPattern(PdfAxialShadingPattern&& rhs)
  : ::PoDoFo::PdfShadingPattern(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfAxialShadingPattern::PdfAxialShadingPattern(const ::PoDoFo::PdfAxialShadingPattern& __zz_cib_param0)
  : PoDoFo::PdfAxialShadingPattern(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfAxialShadingPattern::~PdfAxialShadingPattern() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfAxialShadingPattern::PdfAxialShadingPattern(double dX0, double dY0, double dX1, double dY1, const ::PoDoFo::PdfColor& rStart, const ::PoDoFo::PdfColor& rEnd, ::PoDoFo::PdfVecObjects* pParent)
  : PoDoFo::PdfAxialShadingPattern(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(dX0)>(std::move(dX0)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dY0)>(std::move(dY0)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dX1)>(std::move(dX1)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dY1)>(std::move(dY1)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rStart)>(rStart),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rEnd)>(rEnd),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfAxialShadingPattern::PdfAxialShadingPattern(double dX0, double dY0, double dX1, double dY1, const ::PoDoFo::PdfColor& rStart, const ::PoDoFo::PdfColor& rEnd, ::PoDoFo::PdfDocument* pParent)
  : PoDoFo::PdfAxialShadingPattern(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(dX0)>(std::move(dX0)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dY0)>(std::move(dY0)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dX1)>(std::move(dX1)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dY1)>(std::move(dY1)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rStart)>(rStart),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rEnd)>(rEnd),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}
}
namespace PoDoFo {

PoDoFo::PdfFunctionBaseShadingPattern::PdfFunctionBaseShadingPattern(__zz_cib_AbiType h)
  : ::PoDoFo::PdfShadingPattern(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class466(h))
  , __zz_cib_h_(h)
{}

PoDoFo::PdfFunctionBaseShadingPattern::PdfFunctionBaseShadingPattern(PdfFunctionBaseShadingPattern&& rhs)
  : ::PoDoFo::PdfShadingPattern(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfFunctionBaseShadingPattern::PdfFunctionBaseShadingPattern(const ::PoDoFo::PdfFunctionBaseShadingPattern& __zz_cib_param0)
  : PoDoFo::PdfFunctionBaseShadingPattern(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfFunctionBaseShadingPattern::~PdfFunctionBaseShadingPattern() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfFunctionBaseShadingPattern::PdfFunctionBaseShadingPattern(const ::PoDoFo::PdfColor& rLL, const ::PoDoFo::PdfColor& rUL, const ::PoDoFo::PdfColor& rLR, const ::PoDoFo::PdfColor& rUR, const ::PoDoFo::PdfArray& rMatrix, ::PoDoFo::PdfVecObjects* pParent)
  : PoDoFo::PdfFunctionBaseShadingPattern(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rLL)>(rLL),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rUL)>(rUL),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rLR)>(rLR),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rUR)>(rUR),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rMatrix)>(rMatrix),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfFunctionBaseShadingPattern::PdfFunctionBaseShadingPattern(const ::PoDoFo::PdfColor& rLL, const ::PoDoFo::PdfColor& rUL, const ::PoDoFo::PdfColor& rLR, const ::PoDoFo::PdfColor& rUR, const ::PoDoFo::PdfArray& rMatrix, ::PoDoFo::PdfDocument* pParent)
  : PoDoFo::PdfFunctionBaseShadingPattern(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rLL)>(rLL),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rUL)>(rUL),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rLR)>(rLR),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rUR)>(rUR),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rMatrix)>(rMatrix),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}
}
namespace PoDoFo {

PoDoFo::PdfRadialShadingPattern::PdfRadialShadingPattern(__zz_cib_AbiType h)
  : ::PoDoFo::PdfShadingPattern(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class466(h))
  , __zz_cib_h_(h)
{}

PoDoFo::PdfRadialShadingPattern::PdfRadialShadingPattern(PdfRadialShadingPattern&& rhs)
  : ::PoDoFo::PdfShadingPattern(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfRadialShadingPattern::PdfRadialShadingPattern(const ::PoDoFo::PdfRadialShadingPattern& __zz_cib_param0)
  : PoDoFo::PdfRadialShadingPattern(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfRadialShadingPattern::~PdfRadialShadingPattern() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfRadialShadingPattern::PdfRadialShadingPattern(double dX0, double dY0, double dR0, double dX1, double dY1, double dR1, const ::PoDoFo::PdfColor& rStart, const ::PoDoFo::PdfColor& rEnd, ::PoDoFo::PdfVecObjects* pParent)
  : PoDoFo::PdfRadialShadingPattern(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(dX0)>(std::move(dX0)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dY0)>(std::move(dY0)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dR0)>(std::move(dR0)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dX1)>(std::move(dX1)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dY1)>(std::move(dY1)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dR1)>(std::move(dR1)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rStart)>(rStart),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rEnd)>(rEnd),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfRadialShadingPattern::PdfRadialShadingPattern(double dX0, double dY0, double dR0, double dX1, double dY1, double dR1, const ::PoDoFo::PdfColor& rStart, const ::PoDoFo::PdfColor& rEnd, ::PoDoFo::PdfDocument* pParent)
  : PoDoFo::PdfRadialShadingPattern(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(dX0)>(std::move(dX0)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dY0)>(std::move(dY0)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dR0)>(std::move(dR0)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dX1)>(std::move(dX1)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dY1)>(std::move(dY1)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dR1)>(std::move(dR1)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rStart)>(rStart),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rEnd)>(rEnd),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}
}
namespace PoDoFo {

PoDoFo::PdfTriangleShadingPattern::PdfTriangleShadingPattern(__zz_cib_AbiType h)
  : ::PoDoFo::PdfShadingPattern(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class466(h))
  , __zz_cib_h_(h)
{}

PoDoFo::PdfTriangleShadingPattern::PdfTriangleShadingPattern(PdfTriangleShadingPattern&& rhs)
  : ::PoDoFo::PdfShadingPattern(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfTriangleShadingPattern::PdfTriangleShadingPattern(const ::PoDoFo::PdfTriangleShadingPattern& __zz_cib_param0)
  : PoDoFo::PdfTriangleShadingPattern(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfTriangleShadingPattern::~PdfTriangleShadingPattern() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfTriangleShadingPattern::PdfTriangleShadingPattern(double dX0, double dY0, const ::PoDoFo::PdfColor& color0, double dX1, double dY1, const ::PoDoFo::PdfColor& color1, double dX2, double dY2, const ::PoDoFo::PdfColor& color2, ::PoDoFo::PdfVecObjects* pParent)
  : PoDoFo::PdfTriangleShadingPattern(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(dX0)>(std::move(dX0)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dY0)>(std::move(dY0)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(color0)>(color0),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dX1)>(std::move(dX1)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dY1)>(std::move(dY1)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(color1)>(color1),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dX2)>(std::move(dX2)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dY2)>(std::move(dY2)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(color2)>(color2),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfTriangleShadingPattern::PdfTriangleShadingPattern(double dX0, double dY0, const ::PoDoFo::PdfColor& color0, double dX1, double dY1, const ::PoDoFo::PdfColor& color1, double dX2, double dY2, const ::PoDoFo::PdfColor& color2, ::PoDoFo::PdfDocument* pParent)
  : PoDoFo::PdfTriangleShadingPattern(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(dX0)>(std::move(dX0)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dY0)>(std::move(dY0)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(color0)>(color0),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dX1)>(std::move(dX1)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dY1)>(std::move(dY1)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(color1)>(color1),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dX2)>(std::move(dX2)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dY2)>(std::move(dY2)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(color2)>(color2),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}
}
