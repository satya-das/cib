#include "example.h"

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

int main()
{
  OverriddenIF ifObj;
}