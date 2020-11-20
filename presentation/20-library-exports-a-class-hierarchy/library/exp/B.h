#pragma once
#include "A.h"

struct ImplB;

struct B : A {
  B();
  virtual ~B();

  int G() override;
  virtual int H();

private:
  B(ImplB* pImplB);
  ImplB* pImpl;
};
