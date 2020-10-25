#include "example.h"

#include <catch/catch.hpp>

class Implement : public Interface
{
public:
  int Func() override { return 167; }
};

TEST_CASE("Interface callback: library should be able to call client implemented function")
{
  A a;
  Implement i;
  CHECK(a.UseInterface(&i) == 167);
}

