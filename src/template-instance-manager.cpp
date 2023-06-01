/*
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

#include "template-instance-manager.h"

#include "cibcompound.h"
#include "cibutil.h"

#include "cppwriter.h"

#include <map>
#include <sstream>

struct PrivateTypesAccessor
{
  using TemplateArgPtr        = CibTemplateInstanceManager::TemplateArgPtr;
  using StringVector          = CibTemplateInstanceManager::StringVector;
  using TemplateArgs          = CibTemplateInstanceManager::TemplateArgs;
  using TemplateInstanceCache = CibTemplateInstanceManager::TemplateInstanceCache;
  using TemplateArgValues     = CibTemplateInstanceManager::TemplateArgValues;
  using NameToInstance        = CibTemplateInstanceManager::NameToInstance;
  using ScopedNameToInstance  = CibTemplateInstanceManager::ScopedNameToInstance;
};

namespace {

using TemplateArgPtr        = PrivateTypesAccessor::TemplateArgPtr;
using StringVector          = PrivateTypesAccessor::StringVector;
using TemplateArgs          = PrivateTypesAccessor::TemplateArgs;
using TemplateInstanceCache = PrivateTypesAccessor::TemplateInstanceCache;
using TemplateArgValues     = PrivateTypesAccessor::TemplateArgValues;
using NameToInstance        = PrivateTypesAccessor::NameToInstance;
using ScopedNameToInstance  = PrivateTypesAccessor::ScopedNameToInstance;

static CibCompound* findInNameToInstance(const ScopedNameToInstance& scopedNameToInstance,
                                         const std::string&          name,
                                         const CibCompound*          instantiationScope)
{
  const auto nameToInstanceItr = scopedNameToInstance.find(instantiationScope);
  if (nameToInstanceItr == scopedNameToInstance.end())
    return nullptr;

  const auto& nameToInstance = nameToInstanceItr->second;
  const auto  itr            = nameToInstance.find(name);
  if (itr == nameToInstance.end())
    return nullptr;
  return itr->second;
}

static CppVarTypePtr instantiateVarType(CppConstVarTypeEPtr varType, const TemplateArgValues& argValues);

static CppVarTypePtr getSubstitutionVarType(const std::string& templateArg,
                                            const CibCompound* instantiationScope,
                                            CibProgram&        cibProgram)
{
  auto  varType = parseType(templateArg);
  auto* resolvedVar =
    cibProgram.resolveTypename(baseType(varType), instantiationScope, TypeResolvingFlag::IgnoreStlHelpers);
  if (resolvedVar)
    varType->baseType(longName(resolvedVar));
  return std::move(varType);
}

static TemplateArgValues resolveArguments(const TemplateArgs&         templateArgs,
                                          const CppTemplateParamList* templSpec,
                                          const CibCompound*          instantiationScope,
                                          CibProgram&                 cibProgram)
{
  assert(templSpec);
  TemplateArgValues templArgSubstitution;
  auto              argItr = templateArgs.begin();
  for (const auto& templParam : *templSpec)
  {
    if (!templParam->paramType_)
    {
      CppVarTypePtr substituteVar;
      if (argItr != templateArgs.end())
      {
        substituteVar = getSubstitutionVarType(*argItr, instantiationScope, cibProgram);
        ++argItr;
      }
      else
      {
        const auto* templArg = templParam->defaultArg();
        substituteVar        = instantiateVarType(templArg, templArgSubstitution);
      }

      templArgSubstitution[templParam->paramName_].reset(substituteVar.release());
    }
    else
    {
      if (argItr != templateArgs.end())
      {
        auto expr = parseExpr(*argItr);
        templArgSubstitution[templParam->paramName_].reset(expr.release());
        ++argItr;
      }
      else
      {
        auto* templArg = templParam->defaultArg();
        if (templArg)
        {
          templArgSubstitution[templParam->paramName_].reset(templArg);
        }
        else
        {
          assert(
            false
            && "This can't happen. Template argument is missing and also there is no default parameter specified.");
        }
      }
    }
  }

  return templArgSubstitution;
}

static std::string stringify(const CppConstVarTypeEPtr varType)
{
  std::string ret = baseType(varType);
  for (unsigned short i = 0; i <= ptrLevel(varType); ++i)
  {
    if (varType->typeModifier().constBits_ & (1 << i))
      ret += " const ";
    if (i != ptrLevel(varType))
      ret += '*';
  }

  if (refType(varType) == CppRefType::kByRef)
    ret += "&";
  else if (refType(varType) == CppRefType::kRValRef)
    ret += "&&";
  return ret;
}

static std::string stringify(const TemplateArgPtr& templArg)
{
  if (templArg->objType_ != CppExpr::kObjectType)
    return stringify(static_cast<const CppVarType*>(templArg.get()));
  else
  {
    CppWriter         writer;
    std::stringstream stm;
    const auto*       expr = static_cast<const CppExpr*>(templArg.get());
    writer.emitExpr(expr, stm);
    return stm.str();
  }
}

static std::string ReplaceTemplateParamsWithArgs(const std::string&       s,
                                                 size_t                   b,
                                                 size_t                   e,
                                                 const TemplateArgValues& argValues)
{
  assert((b < e) && (b < s.length()) && (s[b] == '<'));
  const auto jumpToArgStart = [&]() {
    while ((++b < e) && isspace(s[b]))
      ;
    return b;
  };
  const auto extractArg = [&s](size_t b, size_t e) {
    while (isspace(s[--e]))
      ;
    ++e;
    return s.substr(b, e - b);
  };
  const auto replacedParam = [&](const std::string& param) {
    const auto arg = parseType(param);
    const auto itr = argValues.find(arg->baseType());
    if (itr == argValues.end())
    {
      return param;
    }
    else
    {
      const CppVarTypeEPtr argVal = itr->second.get();
      assert(argVal);
      arg->baseType(argVal->baseType());
      arg->typeModifier() = resolveTypeModifier(arg->typeModifier(), argVal->typeModifier());
      return stringify(arg);
    }
  };
  std::string ret = "<";
  for (size_t argStart = jumpToArgStart(); ++b <= e;)
  {
    if (b == e)
    {
      for (auto i = argStart; i < b; ++i)
        ret += s[i];
    }
    else if (s[b] == '<')
    {
      for (auto i = argStart; i <= b; ++i)
        ret += s[i];
      argStart = jumpToArgStart();
    }
    else if (s[b] == '>')
    {
      const auto param = extractArg(argStart, b);
      ret += replacedParam(param);
      ret += s[b];
      argStart = jumpToArgStart();
      // Happens in case of nested template arguments
      if (s[argStart] == ',')
        ret += s[argStart++];
    }
    else if (s[b] == ',')
    {
      const auto param = extractArg(argStart, b);
      ret += replacedParam(param);
      ret += ", ";
      argStart = jumpToArgStart();
    }
  }

  return ret;
}

static const CppVarType* getVarArg(const TemplateArgValues& argValues, const std::string& type)
{
  const auto  itr            = argValues.find(type);
  const auto* substitutedVar = ((itr == argValues.end()) || (itr->second->objType_ == CppExpr::kObjectType))
                                 ? static_cast<const CppVarType*>(nullptr)
                                 : static_cast<const CppVarType*>(itr->second.get());

  return substitutedVar;
}

static CppVarTypePtr instantiateVarType(CppConstVarTypeEPtr varType, const TemplateArgValues& argValues)
{
  auto        type           = baseType(varType);
  const auto* substitutedVar = getVarArg(argValues, type);
  if (substitutedVar == nullptr)
  {
    auto templStart = type.find('<');
    if (templStart != type.npos)
      type = type.substr(0, templStart) + ReplaceTemplateParamsWithArgs(type, templStart, type.length(), argValues);
    return std::make_unique<CppVarType>(varType->accessType_, type, varType->typeModifier());
  }
  else
  {
    type = baseType(substitutedVar);
  }

  const auto substitutedVarTypeModifier = substitutedVar ? substitutedVar->typeModifier() : CppTypeModifier();
  const auto typeModifier               = resolveTypeModifier(varType->typeModifier(), substitutedVarTypeModifier);
  auto       ret                        = new CppVarType(varType->accessType_, type, typeModifier);
  const auto substitutedVarTypeAttr     = substitutedVar ? substitutedVar->typeAttr() : 0;
  ret->typeAttr(varType->typeAttr() | substitutedVarTypeAttr);
  return CppVarTypePtr(ret);
}

static CppParamVector* instantiateParams(const CppParamVector* params, const TemplateArgValues& argValues)
{
  if (!params)
    return nullptr;
  CppParamVector* ret = new CppParamVector;
  for (auto& param : *params)
  {
    CppVarEPtr var = param;
    assert(var && "TODO: Implement for other types as well");
    ret->emplace_back(new CppVar(instantiateVarType(var->varType(), argValues), CppVarDecl(var->varDecl().name())));
  }

  return ret;
}

static std::string canonicalName(const CibCompound*          compound,
                                 const CppTemplateParamList* templSpec,
                                 const TemplateArgValues&    argValues)
{
  std::string name = compound->name() + '<';
  const char* sep  = "";
  for (const auto& templParam : *templSpec)
  {
    name += sep;
    const auto itr = argValues.find(templParam->paramName_);
    assert(itr != argValues.end());
    name += stringify(itr->second);
    sep = ", ";
  }

  sep = ", ";
  name += ">";

  return name;
}

static std::vector<CppObj*> getArgObjects(const TemplateArgValues& argValues)
{
  std::vector<CppObj*> argObjects;
  for (const auto& argVal : argValues)
    argObjects.push_back(argVal.second.get());

  return argObjects;
}

} // namespace

CibCompound* CibTemplateInstanceManager::createTemplateInstantiation(CibCompound*       templateClass,
                                                                     const std::string& name,
                                                                     const CibCompound* instantiationScope,
                                                                     CibProgram&        cibProgram)
{
  auto* knownInstance = findInNameToInstance(usedNameToInstance_, name, templateClass);
  if (knownInstance != nullptr)
    return knownInstance;

  auto  templateArgs = CollectTemplateArgs(name);
  auto* ret          = getTemplateInstance(templateClass, templateArgs);
  if (ret)
    return ret;
  auto resolvedArgVals =
    resolveArguments(templateArgs, templateClass->templateParamList(), instantiationScope, cibProgram);
  auto clsName  = canonicalName(templateClass, templateClass->templateParamList(), resolvedArgVals);
  knownInstance = findInNameToInstance(canonicalNameToInstance_, name, templateClass);
  if (knownInstance != nullptr)
    return knownInstance;

  auto resolvedArgs = CollectTemplateArgs(clsName);
  ret               = getTemplateInstance(templateClass, resolvedArgs);
  if (ret)
    return ret;
  ret = new CibCompound(clsName, templateClass, getArgObjects(resolvedArgVals));
  ret->setShared();
  ret->owner(templateClass->owner());
  if (templateClass->isStlHeader())
    ret->setStlHeader();
  else if (templateClass->isStlHelpereClass())
    ret->setStlHelperClass();

  const auto& templateClassParents = templateClass->inheritanceList();
  if (templateClassParents != nullptr)
  {
    auto parents = std::make_unique<CppInheritanceList>();
    for (const auto& parent : *(templateClassParents.get()))
    {
      if (CibCompoundEPtr base =
            cibProgram.resolveTypename(parent.baseName, templateClass->outer(), TypeResolvingFlag::IgnoreStlHelpers))
      {
        parents->emplace_back(base->name(), parent.inhType, parent.isVirtual);
        continue;
      }
      auto resolvedArgItr = resolvedArgVals.find(parent.baseName);
      if (resolvedArgItr == resolvedArgVals.end())
        continue;
      if (CppVarTypeEPtr base = resolvedArgItr->second.get())
        parents->emplace_back(base->baseType(), parent.inhType, parent.isVirtual);
    }
    ret->inheritanceList(std::move(parents));
  }

  forEachMember(templateClass, CppAccessType::kPublic, [&](const CppObj* mem) -> bool {
    if (isFunctionLike(mem))
    {
      CibFunctionHelper func(mem);
      if (func.hasVariadicParam())
        return false;
      CppFunctionBase* newMem = nullptr;
      if (func.isConstructorLike())
        newMem = new CppConstructor(CppAccessType::kPublic,
                                    templateClass->name(),
                                    instantiateParams(func.getParams(), resolvedArgVals),
                                    makeEmptyCppMemInitList(),
                                    func.getAttr());
      else if (func.isDestructor())
        newMem = new CppDestructor(CppAccessType::kPublic, "~" + templateClass->name(), func.getAttr());
      else
        newMem = new CppFunction(CppAccessType::kPublic,
                                 func.funcName(),
                                 instantiateVarType(func.returnType(), resolvedArgVals).release(),
                                 instantiateParams(func.getParams(), resolvedArgVals),
                                 func.getAttr());
      ret->addMember(newMem);
    }
    else if (CppConstUsingDeclEPtr usingDecl = mem)
    {
      if (CppConstVarTypeEPtr varType = usingDecl->cppObj_)
      {
        auto newMem = instantiateVarType(varType, resolvedArgVals);
        ret->addMember(new CppUsingDecl(usingDecl->name_, newMem.release()));
      }
    }
    return false;
  });

  usedNameToInstance_[templateClass].insert(std::make_pair(name, ret));
  canonicalNameToInstance_[templateClass].insert(std::make_pair(clsName, ret));
  templateInstanceCache_[templateClass].insert(std::make_pair(templateArgs, ret));
  templateInstanceCache_[templateClass].insert(std::make_pair(std::move(resolvedArgs), ret));
  cibProgram.onNewCompound(ret, templateClass->outer());
  ret->setupTemplateDependencies(cibProgram);
  return ret;
}

CibCompound* CibTemplateInstanceManager::getTemplateInstance(CibCompound*        templateClass,
                                                             const TemplateArgs& templateArgs) const
{
  const auto cacheItr = templateInstanceCache_.find(templateClass);
  if (cacheItr == templateInstanceCache_.end())
    return nullptr;
  const auto& argsToInstance = cacheItr->second;
  const auto  instanceItr    = argsToInstance.find(templateArgs);
  if (instanceItr == argsToInstance.end())
    return nullptr;
  return instanceItr->second;
}
