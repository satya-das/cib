#include "example.h"

#include <catch/catch.hpp>

#include <type_traits>

TEST_CASE("Class with deleted members should behave expectedly")
{
  A a;
  CHECK(a.f() == 9);
}
