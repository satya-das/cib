#pragma once
#include "Base.h"


struct Base2 { char x[100]; };
struct Base3 { char x[100]; };

struct Derived : private Base2, Base, private Base3 {
  Derived() {}
  virtual ~Derived() {};

  int G() override { return 3; }
  virtual int H()  { return 4; }
};
