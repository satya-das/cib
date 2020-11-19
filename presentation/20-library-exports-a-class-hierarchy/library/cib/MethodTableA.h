#pragma once
#include <stddef.h>

struct A;
using ImplA = A;

extern "C" struct MethodTableA {
  const size_t numMethods;

  ImplA*    (*Create) ();
  void      (*Delete) (ImplA*);
  int       (*F)      (ImplA*);
  int       (*G)      (ImplA*);
};
