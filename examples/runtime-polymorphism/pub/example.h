#pragma once

//! Example to see what cib does for classes with virtual methods.
class A
{
public:
  A();
  //! This is to know what cib does with virtual functions.
  virtual int VirtFunc() { return 5; }
  //! Doesn't do anything meaningful
  //! @note It is just for explaining how cib works.
  int SomeFunc() { return 10; }

  virtual ~A() {}
};

class B : public A
{
public:
  B();
  int VirtFunc() override { return 15; }
};

