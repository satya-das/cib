#pragma once

struct I;
struct A;
using ImplI = I;
using ImplA = A;

extern "C" struct MethodTableA {
  ImplA*    (*Create) ();
  void      (*Delete) (ImplA*);
  int       (*UseI)   (ImplA*, ImplI*);
};
