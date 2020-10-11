#pragma once

#include "../cib/__zz_cib_Example-proxy-mgr.h"

#include <memory>

class I
{
public:
  virtual ~I() {}
public:
  virtual int f() const = 0;

private:
  __ZZ_CIB_MANAGE_PROXIES(I);
};

class A
{
public:
  A();

private:
  class M : public I {
    int f() const override {
      return 909;
    }
  };
  M m;

public:
  const I& f() const {
    return m;
  }

  const I* g() const {
    return &m;
  }

  I* c() const {
    return new M;
  }

  void d(const I* p) const {
    delete p;
  }
};
