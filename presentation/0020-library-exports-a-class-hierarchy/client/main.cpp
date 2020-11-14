#define CATCH_CONFIG_MAIN
#include <catch/catch.hpp>

#include "B.h"

TEST_CASE("Use class hierarchy")
{
  B b;
  CHECK(b.F() == 1);
  CHECK(b.G() == 2);
}
