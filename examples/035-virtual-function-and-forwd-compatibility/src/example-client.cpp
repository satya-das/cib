#include "example.h"

#include <catch/catch.hpp>

void PerformTest(A* pA)
{
  CHECK(pA->VirtFunc() == 15);          // Compiler generated instruction will effectively call `pA->B::VirtFunc()`
  if (pA->A::VirtFunc() == 2)
    CHECK(pA->AnotherVirtFunc() == 100);  // New function should be available to newer clients.
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
