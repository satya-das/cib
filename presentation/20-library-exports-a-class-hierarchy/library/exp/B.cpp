#include "B.h"
#include "MethodTableB.h"

extern "C" MethodTableB DLLIMPORT gMethodTableB;

B::B(ImplB* pImplB)
  : A(gMethodTableB.CastToA(pImplB))
  , pImpl(pImplB)
{}

B::B()
  : B(gMethodTableB.Create())
{}

B::~B() {
  gMethodTableB.Delete(pImpl);
  A::pImpl = nullptr;
}

int B::G() {
  return gMethodTableB.G(pImpl);
}
