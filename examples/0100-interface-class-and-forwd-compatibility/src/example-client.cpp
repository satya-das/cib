#include "example.h"

#include <catch/catch.hpp>

class Implement : public Interface
{
public:
  int Gunc() override {
    mGuncCalled = true;
      return 193;
    }
  int Func() override { return 167; }

  bool mGuncCalled {false};
};

TEST_CASE("Interface callback: library should be able to call client implemented function")
{
  A a;
  Implement i;
  auto ret = a.UseInterface(&i);
  if (i.mGuncCalled) // With new library
    CHECK(ret == 167 + 193);
  else // With old library
    CHECK(ret == 167);
}
