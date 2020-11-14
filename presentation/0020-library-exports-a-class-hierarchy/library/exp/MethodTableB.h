#pragma once


struct ImplA;


struct ImplB;

extern "C" struct MethodTableB {
  ImplB*    (*Create) ();
  void      (*Delete) (ImplB*);
  ImplA*    (*CastToA)(ImplB*);
  int       (*G)      (ImplB*);
};
