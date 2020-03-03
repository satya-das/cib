#pragma  once
#include "value.h"

#include "__zz_cib_internal/A-predef.h"

class A
{
public:
  A(A&& rhs);
public:
  A();
  A(const A& );
  virtual ~A();
  virtual int setValue(const Value<int>& intVal) const;
  virtual float setValue(const Value<float>& floatVal) const;
  virtual Value<int> getIntValue() const;
  virtual Value<float> getFloatValue() const;

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(A, A);
};

#include "__zz_cib_internal/A-postdef.h"
