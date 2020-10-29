#pragma  once
#include "C.h"
#include <assert.h>
#include <list>
#include <vector>

#include "__zz_cib_internal/example-predef.h"

class A
{
public:
  A(A&& rhs);
public:
  A(const A&);
  A();
  ~A();
  typedef std::vector<C>::iterator iterator;
  std::vector<C> g() const;
  std::vector<C> getLargeVector() const;
  std::vector<C*> getObjPtrVec() const;
  int sumInLargeVector() const;
  iterator i();
  std::vector<C>::reverse_iterator r();
  std::list<C> l() const;
  std::vector<std::list<C*>> vl() const;

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(A, A);
};

#include "__zz_cib_internal/example-postdef.h"
