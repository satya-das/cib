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

TEST_CASE("passing std::function")
{
  A a;
  CHECK(a.f([]() { return 18;}) == 36);
  CHECK(a.h([](C c) { return 10 * c.value();}) == 90);
}
