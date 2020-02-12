#pragma  once
#include <vector>

#include "__zz_cib_internal/example-predef.h"

class C
{
public:
  C(C&& rhs);
public:
  C(C const & );
  C(int x);
  virtual ~C();
  virtual int f() const;

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(C, __zz_cib_Class258);
};

class A
{
public:
  A(A&& rhs);
public:
  A(A const & );
  ~A();
  A();
  // std::vector<int> f() const {
  //   return {2, 3, 9};
  // }
  std::vector<C> g() const;

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(A, __zz_cib_Class259);
};

#include "__zz_cib_internal/example-postdef.h"
