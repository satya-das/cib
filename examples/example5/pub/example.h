#pragma once

//! Contains example definitions to explain cib's functioning
namespace Example {

template <typename _T>
class Template
{
public:
  Template(_T x)
    : x_(x)
  {
  }
  _T GetX() const
  {
    return x_;
  }

private:
  _T x_;
};

class A
{
public:
  void                 Set(const Template<int>& x);
  const Template<int>& Get() const
  {
    return x_;
  }

private:
  Template<int> x_;
};

} // namespace Example
