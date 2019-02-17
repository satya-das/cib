#pragma once

class A
{
public:
  A();
  // int F1(int(*fptr)()) const {
  //   return fptr();
  // }

  using FPTR_ii = int(*)(int);
  int F2(FPTR_ii fptr) const {
    return fptr(5);
  }
};
