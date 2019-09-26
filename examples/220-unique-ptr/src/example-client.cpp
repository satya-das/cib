#include "example.h"

#include <catch/catch.hpp>

#include <type_traits>

TEST_CASE("Enum parameters should be supported")
{
  A a;
  auto p = a.f();
  CHECK(p->f() == 909);
}
