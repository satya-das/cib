#include "file-defining-class.h"

#include <catch/catch.hpp>

TEST_CASE("No compilation error should happen")
{
  ExampleClass ex;

  CHECK(ex.get().front() != nullptr);
}
