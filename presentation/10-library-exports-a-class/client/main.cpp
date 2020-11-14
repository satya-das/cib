#define CATCH_CONFIG_MAIN
#include <catch/catch.hpp>

#include "A.h"

TEST_CASE("Client should be able to use library class")
{
  A a;
  CHECK(a.F() == 1);
  CHECK(a.F(5) == 2);
  CHECK(a.V() == 3);
}
