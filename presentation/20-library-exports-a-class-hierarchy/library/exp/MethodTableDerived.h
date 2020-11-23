#pragma once
#include <stddef.h>

struct BaseImpl;


struct DerivedImpl;

extern "C" struct MethodTableDerived {
  const size_t numMethods;

  DerivedImpl*  (*Create)     ();
  void          (*Delete)     (DerivedImpl*);
  BaseImpl*     (*CastToBase) (DerivedImpl*);
  int           (*G)          (DerivedImpl*);
  int           (*H)          (DerivedImpl*);
};
