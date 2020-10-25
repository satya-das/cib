#pragma once

namespace Example
{
template <typename T>
class Value
{
public:
  Value(T x = T())
    : x_(x)
  {
  }
  T GetValue() const
  {
    return x_;
  }
  void SetValue(T x)
  {
    x_ = x;
  }

  bool operator == (const Value& rhs) const
  {
    return x_ == rhs.x_;
  }

private:
  T x_;
};
}
