#include "MethodTableB.h"

#include "B.h"


static B* CreateB() {
  return new B;
}

static void DeleteB(B* objB) {
  delete objB;
}

static int G(B* objB) {
  return objB->B::G();
}

static int H(B* objB) {
  return objB->B::H();
}

static A* CastToA(B* objB) {
  return objB;
}


extern "C" {
  MethodTableB DLLEXPORT gMethodTableB = {
    5,
    &CreateB,
    &DeleteB,
    &CastToA,
    &G,
    &H
  };
}
