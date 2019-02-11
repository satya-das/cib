#include "example-file1.h"
#include "example-file2.h"

#include <catch/catch.hpp>

TEST_CASE("Global functions")
{
  REQUIRE(GlobalFunction1() == 10);
  REQUIRE(GlobalFunction2() == 20);
  REQUIRE(Example::Function1() == 100);
  REQUIRE(Example::Function2() == 200);
}
