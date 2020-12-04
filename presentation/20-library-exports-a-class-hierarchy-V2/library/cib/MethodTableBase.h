#pragma once
#include <stddef.h>

struct Base;
using BaseImpl = Base;

extern "C" struct MethodTableBase {
  const size_t numMethods;

  BaseImpl* (*Create) ();
  void      (*Delete) (BaseImpl*);
  int       (*F)      (BaseImpl*);
  int       (*G)      (BaseImpl*);
  int       (*E)      (BaseImpl*);
};
