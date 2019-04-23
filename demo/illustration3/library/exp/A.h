#pragma  once
#include "value.h"

#include "__zz_cib_internal/A-predef.h"

class A
{
public:
  A(A&& rhs);
public:
  A();
  A(A const & );
  ~A();
  virtual int setValue(Value<int> const & intVal) const;
  virtual float setValue(Value<float> const & floatVal) const;
  virtual Value<int> getIntValue() const;
  virtual Value<float> getFloatValue() const;

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(A, A);
};

#include "__zz_cib_internal/A-impl.h"
