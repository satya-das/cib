#pragma  once
#include <functional>

#include "__zz_cib_internal/example-predef.h"

class C
{
public:
  C(C&& rhs);
public:
  C(const C& );
  C(int x);
  virtual ~C();
  virtual int value() const;

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(C, C);
};

// useful link:
// https://stackoverflow.com/questions/9044866/how-to-get-the-number-of-arguments-of-stdfunction
class A
{
public:
  A(A&& rhs);
public:
  A(const A& );
  ~A();
  A();
  int f(std::function<int()> callback) const;
  int g(const std::function<int()>& callback) const;
  int h(std::function<int(C)> callback) const;

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(A, A);
};

#include "__zz_cib_internal/example-postdef.h"
