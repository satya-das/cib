## Example - Virtual Function

In this example we will see what CIB does with virtual functions and how runtime polymorphism works across component boundary. Consider the following example:

```c++
#pragma once

//! Example to see what cib does for classes with virtual methods.
class A
{
public:
  A();
  //! This is to know what cib does with virtual functions.
  virtual int VirtFunc() { return 1; }
  virtual ~A() {}
};

class B : public A
{
public:
  B();
  int VirtFunc() override { return 15; }

  static B* Create() { return new B; }
};

```

This example defines 2 classes, `class A` has a virtual method. `class B` inherits from `class A` and overrides the virtual method. We will see how runtime polymorphism works across the component boundary.

Let's now run CIB:

**Running cib**

```sh
cib -i pub/ -o exp/ -b cib/ -m Example
```

Below is what client of library can expect. It is trivial and there is no surprise but it is being done in **ABI compatible and stable** way.

```c++
#include "example.h"

#include <catch/catch.hpp>

void PerformTest(A* pA)
{
  CHECK(pA->VirtFunc() == 15);          // Compiler generated instruction will effectively call `pA->B::VirtFunc()`
  CHECK(pA->A::VirtFunc() == 1);        // A regular call without use of virtual table.
}

TEST_CASE("ABI stable virtual function call across component boundary")
{
  // Test for object created by client on heap
  auto* pB1 = new B();
  PerformTest(pB1);
  delete pB1;
  // Test for object created by library
  auto* pB2 = B::Create();
  PerformTest(pB2);
  delete pB2;
  // Test for object created on stack
  B b;
  PerformTest(&b);
}

```

I will spare you from showing the CIB generated code, you can surely see the code yourself if you want. Only thing I want to add for this example is that the glue code generation is identical as previous example. Glue code doesn't differentiate if the function is virtual (well, largely if we ignore some subtlety).

We see that runtime polymorphism works across component bounary. I hope you paid attention to the comment in above code: **// Compiler generated instruction will effectively call `pA->B::VirtFunc()`**.
The instruction generated for client-code takes the decision which virtual function needs to be called. Once the function of respective class is called then only MethodTable comes in play and makes the cross component call. In that ways the virtual table of one component isn't used by another component. Both components have virtual tables of their own. **This is the crux of ABI compatibility: don't share internals with other components.**

### Things to note about MethodTable
1. MethodTable is NOT replacement of virtual table.
2. MethodTable is just a mechanism to make cross commponent calls.
3. MethodTable does NOT inherit.

In making runtime polymorphism work we do need virtual table, MethodTable only ensures that cross component function call happens in ABI stable and compiler independent way. Another very immprotant point is that MethodTable does not inherit. MethodTable of a class is independent of MethodTable of any of it's parent class. That's way we ensure stability, otherwise MethodTable will suffer from same instability issue of virtual table.

That's it about this example. We will see more detail and power of CIB in following examples.

