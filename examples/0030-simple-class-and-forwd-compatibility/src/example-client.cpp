#include "example.h"

#include <catch/catch.hpp>

#include <exception>

TEST_CASE("Method call")
{
  A a;
  if(a.SomeFunc() == 2)
  {
    // When run with new library
    CHECK(a.AnotherFunction() == 109);
  }
  else
  {
    // When run with old library
    CHECK_THROWS_AS(a.AnotherFunction(), std::bad_function_call);
  }
}
