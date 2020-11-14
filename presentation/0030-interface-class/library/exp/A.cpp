#include "A.h"
#include "MethodTableA.h"
#include "MethodTableGenericI.h"

extern "C" MethodTableA DLLIMPORT gMethodTableA;
extern "C" MethodTableGenericI DLLIMPORT gMethodTableGenericI;

static int F(I* pI) {
  return pI->F();
}

static MethodTableI gMethodTableI = { &F };

I::I()
  : I(gMethodTableGenericI.Create(this, &gMethodTableI))
{}

I::~I() {
  gMethodTableGenericI.Delete(pImpl);
}

A::A()
  : A(gMethodTableA.Create())
{}

A::~A() {
  gMethodTableA.Delete(pImpl);
}

int A::UseI(I* pI) {
  return gMethodTableA.UseI(pImpl, pI->pImpl);
}
