#pragma  once
#include <vector>

#include "__zz_cib_internal/example-predef.h"

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

class A
{
public:
  A(A&& rhs);
public:
  A(const A& );
  ~A();
  A();
  // std::vector<int> f() const {
  //   return {2, 3, 9};
  // }
  std::vector<C> g() const;

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(A, A);
};

#include "__zz_cib_internal/example-postdef.h"
