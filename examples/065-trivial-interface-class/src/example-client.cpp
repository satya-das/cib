#include "example.h"

#include <catch/catch.hpp>

class Implement : public Interface
{
private:
  int DoFunc() const override { return 505; }
};

TEST_CASE("Trivial interface class: default library implementation should be used")
{
  Interface i;
  CHECK(i.Func() == 500);
}

TEST_CASE("Interface callback: library should be able to call client implemented function")
{
  Implement i;
  CHECK(i.Func() == 505);
}
