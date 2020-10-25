#include "example.h"

#include <catch/catch.hpp>

TEST_CASE("Nested namespace tests")
{
  Example::Outer::Inner::A a;
  CHECK(a.i() == 16);
  CHECK(a.f() == 2.0);
}
