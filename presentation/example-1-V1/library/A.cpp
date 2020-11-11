#include "A.h"

A::A()
  : m1(1)
  , m2(2)
{}

A::A(const A&) {}

A::~A() {}

int A::F()     { return m1; }
int A::F(int)  { return m2; }
int A::V()     { return 5;  }
