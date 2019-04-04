#include "example.h"

#include <catch/catch.hpp>

class Implement2 : public Interface2
{
public:
  int f() override
  {
    return 5;
  }
};

class Implement3 : public Interface3
{
public:
  int g() override
  {
    return 50;
  }
};

class Implement1 : public Interface1
{
public:
  Interface2* p()
  {
    return &x;
  }
  Interface3& r()
  {
    return y;
  }

private:
  Implement2 x;
  Implement3 y;
};

TEST_CASE("Interface detection")
{
  A a;
  Implement1 i;
  CHECK(a.SetInterface(&i) == 55);
}

TEST_CASE("New virtual functions should be available to new clients")
{
  Implement1 i;
  CHECK(i.disruptVTable() == 1);
  CHECK(i.p()->disruptVTable() == 2);
  CHECK(i.r().disruptVTable() == 3);
}
