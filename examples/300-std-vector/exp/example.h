#pragma  once
#include "C.h"
#include <assert.h>
#include <vector>

#include "__zz_cib_internal/example-predef.h"

class A
{
public:
  A(A&& rhs);
public:
  A(const A& );
  A();
  ~A();
  //  typedef PdfObject                                       value_type;
  // typedef value_type &                                    reference;
  // typedef const value_type &                              const_reference;
  typedef std::vector<C>::iterator iterator2;
  // std::vector<int> f() const {
  //   return {2, 3, 9};
  // }
  std::vector<C> g() const;
  std::vector<C> getLargeVector() const;
  int sumInLargeVector() const;
  iterator2 i();
  std::vector<C>::reverse_iterator r();

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(A, A);
};

#include "__zz_cib_internal/example-postdef.h"
