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

using TemplateArgValueMap = std::map<std::string, const CppVarType*>;

static CppVarType* instantiateVarType(CppVarType* varType, const TemplateArgValueMap& argValues);

static TemplateArgValueMap resolveArguments(const TemplateArgs&          templateArgs,
                                            const CppTemplateParamListP& templSpec,
                                            const CibCppCompound*        instantiationScope,
                                            const CibHelper&             helper)
{
  assert(templSpec);
  std::map<std::string, const CppVarType*> templArgSubstitution;
  auto                                     argItr = templateArgs.begin();
  for (const auto& templParam : *templSpec)
  {
    if (!templParam->paramType_)
    {
      const CppVarType* substituteVar = nullptr;
      if (argItr != templateArgs.end())
      {
        auto* var         = parseType(*argItr);
        auto* resolvedVar = instantiationScope->resolveTypeName(var->baseType(), helper);
        if (resolvedVar)
        {
          var->baseType_ = longName(resolvedVar);
        }
        substituteVar = var;
        ++argItr;
      }
      else
      {
        substituteVar =
          instantiateVarType(static_cast<CppVarType*>(templParam->defaultParam_.get()), templArgSubstitution);
      }

      templArgSubstitution[templParam->paramName_] = substituteVar;
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
  std::string ret = varType->baseType();
  for (unsigned short i = 0; i <= varType->ptrLevel(); ++i)
  {
    if (varType->typeModifier_.constBits_ & (1 << i))
      ret += " const ";
    if (i != varType->ptrLevel())
      ret += '*';
  }

  if (varType->refType() == kByRef)
    ret += "&";
  else if (varType->refType() == kRValRef)
    ret += "&&";
  return ret;
}

std::string ReplaceTemplateParamsWithArgs(const std::string&         s,
                                          size_t                     b,
                                          size_t                     e,
                                          const TemplateArgValueMap& argValues)
{
  assert((s[b] == '<') && (b < e));
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

static CppVarType* instantiateVarType(CppVarType* varType, const TemplateArgValueMap& argValues)
{
  normalizeConst(varType);
  auto baseType = varType->baseType();
  auto itr      = argValues.find(baseType);
  if (itr == argValues.end())
  {
    auto templStart = baseType.find('<');
    if (templStart != baseType.npos)
      baseType = baseType.substr(0, templStart)
                 + ReplaceTemplateParamsWithArgs(baseType, templStart, baseType.length(), argValues);
    return new CppVarType(baseType, varType->typeModifier_);
  }
  else
  {
    baseType = itr->second->baseType();
  }

  auto typeModifier = resolveTypeModifier(varType->typeModifier_, itr->second->typeModifier_);
  auto ret          = new CppVarType(baseType, typeModifier);
  ret->typeAttr_    = varType->typeAttr_ | itr->second->typeAttr_;
  return ret;
}

static CppParamList* instantiateParams(CppParamList* params, const TemplateArgValueMap& argValues)
{
  if (!params)
    return nullptr;
  CppParamList* ret = new CppParamList;
  for (auto& param : *params)
  {
    assert((param.cppObj->objType_ == CppObj::kVar) && "TODO: Implement for other types as well");
    ret->push_back(
      {new CppVar(instantiateVarType(param.varObj->varType_, argValues), CppVarDecl(param.varObj->varDecl_.name_))});
  }

  return ret;
}

static CibCppFunction* instantiateFunctionTemplate(const CibFunctionHelper func, const TemplateArgValueMap& argValues)
{
  //
}

static std::string canonicalName(const CibCppCompound*        compound,
                                 const CppTemplateParamListP& templSpec,
                                 const TemplateArgValueMap&   argValues)
{
  auto getArg = [&argValues](const std::string& argName) -> const CppVarType* {
    auto itr = argValues.find(argName);
    return (itr != argValues.end()) ? itr->second : nullptr;
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

static TemplateArgs CollectTemplateArgs(const std::string& s)
{
  auto b = s.find('<');
  auto e = s.length();
  assert((s[b] == '<') && (b < e));
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
  TemplateArgs ret;
  for (size_t argStart = jumpToArgStart(), nestedTemplateArg = 0; ++b < e;)
  {
    if (s[b] == '<')
    {
      ++nestedTemplateArg;
    }
    else if (s[b] == '>')
    {
      if (nestedTemplateArg)
      {
        --nestedTemplateArg;
      }
      else
      {
        ret.push_back(extractArg(argStart, b));
        return ret;
      }
    }
    else if ((nestedTemplateArg == 0) && s[b] == ',')
    {
      ret.push_back(extractArg(argStart, b));
      argStart = jumpToArgStart();
    }
  }

  assert(false && "We should never ever be here.");
  return ret;
}

TemplateInstances::const_iterator CibCppCompound::addTemplateInstance(CibCppCompound* templateInstance)
{
  assert(templSpec_);
  auto insRez = templateInstances_.insert(templateInstance);
  assert(insRez.second);
  return insRez.first;
}

CibCppCompound* CibCppCompound::getTemplateInstantiation(const std::string&    name,
                                                         const CibCppCompound* instantiationScope,
                                                         const CibHelper&      helper)
{
  auto templateArgs = CollectTemplateArgs(name);
  auto* ret = getTemplateInstance(templateArgs);
  if (ret)
    return ret;
  auto resolvedArgVals  = resolveArguments(templateArgs, templSpec_, instantiationScope, helper);
  auto clsName          = canonicalName(this, templSpec_, resolvedArgVals);
  auto resolvedArgs     = CollectTemplateArgs(clsName);
  ret = getTemplateInstance(resolvedArgs);
  if (ret)
    return ret;
  ret                 = new CibCppCompound(clsName, compoundType_);
  ret->templateClass_ = this;
  ret->owner_         = owner_;
  ret->setShared();
  forEachMember(kPublic, [&](auto mem) -> bool {
    if (mem->isFunctionLike())
    {
      CibFunctionHelper func(mem);
      CppFunctionBase*  newMem = nullptr;
      if (func.isConstructorLike())
        newMem = CibFunctionHelper::CreateConstructor(
          kPublic, this->name(), instantiateParams(func.getParams(), resolvedArgVals), nullptr, func.getAttr());
      else if (func.isDestructor())
        newMem = CibFunctionHelper::CreateDestructor(kPublic, "~" + this->name(), func.getAttr());
      else
        newMem = CibFunctionHelper::CreateFunction(kPublic,
                                                   func.funcName(),
                                                   instantiateVarType(func.returnType(), resolvedArgVals),
                                                   instantiateParams(func.getParams(), resolvedArgVals),
                                                   func.getAttr());
      newMem->owner_ = ret;
      ret->addMember(newMem);
    }
    return false;
  });

  auto itr = addTemplateInstance(ret);
  tmplInstanceCache_.insert(std::make_pair(templateArgs, itr));
  tmplInstanceCache_.insert(std::make_pair(resolvedArgs, itr));
  ret->templateArgValues_.swap(resolvedArgVals);
  helper.onNewCompound(ret, outer());
  return ret;
}
