#pragma once

class A
{
public:
  virtual int VirtualFunction() const;

  virtual ~A() {};
};

class B : public A
{
public:
  B() : mpA(new A) {}
  virtual ~B() {
    delete mpA;
  };

  virtual int VirtualFunction() const;

  // A*& getA()
  // {
  //   return mpA;
  // }

private:
  A* mpA;
};

int GetNewA(A*& pA);
int GetNewB(A*& pA);

int GetNewA(const A*& pA);
int GetNewB(const A*& pA);
