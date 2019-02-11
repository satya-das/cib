#pragma once

class A
{
public:
  virtual int AnotherVirtFunc() { return 100; } // New virtual added before existing one.
  virtual int VirtFunc() { return 5; }
  int SomeFunc() { return 10; }

  virtual ~A() {}
};

class B : public A
{
public:
  int VirtFunc() override  { return 15; }
};

