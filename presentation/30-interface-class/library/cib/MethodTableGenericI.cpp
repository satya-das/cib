#include "MethodTableGenericI.h"

#include "A.h"

struct ImplI;

struct GenericI : I {
  GenericI(ImplI* p, MethodTableI* m)
    : pImpl(p)
    , methodTableI(m)
  {}

  int F() override {
    return methodTableI->F(pImpl);
  }

private:
  ImplI*        pImpl;
  MethodTableI* methodTableI;
};

static GenericI* CreateGenericI(ImplI* p, MethodTableI* m) {
  return new GenericI(p, m);
}

static void DeleteGenericI(GenericI* pGenericI) {
  delete pGenericI;
}


extern "C" {
  MethodTableGenericI DLLEXPORT gMethodTableGenericI = {
    2,
    &CreateGenericI,
    &DeleteGenericI
  };
}
