#include "example.h"

#include <catch/catch.hpp>

TEST_CASE("Method call")
{
  Example::A a;
  CHECK(a.Func() == 1);
  CHECK(a.Func(0.0) == 2);
}
