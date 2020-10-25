#include "example.h"

#include <catch/catch.hpp>

#include <type_traits>

TEST_CASE("Proxy should get deleted when original lib object is deleted")
{
  {
    A a;
    const auto& i = a.GetFacadeByRef();
    CHECK(i.f() == 909);
  }
  {
    A a;
    const auto* i = a.GetFacadeByPtr();
    CHECK(i->f() == 909);
  }
  {
    A a;
    auto* i = a.GetNewFacade();
    CHECK(i->f() == 909);
    delete i;
  }
  {
    A a;
    auto& i = a.GetBase();
    CHECK(i.f() == 101);
  }
  {
    A a;
    auto& i = a.GetDerived();
    CHECK(i.f() == 201);
  }
}
