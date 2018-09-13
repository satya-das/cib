#pragma once

#include "cppdom.h"
#include "cppobjfactory.h"

class CibObjFactory : public CppObjFactory
{
public:
  virtual CppCompound* CreateCompound(std::string name, CppObjProtLevel prot, CppCompoundType type) const;
  virtual CppCompound* CreateCompound(CppObjProtLevel prot, CppCompoundType type) const;
  virtual CppCompound* CreateCompound(std::string name, CppCompoundType type) const;
  virtual CppCompound* CreateCompound(CppCompoundType type) const;

  virtual CppConstructor* CreateConstructor(CppObjProtLevel prot,
                                            std::string     name,
                                            CppParamList*   params,
                                            CppMemInitList* memInitList,
                                            unsigned int    attr) const;
  virtual CppDestructor*  CreateDestructor(CppObjProtLevel prot, std::string name, unsigned int attr) const;
  virtual CppFunction*    CreateFunction(CppObjProtLevel prot,
                                         std::string     name,
                                         CppVarType*     retType,
                                         CppParamList*   params,
                                         unsigned int    attr) const;
};
