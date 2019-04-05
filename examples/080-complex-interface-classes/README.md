## Interface Detection

For interface like classes CIB has to generate special glue code. So, it is important for CIB to correctly detect classes defined in library headers as interface classes. In example "simple-interface-class' it was pretty easy for CIB to detect `class Interface` is an interface like class. _Please see what exactly is an interface class as per CIB, in previous example_.

In this example we cover some more cases to test that CIB correctly detects interface like classes in more complex cases.

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

If we look closer then we realize that `Interface1`, `Interface2`, and `Interface3` are all interface like classes because when Library makes a call on their methods then it is possible that the implementation provided by client gets invoked. As you may notice that it is not very straight forward to detect it and so this example ensures that CIB detects them correctly.

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

Client code ensures that correct behavior must be provided by library when CIB generates glue code.

