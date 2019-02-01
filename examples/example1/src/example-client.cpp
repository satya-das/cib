#include "example.h"

#include <catch/catch.hpp>

TEST_CASE("Method call")
{
  Example::A a;
  REQUIRE(a.SomeFunc() == 5);
}
