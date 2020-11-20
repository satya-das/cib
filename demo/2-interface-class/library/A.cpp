#include "A.h"

A::A() {}

A::A(const A&) {}

A::~A() {}

int A::UseI(I* pI) {
    return pI->F();
}
