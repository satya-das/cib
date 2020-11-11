#pragma once

class ImplA;

class A {
public:
  A();
  A(const A&);
  virtual ~A();

  int         F();
  int         F(int);
  virtual int U();
  virtual int V();

  ImplA* pImpl;
};
