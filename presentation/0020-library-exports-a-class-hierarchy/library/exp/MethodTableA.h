#pragma once


struct ImplA;

extern "C" struct MethodTableA {
  ImplA*    (*Create) ();
  void      (*Delete) (ImplA*);
  int       (*F)      (ImplA*);
};
