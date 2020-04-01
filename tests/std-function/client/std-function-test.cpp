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
  CHECK(t.invokeSavedCallbackPassedByValue() == (199 + 299));
}

TEST_CASE("Pass callback by rvalue reference")
{
  T t;

  TestCallback callback = [](B b, C c) {
    return A(b.f() + c.f());
  };

  CHECK(t.passStdFunctionByRValueRef(std::move(callback)) == (199 + 299));
  CHECK(t.invokeSavedCallbackPassedByRValueRef() == (199 + 299));
}

TEST_CASE("Pass callback by reference")
{
  T t;

  TestCallback callback;
  t.passStdFunctionByRef(callback);

  B b(2);
  C c(100);
  CHECK(callback(b, c).f() == 200);
}

TEST_CASE("Return callback by value")
{
  T t;

  auto callback = t.getCallback();

  B b(2);
  C c(100);

  CHECK(callback(b, c).f() == -98);
}
