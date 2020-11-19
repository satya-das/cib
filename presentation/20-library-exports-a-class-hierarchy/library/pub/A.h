#pragma once



struct A {
  A() {}
  virtual ~A() {}

  virtual int F() { return 1; }
  virtual int G() { return 2; }
};
