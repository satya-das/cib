#include "example.h"

#include <catch/catch.hpp>

TEST_CASE("RValue references should work expectedly")
{
  RValueExample x(5);
  CHECK(x.GetValue() == 5);
  RValueExample y = std::move(x);
  CHECK(y.GetValue() == 5);
  CHECK(x.GetValue() == 0);
  RValueExample z(0);
  z = std::move(y);
  CHECK(y.GetValue() == 0);
  CHECK(z.GetValue() == 5);
}
