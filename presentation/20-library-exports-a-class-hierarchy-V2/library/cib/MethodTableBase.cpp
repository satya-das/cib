#include "MethodTableBase.h"

#include "Base.h"

static Base* CreateBase() {
  return new Base;
}

static void DeleteBase(Base* pBase) {
  delete pBase;
}

static int F(Base* pBase) {
  return pBase->F();
}

static int G(Base* pBase) {
  return pBase->Base::G();
}

static int E(Base* pBase) {
  return pBase->E();
}



extern "C" {
  MethodTableBase DLLEXPORT gMethodTableBase = {
    5,
    &CreateBase,
    &DeleteBase,
    &F,
    &G,
    &E
  };
}
