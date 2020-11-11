#pragma once

class ImplA;


extern "C" struct MethodTableA {
  ImplA*    (*Create) ();
  ImplA*    (*Copy)   (const ImplA*);
  void      (*Delete) (ImplA*);
  int       (*F)      (ImplA*);
  int       (*F2)     (ImplA*, int);
  int       (*V)      (ImplA*);
};
