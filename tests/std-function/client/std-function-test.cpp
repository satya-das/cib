#include "std-function.h"

#include <iostream>

#include <catch/catch.hpp>

TEST_CASE("Pass callback by value")
{
  T t;

  const auto callback = [](B b, C c) {
    return A(b.f() + c.f());
  };

  CHECK(t.passStdFunctionByValue(callback) == (199 + 299));
}
