#pragma once

#include <cassert>
#include <memory>

class I
{
public:
  I(std::unique_ptr<int> pi) {}
  I() {}
  virtual ~I() {}
public:
  virtual int f() const = 0;
  virtual std::unique_ptr<int> g() const = 0;
};

class A
{
  class M : public I {
    std::unique_ptr<int> pi_;

    int f() const override {
      return *pi_;
    }

    std::unique_ptr<int> g() const override {
      return nullptr;
    }

  public:
    M(std::unique_ptr<int> pi) : pi_(std::move(pi)) {
    }
  };

public:
  A();
public:
  std::unique_ptr<I> f() const {
    return std::make_unique<M>(std::make_unique<int>(5));
  }

  I* g() {
    return nullptr;
  }

  int h(std::unique_ptr<I> p) const {
    auto g = p->g();
    assert(*g == 5);
    return p->f();
  }

  int i(I* p) const {
    return p->f();
  }

  int j(std::unique_ptr<I>* pp) {
    *pp = std::make_unique<M>(std::make_unique<int>(909));

    return 25;
  }
};
