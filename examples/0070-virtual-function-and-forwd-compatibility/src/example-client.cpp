#include "example.h"

#include <catch/catch.hpp>

void PerformTest(A* pA)
{
  CHECK(pA->VirtFunc() == 15);          // Compiler generated instruction will effectively call `pA->B::VirtFunc()`
  if (pA->A::VirtFunc() == 2)
  {
    // New function should be available to newer clients.
    CHECK(pA->AnotherVirtFunc() == 100);
  }
  else
  {
    // When new function is called with old library exception should be thrown.
    CHECK_THROWS_AS(pA->AnotherVirtFunc(), std::bad_function_call);
  }
}

TEST_CASE("ABI stable virtual function call across component boundary")
{
  // Test for object created by client on heap
  auto* pB1 = new B();
  PerformTest(pB1);
  delete pB1;
  // Test for object created by library
  auto* pB2 = B::Create();
  PerformTest(pB2);
  delete pB2;
  // Test for object created on stack
  B b;
  PerformTest(&b);
}
