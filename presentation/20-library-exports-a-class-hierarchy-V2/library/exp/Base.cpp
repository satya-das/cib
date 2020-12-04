#include "Base.h"
#include "MethodTableBase.h"

#include <functional>

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

int Base::E() {
  if (gMethodTableBase.numMethods < 5)
    throw std::bad_function_call();
  return gMethodTableBase.E(pImpl);
}
