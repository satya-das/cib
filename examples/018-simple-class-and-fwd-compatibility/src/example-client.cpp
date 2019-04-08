#include "example.h"

#include <catch/catch.hpp>

#include <exception>

TEST_CASE("Method call")
{
  Example::A a;
  if(a.SomeFunc() == 2)
  {
    CHECK(a.AnotherFunction() == 109);
  }
  else
  {
    CHECK_THROWS_AS(a.AnotherFunction(), std::bad_function_call);
  }
}
