#pragma once

#include <memory>

class I
{
public:
  virtual ~I() {}
public:
  virtual int f() const = 0;
};

class A
{
public:
  A();
public:
  std::unique_ptr<I> f() const {
    class M : public I {
      int f() const override {
        return 909;
      }
    };

    return std::make_unique<M>();
  }

  I* g() {
    return nullptr;
  }
};
