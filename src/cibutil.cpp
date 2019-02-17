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

#include "cibutil.h"
#include "cibcompound.h"
#include "cibhelper.h"

#include "cppdom.h"
#include "cppparser.h"

#include <cctype>

const CibCppCompound* TypeResolver::operator()(const std::string& typeName) const
{
  if (!owner_ || !cppProgram_)
    return nullptr;
  auto* resolvedCppObj = owner_->resolveTypeName(typeName, *cppProgram_);
  return resolvedCppObj && resolvedCppObj->isClassLike() ? static_cast<const CibCppCompound*>(resolvedCppObj) : nullptr;
}

std::string VarTypeResolver::operator()(const std::string& typeName) const
{
  auto resolvedType = TypeResolver::operator()(typeName);
  if (!resolvedType)
    return typeName;
  return isHandle_ ? "__zz_cib::HANDLE" : "::" + resolvedType->fullName();
}

CppVarType* parseType(std::string s)
{
  CppVarType*  ret      = nullptr;
  CppCompound* compound = nullptr;
  do
  {
    CppParser parser;
    s += " DummyVar;";
    s += '\0';
    s += '\0';
    compound = parser.parseStream(&s[0], s.size());
    if (compound == nullptr)
      break;
    if (compound->members_.empty())
      break;
    if (compound->members_.front()->objType_ != CppObj::kVar)
      break;
    auto* var = static_cast<CppVar*>(compound->members_.front());
    compound->members_.erase(compound->members_.begin());
    ret           = var->varType_;
    var->varType_ = nullptr;
    delete var;
  } while (false);
  delete compound;
  if (ret)
    normalizeConst(ret);
  return ret;
}

std::string longName(const CibCppCompound* compound)
{
  return compound->longName();
}

std::string longName(const CppFwdClsDecl* fwdCls)
{
  if (fwdCls->owner_->isCppFile())
    return "::" + fwdCls->name_;
  else
    return longName(fwdCls->owner_) + "::" + fwdCls->name_;
}

std::string longName(const CppObj* typeObj)
{
  switch (typeObj->objType_)
  {
    case CppObj::kEnum:
      return longName(static_cast<const CppEnum*>(typeObj));
    case CppObj::kTypedefName:
      return longName(static_cast<const CppTypedefName*>(typeObj));
    case CppObj::kUsingDecl:
      return longName(static_cast<const CppUsingDecl*>(typeObj));
    case CppObj::kFunctionPtr:
      return longName(static_cast<const CppFunctionPtr*>(typeObj));
    case CppObj::kCompound:
      return longName(static_cast<const CibCppCompound*>(typeObj));
    case CppObj::kFwdClsDecl:
      return longName(static_cast<const CppFwdClsDecl*>(typeObj));

    default:
      assert(false && "May be we need more case above");
      return "";
  }
}

std::string expandNs(std::string::const_iterator beg, std::string::const_iterator end)
{
  if (beg == end)
    return std::string();
  if (*beg == ':')
    return expandNs(beg + 2, end);
  auto itr = std::adjacent_find(beg, end, [](char c1, char c2) -> bool { return c1 == c2 && c1 == ':'; });

  auto expanded = std::string("namespace ") + std::string(beg, itr) + " {";
  if (itr == end)
    return expanded;
  else
    return expanded + std::string(" ") + expandNs(itr + 2, end);
}

std::string closingNs(std::string::const_iterator beg, std::string::const_iterator end)
{
  if (beg == end)
    return std::string();
  if (*beg == ':')
    return closingNs(beg + 2, end);
  auto        itr = std::adjacent_find(beg, end, [](char c1, char c2) -> bool { return c1 == c2 && c1 == ':'; });
  std::string closingBraces = "}";
  if (itr == end)
    return closingBraces;
  else
    return closingBraces + closingNs(itr + 2, end);
}
