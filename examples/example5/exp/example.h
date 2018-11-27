#pragma  once

#include "__zz_cib_internal/example-predef.h"

//! Contains example definitions to explain cib's functioning
namespace Example
{
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
    void Add(Number<_T> const& num)
    {
      x_ += num.x_;
    }
  private:
    _T x_;
  };
  class A
  {
  public:
    A(A&& rhs);
  public:
    A(const A& );
    ~A();
    A();
    void Set(const Number<int>& x);
    Number<int> Get() const;

  private:
    __ZZ_CIB_CLASS_INTERNAL_DEF(A, Example::A);
  };
}

#include "__zz_cib_internal/example-impl.h"
