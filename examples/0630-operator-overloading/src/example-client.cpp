#include "example.h"

#include <catch/catch.hpp>

TEST_CASE("Operator calls should work seamlessly")
{
  Example::A a;
  constexpr int x = 128493;
  a << x;
  int y = 0;
  a >> y;
  CHECK(y == x);
}
