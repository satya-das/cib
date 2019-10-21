#pragma once

#include "SkRefCnt.h"

#include <cassert>
#include <memory>

class I : public SkRefCntBase
{
public:
  virtual ~I() {}
public:
  virtual int f() const = 0;
  /* For time being
  virtual sk_sp<I> g() const = 0;
  */
};

class A
{
public:
  A();
public:
  sk_sp<I> f() const {
    class M : public I {
      int f() const override {
        return 909;
      }

      // sk_sp<I> g() const override {
      //   return sk_sp<I>(new M);
      // }
    };
    return sk_sp<I>(new M);
  }

  I* g() {
    return nullptr;
  }

  int h(sk_sp<I> p) const {
    // auto g = p->g();
    // return g->f();
    return 3820;
  }

  int i(I* p) const {
    return p->f();
  }
};
