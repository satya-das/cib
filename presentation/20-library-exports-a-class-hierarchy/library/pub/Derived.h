#pragma once
#include "Base.h"



struct Derived : Base {
  Derived() {}
  virtual ~Derived() {};

  int G() override { return 3; }
  virtual int H()  { return 4; }
};
