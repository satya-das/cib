#include "cibfunction.h"
#include "cibcompound.h"
#include "cibfunction_helper.h"
#include "cibutil.h"
#include "cibobjfactory.h"
#include "cppprogex.h"
#include "cppparser.h"

///////////////////////////////////////////////////////////////////////////////////////////////////

CppProgramEx::CppProgramEx(const char* inputPath)
  : cibCppObjTreeCreated_(false)
{
  CibObjFactory objFactory;
  program_.reset(CppParser(&objFactory).loadProgram(inputPath));
  buildCibCppObjTree();
}

CppObj* CppProgramEx::getCppObjFromTypeName(const std::string& name, const CppCompound* begScope) const
{
  return getCppObjFromTypeName(name, program_->typeTreeNodeFromCppObj(begScope));
}

void CppProgramEx::buildCibCppObjTree()
{
  for (auto fileDom : program_->getFileDOMs())
    resolveInheritance(static_cast<CibCppCompound*>(fileDom));
  for (auto fileDom : program_->getFileDOMs())
    markClassType(static_cast<CibCppCompound*>(fileDom));
  // detecting facades need detection of interfaces.
  // so just call markClassType() again for all classes to correctly detect all facades.
  for (auto fileDom : program_->getFileDOMs())
    markClassType(static_cast<CibCppCompound*>(fileDom));
  for (auto fileDom : program_->getFileDOMs())
    markNeedsUnknownProxyDefinition(static_cast<CibCppCompound*>(fileDom));
  for (auto fileDom : program_->getFileDOMs())
    static_cast<CibCppCompound*>(fileDom)->identifyMethodsToBridge();
}

CppObj* CppProgramEx::getCppObjFromTypeName(const std::string& name, const CppTypeTreeNode* typeNode) const
{
  size_t nameBegPos = 0;
  size_t nameEndPos = name.find("::", nameBegPos);
  if (nameEndPos == std::string::npos)
  {
    typeNode = program_->findTypeNode(name, typeNode);
  }
  else
  {
    std::string nameToLookFor = name.substr(nameBegPos, nameEndPos-nameBegPos);
    typeNode = program_->findTypeNode(nameToLookFor, typeNode);
    if (!typeNode)
      return nullptr;
    do
    {
      nameBegPos = nameEndPos + 2;
      nameEndPos = name.find("::", nameBegPos);
      if (nameEndPos == std::string::npos)
        nameEndPos = name.length();
      auto nameToLookFor = name.substr(nameBegPos, nameEndPos-nameBegPos);
      auto itr = typeNode->children.find(nameToLookFor);
      if (itr == typeNode->children.end())
        return nullptr;
      typeNode = &itr->second;
    }
    while (nameEndPos > name.length());
  }
  return typeNode && !typeNode->cppObjSet.empty() ? *(typeNode->cppObjSet.begin()) : nullptr;
}

void CppProgramEx::resolveInheritance(CibCppCompound* cppCompound)
{
  const CppTypeTreeNode& ownerTypeNode = *program_->typeTreeNodeFromCppObj(cppCompound->owner_);
  if (cppCompound->inheritList_)
  {
    for (CppInheritanceList::const_iterator itrInh = cppCompound->inheritList_->begin(); itrInh != cppCompound->inheritList_->end(); ++itrInh)
    {
      CibCppCompound* parentObj = (CibCppCompound*) getCppObjFromTypeName(itrInh->baseName, &ownerTypeNode);
      // assert(parentObj != NULL); // we should actually give warning here.
      if (parentObj == NULL)
        continue;
      CppObjProtLevel inhType = resolveInheritanceType(itrInh->inhType, cppCompound->compoundType_);
      cppCompound->parents_[inhType].push_back(parentObj);
      parentObj->children_[inhType].push_back(cppCompound);
    }
  }
  for (CppObjArray::const_iterator itr = cppCompound->members_.begin(); itr != cppCompound->members_.end(); ++itr)
  {
    CppObj* mem = *itr;
    if (mem->objType_ == CppObj::kCompound)
      resolveInheritance((CibCppCompound*) mem);
  }
}

void CppProgramEx::evaluateArgs(const CibFunctionHelper& func)
{
  // Evaluate the arguments to detect properties of class.
  if (func.hasParams())
  {
    for (auto& param : *(func.getParams()))
    {
      if (param.cppObj->objType_ != CppObj::kVar)
        continue; //TODO: FIXME param can be function pointer too.
      auto* cppObj = getCppObjFromTypeName(param.varObj->baseType(), func.getOwner());
      auto* paramObj = cppObj && cppObj->isClassLike() ? static_cast<CibCppCompound*>(cppObj) : nullptr;
      if (!paramObj)
        continue;
      paramObj->setShared();
      auto effectivePtrLevel = param.varObj->ptrLevel();
      if (param.varObj->refType() == kByRef)
        ++effectivePtrLevel;
      if (effectivePtrLevel)
      {
        if (paramObj && paramObj->hasVirtualMethod())
        {
          paramObj->setInterfaceLike();
          if ((effectivePtrLevel >= 2 || (func.getOwner()->isInterfaceLike() && func.isVirtual())) && paramObj->hasPubliclyDerived())
            paramObj->setFacadeLike();
        }
      }
    }
  }
}
void CppProgramEx::evaluateReturnType(const CibFunctionHelper& func)
{
  // Evaluate to detect if the return type is a facade-like class.
  if (func.retType())
  {
    if (func.retType()->ptrLevel() == 1 || func.retType()->refType() == kByRef)
    {
      auto returnObj = static_cast<CibCppCompound*>(getCppObjFromTypeName(func.retType()->baseType(), func.getOwner()));
      if (returnObj && returnObj->hasVirtualMethod() && returnObj->hasPubliclyDerived())
      {
        returnObj->setFacadeLike();
      }
    }
  }
}

void CppProgramEx::markClassType(CibCppCompound* cppCompound)
{
  auto isInline = true;
  for (auto mem : cppCompound->members_)
  {
    if (mem->objType_ == CppObj::kCompound)
    {
      markClassType(static_cast<CibCppCompound*>(mem));
    }
    else if(mem->isFunctionLike())
    {
      CibFunctionHelper func(mem);
      if (!func.hasDefinition() || func.isVirtual())
        isInline = false;
      if (func.isMethod())
      {
        evaluateArgs(mem);
        evaluateReturnType(mem);
      }
    }
  }
  isInline = isInline || (cppCompound->templSpec_ != nullptr);
  if (isInline && cppCompound->isClassLike())
    cppCompound->setIsInline();
}

void CppProgramEx::setNeedsUnknownProxyDefinition(CibCppCompound* cppCompound)
{
  cppCompound->setNeedsUnknownProxyDefinition();
  for (auto child : cppCompound->children_[kPublic])
  {
    setNeedsUnknownProxyDefinition(child);
  }
}

void CppProgramEx::markNeedsUnknownProxyDefinition(CibCppCompound* cppCompound)
{
  for (auto mem : cppCompound->members_)
  {
    if (mem->objType_ == CppObj::kCompound)
    {
      auto compound = static_cast<CibCppCompound*>(mem);
      markNeedsUnknownProxyDefinition(compound);
      if (compound->isInterfaceLike())
      {
        setNeedsUnknownProxyDefinition(compound);
      }
    }
  }
}
