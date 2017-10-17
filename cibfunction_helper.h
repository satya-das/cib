#pragma once

#include "cibparams.h"

#include "cibfunction.h"
#include "cppdom.h"
#include "cppindent.h"

#include <string>

//////////////////////////////////////////////////////////////////////////

struct CibCppCompound;

class CppProgramEx;

/**
* Helper class to deal with function like C++ constructs, viz. constructors, destructors, and regular functions.
*/
class CibFunctionHelper
{
private:
  union
  {
    CppObj*             cppObj_;
    CibCppFunction*     func_;
    CibCppConstructor*  ctor_;
    CibCppDestructor*   dtor_;
  };

public:

  CibFunctionHelper(CppObj* cppObj);
  CibFunctionHelper(CibCppConstructor* ctor) : ctor_(ctor) {}
  CibFunctionHelper(CibCppDestructor* dtor) : dtor_(dtor) {}
  CibFunctionHelper(CibCppFunction* func) : func_(func) {}

  bool isConstructor() const
  {
    return cppObj_->objType_  == CppObj::kConstructor;
  }
  bool isCopyConstructor() const
  {
    return isConstructor() && ctor_->isCopyConstructor();
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
    return isFunction() && func_->owner_ && func_->owner_->isClassLike();
  }

  CibCppCompound* getOwner() const;

  bool hasParams() const
  {
    return !isDestructor() && func_->params_ && !func_->params_->empty();
  }
  CppParamList* getParams() const
  {
    return isDestructor() ? nullptr : func_->params_;
  }
  CppVarType* retType() const
  {
    return isFunction() ? func_->retType_ : nullptr;
  }
  CppFunction* getCppFunction() const
  {
    return (isConstructor() || isDestructor()) ? nullptr : func_;
  }

  /// Name of function.
  const std::string& funcName() const
  {
    return func_->name_;
  }

  /// Name of raw C API corresponding to method of C++ class.
  std::string capiName(const CibParams& cibParams) const
  {
    return procName(cibParams);
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
      pname = cibParams.ctorCAPIPrefix + ctor_->procNameSfx_;
    else if (isDestructor())
      pname = cibParams.dtorCAPIPrefix;
    else
      pname = funcName() + func_->procNameSfx_;

    return pname;
  }

  /// @return CibId of this compound object
  std::string cibId(const CibParams& cibParams) const;

  /// Emits function arguments for function definition/declaration.
  void emitArgsForDecl(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, bool resolveTypes = false, bool emitHandle = false) const;
  /// Emits function arguments for function call.
  void emitArgsForCall(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, bool emitHandle = false) const;
  /// Emits declaration as originally defined/declared.
  void emitOrigDecl(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CppIndent indentation = CppIndent()) const;
  /// Emits the raw C API definition corresponding to C++ method, meant for library side glue code.
  void emitCAPIDefn(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CppIndent indentation = CppIndent()) const;
  /// Emits the ProcType definition for the C++ method, meant for client side glue code.
  void emitProcType(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CppIndent indentation = CppIndent()) const;
};
