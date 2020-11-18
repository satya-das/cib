#pragma once

#include "value.h"

class EXAMPLE_API A {
public:
  A();
  A(const A&);
  virtual ~A();

  virtual int setValue(const Value<int>& intVal) const {
    return 2 * intVal.get();
  }
  
  virtual float setValue(const Value<float>& floatVal) const {
    return 2 * floatVal.get();
  }
  
  virtual Value<int> getIntValue() const {
    return Value<int>(5);
  }
  
  virtual Value<float> getFloatValue() const {
    return Value<float>(10.0);
  }
};

