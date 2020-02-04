/* accessType( compoundType() compoundType()
   The MIT License (MIT)

   Copyright (c) 2018 Satya Das

   Permission is hereby granted, free of charge, to any person obtaining a copy of
   this software and associated documentation files (the "Software"), to deal in
   the Software without restriction, including without limitation the rights to
   use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
   the Software, and to permit persons to whom the Software is furnished to do so,
   subject to the following conditions:

   The above copyright notice and this permission notice shall be included in all
   copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
   FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
   COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
   IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
   CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include "cibhelper.h"
#include "cibcompound.h"
#include "cibfunction_helper.h"
#include "cibidmgr.h"
#include "cibobjfactory.h"
#include "cibutil.h"
#include "cppparser.h"
#include "cppparseroptions.h"

///////////////////////////////////////////////////////////////////////////////////////////////////

CibHelper::CibHelper(const CibParams& cibParams, const CppParserOptions& parserOptions, CibIdMgr& cibIdMgr)
  : cibCppObjTreeCreated_(false)
  , cibParams_(cibParams)
  , cibIdMgr_(cibIdMgr)
  , smartPtrNames_({"sk_sp", "std::unique_ptr"})
{
  CppParser parser(std::make_unique<CibObjFactory>());
  parser.parseEnumBodyAsBlob();
  parser.addKnownMacros(parserOptions.knownMacros);
  parser.addKnownApiDecors(parserOptions.knownApiDecor);
  parser.addIgnorableMacros(parserOptions.ignorableMacros);
  program_.reset(new CppProgram(cibParams.inputPath.string(), std::move(parser)));
  buildCibCppObjTree();
}

void CibHelper::onNewCompound(CibCompound* compound, const CibCompound* parent) const
{
  program_->addCompound(compound, parent);
  auto* pThis = const_cast<CibHelper*>(this); // TODO: Fix const_cast.
  pThis->markClassType(compound);
  pThis->identifyAbstract(compound);
  pThis->identifyPobableFacades(compound);
  pThis->markNeedsGenericProxyDefinition(compound);
}

CppObj* CibHelper::resolveVarType(CppVarType* varType, const CppTypeTreeNode* typeNode)
{
  auto* cppObj = resolveTypename(baseType(varType), typeNode);
  if (cppObj == nullptr)
    return nullptr;
  if (cppObj->objType_ == CppObjType::kTypedefName)
  {
    // TODO: We need to resolve typedefs fully only if it resolves to conpound object uniquely.
    // For cases when typedef uses non-compound types we need to know ptr and ref only.
    auto* typedefObj       = static_cast<CppTypedefName*>(cppObj);
    auto* finalResolvedObj = resolveTypename(baseType(typedefObj->var_), typeNode);
    if (finalResolvedObj && isClassLike(finalResolvedObj))
    {
      varType->typeModifier().ptrLevel_ += ptrLevel(typedefObj->var_);
      if (refType(typedefObj->var_) != CppRefType::kNoRef)
        varType->typeModifier().refType_ = refType(typedefObj->var_);
      varType->baseType(baseType(typedefObj->var_));
      return finalResolvedObj;
    }
  }

  return cppObj;
}

CppObj* CibHelper::resolveTypename(const std::string& name, const CppCompound* begScope) const
{
  return resolveTypename(name, program_->typeTreeNodeFromCppObj(begScope));
}

CppObj* CibHelper::resolveVarType(CppVarType* varType, const CppCompound* begScope)
{
  return resolveVarType(varType, program_->typeTreeNodeFromCppObj(begScope));
}

void CibHelper::buildCibCppObjTree()
{
  for (auto& fileAst : program_->getFileAsts())
    resolveInheritance(static_cast<CibCompound*>(fileAst.get()));
  for (auto& fileAst : program_->getFileAsts())
    markClassType(static_cast<CibCompound*>(fileAst.get()));
  // In some cases detecting facades need detection of interfaces.
  // so just call markClassType() again for all classes to correctly detect all facades.
  for (auto& fileAst : program_->getFileAsts())
    markClassType(static_cast<CibCompound*>(fileAst.get()));
  for (auto& fileAst : program_->getFileAsts())
    identifyAbstract(static_cast<CibCompound*>(fileAst.get()));
  for (auto& fileAst : program_->getFileAsts())
    identifyPobableFacades(static_cast<CibCompound*>(fileAst.get()));
  for (auto& fileAst : program_->getFileAsts())
    markNeedsGenericProxyDefinition(static_cast<CibCompound*>(fileAst.get()));
  for (auto& fileAst : program_->getFileAsts())
    static_cast<CibCompound*>(fileAst.get())->identifyMethodsToBridge(*this);
  markNoProxyClasses();
}

void CibHelper::markNoProxyClasses()
{
  for (auto& noProxyClassName : cibParams_.noProxyClasses)
  {
    CibCompoundEPtr noProxyClass = getCppObjFromTypeName(noProxyClassName);

    if (noProxyClass)
      noProxyClass->setNeedNoProxy();
  }
}

CppObj* CibHelper::resolveTypeAlias(CppObj* typeAliasObj) const
{
    const auto getName = [](const CppObj* typeAliasObj) -> std::string {
      if (typeAliasObj->objType_ == CppObjType::kTypedefName)
      {
        const auto* typedefObj = static_cast<const CppTypedefName*>(typeAliasObj);
        return baseType(typedefObj->var_);
      }
      else if (typeAliasObj->objType_ == CppObjType::kUsingDecl)
      {
        const auto* usingDecl = static_cast<const CppUsingDecl*>(typeAliasObj);
        if (usingDecl->cppObj_->objType_ == CppVarType::kObjectType)
        {
          const auto* varType = static_cast<const CppVarType*>(usingDecl->cppObj_.get());
          return baseType(varType);
        }
      }

      return std::string();
    };

  auto* cppObj = typeAliasObj;
  for (; isTypedefLike(cppObj); )
  {
    const auto name = getName(cppObj);
    if (name.empty())
      return cppObj;
    auto* nextResolvedObj = resolveTypename(name, cppObj->owner());
    if (nextResolvedObj)
      cppObj = nextResolvedObj;
    else
      return cppObj;
  }

  return cppObj;
}

CppObj* CibHelper::resolveTypename(const std::string& name, const CppTypeTreeNode* startNode) const
{
  auto templateArgStart = name.find('<');
  auto typeNode         = [&]() -> const CppTypeTreeNode* {
    if (templateArgStart == name.npos)
    {
      return program_->findTypeNode(name, startNode);
    }
    else
    {
      auto classNameEnd = templateArgStart;
      while (isspace(name[--classNameEnd]))
        ;
      ++classNameEnd;
      auto templateClassName = name.substr(0, classNameEnd);
      if (isSmartPtr(templateClassName))
        return nullptr;
      return program_->findTypeNode(templateClassName, startNode);
    }
  }();

  // TODO: Fix const_cast.
  auto* cppObj =
    typeNode && !typeNode->cppObjSet.empty() ? const_cast<CppObj*>(*(typeNode->cppObjSet.begin())) : nullptr;
  if (cppObj)
  {
    if (isTypedefLike(cppObj))
    {
      auto* resolvedTypeAlias = resolveTypeAlias(cppObj);
      if (resolvedTypeAlias)
        cppObj = resolvedTypeAlias;
    }
    if (isClassLike(cppObj))
    {
      if (templateArgStart != name.npos)
      {
        auto* compound           = static_cast<CibCompound*>(cppObj);
        auto* instantiationScope = static_cast<const CibCompound*>(*(startNode->cppObjSet.begin()));
        return compound->getTemplateInstantiation(name, instantiationScope, *this);
      }
    }
  }

  return cppObj;
}

void CibHelper::resolveInheritance(CibCompound* cppCompound)
{
  const CppTypeTreeNode& ownerTypeNode = *program_->typeTreeNodeFromCppObj(cppCompound);
  if (cppCompound->inheritanceList())
  {
    for (const auto& inh : *(cppCompound->inheritanceList()))
    {
      auto* cppObj    = resolveTypename(inh.baseName, &ownerTypeNode);
      auto* parentObj = cppObj && isClassLike(cppObj) ? static_cast<CibCompound*>(cppObj) : nullptr;
      // assert(parentObj != nullptr); // we should actually give warning
      // here.
      if (parentObj == nullptr)
        continue;
      CppAccessType inhType = resolveInheritanceType(inh.inhType, cppCompound->compoundType());
      cppCompound->parents_[inhType].push_back(parentObj);
      parentObj->children_[inhType].push_back(cppCompound);
    }
  }
  for (const auto& mem : cppCompound->members())
  {
    CibCompoundEPtr nested = mem;
    if (nested)
      resolveInheritance(nested);
  }
}

void CibHelper::evaluateArgs(const CibFunctionHelper& func)
{
  if (func.isTemplated())
    return;
  // Evaluate the arguments to detect properties of class.
  if (func.hasParams())
  {
    for (auto& param : *(func.getParams()))
    {
      CppVarEPtr var = param;
      if (!var)
        continue; // TODO: FIXME param can be function pointer too.
      auto* cppObj   = resolveVarType(var->varType(), func.getOwner());
      auto* paramObj = cppObj && isClassLike(cppObj) ? static_cast<CibCompound*>(cppObj) : nullptr;
      if (!paramObj)
        continue;
      paramObj->setShared();
      auto effectivePtrLevel = ptrLevel(var);
      if (refType(var) == CppRefType::kByRef)
        ++effectivePtrLevel;
      if (effectivePtrLevel)
      {
        if (paramObj && paramObj->hasPublicVirtualMethod())
        {
          paramObj->setInterfaceLike();
          if ((effectivePtrLevel >= 2 || (func.getOwner()->isInterfaceLike() && func.isVirtual())))
            paramObj->setFacadeLike();
        }
      }
    }
  }
}
void CibHelper::evaluateReturnType(const CibFunctionHelper& func)
{
  if (func.isTemplated())
    return;
  if (func.returnType())
  {
    auto* cppObj    = resolveVarType(func.returnType(), func.getOwner());
    auto* returnObj = cppObj && isClassLike(cppObj) ? static_cast<CibCompound*>(cppObj) : nullptr;
    if (!returnObj)
      return;
    returnObj->setShared();

    if ((ptrLevel(func.returnType()) == 1) || (refType(func.returnType()) == CppRefType::kByRef))
    {
      if (returnObj->hasPublicVirtualMethod())
      {
        returnObj->setFacadeLike();
        if (func.getOwner()->isInterfaceLike()
            || func.isPureVirtual() // TODO: It's a hack to just make AcGiSubEntityTraits get detected as interface
        )
          returnObj->setInterfaceLike();
      }
    }
  }
}

void CibHelper::markClassType(CibCompound* cppCompound)
{
  if (cppCompound->isTemplated())
  {
    cppCompound->setIsInline();
    return;
  }
  auto isInline    = true;
  auto isEmpty     = true;
  auto isPodStruct = (isStruct(cppCompound) || isUnion(cppCompound));
  for (auto& mem : cppCompound->members())
  {
    if (isPodStruct && !isPublic(mem))
      isPodStruct = false;
    if (CibCompoundEPtr nested = mem)
    {
      markClassType(nested);
      if (isPodStruct)
        isPodStruct = nested->isPodStruct();
    }
    else if (CibFunctionHelper func = mem)
    {
      isPodStruct = false;
      if (func.isVirtual())
      {
        cppCompound->setInterfaceLike();
        isInline = false;
      }
      else if (!func.hasDefinition())
      {
        isInline = false;
      }
      evaluateArgs(mem);
      evaluateReturnType(mem);
      if (!(func.getAttr() & kStatic))
        isEmpty = false;
    }
    else if (CppVarEPtr var = mem)
    {
      if (!(var->varType()->typeAttr() & kStatic))
        isEmpty = false;
      if (isPodStruct)
      {
        auto* cppObj = resolveVarType(var->varType(), cppCompound);
        if (cppObj && isClassLike(cppObj))
          isPodStruct = false;
      }
      if (isByRValueRef(var))
      {
        cppCompound->setCantHaveDefaultCtor();
        cppCompound->setCantHaveDefaultCopyCtor();
      }
    }
  }
  isInline = isInline || (cppCompound->templateParamList() != nullptr);
  if (isInline && isClassLike(cppCompound))
    cppCompound->setIsInline();
  if (isEmpty && isClassLike(cppCompound))
    cppCompound->setEmpty();
  if (isPodStruct && cppCompound->templateParamList() == nullptr)
    cppCompound->setPodStruct();
}

void CibHelper::setNeedsGenericProxyDefinition(CibCompound* cppCompound)
{
  // TODO: Considers private ctors too.
  // Also for protected ctor/dtor things will be slightly less trivial.
  if (cppCompound->isOverridable())
    cppCompound->setNeedsGenericProxyDefinition();
}

void CibHelper::markNeedsGenericProxyDefinition(CibCompound* cppCompound)
{
  for (auto& mem : cppCompound->members())
  {
    if (CibCompoundEPtr compound = mem)
    {
      markNeedsGenericProxyDefinition(compound);
      if (compound->isInterfaceLike())
      {
        setNeedsGenericProxyDefinition(compound);
      }
    }
  }
}

void CibHelper::identifyAbstract(CibCompound* cppCompound)
{
  if (cppCompound->isTemplateInstance())
  {
    auto* templClass = cppCompound->templateClass();
    if (templClass->numTemplateInstances() == 1)
      templClass->identifyAbstract(*this);
    if (templClass->isAbstract())
      cppCompound->setAbstract();

    return;
  }

  for (auto& mem : cppCompound->members())
  {
    if (CibCompoundEPtr compound = mem)
    {
      identifyAbstract(compound);
      compound->identifyAbstract(*this);
    }
  }
}

void CibHelper::identifyPobableFacades(CibCompound* cppCompound)
{
  for (auto& mem : cppCompound->members())
  {
    if (CibCompoundEPtr compound = mem)
    {
      identifyPobableFacades(compound);
      if (!compound->isFacadeLike() && compound->isAbstract())
      {
        compound->forEachAncestor([compound](const CibCompound* ancestor) {
          if (ancestor->isFacadeLike())
            compound->setFacadeLike();
          return ancestor->isFacadeLike();
        });
      }
    }
  }
}
