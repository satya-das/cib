#include "concrete-class.h"

#include <iostream>

#include <catch/catch.hpp>

TEST_CASE("Can use DerivedClass")
{
  DerivedClass x;

  CHECK(x.Func() == 5);
  CHECK(x.F() == 10);
}
