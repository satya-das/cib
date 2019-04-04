#pragma once

class Interface2;
class Interface3;

class Interface1
{
public:
  virtual Interface2* p() = 0;
  virtual Interface3& r() = 0;
  virtual ~Interface1() {}
};

class Interface2
{
public:
  virtual int f() = 0;
  virtual ~Interface2() {}
};

class Interface3
{
public:
  virtual int g() = 0;
  virtual ~Interface3() {}
};

class A
{
public:
  A();
  int SetInterface(Interface1* pInterface1) const
  {
    return pInterface1->p()->f() + pInterface1->r().g();
  }
};
