#define CATCH_CONFIG_MAIN
#include <catch/catch.hpp>

#include "B.h"

TEST_CASE("Use class hierarchy")
{
  B b;
  A* pA = &b;
  CHECK(pA->F() == 1);
  CHECK(pA->A::G() == 2);
  CHECK(pA->G() == 3);
  CHECK(b.H() == 4);
}
