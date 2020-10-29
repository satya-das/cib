#pragma  once
#include "file-using-forward-decl.h"
#include <assert.h>

#include "__zz_cib_internal/file-defining-class-predef.h"

class ExampleClass
{
public:
  ExampleClass(ExampleClass&& rhs);
public:
  ExampleClass(const ExampleClass&);
  ExampleClass();
  ~ExampleClass();
  VectorOfExampleClassPtr get();
  int value() const;

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(ExampleClass, ExampleClass);
};

#include "__zz_cib_internal/file-defining-class-postdef.h"
