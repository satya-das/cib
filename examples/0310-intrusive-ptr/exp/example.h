#pragma  once
#include "SkRefCnt.h"
#include <cassert>
#include <memory>

#include "__zz_cib_internal/example-predef.h"

class I : public ::SkRefCntBase
{
public:
  I(I&& rhs);
public:
  virtual ~I();
  virtual int f() const = 0;
  /* For time being
  virtual sk_sp<I> g() const = 0;
  */
protected:
  I();

private:
  __ZZ_CIB_FACADE_CLASS_INTERNALS(I, I);
};

class A
{
public:
  A(A&& rhs);
public:
  A(const A&);
  ~A();
  A();
  sk_sp<I> f() const;
  I* g();
  int h(sk_sp<I> p) const;
  int i(I* p) const;

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(A, A);
};

#include "__zz_cib_internal/example-postdef.h"
