#include "MethodTableA.h"

#include "A.h"

static A* CreateA() {
  return new A;
}

static void DeleteA(A* objA) {
  delete objA;
}

static int UseI(A* objA, I* pI) {
  return objA->UseI(pI);
}



extern "C" {
  MethodTableA DLLEXPORT gMethodTableA = {
    3,
    &CreateA,
    &DeleteA,
    &UseI
  };
}
