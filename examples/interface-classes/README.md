## Interface Class

In C++ there can be different definition of an interface class depending upon whom you ask. But, in context of CIB the interface class is defined as a class that has at least one virtual function and there is a way for library to call virtual function of a class implemented by it's client. Basically, if library can call a function implemented by client then the class to which that function belongs is an interface class.

This example is to demonstrate how CIB makes it possible to let client implement interface provided by library in an ABI stable way.

Let's consider the following example:
```c++
#pragma once

class Interface2;
class Interface3;

class Interface1
{
public:
  virtual Interface2* p() = 0;
  virtual Interface3& r() = 0;
  virtual ~Interface1() {}
};

class Interface2
{
public:
  virtual int f() = 0;
  virtual ~Interface2() {}
};

class Interface3
{
public:
  virtual int g() = 0;
  virtual ~Interface3() {}
};

class A
{
public:
  A();
  int SetInterface(Interface1* pInterface1) const
  {
    return pInterface1->p()->f() + pInterface1->r().g();
  }
};

```

This example is to capture the full complexity that can happen with interface classes.
`A::SetInterface()` when called by client will receive the object defined by client that implements `Interface1`.
When library calls virtual function of this object then client defined function should be called. And that should happen in ABI compatible and stable way. In this example library makes multiple polymorphic calls. I have done it this way because this is also automated test of CIB and it tests all scenario.

Let's see what the client code is:
```c++
#include "example.h"

#include <catch/catch.hpp>

class Implement2 : public Interface2
{
public:
  int f() override
  {
    return 5;
  }
};

class Implement3 : public Interface3
{
public:
  int g() override
  {
    return 50;
  }
};

class Implement1 : public Interface1
{
public:
  Interface2* p()
  {
    return &x;
  }
  Interface3& r()
  {
    return y;
  }

private:
  Implement2 x;
  Implement3 y;
};

TEST_CASE("Interface detection")
{
  A a;
  Implement1 i;
  CHECK(a.SetInterface(&i) == 55);
}

```

So, basically client defines it's own classes and pass that to library. Since library makes functions calls on client implemented classes client here knows what exacytly `A::SetInterface()` should return and so it sets that expectation in the test.

**TODO**: Add details.

Please have a look at glue code to see how this is done. I will add more details later.

**Next example demonstrates ABI stability when virtual table of interface is disrupted.**

