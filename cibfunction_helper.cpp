#include "cibfunction_helper.h"
#include "cibfunction.h"
#include "cibcompound.h"
#include "cppprogex.h"
#include "cppwriter.h"

#include "cibcompound.h"
#include "cppdom.h"

#include <strstream>

//////////////////////////////////////////////////////////////////////////

CibFunctionHelper::CibFunctionHelper(const CppObj* cppObj)
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

std::string CibFunctionHelper::signature() const
{
  std::ostrstream tmpbuf;
  CppWriter cppWriter;
  switch (cppObj_->objType_)
  {
  case CppObj::kConstructor:
    cppWriter.emitConstructor(ctor_, tmpbuf, true);
    break;
  case CppObj::kFunction:
    cppWriter.emitFunction(func_, tmpbuf, true);
    break;
  case CppObj::kDestructor:
    tmpbuf << dtor_->name_ << "();";
  }

  auto itemUniqStr = std::string(tmpbuf.str(), tmpbuf.str() + tmpbuf.pcount() - 1);
  return itemUniqStr;
}

std::string CibFunctionHelper::cibId(const CibParams& cibParams) const
{
  std::string cId = "::_cib_::" + cibParams.moduleName + "Lib";
  if (getOwner())
    cId += getOwner()->wrappingNses(cibParams) + "::" + getOwner()->name();
  cId += "::kCIBID_" + capiName(cibParams);
  return cId;
}
