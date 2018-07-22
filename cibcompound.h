#pragma once

#include "cibparams.h"

#include "cppdom.h"
#include "cppindent.h"
#include "cibfunction_helper.h"
#include "cibutil.h"

#include <map>
#include <set>
#include <vector>

//////////////////////////////////////////////////////////////////////////

class CppProgramEx;
class CibFunctionHelper;
class CibIdMgr;

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
  bool hasCtor_{ false }; // true if there is a ctor, copy-ctor is not counted here.
  bool hasCopyCtor_{ false };
  bool hasDtor_{ false };
  bool needsUnknownProxyDefinition_{ false };

  CibFunctionHelperArray needsBridging_;     // Array of all functions that require bridging for implementation at client side.
  std::set<const CppObj*> objNeedingBridge_; 
  mutable TypeNameToCppObj typeNameToCibCppObj_;

public:
  /// @return name of this class.
  const std::string&   name() const
  {
    return name_;
  }
  std::string longName() const
  {
    return "::" + fullName();
  }
  bool hasPubliclyDerived() const
  {
    auto itr = children_.find(kPublic);
    if (itr == children_.end())
      return false;
    return !itr->second.empty();
  }
  /// @return Unique name of this class
  std::string   uniqName() const
  {
    std::string uname = longName();
    std::replace(uname.begin(), uname.end(), ':', '_');
    return uname;
  }
  /// @return Name of function that casts to object of parent class
  std::string castToBaseName(const CibCppCompound* base, const CibParams& cibParams) const
  {
    return cibParams.castToBasePrefix + base->uniqName();
  }
  /// @return CibId of function that casts to object of parent class
  std::string cibIdOfCastToBaseName(const CibCppCompound* base, const CibParams& cibParams) const
  {
    return wrappingNses(cibParams) + "::" + name() + "::kCIBID_" + castToBaseName(base, cibParams);
  }
  /// @return string that represents a sequence of all wrapping namespaces
  std::string wrappingNamespaceDeclarations(const CibParams& cibParams) const
  {
    if (outer() == NULL || outer()->isCppFile())
      return "namespace " + cibParams.cibInternalNamespace + " {";
    return outer()->wrappingNamespaceDeclarations(cibParams) + " namespace " + outer()->name() + " {";
  }
  ///
  std::string wrappingNses(const CibParams& cibParams) const
  {
    if (outer() == NULL || outer()->isCppFile())
      return "::" + cibParams.cibInternalNamespace + "::" + cibParams.moduleName + "Lib";
    return outer()->wrappingNses(cibParams) + outer()->name();
  }
  /// @return sequence of closing braces that closes all wrapping namespace definitions.
  std::string closingBracesForWrappingNamespaces() const
  {
    if (outer() == NULL || outer()->isCppFile())
      return "}";
    return outer()->closingBracesForWrappingNamespaces() + '}';
  }
  /// @return CibId of this compound object
  std::string cibId(const CibParams& cibParams) const
  {
    return wrappingNses(cibParams) + "::kCIBID_" + name();
  }
  ///@ return CppObj corresponding to name of a given type
  const CppObj* resolveTypeName(const std::string& typeName, const CppProgramEx& cppProgram) const;
  /// Identifies mothods that need to be bridged
  void identifyMethodsToBridge();
  const CibFunctionHelperArray& getNeedsBridgingMethods() const { return needsBridging_; }
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
  * A facade class should also have derived class.
  */
  bool isFacadeLike() const
  {
    return facadeLike_;
  }
  void setIsInline()
  {
    inline_ = true;
  }
  bool needsUnknownProxyDefinition() const {
    return needsUnknownProxyDefinition_;
  }
  void setNeedsUnknownProxyDefinition() {
    needsUnknownProxyDefinition_ = true;
  }
  void emitUserHeader(const CppProgramEx& cppProgram, const CibParams& cibParams) const;
  void emitImpl1Header(const CppProgramEx& cppProgram, const CibParams& cibParams) const;
  void emitImpl2Header(const CppProgramEx& cppProgram, const CibParams& cibParams, const CibIdMgr& cibIdMgr) const;
  void emitImplSource(const CppProgramEx& cppProgram, const CibParams& cibParams, const CibIdMgr& cibIdMgr) const;
  void emitUnknownProxyDefn(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, const CibIdMgr& cibIdMgr, CppIndent indentation = CppIndent());
  void emitLibGlueCode(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, const CibIdMgr& cibIdMgr, CppIndent indentation = CppIndent());
  void collectPublicCompounds(std::vector<const CibCppCompound*>& compounds) const;
  void emitMethodTableGetterDefn(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, const CibIdMgr& cibIdMgr, bool forProxy, CppIndent indentation = CppIndent()) const;

  // Internal: Ideally should have been private with class CppProgramEx as friend.
  void setInterfaceLike()
  {
    interfaceLike_ = true;
  }
  void setFacadeLike()
  {
    facadeLike_ = true;
  }

  public:
    void forEachParent(CppObjProtLevel prot, std::function<void(const CibCppCompound*)> callable) const;
    void forEachAncestor(CppObjProtLevel prot, std::function<void(const CibCppCompound*)> callable) const;
    void forEachDerived(CppObjProtLevel prot, std::function<void(const CibCppCompound*)> callable) const;
    void forEachDescendent(CppObjProtLevel prot, std::function<void(const CibCppCompound*)> callable) const;
    void forEachNested(std::function<void(const CibCppCompound*)> callable) const;

    static const CibCppCompound* getFileDomObj(const CppObj* obj);
  private:
    void emitDecl(const CppObj*, std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CppIndent indentation = CppIndent()) const;
    void emitHelperDecl(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CppIndent indentation = CppIndent()) const;
    void emitHelperDefn(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, const CibIdMgr& cibIdMgr, CppIndent indentation = CppIndent()) const;
    void emitDecl(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CppIndent indentation = CppIndent()) const;
    void emitDefn(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, const CibIdMgr& cibIdMgr, CppIndent indentation = CppIndent()) const;
    void emitImplSource(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, const CibIdMgr& cibIdMgr, CppIndent indentation = CppIndent()) const;
    void emitFromHandleDecl(std::ostream& stm, const CibParams& cibParams, CppIndent indentation = CppIndent()) const;
    void emitFromHandleDefn(std::ostream& stm, const CibParams& cibParams, const CibIdMgr& cibIdMgr, CppIndent indentation = CppIndent()) const;
    void emitFacadeDependecyHeaders(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, const CibIdMgr& cibIdMgr, bool forProxy, CppIndent indentation) const;
    void emitHandleConstructorDefn(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, const CibIdMgr& cibIdMgr, CppIndent indentation  = CppIndent() ) const;
    void emitMoveConstructorDecl(std::ostream& stm, CppIndent indentation = CppIndent()) const;
    void emitMoveConstructorDefn(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, const CibIdMgr& cibIdMgr, CppIndent indentation = CppIndent()) const;
    void collectTypeDependencies(const CppProgramEx& cppProgram, std::set<const CppObj*>& cppObjs) const;
    void collectFacades(std::set<const CibCppCompound*>& facades) const;
    static std::set<std::string> collectHeaderDependencies(const std::set<const CppObj*>& cppObjs, const std::string& dependentPath);
    std::set<std::string> collectHeaderDependencies(const CppProgramEx& cppProgram) const;
    std::string getImplPath(const CibParams& cibParams) const;
    std::string implIncludeName(const CibParams& cibParams) const;
};

inline void CibCppCompound::forEachParent(CppObjProtLevel prot, std::function<void(const CibCppCompound*)> callable) const
{
  auto parentsItr = parents_.find(prot);
  if (parentsItr == parents_.end())
    return;
  for (auto parent : parentsItr->second)
  {
    callable(parent);
  }
}

inline void CibCppCompound::forEachAncestor(CppObjProtLevel prot, std::function<void(const CibCppCompound*)> callable) const
{
  auto parentsItr = parents_.find(prot);
  if (parentsItr == parents_.end())
    return;
  for (auto parent : parentsItr->second)
  {
    parent->forEachParent(prot, callable);
    callable(parent);
  }
}

inline void CibCppCompound::forEachDerived(CppObjProtLevel prot, std::function<void(const CibCppCompound*)> callable) const
{
  auto childItr = children_.find(prot);
  if (childItr == children_.end())
    return;
  for (auto child : childItr->second)
    callable(child);
}

inline void CibCppCompound::forEachDescendent(CppObjProtLevel prot, std::function<void(const CibCppCompound*)> callable) const
{
  auto childItr = children_.find(prot);
  if (childItr == children_.end())
    return;
  for (auto child : childItr->second)
  {
    child->forEachDescendent(prot, callable);
    callable(child);
  }
}

inline void CibCppCompound::forEachNested(std::function<void(const CibCppCompound*)> callable) const
{
  for (auto mem : members_)
  {
    if (mem->isNamespaceLike() && isMemberPublic(mem->prot_, compoundType_))
      callable(static_cast<const CibCppCompound*>(mem));
  }
}
