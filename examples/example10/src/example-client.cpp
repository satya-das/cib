#include "example.h"

#include <catch/catch.hpp>

TEST_CASE("Reference to pointer")
{
  A* pA = nullptr;
  GetNewA(pA);
  REQUIRE(typeid(pA) == typeid(A));
  delete pA;

  pA = nullptr;
  GetNewB(pA);
  REQUIRE(typeid(pA) == typeid(B));
  delete pA;
}
