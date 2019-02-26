#include "example.h"

#include <catch/catch.hpp>

#include <type_traits>

TEST_CASE("Classes with no proxy should be shared across component")
{
  REQUIRE(sizeof(CPoint) == 3 * sizeof(double));

  {
    CPoint p;
    CHECK(p.x == 0);
    CHECK(p.y == 0);
    CHECK(p.z == 0);
  }

  CPoint p1(1, 2, 3);
  CPoint p2(4, 5, 6);
  auto p = p1;
  p1 += p2;
  CHECK(p1.x == p.x + p2.x);
  CHECK(p1.y == p.y + p2.y);
  CHECK(p1.z == p.z + p2.z);
}
