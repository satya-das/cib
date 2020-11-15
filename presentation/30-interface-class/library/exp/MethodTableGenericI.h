#pragma once
#include <stddef.h>

struct I;
using ImplI = I;

struct MethodTableI {
  int (*F) (ImplI*);
};

struct ImplGenericI;


extern "C" struct MethodTableGenericI {
  const size_t numMethods;

  ImplGenericI* (*Create) (ImplI*, MethodTableI*);
  void          (*Delete) (ImplGenericI*);
};
