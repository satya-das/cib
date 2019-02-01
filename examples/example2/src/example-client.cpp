#include "example.h"

#include <catch/catch.hpp>

TEST_CASE("Virtual function call across library")
{
  Example::A* pA = new Example::B();

  REQUIRE(pA->VirtFunc() == 15);    // Should call B::VirtFunc
  REQUIRE(pA->A::VirtFunc() == 10); // A regular call without use of virtual table.
  REQUIRE(pA->SomeFunc() == 5);     // Non-virtual call.
}
