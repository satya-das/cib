#pragma once

class A
{
public:
  virtual int VirtualFunction() const;
};

class B : public A
{
public:
  virtual int VirtualFunction() const;
};

int GetNewA(A*& pA);
int GetNewB(A*& pA);
