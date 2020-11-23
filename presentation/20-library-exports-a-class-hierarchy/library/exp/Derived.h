#pragma once
#include "Base.h"

struct DerivedImpl;

struct Derived : Base {
  Derived();
  virtual ~Derived();

  int G() override;
  virtual int H();

private:
  Derived(DerivedImpl* pDerivedImpl);
  DerivedImpl* pImpl;
};
