#pragma  once
#include "int.h"
#include "value.h"

#include "__zz_cib_internal/example-predef.h"

//! Contains example definitions to explain cib's functioning
namespace Example
{
  using FloatValue = Value<float>;
  class A
  {
  public:
    A(A&& rhs);
  public:
    A();
    A(const A&);
    ~A();
    void Set(const Value<int>& x);
    Value<int> Get() const;
    void SetInt(const Value<Int>& y);
    Value<Int> GetInt() const;
    void SetFloat(FloatValue f);
    FloatValue GetFloat() const;

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(A, Example::A);
  };
}

#include "__zz_cib_internal/example-postdef.h"
