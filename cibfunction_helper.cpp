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

CppConstructor* CibFunctionHelper::CreateConstructor(CppObjProtLevel prot, std::string name, CppParamList* params, CppMemInitList* memInitList, unsigned int attr)
{
  return new CibCppConstructor(prot, name, params, memInitList, attr);
}

CppDestructor* CibFunctionHelper::CreateDestructor(CppObjProtLevel prot, std::string name, unsigned int attr)
{
  return new CibCppDestructor(prot, name, attr);
}

CppFunction* CibFunctionHelper::CreateFunction(CppObjProtLevel prot, std::string name, CppVarType* retType, CppParamList* params, unsigned int attr)
{
  return new CibCppFunction(prot, std::move(name), retType, params, attr);
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
