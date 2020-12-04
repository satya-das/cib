#pragma once
#include <stddef.h>

struct Base;
using BaseImpl = Base;

struct Derived;
using DerivedImpl = Derived;

extern "C" struct MethodTableDerived {
  const size_t numMethods;

  DerivedImpl*  (*Create)     ();
  void          (*Delete)     (DerivedImpl*);
  BaseImpl*     (*CastToBase) (DerivedImpl*);
  int           (*G)          (DerivedImpl*);
  int           (*H)          (DerivedImpl*);
};
