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
#include "cibhelper.h"

bool CibHelper::isSmartPtr(const std::string& typeName) const
{
  if (typeName == "sk_sp")
    return true;
  return false;
}

bool CibHelper::isSmartPtr(const CibCompound* compound) const
{
  if (!isClassLike(compound))
    return false;
  return isSmartPtr(compound->name());
}

bool CibHelper::isUniquePtr(const std::string& typeName) const
{
  return (typeName.compare(0, 15, "std::unique_ptr") == 0);
}

bool CibHelper::isUniquePtr(const CppVarType* varType) const
{
  return isUniquePtr(varType->baseType());
}

bool CibHelper::isUniquePtr(const CppVar* var) const
{
  return isUniquePtr(var->varType());
}

std::string CibHelper::convertUniquePtr(const std::string& typeName) const
{
  auto newName = typeName.substr(16, typeName.size() - 17);
  return newName;
}

std::unique_ptr<CppVarType> CibHelper::convertUniquePtr(const CppVarType* typeObj) const
{
  const std::string& baseType = typeObj->baseType();
  auto               newName  = convertUniquePtr(baseType);

  CppTypeModifier typeModifier = typeObj->typeModifier();
  typeModifier.ptrLevel_ += 1;
  return std::make_unique<CppVarType>(newName, typeModifier);
}
