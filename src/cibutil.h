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
#include "cppconst.h"
#include "cpputil.h"

#include "cppcompound-accessor.h"

#include <string>

class CibHelper;
struct CibCompound;
struct CppVarType;

struct CibParams;

inline std::string longName(const CppEnum* enumObj)
{
  std::string ret = "::" + enumObj->name_;
  if (enumObj->owner())
  {
    auto ownerFullName = fullName(enumObj->owner());
    if (!ownerFullName.empty())
      ret = "::" + ownerFullName + ret;
  }

  return ret;
}

inline std::string longName(const CppTypedefName* typedefObj)
{
  std::string ret = "::" + typedefObj->var_->name();
  if (typedefObj->owner())
  {
    auto ownerFullName = fullName(typedefObj->owner());
    if (!ownerFullName.empty())
      ret = "::" + ownerFullName + ret;
  }

  return ret;
}

inline std::string longName(const CppUsingDecl* usingDecl)
{
  std::string ret = "::" + usingDecl->name_;
  if (usingDecl->owner())
  {
    auto ownerFullName = fullName(usingDecl->owner());
    if (!ownerFullName.empty())
      ret = "::" + ownerFullName + ret;
  }

  return ret;
}

inline std::string longName(const CppFunctionPtr* fptr)
{
  std::string ret = "::" + fptr->name_;
  if (fptr->owner())
  {
    auto ownerFullName = fullName(fptr->owner());
    if (!ownerFullName.empty())
      ret = "::" + ownerFullName + ret;
  }

  return ret;
}

std::string longName(const CibCompound* compound);

std::string longName(const CppObj* typeObj);

/*!
 * Parses type declaration.
 * It is intended to parse types that can be used as template arguments.
 */
CppVarTypePtr parseType(std::string s);

//! https://cppinsights.io/lnk?code=I2luY2x1ZGUgPGNzdGRpbz4KI2luY2x1ZGUgPHZlY3Rvcj4KCnRlbXBsYXRlPHR5cGVuYW1lIFQ+CnZvaWQgZihjb25zdCBUKikgLy8xLCAwYjAxCnsKfQoKaW50IG1haW4oKQp7CiAgZjxjb25zdCBpbnQqPigwKTsgLy8xLCAwYjAxCiAgLy8gdm9pZCBmPGNvbnN0IGludCAqPihjb25zdCBpbnQgKmNvbnN0ICopCiAgLy8gMiwgMGIxMQogIGY8Y29uc3QgaW50Kio+KDApOyAvLzIsIDBiMDEKICAvLyB2b2lkIGY8Y29uc3QgaW50ICoqPihjb25zdCBpbnQgKipjb25zdCAqKQogIC8vIDMsIDBiMTAxCiAgZjxpbnQqPigwKTsgLy8xLCAwYjAwCiAgLy8gdm9pZCBmPGludCAqPihpbnQgKmNvbnN0ICopCiAgLy8gMiwgMGIwMQp9Cg==&rev=1.0
inline CppTypeModifier resolveTypeModifier(const CppTypeModifier& paramModifier, const CppTypeModifier& templateArg)
{
  return CppTypeModifier{
    (templateArg.refType_ > paramModifier.refType_) ? templateArg.refType_ : paramModifier.refType_,
    static_cast<uint8_t>(paramModifier.ptrLevel_ + templateArg.ptrLevel_),
    static_cast<uint8_t>(templateArg.constBits_ | (paramModifier.constBits_ << templateArg.ptrLevel_))};
}

inline void normalizeConst(CppVarType* varType)
{
  if (varType->typeAttr() & kConst)
  {
    varType->typeModifier().constBits_ |= 1;
    varType->removeAttr(kConst);
  }
}
/*!
 * @return "namespace X { namespace Y {" for X::Y as input.
 */
std::string expandNs(std::string::const_iterator beg, std::string::const_iterator end);
/*!
 * @return "}}" for X::Y as input.
 * @sa expandNs.
 */
std::string closingNs(std::string::const_iterator beg, std::string::const_iterator end);

using StringVector = std::vector<std::string>;
using TemplateArgs = StringVector;

TemplateArgs CollectTemplateArgs(const std::string& s);
