#pragma once

struct I;
using ImplI = I;

struct MethodTableI {
  int (*F) (ImplI*);
};

struct ImplGenericI;


extern "C" struct MethodTableGenericI {
  ImplGenericI* (*Create) (ImplI*, MethodTableI*);
  void          (*Delete) (ImplGenericI*);
};
