#include "MethodTableB.h"

#include "B.h"


static B* CreateB() {
  return new B;
}

static void DeleteB(B* objB) {
  delete objB;
}

static int G(B* objB) {
  return objB->G();
}

static A* CastToA(B* objB) {
  return objB;
}


extern "C" {
  MethodTableB DLLEXPORT gMethodTableB = {
    4,
    &CreateB,
    &DeleteB,
    &CastToA,
    &G
  };
}
