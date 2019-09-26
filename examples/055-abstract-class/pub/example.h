#pragma once

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
  I* f() const {
    class M : public I {
      int f() const override {
        return 909;
      }
    };

    return new M();
  }

  I* g() {
    return nullptr;
  }
};
