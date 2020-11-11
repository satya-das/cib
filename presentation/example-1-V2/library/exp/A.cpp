#include "A.h"
#include "MethodTableA.h"

extern "C" MethodTableA DLLIMPORT gMethodTableA;

A::A() : pImpl(gMethodTableA.Create()) {}

A::A(const A& a) : pImpl(gMethodTableA.Copy(a.pImpl)) {}

A::~A() {
  gMethodTableA.Delete(pImpl);
}

int A::F() {
  return gMethodTableA.F(pImpl);
}

int A::F(int x) {
  return gMethodTableA.F2(pImpl, x);
}

int A::U() {
  return gMethodTableA.U(pImpl);
}

int A::V() {
  return gMethodTableA.V(pImpl);
}
