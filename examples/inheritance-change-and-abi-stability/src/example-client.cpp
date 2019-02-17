#include "example.h"

#include <catch/catch.hpp>

TEST_CASE("Virtual function call across library")
{
  A* pA = new B();

  CHECK(pA->VirtFunc() == 15);          // Compiler generated instruction will effectively call `pA->B::VirtFunc()`
  CHECK(pA->A::VirtFunc() == 5);        // A regular call without use of virtual table.
  CHECK(pA->SomeFunc() == 10);          // Non-virtual call.
  CHECK(pA->AnotherVirtFunc() == 100);

  I1* pI1 = static_cast<B*>(pA);
  CHECK(pI1->F() == 1);

  I2* pI2 = static_cast<B*>(pA);
  CHECK(pI2->G() == 2);
}
