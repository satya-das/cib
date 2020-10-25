#include "example.h"

#include <catch/catch.hpp>

#include <type_traits>

TEST_CASE("Enum parameters should be supported")
{
  A a;
  CHECK(a.fE(E::kFirst) == E::kFirst);
}
