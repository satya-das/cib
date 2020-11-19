#pragma once

struct ImplA;

struct A {
  A();
  virtual ~A();

  virtual int F();
  virtual int G();

protected:
  A(ImplA* pImplA);
  ImplA* pImpl;
};
