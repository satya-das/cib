#pragma once

#include "file-using-forward-decl.h"
#include <assert.h>

class ExampleClass
{
public:
  ExampleClass()
  {
    data.push_back(this);
  }
  ~ExampleClass();

  VectorOfExampleClassPtr get()
  {
    return data;
  }

  int value() const {
    return 909;
  }

private:
  VectorOfExampleClassPtr data;
};
