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
#include <set>

///////////////////////////////////////////////////////////////////////////////////////////////////

struct CppObj;

struct CibCppCompound;
struct CibCppFunction;
class CibFunctionHelper;
class CibIdMgr;

typedef std::set<std::string> stringset;

/**
 * \brief Provides information about C++ program and related things needed by CIB.
 */
class CibHelper
{
public:
  CibHelper(const char* inputPath, CibIdMgr& cibIdMgr);

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
    return resolveTypename(name, typeNode);
  }
  /**
   * Resolves a name of type A::B (with or without scope resolution operators).
   * @param name Name which may contain zero or more scope resolution operators.
   * @param begScope Compound object from where the search should begin.
   * @return CppObj corresponding to the name given.
   */
  CppObj* getCppObjFromTypeName(const std::string& name, const CppCompound* begScope) const
  {
    return resolveTypename(name, begScope);
  }

  void onNewCompound(CibCppCompound* compound, const CibCppCompound* parent) const;

  CppObj* resolveVarType(CppVarType* varType, const CppTypeTreeNode* typeNode);
  CppObj* resolveVarType(CppVarType* varType, const CppCompound* begScope);

private:
  void resolveInheritance(CibCppCompound* cppCompound);
  void buildCibCppObjTree();
  void markClassType(CibCppCompound* cppCompound);
  void markNeedsGenericProxyDefinition(CibCppCompound* cppCompound);
  void setNeedsGenericProxyDefinition(CibCppCompound* cppCompound);

  /**
   * Evaluates argument function to detect attribute of classes used in args.
   */
  void evaluateArgs(const CibFunctionHelper& func);
  /**
   * Evaluates return type of function to detect attribute of class used in
   * return type.
   */
  void evaluateReturnType(const CibFunctionHelper& func);

  CppObj* resolveTypename(const std::string& name, const CppTypeTreeNode* typeNode) const;
  CppObj* resolveTypename(const std::string& name, const CppCompound* begScope) const;

  /**
   * Itmay happen a class is not directly identifiable as facades.
   * But if it has pure virtual and it's parent is facade then may be this class
   * too is used as facade.
   */
  void identifyPobableFacades(CibCppCompound* compound);
  void identifyAbstract(CibCppCompound* compound);

private:
  bool cibCppObjTreeCreated_;

  std::unique_ptr<CppProgram> program_;
  CibIdMgr&                   cibIdMgr_;
};

//////////////////////////////////////////////////////////////////////////
