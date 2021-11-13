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
#include "cibtypes.h"

#include "cibfunction_helper.h"
#include "cppast.h"
#include "cppindent.h"

#include "cppcompound-accessor.h"
#include "cppobj-accessor.h"

#include <map>
#include <set>
#include <vector>

//////////////////////////////////////////////////////////////////////////

class CibHelper;
class CibFunctionHelper;
class CibIdMgr;

struct CppFunction;
struct CibCompound;

enum class TypeResolvingFlag : char;

using CibFunctionHelperArray   = std::vector<CibFunctionHelper>;
using CibCompoundArray         = std::vector<CibCompound*>;
using CibCppInheritInfo        = std::map<CppAccessType, CibCompoundArray>;
using TypenameAndResolvingFlag = std::pair<std::string, TypeResolvingFlag>;
using TypeNameToCppObj         = std::map<TypenameAndResolvingFlag, CppObj*>;

/**
 * Teplate args for creating template instances are unfortunately a bit complex.
 * Template arg can be a typename or an expression.
 * To handle both case template arg is of CppObj* type but in case it is an expression
 * we use existing expression object supplied by the usage or default value.
 * For the case it is typename we need to resolve it and so a new CppVarType object is created which will need deletion.
 * We can also simply clone CppExpr for other case too and not need special deletion but that brings it's own
 * implementation cost. So, this hack. :)
 */
struct TemplateArgDeleter
{
  void operator()(CppObj* obj) const
  {
    if (obj->objType_ != CppExpr::kObjectType)
      delete obj;
  }
};

using TemplateArgPtr = std::unique_ptr<CppObj, TemplateArgDeleter>;

using StringVector = std::vector<std::string>;
using TemplateArgs = StringVector;
// A set is sufficient but for having order we need map.
using TemplateInstances = std::map<std::string, CibCompound*>;
using TmplInstanceCache = std::map<TemplateArgs, TemplateInstances::const_iterator>;
using TemplateArgValues = std::map<std::string, TemplateArgPtr>;

enum CibClassPropFlags
{
  kClassPropBaseLine                = (__LINE__ + 1), //< Unusable const
  kClassPropPodStruct               = (1 << (__LINE__ - kClassPropBaseLine)),
  kClassPropInline                  = (1 << (__LINE__ - kClassPropBaseLine)),
  kClassPropShared                  = (1 << (__LINE__ - kClassPropBaseLine)),
  kClassPropAbstract                = (1 << (__LINE__ - kClassPropBaseLine)),
  kClassPropHasProtectedMethod      = (1 << (__LINE__ - kClassPropBaseLine)),
  kClassPropHasPrivateVirtual       = (1 << (__LINE__ - kClassPropBaseLine)),
  kClassPropEmpty                   = (1 << (__LINE__ - kClassPropBaseLine)),
  kClassPropInterface               = (1 << (__LINE__ - kClassPropBaseLine)) | kClassPropShared,
  kClassPropFacade                  = (1 << (__LINE__ - kClassPropBaseLine)) | kClassPropShared,
  kClassPropCompositeTmpl           = (1 << (__LINE__ - kClassPropBaseLine)),
  kClassPropNeedNoProxy             = (1 << (__LINE__ - kClassPropBaseLine)),
  kClassPropCantHaveDefaultCtor     = (1 << (__LINE__ - kClassPropBaseLine)),
  kClassPropCantHaveDefaultCopyCtor = (1 << (__LINE__ - kClassPropBaseLine)),
  kClassPropHasVirtualParent        = (1 << (__LINE__ - kClassPropBaseLine)),
  kClassPropHasVirtualAncestor      = (1 << (__LINE__ - kClassPropBaseLine)),
  kClassPropStlHeader               = (1 << (__LINE__ - kClassPropBaseLine)),
  kClassPropStlHelperClass          = (1 << (__LINE__ - kClassPropBaseLine)),
};

enum class TemplateArgType
{
  kAsObject,    // Object instance is used as template argument
  kAsReference, // Reference (or pointer) is used as template argument
};

/**
 * Responsible for emitting code required for CIB functionality of C++ compound object.
 */
struct CibCompound : public CppCompound
{
public:
  using CppCompound::CppCompound;

public:
  CibCppInheritInfo parents_;  // List of all parents from which this compound object is derived.
  CibCppInheritInfo children_; // List of all children which are derived from this compound object.

private:
  using MemberConditionalMap       = std::map<const CppObj*, const CppHashIf*>;
  using DependentTemplateInstances = std::map<const CibCompound*, TemplateArgType>;

private:
  enum class ProxyManagerType
  {
    Default,
    Local,
    Remote
  };
  std::uint32_t props_{0};
  bool          needsGenericProxyDefinition_{false};

  CibFunctionHelperArray         needsBridging_;
  mutable MemberConditionalMap   memberConditionalMap_;
  CibFunctionHelperArray         allVirtuals_; // All virtual methods including that of parent classes.
  mutable CibFunctionHelperArray needsClientDefinition_;
  std::set<const CppObj*>        objNeedingBridge_;
  mutable TypeNameToCppObj       typeNameToCibCppObj_;
  TemplateInstances              templateInstances_; ///< Meaningful for template classes only.
  TmplInstanceCache              tmplInstanceCache_;
  CibCompound*               templateClass_{nullptr}; ///< Valid iff this class is an instatiation of a template class.
  TemplateArgValues          templateArgValues_;
  DependentTemplateInstances usedInTemplateInstaces_;
  CibClassId                 clsId_{0};
  std::string                nsName_;
  bool                       libraryManagesProxy_{false};
  ProxyManagerType           proxyManagerType_{ProxyManagerType::Default};

public:
  void setLibraryManagedProxy()
  {
    libraryManagesProxy_ = true;
  }
  bool libraryManagesProxy() const
  {
    return libraryManagesProxy_;
  }

  void setStlHeader()
  {
    props_ |= kClassPropStlHeader;
  }
  void setStlHelperClass()
  {
    props_ |= kClassPropStlHelperClass;
    forEachNested([](CibCompound* nested) { nested->props_ |= kClassPropStlHelperClass; });
    outer()->props_ |= kClassPropStlHelperClass;
  }
  bool isStlHeader() const
  {
    return props_ & kClassPropStlHeader;
  }
  bool isStlHelpereClass() const
  {
    return props_ & kClassPropStlHelperClass;
  }
  bool isStlRelated() const
  {
    return isStlHeader() || isStlHelpereClass();
  }
  bool isUnusedStl() const
  {
    if (!isStlHeader())
      return false;
    bool isUsed = false;
    forEachNested(CppAccessType::kPublic, [&](const CibCompound* nested) {
      if (isClassLike(nested) && nested->numTemplateInstances())
        isUsed = true;
    });

    return !isUsed;
  }
  const CppHashIf* getMemConditional(const CppObj* mem) const
  {
    if (mem == nullptr)
      return nullptr;

    auto* cmp = static_cast<const CibCompound*>(mem->owner());
    if (cmp != this)
      return cmp->getMemConditional(mem);

    auto itr = memberConditionalMap_.find(mem);
    return (itr == memberConditionalMap_.end() ? nullptr : itr->second);
  }
  bool isNsNameEmpty() const
  {
    return nsName_.empty();
  }
  CibClassId classId() const
  {
    return clsId_;
  }
  void setClassId(CibClassId clsId)
  {
    clsId_ = clsId;
    setNsName("__zz_cib_Class" + std::to_string(clsId));
  }
  const std::string& nsName() const
  {
    if (isNsNameEmpty())
      return name();
    return !nsName_.empty() ? nsName_ : name();
  }
  void setNsName(std::string nsName)
  {
    nsName_ = std::move(nsName);
  }
  std::string ctorName() const
  {
    return isTemplateInstance() ? templateClass()->name() : justName();
  }
  std::string longName() const
  {
    return isCppFile(this) ? "::" : "::" + fullName(this);
  }
  std::string fullNsName() const
  {
    if (outer() && isNamespaceLike(outer()))
      return outer()->fullNsName() + "::" + nsName();
    else
      return nsName();
  }
  std::string longNsName() const
  {
    return "::" + fullNsName();
  }
  bool isTemplated() const
  {
    return templateParamList() != nullptr;
  }
  bool isTemplateInstance() const
  {
    return (templateClass_ != nullptr);
  }
  CibCompound* templateClass() const
  {
    return templateClass_;
  }
  bool hasPubliclyDerived() const
  {
    auto itr = children_.find(CppAccessType::kPublic);
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
  std::string castToBaseName(const CibCompound* base, const CibParams& cibParams) const
  {
    return cibParams.castToBasePrefix + base->nsName();
  }
  /// @return Name of function that casts from object of parent class
  std::string castFromBaseName(const CibCompound* base, const CibParams& cibParams) const
  {
    return cibParams.castFromBasePrefix + base->nsName();
  }
  /// @return string that represents a sequence of all wrapping Ns namespaces
  std::string wrappingNsNamespaceDeclarations(const CibParams& cibParams) const
  {
    if (outer() == nullptr || isCppFile(outer()))
      return "namespace __zz_cib_ {";
    return outer()->wrappingNsNamespaceDeclarations(cibParams) + " namespace " + outer()->nsName() + " {";
  }

  /// @return sequence of closing braces that closes all wrapping Ns namespace definitions.
  std::string closingBracesForWrappingNsNamespaces() const
  {
    if (outer() == nullptr || isCppFile(outer()))
      return "}";
    return outer()->closingBracesForWrappingNsNamespaces() + '}';
  }

  // TODO: Name it better.
  std::ostream& emitWrappingNsNamespacesForHelper(std::ostream&    stm,
                                                  const CibParams& cibParams,
                                                  CppIndent        indentation) const;
  std::ostream& emitWrappingNsNamespacesForGlueCode(std::ostream&    stm,
                                                    const CibParams& cibParams,
                                                    CppIndent        indentation) const;
  std::ostream& emitClosingBracesForWrappingNsNamespacesForGlueCode(std::ostream& stm) const;
  std::ostream& emitWrappingNamespacesForProxyDefn(std::ostream&    stm,
                                                   const CibParams& cibParams,
                                                   CppIndent        indentation) const;
  std::ostream& emitWrappingNamespacesClosingBracesForProxyDefn(std::ostream&    stm,
                                                                const CibParams& cibParams,
                                                                CppIndent        indentation) const;

  /// @return string that represents a sequence of all wrapping namespaces
  std::string wrappingNamespaceDeclarations() const
  {
    if (outer() == nullptr || isCppFile(outer()))
      return "";
    if (!isNamespace(outer())) // Why? May not be needed.
      return "namespace " + outer()->name() + " {";

    const auto  enclosingNamespaceDecl = outer()->wrappingNamespaceDeclarations();
    std::string ret                    = enclosingNamespaceDecl;
    if (!enclosingNamespaceDecl.empty())
      ret += ' ';
    ret += "namespace " + outer()->name() + " {";
    return ret;
  }

  /// @return sequence of closing braces that closes all wrapping namespace definitions.
  std::string closingBracesForWrappingNamespaces() const
  {
    if (outer() == nullptr || isCppFile(outer()))
      return "";
    if (isNamespace(outer()))
      return outer()->closingBracesForWrappingNamespaces() + '}';
    else
      return "}";
  }
  ///@ return CppObj corresponding to name of a given type
  CppObj* resolveTypename(const std::string& typeName,
                          const CibHelper&   helper,
                          TypeResolvingFlag  typeResolvingFlag) const;
  /// Identifies mothods that need to be bridged
  void identifyMethodsToBridge(const CibHelper& helper);
  void identifyAbstract(const CibHelper& helper);
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
  CibCompound* getTemplateInstance(const TemplateArgs& templateArgs) const
  {
    assert(templateParamList());
    auto itr = tmplInstanceCache_.find(templateArgs);
    return (itr == tmplInstanceCache_.end()) ? nullptr : itr->second->second;
  }
  CibCompound* getTemplateInstantiation(const std::string& name,
                                        const CibCompound* instantiationScope,
                                        const CibHelper&   helper);

  ///@ return The outer compound object (class/namespace/etc) that owns this one.
  const CibCompound* outer() const
  {
    return static_cast<CibCompound*>(owner());
  }
  CibCompound* outer()
  {
    return static_cast<CibCompound*>(owner());
  }
  void setShared()
  {
    if (!isShared())
    {
      props_ |= kClassPropShared;
      for (auto parent : parents_[CppAccessType::kPublic])
        parent->setShared();
      if (outer() && !isCppFile(outer()))
        outer()->setShared();
    }
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
    return forEachAncestor(CppAccessType::kPublic,
                           [](const CibCompound* ancestor) -> bool { return ancestor->isFacadeLike(); });

    return false;
  }
  void setIsInline()
  {
    props_ |= kClassPropInline;
  }
  bool isInline() const
  {
    if (!(props_ & kClassPropInline))
      return false;
    if (!isClassLike(outer()))
      return true;
    return outer()->isInline();
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
  void setEmpty()
  {
    props_ |= kClassPropEmpty;
  }
  void setPodStruct()
  {
    props_ |= kClassPropPodStruct;
  }
  bool isPodStruct() const
  {
    return (props_ & kClassPropPodStruct);
  }
  void setNeedNoProxy()
  {
    props_ |= kClassPropNeedNoProxy;
  }
  bool needsNoProxy() const
  {
    return (props_ & kClassPropNeedNoProxy) || isPodStruct();
  }
  void setCantHaveDefaultCtor()
  {
    props_ |= kClassPropCantHaveDefaultCtor;
  }
  bool cantHaveDefaultCtor() const
  {
    return ((props_ & kClassPropCantHaveDefaultCtor) == kClassPropCantHaveDefaultCtor);
  }
  void setCantHaveDefaultCopyCtor()
  {
    props_ |= kClassPropCantHaveDefaultCopyCtor;
  }
  bool cantHaveDefaultCopyCtor() const
  {
    return ((props_ & kClassPropCantHaveDefaultCopyCtor) == kClassPropCantHaveDefaultCopyCtor);
  }
  bool hasDefaultCtor() const
  {
    for (const auto& ctor : ctors())
    {
      if (!ctor->hasParams())
        return true;
    }

    return false;
  }
  bool defaultConstructable() const
  {
    return !hasCtor() || hasDefaultCtor();
  }
  void setHasNonDefaultConstructableVirtualParent()
  {
    props_ |= kClassPropHasVirtualParent;
  }
  bool hasNonDefaultConstructableVirtualParent() const
  {
    return ((props_ & kClassPropHasVirtualParent) == kClassPropHasVirtualParent);
  }
  void setHasNonDefaultConstructableVirtualAncestor()
  {
    props_ |= kClassPropHasVirtualAncestor;
    forEachDescendent([](CibCompound* compound) { compound->props_ |= kClassPropHasVirtualAncestor; });
  }
  bool hasNonDefaultConstructableVirtualAncestor() const
  {
    return ((props_ & kClassPropHasVirtualAncestor) == kClassPropHasVirtualAncestor);
  }
  bool isEmpty() const
  {
    return (props_ & kClassPropEmpty);
  }
  bool isCompositeTemplate() const
  {
    return (props_ & kClassPropCompositeTmpl);
  }
  size_t numTemplateInstances() const
  {
    return templateInstances_.size();
  }
  bool isOverridable() const
  {
    if (!isClassLike(this))
      return false;
    if (compoundType() == CppCompoundType::kUnion)
      return false;
    return (!hasDtor() || !isPrivate(dtor())) && !hasAttr(kFinal);
  }
  bool hasProtectedMethods() const
  {
    return isTemplateInstance() ? templateClass_->hasProtectedMethods() : props_ & kClassPropHasProtectedMethod;
  }
  bool hasPrivateVirtuals() const
  {
    return props_ & kClassPropHasPrivateVirtual;
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
    return needsGenericProxyDefinition_ && !hasNonDefaultConstructableVirtualAncestor() && isCtorCallable()
           && !getAllVirtualMethods().empty();
  }
  void setNeedsGenericProxyDefinition()
  {
    needsGenericProxyDefinition_ = true;
  }
  bool isCopyCtorCallable() const
  {
    if (isTemplateInstance() && !templateClass()->isCopyCtorCallable())
      return false;
    if (copyCtor())
    {
      if (isDeleted(copyCtor()) || isPrivate(copyCtor()))
        return false;
    }
    return !cantHaveDefaultCopyCtor();
  }
  bool isCtorCallable() const
  {
    bool ret = true;
    for (auto ctor : ctors())
    {
      if (isPrivate(ctor))
        ret = false;
      else
        return true;
    }

    return ret;
  }
  void emitValueClassNames(std::ostream& stm, const CibHelper& helper, const CibParams& cibParams) const;
  void emitUserHeader(const CibHelper& helper, const CibParams& cibParams, const CibIdMgr& cibIdMgr) const;
  void emitPredefHeader(const CibHelper& helper, const CibParams& cibParams) const;
  void emitImplHeader(const CibHelper& helper, const CibParams& cibParams, const CibIdMgr& cibIdMgr) const;
  void emitTemplateInstanceSpecializations(std::ostream&    stm,
                                           const CibHelper& helper,
                                           const CibParams& cibParams,
                                           const CibIdMgr&  cibIdMgr) const;
  void emitImplSource(const CibHelper& helper, const CibParams& cibParams, const CibIdMgr& cibIdMgr) const;
  void emitDefn(std::ostream&    stm,
                bool             asInline,
                const CibHelper& helper,
                const CibParams& cibParams,
                const CibIdMgr&  cibIdMgr,
                CppIndent        indentation = CppIndent()) const;
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
  void emitLibGlueCode(const CibHelper& helper,
                       const CibParams& cibParams,
                       const CibIdMgr&  cibIdMgr,
                       CppIndent        indentation = CppIndent()) const;
  void emitDependecyHeaders(std::ostream&    stm,
                            const CibHelper& helper,
                            const CibParams& cibParams,
                            const CibIdMgr&  cibIdMgr,
                            CppIndent        indentation = CppIndent()) const;
  void emitHelperDefn(std::ostream&    stm,
                      const CibHelper& helper,
                      const CibParams& cibParams,
                      const CibIdMgr&  cibIdMgr,
                      CppIndent        indentation = CppIndent()) const;
  void emitFunctionInvokeHelper(std::ostream&            stm,
                                const CibFunctionHelper& func,
                                const CibHelper&         helper,
                                const CibParams&         cibParams,
                                const CibIdData*         cibIdData,
                                CppIndent                indentation) const;
  void emitHelperDefnStart(std::ostream& stm, const CibParams& cibParams, CppIndent indentation) const;
  void emitRemoteProxyMethods(std::ostream& stm, CppIndent indentation) const;
  void emitCastingHelpers(std::ostream&    stm,
                          const CibParams& cibParams,
                          const CibIdData* cibIdData,
                          CppIndent        indentation) const;
  void emitFacadeHelpers(std::ostream& stm, const CibIdData* cibIdData, CppIndent indentation /* = CppIndent */) const;
  void emitHandleHelpers(std::ostream&    stm,
                         const CibParams& cibParams,
                         const CibIdData* cibIdData,
                         CppIndent        indentation) const;

  void emitHelperDefnEnd(std::ostream& stm, CppIndent indentation) const;
  void emitDelegators(std::ostream&    stm,
                      const CibHelper& helper,
                      const CibParams& cibParams,
                      const CibIdMgr&  cibIdMgr,
                      CppIndent        indentation = CppIndent()) const;
  void emitProxyMgrDelegators(std::ostream& stm, const CibParams& cibParams, CppIndent indentation = CppIndent()) const;

  static void emitCommonCibHeaders(std::ostream& stm, const CibParams& cibParams);
  static void emitCommonExpHeaders(std::ostream& stm, const CibParams& cibParams);

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
    // forEachParent(CppAccessType::kPublic, [](auto* ancestor) {
    //   const_cast<CibCompound*>(ancestor)->setInterfaceLike();
    //   return true;
    // });
  }
  void setFacadeLike()
  {
    props_ |= kClassPropFacade;
    forEachDescendent([](auto* descendent) { descendent->setShared(); });
  }

  bool needsDelagatorClass() const
  {
    return hasProtectedMethods() && isOverridable() && !hasNonDefaultConstructableVirtualAncestor();
  }

  bool isSharedProxy() const
  {
    if (isShared())
      return true;
    if (!needsNoProxy())
      return false;
    const auto isAncestorSharedFacade =
      forEachAncestor(CppAccessType::kPublic, [](const CibCompound* ancestor) -> bool {
        return ancestor->isFacadeLike() && ancestor->isShared();
      });
    if (isAncestorSharedFacade)
      return true;
    // if (!isFacadeLike() && isAbstract())
    return false;
  }

public:
  bool forEachParent(CppAccessType accessType, std::function<bool(const CibCompound*)> callable) const;
  bool forEachAncestor(CppAccessType accessType, std::function<bool(const CibCompound*)> callable) const;
  bool forEachAncestor(std::function<bool(const CibCompound*)> callable) const;
  void forEachDerived(CppAccessType accessType, std::function<void(const CibCompound*)> callable) const;
  void forEachDerived(std::function<void(CibCompound*)> callable);
  void forEachDescendent(CppAccessType accessType, std::function<void(const CibCompound*)> callable) const;
  void forEachDescendent(std::function<void(CibCompound*)> callable);
  void forEachNested(CppAccessType accessType, std::function<void(const CibCompound*)> callable) const;
  void forEachNested(std::function<void(const CibCompound*)> callable) const;
  void forEachNested(CppAccessType accessType, std::function<void(CibCompound*)> callable);
  void forEachNested(std::function<void(CibCompound*)> callable);
  bool forEachOuter(std::function<bool(const CibCompound*)> callable) const;
  bool forEachOuter(std::function<bool(CibCompound*)> callable);
  void forEachTemplateInstance(std::function<void(CibCompound*)> callable) const;

  static CibCompound*       getFileAstObj(CppObj* obj);
  static const CibCompound* getFileAstObj(const CppObj* obj);

  void emitFacadeAndInterfaceDependecyHeaders(std::ostream&    stm,
                                              const CibHelper& helper,
                                              const CibParams& cibParams,
                                              const CibIdMgr&  cibIdMgr,
                                              bool             forProxy,
                                              CppIndent        indentation) const;

private:
  void emitDecl(const CppObj*,
                std::ostream&    stm,
                const CibHelper& helper,
                const CibParams& cibParams,
                const CibIdMgr&  cibIdMgr,
                CppIndent        indentation = CppIndent()) const;
  void emitDecl(std::ostream&    stm,
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
  void emitHandleConstructorDefn(std::ostream&    stm,
                                 bool             asInline,
                                 const CibHelper& helper,
                                 const CibParams& cibParams,
                                 const CibIdMgr&  cibIdMgr,
                                 CppIndent        indentation = CppIndent()) const;
  void emitMoveConstructorDecl(std::ostream& stm, CppIndent indentation = CppIndent()) const;
  void emitMoveConstructorDefn(std::ostream&    stm,
                               bool             asInline,
                               const CibHelper& helper,
                               const CibParams& cibParams,
                               const CibIdMgr&  cibIdMgr,
                               CppIndent        indentation = CppIndent()) const;
  void emitDependentTemplateSpecilizationHeaders(std::ostream& stm, bool onlyWhenUsedAsReference) const;
  void emitHelperHeader(const CibHelper& helper,
                        const CibParams& cibParams,
                        CppIndent        indentation /* = CppIndent */) const;
  void collectTypeDependenciesInner(const CibHelper&         helper,
                                    std::set<const CppObj*>& cppObjs,
                                    std::set<const CppObj*>& excludeList,
                                    TypeResolvingFlag        typeResolvingFlag) const;
  void collectTypeDependencies(const CibHelper&         helper,
                               std::set<const CppObj*>& cppObjs,
                               TypeResolvingFlag        typeResolvingFlag) const;
  void collectTemplateInstancesTypeDependencies(const CibHelper&         helper,
                                                std::set<const CppObj*>& cppObjs,
                                                TypeResolvingFlag        typeResolvingFlag) const;
  void collectTemplateInstanceTypeDependencies(const CibHelper&         helper,
                                               std::set<const CppObj*>& cppObjs,
                                               TypeResolvingFlag        typeResolvingFlag) const;
  void collectTemplateArgumentsTypeDependencies(const CibHelper&         helper,
                                                std::set<const CppObj*>& cppObjs,
                                                TypeResolvingFlag        typeResolvingFlag) const;

  void collectFacades(std::set<const CibCompound*>& facades) const;
  void emitUserImplDependencyHeaders(std::ostream&                  stm,
                                     const CibHelper&               helper,
                                     const CibParams&               cibParams,
                                     const std::set<const CppObj*>& dependencies) const;
  //! @return true if there is any unresolved pure virtual function.
  //! @note It doesn't collect destructor but if it is pure virtual then it returns true.
  bool        collectAllVirtuals(const CibHelper& helper, CibFunctionHelperArray& allVirtuals) const;
  bfs::path   getImplDir(const CibParams& cibParams) const;
  std::string getImplPath(const CibParams& cibParams) const;
  std::string implIncludeName(const CibParams& cibParams) const;
  TemplateInstances::const_iterator addTemplateInstance(CibCompound* templateInstance = nullptr);

  //! Makes itself aware about templates where this class is used as template argument
  void setupTemplateDependencies(const CibHelper& helper);
  bool setupTemplateDependencies(const CppVarType* varType, const CibHelper& helper) const;
  void addDependentTemplateInstance(const CibCompound* templInstance, TemplateArgType argType);
  bool usedReferenceInTemplateInstance(const CibCompound* compound) const;
  void extractTemplateArgumentHardDependencies(std::set<const CppObj*>& argDependencies,
                                               std::set<const CppObj*>& dependencies) const;
  void setHasProtectedMethods()
  {
    props_ |= kClassPropHasProtectedMethod;
  }
  void setHasPrivateVirtuals()
  {
    props_ |= kClassPropHasPrivateVirtual;
  }
};

using CibCompoundEPtr      = CppEasyPtr<CibCompound>;
using CibConstCompoundEPtr = CppEasyPtr<const CibCompound>;

inline bool CibCompound::forEachParent(CppAccessType accessType, std::function<bool(const CibCompound*)> callable) const
{
  auto parentsItr = parents_.find(accessType);
  if (parentsItr == parents_.end())
    return true;
  for (auto parent : parentsItr->second)
  {
    if (!callable(parent))
      return false;
  }

  return true;
}

inline bool CibCompound::forEachAncestor(CppAccessType                           accessType,
                                         std::function<bool(const CibCompound*)> callable) const
{
  auto parentsItr = parents_.find(accessType);
  if (parentsItr == parents_.end())
    return false;
  for (const auto& parent : parentsItr->second)
  {
    if (parent->forEachAncestor(accessType, callable) || callable(parent))
      return true;
  }

  return false;
}

inline bool CibCompound::forEachAncestor(std::function<bool(const CibCompound*)> callable) const
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

inline void CibCompound::forEachDerived(CppAccessType                           accessType,
                                        std::function<void(const CibCompound*)> callable) const
{
  auto childItr = children_.find(accessType);
  if (childItr == children_.end())
    return;
  for (auto child : childItr->second)
    callable(child);
}

inline void CibCompound::forEachDerived(std::function<void(CibCompound*)> callable)
{
  for (auto& derivedList : children_)
  {
    for (auto& derived : derivedList.second)
    {
      callable(derived);
    }
  }

  return;
}

inline void CibCompound::forEachDescendent(CppAccessType                           accessType,
                                           std::function<void(const CibCompound*)> callable) const
{
  auto childItr = children_.find(accessType);
  if (childItr == children_.end())
    return;
  for (auto child : childItr->second)
  {
    child->forEachDescendent(accessType, callable);
    callable(child);
  }
}

inline void CibCompound::forEachDescendent(std::function<void(CibCompound*)> callable)
{
  for (auto& childInhItr : children_)
  {
    for (auto& child : childInhItr.second)
    {
      child->forEachDescendent(callable);
      callable(child);
    }
  }
}

inline void CibCompound::forEachNested(CppAccessType                           memAccessType,
                                       std::function<void(const CibCompound*)> callable) const
{
  for (const auto& mem : members())
  {
    if ((accessType(mem) == memAccessType) && isNamespaceLike(mem))
    {
      CibConstCompoundEPtr nested = mem;
      callable(nested);
      nested->forEachNested(memAccessType, callable);
    }
  }
}

inline void CibCompound::forEachNested(std::function<void(const CibCompound*)> callable) const
{
  for (const auto& mem : members())
  {
    if (isNamespaceLike(mem))
    {
      CibConstCompoundEPtr nested = mem;
      callable(nested);
      nested->forEachNested(callable);
    }
  }
}

inline void CibCompound::forEachNested(CppAccessType memAccessType, std::function<void(CibCompound*)> callable)
{
  for (auto& mem : members())
  {
    if ((accessType(mem) == memAccessType) && isNamespaceLike(mem))
    {
      CibCompoundEPtr nested = mem;
      callable(nested);
      nested->forEachNested(memAccessType, callable);
    }
  }
}

inline void CibCompound::forEachNested(std::function<void(CibCompound*)> callable)
{
  for (auto& mem : members())
  {
    if (isNamespaceLike(mem))
    {
      CibCompoundEPtr nested = mem;
      callable(nested);
      nested->forEachNested(callable);
    }
  }
}

inline bool CibCompound::forEachOuter(std::function<bool(const CibCompound*)> callable) const
{
  if (this->outer())
  {
    if (outer()->forEachOuter(callable) || callable(outer()))
      return true;
  }

  return false;
}

inline bool CibCompound::forEachOuter(std::function<bool(CibCompound*)> callable)
{
  if (this->outer())
  {
    if (outer()->forEachOuter(callable) || callable(outer()))
      return true;
  }

  return false;
}

inline void CibCompound::forEachTemplateInstance(std::function<void(CibCompound*)> callable) const
{
  for (auto& ins : templateInstances_)
    callable(ins.second);
}
