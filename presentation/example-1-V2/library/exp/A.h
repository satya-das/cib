#pragma once

class ImplA;

class A {
public:
  A();
  A(const A&);
  ~A();
  int F();
  int F(int);
  virtual int V();

  ImplA* pImpl;
};
