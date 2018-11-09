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

#ifndef __CPPPROGEX_H__
#define __CPPPROGEX_H__

#include "cppprog.h"

#include <boost/filesystem.hpp>

#include <map>
#include <set>

///////////////////////////////////////////////////////////////////////////////////////////////////

struct CppObj;

struct CibCppCompound;
struct CibCppFunction;
class CibFunctionHelper;

typedef std::set<std::string> stringset;

/**
 * \brief Represents an entire C++ program.
 *
 * For our purpose we may use only C++ header files but this class can be used
 * to load and parse C++ source files as well.
 */
class CibHelper
{
public:
  CibHelper();
  CibHelper(const char* inputPath);

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
    return resolveTypename(name, typeNode, false);
  }
  /**
   * Resolves a name of type A::B (with or without scope resolution operators).
   * @param name Name which may contain zero or more scope resolution operators.
   * @param begScope Compound object from where the search should begin.
   * @return CppObj corresponding to the name given.
   */
  CppObj* getCppObjFromTypeName(const std::string& name, const CppCompound* begScope) const
  {
    return resolveTypename(name, begScope, false);
  }

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

  CppObj* resolveTypename(const std::string& name, const CppTypeTreeNode* typeNode, bool updateTemplateInsances) const;
  CppObj* resolveTypename(const std::string& name, const CppCompound* begScope, bool updateTemplateInsances) const;

private:
  bool cibCppObjTreeCreated_;

  std::unique_ptr<CppProgram> program_;
};

//////////////////////////////////////////////////////////////////////////

inline CibHelper::CibHelper()
  : cibCppObjTreeCreated_(false)
{
}

#endif //__CPPPROGEX_H__
