#include "cibfunction.h"
#include "cibcompound.h"
#include "cppprogex.h"

#include "cppdom.h"

//////////////////////////////////////////////////////////////////////////

CibCppFunction::CibCppFunction(CppFunction* cppFunc, CibCppCompound* owner)
  : func_(cppFunc)
  , owner_(owner)
  , attr_(cppFunc->attr_)
  , params_(cppFunc->params_)
{
  assert(func_ != NULL);
}

CibCppFunction::CibCppFunction(CppConstructor* ctor, CibCppCompound* owner)
  : ctor_(ctor)
  , owner_(owner)
  , attr_(ctor->attr_)
  , params_(ctor->args_)
{
  assert(ctor != NULL);
  this->addAttrib(kConstructor);
  if (params_ && params_->size() == 1 && params_->front().cppObj->objType_ == CppObj::kVar)
  {
    // Check if it is copy-constructor
    const CppVar* argVar = params_->front().varObj;
    if (argVar->baseType_ == ctor->name_ && argVar->typeAttr_&(kConst | kByRef))
      this->addAttrib(kCopyConstructor);
  }
}

CibCppFunction::CibCppFunction(CppDestructor* dtor, CibCppCompound* owner)
  : dtor_(dtor)
  , owner_(owner)
  , attr_(dtor->attr_)
  , params_(NULL)
{
  assert(dtor != NULL);
  assert(dtor->name_.substr(1) == owner->name());
  this->addAttrib(kDestructor);
}

bool CibCppFunction::isMethod() const
{
  return owner_ && !(isConstructor() || isDestructor()) && owner_->cppCompoundObj_->isClass();
}

/// @return CibId of this compound object
std::string CibCppFunction::cibId(const CibParams& cibParams) const
{
  std::string cId = "::_cib_::" + cibParams.moduleName + "Lib";
  if (owner_)
    cId += owner_->wrappingNses() + "::" + owner_->name();
  cId += "::kCIBID_" + capiName(cibParams);
  return cId;
}
