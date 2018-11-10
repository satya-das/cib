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

#include "cibfunction.h"
#include "cppdom.h"
#include "cppindent.h"

#include <string>

//////////////////////////////////////////////////////////////////////////

struct CibCppCompound;

class CibHelper;
class CibIdData;

enum class CallType
{
  kAsIs,
  kFromHandle,
  kToHandle,
  kDerefIfByVal,
  kRefIfByVal
};

enum EmitPurpose
{
  kPurposeBaseLine             = __LINE__, //!< This is unusable const, don't use it.
  kPurposeGlueCode             = (1 << (__LINE__ - kPurposeBaseLine)),
  kPurposeLibGlueCode          = (1 << (__LINE__ - kPurposeBaseLine)) | kPurposeGlueCode,
  kPurposeClientGlueCode       = (1 << (__LINE__ - kPurposeBaseLine)) | kPurposeGlueCode,
  kPurposeSignature            = (1 << (__LINE__ - kPurposeBaseLine)),
  kPurposeProxyDecl            = (1 << (__LINE__ - kPurposeBaseLine)),
  kPurposeProxyDefn            = (1 << (__LINE__ - kPurposeBaseLine)),
  kPurposeProxyProcType        = (1 << (__LINE__ - kPurposeBaseLine)) | kPurposeClientGlueCode,
  kPurposeGenericProxy         = (1 << (__LINE__ - kPurposeBaseLine)) | kPurposeLibGlueCode,
  kPurposeGeneric              = (1 << (__LINE__ - kPurposeBaseLine)) | kPurposeClientGlueCode,
  kPurposeCApi                 = (1 << (__LINE__ - kPurposeBaseLine)) | kPurposeGlueCode,
  kPurposeProxyCApi            = (1 << (__LINE__ - kPurposeBaseLine)) | kPurposeGlueCode,
  kPurposeGenericProxyProcType = (1 << (__LINE__ - kPurposeBaseLine)) | kPurposeGlueCode,
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
    const CppObj*            cppObj_;
    const CibCppConstructor* ctor_;
    const CibCppDestructor*  dtor_;
    const CibCppFunction*    func_;
  };

public:
  static CppConstructor* CreateConstructor(CppObjProtLevel prot,
                                           std::string     name,
                                           CppParamList*   params,
                                           CppMemInitList* memInitList,
                                           unsigned int    attr);
  static CppDestructor*  CreateDestructor(CppObjProtLevel prot, std::string name, unsigned int attr);
  static CppFunction*
  CreateFunction(CppObjProtLevel prot, std::string name, CppVarType* retType, CppParamList* params, unsigned int attr);

public:
  CibFunctionHelper(const CppObj* cppObj);
  CibFunctionHelper(const CibCppConstructor* ctor)
    : ctor_(ctor)
  {
  }
  CibFunctionHelper(const CibCppDestructor* dtor)
    : dtor_(dtor)
  {
  }
  CibFunctionHelper(const CibCppFunction* func)
    : func_(func)
  {
  }

  operator const CppObj*() const
  {
    return cppObj_;
  }
  CppObjProtLevel protectionLevel() const
  {
    return cppObj_->prot_;
  }
  bool isConstructor() const
  {
    return cppObj_->objType_ == CppObj::kConstructor;
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
    return cppObj_->objType_ == CppObj::kDestructor;
  }
  bool isStatic() const
  {
    return (func_->attr_ & kStatic) == kStatic;
  }
  bool isInline() const
  {
    return (func_->attr_ & kInline) == kInline;
  }
  bool isVirtual() const
  {
    return (func_->attr_ & kVirtual) == kVirtual;
  }
  bool isPureVirtual() const
  {
    return (func_->attr_ & kPureVirtual) == kPureVirtual;
  }
  bool isFinal() const
  {
    return (func_->attr_ & kFinal) == kFinal;
  }
  bool hasAttr(CppIdentifierAttrib attr) const
  {
    return (func_->attr_ & attr) == attr;
  }
  bool isOveriddable() const
  {
    return isVirtual() && !isFinal();
  }
  bool isDeleted() const
  {
    return func_->isDeleted();
  }
  bool isConst() const
  {
    return (func_->attr_ & kConst) == kConst;
  }
  bool isFunction() const
  {
    return !isConstructor() && !isDestructor();
  }
  bool isMethod() const
  {
    return isFunction() && func_->isMethod();
  }
  bool hasDefinition() const
  {
    return func_->defn_ != nullptr;
  }
  bool isTemplated() const
  {
    return func_->templSpec_ != nullptr;
  }
  bool hasVariadicParam() const
  {
    if (!isFunction() || !hasParams())
      return false;
    const auto* params = getParams();
    return (params->back().varObj->baseType() == "...");
  }
  CibCppCompound* getOwner() const;

  bool hasParams() const
  {
    if (isDestructor() || (func_->params_ == nullptr) || func_->params_->empty())
      return false;
    // It may happen there is parameter but it is a 'void' one.
    const auto& param = func_->params_->front();
    if (param.cppObj->objType_ != CppObj::kVar)
      return true;
    return !(param.varObj->varType_->isVoid());
  }
  CppParamList* getParams() const
  {
    return isDestructor() ? nullptr : func_->params_;
  }
  CppVarType* returnType() const
  {
    return isFunction() ? func_->retType_ : nullptr;
  }

  /// Name of function.
  const std::string& funcName() const
  {
    return func_->name_;
  }

  /// ProcType that is used by client side glue code to define function pointer variable.
  std::string procType(const CibParams& cibParams) const
  {
    return procName(cibParams) + "Proc";
  }

  /// ProcName that is used to name the variable that holds the function pointer.
  std::string procName(const CibParams& cibParams) const
  {
    std::string pname;
    if (isCopyConstructor())
      pname = cibParams.copyCtorCAPIPrefix;
    else if (isConstructor())
      pname = cibParams.ctorCAPIPrefix;
    else if (isDestructor())
      pname = cibParams.dtorCAPIPrefix;
    else
      pname = modifyIfOperator(funcName());

    return pname;
  }

  /// @return signature of this method.
  std::string signature(const CibHelper& helper) const;

  /// Emits function arguments for function definition/declaration.
  void emitArgsForDecl(std::ostream& stm, const CibHelper& helper, bool resolveTypes, EmitPurpose purpose) const;
  void emitSignature(std::ostream& stm, const CibHelper& helper, EmitPurpose purpose) const;
  /// Emits function arguments for function call.
  void emitArgsForCall(std::ostream& stm, const CibHelper& helper, const CibParams& cibParams, CallType callType) const;
  /// Emits declaration as originally defined/declared.
  void emitOrigDecl(std::ostream&    stm,
                    const CibHelper& helper,
                    const CibParams& cibParams,
                    EmitPurpose      purpose,
                    CppIndent        indentation = CppIndent()) const;
  void emitCAPIDecl(std::ostream&         stm,
                    const CibHelper&      helper,
                    const CibParams&      cibParams,
                    const CibCppCompound* callingOwner,
                    const std::string&    capiName,
                    EmitPurpose           purpose) const;
  /// Emits the raw C API definition corresponding to C++ method, meant for library side glue code.
  void emitCAPIDefn(std::ostream&         stm,
                    const CibHelper&      helper,
                    const CibParams&      cibParams,
                    const CibCppCompound* callingOwner,
                    const std::string&    capiName,
                    bool                  forProxy,
                    CppIndent             indentation = CppIndent()) const;
  void emitDefn(std::ostream&         stm,
                const CibHelper&      helper,
                const CibParams&      cibParams,
                const CibCppCompound* callingOwner,
                const CibIdData*      cibIdData,
                CppIndent             indentation = CppIndent()) const;
  void emitGenericProxyDefn(std::ostream&      stm,
                            const CibHelper&   helper,
                            const CibParams&   cibParams,
                            const std::string& capiName,
                            CppIndent          indentation = CppIndent()) const;
  void emitGenericDefn(std::ostream&      stm,
                       const CibHelper&   helper,
                       const CibParams&   cibParams,
                       const std::string& capiName,
                       EmitPurpose        purpose,
                       CppIndent          indentation = CppIndent()) const;
  /// Emits the ProcType definition for the C++ method, meant for client side glue code.
  void emitProcType(std::ostream&    stm,
                    const CibHelper& helper,
                    const CibParams& cibParams,
                    bool             forGenericProxy,
                    CppIndent        indentation = CppIndent()) const;
  void emitCAPIReturnType(std::ostream&    stm,
                          const CibHelper& helper,
                          bool             forGenericProxy,
                          CppIndent        indentation = CppIndent()) const;

private:
  static std::string modifyIfOperator(const std::string& funcname);
};
