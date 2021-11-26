#pragma  once

#include "__zz_cib_internal/template-predef.h"

template <typename T>
class ClassWithParameterizedBase : public T
{
public:
  int Func()
  {
    return 5;
  }
};

#include "__zz_cib_internal/template-postdef.h"
