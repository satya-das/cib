#pragma once

struct ImplI;

struct MethodTableI {
  int (*F) (ImplI*);
};

struct GenericI;
using ImplGenericI = GenericI;

extern "C" struct MethodTableGenericI {
  ImplGenericI* (*Create) (ImplI*, MethodTableI*);
  void          (*Delete) (ImplGenericI*);
};
