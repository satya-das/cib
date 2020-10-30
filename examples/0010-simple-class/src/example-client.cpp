#include "example.h"

#include <catch/catch.hpp>

TEST_CASE("Method call")
{
  A a;
  CHECK(a.SomeFunc() == 1);
}
