## Interface Class

In C++ there can be different definition of an interface class depending upon whom you ask. But, in context of CIB the interface class is defined as a class that has at least one virtual function and there is a way for library to call virtual function of a class implemented by it's client. Basically, if library can call a function implemented by client then the class to which that function belongs is an interface class.

This example is to demonstrate how CIB makes it possible to let client implement interface provided by library in an ABI stable way.

Let's consider the following example:
```c++
#pragma once

class Interface
{
public:
  virtual int Func() = 0;
  virtual ~Interface() {}
private:
  virtual int PrivateVirtualFunc() = 0;

  friend class A;
};

class A
{
public:
  A();
  int UseInterface(Interface* pInterface) const
  {
    return pInterface->Func() + pInterface->PrivateVirtualFunc();
  }
};

```

This example is just to demonstrate how CIB architecture allows library to call functions implemented by client in an ABI compatible and stable way.
When `A::UseInterface()` is called it receives an object defined by client that implements `Interface`.
When library calls virtual function of this object then function defined by client should be called. And that should happen in ABI compatible and stable way.

Let's see what the client code is:
```c++
#include "example.h"

#include <catch/catch.hpp>

class Implement : public Interface
{
public:
  int Func() override { return 167; }
private:
  int PrivateVirtualFunc() override { return 168; }
};

TEST_CASE("Interface callback: library should be able to call client implemented function")
{
  A a;
  Implement i;
  CHECK(a.UseInterface(&i) == 167+168);
}


```

So, basically client defines it's own class and passees a pointer of that to library. Since library makes functions calls on client implemented class, client here knows what exactly `A::UseInterface()` should return and so it sets that expectation in the test.

**TODO**: Add details.

Please have a look at glue code to see how this is done. I will add more details later.

**Next example demonstrates ABI stability when virtual table of interface is disrupted.**

