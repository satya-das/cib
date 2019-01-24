#pragma  once

#include "__zz_cib_internal/example-predef.h"

//! Contains example definitions to explain cib's functioning
namespace Example
{
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
    Int(Int&& rhs);
  public:
    Int(Int const & );
    ~Int();
    Int(int x = 0);
    operator int () const;

  private:
    __ZZ_CIB_CLASS_INTERNAL_DEF(Int, Example::Int);
  };
  class A
  {
  public:
    A(A&& rhs);
  public:
    A();
    A(A const & );
    ~A();
    void Set(Value<int> const & x);
    Value<int> Get() const;
    void SetInt(Value<Int> const & y);
    Value<Int> GetInt() const;

  private:
    __ZZ_CIB_CLASS_INTERNAL_DEF(A, Example::A);
  };
}

#include "__zz_cib_internal/example-impl.h"
