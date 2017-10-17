#ifndef __CPPPROGEX_H__
#define __CPPPROGEX_H__

#include "cppprog.h"

#include <boost/filesystem.hpp>

#include <map>
#include <set>

///////////////////////////////////////////////////////////////////////////////////////////////////

class CppObj;

struct CibCppCompound;
struct CibCppFunction;
class CibFunctionHelper;

typedef std::set<std::string> stringset;

/**
 * \brief Represents an entire C++ program.
 *
 * For our purpose we may use only C++ header files but this class can be used to load and parse C++ source files as well.
 */
class CppProgramEx
{
public:
  CppProgramEx();
  CppProgramEx(const char* inputPath);

  const CppProgram& getProgram() const { return *program_.get(); }

public:
  /**
   * Resolves a name of type A::B (with or without scope resolution operators).
   * @param name Name which may contain many scope resolution operators.
   * @param typeNode CppTypeTreeNode object from where the search should begin.
   * @return CppObj corresponding to the name given.
   */
  CppObj* getCppObjFromTypeName(const std::string& name, const CppTypeTreeNode* typeNode) const;
  /**
   * Resolves a name of type A::B (with or without scope resolution operators).
   * @param name Name which may contain many scope resolution operators.
   * @param begScope Compound object from where the search should begin.
   * @return CppObj corresponding to the name given.
   */
  CppObj* getCppObjFromTypeName(const std::string& name, const CppCompound* begScope) const;

private:
  /**
   * Creates CibCppCompound from CppCompound.
   * \note It does not populate inheritance info.
   */
  void resolveInheritance(CibCppCompound* cppCompound);
  void buildCibCppObjTree();
  void markInterfaceAndFacade(CibCppCompound* cppCompound);
  /**
   * Evaluates argument function to detect attribute of classes used in args.
   */
  void evaluateArgs(const CibFunctionHelper& func);
  /**
  * Evaluates return type of function to detect attribute of class used in return type.
  */
  void evaluateReturnType(CibCppFunction* func);

private:
  bool cibCppObjTreeCreated_;

  std::unique_ptr<CppProgram> program_;
};

//////////////////////////////////////////////////////////////////////////

inline CppProgramEx::CppProgramEx()
  : cibCppObjTreeCreated_(false)
{
}

#endif //__CPPPROGEX_H__
