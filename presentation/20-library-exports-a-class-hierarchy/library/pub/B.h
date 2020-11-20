#pragma once
#include "A.h"



struct B : A {
  B() {}
  virtual ~B() {};

  int G() override { return 3; }
  virtual int H()  { return 4; }
};
