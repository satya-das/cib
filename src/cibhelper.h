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

#include "cppprog.h"

#include <map>
#include <memory>
#include <set>
#include <string>
#include <unordered_set>

///////////////////////////////////////////////////////////////////////////////////////////////////

struct CppObj;

struct CibCompound;

struct CibParams;
struct CppParserOptions;

class CibFunctionHelper;
class CibIdMgr;

typedef std::set<std::string> stringset;

enum class TypeResolvingFlag : char
{
  ResolveTillLast,
  IgnoreStlHelpers,
};

/**
 * \brief Provides information about C++ program and related things needed by CIB.
 */
class CibHelper
{
public:
  CibHelper(const CibParams& cibParams, const CppParserOptions& parserOptions, CibIdMgr& cibIdMgr);

  const CppProgram& getProgram() const
  {
    return *program_.get();
  }

public:
  /**
   * Resolves a name of type A::B (with or without scope resolution operators).
   * @param name Name which may contain zero or more scope resolution operators.
   * @param typeNode CppTypeTreeNode object from where the search should begin.
   * @return CppObj corresponding to the name given.
   */
  CppObj* getCppObjFromTypeName(const std::string& name, const CppTypeTreeNode* typeNode) const
  {
    return resolveTypename(name, typeNode, TypeResolvingFlag::IgnoreStlHelpers);
  }
  CppObj* resolveTypename(const std::string& name,
                          const CibCompound* begScope,
                          TypeResolvingFlag  typeResolvingFlag) const;
  /**
   * Resolves a name of type A::B (with or without scope resolution operators).
   * @param name Name which may contain zero or more scope resolution operators.
   * @param begScope Compound object from where the search should begin.
   * @return CppObj corresponding to the name given.
   */
  CppObj* getCppObjFromTypeName(const std::string& name, const CibCompound* begScope) const
  {
    return resolveTypename(name, begScope, TypeResolvingFlag::IgnoreStlHelpers);
  }

  CppObj* getCppObjFromTypeName(const std::string& name) const
  {
    return resolveTypename(name, (CibCompound*) nullptr, TypeResolvingFlag::IgnoreStlHelpers);
  }

  void onNewCompound(CibCompound* compound, const CibCompound* parent) const;

  CppObj* resolveVarType(CppVarType* varType, const CppTypeTreeNode* typeNode, TypeResolvingFlag typeResolvingFlag);
  CppObj* resolveVarType(CppVarType* varType, const CibCompound* begScope, TypeResolvingFlag typeResolvingFlag);

  bool isSmartPtr(const std::string& typeName) const;
  bool isSmartPtr(const CibCompound* compound) const;
  bool isSmartPtr(const CppVarType* varType) const;
  bool isSmartPtr(const CppVar* var) const;

  bool isUniquePtr(const std::string& typeName) const;
  bool isUniquePtr(const CppVarType* varType) const;
  bool isUniquePtr(const CppVar* var) const;
  bool isCopyable(const CppVar* var) const;

  std::string                 convertSmartPtr(const std::string& typeName) const;
  std::unique_ptr<CppVarType> convertSmartPtr(const CppVarType* typeObj) const;
  std::string                 smartPtrName(const std::string& typeName) const;
  std::string                 smartPtrName(const CppVar* var) const;

private:
  void resolveInheritance(CibCompound* cppCompound);
  void buildCibCppObjTree();
  void markClassType(CibCompound* cppCompound);
  void markNeedsGenericProxyDefinition(CibCompound* cppCompound);
  void setNeedsGenericProxyDefinition(CibCompound* cppCompound);
  void markNoProxyClasses();
  void forceMarkInterfaceClasses();
  void markStlClasses();
  void markStlHelperClasses();
  void identifyLibraryManagedPoxies();

  /**
   * Evaluates argument function to detect attribute of classes used in args.
   */
  void evaluateArgs(const CibFunctionHelper& func);
  /**
   * Evaluates return type of function to detect attribute of class used in
   * return type.
   */
  void evaluateReturnType(const CibFunctionHelper& func);

  CppObj* resolveTypename(const std::string&     name,
                          const CppTypeTreeNode* typeNode,
                          TypeResolvingFlag      typeResolvingFlag) const;
  CppObj* resolveTypeAlias(CppObj* typeAliasObj, TypeResolvingFlag typeResolvingFlag) const;

  /**
   * Itmay happen a class is not directly identifiable as facades.
   * But if it has pure virtual and it's parent is facade then may be this class
   * too is used as facade.
   */
  void identifyPobableFacades(CibCompound* compound);
  void identifyAbstract(CibCompound* compound);

private:
  bool cibCppObjTreeCreated_;

  std::unique_ptr<CppProgram> program_;
  const CibParams&            cibParams_;
  CibIdMgr&                   cibIdMgr_;
  std::set<std::string>       smartPtrNames_;
  std::set<std::string>       uniquePtrNames_;
};

//////////////////////////////////////////////////////////////////////////
