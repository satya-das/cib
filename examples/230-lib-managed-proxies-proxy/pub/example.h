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

class A
{
public:
  A();

private:
  class M : public Facade {
    int f() const override {
      return 909;
    }
  };
  M m;

public:
  const Facade& f() const {
    return m;
  }

  const Facade* g() const {
    return &m;
  }

  Facade* c() const {
    return new M;
  }

  void d(const Facade* p) const {
    delete p;
  }
};
