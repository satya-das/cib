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
  // std::vector<int*> i() const {
  //   std::vector<int*> ret;
  //   ret.emplace_back(new int(5));
  //   ret.emplace_back(new int(15));
  //   return ret;
  // }
   // std::vector<C*> c() const {
  //   std::vector<C*> ret;
  //   ret.emplace_back(new C(50));
  //   ret.emplace_back(new C(150));
  //   return ret;
  // }

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(A, A);
};

#include "__zz_cib_internal/example-postdef.h"
