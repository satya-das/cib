#include "example.h"

#include <catch/catch.hpp>

class OverriddenIF : public IF
{
private:
  int PrivatePureVirtual() override { return 1000; }
  int PrivateVirtual() override     { return 2000; }

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
};

TEST_CASE("Virtual methods of all access type should be exported.")
{
  OverriddenIF ifObj;
  IF* pIF = &ifObj;

  CHECK(pIF->PublicNonVirtual() == 3000 + 4000 + 400 + 400 + 400 + 1000 + 2000 + 200);

// This is failing and so needs to be fixed.
//  CHECK(pIF->IF::PublicVirtual() == 500);
  CHECK(pIF->PublicVirtual() == 4000);

  A a;
  CHECK(a.SetIF(&ifObj) == pIF->PublicNonVirtual());
}
