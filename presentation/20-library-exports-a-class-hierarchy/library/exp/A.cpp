#include "A.h"
#include "MethodTableA.h"

extern "C" MethodTableA DLLIMPORT gMethodTableA;

A::A(ImplA* pImplA)
  : pImpl(pImplA)
{}

A::A()
  : A(gMethodTableA.Create())
{}

A::~A() {
  gMethodTableA.Delete(pImpl);
}

int A::F() {
  return gMethodTableA.F(pImpl);
}

int A::G() {
  return gMethodTableA.G(pImpl);
}
