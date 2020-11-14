#pragma once

struct ImplGenericI;
struct ImplA;



extern "C" struct MethodTableA {
  ImplA*    (*Create) ();
  void      (*Delete) (ImplA*);
  int       (*UseI)   (ImplA*, ImplGenericI*);
};
