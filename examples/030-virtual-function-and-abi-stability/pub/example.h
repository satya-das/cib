#pragma once

//! Example to see what cib does for classes with virtual methods.
class A
{
public:
  A();
  virtual int AnotherVirtFunc() { return 100; } // New virtual added before existing one.
  //! This is to know what cib does with virtual functions.
  virtual int VirtFunc() { return 5; }
  virtual ~A() {}
};

class B : public A
{
public:
  B();
  int VirtFunc() override { return 15; }

  static B* Create() { return new B; }
};
