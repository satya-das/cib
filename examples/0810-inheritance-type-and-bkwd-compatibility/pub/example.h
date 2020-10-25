#pragma once

class A
{
public:
  A();
  virtual int AnotherVirtFunc() { return 100; } // New virtual added before existing one.
  virtual int VirtFunc() { return 1; }
  int SomeFunc() { return 10; }

  virtual ~A() {}

private:
  int x {100};
};

class B : public virtual A
{
public:
  B();
  int VirtFunc() override  { return 15; }

  static B* Create() { return new B; }
};
