#include "Derived.h"
#include "MethodTableDerived.h"

extern "C" MethodTableDerived DLLIMPORT gMethodTableDerived;

Derived::Derived(DerivedImpl* pImplDerived)
  : Base(gMethodTableDerived.CastToBase(pImplDerived))
  , pImpl(pImplDerived)
{}

Derived::Derived()
  : Derived(gMethodTableDerived.Create())
{}

Derived::~Derived() {
  gMethodTableDerived.Delete(pImpl);
  Base::pImpl = nullptr;
}

int Derived::G() {
  return gMethodTableDerived.G(pImpl);
}

int Derived::H() {
  return gMethodTableDerived.H(pImpl);
}
