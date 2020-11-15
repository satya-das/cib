#pragma once
#include <stddef.h>

struct I;
struct A;
using ImplI = I;
using ImplA = A;

extern "C" struct MethodTableA {
  const size_t numMethods;

  ImplA*    (*Create) ();
  void      (*Delete) (ImplA*);
  int       (*UseI)   (ImplA*, ImplI*);
};
