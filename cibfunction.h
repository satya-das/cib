#pragma once

#include "cibobj.h"
#include "cibparams.h"

#include "cppdom.h"
#include "cppindent.h"

#include <string>

//////////////////////////////////////////////////////////////////////////

class CibCppCompound;
class CppProgramEx;

/**
* Represents a C++ function.
* It can be a global function, a namespace member or a method of a class/struct/union.
*/
class CibCppFunction : public CibCppObj
{
private:
  union
  {
    CppFunction* func_;
    CppConstructor* ctor_;
    CppDestructor* dtor_;
  };
  CibCppCompound* owner_;                 // Class of which this function is a member
  std::string procNameSfx_;               // Suffix to be used for proc name. It is needed to make overloaded methods have different proc name.
  unsigned int attr_;                     // e.g.: const, static, virtual, inline, etc.
  CppParamList*   params_;

  friend class CibCppCompound;
  /**
  * Attribute of function.
  * \note This is in addition of CppIdentifierAttrib defined in cppdom.
  */
  enum Type
  {
    kUnknown = 0x00000,
    kConstructor = 0x10000,
    kCopyConstructor = 0x20000 | kConstructor,
    kDestructor = 0x40000,
    kVirualDestructor = kDestructor | kVirtual,
    kPureVirtualDtor = kDestructor | kPureVirtual
  };

public:

  CibCppFunction(CppFunction* func, CibCppCompound* owner);
  CibCppFunction(CppConstructor* ctor, CibCppCompound* owner);
  CibCppFunction(CppDestructor* dtor, CibCppCompound* owner);

  bool isConstructor() const
  {
    return (attr_ & kConstructor) == kConstructor;
  }
  bool isCopyConstructor() const
  {
    return (attr_ & kCopyConstructor) == kCopyConstructor;
  }
  bool isDestructor() const
  {
    return (attr_ & kDestructor) == kDestructor;
  }
  bool isStatic() const
  {
    return (attr_ & kStatic) == kStatic;
  }
  bool isInline() const
  {
    return (attr_ & kInline) == kInline;
  }
  bool isVirtual() const
  {
    return (attr_ & kVirtual) == kVirtual;
  }
  bool isPureVirtual() const
  {
    return (attr_ & kPureVirtual) == kPureVirtual;
  }
  bool isConst() const
  {
    return (attr_ & kConst) == kConst;
  }
  bool isFunction() const
  {
    return !(isConstructor() || isDestructor());
  }
  bool isMethod() const;

  CibCppCompound* getOwner() const
  {
    return owner_;
  }

  void addAttrib(unsigned int attr)
  {
    attr_ |= attr;
  }

  bool hasParams() const
  {
    return params_ && params_->size() > 0;
  }
  CppParamList* getParams() const
  {
    return params_;
  }
  CppFunction* getCppFunction() const
  {
    return (isConstructor() || isDestructor()) ? NULL : func_;
  }

  /// Name of function.
  const std::string& funcName() const
  {
    if (isConstructor())
      return ctor_->name_;
    else if (isDestructor())
      return dtor_->name_;
    else
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
      pname = cibParams.ctorCAPIPrefix;
    else if (isDestructor())
      pname = cibParams.dtorCAPIPrefix;
    else
      pname = funcName();
    pname += procNameSfx_;

    return pname;
  }

  /// @return CibId of this compound object
  std::string cibId(const CibParams& cibParams) const;
  /// Sets proc name suffix
  void setProcNameSuffix(const std::string& sfx)
  {
    procNameSfx_ = sfx;
  }
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
