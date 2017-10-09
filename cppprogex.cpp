#include "cibfunction.h"
#include "cibcompound.h"
#include "cibutil.h"

#include "cppprogex.h"
#include "cppparser.h"

///////////////////////////////////////////////////////////////////////////////////////////////////

CibCppFunction* CppProgramEx::CppFunctionObjToCibCppFunction(CppFunction* cppFunc, CibCppCompound* owner)
{
  CibCppFunction* func = new CibCppFunction(cppFunc, owner);
  cppObjToCibCppObjMap_[cppFunc] = func;
  return func;
}

CibCppFunction* CppProgramEx::CppConstructorObjToCibCppFunction(CppConstructor* ctor, CibCppCompound* owner)
{
  CibCppFunction* func = new CibCppFunction(ctor, owner);
  cppObjToCibCppObjMap_[ctor] = func;
  return func;
}

CibCppFunction* CppProgramEx::CppDestructorObjToCibCppFunction(CppDestructor* dtor, CibCppCompound* owner)
{
  CibCppFunction* func = new CibCppFunction(dtor, owner);
  cppObjToCibCppObjMap_[dtor] = func;
  return func;
}

const CibCppObj* CppProgramEx::CibCppObjFromCppObj(const CppObj* cppObj) const
{
  CppObjToCibCppObjMap::const_iterator itr = cppObjToCibCppObjMap_.find(cppObj);
  if (itr != cppObjToCibCppObjMap_.end())
    return itr->second;
  return NULL;
}

const CibCppObj* CppProgramEx::getCibCppObjFromTypeName(const std::string& name, const CppCompound* begScope) const
{
  return getCibCppObjFromTypeName(name, cppObjToTypeNode_[begScope]);
}

void CppProgramEx::buildCibCppObjTree()
{
  for (CppCompoundArray::const_iterator domItr = fileDoms_.begin(); domItr != fileDoms_.end(); ++domItr)
    CppCompoundObjToCibCppCompound(*domItr, NULL);
  for (CppCompoundArray::const_iterator domItr = fileDoms_.begin(); domItr != fileDoms_.end(); ++domItr)
    resolveInheritance(*domItr);
  for (auto fileDom : fileDoms_)
    markInterfaceAndFacade(fileDom);
}

CibCppCompound* CppProgramEx::CppCompoundObjToCibCppCompound(CppCompound* cppCompound, CibCppCompound* owner)
{
  assert(cppObjToCibCppObjMap_.find(cppCompound) == cppObjToCibCppObjMap_.end()); // It must not be already present in repo.
  CibCppCompound* apiCompound = new CibCppCompound(cppCompound, owner);
  cppObjToCibCppObjMap_[cppCompound] = apiCompound;

  for (CppObjArray::const_iterator itr = cppCompound->members_.begin(); itr != cppCompound->members_.end(); ++itr)
  {
    CppObj* mem = *itr;
    switch (mem->objType_)
    {
    case CppObj::kCompound:
    {
      CppCompoundObjToCibCppCompound((CppCompound*) mem, apiCompound);
      break;
    }
    case CppObj::kFunction:
    {
      CibCppFunction* func = CppFunctionObjToCibCppFunction((CppFunction*) mem, apiCompound);
      evaluateArgs(func);
      break;
    }
    case CppObj::kConstructor:
    {
      CppConstructorObjToCibCppFunction((CppConstructor*) mem, apiCompound);
      break;
    }
    case CppObj::kDestructor:
    {
      CppDestructorObjToCibCppFunction((CppDestructor*) mem, apiCompound);
      break;
    }
    }
  }

  return apiCompound;
}

const CibCppObj* CppProgramEx::getCibCppObjFromTypeName(const std::string& name, const CppTypeTreeNode* typeNode) const
{
  size_t nameBegPos = 0;
  size_t nameEndPos = name.find("::", nameBegPos);
  if (nameEndPos == std::string::npos)
  {
    typeNode = findTypeNode(name, typeNode);
  }
  else
  {
    std::string nameToLookFor = name.substr(nameBegPos, nameEndPos-nameBegPos);
    typeNode = findTypeNode(name.substr(nameBegPos, nameEndPos-nameBegPos), typeNode);
    if (!typeNode)
      return NULL;
    do
    {
      nameBegPos = nameEndPos + 2;
      nameEndPos = name.find("::", nameBegPos);
      if (nameEndPos == std::string::npos)
        nameEndPos = name.length();
      std::string nameToLookFor = name.substr(nameBegPos, nameEndPos-nameBegPos);
      CppTypeTree::const_iterator itr           = typeNode->children.find(nameToLookFor);
      if (itr == typeNode->children.end())
        return NULL;
      typeNode = &itr->second;
    }
    while (nameEndPos >= name.length());
  }
  return typeNode ? CibCppObjFromCppObj(*(typeNode->cppObjSet.begin())) : NULL;
}

void CppProgramEx::resolveInheritance(CppCompound* cppCompound)
{
  const CppTypeTreeNode& ownerTypeNode = *cppObjToTypeNode_[cppCompound->owner_];
  if (cppCompound->inheritList_)
  {
    for (CppInheritanceList::const_iterator itrInh = cppCompound->inheritList_->begin(); itrInh != cppCompound->inheritList_->end(); ++itrInh)
    {
      CibCppCompound* parentObj = (CibCppCompound*) getCibCppObjFromTypeName(itrInh->baseName, &ownerTypeNode);
      // assert(parentObj != NULL); // we should actually give warning here.
      if (parentObj == NULL)
        continue;
      CibCppCompound* apiCompound = (CibCppCompound*) cppObjToCibCppObjMap_[cppCompound];
      CppObjProtLevel inhType     = itrInh->inhType == kUnknownProt ? defaultInheritanceType(cppCompound->compoundType_) : itrInh->inhType;
      apiCompound->parents_[inhType].push_back(parentObj);
      parentObj->children_[inhType].push_back(apiCompound);
    }
  }
  for (CppObjArray::const_iterator itr = cppCompound->members_.begin(); itr != cppCompound->members_.end(); ++itr)
  {
    CppObj* mem = *itr;
    if (mem->objType_ == CppObj::kCompound)
      resolveInheritance((CppCompound*) mem);
  }
}

void CppProgramEx::evaluateArgs(CibCppFunction* func)
{
  // Evaluate the arguments to detect if any of them uses a class that is interface-like.
  if (func->hasParams())
  {
    for (auto param : *(func->getParams()))
    {
      if (param.cppObj->objType_ != CppObj::kVar)
        continue;
      if (param.varObj->ptrLevel_ == 1 || param.varObj->refType_ == kByRef)
      {
        auto paramObj = (CibCppCompound*)getCibCppObjFromTypeName(param.varObj->baseType_, func->getOwner()->getCppCompound());
        if (paramObj && paramObj->getCppCompound()->hasVirtualMethod())
        {
          paramObj->setInterfaceLike();
        }
      }
    }
  }
}
void CppProgramEx::evaluateReturnType(CibCppFunction* func)
{
  // Evaluate to detect if the return type is a facade-like class.
  CppFunction* cppFunc = func->getCppFunction();
  assert(cppFunc);
  if (cppFunc && cppFunc->retType_)
  {
    if (cppFunc->retType_->ptrLevel_ == 1 || cppFunc->retType_->refType_ == kByRef)
    {
      auto returnObj = (CibCppCompound*)getCibCppObjFromTypeName(cppFunc->retType_->baseType_, func->getOwner()->getCppCompound());
      if (returnObj && returnObj->getCppCompound()->hasVirtualMethod())
      {
        returnObj->setFacadeLike();
      }
    }
  }
}

void CppProgramEx::markInterfaceAndFacade(CppCompound* cppCompound)
{
  for (auto mem : cppCompound->members_)
  {
    if (mem->objType_ == CppObj::kCompound)
    {
      markInterfaceAndFacade((CppCompound*) mem);
    }
    else if(mem->objType_ == CppObj::kFunction)
    {
      evaluateArgs((CibCppFunction*)CibCppObjFromCppObj(mem));
      evaluateReturnType((CibCppFunction*)CibCppObjFromCppObj(mem));
    }
  }
}
