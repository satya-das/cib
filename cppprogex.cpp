#include "cppprogex.h"
#include "cibcompound.h"
#include "cibfunction.h"
#include "cibfunction_helper.h"
#include "cibobjfactory.h"
#include "cibutil.h"
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
  for (auto fileDom : program_->getFileDOMs())
    markNeedsUnknownProxyDefinition(static_cast<CibCppCompound*>(fileDom));
  for (auto fileDom : program_->getFileDOMs())
    static_cast<CibCppCompound*>(fileDom)->identifyMethodsToBridge();
}

CppObj* CppProgramEx::getCppObjFromTypeName(const std::string& name, const CppTypeTreeNode* typeNode) const
{
  typeNode = program_->findTypeNode(name, typeNode);
  return typeNode && !typeNode->cppObjSet.empty() ? *(typeNode->cppObjSet.begin()) : nullptr;
}

void CppProgramEx::resolveInheritance(CibCppCompound* cppCompound)
{
  const CppTypeTreeNode& ownerTypeNode = *program_->typeTreeNodeFromCppObj(cppCompound->owner_);
  if (cppCompound->inheritList_)
  {
    for (const auto& inh : *(cppCompound->inheritList_))
    {
      auto parentObj = (CibCppCompound*) getCppObjFromTypeName(inh.baseName, &ownerTypeNode);
      // assert(parentObj != NULL); // we should actually give warning
      // here.
      if (parentObj == NULL)
        continue;
      CppObjProtLevel inhType = resolveInheritanceType(inh.inhType, cppCompound->compoundType_);
      cppCompound->parents_[inhType].push_back(parentObj);
      parentObj->children_[inhType].push_back(cppCompound);
    }
  }
  for (const auto mem : cppCompound->members_)
  {
    if (mem->objType_ == CppObj::kCompound)
      resolveInheritance((CibCppCompound*) mem);
  }
}

void CppProgramEx::evaluateArgs(const CibFunctionHelper& func)
{
  // Evaluate the arguments to detect if any of them uses a class that is
  // interface-like.
  if (func.hasParams())
  {
    for (auto param : *(func.getParams()))
    {
      if (param.cppObj->objType_ != CppObj::kVar)
        continue; // TODO: FIXME param can be function pointer too.
      auto effectivePtrLevel = param.varObj->ptrLevel();
      if (param.varObj->refType() == kByRef)
        ++effectivePtrLevel;
      if (effectivePtrLevel)
      {
        auto paramObj = static_cast<CibCppCompound*>(getCppObjFromTypeName(param.varObj->baseType(), func.getOwner()));
        if (paramObj && paramObj->hasVirtualMethod())
        {
          paramObj->setInterfaceLike();
          if (effectivePtrLevel == 2 && paramObj->hasPubliclyDerived())
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
    else if (mem->isFunctionLike())
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
