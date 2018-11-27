#pragma once

//! Contains example definitions to explain cib's functioning
namespace Example {

template <typename _T>
class Number
{
public:
  Number(_T x)
    : x_(x)
  {
  }
  _T GetValue() const
  {
    return x_;
  }
  void SetValue(_T x)
  {
    x_ = x;
  }
  void Add(const Number<_T>& num)
  {
    x_ += num.x_;
  }

private:
  _T x_;
};

class A
{
public:
  A()
    : x_(5)
  {
  }
  void        Set(const Number<int>& x);
  Number<int> Get() const
  {
    return x_;
  }

private:
  Number<int> x_;
};

} // namespace Example
