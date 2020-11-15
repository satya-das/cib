#include "MethodTableA.h"

#include "A.h"

namespace {

A* CreateA() {
  return new A;
}

A* CopyA(const A* objA) {
  return new A(*objA);
}

void DeleteA(A* objA) {
  delete objA;
}

int F(A* objA) {
  return objA->F();
}

int F2(A* objA, int x) {
  return objA->F(x);
}

int U(A* objA) {
  return objA->U();
}

int V(A* objA) {
  return objA->V();
}

}


extern "C" {
  MethodTableA DLLEXPORT gMethodTableA = {
    7,
    &CreateA,
    &CopyA,
    &DeleteA,
    &F,
    &F2,
    &V,
    &U
  };
}
