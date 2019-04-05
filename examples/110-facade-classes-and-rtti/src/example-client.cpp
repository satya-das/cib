#include "example.h"

#include <catch/catch.hpp>

TEST_CASE("RTTI of proxy class")
{
  A a;
  auto* p1 = a.PublicFacade();
  auto* p2 = a.PrivateFacade1();
  auto* p3 = a.PrivateFacade2();

  CHECK(p1 != nullptr);
  CHECK(p2 != nullptr);
  CHECK(p3 != nullptr);

  CHECK(dynamic_cast<PublicFacadeImpl*>(p1) != nullptr);
  CHECK(dynamic_cast<PublicFacadeImpl*>(p2) == nullptr);
  CHECK(dynamic_cast<PublicFacadeImpl*>(p3) != nullptr);
}
