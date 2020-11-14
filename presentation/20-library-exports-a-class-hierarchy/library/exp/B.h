#pragma once
#include "A.h"

struct ImplB;

struct B : A {
  B();
  virtual ~B();

  virtual int G();

private:
  B(ImplB* pImplB);
  ImplB* pImpl;
};
