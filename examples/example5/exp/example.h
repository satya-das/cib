#pragma  once

#include "__zz_cib_internal/example-predef.h"

//! Contains example definitions to explain cib's functioning
namespace Example
{
  template <typename _T>
  class Template  
{
  public:
    Template(const Template&);
    ~Template();
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
    A(A&& rhs);
  public:
    A();
    A(const A& );
    ~A();
    void Set(const Template<int>& x);
    const Template<int>& Get() const;

  private:
    __ZZ_CIB_CLASS_INTERNAL_DEF(A, Example::A);
  };
}

#include "__zz_cib_internal/example-impl.h"
