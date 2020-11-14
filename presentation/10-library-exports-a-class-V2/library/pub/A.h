#pragma once



class A {
public:
  A() = default;
  A(const A&) = default;
  virtual ~A() = default;

  int         F()    { return m1; }
  int         F(int) { return m2; }
  virtual int U()    { return 10; }
  virtual int V()    { return m3; }

private:
  int   m1{1};
  int   m2{2};
  int   m3{3};
};
