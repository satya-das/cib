#include "example.h"

#include <catch/catch.hpp>

class OverriddenOnlyPureVirtualIF : public IF
{
private:
  int PrivatePureVirtual() override { return 1000; }

protected:
  int ProtectedPureVirtual() override
  {
    return ProtectedNonVirtual();
  }

public:
  int PublicPureVirtual() override  { return 3000; }
};

/*
This test is crashing because of infinite recursion.
As of now only private pure virtual is supported.
If private virtual is not overridden by client then it causes infinite recursion.

TEST_CASE("Virtual methods of all access type of parent should be exported.")
{
  OverriddenOnlyPureVirtualIF ifObj;

  IF* pIF = &ifObj;

  CHECK(pIF->PublicNonVirtual() == 3000 + 500 + 400 + 400 + 1000 + 100 + 200);
}
*/

class OverriddenIF : public IF
{
private:
  int PrivatePureVirtual() override { return 1000; }

protected:
  int ProtectedPureVirtual() override
  {
    return ProtectedNonVirtual();
  }
  int ProtectedVirtual() override
  {
    return ProtectedNonVirtual();
  }

public:
  int PublicPureVirtual() override  { return 3000; }
  int PublicVirtual() override      { return 4000; }

  int DerivedAccessingProtectedVirtual() { return  IF::ProtectedVirtual(); }
};

TEST_CASE("Virtual methods of all access type should be exported.")
{
  OverriddenIF ifObj;

  CHECK(ifObj.DerivedAccessingProtectedVirtual() == 300);

  IF* pIF = &ifObj;

  CHECK(pIF->PublicNonVirtual() == 3000 + 4000 + 400 + 400 + 400 + 1000 + 100 + 200);

  CHECK(pIF->IF::PublicVirtual() == 500);
  CHECK(pIF->PublicVirtual() == 4000);

  A a;
  CHECK(a.SetIF(&ifObj) == pIF->PublicNonVirtual());
}
