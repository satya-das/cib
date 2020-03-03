#pragma  once

#include "__zz_cib_internal/A-predef.h"

class I
{
public:
  I(I&& rhs);
public:
  virtual int F() = 0;
  virtual ~I();
protected:
  I();

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(I, I);
};

class C
{
public:
  C(C&& rhs);
public:
  C();
  C(const C& );
  ~C();
  int UseInterface(I* pI);

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(C, C);
};

#include "__zz_cib_internal/A-postdef.h"
