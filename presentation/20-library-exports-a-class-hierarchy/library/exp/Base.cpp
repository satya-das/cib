#include "Base.h"
#include "MethodTableBase.h"

extern "C" MethodTableBase DLLIMPORT gMethodTableBase;

Base::Base(BaseImpl* pBaseImpl)
  : pImpl(pBaseImpl)
{}

Base::Base()
  : Base(gMethodTableBase.Create())
{}

Base::~Base() {
  gMethodTableBase.Delete(pImpl);
}

int Base::F() {
  return gMethodTableBase.F(pImpl);
}

int Base::G() {
  return gMethodTableBase.G(pImpl);
}
