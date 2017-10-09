#pragma once

#include "cibobj.h"
#include "cibparams.h"

#include "cppdom.h"
#include "cppindent.h"

#include <map>
#include <vector>

//////////////////////////////////////////////////////////////////////////

class CppProgramEx;

typedef std::vector<CibCppFunction*>			              CibCppFunctionArray;
typedef std::vector<CibCppCompound*>			              CibCppCompoundArray;
typedef std::map<CppObjProtLevel, CibCppCompoundArray>	CibCppInheritInfo;
typedef std::map<std::string, const CibCppObj*>		      TypeNameToCibCppObj;

/**
* Responsible for emitting code required for CIB functionality of C++ compound object.
*/
class CibCppCompound : public CibCppObj
{
public:
  CibCppInheritInfo parents_;             // List of all parents from which this compound object is derived.
  CibCppInheritInfo children_;            // List of all children which are derived from this compound object.

private:
  CppCompound*                cppCompoundObj_;
  CibCppCompound*             outer_;     // This will be NULL unless this class belongs to some other namespace/class/struct/union.
  bool inline_;                           // true when all non-static methods are inline.
  bool interfaceLike_;
  bool facadeLike_;

  CibCppFunctionArray needsBridging_;     // Array of all functions that require bridging for implementation at client side.
  mutable TypeNameToCibCppObj typeNameToCibCppObj_;

  friend class CibCppFunction;

  void emitBridgeDecl(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CppIndent indentation = CppIndent());

public:
  CibCppCompound(CppCompound* cppClassObj, CibCppCompound* outer = NULL)
    : cppCompoundObj_(cppClassObj)
    , outer_(outer)
    , inline_(false)
    , interfaceLike_(false)
    , facadeLike_(false)
  {
  }

  CppCompound* getCppCompound() const
  {
    return cppCompoundObj_;
  }
  /// @return name of this class.
  const std::string&   name() const
  {
    return cppCompoundObj_->name_;
  }
  /// @return full name of this class.
  std::string   fullName() const
  {
    if (outer_ && (outer_->cppCompoundObj_->isNamespaceLike()))
      return outer_->fullName() + "::" + cppCompoundObj_->name_;
    else
      return cppCompoundObj_->name_;
  }
  /// @return Unique name of this class
  std::string   uniqName() const
  {
    std::string uname = fullName();
    std::replace(uname.begin(), uname.end(), ':', '_');
    return uname;
  }
  /// @return name of handle class for this compound object.
  std::string   handleName(const CibParams& cibParams) const
  {
    return cibParams.classHandlePrefix + cppCompoundObj_->name_;
  }
  /// @return full name of handle class for this compound object.
  std::string   fullHandleName(const CibParams& cibParams) const
  {
    return "::" + fullName() + "::" + handleName(cibParams);
  }
  /// @return Name of variable for pointer of this compound object.
  std::string objName() const
  {
    return "p" + cppCompoundObj_->name_ + "Obj";
  }
  /// @return Name of bridge class.
  std::string bridgeName() const
  {
    return "CppToC::" + fullName();;
  }
  /// @return Name of function that casts to object of parent class
  std::string castToBaseName(const CibCppCompound* base, const CibParams& cibParams) const
  {
    return cibParams.castToBasePrefix + base->uniqName();
  }
  /// @return CibId of function that casts to object of parent class
  std::string cibIdOfCastToBaseName(const CibCppCompound* base, const CibParams& cibParams) const
  {
    return "::_cib_::" + cibParams.moduleName + "Lib" + wrappingNses() + "::" + name() + "::kCIBID_" + castToBaseName(base, cibParams);
  }
  /// @return string that represents a sequence of all wrapping namespaces
  std::string wrappingNamespaceDeclarations() const
  {
    if (outer_ == NULL || outer_->cppCompoundObj_->isCppFile())
      return "";
    return outer_->wrappingNamespaceDeclarations() + "namespace " + outer_->name() + " {";
  }
  ///
  std::string wrappingNses() const
  {
    if (outer_ == NULL || outer_->cppCompoundObj_->isCppFile())
      return "::";
    return outer_->wrappingNses() + outer_->name();
  }
  /// @return sequence of closing braces that closes all wrapping namespace definitions.
  std::string closingBracesForWrappingNamespaces() const
  {
    if (outer_ == NULL || outer_->cppCompoundObj_->isCppFile())
      return "";
    return outer_->closingBracesForWrappingNamespaces() + '}';
  }
  /// @return CibId of this compound object
  std::string cibId(const CibParams& cibParams) const
  {
    return "::_cib_::" + cibParams.moduleName + "Lib" + wrappingNses() + "::kCIBID_" + name();
  }
  ///@ return CibCppObj corresponding to name of a given type
  const CibCppObj* resolveTypeName(const std::string& typeName, const CppProgramEx& cppProgram) const;
  ///@ return The outer compound object (class/namespace/etc) that owns this one.
  const CibCppCompound* outer() const
  {
    return outer_;
  }
  /**
  * @ return true if this compound object is interface-like.
  * \note Any class that has a public virtual function and somewhere there exists at-least one
  * function that accepts pointer/reference of that class is an interface-like class.
  */
  bool isInterfaceLike() const
  {
    return interfaceLike_;
  }
  /**
  * @ return true if this compound object is facade-like.
  * \note Any class that has a public virtual function and somewhere there exists at-least one
  * function that returns pointer/reference of that class is a facade-like class.
  */
  bool isFacadeLike() const
  {
    return facadeLike_;
  }
  void setIsInline()
  {
    inline_ = true;
  }
  void emitDecl(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CppIndent indentation = CppIndent());
  void emitDefn(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CppIndent indentation = CppIndent());
  void emitLibGlueCode(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CppIndent indentation = CppIndent());
  void emitUsrGlueCode(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CppIndent indentation = CppIndent());
  void emitMetaInterfaceFactoryDecl(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CppIndent indentation = CppIndent());
  void emitCodeToPopulateMetaInterfaceRepository(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CppIndent indentation = CppIndent());
  void emitFromHanldeDecl(std::ostream& stm, const CibParams& cibParams, CppIndent indentation = CppIndent()) const;
  // Internal: Ideally should have been private with class CppProgramEx as friend.
  void setInterfaceLike()
  {
    interfaceLike_ = true;
  }
  void setFacadeLike()
  {
    facadeLike_ = true;
  }
};
