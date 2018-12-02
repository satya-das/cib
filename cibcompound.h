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

#include "cibfunction_helper.h"
#include "cibutil.h"
#include "cppdom.h"
#include "cppindent.h"

#include <map>
#include <set>
#include <vector>

//////////////////////////////////////////////////////////////////////////

class CibHelper;
class CibFunctionHelper;
class CibIdMgr;

struct CibCppFunction;
struct CibCppCompound;

typedef std::vector<CibFunctionHelper>                 CibFunctionHelperArray;
typedef std::vector<CibCppCompound*>                   CibCppCompoundArray;
typedef std::map<CppObjProtLevel, CibCppCompoundArray> CibCppInheritInfo;
typedef std::map<std::string, const CppObj*>           TypeNameToCppObj;

using StringVector      = std::vector<std::string>;
using TemplateArgs      = StringVector;
using TemplateInstances = std::map<std::string, CibCppCompound*>;
using TmplInstanceCache = std::map<TemplateArgs, TemplateInstances::const_iterator>;
using TemplateArgValues = std::map<std::string, const CppVarType*>;

enum CibClassPropFlags
{
  // Unusable const section begins
  kClassPropBaseLine = __LINE__,
  // Unusable const section ends
  kClassPropInline    = (1 << (__LINE__ - kClassPropBaseLine)),
  kClassPropShared    = (1 << (__LINE__ - kClassPropBaseLine)),
  kClassPropAbstract  = (1 << (__LINE__ - kClassPropBaseLine)),
  kClassPropInterface = (1 << (__LINE__ - kClassPropBaseLine)) | kClassPropShared,
  kClassPropFacade    = (1 << (__LINE__ - kClassPropBaseLine)) | kClassPropShared,
};
/**
 * Responsible for emitting code required for CIB functionality of C++ compound object.
 */
struct CibCppCompound : public CppCompound
{
public:
  using CppCompound::CppCompound;

public:
  CibCppInheritInfo parents_;  // List of all parents from which this compound object is derived.
  CibCppInheritInfo children_; // List of all children which are derived from this compound object.

private:
  std::uint32_t props_{0};
  bool          needsGenericProxyDefinition_{false};

  CibFunctionHelperArray needsBridging_; // Array of all functions that require bridging for
                                         // implementation at client side.
  CibFunctionHelperArray   allVirtuals_; // All virtual methods including that of parent classes.
  std::set<const CppObj*>  objNeedingBridge_;
  mutable TypeNameToCppObj typeNameToCibCppObj_;
  TemplateInstances        templateInstances_;      ///< Meaningful for template classes only.
  TmplInstanceCache        tmplInstanceCache_;
  CibCppCompound*          templateClass_{nullptr}; ///< Valid iff this class is an instatiation of a template class.
  TemplateArgValues        templateArgValues_;
  std::string              nsName_;

public:
  /// @return name of this class.
  const std::string& name() const
  {
    return name_;
  }
  const std::string& nsName() const
  {
    return !nsName_.empty() ? nsName_ : name_;
  }
  void setNsName(std::string nsName)
  {
    nsName_ = std::move(nsName);
  }
  const std::string& ctorName() const
  {
    return isTemplateInstance() ? templateClass()->name() : name();
  }
  std::string longName() const
  {
    return isCppFile() ? "::" : "::" + fullName();
  }
  std::string fullNsName() const
  {
    if (!isNamespaceLike())
      return "";
    if (outer() && outer()->isNamespaceLike())
      return outer()->fullNsName() + "::" + nsName();
    else
      return nsName();
  }
  std::string longNsName() const
  {
    return isCppFile() ? "::" : "::" + fullNsName();
  }
  bool isTemplated() const
  {
    return templSpec_ != nullptr;
  }
  bool isTemplateInstance() const
  {
    return (templateClass_ != nullptr);
  }
  CibCppCompound* templateClass() const
  {
    return templateClass_;
  }
  bool hasPubliclyDerived() const
  {
    auto itr = children_.find(kPublic);
    if (itr == children_.end())
      return false;
    return !itr->second.empty();
  }
  /// @return Unique name of this class
  std::string uniqName() const
  {
    std::string uname = longNsName();
    std::replace(uname.begin(), uname.end(), ':', '_');
    return uname;
  }
  /// @return Name of function that casts to object of parent class
  std::string castToBaseName(const CibCppCompound* base, const CibParams& cibParams) const
  {
    return cibParams.castToBasePrefix + base->uniqName();
  }
  /// @return string that represents a sequence of all wrapping Ns namespaces
  std::string wrappingNsNamespaceDeclarations(const CibParams& cibParams) const
  {
    if (outer() == nullptr || outer()->isCppFile())
      return "namespace __zz_cib_ {";
    return outer()->wrappingNsNamespaceDeclarations(cibParams) + " namespace " + outer()->nsName() + " {";
  }

  /// @return sequence of closing braces that closes all wrapping Ns namespace definitions.
  std::string closingBracesForWrappingNsNamespaces() const
  {
    if (outer() == nullptr || outer()->isCppFile())
      return "}";
    return outer()->closingBracesForWrappingNsNamespaces() + '}';
  }
  /// @return string that represents a sequence of all wrapping namespaces
  std::string wrappingNamespaceDeclarations(const CibParams& cibParams) const
  {
    if (outer() == nullptr || outer()->isCppFile())
      return "";
    if (outer()->isNamespace())
      return outer()->wrappingNamespaceDeclarations(cibParams) + " namespace " + outer()->name() + " {";
    else
      return "namespace " + outer()->name() + " {";
  }

  /// @return sequence of closing braces that closes all wrapping namespace definitions.
  std::string closingBracesForWrappingNamespaces() const
  {
    if (outer() == nullptr || outer()->isCppFile())
      return "";
    if (outer()->isNamespace())
      return outer()->closingBracesForWrappingNamespaces() + '}';
    else
      return "}";
  }
  ///@ return CppObj corresponding to name of a given type
  const CppObj* resolveTypeName(const std::string& typeName, const CibHelper& helper) const;
  /// Identifies mothods that need to be bridged
  void                          identifyMethodsToBridge(const CibHelper& helper);
  bool needsBridging() const
  {
    return (!needsBridging_.empty()) || isFacadeLike();
  }
  const CibFunctionHelperArray& getNeedsBridgingMethods() const
  {
    return needsBridging_;
  }
  const CibFunctionHelperArray& getAllVirtualMethods() const
  {
    return allVirtuals_;
  }
  void addTemplateInstance(const TemplateArgs& templateArgs, CibCppCompound* templateInstance = nullptr)
  {
    // Only template class can have template-instances.
    assert(templSpec_);
    auto insRez = templateInstances_.insert(std::make_pair(templateInstance->name(), templateInstance));
    assert(insRez.second);
    tmplInstanceCache_.insert(std::make_pair(templateArgs, insRez.first));
  }
  CibCppCompound* getTemplateInstance(const TemplateArgs& templateArgs) const
  {
    // Only template class can have template-instances.
    assert(templSpec_);
    auto itr = tmplInstanceCache_.find(templateArgs);
    return (itr == tmplInstanceCache_.end()) ? nullptr : itr->second->second;
  }
  CibCppCompound* getTemplateInstance(const std::string& instanceName) const
  {
    // Only template class can have template-instances.
    assert(templSpec_);
    auto itr = templateInstances_.find(instanceName);
    return (itr == templateInstances_.end()) ? nullptr : itr->second;
  }
  CibCppCompound* getTemplateInstantiation(const TemplateArgs&   templateArgs,
                                           const CibCppCompound* instantiationScope,
                                           const CibHelper&      helper);

  ///@ return The outer compound object (class/namespace/etc) that owns this one.
  const CibCppCompound* outer() const
  {
    return static_cast<CibCppCompound*>(owner_);
  }
  void setShared()
  {
    if (isShared())
      return;
    props_ |= kClassPropShared;
    for (auto parent : parents_[kPublic])
      parent->setShared();
  }
  /**
   * @ return true if this compound object is interface-like.
   * \note Any class that has a public virtual function and somewhere there exists at-least one
   * function that accepts pointer/reference of that class is an interface-like class.
   */
  bool isInterfaceLike() const
  {
    return (props_ & kClassPropInterface) == kClassPropInterface;
  }
  /**
   * @ return true if this compound object is facade-like.
   * \note Any class that has a public virtual function and somewhere there exists at-least one
   * function that returns pointer/reference of that class is a facade-like class.
   * A facade class should also have derived class.
   */
  bool isFacadeLike() const
  {
    return (props_ & kClassPropFacade) == kClassPropFacade;
  }
  bool isAncestorFacadeLike() const
  {
    return forEachAncestor(kPublic,[](const CibCppCompound* ancestor)->bool {
      return ancestor->isFacadeLike();
    });

    return false;
  }
  void setIsInline()
  {
    props_ |= kClassPropInline;
  }
  bool isInline() const
  {
    return (props_ & kClassPropInline);
  }
  bool isShared() const
  {
    return (props_ & kClassPropShared);
  }
  bool isAbstract() const
  {
    return (props_ & kClassPropAbstract);
  }
  void setAbstract()
  {
    props_ |= kClassPropAbstract;
  }
  //! @return true if it has at least one constructor other than copy/move.
  bool hasCtor() const
  {
    if (ctors().empty())
      return false;
    if (!copyCtor() && !moveCtor())
      return true;
    if (ctors().size() > 2)
      return true;
    if (copyCtor() && moveCtor())
      return false;
    return ctors().size() > 1;
  }
  bool hasDtor() const
  {
    return dtor() != nullptr;
  }
  bool hasCopyCtor() const
  {
    return copyCtor() != nullptr;
  }
  bool hasMoveCtor() const
  {
    return moveCtor() != nullptr;
  }
  bool needsGenericProxyDefinition() const
  {
    return needsGenericProxyDefinition_;
  }
  void setNeedsGenericProxyDefinition()
  {
    needsGenericProxyDefinition_ = true;
  }
  bool isCopyCtorCallable() const
  {
    if (copyCtor() && (copyCtor()->isDeleted() || copyCtor()->isPrivate()))
      return false;
    if (!forEachAncestor([](const auto* ancestor) { return ancestor->isCopyCtorCallable(); }))
      return false;
    return true;
  }
  void emitUserHeader(const CibHelper& helper, const CibParams& cibParams) const;
  void emitPredefHeader(const CibHelper& helper, const CibParams& cibParams) const;
  void emitImplHeader(const CibHelper& helper, const CibParams& cibParams, const CibIdMgr& cibIdMgr) const;
  void emitImplSource(const CibHelper& helper, const CibParams& cibParams, const CibIdMgr& cibIdMgr) const;
  void emitGenericProxyDefn(std::ostream&    stm,
                            const CibHelper& helper,
                            const CibParams& cibParams,
                            const CibIdMgr&  cibIdMgr,
                            CppIndent        indentation = CppIndent()) const;
  void emitGenericDefn(std::ostream&    stm,
                       const CibHelper& helper,
                       const CibParams& cibParams,
                       const CibIdMgr&  cibIdMgr,
                       CppIndent        indentation = CppIndent()) const;
  void emitLibGlueCode(std::ostream&    stm,
                       const CibHelper& helper,
                       const CibParams& cibParams,
                       const CibIdMgr&  cibIdMgr,
                       CppIndent        indentation = CppIndent()) const;
  void collectPublicCompounds(std::vector<const CibCppCompound*>& compounds) const;
  void emitMethodTableGetterDefn(std::ostream&    stm,
                                 const CibHelper& helper,
                                 const CibParams& cibParams,
                                 const CibIdMgr&  cibIdMgr,
                                 bool             forProxy,
                                 CppIndent        indentation = CppIndent()) const;

  // Internal: Ideally should have been private with class CibHelper as friend.
  void setInterfaceLike()
  {
    props_ |= kClassPropInterface;
  }
  void setFacadeLike()
  {
    props_ |= kClassPropFacade;
  }

public:
  bool forEachParent(CppObjProtLevel prot, std::function<bool(const CibCppCompound*)> callable) const;
  bool forEachAncestor(CppObjProtLevel prot, std::function<bool(const CibCppCompound*)> callable) const;
  bool forEachAncestor(std::function<bool(const CibCppCompound*)> callable) const;
  void forEachDerived(CppObjProtLevel prot, std::function<void(const CibCppCompound*)> callable) const;
  void forEachDescendent(CppObjProtLevel prot, std::function<void(const CibCppCompound*)> callable) const;
  void forEachNested(std::function<void(const CibCppCompound*)> callable) const;
  bool forEachMember(CppObjProtLevel prot, std::function<bool(const CppObj*)> callable) const;
  void forEachTemplateInstance(std::function<void(const std::string&, CibCppCompound*)> callable) const;

  static const CibCppCompound* getFileDomObj(const CppObj* obj);
  CibFunctionHelper            getDtor() const
  {
    return dtor();
  }

private:
  void emitDecl(const CppObj*,
                std::ostream&    stm,
                const CibHelper& helper,
                const CibParams& cibParams,
                CppIndent        indentation = CppIndent()) const;
  void emitHelperDecl(std::ostream&    stm,
                      const CibHelper& helper,
                      const CibParams& cibParams,
                      CppIndent        indentation = CppIndent()) const;
  void emitHelperDefn(std::ostream&    stm,
                      const CibHelper& helper,
                      const CibParams& cibParams,
                      const CibIdMgr&  cibIdMgr,
                      CppIndent        indentation = CppIndent()) const;
  void emitDecl(std::ostream&    stm,
                const CibHelper& helper,
                const CibParams& cibParams,
                CppIndent        indentation = CppIndent()) const;
  void emitDefn(std::ostream&    stm,
                bool asInline,
                const CibHelper& helper,
                const CibParams& cibParams,
                const CibIdMgr&  cibIdMgr,
                CppIndent        indentation = CppIndent()) const;
  void emitImplSource(std::ostream&    stm,
                      const CibHelper& helper,
                      const CibParams& cibParams,
                      const CibIdMgr&  cibIdMgr,
                      CppIndent        indentation = CppIndent()) const;
  void emitFromHandleDecl(std::ostream& stm, const CibParams& cibParams, CppIndent indentation = CppIndent()) const;
  void emitFromHandleDefn(std::ostream&    stm,
                          const CibParams& cibParams,
                          const CibIdMgr&  cibIdMgr,
                          CppIndent        indentation = CppIndent()) const;
  void emitFacadeAndInterfaceDependecyHeaders(std::ostream&    stm,
                                              const CibHelper& helper,
                                              const CibParams& cibParams,
                                              const CibIdMgr&  cibIdMgr,
                                              bool             forProxy,
                                              CppIndent        indentation) const;
  void emitHandleConstructorDefn(std::ostream&    stm,
                                 bool asInline,
                                 const CibHelper& helper,
                                 const CibParams& cibParams,
                                 const CibIdMgr&  cibIdMgr,
                                 CppIndent        indentation = CppIndent()) const;
  void emitMoveConstructorDecl(std::ostream& stm, CppIndent indentation = CppIndent()) const;
  void emitMoveConstructorDefn(std::ostream&    stm,
                               bool asInline,
                               const CibHelper& helper,
                               const CibParams& cibParams,
                               const CibIdMgr&  cibIdMgr,
                               CppIndent        indentation = CppIndent()) const;
  void collectTypeDependencies(const CibHelper& helper, std::set<const CppObj*>& cppObjs) const;
  void collectFacades(std::set<const CibCppCompound*>& facades) const;
  static std::set<std::string> collectHeaderDependencies(const std::set<const CppObj*>& cppObjs,
                                                         const std::string&             dependentPath);
  //! @return true if there is any unresolved pure virtual function.
  //! @note It doesn't collect destructor but if it is pure virtual then it returns true.
  bool                  collectAllVirtuals(const CibHelper& helper, CibFunctionHelperArray& allVirtuals) const;
  std::set<std::string> collectHeaderDependencies(const CibHelper& helper) const;
  bool                  hasClassThatNeedsGenericProxyDefn() const;
  std::string           getImplPath(const CibParams& cibParams) const;
  std::string           implIncludeName(const CibParams& cibParams) const;
};

inline bool CibCppCompound::forEachParent(CppObjProtLevel                            prot,
                                          std::function<bool(const CibCppCompound*)> callable) const
{
  auto parentsItr = parents_.find(prot);
  if (parentsItr == parents_.end())
    return true;
  for (auto parent : parentsItr->second)
  {
    if (!callable(parent))
      return false;
  }

  return true;
}

inline bool CibCppCompound::forEachAncestor(CppObjProtLevel                            prot,
                                            std::function<bool(const CibCppCompound*)> callable) const
{
  auto parentsItr = parents_.find(prot);
  if (parentsItr == parents_.end())
    return false;
  for (const auto& parent : parentsItr->second)
  {
    if (parent->forEachAncestor(prot, callable) || callable(parent))
      return true;
  }

  return false;
}

inline bool CibCppCompound::forEachAncestor(std::function<bool(const CibCppCompound*)> callable) const
{
  for (const auto& parentsItr : parents_)
  {
    for (const auto& parent : parentsItr.second)
    {
      if (!parent->forEachAncestor(callable) || !callable(parent))
        return false;
    }
  }
  return true;
}

inline void CibCppCompound::forEachDerived(CppObjProtLevel                            prot,
                                           std::function<void(const CibCppCompound*)> callable) const
{
  auto childItr = children_.find(prot);
  if (childItr == children_.end())
    return;
  for (auto child : childItr->second)
    callable(child);
}

inline void CibCppCompound::forEachDescendent(CppObjProtLevel                            prot,
                                              std::function<void(const CibCppCompound*)> callable) const
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
    if (mem->isNamespaceLike())
    {
      auto* nested = static_cast<const CibCppCompound*>(mem);
      callable(nested);
      nested->forEachNested(callable);
    }
  }
}

inline bool CibCppCompound::forEachMember(CppObjProtLevel prot, std::function<bool(const CppObj*)> callable) const
{
  for (auto mem : members_)
  {
    if ((effectiveProtectionLevel(mem->prot_, compoundType_) == prot) && callable(mem))
      return true;
  }

  return false;
}

inline void CibCppCompound::forEachTemplateInstance(
  std::function<void(const std::string&, CibCppCompound*)> callable) const
{
  for (auto& ins : templateInstances_)
    callable(ins.first, ins.second);
}
