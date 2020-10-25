#include "example.h"

#include <catch/catch.hpp>

#if COND
TEST_CASE("1. Conditional APIs should be available when condition is satisfied")
{
  A a;
  CHECK(a.f1() == 1);
}
TEST_CASE("2. Conditional APIs should be available when condition is satisfied")
{
  A a;
  CHECK(a.f2() == 2);
}
#elif COND2
TEST_CASE("3. Conditional APIs should be available when condition is satisfied")
{
  A a;
  CHECK(a.f3() == 3);
}
#else
TEST_CASE("4. Conditional APIs should be available when condition is satisfied")
{
  A a;
  CHECK(a.f4() == 4);
}
TEST_CASE("5. Conditional APIs should be available when condition is satisfied")
{
  A a;
  CHECK(a.f5() == 5);
}
TEST_CASE("6. Conditional APIs should be available when condition is satisfied")
{
  A a;
  CHECK(a.f6() == 6);
}
#endif
TEST_CASE("7. Conditional APIs should be available when condition is satisfied")
{
  A a;
  CHECK(a.f7() == 7);
}
TEST_CASE("8. Conditional APIs should be available when condition is satisfied")
{
  A a;
  CHECK(a.func() == 500);
}
