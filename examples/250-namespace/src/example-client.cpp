#include "example.h"

#include <catch/catch.hpp>

TEST_CASE("Operator calls should work seamlessly")
{
  Example::Outer::Inner::A a;
  CHECK(a.i() == 16);
  CHECK(a.f() == 2.0);
}
