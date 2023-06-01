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
#include "cibutil.h"

#include "cppwriter.h"

#include <map>
#include <sstream>

void CibCompound::addDependentTemplateInstance(const CibCompound* templInstance, TemplateArgType argType)
{
  auto itr = usedInTemplateInstaces_.find(templInstance);
  if (itr == usedInTemplateInstaces_.end())
    usedInTemplateInstaces_.insert(std::make_pair(templInstance, argType));
  else if (itr->second == TemplateArgType::kAsReference)
    itr->second = argType;
}

bool CibCompound::setupTemplateDependencies(const CppVarType* varType, const CibProgram& cibProgram) const
{
  const std::string& typeName          = baseType(varType);
  bool               compositeTemplate = false;
  auto*              resolvedCppObj    = cibProgram.getCppObjFromTypeName(typeName, this);
  if (resolvedCppObj)
  {
    if (isClassLike(resolvedCppObj))
    {
      auto*      resolvedCompound = static_cast<CibCompound*>(resolvedCppObj);
      const auto argType = effectivePtrLevel(varType) ? TemplateArgType::kAsReference : TemplateArgType::kAsObject;
      resolvedCompound->addDependentTemplateInstance(this, argType);
      compositeTemplate = true;
    }
    else if (isTypedefLike(resolvedCppObj))
    {
      if (CppTypedefNameEPtr typedefObj = resolvedCppObj)
      {
        compositeTemplate = setupTemplateDependencies(typedefObj->var_->varType(), cibProgram);
      }
      else if (CppUsingDeclEPtr usingObj = resolvedCppObj)
      {
        CppVarTypeEPtr temp = usingObj->cppObj_;
        if (temp)
          compositeTemplate = setupTemplateDependencies(temp, cibProgram);
      }
    }
  }

  return compositeTemplate;
}

void CibCompound::setupTemplateDependencies(const CibProgram& cibProgram)
{
  bool compositeTemplate = false;
  for (auto& arg : templateArgObjects_)
  {
    if (isExpr(arg))
      continue;
    CppEasyPtr<const CppVarType> cppVarType(arg);
    compositeTemplate = setupTemplateDependencies(cppVarType, cibProgram) || compositeTemplate;
  }

  if (compositeTemplate)
    props_ |= kClassPropCompositeTmpl;
}
