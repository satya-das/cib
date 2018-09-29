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

#include "cibfunction_helper.h"
#include "cibcompound.h"
#include "cibfunction.h"
#include "cibhelper.h"
#include "cppwriter.h"

#include "cibcompound.h"
#include "cppdom.h"

#include <map>
#include <strstream>

//////////////////////////////////////////////////////////////////////////

CibFunctionHelper::CibFunctionHelper(const CppObj* cppObj)
  : cppObj_(cppObj->isFunctionLike() ? cppObj : nullptr)
{
}

CppConstructor* CibFunctionHelper::CreateConstructor(CppObjProtLevel prot,
                                                     std::string     name,
                                                     CppParamList*   params,
                                                     CppMemInitList* memInitList,
                                                     unsigned int    attr)
{
  return new CibCppConstructor(prot, name, params, memInitList, attr);
}

CppDestructor* CibFunctionHelper::CreateDestructor(CppObjProtLevel prot, std::string name, unsigned int attr)
{
  return new CibCppDestructor(prot, name, attr);
}

CppFunction* CibFunctionHelper::CreateFunction(CppObjProtLevel prot,
                                               std::string     name,
                                               CppVarType*     retType,
                                               CppParamList*   params,
                                               unsigned int    attr)
{
  return new CibCppFunction(prot, std::move(name), retType, params, attr);
}

CibCppCompound* CibFunctionHelper::getOwner() const
{
  return static_cast<CibCppCompound*>(func_->owner_);
}

std::string CibFunctionHelper::signature(const CibHelper& helper) const
{
  std::ostrstream tmpbuf;
  emitSignature(tmpbuf, helper, kPurposeSignature);
  tmpbuf << ';';
  return std::string(tmpbuf.str(), tmpbuf.str() + tmpbuf.pcount());
}

using OperNameMap = std::map<std::string, std::string>;
// clang-format off
static OperNameMap kOperNameMap = {
  {"+", "Plus"},       {"-", "Minus"},   {"*", "Mul"},      {"/", "Div"},     {"%", "Per"},       {"^", "Xor"},
  {"&", "And"},        {"|", "Or"},      {"~", "Toggle"},   {"!", "Not"},     {"=", "Equal"},     {"<", "LT"},
  {">", "GT"},         {"+=", "PlusEq"}, {"-=", "MinusEq"}, {"*=", "MulEq"},  {"/=", "DivEq"},    {"%=", "PerEq"},
  {"^=", "XorEq"},     {"&=", "AndEq"},  {"|=", "OrEq"},    {"<<", "LShift"}, {">>", "RShift"},   {"<<=", "LShiftEq"},
  {">>=", "RShiftEq"}, {"==", "CmpEq"},  {"<=", "LE"},      {">=", "GE"},     {"<=>", "3WayCmp"}, {"&&", "LogAnd"},
  {"||", "LogOr"},     {"++", "Inc"},    {"--", "Dec"},     {",", "Comma"},   {"->", "Arrow"},    {"->*", "ArrowStar"},
  {"()", "App"},       {"[]", "Index"},  {"new", "New"},
  {"delete", "Delete"}, {"new[]", "NewArray"}, {"delete[]", "DeleteArray"}};
// clang-format on

std::string CibFunctionHelper::modifyIfOperator(const std::string& funcname)
{
  static const std::string kOper = "operator";
  if (funcname.compare(0, kOper.length(), kOper) != 0)
    return funcname;

  auto name = funcname.c_str() + kOper.length();
  // skip whitechars
  while ((*name == ' ') || (*name == '\t'))
    ++name;

  return "__zz_cib_Operator" + kOperNameMap[name];
}
