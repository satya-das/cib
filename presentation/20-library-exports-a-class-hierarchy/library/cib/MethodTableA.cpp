#include "MethodTableA.h"

#include "A.h"

static A* CreateA() {
  return new A;
}

static void DeleteA(A* objA) {
  delete objA;
}

static int F(A* objA) {
  return objA->A::F();
}

static int G(A* objA) {
  return objA->A::G();
}



extern "C" {
  MethodTableA DLLEXPORT gMethodTableA = {
    4,
    &CreateA,
    &DeleteA,
    &F,
    &G
  };
}
