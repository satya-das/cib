#include "example.h"

#include <catch/catch.hpp>

#include <iostream>
#include <typeindex>
#include <typeinfo>

TEST_CASE("Reference to pointer")
{
  A* pA = nullptr;
  GetNewA(pA);
  std::cerr << typeid(*pA).name();
  CHECK(std::type_index(typeid(*pA)) == std::type_index(typeid(A)));
  delete pA;

  pA = nullptr;
  GetNewB(pA);
  CHECK(std::type_index(typeid(*pA)) == std::type_index(typeid(B)));
  delete pA;

  const A* pCA = nullptr;
  GetNewA(pCA);
  std::cerr << typeid(*pCA).name();
  CHECK(std::type_index(typeid(*pCA)) == std::type_index(typeid(A)));
  delete pCA;

  pCA = nullptr;
  GetNewB(pCA);
  CHECK(std::type_index(typeid(*pCA)) == std::type_index(typeid(B)));
  delete pCA;
}
