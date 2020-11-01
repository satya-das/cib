#pragma  once
#include "example.h"

#include "__zz_cib_internal/B-predef.h"

class B
{
public:
  B(B&& rhs);
public:
  B();
  B(const B&);
  ~B();
  void SetA(A* pA);
  A* GetA() const;

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(B, B);
};

#include "__zz_cib_internal/B-postdef.h"
