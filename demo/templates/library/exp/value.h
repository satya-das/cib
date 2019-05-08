#pragma  once

#include "__zz_cib_internal/value-predef.h"

template <typename _ValueType>
class Value
{
public:
  Value(_ValueType value)
    : mValue(value)
  {
  }
  _ValueType get() const
  {
    return mValue;
  }
private:
  _ValueType mValue;
};

#include "__zz_cib_internal/value-impl.h"
