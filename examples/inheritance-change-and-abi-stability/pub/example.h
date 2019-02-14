#pragma once

class A
{
public:
  A();
  virtual int AnotherVirtFunc() { return 100; } // New virtual added before existing one.
  virtual int VirtFunc() { return 5; }
  int SomeFunc() { return 10; }

  virtual ~A() {}

private:
  int x {100};
};

class I1
{
public:
  virtual int F() { return 1; }
  virtual ~I1() {}

private:
  int y {100};
};

class I2
{
public:
  virtual int G() { return 2; }
  virtual ~I2() {}

private:
  int z {100};
};

class B : public I1, public A, public I2
{
public:
  B();
  int VirtFunc() override  { return 15; }
};
