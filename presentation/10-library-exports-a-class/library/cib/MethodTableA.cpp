#include "MethodTableA.h"

#include "A.h"

static A* CreateA() {
  return new A;
}

static A* CopyA(const A* objA) {
  return new A(*objA);
}

static void DeleteA(A* objA) {
  delete objA;
}

static int F(A* objA) {
  return objA->F();
}

static int F2(A* objA, int x) {
  return objA->F(x);
}

static int V(A* objA) {
  return objA->V();
}


extern "C" {
  MethodTableA DLLEXPORT gMethodTableA = {
    6,
    &CreateA,
    &CopyA,
    &DeleteA,
    &F,
    &F2,
    &V
  };
}
