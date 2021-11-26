#pragma once

template <typename T>
class ClassWithParameterizedBase : public T
{
public:
  int Func()
  {
    return 5;
  }
};
