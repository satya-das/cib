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

#include "cib-program.h"
#include "cibcompound.h"

#include <algorithm>

bool CibProgram::isSmartPtr(const std::string& typeName) const
{
  if (smartPtrNames_.count(typeName))
    return true;
  auto nameEndPos = typeName.find('<');
  if (nameEndPos == typeName.npos)
    return false;
  return isSmartPtr(typeName.substr(0, nameEndPos));
}

bool CibProgram::isCopyable(const CppVar* var) const
{
  if (ptrLevel(var->varType()))
    return true;
  const auto& varType = baseType(var->varType());
  if (isSmartPtr(varType))
    return false;
  if (strstr(varType.c_str(), "unique_ptr"))
    return false;
  if (strstr(varType.c_str(), "atomic"))
    return false;
  if (strstr(varType.c_str(), "ostringstream"))
    return false;
  if (strstr(varType.c_str(), "istringstream"))
    return false;

  return true;
}

std::string CibProgram::convertSmartPtr(const std::string& typeName) const
{
  auto nameStartPos = typeName.find('<') + 1;
  auto nameEndPos   = typeName.find_last_of('>');

  return typeName.substr(nameStartPos, nameEndPos - nameStartPos);
}
