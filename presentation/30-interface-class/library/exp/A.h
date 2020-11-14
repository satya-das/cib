#pragma once

struct ImplGenericI;

struct I {
  virtual ~I();

  virtual int F() = 0;

  ImplGenericI* const pImpl;

protected:
  I();

private:
  I(ImplGenericI* pImplI)
    : pImpl(pImplI)
  {}
};

struct ImplA;

struct A {
  A();
  virtual ~A();

  virtual int UseI(I* pI);

protected:
  A(ImplA* pImplA)
    : pImpl(pImplA)
  {}
  ImplA* pImpl;
};
