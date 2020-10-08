#include "example.h"

#include <catch/catch.hpp>

#include <type_traits>

TEST_CASE("Proxy should get deleted when original lib object is deleted")
{
  {
    A a;
    const auto& i = a.f();
    CHECK(i.f() == 909);
  }
}
