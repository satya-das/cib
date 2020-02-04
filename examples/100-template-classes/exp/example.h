#pragma  once
#include "int.h"
#include "value.h"

#include "__zz_cib_internal/example-predef.h"

//! Contains example definitions to explain cib's functioning
namespace Example
{
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
    using FloatValue = Value<float>;
    void SetFloat(FloatValue const  f);
    FloatValue GetFloat() const;

  private:
    __ZZ_CIB_CLASS_INTERNAL_DEF(A, Example::A);
  };
}

#include "__zz_cib_internal/example-postdef.h"
