#include "MethodTableBase.h"

#include "Base.h"

static Base* CreateBase() {
  return new Base;
}

static void DeleteBase(Base* pBase) {
  delete pBase;
}

static int F(Base* pBase) {
  return pBase->Base::F();
}

static int G(Base* pBase) {
  return pBase->Base::G();
}



extern "C" {
  MethodTableBase DLLEXPORT gMethodTableBase = {
    4,
    &CreateBase,
    &DeleteBase,
    &F,
    &G
  };
}
