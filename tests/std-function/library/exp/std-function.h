#pragma  once
#include <functional>

#include "__zz_cib_internal/std-function-predef.h"

class A
{
public:
  A(A&& rhs);
public:
  A(const A&);
  A(int x);
  ~A();
  int f() const;

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(A, A);
};

class B
{
public:
  B(B&& rhs);
public:
  B(const B&);
  ~B();
  B(int x);
  int f() const;

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(B, B);
};

class C
{
public:
  C(C&& rhs);
public:
  C(const C&);
  ~C();
  C(int x);
  int f() const;

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(C, C);
};

using TestCallback = std::function<A(B, C)>;
class T
{
public:
  T(T&& rhs);
public:
  T(const T&);
  ~T();
  T();
  int passStdFunctionByValue(TestCallback callback);
  int passStdFunctionByRValueRef(TestCallback&& callback);
  void passStdFunctionByRef(TestCallback& callback);
  void passStdFunctionByPtr(TestCallback* callback);
  int invokeSavedCallbackPassedByValue() const;
  int invokeSavedCallbackPassedByRValueRef() const;
  TestCallback getCallback() const;

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(T, T);
};

// class I
// {
// public:
//   virtual int passStdFunctionByValue(TestCallback callback) const = 0;
//   virtual int passStdFunctionByValue2(TestCallback&& callback) const = 0;
// };
#include "__zz_cib_internal/std-function-postdef.h"
