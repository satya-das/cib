#ifndef __CPPPROGEX_H__
#define __CPPPROGEX_H__

#include "cibtypes.h"

#include "cppprog.h"

#include <boost/filesystem.hpp>

#include <map>
#include <set>

///////////////////////////////////////////////////////////////////////////////////////////////////

class CibObj;
class CibCppCompound;
class CibFunction;

typedef std::set<std::string> stringset;

/**
 * \brief Represents an entire C++ program.
 *
 * For our purpose we may use only C++ header files but this class can be used to load and parse C++ source files as well.
 */
class CppProgramEx : public CppProgram
{
public:
  CppProgramEx();
  CppProgramEx(const char* inputPath);

  void loadProgramEx(const char* inputPath)
  {
    loadProgram(inputPath);
    buildCibCppObjTree();
  }

public:
  /**
   * Resolves a name of type A::B (with or without scope resolution operators).
   * @param name Name which may contain many scope resolution operators.
   * @param typeNode CppTypeTreeNode object from where the search should begin.
   * @return CppObj corresponding to the name given.
   */
  const CibCppObj* getCibCppObjFromTypeName(const std::string& name, const CppTypeTreeNode* typeNode) const;
  /**
   * Resolves a name of type A::B (with or without scope resolution operators).
   * @param name Name which may contain many scope resolution operators.
   * @param begScope Compound object from where the search should begin.
   * @return CppObj corresponding to the name given.
   */
  const CibCppObj* getCibCppObjFromTypeName(const std::string& name, const CppCompound* begScope) const;
  /**
   * @return CibCppObj corresponding to given CppObj.
   */
  const CibCppObj* CibCppObjFromCppObj(const CppObj* cppObj) const;

private:
  /**
   * Creates CibCppCompound from CppCompound.
   * \note It does not populate inheritance info.
   */
  CibCppCompound* CppCompoundObjToCibCppCompound(CppCompound* cppCompound, CibCppCompound* owner);
  CibCppFunction* CppFunctionObjToCibCppFunction(CppFunction* cppFunc, CibCppCompound* owner);
  CibCppFunction* CppConstructorObjToCibCppFunction(CppConstructor* ctor, CibCppCompound* owner);
  CibCppFunction* CppDestructorObjToCibCppFunction(CppDestructor* dtor, CibCppCompound* owner);
  void resolveInheritance(CppCompound* cppCompound);
  void buildCibCppObjTree();
  void markInterfaceAndFacade(CppCompound* cppCompound);
  /**
   * Evaluates argument function to detect attribute of classes used in args.
   */
  void evaluateArgs(CibCppFunction* func);
  /**
  * Evaluates return type of function to detect attribute of class used in return type.
  */
  void evaluateReturnType(CibCppFunction* func);

private:
  typedef std::map<const CppObj*, const CibCppObj*> CppObjToCibCppObjMap;

private:
  CppObjToCibCppObjMap cppObjToCibCppObjMap_;
  bool cibCppObjTreeCreated_;
};

//////////////////////////////////////////////////////////////////////////

inline CppProgramEx::CppProgramEx()
  : cibCppObjTreeCreated_(false)
{
}

inline CppProgramEx::CppProgramEx(const char* inputPath)
  : CppProgram(inputPath)
  , cibCppObjTreeCreated_(false)
{
  buildCibCppObjTree();
}

#endif //__CPPPROGEX_H__
