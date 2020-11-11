#pragma once

class A {
public:
  A();
  A(const A&);
  virtual ~A();

  int         F();
  int         F(int);
  virtual int U();
  virtual int V();

private:
  float f;
  int   m1;
  int   m2;
};
