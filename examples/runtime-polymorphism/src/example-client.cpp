#include "example.h"

#include <catch/catch.hpp>

void PerformTest(A* pA)
{
  CHECK(pA->VirtFunc() == 15);          // Compiler generated instruction will effectively call `pA->B::VirtFunc()`
  CHECK(pA->A::VirtFunc() == 5);        // A regular call without use of virtual table.
}

TEST_CASE("ABI stable virtual function call across component boundary")
{
  // Test for object created by client on heap
  PerformTest(new B());
  // Test for object created by library
  PerformTest(B::Create());
  // Test for object created on stack
  B b;
  PerformTest(&b);
}
