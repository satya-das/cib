#pragma once

struct A;
using ImplA = A;

struct B;
using ImplB = B;

extern "C" struct MethodTableB {
  ImplB*    (*Create) ();
  void      (*Delete) (ImplB*);
  ImplA*    (*CastToA)(ImplB*);
  int       (*G)      (ImplB*);
};
