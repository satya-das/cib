#pragma  once

#include "__zz_cib_internal/C-predef.h"

class C
{
public:
  C(C&& rhs);
public:
  C(const C& );
  C(int x);
  virtual ~C();
  virtual int f() const;

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(C, C);
};

#include "__zz_cib_internal/C-postdef.h"
