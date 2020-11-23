#include "MethodTableDerived.h"

#include "Derived.h"


static Derived* CreateDerived() {
  return new Derived;
}

static void DeleteDerived(Derived* pDerived) {
  delete pDerived;
}

static int G(Derived* pDerived) {
  return pDerived->Derived::G();
}

static int H(Derived* pDerived) {
  return pDerived->Derived::H();
}

static Base* CastToBase(Derived* pDerived) {
  return pDerived;
}


extern "C" {
  MethodTableDerived DLLEXPORT gMethodTableDerived = {
    5,
    &CreateDerived,
    &DeleteDerived,
    &CastToBase,
    &G,
    &H
  };
}
