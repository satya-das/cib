#pragma  once

#include "__zz_cib_internal/example-predef.h"

using Opaque = class Dummy;
struct Pod
{
  int i;
  double d;
  Opaque* pObj;
};

class C
{
};

struct NonPod1
{
public:
  NonPod1(NonPod1&& rhs);
public:
  NonPod1();
  NonPod1(const NonPod1&);
  ~NonPod1();

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(NonPod1, NonPod1);
};

struct NonPod2
{
public:
  NonPod2(NonPod2&& rhs);
public:
  NonPod2();
  NonPod2(const NonPod2&);
  ~NonPod2();

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(NonPod2, NonPod2);
};

struct NonPod3
{
public:
  NonPod3(NonPod3&& rhs);
public:
  NonPod3();
  NonPod3(const NonPod3&);
  ~NonPod3();

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(NonPod3, NonPod3);
};

class A
{
public:
  A(A&& rhs);
public:
  A(const A&);
  ~A();
  A();
  void setPod(Pod& p);
  void setPod(Pod* p);
  void setNonPod1(NonPod1& n);
  void setNonPod2(NonPod2& n);
  void setNonPod3(NonPod3& n);

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(A, A);
};

#include "__zz_cib_internal/example-postdef.h"
