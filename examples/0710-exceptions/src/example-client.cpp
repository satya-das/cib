#include "example.h"

#include <cstring>

#include <catch/catch.hpp>

TEST_CASE("Exception Test")
{
  A a;
  CHECK(a.ThrowException(ExceptionType::None) == 111);

  // {
  //   try {
  //     a.ThrowException(ExceptionType::StdRuntimeError);
  //     FAIL_CHECK("Must not be here");
  //   } catch (std::runtime_error ex) {
  //     CHECK(std::strcmp(ex.what(), "runtime error occurred") == 0);
  //   }
  // }

  // {
  //   try {
  //     a.ThrowException(ExceptionType::Int);
  //     FAIL_CHECK("Must not be here");
  //   } catch (int ex) {
  //     CHECK(ex == 999);
  //   }
  // }

  {
    try {
      a.ThrowException(ExceptionType::CustomBaseException);
      FAIL_CHECK("Must not be here");
    } catch (CustomBaseException ex) {
      CHECK(std::strcmp(ex.GetDesc(), "custom base exception occurred") == 0);
      CHECK(ex.GetError() == 193);
    }
  }

  {
    try {
      a.ThrowException(ExceptionType::CustomDerivedException);
      FAIL_CHECK("Must not be here");
    } catch (CustomDerivedException ex) {
      CHECK(std::strcmp(ex.GetDesc(), "custom derived exception occurred") == 0);
      CHECK(std::strcmp(ex.GetSource(), "Example library") == 0);
      CHECK(ex.GetError() == 193);
    }
  }
}
