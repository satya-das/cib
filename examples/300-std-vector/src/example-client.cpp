#include "example.h"

#include <catch/catch.hpp>

/* Disabling till we support vector of built-in types
TEST_CASE("returning std::vector of int by value")
{
  A a;
  const std::vector<int> expected = {2, 3, 9};
  auto v = a.f();
  CHECK(v == expected);
}
*/

TEST_CASE("returning std::vector of non-value objects by value")
{
  A a;
  auto v = a.g();
  CHECK(v.size() == 2);
  CHECK(v[0].f() == 11);
  CHECK(v[1].f() == 101);
}
