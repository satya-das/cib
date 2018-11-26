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
      auto& substituteVar = templArgSubstitution[templParam->paramName_];
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
        substituteVar = static_cast<const CppVarType*>(templParam->defaultParam_.get());
      }
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
  for (auto ptrLevel = varType->typeModifier_.ptrLevel_; ptrLevel--;)
  {
    if (varType->typeModifier_.constBits_ & (1 << ptrLevel))
      ret += " const ";
    ret += '*';
  }
  if (varType->typeModifier_.constBits_ & (1 << varType->typeModifier_.ptrLevel_))
    ret += " const";
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
  for (size_t argStart = jumpToArgStart(), nestedTemplateArg = 0; ++b < e;)
  {
    if (s[b] == '<')
    {
      ret += s[b];
      ++nestedTemplateArg;
    }
    else if (s[b] == '>')
    {
      auto param = extractArg(argStart, b);
      ret += replacedParam(param);
      ret += s[b];
      if (nestedTemplateArg)
        --nestedTemplateArg;
      else
        return ret;
    }
    else if ((nestedTemplateArg == 0) && s[b] == ',')
    {
      auto param = extractArg(argStart, b);
      ret += replacedParam(param);
      ret += ", ";
      argStart = jumpToArgStart();
    }
  }

  assert(false && "We should never ever be here.");
  return ret;
}

static CppVarType* instantiateVarType(const CppVarType* varType, const TemplateArgValueMap& argValues)
{
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
  return ret;
}

static CppParamList* instantiateParams(const CppParamList* params, const TemplateArgValueMap& argValues)
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
  name += '>';

  return name;
}

CibCppCompound* CibCppCompound::getTemplateInstantiation(const TemplateArgs&   templateArgs,
                                                         const CibCppCompound* instantiationScope,
                                                         const CibHelper&      helper)
{
  auto ret = getTemplateInstance(templateArgs);
  if (ret)
    return ret;

  auto resolvedArgs   = resolveArguments(templateArgs, templSpec_, instantiationScope, helper);
  auto clsName        = canonicalName(this, templSpec_, resolvedArgs);
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
          kPublic, this->name(), instantiateParams(func.getParams(), resolvedArgs), nullptr, func.getAttr());
      else if (func.isDestructor())
        newMem = CibFunctionHelper::CreateDestructor(kPublic, "~" + this->name(), func.getAttr());
      else
        newMem = CibFunctionHelper::CreateFunction(kPublic,
                                                   func.funcName(),
                                                   instantiateVarType(func.returnType(), resolvedArgs),
                                                   instantiateParams(func.getParams(), resolvedArgs),
                                                   func.getAttr());
      newMem->owner_ = this;
      ret->addMember(newMem);
    }
    return false;
  });

  addTemplateInstance(templateArgs, ret);
  helper.onNewCompound(ret, outer());
  return ret;
}
