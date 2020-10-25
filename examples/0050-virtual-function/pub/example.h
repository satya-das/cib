#pragma once

//! Example to see what cib does for classes with virtual methods.
class A
{
public:
  A();
  //! This is to know what cib does with virtual functions.
  virtual int VirtFunc() { return 1; }
  virtual ~A() {}
};

class B : public A
{
public:
  B();
  int VirtFunc() override { return 15; }

  static B* Create() { return new B; }
};
