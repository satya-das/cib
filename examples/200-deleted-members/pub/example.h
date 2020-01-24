#pragma once

class A
{
public:
  A();
  A(const A&) = delete;
  const A& operator=(const A&) = delete;
  int f() {
    return 9;
  }
};

class B : A
{
public:
  B();
  int g() {
    return 19;
  }
};
