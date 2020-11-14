#pragma once

struct A;
using ImplA = A;

extern "C" struct MethodTableA {
  ImplA*    (*Create) ();
  void      (*Delete) (ImplA*);
  int       (*F)      (ImplA*);
};
