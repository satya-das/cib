#pragma once

class C
{
public:
  C(int x = 0);
  virtual ~C() = default;

public:
  virtual int f() const {
    return m;
  }

private:
  char disturbSize[11];
  int m;
};
