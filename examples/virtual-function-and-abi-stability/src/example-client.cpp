#include "example-v1.h"

#include <catch/catch.hpp>

TEST_CASE("Virtual function call across library")
{
  A* pA = new B();

  REQUIRE(pA->VirtFunc() == 15);    // Compiler generated instruction will effectively call `pA->B::VirtFunc()`
  REQUIRE(pA->A::VirtFunc() == 5);  // A regular call without use of virtual table.
  REQUIRE(pA->SomeFunc() == 10);    // Non-virtual call.
}
