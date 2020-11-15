#pragma once
#include <stddef.h>

struct ImplGenericI;
struct ImplA;



extern "C" struct MethodTableA {
  const size_t numMethods;

  ImplA*    (*Create) ();
  void      (*Delete) (ImplA*);
  int       (*UseI)   (ImplA*, ImplGenericI*);
};
