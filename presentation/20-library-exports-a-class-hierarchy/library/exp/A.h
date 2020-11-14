#pragma once

struct ImplA;

struct A {
  A();
  virtual ~A();

  virtual int F();

protected:
  A(ImplA* pImplA);
  ImplA* pImpl;
};
