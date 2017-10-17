#include "cibfunction_helper.h"
#include "cibfunction.h"
#include "cibcompound.h"
#include "cppprogex.h"

#include "cibcompound.h"
#include "cppdom.h"

//////////////////////////////////////////////////////////////////////////

CibFunctionHelper::CibFunctionHelper(CppObj* cppObj)
  : cppObj_(cppObj->isFunctionLike() ? cppObj : nullptr)
{
}

CibCppCompound* CibFunctionHelper::getOwner() const
{
  return static_cast<CibCppCompound*>(func_->owner_);
}

/// @return CibId of this compound object
std::string CibFunctionHelper::cibId(const CibParams& cibParams) const
{
  std::string cId = "::_cib_::" + cibParams.moduleName + "Lib";
  if (getOwner())
    cId += getOwner()->wrappingNses() + "::" + getOwner()->name();
  cId += "::kCIBID_" + capiName(cibParams);
  return cId;
}
