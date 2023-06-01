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

#include "cppast.h"

#include <functional>
#include <map>
#include <string>

class CibProgram;
class CibCompound;

/**
 * @brief Manages template instance creation.
 */
class CibTemplateInstanceManager
{
public:
  CibTemplateInstanceManager(CibProgram& cibProgram)
    : cibProgram_(cibProgram)
  {
  }

  /**
   * @brief Creates a Template Instantiation object
   *
   * @param templateClass Template class whose instance needs to be created.
   * @param name Full name of template instantiation, e.g. std::vector<int>.
   * @param instantiationScope Scope within which the template arguments should be resolved.
   * @param cibProgram CibProgram object that is used to resolve types used in template arguments.
   * @return Instantiated template compound object.
   * @note Return value can be from the cache if the same object was instantiated before.
   */
  CibCompound* createTemplateInstantiation(CibCompound*       templateClass,
                                           const std::string& name,
                                           const CibCompound* instantiationScope,
                                           CibProgram&        cibProgram);

  /**
   * @brief Number of instantiation of a template class
   */
  size_t numTemplateInstances(const CibCompound* templateClass) const;

  /**
   * @brief Iterates for all instance of a template class.
   */
  void forEachTemplateInstance(const CibCompound* templateClass, std::function<void(CibCompound*)> callable) const;

private:
  /**
   * Template args for creating template instances are unfortunately a bit complex.
   * Template arg can be a typename or an expression.
   * To handle both case template arg is of CppObj* type but in case it is an expression
   * we use existing expression object supplied by the usage or default value.
   * For the case it is typename we need to resolve it and so a new CppVarType object is created which will need
   * deletion. We can also simply clone CppExpr for other case too and not need special deletion but that brings it's
   * own implementation cost. So, this hack. :)
   */
  struct TemplateArgDeleter
  {
    void operator()(CppObj* obj) const
    {
      if (obj->objType_ != CppExpr::kObjectType)
        delete obj;
    }
  };

  using TemplateArgPtr         = std::unique_ptr<CppObj, TemplateArgDeleter>;
  using StringVector           = std::vector<std::string>;
  using TemplateArgs           = StringVector;
  using TemplateArgsToInstance = std::map<TemplateArgs, CibCompound*>;
  using TemplateInstanceCache  = std::map<const CibCompound*, TemplateArgsToInstance>;
  using TemplateArgValues      = std::map<std::string, TemplateArgPtr>;
  using NameToInstance         = std::map<std::string, CibCompound*>;
  using ScopedNameToInstance   = std::map<const CibCompound*, NameToInstance>;
  friend struct PrivateTypesAccessor;

  CibCompound* getTemplateInstance(CibCompound* templateClass, const TemplateArgs& templateArgs) const;

private:
  CibProgram&           cibProgram_;
  ScopedNameToInstance  usedNameToInstance_;
  ScopedNameToInstance  canonicalNameToInstance_;
  TemplateInstanceCache templateInstanceCache_;
};

inline size_t CibTemplateInstanceManager::numTemplateInstances(const CibCompound* templateClass) const
{
  const auto nameToInstanceItr = canonicalNameToInstance_.find(templateClass);
  if (nameToInstanceItr == canonicalNameToInstance_.end())
    return 0;
  return nameToInstanceItr->second.size();
}

inline void CibTemplateInstanceManager::forEachTemplateInstance(const CibCompound*                templateClass,
                                                                std::function<void(CibCompound*)> callable) const
{
  const auto nameToInstanceItr = canonicalNameToInstance_.find(templateClass);
  if (nameToInstanceItr == canonicalNameToInstance_.end())
    return;

  for (const auto instance : nameToInstanceItr->second)
  {
    callable(instance.second);
  }
}
