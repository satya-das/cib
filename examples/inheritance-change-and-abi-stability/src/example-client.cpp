#include "example.h"

#include <catch/catch.hpp>

void PerformTest(A* pA)
{
  CHECK(pA->VirtFunc() == 15);          // Compiler generated instruction will effectively call `pA->B::VirtFunc()`
  CHECK(pA->A::VirtFunc() == 5);        // A regular call without use of virtual table.
  CHECK(pA->SomeFunc() == 10);          // Non-virtual call.
  CHECK(pA->AnotherVirtFunc() == 100);

  I1* pI1 = static_cast<B*>(pA);
  CHECK(pI1->F() == 1);

  I2* pI2 = static_cast<B*>(pA);
  CHECK(pI2->G() == 2);
}

TEST_CASE("Virtual function call across library")
{
  // Test for object created by client on heap
  PerformTest(new B());
  // Test for object created by library
  PerformTest(B::Create());
  // Test for object created on stack
  B b;
  PerformTest(&b);
}
