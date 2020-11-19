#pragma once
#include "A.h"



struct B : A {
  B() {}
  virtual ~B() {};

  virtual int G() { return 3; }
  virtual int H() { return 4; }
};
