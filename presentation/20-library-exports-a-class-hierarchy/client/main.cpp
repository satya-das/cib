#define CATCH_CONFIG_MAIN
#include <catch/catch.hpp>

#include "Derived.h"

TEST_CASE("Use class hierarchy")
{
  {
    Derived derived;
    Base* pBase = &derived;
    CHECK(pBase->F() == 1);
    CHECK(pBase->Base::G() == 2);
    CHECK(pBase->G() == 3);
    CHECK(derived.H() == 4);
  }

  // For slides
  {
    Derived derived;
    Base* pBase = &derived;
    pBase->F();
    pBase->Base::G();
    pBase->G();
    derived.H();
  }
}
