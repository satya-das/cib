#pragma once
#include <stddef.h>

struct A;
using ImplA = A;

struct B;
using ImplB = B;

extern "C" struct MethodTableB {
  const size_t numMethods;

  ImplB*    (*Create) ();
  void      (*Delete) (ImplB*);
  ImplA*    (*CastToA)(ImplB*);
  int       (*G)      (ImplB*);
  int       (*H)      (ImplB*);
};
