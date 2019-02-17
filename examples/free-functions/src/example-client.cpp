#include "example-file1.h"
#include "example-file2.h"

#include <catch/catch.hpp>

TEST_CASE("Global functions")
{
  CHECK(GlobalFunction1() == 10);
  CHECK(GlobalFunction2() == 20);
  CHECK(Example::Function1() == 100);
  CHECK(Example::Function2() == 200);
}
