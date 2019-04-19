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
  __ZZ_CIB_CLASS_INTERNAL_DEF(I, I);
};
class C
{
public:
  C(C&& rhs);
public:
  C();
  C(C const & );
  ~C();
  virtual int UseInterface(I* pI);

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(C, C);
};

#include "__zz_cib_internal/A-impl.h"
