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

#include "cibparams.h"

#include "cppast.h"
#include "cppindent.h"

#include "cppfunc-info-accessor.h"
#include "cppvar-info-accessor.h"

#include <string>

//////////////////////////////////////////////////////////////////////////

struct CibCompound;

class CibHelper;
class CibIdData;

/*!
 * Purpose of function prototype.
 *
 * For every function and methods CIB needs to generate multiple functions
 * for different purpose. Each of these functions will have slightly varying
 * prototype.
 * So, while emitting function for different part of glue code their purpose
 * is needed to be known to generate the right prototype.
 */
enum FuncProtoPurpose
{
  kPurposeBaseLine = __LINE__, //!< This is unusable const, don't use it.

  kPurposeGlueCode               = (1 << (__LINE__ - kPurposeBaseLine)),
  kPurposeAbiLayer               = (1 << (__LINE__ - kPurposeBaseLine)) | kPurposeGlueCode,
  kPurposeLibraryAbi             = (1 << (__LINE__ - kPurposeBaseLine)) | kPurposeAbiLayer,
  kPurposeClientAbi              = (1 << (__LINE__ - kPurposeBaseLine)) | kPurposeAbiLayer,
  kPurposeLibGlueCode            = (1 << (__LINE__ - kPurposeBaseLine)) | kPurposeGlueCode,
  kPurposeClientGlueCode         = (1 << (__LINE__ - kPurposeBaseLine)) | kPurposeGlueCode,
  kPurposeSignature              = (1 << (__LINE__ - kPurposeBaseLine)),
  kPurposeSigForVirtualFuncMatch = (1 << (__LINE__ - kPurposeBaseLine)),
  kPurposeProxyDecl              = (1 << (__LINE__ - kPurposeBaseLine)),
  kPurposeProxyDefn              = (1 << (__LINE__ - kPurposeBaseLine)),
  kPurposeProxyDefnReturnType    = (1 << (__LINE__ - kPurposeBaseLine)),
  kPurposeProxyProcType          = (1 << (__LINE__ - kPurposeBaseLine)) | kPurposeClientGlueCode,
  kPurposeGenericProxy           = (1 << (__LINE__ - kPurposeBaseLine)) | kPurposeLibGlueCode,
  kPurposeGeneric                = (1 << (__LINE__ - kPurposeBaseLine)) | kPurposeClientGlueCode,
  kPurposeCApi                   = (1 << (__LINE__ - kPurposeBaseLine)) | kPurposeGlueCode,
  kPurposeProxyCApi              = (1 << (__LINE__ - kPurposeBaseLine)) | kPurposeGlueCode,
  kPurposeGenericProxyProcType   = (1 << (__LINE__ - kPurposeBaseLine)) | kPurposeGlueCode,
  kPurposeInvokeHelper           = (1 << (__LINE__ - kPurposeBaseLine)),
  kPurposeGenericProxyCtorInit   = (1 << (__LINE__ - kPurposeBaseLine)),
  kPurposeTemplateSpecialization = (1 << (__LINE__ - kPurposeBaseLine)) | kPurposeProxyDefn,
};

/*!
 * Helper class to deal with function-like C++ constructs, viz. constructors, destructors, and
 * regular functions. There is too much similiarity in constructor, destructor, and function but
 * they are different too. cppparser has three different classes for these and it makes sense. But
 * for purpose of cib their similarity is more important than their differences and so
 * CibFunctionHelper provides a uniform interface and behaviour to deal with them uniformly. It is a
 * wrapper class that provides access to underlying objects which are purposfully const.
 */
class CibFunctionHelper
{
private:
  union
  {
    const CppObj*           cppObj_;
    const CppConstructor*   ctor_;
    const CppDestructor*    dtor_;
    const CppFunction*      func_;
    const CppTypeConverter* converter_;
  };

public:
  CibFunctionHelper(const CppObj* cppObj);
  CibFunctionHelper(const std::unique_ptr<CppObj>& cppObj)
    : CibFunctionHelper(cppObj.get())
  {
  }
  CibFunctionHelper(const std::unique_ptr<const CppObj>& cppObj)
    : CibFunctionHelper(cppObj.get())
  {
  }
  CibFunctionHelper(const CppConstructor* ctor)
    : ctor_(ctor)
  {
  }
  CibFunctionHelper(const CppDestructor* dtor)
    : dtor_(dtor)
  {
  }
  CibFunctionHelper(const CppFunction* func)
    : func_(func)
  {
  }
  operator bool() const
  {
    return cppObj_ != nullptr;
  }
  operator const CppObj*() const
  {
    return cppObj_;
  }
  CppAccessType accessType() const
  {
    return cppObj_->accessType_;
  }
  bool isConstructor() const
  {
    return cppObj_->objType_ == CppObjType::kConstructor;
  }
  bool isCopyConstructor() const
  {
    return isConstructor() && ctor_->isCopyConstructor();
  }
  bool isMoveConstructor() const
  {
    return isConstructor() && ctor_->isMoveConstructor();
  }
  bool isConstructorLike() const
  {
    return isConstructor() || isCopyConstructor() || isMoveConstructor();
  }
  bool isDestructor() const
  {
    return cppObj_->objType_ == CppObjType::kDestructor;
  }
  bool isTypeConverter() const
  {
    return cppObj_->objType_ == CppObjType::kTypeConverter;
  }
  bool isStatic() const
  {
    return (func_->attr() & kStatic) == kStatic;
  }
  bool isFriend() const
  {
    return (func_->attr() & kFriend) == kFriend;
  }
  bool isInline() const
  {
    return (func_->attr() & kInline) == kInline;
  }
  bool isVirtual() const
  {
    return (func_->attr() & (kVirtual | kOverride | kFinal)) != 0;
  }
  bool isPureVirtual() const
  {
    return (func_->attr() & kPureVirtual) == kPureVirtual;
  }
  bool isFinal() const
  {
    return (func_->attr() & kFinal) == kFinal;
  }
  bool hasAttr(CppIdentifierAttrib attr) const
  {
    return (func_->attr() & attr) == attr;
  }
  bool isOveriddable() const
  {
    return isVirtual() && !isFinal();
  }
  bool isDeleted() const
  {
    return ::isDeleted(func_);
  }
  bool isConst() const
  {
    return (func_->attr() & kConst) == kConst;
  }
  bool isFunction() const
  {
    return !isConstructor() && !isDestructor() && !isTypeConverter();
  }
  bool isMethod() const
  {
    return isFunction() && ::isMethod(func_);
  }
  bool hasDefinition() const
  {
    return func_->defn() != nullptr;
  }
  bool isTemplated() const
  {
    return func_->templateParamList();
  }
  bool isOutOfClassDefinition() const
  {
    return hasDefinition() && (funcName().find(":") != std::string::npos);
  }
  bool hasVariadicParam() const
  {
    if (!isFunction() || !hasParams())
      return false;
    const auto* params = getParams();
    CppVarEPtr  var    = params->back();
    return var && (var->varType()->paramPack_ || (baseType(var) == "..."));
  }
  CibCompound*  getOwner() const;
  std::uint32_t getAttr() const
  {
    return func_->attr();
  }

  bool hasParams() const
  {
    if (isDestructor() || isTypeConverter() || (func_->params() == nullptr) || func_->params()->empty())
      return false;
    // It may happen there is parameter but it is a 'void' one.
    const auto& param = func_->params()->front();
    CppVarEPtr  var   = param;
    if (!var)
      return true;
    return !isVoid(var->varType());
  }
  const CppParamVector* getParams() const
  {
    return !hasParams() ? nullptr : func_->params();
  }
  CppVarType* returnType() const
  {
    if (isTypeConverter())
      return converter_->to_.get();
    else if (isFunction())
      return func_->retType_.get();
    else
      return nullptr;
  }

  bool canThrow() const
  {
    return hasAttr(CppIdentifierAttrib::kNoExceptFalse)
           || (!hasAttr(CppIdentifierAttrib::kNoExcept) && !isDestructor());
  }

  bool emitCodeToHandleException(const CibParams& cibParams) const
  {
    return cibParams.handleException && canThrow();
  }

  /// Name of function.
  const std::string& funcName() const
  {
    return func_->name_;
  }

  /// ProcName that is used to name the variable that holds the function pointer.
  std::string procName() const
  {
    std::string pname;
    if (isCopyConstructor())
      pname = "__zz_cib_Copy";
    else if (isConstructor())
      pname = "__zz_cib_New";
    else if (isDestructor())
      pname = "__zz_cib_Delete";
    else
      pname = modifyName(funcName());

    return pname;
  }

  /// @return signature of this method.
  std::string signature(const CibHelper& helper, FuncProtoPurpose purpose = kPurposeSignature) const;

  /// Emits function arguments for function definition/declaration.
  void emitArgsForDecl(std::ostream& stm, FuncProtoPurpose purpose, const CibHelper& helper) const;
  void emitSignature(std::ostream& stm, const CibHelper& helper, FuncProtoPurpose purpose) const;
  /// Emits function arguments for function call.
  void emitArgsForCall(std::ostream&    stm,
                       const CibHelper& helper,
                       const CibParams& cibParams,
                       FuncProtoPurpose purpose,
                       CppIndent        indentation) const;
  /// Emits declaration as originally defined/declared.
  void emitOrigDecl(std::ostream&    stm,
                    const CibHelper& helper,
                    const CibParams& cibParams,
                    FuncProtoPurpose purpose,
                    CppIndent        indentation = CppIndent()) const;
  void emitCAPIDecl(std::ostream&      stm,
                    const CibHelper&   helper,
                    const CibParams&   cibParams,
                    const CibCompound* callingOwner,
                    const std::string& capiName,
                    FuncProtoPurpose   purpose) const;
  /// Emits the raw C API definition corresponding to C++ method, meant for library side glue code.
  void emitCAPIDefn(std::ostream&      stm,
                    const CibHelper&   helper,
                    const CibParams&   cibParams,
                    const CibCompound* callingOwner,
                    const std::string& capiName,
                    FuncProtoPurpose   purpose,
                    CppIndent          indentation = CppIndent()) const;
  void emitDefn(std::ostream&      stm,
                bool               asInline,
                const CibHelper&   helper,
                const CibParams&   cibParams,
                const CibCompound* callingOwner,
                const CibIdData*   cibIdData,
                CppIndent          indentation = CppIndent()) const;
  void emitGenericProxyDefn(std::ostream&      stm,
                            const CibHelper&   helper,
                            const CibParams&   cibParams,
                            const std::string& capiName,
                            CppIndent          indentation = CppIndent()) const;
  void emitGenericDefn(std::ostream&      stm,
                       const CibHelper&   helper,
                       const CibParams&   cibParams,
                       const std::string& capiName,
                       FuncProtoPurpose   purpose,
                       CppIndent          indentation = CppIndent()) const;
  /// Emits the ProcType definition for the C++ method, meant for client side glue code.
  void emitProcType(std::ostream&    stm,
                    const CibHelper& helper,
                    const CibParams& cibParams,
                    FuncProtoPurpose purpose,
                    CppIndent        indentation = CppIndent()) const;
  void emitCAPIReturnType(std::ostream& stm, const CibHelper& helper, CppIndent indentation = CppIndent()) const;

private:
  static std::string modifyName(const std::string& funcname);
};
