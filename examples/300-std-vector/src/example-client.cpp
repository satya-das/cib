#include "example.h"

#include <catch/catch.hpp>

#include <chrono>
#include <iostream>

/* Disabling till we support vector of built-in types
TEST_CASE("returning std::vector of int by value")
{
  A a;
  const std::vector<int> expected = {2, 3, 9};
  auto v = a.f();
  CHECK(v == expected);
}
*/

TEST_CASE("returning std::vector of non-value objects by value")
{
  A a;
  auto v = a.g();
  CHECK(v.size() == 2);
  CHECK(v[0].f() == 11);
  CHECK(v[1].f() == 101);
}

TEST_CASE("returning vector::iterator object")
{
  A a;
  auto i = a.i();
  CHECK((i->f() + (i+1)->f()) == 12);
  auto r = a.r();
  CHECK(r->f() == 9);
  CHECK((r+1)->f() == 3);
}

int sumInLargeVector(const std::vector<C>& largeVector) {
  int s = 0;
  for (const auto& c : largeVector) {
      s += c.f();
  }
  return s;
}


TEST_CASE("large object")
{
  A a;
  auto largeVector = a.getLargeVector();
  auto t1 = std::chrono::steady_clock::now();
  const auto sum1 = sumInLargeVector(largeVector);
  auto t2 = std::chrono::steady_clock::now();
  const auto sum2 = a.sumInLargeVector();
  auto t3 = std::chrono::steady_clock::now();
  CHECK(sum1 == sum2);

  std::chrono::duration<double> delta1 = t2 - t1;
  std::chrono::duration<double> delta2 = t3 - t2;

  std::cerr << "XXXXXXXXXXX Delta time 1 = " << delta1.count() << std::endl;
  std::cerr << "XXXXXXXXXXX Delta time 2 = " << delta2.count() << std::endl;
}
