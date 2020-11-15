#pragma once
#include <stddef.h>

struct ImplI;

struct MethodTableI {
  int (*F) (ImplI*);
};

struct GenericI;
using ImplGenericI = GenericI;

extern "C" struct MethodTableGenericI {
  const size_t numMethods;

  ImplGenericI* (*Create) (ImplI*, MethodTableI*);
  void          (*Delete) (ImplGenericI*);
};
