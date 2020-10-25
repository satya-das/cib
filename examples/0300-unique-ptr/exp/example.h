#pragma  once
#include <cassert>
#include <memory>

#include "__zz_cib_internal/example-predef.h"

class I
{
public:
  I(I&& rhs);
public:
  I(std::unique_ptr<int> pi);
  I();
  virtual ~I();
  virtual int f() const = 0;
  virtual std::unique_ptr<int> g() const = 0;

private:
  __ZZ_CIB_FACADE_CLASS_INTERNALS(I, I);
};

class A
{
public:
  A(A&& rhs);
public:
  A(const A& );
  ~A();
  A();
  std::unique_ptr<I> f() const;
  I* g();
  int h(std::unique_ptr<I> p) const;
  int i(I* p) const;
  int j(std::unique_ptr<I>* pp);

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(A, A);
};

#include "__zz_cib_internal/example-postdef.h"
