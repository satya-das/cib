#pragma once
#include "A.h"

struct ImplB;

struct B : A {
  B();
  virtual ~B();

  virtual int G();
  virtual int H();

private:
  B(ImplB* pImplB);
  ImplB* pImpl;
};
