#pragma once
#include <stddef.h>

class ImplA;


extern "C" struct MethodTableA {
  const size_t numMethods;

  ImplA*    (*Create) ();
  ImplA*    (*Copy)   (const ImplA*);
  void      (*Delete) (ImplA*);
  int       (*F)      (ImplA*);
  int       (*F2)     (ImplA*, int);
  int       (*V)      (ImplA*);
};
