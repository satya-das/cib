#include "example.h"

#include <catch/catch.hpp>

TEST_CASE("RValue references should work expectedly")
{
  RValueExample x(5);
  RValueExample y = std::move(x);
  REQUIRE(x.GetValue() == 0);
  REQUIRE(y.GetValue() == 5);
  RValueExample z(0);
  z = std::move(y);
  REQUIRE(y.GetValue() == 0);
  REQUIRE(z.GetValue() == 5);
}
