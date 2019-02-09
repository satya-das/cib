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
  virtual int VirtualFunction() const;

  virtual ~B() {};
};

int GetNewA(A*& pA);
int GetNewB(A*& pA);

int GetNewA(const A*& pA);
int GetNewB(const A*& pA);
