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

#include "cibcompound.h"
#include "cibidmgr.h"

#include <map>

using TemplateArgValueMap = std::map<std::string, CppVarTypePtr>;

static CppVarTypePtr instantiateVarType(CppVarTypeEPtr varType, const TemplateArgValueMap& argValues);

static TemplateArgValueMap resolveArguments(const TemplateArgs&         templateArgs,
                                            const CppTemplateParamList* templSpec,
                                            const CibCompound*          instantiationScope,
                                            const CibHelper&            helper)
{
  assert(templSpec);
  std::map<std::string, CppVarTypePtr> templArgSubstitution;
  auto                                 argItr = templateArgs.begin();
  for (const auto& templParam : *templSpec)
  {
    if (!templParam->paramType_)
    {
      CppVarTypePtr substituteVar;
      if (argItr != templateArgs.end())
      {
        auto  varType     = parseType(*argItr);
        auto* resolvedVar = instantiationScope->resolveTypeName(baseType(varType), helper);
        if (resolvedVar)
        {
          varType->baseType(longName(resolvedVar));
        }
        substituteVar = std::move(varType);
        ++argItr;
      }
      else
      {
        substituteVar = instantiateVarType(templParam->defaultParam(), templArgSubstitution);
      }

      templArgSubstitution[templParam->paramName_] = std::move(substituteVar);
    }
    else
    {
      assert(false && "TODO: provide implementation");
    }
  }

  return templArgSubstitution;
}

static std::string stringify(const CppVarType* varType)
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

static std::string stringify(const CppVarTypePtr& varType)
{
  return stringify(varType.get());
}

std::string ReplaceTemplateParamsWithArgs(const std::string&         s,
                                          size_t                     b,
                                          size_t                     e,
                                          const TemplateArgValueMap& argValues)
{
  assert((b < e) && (b < s.length()) && (s[b] == '<'));
  auto jumpToArgStart = [&]() {
    while ((++b < e) && isspace(s[b]))
      ;
    return b;
  };
  auto extractArg = [&s](size_t b, size_t e) {
    while (isspace(s[--e]))
      ;
    ++e;
    return s.substr(b, e - b);
  };
  auto replacedParam = [&](const std::string& param) {
    auto itr = argValues.find(param);
    if (itr == argValues.end())
      return param;
    else
      return stringify(itr->second);
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
      auto param = extractArg(argStart, b);
      ret += replacedParam(param);
      ret += s[b];
      argStart = jumpToArgStart();
    }
    else if (s[b] == ',')
    {
      auto param = extractArg(argStart, b);
      ret += replacedParam(param);
      ret += ", ";
      argStart = jumpToArgStart();
    }
  }

  return ret;
}

static CppVarTypePtr instantiateVarType(CppVarTypeEPtr varType, const TemplateArgValueMap& argValues)
{
  normalizeConst(varType);
  auto type = baseType(varType);
  auto itr  = argValues.find(type);
  if (itr == argValues.end())
  {
    auto templStart = type.find('<');
    if (templStart != type.npos)
      type = type.substr(0, templStart) + ReplaceTemplateParamsWithArgs(type, templStart, type.length(), argValues);
    return std::make_unique<CppVarType>(type, varType->typeModifier());
  }
  else
  {
    type = baseType(itr->second);
  }

  auto typeModifier = resolveTypeModifier(varType->typeModifier(), itr->second->typeModifier());
  auto ret          = new CppVarType(type, typeModifier);
  ret->typeAttr(varType->typeAttr() | itr->second->typeAttr());
  return CppVarTypePtr(ret);
}

static CppParamVector* instantiateParams(const CppParamVector* params, const TemplateArgValueMap& argValues)
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
                                 const TemplateArgValueMap&  argValues)
{
  auto getArg = [&argValues](const std::string& argName) -> const CppVarType* {
    auto itr = argValues.find(argName);
    return (itr != argValues.end()) ? itr->second.get() : nullptr;
  };
  std::string name = compound->name() + '<';
  const char* sep  = "";
  for (const auto& templParam : *templSpec)
  {
    name += sep;
    if (!templParam->paramType_)
    {
      auto* arg = getArg(templParam->paramName_);
      assert(arg);
      name += stringify(arg);
    }
    else
    {
      assert(false && "TODO: provide implementation");
    }
    sep = ", ";
  }
  name += ">";

  return name;
}

TemplateInstances::const_iterator CibCompound::addTemplateInstance(CibCompound* templateInstance)
{
  assert(templateParamList());
  auto insRez = templateInstances_.insert(std::make_pair(templateInstance->name(), templateInstance));
  assert(insRez.second);
  return insRez.first;
}

CibCompound* CibCompound::getTemplateInstantiation(const std::string& name,
                                                   const CibCompound* instantiationScope,
                                                   const CibHelper&   helper)
{
  auto  templateArgs = CollectTemplateArgs(name);
  auto* ret          = getTemplateInstance(templateArgs);
  if (ret)
    return ret;
  auto resolvedArgVals = resolveArguments(templateArgs, templateParamList(), instantiationScope, helper);
  auto clsName         = canonicalName(this, templateParamList(), resolvedArgVals);
  auto resolvedArgs    = CollectTemplateArgs(clsName);
  ret                  = getTemplateInstance(resolvedArgs);
  if (ret)
    return ret;
  ret                 = new CibCompound(clsName, compoundType());
  ret->templateClass_ = this;
  ret->owner(owner());
  ret->setShared();
  forEachMember(this, CppAccessType::kPublic, [&](const CppObj* mem) -> bool {
    if (isFunctionLike(mem))
    {
      CibFunctionHelper func(mem);
      CppFunctionBase*  newMem = nullptr;
      if (func.isConstructorLike())
        newMem = new CppConstructor(CppAccessType::kPublic,
                                    this->name(),
                                    instantiateParams(func.getParams(), resolvedArgVals),
                                    nullptr,
                                    func.getAttr());
      else if (func.isDestructor())
        newMem = new CppDestructor(CppAccessType::kPublic, "~" + this->name(), func.getAttr());
      else
        newMem = new CppFunction(CppAccessType::kPublic,
                                 func.funcName(),
                                 instantiateVarType(func.returnType(), resolvedArgVals).release(),
                                 instantiateParams(func.getParams(), resolvedArgVals),
                                 func.getAttr());
      ret->addMember(newMem);
    }
    return false;
  });

  auto itr = addTemplateInstance(ret);
  tmplInstanceCache_.insert(std::make_pair(templateArgs, itr));
  tmplInstanceCache_.insert(std::make_pair(resolvedArgs, itr));
  ret->templateArgValues_.swap(resolvedArgVals);
  helper.onNewCompound(ret, outer());
  ret->setupTemplateDependencies(helper);
  return ret;
}

bool CibCompound::setupTemplateDependencies(const std::string& typeName, const CibHelper& helper)
{
  bool  compositeTemplate = false;
  auto* resolvedCppObj    = helper.getCppObjFromTypeName(typeName, this);
  if (resolvedCppObj)
  {
    if (isClassLike(resolvedCppObj))
    {
      auto* resolvedCompound = static_cast<CibCompound*>(resolvedCppObj);
      resolvedCompound->usedInTemplArg.insert(this);
      compositeTemplate = true;
    }
    else if (isTypedefLike(resolvedCppObj))
    {
      if (CppTypedefNameEPtr typedefObj = resolvedCppObj)
      {
        compositeTemplate = setupTemplateDependencies(baseType(typedefObj->var_), helper);
      }
      else if (CppUsingDeclEPtr usingObj = resolvedCppObj)
      {
        CppVarTypeEPtr varType = usingObj->cppObj_;
        compositeTemplate      = setupTemplateDependencies(baseType(varType), helper);
      }
    }
  }

  return compositeTemplate;
}

void CibCompound::setupTemplateDependencies(const CibHelper& helper)
{
  bool compositeTemplate = false;
  for (auto& arg : templateArgValues_)
  {
    compositeTemplate = setupTemplateDependencies(baseType(arg.second), helper) || compositeTemplate;
  }

  if (compositeTemplate)
    props_ |= kClassPropCompositeTmpl;
}
