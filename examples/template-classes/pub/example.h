#pragma once

#include "int.h"
#include "value.h"

//! Contains example definitions to explain cib's functioning
namespace Example {

class A
{
public:
  void       Set(const Value<int>& x);
  Value<int> Get() const
  {
    return x_;
  }
  void       SetInt(const Value<Int>& y);
  Value<Int> GetInt() const
  {
    return y_;
  }

private:
  Value<int> x_;
  Value<Int> y_;
};

}
