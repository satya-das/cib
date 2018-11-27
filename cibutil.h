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

#include "cppconst.h"
#include "cppdom.h"
#include "cpputil.h"

#include <string>

class CibHelper;
struct CibCppCompound;
struct CppVarType;

struct CibParams;

struct TypeResolver
{
  TypeResolver(const CibCppCompound* owner = nullptr, const CibHelper* helper = nullptr)
    : owner_(owner)
    , cppProgram_(helper)
  {
  }
  // FIXME: It should actually return CppObj, but for now lets assume it will always be a compound
  // object.
  const CibCppCompound* operator()(const std::string& typeName) const;

private:
  const CibCppCompound* owner_;
  const CibHelper*      cppProgram_;
};

struct VarTypeResolver : TypeResolver
{
  VarTypeResolver(const CibParams&      cibParams,
                  const CibCppCompound* owner    = nullptr,
                  const CibHelper*      helper   = nullptr,
                  bool                  isHandle = false)
    : TypeResolver(owner, helper)
    , cibParams_(cibParams)
    , isHandle_(isHandle)
  {
  }

  std::string operator()(const std::string& typeName) const;

private:
  const CibParams& cibParams_;
  bool             isHandle_;
};

inline std::string longName(const CppEnum* enumObj)
{
  std::string ret = "::" + enumObj->name_;
  if (enumObj->owner_)
  {
    auto ownerFullName = enumObj->owner_->fullName();
    if (!ownerFullName.empty())
      ret = "::" + ownerFullName + ret;
  }

  return ret;
}

inline std::string longName(const CppTypedefName* typedefObj)
{
  std::string ret = "::" + typedefObj->var_->name();
  if (typedefObj->owner_)
  {
    auto ownerFullName = typedefObj->owner_->fullName();
    if (!ownerFullName.empty())
      ret = "::" + ownerFullName + ret;
  }

  return ret;
}

inline std::string longName(const CppUsingDecl* usingDecl)
{
  std::string ret = "::" + usingDecl->name_;
  if (usingDecl->owner_)
  {
    auto ownerFullName = usingDecl->owner_->fullName();
    if (!ownerFullName.empty())
      ret = "::" + ownerFullName + ret;
  }

  return ret;
}

inline std::string longName(const CppFunctionPtr* fptr)
{
  std::string ret = "::" + fptr->name_;
  if (fptr->owner_)
  {
    auto ownerFullName = fptr->owner_->fullName();
    if (!ownerFullName.empty())
      ret = "::" + ownerFullName + ret;
  }

  return ret;
}

std::string longName(const CibCppCompound* compound);

std::string longName(const CppObj* typeObj);

/*!
 * Parses type declaration.
 * It is intended to parse types that can be used as template arguments.
 */
CppVarType* parseType(const std::string& s);

//! https://cppinsights.io/lnk?code=I2luY2x1ZGUgPGNzdGRpbz4KI2luY2x1ZGUgPHZlY3Rvcj4KCnRlbXBsYXRlPHR5cGVuYW1lIFQ+CnZvaWQgZihjb25zdCBUKikgLy8xLCAwYjAxCnsKfQoKaW50IG1haW4oKQp7CiAgZjxjb25zdCBpbnQqPigwKTsgLy8xLCAwYjAxCiAgLy8gdm9pZCBmPGNvbnN0IGludCAqPihjb25zdCBpbnQgKmNvbnN0ICopCiAgLy8gMiwgMGIxMQogIGY8Y29uc3QgaW50Kio+KDApOyAvLzIsIDBiMDEKICAvLyB2b2lkIGY8Y29uc3QgaW50ICoqPihjb25zdCBpbnQgKipjb25zdCAqKQogIC8vIDMsIDBiMTAxCn0K&rev=1.0
inline CppTypeModifier resolveTypeModifier(const CppTypeModifier& paramModifier, const CppTypeModifier& templateArg)
{
  return CppTypeModifier{
    (templateArg.refType_ > paramModifier.refType_) ? templateArg.refType_ : paramModifier.refType_,
    static_cast<uint8_t>(paramModifier.ptrLevel_ + templateArg.ptrLevel_),
    static_cast<uint8_t>(templateArg.constBits_ | (paramModifier.constBits_ << templateArg.ptrLevel_))};
}

inline void normalizeConst(CppVarType* varType)
{
  if (varType->typeAttr_ & kConst)
  {
    varType->typeModifier_.constBits_ |= 1;
    varType->typeAttr_ ^= kConst;
  }
}
