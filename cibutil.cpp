#include "cibutil.h"
#include "cibcompound.h"
#include "cppprogex.h"

#include "cppdom.h"

const CibCppCompound* TypeResolver::operator()(const std::string& typeName) const
{
  if (!owner_ || !cppProgram_)
    return nullptr;
  auto* resolvedCppObj = owner_->resolveTypeName(typeName, *cppProgram_);
  return resolvedCppObj && resolvedCppObj->isClassLike() ? static_cast<const CibCppCompound*>(resolvedCppObj) : nullptr;
}

std::string VarTypeResolver::operator()(const std::string& typeName) const
{
  auto resolvedType = TypeResolver::operator()(typeName);
  if (!resolvedType)
    return typeName;
  return isHandle_ ? "__zz_cib::HANDLE" : "::" + resolvedType->fullName();
}
