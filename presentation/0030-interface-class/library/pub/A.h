#pragma once

struct I {
  virtual ~I() {}

  virtual int F() = 0;
};

struct A {
  int UseI(I* pI) {
    return pI->F();
  }
};
