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

#include <algorithm>

bool CibHelper::isSmartPtr(const std::string& typeName) const
{
  if (smartPtrNames_.count(typeName))
    return true;
  auto nameEndPos = typeName.find('<');
  if (nameEndPos == typeName.npos)
    return false;
  return isSmartPtr(typeName.substr(0, nameEndPos));
}

bool CibHelper::isUniquePtr(const std::string& typeName) const
{
  if (uniquePtrNames_.count(typeName))
    return true;
  auto nameEndPos = typeName.find('<');
  if (nameEndPos == typeName.npos)
    return false;
  return isSmartPtr(typeName.substr(0, nameEndPos));
}

bool CibHelper::isSmartPtr(const CibCompound* compound) const
{
  if (!isClassLike(compound))
    return false;
  return isSmartPtr(compound->name());
}

bool CibHelper::isSmartPtr(const CppVarType* varType) const
{
  return isSmartPtr(varType->baseType());
}

bool CibHelper::isSmartPtr(const CppVar* var) const
{
  return isSmartPtr(var->varType());
}

bool CibHelper::isUniquePtr(const CppVarType* varType) const
{
  return isUniquePtr(varType->baseType());
}

bool CibHelper::isUniquePtr(const CppVar* var) const
{
  return isUniquePtr(var->varType());
}

bool CibHelper::isCopyable(const CppVar* var) const
{
  if (ptrLevel(var->varType()))
    return true;
  const auto& varType = baseType(var->varType());
  if (strstr(varType.c_str(), "unique_ptr"))
    return false;
  if (strstr(varType.c_str(), "atomic"))
    return false;

  return true;
}

std::string CibHelper::convertSmartPtr(const std::string& typeName) const
{
  auto nameStartPos = typeName.find('<') + 1;
  auto nameEndPos   = typeName.find_last_of('>');

  return typeName.substr(nameStartPos, nameEndPos - nameStartPos);
}

std::unique_ptr<CppVarType> CibHelper::convertSmartPtr(const CppVarType* typeObj) const
{
  const std::string& baseType = typeObj->baseType();
  auto               newName  = convertSmartPtr(baseType);

  CppTypeModifier typeModifier = typeObj->typeModifier();
  if (typeModifier.constBits_ & 1)
  {
    typeModifier.refType_ = CppRefType::kNoRef;
    typeModifier.constBits_ &= ~1;
  }
  else
  {
    typeModifier.ptrLevel_ += 1;
  }
  return std::make_unique<CppVarType>(newName, typeModifier);
}

std::string CibHelper::smartPtrName(const std::string& typeName) const
{
  auto smartPtrNameEnd = typeName.find('<');
  return typeName.substr(0, smartPtrNameEnd);
}

std::string CibHelper::smartPtrName(const CppVar* var) const
{
  return smartPtrName(var->varType()->baseType());
}
