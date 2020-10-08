#include "example.h"

#include <catch/catch.hpp>

void PerformTest(A* pA)
{
  CHECK(pA->VirtFunc() == 15);          // Compiler generated instruction will effectively call `pA->B::VirtFunc()`
  CHECK(pA->A::VirtFunc() == 1);        // A regular call without use of virtual table.
  CHECK(pA->SomeFunc() == 10);          // Non-virtual call.
  CHECK(pA->AnotherVirtFunc() == 100);
}

TEST_CASE("Virtual function call across library")
{
  // Test for object created by client on heap
  auto* pB1 = new B();
  PerformTest(pB1);
  delete pB1;
  // Test for object created by library
  auto* pB2 = B::Create();
  PerformTest(pB2);
  delete pB2;
  // Test for object created on stack
  B b;
  PerformTest(&b);
}
