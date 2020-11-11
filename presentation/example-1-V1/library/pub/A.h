#pragma once



class A {
public:
  A();
  A(const A&);
  virtual ~A();

  int         F();
  int         F(int);
  virtual int V();

private:
  int   m1;
  int   m2;
};
