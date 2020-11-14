#include "MethodTableA.h"

#include "A.h"

static A* CreateA() {
  return new A;
}

static void DeleteA(A* objA) {
  delete objA;
}

static int F(A* objA) {
  return objA->F();
}



extern "C" {
  MethodTableA DLLEXPORT gMethodTableA = {
    &CreateA,
    &DeleteA,
    &F
  };
}
