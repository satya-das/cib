#pragma once

template <typename _ValueType>
class Value {
public:
  Value(_ValueType value)
    : mValue(value)
  {}
  
  _ValueType get() const { return mValue; }

private:
  _ValueType mValue;
};

