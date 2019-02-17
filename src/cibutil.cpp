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

#include "cppast.h"
#include "cppparser.h"

#include <cctype>

CppVarTypePtr parseType(std::string s)
{
  do
  {
    CppParser parser;
    s += " DummyVar;";
    s += '\0';
    s += '\0';
    auto compound = parser.parseStream(&s[0], s.size());
    if (compound == nullptr)
      break;
    if (compound->members().empty())
      break;
    if (compound->members().front()->objType_ != CppObjType::kVar)
      break;
    auto       obj = compound->deassocMemberAt(0);
    CppVarEPtr var = obj;
    if (var)
    {
      CppVarTypePtr ret(new CppVarType(*var->varType()));
      normalizeConst(ret.get());
      return ret;
    }
  } while (false);

  return nullptr;
}

std::string longName(const CibCompound* compound)
{
  return compound->longName();
}

std::string longName(const CppFwdClsDecl* fwdCls)
{
  if (isCppFile(fwdCls->owner()))
    return "::" + fwdCls->name_;
  else
    return longName(fwdCls->owner()) + "::" + fwdCls->name_;
}

std::string longName(const CppObj* typeObj)
{
  switch (typeObj->objType_)
  {
    case CppObjType::kEnum:
      return longName(static_cast<const CppEnum*>(typeObj));
    case CppObjType::kTypedefName:
      return longName(static_cast<const CppTypedefName*>(typeObj));
    case CppObjType::kUsingDecl:
      return longName(static_cast<const CppUsingDecl*>(typeObj));
    case CppObjType::kFunctionPtr:
      return longName(static_cast<const CppFunctionPtr*>(typeObj));
    case CppObjType::kCompound:
      return longName(static_cast<const CibCompound*>(typeObj));
    case CppObjType::kFwdClsDecl:
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
