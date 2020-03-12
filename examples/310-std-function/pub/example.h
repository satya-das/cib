#pragma once

#include <functional>

class C
{
public:
  C(int x);
  virtual ~C() = default;

public:
  virtual int value() const {
    return m;
  }

private:
  int m;
};

// useful link:
// https://stackoverflow.com/questions/9044866/how-to-get-the-number-of-arguments-of-stdfunction
class A
{
public:
  A();
  
public:
  int f(std::function<int()> callback) const {
    return 2 * callback();
  }

  int g(const std::function<int()>& callback) const {
    return 5 * callback();
  }

  int h(std::function<int(C)> callback) const {
    return callback(C(9));
  }
};
