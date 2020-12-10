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
      return ret;
    }
  } while (false);

  return nullptr;
}

CppExprPtr parseExpr(std::string s)
{
  do
  {
    CppParser parser;
    s += ";";
    s += '\0';
    s += '\0';
    auto compound = parser.parseStream(&s[0], s.size());
    if (compound == nullptr)
      break;
    if (compound->members().empty())
      break;
    if (compound->members().front()->objType_ != CppObjType::kExpression)
      break;
    auto obj = compound->deassocMemberAt(0);
    if (obj->objType_ == CppExpr::kObjectType)
    {
      auto* ret = static_cast<CppExpr*>(obj.release());
      return CppExprPtr(ret);
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
      return longName(static_cast<const CppFunctionPointer*>(typeObj));
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

TemplateArgs CollectTemplateArgs(const std::string& s)
{
  auto b = s.find('<');
  auto e = s.length();
  assert(b < e);
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

std::set<const CibCompound*> collectAstDependencies(const std::set<const CppObj*>& cppObjs)
{
  std::set<const CibCompound*> asts;
  for (auto obj : cppObjs)
  {
    auto* ast = CibCompound::getFileAstObj(obj);
    asts.insert(ast);
  }
  return asts;
}

std::string getHeaderPath(const CibCompound* fileAst, const CibParams& cibParams, bool forProxy)
{
  assert(isCppFile(fileAst));

  if (fileAst->isStlClass())
    return '<' + bfs::path(fileAst->name()).filename().string() + '>';
  else if (fileAst->isStlHelpereClass())
    return '"' + cibParams.stlHelperDirName + '/' + bfs::path(fileAst->name()).filename().string() + '"';
  else
  {
    const auto& dependentPath = cibParams.inputPath;
#if EMIT_HELPER_HEADER
    auto helperHeaderPath = bfs::relative(fileAst->name(), dependentPath);
    if (!forProxy)
      helperHeaderPath = bfs::path("__zz_cib_helpers") / helperHeaderPath.parent_path()
                         / ("__zz_cib_helper-" + helperHeaderPath.filename().string());
    return '"' + helperHeaderPath.string() + '"';
#else
    return '"' + bfs::relative(fileAst->name(), dependentPath).string() + '"';
#endif
  }
}

std::string getHeaderPath(const std::string& className,
                          const CibHelper&   helper,
                          const CibParams&   cibParams,
                          bool               forProxy)
{
  const auto* compound = helper.getCppObjFromTypeName(className);
  if (compound == nullptr)
    return std::string();
  return getHeaderPath(CibCompound::getFileAstObj(compound), cibParams, forProxy);
}

std::set<std::string> collectHeaderDependencies(const std::set<const CibCompound*>& compoundObjs,
                                                const CibParams&                    cibParams,
                                                bool                                forProxy)
{
  std::set<std::string> headers;
  for (const auto* compound : compoundObjs)
    headers.insert(getHeaderPath(compound, cibParams, forProxy));

  return headers;
}

std::set<std::string> collectHeaderDependencies(const StringVector& classNames,
                                                const CibHelper&    helper,
                                                const CibParams&    cibParams,
                                                bool                forProxy)

{
  std::set<std::string> headers;
  for (const auto& className : classNames)
    headers.insert(getHeaderPath(className, helper, cibParams, forProxy));

  return headers;
}
