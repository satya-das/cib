#include "example.h"

#include <catch/catch.hpp>

TEST_CASE("Calling method of library exported class yeild expected behavior")
{
  Example::A a;
  REQUIRE(a.SomeFunc() == 5);
}
