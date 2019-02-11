#include "example.h"

#include <catch/catch.hpp>

class OverriddenIF : public IF
{
private:
  void PrivatePureVirtual() override {}
  void PrivateVirtual() override {}

protected:
  void ProtectedPureVirtual() override
  {
    ProtectedNonVirtual();
  }
  void ProtectedVirtual() override
  {
    ProtectedNonVirtual();
  }

public:
  void PublicPureVirtual() override {}
  void PublicVirtual() override {}
};

TEST_CASE("Virtual methods of all access type should be exported.")
{
  OverriddenIF ifObj;
}
