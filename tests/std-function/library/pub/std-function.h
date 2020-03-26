#pragma once

#include <functional>

class A
{
  int m;
public:
  A(int x);
  ~A();
  int f() const {
    return m;
  }
};

class B
{
  int m;
public:
  B(int x);
  int f() const {
    return m;
  }  
};

class C
{
  int m;
public:
  C(int x);
  int f() const {
    return m;
  }
};

using TestCallback = std::function<A(B, C)>;

class T
{
public:
  T();

  int passStdFunctionByValue(TestCallback callback) const {
    B b(199);
    C c(299);
    return callback(b, c).f();
  }

  int passStdFunctionByValue2(TestCallback&& callback) const {
    B b(199);
    C c(299);
    return callback(b, c).f();
  }
};
