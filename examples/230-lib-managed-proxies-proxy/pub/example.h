#pragma once

#include "../cib/__zz_cib_Example-proxy-mgr.h"

#include <memory>

class Facade : public __zz_cib_::__zz_cib_ProxyManager
{
public:
  virtual ~Facade() {}
public:
  virtual int f() const = 0;
};

struct Base : __zz_cib_::__zz_cib_ProxyManager
{
  int f() const {
    return 101;
  }
};

struct Derived : Base
{
  int f() const {
    return 201;
  }
};

class A
{
public:
  A();

public:
  const Facade& GetFacadeByRef() const {
    return m;
  }

  const Facade* GetFacadeByPtr() const {
    return &m;
  }

  Facade* GetNewFacade() const {
    return new M;
  }

  void DeleteFacade(const Facade* p) const {
    delete p;
  }

  Base& GetBase() {
    return base;
  }

  Derived& GetDerived() {
    return derived;
  }

private:
  class M : public Facade {
    int f() const override {
      return 909;
    }
  };

  M m;
  Base base;
  Derived derived;
};
