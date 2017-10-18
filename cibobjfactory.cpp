#include "cibobjfactory.h"
#include "cibcompound.h"
#include "cibfunction.h"
#include "cibfunction_helper.h"

CppCompound* CibObjFactory::CreateCompound(std::string name, CppObjProtLevel prot, CppCompoundType type) const
{
  return new CibCppCompound(std::move(name), prot, type);
}

CppCompound* CibObjFactory::CreateCompound(CppObjProtLevel prot, CppCompoundType type) const
{
  return new CibCppCompound(prot, type);
}

CppCompound* CibObjFactory::CreateCompound(std::string name, CppCompoundType type) const
{
  return new CibCppCompound(std::move(name), type);
}

CppCompound* CibObjFactory::CreateCompound(CppCompoundType type) const
{
  return new CibCppCompound(type);
}

CppConstructor* CibObjFactory::CreateConstructor(CppObjProtLevel prot, std::string name, CppParamList* params, CppMemInitList* memInitList, unsigned int attr) const
{
  return CibFunctionHelper::CreateConstructor(prot, name, params, memInitList, attr);
}

CppDestructor* CibObjFactory::CreateDestructor(CppObjProtLevel prot, std::string name, unsigned int attr) const
{
  return CibFunctionHelper::CreateDestructor(prot, name, attr);
}

CppFunction* CibObjFactory::CreateFunction(CppObjProtLevel prot, std::string name, CppVarType* retType, CppParamList* params, unsigned int attr) const
{
  return CibFunctionHelper::CreateFunction(prot, std::move(name), retType, params, attr);
}
