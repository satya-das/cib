#pragma once

//! Contains example definitions to explain cib's functioning
namespace Example {

template <typename _T>
class Value
{
public:
  Value(_T x = _T())
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

private:
  _T x_;
};

class Int
{
public:
  Int(int x = 0)
    : v_(x)
  {
  }
  operator int() const
  {
    return v_;
  }

private:
  int v_;
};

class A
{
public:
  void       Set(const Value<int>& x);
  Value<int> Get() const
  {
    return x_;
  }
  void       SetInt(const Value<Int>& y);
  Value<Int> GetInt() const
  {
    return y_;
  }

private:
  Value<int> x_;
  Value<Int> y_;
};

} // namespace Example
