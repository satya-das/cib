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

namespace {

std::vector<std::string> collectAllInterfaceFiles(const CibParams& cibParams)
{
  auto interfaceFiles = collectFiles(cibParams.inputPath.string(), selectHeadersOnly);
  collectFiles(interfaceFiles, cibParams.stlInterfacePath, selectAllFiles);
  collectFiles(interfaceFiles, cibParams.stlHelpersPath, selectAllFiles);

  return interfaceFiles;
}

} // namespace

CibHelper::CibHelper(const CibParams& cibParams, const CppParserOptions& parserOptions, CibIdMgr& cibIdMgr)
  : cibCppObjTreeCreated_(false)
  , cibParams_(cibParams)
  , cibIdMgr_(cibIdMgr)
  , smartPtrNames_({"sk_sp", "std::unique_ptr"})
  , uniquePtrNames_({"std::unique_ptr"})
{
  CppParser parser(std::make_unique<CibObjFactory>());
  parser.parseEnumBodyAsBlob();
  parser.addKnownMacros(parserOptions.knownMacros);
  parser.addKnownApiDecors(parserOptions.knownApiDecor);
  parser.addIgnorableMacros(parserOptions.ignorableMacros);
  const auto files = collectAllInterfaceFiles(cibParams);
  program_.reset(new CppProgram(files, std::move(parser)));
  buildCibCppObjTree();
}

void CibHelper::onNewCompound(CibCompound* compound, const CibCompound* parent) const
{
  program_->addCompound(compound, parent);
  auto* pThis = const_cast<CibHelper*>(this); // TODO: Fix const_cast.
  pThis->resolveInheritance(static_cast<CibCompound*>(compound));
  pThis->markClassType(compound);
  pThis->identifyAbstract(compound);
  pThis->identifyPobableFacades(compound);
  pThis->markNeedsGenericProxyDefinition(compound);
  cibIdMgr_.assignNsName(compound, *this, cibParams_);
}

CppObj* CibHelper::resolveVarType(CppVarType*            varType,
                                  const CppTypeTreeNode* typeNode,
                                  TypeResolvingFlag      typeResolvingFlag)
{
  auto* cppObj = resolveTypename(baseType(varType), typeNode, typeResolvingFlag);
  if (cppObj == nullptr)
    return nullptr;

  if (cppObj->objType_ == CppObjType::kTypedefName)
  {
    // TODO: We need to resolve typedefs fully only if it resolves to conpound object uniquely.
    // For cases when typedef uses non-compound types we need to know ptr and ref only.
    auto* typedefObj       = static_cast<CppTypedefName*>(cppObj);
    auto* finalResolvedObj = resolveTypename(baseType(typedefObj->var_), typeNode, typeResolvingFlag);
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

CppObj* CibHelper::resolveTypename(const std::string& name,
                                   const CibCompound* begScope,
                                   TypeResolvingFlag  typeResolvingFlag) const
{
  CppObj* resolvedType = resolveTypename(name, program_->typeTreeNodeFromCppObj(begScope), typeResolvingFlag);
  if (!resolvedType && begScope)
  {
    begScope->forEachParent(CppAccessType::kPublic, [&](const CibCompound* parent) {
      resolvedType = parent->resolveTypename(name, *this, typeResolvingFlag);
      return (resolvedType == nullptr);
    });
  }

  return resolvedType;
}

CppObj* CibHelper::resolveVarType(CppVarType* varType, const CibCompound* begScope, TypeResolvingFlag typeResolvingFlag)
{
  return resolveVarType(varType, program_->typeTreeNodeFromCppObj(begScope), typeResolvingFlag);
}

void CibHelper::markStlClasses()
{
  const auto* stlNode = program_->searchTypeNode("std");
  if (stlNode == nullptr)
    return;

  for (auto cppObj : stlNode->cppObjSet)
  {
    CibCompoundEPtr compound = const_cast<CppObj*>(cppObj);
    if (compound)
      compound->setStlClass();
  }
}

void CibHelper::markStlHelperClasses()
{
  const auto* stlNode = program_->searchTypeNode("__zz_cib_stl_helpers");
  if (stlNode == nullptr)
    return;

  for (auto cppObj : stlNode->cppObjSet)
  {
    CibCompoundEPtr compound = const_cast<CppObj*>(cppObj);
    if (compound)
      compound->setStlHelperClass();
  }
}

void CibHelper::buildCibCppObjTree()
{
  markStlClasses();
  markStlHelperClasses();
  forceMarkInterfaceClasses();

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
  for (const auto& noProxyClassName : cibParams_.layoutSharingClasses)
  {
    CibCompoundEPtr noProxyClass = getCppObjFromTypeName(noProxyClassName);

    if (noProxyClass)
      noProxyClass->setNeedNoProxy();
  }
}

void CibHelper::forceMarkInterfaceClasses()
{
  for (const auto& interfaceClassName : cibParams_.interfaceClasses)
  {
    CibCompoundEPtr interfaceClass = getCppObjFromTypeName(interfaceClassName);

    if (interfaceClass)
      interfaceClass->setInterfaceLike();
  }
}

CppObj* CibHelper::resolveTypeAlias(CppObj* typeAliasObj, TypeResolvingFlag typeResolvingFlag) const
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
  for (; cppObj && isTypedefLike(cppObj);)
  {
    const auto name = getName(cppObj);
    if (name.empty())
      return cppObj;
    auto* nextResolvedObj = resolveTypename(name, owner(cppObj), typeResolvingFlag);
    if (nextResolvedObj)
      cppObj = nextResolvedObj;
    else
      return cppObj;
  }

  return cppObj;
}

/**
 * e.g:
 * --------------------------------------------------------------------
 * | name                       |   Expected return value             |
 * ====================================================================
 * | std::vector<C>::iterator   |   position of '>', i.e. 13.         |
 * | std::vector<C>             |   position of '>', i.e. 13.         |
 * | std::vector<A<C>>          |   position of second '>', i.e. 16.  |
 * --------------------------------------------------------------------
 */
static size_t getTopTemplateNameEndPos(const std::string& name, size_t angleBracketStartPos)
{
  size_t numNestedStartAngleBracket = 0;
  for (auto i = angleBracketStartPos + 1; i < name.length(); ++i)
  {
    if (name[i] == '<')
    {
      ++numNestedStartAngleBracket;
    }
    else if (name[i] == '>')
    {
      if (numNestedStartAngleBracket)
      {
        --numNestedStartAngleBracket;
      }
      else
      {
        return i + 1;
      }
    }
  }

  assert(false && "Template name must have balanced angle brackets");
  return name.size();
}

static size_t skipSpaces(const std::string& name, size_t startPos)
{
  for (auto i = startPos; i < name.length(); ++i)
  {
    if (!isspace(name[i]))
      return i;
  }

  return name.size();
}

/**
 * e.g:
 * --------------------------------------------------------------------------------
 * | name                       |   Expected return value                         |
 * ================================================================================
 * | std::vector<C>::iterator   |   start position of iterator, i.e. 16.          |
 * | std::vector<C>             |   position of one past '>', i.e. 14             |
 * | std::vector<A<C>>          |   position of one past second '>', i.e. 16.     |
 * --------------------------------------------------------------------------------
 */
static size_t getNestedNameStartPos(const std::string& name, size_t topNameEndPos)
{
  size_t scopeResolutionStartPos = skipSpaces(name, topNameEndPos);

  if (scopeResolutionStartPos == name.length())
    return scopeResolutionStartPos;

  assert(name[scopeResolutionStartPos + 0] == ':');
  assert(name[scopeResolutionStartPos + 1] == ':');

  return skipSpaces(name, scopeResolutionStartPos + 2);
}

CppObj* CibHelper::resolveTypename(const std::string&     name,
                                   const CppTypeTreeNode* startNode,
                                   TypeResolvingFlag      typeResolvingFlag) const
{
  auto templateArgStart = name.find('<');
  auto typeNode         = [&]() -> const CppTypeTreeNode* {
    if (templateArgStart == name.npos)
    {
      return program_->nameLookup(name, startNode);
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
      const auto* resolvedOwner = program_->nameLookup(templateClassName, startNode);
      return resolvedOwner;
    }
  }();

  // TODO: Fix const_cast.
  auto* cppObj =
    typeNode && !typeNode->cppObjSet.empty() ? const_cast<CppObj*>(*(typeNode->cppObjSet.begin())) : nullptr;
  if (cppObj)
  {
    if (isTypedefLike(cppObj))
    {
      auto* resolvedTypeAlias = resolveTypeAlias(cppObj, typeResolvingFlag);
      // <HACK>
      // Stop resolving a typedef is it is defined inside a template class and resolved type is a compound.
      // TODO: maybe resolving typedef is no longer needed. Try removing it altogether.
      CibConstCompoundEPtr resolvedCompound = resolvedTypeAlias;
      CibConstCompoundEPtr ownerOfCppObj    = owner(cppObj);
      if (resolvedCompound && ownerOfCppObj->isTemplateInstance()
          && (typeResolvingFlag != TypeResolvingFlag::ResolveTillLast))
        return cppObj;
      // </HACK>
      if (resolvedTypeAlias)
        cppObj = resolvedTypeAlias;
    }
    if (isClassLike(cppObj))
    {
      if (templateArgStart != name.npos)
      {
        auto*       compound           = static_cast<CibCompound*>(cppObj);
        const auto* instantiationScope = static_cast<const CibCompound*>(*(startNode->cppObjSet.begin()));
        const auto  topTemplNameEndPos = getTopTemplateNameEndPos(name, templateArgStart);
        auto*       topTemplObj =
          compound->getTemplateInstantiation(name.substr(0, topTemplNameEndPos), instantiationScope, *this);
        const auto nestedNameStartPos = getNestedNameStartPos(name, topTemplNameEndPos);
        if (nestedNameStartPos >= name.length())
        {
          if (topTemplObj->isStlHelpereClass() && (typeResolvingFlag == TypeResolvingFlag::IgnoreStlHelpers))
            return nullptr;
          return topTemplObj;
        }
        auto* resolvedObj = resolveTypename(name.substr(nestedNameStartPos), topTemplObj, typeResolvingFlag);
        return resolvedObj ? resolvedObj : cppObj;
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
      auto* cppObj = resolveTypename(inh.baseName, &ownerTypeNode, TypeResolvingFlag::IgnoreStlHelpers);
      if ((cppObj == nullptr) && (strcmp(inh.baseName.c_str(), "__zz_cib_::__zz_cib_ProxyManager") == 0))
        cppCompound->setLibraryManagedProxy();

      auto* parentObj = cppObj && isClassLike(cppObj) ? static_cast<CibCompound*>(cppObj) : nullptr;
      // assert(parentObj != nullptr); // we should actually give warning
      // here.
      if (parentObj == nullptr)
        continue;
      CppAccessType inhType = resolveInheritanceType(inh.inhType, cppCompound->compoundType());
      cppCompound->parents_[inhType].push_back(parentObj);
      parentObj->children_[inhType].push_back(cppCompound);
      if (inh.isVirtual && !parentObj->defaultConstructable())
        cppCompound->setHasNonDefaultConstructableVirtualParent();
      if (!parentObj->isCopyCtorCallable() && !cppCompound->hasCopyCtor())
        cppCompound->setCantHaveDefaultCopyCtor();
    }
  }
  for (const auto& mem : cppCompound->members())
  {
    CibCompoundEPtr nested = mem;
    if (nested && !nested->isTemplated())
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
      auto* cppObj   = resolveVarType(var->varType(), func.getOwner(), TypeResolvingFlag::IgnoreStlHelpers);
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
          if (paramObj->hasPureVirtual())
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
    auto* cppObj    = resolveVarType(func.returnType(), func.getOwner(), TypeResolvingFlag::IgnoreStlHelpers);
    auto* returnObj = cppObj && isClassLike(cppObj) ? static_cast<CibCompound*>(cppObj) : nullptr;
    if (!returnObj)
      return;
    returnObj->setShared();

    if ((ptrLevel(func.returnType()) == 1) || (refType(func.returnType()) == CppRefType::kByRef))
    {
      if (returnObj->hasPureVirtual())
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
      if (!isPrivate(mem))
      {
        markClassType(nested);
        if (isPodStruct)
          isPodStruct = nested->isPodStruct();
      }
    }
    else if (CibFunctionHelper func = mem)
    {
      if (func.isCopyConstructor() || func.isMoveConstructor())
        continue;
      isPodStruct = false;
      if (func.isPureVirtual())
      {
        cppCompound->setInterfaceLike();
        isInline = false;
      }
      else if (!func.hasDefinition())
      {
        isInline = false;
      }
      else if (func.isVirtual())
      {
        isInline = false;
      }
      if (!isPrivate(mem))
      {
        evaluateArgs(mem);
        evaluateReturnType(mem);
      }
      if (!(func.getAttr() & kStatic))
        isEmpty = false;
    }
    else if (CppVarEPtr var = mem)
    {
      if (!(var->varType()->typeAttr() & kStatic))
        isEmpty = false;
      if (isPodStruct)
      {
        auto* cppObj = resolveVarType(var->varType(), cppCompound, TypeResolvingFlag::IgnoreStlHelpers);
        if (cppObj && isClassLike(cppObj))
          isPodStruct = false;
      }
      if (isByRef(var) || isByRValueRef(var))
      {
        cppCompound->setCantHaveDefaultCtor();
        cppCompound->setCantHaveDefaultCopyCtor();
      }
      else if (!isCopyable(var.get()))
      {
        cppCompound->setCantHaveDefaultCopyCtor();
      }
      else if (!usesTemplateType(var->varType()) && isPublic(var))
      {
        const auto* memType = resolveVarType(var->varType(), cppCompound, TypeResolvingFlag::IgnoreStlHelpers);
        if (memType && (memType->objType_ == CibCompound::kObjectType))
        {
          const auto* memObj = static_cast<const CibCompound*>(memType);
          if (!memObj->isCopyCtorCallable())
            cppCompound->setCantHaveDefaultCopyCtor();
        }
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
  if (cppCompound->hasNonDefaultConstructableVirtualParent())
    cppCompound->setHasNonDefaultConstructableVirtualAncestor();
  if (cppCompound->isTemplateInstance() && !cppCompound->hasCopyCtor())
  {
    cppCompound->forEachAncestor([cppCompound](const CibCompound* ancestor) {
      if (!ancestor->isCopyCtorCallable())
      {
        cppCompound->setCantHaveDefaultCopyCtor();
        return true;
      }
      return false;
    });
  }
  if (!cppCompound->isCopyCtorCallable())
  {
    cppCompound->forEachDescendent([](CibCompound* descended) {
      if (!descended->copyCtor() || !isPublic(descended->copyCtor()))
      {
        descended->setCantHaveDefaultCopyCtor();
      }
    });
  }

  if (cppCompound->libraryManagesProxy())
  {
    cppCompound->forEachDerived([](auto* derived) { derived->setLibraryManagedProxy(); });
  }
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
