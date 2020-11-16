#include "A.h"

C::C() {}

C::C(const C&) {}

C::~C() {}

int C::UseInterface(I* pI) {
    return pI->F();
}
