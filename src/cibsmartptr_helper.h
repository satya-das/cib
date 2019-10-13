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

#pragma once

#include "cppast.h"

#include <string>
#include <memory>

inline bool isUniquePtr(const std::string& typeName)
{
  return (typeName.compare(0, 15, "std::unique_ptr") == 0);
}

inline bool isUniquePtr(const CppVarType* varType)
{
  return isUniquePtr(varType->baseType());
}

inline bool isUniquePtr(const CppVar* var)
{
  return isUniquePtr(var->varType());
}

inline std::string convertUniquePtr(const std::string& typeName)
{
  auto newName = typeName.substr(16, typeName.size() - 17);
  return newName;
}

inline std::unique_ptr<CppVarType> convertUniquePtr(const CppVarType*  typeObj)
{
  const std::string& baseType = typeObj->baseType();
  auto newName = convertUniquePtr(baseType);

  return std::make_unique<CppVarType>(newName, typeObj->typeModifier());
}
