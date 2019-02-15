#include "example.h"

#include <catch/catch.hpp>

TEST_CASE("Same proxy class instaces should be used for same object.")
{
  A a;
  B b;
  b.SetA(&a);
  CHECK(b.GetA() == &a);
}
