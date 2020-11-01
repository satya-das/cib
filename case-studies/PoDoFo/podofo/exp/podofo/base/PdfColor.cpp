#include "podofo/base/PdfArray.h"
#include "podofo/base/PdfColor.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfVecObjects.h"

namespace PoDoFo {

PoDoFo::PdfColor::PdfColor(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfColor::PdfColor(PdfColor&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfColor::PdfColor()
  : PoDoFo::PdfColor(__zz_cib_MyHelper::__zz_cib_New_0())
{}

PoDoFo::PdfColor::PdfColor(double dGray)
  : PoDoFo::PdfColor(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(dGray)>(std::move(dGray))))
{}

PoDoFo::PdfColor::PdfColor(double dRed, double dGreen, double dBlue)
  : PoDoFo::PdfColor(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(dRed)>(std::move(dRed)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dGreen)>(std::move(dGreen)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dBlue)>(std::move(dBlue))))
{}

PoDoFo::PdfColor::PdfColor(double dCyan, double dMagenta, double dYellow, double dBlack)
  : PoDoFo::PdfColor(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(dCyan)>(std::move(dCyan)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dMagenta)>(std::move(dMagenta)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dYellow)>(std::move(dYellow)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dBlack)>(std::move(dBlack))))
{}

PoDoFo::PdfColor::PdfColor(const ::PoDoFo::PdfColor& rhs)
  : PoDoFo::PdfColor(__zz_cib_MyHelper::__zz_cib_Copy_4(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
{}

PoDoFo::PdfColor::~PdfColor() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_5(
    h
  );
}

const ::PoDoFo::PdfColor& PoDoFo::PdfColor::operator=(const ::PoDoFo::PdfColor& rhs) {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfColor&>(
    __zz_cib_MyHelper::__zz_cib_OperatorEqual_6<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfColor&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

bool PoDoFo::PdfColor::operator==(const ::PoDoFo::PdfColor& rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorCmpEq_7<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

bool PoDoFo::PdfColor::operator!=(const ::PoDoFo::PdfColor& rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorNotEq_8<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

bool PoDoFo::PdfColor::IsGrayScale() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsGrayScale_9<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfColor::IsRGB() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsRGB_10<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfColor::IsCMYK() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsCMYK_11<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfColor::IsSeparation() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsSeparation_12<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfColor::IsCieLab() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsCieLab_13<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::EPdfColorSpace PoDoFo::PdfColor::GetColorSpace() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfColorSpace>(
    __zz_cib_MyHelper::GetColorSpace_14<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::EPdfColorSpace>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::EPdfColorSpace PoDoFo::PdfColor::GetAlternateColorSpace() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfColorSpace>(
    __zz_cib_MyHelper::GetAlternateColorSpace_15<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::EPdfColorSpace>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfColor::GetGrayScale() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetGrayScale_16<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfColor::GetRed() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetRed_17<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfColor::GetGreen() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetGreen_18<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfColor::GetBlue() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetBlue_19<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfColor::GetCyan() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetCyan_20<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfColor::GetMagenta() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetMagenta_21<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfColor::GetYellow() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetYellow_22<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfColor::GetBlack() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetBlack_23<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const std::string PoDoFo::PdfColor::GetName() const {
  return __zz_cib_::__zz_cib_FromAbiType<const std::string>(
    __zz_cib_MyHelper::GetName_24<__zz_cib_::__zz_cib_AbiType_t<const std::string>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfColor::GetDensity() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetDensity_25<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfColor::GetCieL() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetCieL_26<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfColor::GetCieA() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetCieA_27<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfColor::GetCieB() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetCieB_28<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfColor PoDoFo::PdfColor::ConvertToGrayScale() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfColor>(
    __zz_cib_MyHelper::ConvertToGrayScale_29<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfColor>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfColor PoDoFo::PdfColor::ConvertToRGB() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfColor>(
    __zz_cib_MyHelper::ConvertToRGB_30<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfColor>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfColor PoDoFo::PdfColor::ConvertToCMYK() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfColor>(
    __zz_cib_MyHelper::ConvertToCMYK_31<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfColor>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfArray PoDoFo::PdfColor::ToArray() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfArray>(
    __zz_cib_MyHelper::ToArray_32<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfArray>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfColor PoDoFo::PdfColor::FromString(const char* pszName) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfColor>(
    __zz_cib_MyHelper::FromString_33<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfColor>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszName)>(std::move(pszName))
    )
  );
}

::PoDoFo::PdfColor PoDoFo::PdfColor::FromArray(const ::PoDoFo::PdfArray& rArray) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfColor>(
    __zz_cib_MyHelper::FromArray_34<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfColor>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(rArray)>(rArray)
    )
  );
}

::PoDoFo::EPdfColorSpace PoDoFo::PdfColor::GetColorSpaceForName(const ::PoDoFo::PdfName& rName) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfColorSpace>(
    __zz_cib_MyHelper::GetColorSpaceForName_35<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::EPdfColorSpace>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(rName)>(rName)
    )
  );
}

::PoDoFo::PdfName PoDoFo::PdfColor::GetNameForColorSpace(::PoDoFo::EPdfColorSpace eColorSpace) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfName>(
    __zz_cib_MyHelper::GetNameForColorSpace_36<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfName>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(eColorSpace)>(std::move(eColorSpace))
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfColor::BuildColorSpace(::PoDoFo::PdfVecObjects* pOwner) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::BuildColorSpace_37<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pOwner)>(std::move(pOwner))
    )
  );
}
}
namespace PoDoFo {

PoDoFo::PdfColorGray::PdfColorGray(__zz_cib_AbiType h)
  : ::PoDoFo::PdfColor(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class336(h))
  , __zz_cib_h_(h)
{}

PoDoFo::PdfColorGray::PdfColorGray(PdfColorGray&& rhs)
  : ::PoDoFo::PdfColor(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfColorGray::PdfColorGray(double dGray)
  : PoDoFo::PdfColorGray(__zz_cib_MyHelper::__zz_cib_New_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(dGray)>(std::move(dGray))))
{}

PoDoFo::PdfColorGray::~PdfColorGray() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}
}
namespace PoDoFo {

PoDoFo::PdfColorRGB::PdfColorRGB(__zz_cib_AbiType h)
  : ::PoDoFo::PdfColor(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class336(h))
  , __zz_cib_h_(h)
{}

PoDoFo::PdfColorRGB::PdfColorRGB(PdfColorRGB&& rhs)
  : ::PoDoFo::PdfColor(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfColorRGB::PdfColorRGB(double dRed, double dGreen, double dBlue)
  : PoDoFo::PdfColorRGB(__zz_cib_MyHelper::__zz_cib_New_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(dRed)>(std::move(dRed)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dGreen)>(std::move(dGreen)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dBlue)>(std::move(dBlue))))
{}

PoDoFo::PdfColorRGB::~PdfColorRGB() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}
}
namespace PoDoFo {

PoDoFo::PdfColorCMYK::PdfColorCMYK(__zz_cib_AbiType h)
  : ::PoDoFo::PdfColor(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class336(h))
  , __zz_cib_h_(h)
{}

PoDoFo::PdfColorCMYK::PdfColorCMYK(PdfColorCMYK&& rhs)
  : ::PoDoFo::PdfColor(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfColorCMYK::PdfColorCMYK(double dCyan, double dMagenta, double dYellow, double dBlack)
  : PoDoFo::PdfColorCMYK(__zz_cib_MyHelper::__zz_cib_New_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(dCyan)>(std::move(dCyan)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dMagenta)>(std::move(dMagenta)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dYellow)>(std::move(dYellow)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dBlack)>(std::move(dBlack))))
{}

PoDoFo::PdfColorCMYK::~PdfColorCMYK() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}
}
namespace PoDoFo {

PoDoFo::PdfColorSeparationAll::PdfColorSeparationAll(__zz_cib_AbiType h)
  : ::PoDoFo::PdfColor(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class336(h))
  , __zz_cib_h_(h)
{}

PoDoFo::PdfColorSeparationAll::PdfColorSeparationAll(PdfColorSeparationAll&& rhs)
  : ::PoDoFo::PdfColor(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfColorSeparationAll::PdfColorSeparationAll()
  : PoDoFo::PdfColorSeparationAll(__zz_cib_MyHelper::__zz_cib_New_0())
{}

PoDoFo::PdfColorSeparationAll::~PdfColorSeparationAll() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}
}
namespace PoDoFo {

PoDoFo::PdfColorSeparationNone::PdfColorSeparationNone(__zz_cib_AbiType h)
  : ::PoDoFo::PdfColor(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class336(h))
  , __zz_cib_h_(h)
{}

PoDoFo::PdfColorSeparationNone::PdfColorSeparationNone(PdfColorSeparationNone&& rhs)
  : ::PoDoFo::PdfColor(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfColorSeparationNone::PdfColorSeparationNone()
  : PoDoFo::PdfColorSeparationNone(__zz_cib_MyHelper::__zz_cib_New_0())
{}

PoDoFo::PdfColorSeparationNone::~PdfColorSeparationNone() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}
}
namespace PoDoFo {

PoDoFo::PdfColorSeparation::PdfColorSeparation(__zz_cib_AbiType h)
  : ::PoDoFo::PdfColor(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class336(h))
  , __zz_cib_h_(h)
{}

PoDoFo::PdfColorSeparation::PdfColorSeparation(PdfColorSeparation&& rhs)
  : ::PoDoFo::PdfColor(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfColorSeparation::PdfColorSeparation(const std::string& sName, double dDensity, const ::PoDoFo::PdfColor& alternateColor)
  : PoDoFo::PdfColorSeparation(__zz_cib_MyHelper::__zz_cib_New_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(sName)>(sName),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dDensity)>(std::move(dDensity)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(alternateColor)>(alternateColor)))
{}

PoDoFo::PdfColorSeparation::~PdfColorSeparation() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}
}
namespace PoDoFo {

PoDoFo::PdfColorCieLab::PdfColorCieLab(__zz_cib_AbiType h)
  : ::PoDoFo::PdfColor(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class336(h))
  , __zz_cib_h_(h)
{}

PoDoFo::PdfColorCieLab::PdfColorCieLab(PdfColorCieLab&& rhs)
  : ::PoDoFo::PdfColor(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfColorCieLab::PdfColorCieLab(double dCieL, double dCieA, double dCieB)
  : PoDoFo::PdfColorCieLab(__zz_cib_MyHelper::__zz_cib_New_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(dCieL)>(std::move(dCieL)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dCieA)>(std::move(dCieA)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dCieB)>(std::move(dCieB))))
{}

PoDoFo::PdfColorCieLab::~PdfColorCieLab() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}
}
