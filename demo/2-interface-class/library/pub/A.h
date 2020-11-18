#pragma once

class EXAMPLE_API I {
public:
  virtual ~I() {}

  virtual int F() = 0;
};

class EXAMPLE_API A {
public:
  A();
  A(const A&);
  ~A();

  int UseI(I* pI);
};
