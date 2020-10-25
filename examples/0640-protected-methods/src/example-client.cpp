#include "example.h"

#include <catch/catch.hpp>

TEST_CASE("Protected Method access in client's class")
{
  class B : public Example::A {
  public:
    int g() const {
      return f();
    }
  };

  B b;
  CHECK(b.g() == 101);
}
