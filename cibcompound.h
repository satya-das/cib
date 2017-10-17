#pragma once

#include "cibparams.h"

#include "cppdom.h"
#include "cppindent.h"
#include "cibfunction_helper.h"

#include <map>
#include <vector>

//////////////////////////////////////////////////////////////////////////

class CppProgramEx;
class CibFunctionHelper;

struct CibCppFunction;
struct CibCppCompound;

typedef std::vector<CibFunctionHelper>			            CibFunctionHelperArray;
typedef std::vector<CibCppCompound*>			              CibCppCompoundArray;
typedef std::map<CppObjProtLevel, CibCppCompoundArray>	CibCppInheritInfo;
typedef std::map<std::string, const CppObj*>		        TypeNameToCppObj;

/**
* Responsible for emitting code required for CIB functionality of C++ compound object.
*/
struct CibCppCompound : public CppCompound
{
public:
  using CppCompound::CppCompound;

public:
  CibCppInheritInfo parents_;             // List of all parents from which this compound object is derived.
  CibCppInheritInfo children_;            // List of all children which are derived from this compound object.

private:
  bool inline_{ false };                           // true when all non-static methods are inline.
  bool interfaceLike_{ false };
  bool facadeLike_{ false };

  CibFunctionHelperArray needsBridging_;     // Array of all functions that require bridging for implementation at client side.
  mutable TypeNameToCppObj typeNameToCibCppObj_;

  void emitBridgeDecl(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CppIndent indentation = CppIndent());

public:
  /// @return name of this class.
  const std::string&   name() const
  {
    return name_;
  }
  /// @return full name of this class.
  std::string   fullName() const
  {
    if (outer() && (outer()->isNamespaceLike()))
      return outer()->fullName() + "::" + name_;
    else
      return name_;
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
    return cibParams.classHandlePrefix + name_;
  }
  /// @return full name of handle class for this compound object.
  std::string   fullHandleName(const CibParams& cibParams) const
  {
    return "::" + fullName() + "::" + handleName(cibParams);
  }
  /// @return Name of variable for pointer of this compound object.
  std::string objName() const
  {
    return "p" + name_ + "Obj";
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
    if (outer() == NULL || outer()->isCppFile())
      return "";
    return outer()->wrappingNamespaceDeclarations() + "namespace " + outer()->name() + " {";
  }
  ///
  std::string wrappingNses() const
  {
    if (outer() == NULL || outer()->isCppFile())
      return "::";
    return outer()->wrappingNses() + outer()->name();
  }
  /// @return sequence of closing braces that closes all wrapping namespace definitions.
  std::string closingBracesForWrappingNamespaces() const
  {
    if (outer() == NULL || outer()->isCppFile())
      return "";
    return outer()->closingBracesForWrappingNamespaces() + '}';
  }
  /// @return CibId of this compound object
  std::string cibId(const CibParams& cibParams) const
  {
    return "::_cib_::" + cibParams.moduleName + "Lib" + wrappingNses() + "::kCIBID_" + name();
  }
  ///@ return CppObj corresponding to name of a given type
  const CppObj* resolveTypeName(const std::string& typeName, const CppProgramEx& cppProgram) const;
  ///@ return The outer compound object (class/namespace/etc) that owns this one.
  const CibCppCompound* outer() const
  {
    return static_cast<CibCppCompound*>(owner_);
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
